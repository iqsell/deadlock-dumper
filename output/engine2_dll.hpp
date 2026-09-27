// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: engine2.dll  classes=4  enums=0
    namespace engine2_dll {

        // Parent: None
        // Fields: 3
        namespace CEntityInstance {
            constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
            constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
        }

        // Parent: None
        // Fields: 0
        namespace CEntityComponent {
        }

        // Parent: CEntityComponent
        // Fields: 1
        namespace CScriptComponent {
            constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 12
        namespace CEntityIdentity {
            constexpr std::ptrdiff_t m_nameStringableIndex = 0x14; // int32
            constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_flags = 0x30; // uint32
            constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
            constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3c; // uint32
            constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
            constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
            constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
            constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
            constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
        }

    } // namespace engine2_dll
} // namespace schemas
} // namespace deadlock_dumper
