#pragma once

#include <Windows.h>
#include <TlHelp32.h>
#include <cstdint>
#include <string>
#include <vector>
#include <optional>
#include <stdexcept>

struct ModuleInfo {
    std::string name;
    uint64_t    base;
    uint32_t    size;
};

class Memory {
public:
    explicit Memory(const std::string& process_name);
    ~Memory();

    Memory(const Memory&) = delete;
    Memory& operator=(const Memory&) = delete;

    // Read arbitrary bytes from process memory.
    bool read_raw(uint64_t address, void* buffer, size_t size) const;

    // Typed read helpers.
    template <typename T>
    std::optional<T> read(uint64_t address) const {
        T value{};
        if (!read_raw(address, &value, sizeof(T)))
            return std::nullopt;
        return value;
    }

    // Read a null-terminated string (up to max_len bytes).
    std::optional<std::string> read_string(uint64_t address, size_t max_len = 256) const;

    // Read the entire module image into a buffer.
    std::optional<std::vector<uint8_t>> read_module(const ModuleInfo& mod) const;

    // Enumerate loaded modules of the target process.
    std::vector<ModuleInfo> module_list() const;

    // Find a module by name (case-insensitive).
    std::optional<ModuleInfo> module_by_name(const std::string& name) const;

    HANDLE handle() const { return m_handle; }
    DWORD  pid()    const { return m_pid; }

private:
    HANDLE m_handle = INVALID_HANDLE_VALUE;
    DWORD  m_pid    = 0;

    static DWORD find_pid(const std::string& name);
};
