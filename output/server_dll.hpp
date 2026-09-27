// Generated using deadlock-dumper
// 2026-09-27T10:33:06Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: server.dll  classes=3292  enums=14
    namespace server_dll {

        // Alignment: 4  Members: 4
        enum class CLogicBranchListLogicBranchListenerLastState_t : uint32_t {
            LOGIC_BRANCH_LISTENER_NOT_INIT = 0x0,
            LOGIC_BRANCH_LISTENER_ALL_TRUE = 0x1,
            LOGIC_BRANCH_LISTENER_ALL_FALSE = 0x2,
            LOGIC_BRANCH_LISTENER_MIXED = 0x3,
        };

        // Alignment: 4  Members: 2
        enum class CAI_GoalEntitySearchType_t : uint32_t {
            ST_ENTNAME = 0x0,
            ST_CLASSNAME = 0x1,
        };

        // Alignment: 4  Members: 3
        enum class CFuncMoverMove_t : uint32_t {
            MOVE_LOOP = 0x0,
            MOVE_OSCILLATE = 0x1,
            MOVE_STOP_AT_END = 0x2,
        };

        // Alignment: 4  Members: 6
        enum class CFuncRotatorRotate_t : uint32_t {
            ROTATE_LOOP = 0x0,
            ROTATE_OSCILLATE = 0x1,
            ROTATE_STOP_AT_END = 0x2,
            ROTATE_LOOK_AT_TARGET = 0x3,
            ROTATE_LOOK_AT_TARGET_ONLY_YAW = 0x4,
            ROTATE_RETURN_TO_INITIAL_ORIENTATION = 0x5,
        };

        // Alignment: 4  Members: 2
        enum class PulseBestOutflowRules_t : uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1,
        };

        // Alignment: 4  Members: 2
        enum class CPhysicsPropCrateType_t : uint32_t {
            CRATE_SPECIFIC_ITEM = 0x0,
            CRATE_TYPE_COUNT = 0x1,
        };

        // Alignment: 4  Members: 4
        enum class PulseCursorCancelPriority_t : uint32_t {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3,
        };

        // Alignment: 4  Members: 3
        enum class CBaseNPCMakerThreeStateDist_t : uint32_t {
            TS_DIST_NEAREST = 0x0,
            TS_DIST_FARTHEST = 0x1,
            TS_DIST_DONT_CARE = 0x2,
        };

        // Alignment: 4  Members: 2
        enum class PulseMethodCallMode_t : uint32_t {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1,
        };

        // Alignment: 4  Members: 2
        enum class CFuncMoverFollowConstraint_t : uint32_t {
            FOLLOW_CONSTRAINT_DISTANCE = 0x0,
            FOLLOW_CONSTRAINT_SPRING = 0x1,
        };

        // Alignment: 4  Members: 3
        enum class CFuncMoverFollowEntityDirection_t : uint32_t {
            FOLLOW_ENTITY_BIDIRECTIONAL = 0x0,
            FOLLOW_ENTITY_FORWARD = 0x1,
            FOLLOW_ENTITY_REVERSE = 0x2,
        };

        // Alignment: 4  Members: 4
        enum class CFuncMoverTransitionToPathNodeAction_t : uint32_t {
            TRANSITION_TO_PATH_NODE_ACTION_NONE = 0x0,
            TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD = 0x1,
            TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE = 0x2,
            TRANSITION_TO_PATH_NODE_TRANSITIONING = 0x3,
        };

        // Alignment: 4  Members: 7
        enum class CBaseNPCMakerVisibilityCriterion_t : uint32_t {
            VC_YES_LOS = 0x0,
            VC_NO_LOS = 0x1,
            VC_DONT_CARE = 0x2,
            VC_YES_IN_VIEWCONE = 0x3,
            VC_NO_IN_VIEWCONE = 0x4,
            VC_YES_LOS_VIEWCONE = 0x5,
            VC_NO_LOS_VIEWCONE = 0x6,
        };

        // Alignment: 4  Members: 9
        enum class CFuncMoverOrientationUpdate_t : uint32_t {
            ORIENTATION_FORWARD_PATH = 0x0,
            ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH = 0x1,
            ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT = 0x2,
            ORIENTATION_MATCH_CONTROL_POINT = 0x3,
            ORIENTATION_FIXED = 0x4,
            ORIENTATION_FACE_PLAYER = 0x5,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION = 0x6,
            ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT = 0x7,
            ORIENTATION_FACE_ENTITY = 0x8,
        };

        // Parent: m_BackgroundMaterialName
        // Fields: 4
        namespace CPointWorldText {
            constexpr std::ptrdiff_t  = 0x90055860; // CModelPointEntity
            constexpr std::ptrdiff_t `Vê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90055640; // XQw˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9d2e250; // 
        }

        // Parent: m_flChannelTime
        // Fields: 3
        namespace CCitadel_Ability_VampireBat_BatSwarm {
            constexpr std::ptrdiff_t  = 0x908bf2a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_DoubleDagger = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Operative_Revelation_Caster_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90860698; // CCitadelModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f68b9c8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Magician_ShadowClone {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t pa˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ffa5e80; // `Jw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Cadence_Anthem {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_PassiveBeefy = 0x1290; // 
            constexpr std::ptrdiff_t pR[è˝ = 0x8ff823b0; // ∞éÈè˝
        }

        // Parent: 0¥Èè˝
        // Fields: 3
        namespace CCitadel_Modifier_Viper_SlideBuffVData {
            constexpr std::ptrdiff_t  = 0x9091c688; // CCitadelModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f70f730; // 
            constexpr std::ptrdiff_t  = 0x9043a2d0; // ê
        }

        // Parent: None
        // Fields: 0
        namespace CIcePathShardGenerator {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VoidSphere {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSkullVData = 0x20b8; // 
            constexpr std::ptrdiff_t êIiè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_NullificationAuraVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InFountain {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3c0498; // CCitadel_Modifier_InFountain
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelBaseMusicOBB {
            constexpr std::ptrdiff_t  = 0x8f4266c8; // CCitadelSoundStackFieldOBB
            constexpr std::ptrdiff_t CCitadelRegenComponent = 0x8f40f5a8; // 
            constexpr std::ptrdiff_t m_CCitadelRegenComponent = 0xa90; // CCitadelRegenComponent
        }

        // Parent: m_bInteractive
        // Fields: 4
        namespace CCitadel_Pickup {
            constexpr std::ptrdiff_t  = 0x8fec8030; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f423b20; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d5e7210; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierAura_CylinderVData {
            constexpr std::ptrdiff_t  = 0x9038b8b0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d4329f0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_GoldenIdolVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_BaseHeldItemVData
            constexpr std::ptrdiff_t citadel_item_pickup = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAmbientGeneric {
            constexpr std::ptrdiff_t  = 0x40800000; // CPointEntity
            constexpr std::ptrdiff_t m_bDisabled = 0x4a0; // bool
            constexpr std::ptrdiff_t m_radius = 0x4a4; // float32
        }

        // Parent: None
        // Fields: 3
        namespace CEnvEntityMaker {
            constexpr std::ptrdiff_t  = 0x900150c0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseGraphInstance_GameBlackboard {
            constexpr std::ptrdiff_t  = 0x0; // CPulseGraphInstance_ServerEntity
            constexpr std::ptrdiff_t CPulseGraphInstance_GameBlackboard = 0x1c8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPointEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CPointEntity = 0x4a0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Unicorn_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8e26f0b0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t `Jw˛ = 0x8f70fdf0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f70fe68; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fortuna_Ability01 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_PainAura = 0x1180; // 
            constexpr std::ptrdiff_t ÿtbè˝ = 0x8ff94d18; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Perched_Predator = 0x11f8; // 
        }

        // Parent: m_ExplodeParticle
        // Fields: 3
        namespace CModifier_Thumper_BulletWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f70f9e0; // 
        }

        // Parent: m_DebuffModifier
        // Fields: 3
        namespace CCitadel_Modifier_SalvoBulletVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t `Î¯è˝ = 0x0; // 
            constexpr std::ptrdiff_t @|cè˝ = 0x90736c98; // CBaseEntity
        }

        // Parent: m_SpinEndTime
        // Fields: 3
        namespace CCitadel_Ability_Burrow {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t †2˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9062a838; // ®Ow˛
        }

        // Parent: m_eTelepunchState
        // Fields: 3
        namespace CCitadel_Ability_Viscous_Telepunch {
            constexpr std::ptrdiff_t  = 0x8e287740; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_SpiderExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_JarExplodeParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Backstabber_Watcher_VData {
            constexpr std::ptrdiff_t  = 0x80000112; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
            constexpr std::ptrdiff_t ¿$Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_EtherealBullets_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Modifier_GuardianWard_VData = 0x910; // 
            constexpr std::ptrdiff_t 0™.è˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletResistReductionStack {
            constexpr std::ptrdiff_t  = 0x8f3d3b90; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3b1400; // CCitadel_Modifier_PreventHealing
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MidBossAggroEnemy {
            constexpr std::ptrdiff_t  = 0x8f3bb3d0; // CCitadelModifier
            constexpr std::ptrdiff_t Hide the background on the attributes box? Checking this adds class RemoveAttributesBackground to the section = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Pickup_Currency_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup_VData
            constexpr std::ptrdiff_t  = 0x904c1f80; // CCitadel_Pickup_VData
        }

        // Parent: None
        // Fields: 5
        namespace CFilterEnemy {
            constexpr std::ptrdiff_t  = 0x8fff2a90; // CBaseFilter
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e6966f0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_SingleTargetStun {
            constexpr std::ptrdiff_t  = 0x8d1ccd10; // CCitadel_Item
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f30eb90; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_ShockTarget {
            constexpr std::ptrdiff_t  = 0x8ff8b100; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Cadence_GrandFinale {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5adf40; // CModifier_Drifter_StalkersMark_PostTeleport
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Gunslinger_DemonMark {
            constexpr std::ptrdiff_t  = 0x90749390; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Killing_Blow_Glow {
            constexpr std::ptrdiff_t  = 0x90829420; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Rutger_RocketLauncher = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
            constexpr std::ptrdiff_t  = 0x8ffc2a40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_TeleportStartParticle
        // Fields: 3
        namespace CCitadel_Modifier_VoidSphereVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ®iè˝ = 0x0; // 
            constexpr std::ptrdiff_t priest_beartrap = 0x0; // 
        }

        // Parent: Modifiers
        // Fields: 3
        namespace CItemHauntingScreamVData {
            constexpr std::ptrdiff_t  = 0x902f2328; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f2fbb70; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // òª/è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FocusLens_Damage_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ®Ê/è˝ = 0x8f2fe118; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe70a30; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_DivinersKevlar_VData {
            constexpr std::ptrdiff_t  = 0x8000004a; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3670a0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FullSpectrumVData {
            constexpr std::ptrdiff_t  = 0x8f2edc38; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // P‹.è˝
        }

        // Parent: tools/images/pulse_editor/cursor_tag.png
        // Fields: 3
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t  = 0x900da630; // CPulseCell_WaitForCursorsWithTagBase
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f1660f0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CFuncTrackAuto {
            constexpr std::ptrdiff_t  = 0x9007ddb8; // CFuncTrackChange
            constexpr std::ptrdiff_t CTriggerLerpObject = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8df390; // CFuncTrackAuto
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8ddcf0; // 
            constexpr std::ptrdiff_t  = 0x8f8df3f0; // CScriptTriggerOnce
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_BulletArmorReductionAura {
            constexpr std::ptrdiff_t  = 0x8d1fd450; // CCitadel_Item
            constexpr std::ptrdiff_t †áËè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fe88390; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9d32810; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_VolumetricEventSensor {
            constexpr std::ptrdiff_t  = 0x8febf818; // CPointEntity
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CScriptedSequence {
            constexpr std::ptrdiff_t  = 0x909b9d58; // CBaseEntity
            constexpr std::ptrdiff_t páê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Trapper_PoisonJar {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_SettingSun_VData = 0x19f8; // 
            constexpr std::ptrdiff_t ÿ˛rè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Gunslinger_DemonMarkVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_demonmark = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff97d78; // CCitadel_Gunslinger_DemonMark
        }

        // Parent: m_AuraParticle
        // Fields: 4
        namespace CCitadel_Modifier_StickyBombOnGroundVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StickyBombAttachedVData
            constexpr std::ptrdiff_t  = 0x8f5a0080; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff78010; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_CloakingDevice_Active_Ambush_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: m_BuffModifier
        // Fields: 3
        namespace CCitadel_Modifier_SpiritSnatch_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367310; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CTier3BossAbility {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t m_LaserLeft = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_LaserMid = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_LaserRight = 0x1838; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelLocalPlayerRankedBadgeProp {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t EItemSlotTypes_t = 0x10101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_BaseNPCAPI {
        }

        // Parent: None
        // Fields: 5
        namespace CFogTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CFogTrigger = 0x948; // 
            constexpr std::ptrdiff_t TKRè˝ = 0x8ff1fbd8; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFogTrigger
            constexpr std::ptrdiff_t m_EnvWindShared = 0x8f5233d8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerIcePathVolume {
            constexpr std::ptrdiff_t  = 0x9074ed00; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadel_Ability_Tenacity = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CTriggerIcePathVolume = 0x8e0; // 
            constexpr std::ptrdiff_t  = 0x8ff96a28; // p2Òè˝
        }

        // Parent: None
        // Fields: 4
        namespace CDoormanBombProjectile {
            constexpr std::ptrdiff_t  = 0x8de86610; // CCitadelProjectile
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5b3758; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5b3b08; // 
            constexpr std::ptrdiff_t CCitadel_Bounce_Pad = 0xc30; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Projectile_BatSwarmExtraProjectile {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Projectile_BatSwarmProjectile
            constexpr std::ptrdiff_t HÉÏ(ã˛ëeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t Æ,è˝ = 0x8f713770; // 
            constexpr std::ptrdiff_t  = 0x8f2cd848; // 8n,è˝
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f713798; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierSleepBombAuraVData {
            constexpr std::ptrdiff_t  = 0x9071fdf8; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t ability_flame_dash = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff8c608; // CCitadel_Ability_FlameDash
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_DustStorm {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f624398; // CCitadel_Modifier_PowerSurge
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_NPCAbility_Shield {
            constexpr std::ptrdiff_t  = 0x8fefdde0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoTeleportDestination {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CSpriteAlias_env_glow = 0x7f0; // 
            constexpr std::ptrdiff_t  = 0x90075198; // p‰Úè˝
        }

        // Parent: None
        // Fields: 3
        namespace CPointBroadcastClientCommand {
            constexpr std::ptrdiff_t  = 0x9001a268; // CPointEntity
            constexpr std::ptrdiff_t CDynamicLight = 0x0; // 
            constexpr std::ptrdiff_t  = 0x7074faf0; // 
        }

        // Parent: HÉÏ(ã∂i¨eHã%X
        // Fields: 2
        namespace CCitadel_Modifier_SwingLine_SwingingVData {
            constexpr std::ptrdiff_t  = 0x90801578; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0¿˙è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Trapper_WebWallVData {
            constexpr std::ptrdiff_t  = 0x8f71dbd0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Ë€qè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_Drifter_Rend_BulletLifesteal = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Burrow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantBranchWallVData = 0x18f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierLashFlogDebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // §bè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NullificationAuraAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_HeroGravity = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Passive_CloakVData {
            constexpr std::ptrdiff_t  = 0x80000135; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367710; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_PrismBlastVData {
            constexpr std::ptrdiff_t  = 0x902cb8c8; // CCitadel_Item_BubbleVData
            constexpr std::ptrdiff_t ∏˜1è˝ = 0x8f31f090; // 
            constexpr std::ptrdiff_t  = 0x9021a690; // 1è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier2Boss_AoEWave {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t CCitadel_Modifier_Succor_MoveVData = 0x770; // 
            constexpr std::ptrdiff_t ¯ä.è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_Succor_MoveVData
        }

        // Parent: None
        // Fields: 7
        namespace CCitadel_Announcer {
            constexpr std::ptrdiff_t  = 0x8f40e890; // CCitadel_Announcer_Base
            constexpr std::ptrdiff_t Minimum number of spots to sample looking for good positioning = 0x8f40e9c8; // 
            constexpr std::ptrdiff_t Percentage of the time to look for gold orbs to shoot = 0x8f40eab0; // 
            constexpr std::ptrdiff_t Guide bot talks about neutrals = 0x8f40eb70; // 
            constexpr std::ptrdiff_t CCitadel_Announcer = 0xbc0; // 
            constexpr std::ptrdiff_t  = 0x8fec6428; // ÄSÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Announcer
        }

        // Parent: None
        // Fields: 2
        namespace CPhysicsSpring {
            constexpr std::ptrdiff_t  = 0x8f8a92b0; // CBaseEntity
            constexpr std::ptrdiff_t  = 0x8f8a9388; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GoatGoingUp {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ∞ﬁ˘è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Mirage_FireBeetles_VData {
            constexpr std::ptrdiff_t  = 0x907d5518; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityGangActivityVData {
            constexpr std::ptrdiff_t  = 0x8000085e; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ViperVenom {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_vecOrigin = 0x108; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMins = 0x114; // Vector
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SelfVacuum {
            constexpr std::ptrdiff_t  = 0x8ffad800; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Shivas_Bracelet_WatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t Ø.è˝ = 0x8f2ea798; // 
            constexpr std::ptrdiff_t  = 0x9021a690; // ¿ß.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Healbane_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Omnicharge_Pendant = 0x1078; // 
        }

        // Parent: m_flCaptureProgress
        // Fields: 1
        namespace CCitadelTriggerCapturePoint {
            constexpr std::ptrdiff_t  = 0x8f4cd398; // CBaseTrigger
        }

        // Parent: @_Ïè˝
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_WeaponEater {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadelModifierApexWatcherVData = 0x760; // 
            constexpr std::ptrdiff_t Ëä2è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadelModifierApexWatcherVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_KothTrooperBuff {
            constexpr std::ptrdiff_t  = 0x8fef7870; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HideoutIntroVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ™xÿ©6 = 0xa9d97178; // 
        }

        // Parent: »Pw˛
        // Fields: 2
        namespace CModifierVData_SetMoveType {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90961de8; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 5
        namespace CNodeEnt_InfoNodeHint {
            constexpr std::ptrdiff_t  = 0x0; // CNodeEnt
            constexpr std::ptrdiff_t CNodeEnt_InfoNodeHint = 0x4f8; // 
            constexpr std::ptrdiff_t  = 0x8fea70d8; // ‡qÍè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNodeEnt_InfoNodeHint
            constexpr std::ptrdiff_t None = 0x8f3ec3d8; // MPropertyFriendlyName
        }

        // Parent: None
        // Fields: 3
        namespace CEnvMuzzleFlash {
            constexpr std::ptrdiff_t  = 0x90015d30; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_iItemDefinitionIndex
        // Fields: 0
        namespace CEconItemAttribute {
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_ShadowMark_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Disruptive_Charge {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f62d028; // CCitadel_Modifier_Disruptive_Charge
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ShivDaggerVData {
            constexpr std::ptrdiff_t  = 0x8f698048; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // `Äiè˝
        }

        // Parent: m_flTransformStartTime
        // Fields: 3
        namespace CCitadel_Ability_Nano_CatForm {
            constexpr std::ptrdiff_t  = 0x8ff9ed70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_IceGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_HornetSnipeVData = 0x750; // 
            constexpr std::ptrdiff_t  = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_InfernalResilience_MeleeVData {
            constexpr std::ptrdiff_t  = 0x9065a2d8; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t ability_airheart_primary_weapon = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff7e470; // CCitadel_Ability_Airheart_PrimaryWeapon
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ApexCombat_Proc {
            constexpr std::ptrdiff_t  = 0x8fe6f520; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
            constexpr std::ptrdiff_t  = 0x8f315b38; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceProc_DebuffVData {
            constexpr std::ptrdiff_t  = 0x8f328360; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // xÉ2è˝
        }

        // Parent: m_PulseParticle
        // Fields: 1
        namespace CCitadel_Item_TechDamagePulseVData {
            constexpr std::ptrdiff_t  = 0x9030ad28; // CitadelItemVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_AoEWaveVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierProjectilePitchingLoopSoundThinker {
            constexpr std::ptrdiff_t  = 0x8fe986e0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CheckNearbyPlayerParry {
            constexpr std::ptrdiff_t  = 0x8f3bdfd0; // CCitadelModifier
            constexpr std::ptrdiff_t If it requires an ability upgrade, what ability property is required for to show? Empty if none = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TinyCharacter {
            constexpr std::ptrdiff_t  = 0x8fe96640; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_HealingSpiritScale {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 0
        namespace CBaseTriggerAPI {
        }

        // Parent: m_flFadeOutStart
        // Fields: 8
        namespace CNPC_Boss_Tier2 {
            constexpr std::ptrdiff_t  = 0x8ff0e1f0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dae2c00; // 
            constexpr std::ptrdiff_t `‚è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff0e090; // ®Ow˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9d3adf0; // 
            constexpr std::ptrdiff_t @VHÉÏ@HãÚÉ˘á˙ = 0x8f4ee6a8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelShopTunnelTrigger {
            constexpr std::ptrdiff_t  = 0x90426de0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelTeam = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f43dd30; // CCitadelShopTunnelTrigger
            constexpr std::ptrdiff_t  = 0x8fecec08; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncTrainControls {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CFuncTrainControls = 0x780; // 
            constexpr std::ptrdiff_t  = 0x90073e38; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Unicorn_PrismaticGuardVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9087b0a8; // CitadelAbilityVData
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90882a18; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_unicorn_radiantblast = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HookSelf {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Forge_MiniTurret_InnateModifier = 0x350; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IceGrenadeDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_AfterburnWatcherVData {
            constexpr std::ptrdiff_t  = 0x8000063c; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e0d37a0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CNPC_Neutral_Bug {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CNPC_Neutral_Bug = 0xab0; // 
            constexpr std::ptrdiff_t  = 0x8ff0dfc8; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Neutral_Bug
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_HideOutTargetSpawnerVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_1 = 0xf70; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fencer_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f625240; // CCitadel_Ability_SleepDagger
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: HÉÏ(ãÈìeHã%X
        // Fields: 2
        namespace CCitadel_Ability_ViperHookBladeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Modifier_ThrowSandDebuffVData {
            constexpr std::ptrdiff_t  = 0x90674638; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9062a220; // OZè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DeathTax {
            constexpr std::ptrdiff_t  = 0x8ff8e320; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x8f627570; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ElectricSlippersVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t upgrade_glass_cannon = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe6f4c0; // CCitadel_WeaponUpgrade_GlassCannon
            constexpr std::ptrdiff_t  = 0x8f2e2d80; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PredatorPrecision {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t Áè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90215548; // `Jw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicCarpet_Summon {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t  = 0x8f301e30; // CCitadel_Modifier_DragEnemyVData
            constexpr std::ptrdiff_t  = 0x8fe81d80; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTonemapController2Alias_env_tonemap_controller2 {
            constexpr std::ptrdiff_t  = 0x0; // CTonemapController2
            constexpr std::ptrdiff_t CTonemapController2Alias_env_tonemap_controller2 = 0x4b8; // 
            constexpr std::ptrdiff_t  = 0x8ff17138; // ÄxÒè˝
        }

        // Parent: None
        // Fields: 5
        namespace CNodeEnt_InfoNodeAir {
            constexpr std::ptrdiff_t  = 0x0; // CNodeEnt
            constexpr std::ptrdiff_t CNodeEnt_InfoNodeAir = 0x4f8; // 
            constexpr std::ptrdiff_t  = 0x8fea7108; // ‡qÍè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNodeEnt_InfoNodeAir
            constexpr std::ptrdiff_t @SHÅÏ– = 0xa9c1c620; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPathTrack {
            constexpr std::ptrdiff_t  = 0x8ff6af80; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_flDamageTimeOffset
        // Fields: 2
        namespace CModifier_Fencer_Ultimate_Target_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90745638; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityPunkgoatBlastedVData {
            constexpr std::ptrdiff_t  = 0x907ea7b8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f6aca00; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_ClusterGrenadeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_TargetPractice {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_PrimaryWeapon = 0x1348; // 
            constexpr std::ptrdiff_t `√[è˝ = 0x8ff7e470; // êüÊè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_RocketBarrageVData {
            constexpr std::ptrdiff_t  = 0x80000560; // CitadelAbilityVData
            constexpr std::ptrdiff_t archer_charged_shot_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_APRoundsVData {
            constexpr std::ptrdiff_t  = 0x800000f5; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3676d0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: m_nNoSpawnHeroID
        // Fields: 1
        namespace CCitadelHeroComponent {
            constexpr std::ptrdiff_t  = 0x8fedc830; // CEntityComponent
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Base {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerItemShopSafeZone {
            constexpr std::ptrdiff_t  = 0x8fecd670; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d698770; // 
            constexpr std::ptrdiff_t ‡÷Ïè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Item_SpiritSap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest04VData = 0x18e0; // 
            constexpr std::ptrdiff_t  = 0x0; // ‡9Áè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Item_ProjectileTest04VData
            constexpr std::ptrdiff_t  = 0x8f3182b8; // CCitadel_Item_ShadowStep
        }

        // Parent: None
        // Fields: 3
        namespace CModifierRestorativeGooVData {
            constexpr std::ptrdiff_t  = 0x908de698; // CCitadelModifierVData
            constexpr std::ptrdiff_t webwall_projectile = 0x0; // 
            constexpr std::ptrdiff_t PPAè˝ = 0x8ffc74c0; // CCitadel_Projectile_WebWall
        }

        // Parent: Ä¢¸è˝
        // Fields: 2
        namespace CAbilityPsychicLiftVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VeilWalkerWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2f8b80; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CatapultDamageWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CModifierKnockdownVData
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerProximity {
            constexpr std::ptrdiff_t  = 0x90073210; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fda30; // 
            constexpr std::ptrdiff_t  = 0x8ffe9658; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_SiphonBullets {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t Sounds = 0xa9be69a0; // 
            constexpr std::ptrdiff_t HÉÏ(ãˆ‹ôeHã%X = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTankTrainAI {
            constexpr std::ptrdiff_t  = 0x909c2720; // CPointEntity
            constexpr std::ptrdiff_t CNullEntity = 0x0; // 
            constexpr std::ptrdiff_t ‡Aê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AsleepVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †ˇ¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LuggageDrag {
            constexpr std::ptrdiff_t  = 0x8ff7c2d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_SmokeGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t pÌ˘è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityDustStormVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t †ùcè˝ = 0x90740858; // 
        }

        // Parent: `Jw˛
        // Fields: 1
        namespace CCitadel_Ability_Wrecker_BoulderGrenadeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: CCitadel_Ability_IceDome
        // Fields: 3
        namespace CCitadel_Ability_IceDome {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CrushingFists_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2e5fe0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Infuser {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HealEntitiyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CAnimGraphControllerBase
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Objective_Regen {
            constexpr std::ptrdiff_t  = 0x8fe96ea0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CGameText {
            constexpr std::ptrdiff_t  = 0x90039228; // CRulePointEntity
            constexpr std::ptrdiff_t CLogicPlayerProxy = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f587578; // 
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_CloakingDevice {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f31b180; // CCitadelModifierApexWatcherVData
            constexpr std::ptrdiff_t  = 0x8fe77f90; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // pô"ç˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_PhantomStrike {
            constexpr std::ptrdiff_t  = 0x902c8150; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_Disarm = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f3050d0; // CCitadel_Modifier_ChainLightningEffectVData
            constexpr std::ptrdiff_t  = 0x8fe83040; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_SummonDecay {
            constexpr std::ptrdiff_t  = 0x907c9b30; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Mirage_Teleport = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Doorman_Cart_VData {
            constexpr std::ptrdiff_t  = 0x8f5abd90; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ∞ΩZè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bookworm_KnightCharge {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_nJetpackFireFX = 0x1470; // ParticleIndex_t
            constexpr std::ptrdiff_t m_vDebugVelocityIntentModelSpace = 0x149c; // Vector
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RocketBarrageVolley {
            constexpr std::ptrdiff_t  = 0x8f40f9c8; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0xa9d2ad10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityHornetChainVData {
            constexpr std::ptrdiff_t  = 0x8f63a7c0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ‡ßcè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_AfterburnWatcher {
            constexpr std::ptrdiff_t  = 0x8dfc11b0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HeadhunterWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_HeadshotBoosterWatcher
            constexpr std::ptrdiff_t ËÁè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9ce7990; // 
            constexpr std::ptrdiff_t @SHÉÏ Hã⁄ÉÈÑù = 0x8f2c6e38; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Item_Bleeding_Bullets_Active = 0x308; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MetalSkin {
            constexpr std::ptrdiff_t  = 0x8f3269a8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
            constexpr std::ptrdiff_t  = 0x8f306068; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x902191d0; // ¿`0è˝
        }

        // Parent: m_tBeginTimeWithPrewarm
        // Fields: 0
        namespace PlayOfTheGamePlaybackData_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulse_ResumePoint {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_OutflowConnection
        }

        // Parent: m_ID
        // Fields: 4
        namespace CBaseFlex {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t Çıè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff58200; // 0Iw˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9c19dd0; // 
        }

        // Parent: m_bPushTowardsInfoTarget
        // Fields: 5
        namespace CTriggerFan {
            constexpr std::ptrdiff_t  = 0x8ff250e0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x8f530c10; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dc0fd90; // 
            constexpr std::ptrdiff_t  = 0x8ff24d78; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoPortalLink {
            constexpr std::ptrdiff_t  = 0x8f4d8ac0; // CPointEntity
            constexpr std::ptrdiff_t When we detect friendly players in front of us, apply this scale to our walking speed so we'll catch up to them. = 0x8da077b0; // 
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_PersonalRejuvenator {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_NearbyEnemyBoostVData = 0x770; // 
            constexpr std::ptrdiff_t hË/è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_NearbyEnemyBoostVData
        }

        // Parent: None
        // Fields: 3
        namespace CModifierTier3BossInvulnVData {
            constexpr std::ptrdiff_t  = 0x8000027c; // CCitadelModifierVData
            constexpr std::ptrdiff_t ò>è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d7b0db0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 5
        namespace CPhysHingeAlias_phys_hinge_local {
            constexpr std::ptrdiff_t  = 0x900439c0; // CPhysHinge
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8ed3f0; // 
            constexpr std::ptrdiff_t  = 0x1; // 8îäè˝
        }

        // Parent: None
        // Fields: 1
        namespace CLogicCase {
            constexpr std::ptrdiff_t  = 0x8f88d280; // CLogicalEntity
        }

        // Parent: None
        // Fields: 4
        namespace CInfoMidBossSpawn {
            constexpr std::ptrdiff_t  = 0x8f4af2e0; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t  = 0x8f4fb820; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t m_vecStartingPosition = 0x17e0; // Vector
        }

        // Parent: m_flFrequencyY
        // Fields: 1
        namespace CNPC_Neutral_Hideout_CatVData {
            constexpr std::ptrdiff_t  = 0xd; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_BearTrap_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0x8f6ae7b0; // CCitadel_Modifier_Fathom_ScaldingSpray_Aura
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Dust_Storm_Thrown {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_HealHost = 0xf78; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Astro_Rifle {
            constexpr std::ptrdiff_t  = 0x8ff72510; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CounterspellWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_PowerShard = 0xff8; // 
            constexpr std::ptrdiff_t  = 0x8fe883b0; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_KnockbackAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Slide_Debuff = 0x150; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_AbilityRechargeTime {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerUp_Casting {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ScalingPowerUp
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Casting = 0xd8; // 
            constexpr std::ptrdiff_t  = 0x0; // ‡VÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CInfoGameEventProxy {
            constexpr std::ptrdiff_t  = 0x90001410; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_Bola {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f729040; // CCitadel_Modifier_Thumper_Ability_2
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Viper_VenomVData {
            constexpr std::ptrdiff_t  = 0x800007f7; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityLashDownStrikeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Chrono_TimeWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8ff7ee20; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PatronsBlessingProcWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CModifier_SiphonBullets_HealthLoss = 0xd0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CItemSmokeBombPreCastModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_trophy_collector = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MysticReverb_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x902dfba8; // CitadelItemVData
            constexpr std::ptrdiff_t citadel_ability_tier3boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T3BossWaveBeamPreviewVData {
            constexpr std::ptrdiff_t  = 0x800000cb; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3673f0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: CCitadel_Ability_Sprint
        // Fields: 2
        namespace CCitadel_Ability_Sprint {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x8f2f9050; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelLootTableBase {
        }

        // Parent: None
        // Fields: 1
        namespace CGamePlayerZone {
            constexpr std::ptrdiff_t  = 0x8f88c590; // CRuleBrushEntity
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Airheart_Mark {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0xa9be0d20; // 
            constexpr std::ptrdiff_t  = 0xa9be0d20; // 
            constexpr std::ptrdiff_t  = 0x1f793400; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelDruidInvisAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ê8˜è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5bb0f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HookTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Link
            constexpr std::ptrdiff_t CCitadel_Ability_Chrono_PulseGrenade_VData = 0x1840; // 
            constexpr std::ptrdiff_t \è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_TrophyCollector {
            constexpr std::ptrdiff_t  = 0x8f30f310; // CCitadel_Item
            constexpr std::ptrdiff_t †Ëè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9021e230; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9ceaff0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_DoubleJump {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f322390; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f322030; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_FireConCommand {
            constexpr std::ptrdiff_t  = 0x8ffd2660; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CBaseToggle {
            constexpr std::ptrdiff_t  = 0x8f564878; // CBaseModelEntity
            constexpr std::ptrdiff_t ‡oıè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff56fc0; // 0Iw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier2Empowered {
            constexpr std::ptrdiff_t  = 0x9050c140; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t Äüè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff09f60; // ®Ow˛
        }

        // Parent: None
        // Fields: 2
        namespace CAI_CitadelLocalNavigator {
            constexpr std::ptrdiff_t  = 0x0; // CAI_LocalNavigatorBase
            constexpr std::ptrdiff_t CAI_CitadelLocalNavigator = 0x60; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Necro_RampUpVData {
            constexpr std::ptrdiff_t  = 0x80000733; // CCitadel_Modifier_Base_BuildupVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247d70; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Rutger_CheatDeath {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Gameplay = 0x8f6955d0; // CCitadel_Modifier_ThrownShiv_Damage_Debuff
            constexpr std::ptrdiff_t  = 0x8ffa4958; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ProjectMind {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ProjectMind = 0x288; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Stimpak_regen {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_BaseProjectileAOEModifierVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityMedicHealVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: None
        // Fields: 1
        namespace CPulseServerCursor {
            constexpr std::ptrdiff_t  = 0x909a8eb0; // CPulseExecCursor
        }

        // Parent: m_SequenceName
        // Fields: 2
        namespace CPulseCell_PlaySequence {
            constexpr std::ptrdiff_t  = 0x8ffe8580; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_GrandFinaleStage {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantBranchWall = 0xf78; // 
            constexpr std::ptrdiff_t  = 0x8ff770f8; // A¯è˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelAbilityDruidPlantBranchWall
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_HauntingSkull {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x0; // 
            constexpr std::ptrdiff_t CAbility_Mirage_Teleport_VData = 0x1b10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CopyUltPending {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_Necro_CoffinVData = 0x830; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AnimalCurse {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_CapturePointVData {
            constexpr std::ptrdiff_t  = 0x8f4cc2c8; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_AblativeCoat {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadel_Item
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8fe840b0; // 
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Tornado_Aura_Apply {
            constexpr std::ptrdiff_t  = 0x90869670; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Synth_Barrage = 0x0; // 
        }

        // Parent: CCitadel_Modifier_MagicBeam
        // Fields: 3
        namespace CAbility_Synth_Barrage {
            constexpr std::ptrdiff_t  = 0x8ffa6d30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f6999f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_Crescendo_InAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_PowerSlash {
            constexpr std::ptrdiff_t  = 0x8ffc0660; // CCitadelBaseYamatoAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e282820; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Charged_Bomb {
            constexpr std::ptrdiff_t  = 0x8ff79ec0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f5ab3c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
            constexpr std::ptrdiff_t  = 0x80000097; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367260; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: m_tDeactivationTime
        // Fields: 5
        namespace CCitadel_Bounce_Pad {
            constexpr std::ptrdiff_t  = 0x90671a20; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t CCitadel_Ability_Bebop_LaserBeam = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x0; // MPropertyStartGroup
            constexpr std::ptrdiff_t HÉÏ(ãﬁ“eHã%X = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Targetdummy_2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f7229a8; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f722a40; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Opera_Ability01 {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_ShadowClone = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GhostBloodShard {
            constexpr std::ptrdiff_t  = 0x8ff8f9c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_ArcaneSurge {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x9034feb0; // CCitadelModifierAura
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier3_DamagePulse {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Tier3Boss_Base
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BarrierTrackerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9038b8b0; // CBaseEntity
        }

        // Parent: None
        // Fields: 1
        namespace CTouchExpansionComponent {
            constexpr std::ptrdiff_t  = 0x90082440; // CEntityComponent
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_PlaySceneBase {
            constexpr std::ptrdiff_t  = 0x9005e0f0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_LerpCameraSettings {
            constexpr std::ptrdiff_t  = 0x8ff1fc80; // CPulseCell_BaseLerp
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dbe62b0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncInteractionLayerClip {
            constexpr std::ptrdiff_t  = 0x1; // CBaseModelEntity
            constexpr std::ptrdiff_t ‡W = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x900057c0; // ®Ow˛
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Fortuna_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Ability_LightningBall = 0x12f8; // 
            constexpr std::ptrdiff_t HËbè˝ = 0x8ff98650; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_LightningBall
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidHelicopterSeedsVData {
            constexpr std::ptrdiff_t  = 0x80000509; // CitadelAbilityVData
            constexpr std::ptrdiff_t projectile_airheart_floatingbomb = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CopyUlt {
            constexpr std::ptrdiff_t  = 0x8ffb1690; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Warden_CrowdControl_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_BatSwarmVData = 0x1bb8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Vandal_Ability03 {
            constexpr std::ptrdiff_t  = 0x8f2f9050; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Aerial_Assault {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: m_vStartPos
        // Fields: 3
        namespace CCitadel_Ability_Mantle {
            constexpr std::ptrdiff_t  = 0x8fe68cd0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f2c8fb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelProjectile_ImmobilizeTrap {
            constexpr std::ptrdiff_t  = 0x906b8600; // CCitadelProjectile
            constexpr std::ptrdiff_t CTriggerBurrowUnderground = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5af430; // CCitadel_Modifier_Uppercutted
            constexpr std::ptrdiff_t  = 0x8ff784d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Aura_Base {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f45f328; // Hÿ,è˝
            constexpr std::ptrdiff_t  = 0x8fed4710; // –~,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ControlPointBlockerAuraTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointBlockerAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bookworm_DragonFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t @¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90636038; // `Jw˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VampireBat_BatBlinkVData {
            constexpr std::ptrdiff_t  = 0x800007ed; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCadenceLullabyVData {
            constexpr std::ptrdiff_t  = 0x906e1878; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Gunslinger_WallStunVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t `Óaè˝ = 0x90772348; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierAirLiftGrabVData {
            constexpr std::ptrdiff_t  = 0x908c4358; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t yakuza_summon_gangster = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ShivDashVData {
            constexpr std::ptrdiff_t  = 0x90851858; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_void_sphere = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffa7208; // CCitadel_Ability_VoidSphere
        }

        // Parent: CCitadel_Ability_StormCloud
        // Fields: 2
        namespace CCitadel_Ability_StormCloud {
            constexpr std::ptrdiff_t  = 0x8f4cbe78; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f633d28; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_CosmeticItem_Snowball_VData {
            constexpr std::ptrdiff_t  = 0x90304cf8; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VeilWalkerWatcherVData {
            constexpr std::ptrdiff_t  = 0x90343ed8; // CCitadelModifierVData
            constexpr std::ptrdiff_t –äËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_WarpStone_Caster {
            constexpr std::ptrdiff_t  = 0x8d1eda70; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8fec63f8; // 
        }

        // Parent: pWËè˝
        // Fields: 3
        namespace CCitadel_Modifier_ArcticBlast_Freeze_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t xª1è˝ = 0x8f31add0; // 
            constexpr std::ptrdiff_t  = 0x902191d0; // ¯≠1è˝
        }

        // Parent: None
        // Fields: 3
        namespace CItemPhantomStrike_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x903342e8; // CCitadel_Modifier_SilencedVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Intrinsic_Base {
            constexpr std::ptrdiff_t  = 0x8f3d6230; // CCitadelModifier
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f3d7428; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerDetectBulletFire {
            constexpr std::ptrdiff_t  = 0x90073c70; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ea00b00; // 
            constexpr std::ptrdiff_t  = 0x8ff13b00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DazzlingOrbWatcherVData {
            constexpr std::ptrdiff_t  = 0x90937c28; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
            constexpr std::ptrdiff_t Hßqè˝ = 0x8f718be8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Necro_WallDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t CCitadel_Modifier_Necro_WallDebuff = 0x250; // 
            constexpr std::ptrdiff_t  = 0x0; // øÈè˝
        }

        // Parent: 0¥Èè˝
        // Fields: 3
        namespace CAbility_Synth_PlasmaFlux {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_ExplodeBaseParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ExplodeFriendlyParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_hProjectile
        // Fields: 2
        namespace CAbilityTargetdummy3VData {
            constexpr std::ptrdiff_t  = 0x80000795; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelAbilityHealingSlashVData {
            constexpr std::ptrdiff_t  = 0x80000856; // CCitadelYamatoBaseVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1a00; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CModifierTangoTetherTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VoidSphereBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞ˇ˘è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier3_DamagePulseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ‡ZËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Pickup_Item_VData {
            constexpr std::ptrdiff_t  = 0x904c1f80; // CCitadel_Pickup_VData
            constexpr std::ptrdiff_t –üJè˝ = 0x904c24d8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_GraveStoneVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x8f69a140; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // X°iè˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bookworm_KnightBarrier {
            constexpr std::ptrdiff_t  = 0x8ff73c00; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Mirage_Tornado_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
            constexpr std::ptrdiff_t  = 0x8f59d6f8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 0◊Yè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Nano_CatFormPounceVData {
            constexpr std::ptrdiff_t  = 0x90841578; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_gravestone_blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bounce_Pad_Ally {
            constexpr std::ptrdiff_t  = 0x8de8a850; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Bounce_Pad_Ally = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilitySlideVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpiritBurnEnemyTrackerVData {
            constexpr std::ptrdiff_t  = 0x8f31f748; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // h˜1è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher {
            constexpr std::ptrdiff_t  = 0x8fe84210; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T3Boss_Wave_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Tier3Boss_Base
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InstantReload = 0xf80; // 
            constexpr std::ptrdiff_t –æ/è˝ = 0x8fe70c68; // @_Ïè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_NearbyAlliesResistVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9038b6c8; // CBaseEntity
        }

        // Parent: tools/images/pulse_editor/requirements.png
        // Fields: 2
        namespace CPulseCell_PickBestOutflowSelector {
            constexpr std::ptrdiff_t  = 0x900cfed0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_PunkgoatSigilAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f698828; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffafda0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x800006a8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ComboBreaker {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_Mystic_Regeneration = 0x10b0; // 
            constexpr std::ptrdiff_t ÿF0è˝ = 0x8fe75748; // @_Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Item_Mystic_Regeneration
        }

        // Parent: m_flCurveDistRange
        // Fields: 3
        namespace CInfoFan {
            constexpr std::ptrdiff_t  = 0x8ff24d10; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f530b00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_CloneSingle {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability04 = 0xf70; // 
            constexpr std::ptrdiff_t  = 0x8ff99a78; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TargetPracticeSelf {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t Sounds = 0x8f5aa578; // CCitadel_Modifier_Burrow_VData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
            constexpr std::ptrdiff_t  = 0x8f5bf870; // CCitadelModifier
            constexpr std::ptrdiff_t Doorman's air drag while channeling.  The victim's is specified in the pre-teleport modifier. = 0x8f5bff58; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Arcane_Eater_Watcher {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_StatStealBase
            constexpr std::ptrdiff_t CCitadel_Item_ModDisruptor = 0xff8; // 
            constexpr std::ptrdiff_t  = 0x8fe8a8d0; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CItemAOESilenceAuraVData = 0x888; // 
        }

        // Parent: None
        // Fields: 4
        namespace CAbility_Synth_PlasmaFlux_Trigger {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t  = 0x8ff9f400; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_CooldownOnMiss {
            constexpr std::ptrdiff_t  = 0x8f328ae8; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x0; // Hÿ,è˝
            constexpr std::ptrdiff_t CCitadel_Modifier_TechBurst_ProcVData = 0x878; // 
            constexpr std::ptrdiff_t  = 0x0; // †°Èè˝
        }

        // Parent: Æ˜è˝
        // Fields: 1
        namespace CCitadel_Ability_AirheartChargeBlastVData {
            constexpr std::ptrdiff_t  = 0x906c78c8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Fathom_LurkersAmbush_Debuff_VData {
            constexpr std::ptrdiff_t  = 0x90860698; // CCitadelModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f68b9c8; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffa4330; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TangoTetherTarget {
            constexpr std::ptrdiff_t  = 0x8ffb79f0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_hLastCastTarget
        // Fields: 3
        namespace CCitadel_Ability_Nano_Pounce_Instant {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_MageWalk = 0xff0; // 
            constexpr std::ptrdiff_t  = 0x8ffa61d8; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shadow_Strike_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_CloakingDevice_Active_Ambush_VData = 0x920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_VolumetricEventSensorOnStartedArgs_t {
        }

        // Parent: m_bGamePaused
        // Fields: 0
        namespace CGameRules {
        }

        // Parent: `Jw˛
        // Fields: 4
        namespace CFish {
            constexpr std::ptrdiff_t  = 0x8ff5f690; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f573e30; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ddc32d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAI_NetworkManager {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CAI_NetworkManager = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x8feb66f8; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 2
        namespace CHandleTest {
            constexpr std::ptrdiff_t  = 0x8f516368; // CBaseEntity
            constexpr std::ptrdiff_t  = 0x8f8df280; // 
        }

        // Parent: None
        // Fields: 2
        namespace CLogicNPCCounter {
            constexpr std::ptrdiff_t  = 0x9003d778; // CBaseEntity
            constexpr std::ptrdiff_t CLogicActiveAutosave = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_InfoTrooperSpawnAPI {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Clone {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_vRightVectorWS = 0x110; // VectorWS
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityTokamakBreachVData {
            constexpr std::ptrdiff_t  = 0x9091af98; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Shakedown_Target {
            constexpr std::ptrdiff_t  = 0x8e26bee0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f72ad58; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Astro_Rifle_Self {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Astro_Rifle_Self = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
            constexpr std::ptrdiff_t  = 0x8de58050; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f5bedc8; // 
        }

        // Parent: m_BuffModifier
        // Fields: 2
        namespace CCitadel_Item_ProjectileTest06VData {
            constexpr std::ptrdiff_t  = 0x902ab0e8; // CCitadel_Item_ProjectileTestVData
            constexpr std::ptrdiff_t àf0è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_SurgingPowerVData {
            constexpr std::ptrdiff_t  = 0x902c43f8; // CitadelItemVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f30be00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ComboBreakerHeal {
            constexpr std::ptrdiff_t  = 0x8d1bfdd0; // CCitadelModifier
            constexpr std::ptrdiff_t m_AOEModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UltimateBurst_ProcVData {
            constexpr std::ptrdiff_t  = 0x903646b8; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x901fe3d0; // h’0è˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Ability_TrooperBossGrenade {
            constexpr std::ptrdiff_t  = 0x8d1db780; // CCitadel_Ability_TrooperGrenade
            constexpr std::ptrdiff_t `Jw˛ = 0x8f3073c0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f3076e8; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritResilience = 0x250; // 
            constexpr std::ptrdiff_t  = 0x0; // ÄÆÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TriggerPush {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_RevealTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelHotelExitTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelHotelExitTrigger = 0x8e8; // 
            constexpr std::ptrdiff_t ‡„Cè˝ = 0x8fecd188; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelHotelExitTrigger
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x8f40f9c8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CRegenerateZone {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t  = 0x1f793400; // 
            constexpr std::ptrdiff_t  = 0x7074df90; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_Hero_Testing_Damage = 0xd0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelPregameHeroDraftButton {
            constexpr std::ptrdiff_t  = 0x0; // CDynamicProp
            constexpr std::ptrdiff_t CCitadelPregameHeroDraftButton = 0xcf0; // 
            constexpr std::ptrdiff_t `qKè˝ = 0x8feefd68; // `
ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadelPregameHeroDraftButton
            constexpr std::ptrdiff_t 9 = 0x8f4b7218; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierGravityLassoEnemyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_LinkVData
            constexpr std::ptrdiff_t  Ø[è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_RechargingBullets {
            constexpr std::ptrdiff_t  = 0x8d2189e0; // CCitadel_Item
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f2eb718; // 
            constexpr std::ptrdiff_t  = 0x8fe74040; // 8n,è˝
        }

        // Parent: CCitadel_WeaponUpgrade_ExpressShot
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_ExpressShot {
            constexpr std::ptrdiff_t  = 0x8d2269b0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2e2798; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f2cd848; // –~,è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_TechDamagePulse {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_HunterAuraTarget = 0x270; // 
            constexpr std::ptrdiff_t ñ/è˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_HunterAuraTarget
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerUp_Movement {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ScalingPowerUp
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Movement = 0xe0; // 
            constexpr std::ptrdiff_t HfJè˝ = 0x0; // ‡VÈè˝
        }

        // Parent: None
        // Fields: 5
        namespace CRagdollConstraint {
            constexpr std::ptrdiff_t  = 0x9004e5d0; // CPhysConstraint
            constexpr std::ptrdiff_t @Lê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90044c20; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9d2dfe0; // 
            constexpr std::ptrdiff_t @SHÉÏ Hã⁄ÉÈÑù = 0x2; // m_nUseCounter
        }

        // Parent: None
        // Fields: 3
        namespace CFuncVehicleClip {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CFuncVehicleClip = 0x780; // 
            constexpr std::ptrdiff_t  = 0x90005160; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTokamakHeatSinksVData {
            constexpr std::ptrdiff_t  = 0x8f7274b0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // –trè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierLashGrappleTargetVData {
            constexpr std::ptrdiff_t  = 0x8f62e820; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9043a2d0; // Xcè˝
        }

        // Parent: m_flDebuffScale
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest05VData {
            constexpr std::ptrdiff_t  = 0x8f2f9670; // CCitadel_Item_ProjectileTestVData
            constexpr std::ptrdiff_t  = 0x902160c0; // êñ/è˝
            constexpr std::ptrdiff_t  = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Siphon_Bullets_Watcher {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_StatStealBase
            constexpr std::ptrdiff_t  = 0x8fe77448; // 
            constexpr std::ptrdiff_t  = 0x8f319eb0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityJumpVData {
            constexpr std::ptrdiff_t  = 0x9020bc08; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f2cd448; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_StatStealBaseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: m_iGravestoneState
        // Fields: 4
        namespace CCitadel_GraveStone_Blocker {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t +Gun Properties = 0x8ffa27f0; // MPropertyStartGroup
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e112a20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_DragonFireGroundAura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t HÉÏ(ãV—’eHã%X = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5be308; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f5be318; // 
        }

        // Parent: None
        // Fields: 4
        namespace CItem_FleetfootBoots {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f2e75e8; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_MeleeCharge = 0x288; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelProjectile {
            constexpr std::ptrdiff_t  = 0x90085970; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f91e160; // 
        }

        // Parent: None
        // Fields: 2
        namespace CBaseTrackedStatsEntity {
            constexpr std::ptrdiff_t  = 0x90084650; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: CCitadel_Ability_Airheart_ChargeBlast
        // Fields: 3
        namespace CCitadel_Ability_Airheart_ChargeBlast {
            constexpr std::ptrdiff_t  = 0x8ff7b980; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f5b0408; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_HauntingSpiritsVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Attached {
            constexpr std::ptrdiff_t  = 0x8ff96b40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t àZè˝ = 0x906650e8; // 
            constexpr std::ptrdiff_t citadel_druid_invis_bush = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
            constexpr std::ptrdiff_t  = 0x8dfd11b0; // CCitadel_Modifier_Base_Buildup
            constexpr std::ptrdiff_t  = 0x8fe989c8; // 
            constexpr std::ptrdiff_t  = 0x8f630c60; // CCitadel_Modifier_IceBeam_Stacking_Slow
        }

        // Parent: m_flTackleStartTime
        // Fields: 2
        namespace CCitadel_Ability_ChargedTackle {
            constexpr std::ptrdiff_t  = 0x8ffa8e40; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CrushingFists_Watcher {
            constexpr std::ptrdiff_t  = 0x8fe73890; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: m_flValue
        // Fields: 0
        namespace StatViewerModifierValues_t {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_MobileResupplyAura {
            constexpr std::ptrdiff_t  = 0x906c0ec0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Burrow = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5b8930; // CCitadel_Modifier_Bull_Heal_Target
            constexpr std::ptrdiff_t  = 0x8ff7b7d8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvSplash {
            constexpr std::ptrdiff_t  = 0x90982778; // CPointEntity
            constexpr std::ptrdiff_t CColorCorrection = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8631c0; // CEnvSplash
        }

        // Parent: None
        // Fields: 3
        namespace CPointCameraVFOV {
            constexpr std::ptrdiff_t  = 0x0; // CPointCamera
            constexpr std::ptrdiff_t CPointCameraVFOV = 0x508; // 
            constexpr std::ptrdiff_t pIRè˝ = 0x8ff1f840; // pÁÒè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_UltCombo_Self = 0xe0; // 
            constexpr std::ptrdiff_t ∏w[è˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Astro_Rifle_Debuff {
            constexpr std::ptrdiff_t  = 0x90666750; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_HatTrick = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PsychicLift {
            constexpr std::ptrdiff_t  = 0x8ffc97f0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChangeTeam {
            constexpr std::ptrdiff_t  = 0x8f3b2438; // CCitadelModifier
            constexpr std::ptrdiff_t Projectile Model = 0x8f3b24c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOAPI {
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerAddModifier {
            constexpr std::ptrdiff_t  = 0x8ff6f6e0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de22960; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Thumper_2_Aura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t  = 0x8f728168; // CCitadel_Modifier_Thumper_2_Aura
            constexpr std::ptrdiff_t  = 0x8ffbadb0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_WarpStone {
            constexpr std::ptrdiff_t  = 0x8d1ebfa0; // CCitadel_Item
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2dde38; // 
            constexpr std::ptrdiff_t 0ŸÊè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPrecipitationVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 4
        namespace CFuncMoveLinear {
            constexpr std::ptrdiff_t  = 0x8ff60f20; // CBaseToggle
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f575a68; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ddc6860; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_TrackingBombVData {
            constexpr std::ptrdiff_t  = 0x8f70ea88; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hÙpè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Airheart_Spotlight {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_FissureWall = 0xac0; // 
            constexpr std::ptrdiff_t –},è˝ = 0x8ff73bc0; // sıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f625498; // 
            constexpr std::ptrdiff_t  = 0x8f6381e8; // CTriggerIcePathVolume
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Synth_Affliction_Debuff_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_Pounce_Self {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckerUltimate_Invincible {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_PowerSlash = 0x1640; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TargetPracticeDebuffVData {
            constexpr std::ptrdiff_t  = 0x9065ee68; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa9a70; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_RechargingBulletsVData = 0x19b8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SlowImmunity {
            constexpr std::ptrdiff_t  = 0x8fe88ef0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_SpiritBubbleVData {
            constexpr std::ptrdiff_t  = 0x8f308d28; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 8ç0è˝
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_HealingBoonScale {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 3
        namespace CNPC_MidBossVData {
            constexpr std::ptrdiff_t  = 0x904393b0; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t ò>è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d71dac0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 0
        namespace CPhysMotorAPI {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t  = 0x900d9cc0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 7
        namespace CCitadelPlayerBotNPCBrain {
            constexpr std::ptrdiff_t  = 0x9041bb10; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CCitadel_Pickup_Modifier = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f429500; // CCitadelPlayerBotNPCBrain
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x9041bb90; // 
            constexpr std::ptrdiff_t CCitadel_Pickup_Item = 0x0; // 
            constexpr std::ptrdiff_t SourceTVExclusive = 0x8f2cac20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CScriptItem {
            constexpr std::ptrdiff_t  = 0x0; // CItem
            constexpr std::ptrdiff_t CScriptItem = 0xb40; // 
            constexpr std::ptrdiff_t –¬àè˝ = 0x900330c8; // @`ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CScriptItem
            constexpr std::ptrdiff_t  = 0x8f88c748; // 
        }

        // Parent: None
        // Fields: 5
        namespace CDynamicPropAlias_prop_dynamic_override {
            constexpr std::ptrdiff_t  = 0x8ddc77e0; // CDynamicProp
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t  ˆè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9c1a1f0; // 
            constexpr std::ptrdiff_t †ˆè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CBaseTrigger {
            constexpr std::ptrdiff_t  = 0x8ff13270; // CBaseToggle
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f514f28; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8db57900; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_Grit {
            constexpr std::ptrdiff_t  = 0x902634b0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_Camouflage = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f317ab8; // CCitadel_Modifier_T3BossWaveBeamPreview
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CBaseLockonAbilityVData {
            constexpr std::ptrdiff_t  = 0xf35a3250; // CitadelAbilityVData
            constexpr std::ptrdiff_t ¿Fè˝ = 0x90426548; // HãIHãHˇ`ÃÃÃÃÃHãIHãHˇ`ÃÃÃÃÃ3¿√ÃÃÃÃÃÃÃÃÃÃÃÃÃ@SHÉÏHãŸHãIHã—Hãˇê–
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PermanentPickupVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t H≠Hê˝ = 0x8d18aef0; // 
            constexpr std::ptrdiff_t @SVHÉÏHË4Sã.æ+Hç5OõºeHã%X = 0x904c1488; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNPCSpawnDestination {
            constexpr std::ptrdiff_t  = 0x8febee40; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPointPush {
            constexpr std::ptrdiff_t  = 0x90049318; // CPointEntity
            constexpr std::ptrdiff_t CPhysHinge = 0x0; // 
            constexpr std::ptrdiff_t  = 0x900439c0; // CPhysHinge
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_Neutral_Hideout_RabbitVData {
            constexpr std::ptrdiff_t  = 0x8f508398; // CNPC_Neutral_Hideout_CatVData
            constexpr std::ptrdiff_t  = 0x9041a710; // ¿ÉPè˝
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_NeutralBugVData {
            constexpr std::ptrdiff_t  = 0x9051ba38; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Unicorn_PrismaticGuard {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseAbility
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f716640; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_AirheartRocketeer4VData {
            constexpr std::ptrdiff_t  = 0x80000527; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifire_Priest_FlashBangBurn {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_ProximityRitual_VData = 0x1e98; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoT {
            constexpr std::ptrdiff_t  = 0x8ffbcf70; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: »Pw˛
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t upgrade_restorative_locket = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Upgrade_AmmoScavenger_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t êrÁè˝ = 0x0; // 
        }

        // Parent: ®Ow˛
        // Fields: 4
        namespace CCitadel_Modifier_BaseBulletPreRollProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CModifierKnockdownVData
        }

        // Parent: m_SourceItemID
        // Fields: 0
        namespace StolenAbilityPair_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_EntFire {
            constexpr std::ptrdiff_t  = 0x8ffe8340; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ItemPunchable_Gold {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Gold = 0x110; // 
            constexpr std::ptrdiff_t  = 0x0; // PcÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_ItemPunchable_Gold
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_Tokamak_EnemySmokeAOE = 0x188; // 
            constexpr std::ptrdiff_t  = 0x0; // PcÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_Tokamak_EnemySmokeAOE
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_BloodBomb {
            constexpr std::ptrdiff_t  = 0x8ff8a470; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dff7190; // 
        }

        // Parent: m_beam02
        // Fields: 4
        namespace CCitadel_Item_PrismBlast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_Bubble
            constexpr std::ptrdiff_t †Ëè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fe87e88; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9ce92e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_CopyUltVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AirLift_Grab {
            constexpr std::ptrdiff_t  = 0x8e27b0d0; // CCitadelModifier
            constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VandalOverflow {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f718fc0; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: m_bShouldTriggerSlowGetup
        // Fields: 3
        namespace CCitadel_Ability_Slide {
            constexpr std::ptrdiff_t  = 0x8f2c6940; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2c67b8; // 
            constexpr std::ptrdiff_t  = 0x8f2c7a00; // 
        }

        // Parent: m_strWeaponShootSound
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_health_regen_aura = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe7f208; // CCitadel_Item_HealthRegenAura
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SuperNeutralChargeActive {
            constexpr std::ptrdiff_t  = 0x8fe858b0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RebirthCredit {
            constexpr std::ptrdiff_t  = 0x8fe93000; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CHitboxComponent {
            constexpr std::ptrdiff_t  = 0x8ff04bb0; // CEntityComponent
        }

        // Parent: m_bIsHelperAvailableNet
        // Fields: 7
        namespace CNPC_FamiliarHelper {
            constexpr std::ptrdiff_t  = 0x900880c0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x8f924fe8; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ebf6a50; // 
            constexpr std::ptrdiff_t  = 0x8ff08c58; // 
            constexpr std::ptrdiff_t  = 0x8f925a68; // 
            constexpr std::ptrdiff_t  = 0x8f925a88; // 
        }

        // Parent: m_vMins
        // Fields: 3
        namespace CCitadelSoundEntityOBB {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CSoundEventEntity
            constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_nMinCPULevel
        // Fields: 3
        namespace CRopeKeyframe {
            constexpr std::ptrdiff_t  = 0x8ff6cc80; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x100ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Bookworm_KnightBarrierVData {
            constexpr std::ptrdiff_t  = 0x906e3f68; // CCitadelModifierVData
            constexpr std::ptrdiff_t H"Zè˝ = 0x8f5a1b68; // 
            constexpr std::ptrdiff_t  = 0x90414630; // àZè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_SelfHealVData {
            constexpr std::ptrdiff_t  = 0x90861b38; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f69ea60; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_GenericPerson_1 {
            constexpr std::ptrdiff_t  = 0x9071fd70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability02 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f624378; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierRiotProtocolBuffVData {
            constexpr std::ptrdiff_t  = 0x9089ffa8; // CCitadelModifierVData
            constexpr std::ptrdiff_t yakuza_kobun = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffbbbb8; // CCitadel_Ability_Kobun
        }

        // Parent: None
        // Fields: 2
        namespace CModifierUppercuttedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TrophyCollectorPassiveGold {
            constexpr std::ptrdiff_t  = 0x8fe82f50; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CBaseCombatCharacter {
            constexpr std::ptrdiff_t  = 0x8f566258; // CBaseFlex
            constexpr std::ptrdiff_t An identifier for this physics body. = 0x8f566300; // 
            constexpr std::ptrdiff_t  = 0x8f566310; // pbVè˝
            constexpr std::ptrdiff_t  = 0x0; // ∏bVè˝
            constexpr std::ptrdiff_t @èıè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ZombieWallGroundAura {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifierAura
            constexpr std::ptrdiff_t ∞¯˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x907a2240; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9cf5ac0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_InfiniteMagazine {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Item
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2eaa30; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t  = 0x8f304760; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LifeSteal {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal = 0xd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Airheart_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantHealingTreeVData = 0x1bb8; // 
            constexpr std::ptrdiff_t 8	Zè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Frank_ShockTarget2VData {
            constexpr std::ptrdiff_t  = 0x907498b8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x7ab; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Protection_RacketVData {
            constexpr std::ptrdiff_t  = 0x8f71f078; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // êqè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Spellbreaker_VData {
            constexpr std::ptrdiff_t  = 0x8f309770; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t  = 0x9021a690; // àó0è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: m_bDontMove
        // Fields: 8
        namespace CNPC_NecroSkele {
            constexpr std::ptrdiff_t  = 0x9083c960; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CCitadel_Magic_Beam_Blocker = 0x0; // 
            constexpr std::ptrdiff_t pø˘è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90796ea8; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9cfeaf0; // 
            constexpr std::ptrdiff_t Hâ\$VHÉÏ@HãÚÉ˘á⁄ = 0x8f2c7ed0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f6882e0; // 
            constexpr std::ptrdiff_t  = 0x8f2cce70; // CBaseAnimGraph
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ice_Dome_Blocker {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CBaseAnimGraph
            constexpr std::ptrdiff_t  = 0x8f5bc2f0; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BossInvuln {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_BossInvuln = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TeleportVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t …Ïè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelAbilityDruidPlantBranchWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAbilityDruidBasePlant
            constexpr std::ptrdiff_t CCitadel_Modifier_TargetPracticeEnemyVData = 0xa50; // 
            constexpr std::ptrdiff_t pŒ,è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_TargetPracticeEnemyVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityThumper1VData {
            constexpr std::ptrdiff_t  = 0x9089b1c8; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_WeaponShieldingVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f304128; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe82390; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Disarm_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifierVData
            constexpr std::ptrdiff_t super_neutral_charge = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe787c8; // CCitadel_Ability_SuperNeutralCharge
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierTier2BossLaserBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t h.è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_OneVsOne {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t ECitadelAbilityHUDElementType_t = 0x10404; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_LocalNavigator {
            constexpr std::ptrdiff_t  = 0x8fead2a0; // CAI_LocalNavigatorBase
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathQueryComponent {
            constexpr std::ptrdiff_t  = 0x10; // CEntityComponent
        }

        // Parent: m_flProgress
        // Fields: 5
        namespace CCitadelControlPointTrigger {
            constexpr std::ptrdiff_t  = 0x8fed7ee0; // CTriggerMultiple
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d77f530; // 
            constexpr std::ptrdiff_t PÌè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fed7ed0; // »Pw˛
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Upgrade_AerialAssault {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_RocketBarrage = 0x1480; // 
            constexpr std::ptrdiff_t ˆ1è˝ = 0x8fe874b8; // êÑËè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Tier3Boss_RocketBarrage
        }

        // Parent: None
        // Fields: 1
        namespace CLogicRelay {
            constexpr std::ptrdiff_t  = 0x8f3f3b48; // CLogicalEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_HopOutLockout {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Punkgoat_BlastedHealth {
            constexpr std::ptrdiff_t  = 0x90846770; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_ScaldingSpray = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Punkgoat_BlastedHealthWatcher {
            constexpr std::ptrdiff_t  = 0x907d4240; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_Pounce_Instant = 0x0; // 
        }

        // Parent: CCitadel_Ability_Fencer_ThrowBlade
        // Fields: 2
        namespace CCitadel_Ability_Frank_ReviveVData {
            constexpr std::ptrdiff_t  = 0x90731c68; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_hornet_sting = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_Pulse_Target {
            constexpr std::ptrdiff_t  = 0x8ffa65f0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ShakedownPulseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ¿¸è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityMeleeVData {
            constexpr std::ptrdiff_t  = 0x8f2cb860; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Ä∏,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_RebuttalWatcherVData {
            constexpr std::ptrdiff_t  = 0x9030c1c8; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t FÁè˝ = 0x0; // 
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x80000091; // 
        }

        // Parent: None
        // Fields: 2
        namespace CitadelItemVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9038b6c8; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BarrierTracker {
            constexpr std::ptrdiff_t  = 0x8fe92d60; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HeroRefresh {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_LearningHeroAbility = 0xe0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InShopTunnel {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t AdditionalAbilities_t = 0x20; // 
        }

        // Parent: None
        // Fields: 0
        namespace SequenceHistory_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_ItemServices {
            constexpr std::ptrdiff_t  = 0x8fffb180; // CPlayerPawnComponent
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_OutflowConnection {
        }

        // Parent: CCitadel_Modifier_VoidSphere
        // Fields: 4
        namespace CProjectile_Stomp_Projectile {
            constexpr std::ptrdiff_t  = 0x8ff9f400; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e0e9490; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_StackingDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidPlantHealingTreeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x906e3f68; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Doorman_Cart {
            constexpr std::ptrdiff_t  = 0x8de6d160; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5ae4b0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f5ae500; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityWreckerSalvageVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9091c688; // CCitadelModifierVData
        }

        // Parent: m_BombAttachedParticle
        // Fields: 3
        namespace CCitadel_Modifier_StickyBombAttachedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f59d6f8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 0◊Yè˝
        }

        // Parent:  Ëè˝
        // Fields: 2
        namespace CCitadel_Ability_ZipLine_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PrimaryWeapon_ScalingAltFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8fe6af10; // CCitadel_Ability_Melee_Base
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Shadow_Strike_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StatStealBase
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_Wave_Target = 0x2d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T2Boss_Stagger_WatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CAnimGraphControllerBase
        }

        // Parent: None
        // Fields: 0
        namespace CNavLinkAreaEntityNpcUserList_t {
        }

        // Parent: None
        // Fields: 4
        namespace CTestPulseIO {
            constexpr std::ptrdiff_t  = 0x8ff63db0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dde8960; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerTrooperDamageReductionDetector {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerTrooperDamageReductionDetector = 0x8e8; // 
            constexpr std::ptrdiff_t (∂.è˝ = 0x8fecd128; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerTrooperDamageReductionDetector
            constexpr std::ptrdiff_t 0lç˝ = 0xb18710f0; // ∏P
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Unicorn_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x90898888; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f70f468; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Familiar_Asleep {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Sleep
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerSurge = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GoatGoingUp_LingeringAirControl {
            constexpr std::ptrdiff_t  = 0x8ff9cca0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_SelfHeal {
            constexpr std::ptrdiff_t  = 0x9084c9f0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Fathom_LurkersAmbush = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f69fbc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SettingSun_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_WreckerScrapBlast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f694990; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IncendiaryDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_SalvoBullet = 0x330; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
            constexpr std::ptrdiff_t  = 0x8f322370; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // ê#2è˝
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_WeaponDamage {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_HideOutTargetSpawner {
            constexpr std::ptrdiff_t  = 0x8fec6f10; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d5aa150; // 
        }

        // Parent: None
        // Fields: 6
        namespace CTriggerMidBossShield {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerNeutralShield
            constexpr std::ptrdiff_t CTriggerMidBossShield = 0x910; // 
            constexpr std::ptrdiff_t  = 0x8fecc978; // –„Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerMidBossShield
            constexpr std::ptrdiff_t m_nNumEnemyPlayers = 0x910; // int8
            constexpr std::ptrdiff_t  = 0x0; // CTriggerNeutralShield
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 4
        namespace CCitadel_Destroyable_Building {
            constexpr std::ptrdiff_t  = 0x8fed9ca0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d77e530; // 
            constexpr std::ptrdiff_t ùÌè˝ = 0x8f553b20; // 
        }

        // Parent: ¯Mw˛
        // Fields: 4
        namespace CTeamRelativeParticleSystem {
            constexpr std::ptrdiff_t  = 0x0; // CParticleSystem
            constexpr std::ptrdiff_t CTeamRelativeParticleSystem = 0xd18; // 
            constexpr std::ptrdiff_t Ä¯Kè˝ = 0x8fef1f80; // ‡∫ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CTeamRelativeParticleSystem
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_DivinersKevlar {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_DisarmProcWatcherVData = 0x890; // 
            constexpr std::ptrdiff_t à2è˝ = 0x0; // †°Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_DisarmProcWatcherVData
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_FieldSentryVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_SimpleAnimatingAIVData
            constexpr std::ptrdiff_t  = 0x90503948; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_UnrestrictedMotorMovement {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CNavLinkMotor_DefaultNavLink::State_t = 0x210404; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAI_LookTarget {
            constexpr std::ptrdiff_t  = 0x8feac6f0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AttachedVData {
            constexpr std::ptrdiff_t  = 0x8f637350; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hscè˝
        }

        // Parent: CCitadel_Ability_Familiar_AltWeapon
        // Fields: 4
        namespace CCitadel_Ability_Familiar_AltWeapon {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Modifier_DeathTaxTechAmp = 0x150; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_DeathTaxTechAmp
        }

        // Parent: +Harpoon Properties
        // Fields: 3
        namespace CCitadel_Modifier_CopyUltVData {
            constexpr std::ptrdiff_t  = 0x80000769; // CCitadelModifierVData
            constexpr std::ptrdiff_t h’0è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247f50; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: m_TargetDebuffModifier
        // Fields: 2
        namespace CCitadel_Ability_Magician_MagicBoltVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x907cf290; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Opera_Ability04 {
            constexpr std::ptrdiff_t  = 0x8ffa7190; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ProjectileTestVData {
            constexpr std::ptrdiff_t  = 0x902916e8; // CitadelItemVData
            constexpr std::ptrdiff_t citadel_shield = 0x0; // 
            constexpr std::ptrdiff_t @r1è˝ = 0x8fe72408; // CCitadel_Shield
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Galvanic_Storm_EffectVData {
            constexpr std::ptrdiff_t  = 0x8000012c; // CCitadel_Modifier_ChainLightningEffectVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t h˜1è˝ = 0x90289b28; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DiminishingSlow {
            constexpr std::ptrdiff_t  = 0x8f3c8198; // CCitadelModifier
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Unstoppable {
            constexpr std::ptrdiff_t  = 0x8d38d110; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_UnstoppableVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelBulletRedirectVolume {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CCitadelBulletRedirectVolume = 0x7a0; // 
            constexpr std::ptrdiff_t  = 0x8fed1878; // êrıè˝
        }

        // Parent: None
        // Fields: 5
        namespace CNodeEnt_InfoNodeAirHint {
            constexpr std::ptrdiff_t  = 0x8fea7800; // CNodeEnt
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d4a3490; // 
            constexpr std::ptrdiff_t pxÍè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CGamePlayerEquip {
            constexpr std::ptrdiff_t  = 0x0; // CRulePointEntity
            constexpr std::ptrdiff_t CGamePlayerEquip = 0x7a8; // 
            constexpr std::ptrdiff_t  = 0x900328f8; // ¿∞ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CGamePlayerEquip
            constexpr std::ptrdiff_t  = 0x7074faf0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPointEntityFinder {
            constexpr std::ptrdiff_t  = 0x900551c0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierDruidLeechSeed {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f5a84f0; // CCitadel_Ability_AirheartRocketeer4VData
        }

        // Parent: m_LifeDrainTargetModifier
        // Fields: 2
        namespace CCitadel_Modifier_Frank_PainAuraVData {
            constexpr std::ptrdiff_t  = 0x8f624db0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // »Mbè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_Pulse_VData {
            constexpr std::ptrdiff_t  = 0x8f681aa0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // (àiè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TangoTether_TetherReceiverVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  £¸è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy = 0xe8; // 
            constexpr std::ptrdiff_t hrè˝ = 0x0; // ®Áè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bull_HealVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpilledBloodThinkerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞‘¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EtherealBulletsVData {
            constexpr std::ptrdiff_t  = 0x800000eb; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_QuickSilverBuffVData {
            constexpr std::ptrdiff_t  = 0x90273a68; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x902160c0; // ®e.è˝
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityPropertySingleStat {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphDef {
        }

        // Parent: None
        // Fields: 7
        namespace CNPC_MidBoss {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CNPC_MidBoss = 0x18e0; // 
            constexpr std::ptrdiff_t  = 0x8ff0c7c8; // pñè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_MidBoss
            constexpr std::ptrdiff_t  = 0x8f4fba00; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelModifierTier3BossAoeWaveAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t upgrade_cloaking_device = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe78250; // CCitadel_ArmorUpgrade_CloakingDevice
            constexpr std::ptrdiff_t upgrade_prism_blast = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_ShockTargetVData {
            constexpr std::ptrdiff_t  = 0x9072f0d8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 	bè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TurretClone_VData {
            constexpr std::ptrdiff_t  = 0x907cae28; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Gravity_Lasso_Self {
            constexpr std::ptrdiff_t  = 0x906ec190; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_ShieldedSentry = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_BubbleVData {
            constexpr std::ptrdiff_t  = 0x8000010f; // CitadelItemVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PullDownToGround {
            constexpr std::ptrdiff_t  = 0x8f3cb3b0; // CCitadelModifier
            constexpr std::ptrdiff_t A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set) = 0x8fe9a410; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAbilityCadenceSilenceContraptionsVData {
            constexpr std::ptrdiff_t  = 0x0; // CBaseDashCastAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t àÁ[è˝ = 0x8f5bdca0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLogicPlayerProxy {
            constexpr std::ptrdiff_t  = 0x9003e2d8; // CLogicalEntity
            constexpr std::ptrdiff_t CLogicBranchList = 0x0; // 
            constexpr std::ptrdiff_t  6ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x900335e0; // »Pw˛
        }

        // Parent: m_bRollOnceForAllBulletsInAShot
        // Fields: 2
        namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
            constexpr std::ptrdiff_t  = 0x8f6aff68; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9041a710; // êˇjè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Rutger_CheatDeath_VData {
            constexpr std::ptrdiff_t  = 0x8f6962b0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ‡biè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierRapidFireChannelVData {
            constexpr std::ptrdiff_t  = 0x90745638; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x907084d8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FlyingStrikeTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t  = 0x8f71fe90; // CCitadel_Modifier_FlyingStrikeTarget
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Spinning_Blade {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bomber_Ability03 {
            constexpr std::ptrdiff_t  = 0x906eacf0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadelAbilityDruidAbility04 = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f31cf50; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_FireBombVData {
            constexpr std::ptrdiff_t  = 0x8f62dd50; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // à›bè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Surging_Power {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_SiphonBulletsVData = 0x18b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerControllerAPI {
        }

        // Parent: None
        // Fields: 5
        namespace CSimpleMarkupVolumeTagged {
            constexpr std::ptrdiff_t  = 0x0; // CMarkupVolumeTagged
            constexpr std::ptrdiff_t CSimpleMarkupVolumeTagged = 0x7c0; // 
            constexpr std::ptrdiff_t  = 0x90035e00; // 0àˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CSimpleMarkupVolumeTagged
            constexpr std::ptrdiff_t  = 0x8f88cb70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CEnvSoundscapeAlias_snd_soundscape {
            constexpr std::ptrdiff_t  = 0x90553cb0; // CEnvSoundscape
            constexpr std::ptrdiff_t @RÛè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Boss_Tier3VData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hideout_Teleport {
            constexpr std::ptrdiff_t  = 0x8fee3718; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelHeroComponent = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SwingLineVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_AuraModifier
        // Fields: 3
        namespace CCitadel_Modifier_BigBoltVData {
            constexpr std::ptrdiff_t  = 0x907f1df8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞ûÁè˝ = 0x8f6a0290; // 
            constexpr std::ptrdiff_t  = 0x901fd850; // ¿jè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_LurkersAmbush_InvisVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_InvisVData
            constexpr std::ptrdiff_t  = 0x8f6893a0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffa2890; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x800006dd; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_GenericPerson_4 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Fencer_ThrowBladeVData = 0x1c48; // 
            constexpr std::ptrdiff_t ~bè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGenericPerson1VData {
            constexpr std::ptrdiff_t  = 0x9074d1f8; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_fortuna_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Opera_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: m_flBombBonusHits
        // Fields: 3
        namespace CCitadel_Ability_StickyBomb {
            constexpr std::ptrdiff_t  = 0x8ff756b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TargetPracticeSelfVData {
            constexpr std::ptrdiff_t  = 0x8f5be770; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // àÁ[è˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityChronoSwapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CAnimGraphControllerBase
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechCleaveDamageTaken_t {
        }

        // Parent: None
        // Fields: 2
        namespace CModifierVitalitySuppressorVData {
            constexpr std::ptrdiff_t  = 0x9023cf10; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // hs/è˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityMantleVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t x›,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TurnCameraToTarget {
            constexpr std::ptrdiff_t  = 0x8f3b26f8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 1
        namespace CRenderComponent {
            constexpr std::ptrdiff_t  = 0x8ff04fc0; // CEntityComponent
        }

        // Parent: None
        // Fields: 4
        namespace CWaterBullet {
            constexpr std::ptrdiff_t  = 0x8ff6f940; // CBaseAnimGraph
            constexpr std::ptrdiff_t CWaterBullet = 0xa90; // 
            constexpr std::ptrdiff_t  = 0x90073450; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CWaterBullet
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerSoundscape {
            constexpr std::ptrdiff_t  = 0x8ff353a0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dce2f00; // 
            constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelDruidInvisAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Sleep
            constexpr std::ptrdiff_t CCitadelDruidInvisAura = 0x110; // 
            constexpr std::ptrdiff_t ¥[è˝ = 0x0; // PcÈè˝
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Doorman_Cart_Projectile {
            constexpr std::ptrdiff_t  = 0x8de97200; // CCitadelProjectile
            constexpr std::ptrdiff_t  …˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90631928; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9cf49e0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Nikuman {
            constexpr std::ptrdiff_t  = 0x8e0e6ef0; // CCitadelModifierAura
            constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_LeapParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strInFlightAnimGraphParam = 0x19d8; // CGlobalSymbol
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_FireConCommandVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ‡hÅ¡˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityShivDashVData {
            constexpr std::ptrdiff_t  = 0x9080da78; // CitadelAbilityVData
            constexpr std::ptrdiff_t operative_umbrella_maneuver = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_CultistSacrifice_VData {
            constexpr std::ptrdiff_t  = 0x800000c1; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_superacolytegloves = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe83dd8; // CCitadel_TechUpgrade_SuperAcolyteGloves
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicClarityWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x90257948; // 
            constexpr std::ptrdiff_t upgrade_cold_front = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TeamRelativeParticleVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPunchableNeutralGoldVData {
            constexpr std::ptrdiff_t  = 0x10000; // CCitadelItemPickupVData
        }

        // Parent: None
        // Fields: 0
        namespace CPointTeleportAPI {
        }

        // Parent: None
        // Fields: 4
        namespace CItemParachute {
            constexpr std::ptrdiff_t  = 0x8fedfb10; // CPhysicsProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d7b8800; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_MagicBolt {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t êq˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9079d8c0; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9d35960; // 
        }

        // Parent: m_flNextShotTime
        // Fields: 4
        namespace CCitadel_CosmeticItem_Snowball {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t `?Áè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90216a70; // ¯Mw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9ceeb60; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InHideoutMap {
            constexpr std::ptrdiff_t  = 0x8feddd20; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPointChildModifier {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CPointChildModifier = 0x4a8; // 
            constexpr std::ptrdiff_t @?Rè˝ = 0x8ff1ee68; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatFlipMaxHealthBuff {
            constexpr std::ptrdiff_t  = 0x8f68e280; // CCitadelModifier
        }

        // Parent: »Pw˛
        // Fields: 3
        namespace CCitadel_Modifier_AnimalCurseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f6ab1d8; // CAI_CitadelNPC_GraphController
            constexpr std::ptrdiff_t  = 0x901fd850; // Ë±jè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTokamakHeatSinksInherentVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t »Jrè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpreadingFire_DOT {
            constexpr std::ptrdiff_t  = 0x8f30b078; // CCitadel_Modifier_Burning
            constexpr std::ptrdiff_t  = 0x8f62edf8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IcarusWingsVData {
            constexpr std::ptrdiff_t  = 0x8f305008; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t  = 0x9021a690; // P0è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ColossusActive {
            constexpr std::ptrdiff_t  = 0x902c45c0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_SpiritSap = 0x0; // 
        }

        // Parent: 0¥Èè˝
        // Fields: 2
        namespace CCitadel_Modifier_MagicShock_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_AcolytesGlove {
            constexpr std::ptrdiff_t  = 0x90289f40; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Item_RejuvTrackingProjectile = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
        }

        // Parent: m_nTotalPausedTicks
        // Fields: 7
        namespace CShatterGlassShardPhysics {
            constexpr std::ptrdiff_t  = 0x8ff2cb60; // CPhysicsProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x8f53e9e8; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dc3f170; // 
            constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
            constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
            constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelAbilityDruidHelicopterSeeds {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5c1840; // CCitadel_Ability_Chrono_TimeWallVData
            constexpr std::ptrdiff_t  = 0x8ff7df50; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GoatFlipDamageBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f68e2b8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_GenericPerson_2 {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ã∆æeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e586c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SettingSunThinker {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f72f488; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ProjectMind {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_VenomVData = 0x750; // 
            constexpr std::ptrdiff_t  = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MetalSkinVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f324e30; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // HN2è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier2Boss_StatTracker {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RespawnCredit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Root = 0xd0; // 
        }

        // Parent: m_bvEnabledStateMask
        // Fields: 0
        namespace CModifierProperty {
        }

        // Parent: m_bAlignCameraOnAutoDismount
        // Fields: 6
        namespace CCitadelTeleportTrigger {
            constexpr std::ptrdiff_t  = 0x8fecedf0; // CTriggerModifier
            constexpr std::ptrdiff_t server = 0x70108; // 
            constexpr std::ptrdiff_t  = 0x8f43ffd0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d695770; // 
            constexpr std::ptrdiff_t m_iszModifierName = 0x8e0; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_tModifier = 0x8e8; // CUtlStringToken
        }

        // Parent: None
        // Fields: 3
        namespace CNPC_Neutral_Weakpoint {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CNPC_Neutral_Weakpoint = 0x7a0; // 
            constexpr std::ptrdiff_t  = 0x8ff11378; // êrıè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Cyclone {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Protection_RacketVData = 0x1908; // 
            constexpr std::ptrdiff_t HÏqè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T3Boss_EffigyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
        }

        // Parent: m_flRadius
        // Fields: 2
        namespace CPathParticleRope {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CMarkupVolume = 0x788; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_DoubleHit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5a2a58; // CCitadel_FissureWall
            constexpr std::ptrdiff_t  = 0x8ff857b0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_Darkness_Caster_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t òÜZè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Thumper_3 {
            constexpr std::ptrdiff_t  = 0x8ffbfb20; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x601ff; // 
        }

        // Parent: m_DroneModifier
        // Fields: 1
        namespace CAbilityWreckerUltimateVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_BulletFlurryVData {
            constexpr std::ptrdiff_t  = 0x8f639d90; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90222fd0; // †ùcè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LifeDrainVData {
            constexpr std::ptrdiff_t  = 0x800005f0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e0d35f0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Base {
            constexpr std::ptrdiff_t  = 0x8f3d4640; // CCitadelModifier
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f3d4b38; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_SpiderProjectile {
            constexpr std::ptrdiff_t  = 0x909089e0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_KickFlip = 0x0; // 
            constexpr std::ptrdiff_t  = 0x7074dc90; // 
            constexpr std::ptrdiff_t  = 0x7074dc90; // 
        }

        // Parent: m_bImpulseApplied
        // Fields: 4
        namespace CCitadel_UtilityUpgrade_RocketBooster {
            constexpr std::ptrdiff_t  = 0x8fe7e330; // CCitadel_UtilityUpgrade_RocketBoots
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1f2e40; // 
            constexpr std::ptrdiff_t †„Áè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_HealthRegenAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2ddaa8; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2e2db0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T2Boss_Staggered {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t ProjectileInfo_t = 0x398; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_NPCAbility_Shield_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCredits {
            constexpr std::ptrdiff_t  = 0x9001d710; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AttachLaunchOff {
            constexpr std::ptrdiff_t  = 0x8ff8fde0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: HÉÏ(ã&›îeHã%X
        // Fields: 3
        namespace CCitadel_Modifier_Fear_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f70ea88; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hÙpè˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Wrecker_UltimateThrowEnemyVData {
            constexpr std::ptrdiff_t  = 0x908c45a8; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1a60; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LightningBallVData {
            constexpr std::ptrdiff_t  = 0x9070d508; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f62bb50; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hªbè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Dazed {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ZiplineBoost {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_VexBarrier = 0xff8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Arcane_Eater_Debuff {
            constexpr std::ptrdiff_t  = 0x8d237580; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Teleport = 0xf98; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Containment_Victim {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8d2287d0; // CCitadel_Item_TrackingProjectileApplyModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Trooper_InEnemyBaseResistVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelLootTable {
            constexpr std::ptrdiff_t  = 0x8f497450; // CCitadelLootTableBase
        }

        // Parent: None
        // Fields: 7
        namespace CInfoTutorialController {
            constexpr std::ptrdiff_t  = 0x8fef9890; // CDynamicProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d999c10; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f4cb0f8; // MPropertyStartGroup
            constexpr std::ptrdiff_t Particle that's fired when the point becomes active. = 0x8f4cb198; // 
            constexpr std::ptrdiff_t m_ZoneParticle = 0x4a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ArcticBlast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t GËè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fe84640; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9cef160; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PowerGenerator {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerGenerator = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_BarrageVData {
            constexpr std::ptrdiff_t  = 0x90855198; // CitadelAbilityVData
            constexpr std::ptrdiff_t synth_pulse = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Haze_StackingDamage {
            constexpr std::ptrdiff_t  = 0x8f62e848; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shivas_Bracelet_Watcher {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: m_GroundDashCancelExecuteTime
        // Fields: 3
        namespace CCitadel_Ability_Dash {
            constexpr std::ptrdiff_t  = 0x8fe682e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f2c7a20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFishPool {
            constexpr std::ptrdiff_t  = 0x8ff5f7f0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_arrForceSubtickMoveWhen
        // Fields: 1
        namespace CPlayer_MovementServices {
            constexpr std::ptrdiff_t  = 0x8fffb9d0; // CPlayerPawnComponent
        }

        // Parent: None
        // Fields: 5
        namespace CRagdollPropAlias_physics_prop_ragdoll {
            constexpr std::ptrdiff_t  = 0x0; // CRagdollProp
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CBreakableProp {
            constexpr std::ptrdiff_t  = 0x8ff577e0; // CBaseProp
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x8f564cb8; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dd65db0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLightEntity {
            constexpr std::ptrdiff_t  = 0x8ff1ea40; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t  = 0x8f523db0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CInfoDynamicShadowHintBox {
            constexpr std::ptrdiff_t  = 0x8ff04e40; // CInfoDynamicShadowHint
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da60ce0; // 
        }

        // Parent: m_vecSecondarySkeletons
        // Fields: 2
        namespace CBaseAnimGraphController {
            constexpr std::ptrdiff_t  = 0x8ff58210; // CSkeletonAnimationController
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Shiv_Defer_Damage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseShivAbility
            constexpr std::ptrdiff_t  = 0x8ffabaf0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SleepDagger_Drowsy {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_SleepDagger_Drowsy = 0x250; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f5a0df0; // CCitadel_Modifier_Forge_MiniTurret_InnateModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Leap_Boosting {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_RocketBarrageVData = 0x19d8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_StaticCharge_V2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f637c60; // CCitadel_Modifier_Frank_Zombie
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MeleeCharge {
            constexpr std::ptrdiff_t  = 0x8f2e69c0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8f2e70b0; // 
            constexpr std::ptrdiff_t  = 0x8f2e7188; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FireRateAura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Shadow_Strike_Watcher = 0x2a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SilencerProcActive {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Modifier_ArcaneEaterProcVData = 0x790; // 
            constexpr std::ptrdiff_t pŒ.è˝ = 0x0; // †°Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Scheduler {
            constexpr std::ptrdiff_t  = 0x8feb8480; // CAI_Component
        }

        // Parent: None
        // Fields: 0
        namespace CBuoyancyHelper {
        }

        // Parent: None
        // Fields: 4
        namespace COrnamentProp {
            constexpr std::ptrdiff_t  = 0x9005e4d0; // CDynamicProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e978eb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ModDisruptor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t m_hRicochetModifier = 0xf78; // CModifierHandleTyped<CCitadel_Modifier_ApexCombat_Proc>
            constexpr std::ptrdiff_t  = 0x9024acd0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperNeutralGrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RapidFire {
            constexpr std::ptrdiff_t  = 0x8ff89980; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ReturnFireVData {
            constexpr std::ptrdiff_t  = 0x902b1118; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_tier3boss_drop_bombs = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe85388; // CCitadel_Ability_Tier3Boss_DropBombs
        }

        // Parent: HÉÏ(ã∆ÁòeHã%X
        // Fields: 2
        namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
            constexpr std::ptrdiff_t  = 0x80000149; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_CatAnimating {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t m_CachedTarget = 0xf70; // CHandle<CBaseEntity>
            constexpr std::ptrdiff_t ÿ˘è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9cff3c0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CMarkupVolumeTagged_NavCitadel {
            constexpr std::ptrdiff_t  = 0x0; // CMarkupVolumeWithRef
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Modifier_Werewolf_HuntAura_Werewolf {
            constexpr std::ptrdiff_t  = 0x8e29a770; // CCitadelModifierAura_Cone
            constexpr std::ptrdiff_t m_LiftModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_TargetParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TargetCastSound = 0x1908; // CSoundEventName
            constexpr std::ptrdiff_t  = 0x8ffbfb20; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_GlassCannon {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f328b30; // MPropertyStartGroup
            constexpr std::ptrdiff_t  = 0x8f2f4c38; // 0ã2è˝
        }

        // Parent: None
        // Fields: 3
        namespace CModelPointEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t êâıè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x0; // »Pw˛
        }

        // Parent: ®Ow˛
        // Fields: 3
        namespace CModifierBossInvulnVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPC_GraphController
            constexpr std::ptrdiff_t  = 0xa9b85588; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Frank_ShockTarget2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t êî¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff89370; // ®Ow˛
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_SalvoBullet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t CAbilityPowerSurgeVData = 0x19f8; // 
            constexpr std::ptrdiff_t ò_1è˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CAbilityPowerSurgeVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AirLiftExplodingAlly {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_FlyingStrikeTarget = 0xd0; // 
        }

        // Parent: CCitadel_Ability_HornetLeap
        // Fields: 3
        namespace CCitadel_Ability_HornetLeap {
            constexpr std::ptrdiff_t  = 0x8dff85b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f630b18; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilencedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ÄÜÁè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Item_AOESilence_Target {
            constexpr std::ptrdiff_t  = 0x902ce180; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_ArcticBlast = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fervor_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BlastPush {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9c15bd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Basic_HealthRegen {
            constexpr std::ptrdiff_t  = 0x8fe95b40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CRectLight {
            constexpr std::ptrdiff_t  = 0x8ffcd880; // CBarnLight
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f78bec0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e3aea60; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_AbilityName {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_GuardianWard {
            constexpr std::ptrdiff_t  = 0x8fe76630; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d20e270; // 
        }

        // Parent: None
        // Fields: 5
        namespace CFilterMultiple {
            constexpr std::ptrdiff_t  = 0x8f4b714c; // CBaseFilter
            constexpr std::ptrdiff_t New Schedule = 0x8f82efd8; // 
            constexpr std::ptrdiff_t Interrupt Condition = 0x8f82f020; // 
            constexpr std::ptrdiff_t  -ˇè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fff2cc0; // 0Iw˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_Gravestone_Buff {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãvl´eHã%X = 0x8f69ea88; // CCitadel_Modifier_Necro_Gravestone_Buff
        }

        // Parent: CCitadel_Ability_Drifter_Hunger
        // Fields: 2
        namespace CCitadel_Ability_Drifter_Hunger {
            constexpr std::ptrdiff_t  = 0x8ff7be70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Rutger_RocketLauncher_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGarbageVData {
            constexpr std::ptrdiff_t  = 0x800007ec; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f72cae0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PatronsBlessingTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ∞XËè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierGlitchVData {
            constexpr std::ptrdiff_t  = 0x902bf618; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_diviners_kevlar = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VitalitySuppressor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_T3Boss_AoeWaveAura = 0x288; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierTier3BossLaserBeamDebuffVData {
            constexpr std::ptrdiff_t  = 0x8f2e2cd8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // -.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_FireCursors {
            constexpr std::ptrdiff_t  = 0x900d8f60; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelTriggerHurt {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerHurt
            constexpr std::ptrdiff_t  = 0x8f42b7b0; // CCitadel_Modifier_LifeSteal_Watcher
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t CCitadelTriggerHurt = 0x968; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncNavBlocker {
            constexpr std::ptrdiff_t  = 0x8ff70e90; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CMoverPathNode {
            constexpr std::ptrdiff_t  = 0x8ff62410; // CPathNode
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ddc5c10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CEnvSoundscape {
            constexpr std::ptrdiff_t  = 0x8ff6f3f0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatTethered {
            constexpr std::ptrdiff_t  = 0x8ffa7690; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FearWatcher {
            constexpr std::ptrdiff_t  = 0x8f710570; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadelAbilityTangoTetherVData = 0x1a38; // 
            constexpr std::ptrdiff_t Ü1è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FissureWallVData {
            constexpr std::ptrdiff_t  = 0x800005d0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Parry {
            constexpr std::ptrdiff_t  = 0x8fe6b3e0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicCarpet_SummonVData {
            constexpr std::ptrdiff_t  = 0x9035d438; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_tier2boss_aoe_wave = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe80f18; // CCitadel_Ability_Tier2Boss_AoEWave
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_FocusLens_VData {
            constexpr std::ptrdiff_t  = 0x8f2f8be8; // CCitadel_Item_TrackingProjectileApplyModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // å/è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CCitadel_Announcer_Base {
            constexpr std::ptrdiff_t  = 0x8f40df38; // CBaseCombatCharacter
            constexpr std::ptrdiff_t Scale the accuracy by this amount at distance = 0x8f40e020; // 
            constexpr std::ptrdiff_t Citadel bots will purchase available upgrades in order every few seconds = 0x8f40e150; // 
            constexpr std::ptrdiff_t CCitadel_Announcer_Base = 0xba0; // 
            constexpr std::ptrdiff_t  = 0x8fec63c8; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadel_Announcer_Base
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
            constexpr std::ptrdiff_t  = 0x90827918; // CCitadelModifierAura_ConeVData
            constexpr std::ptrdiff_t  = 0x901fe630; // Ä*jè˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247c80; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelBoomerangProjectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f630ca8; // CCitadel_Ice_Dome_Blocker
            constexpr std::ptrdiff_t  = 0x8ff94610; // 
            constexpr std::ptrdiff_t cxê˝ = 0xa9a32800; // ¿Ccè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_FuryTrance {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t CCitadel_Modifier_IcarusWingsVData = 0x840; // 
            constexpr std::ptrdiff_t 0™.è˝ = 0x0; // p¬Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CFuncBrush {
            constexpr std::ptrdiff_t  = 0x8ff69060; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PunkgoatPullVData {
            constexpr std::ptrdiff_t  = 0x907cf290; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9080da78; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GangActivity_AbilitySwap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_RadiantFlareBonusDamage = 0x1d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Trappers_Bolo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Trappers_Bolo = 0x1298; // 
        }

        // Parent: CCitadel_Ability_PsychicLift
        // Fields: 1
        namespace CCitadel_Ability_PsychicLift {
            constexpr std::ptrdiff_t  = 0x8f2e6560; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_ReturnFireVData {
            constexpr std::ptrdiff_t  = 0x9029d998; // CitadelItemVData
            constexpr std::ptrdiff_t ¯1è˝ = 0x8f31f0f0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe813e0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Trooper_InEnemyBaseResist {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_InFountain = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TeleportToObjectiveVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupIdolVData {
            constexpr std::ptrdiff_t  = 0x9048dab8; // CCitadelItemPickupVData
        }

        // Parent: None
        // Fields: 2
        namespace CBodyComponentPoint {
            constexpr std::ptrdiff_t  = 0x8ff05560; // CBodyComponent
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 6
        namespace CNPC_Neutral_Hideout_Rabbit {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_Neutral_Hideout_Cat
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Rabbit = 0xca0; // 
            constexpr std::ptrdiff_t  = 0x8ff10128; // @Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Neutral_Hideout_Rabbit
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x1810; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoHeroTestingController {
            constexpr std::ptrdiff_t  = 0x9042b280; // CPointEntity
            constexpr std::ptrdiff_t CRegenerateZone = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f43dd78; // CCitadelPushTrigger
        }

        // Parent: None
        // Fields: 4
        namespace CPhysBox {
            constexpr std::ptrdiff_t  = 0x8ff6b740; // CBreakable
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de05860; // 
        }

        // Parent: m_vMins
        // Fields: 3
        namespace CSoundEventAABBEntity {
            constexpr std::ptrdiff_t  = 0x0; // CSoundEventEntity
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f531d88; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPlayerTrackedStatsEntity {
            constexpr std::ptrdiff_t  = 0x90084710; // CBaseTrackedStatsEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f9165e8; // 
        }

        // Parent: CCitadel_Ability_Familiar_Attach
        // Fields: 2
        namespace CCitadel_Ability_Familiar_Attach {
            constexpr std::ptrdiff_t  = 0x8ff91cc0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_StackingDefenseVData {
            constexpr std::ptrdiff_t  = 0x90830bc8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // †jè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VampireBat_BatCloud_Self {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifierVandalOverflowVData = 0x920; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_WreckingBall {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ã∆üëeHã%X = 0x1f7934a0; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0x8f2cd848; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_UtilityUpgrade_AOESmokeBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0%Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_KineticSashTriggered_VData {
            constexpr std::ptrdiff_t  = 0x8f2eb008; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // ∞.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NearbyEnemyBoostVData {
            constexpr std::ptrdiff_t  = 0x9024db38; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Trooper_ShrineDownBuff {
            constexpr std::ptrdiff_t  = 0x8d38ff70; // CCitadelModifier
            constexpr std::ptrdiff_t 8Pw˛ = 0x8f3b7758; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTriggerModifier {
            constexpr std::ptrdiff_t  = 0x8f40f9c8; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x1; // m_nPlayerSlot
            constexpr std::ptrdiff_t »Pw˛ = 0x8f43feb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CItemSoda {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CItemSoda = 0xa90; // 
            constexpr std::ptrdiff_t  = 0x90015128; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CItemSoda
        }

        // Parent: m_nFastFireEndTime
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_BurstFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritBurnProcWatcherVData = 0x790; // 
            constexpr std::ptrdiff_t ∫1è˝ = 0x0; // †°Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_SpiritBurnProcWatcherVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerUp_Survival {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ScalingPowerUp
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Survival = 0xd8; // 
            constexpr std::ptrdiff_t  = 0x0; // ‡VÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_KnockbackBuff {
            constexpr std::ptrdiff_t  = 0x8e10c620; // CCitadelModifier
            constexpr std::ptrdiff_t m_DashModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Thumper_EnemyPulled {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_WebWall_Debuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Radiance {
            constexpr std::ptrdiff_t  = 0x8ffbe6d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Kobun {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Werewolf_FrenzyVData = 0x1ae8; // 
            constexpr std::ptrdiff_t  = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SleepDaggerAsleepVData {
            constexpr std::ptrdiff_t  = 0x8f632950; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Ä)cè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_OverdriveClip_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DivinersKevlarBuff {
            constexpr std::ptrdiff_t  = 0x8d211b30; // CCitadelModifier
            constexpr std::ptrdiff_t m_PullSound = 0x750; // CSoundEventName
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TimelineTimelineEvent_t {
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelPushTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerModifier
            constexpr std::ptrdiff_t  = 0x8f43f4b0; // 
            constexpr std::ptrdiff_t CCitadelPushTrigger = 0x908; // 
            constexpr std::ptrdiff_t ¯&;è˝ = 0x8fecd098; // ‡ﬁÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelPushTrigger
        }

        // Parent: m_bShowLight
        // Fields: 4
        namespace COmniLight {
            constexpr std::ptrdiff_t  = 0x8ffcd970; // CBarnLight
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f78bf30; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e3aeb50; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Pillar {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t CAbility_Werewolf_Frenzy = 0x1390; // 
            constexpr std::ptrdiff_t 0ﬁ[è˝ = 0x8ffc3558; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CAbility_Werewolf_Frenzy
        }

        // Parent: None
        // Fields: 2
        namespace CBaseModifierAura {
            constexpr std::ptrdiff_t  = 0x8ffd2910; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTriggerVolume {
            constexpr std::ptrdiff_t  = 0x9007c2a8; // CBaseModelEntity
            constexpr std::ptrdiff_t CChangeLevel = 0x0; // 
            constexpr std::ptrdiff_t –&ê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CrowdControl_Diminish_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_CrowdControl_Diminish_Watcher = 0xe8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fathom_ScaldingSpray {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelProjectile
            constexpr std::ptrdiff_t Visuals = 0x8ffae200; // 
        }

        // Parent: m_SelfModifier
        // Fields: 2
        namespace CAbilityAstroRifleVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_chrono_time_wall = 0x0; // 
        }

        // Parent: 0¯>ç˝
        // Fields: 0
        namespace CCitadelPlayOfTheGame {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IntervalTimerCursorState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseRequirement {
            constexpr std::ptrdiff_t  = 0x900cbf70; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Airheart_MarkVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Doorman_BellAura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f5b5190; // CCitadel_Modifier_Doorman_BellAura
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_RocketLauncher_Rocket {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f61efe8; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f2cce70; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 4
        namespace CEnvExplosion {
            constexpr std::ptrdiff_t  = 0x9001db80; // CModelPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e84d0c0; // 
        }

        // Parent: m_vDashStartPos
        // Fields: 3
        namespace CAbility_Fencer_Lunge {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8f496d28; // 
            constexpr std::ptrdiff_t  = 0x8f639d40; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGenericPerson4VData {
            constexpr std::ptrdiff_t  = 0x9077ea98; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_frank_shocktarget2 = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Chrono_PulseGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_CCitadelMinimapComponent = 0x860; // CCitadelMinimapComponent
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IntensifyingClip {
            constexpr std::ptrdiff_t  = 0x902750d0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegenerativeArmor = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_Tier3Boss_LaserBeamVData {
            constexpr std::ptrdiff_t  = 0x8f2e5ab8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x902134b0; // –Z.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NoCatapult {
            constexpr std::ptrdiff_t  = 0x8f3d10b8; // CCitadelModifier
            constexpr std::ptrdiff_t Custom = 0x8f3b5988; // CCitadel_Modifier_NoCatapult
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
            constexpr std::ptrdiff_t  = 0x8fe94480; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: ∞ƒê˝
        // Fields: 2
        namespace CPulseCell_BaseState {
            constexpr std::ptrdiff_t  = 0x900d9df0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace OutflowWithRequirements_t {
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Item_ProjectileTest02 {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadel_Item_ProjectileTest
            constexpr std::ptrdiff_t m_bStartCooldown = 0xf78; // bool
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
            constexpr std::ptrdiff_t  = 0xa9c19b00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GoatCharging {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f6909f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_AntiSpiritVest {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6904a8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ShakedownPulse {
            constexpr std::ptrdiff_t  = 0x8ffc84c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechBurst_Proc {
            constexpr std::ptrdiff_t  = 0x8f315110; // CCitadel_Modifier_BaseEventProc
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier2Boss_LaserBeam {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9c19b00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Near_Climbable_RopeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CDestructableBuildingVData {
            constexpr std::ptrdiff_t  = 0x90460ac8; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOThreeStringArgs_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t  = 0x900d0400; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Pickup_AssignedGold {
            constexpr std::ptrdiff_t  = 0x8fec8de0; // CCitadel_Pickup
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d5e8b30; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ControlPointBlockerAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t »Pw˛ = 0x8f46c290; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f46c2a0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f46c2b0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RadiantFlareBonusDamageVData {
            constexpr std::ptrdiff_t  = 0x8f710720; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 8qè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Trapper_SpiderJar {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_RiotProtocol = 0xff8; // 
            constexpr std::ptrdiff_t Xœhè˝ = 0x8ffc6958; // ∞éÈè˝
        }

        // Parent: ∞ﬁ˜è˝
        // Fields: 3
        namespace CCitadel_Ability_Bounce_Pad {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Gameplay = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDashBurnVData {
            constexpr std::ptrdiff_t  = 0x907036f8; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CItemAOERootVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // Hé1è˝
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CPulseCell_Value_Gradient {
            constexpr std::ptrdiff_t  = 0x900d90e0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: CGameSceneNode::m_hParent
        // Fields: 2
        namespace CParticleSystem {
            constexpr std::ptrdiff_t  = 0x8fffe3d8; // CBaseModelEntity
            constexpr std::ptrdiff_t CPathWithDynamicNodes = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierUnstickVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x9038b8b0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_PlayEffectOnDeath {
            constexpr std::ptrdiff_t  = 0x8ffd2770; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTriggerBrush {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CTriggerBrush = 0x7d0; // 
            constexpr std::ptrdiff_t †⁄Gè˝ = 0x90033e60; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorway_Minimap_Range {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorway_Minimap_Range = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tengu_UrnVData {
            constexpr std::ptrdiff_t  = 0x908fbe78; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_unicorn_dazzlingorb = 0x0; // 
        }

        // Parent: CCitadel_Ability_Hornet_Snipe
        // Fields: 2
        namespace CCitadel_Ability_Hornet_Snipe {
            constexpr std::ptrdiff_t  = 0x8ff953a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargedBomb {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
        }

        // Parent: CCitadel_Ability_FlameDash
        // Fields: 2
        namespace CCitadel_Ability_FlameDash {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f328ae8; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_CelestialGuidanceVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9026a7b8; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierAerialAssaultVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  üÁè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier2Boss_LaserBeam {
            constexpr std::ptrdiff_t  = 0x8d1e03a0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f3238a8; // 
            constexpr std::ptrdiff_t  = 0x1; // 
        }

        // Parent: plays for local player victim taking damage from this ability
        // Fields: 3
        namespace CCitadel_Modifier_PullDownToGroundVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PlayerPinged {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t AbilityTooltipDetails_t = 0x30; // 
        }

        // Parent: m_duration
        // Fields: 0
        namespace IntervalTimer {
        }

        // Parent: localBits
        // Fields: 0
        namespace audioparams_t {
        }

        // Parent: None
        // Fields: 9
        namespace CNPC_Neutral_SinnersSacrifice {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_TrooperNeutral
            constexpr std::ptrdiff_t CNPC_Neutral_SinnersSacrifice = 0x1b50; // 
            constexpr std::ptrdiff_t  = 0x8ff11168; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Neutral_SinnersSacrifice
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Pigeon = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Weakpoint = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Weakpoint = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Cat = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Rabbit = 0x3; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelDruidHealingTree {
            constexpr std::ptrdiff_t  = 0x8ff7f5c0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de5aae0; // 
            constexpr std::ptrdiff_t  = 0x8fe68da8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Projectile_FortunaWeapon {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_Revive = 0x1590; // 
            constexpr std::ptrdiff_t »ªbè˝ = 0x8ff96ee0; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Frank_Revive
            constexpr std::ptrdiff_t +Down Strike Params = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_PunkgoatSigilAura {
            constexpr std::ptrdiff_t  = 0x8ffa6170; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f6988f0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e114a20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Tier3Boss_Laser_Aura {
            constexpr std::ptrdiff_t  = 0x9034feb0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_GlassCannon = 0x0; // 
            constexpr std::ptrdiff_t m_flAmountPerSecond = 0xd0; // float32
            constexpr std::ptrdiff_t  = 0x8fe6f520; // CCitadel_Modifier_BaseEventProc
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Doorman_Bomb_DebuffVData {
            constexpr std::ptrdiff_t  = 0x8000053e; // CCitadelModifierVData
            constexpr std::ptrdiff_t V[è˝ = 0x8f5b51d8; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff79ec0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_RocketLauncher {
            constexpr std::ptrdiff_t  = 0x8f622670; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f630b58; // CCitadel_Ability_Familiar_Clone
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Dust_Storm_Aura_Apply {
            constexpr std::ptrdiff_t  = 0x8ff99790; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_VexBarrierVData {
            constexpr std::ptrdiff_t  = 0x90300f18; // CitadelItemVData
            constexpr std::ptrdiff_t †°Èè˝ = 0x9024a668; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RescueBeam {
            constexpr std::ptrdiff_t  = 0x8fe75080; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Pickup_Gold_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup_VData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup_VData
        }

        // Parent: None
        // Fields: 5
        namespace CProjectile_KnightChargeLeading_Projectile {
            constexpr std::ptrdiff_t  = 0x90676ef0; // CProjectile_KnightCharge_Projectile
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_DamageShare = 0x0; // 
            constexpr std::ptrdiff_t  = 0x906a8bd0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_Cadence = 0x0; // 
            constexpr std::ptrdiff_t pï˜è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Thumper_PullAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CAbilityTargetdummy1VData = 0x1818; // 
            constexpr std::ptrdiff_t  = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CAbilityTargetdummy1VData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DisarmProc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Disarmed
            constexpr std::ptrdiff_t  = 0x8f2edc50; // CCitadel_ArmorUpgrade_VexBarrier
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_vPos
        // Fields: 2
        namespace CSoundAreaEntityBase {
            constexpr std::ptrdiff_t  = 0x8ff25250; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Boho_ChannelTether_Tether {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_GrandFinale_BuffVData = 0x850; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_Knockback {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f635078; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f31e590; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_Rend_BulletLifesteal {
            constexpr std::ptrdiff_t  = 0x8de72f70; // CCitadelModifier
            constexpr std::ptrdiff_t m_BurrowPlayerParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoTVData {
            constexpr std::ptrdiff_t  = 0x8f714300; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x908712b0; // Cqè˝
        }

        // Parent: ∞éÈè˝
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_DyingStar {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8fed48a8; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CModifierHighAlertBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f72f680; // 
        }

        // Parent: m_bIsGrabbing
        // Fields: 2
        namespace CCitadel_Ability_Tengu_AirLift {
            constexpr std::ptrdiff_t  = 0x8f2eaa30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f59ed48; // 8n,è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bebop_LaserBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LightningBall {
            constexpr std::ptrdiff_t  = 0x8f62bbc8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f62bc08; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StaticChargeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t @Rbè˝ = 0x8f624c38; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ReinforcingCasingsVData {
            constexpr std::ptrdiff_t  = 0x80000125; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367760; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Fervor_Bonuses_VData {
            constexpr std::ptrdiff_t  = 0x90296718; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f308830; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Objective_RegenVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ZiplineSpeed {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelModifierProjectilePitchingLoopSoundThinkerVData = 0x760; // 
        }

        // Parent: m_tLeapOffTime
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_KickFlip {
            constexpr std::ptrdiff_t  = 0x8ffc7330; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Airheart_Ability01VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t àÁ[è˝ = 0x8f5bdca0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Boho_DoubleHitVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_StackingDefense {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityTokamakHotShotVData {
            constexpr std::ptrdiff_t  = 0x80000805; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_BloodBombVData {
            constexpr std::ptrdiff_t  = 0x8f622520; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 8%bè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_DebuffImmunityVData {
            constexpr std::ptrdiff_t  = 0x90270c88; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0xa9d9fcd8; // 
            constexpr std::ptrdiff_t 	 ê˝ = 0x8d18aef0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItemSilenceGlyphVData {
            constexpr std::ptrdiff_t  = 0x8000006f; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367160; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NeutralDamageGrowth {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ã∂üÅeHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Pickup_Modifier_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup_VData
            constexpr std::ptrdiff_t àôJè˝ = 0x904c2a30; // 
        }

        // Parent: m_nBucketCount
        // Fields: 1
        namespace CTimeline {
            constexpr std::ptrdiff_t  = 0x8ff6d360; // IntervalTimer
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCursorFuncs {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Bubble {
            constexpr std::ptrdiff_t  = 0x8d2378e0; // CCitadel_Modifier_Silenced
            constexpr std::ptrdiff_t m_AOEModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t HÉÏ(ãˆ*òeHã%X = 0x8f2f0e48; // CCitadel_Ability_SuperNeutralShield
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bolo_Leech {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_SpotlightVData = 0x1970; // 
        }

        // Parent: m_bLanded
        // Fields: 2
        namespace CCitadel_Ability_Tengu_StoneForm {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f72cb40; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Viper_SlideBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_SlideBuff = 0x258; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_fencer_riposte_target_select = 0x0; // 
            constexpr std::ptrdiff_t @¸Eè˝ = 0x8ff92628; // CCitadel_Ability_RiposteTargetSelect
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_VacuumAuraTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t CCitadel_Ability_PunkGoat_Tether = 0x1228; // 
            constexpr std::ptrdiff_t jè˝ = 0x8ffabf60; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ElectricSlippers {
            constexpr std::ptrdiff_t  = 0x902a54d0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_AOERoot = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d1bfdd0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TechCleave {
            constexpr std::ptrdiff_t  = 0x8fe6e730; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier3Boss_Base {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_VData {
            constexpr std::ptrdiff_t  = 0x904c2d98; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOFloatStringArgs_t {
        }

        // Parent: m_timescale
        // Fields: 0
        namespace CountdownTimer {
        }

        // Parent: None
        // Fields: 0
        namespace PulseNodeDynamicOutflows_tDynamicOutflow_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FlameDashGroundAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t P€¯è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x90736a48; // CBaseEntity
        }

        // Parent: m_nRenderMode
        // Fields: 3
        namespace CBeam {
            constexpr std::ptrdiff_t  = 0x8ff2b130; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f53c6e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Doorman_Bomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  Ó˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff7ec78; // ¯Mw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bookworm_KnightBarrier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_ThrowSand = 0x1088; // 
            constexpr std::ptrdiff_t ∞á/è˝ = 0x8ff7d248; // ∞éÈè˝
        }

        // Parent: ∞∂˚è˝
        // Fields: 3
        namespace CModifier_WreckerScrapBlastDebuffVData {
            constexpr std::ptrdiff_t  = 0x909459d8; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_werewolf_rifle = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffbb520; // CCitadel_Ability_Werewolf_Rifle
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_GlassCannonVData {
            constexpr std::ptrdiff_t  = 0x8f2fbb70; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // òª/è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Trooper_ShrineDownBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CInfoData {
            constexpr std::ptrdiff_t  = 0x0; // CServerOnlyEntity
            constexpr std::ptrdiff_t CInfoData = 0x830; // 
            constexpr std::ptrdiff_t  = 0x8ff63598; // @yıè˝
        }

        // Parent: Water
        // Fields: 6
        namespace CBasePlayerPawn {
            constexpr std::ptrdiff_t  = 0x8f427f30; // CBaseCombatCharacter
            constexpr std::ptrdiff_t m_radius = 0x4a0; // float32
            constexpr std::ptrdiff_t m_flMaxRadius = 0x4a4; // float32
            constexpr std::ptrdiff_t m_iSoundLevel = 0x4a8; // soundlevel_t
            constexpr std::ptrdiff_t m_dpv = 0x4ac; // dynpitchvol_t
            constexpr std::ptrdiff_t m_fActive = 0x510; // bool
        }

        // Parent: None
        // Fields: 4
        namespace CNPC_Neutral_Hideout_Cat {
            constexpr std::ptrdiff_t  = 0x8ff10bc0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f508780; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8db22970; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Hideout_Clock {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t CCitadelFilterModifier = 0x4e8; // 
            constexpr std::ptrdiff_t ËóAè˝ = 0x8fec7348; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadelFilterModifier
            constexpr std::ptrdiff_t  = 0x8f419248; // CCitadel_Hideout_Clock
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerSuspendModifier {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerSuspendModifier = 0x8e8; // 
            constexpr std::ptrdiff_t „Cè˝ = 0x8fecda10; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CTriggerSuspendModifier
            constexpr std::ptrdiff_t  = 0x8f43d198; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_TrapperPoisonJar_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t Gameplay = 0xa9be0d20; // 
            constexpr std::ptrdiff_t  = 0xa911c610; // 
            constexpr std::ptrdiff_t  = 0x8f2cd848; // HãƒSHÅÏ¿
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_StasisBomb_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f31d538; // CItemAOESilenceAuraVData
            constexpr std::ptrdiff_t  = 0x8fe89860; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // êÕ"ç˝
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_FireUserEntityIO {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CGameModifier_FireUserEntityIO = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Unicorn_DazzlingOrb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_WebWall_Debuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_HealHost {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_BulletFlurry = 0x12c0; // 
            constexpr std::ptrdiff_t ‡®cè˝ = 0x8ff8eef8; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_DimishingTimestop {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t `˙˜è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_Ability01 {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ãV£’eHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Bookworm_ImmobilizeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_RootVData
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityLockDownVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Disruptive_Charge {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f61ef20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ExplosiveBarrel {
            constexpr std::ptrdiff_t  = 0x8ff78fa0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f5aa4f8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Nikuman {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t PG_RisingRamState = 0x90101; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HeadshotBoosterWatcher {
            constexpr std::ptrdiff_t  = 0x8f2eaa30; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t  = 0x8f304760; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8fe7d530; // –~,è˝
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HunterAuraTarget {
            constexpr std::ptrdiff_t  = 0x8f2f9648; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x8f3233c0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // H72è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
            constexpr std::ptrdiff_t  = 0x9027a188; // CitadelItemVData
            constexpr std::ptrdiff_t 0
Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boss_Damage_ProtectionVData {
            constexpr std::ptrdiff_t  = 0x90376b68; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 0
        namespace CBasePulseGraphInstance {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LinkVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // X7Iè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IdolReturnTimer {
            constexpr std::ptrdiff_t  = 0x8fee78b0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bookworm_AOEMagic {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Drifter_StalkersMark_Teleport_VData = 0x1848; // 
            constexpr std::ptrdiff_t PÂYè˝ = 0x0; // ∞IÌè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SmokeGrenade {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ã¨eHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ThrowSandDebuff {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_Disarmed
            constexpr std::ptrdiff_t Modifiers = 0x8f328b30; // 
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8de82a00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Nano_CatFormPounce {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_PunkGoat_GoatFlip = 0x1b00; // 
            constexpr std::ptrdiff_t ¯:?è˝ = 0x8ff9fe68; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_NearDeathFXVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
        }

        // Parent: m_flFadeOutStart
        // Fields: 6
        namespace CNPC_TrooperBoss {
            constexpr std::ptrdiff_t  = 0x8ff0a370; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x401ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da9e530; // 
            constexpr std::ptrdiff_t ‡£è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff0a360; // »Pw˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9d3ac40; // 
        }

        // Parent: CCitadelItemPickupRejuv
        // Fields: 6
        namespace CCitadelItemPickupRejuv {
            constexpr std::ptrdiff_t  = 0x8fee6b70; // CCitadelItemPickup
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t  = 0x8f494a40; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d86c7c0; // 
            constexpr std::ptrdiff_t An offset in addition to the base standing offset while ziplining = 0x8d873170; // 
            constexpr std::ptrdiff_t m_flCameraSideOffset = 0x0; // float32
        }

        // Parent: None
        // Fields: 4
        namespace CAirheartStickyBombInWorld {
            constexpr std::ptrdiff_t  = 0x8de5a6e0; // CBaseAnimGraph
            constexpr std::ptrdiff_t m_flHideDuration = 0x750; // float32
            constexpr std::ptrdiff_t m_flRevealDuration = 0x754; // float32
            constexpr std::ptrdiff_t @¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace FilterHealth {
            constexpr std::ptrdiff_t  = 0x8fff2970; // CBaseFilter
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e6965d0; // 
            constexpr std::ptrdiff_t m_iszEnemyName = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Rutger_Rocket {
            constexpr std::ptrdiff_t  = 0x907caff0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_CatAnimating = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f68fbf0; // CAbilityPerchedPredatorVData
            constexpr std::ptrdiff_t  = 0x8ff9e590; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_ChannelTether = 0x1190; // 
            constexpr std::ptrdiff_t  = 0x8ff7d7b8; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Boho_ChannelTether
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ProjectileTest06 {
            constexpr std::ptrdiff_t  = 0x8f301cb0; // CCitadel_Item_ProjectileTest
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_HeadshotDamage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t Visuals = 0x8f2f6e98; // CCitadel_WeaponUpgrade_SiphonBulletsVData
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // £ç˝
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_OverrideTargetIdentifier {
            constexpr std::ptrdiff_t  = 0x8ffd20d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMathColorBlend {
            constexpr std::ptrdiff_t  = 0x8f47daa0; // CLogicalEntity
        }

        // Parent: None
        // Fields: 3
        namespace CShower {
            constexpr std::ptrdiff_t  = 0x90989520; // CModelPointEntity
            constexpr std::ptrdiff_t CPushable = 0x0; // 
            constexpr std::ptrdiff_t ' = 0x8f575980; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Flying_PigeonVData {
            constexpr std::ptrdiff_t  = 0x9052e2e8; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Unicorn_PrismaticGuard {
            constexpr std::ptrdiff_t  = 0x90922880; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_WreckerScrapBlast = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_AirheartPrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x90699068; // CCitadel_Ability_PrimaryWeaponVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_GunTether {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Operative_UmbrellaManeuver = 0x12f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifire_Bookworm_DragonFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f59fac0; // CCitadel_Modifire_Bookworm_DragonFire
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_ShadowMark_Target {
            constexpr std::ptrdiff_t  = 0x8de767d0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5a2d68; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nearby_Enemy_Boost {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_bSpellBlockActivated = 0xd0; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityPropertySingleStatCurve {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_GraphHook {
            constexpr std::ptrdiff_t  = 0x900cc290; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CScriptNavBlocker {
            constexpr std::ptrdiff_t  = 0x90082650; // CFuncNavBlocker
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8eac43f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ParriedStun {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Knockdown
            constexpr std::ptrdiff_t ØÊè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d34430; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ModDisruptor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Silenced
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_VehicleTopSpeedScale {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CGameModifier_VehicleTopSpeedScale = 0xd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEntityBlocker {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CEntityBlocker = 0x780; // 
            constexpr std::ptrdiff_t  = 0x8ff61590; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Frank_PainAuraVData {
            constexpr std::ptrdiff_t  = 0x8f6261c0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ‡abè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FuryTrance_VData {
            constexpr std::ptrdiff_t  = 0x9022ac48; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 0à0è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PowerUp {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãvÉÅeHã%X = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace SignatureOutflow_Resume {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_ResumePoint
            constexpr std::ptrdiff_t SignatureOutflow_Resume = 0x48; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_WebWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f726820; // CCitadel_Ability_Protection_RacketVData
            constexpr std::ptrdiff_t  = 0x8ffc3180; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // Ä±(é˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_HealthNova {
            constexpr std::ptrdiff_t  = 0x9033cbd0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InstantReload = 0x0; // 
            constexpr std::ptrdiff_t m_flAmountPerSecond = 0xd0; // float32
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemPickupTimer {
            constexpr std::ptrdiff_t  = 0x8fee92f0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_WeakpointVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Unicorn_DazzlingOrbVData {
            constexpr std::ptrdiff_t  = 0x90882a18; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_unicorn_radiantblast = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Werewolf_UnloadGun2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t pø˚è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9cfce10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Werewolf_CripplingSlash {
            constexpr std::ptrdiff_t  = 0x8f720368; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f720318; // CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MageWalk {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Modifiers = 0x8f2c6e38; // MPropertyStartGroup
        }

        // Parent: m_flLatchedTimeScaleFrac
        // Fields: 3
        namespace CCitadel_Ability_Chrono_KineticCarbine {
            constexpr std::ptrdiff_t  = 0x8de57b10; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8f2cd848; // 
            constexpr std::ptrdiff_t m_DragonSpawnParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ChargedShot {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x8f2cce70; // 
            constexpr std::ptrdiff_t  = 0x8f2efec8; // Hÿ,è˝
        }

        // Parent: ®Ow˛
        // Fields: 1
        namespace CCitadel_Modifier_ZiplineBoostVData {
            constexpr std::ptrdiff_t  = 0x90325038; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Backstabber_Watcher {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8fec63f8; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_BurstFireVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t ÄËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_TechDuration {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 0
        namespace CPathSimpleAPI {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerActiveWeaponDetect {
            constexpr std::ptrdiff_t  = 0x90078d88; // CBaseTrigger
            constexpr std::ptrdiff_t CFuncPlatRot = 0x0; // 
            constexpr std::ptrdiff_t ‡6ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x900736a0; // »Pw˛
            constexpr std::ptrdiff_t  = 0xa9d384e0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Archer_ChargedShot {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: m_vPreservedVelocity
        // Fields: 2
        namespace CCitadel_Ability_Airheart_Rocketeer3 {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_Barrage {
            constexpr std::ptrdiff_t  = 0x90810580; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_SmokeGrenade_Blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Targetdummy_Inherent {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_StackingDebuff = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StickyBombAttached {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Astro_Rifle = 0x11f8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PowerJump {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CModifierDoormanHotelImposterFXVData = 0x830; // 
            constexpr std::ptrdiff_t  = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest02VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_ProjectileTestVData
            constexpr std::ptrdiff_t  = 0x902eb9b8; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t H/è˝ = 0x903417e8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_GritVData {
            constexpr std::ptrdiff_t  = 0x80000093; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3671f0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CFuncLadderAlias_func_useableladder {
            constexpr std::ptrdiff_t  = 0x0; // CFuncLadder
            constexpr std::ptrdiff_t Touch_t = 0x10404; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f874de8; // CFuncLadderAlias_func_useableladder
        }

        // Parent: None
        // Fields: 4
        namespace CSpriteOriented {
            constexpr std::ptrdiff_t  = 0x0; // CSprite
            constexpr std::ptrdiff_t CSpriteOriented = 0x7f0; // 
            constexpr std::ptrdiff_t  = 0x8ff2e118; // p‰Úè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CSpriteOriented
        }

        // Parent: None
        // Fields: 3
        namespace CPointServerCommand {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CRotDoor = 0x988; // 
            constexpr std::ptrdiff_t ¯_Vè˝ = 0x900146d8; // ê!ˆè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier3Boss_DropBombs {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CTier3BossAbility
            constexpr std::ptrdiff_t m_SilenceModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x760; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t  = 0x8f308d38; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAutoScaledTime {
        }

        // Parent: m_hMaterialDamageOverlay
        // Fields: 0
        namespace shard_model_desc_t {
        }

        // Parent: m_unTraceID
        // Fields: 3
        namespace CPlayerSprayDecal {
            constexpr std::ptrdiff_t  = 0x8fecd3f0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f43e280; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Discord_AuraVData {
            constexpr std::ptrdiff_t  = 0x800000fd; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367460; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceBomb_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_FireScarabs_HealthLoss_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Synth_Pulse_Escape_VData {
            constexpr std::ptrdiff_t  = 0x908218e8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_magician_bigbolt = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff9fbd0; // CCitadel_Ability_Magician_BigBolt
        }

        // Parent: None
        // Fields: 1
        namespace CModifierThumper_3VData {
            constexpr std::ptrdiff_t  = 0x80000819; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ReinforcingCasings {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CModifier_Upgrade_KineticSashTriggered = 0x158; // 
            constexpr std::ptrdiff_t Hß.è˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BoxingGlove {
            constexpr std::ptrdiff_t  = 0x8fe89980; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MeleeCharge_VData {
            constexpr std::ptrdiff_t  = 0x9025b978; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t p©Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointPrefabAPI {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_PlayVCDVCDRequirementInfo_t {
        }

        // Parent: None
        // Fields: 4
        namespace CEconEntity {
            constexpr std::ptrdiff_t  = 0xae0; // CBaseFlex
            constexpr std::ptrdiff_t server = 0x60210; // 
            constexpr std::ptrdiff_t  = 0x8f8fc678; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ea4dc00; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelViscousBall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModelEntity
            constexpr std::ptrdiff_t Visual = 0x8f328b30; // 
            constexpr std::ptrdiff_t @\˚è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9086c668; // `Jw˛
        }

        // Parent: None
        // Fields: 4
        namespace CItemSilenceGlyph {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
            constexpr std::ptrdiff_t  = 0x8f3143a8; // CCitadel_Item_DivineBarrier_VData
            constexpr std::ptrdiff_t  = 0x8fe78ce0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTankTargetChange {
            constexpr std::ptrdiff_t  = 0x909c4ed0; // CPointEntity
            constexpr std::ptrdiff_t CTriggerOnce = 0x0; // 
            constexpr std::ptrdiff_t ?ê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RadiantFlareBonusDamage {
            constexpr std::ptrdiff_t  = 0x9088b550; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_AirLift = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelAbilityDruidLeechSeed {
            constexpr std::ptrdiff_t  = 0x8ff7d610; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f5b42c0; // 
        }

        // Parent: m_TimeOfRevive
        // Fields: 3
        namespace CCitadel_Ability_Frank_Revive {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ‡˝¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff8fcd0; // `Jw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Protection_Racket {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Werewolf_CripplingSlash = 0x13f0; // 
            constexpr std::ptrdiff_t  = 0x8ffb6c60; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityIncendiaryProjectileVData {
            constexpr std::ptrdiff_t  = 0x9078dcd8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Discord_Enemy {
            constexpr std::ptrdiff_t  = 0x8d1f5ef0; // CCitadelModifier
            constexpr std::ptrdiff_t m_bIsSideHead = 0x750; // bool
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelPlayer_CameraServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayer_CameraServices
            constexpr std::ptrdiff_t CCitadelPlayer_CameraServices = 0x180; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLogicDistanceCheck {
            constexpr std::ptrdiff_t  = 0x8ff63a70; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dde8840; // 
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_KnightCharge_Projectile {
            constexpr std::ptrdiff_t  = 0x906803f0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Bomber_ULT = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5b4d08; // CCitadel_Modifier_RocketBarrageVolley
            constexpr std::ptrdiff_t  = 0x8ff78cd0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Modifier_CatapultStunVData {
            constexpr std::ptrdiff_t  = 0x0; // CModifierKnockdownVData
            constexpr std::ptrdiff_t  = 0xc8d; // ÕÃL>6
            constexpr std::ptrdiff_t  = 0xc8f; // 
            constexpr std::ptrdiff_t  = 0x332; // 
            constexpr std::ptrdiff_t «§ÿ©6 = 0xa9da08f0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_GoldenIdol {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_BaseHeldItem
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: m_Entity_flBrightness
        // Fields: 2
        namespace CEnvCombinedLightProbeVolume {
            constexpr std::ptrdiff_t  = 0x8ff14208; // CBaseEntity
            constexpr std::ptrdiff_t CPointEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_CitadelPlayerBotMotor {
            constexpr std::ptrdiff_t  = 0x0; // CAI_Motor
            constexpr std::ptrdiff_t CAI_CitadelPlayerBotMotor = 0xf70; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelAbilityDruidPlantSomething {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelAbilityDruidBasePlant
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t  = 0x8f5b0b10; // CCitadel_Ability_Bookworm_KnightBarrier
            constexpr std::ptrdiff_t  = 0x8ff75410; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Trapper_StealSpiritDebuff {
            constexpr std::ptrdiff_t  = 0x8ffbd250; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_Affliction_Debuff {
            constexpr std::ptrdiff_t  = 0x9080dc40; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_WeaponSwap = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CrushingFistsDebuff_VData {
            constexpr std::ptrdiff_t  = 0x80000029; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367100; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HollowPoint_Stack {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_ShadowStrikeVData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_SelfBuffModifierVData {
            constexpr std::ptrdiff_t  = 0x90263098; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367280; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NearbyAllyResist {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_BaseEventProc = 0x208; // 
        }

        // Parent: nIndex
        // Fields: 0
        namespace ViewAngleServerChange_t {
        }

        // Parent: None
        // Fields: 4
        namespace CLogicDistanceAutosave {
            constexpr std::ptrdiff_t  = 0x90035830; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c4fb0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LuminousStrikeBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Bookworm_Immobilize {
            constexpr std::ptrdiff_t  = 0x8de8da00; // CCitadel_Modifier_Root
            constexpr std::ptrdiff_t HÉÏ(ã~‘eHã%X = 0x715a35c0; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0x8f59df18; // CCitadel_Modifier_Cadence_SilenceContraptionsVData
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Operative_UmbrellaManeuver {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Shiv_KillingBlow_GraphController = 0xe0; // 
            constexpr std::ptrdiff_t †Çjè˝ = 0x0; // †FÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FearWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t ability_wrecking_ball_throw = 0x0; // 
            constexpr std::ptrdiff_t @¸Eè˝ = 0x8ffb7c08; // CCitadel_Ability_WreckingBallThrow
        }

        // Parent: m_bIsDashing
        // Fields: 4
        namespace CCitadel_Ability_ShivDash {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseShivAbility
            constexpr std::ptrdiff_t ∞éÈè˝ = 0x8f2c7ed0; // MPropertyStartGroup
            constexpr std::ptrdiff_t m_FireRateSlowModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_TetheredModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CItem_ActiveReload_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x902f2328; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f2fbb70; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
            constexpr std::ptrdiff_t  = 0x8f2f4738; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // PG/è˝
        }

        // Parent: m_eAbilityType
        // Fields: 1
        namespace CitadelAbilityVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: m_ItemID
        // Fields: 0
        namespace ItemImbuementPair_t {
        }

        // Parent: None
        // Fields: 3
        namespace CLogicBranch {
            constexpr std::ptrdiff_t  = 0x8f581ad0; // CLogicalEntity
            constexpr std::ptrdiff_t CPulseFuncs_GameParticleManager = 0x1; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x6c; // CPulseFuncs_GameParticleManager
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_Outflow_ScriptedSequence {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 7
        namespace CCitadel_ShopProp {
            constexpr std::ptrdiff_t  = 0x0; // CDynamicProp
            constexpr std::ptrdiff_t CCitadel_ShopProp = 0xcd0; // 
            constexpr std::ptrdiff_t  = 0x8fed9148; // `
ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadel_ShopProp
            constexpr std::ptrdiff_t Visuals = 0x8f326968; // 
            constexpr std::ptrdiff_t HÉÏ(ãFçCeHã%X = 0x1f7934a0; // 
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 7
        namespace CFuncTrackChange {
            constexpr std::ptrdiff_t  = 0x90074ec0; // CFuncPlatRot
            constexpr std::ptrdiff_t server = 0x70108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fec70; // 
            constexpr std::ptrdiff_t 0Oê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90074eb0; // ËQw˛
            constexpr std::ptrdiff_t  = 0xa9d382d0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_TenguUrn_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_HeatSinks_Inherent = 0x1238; // 
            constexpr std::ptrdiff_t PVrè˝ = 0x8ffcb508; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Tokamak_HeatSinks_Inherent
        }

        // Parent: None
        // Fields: 3
        namespace CFuncTrackTrain {
            constexpr std::ptrdiff_t  = 0x8ff6d9a0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvInstructorHint {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CEnvInstructorHint = 0x510; // 
            constexpr std::ptrdiff_t 8hVè˝ = 0x9001d958; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 2
        namespace CEnvWind {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CEnvWind = 0x5d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Werewolf_TrackingBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Ability References = 0x8f72f5a8; // CCitadelAbilityTangoTetherVData
            constexpr std::ptrdiff_t  = 0x8ffb81d0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_SpawnZombies_Area {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Synth_Affliction_VData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_ShadowClone {
            constexpr std::ptrdiff_t  = 0x8ff89a90; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingleVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCrackshotVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Shotgun_Astro_Backwards {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8ff762f8; // 
            constexpr std::ptrdiff_t  = 0x8f5a8c48; // 
            constexpr std::ptrdiff_t  = 0x8f5a8c78; // –~,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Astro_Shotgun_Toggle {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5a7608; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Kelvin_Frozen {
            constexpr std::ptrdiff_t  = 0x8dfc8e40; // CCitadelModifier
            constexpr std::ptrdiff_t m_SleepModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CModifierAirRaidVData {
            constexpr std::ptrdiff_t  = 0x8f5b8f18; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x90414630; // 8è[è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SilenceProcWatcher {
            constexpr std::ptrdiff_t  = 0x8d1ee710; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t m_GlowModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_BuffModifier = 0x760; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ChainLightning {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t CCitadel_Modifier_Item_SmokeBomb_PreCast = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_Item_SmokeBomb_PreCast
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Quarantine {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãFËöeHã%X = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier3Boss_RocketBarrage {
            constexpr std::ptrdiff_t  = 0x0; // CTier3BossAbility
            constexpr std::ptrdiff_t  = 0x8f30de78; // 
            constexpr std::ptrdiff_t CItemSingleTargetStunVData = 0x19a8; // 
            constexpr std::ptrdiff_t »«0è˝ = 0x0; // Ä˝Ëè˝
        }

        // Parent: CScaleFunctionAbilityProperty_HealingBoonScaleVData
        // Fields: 2
        namespace CScaleFunctionAbilityProperty_HealingSpiritScaleVData {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
            constexpr std::ptrdiff_t  = 0x904dd4a8; // CScaleFunctionVData
        }

        // Parent: None
        // Fields: 6
        namespace CTriggerTier3Phase2Shield {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerNeutralShield
            constexpr std::ptrdiff_t CTriggerTier3Phase2Shield = 0x918; // 
            constexpr std::ptrdiff_t 8¯Cè˝ = 0x8fecca28; // –„Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerTier3Phase2Shield
            constexpr std::ptrdiff_t  = 0x712f07b0; // 
            constexpr std::ptrdiff_t X>è˝ = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundEventPathCornerEntity {
            constexpr std::ptrdiff_t  = 0x8ff26df0; // CSoundEventEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f532478; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Swan_Acrobat {
            constexpr std::ptrdiff_t  = 0x907ee680; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_GraveStone = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_ForceField_PushOut {
            constexpr std::ptrdiff_t  = 0x8ffa2330; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Crackshot {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadelModifierDruidLeechSeedVData = 0x750; // 
            constexpr std::ptrdiff_t  = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FlameDash {
            constexpr std::ptrdiff_t  = 0x8ff92ca0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_TechDamage {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBulletTimeWarpVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t  = 0x900cc030; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 6
        namespace CCitadel_PointTalker_Base {
            constexpr std::ptrdiff_t  = 0x0; // CBaseCombatCharacter
            constexpr std::ptrdiff_t CCitadel_PointTalker_Base = 0xba0; // 
            constexpr std::ptrdiff_t  = 0x8fec8520; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadel_PointTalker_Base
            constexpr std::ptrdiff_t  = 0x8fecb648; // CCitadel_PointTalker_Base
            constexpr std::ptrdiff_t CInfoTeamSpawn = 0x0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CDynamicNavConnectionsVolume {
            constexpr std::ptrdiff_t  = 0x8ff6a710; // CTriggerMultiple
            constexpr std::ptrdiff_t server = 0x40110; // 
            constexpr std::ptrdiff_t  = 0x8f588158; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de03e80; // 
            constexpr std::ptrdiff_t Äßˆè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff6a700; // ¯Mw˛
        }

        // Parent: None
        // Fields: 4
        namespace CConstraintAnchor {
            constexpr std::ptrdiff_t  = 0x90048818; // CBaseAnimGraph
            constexpr std::ptrdiff_t CPhysConstraint = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8a86e8; // CConstraintAnchor
            constexpr std::ptrdiff_t  = 0x90042d58; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_DisableGravity {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CGameModifier_DisableGravity = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_PickupItemSpawnerAPI {
        }

        // Parent: m_flGoingUpTargetElevation
        // Fields: 3
        namespace CCitadel_Ability_PunkGoat_GoatFlip {
            constexpr std::ptrdiff_t  = 0x907fd270; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSpirits = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f2cd848; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_SelfZap {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f62d008; // CCitadel_Modifier_Frank_SelfZap
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityGangActivityCancelVData {
            constexpr std::ptrdiff_t  = 0x800007c8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SleepBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6261e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_HatTrick {
            constexpr std::ptrdiff_t  = 0x906446b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Ult = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0xa9e58b00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierPowerJumpVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f5b7978; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fe9d0; // †y[è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MutedVData {
            constexpr std::ptrdiff_t  = 0x902632e8; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_silence_glyph = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe7bb60; // CItemSilenceGlyph
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T2Boss_Wave_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2fb2c8; // CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData
        }

        // Parent: None
        // Fields: 0
        namespace CitadelStolenAbilitySlot_t {
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 2
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t  = 0x900da4b0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: m_flFadeOutStart
        // Fields: 7
        namespace CNPC_BarrackBoss {
            constexpr std::ptrdiff_t  = 0x8ff08d70; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x8f4ecc90; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8daa06f0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Magic_Beam_Blocker {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t 0m˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ffa6ad8; // 0Iw˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9cf87c0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_SurgingPower {
            constexpr std::ptrdiff_t  = 0x90268290; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_GuardianWard = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2ddfc0; // CItemSingleTargetStunVData
            constexpr std::ptrdiff_t  = 0x8fe80320; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoCitadelHideout {
            constexpr std::ptrdiff_t  = 0x8f480440; // CPointEntity
        }

        // Parent: m_Entity_hLightProbeTexture_SH2_DC
        // Fields: 2
        namespace CEnvLightProbeVolume {
            constexpr std::ptrdiff_t  = 0x8ff17470; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fencer_ThrowBlade {
            constexpr std::ptrdiff_t  = 0x8ff8f4a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidPlantBranchWallVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierDruidInvis {
            constexpr std::ptrdiff_t  = 0x8ff81e00; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_SilenceBomb {
            constexpr std::ptrdiff_t  = 0x8f40f9c8; // CCitadelBaseAbility
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f40f9c8; // 
            constexpr std::ptrdiff_t %˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Rutger_ForceField_VData {
            constexpr std::ptrdiff_t  = 0x9081a1c8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f690488; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Gunslinger_Salvo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Nano_ClusterGrenade {
            constexpr std::ptrdiff_t  = 0x907fd710; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Opera_Ability02 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f696e80; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelViscousBallVData {
            constexpr std::ptrdiff_t  = 0x9092d978; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Weapon_BossTier2 {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t m_nDebuffsTotal = 0xd0; // float32
            constexpr std::ptrdiff_t DesiredLaneChanged = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_ScriptConditions {
            constexpr std::ptrdiff_t  = 0x8d5386d0; // CBaseEntity
            constexpr std::ptrdiff_t NPCStatusEffectMap_t = 0x1; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAI_Hint {
            constexpr std::ptrdiff_t  = 0x8fea6e70; // CServerOnlyEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_SettingSun {
            constexpr std::ptrdiff_t  = 0x908e2890; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_RestorativeGooCube = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f72db88; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_Colossus {
            constexpr std::ptrdiff_t  = 0x8f308208; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x0; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseTriggerAbilityVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_ZombieWallVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f6a3170; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fortuna_Ability04 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_GhostBloodShard = 0x2e8; // 
            constexpr std::ptrdiff_t `Æbè˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage {
            constexpr std::ptrdiff_t  = 0x90855360; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_ChargedTackle = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE {
            constexpr std::ptrdiff_t  = 0x906a8bd0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_Cadence = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Wrecker_Ultimate {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Werewolf_UnloadGunVData = 0x1a00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AirRaid {
            constexpr std::ptrdiff_t  = 0x8ff80210; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_bHasHealthForBonuses
        // Fields: 2
        namespace CItemCapacitorVData {
            constexpr std::ptrdiff_t  = 0x8f31d020; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // h–1è˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_KineticSash {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBullets_Buff = 0x158; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SpiritBurnProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x8f31bb58; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // xª1è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ReloadSpeed {
            constexpr std::ptrdiff_t  = 0x8fe93e60; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 7
        namespace CNPC_Neutral_SinnersSacrifice_Hideout {
            constexpr std::ptrdiff_t  = 0x1b50; // CNPC_Neutral_SinnersSacrifice
            constexpr std::ptrdiff_t 0 = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d3ad60; // 
            constexpr std::ptrdiff_t HÉÏ(Lã¬ÉÈt]ÉÈt;ÉÈt*ÉÈtÉ˘udHãIã»HçT$Hˇêh = 0x1; // 
            constexpr std::ptrdiff_t  = 0x8ff08c58; // 
            constexpr std::ptrdiff_t  = 0x1; // 
            constexpr std::ptrdiff_t  = 0x8ff100f8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Thumper_2_AuraVData {
            constexpr std::ptrdiff_t  = 0x8f711550; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x908712b0; // pqè˝
            constexpr std::ptrdiff_t citadel_viscous_ball = 0x0; // 
            constexpr std::ptrdiff_t @r1è˝ = 0x8ffb9a48; // CCitadelViscousBall
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_GarbageAura {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x90085a38; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_KickFlip = 0x1900; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_RegenerativeArmor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_SilenceProc_Immunity = 0xd0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_SilenceProc_Immunity
        }

        // Parent: None
        // Fields: 3
        namespace CInfoTeamSpawn {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_Victim {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_HookSelf = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_VampireBat_LoveBitesProc_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t hÙpè˝ = 0x8f70f0f0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffc2060; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Magician_AnimalCurseVData {
            constexpr std::ptrdiff_t  = 0x8000076f; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityThumper2VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SpiritBurnProcWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritBurnProcWatcher = 0x288; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFuncMoverAPI {
        }

        // Parent: m_angRotation
        // Fields: 0
        namespace CGameSceneNode {
        }

        // Parent: None
        // Fields: 4
        namespace CRopeKeyframeAlias_move_rope {
            constexpr std::ptrdiff_t  = 0x0; // CRopeKeyframe
            constexpr std::ptrdiff_t CRopeKeyframeAlias_move_rope = 0x7d8; // 
            constexpr std::ptrdiff_t  = 0x90066788; // `Õˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CRopeKeyframeAlias_move_rope
        }

        // Parent: None
        // Fields: 3
        namespace CConditionalCollidable {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CConditionalCollidable = 0x780; // 
            constexpr std::ptrdiff_t  = 0x8fec6028; // êrıè˝
        }

        // Parent: m_flNextStateTime
        // Fields: 4
        namespace CCitadel_Ability_Lash_Ultimate {
            constexpr std::ptrdiff_t  = 0x9071bf90; // CCitadelBaseLockonAbility
            constexpr std::ptrdiff_t CAbility_Fencer_Lunge = 0x0; // 
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ViperVenomProcWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_TangoTether_Trigger = 0xf88; // 
            constexpr std::ptrdiff_t à9qè˝ = 0x8ffb8140; // PKÌè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ShadowPulse_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PatronsBlessingProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f31d020; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // h–1è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ShieldImpact {
            constexpr std::ptrdiff_t  = 0x8fe91c80; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Obscured {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Respawn Settings = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifier {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModifier
        }

        // Parent: CEnableMotionFixup
        // Fields: 0
        namespace CPulseServerFuncs_Sounds {
        }

        // Parent: CPulsePhysicsConstraintsFuncs
        // Fields: 0
        namespace CPulsePhysicsConstraintsFuncs {
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_ObserverServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayerPawnComponent
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t citadel_ability_primary_weapon_bebop = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff7e4a0; // CCitadel_Ability_PrimaryWeapon_Bebop
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_BaseHeldItem {
            constexpr std::ptrdiff_t  = 0x8f430db0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f497cbc; // 
            constexpr std::ptrdiff_t  = 0x8f497cc8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicScript {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CLogicScript = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x90035180; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeManagercached_attribute_float_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_HauntingSkull_Area {
            constexpr std::ptrdiff_t  = 0x8f69e1e8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AttachHost {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f6333e0; // CCitadel_Modifier_Familiar_AttachHost
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Thumper_EnemyPulled_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityBullChargeVData {
            constexpr std::ptrdiff_t  = 0x8f415050; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90222fd0; // ‡‹Yè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealthSwap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Haze_StackingDamage = 0x10f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CloakOfOpportunityWatcher {
            constexpr std::ptrdiff_t  = 0x90270e50; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Frenzy = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe6c8d0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BerserkerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_haunting_scream = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CModifier_CheatDeathImmunityVData {
            constexpr std::ptrdiff_t  = 0x80000030; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_regenerative_armor = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe73380; // CCitadel_ArmorUpgrade_RegenerativeArmor
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicShock_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Item_ArcticBlast = 0x1078; // 
            constexpr std::ptrdiff_t  = 0x8fe89148; // @_Ïè˝
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ExplosiveShotsBulletEntityPair_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseGraphInstance_ServerEntity {
            constexpr std::ptrdiff_t  = 0x9005e9f8; // CBasePulseGraphInstance
        }

        // Parent: None
        // Fields: 4
        namespace CSceneEntityAlias_logic_choreographed_scene {
            constexpr std::ptrdiff_t  = 0x0; // CSceneEntity
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: ägç˝
        // Fields: 3
        namespace CAssignedLaneParticle {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CAssignedLaneParticle = 0x788; // 
            constexpr std::ptrdiff_t ò%<è˝ = 0x8fef20c8; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CRagdollManager {
            constexpr std::ptrdiff_t  = 0x8ff26a00; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ShadowCloneVData {
            constexpr std::ptrdiff_t  = 0x90842c68; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90833bd8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_skyrunner_primaryweapon = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Yakuza_Shakedown {
            constexpr std::ptrdiff_t  = 0x908ce7d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Vandal_Ability03 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f728b18; // 
        }

        // Parent: m_flParrySuccessEndTime
        // Fields: 2
        namespace CCitadel_Ability_MeleeParry {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2ce5a0; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CModifier_SiphonBullets_HealthLoss_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f31d020; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_AutoCleanseVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_TrooperGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t CCitadel_Modifier_IcarusWingsVData = 0x840; // 
            constexpr std::ptrdiff_t 0™.è˝ = 0x0; // p¬Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_IcarusWingsVData
        }

        // Parent: m_flFadeDuration
        // Fields: 5
        namespace CPostProcessingVolume {
            constexpr std::ptrdiff_t  = 0x8ff29bf8; // CBaseTrigger
            constexpr std::ptrdiff_t CInfoFan = 0x0; // 
            constexpr std::ptrdiff_t †WÚè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff25760; // `Jw˛
            constexpr std::ptrdiff_t  = 0xa9c19680; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Bull_Heal_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t pæ˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff7be50; // ¯Mw˛
            constexpr std::ptrdiff_t  = 0xa9d34550; // 
        }

        // Parent: None
        // Fields: 4
        namespace CModifierKnockdownVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CPointProximitySensor {
            constexpr std::ptrdiff_t  = 0x90053f50; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_BookWorm_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x80000519; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa9ae0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Frank_ShockFullyChargedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9078b008; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f61f620; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CModifierStackingDamageVData {
            constexpr std::ptrdiff_t  = 0x8f62db30; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // H€bè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Unstable_Concoction {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t XQw˛ = 0x0; // 
        }

        // Parent: m_flNextStateTime
        // Fields: 0
        namespace CStreetBrawlController {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_InvokeBinding {
        }

        // Parent: m_gravityScale
        // Fields: 3
        namespace CTriggerLook {
            constexpr std::ptrdiff_t  = 0xff0000ff; // CTriggerOnce
            constexpr std::ptrdiff_t  = 0x8f545088; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Rutger_Pulse_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatTethered = 0x5e8; // 
            constexpr std::ptrdiff_t Ä∞iè˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_PunkgoatTethered
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_SleepAOE {
            constexpr std::ptrdiff_t  = 0x8de78110; // CCitadelModifierAura
            constexpr std::ptrdiff_t  ¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9cf9390; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_Wrecker_Teleport {
            constexpr std::ptrdiff_t  = 0x8ffc4b40; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e25a510; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_Viscous_GooGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f725ba8; // 
            constexpr std::ptrdiff_t CCitadel_Ability_Fealty = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierIdolReturnTimerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0ãÓè˝ = 0x0; // 
        }

        // Parent: Gameplay
        // Fields: 2
        namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞b˚è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_Coffin {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x8f6ad6e0; // 
            constexpr std::ptrdiff_t  = 0x8f313e80; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Trapper_Immobilize {
            constexpr std::ptrdiff_t  = 0x8ffb71b0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Hornet_Chain {
            constexpr std::ptrdiff_t  = 0x8f63af18; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f629088; // CCitadel_Modifier_Dust_Storm_Thrown
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_CastParticle
        // Fields: 2
        namespace CCitadel_Ability_StaticCharge_V2_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t projectile_dust_storm = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SuperNeutralChargePrepare {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Modifiers = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DelayedApply {
            constexpr std::ptrdiff_t  = 0x8f3bc500; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Basic_RangedArmorBonus {
            constexpr std::ptrdiff_t  = 0x8f3bc518; // CCitadelModifier
            constexpr std::ptrdiff_t How longer after taking no damage will out out of combat regen kick in? = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CScaleFunctionAbilityPropertySingleStatVData {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
        }

        // Parent: None
        // Fields: 4
        namespace CPulseCell_Outflow_PlayVCD {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_Outflow_PlaySceneBase
            constexpr std::ptrdiff_t Âê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9005e5d0; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9c1b780; // 
        }

        // Parent: CCitadelItemPickupIdol
        // Fields: 5
        namespace CCitadelItemPickupIdol {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelItemPickup
            constexpr std::ptrdiff_t m_ChannelParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t †tÓè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x0; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9ce0a30; // 
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_BookwormDragon_Projectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t CAbilityIntimidateVData = 0x19f8; // 
            constexpr std::ptrdiff_t h÷[è˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CAbilityIntimidateVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Rutger_Pulse_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9080da78; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BeltFed_MagazineVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t êrıè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Magic_Clarity_Buff {
            constexpr std::ptrdiff_t  = 0x8fe88b90; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x601ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LongRangeSlowingTech_Proc {
            constexpr std::ptrdiff_t  = 0x8fe73f60; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_BonusItem2
        // Fields: 0
        namespace ItemDraftOption_t {
        }

        // Parent: None
        // Fields: 1
        namespace CMultiplayRules {
            constexpr std::ptrdiff_t  = 0x0; // CGameRules
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelPreviewPlayerController {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelPlayerController
            constexpr std::ptrdiff_t CCitadelPreviewPlayerController = 0xd38; // 
            constexpr std::ptrdiff_t  = 0x8fed98b8; // †˚Óè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelPreviewPlayerController
        }

        // Parent: None
        // Fields: 4
        namespace CPhysTorque {
            constexpr std::ptrdiff_t  = 0x90043ef0; // CPhysForce
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8ed900; // 
        }

        // Parent: None
        // Fields: 4
        namespace CMultiSource {
            constexpr std::ptrdiff_t  = 0x9003ebd8; // CLogicalEntity
            constexpr std::ptrdiff_t CTestPulseIO = 0x0; // 
            constexpr std::ptrdiff_t ∞Gê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90034770; // XQw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fortuna_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x90726518; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x8f62e780; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff8c2b0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VampireBat_LoveBites {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f70f038; // CAbilityWreckingBallVData
            constexpr std::ptrdiff_t  = 0x8ffca7b0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_Barrage_Caster {
            constexpr std::ptrdiff_t  = 0x8e10fbb0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f695098; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_FissureWallVData {
            constexpr std::ptrdiff_t  = 0x8f5a04c0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x903dc820; // ‡Zè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Wraith_RapidFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_NetShot = 0x1310; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ZiplineKnockdownImmune {
            constexpr std::ptrdiff_t  = 0x8d1ebdb0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f324040; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerSurge_ChainLightning {
            constexpr std::ptrdiff_t  = 0x8d1cb4e0; // CCitadel_Modifier_ChainLightningEffect
            constexpr std::ptrdiff_t `Jw˛ = 0x8f3184e8; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f318588; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_TrooperNeutralVData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CitadelHeroData_t {
        }

        // Parent: `Jw˛
        // Fields: 7
        namespace CCitadelFamiliarClonePlayerPawn {
            constexpr std::ptrdiff_t  = 0x8ff89490; // CCitadelPlayerPawn
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dff1bd0; // 
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x906f6860; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9cfb3d0; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelDruidInvisBush {
            constexpr std::ptrdiff_t  = 0x8ff82700; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f5bd230; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de9b040; // 
            constexpr std::ptrdiff_t p'¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Nano_Predatory_Statue {
            constexpr std::ptrdiff_t  = 0x8ffa5920; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e101bb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_TimeWall_Aura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t m_HealParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t  = 0x8f5b0d18; // CDoormanBombProjectile
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Empty {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_Empty = 0xf78; // 
            constexpr std::ptrdiff_t  = 0x8fec6458; // @_Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Item_Empty
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Familiar_HelpingHandsVData {
            constexpr std::ptrdiff_t  = 0x909de038; // CitadelAbilityVData
            constexpr std::ptrdiff_t npc_familiar_helper = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Bookworm_KnightBarrierVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f5a2de0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viscous_TelepunchVData {
            constexpr std::ptrdiff_t  = 0x800007a5; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: m_vecCrashPosition
        // Fields: 3
        namespace CCitadel_Ability_Bull_Leap {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_BounceModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_AllyBounceModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SplitShotBonusDamage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_NullificationAuraVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GlowToTeammates {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_GlowToTeammates = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BaseBulletPreRollProc {
            constexpr std::ptrdiff_t  = 0x8fe9b880; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x8f3d1290; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Healing_Disabled {
            constexpr std::ptrdiff_t  = 0x8f3b9cd0; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÜÁÅeHã%X = 0x8f3ba080; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Familiar_SpotlightAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t @◊¯è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x90709978; // CBaseEntity
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegeneratingBulletShield = 0x10f8; // 
            constexpr std::ptrdiff_t  = 0x8fe71320; // @_Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_ArmorUpgrade_RegeneratingBulletShield
        }

        // Parent: None
        // Fields: 2
        namespace CLogicAuto {
            constexpr std::ptrdiff_t  = 0x900412a8; // CBaseEntity
            constexpr std::ptrdiff_t CTriggerBrush = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPhysicsWire {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CPhysicsWire = 0x4a8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncIllusionary {
            constexpr std::ptrdiff_t  = 0x9000e818; // CBaseModelEntity
            constexpr std::ptrdiff_t CBaseFlex = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f854940; // CFuncIllusionary
        }

        // Parent: HÉÏ(ãÜƒëeHã%X
        // Fields: 3
        namespace CCitadel_Ability_Werewolf_MaulingLeap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Viscous_Telepunch = 0x16a0; // 
            constexpr std::ptrdiff_t 8_qè˝ = 0x8ffc1e38; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Speedlines {
            constexpr std::ptrdiff_t  = 0x9074d610; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Projectile_RocketLauncher_Rocket = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityCrowdControlVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t hqè˝ = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ViperVenomVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GooGrenade {
            constexpr std::ptrdiff_t  = 0x908fc040; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_TrackingBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HeroGravityVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t  = 0x8f30bde8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x9020f5a8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x902092b8; // CCitadelBaseAbilityGraphController
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_MedicBullets {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBullets_BulletBuff = 0x170; // 
            constexpr std::ptrdiff_t ¿F/è˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_EtherealBullets_BulletBuff
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Galvanic_Storm_VData {
            constexpr std::ptrdiff_t  = 0x902b25b8; // CCitadel_Modifier_ChainLightningVData
            constexpr std::ptrdiff_t  = 0x9021a690; // @2è˝
            constexpr std::ptrdiff_t  = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DivineBarrier_VData {
            constexpr std::ptrdiff_t  = 0x8000006d; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_TrooperNeutralGrenade {
            constexpr std::ptrdiff_t  = 0x8f3098d0; // CCitadel_Ability_TrooperGrenade
            constexpr std::ptrdiff_t CCitadel_Item_HealthRegenAura = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2e0e68; // CItem_GreaterWitheringWhip
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EntityPinged {
            constexpr std::ptrdiff_t  = 0x8f3beed0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9be6ea0; // 
        }

        // Parent: m_hDoor1
        // Fields: 3
        namespace CCitadel_DoorwayPortal {
            constexpr std::ptrdiff_t  = 0x8ff74880; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de7c790; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoDynamicShadowHint {
            constexpr std::ptrdiff_t  = 0x8ff04d80; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemWalkBackVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t `uÓè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CMarkupVolume {
            constexpr std::ptrdiff_t  = 0x8ff683d0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_strParentPathUniqueID
        // Fields: 3
        namespace CPathNode {
            constexpr std::ptrdiff_t  = 0x8ff6a170; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40110; // 
            constexpr std::ptrdiff_t  = 0x8f587f20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_BearTrap {
            constexpr std::ptrdiff_t  = 0x8f69fb70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ã¡©eHã%X = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Fathom_LurkersAmbush_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_Fathom_LurkersAmbush_Debuff = 0x250; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Mirage_SandPhantom {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
            constexpr std::ptrdiff_t  = 0x907b2af8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ¿Â˙è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tengu_AirLiftVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t targetdummy_inherent = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Urn_DebuffVData {
            constexpr std::ptrdiff_t  = 0x80000837; // CCitadelModifierVData
            constexpr std::ptrdiff_t h’0è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1f40; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: m_arPendingAsyncAbilityReservationSlots
        // Fields: 1
        namespace CCitadelAbilityComponent {
            constexpr std::ptrdiff_t  = 0x8fed1f50; // CEntityComponent
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerRemove {
            constexpr std::ptrdiff_t  = 0x90074b20; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fdd40; // 
            constexpr std::ptrdiff_t êKê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_Affliction {
            constexpr std::ptrdiff_t  = 0x8ffa9e50; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityCadenceCrescendoVData {
            constexpr std::ptrdiff_t  = 0x906444e8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x90678418; // 
        }

        // Parent: `Jw˛
        // Fields: 1
        namespace CModifierCrowdControlDebuffVData {
            constexpr std::ptrdiff_t  = 0x909037e8; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Headshot_Damage_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t 0AËè˝ = 0x8f3185e0; // 
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CCitadel_Modifier_Succor_MoveVData {
            constexpr std::ptrdiff_t  = 0x90368248; // CCitadelModifierVData
            constexpr std::ptrdiff_t êAÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HalloweenMaskVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityPropertyMultiStats {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_SimpleAnimatingAIVData {
            constexpr std::ptrdiff_t  = 0x90503948; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 4
        namespace CLogicGameEventListener {
            constexpr std::ptrdiff_t  = 0x0; // CLogicalEntity
            constexpr std::ptrdiff_t CLogicGameEventListener = 0x4e0; // 
            constexpr std::ptrdiff_t –Ãàè˝ = 0x90034898; // |ıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLogicGameEventListener
        }

        // Parent: None
        // Fields: 2
        namespace CServerOnlyModelEntity {
            constexpr std::ptrdiff_t  = 0x8f565d48; // CBaseModelEntity
            constexpr std::ptrdiff_t  = 0x8f3e4318; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_TransitionFreeze {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_Hotel_TransitionFreeze = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_AntiSpiritVestVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x907b6688; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ViperHookblade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_vLaunchPosition = 0xf70; // VectorWS
            constexpr std::ptrdiff_t m_qLaunchAngle = 0xf7c; // QAngle
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Rolling_FireBall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_TurretClone = 0x1490; // 
            constexpr std::ptrdiff_t (øjè˝ = 0x8ffaef10; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HeroGravity {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8f31fe50; // CCitadel_Ability_Tier3Boss_RocketBarrage
            constexpr std::ptrdiff_t  = 0x8fe80720; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2dfc98; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_Colossus_VData {
            constexpr std::ptrdiff_t  = 0x902dfba8; // CitadelItemVData
            constexpr std::ptrdiff_t citadel_ability_tier3boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Apex_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Out_Of_Combat_Health_Regen
            constexpr std::ptrdiff_t CCitadel_Item_GooseEgg = 0x1108; // 
            constexpr std::ptrdiff_t ÿu/è˝ = 0x8fe6d738; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TossUp {
            constexpr std::ptrdiff_t  = 0x8f3bee88; // CCitadelModifier
            constexpr std::ptrdiff_t `wÈè˝ = 0x8f553b20; // 
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 2
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t  = 0x900d9570; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CMarkupVolumeTagged_Nav {
            constexpr std::ptrdiff_t  = 0x90034a70; // CMarkupVolumeTagged
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c3b80; // 
            constexpr std::ptrdiff_t ‡Jê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelModifer_Viscous_Goo_Aura_VData {
            constexpr std::ptrdiff_t  = 0x9088ff18; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t †®˚è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x9090fce8; // CBaseEntity
        }

        // Parent: None
        // Fields: 3
        namespace CLogicAutosave {
            constexpr std::ptrdiff_t  = 0x90039978; // CLogicalEntity
            constexpr std::ptrdiff_t CLogicScript = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f88cdc8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_CitadelMotor {
            constexpr std::ptrdiff_t  = 0x0; // CAI_Motor
            constexpr std::ptrdiff_t CAI_CitadelMotor = 0xf90; // 
        }

        // Parent: m_bUseTrail
        // Fields: 3
        namespace CCitadel_Modifier_Necro_HauntingSkull_AreaVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x907cf290; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Recast {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÜãºeHã%X = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SwingLine_Swinging {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_Immobilize = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
            constexpr std::ptrdiff_t  = 0x90869258; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ∏ójè˝
        }

        // Parent: m_TracerParticle
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_hook = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff82e08; // CCitadel_Ability_Hook
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShieldGuy_Ability03 {
            constexpr std::ptrdiff_t  = 0x908291d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CProjectile_Rutger_Rocket = 0x0; // 
            constexpr std::ptrdiff_t ∞“˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_Bounty {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t m_nParticleIndexAura = 0x120; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MobileResupply {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Wraith_ProjectMind_Shield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Pillar = 0x160; // 
        }

        // Parent: m_tSlowStopTime
        // Fields: 3
        namespace CCitadel_Ability_LifeDrain {
            constexpr std::ptrdiff_t  = 0x90778540; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_IncendiaryProjectile = 0x0; // 
            constexpr std::ptrdiff_t ¿Ÿ¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ThermalDetonator_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelProjectileTouchVolumeVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ‡Zè˝ = 0x8f5adb18; // 
            constexpr std::ptrdiff_t  = 0x903dc820; // H€Zè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_OnTheHuntVData {
            constexpr std::ptrdiff_t  = 0x90902348; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Necro_CoffinVData {
            constexpr std::ptrdiff_t  = 0x9086bb98; // CCitadelModifierVData
            constexpr std::ptrdiff_t (¯jè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelAbilityDruidPlantInvisBush {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAbilityDruidBasePlant
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Swan_Acrobat {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Rolling_FireBall = 0xff8; // 
            constexpr std::ptrdiff_t »rcè˝ = 0x8ffa4598; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Trapper_SpiderShield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0x8f72e5e8; // CAbilityThumper4VData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RadianceVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t Ä}˚è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SummonGangster {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_PrismaticGuard = 0x1170; // 
            constexpr std::ptrdiff_t  = 0x8ffc3488; // ∞éÈè˝
        }

        // Parent: CCitadel_Ability_BulletFlurry
        // Fields: 3
        namespace CCitadel_Ability_BulletFlurry {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_sAfterburnParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t  = 0x8f63af78; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Lash {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CTriggerIcePathVolume = 0x8e0; // 
            constexpr std::ptrdiff_t  = 0x8ff96a28; // p2Òè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PristineEmblem {
            constexpr std::ptrdiff_t  = 0x8fe81eb0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DiscordVData {
            constexpr std::ptrdiff_t  = 0x80000083; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3671a0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 1
        namespace CSingleplayRules {
            constexpr std::ptrdiff_t  = 0x0; // CGameRules
        }

        // Parent: m_iMinWind
        // Fields: 0
        namespace CEnvWindShared {
        }

        // Parent: None
        // Fields: 4
        namespace CPointPrefab {
            constexpr std::ptrdiff_t  = 0x8ff68f20; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de027c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t  = 0x900cc550; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_WallTether {
            constexpr std::ptrdiff_t  = 0x8f4fb330; // CCitadel_Modifier_Link
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_ApexCombat {
            constexpr std::ptrdiff_t  = 0x9024acd0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperNeutralGrenade = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f2e2620; // 
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemPunchable_Rejuv {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Rejuv = 0xe8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvInstructorVRHint {
            constexpr std::ptrdiff_t  = 0x90022b28; // CPointEntity
            constexpr std::ptrdiff_t CEnvSpark = 0x0; // 
            constexpr std::ptrdiff_t êÍê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Unicorn_PrismaticGuardVData {
            constexpr std::ptrdiff_t  = 0x80000847; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a19c0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_BouncyProjectileVData {
            constexpr std::ptrdiff_t  = 0x90696978; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hunger_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_BookWorm_PrimaryWeaponVData = 0x19c8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelBaseYamatoAbility {
            constexpr std::ptrdiff_t  = 0x8ffbe260; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SnakeDashVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealthSwapPrecastVData {
            constexpr std::ptrdiff_t  = 0x8f630c88; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x903dc820; // ®cè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EtherealBullets_Buff {
            constexpr std::ptrdiff_t  = 0x8fe75ee0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TechOverflowProcWatcher {
            constexpr std::ptrdiff_t  = 0x8fe88ad0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_NPC_OOC_RegenVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityPropertySingleStatCurveVData {
            constexpr std::ptrdiff_t  = 0x904dd4a8; // CScaleFunctionVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_SmokeGrenade_Blocker {
            constexpr std::ptrdiff_t  = 0x8f2cce70; // CBaseAnimGraph
            constexpr std::ptrdiff_t  = 0x8f2de058; // Hÿ,è˝
            constexpr std::ptrdiff_t  = 0x8f688730; // –~,è˝
        }

        // Parent: None
        // Fields: 5
        namespace CPrecipitation {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CPrecipitation = 0x8e0; // 
            constexpr std::ptrdiff_t  = 0x90015168; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPrecipitation
            constexpr std::ptrdiff_t  = 0x8f863560; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCommentaryViewPosition {
            constexpr std::ptrdiff_t  = 0x90984180; // CSprite
            constexpr std::ptrdiff_t CPrecipitation = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f53df90; // 
        }

        // Parent: BotDataManifest_global_server
        // Fields: 3
        namespace CCitadel_BaseProp_MidStairs {
            constexpr std::ptrdiff_t  = 0x8fec62b0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f40f828; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_WreckingBall {
            constexpr std::ptrdiff_t  = 0x8e25a180; // CCitadelProjectile
            constexpr std::ptrdiff_t m_RestorativeGooParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_RestorativeGooSelfParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_RestorativeGooModifier = 0x19d8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_NPCAbility_Vanguard_AOEBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CEnvGlobal {
            constexpr std::ptrdiff_t  = 0x90034600; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c6c40; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicNPCCounterOBB {
            constexpr std::ptrdiff_t  = 0x0; // CLogicNPCCounterAABB
            constexpr std::ptrdiff_t  = 0x8f88bdb8; // CLogicNPCCounterOBB
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AttachHeal {
            constexpr std::ptrdiff_t  = 0x8ff8f7c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Swan_Ability04 {
            constexpr std::ptrdiff_t  = 0x8f6961e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6960f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SnakeDash {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8f2c6e38; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f70f5f8; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CModifier_Wrecker_UltimateVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PassiveBeefy {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Doorman_Bomb_DebuffVData = 0x790; // 
            constexpr std::ptrdiff_t ¿L[è˝ = 0x0; // ØÈè˝
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CAbilityStormCloudVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_gunslinger_demon_carbine = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Muted {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  «Áè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BaseEventProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
            constexpr std::ptrdiff_t  = 0x0; // CModifierVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelItemPunchableNeutralGold {
            constexpr std::ptrdiff_t  = 0x8fee6360; // CCitadelItemPickup
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d870960; // 
            constexpr std::ptrdiff_t –cÓè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelSpeedBoostTrigger {
            constexpr std::ptrdiff_t  = 0x904e1940; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelSpeedBoostTrigger = 0x8e8; // 
            constexpr std::ptrdiff_t ò™Lè˝ = 0x8fef74f8; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelSpeedBoostTrigger
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Guided_Arrow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x906c5150; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_AbilityName = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f2cd848; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_FrenzyAuraVData {
            constexpr std::ptrdiff_t  = 0x9026a7b8; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f3160a0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe6d7f0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPlatTrigger {
            constexpr std::ptrdiff_t  = 0x9007ea58; // CBaseModelEntity
            constexpr std::ptrdiff_t CTriggerDetectExplosion = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8de388; // CPlatTrigger
        }

        // Parent: m_bMultiplayer
        // Fields: 2
        namespace CSceneEntity {
            constexpr std::ptrdiff_t  = 0x9006e3f8; // CPointEntity
            constexpr std::ptrdiff_t  = 0x8f540440; // 
        }

        // Parent: None
        // Fields: 3
        namespace CChoreoInfoTarget {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CLightOrthoEntity = 0x788; // 
            constexpr std::ptrdiff_t  = 0x8ff1f8a0; // ∞ÍÒè˝
        }

        // Parent: m_flAutoExposureMax
        // Fields: 2
        namespace CTonemapController2 {
            constexpr std::ptrdiff_t  = 0x8f51c358; // CBaseEntity
            constexpr std::ptrdiff_t PlayerVisibilityStateChanged = 0x8f51c1e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_TrackingBombVData {
            constexpr std::ptrdiff_t  = 0x90944538; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_StackingBuff {
            constexpr std::ptrdiff_t  = 0x8ffb5f80; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Punkgoat_BlastedShred {
            constexpr std::ptrdiff_t  = 0x8f6898b8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_Flashbang {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PriestKnockback = 0x170; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Trapper_SpiderJar_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t dqè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ProximityRitual_VData {
            constexpr std::ptrdiff_t  = 0x90833bd8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_skyrunner_primaryweapon = 0x0; // 
        }

        // Parent: m_flCancelHookTime
        // Fields: 3
        namespace CCitadel_Ability_Hook {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_EnemyModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_WeaponEaterStack {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeam = 0xf80; // 
            constexpr std::ptrdiff_t ¯0/è˝ = 0x8fe83818; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_SiphonBullets_HealthLoss {
            constexpr std::ptrdiff_t  = 0x90257b10; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_ActiveBulletShield = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CMapSharedEnvironment {
            constexpr std::ptrdiff_t  = 0x8ff6ab60; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de06730; // 
        }

        // Parent: m_flCycle
        // Fields: 0
        namespace CNetworkedSequenceOperation {
        }

        // Parent: CNPC_TrooperNeutral
        // Fields: 8
        namespace CNPC_TrooperNeutral {
            constexpr std::ptrdiff_t  = 0x8ff0cd00; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x8f4fa020; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dae4bd0; // 
            constexpr std::ptrdiff_t m_iCoverGroupID = 0x4a0; // int32
            constexpr std::ptrdiff_t m_iszSquadName = 0x4a8; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_eTrooperType = 0x4b8; // ENeutralTrooperType
            constexpr std::ptrdiff_t  = 0x8dae5f40; // CServerOnlyPointEntity
        }

        // Parent: None
        // Fields: 4
        namespace CPhysMagnet {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CPhysMagnet = 0xb00; // 
            constexpr std::ptrdiff_t ênXè˝ = 0x90042a28; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPhysMagnet
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_ReturnFire {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t HÉÏ(ãÊÏôeHã%X = 0xa9e52800; // 
            constexpr std::ptrdiff_t Æ,è˝ = 0x8d1d8a30; // MPropertyStartGroup
            constexpr std::ptrdiff_t m_BuildUpModifier = 0x780; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Discord_Aura {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifierAura
            constexpr std::ptrdiff_t Sounds = 0x8f2f3188; // CCitadel_Modifier_CharmedWraps
            constexpr std::ptrdiff_t  = 0x8fe6ccd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelItemPickupRejuvHeroTestInfoSpawn {
            constexpr std::ptrdiff_t  = 0x8f4952f8; // CPointEntity
            constexpr std::ptrdiff_t Status Effects Offset (from abs origin) = 0x8f4953a8; // 
            constexpr std::ptrdiff_t  = 0x8f4953c0; // 0RIè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_GunSearching {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t m_nTotalSelfHeal = 0x408; // int32
        }

        // Parent: None
        // Fields: 3
        namespace CModifierGangActivityAbilitySwapVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t viscous_restorative_goo = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb8340; // CCitadel_Ability_RestorativeGoo
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityLightningBallVData {
            constexpr std::ptrdiff_t  = 0x800005fa; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_TrophyCollectorVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_EscalatingExposureProcWatcher {
            constexpr std::ptrdiff_t  = 0x8f31cf50; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8fe8a5b0; // Hÿ,è˝
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EscalatingExposure {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f323cd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_UIAbilityHudNotificaitonVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 0
        namespace CEntityInstance {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ColdFront {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Containment {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t  = 0x8f2f94f8; // CCitadel_Modifier_EtherealBullets_Buff
            constexpr std::ptrdiff_t  = 0x8fe75cc8; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelProjectileTouchVolume {
            constexpr std::ptrdiff_t  = 0x8da074a0; // CBaseModelEntity
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f4d8700; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameGibManager {
            constexpr std::ptrdiff_t  = 0x8ff26340; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NeutralCampVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tenacity {
            constexpr std::ptrdiff_t  = 0x8ff8c3a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f623310; // 
        }

        // Parent: m_vecPanelVertices
        // Fields: 0
        namespace ice_path_shard_model_desc_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_StaticCharge {
            constexpr std::ptrdiff_t  = 0x8f626400; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f626418; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f626438; // –~,è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_PrimaryWeapon_BeamWeapon {
            constexpr std::ptrdiff_t  = 0x8fe6aa90; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t server = 0x501ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d129190; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicStormWatcherVData {
            constexpr std::ptrdiff_t  = 0x902b3a58; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367320; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DummyUnit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ApplyModifierOnDamageTaken = 0xd0; // 
        }

        // Parent: None
        // Fields: 8
        namespace CCitadel_PointTalker_Idol {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_PointTalker
            constexpr std::ptrdiff_t CCitadel_PointTalker_Idol = 0xbc0; // 
            constexpr std::ptrdiff_t  = 0x8fec8990; // pãÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_PointTalker_Idol
            constexpr std::ptrdiff_t m_iGoldReward = 0xb10; // int32
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadel_Pickup_Gold = 0xb20; // 
            constexpr std::ptrdiff_t ¿[Bè˝ = 0x8fec93f0; // 0ÄÏè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifire_Priest_FlashBangBurnAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_ThrownShiv_Slow_Debuff = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_ThrownShiv_Slow_Debuff
        }

        // Parent: None
        // Fields: 2
        namespace CHandleDummy {
            constexpr std::ptrdiff_t  = 0x90077ea8; // CBaseEntity
            constexpr std::ptrdiff_t CFuncTankTrain = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CFuncWallToggle {
            constexpr std::ptrdiff_t  = 0x0; // CFuncWall
            constexpr std::ptrdiff_t CFuncWallToggle = 0x788; // 
            constexpr std::ptrdiff_t  = 0x90005130; // pR
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFuncWallToggle
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX {
            constexpr std::ptrdiff_t  = 0x8ff80df0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Uppercut_Buff {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t ¿k˜è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_DebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EternalGift {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2fdfe8; // CCitadel_Modifier_EternalGift
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_QuickSilverVData {
            constexpr std::ptrdiff_t  = 0x8000004b; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f2e2f90; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe766a0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2e2fb8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicShield_SpiritBuff {
            constexpr std::ptrdiff_t  = 0x8d2233f0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f31cf70; // 
        }

        // Parent: m_flLightScale
        // Fields: 2
        namespace CSkyCamera {
            constexpr std::ptrdiff_t  = 0x8ff6ec80; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelInteriorTrigger {
            constexpr std::ptrdiff_t  = 0x8fece0f0; // CTriggerModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d696b00; // 
            constexpr std::ptrdiff_t `·Ïè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_TrackingProjectileApplyModifier {
            constexpr std::ptrdiff_t  = 0x8fe77fc0; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1e5e50; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Staring {
            constexpr std::ptrdiff_t  = 0x8ff88d40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityVandalOverflowVData {
            constexpr std::ptrdiff_t  = 0x8f717808; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // (xqè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HauntWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t `Jw˛ = 0x8f7159f8; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbilityCrackshotVData = 0x1b18; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ShadowStepVData {
            constexpr std::ptrdiff_t  = 0x8f2f1748; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // `/è˝
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_AutoaimServices {
            constexpr std::ptrdiff_t  = 0x8fffb510; // CPlayerPawnComponent
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_RestorativeGooCube {
            constexpr std::ptrdiff_t  = 0x908927d0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t CCitadel_Ability_Thumper_2 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f72da80; // CCitadel_RestorativeGooCube
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPathCornerCrash {
            constexpr std::ptrdiff_t  = 0x0; // CPathCorner
            constexpr std::ptrdiff_t CPathCornerCrash = 0x4c0; // 
            constexpr std::ptrdiff_t  = 0x90042060; // êê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPathCornerCrash
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_HighImpactArmor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t »Pw˛ = 0x8f320f70; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f320f80; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f320f90; // 
        }

        // Parent: m_flEndAttackableTime
        // Fields: 3
        namespace CItemXP {
            constexpr std::ptrdiff_t  = 0x8fefdbd0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f4d8670; // 
        }

        // Parent: None
        // Fields: 5
        namespace CPhysPulley {
            constexpr std::ptrdiff_t  = 0x8f8a88f0; // CPhysConstraint
            constexpr std::ptrdiff_t  = 0x8f8a8908; // 
            constexpr std::ptrdiff_t  = 0x8f8a8928; // 
            constexpr std::ptrdiff_t  = 0x8f8a8948; // 
            constexpr std::ptrdiff_t  = 0x8f8a8968; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Airheart_AltWeapon {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t Sounds = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5bdb80; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AirDamping {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatWaitingToPull = 0x150; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_LightningStrikeAreaVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f6356b0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T3Boss_Phase1 {
            constexpr std::ptrdiff_t  = 0x8d39c0a0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerTrooperShrineJumpVolume {
            constexpr std::ptrdiff_t  = 0x8feccbb0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d697310; // 
            constexpr std::ptrdiff_t  = 0x90074ab8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_Frenzy {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadel_Item
            constexpr std::ptrdiff_t m_flLastDamageTime = 0xf78; // GameTime_t
            constexpr std::ptrdiff_t m_iCurrentResistValue = 0xf7c; // int32
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadel_Item
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_PowerShard {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCommentaryAuto {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t –Uê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_Gravestone_BuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ¿ƒ˘è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_CrimsonCannon {
            constexpr std::ptrdiff_t  = 0x8ffba8a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f711d58; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTargetdummy4VData {
            constexpr std::ptrdiff_t  = 0x908ce3b8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f7268e8; // CCitadel_Ability_PrimaryWeaponVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Intimidate {
            constexpr std::ptrdiff_t  = 0x9065f030; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Astro_Rifle = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UppercutClipSize {
            constexpr std::ptrdiff_t  = 0x8ff76f70; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletFlurryWindup {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MysticReverbExplosion {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_vecDamagedTargets = 0xd0; // CUtlVector<CBaseEntity*>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InvisFading {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelEnergyTower {
            constexpr std::ptrdiff_t  = 0x8fee5670; // CServerOnlyEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_ListenForEntityOutputCursorState_t {
        }

        // Parent: m_AssociatedEntities
        // Fields: 0
        namespace ActiveModelConfig_t {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerTeamBase {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t @yıè˝ = 0x8f43dbe8; // CTriggerTeamBase
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_strEnemySkin
        // Fields: 7
        namespace CCitadel_DynamicProp {
            constexpr std::ptrdiff_t  = 0x8fed9370; // CDynamicProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x8f46df00; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d77dca0; // 
            constexpr std::ptrdiff_t m_bHitTrigger = 0x90; // CAnimGraphParamRef<bool>
            constexpr std::ptrdiff_t m_eState = 0xb8; // CAnimGraphParamRef<char*>
            constexpr std::ptrdiff_t m_flHealth = 0xe8; // CAnimGraphParamRef<float32>
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Necro_KillSummonTrigger {
            constexpr std::ptrdiff_t  = 0x8f6a28f0; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t  = 0x8f6a2900; // 
            constexpr std::ptrdiff_t  = 0x8f6a2910; // 
            constexpr std::ptrdiff_t  = 0x8f6a1a20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CSoundStackSave {
            constexpr std::ptrdiff_t  = 0x8ff25bd0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dc0fb50; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NeutralShield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_NeutralShield = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidSprout {
            constexpr std::ptrdiff_t  = 0x8ff830c0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_vecEndPosition
        // Fields: 3
        namespace CCitadel_Ability_Trapper_WebWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_LuminousStrikeBuffVData = 0x938; // 
            constexpr std::ptrdiff_t ∞rè˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelYamatoBaseVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t (xqè˝ = 0x908c1a18; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityPerchedPredatorVData {
            constexpr std::ptrdiff_t  = 0x9083ee88; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f68e208; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
            constexpr std::ptrdiff_t  = 0x8f415068; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9062a220; // ‡-Zè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HealthSwapVData {
            constexpr std::ptrdiff_t  = 0x90756008; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_familiar_attach_trigger = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff91928; // CCitadel_Ability_Familiar_Attach_Trigger
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Galvanic_Storm_Effect {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ChainLightningEffect
            constexpr std::ptrdiff_t CCitadel_Modifier_AcolytesGlove_VData = 0x950; // 
            constexpr std::ptrdiff_t pŒ,è˝ = 0x0; // †°Èè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier2Boss_Stomp {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t CModifier_WarpStone_Caster = 0xd0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CModifier_WarpStone_Caster
        }

        // Parent: m_spawnedHero
        // Fields: 0
        namespace CitadelHeroSpawnData_t {
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t  = 0x900d8b90; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_flAimPitch
        // Fields: 5
        namespace CNPC_ShieldedSentry {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_SimpleAnimatingAI
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Cat = 0xc90; // 
            constexpr std::ptrdiff_t  = 0x8ff100f8; // ∞%Ìè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Neutral_Hideout_Cat
            constexpr std::ptrdiff_t  = 0x8f508aa8; // CNPC_ShieldedSentry
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_RescueBeam {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData = 0x830; // 
            constexpr std::ptrdiff_t (û.è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_KothComebackBonusesVData {
            constexpr std::ptrdiff_t  = 0x8f4cd570; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x903fcf90; // ê’Lè˝
        }

        // Parent: None
        // Fields: 3
        namespace CLogicMeasureMovement {
            constexpr std::ptrdiff_t  = 0x90998a70; // CLogicalEntity
            constexpr std::ptrdiff_t CSimpleMarkupVolumeTagged = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f491e98; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_SpiderAnimatingVData {
            constexpr std::ptrdiff_t  = 0x80000845; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IcePath_TechPowerLinger {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f621df0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Sleep {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 7
        namespace CDynamicPropAlias_cable_dynamic {
            constexpr std::ptrdiff_t  = 0x8f3f33c0; // CDynamicProp
            constexpr std::ptrdiff_t »Pw˛ = 0x8f575c38; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f575c48; // 
            constexpr std::ptrdiff_t ËQw˛ = 0x8f575c58; // 
            constexpr std::ptrdiff_t CDynamicPropAlias_cable_dynamic = 0xcd0; // 
            constexpr std::ptrdiff_t  = 0x8ff60518; // `
ˆè˝
        }

        // Parent: None
        // Fields: 3
        namespace CInfoKOTHSpawnLocation {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CInfoKOTHSpawnLocation = 0x4b8; // 
            constexpr std::ptrdiff_t  = 0x8fef7830; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AirheartStuckBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f59de00; // CCitadelDruidInvisAura
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityHighAlertVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Bounce_PadVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CModifierBullChargingVData {
            constexpr std::ptrdiff_t  = 0x8f5c12a8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9043a850; // –\è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RampSlow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_DiminishingSlowVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemXPAssignedEarner_t {
        }

        // Parent: None
        // Fields: 5
        namespace CBaseFlexAlias_funCBaseFlex {
            constexpr std::ptrdiff_t  = 0x90006680; // CBaseFlex
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e7d55c0; // 
            constexpr std::ptrdiff_t  = 0x90004850; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_SleepBomb_Aura {
            constexpr std::ptrdiff_t  = 0x90720210; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability04 = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f627470; // CCitadel_Modifier_SleepBomb_Aura
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_SpellShield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fec63f8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_BubbleVData {
            constexpr std::ptrdiff_t  = 0x903342e8; // CCitadel_Modifier_SilencedVData
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_ricochet = 0x0; // 
        }

        // Parent: »Pw˛
        // Fields: 3
        namespace CCitadelModelEntity {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CBaseModelEntity
            constexpr std::ptrdiff_t m_flGroundOffset = 0x108; // float32
            constexpr std::ptrdiff_t m_flSpinRate = 0x10c; // float32
        }

        // Parent: None
        // Fields: 4
        namespace CInfoCitadelHelperLocation {
            constexpr std::ptrdiff_t  = 0x0; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t CInfoCitadelHelperLocation = 0x4b8; // 
            constexpr std::ptrdiff_t  = 0x900878c8; // –zıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CInfoCitadelHelperLocation
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_BloodBlast_VData {
            constexpr std::ptrdiff_t  = 0x90668ee8; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_doorman_doorway = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viper_PetrifyBolaVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ®‡qè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UltCombo_Self {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f5a12e8; // CCitadel_Modifier_UltCombo_Self
        }

        // Parent: CCitadel_Ability_Bebop_LaserBeam
        // Fields: 3
        namespace CCitadel_Ability_Bebop_LaserBeam {
            constexpr std::ptrdiff_t  = 0x8de739b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_SlowModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_StompIgnoreLingerModifier = 0x760; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ChronoSwap {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_RestrictionModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ChargeParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Silence_Buildup {
            constexpr std::ptrdiff_t  = 0x903171a0; // CCitadel_Modifier_Base_Buildup
            constexpr std::ptrdiff_t CCitadel_Item_GooseEgg = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Tier3Boss_Base
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_CheatDeathVData {
            constexpr std::ptrdiff_t  = 0x800000ed; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d366fb0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t upgrade_restorative_locket = 0x0; // 
        }

        // Parent: m_flStartTime
        // Fields: 2
        namespace CEnvDetailController {
            constexpr std::ptrdiff_t  = 0x8ff2c730; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTakeDamageInfoAPI {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_PriestSilenceBomb_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CAbility_Rutger_ForceField = 0x1310; // 
            constexpr std::ptrdiff_t @y[è˝ = 0x8ffaeb28; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CAbility_Rutger_ForceField
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HideoutIntroExit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_HideoutIntroExit = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvSoundscapeProxy {
            constexpr std::ptrdiff_t  = 0x0; // CEnvSoundscape
            constexpr std::ptrdiff_t CEnvSoundscapeProxy = 0x538; // 
            constexpr std::ptrdiff_t (ÅUè˝ = 0x8ff34088; // `Ùˆè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_Leaping {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8ffbbf70; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Airheart_Ability01 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_TargetPracticeSelfVData = 0x850; // 
            constexpr std::ptrdiff_t (û.è˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierDustStormAuraApplyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †ó¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletFlurryVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ¿Ô¯è˝ = 0x0; // 
        }

        // Parent: m_flStartHeight
        // Fields: 3
        namespace CCitadel_Ability_LashDownStrike {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t 8Pw˛ = 0x8f62f360; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f62f370; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CAbilityChargedShotVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LightningStrikeArea {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Low_Health_Glow {
            constexpr std::ptrdiff_t  = 0x8f3057a0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_EldritchShotVData {
            constexpr std::ptrdiff_t  = 0x8000007f; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367190; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BeltFed_Magazine {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_Discord_AuraVData = 0xb28; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_SiphonBullets {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // MPropertyStartGroup
            constexpr std::ptrdiff_t m_sBurnParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_RebuttalWatcher {
            constexpr std::ptrdiff_t  = 0x902bf7e0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_DivinersKevlar = 0x0; // 
            constexpr std::ptrdiff_t P≠Áè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CItemStimPakVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // ®x.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpeedBoostVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupVData {
            constexpr std::ptrdiff_t  = 0x9049fcc8; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelObserver_MovementServices {
            constexpr std::ptrdiff_t  = 0x8feeccb0; // CPlayer_MovementServices
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelGameRulesProxy {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CGameRulesProxy
            constexpr std::ptrdiff_t MiniMap = 0x8f2ce408; // 
            constexpr std::ptrdiff_t Remap camera angle delta to ability targeting spring strength = 0x8f478c70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t  = 0x900cc1f0; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Item = 0xf78; // 
            constexpr std::ptrdiff_t pÛ@è˝ = 0x8fec63f8; // ∞éÈè˝
        }

        // Parent: CCitadel_Ability_Unicorn_LuminousStrike
        // Fields: 3
        namespace CCitadel_Ability_Unicorn_LuminousStrike {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // 
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamage {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x8f72f110; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierVandalSurgeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9091af98; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Grapple_Air_Control {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t ‡›¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PowerSurge {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: CCitadel_Ability_FireBomb
        // Fields: 3
        namespace CCitadel_Ability_FireBomb {
            constexpr std::ptrdiff_t  = 0x8f30ec00; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f630c18; // 
            constexpr std::ptrdiff_t  = 0x8f630c30; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_FleetfootBoots_BonusClip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2eaf10; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SpiritResilience {
            constexpr std::ptrdiff_t  = 0x90265ba0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Stimpak = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CAbilitySprintVData {
            constexpr std::ptrdiff_t  = 0x9023cd48; // CitadelAbilityVData
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x8f2f4750; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Stunned
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseFlow {
            constexpr std::ptrdiff_t  = 0x900cbef0; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 3
        namespace CRuleEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CRuleEntity = 0x788; // 
            constexpr std::ptrdiff_t HçXè˝ = 0x90032838; // êrıè˝
        }

        // Parent: None
        // Fields: 4
        namespace CPhysThruster {
            constexpr std::ptrdiff_t  = 0x46afc800; // CPhysForce
            constexpr std::ptrdiff_t  = 0x49742400; // 
            constexpr std::ptrdiff_t  = 0x47742400; // 
            constexpr std::ptrdiff_t  = 0x49306440; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LifeSteal_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal_Watcher = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_CripplingSlashVData {
            constexpr std::ptrdiff_t  = 0x80000800; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Werewolf_Hunt {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbilityThumper4VData = 0x1828; // 
            constexpr std::ptrdiff_t hôqè˝ = 0x0; // @≠Èè˝
        }

        // Parent: CCitadel_Ability_Necro_KillSummon
        // Fields: 3
        namespace CCitadel_Ability_Necro_KillSummon {
            constexpr std::ptrdiff_t  = 0x907f1fc0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CProjectile_GraveStone_Projectile = 0x0; // 
            constexpr std::ptrdiff_t †¢˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Doorman_Hotel {
            constexpr std::ptrdiff_t  = 0x8f40f688; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_Darkness_Caster {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelBaseShivAbility {
            constexpr std::ptrdiff_t  = 0x90832900; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_ShivWeapon = 0x0; // 
            constexpr std::ptrdiff_t  "˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CorpseExplosionThinkerVData {
            constexpr std::ptrdiff_t  = 0x90270ed8; // CCitadelModifierVData
            constexpr std::ptrdiff_t base_upgrade_projectile_aoe_modifier = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe6cf08; // CCitadel_Item_BaseProjectileAOEModifier
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_StalkersMark_Teleport_VData {
            constexpr std::ptrdiff_t  = 0x8f59e9d0; // CBaseTriggerAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ControlPointCapturerAuraTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointCapturerAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoPlayerStart {
            constexpr std::ptrdiff_t  = 0x8e88cef0; // CPointEntity
            constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
            constexpr std::ptrdiff_t m_angAccumulatedRootMotionRotation = 0xc; // QAngle
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneVData {
            constexpr std::ptrdiff_t  = 0x80000690; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityTangoTetherVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f710290; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShieldGuy_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatWaitingToPull = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IceDome_AuraModifierBase {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_IceDome_AuraModifierBase = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Passive_Cloak {
            constexpr std::ptrdiff_t  = 0x8d1cd680; // CCitadelModifier
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x880; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Ricochet_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t 8Pw˛ = 0x8f2dc440; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NonPlayerCamera {
            constexpr std::ptrdiff_t  = 0x8fe95cc0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_hDecalMaterial
        // Fields: 2
        namespace CEntityFlame {
            constexpr std::ptrdiff_t  = 0x8ff5e1b0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: m_materialGroup
        // Fields: 1
        namespace CSkeletonInstance {
            constexpr std::ptrdiff_t  = 0x8ff6e3e0; // CGameSceneNode
        }

        // Parent: None
        // Fields: 0
        namespace CEntityComponent {
        }

        // Parent: None
        // Fields: 4
        namespace CBasePlatTrain {
            constexpr std::ptrdiff_t  = 0x90075438; // CBaseToggle
            constexpr std::ptrdiff_t CSprite = 0x0; // 
            constexpr std::ptrdiff_t ∞Cê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90074370; // ¯Mw˛
        }

        // Parent: None
        // Fields: 2
        namespace CProjectile_Familiar_MovingToAttach {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t  = 0x8f2fc900; // 8n,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CPointTeleport {
            constexpr std::ptrdiff_t  = 0x900546a0; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x8f8bd8b0; // 
            constexpr std::ptrdiff_t Fê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_StalkersMark_PostTeleport {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_Drifter_StalkersMark_PostTeleport = 0x250; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Magician_Escape {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t 0Iw˛ = 0x8f6a4ea0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f6a4ec8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_RespawnCreditVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x9038b8b0; // CCitadelModifierAuraVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StatStealBase {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t pHÈè˝ = 0x8f553b20; // 
        }

        // Parent: m_vecProcdUnitsThisShot
        // Fields: 2
        namespace CCitadelModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: m_strTriggerID
        // Fields: 5
        namespace CTriggerGameEvent {
            constexpr std::ptrdiff_t  = 0x9003a0c8; // CBaseTrigger
            constexpr std::ptrdiff_t CTimerEntity = 0x0; // 
            constexpr std::ptrdiff_t Vê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x900356b0; // ¯Mw˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9d37eb0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_TrooperBossVData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
        }

        // Parent: None
        // Fields: 3
        namespace CMessageEntity {
            constexpr std::ptrdiff_t  = 0x90035af0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CEnvEntityIgniter {
            constexpr std::ptrdiff_t  = 0x90983148; // CBaseEntity
            constexpr std::ptrdiff_t CColorCorrectionVolume = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Priest_FlashbangVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t mirage_sand_phantom = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffa48a8; // CAbility_Mirage_SandPhantom
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityEmpowerBulletVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t 0◊bè˝ = 0x8f6291e0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tengu_StoneFormVData {
            constexpr std::ptrdiff_t  = 0x8f729f20; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // @ürè˝
        }

        // Parent: m_flFastChargeStartTime
        // Fields: 2
        namespace CCitadel_Ability_Bull_Charge {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `0˜è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DisarmProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x8f2e2d80; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x902131d0; // ∞-.è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_SlowImmunityVData {
            constexpr std::ptrdiff_t  = 0x800000a1; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367540; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Passive_Camouflage {
            constexpr std::ptrdiff_t  = 0x8fe6e0b0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNPCMaker {
            constexpr std::ptrdiff_t  = 0x8febf3c0; // CBaseNPCMaker
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleShuffledInstanceState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseLerpCursorState_t {
        }

        // Parent: None
        // Fields: 6
        namespace CCitadel_PointTalker {
            constexpr std::ptrdiff_t  = 0x8fecb648; // CCitadel_PointTalker_Base
            constexpr std::ptrdiff_t CInfoTeamSpawn = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadelPlayerBot = 0x4bd8; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadelPlayerBot
            constexpr std::ptrdiff_t  = 0x8f424990; // CCitadel_PointTalker
        }

        // Parent: None
        // Fields: 5
        namespace CMarkupVolumeTagged_NavGame {
            constexpr std::ptrdiff_t  = 0x900419a8; // CMarkupVolumeWithRef
            constexpr std::ptrdiff_t CBaseMoveBehavior = 0x0; // 
            constexpr std::ptrdiff_t Lê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90034c40; // XQw˛
            constexpr std::ptrdiff_t  = 0xa9d2daa0; // 
        }

        // Parent: m_tWallDeployFinishTime
        // Fields: 3
        namespace CProjectile_GraveStone_Projectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t ∞˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9cf8970; // 
        }

        // Parent: None
        // Fields: 4
        namespace CMultiLightProxy {
            constexpr std::ptrdiff_t  = 0x8ff1f230; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dbe6060; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Fencer_Ultimate_Caster_VData {
            constexpr std::ptrdiff_t  = 0x90749668; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ªcè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Graf_Ability03 {
            constexpr std::ptrdiff_t  = 0x8dfc6690; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f61ee30; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Nano_ShadowVData {
            constexpr std::ptrdiff_t  = 0x907f6e28; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x9085c8b8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_MedicBulletsVData {
            constexpr std::ptrdiff_t  = 0x8f2f30b0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x902160c0; // –0/è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d366fe0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_InstantReloadVData {
            constexpr std::ptrdiff_t  = 0x80000036; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367040; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tier3Boss_RocketBarrageVData {
            constexpr std::ptrdiff_t  = 0x8000005b; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LingeringAssist {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3ba140; // ProjectileInfo_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Root {
            constexpr std::ptrdiff_t  = 0x8fe91e40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: m_nMaxDistance
        // Fields: 2
        namespace CCitadelSoundStackFieldOBB {
            constexpr std::ptrdiff_t  = 0x8f459510; // CBaseEntity
            constexpr std::ptrdiff_t  = 0x8fed2380; // 
        }

        // Parent: m_stages
        // Fields: 4
        namespace CPropAnimatingBreakable {
            constexpr std::ptrdiff_t  = 0x90083500; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f913ac8; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8eb8e190; // 
        }

        // Parent: 0¥Èè˝
        // Fields: 3
        namespace CNecro_HauntingSkullEntity {
            constexpr std::ptrdiff_t  = 0x8f326968; // CBaseModelEntity
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffa65f0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Rutger_Pulse_Aura_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t @∞iè˝ = 0x8f69b020; // 
            constexpr std::ptrdiff_t  = 0x901fd850; // @∞iè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_TechCleave {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8d1ddde0; // 
            constexpr std::ptrdiff_t m_strPurgeSound = 0x18b8; // CSoundEventName
            constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Unicorn_RadiantBlast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_Ability_2 = 0x2e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData {
            constexpr std::ptrdiff_t  = 0x800007df; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1ce0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_AirheartRocketeer3VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_hat_trick = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fencer_RiposteVData {
            constexpr std::ptrdiff_t  = 0x9076fc58; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Graf_Ability04 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f61db60; // CCitadel_Ability_Graf_Ability04
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatCloudVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_Pulse_VData {
            constexpr std::ptrdiff_t  = 0x9084dcc8; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_magician_escape = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_Breach {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_LoveBites = 0x13f0; // 
            constexpr std::ptrdiff_t  = 0x8ffbd3e8; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Shotgun_Astro {
            constexpr std::ptrdiff_t  = 0x8f5ab210; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x1; // 
            constexpr std::ptrdiff_t CProjectile_KnightChargeLeading_Projectile = 0xe70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityExplosiveBarrelVData {
            constexpr std::ptrdiff_t  = 0x9064c308; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f5a8578; // 
        }

        // Parent: HÉÏ(ã÷·íeHã%X
        // Fields: 3
        namespace CCitadel_Modifier_ProjectMindVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t yakuza_shakedown_target = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb5ff8; // CCitadel_Ability_Shakedown_Target
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_SplitShotVData {
            constexpr std::ptrdiff_t  = 0x8f30a278; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // ò¢0è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_SuperAcolytesGlove_VData {
            constexpr std::ptrdiff_t  = 0x90282408; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_personal_rejuvenator = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe84388; // CCitadel_ArmorUpgrade_PersonalRejuvenator
            constexpr std::ptrdiff_t upgrade_aoe_smoke_bomb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseAnimFuncs {
        }

        // Parent: None
        // Fields: 6
        namespace CEconWearable {
            constexpr std::ptrdiff_t  = 0x0; // CEconEntity
            constexpr std::ptrdiff_t CEconWearable = 0xc60; // 
            constexpr std::ptrdiff_t  = 0x90081260; // †
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CEconWearable
            constexpr std::ptrdiff_t m_iRawValue32 = 0xa9d2a6e0; // 
            constexpr std::ptrdiff_t x«,è˝ = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_NukeMapVData {
            constexpr std::ptrdiff_t  = 0x907b7b28; // CitadelAbilityVData
            constexpr std::ptrdiff_t fathom_reefdweller_harpoon = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t cadence_ability_silencecontraptions = 0x0; // 
            constexpr std::ptrdiff_t àFè˝ = 0x8ff85998; // CCitadel_Ability_Cadence_SilenceContraptions
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FireBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f62cb80; // 
        }

        // Parent: m_flTimeStopZipping
        // Fields: 3
        namespace CCitadel_Ability_ZipLine {
            constexpr std::ptrdiff_t  = 0x8f319dd0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8fe851f0; // Hÿ,è˝
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Camouflage_Invis {
            constexpr std::ptrdiff_t  = 0x8fe6e940; // CCitadel_Modifier_Invis
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_QuickSilver_Buff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_QuickSilver_Buff = 0x158; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal {
            constexpr std::ptrdiff_t  = 0x8fe7e8f0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_NeutralDamageGrowthVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Basic_RangedArmorBonusVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Navigator {
            constexpr std::ptrdiff_t  = 0x8feb24d0; // CAI_Component
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
        }

        // Parent: a:typeparam
        // Fields: 0
        namespace CPulseArraylib {
        }

        // Parent: None
        // Fields: 6
        namespace CItemFlare {
            constexpr std::ptrdiff_t  = 0x8fecea60; // CItemGeneric
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d697a30; // 
            constexpr std::ptrdiff_t m_iszModifierName = 0x8e0; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_tModifier = 0x8e8; // CUtlStringToken
        }

        // Parent: None
        // Fields: 4
        namespace CModifier_Mirage_Tornado_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_MageWalkVData = 0x1918; // 
            constexpr std::ptrdiff_t 8Ñ1è˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Ability_MageWalkVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Omnicharge_Pendant {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_WeaponEaterVData = 0x18c8; // 
            constexpr std::ptrdiff_t F/è˝ = 0x0; // Ä˝Ëè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_WeaponUpgrade_WeaponEaterVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ProjectileTest04 {
            constexpr std::ptrdiff_t  = 0x8f2f7300; // CCitadel_Item_ProjectileTest
            constexpr std::ptrdiff_t  = 0x8f320788; // Hÿ,è˝
            constexpr std::ptrdiff_t  = 0x8fe78610; // 8n,è˝
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_vecPlayerMountPositionBottom
        // Fields: 3
        namespace CFuncLadder {
            constexpr std::ptrdiff_t  = 0x8f53cd00; // CBaseModelEntity
            constexpr std::ptrdiff_t  = 0x8f53cd30; // 
            constexpr std::ptrdiff_t  = 0x8f53cd60; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFogController {
            constexpr std::ptrdiff_t  = 0x8f523800; // CBaseEntity
            constexpr std::ptrdiff_t . = 0x8dbe4ce0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fencer_Riposte_TargetLifesteal {
            constexpr std::ptrdiff_t  = 0x8ff935c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_Barrage_Caster_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ˜˘è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
            constexpr std::ptrdiff_t  = 0x8f694550; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hEiè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Thumper_2 {
            constexpr std::ptrdiff_t  = 0x8ffbc730; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_ShivDagger {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseShivAbility
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f698930; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f698998; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f6989e8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_Headhunter_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_WeaponUpgrade_HeadshotBooster_VData
            constexpr std::ptrdiff_t 0§Ëè˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x902297a8; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fervor {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x90268290; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Upgrade_ArcaneMedallion {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t Modifiers = 0x8f3167e0; // CCitadel_Modifier_Item_SmokeBomb_PreCast
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace COrbSpawner {
            constexpr std::ptrdiff_t  = 0x8fefd8b0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointTemplateAPI {
        }

        // Parent: None
        // Fields: 3
        namespace CItem {
            constexpr std::ptrdiff_t  = 0x8ff631a0; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x8f580830; // 
            constexpr std::ptrdiff_t 1ˆè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerPush {
            constexpr std::ptrdiff_t  = 0x9007cc38; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerTeleport = 0x0; // 
            constexpr std::ptrdiff_t `(ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90072820; // ¯Mw˛
            constexpr std::ptrdiff_t  = 0xa9d38390; // 
        }

        // Parent: None
        // Fields: 3
        namespace CBaseProp {
            constexpr std::ptrdiff_t  = 0x8f565290; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_bEnableMipGen
        // Fields: 3
        namespace CInfoOffscreenPanoramaTexture {
            constexpr std::ptrdiff_t  = 0x8ff01cb0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f4e43c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPointAngularVelocitySensor {
            constexpr std::ptrdiff_t  = 0x90054230; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_flFogMaxDensityMultiplier
        // Fields: 2
        namespace CPlayerVisibility {
            constexpr std::ptrdiff_t  = 0x8ff17b60; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPointPulseAPI {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Werewolf_UnloadGunVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ¯¬qè˝ = 0x8f71c100; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VandalOverflow {
            constexpr std::ptrdiff_t  = 0x8f716d30; // CCitadel_Modifier_Stunned
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatFormVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SmokeBombVData {
            constexpr std::ptrdiff_t  = 0x90789b68; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IceGrenadeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BerserkerDamageStack {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t Sounds = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 3
        namespace CItemRefresherVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fec63f8; // CCitadel_Item
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_FollowEntity {
            constexpr std::ptrdiff_t  = 0x9005b140; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: overlay_vars
        // Fields: 3
        namespace CBasePlayerWeapon {
            constexpr std::ptrdiff_t  = 0x8fff15d8; // CBaseAnimGraph
            constexpr std::ptrdiff_t `û˛è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ffe9e20; // »Pw˛
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifire_Priest_FlashBangBurnAuraVData {
            constexpr std::ptrdiff_t  = 0x80000751; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247e30; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPhysForce {
            constexpr std::ptrdiff_t  = 0x900437b0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_ProviderType
        // Fields: 0
        namespace CAttributeManager {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Airheart_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f5bcae0; // CCitadel_Ability_PrimaryWeapon
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_HauntingSpiritsVData {
            constexpr std::ptrdiff_t  = 0x907ed088; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_LeapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CModifierDoormanHotelImposterVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_WeaponSwap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Operative_UmbrellaManeuver = 0x12f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Frank_SelfZapVData {
            constexpr std::ptrdiff_t  = 0x907622b8; // CitadelAbilityVData
            constexpr std::ptrdiff_t †FÈè˝ = 0x8f621ff0; // 
        }

        // Parent: m_vTargetCastPos
        // Fields: 4
        namespace CCitadel_Ability_FlyingStrike {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseYamatoAbility
            constexpr std::ptrdiff_t ETelepunchState_t = 0x90101; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t HÉÏ(ã_ìeHã%X = 0x8f718460; // CCitadel_Modifier_Urn_DebuffVData
        }

        // Parent: ®Ow˛
        // Fields: 3
        namespace CCitadel_Modifier_UltCombo_TargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t –®˜è˝ = 0x0; // 
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f5b6f68; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Haze_StackingDamage {
            constexpr std::ptrdiff_t  = 0x8ff92080; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChargeDragEnemy {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãvÌùeHã%X = 0x1; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CounterspellWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x902f37c8; // 
            constexpr std::ptrdiff_t  = 0x9036f718; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Delayed_Stun {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t m_ModifierSurgingPower = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Objective_HealthGrowthVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CAI_SpeechFilter {
            constexpr std::ptrdiff_t  = 0x8febb278; // CBaseEntity
        }

        // Parent: None
        // Fields: 1
        namespace SignatureOutflow_Continue {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_OutflowConnection
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerTrooperDetector {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerTrooperDetector = 0x948; // 
            constexpr std::ptrdiff_t (∂.è˝ = 0x8fecd158; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerTrooperDetector
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoTarget {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t »Pw˛ = 0x8f523cc8; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f523cd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SmokeGrenadeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f68a640; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffa3600; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AbsorbingArmorVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Objective_BulletReistVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
        }

        // Parent: m_nPunchAngleJoltTick
        // Fields: 1
        namespace CPlayer_CameraServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayerPawnComponent
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Timeline {
            constexpr std::ptrdiff_t  = 0x900d9a90; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EntOutputHandler {
            constexpr std::ptrdiff_t  = 0x900cc370; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_KothCashIn {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelTriggerMultiCapturePoint
            constexpr std::ptrdiff_t CCitadel_KothCashIn = 0x1400; // 
            constexpr std::ptrdiff_t ò”Lè˝ = 0x8fef88b0; // p•Ôè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadel_KothCashIn
            constexpr std::ptrdiff_t  = 0x8f4c92f8; // 
        }

        // Parent: m_vTangentIn
        // Fields: 3
        namespace CCitadelZipLineNode {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CCitadelZipLineNode = 0x880; // 
            constexpr std::ptrdiff_t ¯£Lè˝ = 0x8fefa658; // êrıè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Werewolf_UnloadGun2VData {
            constexpr std::ptrdiff_t  = 0x800007c9; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1c80; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Boho_ChannelTether_TetherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Priest_CrossbowEquippedVData {
            constexpr std::ptrdiff_t  = 0x907de0d8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9086bb98; // CCitadelModifierVData
            constexpr std::ptrdiff_t (¯jè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityChargedTackleVData {
            constexpr std::ptrdiff_t  = 0x80000761; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierChargedTackleActiveVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_magician_copyult = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffa2158; // CCitadel_Ability_Magician_CopyUlt
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LightningBullet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_SmokeBombVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItemShrink_RayVData {
            constexpr std::ptrdiff_t  = 0x800000d3; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3673d0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicStormWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t ¿£Ëè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Stamina_Regen_Jump_Reduction {
            constexpr std::ptrdiff_t  = 0x8d38e2d0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t m_flReloadSpeedPercent = 0x750; // float32
            constexpr std::ptrdiff_t m_bDestroyAfterReload = 0x754; // bool
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Damage_Taken_Reduction_Handicap {
            constexpr std::ptrdiff_t  = 0x8f3abe30; // CCitadelModifier
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x8f2c8e80; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DelayedCatapultLaunch {
            constexpr std::ptrdiff_t  = 0x8f3d1e50; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_DelayedCatapultLaunch = 0xd0; // 
        }

        // Parent: m_bDucked
        // Fields: 3
        namespace CCitadelPlayer_MovementServices {
            constexpr std::ptrdiff_t  = 0x8feee9a0; // CPlayer_MovementServices_Humanoid
            constexpr std::ptrdiff_t server = 0x401ff; // 
            constexpr std::ptrdiff_t  = 0x8f4af570; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseFuncs_GameParticleManager {
        }

        // Parent: None
        // Fields: 0
        namespace CScenePayloadVData {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ZombieWallGroundAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x8f6a74c0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ÿtjè˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_TurretClone_Trigger {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t  = 0x8f31cf50; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f313e98; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Ability01VData {
            constexpr std::ptrdiff_t  = 0x9072c798; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityVandalSurgeVData {
            constexpr std::ptrdiff_t  = 0x90899d28; // CitadelAbilityVData
        }

        // Parent: m_bHitWithThisAttack
        // Fields: 3
        namespace CCitadel_Ability_Melee_Base {
            constexpr std::ptrdiff_t  = 0x8fe6a200; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x401ff; // 
            constexpr std::ptrdiff_t  = 0x8f2cbf10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_InfiniteMagazineVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t ¿∑Ëè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ArcaneEaterProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f2e0ca0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe778e0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T3BossWaveBeamPreview {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Tier3Boss_Base
            constexpr std::ptrdiff_t CCitadel_Modifier_BerserkerDamageStackVData = 0x930; // 
            constexpr std::ptrdiff_t ı/è˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TeleportToObjective {
            constexpr std::ptrdiff_t  = 0x8fe9b1d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ServerOnly {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ServerOnly = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelMinimapBoundary {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CCitadelMinimapBoundary = 0x4a0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CFilterAttributeInt {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterAttributeInt = 0x4e0; // 
            constexpr std::ptrdiff_t (ÂÇè˝ = 0x8fff2348; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterAttributeInt
            constexpr std::ptrdiff_t  = 0x8f82e558; // filter_t
        }

        // Parent: pYê˝
        // Fields: 3
        namespace CProjectile_Synth_PlasmaFlux {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f689980; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8e0fcbf0; // –~,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_TechUpgrade_Infuser {
            constexpr std::ptrdiff_t  = 0x8f2ddaa8; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2e2db0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_InMenuVData {
            constexpr std::ptrdiff_t  = 0x90484280; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f40c480; // 
            constexpr std::ptrdiff_t  = 0x904546d0; // 8Hè˝
        }

        // Parent: None
        // Fields: 3
        namespace CKeepUpright {
            constexpr std::ptrdiff_t  = 0x90044930; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPointTemplate {
            constexpr std::ptrdiff_t  = 0x905477c8; // CLogicalEntity
            constexpr std::ptrdiff_t CSoundEventPathCornerEntity = 0x0; // 
            constexpr std::ptrdiff_t m_vMins = 0x560; // Vector
            constexpr std::ptrdiff_t m_vMaxs = 0x56c; // Vector
        }

        // Parent: m_TintColor
        // Fields: 2
        namespace CEnvVolumetricFogController {
            constexpr std::ptrdiff_t  = 0x8ff170d0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit_VData {
            constexpr std::ptrdiff_t  = 0x8f5a5d80; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // †]Zè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Mirage_Teleport_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_tSlowStartTime
        // Fields: 2
        namespace CAbilityGenericPerson3VData {
            constexpr std::ptrdiff_t  = 0x90767098; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f6261e0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_Astro_Shotgun_Toggle_VData {
            constexpr std::ptrdiff_t  = 0x8f5a63e0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // dZè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TargetPracticeDebuff {
            constexpr std::ptrdiff_t  = 0x8de99320; // CCitadelModifier
            constexpr std::ptrdiff_t CProjectile_Airheart_FloatingBomb = 0xaf0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hornet_Sting {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ‡d˘è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BullCharging {
            constexpr std::ptrdiff_t  = 0x906c5150; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_AbilityName = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_IcarusWings {
            constexpr std::ptrdiff_t  = 0x8d2402d0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_AOE_Tech_Shield = 0x1078; // 
            constexpr std::ptrdiff_t  = 0x8fe89ce8; // @_Ïè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_SuperNeutralShield {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t m_HeadShotParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t  = 0x8f2e1cb8; // CCitadel_Item_PhantomStrike
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_NeutralSinnerSacrificeVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_TrooperNeutralVData
            constexpr std::ptrdiff_t @.Ìè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPointModifierThinker {
            constexpr std::ptrdiff_t  = 0x8ffd35a0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 3
        namespace CTemplateNPCMaker {
            constexpr std::ptrdiff_t  = 0x8febf480; // CBaseNPCMaker
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_SetAnimGraphParam {
            constexpr std::ptrdiff_t  = 0x9005b520; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_FlashlightServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayerPawnComponent
        }

        // Parent: m_CCitadelRegenComponent
        // Fields: 4
        namespace CCitadelAnimatingModelEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CCitadelBaseMusicOBB = 0x4e0; // 
            constexpr std::ptrdiff_t  = 0x8fed1fe8; // `$Ìè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadelBaseMusicOBB
        }

        // Parent: None
        // Fields: 5
        namespace CPhysLength {
            constexpr std::ptrdiff_t  = 0x5; // CPhysConstraint
            constexpr std::ptrdiff_t `Jê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90044a40; // XQw˛
            constexpr std::ptrdiff_t  = 0xa9d2dfb0; // 
            constexpr std::ptrdiff_t AVHÉÏPLãÚÉ˘á> = 0xc; // m_flLinearFrequency
        }

        // Parent: m_aPlayers
        // Fields: 2
        namespace CTeam {
            constexpr std::ptrdiff_t  = 0x8ff25440; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Tornado_Evasion {
            constexpr std::ptrdiff_t  = 0x907b2a70; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Magician_ShadowClone = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_HeatSinks {
            constexpr std::ptrdiff_t  = 0x908dbf20; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Projectile_Petrify = 0x0; // 
            constexpr std::ptrdiff_t  = 0xa9be8070; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Targetdummy_3 {
            constexpr std::ptrdiff_t  = 0x908cd0e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Projectile_Pillar = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f725e10; // 
        }

        // Parent: m_SelfModifier
        // Fields: 2
        namespace CAbilityHookVData {
            constexpr std::ptrdiff_t  = 0x800005da; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: m_vLastVelocity
        // Fields: 3
        namespace CCitadel_Ability_IcePath {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_RapidFire_AirJuggle = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: m_SourceAbilityID
        // Fields: 0
        namespace AbilityUpgradeState_t {
        }

        // Parent: m_nPositionXY
        // Fields: 0
        namespace STrooperFOWEntity {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Priest_Tether {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Link
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_Tether = 0x180; // 
            constexpr std::ptrdiff_t  = 0x0; // \Óè˝
        }

        // Parent: None
        // Fields: 3
        namespace CAI_VolumetricEventEntity {
            constexpr std::ptrdiff_t  = 0x8fec4df8; // CPointEntity
            constexpr std::ptrdiff_t CPathAccompany = 0x0; // 
            constexpr std::ptrdiff_t »Îè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicNPCCounterAABB {
            constexpr std::ptrdiff_t  = 0x9003dab8; // CLogicNPCCounter
            constexpr std::ptrdiff_t CLogicDistanceAutosave = 0x0; // 
            constexpr std::ptrdiff_t ¿1ê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLaneMarkerPath {
            constexpr std::ptrdiff_t  = 0x8fecdd40; // CServerOnlyEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Unicorn_LuminousStrikeVData {
            constexpr std::ptrdiff_t  = 0x908d9668; // CitadelAbilityVData
            constexpr std::ptrdiff_t thumper_ability_1 = 0x0; // 
        }

        // Parent: m_strSwipeTracerParticleRight
        // Fields: 3
        namespace CCitadel_Ability_Fencer_PrimaryWeapon_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f6348f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IceDome {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelAbilityIncendiaryProjectileVData = 0x1838; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Wraith_RapidFireVData {
            constexpr std::ptrdiff_t  = 0x8f711590; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021f740; // ®qè˝
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
        }

        // Parent: None
        // Fields: 8
        namespace CNPC_PestilenceDrone {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x1810; // 
            constexpr std::ptrdiff_t  = 0x8ff109b8; // pñè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_PestilenceDrone
            constexpr std::ptrdiff_t Visuals = 0x8db20f50; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CCitadelIdolReturnTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerModifier
            constexpr std::ptrdiff_t CCitadelIdolReturnTrigger = 0x930; // 
            constexpr std::ptrdiff_t àˆ@è˝ = 0x8feccfd0; // ‡ﬁÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelIdolReturnTrigger
            constexpr std::ptrdiff_t m_tModifier = 0x8e0; // CUtlStringToken
            constexpr std::ptrdiff_t  = 0x90426de0; // CBaseTrigger
        }

        // Parent: None
        // Fields: 7
        namespace CPhysicsPropRespawnable {
            constexpr std::ptrdiff_t  = 0x8ff6a290; // CPhysicsProp
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de04200; // 
            constexpr std::ptrdiff_t m_OnSpawn = 0x4a0; // CEntityIOOutput
            constexpr std::ptrdiff_t m_OnTrigger = 0x4b8; // CEntityIOOutput
            constexpr std::ptrdiff_t m_bDisabled = 0x4d0; // bool
        }

        // Parent: None
        // Fields: 3
        namespace CEnvBeam {
            constexpr std::ptrdiff_t  = 0x0; // CBeam
            constexpr std::ptrdiff_t  = 0x8f874f48; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLightSpotEntity {
            constexpr std::ptrdiff_t  = 0x0; // CLightEntity
            constexpr std::ptrdiff_t  = 0x8f524720; // CLightSpotEntity
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_DoorwayPortalBacksideBlocker {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CCitadel_Modifier_Astro_Rifle_SelfVData = 0x830; // 
            constexpr std::ptrdiff_t (Zè˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierVData_SetModelScale {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x90961fb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Werewolf_ClawWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon_ScalingAltFire
            constexpr std::ptrdiff_t  = 0x908cd0e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Projectile_Pillar = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f725e10; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_BloodBlast {
            constexpr std::ptrdiff_t  = 0x8f496d28; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8f2c7ed0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VampireBat_LoveBitesVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Thumper_1 {
            constexpr std::ptrdiff_t  = 0x8f710768; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f710778; // 
            constexpr std::ptrdiff_t  = 0x8f710790; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_GenericPerson_3 {
            constexpr std::ptrdiff_t  = 0x8ff8ded0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityRestorativeGooVData {
            constexpr std::ptrdiff_t  = 0x8f72e588; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ®Ârè˝
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_Chrono_TimeWallVData {
            constexpr std::ptrdiff_t  = 0x90645b70; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RocketBarrageVolleyVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PristineEmblem_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9035d438; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_tier2boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier3Boss_Laser_Debuff {
            constexpr std::ptrdiff_t  = 0x8d2345a0; // CCitadel_Modifier_Tier3Boss_Base
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2e4b90; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: m_cellX
        // Fields: 2
        namespace CCitadelBaseAbility {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CBaseEntity
            constexpr std::ptrdiff_t Gameplay = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTonemapTrigger {
            constexpr std::ptrdiff_t  = 0x8f51c300; // CBaseTrigger
            constexpr std::ptrdiff_t  = 0x8f51c318; // 
            constexpr std::ptrdiff_t  = 0x8f51c338; // 
            constexpr std::ptrdiff_t  = 0x8f51beb8; // 
            constexpr std::ptrdiff_t  = 0x8f51b2b8; // 
        }

        // Parent: CCitadelBaseDashCastAbility
        // Fields: 2
        namespace CCitadelBaseDashCastAbility {
            constexpr std::ptrdiff_t  = 0x8fed6d40; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelPassthroughFakeWall {
            constexpr std::ptrdiff_t  = 0x8feec940; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvShake {
            constexpr std::ptrdiff_t  = 0x9001e080; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Necro_Coffin {
            constexpr std::ptrdiff_t  = 0x8f694980; // CCitadelModifier
            constexpr std::ptrdiff_t `é˝ = 0x8f69b220; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Barrier {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t m_ChannelParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidLeechSeedVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_MageWalk {
            constexpr std::ptrdiff_t  = 0x8f6a9188; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Mirage_FireBeetles {
            constexpr std::ptrdiff_t  = 0x8ffa2500; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gunslinger_SalvoVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9078dcd8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_EmpowerBullet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_flTotalPendingHeal = 0xd0; // float32
            constexpr std::ptrdiff_t m_flTotalHeal = 0xd4; // float32
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viper_Ability04VData {
            constexpr std::ptrdiff_t  = 0x800007a6; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f716e90; // 
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 3
        namespace CCitadel_Ability_WreckerTeleport {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x8f313e80; // 
            constexpr std::ptrdiff_t  = 0x8f31cf50; // 8n,è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IceDomeVData {
            constexpr std::ptrdiff_t  = 0x90705de8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityPowerJumpVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ScalingPowerUpVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_TechRange {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 1
        namespace CModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CPathAccompany {
            constexpr std::ptrdiff_t  = 0x8febd810; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOEntityNameStringArgs_t {
        }

        // Parent: None
        // Fields: 8
        namespace CNPC_YakuzaGangster {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t m_mapEntToTimeHit = 0xd0; // CUtlOrderedMap<CHandle<CBaseEntity>,GameTime_t>
            constexpr std::ptrdiff_t m_nNumPlayersAffected = 0xf8; // int32
            constexpr std::ptrdiff_t m_nNumPlayersKilled = 0xfc; // int32
            constexpr std::ptrdiff_t m_playerAngles = 0x100; // QAngle
            constexpr std::ptrdiff_t m_ConeParticle = 0x10c; // ParticleIndex_t
            constexpr std::ptrdiff_t Modifiers = 0x8f328b30; // MPropertyStartGroup
            constexpr std::ptrdiff_t m_flShadowFormSpeed = 0x1818; // float32
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerCallback {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerCallback = 0x8e8; // 
            constexpr std::ptrdiff_t  = 0x90074c08; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CTriggerCallback
            constexpr std::ptrdiff_t  = 0xa9e51640; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Drifter_Darkness_Target {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f5a5038; // 
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_BaseHeldItemVData {
            constexpr std::ptrdiff_t  = 0x90496f88; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fortuna_Ability03 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbilityEmpowerBulletVData = 0x1828; // 
            constexpr std::ptrdiff_t ‡êbè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SkyRunner_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f69df30; // CAbility_Operative_UmbrellaManeuver
            constexpr std::ptrdiff_t  = 0x8ffaf9f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatSwarmVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_GangActivity_Cancel {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Gunslinger_DemonCarbineVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t –l˘è˝ = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Modifier_Base_DOT_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ê2Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundOpvarSetAutoRoomEntity {
            constexpr std::ptrdiff_t  = 0x8f3dabb0; // CSoundOpvarSetPointEntity
        }

        // Parent: { 'Output'='m_strEntityOutput' 'Param'='m_strEntityOutputParam' 'Until Canceled'='m_bListenUntilCanceled' }
        // Fields: 2
        namespace CPulseCell_Outflow_ListenForEntityOutput {
            constexpr std::ptrdiff_t  = 0x9005b890; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPushable {
            constexpr std::ptrdiff_t  = 0x0; // CBreakable
            constexpr std::ptrdiff_t CFuncMoveLinearAlias_momentary_door = 0x888; // 
            constexpr std::ptrdiff_t  = 0x9001d4a8; // ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFuncMoveLinearAlias_momentary_door
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ShadowStrike {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t m_BuildUpModifier = 0x780; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x790; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ImmunityModifier = 0x7a0; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CRotatorTarget {
            constexpr std::ptrdiff_t  = 0x8ff5fba0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysicsEntitySolver {
            constexpr std::ptrdiff_t  = 0x90042c90; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8ec820; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLogicCollisionPair {
            constexpr std::ptrdiff_t  = 0x9003aa88; // CLogicalEntity
            constexpr std::ptrdiff_t CLogicLineToEntity = 0x0; // 
            constexpr std::ptrdiff_t –Yê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90035990; // ¯Mw˛
        }

        // Parent: None
        // Fields: 2
        namespace CTestEffect {
            constexpr std::ptrdiff_t  = 0x90015890; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Necro_GunTetherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f6a82c0; // 
            constexpr std::ptrdiff_t `ræ©6 = 0x8ffabd10; // CCitadelTrackedProjectile
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LurkersAmbush_Invis {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Invis
            constexpr std::ptrdiff_t CCitadel_Modifier_GoatGoingUp_LingeringAirControl = 0x250; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT {
            constexpr std::ptrdiff_t  = 0x8ffb6740; // CCitadel_Modifier_Burning
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityStompVData {
            constexpr std::ptrdiff_t  = 0x8f68bfa8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ∏øhè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LifeDrain {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_PainAura_Target = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_HealthNova_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f2e2cd8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // -.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GuardianWard_VData {
            constexpr std::ptrdiff_t  = 0x8000002b; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9023cd48; // CitadelAbilityVData
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x8f2f4750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_ScriptedSequenceCursorState_t {
        }

        // Parent: None
        // Fields: 8
        namespace CPropDoorRotating {
            constexpr std::ptrdiff_t  = 0x9005c580; // CBasePropDoor
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e96fc50; // 
            constexpr std::ptrdiff_t m_bBreakable = 0xf70; // bool
            constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xf71; // bool
            constexpr std::ptrdiff_t m_currentDamageState = 0xf74; // int32
            constexpr std::ptrdiff_t m_damageStates = 0xf78; // CUtlVector<CUtlSymbolLarge>
        }

        // Parent: m_flSelfIllumScale
        // Fields: 4
        namespace CEnvParticleGlow {
            constexpr std::ptrdiff_t  = 0x0; // CParticleSystem
            constexpr std::ptrdiff_t CEnvParticleGlow = 0xd10; // 
            constexpr std::ptrdiff_t aÑè˝ = 0x8fffb700; // ‡∫ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CEnvParticleGlow
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Spiritburn_DOT {
            constexpr std::ptrdiff_t  = 0x9025a450; // CCitadel_Modifier_Burning
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_WeaponShielding = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x712fc3c0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CMathRemap {
            constexpr std::ptrdiff_t  = 0x90034170; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c65d0; // 
        }

        // Parent: CCitadel_Ability_Familiar_Spotlight
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Spotlight {
            constexpr std::ptrdiff_t  = 0x907770a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_FlameDash = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f623b48; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_ChannelTether {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5be2b8; // CCitadel_Modifier_Astro_Rifle_SelfVData
            constexpr std::ptrdiff_t  = 0x8ff73310; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Magician_BigBolt {
            constexpr std::ptrdiff_t  = 0x8ffabaf0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: CCitadel_Ability_Targetdummy_1
        // Fields: 3
        namespace CCitadel_Modifier_TetherNoConnectionVData {
            constexpr std::ptrdiff_t  = 0x90870080; // CCitadelModifierVData
            constexpr std::ptrdiff_t Hâ\$WHÉÏ0ËAˇ∞ = 0x90879768; // 
            constexpr std::ptrdiff_t Hã¡ã Hˇ‡ÃÃÃÃÃÃÃÃÄπÿ = 0x90879780; // ênqè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Intimidated_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t Sounds = 0x8f5a02a0; // CCitadelModifierDruidInvis
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t HÉÏ(ã÷sæeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DetentionAmmo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Item_GuardianWard = 0x1078; // 
            constexpr std::ptrdiff_t  = 0x8fe80818; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
            constexpr std::ptrdiff_t  = 0x9038b6c8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundOpvarSetOBBWindEntity {
            constexpr std::ptrdiff_t  = 0x0; // CSoundOpvarSetPointBase
            constexpr std::ptrdiff_t WeaponAttackType_t = 0x210404; // 
            constexpr std::ptrdiff_t  = 0xffffffff; // 
        }

        // Parent: None
        // Fields: 6
        namespace CCitadelPlayerPawn {
            constexpr std::ptrdiff_t  = 0x9041de60; // CCitadelPlayerPawnBase
            constexpr std::ptrdiff_t ‡™Ïè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fecaaa0; // XQw˛
            constexpr std::ptrdiff_t à{1è˝ = 0xa9ce19c0; // 
            constexpr std::ptrdiff_t @UAVAWHãÏHÉÏpLãÚÉ˘áI = 0x4; // 
            constexpr std::ptrdiff_t `´Ïè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_DivineBarrier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
            constexpr std::ptrdiff_t  = 0x8f315b38; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CAI_CitadelNavigator {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CAI_Navigator
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VampireBat_StealLifeVData {
            constexpr std::ptrdiff_t  = 0x908ec4d8; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SleepBomb_Asleep {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Sleep
            constexpr std::ptrdiff_t CCitadel_Modifier_SleepBomb_Asleep = 0x180; // 
            constexpr std::ptrdiff_t  = 0x0; // 0∂Áè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LockDown_Debuff {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x716b01b0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_BurrowVData {
            constexpr std::ptrdiff_t  = 0x906c6428; // CitadelAbilityVData
            constexpr std::ptrdiff_t ∞IÌè˝ = 0x8f59ea00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletFlurry {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x1; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SmokeBomb {
            constexpr std::ptrdiff_t  = 0x8ff964e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hornet_Snipe {
            constexpr std::ptrdiff_t  = 0x8ff93cd0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bomber_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_ChronoSwap_BubbleMoveVData = 0x9f8; // 
            constexpr std::ptrdiff_t [è˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_KineticSashTriggered {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_LastHitShotID = 0xd0; // ShotID_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceProc_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Ricochet_Proc = 0x320; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_SpellShieldVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 8∑.è˝ = 0x8f2f10c8; // 
            constexpr std::ptrdiff_t  = 0x9021f740; // h©.è˝
        }

        // Parent: m_iszStackName
        // Fields: 0
        namespace PhysicsRagdollPose_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPropDataComponent {
            constexpr std::ptrdiff_t  = 0x8ff26610; // CEntityComponent
        }

        // Parent: None
        // Fields: 6
        namespace CScriptTriggerOnce {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerOnce
            constexpr std::ptrdiff_t CScriptTriggerOnce = 0x908; // 
            constexpr std::ptrdiff_t ‹çè˝ = 0x90074088; // ‡Oê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CScriptTriggerOnce
            constexpr std::ptrdiff_t  = 0x8f8e00f0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLightOrthoEntity {
            constexpr std::ptrdiff_t  = 0x0; // CLightEntity
            constexpr std::ptrdiff_t  = 0x8f524738; // CLightOrthoEntity
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_CultistSacrifice {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_EternalGift = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_EternalGift
        }

        // Parent: None
        // Fields: 3
        namespace CItem_ResonantHealing {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t @_Ïè˝ = 0x8f304740; // 
            constexpr std::ptrdiff_t PπÈè˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_CatapultStun {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Knockdown
            constexpr std::ptrdiff_t CCitadel_Modifier_CatapultStun = 0x100; // 
            constexpr std::ptrdiff_t ‡h:è˝ = 0x0; // ÄÛËè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_CatapultStun
        }

        // Parent: None
        // Fields: 5
        namespace CInWorldKeyBindPanel {
            constexpr std::ptrdiff_t  = 0x0; // CPointClientUIWorldPanel
            constexpr std::ptrdiff_t CInWorldKeyBindPanel = 0x938; // 
            constexpr std::ptrdiff_t  = 0x8fef8b48; // ∞è˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CInWorldKeyBindPanel
            constexpr std::ptrdiff_t Visuals = 0x8f4cb150; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_PickupItemSpawnerVData {
            constexpr std::ptrdiff_t  = 0x9041bbf8; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatWaitingToPull {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f6a9260; // CCitadel_Modifier_PunkgoatWaitingToPull
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Swan_FeatherBoomerang {
            constexpr std::ptrdiff_t  = 0x907ed000; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_NukeMap = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f68e7a0; // 
        }

        // Parent: `¸è˝
        // Fields: 1
        namespace CAbilitySpiderShieldVData {
            constexpr std::ptrdiff_t  = 0x90939058; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_AnthemBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_AnthemBuff = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RestorativeGoo {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IcePathVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Chrono_KineticCarbineVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_BloodBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x8f6322d0; // CCitadel_Ability_Trappers_Bolo
            constexpr std::ptrdiff_t  = 0x8ff8c000; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpeedBoost {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_SpeedBoost = 0xd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountInstanceState_t {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerTeleport {
            constexpr std::ptrdiff_t  = 0x8ff6f560; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de22860; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Camouflage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_ModDisruptorVData = 0x19b0; // 
            constexpr std::ptrdiff_t .è˝ = 0x0; // Ä˝Ëè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Item_ModDisruptorVData
        }

        // Parent: None
        // Fields: 3
        namespace CFuncWall {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CFuncWall = 0x788; // 
            constexpr std::ptrdiff_t  = 0x90005100; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bebop_Hook_BulletAmp {
            constexpr std::ptrdiff_t  = 0x8f5b9440; // CCitadelModifier
            constexpr std::ptrdiff_t ãËç˝ = 0x8f5b71b8; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Item_BaseProjectileAOEModifierVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t †°Èè˝ = 0x8f2e4ee0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_LaserBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_flTackleStartTime
        // Fields: 3
        namespace CCitadel_Ability_SuperNeutralCharge {
            constexpr std::ptrdiff_t  = 0x8d1c70d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_nFastFireEndTime = 0xf78; // GameTime_t
            constexpr std::ptrdiff_t m_DebuffReducedParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CanDamageMidBoss {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_AttachTarget = 0xe0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ZiplineSpeedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9038b6c8; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CGameRulesProxy {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CGameRulesProxy = 0x4a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CInfoLadderDismount {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CInfoLadderDismount = 0x4a0; // 
        }

        // Parent:  æê˝
        // Fields: 0
        namespace CPulseServerFuncs {
        }

        // Parent: None
        // Fields: 7
        namespace CNPC_Escort {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CNPC_Escort = 0x17e0; // 
            constexpr std::ptrdiff_t  = 0x8fefe738; // pñè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Escort
            constexpr std::ptrdiff_t  = 0x8f4d9020; // 
            constexpr std::ptrdiff_t CNPC_Escort = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f2c7ed0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CMessage {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CMessage = 0x4d8; // 
            constexpr std::ptrdiff_t *Wè˝ = 0x9001d5b0; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 3
        namespace CPointVelocitySensor {
            constexpr std::ptrdiff_t  = 0x90054370; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_vecTrackedStats
        // Fields: 0
        namespace TrackedStatNetworkData_t {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_MaulingLeapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_psychic_lift = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidPlantInvisBushVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Operative_Revelation_VData {
            constexpr std::ptrdiff_t  = 0x9083c798; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Tornado_HoldInPlace {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Nikuman = 0x410; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Gunslinger_DemonMark {
            constexpr std::ptrdiff_t  = 0x8ff99560; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Urn_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x8f719980; // CCitadel_Modifier_Urn_Debuff
        }

        // Parent: ¿Èè˝
        // Fields: 2
        namespace CCitadel_Ability_Nano_Pounce_VData {
            constexpr std::ptrdiff_t  = 0x80000777; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_shieldguy_ult = 0x0; // 
        }

        // Parent: m_GlowEnemeyModifier
        // Fields: 2
        namespace CCitadel_Modifier_Guiding_ArrowVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  +¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NullificationAuraAOE_VData {
            constexpr std::ptrdiff_t  = 0x8f30bde8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_WeaponPowerForHealthVData {
            constexpr std::ptrdiff_t  = 0x80000099; // CitadelItemVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier3Boss_DropBombsVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierTier2BossLaserChargeVData {
            constexpr std::ptrdiff_t  = 0x8f2dca20; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 0 -è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealEntitiy {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_HealEntitiy = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DamageResistanceVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: m_timescale
        // Fields: 0
        namespace EngineCountdownTimer {
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModelEntityAPI {
        }

        // Parent: None
        // Fields: 4
        namespace CScriptTriggerMultiple {
            constexpr std::ptrdiff_t  = 0x8f8df200; // CTriggerMultiple
            constexpr std::ptrdiff_t  = 0x8f8df210; // 
            constexpr std::ptrdiff_t  = 0x8f8df220; // 
            constexpr std::ptrdiff_t  = 0x8f8df228; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ControlPointCapturerAura {
            constexpr std::ptrdiff_t  = 0x8fed7a10; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x501ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d77b7a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvSpark {
            constexpr std::ptrdiff_t  = 0x9001cf20; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AIPhysics {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_AIPhysics = 0xd0; // 
        }

        // Parent: m_JarExplodeParticle
        // Fields: 1
        namespace CCitadel_Ability_Necro_HauntingSkullVData {
            constexpr std::ptrdiff_t  = 0x907fd548; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_CloneSingle_Trigger {
            constexpr std::ptrdiff_t  = 0x8ff89e00; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityWreckerScrapBlastVData {
            constexpr std::ptrdiff_t  = 0x8f7147f0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Hqè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Disarmed {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_Healbane_Debuff = 0x150; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BulletArmorReductionVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: m_vecBaseLocationY
        // Fields: 3
        namespace CCitadelTeam {
            constexpr std::ptrdiff_t  = 0x0; // CTeam
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ActiveReload {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticShot = 0x338; // 
            constexpr std::ptrdiff_t @O2è˝ = 0x0; // PπÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_MysticShot
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Clone_End {
            constexpr std::ptrdiff_t  = 0x9074d3c0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_RapidFire = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f6239e8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_CameraDummy {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãóæeHã%X = 0x8f6261e0; // CCitadel_Ability_IncendiaryProjectile
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatTetheredVData {
            constexpr std::ptrdiff_t  = 0x8f69a140; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // X°iè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Swan_AcrobatVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_GarbageAuraTargetModifierVData {
            constexpr std::ptrdiff_t  = 0x908fd318; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t ¿Ø˚è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x908ce608; // CBaseEntity
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityHornetStingVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Stunned {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticShotVData = 0x970; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Stabilizing_Tripod {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CharmedWraps {
            constexpr std::ptrdiff_t  = 0x902284d0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifierAura
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PlayerDisconnected {
            constexpr std::ptrdiff_t  = 0x8fe97e10; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_nDraftsRemaining
        // Fields: 0
        namespace ItemDraftRoundState_t {
        }

        // Parent: m_eClass
        // Fields: 0
        namespace STeamFOWEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_LocalNavigatorBase {
            constexpr std::ptrdiff_t  = 0x0; // CAI_Component
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModelEntityOnDamageLevelChangedArgs_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_KillSummonTriggerVData {
            constexpr std::ptrdiff_t  = 0x80000739; // CBaseTriggerAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247dc0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Electric_Slippers {
            constexpr std::ptrdiff_t  = 0x8f2e0648; // CCitadel_Item
            constexpr std::ptrdiff_t @ÈÊè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fe6e720; // 8Pw˛
        }

        // Parent: None
        // Fields: 4
        namespace CItemHauntingScream {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CModifierGlitchVData = 0x920; // 
            constexpr std::ptrdiff_t  = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CModifierGlitchVData
        }

        // Parent: None
        // Fields: 5
        namespace CFilterLOS {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterLOS = 0x4d8; // 
            constexpr std::ptrdiff_t  = 0x8fff2688; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterLOS
            constexpr std::ptrdiff_t m_iFilterClass = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 2
        namespace CPointOrient {
            constexpr std::ptrdiff_t  = 0x8ff1f490; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_SpotlightEffect {
            constexpr std::ptrdiff_t  = 0x8f5bde40; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatPull {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t î˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_SilenceContraptions {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5c0e90; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_WreckerSalvageVData {
            constexpr std::ptrdiff_t  = 0x9088b388; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x908e6258; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f70fdc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCardTossVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
            constexpr std::ptrdiff_t  = 0x80000684; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e0d3860; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CModifierApplyModifierOnDamageTakenVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: bClip3DSkyBoxNearToWorldFar
        // Fields: 0
        namespace sky3dparams_t {
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelDruidPlantShield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifire_Bookworm_DragonFire = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifire_Bookworm_DragonFire
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DazzlingOrbWatcher {
            constexpr std::ptrdiff_t  = 0x8e284e70; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f71b238; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Exposed {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Trappers_Bolo = 0x1298; // 
        }

        // Parent: m_AreaModifier
        // Fields: 2
        namespace CCitadel_Ability_Bookworm_AOEMagicVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Operative_Blindside_EnemyDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_GangActivity {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierIntimidatedVData {
            constexpr std::ptrdiff_t  = 0x8f5bb6b8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ÿ∂[è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierShadowStepVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_InvisVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_HornetLeap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_HornetLeap = 0x1f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StormCloud {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifierLashGrappleTargetVData = 0xa00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_ExpressShot_VData {
            constexpr std::ptrdiff_t  = 0x9028db58; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f2e0ca0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AbsorbingArmor {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_Magic_Storm {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãFÇöeHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ArcticBlastAOE {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t m_FireRateModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CDestructiblePartsComponent {
        }

        // Parent: None
        // Fields: 5
        namespace CNPC_Neutral_Flying_Pigeon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Pigeon = 0xc10; // 
            constexpr std::ptrdiff_t  = 0x8ff10098; // ∞%Ìè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNPC_Neutral_Flying_Pigeon
            constexpr std::ptrdiff_t  = 0x8f5086b8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CChangeLevel {
            constexpr std::ptrdiff_t  = 0x8f558a38; // CBaseTrigger
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_WreckingBallThrow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ¿zÁè˝ = 0x8f710f80; // CCitadel_Ability_Unicorn_PrimaryWeaponVData
        }

        // Parent: m_szDisplayText
        // Fields: 4
        namespace CBaseButton {
            constexpr std::ptrdiff_t  = 0x8ff58990; // CBaseToggle
            constexpr std::ptrdiff_t server = 0x100ff; // 
            constexpr std::ptrdiff_t  = 0x8f565f10; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dd5f9a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TechDamageProcWatcher {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  Áè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x0; // 0Iw˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_UltimateBurst_Proc {
            constexpr std::ptrdiff_t  = 0x8d1f0460; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f3288a8; // 
        }

        // Parent: m_Item
        // Fields: 0
        namespace ItemDraftItem_t {
        }

        // Parent: m_Type
        // Fields: 2
        namespace CPulseCell_SoundEventStart {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_SoundEventStart = 0x50; // 
        }

        // Parent: pulse_runtime_lib
        // Fields: 2
        namespace CPulseCell_Step_DebugLog {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Step_DebugLog = 0x48; // 
        }

        // Parent: m_Weight
        // Fields: 5
        namespace CColorCorrectionVolume {
            constexpr std::ptrdiff_t  = 0x90014610; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x8f862170; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e813470; // 
            constexpr std::ptrdiff_t  = 0x90004880; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_TechUpgrade_SuperAcolyteGloves {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t Visuals = 0x8f316830; // 
            constexpr std::ptrdiff_t  = 0x0; // 8n,è˝
            constexpr std::ptrdiff_t CCitadel_Item_PhantomStrike = 0x1078; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CinematicIntro_Player {
            constexpr std::ptrdiff_t  = 0x8fed1380; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemPunchable_RejuvVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_WallDebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ¿”˙è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f6923a8; // CCitadel_Modifier_Priest_Immobilize
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Synth_Barrage_Amp_VData {
            constexpr std::ptrdiff_t  = 0x907fd798; // CCitadelModifierVData
            constexpr std::ptrdiff_t projectile_rolling_fireball = 0x0; // 
            constexpr std::ptrdiff_t PPAè˝ = 0x8ffa3b48; // CProjectile_Rolling_FireBall
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
            constexpr std::ptrdiff_t  = 0x8ff9c4c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_Radiance {
            constexpr std::ptrdiff_t  = 0x8ffbbf70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierVandalOverflowVData {
            constexpr std::ptrdiff_t  = 0x8f7164d8; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x901fd850; // dqè˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CItemAOESilenceModifierVData {
            constexpr std::ptrdiff_t  = 0x8000009e; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_HealOnLevelVData {
            constexpr std::ptrdiff_t  = 0x90292b88; // CitadelItemVData
            constexpr std::ptrdiff_t †°Èè˝ = 0x902355b8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CheckNearbyPlayerParryVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 6
        namespace CCitadelItemKothSpawner {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelItemPickup
            constexpr std::ptrdiff_t CCitadelItemKothSpawner = 0x57a0; // 
            constexpr std::ptrdiff_t  = 0x8fee4d68; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadelItemKothSpawner
            constexpr std::ptrdiff_t HÉÏ(ã64eHã%X = 0x1f7934a0; // 
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_FireUserEntityIOVData {
            constexpr std::ptrdiff_t  = 0x90961de8; // CCitadelModifierVData
        }

        // Parent: flFlashFadeInTime
        // Fields: 2
        namespace CCitadel_Ability_SkyRunner_FlakShotVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f698048; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Doorman_Hotel_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Hunger_Target_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ‡Zè˝ = 0x8f5adb18; // 
            constexpr std::ptrdiff_t  = 0x903dc820; // H€Zè˝
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityTargetdummy1VData {
            constexpr std::ptrdiff_t  = 0x908d5d28; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VandalSurge {
            constexpr std::ptrdiff_t  = 0x9092efe0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Shakedown_Target = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f7127c0; // CCitadel_Ability_SettingSun
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Lash_Flog_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DebuffImmunityVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CAI_BaseNPCVData {
            constexpr std::ptrdiff_t  = 0x903df428; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CBodyComponentBaseAnimGraph {
            constexpr std::ptrdiff_t  = 0x0; // CBodyComponentSkeletonInstance
            constexpr std::ptrdiff_t CServerOnlyModelEntity = 0x780; // 
            constexpr std::ptrdiff_t  = 0x8ffe8f68; // êrıè˝
        }

        // Parent: None
        // Fields: 4
        namespace CLightCapsuleEntity {
            constexpr std::ptrdiff_t  = 0x0; // CLightEntity
            constexpr std::ptrdiff_t CLightCapsuleEntity = 0x788; // 
            constexpr std::ptrdiff_t  = 0x8ff1fa88; // ∞ÍÒè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLightCapsuleEntity
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_FireRateAura {
            constexpr std::ptrdiff_t  = 0x9023cce0; // CCitadel_Item
            constexpr std::ptrdiff_t CTier3BossAbility = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x1f793400; // 
            constexpr std::ptrdiff_t  = 0xa9ce0730; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_WeaponShielding {
            constexpr std::ptrdiff_t  = 0x8f305650; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x0; // Hÿ,è˝
            constexpr std::ptrdiff_t CItem_WitheringWhip_VData = 0x19d8; // 
            constexpr std::ptrdiff_t pŒ,è˝ = 0x0; // uÁè˝
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_BarrackBossVData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_OnTheHunt {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_OnTheHunt = 0x2d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Attach_TriggerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_BookWorm_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t m_TargetModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_BuffModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_InvisModifier = 0x1838; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VampireBat_DoubleDagger {
            constexpr std::ptrdiff_t  = 0x8ffc6df0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t m_FinishParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 3
        namespace CModifierRiotCastDelayVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_healing_slash = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb7d48; // CCitadel_Ability_HealingSlash
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Viper_DebuffDagger {
            constexpr std::ptrdiff_t  = 0x8f70f698; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // 8n,è˝
            constexpr std::ptrdiff_t Modifiers = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckerSalvage_Buff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_Ability_2 = 0x2e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_EldritchShot {
            constexpr std::ptrdiff_t  = 0x8fe89ea0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1eb3f0; // 
        }

        // Parent: m_ExplodeParticle
        // Fields: 2
        namespace CCitadel_TechUpgrade_CorpseExplosionVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t ‡xÁè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Succor_Move {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t m_BuffModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: m_bRequestStopClimbing
        // Fields: 3
        namespace CCitadel_Ability_Climb_Rope {
            constexpr std::ptrdiff_t  = 0x9020f9c0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_BeamWeapon = 0x0; // 
            constexpr std::ptrdiff_t ÄæÊè˝ = 0x8f553b20; // 
        }

        // Parent: »Pw˛
        // Fields: 2
        namespace CPulseCell_BaseYieldingInflow {
            constexpr std::ptrdiff_t  = 0x900cc4b0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseNodeDynamicOutflows_t {
        }

        // Parent: None
        // Fields: 4
        namespace CFogVolume {
            constexpr std::ptrdiff_t  = 0x900833c0; // CServerOnlyModelEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8eb8e290; // 
        }

        // Parent: funcRotatingSimulationTimeSerializer
        // Fields: 3
        namespace CFuncRotating {
            constexpr std::ptrdiff_t  = 0x8ff5f2d0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f573a18; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTimerEntity {
            constexpr std::ptrdiff_t  = 0x90033bf0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c6260; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Werewolf_FrenzyVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidLeechSeedVData {
            constexpr std::ptrdiff_t  = 0x8f5b3c38; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // P<[è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_CatAnimatingVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ViscousBallVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // »ıpè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityHornetSnipeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FireBombVData {
            constexpr std::ptrdiff_t  = 0x8f62bb50; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // hªbè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Headshot_Damage_DebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BonusDamagePercent {
            constexpr std::ptrdiff_t  = 0x8f3d62f0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPlayer_MovementServices_Humanoid {
            constexpr std::ptrdiff_t  = 0x8ffff590; // CPlayer_MovementServices
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Gunslinger_DemonMarkVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t h∏cè˝ = 0x90749418; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShivWeapon {
            constexpr std::ptrdiff_t  = 0x8ffa3810; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e11dea0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shadow_Step {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Invis
            constexpr std::ptrdiff_t  = 0x8f68c538; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Afterburn {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f63aa50; // CAbility_Fencer_Lunge
            constexpr std::ptrdiff_t  = 0x8ff97920; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PrimaryWeapon_Empty {
            constexpr std::ptrdiff_t  = 0x8fe6abe0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d124820; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LifestrikeGauntlets_VData {
            constexpr std::ptrdiff_t  = 0x80000132; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ApexCombat_ProcVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierApexWatcherVData {
            constexpr std::ptrdiff_t  = 0x902efc38; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f2f6d00; // 
            constexpr std::ptrdiff_t  = 0x9021a690; // 8m/è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Upgrade_MagicCarpetVData {
            constexpr std::ptrdiff_t  = 0x8f308c18; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 8å0è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Discord_Friendly {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Camouflage_Invis = 0x578; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseEntityAPI {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IsRequirementValidCriteria_t {
        }

        // Parent: None
        // Fields: 8
        namespace CNPC_NanoRollermine {
            constexpr std::ptrdiff_t  = 0x8f4f8e00; // CAI_CitadelNPC
            constexpr std::ptrdiff_t  = 0x8f3c2598; // 
            constexpr std::ptrdiff_t  = 0x8f4f8de8; // 
            constexpr std::ptrdiff_t  = 0x8f4efb90; // 
            constexpr std::ptrdiff_t  = 0x8f4efba8; // 
            constexpr std::ptrdiff_t  = 0x8f4f8e78; // 
            constexpr std::ptrdiff_t  = 0x8f4f8e40; // 
            constexpr std::ptrdiff_t  = 0x8f4f8e60; // 
        }

        // Parent: None
        // Fields: 6
        namespace CTriggerNeutralIdles {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerNeutralShield
            constexpr std::ptrdiff_t CTriggerNeutralIdles = 0x910; // 
            constexpr std::ptrdiff_t  = 0x8feccb28; // –„Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerNeutralIdles
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal = 0xd8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelPortalTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelPortalTrigger = 0x900; // 
            constexpr std::ptrdiff_t xØLè˝ = 0x8fef8930; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelPortalTrigger
            constexpr std::ptrdiff_t  = 0x8f4cb038; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Projectile_BatSwarmProjectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_CrimsonCannon = 0x13d0; // 
            constexpr std::ptrdiff_t  qè˝ = 0x8ffc0438; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Tokamak_CrimsonCannon
            constexpr std::ptrdiff_t  = 0x8f717828; // CCitadel_Ability_GooBowlingBall
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_NukeMap {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbilityRollingFireBallVData = 0x1830; // 
            constexpr std::ptrdiff_t »iè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_PainAura_Target {
            constexpr std::ptrdiff_t  = 0x8f302980; // CCitadelModifier
        }

        // Parent: m_bIsModelSwapped
        // Fields: 2
        namespace CCitadel_Ability_Magician_CopyUlt {
            constexpr std::ptrdiff_t  = 0x8ffaf990; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: P%˘è˝
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_DemonCarbineVData {
            constexpr std::ptrdiff_t  = 0x90736a48; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifire_Priest_FlashBangBurn = 0x1d0; // 
        }

        // Parent: CCitadel_Ability_IceBeam
        // Fields: 3
        namespace CCitadel_Ability_IceBeam {
            constexpr std::ptrdiff_t  = 0x8ff8c2b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Guiding_Arrow_KillCheck {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Guiding_Arrow_KillCheck = 0x150; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Inhibitor_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // Ø.è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_MedicHeal {
            constexpr std::ptrdiff_t  = 0x8f313e80; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t  = 0x8f313e98; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f328ae8; // –~,è˝
            constexpr std::ptrdiff_t  = 0x8fe82840; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Backdoor_Protection {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Base_Buildup {
            constexpr std::ptrdiff_t  = 0x8f3c4fb8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelTeleportLocation {
            constexpr std::ptrdiff_t  = 0x8fee5d80; // CServerOnlyEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_BreakablePropVData {
            constexpr std::ptrdiff_t  = 0xb0f62540; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerOnce {
            constexpr std::ptrdiff_t  = 0x9007e5d8; // CTriggerMultiple
            constexpr std::ptrdiff_t  = 0x8f8df368; // CTriggerOnce
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_FissureWall {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CBaseAnimGraph
            constexpr std::ptrdiff_t êX¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff85518; // `Jw˛
            constexpr std::ptrdiff_t  = 0xa9cf94e0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HookTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_LinkVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_ActiveBulletShield {
            constexpr std::ptrdiff_t  = 0x8f2fb720; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f302a40; // –~,è˝
            constexpr std::ptrdiff_t  = 0x8f310e18; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_Reviving {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_GenericPerson_4 = 0xf70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Shakedown_TargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_bIsDashing
        // Fields: 1
        namespace CCitadel_Ability_NanoDash {
            constexpr std::ptrdiff_t  = 0x8f5bda00; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityStackingDamageVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityNikumanVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_shiv_defer_damage = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ChargedBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x906444e8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x90678418; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EnchantedHolsters_Watcher {
            constexpr std::ptrdiff_t  = 0x8f3237f0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8f2dcb18; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SlowingBullets_ProcVData {
            constexpr std::ptrdiff_t  = 0x902ed0a8; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_slow_immunity = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe71db8; // CCitadel_ArmorUpgrade_SlowImmunity
        }

        // Parent: None
        // Fields: 1
        namespace CItemCrateSpawn {
            constexpr std::ptrdiff_t  = 0x8f47daa0; // CServerOnlyPointEntity
        }

        // Parent: m_flGameStartTime
        // Fields: 3
        namespace CCitadelGameRules {
            constexpr std::ptrdiff_t  = 0x0; // CTeamplayRules
            constexpr std::ptrdiff_t CCitadelGameRules = 0x2bd8; // 
            constexpr std::ptrdiff_t àmGè˝ = 0x0; // ÄÚÚè˝
        }

        // Parent: m_Handle
        // Fields: 0
        namespace EntityRenderAttribute_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_ObservableVariableListener {
            constexpr std::ptrdiff_t  = 0x900cc430; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: CCitadelTriggerMultiCapturePoint
        // Fields: 4
        namespace CCitadelTriggerMultiCapturePoint {
            constexpr std::ptrdiff_t  = 0x8f4cdda8; // CBaseTrigger
            constexpr std::ptrdiff_t páúç˝ = 0xb1874cc0; // ∏X
            constexpr std::ptrdiff_t  = 0xffffffff; // 
            constexpr std::ptrdiff_t  = 0x1f; // 
        }

        // Parent: m_bRenderShadows
        // Fields: 4
        namespace CFuncMonitor {
            constexpr std::ptrdiff_t  = 0x9001d440; // CFuncBrush
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f873d20; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e84cd00; // 
        }

        // Parent: m_bEnabled
        // Fields: 2
        namespace CInfoVisibilityBox {
            constexpr std::ptrdiff_t  = 0x8ff1f5a0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Necro_RampUp {
            constexpr std::ptrdiff_t  = 0x8ff9e7a0; // CCitadel_Modifier_Base_Buildup
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_Fear {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8fe989c8; // 
            constexpr std::ptrdiff_t  = 0x1; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x90829008; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x8f6a4c98; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9062a220; // »Ljè˝
        }

        // Parent: m_bFiring
        // Fields: 4
        namespace CCitadel_Ability_PrimaryWeapon_Bebop {
            constexpr std::ptrdiff_t  = 0x906aec00; // CCitadel_Ability_PrimaryWeapon_BeamWeapon
            constexpr std::ptrdiff_t CCitadel_Ability_ChronoSwap = 0x0; // 
            constexpr std::ptrdiff_t `›˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9d25ac0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityImmobilizeTrapVData {
            constexpr std::ptrdiff_t  = 0xa9be73f0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CItemMetalSkinVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t item_snowball = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe89830; // CCitadel_CosmeticItem_Snowball
        }

        // Parent: None
        // Fields: 4
        namespace CGunTarget {
            constexpr std::ptrdiff_t  = 0x9002f688; // CBaseToggle
            constexpr std::ptrdiff_t CFuncTimescale = 0x0; // 
            constexpr std::ptrdiff_t p√ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x9002c330; // ®Ow˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T3Boss_Effigy {
            constexpr std::ptrdiff_t  = 0x8feff6c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InHideoutZone {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_InHideoutZone = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundEventConeEntity {
            constexpr std::ptrdiff_t  = 0x8ff26900; // CSoundEventEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_SpotlightVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SkyRunner_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t Ω˙è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_ShadowMark_TargetVData {
            constexpr std::ptrdiff_t  = 0x800005bf; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Frank_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Ability_Gunslinger_SpreadingFire = 0x1070; // 
            constexpr std::ptrdiff_t  = 0x8ff91c28; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Gunslinger_SpreadingFire
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_HealingSlash {
            constexpr std::ptrdiff_t  = 0x8ffc6190; // CCitadelBaseYamatoAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e25a260; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viper_Ability04 {
            constexpr std::ptrdiff_t  = 0x8ffbffc0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShivWeapon_VData {
            constexpr std::ptrdiff_t  = 0x8000075f; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t h’0è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e248020; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_MobileResupplyVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f5ab0b8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
            constexpr std::ptrdiff_t  = 0x800000ab; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierDelayedStunVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NPC_OOC_Regen {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t p^Èè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CSoundOpvarSetOBBEntity {
            constexpr std::ptrdiff_t  = 0x0; // CSoundOpvarSetAABBEntity
            constexpr std::ptrdiff_t CSoundOpvarSetOBBEntity = 0x680; // 
            constexpr std::ptrdiff_t  = 0x90066f38; // †ÙÚè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CSoundOpvarSetOBBEntity
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFilterMultipleAPI {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_DebuffImmunity {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2ddf00; // 
            constexpr std::ptrdiff_t CModifier_Upgrade_ArcaneSurge_AbilityWatcher = 0x2d8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelSpawnBlocker {
            constexpr std::ptrdiff_t  = 0x0; // CFuncBrush
            constexpr std::ptrdiff_t CCitadelSpawnBlocker = 0x7a0; // 
            constexpr std::ptrdiff_t  = 0x8fee5200; // `êˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelSpawnBlocker
        }

        // Parent: None
        // Fields: 3
        namespace CPrecipitationBlocker {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CPrecipitationBlocker = 0x780; // 
            constexpr std::ptrdiff_t  = 0x90015380; // êrıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Werewolf_HuntVData {
            constexpr std::ptrdiff_t  = 0x908f72e8; // CitadelAbilityVData
            constexpr std::ptrdiff_t npc_yakuza_gangster = 0x0; // 
        }

        // Parent: m_CasterModifier
        // Fields: 2
        namespace CAbilityUppercutVData {
            constexpr std::ptrdiff_t  = 0x0; // CAbilityMeleeVData
            constexpr std::ptrdiff_t sæ©6 = 0x8ff735f0; // CCitadelAnimatingModelEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_HealthSwapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f632950; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DeathTaxTechAmp {
            constexpr std::ptrdiff_t  = 0x9077ec60; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Projectile_DustStorm = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_LightningBall {
            constexpr std::ptrdiff_t  = 0x907861a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_IceGrenade = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f620db0; // CCitadel_Modifier_Haze_StackingDamage
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ZipLineBoost_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FuryTrance {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_nBonusesParticle = 0xd0; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 2
        namespace CItem_RestorativeLocket_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 4
        namespace CSoundOpvarSetPathCornerEntity {
            constexpr std::ptrdiff_t  = 0x8ff2f620; // CSoundOpvarSetPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dc79e40; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Modifier_HeldItemPickupAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ItemPickupAuraVData
            constexpr std::ptrdiff_t `êˆè˝ = 0x0; // 
            constexpr std::ptrdiff_t 8Iè˝ = 0x8f491f08; // 
            constexpr std::ptrdiff_t sæ©6 = 0x8fee6b70; // CCitadelItemPickup
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_ShieldedSentryVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_SimpleAnimatingAIVData
        }

        // Parent: None
        // Fields: 3
        namespace CPointClientCommand {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CPointClientCommand = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x90016158; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Ability01 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x90772510; // 
            constexpr std::ptrdiff_t CCitadel_Ability_FireBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8dfeeee0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f6381c0; // 
        }

        // Parent: ¯Mw˛
        // Fields: 3
        namespace CCitadel_Ability_Frank_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x8f62edf8; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff8c0a0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MageWalkVData {
            constexpr std::ptrdiff_t  = 0x8f6a4c98; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9062a220; // »Ljè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Haunt_Damage_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x909459d8; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_werewolf_rifle = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ThrowSandVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TriggerTowerRegen {
            constexpr std::ptrdiff_t  = 0x9029b470; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeam = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PatronsBlessingEnemyTracker {
            constexpr std::ptrdiff_t  = 0x8fe88490; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_RechargingBulletsVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t Ø.è˝ = 0x8f2ea798; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Boss_Damage_Protection {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3bea18; // CCitadel_Modifier_ApplyModifierOnDamageTaken
        }

        // Parent: m_eValType
        // Fields: 0
        namespace DynamicAbilityValues_t {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_EnemyServices {
            constexpr std::ptrdiff_t  = 0x8fea8220; // CAI_Component
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelTriggerNoPortals {
            constexpr std::ptrdiff_t  = 0x8fef7540; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d99ea60; // 
            constexpr std::ptrdiff_t m_vecConnections = 0x7b8; // CNetworkUtlVectorBase<CHandle<CCitadelZipLineNode>>
        }

        // Parent: None
        // Fields: 3
        namespace CWorld {
            constexpr std::ptrdiff_t  = 0x8f84d378; // CBaseModelEntity
            constexpr std::ptrdiff_t CWorld = 0x780; // 
            constexpr std::ptrdiff_t  = 0x90001370; // êrıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Werewolf_OnTheHunt {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ã&›îeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GoatFlipEmpoweredMelee {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SmokeGrenadeVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DeflectingArmorVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_haunting_scream = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe7d078; // CItemHauntingScream
        }

        // Parent: None
        // Fields: 3
        namespace CModifierStimPakVData {
            constexpr std::ptrdiff_t  = 0x8000009b; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3672e0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Slow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Slow = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RebirthCreditVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90376b68; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelZipLinePathNode {
            constexpr std::ptrdiff_t  = 0x20; // CBaseEntity
            constexpr std::ptrdiff_t †}Ôè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_MoveProbe {
            constexpr std::ptrdiff_t  = 0x0; // CAI_Component
        }

        // Parent: None
        // Fields: 2
        namespace CPathMoverEntitySpawner {
            constexpr std::ptrdiff_t  = 0x8f577558; // CLogicalEntity
            constexpr std::ptrdiff_t  = 0x8f577580; // 
        }

        // Parent: m_nRootBoneOffsetResetSerialNumber
        // Fields: 0
        namespace CModelState {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_LerpCameraSettingsCursorState_t {
            constexpr std::ptrdiff_t  = 0x8ff1e320; // CPulseCell_BaseLerp::CursorState_t
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleOrdered {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleOrdered = 0x60; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerGravity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerGravity = 0x8e0; // 
            constexpr std::ptrdiff_t  = 0x90073420; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CTriggerGravity
            constexpr std::ptrdiff_t  = 0x8f8ddf98; // 
        }

        // Parent: None
        // Fields: 4
        namespace CNPC_Neutral_Flying_Weakpoint {
            constexpr std::ptrdiff_t  = 0x9052e6d0; // CNPC_Neutral_Weakpoint
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f508868; // CNPC_Neutral_Flying_Weakpoint
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CModifier_Headshot_Damage_DebuffVData = 0x830; // 
            constexpr std::ptrdiff_t 0h1è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CModifier_Headshot_Damage_DebuffVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fealty {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ãVMëeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0x908c4520; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_LockDown {
            constexpr std::ptrdiff_t  = 0x8f302980; // CCitadelBaseAbility
            constexpr std::ptrdiff_t bIsReturning = 0x890; // bool
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Killing_Blow_GlowVData {
            constexpr std::ptrdiff_t  = 0x80000698; // CCitadelModifierVData
            constexpr std::ptrdiff_t ò>è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247f30; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_Shadow_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Mirage_SandPhantom_Proc = 0x250; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_IceDomeFriendly {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_IceDome_AuraModifierBase
            constexpr std::ptrdiff_t HÉÏ(ã6UºeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InfernalResilience_Melee {
            constexpr std::ptrdiff_t  = 0x8ff7ee20; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Motor {
            constexpr std::ptrdiff_t  = 0x8feacaf0; // CAI_Component
        }

        // Parent: m_vecMaxs
        // Fields: 0
        namespace CCollisionProperty {
        }

        // Parent: m_hOtherPortal
        // Fields: 5
        namespace CCitadelCatapultTrigger {
            constexpr std::ptrdiff_t  = 0x8fef8a40; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x8f4cab38; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d99b5b0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f4caf68; // 
        }

        // Parent: None
        // Fields: 4
        namespace CFilterMassGreater {
            constexpr std::ptrdiff_t  = 0x8fff6f58; // CBaseFilter
            constexpr std::ptrdiff_t CFilterModifier = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f82e370; // CFilterMassGreater
            constexpr std::ptrdiff_t  = 0x8fff2788; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
            constexpr std::ptrdiff_t  = 0x8ff7a510; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de5a950; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier {
            constexpr std::ptrdiff_t  = 0x8de91a10; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f59ce98; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityThumper4VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilencerProcActiveVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t ÄèÁè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_DivineBarrier_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_nullification_aura = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe78d70; // CCitadel_Item_NullificationAura
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Climb_RopeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Refresher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05 = 0x1010; // 
        }

        // Parent: None
        // Fields: 2
        namespace CEnableMotionFixup {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t Run = 0x8e97a920; // 
        }

        // Parent: None
        // Fields: 5
        namespace CLogicActiveAutosave {
            constexpr std::ptrdiff_t  = 0x90035570; // CLogicAutosave
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c5e20; // 
            constexpr std::ptrdiff_t ‡Uê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CMathCounter {
            constexpr std::ptrdiff_t  = 0x8f88d280; // CLogicalEntity
            constexpr std::ptrdiff_t pJê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90034a30; // ®Ow˛
        }

        // Parent: m_flEndTime
        // Fields: 0
        namespace CCitadelRecentDamage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelRegenComponent {
            constexpr std::ptrdiff_t  = 0x8fece620; // CEntityComponent
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Werewolf_UnloadGun2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_2_AuraVData = 0x888; // 
            constexpr std::ptrdiff_t ◊[è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatBlastedPassive {
            constexpr std::ptrdiff_t  = 0x8ffb2130; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_StackingDefense {
            constexpr std::ptrdiff_t  = 0x8ffab010; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Uppercut {
            constexpr std::ptrdiff_t  = 0x90686670; // CCitadel_Ability_Melee_Base
            constexpr std::ptrdiff_t CCitadel_Ability_Bookworm_AOEMagic = 0x0; // 
            constexpr std::ptrdiff_t †ó˜è˝ = 0x8f553b20; // 
        }

        // Parent: m_iClip
        // Fields: 3
        namespace CCitadel_Ability_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8fe69f90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x401ff; // 
            constexpr std::ptrdiff_t  = 0x8f2cafe0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletShredImbue_ProcVData {
            constexpr std::ptrdiff_t  = 0x80000105; // CCitadel_Modifier_BaseEventProcVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TechCleaveVData {
            constexpr std::ptrdiff_t  = 0x800000fe; // CCitadelModifierVData
            constexpr std::ptrdiff_t QËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CScaleFunctionAbilityProperty_HealingBoonScaleVData {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
            constexpr std::ptrdiff_t h¢Bè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelDruidHealingFruit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  Ó˜è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff7ec78; // ¯Mw˛
            constexpr std::ptrdiff_t  = 0xa9cf9240; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNavLinkAreaEntity {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t AI_VolumetricEventTypeMask_t = 0x390808; // 
            constexpr std::ptrdiff_t  = 0xffffffff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayerBot {
        }

        // Parent: m_Item
        // Fields: 1
        namespace CAttributeContainer {
            constexpr std::ptrdiff_t  = 0x9007fa60; // CAttributeManager
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Werewolf_TransformationWatcherVData {
            constexpr std::ptrdiff_t  = 0x80000799; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1b60; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: CCitadel_Werewolf_Transformation
        // Fields: 3
        namespace CCitadel_Werewolf_Transformation {
            constexpr std::ptrdiff_t  = 0x8e2975c0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_GarbageAuraModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_AirheartUltVData {
            constexpr std::ptrdiff_t  = 0x8f5b4100; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90632b30; // êo[è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Familiar_AttachHealVData {
            constexpr std::ptrdiff_t  = 0x90717fe8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_icebeam = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff8eaf8; // CCitadel_Ability_IceBeam
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target_VData {
            constexpr std::ptrdiff_t  = 0x800006d8; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247ba0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Mirage_SandPhantom_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f693b70; // CCitadel_Modifier_Mirage_SandPhantom_Proc
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Tornado_Lift {
            constexpr std::ptrdiff_t  = 0x8e0f4280; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f6abed0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VoidSphere_Buff {
            constexpr std::ptrdiff_t  = 0x8ffb39e8; // CCitadelModifier
            constexpr std::ptrdiff_t CNecro_HauntingSkullEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Arcane_Eater_Proc {
            constexpr std::ptrdiff_t  = 0x8fe6f9b0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AblativeCoatResistBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_AblativeCoatResistBuff = 0x1d8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TechRangeClamp {
            constexpr std::ptrdiff_t  = 0x8fe866e0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CItem_WitheringWhip_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CModifierT3BossWaveTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // †£/è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TeamRelativeParticle {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_NearDeathFX = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CinematicIntro_Player_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90438a38; // CNPC_NeutralSinnerSacrificeVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FamiliarHelper_InvisWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_FamiliarHelper_InvisWatcher = 0xd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Werewolf_UnloadGun {
            constexpr std::ptrdiff_t  = 0x908e9fb0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Viscous_Telepunch = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf {
            constexpr std::ptrdiff_t  = 0x8ffcb330; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x20108; // 
        }

        // Parent: ph˙è˝
        // Fields: 2
        namespace CCitadel_Ability_Priest_KnockbackVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_nano_catform = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTargetPracticeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90696978; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ViscousBall {
            constexpr std::ptrdiff_t  = 0x8e25ac90; // CCitadelModifier
            constexpr std::ptrdiff_t m_SalvageEnemyModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_GuardianWard_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t ò/è˝ = 0x9024d448; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Upgrade_ArcaneSurge_VData {
            constexpr std::ptrdiff_t  = 0x800000b9; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367570; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Near_Climbable_Rope {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelModifierResponseRulesFilterType_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ExplosiveShots {
            constexpr std::ptrdiff_t  = 0x8f3d5380; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3c3000; // AbilitySectionType_t
        }

        // Parent: None
        // Fields: 0
        namespace PulseSelectorOutflowList_t {
        }

        // Parent: None
        // Fields: 4
        namespace CFilterContext {
            constexpr std::ptrdiff_t  = 0x8fff6db8; // CBaseFilter
            constexpr std::ptrdiff_t CFilterProximity = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f82e2e0; // CFilterContext
            constexpr std::ptrdiff_t  = 0x8fff25b8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CLightEnvironmentEntity {
            constexpr std::ptrdiff_t  = 0x0; // CLightDirectionalEntity
            constexpr std::ptrdiff_t CLightEnvironmentEntity = 0x788; // 
            constexpr std::ptrdiff_t  = 0x8ff1fa58; // ∞ÓÒè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLightEnvironmentEntity
            constexpr std::ptrdiff_t - = 0x8f5243d0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Familiar_SpotlightAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Clone = 0xf70; // 
            constexpr std::ptrdiff_t  = 0x8ff92208; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Familiar_Clone
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IdolCashInTimer {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CitadelMusicData_t = 0x48; // 
        }

        // Parent: m_flWidth
        // Fields: 3
        namespace CEnvDecal {
            constexpr std::ptrdiff_t  = 0x8ff5f010; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f573950; // 
        }

        // Parent: m_vBoxMins
        // Fields: 2
        namespace CEnvVolumetricFogVolume {
            constexpr std::ptrdiff_t  = 0x8ff17ec0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelPlayerBotNPCBrainVData {
            constexpr std::ptrdiff_t  = 0x8f427ba8; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  = 0x9041a550; // »{Bè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Werewolf_TransformationVData {
            constexpr std::ptrdiff_t  = 0x8f72b2a0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ¿≤rè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTargetdummy2VData {
            constexpr std::ptrdiff_t  = 0x908cba78; // CitadelAbilityVData
            constexpr std::ptrdiff_t ‡%rè˝ = 0x90943098; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityKobunVData {
            constexpr std::ptrdiff_t  = 0x8000082d; // CitadelAbilityVData
            constexpr std::ptrdiff_t tokamak_heat_sinks_inherent = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SpreadingFire_DOT_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_empower_bullet = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff8fc80; // CCitadel_Ability_EmpowerBullet
        }

        // Parent: None
        // Fields: 2
        namespace CModifierLockDownDebuffVData {
            constexpr std::ptrdiff_t  = 0x9092c218; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bolo {
            constexpr std::ptrdiff_t  = 0x8ff8aaa0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier2Boss_LaserCharge {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_TechCleaveVData = 0x920; // 
        }

        // Parent: None
        // Fields: 2
        namespace CServerOnlyEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t ExternalAnimGraphInactiveBehavior_t = 0x290101; // 
        }

        // Parent: Play Sequence
        // Fields: 0
        namespace CPulseCell_PlaySequenceCursorState_t {
        }

        // Parent: m_SecondaryColor
        // Fields: 2
        namespace CBodyComponentSkeletonInstance {
            constexpr std::ptrdiff_t  = 0x8ff04230; // CBodyComponent
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItemGeneric {
            constexpr std::ptrdiff_t  = 0x0; // CItem
            constexpr std::ptrdiff_t ServerEntity = 0x8ff63e20; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Projectile_FeatherBoomerang {
            constexpr std::ptrdiff_t  = 0x8f68bef8; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemWalkBack {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemWalkBack = 0x4ee8; // 
        }

        // Parent: m_nInputType
        // Fields: 2
        namespace CPointValueRemapper {
            constexpr std::ptrdiff_t  = 0x8f8bde70; // CBaseEntity
            constexpr std::ptrdiff_t Teleport the target entity. = 0x8e933200; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelMinimapComponent {
            constexpr std::ptrdiff_t  = 0x8f4190f0; // CEntityComponent
        }

        // Parent: None
        // Fields: 2
        namespace CModifierDoormanHotelImposterFXVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9063f0a8; // CCitadelModifierAuraVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fathom_Breach_VData {
            constexpr std::ptrdiff_t  = 0x90827b68; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Rutger_ForceField {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_StackBuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t  = 0x8f6aed80; // CCitadel_Modifier_SilenceBomb_Debuff
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_Sleeping {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Sleep
            constexpr std::ptrdiff_t CCitadelDruidInvisAura = 0x110; // 
            constexpr std::ptrdiff_t ¥[è˝ = 0x0; // PcÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_InfinitySlashVData {
            constexpr std::ptrdiff_t  = 0x908e2478; // CCitadelYamatoBaseVData
            constexpr std::ptrdiff_t  = 0x9092c218; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTrappersBoloVData {
            constexpr std::ptrdiff_t  = 0x8f620d38; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // `bè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BoucePadVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IcePath_Friendly {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÊ±ΩeHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_spellslinger_headshots = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_QuickSilver_Watcher {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t EPlayerSprayStatus = 0x210404; // 
            constexpr std::ptrdiff_t  = 0x1; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher {
            constexpr std::ptrdiff_t  = 0x8fe6d020; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: –’Êè˝
        // Fields: 1
        namespace CCitadel_Modifier_Infuser_VData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MeleeDamageOnly {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_MeleeDamageOnly = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hero_Clone {
            constexpr std::ptrdiff_t  = 0x8d384500; // CCitadelModifier
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Senses {
            constexpr std::ptrdiff_t  = 0xff0000ff; // CAI_Component
        }

        // Parent: ®Ow˛
        // Fields: 4
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t citadel_ability_vandal_overflow = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffc8fd8; // CCitadel_Ability_VandalOverflow
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t ÄDÁè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9cea270; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_DPS_Aura {
            constexpr std::ptrdiff_t  = 0x9029f000; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_PowerShard = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t m_LaserLeft = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SkyRunner_Ability04 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Shiv_KillingBlowVData = 0x1c88; // 
            constexpr std::ptrdiff_t ∏Òbè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Operative_Revelation_Caster {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Synth_PlasmaFlux_VData = 0x1ac0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShieldedSentry {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ¿0¯è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x906360d0; // `Jw˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UIHudMessage {
            constexpr std::ptrdiff_t  = 0x8f3cccf0; // CCitadelModifier
            constexpr std::ptrdiff_t THIS ONE ACTUALLY CHANGES TARGETING BEHAVIOR! Also use our cone visualizer for our preview, and a sat sphere at destination. AOE is determined by settings below, or by GetTargetingConeAngle if overridden. = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Pickup_Health {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadelPlayerBot = 0x4bd8; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadelPlayerBot
            constexpr std::ptrdiff_t  = 0x8f424990; // CCitadel_PointTalker
        }

        // Parent: m_ragAngles
        // Fields: 4
        namespace CRagdollProp {
            constexpr std::ptrdiff_t  = 0x8ff69860; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f5876d0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de02c60; // 
        }

        // Parent: None
        // Fields: 5
        namespace CNodeEnt_InfoHint {
            constexpr std::ptrdiff_t  = 0x0; // CNodeEnt
            constexpr std::ptrdiff_t CNodeEnt_InfoHint = 0x4f8; // 
            constexpr std::ptrdiff_t  = 0x8fea70a8; // ‡qÍè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CNodeEnt_InfoHint
            constexpr std::ptrdiff_t  = 0x0; // CNodeEnt
        }

        // Parent: None
        // Fields: 4
        namespace CInfoTrooperBossSpawn {
            constexpr std::ptrdiff_t  = 0x8ff0a680; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da9e1d0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_TrackingBomb {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t `r˚è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_vecDeployedSentries = 0xf98; // CNetworkUtlVectorBase<CHandle<CNPC_SimpleAnimatingAI>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PoisonJar_Debuff {
            constexpr std::ptrdiff_t  = 0x8e27a230; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f72ea88; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGenericPerson2VData {
            constexpr std::ptrdiff_t  = 0x9074e8e8; // CitadelAbilityVData
            constexpr std::ptrdiff_t @çÊè˝ = 0x90765bf8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Backdoor_ProtectionVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
            constexpr std::ptrdiff_t  = 0x8f3ba1d0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3d36d0; // CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NearbyEnemyResistVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0xc8e; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_AbilityCharges {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelItemKothSpawnerVData {
            constexpr std::ptrdiff_t  = 0x904a13f0; // CCitadelItemPickupVData
            constexpr std::ptrdiff_t ¿\Óè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNavLinkMotor_NonZUp_Transition {
            constexpr std::ptrdiff_t  = 0x8feb2750; // INavLinkMotor
        }

        // Parent: None
        // Fields: 1
        namespace CScriptComponent {
            constexpr std::ptrdiff_t  = 0x90098600; // CEntityComponent
        }

        // Parent: None
        // Fields: 6
        namespace CCitadelItemMetal {
            constexpr std::ptrdiff_t  = 0x8d7b5c70; // CItemGeneric
            constexpr std::ptrdiff_t m_GoldPerOrb = 0x0; // int32
            constexpr std::ptrdiff_t m_NearPlayerSplitPct = 0x4; // float32
            constexpr std::ptrdiff_t m_nTier1GoldKill = 0x8; // int32
            constexpr std::ptrdiff_t m_nTier1GoldOrbs = 0xc; // int32
            constexpr std::ptrdiff_t m_nTier2GoldKill = 0x10; // int32
        }

        // Parent: None
        // Fields: 4
        namespace CFuncTrain {
            constexpr std::ptrdiff_t  = 0x900784f0; // CBasePlatTrain
            constexpr std::ptrdiff_t  = 0x8ff13630; // 
            constexpr std::ptrdiff_t  = 0x8f8df0f8; // Sç˝
            constexpr std::ptrdiff_t  Kê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Thumper_PullAOE_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t yakuza_summon_gangster = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffc1050; // CCitadel_Ability_SummonGangster
            constexpr std::ptrdiff_t »„qè˝ = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CProjectile_Rolling_FireBall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f6930d0; // 
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierAura_ConeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CAI_ChangeHintGroup {
            constexpr std::ptrdiff_t  = 0x909c6610; // CBaseEntity
            constexpr std::ptrdiff_t CInfoTeleportDestination = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAI_CitadelPlayerBotNavigator {
            constexpr std::ptrdiff_t  = 0x9041baa0; // CAI_Navigator
            constexpr std::ptrdiff_t CCitadel_Pickup_NecroDeath = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Skyrunner_MagicBeam {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8ffaa040; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Swan_AcrobatVData {
            constexpr std::ptrdiff_t  = 0x907e0c68; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilitySummonGangsterVData {
            constexpr std::ptrdiff_t  = 0x9087b0a8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_hLastCastTarget
        // Fields: 3
        namespace CCitadel_Ability_Nano_Pounce {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Fathom_ScaldingSpray_Aura = 0x320; // 
            constexpr std::ptrdiff_t [è˝ = 0x0; // PÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGuidedArrowVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x906a02e8; // CCitadelModifierVData
        }

        // Parent: m_flForwardOffset
        // Fields: 2
        namespace CCitadel_Modifier_DragEnemyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∞,Ëè˝ = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_StunnedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // †£/è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelLootTableVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_MultiCapturePointVData {
            constexpr std::ptrdiff_t  = 0x8f4cd340; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CombatStatus_BulletHit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus_BulletHit = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_AirheartAbility02VData {
            constexpr std::ptrdiff_t  = 0x90663c48; // CitadelAbilityVData
            constexpr std::ptrdiff_t item_explosive_barrel = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Frank_PainAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  „¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Operative_UmbrellaManeuver_AirHang_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t synth_barrage = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilitySleepDaggerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f6348f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CapacitorSlowDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t CCitadel_Modifier_Galvanic_Storm_VData = 0x980; // 
            constexpr std::ptrdiff_t P2è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Berserker {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_WeaponShielding = 0x1110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierContainmentVictimVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †áËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Ability_Tier3Boss_AoEWave {
            constexpr std::ptrdiff_t  = 0x8d1cce40; // CTier3BossAbility
            constexpr std::ptrdiff_t m_SprintParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strSprintSound = 0x18f8; // CSoundEventName
            constexpr std::ptrdiff_t m_flSprintAccMS = 0x1908; // float32
            constexpr std::ptrdiff_t Sounds = 0x8f31a928; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CModifierVData_BaseAura
        }

        // Parent: None
        // Fields: 1
        namespace CFuncFoliageVData {
            constexpr std::ptrdiff_t  = 0x904e8240; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CAI_Relationship {
            constexpr std::ptrdiff_t  = 0x8feb6260; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelTriggerHideout {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelTriggerHideout = 0x8e0; // 
            constexpr std::ptrdiff_t  = 0x8fecd968; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelTriggerHideout
            constexpr std::ptrdiff_t  = 0x8f43d100; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_InstantReload {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_ActiveBulletShield = 0xff8; // 
            constexpr std::ptrdiff_t  = 0x8fe870b8; // @_Ïè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_ArmorUpgrade_ActiveBulletShield
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LuminousStrikeBuffVData {
            constexpr std::ptrdiff_t  = 0x8000078d; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1b20; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Thumper_Bullet_Watcher {
            constexpr std::ptrdiff_t  = 0x8e289a50; // CCitadelModifier
            constexpr std::ptrdiff_t m_CastParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityCadenceGrandFinaleVData {
            constexpr std::ptrdiff_t  = 0x906bab08; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_drifter_primaryweapon = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_IceBeamVData {
            constexpr std::ptrdiff_t  = 0x8000061e; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IcePath {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t †™¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_CardToss {
            constexpr std::ptrdiff_t  = 0x8ffbf610; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_TriggerTower {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CItemPhantomStrike_VData = 0x1ba0; // 
            constexpr std::ptrdiff_t pŒ,è˝ = 0x0; // Ä˝Ëè˝
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_NanoTechRoundsDamage {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: m_bIsBlocked
        // Fields: 0
        namespace TeamKothState_t {
        }

        // Parent: None
        // Fields: 4
        namespace CModifierTier3BossLaserBeamAuraVData {
            constexpr std::ptrdiff_t  = 0x80000048; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x0; // 
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3670b0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_KothTrooperBuffVData {
            constexpr std::ptrdiff_t  = 0x904ec290; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_trigger_speed_boost = 0x0; // 
            constexpr std::ptrdiff_t »÷:è˝ = 0x8fef74f8; // CCitadelSpeedBoostTrigger
        }

        // Parent: None
        // Fields: 1
        namespace CBaseDashCastAbilityVData {
            constexpr std::ptrdiff_t  = 0x9043abf0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 5
        namespace CPhysHinge {
            constexpr std::ptrdiff_t  = 0x0; // CPhysConstraint
            constexpr std::ptrdiff_t CPhysicsSpring = 0x4e8; // 
            constexpr std::ptrdiff_t `Çäè˝ = 0x900429f8; // P∫ıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPhysicsSpring
            constexpr std::ptrdiff_t  = 0x90043b18; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
            constexpr std::ptrdiff_t  = 0x8e27a6e0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f713760; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
            constexpr std::ptrdiff_t  = 0x8f5b05d0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Ë[è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MysticReverb_Proc {
            constexpr std::ptrdiff_t  = 0x8f30f0b8; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8f2f41b8; // CCitadel_Modifier_PristineEmblem_VData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Objective_Bullet_Resist {
            constexpr std::ptrdiff_t  = 0x8fe968e0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CScaleFunctionAbilityPropertyMultiStatsVData {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Familiar_Attach_Trigger {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_RiposteTargetSelect = 0xf88; // 
            constexpr std::ptrdiff_t Äcè˝ = 0x8ff92628; // PKÌè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidPlantSomethingVData {
            constexpr std::ptrdiff_t  = 0x8f5a2f80; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ò/Zè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Doorman_Doorway {
            constexpr std::ptrdiff_t  = 0x8ff77950; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Thumper_4 {
            constexpr std::ptrdiff_t  = 0x8ffc1090; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_vecDashEndPos
        // Fields: 3
        namespace CCitadel_Ability_TangoTether {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Trapper_Fear = 0x1070; // 
            constexpr std::ptrdiff_t  = 0x8ffc1a98; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shiv_KillingBlowVData {
            constexpr std::ptrdiff_t  = 0x907aff60; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_RestorativeGoo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_BonusDamage = 0x150; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Spellbreaker {
            constexpr std::ptrdiff_t  = 0x8f30b078; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8f30c6a8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ColdFrontVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f30cc38; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe77290; // CTier3BossAbility
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ScalingPowerUp {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t ‡VÈè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPCMakerAPI {
        }

        // Parent: CCitadel_PickupItemSpawner
        // Fields: 4
        namespace CCitadel_PickupItemSpawner {
            constexpr std::ptrdiff_t  = 0x8fec9320; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f4271b0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d5e8960; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_BaseProjectileAOEModifier {
            constexpr std::ptrdiff_t  = 0x8f2e65e8; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_DivinersKevlarBuff_VData = 0x830; // 
            constexpr std::ptrdiff_t Z.è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_DivinersKevlarBuff_VData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_SlowImmunity {
            constexpr std::ptrdiff_t  = 0x90364880; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InfiniteMagazine = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8d1ee710; // CCitadel_Modifier_BaseEventProc
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Knockback {
            constexpr std::ptrdiff_t  = 0x8fe97550; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CMatchTrackedStatsEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrackedStatsEntity
            constexpr std::ptrdiff_t CMatchTrackedStatsEntity = 0x508; // 
            constexpr std::ptrdiff_t  = 0x900840a8; // PFê˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifierGoatChargingVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9081a1c8; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f690488; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Synth_Pulse {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSpirits = 0x10f8; // 
            constexpr std::ptrdiff_t 8¬[è˝ = 0x8ffa1558; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Targetdummy_4 {
            constexpr std::ptrdiff_t  = 0x8f2e6560; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_VandalSurge {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t CAbilityWreckingBallVData = 0x1ae0; // 
            constexpr std::ptrdiff_t Ç0è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Lash_Flog {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_StaticCharge_V2_VData = 0x1920; // 
            constexpr std::ptrdiff_t †q.è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityHoldMelee_VData {
            constexpr std::ptrdiff_t  = 0x8f2cd428; // CAbilityMeleeVData
            constexpr std::ptrdiff_t  = 0x901fd850; // H‘,è˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_WeaponUpgrade_HeadshotBooster_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x8f302700; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe8b7c0; // CCitadel_Item_Bubble
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x90294028; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpiritBurnDOT_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadel_Modifier_Intrinsic_BaseVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ContainmentVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifierVData
            constexpr std::ptrdiff_t upgrade_bullet_shield = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe74e40; // CCitadel_Ability_Shield
            constexpr std::ptrdiff_t  = 0x800000ed; // CitadelItemVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Slide_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8f3bf418; // CCitadel_Modifier_Slide_Debuff
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AttachTarget {
            constexpr std::ptrdiff_t  = 0x8f3be610; // CCitadelModifier
        }

        // Parent: None
        // Fields: 0
        namespace CAI_VolumetricEventSensorAPI {
        }

        // Parent: None
        // Fields: 2
        namespace CAI_NPC_TrooperVData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  = 0x0; // CAI_CitadelNPCVData
        }

        // Parent: None
        // Fields: 3
        namespace CModifierItemPickupAuraTargetVData {
            constexpr std::ptrdiff_t  = 0x904983b8; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_item_punchable_gold = 0x0; // 
            constexpr std::ptrdiff_t  ÖHè˝ = 0x8fee94d0; // CCitadelItemPunchableNeutralGold
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidBasePlantVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f5be770; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_SmokeGrenadeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_magician_magicbolt = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PriestKnockback {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ã&ı©eHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Heal_TargetVData {
            constexpr std::ptrdiff_t  = 0x90656748; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x906c78c8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ZipLine_Boost {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_MetalSkin = 0xf78; // 
            constexpr std::ptrdiff_t  = 0x8fe7a1e0; // @_Ïè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Backstabber_Debuff {
            constexpr std::ptrdiff_t  = 0x8f329628; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DivineBarrier {
            constexpr std::ptrdiff_t  = 0x8f2f6dc8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ApplyDebuff_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CitadelItemVData = 0x18b8; // 
            constexpr std::ptrdiff_t `x:è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_XPOrbVData {
            constexpr std::ptrdiff_t  = 0x904f6518; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 0
        namespace CLogicRelayAPI {
        }

        // Parent: m_bWorldLayerVisible
        // Fields: 2
        namespace CInfoWorldLayer {
            constexpr std::ptrdiff_t  = 0x9053eac0; // CBaseEntity
            constexpr std::ptrdiff_t CLightDirectionalEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_HauntingSpirits {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f693b28; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter_FX {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_flCurrentObscureLevel = 0xd0; // float32
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData {
            constexpr std::ptrdiff_t  = 0x8000055c; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa98e0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BulletResistReductionStackVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CBodyComponentBaseModelEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBodyComponentSkeletonInstance
            constexpr std::ptrdiff_t CBodyComponentBaseModelEntity = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x8ffe9608; // 0Bè˝
        }

        // Parent: None
        // Fields: 3
        namespace CProjectile_Necro_ZombieWall_Projectile {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelProjectile
            constexpr std::ptrdiff_t Visuals = 0x8ffae200; // 
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TimeWall_AuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t ê¯˜è˝ = 0x0; // 
            constexpr std::ptrdiff_t @≠Èè˝ = 0x9068a038; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
            constexpr std::ptrdiff_t  = 0x902609a8; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t citadel_ability_tier2boss_laser_beam = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe77768; // CCitadel_Ability_Tier2Boss_LaserBeam
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelMatchmakingStatusInfo {
            constexpr std::ptrdiff_t  = 0x8fee0020; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicProximity {
            constexpr std::ptrdiff_t  = 0x900793a8; // CPointEntity
            constexpr std::ptrdiff_t CFuncTrackTrain = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8de738; // CLogicProximity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viper_PetrifyBola {
            constexpr std::ptrdiff_t  = 0x908a51a0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_Radiance = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityViscousBowlingVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f710720; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Surging_PowerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DeflectingArmor {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t @ﬁÁè˝ = 0x8f553b20; // 
        }

        // Parent: m_nCurrencyValue
        // Fields: 4
        namespace CCitadelItemPickup {
            constexpr std::ptrdiff_t  = 0x8fee6000; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x8f4939b0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d876c50; // 
        }

        // Parent: m_SelfParticle
        // Fields: 3
        namespace CModifierNikumanVData {
            constexpr std::ptrdiff_t  = 0x8f6a6ac0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x903dc820; // ¯jjè˝
            constexpr std::ptrdiff_t  = 0x907aff60; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Empty {
            constexpr std::ptrdiff_t  = 0x8f3c6248; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HãƒUHãÏHÉÏpHâpLçE»Lâ`HãÒHãﬂ°∫ = 0x8d37b300; // 
            constexpr std::ptrdiff_t  = 0x712fc330; // 
        }

        // Parent: m_tSoonestHelperCooldownEndTime
        // Fields: 3
        namespace CCitadel_Ability_Familiar_HelpingHands {
            constexpr std::ptrdiff_t  = 0x900881f0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f925ac0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_EmpowerBullet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t CCitadel_Ability_Lash_Flog = 0x11f8; // 
            constexpr std::ptrdiff_t 0ﬁ[è˝ = 0x8ff8fb18; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Lash_Flog
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityRiotProtocolVData {
            constexpr std::ptrdiff_t  = 0x800007cb; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
            constexpr std::ptrdiff_t  = 0x8f322db0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // »-2è˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T2Boss_Stagger_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_Stagger_Watcher = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Extendable_HealthRegen {
            constexpr std::ptrdiff_t  = 0x8fe95e70; // CCitadel_Modifier_Basic_HealthRegen
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_strSpawnParticle
        // Fields: 2
        namespace CNPC_Escort_VData {
            constexpr std::ptrdiff_t  = 0x90502250; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t ∞‚Ôè˝ = 0x0; // 
        }

        // Parent: m_vecViewOffset
        // Fields: 6
        namespace CAI_CitadelNPC {
            constexpr std::ptrdiff_t  = 0x8ff0bba8; // CAI_BaseNPC
            constexpr std::ptrdiff_t CNPC_BaseDefenseSentry = 0x0; // 
            constexpr std::ptrdiff_t pñè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff09630; // ¯Mw˛
            constexpr std::ptrdiff_t à{1è˝ = 0xa9d3ab50; // 
            constexpr std::ptrdiff_t AVHÉÏ`LãÚÖ…t,É˘t	3¿HÉƒ`A^√HãIãŒHçî$à = 0x8f2c6e38; // PˆNè˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelItemPickupRejuvHeroTest {
            constexpr std::ptrdiff_t  = 0x8fee6ee0; // CCitadelItemPickupRejuv
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d873540; // 
            constexpr std::ptrdiff_t PoÓè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d3a790; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerPassthroughFakeWall {
            constexpr std::ptrdiff_t  = 0x8feeddd8; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelObserver_MovementServices = 0x0; // 
            constexpr std::ptrdiff_t «Óè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d390b0; // 
        }

        // Parent: None
        // Fields: 5
        namespace FilterDamageType {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t FilterDamageType = 0x4e0; // 
            constexpr std::ptrdiff_t »„Çè˝ = 0x8fff22b8; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // FilterDamageType
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelModifier_Viscous_Goo_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CAbilityTargetdummy3VData = 0x1818; // 
            constexpr std::ptrdiff_t  = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CAbilityTargetdummy3VData
        }

        // Parent: m_Resolution
        // Fields: 2
        namespace CPointCamera {
            constexpr std::ptrdiff_t  = 0x8ff1e770; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeList {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_NetShot {
            constexpr std::ptrdiff_t  = 0x8f711e20; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_vDashDirection
        // Fields: 3
        namespace CCitadel_Ability_Fencer_Riposte {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8fe989c8; // 
            constexpr std::ptrdiff_t  = 0x90792e60; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Boho_DamageShare {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_Barrage_Amp {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ShadowCloneVData = 0x750; // 
        }

        // Parent: m_flAirDrag
        // Fields: 3
        namespace CAbilityPowerSlashVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelYamatoBaseVData
            constexpr std::ptrdiff_t  = 0x8f716de0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffb8430; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityVacuumVData {
            constexpr std::ptrdiff_t  = 0x800006d9; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StaticCharge {
            constexpr std::ptrdiff_t  = 0x90720460; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Projectile_FortunaWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PauseUnPause {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PristineEmblem_VData = 0x840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_BurstFire = 0x1000; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Item_Mystic_RegenerationVData {
            constexpr std::ptrdiff_t  = 0x902ece58; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_weapon_instant_reload = 0x0; // 
        }

        // Parent: tools/images/pulse_editor/inflow_wait.png
        // Fields: 3
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t CPulseCell_Inflow_Wait = 0x90; // 
            constexpr std::ptrdiff_t Äπ†è˝ = 0x0; // ∞ƒê˝
        }

        // Parent: None
        // Fields: 6
        namespace CCitadelTunnelTrigger {
            constexpr std::ptrdiff_t  = 0x8f3e1990; // CCitadelSpeedBoostTrigger
            constexpr std::ptrdiff_t CCitadelTunnelTrigger = 0x8f0; // 
            constexpr std::ptrdiff_t ÖLè˝ = 0x8fef7a78; // êyÔè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelTunnelTrigger
            constexpr std::ptrdiff_t Kill 3 Tier 1 = 0x8f4c8898; // 
            constexpr std::ptrdiff_t  = 0x8f43dfb8; // EFlexSlotTypes_t
        }

        // Parent: None
        // Fields: 5
        namespace CNPC_TeslaCoil {
            constexpr std::ptrdiff_t  = 0x8ff118e0; // CNPC_SimpleAnimatingAI
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x8f508b20; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8db23920; // 
            constexpr std::ptrdiff_t m_iLane = 0x17c8; // int32
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerObscuredVolume {
            constexpr std::ptrdiff_t  = 0x8feceeb0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d6959a0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelFilterModifier {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t  = 0x8f419788; // CCitadelFilterModifier
            constexpr std::ptrdiff_t  = 0x8fec7378; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CProjectile_PunkgoatTether {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f6a26e0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_UtilityUpgrade_RocketBoots {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f3210b8; // CCitadel_ArmorUpgrade_GritVData
            constexpr std::ptrdiff_t  = 0x8fe7b268; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // `?#ç˝
        }

        // Parent: None
        // Fields: 4
        namespace CFilterProximity {
            constexpr std::ptrdiff_t  = 0x8fff2ed0; // CBaseFilter
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e697210; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier2EmpoweredVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t ‹’©6 = 0xa9d7b940; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAccoladeDefinition {
        }

        // Parent: None
        // Fields: 3
        namespace CTeamTrackedStatsEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrackedStatsEntity
            constexpr std::ptrdiff_t CTeamTrackedStatsEntity = 0x510; // 
            constexpr std::ptrdiff_t p,Hè˝ = 0x90083f88; // PFê˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CombatStatus {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Werewolf_Frenzy {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_ProjectMindModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t  = 0x8f710738; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Fencer_Ultimate_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t êö¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Familiar_HealHostVData {
            constexpr std::ptrdiff_t  = 0x8f63a730; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Hßcè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WebWall_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f72acb8; // CCitadel_Modifier_WebWall_Debuff
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityIntimidateVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CBaseDashCastAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_UltComboVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8è[è˝ = 0x8f5b89b0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_WreckerGarbageSuck {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f716e40; // CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData
            constexpr std::ptrdiff_t  = 0x8ffc82d0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DisarmProcWatcher {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: m_vNormal
        // Fields: 0
        namespace CEffectData {
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Airheart_FloatingBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f5a6610; // CCitadel_Modifier_DragonFireGroundAuraVData
            constexpr std::ptrdiff_t  = 0x8ff833b0; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // `¡Êç˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Intensifying_Clip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_AoEWaveVData = 0x1a10; // 
            constexpr std::ptrdiff_t ‡`.è˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Ability_Tier2Boss_AoEWaveVData
        }

        // Parent: m_flFadeOutModelStart
        // Fields: 2
        namespace CEntityDissolve {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: m_flTurretExpireTime
        // Fields: 3
        namespace CCitadel_Ability_TurretClone {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x8e106040; // 
            constexpr std::ptrdiff_t m_BubbleModifier = 0x1818; // CEmbeddedSubclass<CBaseModifier>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Rutger_Pulse {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ∞éÈè˝ = 0x90861d00; // MPropertyStartGroup
            constexpr std::ptrdiff_t CProjectile_Synth_PlasmaFlux = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TangoTether_Tether {
            constexpr std::ptrdiff_t  = 0x8ffcaeb0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
            constexpr std::ptrdiff_t  = 0x80000595; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
            constexpr std::ptrdiff_t  = 0x80000087; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367200; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: 0¯>ç˝
        // Fields: 2
        namespace CCitadelPlayer_ObserverServices {
            constexpr std::ptrdiff_t  = 0x8feeed30; // CPlayer_ObserverServices
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseAnimGraphModifierHandleVector_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleShuffled {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleShuffled = 0x60; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Upgrade_StabilizingTripod {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2e26d0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f2e2708; // 
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_StatStealBase
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_FrenzyAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadelModifierAerialAssaultVData = 0x940; // 
            constexpr std::ptrdiff_t xa1è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadelModifierAerialAssaultVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HoldingGoldenIdol {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierCadenceGunSpikesVData {
            constexpr std::ptrdiff_t  = 0x8f5a5c30; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // P\Zè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PetrifyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x8f7147f0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Hqè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ShadowStrikeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t `¸Êè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_RiposteTargetSelect {
            constexpr std::ptrdiff_t  = 0x8ff92b00; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dfc8610; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_SucessSelf = 0x2e8; // 
            constexpr std::ptrdiff_t (€rè˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_Werewolf_Kickflip_SucessSelf
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_HealOnLevel {
            constexpr std::ptrdiff_t  = 0x90354c90; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_HeadshotDamage = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2f17d8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysConstraint {
            constexpr std::ptrdiff_t  = 0x90043060; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x501ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8ed350; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicAchievement {
            constexpr std::ptrdiff_t  = 0x900338d0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x8f88c7b0; // 
            constexpr std::ptrdiff_t  9ê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_UltCombo_Target {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t HÉÏ(ãˆ.”eHã%X = 0xa9e586c0; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e586c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Wrecker_Ultimate {
            constexpr std::ptrdiff_t  = 0x8ffbfe00; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityStickyBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: m_flBrightness
        // Fields: 1
        namespace CLightComponent {
            constexpr std::ptrdiff_t  = 0x0; // CEntityComponent
        }

        // Parent: None
        // Fields: 7
        namespace CNPC_MortarSentry {
            constexpr std::ptrdiff_t  = 0x8ff0d0f0; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x20108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dae4fc0; // 
            constexpr std::ptrdiff_t Ball Touch Force = 0x8f4fa718; // 
            constexpr std::ptrdiff_t Degrees pitch to launch the ball up = 0x8f4fa840; // 
            constexpr std::ptrdiff_t †—è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff0d0e0; // ®Ow˛
        }

        // Parent: None
        // Fields: 3
        namespace CProjectile_Perched_Predator {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d36c80; // 
        }

        // Parent: None
        // Fields: 4
        namespace CItemExplosiveBarrel {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadelProjectile_ImmobilizeTrap = 0xfa0; // 
            constexpr std::ptrdiff_t ~,è˝ = 0x8ff7d948; // pYê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelProjectile_ImmobilizeTrap
        }

        // Parent: None
        // Fields: 1
        namespace CAI_FacingServices {
            constexpr std::ptrdiff_t  = 0x8fea6940; // CAI_Component
        }

        // Parent: None
        // Fields: 4
        namespace CPointClientUIDialog {
            constexpr std::ptrdiff_t  = 0x8f2fbfe8; // CBaseClientUIEntity
            constexpr std::ptrdiff_t  = 0x8f4e4248; // 
            constexpr std::ptrdiff_t  = 0x8f4e4258; // 
            constexpr std::ptrdiff_t  = 0x8f4e4270; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicLineToEntity {
            constexpr std::ptrdiff_t  = 0x8f88c968; // CLogicalEntity
        }

        // Parent: None
        // Fields: 5
        namespace CFilterModifier {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterModifier = 0x4e0; // 
            constexpr std::ptrdiff_t @ÂÇè˝ = 0x8fff27b8; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterModifier
            constexpr std::ptrdiff_t  = 0xff00ffff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundAreaEntitySphere {
            constexpr std::ptrdiff_t  = 0x8f530e40; // CSoundAreaEntityBase
            constexpr std::ptrdiff_t m_iTeamNum = 0xa9be9010; // 
            constexpr std::ptrdiff_t x«,è˝ = 0xa9be9060; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_MaulingLeapDebuff {
            constexpr std::ptrdiff_t  = 0x8ffbf700; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Operative_UmbrellaManeuver_AirHang {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CNPC_NecroSkele_GraphController = 0x820; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_CheatDeath_Activated {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f690028; // CCitadel_Ability_Necro_HauntingSkullVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tokamak_CrimsonCannonVData {
            constexpr std::ptrdiff_t  = 0x908e6258; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f70fdc8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierFealtyTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t targetdummy_ability_3 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_PredatoryStatueTarget {
            constexpr std::ptrdiff_t  = 0x907e4950; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_KillSummonTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PowerJump {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bull_Heal {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t pYê˝ = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_MobileResupplyVData = 0x830; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceProc_Immunity {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_RunedGauntlets = 0x308; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealBuffVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityLashUltimateVData {
            constexpr std::ptrdiff_t  = 0x0; // CBaseLockonAbilityVData
            constexpr std::ptrdiff_t ‡N˘è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Item_AOESilence {
            constexpr std::ptrdiff_t  = 0x8f326a60; // CCitadelModifierAura
            constexpr std::ptrdiff_t  ´Ëè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysicalButton {
            constexpr std::ptrdiff_t  = 0x8ff58f40; // CBaseButton
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dd5fba0; // 
            constexpr std::ptrdiff_t ∞èıè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CInfoSpawnGroupLoadUnload {
            constexpr std::ptrdiff_t  = 0x9002c1b0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e887100; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundAreaEntityOrientedBox {
            constexpr std::ptrdiff_t  = 0x8ff25570; // CSoundAreaEntityBase
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f531140; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VampireBat_BatCloud {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_AirLift = 0x16a0; // 
            constexpr std::ptrdiff_t ¿xqè˝ = 0x8ffb9700; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SettingSunThinker_VData {
            constexpr std::ptrdiff_t  = 0x90896198; // CCitadelModifierVData
            constexpr std::ptrdiff_t thumper_ability_4 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffc9568; // CCitadel_Ability_Thumper_4
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Nano_Shadow {
            constexpr std::ptrdiff_t  = 0x90814110; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_AntiSpiritVest = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f6ada98; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChargedTackleActive {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0xa9e58b00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BerserkerDamageStackVData {
            constexpr std::ptrdiff_t  = 0x9036f718; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
            constexpr std::ptrdiff_t  = 0x90274f08; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_blood_tribute = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe72e58; // CCitadel_WeaponUpgrade_BloodTribute
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Ability_Tier3Boss_LaserBeam {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CTier3BossAbility
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f2cd848; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f2e8628; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f2e8638; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
            constexpr std::ptrdiff_t  = 0x8fe875d0; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1c7c30; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PreMatchWait {
            constexpr std::ptrdiff_t  = 0x8f3d4a98; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3d4b78; // CCitadelModifier
        }

        // Parent: m_bPurchased
        // Fields: 0
        namespace ConsumedComponentState_t {
        }

        // Parent: { 'TagName'='m_TagName' }
        // Fields: 2
        namespace CPulseCell_Outflow_ListenForAnimgraphTag {
            constexpr std::ptrdiff_t  = 0x90065e18; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBodyComponent {
            constexpr std::ptrdiff_t  = 0x8f4e9750; // CEntityComponent
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_Method {
            constexpr std::ptrdiff_t  = 0x900cc150; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: m_brushModelName
        // Fields: 3
        namespace CRenderPortal {
            constexpr std::ptrdiff_t  = 0x8fefe5b0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f4d8ec0; // 
        }

        // Parent: m_iEntityLevel
        // Fields: 1
        namespace CEconItemView {
            constexpr std::ptrdiff_t  = 0x909ca010; // IEconItemInterface
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Werewolf_UnloadGun2VData {
            constexpr std::ptrdiff_t  = 0x800007c6; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x9089c668; // 
        }

        // Parent: CCitadel_Ability_InfinitySlash
        // Fields: 4
        namespace CCitadel_Ability_InfinitySlash {
            constexpr std::ptrdiff_t  = 0x8ffc80a0; // CCitadelBaseYamatoAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f72c440; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e26cb70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckingBall_AutoThrow {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
            constexpr std::ptrdiff_t  = 0x90862fd8; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t †º˙è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x90830978; // CBaseEntity
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Ghost_BloodShards {
            constexpr std::ptrdiff_t  = 0x907266e0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_SelfZap = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f62e7e8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CItemAOESilenceAuraVData = 0x888; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModifier {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_Ricochet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2fbf88; // CCitadel_ArmorUpgrade_MetalSkin
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CBaseDMStart {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CBaseDMStart = 0x4a8; // 
            constexpr std::ptrdiff_t ıçè˝ = 0x90074418; // ∞;Òè˝
        }

        // Parent: m_pChoreoComponent
        // Fields: 2
        namespace CBaseModelEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t Set Body Group Value = 0x8dd63610; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Tier2WeakenedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t ‹’©6 = 0xa9d7b940; // 
            constexpr std::ptrdiff_t 0ÿ©6 = 0xa9d7ba10; // 
            constexpr std::ptrdiff_t h0ÿ©6 = 0xa9d7bae0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_BaseDefenseSentryVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_SimpleAnimatingAIVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_NetShotVData {
            constexpr std::ptrdiff_t  = 0x908b2e28; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_PainAura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_PrimaryWeapon = 0x1198; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_GrandFinale_Buff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_GuidedArrow_OwlModel_GraphController = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gunslinger_KnockbackBlastVData {
            constexpr std::ptrdiff_t  = 0x907084d8; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_health_swap = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_WreckerSalvageBuffVData {
            constexpr std::ptrdiff_t  = 0x8f712788; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ¿'qè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bounce_Pad_Stomp {
            constexpr std::ptrdiff_t  = 0x906501e0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelProjectile_ImmobilizeTrap = 0x0; // 
        }

        // Parent: m_BuffModifier
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_FuryTrance_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CItemPowerShardVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x902dbdc8; // 
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierT2BossWaveTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f2f0d98; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x902160c0; // H/è˝
        }

        // Parent: m_flStomachDamageMultiplier
        // Fields: 1
        namespace CAI_CitadelNPCVData {
            constexpr std::ptrdiff_t  = 0x0; // CAI_BaseNPCVData
        }

        // Parent: None
        // Fields: 0
        namespace fogplayerparams_t {
        }

        // Parent: m_nGlowRange
        // Fields: 0
        namespace CGlowProperty {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerBurrowUnderground {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CProjectile_Boho_BouncyProjectile = 0x8b0; // 
            constexpr std::ptrdiff_t  = 0x8ff7add0; // [ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CProjectile_Boho_BouncyProjectile
            constexpr std::ptrdiff_t  = 0x8f5a6410; // CCitadel_Ability_ChargedShot
        }

        // Parent: None
        // Fields: 4
        namespace CInstancedSceneEntity {
            constexpr std::ptrdiff_t  = 0x9006fad8; // CSceneEntity
            constexpr std::ptrdiff_t CSoundOpvarSetPointBase = 0x0; // 
            constexpr std::ptrdiff_t Ämê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90066d40; // `Jw˛
        }

        // Parent: m_iGuidedBotMatchOrbsSecured
        // Fields: 3
        namespace CCitadelPlayerController {
            constexpr std::ptrdiff_t  = 0x8feefba0; // CBasePlayerController
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f4b0cd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Petrify {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t pﬂ˚è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierChargedTacklePrepareVData {
            constexpr std::ptrdiff_t  = 0x80000725; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e247d40; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_HornetSnipeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_gunslinger_demon_carbine = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_PassiveBeefyVData {
            constexpr std::ptrdiff_t  = 0x800005a6; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpilledBloodThinker {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionVData {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseValue {
            constexpr std::ptrdiff_t  = 0x900cc720; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelHideoutTeleportTrigger {
            constexpr std::ptrdiff_t  = 0x8fee0590; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d7b5810; // 
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_StalkersMark_Teleport {
            constexpr std::ptrdiff_t  = 0x8f3ce270; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t  = 0x8f5ab0f8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_NullificationAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t Modifiers = 0x8f2dbbe0; // CCitadel_Ability_ZipLine_VData
            constexpr std::ptrdiff_t  = 0x8fe81630; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // ∞$ç˝
        }

        // Parent: m_iszOpvarName
        // Fields: 2
        namespace CCitadelSoundOpvarSetOBB {
            constexpr std::ptrdiff_t  = 0x9006e538; // CBaseEntity
            constexpr std::ptrdiff_t CSimTimer = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CSoundEventParameter {
            constexpr std::ptrdiff_t  = 0x8ff24bb0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Guiding_Arrow {
            constexpr std::ptrdiff_t  = 0x8de58120; // CCitadelModifier
            constexpr std::ptrdiff_t m_BuffModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_BaseWeaponDamage {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_WaterServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayerPawnComponent
        }

        // Parent: { className = 'IsStateNode' item_factory = 'BooleanSwitchState' }
        // Fields: 3
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t  = 0x900d9f10; // CPulseCell_BaseState
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f161530; // 
        }

        // Parent: m_BuffModifier
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_SplitShot {
            constexpr std::ptrdiff_t  = 0x8f31f6f0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_Shrink_Ray {
            constexpr std::ptrdiff_t  = 0x8fe84710; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1e5cb0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CRotButton {
            constexpr std::ptrdiff_t  = 0x8dd5fed0; // CBaseButton
            constexpr std::ptrdiff_t Jw˛ = 0x8f5663a8; // 
            constexpr std::ptrdiff_t `êıè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d2ea30; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvViewPunch {
            constexpr std::ptrdiff_t  = 0x90015ec0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEconEntityAttachedParticleInfo_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_LeapVData {
            constexpr std::ptrdiff_t  = 0x908e8948; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Swan_Leap {
            constexpr std::ptrdiff_t  = 0x8ffa0470; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Boho_BouncyProjectile {
            constexpr std::ptrdiff_t  = 0x8f3a59a8; // CCitadelBaseAbility
            constexpr std::ptrdiff_t †-¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_FireBeetles_Debuff {
            constexpr std::ptrdiff_t  = 0x907cc6e0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Perched_Predator = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gunslinger_DemonCarbine {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Uppercutted {
            constexpr std::ptrdiff_t  = 0x8ff78540; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TargetPracticeEnemyVData {
            constexpr std::ptrdiff_t  = 0x906a02e8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_airheart_rocketeer3 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff819b0; // CCitadel_Ability_Airheart_Rocketeer3
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadel_Modifier_StatStealBaseVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CorpseExplosionThinker {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 1
        namespace CCitadel_Item_ArcticBlast_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HollowPoint_Proc {
            constexpr std::ptrdiff_t  = 0x8d2165b0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2ebff8; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_CosmeticItem_Snowball = 0x1208; // 
        }

        // Parent: m_nInteractsExclude
        // Fields: 0
        namespace VPhysicsCollisionAttribute_t {
        }

        // Parent: None
        // Fields: 4
        namespace CItemCapacitor {
            constexpr std::ptrdiff_t  = 0x90335950; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_ApexCombat = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f2f31d8; // CCitadel_ArmorUpgrade_ReturnFireVData
            constexpr std::ptrdiff_t  = 0x8fe86fe8; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_Stimpak {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // 
            constexpr std::ptrdiff_t HÉÏ(ãùöeHã%X = 0x8f3093b8; // 
            constexpr std::ptrdiff_t  = 0x8f2de058; // 8n,è˝
        }

        // Parent: m_flExpireTime
        // Fields: 3
        namespace CCitadelBulletTimeWarp {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t m_flTime = 0x8; // GameTime_t
            constexpr std::ptrdiff_t Ä#Ìè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncShatterglass {
            constexpr std::ptrdiff_t  = 0x8ff2d310; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNavWalkable {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CNavWalkable = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x90082550; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 4
        namespace CInfoTrooperSpawn {
            constexpr std::ptrdiff_t  = 0x8ff0a540; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da9daf0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Wrecker_UltimateGrabEnemyVData {
            constexpr std::ptrdiff_t  = 0x8f71d078; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ê–qè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t citadel_ability_tier2boss_stomp = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe79608; // CCitadel_Ability_Tier2Boss_Stomp
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CatapultDamageWatcher {
            constexpr std::ptrdiff_t  = 0x8f3d4b78; // CCitadelModifier
            constexpr std::ptrdiff_t  øÈè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            constexpr std::ptrdiff_t  = 0x90552c88; // CEnvSoundscapeProxy
            constexpr std::ptrdiff_t CEnvSoundscapeProxyAlias_snd_soundscape_proxy = 0x538; // 
            constexpr std::ptrdiff_t  = 0x8ff340e8; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CEnvSoundscapeProxyAlias_snd_soundscape_proxy
        }

        // Parent: m_qForward
        // Fields: 3
        namespace CCitadel_Ice_Path_Shard_Physics {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t Visuals = 0x8ff8dde0; // 
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AccuracyTracker {
            constexpr std::ptrdiff_t  = 0x8fed5180; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_BodyGroupChoice {
            constexpr std::ptrdiff_t  = 0x8ffd2830; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Unicorn_RadiantBlastVData {
            constexpr std::ptrdiff_t  = 0x909329a8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_werewolf_clawweapon = 0x0; // 
        }

        // Parent: m_tLeapStartTime
        // Fields: 3
        namespace CCitadel_Ability_Werewolf_Leap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Projectile_Petrify = 0x860; // 
            constexpr std::ptrdiff_t  = 0x8ffc60f8; // pYê˝
        }

        // Parent: m_vecLastPosition
        // Fields: 3
        namespace CAbility_Fencer_Ultimate {
            constexpr std::ptrdiff_t  = 0x90709b40; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_PrimaryWeapon = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f627420; // CCitadel_Modifier_IcePath_TechPowerLinger
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_FireBeetles_Debuff_VData {
            constexpr std::ptrdiff_t  = 0x8f690488; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ®iè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Chrono_KineticCarbine_Slow {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelAbilityDruidSprout = 0xf80; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CrushingFistsWatcher_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe94190; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f2e99b0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Ricochet_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f328360; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // xÉ2è˝
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_Inflow_Yield {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t CPulseCell_Inflow_Yield = 0x90; // 
            constexpr std::ptrdiff_t p∫†è˝ = 0x0; // ∞ƒê˝
        }

        // Parent: None
        // Fields: 0
        namespace CPulseMathlib {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Hideout_Ball {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CCitadel_Hideout_Ball = 0x7b0; // 
            constexpr std::ptrdiff_t  = 0x8ff0d798; // êrıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CProjectile_Necro_HauntProjectile {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelProjectile
            constexpr std::ptrdiff_t  = 0x8f6ad738; // CCitadel_Ability_Swan_FeatherBoomerang
            constexpr std::ptrdiff_t  = 0x8ff9f078; // 
        }

        // Parent: None
        // Fields: 4
        namespace CModifier_Drifter_Darkness_Target_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x8f5a3c00; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff83a90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
            constexpr std::ptrdiff_t  = 0x9092d6b8; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 8⁄rè˝
        }

        // Parent: None
        // Fields: 1
        namespace CAI_AnimGraphServices {
            constexpr std::ptrdiff_t  = 0x8fe9f110; // CAI_Component
        }

        // Parent: None
        // Fields: 1
        namespace CPhysImpact {
            constexpr std::ptrdiff_t  = 0x8f3c9340; // CPointEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_ClawWeaponVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t †®˚è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_Flashbang_VData {
            constexpr std::ptrdiff_t  = 0x8f699840; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // `òiè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Pillar {
            constexpr std::ptrdiff_t  = 0x90944700; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t CCitadel_Ability_HealingSlash = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f7151f8; // CCitadel_Ability_Unicorn_PrimaryWeapon
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ThrownShiv_Slow_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbility_Rutger_CheatDeath_VData = 0x1828; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierAerialAssaultWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_APRounds {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t Visuals = 0xa9e52840; // 
            constexpr std::ptrdiff_t Æ,è˝ = 0xa9e586c0; // 
            constexpr std::ptrdiff_t  = 0x8f308e60; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BoxingGloveVData {
            constexpr std::ptrdiff_t  = 0x800000b4; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f322c98; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe812d0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MagicClarityWatcher {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t HÉÏ(ã%úeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FullSpectrumDamage {
            constexpr std::ptrdiff_t  = 0x8fe74480; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NearbyEnemyResist {
            constexpr std::ptrdiff_t  = 0x8d384c60; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f3a6520; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelItemPickupRejuvHeroTestVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelItemPickupRejuvVData
            constexpr std::ptrdiff_t ability_golden_idol = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Shield {
            constexpr std::ptrdiff_t  = 0x8d209210; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8fe6e6d0; // 
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_NPCAbility_Vanguard_AOEBuff_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: m_vThrustingVelocity
        // Fields: 3
        namespace CCitadel_Ability_Airheart_Rocketeer4 {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Sounds = 0x8de9d750; // MPropertyStartGroup
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityPunkgoatTetherVData {
            constexpr std::ptrdiff_t  = 0x8f6a0038; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // X
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityDistruptiveChargeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t `Óaè˝ = 0x90772348; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Heal_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f5b2098; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_CharmedWraps_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_mod_disruptor = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe8a8d0; // CCitadel_Item_ModDisruptor
            constexpr std::ptrdiff_t  = 0x800000fd; // CCitadelModifierAuraVData
        }

        // Parent: Player
        // Fields: 1
        namespace CBaseEntity {
            constexpr std::ptrdiff_t  = 0x8dd663b0; // CEntityInstance
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_UseServices {
            constexpr std::ptrdiff_t  = 0x0; // CPlayerPawnComponent
        }

        // Parent: m_vecUnitStatusOffset
        // Fields: 5
        namespace CNPC_BaseDefenseSentry {
            constexpr std::ptrdiff_t  = 0x9050c7c0; // CNPC_SimpleAnimatingAI
            constexpr std::ptrdiff_t CAI_CitadelMotor = 0x0; // 
            constexpr std::ptrdiff_t pöè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ff09a30; // ¯Mw˛
            constexpr std::ptrdiff_t à{1è˝ = 0xa9d3ab80; // 
        }

        // Parent: None
        // Fields: 4
        namespace CNpcFootSweep {
            constexpr std::ptrdiff_t  = 0x8feb5780; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d517330; // 
        }

        // Parent: None
        // Fields: 4
        namespace CModifierVacuumAuraVData {
            constexpr std::ptrdiff_t  = 0x907f3298; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x8f6a25c8; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff9f710; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_SetMoveType {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CGameModifier_SetMoveType = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_Traveler_MovementSpeed {
            constexpr std::ptrdiff_t  = 0x90851a20; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_VoidSphere = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gunslinger_KnockbackBlast {
            constexpr std::ptrdiff_t  = 0x8ff8a050; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TargetPracticeEnemy {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f59d3e8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_hook = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VeilWalkerMovespeed {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t m_flDebuffScale = 0x250; // float32
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SlowingBullets_Proc {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t Modifiers = 0x8f2cd848; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2e99d0; // 
        }

        // Parent: m_iHealthMax
        // Fields: 0
        namespace PlayerDataGlobal_t {
        }

        // Parent: m_hParent
        // Fields: 0
        namespace CGameSceneNodeHandle {
        }

        // Parent: m_eHideoutAction
        // Fields: 6
        namespace CCitadelHideoutInteractableProp {
            constexpr std::ptrdiff_t  = 0xcd0; // CDynamicProp
            constexpr std::ptrdiff_t  = 0x8f47ddb8; // CItemCrateSpawn
            constexpr std::ptrdiff_t  = 0x8fedf690; // 
            constexpr std::ptrdiff_t  = 0x8f480090; // 
            constexpr std::ptrdiff_t The loop sounds to play when we have any Heal Over Time (HOT) = 0x0; // 
            constexpr std::ptrdiff_t CCitadelHideoutInteractableProp = 0xde0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_DragonFireGroundAuraVData {
            constexpr std::ptrdiff_t  = 0x8000052b; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa9810; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
            constexpr std::ptrdiff_t ∏ó,è˝ = 0x0; // 
        }

        // Parent: m_bMoving
        // Fields: 3
        namespace CProjectile_Priest_SlideTrap_Projectile {
            constexpr std::ptrdiff_t  = 0x90802be0; // CCitadelProjectile
            constexpr std::ptrdiff_t CAbility_Operative_Revelation = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f2cd848; // 
        }

        // Parent: None
        // Fields: 2
        namespace CMarkupVolumeWithRef {
            constexpr std::ptrdiff_t  = 0x8f587010; // CMarkupVolumeTagged
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_FearVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilitySleepBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityGooGrenadeVData {
            constexpr std::ptrdiff_t  = 0x8f727388; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ®srè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Citadel_Bull_Leap_LandingBonuses {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÜ“—eHã%X = 0x8f5a3d08; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_CheatDeathImmunity {
            constexpr std::ptrdiff_t  = 0x8f2eceb0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Unknown {
            constexpr std::ptrdiff_t  = 0x900cbe70; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 4
        namespace CFuncPlatRot {
            constexpr std::ptrdiff_t  = 0x9007b258; // CFuncPlat
            constexpr std::ptrdiff_t CTriggerSndSosOpvar = 0x0; // 
            constexpr std::ptrdiff_t transition volume passed = 0x0; // 
            constexpr std::ptrdiff_t server = 0x70108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameModifier_SetModelScale {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CGameModifier_SetModelScale = 0xd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CRagdollMagnet {
            constexpr std::ptrdiff_t  = 0x8f427f30; // CPointEntity
            constexpr std::ptrdiff_t  = 0x8f5688d0; // 
            constexpr std::ptrdiff_t –¨ıè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoInstructorHintTarget {
            constexpr std::ptrdiff_t  = 0x9001dd50; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SpiderShield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f71c2f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Magician_BigBoltVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ¿jè˝ = 0x8f6a1610; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityTeleportToGangsterVData {
            constexpr std::ptrdiff_t  = 0x800007fb; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_WarpStone_VData {
            constexpr std::ptrdiff_t  = 0x80000098; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_SpellslingerHeadshots_Debuff {
            constexpr std::ptrdiff_t  = 0x8f30c7c8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2e71a0; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BonusDamagePercentVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CSpriteAlias_env_glow {
            constexpr std::ptrdiff_t  = 0x0; // CSprite
            constexpr std::ptrdiff_t  = 0x8f8e00f0; // CSpriteAlias_env_glow
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_timestamp
        // Fields: 3
        namespace CSpotlightEnd {
            constexpr std::ptrdiff_t  = 0x8ff6d040; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f590778; // 
        }

        // Parent: None
        // Fields: 4
        namespace CInfoCoverPoint {
            constexpr std::ptrdiff_t  = 0x8ff115a0; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8db22ec0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_AttachHostVData {
            constexpr std::ptrdiff_t  = 0x9071a928; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90729e58; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Upgrade_StabilizingTripodVData {
            constexpr std::ptrdiff_t  = 0x80000101; // CitadelItemVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d367500; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_AcolytesGlove_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t h˜1è˝ = 0x90289b28; // 
            constexpr std::ptrdiff_t ‡Ëè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LearningHeroAbility {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3bede8; // CCitadel_Modifier_LearningHeroAbility
        }

        // Parent: m_hSkyMaterialLightingOnly
        // Fields: 3
        namespace CEnvSky {
            constexpr std::ptrdiff_t  = 0x8ff16880; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f51ab00; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoSpawnGroupLandmark {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CInfoSpawnGroupLandmark = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x9002bc38; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 3
        namespace CPointAngleSensor {
            constexpr std::ptrdiff_t  = 0x90053e70; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_fSpeedVariation
        // Fields: 2
        namespace CEnvWindController {
            constexpr std::ptrdiff_t  = 0x8f4e8eb8; // CBaseEntity
            constexpr std::ptrdiff_t CLightComponent = 0xa9d374c0; // 
        }

        // Parent: m_RecastEndTime
        // Fields: 3
        namespace CCitadel_Ability_VampireBat_BatBlink {
            constexpr std::ptrdiff_t  = 0x8e28b5f0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f72d950; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f72d960; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Fathom_LurkersAmbush_VData {
            constexpr std::ptrdiff_t  = 0x800006a2; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Haunt_Damage {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_TangoTether_Trigger = 0xf88; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ShieldedSentry_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90668ee8; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChainLightningEffect {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier2Boss_StatTracker = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpellShield_Buff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_CosmeticItem_Snowball_VData = 0x19f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelBaseAbilityServerOnly {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3ba140; // ProjectileInfo_t
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHandleBase {
        }

        // Parent: 0¯>ç˝
        // Fields: 7
        namespace CCitadelRankedBadgeProp {
            constexpr std::ptrdiff_t  = 0x0; // CDynamicProp
            constexpr std::ptrdiff_t EModTier_t = 0x10101; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t None = 0x8f4b9718; // 
            constexpr std::ptrdiff_t Fire Rate = 0x8f420598; // 
            constexpr std::ptrdiff_t Movement = 0x8f4b7218; // CCitadelRankedBadgeProp
            constexpr std::ptrdiff_t  = 0x8fef0f78; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
            constexpr std::ptrdiff_t  = 0x8f2c6e60; // CCitadelModifierAura_Cone
            constexpr std::ptrdiff_t HÉÏ(ã÷$¨eHã%X = 0x8f6a3ff8; // 
            constexpr std::ptrdiff_t  = 0x8f6a4048; // Hÿ,è˝
            constexpr std::ptrdiff_t  = 0x8f5b8f90; // 8n,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifierGarbageAuraVData {
            constexpr std::ptrdiff_t  = 0x90892608; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t ability_viper_ult = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffc69f8; // CCitadel_Ability_Viper_Ability04
        }

        // Parent: None
        // Fields: 5
        namespace CGenericConstraint {
            constexpr std::ptrdiff_t  = 0x9004afa8; // CPhysConstraint
            constexpr std::ptrdiff_t CPhysLength = 0x0; // 
            constexpr std::ptrdiff_t PSê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90045310; // 0Iw˛
            constexpr std::ptrdiff_t  = 0xa9d2e010; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Clone {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0x8dfe20f0; // 
        }

        // Parent: CCitadel_Ability_ProximityRitual
        // Fields: 3
        namespace CCitadel_Ability_ProximityRitual {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_IceDomeFriendlyVData {
            constexpr std::ptrdiff_t  = 0x9071bdc8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ¿wcè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VoidSphereVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_opera_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_HealthSwap {
            constexpr std::ptrdiff_t  = 0x8ff93e40; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ColdFrontAOE {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticReverbExplosion = 0x1d8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelHeroLoader {
            constexpr std::ptrdiff_t  = 0x8fed43e0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleRandom {
            constexpr std::ptrdiff_t  = 0x900cb730; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_PublicOutput {
            constexpr std::ptrdiff_t  = 0x900cc7c0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CEnvLaser {
            constexpr std::ptrdiff_t  = 0x8ff62aa0; // CBeam
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ddc4460; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_GraveStone {
            constexpr std::ptrdiff_t  = 0x8f635078; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f31e590; // 8n,è˝
            constexpr std::ptrdiff_t  = 0x8f635168; // –~,è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Cadence_AnthemAOE {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_Ability02 = 0xf70; // 
            constexpr std::ptrdiff_t  = 0x8ff76150; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Boho_Ability02
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Mystic_Regeneration {
            constexpr std::ptrdiff_t  = 0x8f2e77b8; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Shield = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
        }

        // Parent: None
        // Fields: 2
        namespace CSoundOpvarSetEntity {
            constexpr std::ptrdiff_t  = 0xf39c06e0; // CBaseEntity
            constexpr std::ptrdiff_t Äkê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CEnvBeverage {
            constexpr std::ptrdiff_t  = 0x90015950; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CombatStatusVData {
            constexpr std::ptrdiff_t  = 0x90460d20; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x903eff40; // `∆Fè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityPunkgoatUltVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f694550; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bookworm_KnightCharge_Buff {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t m_DoorOpenStartSound = 0x1818; // CSoundEventName
        }

        // Parent: m_bLatched
        // Fields: 2
        namespace CAbility_Fathom_ReefdwellerHarpoon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t 0!˚è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityFlyingStrikeVData {
            constexpr std::ptrdiff_t  = 0x908ac4b8; // CCitadelYamatoBaseVData
            constexpr std::ptrdiff_t –º˚è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_NanoDash_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChargedTacklePrepare {
            constexpr std::ptrdiff_t  = 0x8f328b30; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_CosmeticItem_VotingPoster_VData {
            constexpr std::ptrdiff_t  = 0x80000128; // CitadelItemVData
            constexpr std::ptrdiff_t 0ñËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DamageOnHitGround {
            constexpr std::ptrdiff_t  = 0x8f3ca508; // CCitadelModifier
            constexpr std::ptrdiff_t AnimGraph2 = 0x8fe9a2f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Idol_Return {
            constexpr std::ptrdiff_t  = 0x8d39d110; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysMotor {
            constexpr std::ptrdiff_t  = 0x8ff6b490; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de08660; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelZiplineCaptureTrigger {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelZiplineCaptureTrigger = 0x8f0; // 
            constexpr std::ptrdiff_t  = 0x8fef8468; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadelZiplineCaptureTrigger
            constexpr std::ptrdiff_t @úLè˝ = 0x3; // m_ePointType
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_DamageRecycler {
            constexpr std::ptrdiff_t  = 0x8fe850a0; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d225dc0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLogicGameEvent {
            constexpr std::ptrdiff_t  = 0x9003fbc8; // CLogicalEntity
            constexpr std::ptrdiff_t CMarkupVolumeTagged_Nav = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f88c748; // CLogicGameEvent
            constexpr std::ptrdiff_t  = 0x90035ec8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelAbilityDruidAbility04 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5a4ce8; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Punkgoat_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x8000069c; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Magician_AnimalHex_HexAreaVData {
            constexpr std::ptrdiff_t  = 0x8f6ad718; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 8◊jè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TangoTether_TetherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9091af98; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityLashVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_fortuna_ult = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Bull_LeapVData {
            constexpr std::ptrdiff_t  = 0x9067ffd8; // CitadelAbilityVData
            constexpr std::ptrdiff_t trigger_burrow_underground = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RescueBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t Ä≈Áè˝ = 0x0; // 
        }

        // Parent: m_flHealingChargeParticlePct
        // Fields: 7
        namespace CNPC_Trooper {
            constexpr std::ptrdiff_t  = 0x8ff11a40; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x8f508bd0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8db21660; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f508e28; // 
            constexpr std::ptrdiff_t server = 0xa0110; // 
            constexpr std::ptrdiff_t  = 0x8f508e58; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Pickup_Item {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Pickup
            constexpr std::ptrdiff_t Pickup rewards = 0x8f328b30; // 
            constexpr std::ptrdiff_t Set to -1 to not spawn until invoked by another system = 0x0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f426ee8; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_DeployablePreview {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CCitadel_DeployablePreview = 0xaa0; // 
            constexpr std::ptrdiff_t  = 0x8fec70f8; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CCitadel_DeployablePreview
        }

        // Parent: None
        // Fields: 3
        namespace CInfoTrooperNeutralCamp {
            constexpr std::ptrdiff_t  = 0x8ff0fbc8; // CPointEntity
            constexpr std::ptrdiff_t CInfoTrooperNeutralSpawn = 0x0; // 
            constexpr std::ptrdiff_t P÷è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_AOERoot {
            constexpr std::ptrdiff_t  = 0x8d23b8c0; // CCitadel_Item
            constexpr std::ptrdiff_t Sounds = 0x8f2ebc08; // CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_GoldPerOrb
        // Fields: 3
        namespace CCitadel_Modifier_Hideout_TeleportVData {
            constexpr std::ptrdiff_t  = 0x90484088; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f481560; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fede6d0; // CGameRulesProxy
        }

        // Parent: None
        // Fields: 2
        namespace CPhysExplosion {
            constexpr std::ptrdiff_t  = 0x8ff66e30; // CPointEntity
            constexpr std::ptrdiff_t  = 0x2; // Enable
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shiv_KillingBlow_Leap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_ScaldingSpray_VData = 0x1828; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_CatForm {
            constexpr std::ptrdiff_t  = 0x90860860; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Swan_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DetentionAmmoVData {
            constexpr std::ptrdiff_t  = 0x902eb9b8; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t H/è˝ = 0x903417e8; // 
            constexpr std::ptrdiff_t @≠Èè˝ = 0x8f2f0e48; // 
        }

        // Parent: None
        // Fields: 2
        namespace CItem_Infuser_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t –GÁè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Dust_Storm_Aura {
            constexpr std::ptrdiff_t  = 0x90749a80; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability04 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f629060; // CCitadel_Modifier_AfterburnWatcherVData
            constexpr std::ptrdiff_t  = 0x8ff99660; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_WeaponUpgrade_BloodTribute {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t Modifiers = 0x8d1d56a0; // 
            constexpr std::ptrdiff_t  = 0x8fec63f8; // 
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_ShadowStep {
            constexpr std::ptrdiff_t  = 0x8fe778e0; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1c6920; // 
        }

        // Parent: None
        // Fields: 5
        namespace CSplineConstraint {
            constexpr std::ptrdiff_t  = 0x90045610; // CPhysConstraint
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8e99f0; // 
            constexpr std::ptrdiff_t  = 0x90042d88; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLogicCompare {
            constexpr std::ptrdiff_t  = 0x0; // CLogicalEntity
            constexpr std::ptrdiff_t CLogicCompare = 0x528; // 
            constexpr std::ptrdiff_t PΩàè˝ = 0x900328c8; // |ıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLogicCompare
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ShivDash {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t p}˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_Pounce_InstantVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityHatTrickVData {
            constexpr std::ptrdiff_t  = 0x906781c8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_airheart_package = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletShredImbue_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t Sounds = 0xa9ce85c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_LifestrikeGauntlets = 0x398; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_TechCleaveVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace C_HeroPreview {
            constexpr std::ptrdiff_t  = 0x8fef0a50; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_BlackboardReference {
        }

        // Parent: None
        // Fields: 4
        namespace CFuncTankTrain {
            constexpr std::ptrdiff_t  = 0x9007b8d8; // CFuncTrackTrain
            constexpr std::ptrdiff_t CScriptTriggerMultiple = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8dea08; // CFuncTankTrain
            constexpr std::ptrdiff_t  = 0x90073e98; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest05 {
            constexpr std::ptrdiff_t  = 0x8f2fbed0; // CCitadel_Item_ProjectileTest
            constexpr std::ptrdiff_t  = 0x8f31f7b8; // CCitadel_ArmorUpgrade_ActiveBulletShield
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Item_Disarm {
            constexpr std::ptrdiff_t  = 0x8d2287d0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t m_CastParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TrailParticle = 0x1998; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strStackSound = 0x1a78; // CSoundEventName
            constexpr std::ptrdiff_t m_strMaxStackSound = 0x1a88; // CSoundEventName
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Upgrade_AmmoScavenger {
            constexpr std::ptrdiff_t  = 0x8fe813e0; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d22f0a0; // 
        }

        // Parent: m_bLit
        // Fields: 4
        namespace CPointClientUIWorldPanel {
            constexpr std::ptrdiff_t  = 0x8ff018b0; // CBaseClientUIEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f4e3c00; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da43e70; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundEventSphereEntity {
            constexpr std::ptrdiff_t  = 0x0; // CSoundEventEntity
            constexpr std::ptrdiff_t CSoundEventSphereEntity = 0x568; // 
            constexpr std::ptrdiff_t (∂.è˝ = 0x8ff25c68; // p^Úè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Trapper_Fear {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_AoEParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t Modifiers = 0x8f2c6e38; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Magician_AnimalHexAreaVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t npc_necro_skele = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gunslinger_SpreadingFire {
            constexpr std::ptrdiff_t  = 0x8f62ffb8; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_LashDownStrike = 0x1600; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EmpowerBulletVData {
            constexpr std::ptrdiff_t  = 0x8f626f58; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x901fd850; // pobè˝
        }

        // Parent: m_bStartedOnGround
        // Fields: 3
        namespace CCitadel_Ability_Shiv_KillingBlow {
            constexpr std::ptrdiff_t  = 0x8ffb09e0; // CCitadelBaseShivAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e10f050; // 
        }

        // Parent: m_ActiveCastParticle
        // Fields: 1
        namespace CAbilityShivDeferDamageVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Burrow_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_LinkVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Nano_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_Pounce_Self = 0x150; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PerchedPredatorDrag {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ã÷¨eHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityWreckingBallVData {
            constexpr std::ptrdiff_t  = 0x8000082a; // CitadelAbilityVData
            constexpr std::ptrdiff_t †ˇrè˝ = 0x8f72faf0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gravity_Lasso_VData {
            constexpr std::ptrdiff_t  = 0x8f5b7978; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fe9d0; // †y[è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PowerSurge {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x1f793400; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_KineticSash_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelBotTestNode {
            constexpr std::ptrdiff_t  = 0x8fed5430; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t server = 0x10008; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d724a60; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelClimbRopeTrigger {
            constexpr std::ptrdiff_t  = 0x8fecfb28; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerNeutralShield = 0x0; // 
            constexpr std::ptrdiff_t …Ïè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fecc8d0; // ®Ow˛
            constexpr std::ptrdiff_t “,è˝ = 0xa9d398f0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerPingLocation {
            constexpr std::ptrdiff_t  = 0x0; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerPingLocation = 0x8e8; // 
            constexpr std::ptrdiff_t ––Cè˝ = 0x8feccf10; // p2Òè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CTriggerPingLocation
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HeldItemPickupAura {
            constexpr std::ptrdiff_t  = 0x8feea758; // CCitadel_Modifier_ItemPickupAura
            constexpr std::ptrdiff_t CCitadelZapTrigger = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f491e08; // CCitadel_Modifier_HeldItemPickupAura
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DPSTracker {
            constexpr std::ptrdiff_t  = 0x8fed5020; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelConfigurableTrackedProjectile {
            constexpr std::ptrdiff_t  = 0x90085d30; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ebccf80; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Graf_Ability02 {
            constexpr std::ptrdiff_t  = 0x9073ce90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_HealthSwap = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f63b7b0; // CCitadel_Ability_Graf_Ability02
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Operative_Revelation {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Operative_Revelation = 0xff0; // 
            constexpr std::ptrdiff_t  = 0x8ffabfd0; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierSpiderShieldBuffVData {
            constexpr std::ptrdiff_t  = 0x9087d9e8; // CCitadelModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x908a3b38; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
            constexpr std::ptrdiff_t  = 0x80000558; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa98c0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: m_flLatchedTimeScaleFrac
        // Fields: 3
        namespace CCitadel_Ability_Gunslinger_DemonCarbine {
            constexpr std::ptrdiff_t  = 0x8dfbe0b0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_StormCloudModifier = 0x18f8; // CEmbeddedSubclass<CBaseModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Silenced {
            constexpr std::ptrdiff_t  = 0x8f2f8b80; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_Active {
            constexpr std::ptrdiff_t  = 0x90236e70; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_Stomp = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x8f2edd18; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EtherealBulletsBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t PËè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HalloweenMask {
            constexpr std::ptrdiff_t  = 0x8f3aae38; // CCitadelModifier
            constexpr std::ptrdiff_t m_pOther = 0xc8; // CBaseEntity*
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_KineticCarbine {
            constexpr std::ptrdiff_t  = 0x0; // CScaleFunctionBase
        }

        // Parent: m_flEncodedController
        // Fields: 8
        namespace CCitadelObserverPawn {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelPlayerPawnBase
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x20; // 
            constexpr std::ptrdiff_t  = 0x8fec75d0; // Ä	ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x269; // CCitadelMinimapComponent
            constexpr std::ptrdiff_t  = 0x8f419bd8; // CCitadelObserverPawn
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t |Ïè˝ = 0xa9a32800; // òı@è˝
            constexpr std::ptrdiff_t  = 0x90414f58; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
        }

        // Parent: None
        // Fields: 4
        namespace CRuleBrushEntity {
            constexpr std::ptrdiff_t  = 0x0; // CRuleEntity
            constexpr std::ptrdiff_t CLogicNPCCounterOBB = 0x750; // 
            constexpr std::ptrdiff_t  = 0x90032928; // ¿1ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLogicNPCCounterOBB
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Airheart_SpotlightVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_GraveStone {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t HÉÏ(ãVk®eHã%X = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_ShadowCloneVData {
            constexpr std::ptrdiff_t  = 0x907cf0a8; // CitadelAbilityVData
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CCitadel_Modifier_CritShotVData {
            constexpr std::ptrdiff_t  = 0x8f2ee870; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // àË.è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VisibleDuration {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_VisibleDuration = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_StreetBrawl_Phase_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CNodeEnt {
            constexpr std::ptrdiff_t  = 0x8fea8658; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t CAI_EnemyServices = 0x0; // 
        }

        // Parent: m_PredNetUInt16Variables
        // Fields: 0
        namespace CAnimGraphNetworkedVariables {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Bebop_Hook {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_Modifier_DragonFireGroundAuraVData = 0x890; // 
            constexpr std::ptrdiff_t 0]/è˝ = 0x0; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_DragonFireGroundAuraVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_MetalSkin {
            constexpr std::ptrdiff_t  = 0x8d1d2820; // CCitadel_Item
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2dd028; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f2dd0f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFuncPropRespawnZone {
            constexpr std::ptrdiff_t  = 0x9005e5f0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Mirage_FireScarabs_HealthLoss {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t 0C˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Thumper_3 {
            constexpr std::ptrdiff_t  = 0x8ffbeb70; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Gravity_Lasso {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Visuals = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_BellAura = 0x108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_DeathTax {
            constexpr std::ptrdiff_t  = 0x8f5bde30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6386d0; // CCitadel_Ability_StaticCharge_V2_VData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Afterburn_DOT {
            constexpr std::ptrdiff_t  = 0x8ff99120; // CCitadel_Modifier_Burning
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FlameDashBurn {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ice_Dome_Blocker = 0xaa0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_ArcaneMedallion_VData {
            constexpr std::ptrdiff_t  = 0x90248d28; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // p®1è˝
        }

        // Parent: None
        // Fields: 5
        namespace CFilterModel {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterModel = 0x4e0; // 
            constexpr std::ptrdiff_t ∞‚Çè˝ = 0x8fff21c8; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterModel
            constexpr std::ptrdiff_t  = 0x8f56e6f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_RifleVData {
            constexpr std::ptrdiff_t  = 0x8f7268e8; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x901fd850; // irè˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifierDoormanHotelVictimVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f5be770; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RapidFire_AirJuggle {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¿é¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Shadow_Strike_Invis {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Invis
            constexpr std::ptrdiff_t CCitadel_Modifier_DetentionAmmo = 0x490; // 
            constexpr std::ptrdiff_t '/è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpiritBurnEnemyTracker {
            constexpr std::ptrdiff_t  = 0x8fe87fa0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UIAbilityHudNotificaiton {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t UnitFilterResult = 0x90101; // 
        }

        // Parent: m_flMaxValue
        // Fields: 0
        namespace LockonTarget_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBulletRedirectVolumeVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Bubble {
            constexpr std::ptrdiff_t  = 0x8fe85670; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1ce990; // 
        }

        // Parent: None
        // Fields: 5
        namespace CItem_GreaterWitheringWhip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t CModifierDelayedStunVData = 0x830; // 
            constexpr std::ptrdiff_t `é0è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CModifierDelayedStunVData
            constexpr std::ptrdiff_t  = 0x8f326058; // CCitadel_Modifier_MysticReverbExplosionVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InMenu {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_InMenu = 0xd8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PermanentPickup {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_PowerUp
            constexpr std::ptrdiff_t CCitadel_Modifier_PermanentPickup = 0xd8; // 
            constexpr std::ptrdiff_t  = 0x0; // PJÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CNavSpaceInfo {
            constexpr std::ptrdiff_t  = 0x8ff70b90; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysSlideConstraint {
            constexpr std::ptrdiff_t  = 0x900441c0; // CPhysConstraint
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8edf50; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseGameBlackboard {
            constexpr std::ptrdiff_t  = 0x8ffe8850; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSoundEventEntityAlias_snd_event_point {
            constexpr std::ptrdiff_t  = 0x0; // CSoundEventEntity
            constexpr std::ptrdiff_t PointTemplateOwnerSpawnGroupType_t = 0x10404; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Boho_DamageShare_VData {
            constexpr std::ptrdiff_t  = 0x90645dc8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_airheart_alt_weapon = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff7fcc8; // CCitadel_Ability_Airheart_AltWeapon
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_StackingDefenseVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Drifter_HungerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_Darkness {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5ab380; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_VampireBat_DoubleDaggerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_trapper_spidershield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_HighAlert {
            constexpr std::ptrdiff_t  = 0x8f72ffb8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Opera_Ability03 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_NanoDash = 0x1658; // 
            constexpr std::ptrdiff_t (ubè˝ = 0x8ffabf90; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CloakOfOpportunityWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_BaseVData
            constexpr std::ptrdiff_t ê◊Áè˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x903646b8; // CBaseEntity
        }

        // Parent: m_vBeamAimPos
        // Fields: 0
        namespace CCitadelAbilityBeam_t {
        }

        // Parent: None
        // Fields: 0
        namespace CChoreoComponent {
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 2
        namespace CPulseCell_Value_RandomInt {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t CPulseCell_Value_RandomInt = 0x48; // 
        }

        // Parent: m_bFixedPosition
        // Fields: 4
        namespace CCitadel_Shield {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModelEntity
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
            constexpr std::ptrdiff_t  = 0x1f793400; // 
            constexpr std::ptrdiff_t x«,è˝ = 0x8f322070; // CCitadel_Modifier_MeleeCharge
        }

        // Parent: None
        // Fields: 4
        namespace CPhysicsNPCSolver {
            constexpr std::ptrdiff_t  = 0x9099a6a8; // CLogicalEntity
            constexpr std::ptrdiff_t ê+ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90042b70; // ËQw˛
            constexpr std::ptrdiff_t  = 0xa9d2e0a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidInvisVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicBeam {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f69d608; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Boho_ChannelTetherVData {
            constexpr std::ptrdiff_t  = 0x90640548; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_Affliction_VData {
            constexpr std::ptrdiff_t  = 0x800006ae; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealthSwapPrecast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f630e58; // CCitadel_Ability_RiposteTargetSelect
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityBloodShardsVData {
            constexpr std::ptrdiff_t  = 0x8f62cac0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // `Àbè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RevealTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3ae7d8; // CCitadel_Modifier_RevealTarget
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Basic_HealthRegenVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 7
        namespace CCitadel_PestilenceDroneDispenser {
            constexpr std::ptrdiff_t  = 0x8ff11c58; // CAI_CitadelNPC
            constexpr std::ptrdiff_t CNPC_Neutral_SinnersSacrifice = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5083c0; // CCitadel_PestilenceDroneDispenser
            constexpr std::ptrdiff_t  = 0x8ff11138; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5078d8; // CNPC_Neutral_Flying_Pigeon
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_hPositionKeys
        // Fields: 3
        namespace CTextureBasedAnimatable {
            constexpr std::ptrdiff_t  = 0xffffffff; // CBaseModelEntity
            constexpr std::ptrdiff_t  = 0x8f84db90; // CTextureBasedAnimatable
            constexpr std::ptrdiff_t  = 0x900010e0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_SpiritBubble {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f31ceb8; // 8n,è˝
        }

        // Parent: m_nAttachment
        // Fields: 3
        namespace CSprite {
            constexpr std::ptrdiff_t  = 0x8ff2e470; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f540220; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseMoveBehavior {
            constexpr std::ptrdiff_t  = 0x8f88c0f8; // CPathKeyFrame
        }

        // Parent: m_Radius
        // Fields: 3
        namespace CDynamicLight {
            constexpr std::ptrdiff_t  = 0x900155d0; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_PunkGoat_Tether {
            constexpr std::ptrdiff_t  = 0x8ffaa9d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_Flashbang {
            constexpr std::ptrdiff_t  = 0x8ffa73d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f69a258; // 
        }

        // Parent: m_qPostTeleportAngles
        // Fields: 3
        namespace CAbility_Drifter_ShadowMark {
            constexpr std::ptrdiff_t  = 0x8ff862d0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_RiotProtocol {
            constexpr std::ptrdiff_t  = 0x8ffbece0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f716540; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Wrecker_BoulderGrenade {
            constexpr std::ptrdiff_t  = 0x8ffc9e90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bebop_StickyBomb2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_AirheartRocketeer4VData = 0x1898; // 
            constexpr std::ptrdiff_t  +[è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FissureWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Modifiers = 0x8f5a9a08; // CCitadel_GuidedArrow_OwlModel_GraphController
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CheaterCurse {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CLogicAutoCitadel {
            constexpr std::ptrdiff_t  = 0x8fee0300; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_AbilityLifeSteal {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t m_MutedParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_MutedPlayerParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_MutedStatusParticle = 0x910; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelZapTrigger {
            constexpr std::ptrdiff_t  = 0x8d86e900; // CFuncBrush
            constexpr std::ptrdiff_t `Jw˛ = 0x8f493088; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_GoldVData = 0x7c0; // 
            constexpr std::ptrdiff_t à);è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_KillSummonVData {
            constexpr std::ptrdiff_t  = 0x8f69b100; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // pÌiè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelAbilityDruidPlantHealingTree {
            constexpr std::ptrdiff_t  = 0x8de6ee80; // CCitadelAbilityDruidBasePlant
            constexpr std::ptrdiff_t `Jw˛ = 0x8f5a1e48; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_PrimaryWeapon_Cadence {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t ELassoHoldPosition = 0x10101; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
        }

        // Parent: HÉÏ(ãÑΩeHã%X
        // Fields: 1
        namespace CAbilityRocketLauncherVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CItem_ResonantHealing_VData {
            constexpr std::ptrdiff_t  = 0x8f301378; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ®0è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tier3Boss_AoEWaveVData {
            constexpr std::ptrdiff_t  = 0x8f2f0d98; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x902160c0; // H/è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_RampSlowModifierVData {
            constexpr std::ptrdiff_t  = 0x903756c0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_base_ability = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe98c40; // CCitadel_Ability_Empty
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Base_BuildupVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f3c5b70; // 
        }

        // Parent: None
        // Fields: 5
        namespace CRotDoor {
            constexpr std::ptrdiff_t  = 0x90014820; // CBaseDoor
            constexpr std::ptrdiff_t server = 0x100ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8127a0; // 
            constexpr std::ptrdiff_t  = 0x8ff13b00; // 
        }

        // Parent: CCitadel_Ability_PowerJump
        // Fields: 4
        namespace CCitadel_Modifier_Cadence_SleepAOEVData {
            constexpr std::ptrdiff_t  = 0x9063f0a8; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CBaseDashCastAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CPathMover {
            constexpr std::ptrdiff_t  = 0x8f572a18; // CPathWithDynamicNodes
        }

        // Parent: None
        // Fields: 3
        namespace CFuncVPhysicsClip {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CrowdControl_Diminish_WatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †èÌè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Werewolf_OnTheHuntVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f72f680; // 
            constexpr std::ptrdiff_t `ræ©6 = 0x8ffc9270; // CCitadelProjectile
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VampireBat_LoveBitesProc {
            constexpr std::ptrdiff_t  = 0x8f300200; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f70f438; // 8n,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityRollingFireBallVData {
            constexpr std::ptrdiff_t  = 0x908075a8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_stomp = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ProjectMindVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_IncendiaryProjectile {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_IceDomeModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t ¿t˘è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_FlameDashVData {
            constexpr std::ptrdiff_t  = 0x90729e58; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_RocketBoosterVData {
            constexpr std::ptrdiff_t  = 0x8f302930; // CCitadel_UtilityUpgrade_RocketBootsVData
            constexpr std::ptrdiff_t  = 0x9021a690; // X)0è˝
            constexpr std::ptrdiff_t †°Èè˝ = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ClimbRopeSlow {
            constexpr std::ptrdiff_t  = 0x8fe988f0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 7
        namespace CCitadelPlayerPawnBase {
            constexpr std::ptrdiff_t  = 0x0; // CBasePlayerPawn
            constexpr std::ptrdiff_t 8Pw˛ = 0x8f4afc60; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x8f4afc70; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f4afc80; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8f4afc90; // 
            constexpr std::ptrdiff_t CCitadelPlayerPawnBase = 0xd70; // 
            constexpr std::ptrdiff_t  = 0x8feefcd0; // –¨ıè˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelDevTrigger {
            constexpr std::ptrdiff_t  = 0x8fed0638; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerTrooperShrineJumpVolume = 0x0; // 
            constexpr std::ptrdiff_t  = 0x1f793400; // 
            constexpr std::ptrdiff_t  = 0x7074faf0; // 
            constexpr std::ptrdiff_t  = 0xa9c1fd40; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_KothComebackBonuses {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_KothComebackBonuses = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Link {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t m_AmbientParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 5
        namespace CPhysFixed {
            constexpr std::ptrdiff_t  = 0x0; // CPhysConstraint
            constexpr std::ptrdiff_t CPhysFixed = 0x528; // 
            constexpr std::ptrdiff_t  = 0x90044ac8; // `0ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPhysFixed
            constexpr std::ptrdiff_t coord = 0x0; // MNetworkEnable
        }

        // Parent: None
        // Fields: 4
        namespace CLogicNavigation {
            constexpr std::ptrdiff_t  = 0x90992e08; // CLogicalEntity
            constexpr std::ptrdiff_t 'ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x900326f0; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9d2d6e0; // 
        }

        // Parent: m_pathString
        // Fields: 2
        namespace CPathSimple {
            constexpr std::ptrdiff_t  = 0x8ff69fb0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30110; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPathParticleRopeAlias_path_particle_rope_clientside {
            constexpr std::ptrdiff_t  = 0x0; // CPathParticleRope
            constexpr std::ptrdiff_t CMarkupVolumeWithRef = 0x7e8; // 
            constexpr std::ptrdiff_t ∏oXè˝ = 0x90033688; // 0àˆè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NeutralAgro {
            constexpr std::ptrdiff_t  = 0x8fed02f8; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadelClimbRopeTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Familiar_Ability02VData {
            constexpr std::ptrdiff_t  = 0x90736c98; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x8f637368; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Swan_FeatherBoomerangVData {
            constexpr std::ptrdiff_t  = 0x800006a1; // CitadelAbilityVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fear {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SleepDagger {
            constexpr std::ptrdiff_t  = 0x8f634e90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 1
        namespace CItem_FleetfootBoots_VData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireRateAuraVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Inhibitor_Proc {
            constexpr std::ptrdiff_t  = 0x8f2e4de8; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Modifier_CrushingFistsDebuff_VData = 0x840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ReturnFire {
            constexpr std::ptrdiff_t  = 0x8d211490; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f31d0c0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ArcticBlast_Freeze {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x1f7934f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Objective_HealthGrowth {
            constexpr std::ptrdiff_t  = 0x8fe973d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Invis {
            constexpr std::ptrdiff_t  = 0x8fe8fc80; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x201ff; // 
        }

        // Parent: ®Ow˛
        // Fields: 2
        namespace CCitadelModifierTier2BossAoeWaveAuraVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x9021a690; // CCitadel_Item_Bubble
        }

        // Parent: m_vBoxMins
        // Fields: 2
        namespace CEnvWindVolume {
            constexpr std::ptrdiff_t  = 0x8ff1f740; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Fencer_ThrowBladeVData {
            constexpr std::ptrdiff_t  = 0x8f627670; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9062a220; // 0ábè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelFamiliarClone_MovementServices {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelPlayer_MovementServices
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f61db80; // 
        }

        // Parent: m_vTargetPosition
        // Fields: 2
        namespace CCitadel_Ability_Mirage_Teleport {
            constexpr std::ptrdiff_t  = 0x8ffa5e90; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCadenceAnthemVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: Visuals
        // Fields: 2
        namespace CCitadel_Ability_Vandal_PillarVData {
            constexpr std::ptrdiff_t  = 0x8f710dc0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ‡qè˝
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 2
        namespace CCitadel_Ability_GuidedArrow {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f5a2d18; // 8n,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ChainLightningVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x90248d28; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x9021a690; // p®1è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_GuardianWard {
            constexpr std::ptrdiff_t  = 0x902ed4c0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Shield = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AblativeCoatResistBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9024a418; // CitadelItemVData
        }

        // Parent: m_eType
        // Fields: 0
        namespace PlayOfTheGameTrigger_t {
        }

        // Parent: None
        // Fields: 4
        namespace CFuncElectrifiedVolume {
            constexpr std::ptrdiff_t  = 0x0; // CFuncBrush
            constexpr std::ptrdiff_t pAê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90034160; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9d2d890; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItemMysticReverb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t m_nNumStacks = 0x11f8; // int32
            constexpr std::ptrdiff_t  = 0x8f305f78; // CCitadel_Item
        }

        // Parent: None
        // Fields: 4
        namespace CAI_VolumetricEventEntityAlias_ai_sound {
            constexpr std::ptrdiff_t  = 0x0; // CAI_VolumetricEventEntity
            constexpr std::ptrdiff_t CAI_VolumetricEventEntityAlias_ai_sound = 0x4c0; // 
            constexpr std::ptrdiff_t  = 0x8febf2d8; // »Îè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CAI_VolumetricEventEntityAlias_ai_sound
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PriestKnockbackVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: 0ß¸è˝
        // Fields: 1
        namespace CCitadel_Ability_Trapper_PoisonJarVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_CardTossCard_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ImmobilizeTrap {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Drifter_Darkness_VData = 0x1a28; // 
            constexpr std::ptrdiff_t ∏;/è˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_HeroTestOrbSpawnerVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: colorSecondary
        // Fields: 0
        namespace fogparams_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PatronsBlessingAura {
            constexpr std::ptrdiff_t  = 0x8f31b6f8; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_Upgrade_OverdriveClip = 0x158; // 
            constexpr std::ptrdiff_t Ä∂1è˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Item_Stasis_Bomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_Bubble
            constexpr std::ptrdiff_t  = 0x8f2f4170; // CCitadel_Item_Discord_AuraVData
            constexpr std::ptrdiff_t  = 0x8fe8aff0; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // Sç˝
            constexpr std::ptrdiff_t  = 0x8d1d3590; // 
        }

        // Parent: m_flRadius
        // Fields: 1
        namespace CSoundEventOBBEntity {
            constexpr std::ptrdiff_t  = 0x8f5318b0; // CSoundEventEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_HauntingSpirits {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_VoidSphereVData = 0xb38; // 
        }

        // Parent: m_bHasTetherTarget
        // Fields: 3
        namespace CCitadel_Ability_Necro_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f6a6af8; // 
            constexpr std::ptrdiff_t `ﬂ˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Priest_CrossbowEquipped {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t PÇé˝ = 0x8f698660; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntityVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t –˙è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Mirage_Tornado_EvasionVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_swan_featherboomerang = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb1728; // CCitadel_Ability_Swan_FeatherBoomerang
        }

        // Parent: 0¥Èè˝
        // Fields: 2
        namespace CCitadel_Ability_Tokamak_DyingStarVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f70f9e0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Bebop_StickyBomb2VData {
            constexpr std::ptrdiff_t  = 0x80000550; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x906798b8; // CBaseEntity
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_RegenerativeArmorVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0 -è˝ = 0x0; // 
            constexpr std::ptrdiff_t ·†ÿ©6 = 0x90200920; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ClimbRopeSlowVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9038b6c8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Intrinsic_BaseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CModifierKnockdownVData
            constexpr std::ptrdiff_t  = 0xc8d; // ÕÃL>6
        }

        // Parent: m_nBodyGroup
        // Fields: 0
        namespace WeakPoint_t {
        }

        // Parent: m_eAliveState
        // Fields: 6
        namespace CNPC_Boss_Tier3 {
            constexpr std::ptrdiff_t  = 0x8ff0dd70; // CAI_CitadelNPC
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t  = 0x8f4fb7d0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dae2f70; // 
            constexpr std::ptrdiff_t ‡›è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8f4d8ea8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerMultiple {
            constexpr std::ptrdiff_t  = 0x8ff6e590; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x100ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de216a0; // 
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysBallSocket {
            constexpr std::ptrdiff_t  = 0x8f5687d8; // CPhysConstraint
            constexpr std::ptrdiff_t >ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90043eb0; // ®Ow˛
            constexpr std::ptrdiff_t  = 0xa9d2def0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CDebugHistory {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CDebugHistory = 0x3e9488; // 
        }

        // Parent: m_nMarks
        // Fields: 0
        namespace AirheartLockOnTarget_t {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_PunkGoat_Blasted {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAI_NPC_NecroSkeleVData = 0x1398; // 
            constexpr std::ptrdiff_t 8∆Lè˝ = 0x0; // @.Ìè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Priest_CrossbowWeaponVData {
            constexpr std::ptrdiff_t  = 0x90812aa8; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t featherboomerang_projectile = 0x0; // 
            constexpr std::ptrdiff_t PPAè˝ = 0x8ffb0ab8; // CCitadel_Projectile_FeatherBoomerang
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Operative_Revelation_Target {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SmokeGrenade = 0x11f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Operative_Revelation_Target_VData {
            constexpr std::ptrdiff_t  = 0x8f68d370; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ∞”hè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Warden_RiotProtocol_CastDelay {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_RadiantBlastVData = 0x1a18; // 
        }

        // Parent: m_nMeleeHits
        // Fields: 1
        namespace CCitadel_FissureWallVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ModDisruptorVData {
            constexpr std::ptrdiff_t  = 0x80000119; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // –.è˝
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_LeechHealbane_Debuff {
            constexpr std::ptrdiff_t  = 0x8f31b680; // CCitadelModifier
        }

        // Parent: Sounds
        // Fields: 2
        namespace CCitadel_KothCashInVData {
            constexpr std::ptrdiff_t  = 0x904ebec0; // CCitadel_MultiCapturePointVData
            constexpr std::ptrdiff_t 
Ûè˝ = 0x8f4cd358; // 
        }

        // Parent: m_iszOpvarName
        // Fields: 2
        namespace CSoundOpvarSetPointBase {
            constexpr std::ptrdiff_t  = 0x8f540a70; // CBaseEntity
            constexpr std::ptrdiff_t  = 0x8f540a88; // 
        }

        // Parent: None
        // Fields: 0
        namespace CExplosionTypeData {
        }

        // Parent: None
        // Fields: 4
        namespace CPathKeyFrame {
            constexpr std::ptrdiff_t  = 0x900350a0; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8c5aa0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_FamiliarPrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x90720048; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t ‡Sbè˝ = 0x8f624c58; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff8e9e0; // CCitadel_Ability_PrimaryWeapon
        }

        // Parent: CAbility_Fathom_LurkersAmbush
        // Fields: 3
        namespace CAbility_Fathom_LurkersAmbush {
            constexpr std::ptrdiff_t  = 0x8ff9f710; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fathom_Breach {
            constexpr std::ptrdiff_t  = 0x8e1244f0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t †˝˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8ffaf980; // ®Ow˛
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Base_DOT {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_Burning
            constexpr std::ptrdiff_t m_HeadshotDebuffModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ImpactParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Modifier_Galvanic_Storm {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Modifier_ChainLightning
            constexpr std::ptrdiff_t HÉÏ(ã∂ÚöeHã%X = 0x8f2f4108; // CCitadel_Ability_Tier2Boss_LaserBeamVData
            constexpr std::ptrdiff_t  = 0x8fe88400; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // PRç˝
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNPC_TrooperNeutralNodeMoverVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_TrooperNeutralVData
            constexpr std::ptrdiff_t  = 0xc988670; // 
            constexpr std::ptrdiff_t ÕBê˝ = 0xfd; // 
        }

        // Parent: None
        // Fields: 5
        namespace CScriptTriggerPush {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerPush
            constexpr std::ptrdiff_t CScriptTriggerPush = 0x928; // 
            constexpr std::ptrdiff_t ‹çè˝ = 0x90072bd8; // `(ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CScriptTriggerPush
            constexpr std::ptrdiff_t  = 0x8f5920a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAITestPath {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CAITestPath = 0x4b0; // 
            constexpr std::ptrdiff_t P·Nè˝ = 0x8ff093e0; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 4
        namespace CRevertSaved {
            constexpr std::ptrdiff_t  = 0x90067130; // CModelPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9b3b10; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Operative_Blindside_VData {
            constexpr std::ptrdiff_t  = 0x90813f48; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityThumper3VData {
            constexpr std::ptrdiff_t  = 0x800007ad; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityTokamakRadianceVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Lockdown_BulletResist {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData = 0x7d0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Spin {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÜN’eHã%X = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SleepDagger_Asleep {
            constexpr std::ptrdiff_t  = 0x8dfc6e00; // CCitadel_Modifier_Sleep
            constexpr std::ptrdiff_t `Jw˛ = 0x8f633430; // 
            constexpr std::ptrdiff_t m_nFXIndex = 0xf70; // ParticleIndex_t
        }

        // Parent: `Jw˛
        // Fields: 5
        namespace CCitadel_Modifier_MysticShotVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t ÿ»/è˝ = 0x0; // 
            constexpr std::ptrdiff_t upgrade_celestial_guidance = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe7a198; // CCitadel_Item_CelestialGuidance
            constexpr std::ptrdiff_t upgrade_metal_skin = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData {
            constexpr std::ptrdiff_t  = 0x8f328fd8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Glitch {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_GritVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierObscuredVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
        }

        // Parent: CNPC_FieldSentry
        // Fields: 5
        namespace CNPC_FieldSentry {
            constexpr std::ptrdiff_t  = 0x8ff0e5b0; // CNPC_SimpleAnimatingAI
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t  = 0x8f4fc738; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dae64e0; // 
            constexpr std::ptrdiff_t  = 0x8ff11348; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_SpiderAnimating {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t Modifiers = 0x8ffbb6b0; // 
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerHurt {
            constexpr std::ptrdiff_t  = 0x8f592430; // CBaseTrigger
            constexpr std::ptrdiff_t  = 0x8f592440; // 
            constexpr std::ptrdiff_t  = 0x8f524b60; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ShadowClone {
            constexpr std::ptrdiff_t  = 0x8e118370; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f696fb8; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Pickup_Gold {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadel_Pickup_Gold = 0xb20; // 
            constexpr std::ptrdiff_t ¿[Bè˝ = 0x8fec93f0; // 0ÄÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Pickup_Gold
            constexpr std::ptrdiff_t  = 0xc; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_MagicianTurret {
            constexpr std::ptrdiff_t  = 0x8ffa0dc0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e10d370; // 
            constexpr std::ptrdiff_t 0˙è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_HeroTestOrbSpawner {
            constexpr std::ptrdiff_t  = 0x8fefe2b0; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8da06990; // 
        }

        // Parent: None
        // Fields: 4
        namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            constexpr std::ptrdiff_t  = 0x0; // CEnvSoundscapeTriggerable
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = 0x530; // 
            constexpr std::ptrdiff_t  = 0x8ff344e0; // `˜ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_AutoCleanse {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t HÉÏ(ã∆KöeHã%X = 0xa9e52800; // 
            constexpr std::ptrdiff_t Æ,è˝ = 0x8fe71b60; // 
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8⁄rè˝ = 0x90894cf8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_Ghoul_ExplodeVData {
            constexpr std::ptrdiff_t  = 0x907b6688; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x908218e8; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Doorman_Doorway_VData {
            constexpr std::ptrdiff_t  = 0x80000547; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_GarbageAuraTarget {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t Modifiers = 0x8f426ee0; // 
            constexpr std::ptrdiff_t +Stone Form Params = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Item_HealthNova {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BloodTribute {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Bubble = 0x1f8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_WarpStone_Caster_VData {
            constexpr std::ptrdiff_t  = 0x8f324e30; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // HN2è˝
        }

        // Parent: None
        // Fields: 3
        namespace CTrooperApproachHorizon {
            constexpr std::ptrdiff_t  = 0x8fedc078; // CServerOnlyEntity
            constexpr std::ptrdiff_t CCitadel_DynamicProp = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f46c660; // CTrooperApproachHorizon
        }

        // Parent: None
        // Fields: 2
        namespace CTeamplayRules {
            constexpr std::ptrdiff_t  = 0x8ff2f280; // CMultiplayRules
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 5
        namespace CScriptTriggerHurt {
            constexpr std::ptrdiff_t  = 0x0; // CTriggerHurt
            constexpr std::ptrdiff_t  = 0x8f8df158; // CFuncTrainControls
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t CScriptTriggerHurt = 0x978; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Warden_RiotProtocol {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ¯Mw˛ = 0x8f7147d0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BoloVData {
            constexpr std::ptrdiff_t  = 0x9078b008; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f61f620; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Xˆaè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ArcticBlastAOE_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x903342e8; // CCitadel_Modifier_SilencedVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Neutral_Debuff_Pushback {
            constexpr std::ptrdiff_t  = 0x8f3c4f0c; // CCitadelModifier
            constexpr std::ptrdiff_t êåÈè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Pickup_Currency {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadel_Pickup_Currency = 0xb20; // 
            constexpr std::ptrdiff_t  qBè˝ = 0x8fec9af0; // 0ÄÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Pickup_Currency
            constexpr std::ptrdiff_t  = 0x8f427530; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerDetectExplosion {
            constexpr std::ptrdiff_t  = 0x9007d738; // CBaseTrigger
            constexpr std::ptrdiff_t CTriggerPhysics = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8df6d8; // CTriggerDetectExplosion
            constexpr std::ptrdiff_t  = 0x90073d08; // 
        }

        // Parent: None
        // Fields: 5
        namespace CFilterName {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterName = 0x4e0; // 
            constexpr std::ptrdiff_t `kQè˝ = 0x8fff2198; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterName
            constexpr std::ptrdiff_t  = 0x8f82e568; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_GooseEgg {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Item
            constexpr std::ptrdiff_t m_vecOrigin = 0x108; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMins = 0x114; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMaxs = 0x120; // Vector
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Fencer_Ultimate_VData {
            constexpr std::ptrdiff_t  = 0x8f61f620; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Xˆaè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_FamiliarAltWeaponVData {
            constexpr std::ptrdiff_t  = 0x8f626528; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x901fe630; // Pebè˝
        }

        // Parent: m_ExplodeParticle
        // Fields: 2
        namespace CCitadel_Ability_Doorman_Bomb_VData {
            constexpr std::ptrdiff_t  = 0x8f5b6f48; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ho[è˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Priest_CrossbowWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Modifier_CopyUlt = 0x1c0; // 
            constexpr std::ptrdiff_t ®bè˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_CopyUlt
        }

        // Parent: CAbility_Mirage_Tornado
        // Fields: 3
        namespace CAbility_Mirage_Tornado {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Modifiers = 0x8f2c6e38; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_SleepingVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ê8˜è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Cadence_Lullaby {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifire_Bookworm_DragonFire = 0x1d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Wrecker_Salvage {
            constexpr std::ptrdiff_t  = 0x8ffb8890; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_StickyBombOnGround {
            constexpr std::ptrdiff_t  = 0x906652b0; // CCitadel_Modifier_StickyBombAttached
            constexpr std::ptrdiff_t CCitadel_Ability_Shotgun_Astro = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5a5da0; // 
        }

        // Parent: m_eRollingState
        // Fields: 3
        namespace CCitadel_Ability_GooBowlingBall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_TargetPreviews = 0xf90; // CUtlVector<ParticleIndex_t>
            constexpr std::ptrdiff_t m_bAirCast = 0xfa8; // bool
        }

        // Parent: None
        // Fields: 3
        namespace CModifierLashGrappleEnemyDebuffVData {
            constexpr std::ptrdiff_t  = 0x8f632e70; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ò.cè˝
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RunedGauntlets {
            constexpr std::ptrdiff_t  = 0x8f2dd1d8; // CCitadel_Modifier_BaseEventProc
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LifestrikeGauntlets {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_AoEWave = 0x1100; // 
            constexpr std::ptrdiff_t  = 0x8fe80158; // êÑËè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CQC_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SpiritSnatch {
            constexpr std::ptrdiff_t  = 0x902b3c20; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CItemMysticReverb = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f3283c8; // CCitadel_Modifier_Spiritburn_DOT
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Push {
            constexpr std::ptrdiff_t  = 0x8f3aafd0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f3b2118; // CitadelAbilityProjectileHitInfo_t
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_InvisVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 0
        namespace COrbSpawnerBounty_t {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Upgrade_WeaponPowerForHealth {
            constexpr std::ptrdiff_t  = 0x902710a0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_DamageRecycler = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2e7690; // CModifier_Upgrade_ArcaneSurge_AbilityWatcher
            constexpr std::ptrdiff_t  = 0x8fe6cfd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_KickFlipVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f729f20; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData {
            constexpr std::ptrdiff_t  = 0x9063dc08; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90699068; // CCitadel_Ability_PrimaryWeaponVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Targetdummy_1 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Protection_RacketVData = 0x1908; // 
            constexpr std::ptrdiff_t HÏqè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireBomb_Buff {
            constexpr std::ptrdiff_t  = 0x8f2e4f28; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_BulletArmorShredder_Proc {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8f2ee160; // CCitadel_Modifier_IcarusWingsVData
            constexpr std::ptrdiff_t  = 0x8fe7d4f0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierQuarantineVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ∏Y.è˝ = 0x8f2e4f00; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe7a970; // CCitadel_Item
        }

        // Parent:  ÃÎè˝
        // Fields: 0
        namespace CPulseAIVolumetricEventAPI {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_RegeneratingBulletShield {
            constexpr std::ptrdiff_t  = 0x8d1ca240; // CCitadel_Item
            constexpr std::ptrdiff_t m_BuffModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_StackSound = 0x18c8; // CSoundEventName
            constexpr std::ptrdiff_t m_AmmoSound = 0x18d8; // CSoundEventName
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CP_Capturer {
            constexpr std::ptrdiff_t  = 0x8fef8c00; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierPowerGeneratorVData {
            constexpr std::ptrdiff_t  = 0x8f46dcd8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90454720; // ‹Fè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Hideout_ClockVData {
            constexpr std::ptrdiff_t  = 0x90415b90; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
            constexpr std::ptrdiff_t  = 0x9092ee18; // CCitadelModifierVData
            constexpr std::ptrdiff_t ` ¸è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Vandal_Pillar {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CModifierRiotCastDelayVData = 0x760; // 
            constexpr std::ptrdiff_t 8Y.è˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Viper_DebuffDaggerVData {
            constexpr std::ptrdiff_t  = 0x8f71a708; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Hßqè˝
        }

        // Parent: Sounds
        // Fields: 2
        namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_shieldguy_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckingBall_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t Pö¸è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Bomber_ULT {
            constexpr std::ptrdiff_t  = 0x8f5b2710; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0x716b01b0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest04VData {
            constexpr std::ptrdiff_t  = 0x8000003a; // CCitadel_Item_ProjectileTestVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8d3678b0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Boho_BouncyProjectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t HÉÏ(ãˆ∞—eHã%X = 0x8f5b6258; // CProjectile_Airheart_FloatingBomb
            constexpr std::ptrdiff_t  = 0x8ff834d0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
            constexpr std::ptrdiff_t  = 0x906c4f00; // CCitadel_Modifier_Link
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Doorway = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5bb470; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_FocusLens {
            constexpr std::ptrdiff_t  = 0x8f2f8b80; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t m_flCurrentThinkRate = 0x1d8; // float32
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05VData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T2Boss_AoeWaveAura {
            constexpr std::ptrdiff_t  = 0x8d236b50; // CCitadelModifierAura
            constexpr std::ptrdiff_t `Jw˛ = 0x8f2ee1e8; // 
            constexpr std::ptrdiff_t 8Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_SuperAcolytesGlove {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t  = 0x8fe858b0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CItemSingleTargetStunVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 4
        namespace CRulePointEntity {
            constexpr std::ptrdiff_t  = 0x0; // CRuleEntity
            constexpr std::ptrdiff_t CRulePointEntity = 0x790; // 
            constexpr std::ptrdiff_t êçXè˝ = 0x90032898; // ∞ˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CRulePointEntity
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier2Weakened {
            constexpr std::ptrdiff_t  = 0x8f4efb48; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t  = 0x8f3c2598; // 
            constexpr std::ptrdiff_t  = 0x8f4efb78; // 
        }

        // Parent: m_ModifierCheatDeathActivated
        // Fields: 2
        namespace CCitadel_Ability_Necro_GraveStoneVData {
            constexpr std::ptrdiff_t  = 0x800006f6; // CitadelAbilityVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x907cdc08; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_DamageShare {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Sleeping = 0x200; // 
            constexpr std::ptrdiff_t  = 0x0; // 0∂Áè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Boho_DamageShareVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f5baf20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntity {
            constexpr std::ptrdiff_t  = 0x90858ca0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_SelfVacuum = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
            constexpr std::ptrdiff_t  = 0x8f68e668; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // êÊhè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_PlasmaFlux_VData {
            constexpr std::ptrdiff_t  = 0x8f68b9b0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // »πhè˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifierRiotProtocolEnemyDebuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_tengu_airlift = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb9700; // CCitadel_Ability_Tengu_AirLift
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TetherNoConnection {
            constexpr std::ptrdiff_t  = 0x9091c600; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t CCitadel_Ability_WreckingBall = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f313e80; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ComboBreakerVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t 0Áè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WeaponPowerForHealth {
            constexpr std::ptrdiff_t  = 0x8fe8ab20; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_T3Phase1VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_CallInfo {
        }

        // Parent: None
        // Fields: 4
        namespace CFuncMoveLinearAlias_momentary_door {
            constexpr std::ptrdiff_t  = 0x0; // CFuncMoveLinear
            constexpr std::ptrdiff_t  = 0x8f874170; // CFuncMoveLinearAlias_momentary_door
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: m_bAnimGraphUpdateEnabled
        // Fields: 3
        namespace CBaseAnimGraph {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CBaseAnimGraph = 0xa90; // 
            constexpr std::ptrdiff_t 0KVè˝ = 0x8ffe9fd8; // êrıè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_TangoTether_Trigger {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseTriggerAbility
            constexpr std::ptrdiff_t HÉÏ(ãäíeHã%X = 0xa9e52840; // 
            constexpr std::ptrdiff_t Æ,è˝ = 0xa9e52840; // 
            constexpr std::ptrdiff_t  = 0xa9e52800; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Projectile_Petrify {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_MaulingLeap = 0x1280; // 
            constexpr std::ptrdiff_t cqè˝ = 0x8ffc7a20; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Werewolf_MaulingLeap
        }

        // Parent: CCitadelBaseTriggerAbility
        // Fields: 3
        namespace CCitadelBaseTriggerAbility {
            constexpr std::ptrdiff_t  = 0x8fed4ad0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x8f4603c0; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x2; // 
        }

        // Parent: m_flFogFalloffExponent
        // Fields: 2
        namespace CEnvCubemapFog {
            constexpr std::ptrdiff_t  = 0x8ff16bd0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Fencer_Lunge_VData {
            constexpr std::ptrdiff_t  = 0x9075ade8; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_static_charge = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Doorman_Bomb_Debuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f5b6258; // 
        }

        // Parent: m_ExplodeParticle
        // Fields: 2
        namespace CCitadel_Ability_Priest_SilenceBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x8f691eb8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChargePullEnemy {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t m_empWaveParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Chrono_TimeWall_Effect {
            constexpr std::ptrdiff_t  = 0x90639ff0; // CCitadelModifier
            constexpr std::ptrdiff_t CProjectile_Airheart_FloatingBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_RocketBarrage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Gun_Spikes = 0x1d8; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Afterburn_DOT_VData {
            constexpr std::ptrdiff_t  = 0x80000600; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e0d34d0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_GooseEggPassiveGold {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05VData = 0x18d8; // 
            constexpr std::ptrdiff_t  = 0x0; // ‡9Áè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HeroUpgradeBonuses {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_UIAbilityHudNotificaiton = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t  = 0x900d0590; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Pickup_Modifier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadel_Pickup_Modifier = 0xb10; // 
            constexpr std::ptrdiff_t  = 0x8fec99d8; // 0ÄÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Pickup_Modifier
            constexpr std::ptrdiff_t m_unItemID = 0xb10; // CUtlStringToken
        }

        // Parent: None
        // Fields: 3
        namespace CBaseDoor {
            constexpr std::ptrdiff_t  = 0x8ff62080; // CBaseToggle
            constexpr std::ptrdiff_t server = 0x8f576ad0; // 
            constexpr std::ptrdiff_t – ˆè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_LuggageDragVData {
            constexpr std::ptrdiff_t  = 0x80000525; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa9940; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Magician_AnimalHexArea {
            constexpr std::ptrdiff_t  = 0x8f3a7798; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6aff90; // CNPC_NecroSkele
            constexpr std::ptrdiff_t  = 0x8ff9be90; // 
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_PillarVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Viper_Venom {
            constexpr std::ptrdiff_t  = 0x8e26c3e0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t m_LaserShot = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ChargeParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Astro_ShotgunBuff {
            constexpr std::ptrdiff_t  = 0x8f5a4e20; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ã∂”eHã%X = 0x8de7a5a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MobileResupplyVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_SiphonBullets_RestoreHealth {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t m_nBonusMaxClipSize = 0xd0; // int32
        }

        // Parent: None
        // Fields: 3
        namespace CServerOnlyPointEntity {
            constexpr std::ptrdiff_t  = 0x0; // CServerOnlyEntity
            constexpr std::ptrdiff_t CServerOnlyPointEntity = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x90006780; // @yıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_BookwormGun {
            constexpr std::ptrdiff_t  = 0x8ff79f80; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de63be0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_MysticalPianoAura {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifierAura
            constexpr std::ptrdiff_t @_Ïè˝ = 0x8f2cd848; // 
            constexpr std::ptrdiff_t  = 0x1f7934a0; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9e52840; // 
        }

        // Parent: CCitadel_Upgrade_MagicCarpet
        // Fields: 3
        namespace CCitadel_Upgrade_MagicCarpet {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f30b078; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t  = 0x8f30c6a8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelModifierAura_Cylinder {
            constexpr std::ptrdiff_t  = 0x8f2c7dd0; // CCitadelModifierAura
            constexpr std::ptrdiff_t Space separated set of classes to add to the panel (ex: "medium superCool noMiddle" = 0x0; // 
            constexpr std::ptrdiff_t CCitadelModifierAura_Cylinder = 0x108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifierVData_BaseAura {
            constexpr std::ptrdiff_t  = 0xf39c17c0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f63c8f8; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffd3610; // CBaseEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Familiar_AttachVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ¯Ìbè˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Boho_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t CCitadel_Ability_Cadence_GrandFinale = 0x1070; // 
            constexpr std::ptrdiff_t  = 0x8ff77a58; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Cadence_GrandFinale
        }

        // Parent: m_DragonSpawnParticle
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_DragonFireVData {
            constexpr std::ptrdiff_t  = 0x80000540; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_ShockFullyCharged {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Projectile_BloodBomb = 0x890; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_IceDomeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f6356b0; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff94ee0; // CCitadel_Ability_PrimaryWeapon
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Stomp {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ∞éÈè˝ = 0x8e0f06b0; // 
            constexpr std::ptrdiff_t `Jw˛ = 0x8f68d7b8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PulseGrenade_TimeSlow {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Bookworm_Immobilize = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_EnchantedHolsters_Buff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Base
            constexpr std::ptrdiff_t CCitadel_Modifier_EscalatingExposureProcWatcherVData = 0x790; // 
            constexpr std::ptrdiff_t pŒ,è˝ = 0x0; // †°Èè˝
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Ability_Weapon_BossTier3 {
            constexpr std::ptrdiff_t  = 0x0; // CTier3BossAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_EscalatingExposure = 0x150; // 
            constexpr std::ptrdiff_t  = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_EscalatingExposure
            constexpr std::ptrdiff_t  = 0x8f31b628; // CCitadel_Modifier_Item_AOESilence_Target
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelModifierAura_Default {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0xa911c610; // 
            constexpr std::ptrdiff_t  = 0xa911c610; // 
            constexpr std::ptrdiff_t  = 0x8f3a76a8; // CCitadelModifierAura_Default
        }

        // Parent: None
        // Fields: 3
        namespace CInfoRemarkable {
            constexpr std::ptrdiff_t  = 0x8febd3e0; // CPointEntity
            constexpr std::ptrdiff_t server = 0x100ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNullEntity {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CNullEntity = 0x4a0; // 
        }

        // Parent: m_mapWerewolfAbilities
        // Fields: 1
        namespace CCitadel_Modifier_WerewolfVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Priest_ImmobilizeVData {
            constexpr std::ptrdiff_t  = 0x80000736; // CCitadel_Modifier_RootVData
            constexpr std::ptrdiff_t  ≥˙è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f6a0e98; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Operative_UmbrellaManeuver_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t rutger_force_field = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityCadencePrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x8f5a47a8; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ¿GZè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityFealtyVData {
            constexpr std::ptrdiff_t  = 0x8f71c748; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // x«qè˝
        }

        // Parent: CCitadel_Ability_UltCombo
        // Fields: 3
        namespace CCitadel_Ability_UltCombo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8ff80210; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Upgrade_AerialAssualtVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_aerial_assault = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe7f938; // CCitadel_Upgrade_AerialAssault
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CanDamageTier3Phase2 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletArmorReduction {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_BulletArmorReduction = 0x150; // 
        }

        // Parent: None
        // Fields: 3
        namespace CLogicalEntity {
            constexpr std::ptrdiff_t  = 0x8; // CServerOnlyEntity
            constexpr std::ptrdiff_t OnNetworkedAnimationChanged = 0x8f565290; // 
            constexpr std::ptrdiff_t  = 0x8f419ae8; // CLogicalEntity
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Pickup_NecroDeath {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
            constexpr std::ptrdiff_t CCitadel_Pickup_NecroDeath = 0xb20; // 
            constexpr std::ptrdiff_t  = 0x8fec98a8; // 0ÄÏè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Pickup_NecroDeath
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Pickup
        }

        // Parent: None
        // Fields: 3
        namespace CCitadelZiplinePath {
            constexpr std::ptrdiff_t  = 0x8fef7b00; // CPathParticleRope
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierItemPickupTimerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelTrackedProjectile {
            constexpr std::ptrdiff_t  = 0x90085bf0; // CCitadelProjectile
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ebcce20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItemGenericTriggerHelper {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CItemGenericTriggerHelper = 0x788; // 
            constexpr std::ptrdiff_t ¯>Xè˝ = 0x90034518; // êrıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Necro_ZombieWall {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x907a0d70; // `Jw˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Fathom_ScaldingSpray_VData {
            constexpr std::ptrdiff_t  = 0x8f6a5970; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ÄYjè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ViperVenomProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x80000817; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e3a1de0; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 4
        namespace CModifierPsychicLiftVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_StunnedVData
            constexpr std::ptrdiff_t  = 0x8f72da38; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ffca320; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8000083d; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_CQC_Proc {
            constexpr std::ptrdiff_t  = 0x8fe759f0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HealingPulse_Tracker {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ColdFrontAOE_VData {
            constexpr std::ptrdiff_t  = 0x8f3093f8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x902210c0; // 8î0è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticReverbExplosionVData {
            constexpr std::ptrdiff_t  = 0x8000002d; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff {
            constexpr std::ptrdiff_t  = 0x8f2edad8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_FreePass {
            constexpr std::ptrdiff_t  = 0x8feb9520; // CAI_Component
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ItemPickupAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAura = 0x110; // 
            constexpr std::ptrdiff_t  = 0x0; // PcÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_ItemPickupAura
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Airheart_Ult {
            constexpr std::ptrdiff_t  = 0x8de5d240; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_SlowModifier = 0x780; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_strWeaponShootSound = 0x790; // CSoundEventName
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_MageWalkVData {
            constexpr std::ptrdiff_t  = 0x8f6a74c0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // ÿtjè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Intimidated {
            constexpr std::ptrdiff_t  = 0x8ff81b40; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifierStormCloudVData {
            constexpr std::ptrdiff_t  = 0x9070ebf8; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9062b760; // cè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Item_SmokeBomb_PreCast {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CModifier_SiphonBullets_RestoreHealth = 0xd8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BurstFire_Actuator {
            constexpr std::ptrdiff_t  = 0x8f2cce70; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f323378; // Hÿ,è˝
        }

        // Parent: m_vecAbilities
        // Fields: 0
        namespace AbilityResource_t {
        }

        // Parent: m_bFreezePeriod
        // Fields: 2
        namespace CCitadelTrooperMinimap {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t  0Çç˝ = 0x8f484e20; // ∏h
        }

        // Parent: m_hLastWeapon
        // Fields: 1
        namespace CPlayer_WeaponServices {
            constexpr std::ptrdiff_t  = 0x8ffffb50; // CPlayerPawnComponent
        }

        // Parent: m_attachmentPointBoneSpace
        // Fields: 4
        namespace CRagdollPropAttached {
            constexpr std::ptrdiff_t  = 0x8f8a9600; // CRagdollProp
            constexpr std::ptrdiff_t Get the current rotation speed (deg/s) of the attached object about the motor's axis. May differ from the motor's target speed. = 0x8e8edb20; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t CPhysMotorAPI::SetSpinUpTime = 0x8f8a9700; // 
        }

        // Parent: None
        // Fields: 4
        namespace CFuncPlat {
            constexpr std::ptrdiff_t  = 0x909c2b20; // CBasePlatTrain
            constexpr std::ptrdiff_t CInfoLandmark = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f8df568; // 
            constexpr std::ptrdiff_t CFuncPlat = 0x830; // 
        }

        // Parent: m_nColorMode
        // Fields: 1
        namespace CBarnLight {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_HideoutIntro {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_HideoutIntro = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInstructorEventEntity {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Drifter_Darkness_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x90680228; // CCitadel_Ability_PrimaryWeapon_GraphController
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Cadence_AnthemBuffVData {
            constexpr std::ptrdiff_t  = 0x9068a470; // CCitadelModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x90674198; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tengu_Urn {
            constexpr std::ptrdiff_t  = 0x8e259f70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t `Jw˛ = 0x8f727430; // 
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_4 = 0xf70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ThrowSand {
            constexpr std::ptrdiff_t  = 0x8f5a3268; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Camera = 0x8f2c6e38; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EnchantedHolsters_Watcher_VData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadel_Modifier_Intrinsic_BaseVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_TechOverflowProcWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t JËè˝ = 0x0; // 
            constexpr std::ptrdiff_t  ØÈè˝ = 0x90289d78; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ApplyModifierOnDamageTaken {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CModifierNonPlayerCameraSettingsVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_RootVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CInfoHeroTestingPoint {
            constexpr std::ptrdiff_t  = 0x8fecdc00; // CPointEntity
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
            constexpr std::ptrdiff_t  = 0x902b12e0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Item_TechDamagePulse = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f31d068; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Unstick {
            constexpr std::ptrdiff_t  = 0x8f3ae8a0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t  = 0x8f3aa0f8; // CCitadelModifierAura_Cylinder
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPathCorner {
            constexpr std::ptrdiff_t  = 0x8f2dca7c; // CPointEntity
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Fortuna_Ability02 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f622f00; // CCitadel_Ability_GenericPerson_4
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Perched_Predator {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_MagicianTurret_GraphController = 0xe0; // 
            constexpr std::ptrdiff_t »∆Zè˝ = 0x0; // †ªıè˝
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityDashVData {
            constexpr std::ptrdiff_t  = 0x8f2c7660; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // xv,è˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_DiminishingSlowVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_NeutralSinnerSacrificeHideoutVData {
            constexpr std::ptrdiff_t  = 0x90438a38; // CNPC_NeutralSinnerSacrificeVData
            constexpr std::ptrdiff_t  = 0x904393b0; // CBaseAnimGraph
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerSndSosOpvar {
            constexpr std::ptrdiff_t  = 0x8ff6e8f0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de21f20; // 
            constexpr std::ptrdiff_t m_worldGroupId = 0x4a0; // WorldGroupId_t
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Rutger_ForceField_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Modifier_VoidSphereBuffVData = 0x830; // 
            constexpr std::ptrdiff_t ‡_.è˝ = 0x0; // ØÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Modifier_VoidSphereBuffVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Cadence_SilenceContraptions {
            constexpr std::ptrdiff_t  = 0x8f2e2718; // CCitadelBaseDashCastAbility
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff830c0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Fencer_Ultimate_Caster {
            constexpr std::ptrdiff_t  = 0x8f637390; // CCitadelModifier
            constexpr std::ptrdiff_t `ˇç˝ = 0x8f6393f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_StaticChargeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Backstabber_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_infinitemagazine = 0x0; // 
        }

        // Parent: m_nLimitCount
        // Fields: 2
        namespace CPulseCell_LimitCount {
            constexpr std::ptrdiff_t  = 0x900d01c0; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_CallExternalMethod {
            constexpr std::ptrdiff_t  = 0x900cbd30; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: CCitadel_Ability_MobileResupply
        // Fields: 5
        namespace CCitadel_MobileResupply {
            constexpr std::ptrdiff_t  = 0x8f328330; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t  = 0x0; // 8n,è˝
            constexpr std::ptrdiff_t CAbilityCadenceCrescendoVData = 0x1828; // 
            constexpr std::ptrdiff_t hÍZè˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CAbilityCadenceCrescendoVData
        }

        // Parent: m_bActive
        // Fields: 4
        namespace CPointCommentaryNode {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CPointCommentaryNode = 0xb70; // 
            constexpr std::ptrdiff_t »5Üè˝ = 0x90015b68; // sıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPointCommentaryNode
        }

        // Parent: None
        // Fields: 5
        namespace CMomentaryRotButton {
            constexpr std::ptrdiff_t  = 0x8f4e87a0; // CRotButton
            constexpr std::ptrdiff_t CHitboxComponent = 0x8f565d08; // CMomentaryRotButton
            constexpr std::ptrdiff_t  = 0x8ff59140; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t TOGGLE_STATE = 0x10404; // 
        }

        // Parent: None
        // Fields: 3
        namespace CSceneListManager {
            constexpr std::ptrdiff_t  = 0x8f8d2688; // CLogicalEntity
            constexpr std::ptrdiff_t  = 0x8ffe9658; // 
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvTilt {
            constexpr std::ptrdiff_t  = 0x8f566838; // CPointEntity
        }

        // Parent: None
        // Fields: 3
        namespace CEnvSoundscapeTriggerable {
            constexpr std::ptrdiff_t  = 0x0; // CEnvSoundscape
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerable = 0x530; // 
            constexpr std::ptrdiff_t  = 0x8ff340b8; // `Ùˆè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Hideout_BallVData {
            constexpr std::ptrdiff_t  = 0xb; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_FearVData {
            constexpr std::ptrdiff_t  = 0x907d4078; // CitadelAbilityVData
            constexpr std::ptrdiff_t magician_magicbolt_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Necro_Ghoul_Explode {
            constexpr std::ptrdiff_t  = 0x9081a390; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_BearTrap = 0x0; // 
        }

        // Parent: m_bHoldingAbilityButton
        // Fields: 3
        namespace CCitadel_Ability_PunkGoat_Ult {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8f328b30; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_Ability_2 {
            constexpr std::ptrdiff_t  = 0x8f5bde40; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ClusterGrenade_Debuff {
            constexpr std::ptrdiff_t  = 0x8ffa4330; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_DamageAmp {
            constexpr std::ptrdiff_t  = 0x8f4205a0; // CCitadelModifier
            constexpr std::ptrdiff_t ` = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Chrono_KineticCarbine {
            constexpr std::ptrdiff_t  = 0x8ff82b20; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_CloakingDevice_Active_Ambush {
            constexpr std::ptrdiff_t  = 0x90260b70; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_BulletArmorReductionAura = 0x0; // 
        }

        // Parent: None
        // Fields: 6
        namespace CCitadel_NewYears_Fireworks {
            constexpr std::ptrdiff_t  = 0x8f4a8ec0; // CDynamicProp
            constexpr std::ptrdiff_t PingWheelMessage_t = 0xb8; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x120; // PingWheelMessage_t
            constexpr std::ptrdiff_t Vacuum Start Sound = 0x8f4a8f60; // 
            constexpr std::ptrdiff_t On Punched Sound = 0x8f2ce408; // 
            constexpr std::ptrdiff_t  = 0x8f4a9fd0; // CCitadel_NewYears_Fireworks
        }

        // Parent: LocalPlayerOwnerAndObserversExclusive
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t Ä˜è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x90663c48; // CBaseEntity
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_Hero_Testing_Damage_Aura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t  = 0x8f3d3708; // CCitadel_Modifier_Objective_BulletReistVData
            constexpr std::ptrdiff_t  = 0x8fe96220; // 
            constexpr std::ptrdiff_t  = 0xa9a32800; // ∞:ç˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemPickupAuraTarget {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Behavior {
            constexpr std::ptrdiff_t  = 0x8fea1820; // CAI_Component
        }

        // Parent: None
        // Fields: 3
        namespace CFuncMover {
            constexpr std::ptrdiff_t  = 0x8ff5ed40; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_Neutral_Flying_WeakpointVData {
            constexpr std::ptrdiff_t  = 0x0; // CNPC_Neutral_WeakpointVData
            constexpr std::ptrdiff_t  = 0x8f508340; // 
        }

        // Parent: ®Ow˛
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_LeapingVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_CoffinVData {
            constexpr std::ptrdiff_t  = 0x8f6abe10; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 0æjè˝
        }

        // Parent: m_AuraModifier
        // Fields: 2
        namespace CCitadel_Modifier_Necro_SpawnZombies_AreaVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // 0ﬂiè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Bookworm_KnightChargeVData {
            constexpr std::ptrdiff_t  = 0x906efb58; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Drifter_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8f5bcae0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Operative_Blindside {
            constexpr std::ptrdiff_t  = 0x9086bd60; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CAbility_Synth_Affliction = 0x0; // 
            constexpr std::ptrdiff_t m_hHexWarningParticle = 0xd0; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Magician_MagicBolt {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f69ee00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Fathom_ReefdwellerHarpoon_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ability_priest_smokegrenade = 0x0; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CAbilityRapidFireVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t `bè˝ = 0x0; // 
        }

        // Parent: Äò˘è˝
        // Fields: 3
        namespace CModifierRapidFireAirJuggleVData {
            constexpr std::ptrdiff_t  = 0x800005ec; // CCitadelModifierVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8e0d3610; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_CrowdControl {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_iBonusBats = 0xf70; // int32
            constexpr std::ptrdiff_t m_iBatCountOnCast = 0xf74; // int32
        }

        // Parent: `Jw˛
        // Fields: 3
        namespace CCitadel_Modifier_Low_Health_GlowVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f304700; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // G0è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_UtilityUpgrade_RocketBootsVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t Ä˝Ëè˝ = 0x8f2fe100; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_AblativeCoatVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x8f316088; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // †`1è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBullets_BulletBuff {
            constexpr std::ptrdiff_t  = 0x8d229cb0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FocusLens_Damage {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelModifier
            constexpr std::ptrdiff_t HÉÏ(ãÜ&ûeHã%X = 0xa9e52840; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_Tier3Boss_Base
            constexpr std::ptrdiff_t CCitadel_UtilityUpgrade_DebuffImmunity = 0xf78; // 
            constexpr std::ptrdiff_t  = 0x8fe88a90; // @_Ïè˝
        }

        // Parent: None
        // Fields: 3
        namespace CModifierTier3BossLaserBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_mod_disruptor = 0x0; // 
        }

        // Parent: m_bJumped
        // Fields: 2
        namespace CCitadel_Ability_Jump {
            constexpr std::ptrdiff_t  = 0x8fe6bb30; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DamageResistance {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ItemSectionInfo_t = 0x20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ConeWaveProjectile {
            constexpr std::ptrdiff_t  = 0x8f3ce290; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t Visuals = 0x0; // 
            constexpr std::ptrdiff_t CCitadelModifierVData = 0x750; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ReloadSpeedVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: overlay_vars
        // Fields: 6
        namespace CPhysicsProp {
            constexpr std::ptrdiff_t  = 0x8ff69ec0; // CBreakableProp
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t  = 0x8f587a00; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de03c50; // 
            constexpr std::ptrdiff_t CPathQueryComponent = 0x8f587df0; // 
            constexpr std::ptrdiff_t  = 0x8f587e28; // 
        }

        // Parent: None
        // Fields: 3
        namespace CFuncNavObstruction {
            constexpr std::ptrdiff_t  = 0x90082710; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CPhysWheelConstraint {
            constexpr std::ptrdiff_t  = 0x90045840; // CPhysConstraint
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e8ec4a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Priest_BearTrapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frank_Zombie {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_Zombie = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityHornetLeapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_LifeDrainVData {
            constexpr std::ptrdiff_t  = 0x8000060a; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_SpiritSap_VData {
            constexpr std::ptrdiff_t  = 0x90260758; // CCitadel_Item_TrackingProjectileApplyModifierVData
            constexpr std::ptrdiff_t @≠Èè˝ = 0x0; // 
            constexpr std::ptrdiff_t upgrade_return_fire = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DebuffImmunity {
            constexpr std::ptrdiff_t  = 0x8f3b4f90; // CCitadelModifier
            constexpr std::ptrdiff_t If set, ignore LOS check if deploy target is below caster = 0x8f3b51e0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CSkyboxReference {
            constexpr std::ptrdiff_t  = 0x8ff6e9b0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItem_RestorativeLocket {
            constexpr std::ptrdiff_t  = 0x8f305f78; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2dcb18; // CCitadel_ArmorUpgrade_WeaponShielding
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_TechUpgrade_CorpseExplosion {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Item_DivinersKevlar_VData = 0x18d8; // 
            constexpr std::ptrdiff_t Ëä2è˝ = 0x0; // Ä˝Ëè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Item_DivinersKevlar_VData
        }

        // Parent: None
        // Fields: 2
        namespace CPointPulse {
            constexpr std::ptrdiff_t  = 0x0; // CBaseEntity
            constexpr std::ptrdiff_t CPointPulse = 0x4a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_BreakablePropHealthPickupVData {
            constexpr std::ptrdiff_t  = 0x9041fd98; // CCitadel_Pickup_VData
            constexpr std::ptrdiff_t citadel_point_talker_idol = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Teleport {
            constexpr std::ptrdiff_t  = 0x8fed0568; // CCitadelModifier
            constexpr std::ptrdiff_t CTriggerSuspendModifier = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Mirage_Tornado_Lift_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t synth_barrage = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffb0328; // CAbility_Synth_Barrage
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Nano_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x8f6a0b70; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x901fd850; // àjè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierIcePathVData {
            constexpr std::ptrdiff_t  = 0x8f4d6450; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Ôaè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Bull_Leap_Boosting_Crash {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Bull_Leap_Boosting_Crash = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_WeaponUpgrade_BloodTributeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Shrink_Ray {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t `Jw˛ = 0x8f316240; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_TechBurst_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x8f311748; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8fe82cb0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SuperNeutralIncendiary {
            constexpr std::ptrdiff_t  = 0x8f2ce360; // CCitadelBaseAbilityServerOnly
            constexpr std::ptrdiff_t ÄEËè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9d34250; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupRejuvVData {
            constexpr std::ptrdiff_t  = 0x904a15b8; // CCitadelItemPickupVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hornet_Chain_Connection {
            constexpr std::ptrdiff_t  = 0x8ff97b50; // CCitadel_Modifier_Link
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: CCitadel_CosmeticItem_VotingPoster
        // Fields: 4
        namespace CCitadel_CosmeticItem_VotingPoster {
            constexpr std::ptrdiff_t  = 0x8fe76180; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d2097c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CItem_WitheringWhip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t 0„Áè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0xa9cf1f50; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Item_RejuvTrackingProjectile {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item_TrackingProjectileApplyModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Sprint = 0xf88; // 
            constexpr std::ptrdiff_t ®y/è˝ = 0x8fe715c0; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Sprint
            constexpr std::ptrdiff_t  = 0x8f31c7c8; // CCitadel_Modifier_Apex_Watcher
        }

        // Parent: None
        // Fields: 5
        namespace CFilterClass {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterClass = 0x4e0; // 
            constexpr std::ptrdiff_t „Çè˝ = 0x8fff2758; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterClass
            constexpr std::ptrdiff_t m_iFilterModifier = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: `Jw˛
        // Fields: 1
        namespace CCitadel_Ability_Magician_EscapeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_HighAlert {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadelViscousBall = 0x8f0; // 
            constexpr std::ptrdiff_t êÖMè˝ = 0x8ffb9a48; // bÓè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_CatFormVData {
            constexpr std::ptrdiff_t  = 0x9085b1c8; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_swan_acrobat = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
            constexpr std::ptrdiff_t  = 0x8e275c20; // CCitadelModifier
            constexpr std::ptrdiff_t m_PortalParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: 0¥Èè˝
        // Fields: 2
        namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
            constexpr std::ptrdiff_t  = 0x800004ff; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FlameDashVData {
            constexpr std::ptrdiff_t  = 0x8f630b40; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x901fd850; // Xcè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2de0c0; // CCitadel_ArmorUpgrade_SpiritBubbleVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8d1ee710; // CCitadel_Modifier_BaseEventProc
        }

        // Parent: ‡[Èè˝
        // Fields: 3
        namespace CCitadel_Modifier_SlowVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_NearDeathFX {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Airheart_Package {
            constexpr std::ptrdiff_t  = 0x0; // CBaseAnimGraph
            constexpr std::ptrdiff_t CCitadel_Ability_Gravity_Lasso_VData = 0x1928; // 
            constexpr std::ptrdiff_t òx[è˝ = 0x0; // @≠Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Ability_Gravity_Lasso_VData
        }

        // Parent: None
        // Fields: 3
        namespace CTriggerToggleSave {
            constexpr std::ptrdiff_t  = 0x90076568; // CBaseTrigger
            constexpr std::ptrdiff_t  = 0x8f8ddf68; // 
            constexpr std::ptrdiff_t CTriggerToggleSave = 0x8e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CModifier_Operative_Revelation_Aura {
            constexpr std::ptrdiff_t  = 0x8ff9deb0; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e0e3980; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_CelestialGuidance {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathWithDynamicNodes {
            constexpr std::ptrdiff_t  = 0x8f588178; // CPathSimple
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SettingSun {
            constexpr std::ptrdiff_t  = 0x8f69fb70; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_MobileResupply {
            constexpr std::ptrdiff_t  = 0x90670580; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Uppercut = 0x0; // 
            constexpr std::ptrdiff_t m_vecCurrentTargets = 0xf70; // CUtlVector<CHandle<CBaseEntity>>
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Wraith_RapidFire {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_Haunt_Damage_VData = 0x830; // 
            constexpr std::ptrdiff_t  ™cè˝ = 0x0; // ØÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ChainLightningEffectVData {
            constexpr std::ptrdiff_t  = 0x8f316088; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x9021a690; // †`1è˝
        }

        // Parent: None
        // Fields: 2
        namespace CBaseNPCMaker {
            constexpr std::ptrdiff_t  = 0x8febfcf8; // CBaseEntity
            constexpr std::ptrdiff_t CAI_VolumetricEventEntity = 0x0; // 
        }

        // Parent: m_flFadeOutDuration
        // Fields: 2
        namespace CColorCorrection {
            constexpr std::ptrdiff_t  = 0x8f566a28; // CBaseEntity
            constexpr std::ptrdiff_t  = 0x8f566a80; // 
        }

        // Parent: None
        // Fields: 9
        namespace CPropDoorRotatingBreakable {
            constexpr std::ptrdiff_t  = 0x9005c680; // CPropDoorRotating
            constexpr std::ptrdiff_t server = 0xa0110; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e970ad0; // 
            constexpr std::ptrdiff_t m_hActivator = 0xd8; // CHandle<CBaseEntity>
            constexpr std::ptrdiff_t m_hCaller = 0xdc; // CHandle<CBaseEntity>
            constexpr std::ptrdiff_t  = 0x909a8eb0; // CPulseExecCursor
            constexpr std::ptrdiff_t CEnableMotionFixup = 0x0; // 
            constexpr std::ptrdiff_t p«ê˝ = 0x8f553b20; // 
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 7
        namespace CItemCrate {
            constexpr std::ptrdiff_t  = 0x0; // CPhysicsProp
            constexpr std::ptrdiff_t CItemCrate = 0xda0; // 
            constexpr std::ptrdiff_t àˆ@è˝ = 0x8fedf098; // ¿ûˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CItemCrate
            constexpr std::ptrdiff_t Blurry up through this distance. = 0x8f480630; // 
            constexpr std::ptrdiff_t HÉÏ(ã÷Ì?eHã%X = 0x1f7934a0; // 
            constexpr std::ptrdiff_t ê´,è˝ = 0x1f7934a0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CLightDirectionalEntity {
            constexpr std::ptrdiff_t  = 0x0; // CLightEntity
            constexpr std::ptrdiff_t CLightDirectionalEntity = 0x788; // 
            constexpr std::ptrdiff_t  = 0x8ff1f9c0; // ∞ÍÒè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CLightDirectionalEntity
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_Synth_Barrage {
            constexpr std::ptrdiff_t  = 0x9080b300; // CCitadelProjectile
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_StackingDefense = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f6af828; // CCitadel_Ability_SkyRunner_FlakShot
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_T3Boss_AoeWaveAura {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAura
            constexpr std::ptrdiff_t CCitadel_Item_TechDamagePulseVData = 0x1a90; // 
            constexpr std::ptrdiff_t ÿ/è˝ = 0x0; // Ä˝Ëè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Item_TechDamagePulseVData
        }

        // Parent: m_PanelClassName
        // Fields: 3
        namespace CBaseClientUIEntity {
            constexpr std::ptrdiff_t  = 0x8ff01f70; // CBaseModelEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f4e4500; // 
        }

        // Parent: êrıè˝
        // Fields: 3
        namespace CBreakable {
            constexpr std::ptrdiff_t  = 0x0; // CBaseModelEntity
            constexpr std::ptrdiff_t CBaseAnimGraphDestructibleParts_GraphController = 0x90; // 
            constexpr std::ptrdiff_t  = 0x0; // †ªıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CInfoLandmark {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CInfoLandmark = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x90074488; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 1
        namespace CBaseFilter {
            constexpr std::ptrdiff_t  = 0x8f3c45c0; // CLogicalEntity
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Frank_PainAura_TargetVData {
            constexpr std::ptrdiff_t  = 0x9074d448; // CCitadelModifierVData
            constexpr std::ptrdiff_t ability_fortuna_ability02 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff8c6e8; // CCitadel_Ability_Fortuna_Ability02
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Synth_Pulse_Escape {
            constexpr std::ptrdiff_t  = 0x907cc490; // CCitadelModifier
            constexpr std::ptrdiff_t CProjectile_Perched_Predator = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShadowPulse {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x90085a38; // 
            constexpr std::ptrdiff_t  = 0x8e12dfc0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Wraith_RapidFireVData {
            constexpr std::ptrdiff_t  = 0x8f713140; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fd850; // `1qè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Item_DPS_Aura_Active {
            constexpr std::ptrdiff_t  = 0x8d21add0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_EldritchShotVData = 0x978; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_PlaySceneBaseCursorState_t {
        }

        // Parent: None
        // Fields: 0
        namespace PulseObservableBoolExpression_t {
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_GuidedArrow_OwlModel {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelAnimatingModelEntity
            constexpr std::ptrdiff_t CCitadel_Ability_Burrow = 0x1428; // 
            constexpr std::ptrdiff_t 83[è˝ = 0x8ff7b818; // ∞éÈè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x4161; // CCitadel_Ability_Burrow
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_DebuffReducer {
            constexpr std::ptrdiff_t  = 0x8fe87330; // CCitadel_Item
            constexpr std::ptrdiff_t server = 0x401ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d1fee00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Knockdown {
            constexpr std::ptrdiff_t  = 0x8f3bb3d0; // CCitadel_Modifier_Stunned
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f3be010; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerUp_Gun {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_ScalingPowerUp
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Gun = 0xd8; // 
            constexpr std::ptrdiff_t  = 0x0; // ‡VÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_MovingToAttach {
            constexpr std::ptrdiff_t  = 0x8ff94050; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpinVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t †6¯è˝ = 0x0; // 
        }

        // Parent: m_vecInitialPosition
        // Fields: 2
        namespace CCitadel_Ability_FissureWall {
            constexpr std::ptrdiff_t  = 0x8de9c690; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f4631a8; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Fervor_Bonuses {
            constexpr std::ptrdiff_t  = 0x90371fd0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_RechargingBullets = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Buff {
            constexpr std::ptrdiff_t  = 0x8fe8a3c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StreetBrawlTrooper {
            constexpr std::ptrdiff_t  = 0x8fe94870; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_FlameDashGroundAura {
            constexpr std::ptrdiff_t  = 0x8ff93a60; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dfdff20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier3BossInvuln {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier3BossInvuln = 0xd0; // 
        }

        // Parent: m_flFogEndDistance
        // Fields: 2
        namespace CGradientFog {
            constexpr std::ptrdiff_t  = 0x8ff17780; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Magician_AnimalHex_HexArea {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t »Pw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tokamak_HotShot {
            constexpr std::ptrdiff_t  = 0x908ffbd0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_MaulingLeap = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x8f2cd848; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Gun_Spikes {
            constexpr std::ptrdiff_t  = 0x8f5a6f00; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityWreckerTeleportVData {
            constexpr std::ptrdiff_t  = 0x8f7223d0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x9062a220; // ¯#rè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingEnemyTrackerVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Aerial_Assault_Watcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Aerial_Assault_Watcher = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_HeadshotDamage_VData {
            constexpr std::ptrdiff_t  = 0x9024a418; // CitadelItemVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Upgrade_OverdriveClip_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t upgrade_ricochet = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe82a90; // CCitadel_WeaponUpgrade_Ricochet
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_SiphonBullets_VData {
            constexpr std::ptrdiff_t  = 0x80000044; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: CCitadel_Modifier_TechDamageProcWatcher
        // Fields: 3
        namespace CCitadel_Modifier_SlowingTech_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t ability_medic_trooper_heal = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe71788; // CCitadel_Ability_MedicHeal
        }

        // Parent: None
        // Fields: 4
        namespace CSoundOpvarSetAABBEntity {
            constexpr std::ptrdiff_t  = 0x8ff2f4a0; // CSoundOpvarSetPointEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dc79b40; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_Outflow_PlaySequence {
            constexpr std::ptrdiff_t  = 0x9005b020; // CPulseCell_Outflow_PlaySceneBase
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9643c0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_BreakableProp {
            constexpr std::ptrdiff_t  = 0x8fec6170; // CBaseAnimGraph
            constexpr std::ptrdiff_t server = 0x50110; // 
            constexpr std::ptrdiff_t  = 0x8f40f5c0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d579360; // 
        }

        // Parent: CCitadel_Modifier_Hideout_Teleport
        // Fields: 3
        namespace CCitadelHideoutInteractableTrigger {
            constexpr std::ptrdiff_t  = 0x8e0; // CBaseTrigger
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x8f40f9c8; // 
            constexpr std::ptrdiff_t  = 0x8f47ec08; // 
        }

        // Parent: None
        // Fields: 3
        namespace CNPC_Boss_Tier2VData {
            constexpr std::ptrdiff_t  = 0x904ebcf8; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t üÔè˝ = 0x0; // 
            constexpr std::ptrdiff_t path_particle_rope = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Metal {
            constexpr std::ptrdiff_t  = 0x8fee35d8; // CCitadelModifier
        }

        // Parent: None
        // Fields: 5
        namespace CPointClientUIWorldTextPanel {
            constexpr std::ptrdiff_t  = 0x0; // CPointClientUIWorldPanel
            constexpr std::ptrdiff_t CPointClientUIWorldTextPanel = 0xb38; // 
            constexpr std::ptrdiff_t P>Nè˝ = 0x8ff01918; // ∞è˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPointClientUIWorldTextPanel
            constexpr std::ptrdiff_t  = 0x10; // m_bEnabled
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Punkgoat_PrimaryWeapon {
            constexpr std::ptrdiff_t  = 0x8e1062f0; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t m_CursedModel = 0x750; // ModelChange_t
            constexpr std::ptrdiff_t m_TargetParticle = 0x838; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_flModelScale = 0x918; // float32
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FealtyTarget {
            constexpr std::ptrdiff_t  = 0x90882be0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_Urn = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TangoTether_TetherReceiver {
            constexpr std::ptrdiff_t  = 0x8f72e658; // CCitadelModifier
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_WreckerSalvage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbilityGangActivityVData = 0x1828; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Astro_ShotgunBuffVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t ê:¯è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityMeleeParryVData {
            constexpr std::ptrdiff_t  = 0x8f2ce320; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x901fe040; // @„,è˝
        }

        // Parent: m_eCurrentAttackState
        // Fields: 3
        namespace CCitadel_Ability_HoldMelee {
            constexpr std::ptrdiff_t  = 0x8fe6af10; // CCitadel_Ability_Melee_Base
            constexpr std::ptrdiff_t server = 0x501ff; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d128540; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEntityIdentity {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountCriteria_t {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ItemPunchable_GoldVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFuncRotator {
            constexpr std::ptrdiff_t  = 0x8f574fa4; // CBaseModelEntity
            constexpr std::ptrdiff_t Custom death handshake to set when this damage level is destroyed. = 0x1; // 
        }

        // Parent: None
        // Fields: 2
        namespace CSoundEventEntity {
            constexpr std::ptrdiff_t  = 0x8ff25e70; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Infested {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Infested = 0x260; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelf {
            constexpr std::ptrdiff_t  = 0x8ffc8d30; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_SwingEndTime
        // Fields: 3
        namespace CCitadel_Ability_SkyRunner_SwingLine {
            constexpr std::ptrdiff_t  = 0x8ffadbb0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f6a4de0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Nano_PredatoryStatue {
            constexpr std::ptrdiff_t  = 0x907e34b0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_KillSummon = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_MysticShot {
            constexpr std::ptrdiff_t  = 0x8fe7b0c0; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d222150; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_ColossusActive_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_containment = 0x0; // 
            constexpr std::ptrdiff_t Ë˜1è˝ = 0x8fe7eca8; // CCitadel_Item_Containment
        }

        // Parent: None
        // Fields: 2
        namespace CInfoTutorialPoint {
            constexpr std::ptrdiff_t  = 0x8fef9050; // CPointEntity
            constexpr std::ptrdiff_t server = 0x20108; // 
        }

        // Parent: None
        // Fields: 4
        namespace CEnvFade {
            constexpr std::ptrdiff_t  = 0x9001d080; // CLogicalEntity
            constexpr std::ptrdiff_t server = 0x50108; // 
            constexpr std::ptrdiff_t  = 0x8f873bf8; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e84cc70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBasePlayerVData {
            constexpr std::ptrdiff_t  = 0x0; // CEntitySubclassVDataBase
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_ReplicatedBarrier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_Hornet_Snipe = 0x1628; // 
        }

        // Parent: None
        // Fields: 2
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_RocketBarrage = 0x1440; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VampireBat_BatCloud_SelfVData {
            constexpr std::ptrdiff_t  = 0xa9be71c0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Viper_StackingDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbilityFealtyVData = 0x1828; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityBouncePadVData {
            constexpr std::ptrdiff_t  = 0x80000561; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityPowerSurgeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Unstable_ConcoctionVData {
            constexpr std::ptrdiff_t  = 0x80000069; // CCitadelModifierVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_Electric_SlippersVData {
            constexpr std::ptrdiff_t  = 0x9028d908; // CitadelItemVData
            constexpr std::ptrdiff_t ÿB.è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f2def20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Frenzy_MoveSpeed {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine_VData = 0x21e8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CheaterCurseVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CModifierVData_BaseAura
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerImpact {
            constexpr std::ptrdiff_t  = 0x90073510; // CTriggerMultiple
            constexpr std::ptrdiff_t server = 0x70108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fde40; // 
            constexpr std::ptrdiff_t  = 0x8f8de428; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_VexBarrier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2e2d10; // 
        }

        // Parent: None
        // Fields: 3
        namespace CAI_NPC_NecroSkeleVData {
            constexpr std::ptrdiff_t  = 0x907b28a8; // CAI_CitadelNPCVData
            constexpr std::ptrdiff_t  ØÈè˝ = 0x90858ad8; // 
            constexpr std::ptrdiff_t  ØÈè˝ = 0x9085dd58; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityPunkgoatGoatFlipVData {
            constexpr std::ptrdiff_t  = 0x800006de; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_SkyRunner_FlakShot {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f6904d0; // CCitadel_Modifier_PriestKnockback
            constexpr std::ptrdiff_t  = 0x8ffa59a0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Rutger_CheatDeath {
            constexpr std::ptrdiff_t  = 0x8f40f9c8; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f689408; // CCitadel_Ability_Swan_AcrobatVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_RapidFire {
            constexpr std::ptrdiff_t  = 0x8f63af18; // CCitadelBaseAbility
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_HornetSting {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Modifier_IceDome = 0x320; // 
            constexpr std::ptrdiff_t ¿CVè˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_TrooperZipLine {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadel_Ability_ZipLine
            constexpr std::ptrdiff_t  = 0xa9c19b00; // 
            constexpr std::ptrdiff_t HØ,è˝ = 0xa9c19b00; // 
            constexpr std::ptrdiff_t  = 0xa9c19b00; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_BulletResilience {
            constexpr std::ptrdiff_t  = 0x8fe7eac0; // CCitadel_Modifier_Intrinsic_Base
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_AOE_Tech_ShieldVData {
            constexpr std::ptrdiff_t  = 0x8f304700; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // G0è˝
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOEntityHandleIntArgs_t {
        }

        // Parent: tools/images/pulse_editor/cursor_wait_zone.png
        // Fields: 4
        namespace CPulseCell_CursorQueue {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_WaitForCursorsWithTagBase
            constexpr std::ptrdiff_t CPulseCell_CursorQueue = 0xa0; // 
            constexpr std::ptrdiff_t  y°è˝ = 0x0; // ∞§ê˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CPulseCell_CursorQueue
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 2
        namespace CPulseCell_Value_RandomFloat {
            constexpr std::ptrdiff_t  = 0x900cbad0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseExecCursor {
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerRemoveModifier {
            constexpr std::ptrdiff_t  = 0x8f5928b8; // CBaseTrigger
            constexpr std::ptrdiff_t m_Slack = 0x8f590258; // 
            constexpr std::ptrdiff_t m_TextureScale = 0x8f590270; // 
            constexpr std::ptrdiff_t m_bConstrainBetweenEndpoints = 0x8f5902a0; // 
            constexpr std::ptrdiff_t m_Subdiv = 0x8f5902d0; // 
        }

        // Parent: overlay_vars
        // Fields: 5
        namespace CBasePropDoor {
            constexpr std::ptrdiff_t  = 0x8ff56cb0; // CDynamicProp
            constexpr std::ptrdiff_t server = 0x801ff; // 
            constexpr std::ptrdiff_t  = 0x8f5642b0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8dd667e0; // 
            constexpr std::ptrdiff_t  mıè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 5
        namespace CCitadel_Projectile_HookBlade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelTrackedProjectile
            constexpr std::ptrdiff_t CCitadel_Modifier_TangoTether_TetherReceiver = 0x158; // 
            constexpr std::ptrdiff_t Ä)0è˝ = 0x0; // 0¥Èè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_TangoTether_TetherReceiver
            constexpr std::ptrdiff_t  = 0x8f710020; // CAbilityRestorativeGooVData
        }

        // Parent: None
        // Fields: 4
        namespace CLogicBranchList {
            constexpr std::ptrdiff_t  = 0x9003ac98; // CLogicalEntity
            constexpr std::ptrdiff_t CMathRemap = 0x0; // 
            constexpr std::ptrdiff_t `\ê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90035c20; // XQw˛
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatGoingUpVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbilityLashFlogVData {
            constexpr std::ptrdiff_t  = 0x800005f8; // CitadelAbilityVData
            constexpr std::ptrdiff_t 8≠,è˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_HollowPoint_ProcVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseBulletPreRollProcVData
            constexpr std::ptrdiff_t  = 0x90274f08; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t upgrade_blood_tribute = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe72e58; // CCitadel_WeaponUpgrade_BloodTribute
        }

        // Parent: m_flSimulationTime
        // Fields: 3
        namespace CNPC_SimpleAnimatingAI {
            constexpr std::ptrdiff_t  = 0x90529060; // CBaseAnimGraph
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Weakpoint = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f5088a0; // 
        }

        // Parent: m_bUseAnimGraph
        // Fields: 6
        namespace CDynamicProp {
            constexpr std::ptrdiff_t  = 0x8ff60a60; // CBreakableProp
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t  = 0x8f575308; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8ddc6460; // 
            constexpr std::ptrdiff_t The hitgroup this is related to. = 0x8f5755c0; // 
            constexpr std::ptrdiff_t +Gibbing = 0x8f575770; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Charge_Mastery {
            constexpr std::ptrdiff_t  = 0x8d1dbff0; // CCitadel_Item
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_AOE_Tech_Shield {
            constexpr std::ptrdiff_t  = 0x8f305fb0; // CCitadel_Item
            constexpr std::ptrdiff_t 0¥Èè˝ = 0x8f2ce360; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_Berserker = 0x258; // 
            constexpr std::ptrdiff_t x_0è˝ = 0x0; // 0¥Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CModifierHoldingGoldenIdolVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x90496f88; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Ability_Werewolf_Rifle {
            constexpr std::ptrdiff_t  = 0x8f2cd848; // CCitadel_Ability_PrimaryWeapon
            constexpr std::ptrdiff_t ∞éÈè˝ = 0x8f727488; // 
            constexpr std::ptrdiff_t  = 0x8ffc5c70; // Hÿ,è˝
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PunkgoatBlastedActive {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_CopiedUlt_SpawnedEntityVData = 0x750; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CAbility_Synth_Barrage_VData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Dust_Storm {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8f6394f8; // 
            constexpr std::ptrdiff_t  = 0x8ff974c0; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_GooGrenade {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t êa¸è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityChargedBombVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 5
        namespace CFilterTeam {
            constexpr std::ptrdiff_t  = 0x0; // CBaseFilter
            constexpr std::ptrdiff_t CFilterTeam = 0x4e0; // 
            constexpr std::ptrdiff_t @„Çè˝ = 0x8fff2228; // –#ˇè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CFilterTeam
            constexpr std::ptrdiff_t  = 0x8f82e838; // 
        }

        // Parent: None
        // Fields: 3
        namespace CMiniMapMarker {
            constexpr std::ptrdiff_t  = 0x8f43cfb8; // CPointEntity
            constexpr std::ptrdiff_t  = 0x8f43cfc8; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadelModifierAura_Cone {
            constexpr std::ptrdiff_t  = 0x8f3acd28; // CCitadelModifierAura
            constexpr std::ptrdiff_t m_flElasticity = 0x8f3ace48; // 
            constexpr std::ptrdiff_t m_nMinGPULevel = 0x8f3ad328; // 
            constexpr std::ptrdiff_t CCitadelModifierAura_Cone = 0x108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierAura {
            constexpr std::ptrdiff_t  = 0x8fe906f0; // CBaseModifierAura
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CModifierVData_BaseAura
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Graf_Ability01 {
            constexpr std::ptrdiff_t  = 0x8ff88ec0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x501ff; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelAbilityDruidBasePlant {
            constexpr std::ptrdiff_t  = 0x8ff84050; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_DebuffModifier
        // Fields: 3
        namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t citadel_ability_bebop_laser_beam = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ff7cf68; // CCitadel_Ability_Bebop_LaserBeam
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_WeaponPowerForHealthVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_mystic_reverb = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe89778; // CItemMysticReverb
        }

        // Parent: m_linearDamping
        // Fields: 5
        namespace CTriggerPhysics {
            constexpr std::ptrdiff_t  = 0x90073a00; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x30108; // 
            constexpr std::ptrdiff_t  = 0x8f8de878; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fd270; // 
            constexpr std::ptrdiff_t p:ê˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MysticalPianoVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t 0{ç˝ = 0x0; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Item
            constexpr std::ptrdiff_t CCitadel_Modifier_CQC_Proc = 0x288; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t ÿLw˛ = 0x61; // CCitadel_Modifier_CQC_Proc
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_CheatDeath {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t 0fÁè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90217f80; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9ce8740; // 
        }

        // Parent: CCitadelBaseLockonAbility
        // Fields: 3
        namespace CCitadelBaseLockonAbility {
            constexpr std::ptrdiff_t  = 0x8fed4840; // CCitadelBaseAbility
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x8f45f618; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFuncTimescale {
            constexpr std::ptrdiff_t  = 0x9002c490; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoInteraction {
            constexpr std::ptrdiff_t  = 0x8ff65b30; // CPointEntity
            constexpr std::ptrdiff_t server = 0x40108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Cadence_Crescendo {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
            constexpr std::ptrdiff_t ®Ow˛ = 0x8f5b0328; // 
        }

        // Parent: m_HealParticle
        // Fields: 2
        namespace CCitadel_Item_HealthRegenAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t item_projectile_test_01 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_UltimateBurst_DelayedEffect {
            constexpr std::ptrdiff_t  = 0x8fe6c8d0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_AmmoScavenger {
            constexpr std::ptrdiff_t  = 0x8f30b498; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f2fc900; // Hÿ,è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StreetBrawl_Phase {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Objective_BulletReistVData = 0x758; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_PreventHealing {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Don't show a status effect in the Important Box = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BaseEventProc {
            constexpr std::ptrdiff_t  = 0x8f3cc240; // CCitadelModifier
        }

        // Parent: None
        // Fields: 3
        namespace CSoundOpvarSetPointEntity {
            constexpr std::ptrdiff_t  = 0x0; // CSoundOpvarSetPointBase
            constexpr std::ptrdiff_t CSoundOpvarSetPointEntity = 0x618; // 
            constexpr std::ptrdiff_t Tè˝ = 0x90066de8; // ÌÚè˝
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerWeaponVData {
        }

        // Parent: None
        // Fields: 4
        namespace CInfoTargetServerOnly {
            constexpr std::ptrdiff_t  = 0x0; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t CInfoTargetServerOnly = 0x4a0; // 
            constexpr std::ptrdiff_t  = 0x8ff1e3b8; // –zıè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CInfoTargetServerOnly
        }

        // Parent: None
        // Fields: 4
        namespace CInfoTrooperNeutralSpawn {
            constexpr std::ptrdiff_t  = 0x8dae5f40; // CServerOnlyPointEntity
            constexpr std::ptrdiff_t m_flPanel1 = 0x7f0; // CAnimGraphParamRef<float32>
            constexpr std::ptrdiff_t m_bUnpackInstant = 0x818; // CAnimGraphParamRef<bool>
            constexpr std::ptrdiff_t m_flVelocity = 0x840; // CAnimGraphParamRef<float32>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Drifter_PrimaryWeapon_VData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_SpreadingFireVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent:   ˚è˝
        // Fields: 4
        namespace CCitadel_Modifier_HauntWatcherVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Modifier_BaseEventProcVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t citadel_ability_psychic_lift = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8ffbb948; // CCitadel_Ability_PsychicLift
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShieldGuy_Ability01 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t ∫˙è˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x907a0038; // `Jw˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier2Boss_RocketDamage_Aura = 0x188; // 
        }

        // Parent: None
        // Fields: 5
        namespace CServerRagdollTrigger {
            constexpr std::ptrdiff_t  = 0x900735c0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fe000; // 
            constexpr std::ptrdiff_t  = 0x8ff13630; // 
        }

        // Parent: None
        // Fields: 6
        namespace CDynamicPropAlias_dynamic_prop {
            constexpr std::ptrdiff_t  = 0x8f2e65e8; // CDynamicProp
            constexpr std::ptrdiff_t  = 0x8f574840; // CDynamicPropAlias_dynamic_prop
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t 0Iw˛ = 0x0; // 
            constexpr std::ptrdiff_t ¯Mw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMarkupVolumeTagged {
            constexpr std::ptrdiff_t  = 0x8f586e90; // CMarkupVolume
        }

        // Parent: None
        // Fields: 3
        namespace CInfoParticleTarget {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CLightSpotEntity = 0x788; // 
            constexpr std::ptrdiff_t  = 0x8ff1f870; // ∞ÍÒè˝
        }

        // Parent: m_Entity_bCustomCubemapTexture
        // Fields: 2
        namespace CEnvCubemap {
            constexpr std::ptrdiff_t  = 0x8ff165f0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Skyrunner_MagicBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Boho_DoubleHitBuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t P@¯è˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Magician_AnimalCurse {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_CatAnimating = 0xc10; // 
            constexpr std::ptrdiff_t  = 0x8ff9eb98; // ∞%Ìè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff {
            constexpr std::ptrdiff_t  = 0x8ffb06c0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady {
            constexpr std::ptrdiff_t  = 0x8f68b078; // CCitadelModifier
            constexpr std::ptrdiff_t  = 0x8f68fff8; // CCitadel_Modifier_StompDebuff
        }

        // Parent: None
        // Fields: 3
        namespace CModifierFlyingStrikeTargetVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t ¯¬qè˝ = 0x8f71c100; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_ShieldGuy_Ability04 {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_SkyRunner_SwingLine = 0x1120; // 
            constexpr std::ptrdiff_t Ojè˝ = 0x8ffa09d0; // ∞éÈè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_VoidSphere {
            constexpr std::ptrdiff_t  = 0x8ffa11f0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_StompDebuff {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t Motion = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Burning {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CAbilitySprintVData = 0x1910; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_CritShot {
            constexpr std::ptrdiff_t  = 0x8f2c6e38; // CCitadel_Modifier_BaseBulletPreRollProc
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeamVData = 0x18d8; // 
            constexpr std::ptrdiff_t h/è˝ = 0x0; // Ä˝Ëè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CCitadel_Item_RescueBeamVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_DPS_Aura_VData {
            constexpr std::ptrdiff_t  = 0x8f31fa08; // CitadelItemVData
            constexpr std::ptrdiff_t  = 0x9021a690; // 0˙1è˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
            constexpr std::ptrdiff_t  = 0x8d3758f0; // CCitadelModifier
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityPropertyBase {
            constexpr std::ptrdiff_t  = 0x904d45f0; // CScaleFunctionBase
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayerClipComponent {
            constexpr std::ptrdiff_t  = 0x0; // CEntityComponent
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 5
        namespace CTriggerItemShop {
            constexpr std::ptrdiff_t  = 0x8fece940; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x8f43f900; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d694a40; // 
            constexpr std::ptrdiff_t 0Iw˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerLerpObject {
            constexpr std::ptrdiff_t  = 0x8ff6f120; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8de22560; // 
            constexpr std::ptrdiff_t m_sMapName = 0x8e0; // CUtlString
        }

        // Parent: None
        // Fields: 7
        namespace CPhysicsPropOverride {
            constexpr std::ptrdiff_t  = 0x0; // CPhysicsProp
            constexpr std::ptrdiff_t CPhysicsPropOverride = 0xd60; // 
            constexpr std::ptrdiff_t  = 0x8ff698c8; // ¿ûˆè˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x161; // CPhysicsPropOverride
            constexpr std::ptrdiff_t  = 0x7074dc90; // 
            constexpr std::ptrdiff_t x«,è˝ = 0x7074dc90; // 
            constexpr std::ptrdiff_t x«,è˝ = 0x7074df30; // 
        }

        // Parent: None
        // Fields: 4
        namespace CTriggerSave {
            constexpr std::ptrdiff_t  = 0x90072cf0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e9fd620; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_VacuumAura {
            constexpr std::ptrdiff_t  = 0x8ffac6f0; // CCitadelModifierAura
            constexpr std::ptrdiff_t server = 0x70108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8e128bd0; // 
        }

        // Parent: None
        // Fields: 5
        namespace CItemAOESilenceAuraVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierAuraVData
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t upgrade_mystic_reverb = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe89778; // CItemMysticReverb
            constexpr std::ptrdiff_t –[2è˝ = 0xa9be71c0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_SelfBuffModifier {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t  = 0x8f2fe118; // 
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPointHurt {
            constexpr std::ptrdiff_t  = 0x3f733333; // CPointEntity
            constexpr std::ptrdiff_t @Eê˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90054520; // ®Ow˛
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Hero_Testing_Damage {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t ®Ow˛ = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Priest_Immobilize {
            constexpr std::ptrdiff_t  = 0x8e100df0; // CCitadel_Modifier_Root
            constexpr std::ptrdiff_t `Jw˛ = 0x8f6a2428; // 
            constexpr std::ptrdiff_t  = 0x8fe989c8; // 
        }

        // Parent: `Jw˛
        // Fields: 2
        namespace CCitadel_Ability_Priest_WeaponSwapVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Mirage_SandPhantom_VData {
            constexpr std::ptrdiff_t  = 0x90830728; // CitadelAbilityVData
            constexpr std::ptrdiff_t fathom_breach = 0x0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_RescueBeamVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelItemVData
            constexpr std::ptrdiff_t super_neutral_shield = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8fe75ac8; // CCitadel_Ability_SuperNeutralShield
        }

        // Parent: None
        // Fields: 2
        namespace CAI_GoalEntity {
            constexpr std::ptrdiff_t  = 0x8fea7040; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_UtilityUpgrade_AOESmokeBomb {
            constexpr std::ptrdiff_t  = 0x0; // CCitadel_Item
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t m_ImmunityModifier = 0x760; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x770; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Modifier_ThermalDetonator_Thinker {
            constexpr std::ptrdiff_t  = 0x8f2c7ed0; // CCitadelModifierAura
            constexpr std::ptrdiff_t påÁè˝ = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x90219848; // `Jw˛
            constexpr std::ptrdiff_t †ò,è˝ = 0xa9ced720; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Werewolf_TransformationWatcher {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_PsychicLift = 0x278; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Boho_PrimaryWeaponVData {
            constexpr std::ptrdiff_t  = 0x800005d2; // CCitadel_Ability_PrimaryWeaponVData
            constexpr std::ptrdiff_t ò>è˝ = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8dfa9c40; // HçaHâHãAHâBHã¬√ÃÃÃÃÃÃÃÃÃÃHã¡Hã
Hˇ`ÃÃÃÃÃÃHç	w˝√ÃÃÃÃÃÃÃÃHçA√ÃÃÃÃÃÃÃÃÃÃÃÑ“t
∫
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Frank_SelfZap {
            constexpr std::ptrdiff_t  = 0x90731be0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_GenericPerson_4 = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f61e090; // CCitadel_Modifier_Familiar_SpotlightAura
        }

        // Parent: None
        // Fields: 3
        namespace CAbility_Rutger_RocketLauncher {
            constexpr std::ptrdiff_t  = 0x8e0ea690; // CCitadelBaseAbility
            constexpr std::ptrdiff_t m_ChargingSpeedCurve = 0x1818; // CPiecewiseCurve
            constexpr std::ptrdiff_t m_GoingUpSpeedCurve = 0x1858; // CPiecewiseCurve
        }

        // Parent: m_flHeatTime
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
            constexpr std::ptrdiff_t  = 0x8f725678; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_TeleportToGangster {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Werewolf_HuntVData = 0x1858; // 
            constexpr std::ptrdiff_t ÿÇqè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_LashGrappleTarget {
            constexpr std::ptrdiff_t  = 0x8ff930e0; // CCitadelModifier
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_PowerSurgeVData {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifierVData
            constexpr std::ptrdiff_t  = 0x8f639d70; // 
            constexpr std::ptrdiff_t ¿qæ©6 = 0x8ff8ffa0; // CCitadelBaseAbility
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_FullSpectrum {
            constexpr std::ptrdiff_t  = 0x90235780; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_RocketBarrage = 0x0; // 
            constexpr std::ptrdiff_t  = 0x8f3163a8; // CCitadel_Item_CheatDeathVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SlowingTech_Proc {
            constexpr std::ptrdiff_t  = 0x8fe72bf0; // CCitadel_Modifier_BaseEventProc
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_currentNPCBasePhysicsHull
        // Fields: 5
        namespace CAI_BaseNPC {
            constexpr std::ptrdiff_t  = 0x8fea5588; // CBaseCombatCharacter
            constexpr std::ptrdiff_t  = 0x8f553b20; // 
            constexpr std::ptrdiff_t  = 0x8fea16c0; // »Pw˛
            constexpr std::ptrdiff_t à{1è˝ = 0xa9c1d820; // 
            constexpr std::ptrdiff_t @UAVAWHãÏHÅÏÄ = 0x2; // m_vecTargets
        }

        // Parent: None
        // Fields: 5
        namespace CTriggerNeutralShield {
            constexpr std::ptrdiff_t  = 0x8fece3d0; // CBaseTrigger
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t  = 0x0; // 
            constexpr std::ptrdiff_t »Pw˛ = 0x8d693cc0; // 
            constexpr std::ptrdiff_t @‰Ïè˝ = 0x8f553b20; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoAbilityTestBot {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CLaneMarkerPath = 0x4a8; // 
            constexpr std::ptrdiff_t ò%<è˝ = 0x8fecdb18; // @yıè˝
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Prop_MidBossIndicator {
            constexpr std::ptrdiff_t  = 0x0; // CPointEntity
            constexpr std::ptrdiff_t CCitadel_Prop_MidBossIndicator = 0x4c0; // 
            constexpr std::ptrdiff_t  = 0x8fec6208; // ∞;Òè˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CinematicIntro_Shrine {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_CinematicIntro_Shrine = 0xd0; // 
        }

        // Parent: m_iTeamNum
        // Fields: 2
        namespace CBasePlayerController {
            constexpr std::ptrdiff_t  = 0x8ffe95a0; // CBaseEntity
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_VampireBat_StealLife {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_DazzlingOrbVData = 0x1950; // 
            constexpr std::ptrdiff_t ®æqè˝ = 0x0; // @≠Èè˝
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Spinning_BladeVData {
            constexpr std::ptrdiff_t  = 0x0; // CitadelAbilityVData
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CardToss_StackingResistShred {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Projectile_SpiderProjectile = 0xbf8; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Teleport {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelBaseAbility
            constexpr std::ptrdiff_t Modifiers = 0x8f2e0728; // EPlayerSprayStatus
            constexpr std::ptrdiff_t  = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_InfiniteMagazineActive {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_MutedVData = 0x9f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_Stasis_BombVData {
            constexpr std::ptrdiff_t  = 0x902fe5d8; // CCitadel_Item_BubbleVData
            constexpr std::ptrdiff_t  = 0x9021a690; // (j2è˝
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_DebugScale {
            constexpr std::ptrdiff_t  = 0x0; // CCitadelModifier
            constexpr std::ptrdiff_t CCitadel_Modifier_DebugScale = 0xd8; // 
        }

    } // namespace server_dll
} // namespace schemas
} // namespace deadlock_dumper
