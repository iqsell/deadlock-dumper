#include "patterns.hpp"

#include <charconv>
#include <cstring>
#include <sstream>
#include <vector>

// ── Internal helpers ──────────────────────────────────────────────────────

struct Byte {
    uint8_t value;
    bool    wildcard;
};

static std::vector<Byte> parse_pattern(std::string_view pattern) {
    std::vector<Byte> result;

    size_t i = 0;
    while (i < pattern.size()) {
        while (i < pattern.size() && pattern[i] == ' ')
            ++i;

        if (i >= pattern.size())
            break;

        if (pattern[i] == '?') {
            result.push_back({0, true});
            ++i;
            if (i < pattern.size() && pattern[i] == '?')
                ++i; // consume second '?'
        } else {
            uint8_t byte_val = 0;
            auto end = i + 2 <= pattern.size() ? i + 2 : pattern.size();
            auto [ptr, ec] = std::from_chars(pattern.data() + i, pattern.data() + end, byte_val, 16);
            result.push_back({byte_val, false});
            i += static_cast<size_t>(ptr - (pattern.data() + i));
        }
    }

    return result;
}

// ── Public API ────────────────────────────────────────────────────────────

std::optional<uint32_t> find_pattern(std::span<const uint8_t> data,
                                     std::string_view pattern) {
    const auto pat = parse_pattern(pattern);
    if (pat.empty())
        return std::nullopt;

    const size_t data_size = data.size();
    const size_t pat_size  = pat.size();

    for (size_t i = 0; i + pat_size <= data_size; ++i) {
        bool match = true;

        for (size_t j = 0; j < pat_size; ++j) {
            if (!pat[j].wildcard && data[i + j] != pat[j].value) {
                match = false;
                break;
            }
        }

        if (match)
            return static_cast<uint32_t>(i);
    }

    return std::nullopt;
}

std::optional<uint32_t> resolve_rip(std::span<const uint8_t> data,
                                    uint32_t match_rva,
                                    uint32_t disp_offset,
                                    uint32_t instr_size) {
    const uint32_t disp_rva = match_rva + disp_offset;

    if (disp_rva + 4 > static_cast<uint32_t>(data.size()))
        return std::nullopt;

    int32_t rel32 = 0;
    std::memcpy(&rel32, data.data() + disp_rva, sizeof(rel32));

    const uint32_t rip    = match_rva + instr_size;
    const uint32_t target = static_cast<uint32_t>(static_cast<int64_t>(rip) + rel32);

    return target;
}
