// Generated using deadlock-dumper
// 2026-09-27T15:22:12Z

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
        // Fields: 0
        namespace CPointWorldText {
        }

        // Parent: m_flChannelTime
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatSwarm {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_DoubleDagger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Revelation_Caster_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_ShadowClone {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_Anthem {
            constexpr std::ptrdiff_t CCitadel_Ability_PassiveBeefy = 0x1290; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Viper_SlideBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CIcePathShardGenerator {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VoidSphere {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSkullVData = 0x20b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_NullificationAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InFountain {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseMusicOBB {
            constexpr std::ptrdiff_t m_CCitadelRegenComponent = 0xa90; // CCitadelRegenComponent
        }

        // Parent: m_bInteractive
        // Fields: 1
        namespace CCitadel_Pickup {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura_CylinderVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GoldenIdolVData {
            constexpr std::ptrdiff_t citadel_item_pickup = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAmbientGeneric {
            constexpr std::ptrdiff_t m_bDisabled = 0x4a0; // bool
            constexpr std::ptrdiff_t m_radius = 0x4a4; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CEnvEntityMaker {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseGraphInstance_GameBlackboard {
            constexpr std::ptrdiff_t CPulseGraphInstance_GameBlackboard = 0x1c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointEntity {
            constexpr std::ptrdiff_t CPointEntity = 0x4a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_PainAura = 0x1180; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
            constexpr std::ptrdiff_t CCitadel_Ability_Perched_Predator = 0x11f8; // 
        }

        // Parent: m_ExplodeParticle
        // Fields: 0
        namespace CModifier_Thumper_BulletWatcherVData {
        }

        // Parent: m_DebuffModifier
        // Fields: 0
        namespace CCitadel_Modifier_SalvoBulletVData {
        }

        // Parent: m_SpinEndTime
        // Fields: 0
        namespace CCitadel_Ability_Burrow {
        }

        // Parent: m_eTelepunchState
        // Fields: 2
        namespace CCitadel_Ability_Viscous_Telepunch {
            constexpr std::ptrdiff_t m_SpiderExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_JarExplodeParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backstabber_Watcher_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBullets_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_GuardianWard_VData = 0x910; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletResistReductionStack {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MidBossAggroEnemy {
            constexpr std::ptrdiff_t Hide the background on the attributes box? Checking this adds class RemoveAttributesBackground to the section = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Currency_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterEnemy {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_SingleTargetStun {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_ShockTarget {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Cadence_GrandFinale {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gunslinger_DemonMark {
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Killing_Blow_Glow {
            constexpr std::ptrdiff_t CAbility_Rutger_RocketLauncher = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_TeleportStartParticle
        // Fields: 1
        namespace CCitadel_Modifier_VoidSphereVData {
            constexpr std::ptrdiff_t priest_beartrap = 0x0; // 
        }

        // Parent: Modifiers
        // Fields: 0
        namespace CItemHauntingScreamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FocusLens_Damage_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_DivinersKevlar_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FullSpectrumVData {
        }

        // Parent: tools/images/pulse_editor/cursor_tag.png
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTrackAuto {
            constexpr std::ptrdiff_t CTriggerLerpObject = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_BulletArmorReductionAura {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_VolumetricEventSensor {
            constexpr std::ptrdiff_t CAI_VolumetricEvent = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScriptedSequence {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_PoisonJar {
            constexpr std::ptrdiff_t CCitadel_Ability_SettingSun_VData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gunslinger_DemonMarkVData {
            constexpr std::ptrdiff_t ability_demonmark = 0x0; // 
        }

        // Parent: m_AuraParticle
        // Fields: 0
        namespace CCitadel_Modifier_StickyBombOnGroundVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_CloakingDevice_Active_Ambush_VData {
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_Modifier_SpiritSnatch_VData {
        }

        // Parent: None
        // Fields: 3
        namespace CTier3BossAbility {
            constexpr std::ptrdiff_t m_LaserLeft = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_LaserMid = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_LaserRight = 0x1838; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelLocalPlayerRankedBadgeProp {
            constexpr std::ptrdiff_t EItemSlotTypes_t = 0x10101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_BaseNPCAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CFogTrigger {
            constexpr std::ptrdiff_t CFogTrigger = 0x948; // 
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerIcePathVolume {
            constexpr std::ptrdiff_t CCitadel_Ability_Tenacity = 0x0; // 
            constexpr std::ptrdiff_t CTriggerIcePathVolume = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CDoormanBombProjectile {
            constexpr std::ptrdiff_t CCitadel_Bounce_Pad = 0xc30; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_BatSwarmExtraProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierSleepBombAuraVData {
            constexpr std::ptrdiff_t ability_flame_dash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_DustStorm {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NPCAbility_Shield {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTeleportDestination {
            constexpr std::ptrdiff_t CSpriteAlias_env_glow = 0x7f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointBroadcastClientCommand {
            constexpr std::ptrdiff_t CDynamicLight = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SwingLine_SwingingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_WebWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
            constexpr std::ptrdiff_t CModifier_Drifter_Rend_BulletLifesteal = 0x150; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Burrow {
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantBranchWallVData = 0x18f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLashFlogDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NullificationAuraAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_HeroGravity = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Passive_CloakVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_PrismBlastVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_AoEWave {
            constexpr std::ptrdiff_t CCitadel_Modifier_Succor_MoveVData = 0x770; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Announcer {
            constexpr std::ptrdiff_t CCitadel_Announcer = 0xbc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPhysicsSpring {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatGoingUp {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Mirage_FireBeetles_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGangActivityVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ViperVenom {
            constexpr std::ptrdiff_t m_vecOrigin = 0x108; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMins = 0x114; // Vector
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SelfVacuum {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shivas_Bracelet_WatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Healbane_Debuff {
            constexpr std::ptrdiff_t CCitadel_Omnicharge_Pendant = 0x1078; // 
        }

        // Parent: m_flCaptureProgress
        // Fields: 0
        namespace CCitadelTriggerCapturePoint {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_WeaponEater {
            constexpr std::ptrdiff_t CCitadelModifierApexWatcherVData = 0x760; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_KothTrooperBuff {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HideoutIntroVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVData_SetMoveType {
        }

        // Parent: None
        // Fields: 1
        namespace CNodeEnt_InfoNodeHint {
            constexpr std::ptrdiff_t CNodeEnt_InfoNodeHint = 0x4f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvMuzzleFlash {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_iItemDefinitionIndex
        // Fields: 0
        namespace CEconItemAttribute {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_ShadowMark_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Disruptive_Charge {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShivDaggerVData {
        }

        // Parent: m_flTransformStartTime
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatForm {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IceGrenade {
            constexpr std::ptrdiff_t CCitadel_Modifier_HornetSnipeVData = 0x750; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InfernalResilience_MeleeVData {
            constexpr std::ptrdiff_t ability_airheart_primary_weapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ApexCombat_Proc {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceProc_DebuffVData {
        }

        // Parent: m_PulseParticle
        // Fields: 0
        namespace CCitadel_Item_TechDamagePulseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier2Boss_AoEWaveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierProjectilePitchingLoopSoundThinker {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CheckNearbyPlayerParry {
            constexpr std::ptrdiff_t If it requires an ability upgrade, what ability property is required for to show? Empty if none = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TinyCharacter {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingSpiritScale {
        }

        // Parent: None
        // Fields: 0
        namespace CBaseTriggerAPI {
        }

        // Parent: m_flFadeOutStart
        // Fields: 1
        namespace CNPC_Boss_Tier2 {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelShopTunnelTrigger {
            constexpr std::ptrdiff_t CCitadelTeam = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTrainControls {
            constexpr std::ptrdiff_t CFuncTrainControls = 0x780; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrismaticGuardVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
            constexpr std::ptrdiff_t ability_unicorn_radiantblast = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HookSelf {
            constexpr std::ptrdiff_t CCitadel_Modifier_Forge_MiniTurret_InnateModifier = 0x350; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceGrenadeDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AfterburnWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Bug {
            constexpr std::ptrdiff_t CNPC_Neutral_Bug = 0xab0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_HideOutTargetSpawnerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_1 = 0xf70; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fencer_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ViperHookBladeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThrowSandDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DeathTax {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ElectricSlippersVData {
            constexpr std::ptrdiff_t upgrade_glass_cannon = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PredatorPrecision {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicCarpet_Summon {
        }

        // Parent: None
        // Fields: 1
        namespace CTonemapController2Alias_env_tonemap_controller2 {
            constexpr std::ptrdiff_t CTonemapController2Alias_env_tonemap_controller2 = 0x4b8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNodeEnt_InfoNodeAir {
            constexpr std::ptrdiff_t CNodeEnt_InfoNodeAir = 0x4f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathTrack {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_flDamageTimeOffset
        // Fields: 0
        namespace CModifier_Fencer_Ultimate_Target_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPunkgoatBlastedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_ClusterGrenadeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TargetPractice {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_PrimaryWeapon = 0x1348; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RocketBarrageVData {
            constexpr std::ptrdiff_t archer_charged_shot_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_APRoundsVData {
        }

        // Parent: m_nNoSpawnHeroID
        // Fields: 0
        namespace CCitadelHeroComponent {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Base {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerItemShopSafeZone {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_SpiritSap {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest04VData = 0x18e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierRestorativeGooVData {
            constexpr std::ptrdiff_t webwall_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPsychicLiftVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VeilWalkerWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CatapultDamageWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerProximity {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SiphonBullets {
        }

        // Parent: None
        // Fields: 1
        namespace CTankTrainAI {
            constexpr std::ptrdiff_t CNullEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AsleepVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LuggageDrag {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_SmokeGrenade {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityDustStormVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Wrecker_BoulderGrenadeVData {
        }

        // Parent: CCitadel_Ability_IceDome
        // Fields: 0
        namespace CCitadel_Ability_IceDome {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFists_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Infuser {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HealEntitiyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Objective_Regen {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CGameText {
            constexpr std::ptrdiff_t CLogicPlayerProxy = 0x0; // 
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_CloakingDevice {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_PhantomStrike {
            constexpr std::ptrdiff_t CCitadel_Item_Disarm = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_SummonDecay {
            constexpr std::ptrdiff_t CCitadel_Ability_Mirage_Teleport = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Cart_VData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Bookworm_KnightCharge {
            constexpr std::ptrdiff_t m_nJetpackFireFX = 0x1470; // ParticleIndex_t
            constexpr std::ptrdiff_t m_vDebugVelocityIntentModelSpace = 0x149c; // Vector
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RocketBarrageVolley {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHornetChainVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AfterburnWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HeadhunterWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Item_Bleeding_Bullets_Active = 0x308; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MetalSkin {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
        }

        // Parent: m_tBeginTimeWithPrewarm
        // Fields: 0
        namespace PlayOfTheGamePlaybackData_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_ResumePoint {
        }

        // Parent: m_ID
        // Fields: 0
        namespace CBaseFlex {
        }

        // Parent: m_bPushTowardsInfoTarget
        // Fields: 1
        namespace CTriggerFan {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CInfoPortalLink {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_PersonalRejuvenator {
            constexpr std::ptrdiff_t CCitadel_Modifier_NearbyEnemyBoostVData = 0x770; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTier3BossInvulnVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPhysHingeAlias_phys_hinge_local {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLogicCase {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoMidBossSpawn {
            constexpr std::ptrdiff_t m_vecStartingPosition = 0x17e0; // Vector
        }

        // Parent: m_flFrequencyY
        // Fields: 0
        namespace CNPC_Neutral_Hideout_CatVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_BearTrap_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Dust_Storm_Thrown {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_HealHost = 0xf78; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Astro_Rifle {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CounterspellWatcher {
            constexpr std::ptrdiff_t CCitadel_Item_PowerShard = 0xff8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_KnockbackAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Slide_Debuff = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_AbilityRechargeTime {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Casting {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Casting = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoGameEventProxy {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Bola {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Viper_VenomVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashDownStrikeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Chrono_TimeWall {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingProcWatcher {
            constexpr std::ptrdiff_t CModifier_SiphonBullets_HealthLoss = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemSmokeBombPreCastModifierVData {
            constexpr std::ptrdiff_t upgrade_trophy_collector = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticReverb_ProcVData {
            constexpr std::ptrdiff_t citadel_ability_tier3boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3BossWaveBeamPreviewVData {
        }

        // Parent: CCitadel_Ability_Sprint
        // Fields: 0
        namespace CCitadel_Ability_Sprint {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelLootTableBase {
        }

        // Parent: None
        // Fields: 0
        namespace CGamePlayerZone {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Airheart_Mark {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelDruidInvisAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HookTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_Chrono_PulseGrenade_VData = 0x1840; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TrophyCollector {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_DoubleJump {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_FireConCommand {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseToggle {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2Empowered {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_CitadelLocalNavigator {
            constexpr std::ptrdiff_t CAI_CitadelLocalNavigator = 0x60; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_RampUpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_CheatDeath {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ProjectMind {
            constexpr std::ptrdiff_t CCitadel_Modifier_ProjectMind = 0x288; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stimpak_regen {
            constexpr std::ptrdiff_t CCitadel_Item_BaseProjectileAOEModifierVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityMedicHealVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseServerCursor {
        }

        // Parent: m_SequenceName
        // Fields: 1
        namespace CPulseCell_PlaySequence {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_GrandFinaleStage {
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantBranchWall = 0xf78; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Necro_HauntingSkull {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
            constexpr std::ptrdiff_t CAbility_Mirage_Teleport_VData = 0x1b10; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CopyUltPending {
            constexpr std::ptrdiff_t CModifier_Necro_CoffinVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AnimalCurse {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_CapturePointVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_AblativeCoat {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Aura_Apply {
            constexpr std::ptrdiff_t CAbility_Synth_Barrage = 0x0; // 
        }

        // Parent: CCitadel_Modifier_MagicBeam
        // Fields: 1
        namespace CAbility_Synth_Barrage {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_Crescendo_InAOE {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PowerSlash {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Charged_Bomb {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
        }

        // Parent: m_tDeactivationTime
        // Fields: 2
        namespace CCitadel_Bounce_Pad {
            constexpr std::ptrdiff_t CCitadel_Ability_Bebop_LaserBeam = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Targetdummy_2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Modifier_ShadowClone = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GhostBloodShard {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneSurge {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier3_DamagePulse {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BarrierTrackerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CTouchExpansionComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_PlaySceneBase {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_LerpCameraSettings {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFuncInteractionLayerClip {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_LightningBall = 0x12f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidHelicopterSeedsVData {
            constexpr std::ptrdiff_t projectile_airheart_floatingbomb = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CopyUlt {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_CrowdControl_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_BatSwarmVData = 0x1bb8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Vandal_Ability03 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Aerial_Assault {
        }

        // Parent: m_vStartPos
        // Fields: 1
        namespace CCitadel_Ability_Mantle {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelProjectile_ImmobilizeTrap {
            constexpr std::ptrdiff_t CTriggerBurrowUnderground = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Aura_Base {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointBlockerAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointBlockerAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_DragonFire {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatBlinkVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceLullabyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_WallStunVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierAirLiftGrabVData {
            constexpr std::ptrdiff_t yakuza_summon_gangster = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShivDashVData {
            constexpr std::ptrdiff_t citadel_ability_void_sphere = 0x0; // 
        }

        // Parent: CCitadel_Ability_StormCloud
        // Fields: 0
        namespace CCitadel_Ability_StormCloud {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_CosmeticItem_Snowball_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VeilWalkerWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_WarpStone_Caster {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcticBlast_Freeze_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CItemPhantomStrike_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Intrinsic_Base {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerDetectBulletFire {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DazzlingOrbWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_WallDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Necro_WallDebuff = 0x250; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_PlasmaFlux {
            constexpr std::ptrdiff_t m_ExplodeBaseParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ExplodeFriendlyParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_hProjectile
        // Fields: 0
        namespace CAbilityTargetdummy3VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityHealingSlashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTangoTetherTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VoidSphereBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier3_DamagePulseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Item_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GraveStoneVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bookworm_KnightBarrier {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Mirage_Tornado_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatFormPounceVData {
            constexpr std::ptrdiff_t citadel_gravestone_blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bounce_Pad_Ally {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bounce_Pad_Ally = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySlideVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpiritBurnEnemyTrackerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3Boss_Wave_Target {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InstantReload = 0xf80; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearbyAlliesResistVData {
        }

        // Parent: tools/images/pulse_editor/requirements.png
        // Fields: 1
        namespace CPulseCell_PickBestOutflowSelector {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatSigilAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ComboBreaker {
            constexpr std::ptrdiff_t CCitadel_Item_Mystic_Regeneration = 0x10b0; // 
        }

        // Parent: m_flCurveDistRange
        // Fields: 1
        namespace CInfoFan {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingle {
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability04 = 0xf70; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeSelf {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Arcane_Eater_Watcher {
            constexpr std::ptrdiff_t CCitadel_Item_ModDisruptor = 0xff8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff {
            constexpr std::ptrdiff_t CItemAOESilenceAuraVData = 0x888; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_PlasmaFlux_Trigger {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_CooldownOnMiss {
            constexpr std::ptrdiff_t CCitadel_Modifier_TechBurst_ProcVData = 0x878; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartChargeBlastVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Fathom_LurkersAmbush_Debuff_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TangoTetherTarget {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_hLastCastTarget
        // Fields: 1
        namespace CCitadel_Ability_Nano_Pounce_Instant {
            constexpr std::ptrdiff_t CCitadel_Ability_MageWalk = 0xff0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shadow_Strike_Debuff {
            constexpr std::ptrdiff_t CModifier_CloakingDevice_Active_Ambush_VData = 0x920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_VolumetricEventSensorOnStartedArgs_t {
        }

        // Parent: m_bGamePaused
        // Fields: 0
        namespace CGameRules {
        }

        // Parent: None
        // Fields: 1
        namespace CFish {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_NetworkManager {
            constexpr std::ptrdiff_t CAI_NetworkManager = 0x4a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CHandleTest {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicNPCCounter {
            constexpr std::ptrdiff_t CLogicActiveAutosave = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_InfoTrooperSpawnAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Clone {
            constexpr std::ptrdiff_t m_vRightVectorWS = 0x110; // VectorWS
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakBreachVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shakedown_Target {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_Self {
            constexpr std::ptrdiff_t CCitadel_Modifier_Astro_Rifle_Self = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest06VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SurgingPowerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ComboBreakerHeal {
            constexpr std::ptrdiff_t m_AOEModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltimateBurst_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TrooperBossGrenade {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritResilience = 0x250; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TriggerPush {
            constexpr std::ptrdiff_t CCitadel_Modifier_RevealTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelHotelExitTrigger {
            constexpr std::ptrdiff_t CCitadelHotelExitTrigger = 0x8e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CRegenerateZone {
            constexpr std::ptrdiff_t CCitadel_Modifier_Hero_Testing_Damage = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPregameHeroDraftButton {
            constexpr std::ptrdiff_t CCitadelPregameHeroDraftButton = 0xcf0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierGravityLassoEnemyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_RechargingBullets {
        }

        // Parent: CCitadel_WeaponUpgrade_ExpressShot
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_ExpressShot {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_TechDamagePulse {
            constexpr std::ptrdiff_t CCitadel_Modifier_HunterAuraTarget = 0x270; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Movement {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Movement = 0xe0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CRagdollConstraint {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncVehicleClip {
            constexpr std::ptrdiff_t CFuncVehicleClip = 0x780; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakHeatSinksVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLashGrappleTargetVData {
        }

        // Parent: m_flDebuffScale
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest05VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Siphon_Bullets_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityJumpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StatStealBaseVData {
        }

        // Parent: m_iGravestoneState
        // Fields: 1
        namespace CCitadel_GraveStone_Blocker {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DragonFireGroundAura {
        }

        // Parent: None
        // Fields: 1
        namespace CItem_FleetfootBoots {
            constexpr std::ptrdiff_t CCitadel_Modifier_MeleeCharge = 0x288; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelProjectile {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseTrackedStatsEntity {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: CCitadel_Ability_Airheart_ChargeBlast
        // Fields: 1
        namespace CCitadel_Ability_Airheart_ChargeBlast {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_HauntingSpiritsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Attached {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
            constexpr std::ptrdiff_t citadel_druid_invis_bush = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
        }

        // Parent: m_flTackleStartTime
        // Fields: 1
        namespace CCitadel_Ability_ChargedTackle {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CrushingFists_Watcher {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: m_flValue
        // Fields: 0
        namespace StatViewerModifierValues_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MobileResupplyAura {
            constexpr std::ptrdiff_t CCitadel_Ability_Burrow = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSplash {
            constexpr std::ptrdiff_t CColorCorrection = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointCameraVFOV {
            constexpr std::ptrdiff_t CPointCameraVFOV = 0x508; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Modifier_UltCombo_Self = 0xe0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_HatTrick = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PsychicLift {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChangeTeam {
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerAddModifier {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_2_Aura {
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_WarpStone {
        }

        // Parent: None
        // Fields: 0
        namespace CPrecipitationVData {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncMoveLinear {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_TrackingBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Spotlight {
            constexpr std::ptrdiff_t CCitadel_FissureWall = 0xac0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Affliction_Debuff_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_Pounce_Self {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerUltimate_Invincible {
            constexpr std::ptrdiff_t CCitadel_Ability_PowerSlash = 0x1640; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shield {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_RechargingBulletsVData = 0x19b8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowImmunity {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpiritBubbleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingBoonScale {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_MidBossVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPhysMotorAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelPlayerBotNPCBrain {
            constexpr std::ptrdiff_t CCitadel_Pickup_Modifier = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Pickup_Item = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScriptItem {
            constexpr std::ptrdiff_t CScriptItem = 0xb40; // 
        }

        // Parent: None
        // Fields: 0
        namespace CDynamicPropAlias_prop_dynamic_override {
        }

        // Parent: None
        // Fields: 1
        namespace CBaseTrigger {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Grit {
            constexpr std::ptrdiff_t CCitadel_Item_Camouflage = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseLockonAbilityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PermanentPickupVData {
        }

        // Parent: None
        // Fields: 1
        namespace CNPCSpawnDestination {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointPush {
            constexpr std::ptrdiff_t CPhysHinge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Neutral_Hideout_RabbitVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_NeutralBugVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrismaticGuard {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartRocketeer4VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifire_Priest_FlashBangBurn {
            constexpr std::ptrdiff_t CCitadel_Ability_ProximityRitual_VData = 0x1e98; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoT {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
            constexpr std::ptrdiff_t upgrade_restorative_locket = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_AmmoScavenger_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseBulletPreRollProcVData {
        }

        // Parent: m_SourceItemID
        // Fields: 0
        namespace StolenAbilityPair_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_EntFire {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPunchable_Gold {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Gold = 0x110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tokamak_EnemySmokeAOE = 0x188; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_BloodBomb {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_beam02
        // Fields: 0
        namespace CCitadel_Item_PrismBlast {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_CopyUltVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirLift_Grab {
            constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VandalOverflow {
        }

        // Parent: m_bShouldTriggerSlowGetup
        // Fields: 0
        namespace CCitadel_Ability_Slide {
        }

        // Parent: m_strWeaponShootSound
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData {
            constexpr std::ptrdiff_t upgrade_health_regen_aura = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SuperNeutralChargeActive {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RebirthCredit {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CHitboxComponent {
        }

        // Parent: m_bIsHelperAvailableNet
        // Fields: 1
        namespace CNPC_FamiliarHelper {
            constexpr std::ptrdiff_t server = 0x90110; // 
        }

        // Parent: m_vMins
        // Fields: 2
        namespace CCitadelSoundEntityOBB {
            constexpr std::ptrdiff_t m_TimeWallHitParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TimeWallHitTimerParticle = 0x108; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_nMinCPULevel
        // Fields: 1
        namespace CRopeKeyframe {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_KnightBarrierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_SelfHealVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GenericPerson_1 {
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability02 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierRiotProtocolBuffVData {
            constexpr std::ptrdiff_t yakuza_kobun = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierUppercuttedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TrophyCollectorPassiveGold {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseCombatCharacter {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZombieWallGroundAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_InfiniteMagazine {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LifeSteal {
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Ability02 {
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantHealingTreeVData = 0x1bb8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_ShockTarget2VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Protection_RacketVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Spellbreaker_VData {
        }

        // Parent: m_bDontMove
        // Fields: 1
        namespace CNPC_NecroSkele {
            constexpr std::ptrdiff_t CCitadel_Magic_Beam_Blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ice_Dome_Blocker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BossInvuln {
            constexpr std::ptrdiff_t CCitadel_Modifier_BossInvuln = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TeleportVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidPlantBranchWall {
            constexpr std::ptrdiff_t CCitadel_Modifier_TargetPracticeEnemyVData = 0xa50; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityThumper1VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_WeaponShieldingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Disarm_VData {
            constexpr std::ptrdiff_t super_neutral_charge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierTier2BossLaserBeamVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_OneVsOne {
            constexpr std::ptrdiff_t ECitadelAbilityHUDElementType_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_LocalNavigator {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPathQueryComponent {
        }

        // Parent: m_flProgress
        // Fields: 1
        namespace CCitadelControlPointTrigger {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_AerialAssault {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_RocketBarrage = 0x1480; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLogicRelay {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_HopOutLockout {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Punkgoat_BlastedHealth {
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_ScaldingSpray = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Punkgoat_BlastedHealthWatcher {
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_Pounce_Instant = 0x0; // 
        }

        // Parent: CCitadel_Ability_Fencer_ThrowBlade
        // Fields: 1
        namespace CCitadel_Ability_Frank_ReviveVData {
            constexpr std::ptrdiff_t citadel_ability_hornet_sting = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_Pulse_Target {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ShakedownPulseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityMeleeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RebuttalWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CitadelItemVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BarrierTracker {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeroRefresh {
            constexpr std::ptrdiff_t CCitadel_Modifier_LearningHeroAbility = 0xe0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InShopTunnel {
            constexpr std::ptrdiff_t AdditionalAbilities_t = 0x20; // 
        }

        // Parent: None
        // Fields: 0
        namespace SequenceHistory_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_ItemServices {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_OutflowConnection {
        }

        // Parent: CCitadel_Modifier_VoidSphere
        // Fields: 1
        namespace CProjectile_Stomp_Projectile {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_StackingDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantHealingTreeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Cart {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckerSalvageVData {
        }

        // Parent: m_BombAttachedParticle
        // Fields: 0
        namespace CCitadel_Modifier_StickyBombAttachedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ZipLine_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_ScalingAltFire {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shadow_Strike_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_Wave_Target = 0x2d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_Stagger_WatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNavLinkAreaEntityNpcUserList_t {
        }

        // Parent: None
        // Fields: 1
        namespace CTestPulseIO {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerTrooperDamageReductionDetector {
            constexpr std::ptrdiff_t CTriggerTrooperDamageReductionDetector = 0x8e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Familiar_Asleep {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerSurge = 0x150; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatGoingUp_LingeringAirControl {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_SelfHeal {
            constexpr std::ptrdiff_t CAbility_Fathom_LurkersAmbush = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SettingSun_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_WreckerScrapBlast {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IncendiaryDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_SalvoBullet = 0x330; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_WeaponDamage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_HideOutTargetSpawner {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerMidBossShield {
            constexpr std::ptrdiff_t CTriggerMidBossShield = 0x910; // 
            constexpr std::ptrdiff_t m_nNumEnemyPlayers = 0x910; // int8
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 1
        namespace CCitadel_Destroyable_Building {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTeamRelativeParticleSystem {
            constexpr std::ptrdiff_t CTeamRelativeParticleSystem = 0xd18; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_DivinersKevlar {
            constexpr std::ptrdiff_t CCitadel_Modifier_DisarmProcWatcherVData = 0x890; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_FieldSentryVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_UnrestrictedMotorMovement {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_LookTarget {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachedVData {
        }

        // Parent: CCitadel_Ability_Familiar_AltWeapon
        // Fields: 1
        namespace CCitadel_Ability_Familiar_AltWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_DeathTaxTechAmp = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CopyUltVData {
        }

        // Parent: m_TargetDebuffModifier
        // Fields: 0
        namespace CCitadel_Ability_Magician_MagicBoltVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability04 {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTestVData {
            constexpr std::ptrdiff_t citadel_shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Galvanic_Storm_EffectVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DiminishingSlow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unstoppable {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UnstoppableVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBulletRedirectVolume {
            constexpr std::ptrdiff_t CCitadelBulletRedirectVolume = 0x7a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNodeEnt_InfoNodeAirHint {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGamePlayerEquip {
            constexpr std::ptrdiff_t CGamePlayerEquip = 0x7a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointEntityFinder {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierDruidLeechSeed {
        }

        // Parent: m_LifeDrainTargetModifier
        // Fields: 0
        namespace CCitadel_Modifier_Frank_PainAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_Pulse_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TangoTether_TetherReceiverVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
            constexpr std::ptrdiff_t CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy = 0xe8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bull_HealVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpilledBloodThinkerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBulletsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilverBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStat {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphDef {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_MidBoss {
            constexpr std::ptrdiff_t CNPC_MidBoss = 0x18e0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierTier3BossAoeWaveAuraVData {
            constexpr std::ptrdiff_t upgrade_cloaking_device = 0x0; // 
            constexpr std::ptrdiff_t upgrade_prism_blast = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_ShockTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TurretClone_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gravity_Lasso_Self {
            constexpr std::ptrdiff_t CCitadel_Ability_ShieldedSentry = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_BubbleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PullDownToGround {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceSilenceContraptionsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicPlayerProxy {
            constexpr std::ptrdiff_t CLogicBranchList = 0x0; // 
        }

        // Parent: m_bRollOnceForAllBulletsInAShot
        // Fields: 0
        namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_CheatDeath_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierRapidFireChannelVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FlyingStrikeTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Spinning_Blade {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bomber_Ability03 {
            constexpr std::ptrdiff_t CCitadelAbilityDruidAbility04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FireBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Surging_Power {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_SiphonBulletsVData = 0x18b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerControllerAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CSimpleMarkupVolumeTagged {
            constexpr std::ptrdiff_t CSimpleMarkupVolumeTagged = 0x7c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEnvSoundscapeAlias_snd_soundscape {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Boss_Tier3VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hideout_Teleport {
            constexpr std::ptrdiff_t CCitadelHeroComponent = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SwingLineVData {
        }

        // Parent: m_AuraModifier
        // Fields: 0
        namespace CCitadel_Modifier_BigBoltVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LurkersAmbush_InvisVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GenericPerson_4 {
            constexpr std::ptrdiff_t CCitadel_Ability_Fencer_ThrowBladeVData = 0x1c48; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityGenericPerson1VData {
            constexpr std::ptrdiff_t ability_fortuna_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Opera_Ability02 {
        }

        // Parent: m_flBombBonusHits
        // Fields: 1
        namespace CCitadel_Ability_StickyBomb {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeSelfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityChronoSwapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechCleaveDamageTaken_t {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVitalitySuppressorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityMantleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TurnCameraToTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CRenderComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CWaterBullet {
            constexpr std::ptrdiff_t CWaterBullet = 0xa90; // 
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerSoundscape {
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t m_hScriptScope = 0x8; // HSCRIPT
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDruidInvisAura {
            constexpr std::ptrdiff_t CCitadelDruidInvisAura = 0x110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Doorman_Cart_Projectile {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Nikuman {
            constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_LeapParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strInFlightAnimGraphParam = 0x19d8; // CGlobalSymbol
        }

        // Parent: None
        // Fields: 0
        namespace CGameModifier_FireConCommandVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityShivDashVData {
            constexpr std::ptrdiff_t operative_umbrella_maneuver = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_CultistSacrifice_VData {
            constexpr std::ptrdiff_t upgrade_superacolytegloves = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicClarityWatcherVData {
            constexpr std::ptrdiff_t upgrade_cold_front = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TeamRelativeParticleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPunchableNeutralGoldVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPointTeleportAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CItemParachute {
            constexpr std::ptrdiff_t server = 0x80110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_MagicBolt {
        }

        // Parent: m_flNextShotTime
        // Fields: 0
        namespace CCitadel_CosmeticItem_Snowball {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InHideoutMap {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointChildModifier {
            constexpr std::ptrdiff_t CPointChildModifier = 0x4a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatFlipMaxHealthBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AnimalCurseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakHeatSinksInherentVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpreadingFire_DOT {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcarusWingsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColossusActive {
            constexpr std::ptrdiff_t CCitadel_Item_SpiritSap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicShock_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AcolytesGlove {
            constexpr std::ptrdiff_t CCitadel_Item_RejuvTrackingProjectile = 0x0; // 
        }

        // Parent: m_nTotalPausedTicks
        // Fields: 4
        namespace CShatterGlassShardPhysics {
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t m_hShardHandle = 0x8; // uint32
            constexpr std::ptrdiff_t m_vecPanelVertices = 0x10; // CUtlVector<Vector2D>
            constexpr std::ptrdiff_t m_vLocalPanelSpaceOrigin = 0x28; // Vector2D
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidHelicopterSeeds {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatFlipDamageBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_GenericPerson_2 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SettingSunThinker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ProjectMind {
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_VenomVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MetalSkinVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2Boss_StatTracker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RespawnCredit {
            constexpr std::ptrdiff_t CCitadel_Modifier_Root = 0xd0; // 
        }

        // Parent: m_bvEnabledStateMask
        // Fields: 0
        namespace CModifierProperty {
        }

        // Parent: m_bAlignCameraOnAutoDismount
        // Fields: 3
        namespace CCitadelTeleportTrigger {
            constexpr std::ptrdiff_t server = 0x70108; // 
            constexpr std::ptrdiff_t m_iszModifierName = 0x8e0; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_tModifier = 0x8e8; // CUtlStringToken
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Weakpoint {
            constexpr std::ptrdiff_t CNPC_Neutral_Weakpoint = 0x7a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Cyclone {
            constexpr std::ptrdiff_t CCitadel_Ability_Protection_RacketVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3Boss_EffigyVData {
        }

        // Parent: m_flRadius
        // Fields: 1
        namespace CPathParticleRope {
            constexpr std::ptrdiff_t CMarkupVolume = 0x788; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_DoubleHit {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Caster_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Thumper_3 {
            constexpr std::ptrdiff_t server = 0x601ff; // 
        }

        // Parent: m_DroneModifier
        // Fields: 0
        namespace CAbilityWreckerUltimateVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BulletFlurryVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LifeDrainVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Base {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_SpiderProjectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_KickFlip = 0x0; // 
        }

        // Parent: m_bImpulseApplied
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_RocketBooster {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_HealthRegenAura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T2Boss_Staggered {
            constexpr std::ptrdiff_t ProjectileInfo_t = 0x398; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_NPCAbility_Shield_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCredits {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_AttachLaunchOff {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fear_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Wrecker_UltimateThrowEnemyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LightningBallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Dazed {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ZiplineBoost {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_VexBarrier = 0xff8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Arcane_Eater_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_Teleport = 0xf98; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Containment_Victim {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Trooper_InEnemyBaseResistVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelLootTable {
        }

        // Parent: None
        // Fields: 2
        namespace CInfoTutorialController {
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t m_ZoneParticle = 0x4a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ArcticBlast {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerGenerator {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerGenerator = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_BarrageVData {
            constexpr std::ptrdiff_t synth_pulse = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Haze_StackingDamage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shivas_Bracelet_Watcher {
        }

        // Parent: m_GroundDashCancelExecuteTime
        // Fields: 1
        namespace CCitadel_Ability_Dash {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFishPool {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_arrForceSubtickMoveWhen
        // Fields: 0
        namespace CPlayer_MovementServices {
        }

        // Parent: None
        // Fields: 0
        namespace CRagdollPropAlias_physics_prop_ragdoll {
        }

        // Parent: None
        // Fields: 1
        namespace CBreakableProp {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLightEntity {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoDynamicShadowHintBox {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_vecSecondarySkeletons
        // Fields: 1
        namespace CBaseAnimGraphController {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shiv_Defer_Damage {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepDagger_Drowsy {
            constexpr std::ptrdiff_t CCitadel_Modifier_SleepDagger_Drowsy = 0x250; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bull_Leap_Boosting {
            constexpr std::ptrdiff_t CCitadel_Ability_RocketBarrageVData = 0x19d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_StaticCharge_V2 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MeleeCharge {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireRateAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Shadow_Strike_Watcher = 0x2a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SilencerProcActive {
            constexpr std::ptrdiff_t CCitadel_Modifier_ArcaneEaterProcVData = 0x790; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_Scheduler {
        }

        // Parent: None
        // Fields: 0
        namespace CBuoyancyHelper {
        }

        // Parent: None
        // Fields: 1
        namespace COrnamentProp {
            constexpr std::ptrdiff_t server = 0x80110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_ModDisruptor {
            constexpr std::ptrdiff_t m_hRicochetModifier = 0xf78; // CModifierHandleTyped<CCitadel_Modifier_ApexCombat_Proc>
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperNeutralGrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RapidFire {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ReturnFireVData {
            constexpr std::ptrdiff_t citadel_ability_tier3boss_drop_bombs = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_CatAnimating {
            constexpr std::ptrdiff_t m_CachedTarget = 0xf70; // CHandle<CBaseEntity>
        }

        // Parent: None
        // Fields: 0
        namespace CMarkupVolumeTagged_NavCitadel {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Werewolf_HuntAura_Werewolf {
            constexpr std::ptrdiff_t m_LiftModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_TargetParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TargetCastSound = 0x1908; // CSoundEventName
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_GlassCannon {
        }

        // Parent: None
        // Fields: 0
        namespace CModelPointEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierBossInvulnVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_ShockTarget2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SalvoBullet {
            constexpr std::ptrdiff_t CAbilityPowerSurgeVData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirLiftExplodingAlly {
            constexpr std::ptrdiff_t CCitadel_Modifier_FlyingStrikeTarget = 0xd0; // 
        }

        // Parent: CCitadel_Ability_HornetLeap
        // Fields: 0
        namespace CCitadel_Ability_HornetLeap {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilencedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_AOESilence_Target {
            constexpr std::ptrdiff_t CCitadel_Item_ArcticBlast = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fervor_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BlastPush {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Basic_HealthRegen {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CRectLight {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AbilityName {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_GuardianWard {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFilterMultiple {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_Gravestone_Buff {
        }

        // Parent: CCitadel_Ability_Drifter_Hunger
        // Fields: 1
        namespace CCitadel_Ability_Drifter_Hunger {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_RocketLauncher_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGarbageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PatronsBlessingTarget {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierGlitchVData {
            constexpr std::ptrdiff_t upgrade_diviners_kevlar = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VitalitySuppressor {
            constexpr std::ptrdiff_t CCitadel_Modifier_T3Boss_AoeWaveAura = 0x288; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTier3BossLaserBeamDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_FireCursors {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTriggerHurt {
            constexpr std::ptrdiff_t CCitadelTriggerHurt = 0x968; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncNavBlocker {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMoverPathNode {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscape {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatTethered {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FearWatcher {
            constexpr std::ptrdiff_t CCitadelAbilityTangoTetherVData = 0x1a38; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FissureWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Parry {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicCarpet_SummonVData {
            constexpr std::ptrdiff_t citadel_ability_tier2boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_FocusLens_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Announcer_Base {
            constexpr std::ptrdiff_t CCitadel_Announcer_Base = 0xba0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelBoomerangProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_FuryTrance {
            constexpr std::ptrdiff_t CCitadel_Modifier_IcarusWingsVData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncBrush {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatPullVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GangActivity_AbilitySwap {
            constexpr std::ptrdiff_t CCitadel_Modifier_RadiantFlareBonusDamage = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trappers_Bolo {
            constexpr std::ptrdiff_t CCitadel_Ability_Trappers_Bolo = 0x1298; // 
        }

        // Parent: CCitadel_Ability_PsychicLift
        // Fields: 0
        namespace CCitadel_Ability_PsychicLift {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_ReturnFireVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trooper_InEnemyBaseResist {
            constexpr std::ptrdiff_t CCitadel_Modifier_InFountain = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TeleportToObjectiveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPickupIdolVData {
        }

        // Parent: None
        // Fields: 1
        namespace CBodyComponentPoint {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_Neutral_Hideout_Rabbit {
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Rabbit = 0xca0; // 
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x1810; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoHeroTestingController {
            constexpr std::ptrdiff_t CRegenerateZone = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysBox {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_vMins
        // Fields: 0
        namespace CSoundEventAABBEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CPlayerTrackedStatsEntity {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: CCitadel_Ability_Familiar_Attach
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Attach {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_StackingDefenseVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VampireBat_BatCloud_Self {
            constexpr std::ptrdiff_t CModifierVandalOverflowVData = 0x920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_WreckingBall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_AOESmokeBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_KineticSashTriggered_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearbyEnemyBoostVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Trooper_ShrineDownBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerModifier {
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x1; // m_nPlayerSlot
        }

        // Parent: None
        // Fields: 1
        namespace CItemSoda {
            constexpr std::ptrdiff_t CItemSoda = 0xa90; // 
        }

        // Parent: m_nFastFireEndTime
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_BurstFire {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritBurnProcWatcherVData = 0x790; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Survival {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Survival = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_KnockbackBuff {
            constexpr std::ptrdiff_t m_DashModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_EnemyPulled {
            constexpr std::ptrdiff_t CCitadel_Modifier_WebWall_Debuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Radiance {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Kobun {
            constexpr std::ptrdiff_t CAbility_Werewolf_FrenzyVData = 0x1ae8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SleepDaggerAsleepVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_OverdriveClip_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DivinersKevlarBuff {
            constexpr std::ptrdiff_t m_PullSound = 0x750; // CSoundEventName
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TimelineTimelineEvent_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPushTrigger {
            constexpr std::ptrdiff_t CCitadelPushTrigger = 0x908; // 
        }

        // Parent: m_bShowLight
        // Fields: 1
        namespace COmniLight {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Pillar {
            constexpr std::ptrdiff_t CAbility_Werewolf_Frenzy = 0x1390; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseModifierAura {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerVolume {
            constexpr std::ptrdiff_t CChangeLevel = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CrowdControl_Diminish_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_CrowdControl_Diminish_Watcher = 0xe8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fathom_ScaldingSpray {
        }

        // Parent: m_SelfModifier
        // Fields: 1
        namespace CAbilityAstroRifleVData {
            constexpr std::ptrdiff_t citadel_ability_chrono_time_wall = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayOfTheGame {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IntervalTimerCursorState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseRequirement {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Airheart_MarkVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorman_BellAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_RocketLauncher_Rocket {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvExplosion {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_vDashStartPos
        // Fields: 0
        namespace CAbility_Fencer_Lunge {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityGenericPerson4VData {
            constexpr std::ptrdiff_t ability_frank_shocktarget2 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Chrono_PulseGrenade {
            constexpr std::ptrdiff_t m_CCitadelMinimapComponent = 0x860; // CCitadelMinimapComponent
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IntensifyingClip {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegenerativeArmor = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_LaserBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NoCatapult {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseState {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace OutflowWithRequirements_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest02 {
            constexpr std::ptrdiff_t m_bStartCooldown = 0xf78; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatCharging {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_AntiSpiritVest {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShakedownPulse {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechBurst_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2Boss_LaserBeam {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Near_Climbable_RopeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CDestructableBuildingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOThreeStringArgs_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_AssignedGold {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ControlPointBlockerAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RadiantFlareBonusDamageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_SpiderJar {
            constexpr std::ptrdiff_t CCitadel_Ability_RiotProtocol = 0xff8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bounce_Pad {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FlameDashBurnVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItemAOERootVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Value_Gradient {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: CGameSceneNode::m_hParent
        // Fields: 1
        namespace CParticleSystem {
            constexpr std::ptrdiff_t CPathWithDynamicNodes = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierUnstickVData {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_PlayEffectOnDeath {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerBrush {
            constexpr std::ptrdiff_t CTriggerBrush = 0x7d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorway_Minimap_Range {
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorway_Minimap_Range = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tengu_UrnVData {
            constexpr std::ptrdiff_t ability_unicorn_dazzlingorb = 0x0; // 
        }

        // Parent: CCitadel_Ability_Hornet_Snipe
        // Fields: 1
        namespace CCitadel_Ability_Hornet_Snipe {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargedBomb {
        }

        // Parent: CCitadel_Ability_FlameDash
        // Fields: 0
        namespace CCitadel_Ability_FlameDash {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CelestialGuidanceVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAerialAssaultVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier2Boss_LaserBeam {
        }

        // Parent: plays for local player victim taking damage from this ability
        // Fields: 0
        namespace CCitadel_Modifier_PullDownToGroundVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PlayerPinged {
            constexpr std::ptrdiff_t AbilityTooltipDetails_t = 0x30; // 
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
        // Fields: 6
        namespace CNPC_Neutral_SinnersSacrifice {
            constexpr std::ptrdiff_t CNPC_Neutral_SinnersSacrifice = 0x1b50; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Pigeon = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Weakpoint = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Weakpoint = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Cat = 0x3; // 
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Rabbit = 0x3; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDruidHealingTree {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_FortunaWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_Revive = 0x1590; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatSigilAura {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier3Boss_Laser_Aura {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_GlassCannon = 0x0; // 
            constexpr std::ptrdiff_t m_flAmountPerSecond = 0xd0; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Doorman_Bomb_DebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_RocketLauncher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Dust_Storm_Aura_Apply {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_VexBarrierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RescueBeam {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Gold_VData {
        }

        // Parent: None
        // Fields: 2
        namespace CProjectile_KnightChargeLeading_Projectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_DamageShare = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_Cadence = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_PullAOE {
            constexpr std::ptrdiff_t CAbilityTargetdummy1VData = 0x1818; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DisarmProc {
        }

        // Parent: m_vPos
        // Fields: 1
        namespace CSoundAreaEntityBase {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boho_ChannelTether_Tether {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_GrandFinale_BuffVData = 0x850; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_Knockback {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_Rend_BulletLifesteal {
            constexpr std::ptrdiff_t m_BurrowPlayerParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoTVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_DyingStar {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHighAlertBuffVData {
        }

        // Parent: m_bIsGrabbing
        // Fields: 0
        namespace CCitadel_Ability_Tengu_AirLift {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bebop_LaserBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LightningBall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StaticChargeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReinforcingCasingsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fervor_Bonuses_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_RegenVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ZiplineSpeed {
            constexpr std::ptrdiff_t CCitadelModifierProjectilePitchingLoopSoundThinkerVData = 0x760; // 
        }

        // Parent: m_tLeapOffTime
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_KickFlip {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_Ability01VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_DoubleHitVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_StackingDefense {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakHotShotVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BloodBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_DebuffImmunityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItemSilenceGlyphVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NeutralDamageGrowth {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Modifier_VData {
        }

        // Parent: m_nBucketCount
        // Fields: 0
        namespace CTimeline {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCursorFuncs {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bubble {
            constexpr std::ptrdiff_t m_AOEModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bolo_Leech {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_SpotlightVData = 0x1970; // 
        }

        // Parent: m_bLanded
        // Fields: 0
        namespace CCitadel_Ability_Tengu_StoneForm {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Viper_SlideBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_SlideBuff = 0x258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
            constexpr std::ptrdiff_t ability_fencer_riposte_target_select = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VacuumAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_PunkGoat_Tether = 0x1228; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ElectricSlippers {
            constexpr std::ptrdiff_t CCitadel_Item_AOERoot = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechCleave {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier3Boss_Base {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_VData {
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
        // Fields: 0
        namespace CCitadel_Modifier_FlameDashGroundAuraVData {
        }

        // Parent: m_nRenderMode
        // Fields: 1
        namespace CBeam {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Bomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_KnightBarrier {
            constexpr std::ptrdiff_t CCitadel_Ability_ThrowSand = 0x1088; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_WreckerScrapBlastDebuffVData {
            constexpr std::ptrdiff_t citadel_ability_werewolf_rifle = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_GlassCannonVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Trooper_ShrineDownBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoData {
            constexpr std::ptrdiff_t CInfoData = 0x830; // 
        }

        // Parent: Water
        // Fields: 5
        namespace CBasePlayerPawn {
            constexpr std::ptrdiff_t m_radius = 0x4a0; // float32
            constexpr std::ptrdiff_t m_flMaxRadius = 0x4a4; // float32
            constexpr std::ptrdiff_t m_iSoundLevel = 0x4a8; // soundlevel_t
            constexpr std::ptrdiff_t m_dpv = 0x4ac; // dynpitchvol_t
            constexpr std::ptrdiff_t m_fActive = 0x510; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Hideout_Cat {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Hideout_Clock {
            constexpr std::ptrdiff_t CCitadelFilterModifier = 0x4e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerSuspendModifier {
            constexpr std::ptrdiff_t CTriggerSuspendModifier = 0x8e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TrapperPoisonJar_Aura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_StasisBomb_Aura {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_FireUserEntityIO {
            constexpr std::ptrdiff_t CGameModifier_FireUserEntityIO = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_DazzlingOrb {
            constexpr std::ptrdiff_t CCitadel_Modifier_WebWall_Debuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_HealHost {
            constexpr std::ptrdiff_t CCitadel_Ability_BulletFlurry = 0x12c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorman_DimishingTimestop {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_Ability01 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_ImmobilizeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLockDownVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Disruptive_Charge {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ExplosiveBarrel {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nikuman {
            constexpr std::ptrdiff_t PG_RisingRamState = 0x90101; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeadshotBoosterWatcher {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HunterAuraTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceProcWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boss_Damage_ProtectionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CBasePulseGraphInstance {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LinkVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IdolReturnTimer {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_AOEMagic {
            constexpr std::ptrdiff_t CAbility_Drifter_StalkersMark_Teleport_VData = 0x1848; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SmokeGrenade {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThrowSandDebuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatFormPounce {
            constexpr std::ptrdiff_t CCitadel_Ability_PunkGoat_GoatFlip = 0x1b00; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearDeathFXVData {
        }

        // Parent: m_flFadeOutStart
        // Fields: 1
        namespace CNPC_TrooperBoss {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: CCitadelItemPickupRejuv
        // Fields: 2
        namespace CCitadelItemPickupRejuv {
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t m_flCameraSideOffset = 0x0; // float32
        }

        // Parent: None
        // Fields: 2
        namespace CAirheartStickyBombInWorld {
            constexpr std::ptrdiff_t m_flHideDuration = 0x750; // float32
            constexpr std::ptrdiff_t m_flRevealDuration = 0x754; // float32
        }

        // Parent: None
        // Fields: 2
        namespace FilterHealth {
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t m_iszEnemyName = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Rutger_Rocket {
            constexpr std::ptrdiff_t CCitadel_CatAnimating = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOE {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_ChannelTether = 0x1190; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest06 {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_HeadshotDamage {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_OverrideTargetIdentifier {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CMathColorBlend {
        }

        // Parent: None
        // Fields: 1
        namespace CShower {
            constexpr std::ptrdiff_t CPushable = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Neutral_Flying_PigeonVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Unicorn_PrismaticGuard {
            constexpr std::ptrdiff_t CCitadel_Ability_WreckerScrapBlast = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartPrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_GunTether {
            constexpr std::ptrdiff_t CAbility_Operative_UmbrellaManeuver = 0x12f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifire_Bookworm_DragonFire {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_ShadowMark_Target {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nearby_Enemy_Boost {
            constexpr std::ptrdiff_t m_bSpellBlockActivated = 0xd0; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStatCurve {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_GraphHook {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScriptNavBlocker {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ParriedStun {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ModDisruptor {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_VehicleTopSpeedScale {
            constexpr std::ptrdiff_t CGameModifier_VehicleTopSpeedScale = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEntityBlocker {
            constexpr std::ptrdiff_t CEntityBlocker = 0x780; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_PainAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FuryTrance_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerUp {
        }

        // Parent: None
        // Fields: 1
        namespace SignatureOutflow_Resume {
            constexpr std::ptrdiff_t SignatureOutflow_Resume = 0x48; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_WebWall {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_UtilityUpgrade_HealthNova {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InstantReload = 0x0; // 
            constexpr std::ptrdiff_t m_flAmountPerSecond = 0xd0; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupTimer {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Neutral_WeakpointVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_DazzlingOrbVData {
            constexpr std::ptrdiff_t ability_unicorn_radiantblast = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_UnloadGun2 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_CripplingSlash {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MageWalk {
        }

        // Parent: m_flLatchedTimeScaleFrac
        // Fields: 1
        namespace CCitadel_Ability_Chrono_KineticCarbine {
            constexpr std::ptrdiff_t m_DragonSpawnParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ChargedShot {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineBoostVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backstabber_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_BurstFireVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_TechDuration {
        }

        // Parent: None
        // Fields: 0
        namespace CPathSimpleAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerActiveWeaponDetect {
            constexpr std::ptrdiff_t CFuncPlatRot = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_Archer_ChargedShot {
        }

        // Parent: m_vPreservedVelocity
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Rocketeer3 {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_Barrage {
            constexpr std::ptrdiff_t CCitadel_SmokeGrenade_Blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Targetdummy_Inherent {
            constexpr std::ptrdiff_t CCitadel_Modifier_Viper_StackingDebuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StickyBombAttached {
            constexpr std::ptrdiff_t CCitadel_Ability_Astro_Rifle = 0x11f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PowerJump {
            constexpr std::ptrdiff_t CModifierDoormanHotelImposterFXVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest02VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_GritVData {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncLadderAlias_func_useableladder {
            constexpr std::ptrdiff_t Touch_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSpriteOriented {
            constexpr std::ptrdiff_t CSpriteOriented = 0x7f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointServerCommand {
            constexpr std::ptrdiff_t CRotDoor = 0x988; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Tier3Boss_DropBombs {
            constexpr std::ptrdiff_t m_SilenceModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x760; // CEmbeddedSubclass<CCitadelModifier>
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
        // Fields: 1
        namespace CPlayerSprayDecal {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Discord_AuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceBomb_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_FireScarabs_HealthLoss_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Synth_Pulse_Escape_VData {
            constexpr std::ptrdiff_t ability_magician_bigbolt = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierThumper_3VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ReinforcingCasings {
            constexpr std::ptrdiff_t CModifier_Upgrade_KineticSashTriggered = 0x158; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BoxingGlove {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MeleeCharge_VData {
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
        // Fields: 1
        namespace CEconEntity {
            constexpr std::ptrdiff_t server = 0x60210; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelViscousBall {
        }

        // Parent: None
        // Fields: 1
        namespace CItemSilenceGlyph {
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
        }

        // Parent: None
        // Fields: 1
        namespace CTankTargetChange {
            constexpr std::ptrdiff_t CTriggerOnce = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RadiantFlareBonusDamage {
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_AirLift = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidLeechSeed {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_TimeOfRevive
        // Fields: 0
        namespace CCitadel_Ability_Frank_Revive {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Protection_Racket {
            constexpr std::ptrdiff_t CCitadel_Werewolf_CripplingSlash = 0x13f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityIncendiaryProjectileVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Discord_Enemy {
            constexpr std::ptrdiff_t m_bIsSideHead = 0x750; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayer_CameraServices {
            constexpr std::ptrdiff_t CCitadelPlayer_CameraServices = 0x180; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicDistanceCheck {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_KnightCharge_Projectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Bomber_ULT = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CatapultStunVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_GoldenIdol {
        }

        // Parent: m_Entity_flBrightness
        // Fields: 1
        namespace CEnvCombinedLightProbeVolume {
            constexpr std::ptrdiff_t CPointEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_CitadelPlayerBotMotor {
            constexpr std::ptrdiff_t CAI_CitadelPlayerBotMotor = 0xf70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidPlantSomething {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trapper_StealSpiritDebuff {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Synth_Affliction_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_WeaponSwap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFistsDebuff_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HollowPoint_Stack {
            constexpr std::ptrdiff_t CCitadel_Item_ShadowStrikeVData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_SelfBuffModifierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NearbyAllyResist {
            constexpr std::ptrdiff_t CCitadel_Modifier_BaseEventProc = 0x208; // 
        }

        // Parent: nIndex
        // Fields: 0
        namespace ViewAngleServerChange_t {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicDistanceAutosave {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuminousStrikeBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_Immobilize {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Operative_UmbrellaManeuver {
            constexpr std::ptrdiff_t CCitadel_Ability_Shiv_KillingBlow_GraphController = 0xe0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FearWatcherVData {
            constexpr std::ptrdiff_t ability_wrecking_ball_throw = 0x0; // 
        }

        // Parent: m_bIsDashing
        // Fields: 2
        namespace CCitadel_Ability_ShivDash {
            constexpr std::ptrdiff_t m_FireRateSlowModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_TetheredModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CItem_ActiveReload_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
        }

        // Parent: m_eAbilityType
        // Fields: 0
        namespace CitadelAbilityVData {
        }

        // Parent: m_ItemID
        // Fields: 0
        namespace ItemImbuementPair_t {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicBranch {
            constexpr std::ptrdiff_t CPulseFuncs_GameParticleManager = 0x1; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_ScriptedSequence {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ShopProp {
            constexpr std::ptrdiff_t CCitadel_ShopProp = 0xcd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTrackChange {
            constexpr std::ptrdiff_t server = 0x70108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TenguUrn_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_HeatSinks_Inherent = 0x1238; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTrackTrain {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvInstructorHint {
            constexpr std::ptrdiff_t CEnvInstructorHint = 0x510; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvWind {
            constexpr std::ptrdiff_t CEnvWind = 0x5d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_TrackingBomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_SpawnZombies_Area {
            constexpr std::ptrdiff_t CAbility_Synth_Affliction_VData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_ShadowClone {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_CloneSingleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCrackshotVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shotgun_Astro_Backwards {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Astro_Shotgun_Toggle {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Kelvin_Frozen {
            constexpr std::ptrdiff_t m_SleepModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CModifierAirRaidVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SilenceProcWatcher {
            constexpr std::ptrdiff_t m_GlowModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_BuffModifier = 0x760; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChainLightning {
            constexpr std::ptrdiff_t CCitadel_Modifier_Item_SmokeBomb_PreCast = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Quarantine {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier3Boss_RocketBarrage {
            constexpr std::ptrdiff_t CItemSingleTargetStunVData = 0x19a8; // 
        }

        // Parent: CScaleFunctionAbilityProperty_HealingBoonScaleVData
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingSpiritScaleVData {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerTier3Phase2Shield {
            constexpr std::ptrdiff_t CTriggerTier3Phase2Shield = 0x918; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventPathCornerEntity {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Swan_Acrobat {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_GraveStone = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_ForceField_PushOut {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Crackshot {
            constexpr std::ptrdiff_t CCitadelModifierDruidLeechSeedVData = 0x750; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDash {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_TechDamage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelBulletTimeWarpVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_PointTalker_Base {
            constexpr std::ptrdiff_t CCitadel_PointTalker_Base = 0xba0; // 
            constexpr std::ptrdiff_t CInfoTeamSpawn = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CDynamicNavConnectionsVolume {
            constexpr std::ptrdiff_t server = 0x40110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CConstraintAnchor {
            constexpr std::ptrdiff_t CPhysConstraint = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_DisableGravity {
            constexpr std::ptrdiff_t CGameModifier_DisableGravity = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_PickupItemSpawnerAPI {
        }

        // Parent: m_flGoingUpTargetElevation
        // Fields: 1
        namespace CCitadel_Ability_PunkGoat_GoatFlip {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSpirits = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_SelfZap {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGangActivityCancelVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SleepBomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HatTrick {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Ult = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierPowerJumpVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MutedVData {
            constexpr std::ptrdiff_t upgrade_silence_glyph = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_Wave_Target {
        }

        // Parent: None
        // Fields: 0
        namespace CitadelStolenAbilitySlot_t {
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: m_flFadeOutStart
        // Fields: 2
        namespace CNPC_BarrackBoss {
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Magic_Beam_Blocker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_SurgingPower {
            constexpr std::ptrdiff_t CCitadel_Item_GuardianWard = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CInfoCitadelHideout {
        }

        // Parent: m_Entity_hLightProbeTexture_SH2_DC
        // Fields: 1
        namespace CEnvLightProbeVolume {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fencer_ThrowBlade {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantBranchWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidInvis {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_SilenceBomb {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_ForceField_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_Salvo {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_ClusterGrenade {
            constexpr std::ptrdiff_t CCitadel_Ability_Opera_Ability02 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelViscousBallVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Weapon_BossTier2 {
            constexpr std::ptrdiff_t m_nDebuffsTotal = 0xd0; // float32
            constexpr std::ptrdiff_t DesiredLaneChanged = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_ScriptConditions {
            constexpr std::ptrdiff_t NPCStatusEffectMap_t = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Hint {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_SettingSun {
            constexpr std::ptrdiff_t CCitadel_RestorativeGooCube = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_Colossus {
        }

        // Parent: None
        // Fields: 0
        namespace CBaseTriggerAbilityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_ZombieWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_Ability04 {
            constexpr std::ptrdiff_t CCitadel_Modifier_GhostBloodShard = 0x2e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage {
            constexpr std::ptrdiff_t CCitadel_Ability_ChargedTackle = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE {
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_Cadence = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wrecker_Ultimate {
            constexpr std::ptrdiff_t CCitadel_Werewolf_UnloadGunVData = 0x1a00; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirRaid {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_bHasHealthForBonuses
        // Fields: 0
        namespace CItemCapacitorVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_KineticSash {
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBullets_Buff = 0x158; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpiritBurnProcWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ReloadSpeed {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Neutral_SinnersSacrifice_Hideout {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_2_AuraVData {
            constexpr std::ptrdiff_t citadel_viscous_ball = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GarbageAura {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_KickFlip = 0x1900; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_RegenerativeArmor {
            constexpr std::ptrdiff_t CCitadel_Modifier_SilenceProc_Immunity = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTeamSpawn {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Victim {
            constexpr std::ptrdiff_t CCitadel_Modifier_HookSelf = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_LoveBitesProc_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_AnimalCurseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityThumper2VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritBurnProcWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritBurnProcWatcher = 0x288; // 
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
        // Fields: 1
        namespace CRopeKeyframeAlias_move_rope {
            constexpr std::ptrdiff_t CRopeKeyframeAlias_move_rope = 0x7d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CConditionalCollidable {
            constexpr std::ptrdiff_t CConditionalCollidable = 0x780; // 
        }

        // Parent: m_flNextStateTime
        // Fields: 2
        namespace CCitadel_Ability_Lash_Ultimate {
            constexpr std::ptrdiff_t CAbility_Fencer_Lunge = 0x0; // 
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ViperVenomProcWatcher {
            constexpr std::ptrdiff_t CCitadel_Ability_TangoTether_Trigger = 0xf88; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShadowPulse_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PatronsBlessingProcWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShieldImpact {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Obscured {
            constexpr std::ptrdiff_t Respawn Settings = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifier {
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
        // Fields: 0
        namespace CPlayer_ObserverServices {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
            constexpr std::ptrdiff_t citadel_ability_primary_weapon_bebop = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BaseHeldItem {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicScript {
            constexpr std::ptrdiff_t CLogicScript = 0x4a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeManagercached_attribute_float_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_HauntingSkull_Area {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachHost {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Thumper_EnemyPulled_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityBullChargeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealthSwap {
            constexpr std::ptrdiff_t CCitadel_Ability_Haze_StackingDamage = 0x10f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CloakOfOpportunityWatcher {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Frenzy = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BerserkerVData {
            constexpr std::ptrdiff_t upgrade_haunting_scream = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_CheatDeathImmunityVData {
            constexpr std::ptrdiff_t upgrade_regenerative_armor = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicShock_Proc {
            constexpr std::ptrdiff_t CCitadel_Item_ArcticBlast = 0x1078; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ExplosiveShotsBulletEntityPair_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphInstance_ServerEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CSceneEntityAlias_logic_choreographed_scene {
        }

        // Parent: None
        // Fields: 1
        namespace CAssignedLaneParticle {
            constexpr std::ptrdiff_t CAssignedLaneParticle = 0x788; // 
        }

        // Parent: None
        // Fields: 1
        namespace CRagdollManager {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShadowCloneVData {
            constexpr std::ptrdiff_t citadel_ability_skyrunner_primaryweapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Yakuza_Shakedown {
            constexpr std::ptrdiff_t CCitadel_Ability_Vandal_Ability03 = 0x0; // 
        }

        // Parent: m_flParrySuccessEndTime
        // Fields: 0
        namespace CCitadel_Ability_MeleeParry {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_SiphonBullets_HealthLoss_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_AutoCleanseVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TrooperGrenade {
            constexpr std::ptrdiff_t CCitadel_Modifier_IcarusWingsVData = 0x840; // 
        }

        // Parent: m_flFadeDuration
        // Fields: 1
        namespace CPostProcessingVolume {
            constexpr std::ptrdiff_t CInfoFan = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Heal_Aura {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierKnockdownVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPointProximitySensor {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BookWorm_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_ShockFullyChargedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierStackingDamageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unstable_Concoction {
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
        // Fields: 0
        namespace CTriggerLook {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_Pulse_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatTethered = 0x5e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepAOE {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Wrecker_Teleport {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Viscous_GooGrenade {
            constexpr std::ptrdiff_t CCitadel_Ability_Fealty = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierIdolReturnTimerVData {
        }

        // Parent: Gameplay
        // Fields: 0
        namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_Coffin {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trapper_Immobilize {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Hornet_Chain {
        }

        // Parent: m_CastParticle
        // Fields: 1
        namespace CCitadel_Ability_StaticCharge_V2_VData {
            constexpr std::ptrdiff_t projectile_dust_storm = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SuperNeutralChargePrepare {
            constexpr std::ptrdiff_t Modifiers = 0x1; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DelayedApply {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Basic_RangedArmorBonus {
            constexpr std::ptrdiff_t How longer after taking no damage will out out of combat regen kick in? = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStatVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_PlayVCD {
        }

        // Parent: CCitadelItemPickupIdol
        // Fields: 1
        namespace CCitadelItemPickupIdol {
            constexpr std::ptrdiff_t m_ChannelParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_BookwormDragon_Projectile {
            constexpr std::ptrdiff_t CAbilityIntimidateVData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Rutger_Pulse_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BeltFed_MagazineVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Magic_Clarity_Buff {
            constexpr std::ptrdiff_t server = 0x601ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LongRangeSlowingTech_Proc {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_BonusItem2
        // Fields: 0
        namespace ItemDraftOption_t {
        }

        // Parent: None
        // Fields: 0
        namespace CMultiplayRules {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPreviewPlayerController {
            constexpr std::ptrdiff_t CCitadelPreviewPlayerController = 0xd38; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysTorque {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMultiSource {
            constexpr std::ptrdiff_t CTestPulseIO = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fortuna_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_LoveBites {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Barrage_Caster {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FissureWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wraith_RapidFire {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_NetShot = 0x1310; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineKnockdownImmune {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerSurge_ChainLightning {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_TrooperNeutralVData {
        }

        // Parent: None
        // Fields: 0
        namespace CitadelHeroData_t {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelFamiliarClonePlayerPawn {
            constexpr std::ptrdiff_t server = 0x301ff; // 
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDruidInvisBush {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Nano_Predatory_Statue {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TimeWall_Aura {
            constexpr std::ptrdiff_t m_HealParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Empty {
            constexpr std::ptrdiff_t CCitadel_Item_Empty = 0xf78; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_HelpingHandsVData {
            constexpr std::ptrdiff_t npc_familiar_helper = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_KnightBarrierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viscous_TelepunchVData {
        }

        // Parent: m_vecCrashPosition
        // Fields: 2
        namespace CCitadel_Ability_Bull_Leap {
            constexpr std::ptrdiff_t m_BounceModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_AllyBounceModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SplitShotBonusDamage {
            constexpr std::ptrdiff_t CCitadel_Item_NullificationAuraVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GlowToTeammates {
            constexpr std::ptrdiff_t CCitadel_Modifier_GlowToTeammates = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseBulletPreRollProc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Healing_Disabled {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_SpotlightAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegeneratingBulletShield = 0x10f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicAuto {
            constexpr std::ptrdiff_t CTriggerBrush = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysicsWire {
            constexpr std::ptrdiff_t CPhysicsWire = 0x4a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncIllusionary {
            constexpr std::ptrdiff_t CBaseFlex = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_MaulingLeap {
            constexpr std::ptrdiff_t CCitadel_Ability_Viscous_Telepunch = 0x16a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Speedlines {
            constexpr std::ptrdiff_t CCitadel_Projectile_RocketLauncher_Rocket = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCrowdControlVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ViperVenomVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GooGrenade {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_TrackingBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HeroGravityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MedicBullets {
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBullets_BulletBuff = 0x170; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Galvanic_Storm_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DivineBarrier_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TrooperNeutralGrenade {
            constexpr std::ptrdiff_t CCitadel_Item_HealthRegenAura = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EntityPinged {
        }

        // Parent: m_hDoor1
        // Fields: 1
        namespace CCitadel_DoorwayPortal {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoDynamicShadowHint {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemWalkBackVData {
        }

        // Parent: None
        // Fields: 1
        namespace CMarkupVolume {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_strParentPathUniqueID
        // Fields: 1
        namespace CPathNode {
            constexpr std::ptrdiff_t server = 0x40110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_BearTrap {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Fathom_LurkersAmbush_Debuff {
            constexpr std::ptrdiff_t CModifier_Fathom_LurkersAmbush_Debuff = 0x250; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Mirage_SandPhantom {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CBaseModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tengu_AirLiftVData {
            constexpr std::ptrdiff_t targetdummy_inherent = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Urn_DebuffVData {
        }

        // Parent: m_arPendingAsyncAbilityReservationSlots
        // Fields: 0
        namespace CCitadelAbilityComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerRemove {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Affliction {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceCrescendoVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierCrowdControlDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Headshot_Damage_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Succor_MoveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HalloweenMaskVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertyMultiStats {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_SimpleAnimatingAIVData {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicGameEventListener {
            constexpr std::ptrdiff_t CLogicGameEventListener = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CServerOnlyModelEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_TransitionFreeze {
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_Hotel_TransitionFreeze = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_AntiSpiritVestVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ViperHookblade {
            constexpr std::ptrdiff_t m_vLaunchPosition = 0xf70; // VectorWS
            constexpr std::ptrdiff_t m_qLaunchAngle = 0xf7c; // QAngle
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Rolling_FireBall {
            constexpr std::ptrdiff_t CCitadel_Ability_TurretClone = 0x1490; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HeroGravity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Colossus_VData {
            constexpr std::ptrdiff_t citadel_ability_tier3boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Apex_Watcher {
            constexpr std::ptrdiff_t CCitadel_Item_GooseEgg = 0x1108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TossUp {
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 1
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMarkupVolumeTagged_Nav {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifer_Viscous_Goo_Aura_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicAutosave {
            constexpr std::ptrdiff_t CLogicScript = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_CitadelMotor {
            constexpr std::ptrdiff_t CAI_CitadelMotor = 0xf90; // 
        }

        // Parent: m_bUseTrail
        // Fields: 0
        namespace CCitadel_Modifier_Necro_HauntingSkull_AreaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_Recast {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SwingLine_Swinging {
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_Immobilize = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
        }

        // Parent: m_TracerParticle
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
            constexpr std::ptrdiff_t citadel_ability_hook = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShieldGuy_Ability03 {
            constexpr std::ptrdiff_t CProjectile_Rutger_Rocket = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_Bounty {
            constexpr std::ptrdiff_t m_nParticleIndexAura = 0x120; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MobileResupply {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wraith_ProjectMind_Shield {
            constexpr std::ptrdiff_t CCitadel_Modifier_Pillar = 0x160; // 
        }

        // Parent: m_tSlowStopTime
        // Fields: 1
        namespace CCitadel_Ability_LifeDrain {
            constexpr std::ptrdiff_t CCitadel_Ability_IncendiaryProjectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThermalDetonator_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelProjectileTouchVolumeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_OnTheHuntVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Necro_CoffinVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantInvisBush {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_Acrobat {
            constexpr std::ptrdiff_t CCitadel_Ability_Rolling_FireBall = 0xff8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Trapper_SpiderShield {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RadianceVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SummonGangster {
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_PrismaticGuard = 0x1170; // 
        }

        // Parent: CCitadel_Ability_BulletFlurry
        // Fields: 1
        namespace CCitadel_Ability_BulletFlurry {
            constexpr std::ptrdiff_t m_sAfterburnParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Lash {
            constexpr std::ptrdiff_t CTriggerIcePathVolume = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PristineEmblem {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DiscordVData {
        }

        // Parent: None
        // Fields: 0
        namespace CSingleplayRules {
        }

        // Parent: m_iMinWind
        // Fields: 0
        namespace CEnvWindShared {
        }

        // Parent: None
        // Fields: 1
        namespace CPointPrefab {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_WallTether {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_ApexCombat {
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperNeutralGrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPunchable_Rejuv {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Rejuv = 0xe8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvInstructorVRHint {
            constexpr std::ptrdiff_t CEnvSpark = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unicorn_PrismaticGuardVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_BouncyProjectileVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hunger_Target {
            constexpr std::ptrdiff_t CCitadel_Ability_BookWorm_PrimaryWeaponVData = 0x19c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseYamatoAbility {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SnakeDashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HealthSwapPrecastVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBullets_Buff {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechOverflowProcWatcher {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NPC_OOC_RegenVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStatCurveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_SmokeGrenade_Blocker {
        }

        // Parent: None
        // Fields: 1
        namespace CPrecipitation {
            constexpr std::ptrdiff_t CPrecipitation = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCommentaryViewPosition {
            constexpr std::ptrdiff_t CPrecipitation = 0x0; // 
        }

        // Parent: BotDataManifest_global_server
        // Fields: 1
        namespace CCitadel_BaseProp_MidStairs {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Projectile_WreckingBall {
            constexpr std::ptrdiff_t m_RestorativeGooParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_RestorativeGooSelfParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_RestorativeGooModifier = 0x19d8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_NPCAbility_Vanguard_AOEBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvGlobal {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLogicNPCCounterOBB {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_AttachHeal {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_Ability04 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SnakeDash {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Wrecker_UltimateVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PassiveBeefy {
            constexpr std::ptrdiff_t CCitadel_Doorman_Bomb_DebuffVData = 0x790; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityStormCloudVData {
            constexpr std::ptrdiff_t citadel_ability_gunslinger_demon_carbine = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Muted {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseEventProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPunchableNeutralGold {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelSpeedBoostTrigger {
            constexpr std::ptrdiff_t CCitadelSpeedBoostTrigger = 0x8e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Guided_Arrow {
            constexpr std::ptrdiff_t CCitadel_Ability_AbilityName = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FrenzyAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPlatTrigger {
            constexpr std::ptrdiff_t CTriggerDetectExplosion = 0x0; // 
        }

        // Parent: m_bMultiplayer
        // Fields: 1
        namespace CSceneEntity {
            constexpr std::ptrdiff_t CSimpleSimTimer = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CChoreoInfoTarget {
            constexpr std::ptrdiff_t CLightOrthoEntity = 0x788; // 
        }

        // Parent: m_flAutoExposureMax
        // Fields: 0
        namespace CTonemapController2 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_TrackingBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_StackingBuff {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Punkgoat_BlastedShred {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_Flashbang {
            constexpr std::ptrdiff_t CCitadel_Modifier_PriestKnockback = 0x170; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_SpiderJar_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ProximityRitual_VData {
            constexpr std::ptrdiff_t citadel_ability_skyrunner_primaryweapon = 0x0; // 
        }

        // Parent: m_flCancelHookTime
        // Fields: 2
        namespace CCitadel_Ability_Hook {
            constexpr std::ptrdiff_t m_EnemyModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WeaponEaterStack {
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeam = 0xf80; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets_HealthLoss {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_ActiveBulletShield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMapSharedEnvironment {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_flCycle
        // Fields: 0
        namespace CNetworkedSequenceOperation {
        }

        // Parent: CNPC_TrooperNeutral
        // Fields: 4
        namespace CNPC_TrooperNeutral {
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t m_iCoverGroupID = 0x4a0; // int32
            constexpr std::ptrdiff_t m_iszSquadName = 0x4a8; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_eTrooperType = 0x4b8; // ENeutralTrooperType
        }

        // Parent: None
        // Fields: 1
        namespace CPhysMagnet {
            constexpr std::ptrdiff_t CPhysMagnet = 0xb00; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_ReturnFire {
            constexpr std::ptrdiff_t m_BuildUpModifier = 0x780; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Discord_Aura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPickupRejuvHeroTestInfoSpawn {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_GunSearching {
            constexpr std::ptrdiff_t m_nTotalSelfHeal = 0x408; // int32
        }

        // Parent: None
        // Fields: 1
        namespace CModifierGangActivityAbilitySwapVData {
            constexpr std::ptrdiff_t viscous_restorative_goo = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLightningBallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TrophyCollectorVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EscalatingExposureProcWatcher {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EscalatingExposure {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UIAbilityHudNotificaitonVData {
        }

        // Parent: None
        // Fields: 0
        namespace CEntityInstance {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ColdFront {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Containment {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelProjectileTouchVolume {
        }

        // Parent: None
        // Fields: 1
        namespace CGameGibManager {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_NeutralCampVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tenacity {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_vecPanelVertices
        // Fields: 0
        namespace ice_path_shard_model_desc_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_StaticCharge {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_BeamWeapon {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicStormWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DummyUnit {
            constexpr std::ptrdiff_t CCitadel_Modifier_ApplyModifierOnDamageTaken = 0xd0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_PointTalker_Idol {
            constexpr std::ptrdiff_t CCitadel_PointTalker_Idol = 0xbc0; // 
            constexpr std::ptrdiff_t m_iGoldReward = 0xb10; // int32
            constexpr std::ptrdiff_t CCitadel_Pickup_Gold = 0xb20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifire_Priest_FlashBangBurnAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_ThrownShiv_Slow_Debuff = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CHandleDummy {
            constexpr std::ptrdiff_t CFuncTankTrain = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncWallToggle {
            constexpr std::ptrdiff_t CFuncWallToggle = 0x788; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Uppercut_Buff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Astro_Rifle_DebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EternalGift {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilverVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicShield_SpiritBuff {
        }

        // Parent: m_flLightScale
        // Fields: 1
        namespace CSkyCamera {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelInteriorTrigger {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_TrackingProjectileApplyModifier {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Staring {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityVandalOverflowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HauntWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
            constexpr std::ptrdiff_t CAbilityCrackshotVData = 0x1b18; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ShadowStepVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_AutoaimServices {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_RestorativeGooCube {
            constexpr std::ptrdiff_t CCitadel_Ability_Thumper_2 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathCornerCrash {
            constexpr std::ptrdiff_t CPathCornerCrash = 0x4c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_HighImpactArmor {
        }

        // Parent: m_flEndAttackableTime
        // Fields: 1
        namespace CItemXP {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPhysPulley {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_AltWeapon {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirDamping {
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatWaitingToPull = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LightningStrikeAreaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3Boss_Phase1 {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerTrooperShrineJumpVolume {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_Frenzy {
            constexpr std::ptrdiff_t m_flLastDamageTime = 0xf78; // GameTime_t
            constexpr std::ptrdiff_t m_iCurrentResistValue = 0xf7c; // int32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_PowerShard {
        }

        // Parent: None
        // Fields: 0
        namespace CCommentaryAuto {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_Gravestone_BuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_CrimsonCannon {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetdummy4VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Intimidate {
            constexpr std::ptrdiff_t CCitadel_Ability_Astro_Rifle = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UppercutClipSize {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletFlurryWindup {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticReverbExplosion {
            constexpr std::ptrdiff_t m_vecDamagedTargets = 0xd0; // CUtlVector<CBaseEntity*>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InvisFading {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelEnergyTower {
            constexpr std::ptrdiff_t server = 0x40108; // 
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
        // Fields: 0
        namespace CTriggerTeamBase {
        }

        // Parent: m_strEnemySkin
        // Fields: 4
        namespace CCitadel_DynamicProp {
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t m_bHitTrigger = 0x90; // CAnimGraphParamRef<bool>
            constexpr std::ptrdiff_t m_eState = 0xb8; // CAnimGraphParamRef<char*>
            constexpr std::ptrdiff_t m_flHealth = 0xe8; // CAnimGraphParamRef<float32>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_KillSummonTrigger {
        }

        // Parent: None
        // Fields: 1
        namespace CSoundStackSave {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NeutralShield {
            constexpr std::ptrdiff_t CCitadel_Modifier_NeutralShield = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidSprout {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: m_vecEndPosition
        // Fields: 1
        namespace CCitadel_Ability_Trapper_WebWall {
            constexpr std::ptrdiff_t CCitadel_Modifier_LuminousStrikeBuffVData = 0x938; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelYamatoBaseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPerchedPredatorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealthSwapVData {
            constexpr std::ptrdiff_t ability_familiar_attach_trigger = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Galvanic_Storm_Effect {
            constexpr std::ptrdiff_t CCitadel_Modifier_AcolytesGlove_VData = 0x950; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_Stomp {
            constexpr std::ptrdiff_t CModifier_WarpStone_Caster = 0xd0; // 
        }

        // Parent: m_spawnedHero
        // Fields: 0
        namespace CitadelHeroSpawnData_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_flAimPitch
        // Fields: 1
        namespace CNPC_ShieldedSentry {
            constexpr std::ptrdiff_t CNPC_Neutral_Hideout_Cat = 0xc90; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_RescueBeam {
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_KothComebackBonusesVData {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicMeasureMovement {
            constexpr std::ptrdiff_t CSimpleMarkupVolumeTagged = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_SpiderAnimatingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcePath_TechPowerLinger {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Sleep {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CDynamicPropAlias_cable_dynamic {
            constexpr std::ptrdiff_t CDynamicPropAlias_cable_dynamic = 0xcd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoKOTHSpawnLocation {
            constexpr std::ptrdiff_t CInfoKOTHSpawnLocation = 0x4b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AirheartStuckBomb {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHighAlertVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Bounce_PadVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierBullChargingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RampSlow {
            constexpr std::ptrdiff_t CCitadel_Modifier_DiminishingSlowVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemXPAssignedEarner_t {
        }

        // Parent: None
        // Fields: 1
        namespace CBaseFlexAlias_funCBaseFlex {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepBomb_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpellShield {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BubbleVData {
            constexpr std::ptrdiff_t upgrade_ricochet = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModelEntity {
            constexpr std::ptrdiff_t m_flGroundOffset = 0x108; // float32
            constexpr std::ptrdiff_t m_flSpinRate = 0x10c; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CInfoCitadelHelperLocation {
            constexpr std::ptrdiff_t CInfoCitadelHelperLocation = 0x4b8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Drifter_BloodBlast_VData {
            constexpr std::ptrdiff_t ability_doorman_doorway = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_PetrifyBolaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltCombo_Self {
        }

        // Parent: CCitadel_Ability_Bebop_LaserBeam
        // Fields: 2
        namespace CCitadel_Ability_Bebop_LaserBeam {
            constexpr std::ptrdiff_t m_SlowModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_StompIgnoreLingerModifier = 0x760; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_ChronoSwap {
            constexpr std::ptrdiff_t m_RestrictionModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ChargeParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Silence_Buildup {
            constexpr std::ptrdiff_t CCitadel_Item_GooseEgg = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CheatDeathVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
            constexpr std::ptrdiff_t upgrade_restorative_locket = 0x0; // 
        }

        // Parent: m_flStartTime
        // Fields: 1
        namespace CEnvDetailController {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTakeDamageInfoAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PriestSilenceBomb_Aura {
            constexpr std::ptrdiff_t CAbility_Rutger_ForceField = 0x1310; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HideoutIntroExit {
            constexpr std::ptrdiff_t CCitadel_Modifier_HideoutIntroExit = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeProxy {
            constexpr std::ptrdiff_t CEnvSoundscapeProxy = 0x538; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Leaping {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Modifier_TargetPracticeSelfVData = 0x850; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierDustStormAuraApplyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletFlurryVData {
        }

        // Parent: m_flStartHeight
        // Fields: 0
        namespace CCitadel_Ability_LashDownStrike {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityChargedShotVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LightningStrikeArea {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Low_Health_Glow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EldritchShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BeltFed_Magazine {
            constexpr std::ptrdiff_t CCitadel_Item_Discord_AuraVData = 0xb28; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets {
            constexpr std::ptrdiff_t m_sBurnParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RebuttalWatcher {
            constexpr std::ptrdiff_t CCitadel_Item_DivinersKevlar = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemStimPakVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpeedBoostVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPickupVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelObserver_MovementServices {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelGameRulesProxy {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item {
            constexpr std::ptrdiff_t CCitadel_Item = 0xf78; // 
        }

        // Parent: CCitadel_Ability_Unicorn_LuminousStrike
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_LuminousStrike {
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamage {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVandalSurgeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Grapple_Air_Control {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PowerSurge {
        }

        // Parent: CCitadel_Ability_FireBomb
        // Fields: 0
        namespace CCitadel_Ability_FireBomb {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_FleetfootBoots_BonusClip {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SpiritResilience {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Stimpak = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySprintVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseFlow {
        }

        // Parent: None
        // Fields: 1
        namespace CRuleEntity {
            constexpr std::ptrdiff_t CRuleEntity = 0x788; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPhysThruster {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LifeSteal_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal_Watcher = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_CripplingSlashVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_Hunt {
            constexpr std::ptrdiff_t CAbilityThumper4VData = 0x1828; // 
        }

        // Parent: CCitadel_Ability_Necro_KillSummon
        // Fields: 1
        namespace CCitadel_Ability_Necro_KillSummon {
            constexpr std::ptrdiff_t CProjectile_GraveStone_Projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Hotel {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Caster {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseShivAbility {
            constexpr std::ptrdiff_t CCitadel_Ability_ShivWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CorpseExplosionThinkerVData {
            constexpr std::ptrdiff_t base_upgrade_projectile_aoe_modifier = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_StalkersMark_Teleport_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointCapturerAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointCapturerAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CInfoPlayerStart {
            constexpr std::ptrdiff_t m_vAccumulatedRootMotion = 0x0; // Vector
            constexpr std::ptrdiff_t m_angAccumulatedRootMotionRotation = 0xc; // QAngle
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_CloneVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityTangoTetherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShieldGuy_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatWaitingToPull = 0x150; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IceDome_AuraModifierBase {
            constexpr std::ptrdiff_t CCitadel_Modifier_IceDome_AuraModifierBase = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Passive_Cloak {
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x880; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Ricochet_Proc {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NonPlayerCamera {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_hDecalMaterial
        // Fields: 1
        namespace CEntityFlame {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: m_materialGroup
        // Fields: 0
        namespace CSkeletonInstance {
        }

        // Parent: None
        // Fields: 0
        namespace CEntityComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CBasePlatTrain {
            constexpr std::ptrdiff_t CSprite = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Familiar_MovingToAttach {
        }

        // Parent: None
        // Fields: 0
        namespace CPointTeleport {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_StalkersMark_PostTeleport {
            constexpr std::ptrdiff_t CModifier_Drifter_StalkersMark_PostTeleport = 0x250; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_Escape {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RespawnCreditVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StatStealBase {
        }

        // Parent: m_vecProcdUnitsThisShot
        // Fields: 0
        namespace CCitadelModifierVData {
        }

        // Parent: m_strTriggerID
        // Fields: 1
        namespace CTriggerGameEvent {
            constexpr std::ptrdiff_t CTimerEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_TrooperBossVData {
        }

        // Parent: None
        // Fields: 1
        namespace CMessageEntity {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvEntityIgniter {
            constexpr std::ptrdiff_t CColorCorrectionVolume = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_FlashbangVData {
            constexpr std::ptrdiff_t mirage_sand_phantom = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityEmpowerBulletVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tengu_StoneFormVData {
        }

        // Parent: m_flFastChargeStartTime
        // Fields: 0
        namespace CCitadel_Ability_Bull_Charge {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DisarmProcWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SlowImmunityVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Passive_Camouflage {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPCMaker {
            constexpr std::ptrdiff_t server = 0x40108; // 
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
        // Fields: 2
        namespace CCitadel_PointTalker {
            constexpr std::ptrdiff_t CInfoTeamSpawn = 0x0; // 
            constexpr std::ptrdiff_t CCitadelPlayerBot = 0x4bd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMarkupVolumeTagged_NavGame {
            constexpr std::ptrdiff_t CBaseMoveBehavior = 0x0; // 
        }

        // Parent: m_tWallDeployFinishTime
        // Fields: 0
        namespace CProjectile_GraveStone_Projectile {
        }

        // Parent: None
        // Fields: 1
        namespace CMultiLightProxy {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Fencer_Ultimate_Caster_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Graf_Ability03 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_ShadowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MedicBulletsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_InstantReloadVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_RocketBarrageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LingeringAssist {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Root {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: m_nMaxDistance
        // Fields: 0
        namespace CCitadelSoundStackFieldOBB {
        }

        // Parent: m_stages
        // Fields: 1
        namespace CPropAnimatingBreakable {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNecro_HauntingSkullEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_Pulse_Aura_VData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_TechCleave {
            constexpr std::ptrdiff_t m_strPurgeSound = 0x18b8; // CSoundEventName
            constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_RadiantBlast {
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_Ability_2 = 0x2e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_AirheartRocketeer3VData {
            constexpr std::ptrdiff_t ability_hat_trick = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fencer_RiposteVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Graf_Ability04 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatCloudVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Pulse_VData {
            constexpr std::ptrdiff_t ability_magician_escape = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_Breach {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_LoveBites = 0x13f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shotgun_Astro {
            constexpr std::ptrdiff_t CProjectile_KnightChargeLeading_Projectile = 0xe70; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityExplosiveBarrelVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ProjectMindVData {
            constexpr std::ptrdiff_t yakuza_shakedown_target = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SplitShotVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_SuperAcolytesGlove_VData {
            constexpr std::ptrdiff_t upgrade_personal_rejuvenator = 0x0; // 
            constexpr std::ptrdiff_t upgrade_aoe_smoke_bomb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseAnimFuncs {
        }

        // Parent: None
        // Fields: 1
        namespace CEconWearable {
            constexpr std::ptrdiff_t CEconWearable = 0xc60; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_NukeMapVData {
            constexpr std::ptrdiff_t fathom_reefdweller_harpoon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData {
            constexpr std::ptrdiff_t cadence_ability_silencecontraptions = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FireBomb {
        }

        // Parent: m_flTimeStopZipping
        // Fields: 1
        namespace CCitadel_Ability_ZipLine {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Camouflage_Invis {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_QuickSilver_Buff {
            constexpr std::ptrdiff_t CCitadel_Modifier_QuickSilver_Buff = 0x158; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NeutralDamageGrowthVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Basic_RangedArmorBonusVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_Navigator {
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
        // Fields: 3
        namespace CItemFlare {
            constexpr std::ptrdiff_t server = 0x70110; // 
            constexpr std::ptrdiff_t m_iszModifierName = 0x8e0; // CUtlSymbolLarge
            constexpr std::ptrdiff_t m_tModifier = 0x8e8; // CUtlStringToken
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_MageWalkVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Omnicharge_Pendant {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_WeaponEaterVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest04 {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_vecPlayerMountPositionBottom
        // Fields: 0
        namespace CFuncLadder {
        }

        // Parent: None
        // Fields: 0
        namespace CFogController {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fencer_Riposte_TargetLifesteal {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Barrage_Caster_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Thumper_2 {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShivDagger {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_Headhunter_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fervor {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneMedallion {
        }

        // Parent: None
        // Fields: 1
        namespace COrbSpawner {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointTemplateAPI {
        }

        // Parent: None
        // Fields: 0
        namespace CItem {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerPush {
            constexpr std::ptrdiff_t CTriggerTeleport = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseProp {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: m_bEnableMipGen
        // Fields: 1
        namespace CInfoOffscreenPanoramaTexture {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointAngularVelocitySensor {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_flFogMaxDensityMultiplier
        // Fields: 1
        namespace CPlayerVisibility {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPointPulseAPI {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_UnloadGunVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VandalOverflow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_CatFormVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SmokeBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_IceGrenadeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BerserkerDamageStack {
            constexpr std::ptrdiff_t Sounds = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 0
        namespace CItemRefresherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_FollowEntity {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: overlay_vars
        // Fields: 1
        namespace CBasePlayerWeapon {
            constexpr std::ptrdiff_t CBreakableStageHelper = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifire_Priest_FlashBangBurnAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPhysForce {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: m_ProviderType
        // Fields: 0
        namespace CAttributeManager {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_HauntingSpiritsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_LeapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierDoormanHotelImposterVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_WeaponSwap {
            constexpr std::ptrdiff_t CAbility_Operative_UmbrellaManeuver = 0x12f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_SelfZapVData {
        }

        // Parent: m_vTargetCastPos
        // Fields: 1
        namespace CCitadel_Ability_FlyingStrike {
            constexpr std::ptrdiff_t ETelepunchState_t = 0x90101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltCombo_TargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Haze_StackingDamage {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargeDragEnemy {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CounterspellWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Delayed_Stun {
            constexpr std::ptrdiff_t m_ModifierSurgingPower = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_HealthGrowthVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_SpeechFilter {
            constexpr std::ptrdiff_t AISquadSlotTargetInfo_t = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace SignatureOutflow_Continue {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerTrooperDetector {
            constexpr std::ptrdiff_t CTriggerTrooperDetector = 0x948; // 
        }

        // Parent: None
        // Fields: 0
        namespace CInfoTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SmokeGrenadeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AbsorbingArmorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_BulletReistVData {
        }

        // Parent: m_nPunchAngleJoltTick
        // Fields: 0
        namespace CPlayer_CameraServices {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Timeline {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_EntOutputHandler {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_KothCashIn {
            constexpr std::ptrdiff_t CCitadel_KothCashIn = 0x1400; // 
        }

        // Parent: m_vTangentIn
        // Fields: 1
        namespace CCitadelZipLineNode {
            constexpr std::ptrdiff_t CCitadelZipLineNode = 0x880; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_UnloadGun2VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boho_ChannelTether_TetherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_CrossbowEquippedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityChargedTackleVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierChargedTackleActiveVData {
            constexpr std::ptrdiff_t ability_magician_copyult = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LightningBullet {
            constexpr std::ptrdiff_t CCitadel_Ability_SmokeBombVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemShrink_RayVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicStormWatcher {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Stamina_Regen_Jump_Reduction {
            constexpr std::ptrdiff_t m_flReloadSpeedPercent = 0x750; // float32
            constexpr std::ptrdiff_t m_bDestroyAfterReload = 0x754; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Damage_Taken_Reduction_Handicap {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DelayedCatapultLaunch {
            constexpr std::ptrdiff_t CCitadel_Modifier_DelayedCatapultLaunch = 0xd0; // 
        }

        // Parent: m_bDucked
        // Fields: 1
        namespace CCitadelPlayer_MovementServices {
            constexpr std::ptrdiff_t server = 0x401ff; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_ZombieWallGroundAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TurretClone_Trigger {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Ability01VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityVandalSurgeVData {
        }

        // Parent: m_bHitWithThisAttack
        // Fields: 1
        namespace CCitadel_Ability_Melee_Base {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_InfiniteMagazineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcaneEaterProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3BossWaveBeamPreview {
            constexpr std::ptrdiff_t CCitadel_Modifier_BerserkerDamageStackVData = 0x930; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TeleportToObjective {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ServerOnly {
            constexpr std::ptrdiff_t CCitadel_Modifier_ServerOnly = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelMinimapBoundary {
            constexpr std::ptrdiff_t CCitadelMinimapBoundary = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterAttributeInt {
            constexpr std::ptrdiff_t CFilterAttributeInt = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Synth_PlasmaFlux {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_Infuser {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InMenuVData {
        }

        // Parent: None
        // Fields: 1
        namespace CKeepUpright {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPointTemplate {
            constexpr std::ptrdiff_t CSoundEventPathCornerEntity = 0x0; // 
            constexpr std::ptrdiff_t m_vMins = 0x560; // Vector
            constexpr std::ptrdiff_t m_vMaxs = 0x56c; // Vector
        }

        // Parent: m_TintColor
        // Fields: 1
        namespace CEnvVolumetricFogController {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Mirage_Teleport_VData {
        }

        // Parent: m_tSlowStartTime
        // Fields: 0
        namespace CAbilityGenericPerson3VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Astro_Shotgun_Toggle_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TargetPracticeDebuff {
            constexpr std::ptrdiff_t CProjectile_Airheart_FloatingBomb = 0xaf0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hornet_Sting {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BullCharging {
            constexpr std::ptrdiff_t CCitadel_Ability_AbilityName = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IcarusWings {
            constexpr std::ptrdiff_t CCitadel_Item_AOE_Tech_Shield = 0x1078; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SuperNeutralShield {
            constexpr std::ptrdiff_t m_HeadShotParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_NeutralSinnerSacrificeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPointModifierThinker {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTemplateNPCMaker {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_SetAnimGraphParam {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_FlashlightServices {
        }

        // Parent: m_CCitadelRegenComponent
        // Fields: 1
        namespace CCitadelAnimatingModelEntity {
            constexpr std::ptrdiff_t CCitadelBaseMusicOBB = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPhysLength {
        }

        // Parent: m_aPlayers
        // Fields: 1
        namespace CTeam {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Evasion {
            constexpr std::ptrdiff_t CCitadel_Ability_Magician_ShadowClone = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_HeatSinks {
            constexpr std::ptrdiff_t CCitadel_Projectile_Petrify = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Targetdummy_3 {
            constexpr std::ptrdiff_t CCitadel_Projectile_Pillar = 0x0; // 
        }

        // Parent: m_SelfModifier
        // Fields: 0
        namespace CAbilityHookVData {
        }

        // Parent: m_vLastVelocity
        // Fields: 1
        namespace CCitadel_Ability_IcePath {
            constexpr std::ptrdiff_t CCitadel_Modifier_RapidFire_AirJuggle = 0x1d0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Priest_Tether {
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_Tether = 0x180; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_VolumetricEventEntity {
            constexpr std::ptrdiff_t CPathAccompany = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicNPCCounterAABB {
            constexpr std::ptrdiff_t CLogicDistanceAutosave = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLaneMarkerPath {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_LuminousStrikeVData {
            constexpr std::ptrdiff_t thumper_ability_1 = 0x0; // 
        }

        // Parent: m_strSwipeTracerParticleRight
        // Fields: 0
        namespace CCitadel_Ability_Fencer_PrimaryWeapon_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IceDome {
            constexpr std::ptrdiff_t CCitadelAbilityIncendiaryProjectileVData = 0x1838; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Wraith_RapidFireVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_PestilenceDrone {
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x1810; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelIdolReturnTrigger {
            constexpr std::ptrdiff_t CCitadelIdolReturnTrigger = 0x930; // 
            constexpr std::ptrdiff_t m_tModifier = 0x8e0; // CUtlStringToken
        }

        // Parent: None
        // Fields: 4
        namespace CPhysicsPropRespawnable {
            constexpr std::ptrdiff_t server = 0x80110; // 
            constexpr std::ptrdiff_t m_OnSpawn = 0x4a0; // CEntityIOOutput
            constexpr std::ptrdiff_t m_OnTrigger = 0x4b8; // CEntityIOOutput
            constexpr std::ptrdiff_t m_bDisabled = 0x4d0; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CEnvBeam {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLightSpotEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_DoorwayPortalBacksideBlocker {
            constexpr std::ptrdiff_t CCitadel_Modifier_Astro_Rifle_SelfVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVData_SetModelScale {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_ClawWeapon {
            constexpr std::ptrdiff_t CCitadel_Projectile_Pillar = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_BloodBlast {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_LoveBitesVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Thumper_1 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GenericPerson_3 {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityRestorativeGooVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Chrono_TimeWallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RocketBarrageVolleyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PristineEmblem_VData {
            constexpr std::ptrdiff_t citadel_ability_tier2boss_aoe_wave = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier3Boss_Laser_Debuff {
        }

        // Parent: m_cellX
        // Fields: 1
        namespace CCitadelBaseAbility {
            constexpr std::ptrdiff_t Gameplay = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTonemapTrigger {
        }

        // Parent: CCitadelBaseDashCastAbility
        // Fields: 1
        namespace CCitadelBaseDashCastAbility {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPassthroughFakeWall {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvShake {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Necro_Coffin {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Barrier {
            constexpr std::ptrdiff_t m_ChannelParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierDruidLeechSeedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_MageWalk {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Mirage_FireBeetles {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_SalvoVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_EmpowerBullet {
            constexpr std::ptrdiff_t m_flTotalPendingHeal = 0xd0; // float32
            constexpr std::ptrdiff_t m_flTotalHeal = 0xd4; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_Ability04VData {
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 0
        namespace CCitadel_Ability_WreckerTeleport {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_IceDomeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPowerJumpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ScalingPowerUpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_TechRange {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPathAccompany {
            constexpr std::ptrdiff_t server = 0x30110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOEntityNameStringArgs_t {
        }

        // Parent: None
        // Fields: 6
        namespace CNPC_YakuzaGangster {
            constexpr std::ptrdiff_t m_mapEntToTimeHit = 0xd0; // CUtlOrderedMap<CHandle<CBaseEntity>,GameTime_t>
            constexpr std::ptrdiff_t m_nNumPlayersAffected = 0xf8; // int32
            constexpr std::ptrdiff_t m_nNumPlayersKilled = 0xfc; // int32
            constexpr std::ptrdiff_t m_playerAngles = 0x100; // QAngle
            constexpr std::ptrdiff_t m_ConeParticle = 0x10c; // ParticleIndex_t
            constexpr std::ptrdiff_t m_flShadowFormSpeed = 0x1818; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerCallback {
            constexpr std::ptrdiff_t CTriggerCallback = 0x8e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Target {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BaseHeldItemVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_Ability03 {
            constexpr std::ptrdiff_t CAbilityEmpowerBulletVData = 0x1828; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SkyRunner_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatSwarmVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GangActivity_Cancel {
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_DemonCarbineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Base_DOT_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CSoundOpvarSetAutoRoomEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_ListenForEntityOutput {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPushable {
            constexpr std::ptrdiff_t CFuncMoveLinearAlias_momentary_door = 0x888; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_ShadowStrike {
            constexpr std::ptrdiff_t m_BuildUpModifier = 0x780; // CEmbeddedSubclass<CCitadel_Modifier_Base_Buildup>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x790; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ImmunityModifier = 0x7a0; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CRotatorTarget {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysicsEntitySolver {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicCollisionPair {
            constexpr std::ptrdiff_t CLogicLineToEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTestEffect {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_GunTetherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LurkersAmbush_Invis {
            constexpr std::ptrdiff_t CCitadel_Modifier_GoatGoingUp_LingeringAirControl = 0x250; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStompVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LifeDrain {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_PainAura_Target = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_HealthNova_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GuardianWard_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_ScriptedSequenceCursorState_t {
        }

        // Parent: None
        // Fields: 5
        namespace CPropDoorRotating {
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t m_bBreakable = 0xf70; // bool
            constexpr std::ptrdiff_t m_isAbleToCloseAreaPortals = 0xf71; // bool
            constexpr std::ptrdiff_t m_currentDamageState = 0xf74; // int32
            constexpr std::ptrdiff_t m_damageStates = 0xf78; // CUtlVector<CUtlSymbolLarge>
        }

        // Parent: m_flSelfIllumScale
        // Fields: 1
        namespace CEnvParticleGlow {
            constexpr std::ptrdiff_t CEnvParticleGlow = 0xd10; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Spiritburn_DOT {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_WeaponShielding = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMathRemap {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: CCitadel_Ability_Familiar_Spotlight
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Spotlight {
            constexpr std::ptrdiff_t CCitadel_Ability_FlameDash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_ChannelTether {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_BigBolt {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: CCitadel_Ability_Targetdummy_1
        // Fields: 0
        namespace CCitadel_Modifier_TetherNoConnectionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Intimidated_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DetentionAmmo {
            constexpr std::ptrdiff_t CCitadel_Item_GuardianWard = 0x1078; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
        }

        // Parent: None
        // Fields: 0
        namespace CSoundOpvarSetOBBWindEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayerPawn {
            constexpr std::ptrdiff_t CCitadelPlayerBot = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_DivineBarrier {
            constexpr std::ptrdiff_t m_flLastTickTime = 0xd0; // GameTime_t
        }

        // Parent: None
        // Fields: 0
        namespace CAI_CitadelNavigator {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_StealLifeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepBomb_Asleep {
            constexpr std::ptrdiff_t CCitadel_Modifier_SleepBomb_Asleep = 0x180; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LockDown_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BurrowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletFlurry {
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SmokeBomb {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hornet_Snipe {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bomber_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Modifier_ChronoSwap_BubbleMoveVData = 0x9f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_KineticSashTriggered {
            constexpr std::ptrdiff_t m_LastHitShotID = 0xd0; // ShotID_t
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SilenceProc_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Ricochet_Proc = 0x320; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpellShieldVData {
        }

        // Parent: m_iszStackName
        // Fields: 0
        namespace PhysicsRagdollPose_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPropDataComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CScriptTriggerOnce {
            constexpr std::ptrdiff_t CScriptTriggerOnce = 0x908; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLightOrthoEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_CultistSacrifice {
            constexpr std::ptrdiff_t CCitadel_Modifier_EternalGift = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItem_ResonantHealing {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CatapultStun {
            constexpr std::ptrdiff_t CCitadel_Modifier_CatapultStun = 0x100; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInWorldKeyBindPanel {
            constexpr std::ptrdiff_t CInWorldKeyBindPanel = 0x938; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_PickupItemSpawnerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatWaitingToPull {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_FeatherBoomerang {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_NukeMap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySpiderShieldVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_AnthemBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_AnthemBuff = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RestorativeGoo {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_IcePathVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Chrono_KineticCarbineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_BloodBomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpeedBoost {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpeedBoost = 0xd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountInstanceState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerTeleport {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Camouflage {
            constexpr std::ptrdiff_t CCitadel_Item_ModDisruptorVData = 0x19b0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncWall {
            constexpr std::ptrdiff_t CFuncWall = 0x788; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bebop_Hook_BulletAmp {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_BaseProjectileAOEModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier2Boss_LaserBeamVData {
        }

        // Parent: m_flTackleStartTime
        // Fields: 2
        namespace CCitadel_Ability_SuperNeutralCharge {
            constexpr std::ptrdiff_t m_nFastFireEndTime = 0xf78; // GameTime_t
            constexpr std::ptrdiff_t m_DebuffReducedParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CanDamageMidBoss {
            constexpr std::ptrdiff_t CCitadel_Modifier_AttachTarget = 0xe0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineSpeedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CGameRulesProxy {
            constexpr std::ptrdiff_t CGameRulesProxy = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoLadderDismount {
            constexpr std::ptrdiff_t CInfoLadderDismount = 0x4a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseServerFuncs {
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_Escort {
            constexpr std::ptrdiff_t CNPC_Escort = 0x17e0; // 
            constexpr std::ptrdiff_t CNPC_Escort = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMessage {
            constexpr std::ptrdiff_t CMessage = 0x4d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointVelocitySensor {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_vecTrackedStats
        // Fields: 0
        namespace TrackedStatNetworkData_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_MaulingLeapVData {
            constexpr std::ptrdiff_t citadel_ability_psychic_lift = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantInvisBushVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Operative_Revelation_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_HoldInPlace {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nikuman = 0x410; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Gunslinger_DemonMark {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Urn_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_Pounce_VData {
            constexpr std::ptrdiff_t ability_shieldguy_ult = 0x0; // 
        }

        // Parent: m_GlowEnemeyModifier
        // Fields: 0
        namespace CCitadel_Modifier_Guiding_ArrowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NullificationAuraAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_WeaponPowerForHealthVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_DropBombsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierTier2BossLaserChargeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealEntitiy {
            constexpr std::ptrdiff_t CCitadel_Modifier_HealEntitiy = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DamageResistanceVData {
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
        // Fields: 0
        namespace CScriptTriggerMultiple {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointCapturerAura {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSpark {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AIPhysics {
            constexpr std::ptrdiff_t CCitadel_Modifier_AIPhysics = 0xd0; // 
        }

        // Parent: m_JarExplodeParticle
        // Fields: 0
        namespace CCitadel_Ability_Necro_HauntingSkullVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingle_Trigger {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckerScrapBlastVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Disarmed {
            constexpr std::ptrdiff_t CModifier_Healbane_Debuff = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletArmorReductionVData {
        }

        // Parent: m_vecBaseLocationY
        // Fields: 0
        namespace CCitadelTeam {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ActiveReload {
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticShot = 0x338; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Clone_End {
            constexpr std::ptrdiff_t CCitadel_Ability_RapidFire = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_CameraDummy {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatTetheredVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Swan_AcrobatVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GarbageAuraTargetModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHornetStingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stunned {
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticShotVData = 0x970; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stabilizing_Tripod {
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CharmedWraps {
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PlayerDisconnected {
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
        // Fields: 0
        namespace CAI_LocalNavigatorBase {
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModelEntityOnDamageLevelChangedArgs_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_KillSummonTriggerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Electric_Slippers {
        }

        // Parent: None
        // Fields: 1
        namespace CItemHauntingScream {
            constexpr std::ptrdiff_t CModifierGlitchVData = 0x920; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFilterLOS {
            constexpr std::ptrdiff_t CFilterLOS = 0x4d8; // 
            constexpr std::ptrdiff_t m_iFilterClass = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 1
        namespace CPointOrient {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_SpotlightEffect {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatPull {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SilenceContraptions {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_WreckerSalvageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCardTossVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierApplyModifierOnDamageTakenVData {
        }

        // Parent: bClip3DSkyBoxNearToWorldFar
        // Fields: 0
        namespace sky3dparams_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDruidPlantShield {
            constexpr std::ptrdiff_t CCitadel_Modifire_Bookworm_DragonFire = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DazzlingOrbWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Exposed {
            constexpr std::ptrdiff_t CCitadel_Ability_Trappers_Bolo = 0x1298; // 
        }

        // Parent: m_AreaModifier
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_AOEMagicVData {
            constexpr std::ptrdiff_t citadel_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Blindside_EnemyDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_GangActivity {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierIntimidatedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierShadowStepVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_HornetLeap {
            constexpr std::ptrdiff_t CModifier_HornetLeap = 0x1f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StormCloud {
            constexpr std::ptrdiff_t CModifierLashGrappleTargetVData = 0xa00; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_ExpressShot_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AbsorbingArmor {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_Magic_Storm {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ArcticBlastAOE {
            constexpr std::ptrdiff_t m_FireRateModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CDestructiblePartsComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Flying_Pigeon {
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Pigeon = 0xc10; // 
        }

        // Parent: None
        // Fields: 0
        namespace CChangeLevel {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_WreckingBallThrow {
        }

        // Parent: m_szDisplayText
        // Fields: 1
        namespace CBaseButton {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechDamageProcWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltimateBurst_Proc {
        }

        // Parent: m_Item
        // Fields: 0
        namespace ItemDraftItem_t {
        }

        // Parent: m_Type
        // Fields: 1
        namespace CPulseCell_SoundEventStart {
            constexpr std::ptrdiff_t CPulseCell_SoundEventStart = 0x50; // 
        }

        // Parent: pulse_runtime_lib
        // Fields: 1
        namespace CPulseCell_Step_DebugLog {
            constexpr std::ptrdiff_t CPulseCell_Step_DebugLog = 0x48; // 
        }

        // Parent: m_Weight
        // Fields: 1
        namespace CColorCorrectionVolume {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_TechUpgrade_SuperAcolyteGloves {
            constexpr std::ptrdiff_t CCitadel_Item_PhantomStrike = 0x1078; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CinematicIntro_Player {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemPunchable_RejuvVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_WallDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Synth_Barrage_Amp_VData {
            constexpr std::ptrdiff_t projectile_rolling_fireball = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_Radiance {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVandalOverflowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItemAOESilenceModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_HealOnLevelVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheckNearbyPlayerParryVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemKothSpawner {
            constexpr std::ptrdiff_t CCitadelItemKothSpawner = 0x57a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CGameModifier_FireUserEntityIOVData {
        }

        // Parent: flFlashFadeInTime
        // Fields: 0
        namespace CCitadel_Ability_SkyRunner_FlakShotVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Hotel_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hunger_Target_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetdummy1VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VandalSurge {
            constexpr std::ptrdiff_t CCitadel_Ability_Shakedown_Target = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Lash_Flog_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DebuffImmunityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_BaseNPCVData {
        }

        // Parent: None
        // Fields: 1
        namespace CBodyComponentBaseAnimGraph {
            constexpr std::ptrdiff_t CServerOnlyModelEntity = 0x780; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLightCapsuleEntity {
            constexpr std::ptrdiff_t CLightCapsuleEntity = 0x788; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_FireRateAura {
            constexpr std::ptrdiff_t CTier3BossAbility = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_WeaponShielding {
            constexpr std::ptrdiff_t CItem_WitheringWhip_VData = 0x19d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_BarrackBossVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_OnTheHunt {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_OnTheHunt = 0x2d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Attach_TriggerVData {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_BookWorm_PrimaryWeapon {
            constexpr std::ptrdiff_t m_TargetModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_BuffModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_InvisModifier = 0x1838; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_DoubleDagger {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
            constexpr std::ptrdiff_t m_FinishParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CModifierRiotCastDelayVData {
            constexpr std::ptrdiff_t citadel_ability_healing_slash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_DebuffDagger {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerSalvage_Buff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_Ability_2 = 0x2e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EldritchShot {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_ExplodeParticle
        // Fields: 0
        namespace CCitadel_TechUpgrade_CorpseExplosionVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Succor_Move {
            constexpr std::ptrdiff_t m_BuffModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: m_bRequestStopClimbing
        // Fields: 1
        namespace CCitadel_Ability_Climb_Rope {
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon_BeamWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseYieldingInflow {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseNodeDynamicOutflows_t {
        }

        // Parent: None
        // Fields: 1
        namespace CFogVolume {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: funcRotatingSimulationTimeSerializer
        // Fields: 1
        namespace CFuncRotating {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTimerEntity {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Werewolf_FrenzyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidLeechSeedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_CatAnimatingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ViscousBallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHornetSnipeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FireBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Headshot_Damage_DebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BonusDamagePercent {
        }

        // Parent: None
        // Fields: 1
        namespace CPlayer_MovementServices_Humanoid {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Gunslinger_DemonMarkVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShivWeapon {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shadow_Step {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Afterburn {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_Empty {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LifestrikeGauntlets_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ApexCombat_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierApexWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_MagicCarpetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Discord_Friendly {
            constexpr std::ptrdiff_t CCitadel_Modifier_Camouflage_Invis = 0x578; // 
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
        // Fields: 0
        namespace CNPC_NanoRollermine {
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerNeutralIdles {
            constexpr std::ptrdiff_t CTriggerNeutralIdles = 0x910; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeSteal = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPortalTrigger {
            constexpr std::ptrdiff_t CCitadelPortalTrigger = 0x900; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_BatSwarmProjectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_CrimsonCannon = 0x13d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_NukeMap {
            constexpr std::ptrdiff_t CAbilityRollingFireBallVData = 0x1830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_PainAura_Target {
        }

        // Parent: m_bIsModelSwapped
        // Fields: 1
        namespace CCitadel_Ability_Magician_CopyUlt {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_DemonCarbineVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifire_Priest_FlashBangBurn = 0x1d0; // 
        }

        // Parent: CCitadel_Ability_IceBeam
        // Fields: 1
        namespace CCitadel_Ability_IceBeam {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Guiding_Arrow_KillCheck {
            constexpr std::ptrdiff_t CCitadel_Modifier_Guiding_Arrow_KillCheck = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Inhibitor_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_MedicHeal {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backdoor_Protection {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Base_Buildup {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTeleportLocation {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_BreakablePropVData {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerOnce {
            constexpr std::ptrdiff_t lerpdata_t = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_FissureWall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HookTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_ActiveBulletShield {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_Reviving {
            constexpr std::ptrdiff_t CCitadel_Ability_GenericPerson_4 = 0xf70; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shakedown_TargetVData {
        }

        // Parent: m_bIsDashing
        // Fields: 0
        namespace CCitadel_Ability_NanoDash {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStackingDamageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityNikumanVData {
            constexpr std::ptrdiff_t citadel_ability_shiv_defer_damage = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargedBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EnchantedHolsters_Watcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingBullets_ProcVData {
            constexpr std::ptrdiff_t upgrade_slow_immunity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemCrateSpawn {
        }

        // Parent: m_flGameStartTime
        // Fields: 1
        namespace CCitadelGameRules {
            constexpr std::ptrdiff_t CCitadelGameRules = 0x2bd8; // 
        }

        // Parent: m_Handle
        // Fields: 0
        namespace EntityRenderAttribute_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_ObservableVariableListener {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: CCitadelTriggerMultiCapturePoint
        // Fields: 1
        namespace CCitadelTriggerMultiCapturePoint {
            constexpr std::ptrdiff_t CCitadelUserMsg_AbilitiesChanged [309] = 0x26; // 
        }

        // Parent: m_bRenderShadows
        // Fields: 1
        namespace CFuncMonitor {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_bEnabled
        // Fields: 1
        namespace CInfoVisibilityBox {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_RampUp {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_Fear {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_PrimaryWeaponVData {
        }

        // Parent: m_bFiring
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_Bebop {
            constexpr std::ptrdiff_t CCitadel_Ability_ChronoSwap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityImmobilizeTrapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CItemMetalSkinVData {
            constexpr std::ptrdiff_t item_snowball = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGunTarget {
            constexpr std::ptrdiff_t CFuncTimescale = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3Boss_Effigy {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InHideoutZone {
            constexpr std::ptrdiff_t CCitadel_Modifier_InHideoutZone = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventConeEntity {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_SpotlightVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SkyRunner_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_ShadowMark_TargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Frank_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_Gunslinger_SpreadingFire = 0x1070; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HealingSlash {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Viper_Ability04 {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShivWeapon_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_MobileResupplyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierDelayedStunVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NPC_OOC_Regen {
        }

        // Parent: None
        // Fields: 1
        namespace CSoundOpvarSetOBBEntity {
            constexpr std::ptrdiff_t CSoundOpvarSetOBBEntity = 0x680; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFilterMultipleAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_DebuffImmunity {
            constexpr std::ptrdiff_t CModifier_Upgrade_ArcaneSurge_AbilityWatcher = 0x2d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelSpawnBlocker {
            constexpr std::ptrdiff_t CCitadelSpawnBlocker = 0x7a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPrecipitationBlocker {
            constexpr std::ptrdiff_t CPrecipitationBlocker = 0x780; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_HuntVData {
            constexpr std::ptrdiff_t npc_yakuza_gangster = 0x0; // 
        }

        // Parent: m_CasterModifier
        // Fields: 0
        namespace CAbilityUppercutVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_HealthSwapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DeathTaxTechAmp {
            constexpr std::ptrdiff_t CCitadel_Projectile_DustStorm = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_LightningBall {
            constexpr std::ptrdiff_t CCitadel_Ability_IceGrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ZipLineBoost_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FuryTrance {
            constexpr std::ptrdiff_t m_nBonusesParticle = 0xd0; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 0
        namespace CItem_RestorativeLocket_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CSoundOpvarSetPathCornerEntity {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HeldItemPickupAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_ShieldedSentryVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPointClientCommand {
            constexpr std::ptrdiff_t CPointClientCommand = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Ability_FireBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Ability02 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MageWalkVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Haunt_Damage_VData {
            constexpr std::ptrdiff_t citadel_ability_werewolf_rifle = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ThrowSandVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TriggerTowerRegen {
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeam = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingEnemyTracker {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_RechargingBulletsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boss_Damage_Protection {
        }

        // Parent: m_eValType
        // Fields: 0
        namespace DynamicAbilityValues_t {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_EnemyServices {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelTriggerNoPortals {
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t m_vecConnections = 0x7b8; // CNetworkUtlVectorBase<CHandle<CCitadelZipLineNode>>
        }

        // Parent: None
        // Fields: 1
        namespace CWorld {
            constexpr std::ptrdiff_t CWorld = 0x780; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_OnTheHunt {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatFlipEmpoweredMelee {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SmokeGrenadeVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DeflectingArmorVData {
            constexpr std::ptrdiff_t upgrade_haunting_scream = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierStimPakVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Slow {
            constexpr std::ptrdiff_t CCitadel_Modifier_Slow = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RebirthCreditVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelZipLinePathNode {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_MoveProbe {
        }

        // Parent: None
        // Fields: 0
        namespace CPathMoverEntitySpawner {
        }

        // Parent: m_nRootBoneOffsetResetSerialNumber
        // Fields: 0
        namespace CModelState {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LerpCameraSettingsCursorState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleOrdered {
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleOrdered = 0x60; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerGravity {
            constexpr std::ptrdiff_t CTriggerGravity = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Neutral_Flying_Weakpoint {
            constexpr std::ptrdiff_t CNPC_PestilenceDrone = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t CModifier_Headshot_Damage_DebuffVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fealty {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_LockDown {
            constexpr std::ptrdiff_t bIsReturning = 0x890; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Killing_Blow_GlowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_Shadow_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Mirage_SandPhantom_Proc = 0x250; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDomeFriendly {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InfernalResilience_Melee {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_Motor {
        }

        // Parent: m_vecMaxs
        // Fields: 0
        namespace CCollisionProperty {
        }

        // Parent: m_hOtherPortal
        // Fields: 1
        namespace CCitadelCatapultTrigger {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterMassGreater {
            constexpr std::ptrdiff_t CFilterModifier = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityThumper4VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilencerProcActiveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_DivineBarrier_VData {
            constexpr std::ptrdiff_t upgrade_nullification_aura = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Climb_RopeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Refresher {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05 = 0x1010; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEnableMotionFixup {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicActiveAutosave {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CMathCounter {
        }

        // Parent: m_flEndTime
        // Fields: 0
        namespace CCitadelRecentDamage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelRegenComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_UnloadGun2 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_2_AuraVData = 0x888; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatBlastedPassive {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_StackingDefense {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Uppercut {
            constexpr std::ptrdiff_t CCitadel_Ability_Bookworm_AOEMagic = 0x0; // 
        }

        // Parent: m_iClip
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletShredImbue_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechCleaveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingBoonScaleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelDruidHealingFruit {
        }

        // Parent: None
        // Fields: 0
        namespace CNavLinkAreaEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayerBot {
        }

        // Parent: m_Item
        // Fields: 0
        namespace CAttributeContainer {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_TransformationWatcherVData {
        }

        // Parent: CCitadel_Werewolf_Transformation
        // Fields: 2
        namespace CCitadel_Werewolf_Transformation {
            constexpr std::ptrdiff_t m_GarbageAuraModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1828; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartUltVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_AttachHealVData {
            constexpr std::ptrdiff_t ability_icebeam = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Mirage_SandPhantom_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_Lift {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VoidSphere_Buff {
            constexpr std::ptrdiff_t CNecro_HauntingSkullEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Arcane_Eater_Proc {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AblativeCoatResistBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_AblativeCoatResistBuff = 0x1d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechRangeClamp {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItem_WitheringWhip_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierT3BossWaveTargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TeamRelativeParticle {
            constexpr std::ptrdiff_t CCitadel_Modifier_NearDeathFX = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CinematicIntro_Player_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FamiliarHelper_InvisWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_FamiliarHelper_InvisWatcher = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_UnloadGun {
            constexpr std::ptrdiff_t CCitadel_Ability_Viscous_Telepunch = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf {
            constexpr std::ptrdiff_t server = 0x20108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_KnockbackVData {
            constexpr std::ptrdiff_t ability_nano_catform = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetPracticeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ViscousBall {
            constexpr std::ptrdiff_t m_SalvageEnemyModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_GuardianWard_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneSurge_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Near_Climbable_Rope {
            constexpr std::ptrdiff_t CCitadelModifierResponseRulesFilterType_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ExplosiveShots {
        }

        // Parent: None
        // Fields: 0
        namespace PulseSelectorOutflowList_t {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterContext {
            constexpr std::ptrdiff_t CFilterProximity = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLightEnvironmentEntity {
            constexpr std::ptrdiff_t CLightEnvironmentEntity = 0x788; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_SpotlightAura {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Clone = 0xf70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IdolCashInTimer {
            constexpr std::ptrdiff_t CitadelMusicData_t = 0x48; // 
        }

        // Parent: m_flWidth
        // Fields: 1
        namespace CEnvDecal {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_vBoxMins
        // Fields: 1
        namespace CEnvVolumetricFogVolume {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayerBotNPCBrainVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_TransformationVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetdummy2VData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityKobunVData {
            constexpr std::ptrdiff_t tokamak_heat_sinks_inherent = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpreadingFire_DOT_VData {
            constexpr std::ptrdiff_t ability_empower_bullet = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLockDownDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bolo {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier2Boss_LaserCharge {
            constexpr std::ptrdiff_t CCitadel_Modifier_TechCleaveVData = 0x920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CServerOnlyEntity {
        }

        // Parent: Play Sequence
        // Fields: 0
        namespace CPulseCell_PlaySequenceCursorState_t {
        }

        // Parent: m_SecondaryColor
        // Fields: 1
        namespace CBodyComponentSkeletonInstance {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemGeneric {
            constexpr std::ptrdiff_t hSystem = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_FeatherBoomerang {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemWalkBack {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemWalkBack = 0x4ee8; // 
        }

        // Parent: m_nInputType
        // Fields: 0
        namespace CPointValueRemapper {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelMinimapComponent {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierDoormanHotelImposterFXVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fathom_Breach_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Rutger_ForceField {
            constexpr std::ptrdiff_t m_StackBuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Sleeping {
            constexpr std::ptrdiff_t CCitadelDruidInvisAura = 0x110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_InfinitySlashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTrappersBoloVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BoucePadVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcePath_Friendly {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
            constexpr std::ptrdiff_t upgrade_spellslinger_headshots = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilver_Watcher {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Infuser_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MeleeDamageOnly {
            constexpr std::ptrdiff_t CCitadel_Modifier_MeleeDamageOnly = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hero_Clone {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_Senses {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
            constexpr std::ptrdiff_t citadel_ability_vandal_overflow = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_DPS_Aura {
            constexpr std::ptrdiff_t CCitadel_Item_PowerShard = 0x0; // 
            constexpr std::ptrdiff_t m_LaserLeft = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SkyRunner_Ability04 {
            constexpr std::ptrdiff_t CCitadel_Ability_Shiv_KillingBlowVData = 0x1c88; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_Revelation_Caster {
            constexpr std::ptrdiff_t CAbility_Synth_PlasmaFlux_VData = 0x1ac0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldedSentry {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UIHudMessage {
            constexpr std::ptrdiff_t THIS ONE ACTUALLY CHANGES TARGETING BEHAVIOR! Also use our cone visualizer for our preview, and a sat sphere at destination. AOE is determined by settings below, or by GetTargetingConeAngle if overridden. = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_Health {
            constexpr std::ptrdiff_t CCitadelPlayerBot = 0x4bd8; // 
        }

        // Parent: m_ragAngles
        // Fields: 1
        namespace CRagdollProp {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNodeEnt_InfoHint {
            constexpr std::ptrdiff_t CNodeEnt_InfoHint = 0x4f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTrooperBossSpawn {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_TrackingBomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter {
            constexpr std::ptrdiff_t m_vecDeployedSentries = 0xf98; // CNetworkUtlVectorBase<CHandle<CNPC_SimpleAnimatingAI>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PoisonJar_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGenericPerson2VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backdoor_ProtectionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearbyEnemyResistVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_AbilityCharges {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemKothSpawnerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNavLinkMotor_NonZUp_Transition {
        }

        // Parent: None
        // Fields: 0
        namespace CScriptComponent {
        }

        // Parent: None
        // Fields: 5
        namespace CCitadelItemMetal {
            constexpr std::ptrdiff_t m_GoldPerOrb = 0x0; // int32
            constexpr std::ptrdiff_t m_NearPlayerSplitPct = 0x4; // float32
            constexpr std::ptrdiff_t m_nTier1GoldKill = 0x8; // int32
            constexpr std::ptrdiff_t m_nTier1GoldOrbs = 0xc; // int32
            constexpr std::ptrdiff_t m_nTier2GoldKill = 0x10; // int32
        }

        // Parent: None
        // Fields: 0
        namespace CFuncTrain {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_PullAOE_VData {
            constexpr std::ptrdiff_t yakuza_summon_gangster = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Rolling_FireBall {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura_ConeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_ChangeHintGroup {
            constexpr std::ptrdiff_t CInfoTeleportDestination = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_CitadelPlayerBotNavigator {
            constexpr std::ptrdiff_t CCitadel_Pickup_NecroDeath = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Skyrunner_MagicBeam {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_AcrobatVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySummonGangsterVData {
        }

        // Parent: m_hLastCastTarget
        // Fields: 1
        namespace CCitadel_Ability_Nano_Pounce {
            constexpr std::ptrdiff_t CCitadel_Modifier_Fathom_ScaldingSpray_Aura = 0x320; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGuidedArrowVData {
        }

        // Parent: m_flForwardOffset
        // Fields: 0
        namespace CCitadel_Modifier_DragEnemyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StunnedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelLootTableVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_MultiCapturePointVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CombatStatus_BulletHit {
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus_BulletHit = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_AirheartAbility02VData {
            constexpr std::ptrdiff_t item_explosive_barrel = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_PainAura {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_UmbrellaManeuver_AirHang_VData {
            constexpr std::ptrdiff_t synth_barrage = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySleepDaggerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CapacitorSlowDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Galvanic_Storm_VData = 0x980; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Berserker {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_WeaponShielding = 0x1110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierContainmentVictimVData {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Tier3Boss_AoEWave {
            constexpr std::ptrdiff_t m_SprintParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strSprintSound = 0x18f8; // CSoundEventName
            constexpr std::ptrdiff_t m_flSprintAccMS = 0x1908; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CFuncFoliageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAI_Relationship {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTriggerHideout {
            constexpr std::ptrdiff_t CCitadelTriggerHideout = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_InstantReload {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_ActiveBulletShield = 0xff8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuminousStrikeBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Thumper_Bullet_Watcher {
            constexpr std::ptrdiff_t m_CastParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCadenceGrandFinaleVData {
            constexpr std::ptrdiff_t citadel_ability_drifter_primaryweapon = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_IceBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcePath {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_CardToss {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TriggerTower {
            constexpr std::ptrdiff_t CItemPhantomStrike_VData = 0x1ba0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_NanoTechRoundsDamage {
        }

        // Parent: m_bIsBlocked
        // Fields: 0
        namespace TeamKothState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTier3BossLaserBeamAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_KothTrooperBuffVData {
            constexpr std::ptrdiff_t citadel_trigger_speed_boost = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseDashCastAbilityVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPhysHinge {
            constexpr std::ptrdiff_t CPhysicsSpring = 0x4e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticReverb_Proc {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Objective_Bullet_Resist {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertyMultiStatsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Attach_Trigger {
            constexpr std::ptrdiff_t CCitadel_Ability_RiposteTargetSelect = 0xf88; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantSomethingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Doorman_Doorway {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Thumper_4 {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_vecDashEndPos
        // Fields: 1
        namespace CCitadel_Ability_TangoTether {
            constexpr std::ptrdiff_t CCitadel_Ability_Trapper_Fear = 0x1070; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shiv_KillingBlowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RestorativeGoo {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_BonusDamage = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Spellbreaker {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ColdFrontVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ScalingPowerUp {
        }

        // Parent: None
        // Fields: 0
        namespace CNPCMakerAPI {
        }

        // Parent: CCitadel_PickupItemSpawner
        // Fields: 1
        namespace CCitadel_PickupItemSpawner {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_BaseProjectileAOEModifier {
            constexpr std::ptrdiff_t CCitadel_Modifier_DivinersKevlarBuff_VData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_SlowImmunity {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InfiniteMagazine = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Knockback {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMatchTrackedStatsEntity {
            constexpr std::ptrdiff_t CMatchTrackedStatsEntity = 0x508; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierGoatChargingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Pulse {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_HauntingSpirits = 0x10f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Targetdummy_4 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VandalSurge {
            constexpr std::ptrdiff_t CAbilityWreckingBallVData = 0x1ae0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Lash_Flog {
            constexpr std::ptrdiff_t CCitadel_Ability_StaticCharge_V2_VData = 0x1920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHoldMelee_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_HeadshotBooster_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpiritBurnDOT_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ContainmentVData {
            constexpr std::ptrdiff_t upgrade_bullet_shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Slide_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AttachTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_VolumetricEventSensorAPI {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_NPC_TrooperVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierItemPickupAuraTargetVData {
            constexpr std::ptrdiff_t citadel_item_punchable_gold = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidBasePlantVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_SmokeGrenadeVData {
            constexpr std::ptrdiff_t ability_magician_magicbolt = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PriestKnockback {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Heal_TargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ZipLine_Boost {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_MetalSkin = 0xf78; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backstabber_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DivineBarrier {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ApplyDebuff_Proc {
            constexpr std::ptrdiff_t CitadelItemVData = 0x18b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_XPOrbVData {
        }

        // Parent: None
        // Fields: 0
        namespace CLogicRelayAPI {
        }

        // Parent: m_bWorldLayerVisible
        // Fields: 1
        namespace CInfoWorldLayer {
            constexpr std::ptrdiff_t CLightDirectionalEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_HauntingSpirits {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter_FX {
            constexpr std::ptrdiff_t m_flCurrentObscureLevel = 0xd0; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletResistReductionStackVData {
        }

        // Parent: None
        // Fields: 1
        namespace CBodyComponentBaseModelEntity {
            constexpr std::ptrdiff_t CBodyComponentBaseModelEntity = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Necro_ZombieWall_Projectile {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TimeWall_AuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
            constexpr std::ptrdiff_t citadel_ability_tier2boss_laser_beam = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelMatchmakingStatusInfo {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicProximity {
            constexpr std::ptrdiff_t CFuncTrackTrain = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Viper_PetrifyBola {
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_Radiance = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityViscousBowlingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Surging_PowerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DeflectingArmor {
        }

        // Parent: m_nCurrencyValue
        // Fields: 1
        namespace CCitadelItemPickup {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: m_SelfParticle
        // Fields: 0
        namespace CModifierNikumanVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Empty {
        }

        // Parent: m_tSoonestHelperCooldownEndTime
        // Fields: 1
        namespace CCitadel_Ability_Familiar_HelpingHands {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EmpowerBullet {
            constexpr std::ptrdiff_t CCitadel_Ability_Lash_Flog = 0x11f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityRiotProtocolVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T2Boss_Stagger_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_Stagger_Watcher = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Extendable_HealthRegen {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_strSpawnParticle
        // Fields: 0
        namespace CNPC_Escort_VData {
        }

        // Parent: m_vecViewOffset
        // Fields: 1
        namespace CAI_CitadelNPC {
            constexpr std::ptrdiff_t CNPC_BaseDefenseSentry = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupRejuvHeroTest {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerPassthroughFakeWall {
            constexpr std::ptrdiff_t CCitadelObserver_MovementServices = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace FilterDamageType {
            constexpr std::ptrdiff_t FilterDamageType = 0x4e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifier_Viscous_Goo_Aura {
            constexpr std::ptrdiff_t CAbilityTargetdummy3VData = 0x1818; // 
        }

        // Parent: m_Resolution
        // Fields: 1
        namespace CPointCamera {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeList {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_NetShot {
        }

        // Parent: m_vDashDirection
        // Fields: 0
        namespace CCitadel_Ability_Fencer_Riposte {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boho_DamageShare {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Synth_Barrage_Amp {
            constexpr std::ptrdiff_t CCitadel_Modifier_ShadowCloneVData = 0x750; // 
        }

        // Parent: m_flAirDrag
        // Fields: 0
        namespace CAbilityPowerSlashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityVacuumVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StaticCharge {
            constexpr std::ptrdiff_t CCitadel_Projectile_FortunaWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PauseUnPause {
            constexpr std::ptrdiff_t CCitadel_Modifier_PristineEmblem_VData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_BurstFire = 0x1000; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Mystic_RegenerationVData {
            constexpr std::ptrdiff_t upgrade_weapon_instant_reload = 0x0; // 
        }

        // Parent: tools/images/pulse_editor/inflow_wait.png
        // Fields: 1
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t CPulseCell_Inflow_Wait = 0x90; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTunnelTrigger {
            constexpr std::ptrdiff_t CCitadelTunnelTrigger = 0x8f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CNPC_TeslaCoil {
            constexpr std::ptrdiff_t server = 0x60110; // 
            constexpr std::ptrdiff_t m_iLane = 0x17c8; // int32
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerObscuredVolume {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelFilterModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_PunkgoatTether {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_RocketBoots {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterProximity {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2EmpoweredVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAccoladeDefinition {
        }

        // Parent: None
        // Fields: 1
        namespace CTeamTrackedStatsEntity {
            constexpr std::ptrdiff_t CTeamTrackedStatsEntity = 0x510; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CombatStatus {
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Werewolf_Frenzy {
            constexpr std::ptrdiff_t m_ProjectMindModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Fencer_Ultimate_Target {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_HealHostVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WebWall_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityIntimidateVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_UltComboVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_WreckerGarbageSuck {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DisarmProcWatcher {
        }

        // Parent: m_vNormal
        // Fields: 0
        namespace CEffectData {
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Airheart_FloatingBomb {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Intensifying_Clip {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_AoEWaveVData = 0x1a10; // 
        }

        // Parent: m_flFadeOutModelStart
        // Fields: 0
        namespace CEntityDissolve {
        }

        // Parent: m_flTurretExpireTime
        // Fields: 1
        namespace CCitadel_Ability_TurretClone {
            constexpr std::ptrdiff_t m_BubbleModifier = 0x1818; // CEmbeddedSubclass<CBaseModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Rutger_Pulse {
            constexpr std::ptrdiff_t CProjectile_Synth_PlasmaFlux = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TangoTether_Tether {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayer_ObserverServices {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseAnimGraphModifierHandleVector_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleShuffled {
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleShuffled = 0x60; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_StabilizingTripod {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FrenzyAura {
            constexpr std::ptrdiff_t CCitadelModifierAerialAssaultVData = 0x940; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HoldingGoldenIdol {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierCadenceGunSpikesVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PetrifyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ShadowStrikeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RiposteTargetSelect {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_SucessSelf = 0x2e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_HealOnLevel {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_HeadshotDamage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysConstraint {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLogicAchievement {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltCombo_Target {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wrecker_Ultimate {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStickyBombVData {
        }

        // Parent: m_flBrightness
        // Fields: 0
        namespace CLightComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_MortarSentry {
            constexpr std::ptrdiff_t server = 0x20108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Perched_Predator {
        }

        // Parent: None
        // Fields: 1
        namespace CItemExplosiveBarrel {
            constexpr std::ptrdiff_t CCitadelProjectile_ImmobilizeTrap = 0xfa0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_FacingServices {
        }

        // Parent: None
        // Fields: 0
        namespace CPointClientUIDialog {
        }

        // Parent: None
        // Fields: 0
        namespace CLogicLineToEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterModifier {
            constexpr std::ptrdiff_t CFilterModifier = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CSoundAreaEntitySphere {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_MaulingLeapDebuff {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_UmbrellaManeuver_AirHang {
            constexpr std::ptrdiff_t CNPC_NecroSkele_GraphController = 0x820; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_CheatDeath_Activated {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_CrimsonCannonVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierFealtyTargetVData {
            constexpr std::ptrdiff_t targetdummy_ability_3 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_PredatoryStatueTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_KillSummonTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerJump {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bull_Heal {
            constexpr std::ptrdiff_t CCitadel_Modifier_MobileResupplyVData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SilenceProc_Immunity {
            constexpr std::ptrdiff_t CCitadel_Modifier_RunedGauntlets = 0x308; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HealBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashUltimateVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_AOESilence {
        }

        // Parent: None
        // Fields: 1
        namespace CPhysicalButton {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoSpawnGroupLoadUnload {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundAreaEntityOrientedBox {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatCloud {
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_AirLift = 0x16a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SettingSunThinker_VData {
            constexpr std::ptrdiff_t thumper_ability_4 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_Shadow {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_AntiSpiritVest = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargedTackleActive {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BerserkerDamageStackVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
            constexpr std::ptrdiff_t upgrade_blood_tribute = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_LaserBeam {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PreMatchWait {
        }

        // Parent: m_bPurchased
        // Fields: 0
        namespace ConsumedComponentState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_ListenForAnimgraphTag {
            constexpr std::ptrdiff_t PhysicsRagdollPose_t = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBodyComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_Method {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: m_brushModelName
        // Fields: 1
        namespace CRenderPortal {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_iEntityLevel
        // Fields: 0
        namespace CEconItemView {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_UnloadGun2VData {
        }

        // Parent: CCitadel_Ability_InfinitySlash
        // Fields: 1
        namespace CCitadel_Ability_InfinitySlash {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WreckingBall_AutoThrow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Ghost_BloodShards {
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_SelfZap = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Proc {
            constexpr std::ptrdiff_t CItemAOESilenceAuraVData = 0x888; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_Ricochet {
        }

        // Parent: None
        // Fields: 1
        namespace CBaseDMStart {
            constexpr std::ptrdiff_t CBaseDMStart = 0x4a8; // 
        }

        // Parent: m_pChoreoComponent
        // Fields: 0
        namespace CBaseModelEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2WeakenedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_BaseDefenseSentryVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_NetShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_PainAura {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_PrimaryWeapon = 0x1198; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_GrandFinale_Buff {
            constexpr std::ptrdiff_t CCitadel_GuidedArrow_OwlModel_GraphController = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_KnockbackBlastVData {
            constexpr std::ptrdiff_t ability_health_swap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_WreckerSalvageBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bounce_Pad_Stomp {
            constexpr std::ptrdiff_t CCitadelProjectile_ImmobilizeTrap = 0x0; // 
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_FuryTrance_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CItemPowerShardVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierT2BossWaveTargetVData {
        }

        // Parent: m_flStomachDamageMultiplier
        // Fields: 0
        namespace CAI_CitadelNPCVData {
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
        // Fields: 1
        namespace CTriggerBurrowUnderground {
            constexpr std::ptrdiff_t CProjectile_Boho_BouncyProjectile = 0x8b0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInstancedSceneEntity {
            constexpr std::ptrdiff_t CSoundOpvarSetPointBase = 0x0; // 
        }

        // Parent: m_iGuidedBotMatchOrbsSecured
        // Fields: 1
        namespace CCitadelPlayerController {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Petrify {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierChargedTacklePrepareVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HornetSnipeVData {
            constexpr std::ptrdiff_t citadel_ability_gunslinger_demon_carbine = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PassiveBeefyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpilledBloodThinker {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseValue {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelHideoutTeleportTrigger {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_StalkersMark_Teleport {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_NullificationAura {
        }

        // Parent: m_iszOpvarName
        // Fields: 1
        namespace CCitadelSoundOpvarSetOBB {
            constexpr std::ptrdiff_t CSimTimer = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventParameter {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Guiding_Arrow {
            constexpr std::ptrdiff_t m_BuffModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_BaseWeaponDamage {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_WaterServices {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SplitShot {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Shrink_Ray {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CRotButton {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvViewPunch {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEconEntityAttachedParticleInfo_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_LeapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_Leap {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_BouncyProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_FireBeetles_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_Perched_Predator = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_DemonCarbine {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Uppercutted {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TargetPracticeEnemyVData {
            constexpr std::ptrdiff_t ability_airheart_rocketeer3 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CorpseExplosionThinker {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ArcticBlast_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HollowPoint_Proc {
            constexpr std::ptrdiff_t CCitadel_CosmeticItem_Snowball = 0x1208; // 
        }

        // Parent: m_nInteractsExclude
        // Fields: 0
        namespace VPhysicsCollisionAttribute_t {
        }

        // Parent: None
        // Fields: 1
        namespace CItemCapacitor {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_ApexCombat = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_Stimpak {
        }

        // Parent: m_flExpireTime
        // Fields: 1
        namespace CCitadelBulletTimeWarp {
            constexpr std::ptrdiff_t m_flTime = 0x8; // GameTime_t
        }

        // Parent: None
        // Fields: 1
        namespace CFuncShatterglass {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNavWalkable {
            constexpr std::ptrdiff_t CNavWalkable = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTrooperSpawn {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Wrecker_UltimateGrabEnemyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
            constexpr std::ptrdiff_t citadel_ability_tier2boss_stomp = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CatapultDamageWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            constexpr std::ptrdiff_t CEnvSoundscapeProxyAlias_snd_soundscape_proxy = 0x538; // 
        }

        // Parent: m_qForward
        // Fields: 1
        namespace CCitadel_Ice_Path_Shard_Physics {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AccuracyTracker {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_BodyGroupChoice {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_RadiantBlastVData {
            constexpr std::ptrdiff_t citadel_ability_werewolf_clawweapon = 0x0; // 
        }

        // Parent: m_tLeapStartTime
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_Leap {
            constexpr std::ptrdiff_t CCitadel_Projectile_Petrify = 0x860; // 
        }

        // Parent: m_vecLastPosition
        // Fields: 1
        namespace CAbility_Fencer_Ultimate {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_PrimaryWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_FireBeetles_Debuff_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_KineticCarbine_Slow {
            constexpr std::ptrdiff_t CCitadelAbilityDruidSprout = 0xf80; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFistsWatcher_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Ricochet_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_Yield {
            constexpr std::ptrdiff_t CPulseCell_Inflow_Yield = 0x90; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseMathlib {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Hideout_Ball {
            constexpr std::ptrdiff_t CCitadel_Hideout_Ball = 0x7b0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Necro_HauntProjectile {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Target_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_AnimGraphServices {
        }

        // Parent: None
        // Fields: 0
        namespace CPhysImpact {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_ClawWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_Flashbang_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Pillar {
            constexpr std::ptrdiff_t CCitadel_Ability_HealingSlash = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThrownShiv_Slow_Debuff {
            constexpr std::ptrdiff_t CAbility_Rutger_CheatDeath_VData = 0x1828; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAerialAssaultWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_APRounds {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BoxingGloveVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicClarityWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FullSpectrumDamage {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearbyEnemyResist {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupRejuvHeroTestVData {
            constexpr std::ptrdiff_t ability_golden_idol = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shield {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_NPCAbility_Vanguard_AOEBuff_VData {
        }

        // Parent: m_vThrustingVelocity
        // Fields: 0
        namespace CCitadel_Ability_Airheart_Rocketeer4 {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPunkgoatTetherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityDistruptiveChargeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Heal_Target {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CharmedWraps_VData {
            constexpr std::ptrdiff_t upgrade_mod_disruptor = 0x0; // 
        }

        // Parent: Player
        // Fields: 0
        namespace CBaseEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_UseServices {
        }

        // Parent: m_vecUnitStatusOffset
        // Fields: 1
        namespace CNPC_BaseDefenseSentry {
            constexpr std::ptrdiff_t CAI_CitadelMotor = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNpcFootSweep {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVacuumAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_SetMoveType {
            constexpr std::ptrdiff_t CGameModifier_SetMoveType = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Traveler_MovementSpeed {
            constexpr std::ptrdiff_t CCitadel_Ability_VoidSphere = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_KnockbackBlast {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeEnemy {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
            constexpr std::ptrdiff_t citadel_ability_hook = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VeilWalkerMovespeed {
            constexpr std::ptrdiff_t m_flDebuffScale = 0x250; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SlowingBullets_Proc {
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
        // Fields: 2
        namespace CCitadelHideoutInteractableProp {
            constexpr std::ptrdiff_t The loop sounds to play when we have any Heal Over Time (HOT) = 0x0; // 
            constexpr std::ptrdiff_t CCitadelHideoutInteractableProp = 0xde0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DragonFireGroundAuraVData {
        }

        // Parent: m_bMoving
        // Fields: 1
        namespace CProjectile_Priest_SlideTrap_Projectile {
            constexpr std::ptrdiff_t CAbility_Operative_Revelation = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMarkupVolumeWithRef {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_FearVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySleepBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGooGrenadeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Citadel_Bull_Leap_LandingBonuses {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_CheatDeathImmunity {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Unknown {
        }

        // Parent: None
        // Fields: 3
        namespace CFuncPlatRot {
            constexpr std::ptrdiff_t CTriggerSndSosOpvar = 0x0; // 
            constexpr std::ptrdiff_t transition volume passed = 0x0; // 
            constexpr std::ptrdiff_t server = 0x70108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_SetModelScale {
            constexpr std::ptrdiff_t CGameModifier_SetModelScale = 0xd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CRagdollMagnet {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoInstructorHintTarget {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SpiderShield {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_BigBoltVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTeleportToGangsterVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItem_WarpStone_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_SpellslingerHeadshots_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BonusDamagePercentVData {
        }

        // Parent: None
        // Fields: 0
        namespace CSpriteAlias_env_glow {
        }

        // Parent: m_timestamp
        // Fields: 1
        namespace CSpotlightEnd {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoCoverPoint {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachHostVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_StabilizingTripodVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AcolytesGlove_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LearningHeroAbility {
        }

        // Parent: m_hSkyMaterialLightingOnly
        // Fields: 1
        namespace CEnvSky {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoSpawnGroupLandmark {
            constexpr std::ptrdiff_t CInfoSpawnGroupLandmark = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointAngleSensor {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_fSpeedVariation
        // Fields: 0
        namespace CEnvWindController {
        }

        // Parent: m_RecastEndTime
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatBlink {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fathom_LurkersAmbush_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Haunt_Damage {
            constexpr std::ptrdiff_t CCitadel_Ability_TangoTether_Trigger = 0xf88; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldedSentry_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChainLightningEffect {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier2Boss_StatTracker = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpellShield_Buff {
            constexpr std::ptrdiff_t CCitadel_CosmeticItem_Snowball_VData = 0x19f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelBaseAbilityServerOnly {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHandleBase {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelRankedBadgeProp {
            constexpr std::ptrdiff_t EModTier_t = 0x10101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierGarbageAuraVData {
            constexpr std::ptrdiff_t ability_viper_ult = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGenericConstraint {
            constexpr std::ptrdiff_t CPhysLength = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_Clone {
        }

        // Parent: CCitadel_Ability_ProximityRitual
        // Fields: 0
        namespace CCitadel_Ability_ProximityRitual {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDomeFriendlyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VoidSphereVData {
            constexpr std::ptrdiff_t ability_opera_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HealthSwap {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColdFrontAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticReverbExplosion = 0x1d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelHeroLoader {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleRandom {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_PublicOutput {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvLaser {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GraveStone {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_AnthemAOE {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_Ability02 = 0xf70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Mystic_Regeneration {
            constexpr std::ptrdiff_t CCitadel_Shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CSoundOpvarSetEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvBeverage {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CombatStatusVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPunkgoatUltVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bookworm_KnightCharge_Buff {
            constexpr std::ptrdiff_t m_DoorOpenStartSound = 0x1818; // CSoundEventName
        }

        // Parent: m_bLatched
        // Fields: 0
        namespace CAbility_Fathom_ReefdwellerHarpoon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityFlyingStrikeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_NanoDash_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargedTacklePrepare {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_CosmeticItem_VotingPoster_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DamageOnHitGround {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Idol_Return {
        }

        // Parent: None
        // Fields: 1
        namespace CPhysMotor {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelZiplineCaptureTrigger {
            constexpr std::ptrdiff_t CCitadelZiplineCaptureTrigger = 0x8f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DamageRecycler {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicGameEvent {
            constexpr std::ptrdiff_t CMarkupVolumeTagged_Nav = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidAbility04 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Punkgoat_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Magician_AnimalHex_HexAreaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TangoTether_TetherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityLashVData {
            constexpr std::ptrdiff_t ability_fortuna_ult = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bull_LeapVData {
            constexpr std::ptrdiff_t trigger_burrow_underground = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RescueBeamVData {
        }

        // Parent: m_flHealingChargeParticlePct
        // Fields: 2
        namespace CNPC_Trooper {
            constexpr std::ptrdiff_t server = 0x90110; // 
            constexpr std::ptrdiff_t server = 0xa0110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_Item {
            constexpr std::ptrdiff_t Set to -1 to not spawn until invoked by another system = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_DeployablePreview {
            constexpr std::ptrdiff_t CCitadel_DeployablePreview = 0xaa0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTrooperNeutralCamp {
            constexpr std::ptrdiff_t CInfoTrooperNeutralSpawn = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_AOERoot {
        }

        // Parent: m_GoldPerOrb
        // Fields: 0
        namespace CCitadel_Modifier_Hideout_TeleportVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPhysExplosion {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shiv_KillingBlow_Leap {
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_ScaldingSpray_VData = 0x1828; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_CatForm {
            constexpr std::ptrdiff_t CCitadel_Ability_Swan_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DetentionAmmoVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItem_Infuser_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Dust_Storm_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_BloodTribute {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ShadowStep {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSplineConstraint {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicCompare {
            constexpr std::ptrdiff_t CLogicCompare = 0x528; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ShivDash {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_Pounce_InstantVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityHatTrickVData {
            constexpr std::ptrdiff_t citadel_airheart_package = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletShredImbue_Proc {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
            constexpr std::ptrdiff_t CCitadel_Modifier_LifestrikeGauntlets = 0x398; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TechCleaveVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_HeroPreview {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_BlackboardReference {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTankTrain {
            constexpr std::ptrdiff_t CScriptTriggerMultiple = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest05 {
        }

        // Parent: None
        // Fields: 4
        namespace CCitadel_Item_Disarm {
            constexpr std::ptrdiff_t m_CastParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TrailParticle = 0x1998; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strStackSound = 0x1a78; // CSoundEventName
            constexpr std::ptrdiff_t m_strMaxStackSound = 0x1a88; // CSoundEventName
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_AmmoScavenger {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_bLit
        // Fields: 1
        namespace CPointClientUIWorldPanel {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventSphereEntity {
            constexpr std::ptrdiff_t CSoundEventSphereEntity = 0x568; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_Fear {
            constexpr std::ptrdiff_t m_AoEParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_AnimalHexAreaVData {
            constexpr std::ptrdiff_t npc_necro_skele = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_SpreadingFire {
            constexpr std::ptrdiff_t CCitadel_Ability_LashDownStrike = 0x1600; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EmpowerBulletVData {
        }

        // Parent: m_bStartedOnGround
        // Fields: 1
        namespace CCitadel_Ability_Shiv_KillingBlow {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_ActiveCastParticle
        // Fields: 0
        namespace CAbilityShivDeferDamageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Burrow_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_Pounce_Self = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PerchedPredatorDrag {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckingBallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gravity_Lasso_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerSurge {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_KineticSash_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBotTestNode {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelClimbRopeTrigger {
            constexpr std::ptrdiff_t CTriggerNeutralShield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerPingLocation {
            constexpr std::ptrdiff_t CTriggerPingLocation = 0x8e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeldItemPickupAura {
            constexpr std::ptrdiff_t CCitadelZapTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DPSTracker {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelConfigurableTrackedProjectile {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Graf_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Ability_HealthSwap = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Operative_Revelation {
            constexpr std::ptrdiff_t CAbility_Operative_Revelation = 0xff0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierSpiderShieldBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
        }

        // Parent: m_flLatchedTimeScaleFrac
        // Fields: 2
        namespace CCitadel_Ability_Gunslinger_DemonCarbine {
            constexpr std::ptrdiff_t m_AoEPreviewParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_StormCloudModifier = 0x18f8; // CEmbeddedSubclass<CBaseModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Silenced {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_Active {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_Stomp = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBulletsBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HalloweenMask {
            constexpr std::ptrdiff_t m_pOther = 0xc8; // CBaseEntity*
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_KineticCarbine {
        }

        // Parent: m_flEncodedController
        // Fields: 1
        namespace CCitadelObserverPawn {
            constexpr std::ptrdiff_t CCitadelMinimapComponent = 0x20; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemPickupAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CRuleBrushEntity {
            constexpr std::ptrdiff_t CLogicNPCCounterOBB = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_SpotlightVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_GraveStone {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_ShadowCloneVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CritShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VisibleDuration {
            constexpr std::ptrdiff_t CCitadel_Modifier_VisibleDuration = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StreetBrawl_Phase_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CNodeEnt {
            constexpr std::ptrdiff_t CAI_EnemyServices = 0x0; // 
        }

        // Parent: m_PredNetUInt16Variables
        // Fields: 0
        namespace CAnimGraphNetworkedVariables {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Bebop_Hook {
            constexpr std::ptrdiff_t CCitadel_Modifier_DragonFireGroundAuraVData = 0x890; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_MetalSkin {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncPropRespawnZone {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_FireScarabs_HealthLoss {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_3 {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Gravity_Lasso {
            constexpr std::ptrdiff_t Visuals = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_BellAura = 0x108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_DeathTax {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Afterburn_DOT {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDashBurn {
            constexpr std::ptrdiff_t CCitadel_Ice_Dome_Blocker = 0xaa0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneMedallion_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterModel {
            constexpr std::ptrdiff_t CFilterModel = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_RifleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierDoormanHotelVictimVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RapidFire_AirJuggle {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shadow_Strike_Invis {
            constexpr std::ptrdiff_t CCitadel_Modifier_DetentionAmmo = 0x490; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritBurnEnemyTracker {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UIAbilityHudNotificaiton {
            constexpr std::ptrdiff_t UnitFilterResult = 0x90101; // 
        }

        // Parent: m_flMaxValue
        // Fields: 0
        namespace LockonTarget_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelBulletRedirectVolumeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Bubble {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_GreaterWitheringWhip {
            constexpr std::ptrdiff_t CModifierDelayedStunVData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InMenu {
            constexpr std::ptrdiff_t CCitadel_Modifier_InMenu = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PermanentPickup {
            constexpr std::ptrdiff_t CCitadel_Modifier_PermanentPickup = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNavSpaceInfo {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysSlideConstraint {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseGameBlackboard {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventEntityAlias_snd_event_point {
            constexpr std::ptrdiff_t PointTemplateOwnerSpawnGroupType_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boho_DamageShare_VData {
            constexpr std::ptrdiff_t ability_airheart_alt_weapon = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_StackingDefenseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Drifter_HungerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_Darkness {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_DoubleDaggerVData {
            constexpr std::ptrdiff_t ability_trapper_spidershield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Warden_HighAlert {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability03 {
            constexpr std::ptrdiff_t CCitadel_Ability_NanoDash = 0x1658; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CloakOfOpportunityWatcherVData {
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
        // Fields: 1
        namespace CPulseCell_Value_RandomInt {
            constexpr std::ptrdiff_t CPulseCell_Value_RandomInt = 0x48; // 
        }

        // Parent: m_bFixedPosition
        // Fields: 0
        namespace CCitadel_Shield {
        }

        // Parent: None
        // Fields: 0
        namespace CPhysicsNPCSolver {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierDruidInvisVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicBeam {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_ChannelTetherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_Affliction_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HealthSwapPrecast {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityBloodShardsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RevealTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Basic_HealthRegenVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_PestilenceDroneDispenser {
            constexpr std::ptrdiff_t CNPC_Neutral_SinnersSacrifice = 0x0; // 
        }

        // Parent: m_hPositionKeys
        // Fields: 0
        namespace CTextureBasedAnimatable {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpiritBubble {
        }

        // Parent: m_nAttachment
        // Fields: 1
        namespace CSprite {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseMoveBehavior {
        }

        // Parent: m_Radius
        // Fields: 1
        namespace CDynamicLight {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PunkGoat_Tether {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_Flashbang {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: m_qPostTeleportAngles
        // Fields: 1
        namespace CAbility_Drifter_ShadowMark {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RiotProtocol {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wrecker_BoulderGrenade {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bebop_StickyBomb2 {
            constexpr std::ptrdiff_t CCitadel_Ability_AirheartRocketeer4VData = 0x1898; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FissureWall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheaterCurse {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicAutoCitadel {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_AbilityLifeSteal {
            constexpr std::ptrdiff_t m_MutedParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_MutedPlayerParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_MutedStatusParticle = 0x910; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelZapTrigger {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_GoldVData = 0x7c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_KillSummonVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantHealingTree {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_Cadence {
            constexpr std::ptrdiff_t ELassoHoldPosition = 0x10101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityRocketLauncherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CItem_ResonantHealing_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_AoEWaveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RampSlowModifierVData {
            constexpr std::ptrdiff_t citadel_base_ability = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Base_BuildupVData {
        }

        // Parent: None
        // Fields: 1
        namespace CRotDoor {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: CCitadel_Ability_PowerJump
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepAOEVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPathMover {
        }

        // Parent: None
        // Fields: 0
        namespace CFuncVPhysicsClip {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrowdControl_Diminish_WatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_OnTheHuntVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_LoveBitesProc {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityRollingFireBallVData {
            constexpr std::ptrdiff_t citadel_ability_stomp = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ProjectMindVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IncendiaryProjectile {
            constexpr std::ptrdiff_t m_IceDomeModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FlameDashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_RocketBoosterVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ClimbRopeSlow {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayerPawnBase {
            constexpr std::ptrdiff_t CCitadelPlayerPawnBase = 0xd70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDevTrigger {
            constexpr std::ptrdiff_t CTriggerTrooperShrineJumpVolume = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_KothComebackBonuses {
            constexpr std::ptrdiff_t CCitadel_Modifier_KothComebackBonuses = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Link {
            constexpr std::ptrdiff_t m_AmbientParticle = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 2
        namespace CPhysFixed {
            constexpr std::ptrdiff_t CPhysFixed = 0x528; // 
            constexpr std::ptrdiff_t coord = 0x0; // MNetworkEnable
        }

        // Parent: None
        // Fields: 0
        namespace CLogicNavigation {
        }

        // Parent: m_pathString
        // Fields: 1
        namespace CPathSimple {
            constexpr std::ptrdiff_t server = 0x30110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathParticleRopeAlias_path_particle_rope_clientside {
            constexpr std::ptrdiff_t CMarkupVolumeWithRef = 0x7e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NeutralAgro {
            constexpr std::ptrdiff_t CCitadelClimbRopeTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Ability02VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_FeatherBoomerangVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fear {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SleepDagger {
            constexpr std::ptrdiff_t Visuals = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 0
        namespace CItem_FleetfootBoots_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FireRateAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Inhibitor_Proc {
            constexpr std::ptrdiff_t CCitadel_Modifier_CrushingFistsDebuff_VData = 0x840; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReturnFire {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcticBlast_Freeze {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Objective_HealthGrowth {
            constexpr std::ptrdiff_t server = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Invis {
            constexpr std::ptrdiff_t server = 0x201ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierTier2BossAoeWaveAuraVData {
        }

        // Parent: m_vBoxMins
        // Fields: 1
        namespace CEnvWindVolume {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fencer_ThrowBladeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelFamiliarClone_MovementServices {
        }

        // Parent: m_vTargetPosition
        // Fields: 1
        namespace CCitadel_Ability_Mirage_Teleport {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceAnthemVData {
        }

        // Parent: Visuals
        // Fields: 0
        namespace CCitadel_Ability_Vandal_PillarVData {
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 0
        namespace CCitadel_Ability_GuidedArrow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChainLightningVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GuardianWard {
            constexpr std::ptrdiff_t CCitadel_Ability_Shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AblativeCoatResistBuffVData {
        }

        // Parent: m_eType
        // Fields: 0
        namespace PlayOfTheGameTrigger_t {
        }

        // Parent: None
        // Fields: 0
        namespace CFuncElectrifiedVolume {
        }

        // Parent: None
        // Fields: 1
        namespace CItemMysticReverb {
            constexpr std::ptrdiff_t m_nNumStacks = 0x11f8; // int32
        }

        // Parent: None
        // Fields: 1
        namespace CAI_VolumetricEventEntityAlias_ai_sound {
            constexpr std::ptrdiff_t CAI_VolumetricEventEntityAlias_ai_sound = 0x4c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PriestKnockbackVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_PoisonJarVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_CardTossCard_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ImmobilizeTrap {
            constexpr std::ptrdiff_t CAbility_Drifter_Darkness_VData = 0x1a28; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_HeroTestOrbSpawnerVData {
        }

        // Parent: colorSecondary
        // Fields: 0
        namespace fogparams_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Upgrade_OverdriveClip = 0x158; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Stasis_Bomb {
        }

        // Parent: m_flRadius
        // Fields: 0
        namespace CSoundEventOBBEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_HauntingSpirits {
            constexpr std::ptrdiff_t CCitadel_Modifier_VoidSphereVData = 0xb38; // 
        }

        // Parent: m_bHasTetherTarget
        // Fields: 0
        namespace CCitadel_Ability_Necro_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_CrossbowEquipped {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntityVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_EvasionVData {
            constexpr std::ptrdiff_t ability_swan_featherboomerang = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_DyingStarVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bebop_StickyBomb2VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_RegenerativeArmorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ClimbRopeSlowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Intrinsic_BaseVData {
        }

        // Parent: m_nBodyGroup
        // Fields: 0
        namespace WeakPoint_t {
        }

        // Parent: m_eAliveState
        // Fields: 1
        namespace CNPC_Boss_Tier3 {
            constexpr std::ptrdiff_t server = 0x90110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerMultiple {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPhysBallSocket {
        }

        // Parent: None
        // Fields: 0
        namespace CDebugHistory {
        }

        // Parent: m_nMarks
        // Fields: 0
        namespace AirheartLockOnTarget_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PunkGoat_Blasted {
            constexpr std::ptrdiff_t CAI_NPC_NecroSkeleVData = 0x1398; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_CrossbowWeaponVData {
            constexpr std::ptrdiff_t featherboomerang_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_Revelation_Target {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SmokeGrenade = 0x11f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Revelation_Target_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_RiotProtocol_CastDelay {
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_RadiantBlastVData = 0x1a18; // 
        }

        // Parent: m_nMeleeHits
        // Fields: 0
        namespace CCitadel_FissureWallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ModDisruptorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_LeechHealbane_Debuff {
        }

        // Parent: Sounds
        // Fields: 0
        namespace CCitadel_KothCashInVData {
        }

        // Parent: m_iszOpvarName
        // Fields: 0
        namespace CSoundOpvarSetPointBase {
        }

        // Parent: None
        // Fields: 0
        namespace CExplosionTypeData {
        }

        // Parent: None
        // Fields: 1
        namespace CPathKeyFrame {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FamiliarPrimaryWeaponVData {
        }

        // Parent: CAbility_Fathom_LurkersAmbush
        // Fields: 1
        namespace CAbility_Fathom_LurkersAmbush {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fathom_Breach {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Base_DOT {
            constexpr std::ptrdiff_t m_HeadshotDebuffModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ImpactParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Galvanic_Storm {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_TrooperNeutralNodeMoverVData {
        }

        // Parent: None
        // Fields: 1
        namespace CScriptTriggerPush {
            constexpr std::ptrdiff_t CScriptTriggerPush = 0x928; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAITestPath {
            constexpr std::ptrdiff_t CAITestPath = 0x4b0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CRevertSaved {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Operative_Blindside_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityThumper3VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakRadianceVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Lockdown_BulletResist {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData = 0x7d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Spin {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepDagger_Asleep {
            constexpr std::ptrdiff_t m_nFXIndex = 0xf70; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MysticShotVData {
            constexpr std::ptrdiff_t upgrade_celestial_guidance = 0x0; // 
            constexpr std::ptrdiff_t upgrade_metal_skin = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Glitch {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_GritVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierObscuredVData {
        }

        // Parent: CNPC_FieldSentry
        // Fields: 1
        namespace CNPC_FieldSentry {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_SpiderAnimating {
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CTriggerHurt {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ShadowClone {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_Gold {
            constexpr std::ptrdiff_t CCitadel_Pickup_Gold = 0xb20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_MagicianTurret {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_HeroTestOrbSpawner {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = 0x530; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_AutoCleanse {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_Ghoul_ExplodeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Doorway_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GarbageAuraTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_HealthNova {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BloodTribute {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bubble = 0x1f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_WarpStone_Caster_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CTrooperApproachHorizon {
            constexpr std::ptrdiff_t CCitadel_DynamicProp = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTeamplayRules {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CScriptTriggerHurt {
            constexpr std::ptrdiff_t CScriptTriggerHurt = 0x978; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Warden_RiotProtocol {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BoloVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcticBlastAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Neutral_Debuff_Pushback {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_Currency {
            constexpr std::ptrdiff_t CCitadel_Pickup_Currency = 0xb20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerDetectExplosion {
            constexpr std::ptrdiff_t CTriggerPhysics = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterName {
            constexpr std::ptrdiff_t CFilterName = 0x4e0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Item_GooseEgg {
            constexpr std::ptrdiff_t m_vecOrigin = 0x108; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMins = 0x114; // Vector
            constexpr std::ptrdiff_t m_vecWorldSpaceMaxs = 0x120; // Vector
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fencer_Ultimate_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FamiliarAltWeaponVData {
        }

        // Parent: m_ExplodeParticle
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Bomb_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_CrossbowWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_CopyUlt = 0x1c0; // 
        }

        // Parent: CAbility_Mirage_Tornado
        // Fields: 0
        namespace CAbility_Mirage_Tornado {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_Lullaby {
            constexpr std::ptrdiff_t CCitadel_Modifire_Bookworm_DragonFire = 0x1d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wrecker_Salvage {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StickyBombOnGround {
            constexpr std::ptrdiff_t CCitadel_Ability_Shotgun_Astro = 0x0; // 
        }

        // Parent: m_eRollingState
        // Fields: 2
        namespace CCitadel_Ability_GooBowlingBall {
            constexpr std::ptrdiff_t m_TargetPreviews = 0xf90; // CUtlVector<ParticleIndex_t>
            constexpr std::ptrdiff_t m_bAirCast = 0xfa8; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLashGrappleEnemyDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RunedGauntlets {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LifestrikeGauntlets {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_AoEWave = 0x1100; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CQC_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritSnatch {
            constexpr std::ptrdiff_t CItemMysticReverb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Push {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InvisVData {
        }

        // Parent: None
        // Fields: 0
        namespace COrbSpawnerBounty_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_WeaponPowerForHealth {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_DamageRecycler = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_KickFlipVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Targetdummy_1 {
            constexpr std::ptrdiff_t CCitadel_Ability_Protection_RacketVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FireBomb_Buff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletArmorShredder_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierQuarantineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseAIVolumetricEventAPI {
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_RegeneratingBulletShield {
            constexpr std::ptrdiff_t m_BuffModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_StackSound = 0x18c8; // CSoundEventName
            constexpr std::ptrdiff_t m_AmmoSound = 0x18d8; // CSoundEventName
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CP_Capturer {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierPowerGeneratorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Hideout_ClockVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Vandal_Pillar {
            constexpr std::ptrdiff_t CModifierRiotCastDelayVData = 0x760; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_DebuffDaggerVData {
        }

        // Parent: Sounds
        // Fields: 1
        namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
            constexpr std::ptrdiff_t ability_shieldguy_ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WreckingBall_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bomber_ULT {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest04VData {
        }

        // Parent: None
        // Fields: 0
        namespace CProjectile_Boho_BouncyProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Doorway = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_FocusLens {
            constexpr std::ptrdiff_t m_flCurrentThinkRate = 0x1d8; // float32
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05VData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_AoeWaveAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SuperAcolytesGlove {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemSingleTargetStunVData {
        }

        // Parent: None
        // Fields: 1
        namespace CRulePointEntity {
            constexpr std::ptrdiff_t CRulePointEntity = 0x790; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2Weakened {
        }

        // Parent: m_ModifierCheatDeathActivated
        // Fields: 0
        namespace CCitadel_Ability_Necro_GraveStoneVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_DamageShare {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Sleeping = 0x200; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_DamageShareVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntity {
            constexpr std::ptrdiff_t CCitadel_Ability_SelfVacuum = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_PlasmaFlux_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierRiotProtocolEnemyDebuffVData {
            constexpr std::ptrdiff_t citadel_ability_tengu_airlift = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TetherNoConnection {
            constexpr std::ptrdiff_t CCitadel_Ability_WreckingBall = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ComboBreakerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WeaponPowerForHealth {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3Phase1VData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_CallInfo {
        }

        // Parent: None
        // Fields: 0
        namespace CFuncMoveLinearAlias_momentary_door {
        }

        // Parent: m_bAnimGraphUpdateEnabled
        // Fields: 1
        namespace CBaseAnimGraph {
            constexpr std::ptrdiff_t CBaseAnimGraph = 0xa90; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TangoTether_Trigger {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Petrify {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_MaulingLeap = 0x1280; // 
        }

        // Parent: CCitadelBaseTriggerAbility
        // Fields: 0
        namespace CCitadelBaseTriggerAbility {
        }

        // Parent: m_flFogFalloffExponent
        // Fields: 1
        namespace CEnvCubemapFog {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Fencer_Lunge_VData {
            constexpr std::ptrdiff_t citadel_ability_static_charge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Doorman_Bomb_Debuff {
        }

        // Parent: m_ExplodeParticle
        // Fields: 0
        namespace CCitadel_Ability_Priest_SilenceBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargePullEnemy {
            constexpr std::ptrdiff_t m_empWaveParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_TimeWall_Effect {
            constexpr std::ptrdiff_t CProjectile_Airheart_FloatingBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RocketBarrage {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Gun_Spikes = 0x1d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Afterburn_DOT_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GooseEggPassiveGold {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest05VData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeroUpgradeBonuses {
            constexpr std::ptrdiff_t CCitadel_Modifier_UIAbilityHudNotificaiton = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Pickup_Modifier {
            constexpr std::ptrdiff_t CCitadel_Pickup_Modifier = 0xb10; // 
            constexpr std::ptrdiff_t m_unItemID = 0xb10; // CUtlStringToken
        }

        // Parent: None
        // Fields: 0
        namespace CBaseDoor {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuggageDragVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_AnimalHexArea {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PillarVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Viper_Venom {
            constexpr std::ptrdiff_t m_LaserShot = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ChargeParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Astro_ShotgunBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MobileResupplyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets_RestoreHealth {
            constexpr std::ptrdiff_t m_nBonusMaxClipSize = 0xd0; // int32
        }

        // Parent: None
        // Fields: 1
        namespace CServerOnlyPointEntity {
            constexpr std::ptrdiff_t CServerOnlyPointEntity = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_BookwormGun {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticalPianoAura {
        }

        // Parent: CCitadel_Upgrade_MagicCarpet
        // Fields: 0
        namespace CCitadel_Upgrade_MagicCarpet {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelModifierAura_Cylinder {
            constexpr std::ptrdiff_t Space separated set of classes to add to the panel (ex: "medium superCool noMiddle" = 0x0; // 
            constexpr std::ptrdiff_t CCitadelModifierAura_Cylinder = 0x108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVData_BaseAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_AttachVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_Cadence_GrandFinale = 0x1070; // 
        }

        // Parent: m_DragonSpawnParticle
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_DragonFireVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_ShockFullyCharged {
            constexpr std::ptrdiff_t CCitadel_Projectile_BloodBomb = 0x890; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDomeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Stomp {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PulseGrenade_TimeSlow {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bookworm_Immobilize = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EnchantedHolsters_Buff {
            constexpr std::ptrdiff_t CCitadel_Modifier_EscalatingExposureProcWatcherVData = 0x790; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Weapon_BossTier3 {
            constexpr std::ptrdiff_t CCitadel_Modifier_EscalatingExposure = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura_Default {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoRemarkable {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNullEntity {
            constexpr std::ptrdiff_t CNullEntity = 0x4a0; // 
        }

        // Parent: m_mapWerewolfAbilities
        // Fields: 0
        namespace CCitadel_Modifier_WerewolfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_ImmobilizeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Operative_UmbrellaManeuver_VData {
            constexpr std::ptrdiff_t rutger_force_field = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadencePrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityFealtyVData {
        }

        // Parent: CCitadel_Ability_UltCombo
        // Fields: 1
        namespace CCitadel_Ability_UltCombo {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_AerialAssualtVData {
            constexpr std::ptrdiff_t upgrade_aerial_assault = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CanDamageTier3Phase2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletArmorReduction {
            constexpr std::ptrdiff_t CCitadel_Modifier_BulletArmorReduction = 0x150; // 
        }

        // Parent: None
        // Fields: 0
        namespace CLogicalEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Pickup_NecroDeath {
            constexpr std::ptrdiff_t CCitadel_Pickup_NecroDeath = 0xb20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelZiplinePath {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierItemPickupTimerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTrackedProjectile {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemGenericTriggerHelper {
            constexpr std::ptrdiff_t CItemGenericTriggerHelper = 0x788; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_ZombieWall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fathom_ScaldingSpray_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ViperVenomProcWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierPsychicLiftVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CQC_Proc {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealingPulse_Tracker {
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ColdFrontAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticReverbExplosionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_FreePass {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAura = 0x110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Airheart_Ult {
            constexpr std::ptrdiff_t m_SlowModifier = 0x780; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_strWeaponShootSound = 0x790; // CSoundEventName
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_MageWalkVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Intimidated {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierStormCloudVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_SmokeBomb_PreCast {
            constexpr std::ptrdiff_t CModifier_SiphonBullets_RestoreHealth = 0xd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BurstFire_Actuator {
        }

        // Parent: m_vecAbilities
        // Fields: 0
        namespace AbilityResource_t {
        }

        // Parent: m_bFreezePeriod
        // Fields: 0
        namespace CCitadelTrooperMinimap {
        }

        // Parent: m_hLastWeapon
        // Fields: 0
        namespace CPlayer_WeaponServices {
        }

        // Parent: m_attachmentPointBoneSpace
        // Fields: 0
        namespace CRagdollPropAttached {
        }

        // Parent: None
        // Fields: 2
        namespace CFuncPlat {
            constexpr std::ptrdiff_t CInfoLandmark = 0x0; // 
            constexpr std::ptrdiff_t CFuncPlat = 0x830; // 
        }

        // Parent: m_nColorMode
        // Fields: 0
        namespace CBarnLight {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HideoutIntro {
            constexpr std::ptrdiff_t CCitadel_Modifier_HideoutIntro = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CInstructorEventEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_Darkness_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_AnthemBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tengu_Urn {
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_4 = 0xf70; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ThrowSand {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EnchantedHolsters_Watcher_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechOverflowProcWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ApplyModifierOnDamageTaken {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierNonPlayerCameraSettingsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RootVData {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoHeroTestingPoint {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
            constexpr std::ptrdiff_t CCitadel_Item_TechDamagePulse = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unstick {
        }

        // Parent: None
        // Fields: 1
        namespace CPathCorner {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fortuna_Ability02 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Perched_Predator {
            constexpr std::ptrdiff_t CCitadel_MagicianTurret_GraphController = 0xe0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityDashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DiminishingSlowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_NeutralSinnerSacrificeHideoutVData {
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerSndSosOpvar {
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t m_worldGroupId = 0x4a0; // WorldGroupId_t
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_ForceField_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_VoidSphereBuffVData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_SilenceContraptions {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Fencer_Ultimate_Caster {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_StaticChargeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Backstabber_VData {
            constexpr std::ptrdiff_t upgrade_infinitemagazine = 0x0; // 
        }

        // Parent: m_nLimitCount
        // Fields: 1
        namespace CPulseCell_LimitCount {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_CallExternalMethod {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: CCitadel_Ability_MobileResupply
        // Fields: 1
        namespace CCitadel_MobileResupply {
            constexpr std::ptrdiff_t CAbilityCadenceCrescendoVData = 0x1828; // 
        }

        // Parent: m_bActive
        // Fields: 1
        namespace CPointCommentaryNode {
            constexpr std::ptrdiff_t CPointCommentaryNode = 0xb70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMomentaryRotButton {
            constexpr std::ptrdiff_t TOGGLE_STATE = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSceneListManager {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CEnvTilt {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeTriggerable {
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerable = 0x530; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Hideout_BallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_FearVData {
            constexpr std::ptrdiff_t magician_magicbolt_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_Ghoul_Explode {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_BearTrap = 0x0; // 
        }

        // Parent: m_bHoldingAbilityButton
        // Fields: 0
        namespace CCitadel_Ability_PunkGoat_Ult {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Thumper_Ability_2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ClusterGrenade_Debuff {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_DamageAmp {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_KineticCarbine {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_CloakingDevice_Active_Ambush {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_BulletArmorReductionAura = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NewYears_Fireworks {
            constexpr std::ptrdiff_t PingWheelMessage_t = 0xb8; // 
        }

        // Parent: LocalPlayerOwnerAndObserversExclusive
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hero_Testing_Damage_Aura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAuraTarget = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_Behavior {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncMover {
            constexpr std::ptrdiff_t server = 0x40110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Neutral_Flying_WeakpointVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_LeapingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_CoffinVData {
        }

        // Parent: m_AuraModifier
        // Fields: 0
        namespace CCitadel_Modifier_Necro_SpawnZombies_AreaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_KnightChargeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Drifter_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Operative_Blindside {
            constexpr std::ptrdiff_t CAbility_Synth_Affliction = 0x0; // 
            constexpr std::ptrdiff_t m_hHexWarningParticle = 0xd0; // ParticleIndex_t
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_MagicBolt {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Fathom_ReefdwellerHarpoon_VData {
            constexpr std::ptrdiff_t ability_priest_smokegrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityRapidFireVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierRapidFireAirJuggleVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_CrowdControl {
            constexpr std::ptrdiff_t m_iBonusBats = 0xf70; // int32
            constexpr std::ptrdiff_t m_iBatCountOnCast = 0xf74; // int32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Low_Health_GlowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_RocketBootsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_AblativeCoatVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBullets_BulletBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FocusLens_Damage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
            constexpr std::ptrdiff_t CCitadel_UtilityUpgrade_DebuffImmunity = 0xf78; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierTier3BossLaserBeamVData {
            constexpr std::ptrdiff_t upgrade_mod_disruptor = 0x0; // 
        }

        // Parent: m_bJumped
        // Fields: 1
        namespace CCitadel_Ability_Jump {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DamageResistance {
            constexpr std::ptrdiff_t ItemSectionInfo_t = 0x20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_ConeWaveProjectile {
            constexpr std::ptrdiff_t Visuals = 0x0; // 
            constexpr std::ptrdiff_t CCitadelModifierVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReloadSpeedVData {
        }

        // Parent: overlay_vars
        // Fields: 1
        namespace CPhysicsProp {
            constexpr std::ptrdiff_t server = 0x70110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncNavObstruction {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPhysWheelConstraint {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_BearTrapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_Zombie {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_Zombie = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHornetLeapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_LifeDrainVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_SpiritSap_VData {
            constexpr std::ptrdiff_t upgrade_return_fire = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DebuffImmunity {
        }

        // Parent: None
        // Fields: 1
        namespace CSkyboxReference {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItem_RestorativeLocket {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_TechUpgrade_CorpseExplosion {
            constexpr std::ptrdiff_t CCitadel_Item_DivinersKevlar_VData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointPulse {
            constexpr std::ptrdiff_t CPointPulse = 0x4a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_BreakablePropHealthPickupVData {
            constexpr std::ptrdiff_t citadel_point_talker_idol = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Teleport {
            constexpr std::ptrdiff_t CTriggerSuspendModifier = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Lift_VData {
            constexpr std::ptrdiff_t synth_barrage = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierIcePathVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bull_Leap_Boosting_Crash {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bull_Leap_Boosting_Crash = 0xd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_BloodTributeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shrink_Ray {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechBurst_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SuperNeutralIncendiary {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPickupRejuvVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hornet_Chain_Connection {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: CCitadel_CosmeticItem_VotingPoster
        // Fields: 1
        namespace CCitadel_CosmeticItem_VotingPoster {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItem_WitheringWhip {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_RejuvTrackingProjectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Sprint = 0xf88; // 
        }

        // Parent: None
        // Fields: 2
        namespace CFilterClass {
            constexpr std::ptrdiff_t CFilterClass = 0x4e0; // 
            constexpr std::ptrdiff_t m_iFilterModifier = 0x4d8; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_EscapeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HighAlert {
            constexpr std::ptrdiff_t CCitadelViscousBall = 0x8f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_CatFormVData {
            constexpr std::ptrdiff_t ability_swan_acrobat = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
            constexpr std::ptrdiff_t m_PortalParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FlameDashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SlowVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearDeathFX {
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Airheart_Package {
            constexpr std::ptrdiff_t CCitadel_Ability_Gravity_Lasso_VData = 0x1928; // 
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerToggleSave {
            constexpr std::ptrdiff_t CTakeDamageInfo = 0x0; // 
            constexpr std::ptrdiff_t CTriggerToggleSave = 0x8e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_Revelation_Aura {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CelestialGuidance {
        }

        // Parent: None
        // Fields: 0
        namespace CPathWithDynamicNodes {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SettingSun {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_MobileResupply {
            constexpr std::ptrdiff_t CCitadel_Ability_Uppercut = 0x0; // 
            constexpr std::ptrdiff_t m_vecCurrentTargets = 0xf70; // CUtlVector<CHandle<CBaseEntity>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wraith_RapidFire {
            constexpr std::ptrdiff_t CCitadel_Modifier_Haunt_Damage_VData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChainLightningEffectVData {
        }

        // Parent: None
        // Fields: 1
        namespace CBaseNPCMaker {
            constexpr std::ptrdiff_t CAI_VolumetricEventEntity = 0x0; // 
        }

        // Parent: m_flFadeOutDuration
        // Fields: 0
        namespace CColorCorrection {
        }

        // Parent: None
        // Fields: 4
        namespace CPropDoorRotatingBreakable {
            constexpr std::ptrdiff_t server = 0xa0110; // 
            constexpr std::ptrdiff_t m_hActivator = 0xd8; // CHandle<CBaseEntity>
            constexpr std::ptrdiff_t m_hCaller = 0xdc; // CHandle<CBaseEntity>
            constexpr std::ptrdiff_t CEnableMotionFixup = 0x0; // 
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 1
        namespace CItemCrate {
            constexpr std::ptrdiff_t CItemCrate = 0xda0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLightDirectionalEntity {
            constexpr std::ptrdiff_t CLightDirectionalEntity = 0x788; // 
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Synth_Barrage {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_StackingDefense = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3Boss_AoeWaveAura {
            constexpr std::ptrdiff_t CCitadel_Item_TechDamagePulseVData = 0x1a90; // 
        }

        // Parent: m_PanelClassName
        // Fields: 1
        namespace CBaseClientUIEntity {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBreakable {
            constexpr std::ptrdiff_t CBaseAnimGraphDestructibleParts_GraphController = 0x90; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoLandmark {
            constexpr std::ptrdiff_t CInfoLandmark = 0x4a0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseFilter {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_PainAura_TargetVData {
            constexpr std::ptrdiff_t ability_fortuna_ability02 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Synth_Pulse_Escape {
            constexpr std::ptrdiff_t CProjectile_Perched_Predator = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShadowPulse {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Wraith_RapidFireVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Item_DPS_Aura_Active {
            constexpr std::ptrdiff_t CCitadel_Modifier_EldritchShotVData = 0x978; // 
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
        // Fields: 1
        namespace CCitadel_GuidedArrow_OwlModel {
            constexpr std::ptrdiff_t CCitadel_Ability_Burrow = 0x1428; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DebuffReducer {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Knockdown {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Gun {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Gun = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_MovingToAttach {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpinVData {
        }

        // Parent: m_vecInitialPosition
        // Fields: 0
        namespace CCitadel_Ability_FissureWall {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fervor_Bonuses {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_RechargingBullets = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Buff {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StreetBrawlTrooper {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDashGroundAura {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3BossInvuln {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier3BossInvuln = 0xd0; // 
        }

        // Parent: m_flFogEndDistance
        // Fields: 1
        namespace CGradientFog {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Magician_AnimalHex_HexArea {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_HotShot {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_MaulingLeap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_Gun_Spikes {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckerTeleportVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PatronsBlessingEnemyTrackerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Aerial_Assault_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_Aerial_Assault_Watcher = 0x1d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_HeadshotDamage_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_OverdriveClip_VData {
            constexpr std::ptrdiff_t upgrade_ricochet = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_SiphonBullets_VData {
        }

        // Parent: CCitadel_Modifier_TechDamageProcWatcher
        // Fields: 1
        namespace CCitadel_Modifier_SlowingTech_ProcVData {
            constexpr std::ptrdiff_t ability_medic_trooper_heal = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundOpvarSetAABBEntity {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_PlaySequence {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_BreakableProp {
            constexpr std::ptrdiff_t server = 0x50110; // 
        }

        // Parent: CCitadel_Modifier_Hideout_Teleport
        // Fields: 0
        namespace CCitadelHideoutInteractableTrigger {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Boss_Tier2VData {
            constexpr std::ptrdiff_t path_particle_rope = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Metal {
            constexpr std::ptrdiff_t CitadelHeroSpawnData_t = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointClientUIWorldTextPanel {
            constexpr std::ptrdiff_t CPointClientUIWorldTextPanel = 0xb38; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Ability_Punkgoat_PrimaryWeapon {
            constexpr std::ptrdiff_t m_CursedModel = 0x750; // ModelChange_t
            constexpr std::ptrdiff_t m_TargetParticle = 0x838; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_flModelScale = 0x918; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FealtyTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_Urn = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TangoTether_TetherReceiver {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerSalvage {
            constexpr std::ptrdiff_t CAbilityGangActivityVData = 0x1828; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Astro_ShotgunBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityMeleeParryVData {
        }

        // Parent: m_eCurrentAttackState
        // Fields: 1
        namespace CCitadel_Ability_HoldMelee {
            constexpr std::ptrdiff_t server = 0x501ff; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_ItemPunchable_GoldVData {
        }

        // Parent: None
        // Fields: 1
        namespace CFuncRotator {
            constexpr std::ptrdiff_t Custom death handshake to set when this damage level is destroyed. = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSoundEventEntity {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Infested {
            constexpr std::ptrdiff_t CCitadel_Modifier_Infested = 0x260; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelf {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: m_SwingEndTime
        // Fields: 1
        namespace CCitadel_Ability_SkyRunner_SwingLine {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_PredatoryStatue {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_KillSummon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticShot {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColossusActive_VData {
            constexpr std::ptrdiff_t upgrade_containment = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTutorialPoint {
            constexpr std::ptrdiff_t server = 0x20108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvFade {
            constexpr std::ptrdiff_t server = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_ReplicatedBarrier {
            constexpr std::ptrdiff_t CCitadel_Ability_Hornet_Snipe = 0x1628; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit {
            constexpr std::ptrdiff_t CCitadel_Ability_RocketBarrage = 0x1440; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_BatCloud_SelfVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Viper_StackingDebuff {
            constexpr std::ptrdiff_t CAbilityFealtyVData = 0x1828; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityBouncePadVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPowerSurgeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unstable_ConcoctionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Electric_SlippersVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frenzy_MoveSpeed {
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine_VData = 0x21e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheaterCurseVData {
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerImpact {
            constexpr std::ptrdiff_t server = 0x70108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_VexBarrier {
        }

        // Parent: None
        // Fields: 0
        namespace CAI_NPC_NecroSkeleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityPunkgoatGoatFlipVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SkyRunner_FlakShot {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_CheatDeath {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_RapidFire {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HornetSting {
            constexpr std::ptrdiff_t CCitadel_Modifier_IceDome = 0x320; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TrooperZipLine {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletResilience {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_AOE_Tech_ShieldVData {
        }

        // Parent: None
        // Fields: 0
        namespace CTestPulseIOEntityHandleIntArgs_t {
        }

        // Parent: tools/images/pulse_editor/cursor_wait_zone.png
        // Fields: 1
        namespace CPulseCell_CursorQueue {
            constexpr std::ptrdiff_t CPulseCell_CursorQueue = 0xa0; // 
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 1
        namespace CPulseCell_Value_RandomFloat {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseExecCursor {
        }

        // Parent: None
        // Fields: 0
        namespace CTriggerRemoveModifier {
        }

        // Parent: overlay_vars
        // Fields: 1
        namespace CBasePropDoor {
            constexpr std::ptrdiff_t server = 0x801ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_HookBlade {
            constexpr std::ptrdiff_t CCitadel_Modifier_TangoTether_TetherReceiver = 0x158; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicBranchList {
            constexpr std::ptrdiff_t CMathRemap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatGoingUpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashFlogVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HollowPoint_ProcVData {
            constexpr std::ptrdiff_t upgrade_blood_tribute = 0x0; // 
        }

        // Parent: m_flSimulationTime
        // Fields: 1
        namespace CNPC_SimpleAnimatingAI {
            constexpr std::ptrdiff_t CNPC_Neutral_Flying_Weakpoint = 0x0; // 
        }

        // Parent: m_bUseAnimGraph
        // Fields: 1
        namespace CDynamicProp {
            constexpr std::ptrdiff_t server = 0x70110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Charge_Mastery {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_AOE_Tech_Shield {
            constexpr std::ptrdiff_t CCitadel_Modifier_Berserker = 0x258; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHoldingGoldenIdolVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_Rifle {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatBlastedActive {
            constexpr std::ptrdiff_t CCitadel_Modifier_CopiedUlt_SpawnedEntityVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_Barrage_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Dust_Storm {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_GooGrenade {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityChargedBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterTeam {
            constexpr std::ptrdiff_t CFilterTeam = 0x4e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CMiniMapMarker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierAura_Cone {
            constexpr std::ptrdiff_t CCitadelModifierAura_Cone = 0x108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierAura {
            constexpr std::ptrdiff_t server = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Graf_Ability01 {
            constexpr std::ptrdiff_t server = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidBasePlant {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_DebuffModifier
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
            constexpr std::ptrdiff_t citadel_ability_bebop_laser_beam = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WeaponPowerForHealthVData {
            constexpr std::ptrdiff_t upgrade_mystic_reverb = 0x0; // 
        }

        // Parent: m_linearDamping
        // Fields: 1
        namespace CTriggerPhysics {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticalPianoVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive {
            constexpr std::ptrdiff_t CCitadel_Modifier_CQC_Proc = 0x288; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CheatDeath {
        }

        // Parent: CCitadelBaseLockonAbility
        // Fields: 1
        namespace CCitadelBaseLockonAbility {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFuncTimescale {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoInteraction {
            constexpr std::ptrdiff_t server = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Cadence_Crescendo {
        }

        // Parent: m_HealParticle
        // Fields: 1
        namespace CCitadel_Item_HealthRegenAuraVData {
            constexpr std::ptrdiff_t item_projectile_test_01 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UltimateBurst_DelayedEffect {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AmmoScavenger {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StreetBrawl_Phase {
            constexpr std::ptrdiff_t CCitadel_Modifier_Objective_BulletReistVData = 0x758; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PreventHealing {
            constexpr std::ptrdiff_t Don't show a status effect in the Important Box = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseEventProc {
        }

        // Parent: None
        // Fields: 1
        namespace CSoundOpvarSetPointEntity {
            constexpr std::ptrdiff_t CSoundOpvarSetPointEntity = 0x618; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTargetServerOnly {
            constexpr std::ptrdiff_t CInfoTargetServerOnly = 0x4a0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CInfoTrooperNeutralSpawn {
            constexpr std::ptrdiff_t m_flPanel1 = 0x7f0; // CAnimGraphParamRef<float32>
            constexpr std::ptrdiff_t m_bUnpackInstant = 0x818; // CAnimGraphParamRef<bool>
            constexpr std::ptrdiff_t m_flVelocity = 0x840; // CAnimGraphParamRef<float32>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Drifter_PrimaryWeapon_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_SpreadingFireVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HauntWatcherVData {
            constexpr std::ptrdiff_t citadel_ability_psychic_lift = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldGuy_Ability01 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier2Boss_RocketDamage_Aura = 0x188; // 
        }

        // Parent: None
        // Fields: 1
        namespace CServerRagdollTrigger {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CDynamicPropAlias_dynamic_prop {
        }

        // Parent: None
        // Fields: 0
        namespace CMarkupVolumeTagged {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoParticleTarget {
            constexpr std::ptrdiff_t CLightSpotEntity = 0x788; // 
        }

        // Parent: m_Entity_bCustomCubemapTexture
        // Fields: 1
        namespace CEnvCubemap {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Skyrunner_MagicBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boho_DoubleHitBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_AnimalCurse {
            constexpr std::ptrdiff_t CCitadel_CatAnimating = 0xc10; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Mirage_SandPhantom_ProcReady {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierFlyingStrikeTargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShieldGuy_Ability04 {
            constexpr std::ptrdiff_t CCitadel_Ability_SkyRunner_SwingLine = 0x1120; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VoidSphere {
            constexpr std::ptrdiff_t server = 0x60110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StompDebuff {
            constexpr std::ptrdiff_t Motion = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Burning {
            constexpr std::ptrdiff_t CAbilitySprintVData = 0x1910; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CritShot {
            constexpr std::ptrdiff_t CCitadel_Item_RescueBeamVData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_DPS_Aura_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertyBase {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayerClipComponent {
        }

        // Parent: m_CCitadelMinimapComponent
        // Fields: 1
        namespace CTriggerItemShop {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CTriggerLerpObject {
            constexpr std::ptrdiff_t server = 0x60108; // 
            constexpr std::ptrdiff_t m_sMapName = 0x8e0; // CUtlString
        }

        // Parent: None
        // Fields: 1
        namespace CPhysicsPropOverride {
            constexpr std::ptrdiff_t CPhysicsPropOverride = 0xd60; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerSave {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VacuumAura {
            constexpr std::ptrdiff_t server = 0x70108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemAOESilenceAuraVData {
            constexpr std::ptrdiff_t upgrade_mystic_reverb = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_SelfBuffModifier {
            constexpr std::ptrdiff_t server = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointHurt {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hero_Testing_Damage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_Immobilize {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_WeaponSwapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Mirage_SandPhantom_VData {
            constexpr std::ptrdiff_t fathom_breach = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_RescueBeamVData {
            constexpr std::ptrdiff_t super_neutral_shield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAI_GoalEntity {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_UtilityUpgrade_AOESmokeBomb {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x750; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t m_ImmunityModifier = 0x760; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x770; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThermalDetonator_Thinker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_TransformationWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_PsychicLift = 0x278; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Frank_SelfZap {
            constexpr std::ptrdiff_t CCitadel_Ability_GenericPerson_4 = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Rutger_RocketLauncher {
            constexpr std::ptrdiff_t m_ChargingSpeedCurve = 0x1818; // CPiecewiseCurve
            constexpr std::ptrdiff_t m_GoingUpSpeedCurve = 0x1858; // CPiecewiseCurve
        }

        // Parent: m_flHeatTime
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TeleportToGangster {
            constexpr std::ptrdiff_t CCitadel_Werewolf_HuntVData = 0x1858; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LashGrappleTarget {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerSurgeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FullSpectrum {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_RocketBarrage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingTech_Proc {
            constexpr std::ptrdiff_t server = 0x301ff; // 
        }

        // Parent: m_currentNPCBasePhysicsHull
        // Fields: 1
        namespace CAI_BaseNPC {
            constexpr std::ptrdiff_t UnreachableTarget_t = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerNeutralShield {
            constexpr std::ptrdiff_t server = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoAbilityTestBot {
            constexpr std::ptrdiff_t CLaneMarkerPath = 0x4a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Prop_MidBossIndicator {
            constexpr std::ptrdiff_t CCitadel_Prop_MidBossIndicator = 0x4c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CinematicIntro_Shrine {
            constexpr std::ptrdiff_t CCitadel_Modifier_CinematicIntro_Shrine = 0xd0; // 
        }

        // Parent: m_iTeamNum
        // Fields: 1
        namespace CBasePlayerController {
            constexpr std::ptrdiff_t server = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_StealLife {
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_DazzlingOrbVData = 0x1950; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Spinning_BladeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CardToss_StackingResistShred {
            constexpr std::ptrdiff_t CCitadel_Projectile_SpiderProjectile = 0xbf8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Teleport {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InfiniteMagazineActive {
            constexpr std::ptrdiff_t CCitadel_Modifier_MutedVData = 0x9f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Stasis_BombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DebugScale {
            constexpr std::ptrdiff_t CCitadel_Modifier_DebugScale = 0xd8; // 
        }

    } // namespace server_dll
} // namespace schemas
} // namespace deadlock_dumper
