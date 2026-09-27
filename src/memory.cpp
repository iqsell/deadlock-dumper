#include "memory.hpp"

#include <algorithm>
#include <cctype>
#include <stdexcept>
#include <psapi.h>

static std::string to_lower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return s;
}

Memory::Memory(const std::string& process_name) {
    m_pid = find_pid(process_name);
    if (m_pid == 0)
        throw std::runtime_error("process not found: " + process_name);

    m_handle = OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, FALSE, m_pid);
    if (m_handle == INVALID_HANDLE_VALUE || m_handle == nullptr)
        throw std::runtime_error("OpenProcess failed (error " +
                                 std::to_string(GetLastError()) + ")");
}

Memory::~Memory() {
    if (m_handle && m_handle != INVALID_HANDLE_VALUE)
        CloseHandle(m_handle);
}

bool Memory::read_raw(uint64_t address, void* buffer, size_t size) const {
    SIZE_T bytes_read = 0;
    return ReadProcessMemory(m_handle,
                             reinterpret_cast<LPCVOID>(address),
                             buffer,
                             size,
                             &bytes_read) && bytes_read == size;
}

std::optional<std::string> Memory::read_string(uint64_t address, size_t max_len) const {
    std::string result(max_len, '\0');
    if (!read_raw(address, result.data(), max_len))
        return std::nullopt;

    const auto null_pos = result.find('\0');
    if (null_pos != std::string::npos)
        result.resize(null_pos);

    return result;
}

std::optional<std::vector<uint8_t>> Memory::read_module(const ModuleInfo& mod) const {
    std::vector<uint8_t> buf(mod.size);
    if (!read_raw(mod.base, buf.data(), mod.size))
        return std::nullopt;
    return buf;
}

std::vector<ModuleInfo> Memory::module_list() const {
    std::vector<ModuleInfo> result;

    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, m_pid);
    if (snap == INVALID_HANDLE_VALUE)
        return result;

    MODULEENTRY32W me{};
    me.dwSize = sizeof(me);

    if (Module32FirstW(snap, &me)) {
        do {
            char name_mb[MAX_PATH]{};
            WideCharToMultiByte(CP_UTF8, 0, me.szModule, -1, name_mb, MAX_PATH, nullptr, nullptr);

            result.push_back({
                .name = name_mb,
                .base = reinterpret_cast<uint64_t>(me.modBaseAddr),
                .size = me.modBaseSize,
            });
        } while (Module32NextW(snap, &me));
    }

    CloseHandle(snap);
    return result;
}

std::optional<ModuleInfo> Memory::module_by_name(const std::string& name) const {
    const std::string lower_name = to_lower(name);

    for (const auto& mod : module_list()) {
        if (to_lower(mod.name) == lower_name)
            return mod;
    }

    return std::nullopt;
}

DWORD Memory::find_pid(const std::string& name) {
    const std::string lower_name = to_lower(name);

    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snap == INVALID_HANDLE_VALUE)
        return 0;

    PROCESSENTRY32W pe{};
    pe.dwSize = sizeof(pe);

    DWORD pid = 0;
    if (Process32FirstW(snap, &pe)) {
        do {
            char name_mb[MAX_PATH]{};
            WideCharToMultiByte(CP_UTF8, 0, pe.szExeFile, -1, name_mb, MAX_PATH, nullptr, nullptr);

            if (to_lower(name_mb) == lower_name) {
                pid = pe.th32ProcessID;
                break;
            }
        } while (Process32NextW(snap, &pe));
    }

    CloseHandle(snap);
    return pid;
}
