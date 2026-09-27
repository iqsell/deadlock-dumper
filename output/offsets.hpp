// Generated using deadlock-dumper
// 2026-09-27T15:22:12Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace offsets {

    // Module: client.dll
    namespace client_dll {
        constexpr std::ptrdiff_t dwEntityList = 0x32c0130;
        constexpr std::ptrdiff_t dwGameEntitySystem = 0x3925518;
        constexpr std::ptrdiff_t dwGameRules = 0x3801750;
        constexpr std::ptrdiff_t dwGlobalVars = 0x2f0e480;
        constexpr std::ptrdiff_t dwViewMatrix = 0x2dca870;
    }

    // Module: engine2.dll
    namespace engine2_dll {
        constexpr std::ptrdiff_t dwBuildNumber = 0x61c290;
        constexpr std::ptrdiff_t dwNetworkGameClient = 0x9159c0;
        constexpr std::ptrdiff_t dwWindowHeight = 0x919d64;
        constexpr std::ptrdiff_t dwWindowWidth = 0x919d60;
    }

    // Module: inputsystem.dll
    namespace inputsystem_dll {
        constexpr std::ptrdiff_t dwInputSystem = 0x42b80;
    }

} // namespace offsets
} // namespace deadlock_dumper
