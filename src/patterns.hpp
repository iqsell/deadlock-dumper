#pragma once

#include <cstdint>
#include <optional>
#include <span>
#include <string_view>
#include <vector>

// ──────────────────────────── Pattern scanner ────────────────────────────
//
// Patterns use IDA-style hex strings with "?" as wildcards.
// Example: "48 8B 05 ? ? ? ? 48 89 42"
//
// After a match, resolve_rip() converts the RIP-relative displacement
// found at a given offset within the match into an absolute RVA.

struct PatternMatch {
    uint32_t rva;    // RVA of the first byte of the match
    uint32_t count;  // total bytes matched
};

// Find the first match of `pattern` in `data`.
// Returns the RVA (offset into data/module) of the match start.
std::optional<uint32_t> find_pattern(std::span<const uint8_t> data,
                                     std::string_view pattern);

// RIP-relative resolution: reads a 32-bit displacement at (match_rva + disp_offset)
// and returns the target RVA.
//   match_rva   – RVA of the first byte of the matched instruction
//   disp_offset – byte offset from match start to the displacement field
//   instr_size  – total length of the instruction (needed to compute RIP = match_rva + instr_size)
std::optional<uint32_t> resolve_rip(std::span<const uint8_t> data,
                                    uint32_t match_rva,
                                    uint32_t disp_offset,
                                    uint32_t instr_size);
