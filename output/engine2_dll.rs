// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod engine2_dll {

    // Parent: None
    pub mod CEntityInstance {
        pub const m_iszPrivateVScripts: usize = 0x8;
        pub const m_pEntity: usize = 0x10;
        pub const m_CScriptComponent: usize = 0x28;
    }

    // Parent: None
    pub mod CEntityComponent {
    }

    // Parent: CEntityComponent
    pub mod CScriptComponent {
        pub const m_scriptClassName: usize = 0x30;
    }

    // Parent: None
    pub mod CEntityIdentity {
        pub const m_nameStringableIndex: usize = 0x14;
        pub const m_name: usize = 0x18;
        pub const m_designerName: usize = 0x20;
        pub const m_flags: usize = 0x30;
        pub const m_worldGroupId: usize = 0x38;
        pub const m_fDataObjectTypes: usize = 0x3c;
        pub const m_PathIndex: usize = 0x40;
        pub const m_pAttributes: usize = 0x48;
        pub const m_pPrev: usize = 0x50;
        pub const m_pNext: usize = 0x58;
        pub const m_pPrevByClass: usize = 0x60;
        pub const m_pNextByClass: usize = 0x68;
    }

}
