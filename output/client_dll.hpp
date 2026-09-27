// Generated using deadlock-dumper
// 2026-09-27T15:22:12Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: client.dll  classes=2935  enums=4
    namespace client_dll {

        // Alignment: 4  Members: 5
        enum class C_BaseCombatCharacterWaterWakeMode_t : uint32_t {
            WATER_WAKE_NONE = 0x0,
            WATER_WAKE_IDLE = 0x1,
            WATER_WAKE_WALKING = 0x2,
            WATER_WAKE_RUNNING = 0x3,
            WATER_WAKE_WATER_OVERHEAD = 0x4,
        };

        // Alignment: 4  Members: 2
        enum class PulseBestOutflowRules_t : uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1,
        };

        // Alignment: 4  Members: 4
        enum class PulseCursorCancelPriority_t : uint32_t {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3,
        };

        // Alignment: 4  Members: 2
        enum class PulseMethodCallMode_t : uint32_t {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1,
        };

        // Parent: m_flChannelTime
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatSwarm {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Revelation_Caster_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_ShadowClone {
            constexpr std::ptrdiff_t CModifier_Operative_Revelation_Target = 0x348; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Cadence_Anthem {
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
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_NullificationAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InFountain {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseMusicOBB {
            constexpr std::ptrdiff_t CCitadelBaseMusicOBB = 0x6f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura_CylinderVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_GoldenIdolVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Ability_HealthSwap = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_FlashbangVData = 0x760; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Thumper_BulletWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SalvoBulletVData {
            constexpr std::ptrdiff_t ability_frank_shocktarget2 = 0x0; // 
        }

        // Parent: m_SpinEndTime
        // Fields: 0
        namespace CCitadel_Ability_Burrow {
        }

        // Parent: m_eTelepunchState
        // Fields: 1
        namespace CCitadel_Ability_Viscous_Telepunch {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backstabber_Watcher_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBullets_Watcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletResistReductionStack {
            constexpr std::ptrdiff_t CCitadel_Modifier_BulletResistReductionStack = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MidBossAggroEnemy {
            constexpr std::ptrdiff_t AbilityTooltipDetails_t = 0x30; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Currency_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_SingleTargetStun {
            constexpr std::ptrdiff_t CCitadel_Upgrade_AerialAssault = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_ShockTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_ShockTarget = 0x240; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Cadence_GrandFinale {
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Cart = 0x0; // 
            constexpr std::ptrdiff_t m_UppercutAttackData = 0x1848; // AttackData_t
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_DemonMark {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Killing_Blow_Glow {
            constexpr std::ptrdiff_t CCitadel_Ability_Rutger_Pulse = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
            constexpr std::ptrdiff_t m_TracerParticle = 0x780; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VoidSphereVData {
        }

        // Parent: None
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
        namespace CCitadel_ArmorUpgrade_BulletArmorReductionAura {
            constexpr std::ptrdiff_t CCitadel_TechUpgrade_CorpseExplosionVData = 0x19a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_PoisonJar {
            constexpr std::ptrdiff_t CCitadel_Ability_Viper_PetrifyBola = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_DemonMarkVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StickyBombOnGroundVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_CloakingDevice_Active_Ambush_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritSnatch_VData {
            constexpr std::ptrdiff_t upgrade_trophy_collector = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTier3BossAbility {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelLocalPlayerRankedBadgeProp {
            constexpr std::ptrdiff_t CCitadelLocalPlayerRankedBadgeProp = 0x5f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_SceneEntityQueuedEvents_t {
        }

        // Parent: None
        // Fields: 1
        namespace CDoormanBombProjectile {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_BatSwarmExtraProjectile {
            constexpr std::ptrdiff_t CAbilityWreckerTeleportVData = 0x1bf0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierSleepBombAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NPCAbility_Shield {
            constexpr std::ptrdiff_t CCitadel_NPCAbility_Shield = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SwingLine_SwingingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Trapper_WebWallVData {
            constexpr std::ptrdiff_t citadel_restorative_goo_cube = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bookworm_KnightBarrierVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Burrow {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLashFlogDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NullificationAuraAOE {
            constexpr std::ptrdiff_t m_FleetfootBootsModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Passive_CloakVData {
        }

        // Parent: m_flBeamRotateSpeed
        // Fields: 0
        namespace CCitadel_Item_PrismBlastVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_AoEWave {
            constexpr std::ptrdiff_t m_InvisModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: OnNextDropTimeChanged
        // Fields: 0
        namespace C_CitadelPlayerPawn {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatGoingUp {
            constexpr std::ptrdiff_t CCitadel_Ability_Nikuman = 0x12d8; // 
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
        // Fields: 0
        namespace CCitadel_Ability_ViperVenom {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SelfVacuum {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_CatFormVData = 0x860; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shivas_Bracelet_WatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Healbane_Debuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace C_NPC_CarpetBombDrone {
            constexpr std::ptrdiff_t C_NPC_CarpetBombDrone = 0x1bd0; // 
            constexpr std::ptrdiff_t C_NPC_HornetDrone = 0x1bd0; // 
        }

        // Parent: m_nCaptureProgressOwner
        // Fields: 1
        namespace CCitadelTriggerCapturePoint {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_WeaponEater {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_HeadshotDamage = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_KothTrooperBuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HideoutIntroVData {
        }

        // Parent: If set, the duration will not get reduced from a refresh with a shorter duration
        // Fields: 0
        namespace CModifierVData_SetMoveType {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_ShadowMark_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Disruptive_Charge {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Ability01 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShivDaggerVData {
            constexpr std::ptrdiff_t ability_magician_shadowclone = 0x0; // 
        }

        // Parent: m_flTransformStartTime
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatForm {
            constexpr std::ptrdiff_t m_eSwingState = 0x11d8; // ESwingState_t
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IceGrenade {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InfernalResilience_MeleeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ApexCombat_Proc {
            constexpr std::ptrdiff_t CCitadel_Upgrade_StabilizingTripod = 0x15d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceProc_DebuffVData {
        }

        // Parent: None
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
            constexpr std::ptrdiff_t CCitadel_Ability_Empty = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheckNearbyPlayerParry {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TinyCharacter {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingSpiritScale {
        }

        // Parent: None
        // Fields: 0
        namespace CBaseTriggerAPI {
        }

        // Parent: m_qForward
        // Fields: 1
        namespace C_Citadel_Ice_Path_Shard_Physics {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrismaticGuardVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AirLiftExplodingAllyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HookSelf {
            constexpr std::ptrdiff_t CCitadel_DoorwayPortalBacksideBlocker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IceGrenadeDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_SleepBomb_Asleep = 0x140; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AfterburnWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Fencer_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadelFamiliarClonePlayerPawn = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ViperHookBladeVData {
            constexpr std::ptrdiff_t viscous_telepunch = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThrowSandDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DeathTax {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ElectricSlippersVData {
            constexpr std::ptrdiff_t upgrade_prism_blast = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PredatorPrecision {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MagicCarpet_Summon {
            constexpr std::ptrdiff_t m_FireRateModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x760; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_DruidHealingTree {
            constexpr std::ptrdiff_t m_BuffModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelUnitStatusStagger {
            constexpr std::ptrdiff_t client = 0x60110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Fencer_Ultimate_Target_VData {
            constexpr std::ptrdiff_t ability_frank_shocktarget2 = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Doorway = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_RocketBarrageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_APRoundsVData {
        }

        // Parent: m_nNoSpawnHeroID
        // Fields: 0
        namespace CCitadelHeroComponent {
        }

        // Parent: m_iMinWind
        // Fields: 0
        namespace C_EnvWindShared {
        }

        // Parent: m_timestamp
        // Fields: 0
        namespace C_SkyCamera {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Base {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_SpiritSap {
        }

        // Parent: funcRotatingSimulationTimeSerializer
        // Fields: 1
        namespace C_FuncRotating {
            constexpr std::ptrdiff_t C_FuncRotating = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierRestorativeGooVData {
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

        // Parent: m_iszOpvarName
        // Fields: 1
        namespace C_SoundOpvarSetPointBase {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 3
        namespace C_NPC_SurveillanceDrone {
            constexpr std::ptrdiff_t client = 0xa0108; // 
            constexpr std::ptrdiff_t m_iVaultState = 0x1c10; // int32
            constexpr std::ptrdiff_t C_NPC_MidBoss = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_SpiderAnimating {
            constexpr std::ptrdiff_t CAbilityGooGrenadeVData = 0x1a20; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_SiphonBullets {
            constexpr std::ptrdiff_t CCitadel_TechUpgrade_Infuser = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_Shadow_Strike_Invis = 0x460; // 
        }

        // Parent: m_flFogFalloffExponent
        // Fields: 1
        namespace C_EnvCubemapFog {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AsleepVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuggageDrag {
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
        // Fields: 1
        namespace CCitadel_Ability_IceDome {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Spotlight = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFists_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Infuser {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HealEntitiyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_Regen {
        }

        // Parent: None
        // Fields: 0
        namespace C_BaseFlexEmphasized_Phoneme {
        }

        // Parent: m_flSelfIllumScale
        // Fields: 1
        namespace C_EnvParticleGlow {
            constexpr std::ptrdiff_t C_EnvParticleGlow = 0xf70; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_CloakingDevice {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest06 = 0x0; // 
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_PhantomStrike {
        }

        // Parent: None
        // Fields: 0
        namespace C_EconEntityAttachedModelData_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_SummonDecay {
            constexpr std::ptrdiff_t ESwingState_t = 0x90101; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Cart_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_KnightCharge {
            constexpr std::ptrdiff_t CCitadel_Ability_Astro_Rifle = 0x1460; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RocketBarrageVolley {
            constexpr std::ptrdiff_t CCitadel_Modifier_RocketBarrageVolley = 0xc0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_HealBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MetalSkin {
            constexpr std::ptrdiff_t CModifierTier3BossLaserBeamAuraVData = 0x968; // 
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

        // Parent: None
        // Fields: 0
        namespace C_Citadel_PestilenceDroneDispenser {
        }

        // Parent: m_bPushTowardsInfoTarget
        // Fields: 0
        namespace CTriggerFan {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_PersonalRejuvenator {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_DropBombs = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTier3BossInvulnVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_BearTrap_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_TurretClone = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Dust_Storm_Thrown {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Astro_Rifle {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CounterspellWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_KnockbackAura {
            constexpr std::ptrdiff_t DeploymentInfo_t = 0x200; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_AbilityRechargeTime {
        }

        // Parent: None
        // Fields: 0
        namespace C_AI_Motor {
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_Airheart_Package {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Casting {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: CGameSceneNode
        // Fields: 1
        namespace C_FuncElectrifiedVolume {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_Bola {
            constexpr std::ptrdiff_t CCitadel_Ability_GooBowlingBall = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Viper_VenomVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashDownStrikeVData {
        }

        // Parent: m_hChargingParticle
        // Fields: 0
        namespace CCitadel_Ability_Chrono_TimeWall {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingProcWatcher {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Colossus = 0x1258; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemSmokeBombPreCastModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticReverb_ProcVData {
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
        // Fields: 1
        namespace CCitadel_Modifier_Airheart_Mark {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelDruidInvisAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HookTarget {
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_TrophyCollector {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DoubleJump {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_FireConCommand {
            constexpr std::ptrdiff_t CGameModifier_FireConCommand = 0xc0; // 
        }

        // Parent: m_vBoxMins
        // Fields: 1
        namespace C_EnvVolumetricFogVolume {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_RampUpVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Rutger_CheatDeath {
            constexpr std::ptrdiff_t CCitadel_Ability_Swan_FeatherBoomerang = 0x1400; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ProjectMind {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stimpak_regen {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityMedicHealVData {
        }

        // Parent: m_SequenceName
        // Fields: 1
        namespace CPulseCell_PlaySequence {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_GrandFinaleStage {
        }

        // Parent: None
        // Fields: 3
        namespace C_CitadelViscousBall {
            constexpr std::ptrdiff_t m_flOuterSpeedScale = 0x830; // float32
            constexpr std::ptrdiff_t m_flSpeedScaleBias = 0x834; // float32
            constexpr std::ptrdiff_t m_TargetLoopingSound = 0x838; // CSoundEventName
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_HauntingSkull {
            constexpr std::ptrdiff_t CCitadel_Ability_SkyRunner_PrimaryWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CopyUltPending {
            constexpr std::ptrdiff_t CCitadel_Projectile_MagicBolt = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AnimalCurse {
            constexpr std::ptrdiff_t CCitadel_Ability_NanoDash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_CapturePointVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_BaseEntityAPI {
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_MidBoss {
            constexpr std::ptrdiff_t C_NPC_MidBoss = 0x1bd0; // 
        }

        // Parent: m_nColorMode
        // Fields: 1
        namespace C_BarnLight {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_AblativeCoat {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Aura_Apply {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_Barrage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Crescendo_InAOE {
            constexpr std::ptrdiff_t m_BarrelExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PowerSlash {
            constexpr std::ptrdiff_t CCitadelBaseYamatoAbility = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Charged_Bomb {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Magic_Clarity_BuffVData {
        }

        // Parent: m_tDeactivationTime
        // Fields: 1
        namespace C_Citadel_Bounce_Pad {
            constexpr std::ptrdiff_t CCitadel_Ability_Bull_Leap = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Targetdummy_2 {
            constexpr std::ptrdiff_t CCitadel_Ability_Wrecker_BoulderGrenade = 0x14f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability01 {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GhostBloodShard {
            constexpr std::ptrdiff_t CAbilityLightningBallVData = 0x1940; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_ArcaneSurge {
            constexpr std::ptrdiff_t CCitadel_TechUpgrade_CorpseExplosion = 0x13d8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tier3_DamagePulse {
            constexpr std::ptrdiff_t m_ComboBreakerModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_HealModifier = 0x18c8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BarrierTrackerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_LerpCameraSettings {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CProjectile_Rutger_Rocket {
            constexpr std::ptrdiff_t CAbility_Synth_Affliction = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointOffScreenIndicatorUi {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fortuna_PrimaryWeapon {
            constexpr std::ptrdiff_t C_Citadel_Ice_Dome_Blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidHelicopterSeedsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CopyUlt {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_CrowdControl_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Warden_CrowdControl_Debuff = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Vandal_Ability03 {
            constexpr std::ptrdiff_t m_EnemyHeroStasisEffect = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Aerial_Assault {
            constexpr std::ptrdiff_t CCitadel_Item_Electric_Slippers = 0x0; // 
        }

        // Parent: m_vStartPos
        // Fields: 1
        namespace CCitadel_Ability_Mantle {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Magic_Beam_Blocker {
            constexpr std::ptrdiff_t CCitadel_Ability_Magician_AnimalCurse = 0x12e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Aura_Base {
            constexpr std::ptrdiff_t CCitadel_Item_Aura_Base = 0x1258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointBlockerAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointBlockerAuraTarget = 0xc0; // 
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
        // Fields: 0
        namespace CModifierAirLiftGrabVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ShivDashVData {
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

        // Parent: m_SpiritBurnDamageTracker
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

        // Parent: m_flFadeDuration
        // Fields: 1
        namespace C_PostProcessingVolume {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DazzlingOrbWatcherVData {
            constexpr std::ptrdiff_t ability_trapper_spidershield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_WallDebuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_PlasmaFlux {
            constexpr std::ptrdiff_t CCitadel_Modifier_Rutger_ForceField_PushOut = 0x268; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetdummy3VData {
        }

        // Parent: m_flEffectSize
        // Fields: 0
        namespace CCitadelAbilityHealingSlashVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierTangoTetherTargetVData {
            constexpr std::ptrdiff_t citadel_ability_wrecker_bouldergrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VoidSphereBuffVData {
        }

        // Parent: m_BuffEffect
        // Fields: 0
        namespace CCitadel_Modifier_Tier3_DamagePulseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Item_VData {
        }

        // Parent: None
        // Fields: 2
        namespace C_NPC_NanoRollermine {
            constexpr std::ptrdiff_t client = 0x90108; // 
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_ConditionalCollidable {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GraveStoneVData {
            constexpr std::ptrdiff_t citadel_nano_predatory_statue = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_KnightBarrier {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Mirage_Tornado_VData {
            constexpr std::ptrdiff_t citadel_smokegrenade_blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatFormPounceVData {
            constexpr std::ptrdiff_t synth_affliction = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bounce_Pad_Ally {
            constexpr std::ptrdiff_t CCitadelAbilityDruidPlantInvisBush = 0x1260; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3Boss_Wave_Target {
            constexpr std::ptrdiff_t CCitadel_Item_SelfBuffModifier = 0x11d8; // 
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
        // Fields: 1
        namespace C_Citadel_Hideout_Ball {
            constexpr std::ptrdiff_t C_Citadel_Hideout_Ball = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatSigilAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_Rolling_FireBall {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_FearVData = 0x1838; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ComboBreaker {
        }

        // Parent: m_flCurveDistRange
        // Fields: 1
        namespace CInfoFan {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingle {
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability01 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeSelf {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
            constexpr std::ptrdiff_t CCitadelAbilityDruidBasePlant = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Arcane_Eater_Watcher {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_LaserBeam = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelInWorldEventTimer {
            constexpr std::ptrdiff_t client = 0x60110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CAbility_Synth_PlasmaFlux_Trigger {
            constexpr std::ptrdiff_t C_Citadel_CatAnimating = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Projectile_WreckingBall {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_TrackingBomb = 0x1458; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_CooldownOnMiss {
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
            constexpr std::ptrdiff_t m_DebuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_hLastCastTarget
        // Fields: 0
        namespace CCitadel_Ability_Nano_Pounce_Instant {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shadow_Strike_Debuff {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_BurstFireVData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Clone {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakBreachVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shakedown_Target {
            constexpr std::ptrdiff_t CCitadel_Modifier_HauntWatcher = 0x478; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_Self {
            constexpr std::ptrdiff_t CCitadel_Ability_Drifter_HungerVData = 0x1938; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
        }

        // Parent: None
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
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltimateBurst_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TrooperBossGrenade {
            constexpr std::ptrdiff_t CCitadel_Modifier_PristineEmblem_VData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TriggerPush {
            constexpr std::ptrdiff_t CCitadel_Modifier_TriggerPush = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPregameHeroDraftButton {
            constexpr std::ptrdiff_t client = 0x80110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierGravityLassoEnemyVData {
            constexpr std::ptrdiff_t ability_target_practice = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_RechargingBullets {
            constexpr std::ptrdiff_t CCitadel_Item_PhantomStrike = 0x0; // 
        }

        // Parent: CCitadel_WeaponUpgrade_ExpressShot
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_ExpressShot {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TechDamagePulse {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Movement {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Movement = 0xc8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTokamakHeatSinksVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLashGrappleTargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest05VData {
            constexpr std::ptrdiff_t upgrade_cooldown_on_miss = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Siphon_Bullets_Watcher {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Frenzy = 0x0; // 
            constexpr std::ptrdiff_t m_iAccruedGold = 0x11e0; // int32
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityJumpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StatStealBaseVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_ItemParachute {
            constexpr std::ptrdiff_t CCitadelHideoutTeleportTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DragonFireGroundAura {
        }

        // Parent: None
        // Fields: 1
        namespace CItem_FleetfootBoots {
            constexpr std::ptrdiff_t CCitadel_Modifier_BulletShredImbue_ProcVData = 0x7a0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseTrackedStatsEntity {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: CCitadel_Ability_Airheart_ChargeBlast
        // Fields: 1
        namespace CCitadel_Ability_Airheart_ChargeBlast {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_HauntingSpiritsVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_Attached {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Astro_Rifle_SelfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceBeam_Stacking_Slow {
        }

        // Parent: m_flTackleStartTime
        // Fields: 1
        namespace CCitadel_Ability_ChargedTackle {
            constexpr std::ptrdiff_t CNecro_HauntingSkullEntity = 0x9b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFists_Watcher {
        }

        // Parent: m_flValue
        // Fields: 0
        namespace StatViewerModifierValues_t {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Pickup_Gold {
            constexpr std::ptrdiff_t C_Citadel_Pickup_Gold = 0xde8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelClimbRopeTrigger {
            constexpr std::ptrdiff_t C_CitadelClimbRopeTrigger = 0xa88; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_Citadel_FissureWall {
        }

        // Parent: None
        // Fields: 1
        namespace C_BreakableProp {
            constexpr std::ptrdiff_t C_BreakableProp = 0xe20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MobileResupplyAura {
            constexpr std::ptrdiff_t CCitadel_Ability_AirheartPrimaryWeaponVData = 0x1ab0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_Ability02 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Astro_Rifle_Debuff {
            constexpr std::ptrdiff_t m_strSmallIconCssClassMax = 0x750; // CUtlString
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PsychicLift {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChangeTeam {
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_Weakpoint {
            constexpr std::ptrdiff_t C_NPC_Neutral_Weakpoint = 0x9a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_2_Aura {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_WarpStone {
            constexpr std::ptrdiff_t CCitadel_Modifier_HealBuffVData = 0x760; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPrecipitationVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_TrackingBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Spotlight {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Crescendo_AOE = 0x120; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_Bolo = 0x448; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Affliction_Debuff_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_Pounce_Self {
            constexpr std::ptrdiff_t CCitadel_Ability_Swan_Leap = 0x1358; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WreckerUltimate_Invincible {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shield {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowImmunity {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_SpiritBubbleVData {
            constexpr std::ptrdiff_t upgrade_withering_whip = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_HealingBoonScale {
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_MidBossVData {
            constexpr std::ptrdiff_t bullet_redirect_volume = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Grit {
            constexpr std::ptrdiff_t CItem_FleetfootBoots = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseLockonAbilityVData {
            constexpr std::ptrdiff_t citadel_base_trigger_ability = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PermanentPickupVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_SoundAreaEntitySphere {
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
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoT {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_DebuffReducerVData {
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
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPunchable_Gold {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Gold = 0x110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tokamak_EnemySmokeAOE = 0x190; // 
        }

        // Parent: m_beam02
        // Fields: 1
        namespace CCitadel_Item_PrismBlast {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_szDisplayText
        // Fields: 1
        namespace C_BaseButton {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_CopyUltVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirLift_Grab {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VandalOverflow {
        }

        // Parent: m_bShouldTriggerSlowGetup
        // Fields: 1
        namespace CCitadel_Ability_Slide {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SuperNeutralChargeActive {
            constexpr std::ptrdiff_t CCitadelModifierTier3BossAoeWaveAuraVData = 0x970; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RebirthCredit {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CHitboxComponent {
        }

        // Parent: m_bIsHelperAvailableNet
        // Fields: 5
        namespace CNPC_FamiliarHelper {
            constexpr std::ptrdiff_t client = 0x90108; // 
            constexpr std::ptrdiff_t m_vecHelpers = 0x11d8; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
            constexpr std::ptrdiff_t m_tChoreUseCooldownEndTime = 0x11f0; // GameTime_t
            constexpr std::ptrdiff_t m_tSoonestHelperCooldownEndTime = 0x11f4; // GameTime_t
            constexpr std::ptrdiff_t m_nAvailableHelperCount = 0x11f8; // char
        }

        // Parent: m_vMins
        // Fields: 2
        namespace CCitadelSoundEntityOBB {
            constexpr std::ptrdiff_t m_bEnableMovementToNodes = 0x16c0; // bool
            constexpr std::ptrdiff_t m_flExposedDuration = 0x16c4; // CRangeFloat
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
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierRiotProtocolBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierUppercuttedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TrophyCollectorPassiveGold {
        }

        // Parent: None
        // Fields: 1
        namespace C_ItemWeaponParts {
            constexpr std::ptrdiff_t C_ItemWeaponParts = 0xce0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ZombieWallGroundAura {
            constexpr std::ptrdiff_t CCitadelModifierShadowStepVData = 0xc00; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_InfiniteMagazine {
            constexpr std::ptrdiff_t CCitadel_Modifier_HeadshotBoosterWatcher = 0x298; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Chrono_TimeWall_Effect = 0x140; // 
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
        // Fields: 0
        namespace CNPC_NecroSkele {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantBranchWall {
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
        // Fields: 0
        namespace CCitadel_Item_Disarm_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierTier2BossLaserBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_OneVsOne {
        }

        // Parent: None
        // Fields: 0
        namespace CPathQueryComponent {
        }

        // Parent: m_flAimPitch
        // Fields: 1
        namespace C_NPC_ShieldedSentry {
            constexpr std::ptrdiff_t C_NPC_ShieldedSentry = 0xeb8; // 
        }

        // Parent: m_flProgress
        // Fields: 1
        namespace CCitadelControlPointTrigger {
            constexpr std::ptrdiff_t client = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Precipitation {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_AerialAssault {
            constexpr std::ptrdiff_t CCitadel_Modifier_Arcane_Eater_Debuff = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CLogicRelay {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_HopOutLockout {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Punkgoat_BlastedHealth {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Punkgoat_BlastedHealthWatcher {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SmokeGrenade = 0x1458; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_ReviveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_Pulse_Target {
            constexpr std::ptrdiff_t CCitadel_Modifier_Rutger_Pulse_Target = 0x2d0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_BarrierTracker {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeroRefresh {
            constexpr std::ptrdiff_t CCitadel_Modifier_ReloadSpeed = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InShopTunnel {
            constexpr std::ptrdiff_t CCitadel_Modifier_InShopTunnel = 0xc0; // 
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

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_StackingDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantHealingTreeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Doorman_Cart {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckerSalvageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StickyBombAttachedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ZipLine_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeapon_ScalingAltFire {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shadow_Strike_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_Stagger_WatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_SpotlightEnd {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Asleep {
            constexpr std::ptrdiff_t CCitadel_Modifier_Familiar_Barrier = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatGoingUp_LingeringAirControl {
            constexpr std::ptrdiff_t Modifiers = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_SelfHeal {
            constexpr std::ptrdiff_t CAbility_Synth_Pulse_VData = 0x1d30; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SettingSun_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_WreckerScrapBlast {
            constexpr std::ptrdiff_t CCitadel_Ability_Thumper_4 = 0x12d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IncendiaryDebuff {
            constexpr std::ptrdiff_t ice_path_shard_model_desc_t = 0x38; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ZiplineKnockdownImmuneVData {
            constexpr std::ptrdiff_t upgrade_capacitor = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_WeaponDamage {
        }

        // Parent: None
        // Fields: 0
        namespace C_Fish {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_DivinersKevlar {
            constexpr std::ptrdiff_t CCitadel_Item_TechCleaveVData = 0x18d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_FieldSentryVData {
            constexpr std::ptrdiff_t citadel_herotest_orbspawner = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachedVData {
        }

        // Parent: CCitadel_Ability_Familiar_AltWeapon
        // Fields: 0
        namespace CCitadel_Ability_Familiar_AltWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CopyUltVData {
            constexpr std::ptrdiff_t mirage_teleport = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_MagicBoltVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Opera_Ability04 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTestVData {
            constexpr std::ptrdiff_t upgrade_restorative_locket = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadelBulletRedirectVolume = 0x9a8; // 
        }

        // Parent: m_TintColor
        // Fields: 1
        namespace C_EnvVolumetricFogController {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidLeechSeed {
            constexpr std::ptrdiff_t CCitadel_Ability_Bookworm_KnightCharge = 0x1e78; // 
        }

        // Parent: None
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
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bull_HealVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpilledBloodThinkerVData {
            constexpr std::ptrdiff_t ability_frank_primaryweapon = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_EtherealBulletsVData {
            constexpr std::ptrdiff_t item_snowball = 0x0; // 
            constexpr std::ptrdiff_t upgrade_arctic_blast = 0x0; // 
        }

        // Parent: m_RapidFireParticle
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
        namespace C_Citadel_Pickup_Health {
            constexpr std::ptrdiff_t C_Citadel_BreakableProp = 0x0; // 
        }

        // Parent: m_flWaveHeight
        // Fields: 1
        namespace CCitadelModifierTier3BossAoeWaveAuraVData {
            constexpr std::ptrdiff_t upgrade_high_impact_armor = 0x0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_Gravity_Lasso_Self {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_BubbleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PullDownToGround {
        }

        // Parent: m_flStartTime
        // Fields: 1
        namespace C_EnvDetailController {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCadenceSilenceContraptionsVData {
            constexpr std::ptrdiff_t citadel_doorway_portal = 0x0; // 
        }

        // Parent: m_vBoxMins
        // Fields: 1
        namespace C_EnvWindVolume {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
            constexpr std::ptrdiff_t priest_flashbang = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_FlyingStrikeTarget {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_ClawWeaponVData = 0x1ba8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Spinning_Blade {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bomber_Ability03 {
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Doorway_VData = 0x1f68; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_FireBombVData {
            constexpr std::ptrdiff_t ability_ice_dome = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Surging_Power {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier3Boss_Laser_Debuff = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerControllerAPI {
        }

        // Parent: None
        // Fields: 2
        namespace C_CitadelShopTunnelTrigger {
            constexpr std::ptrdiff_t C_CitadelShopTunnelTrigger = 0xa78; // 
            constexpr std::ptrdiff_t m_vExitOrigin = 0xa78; // Vector
        }

        // Parent: None
        // Fields: 1
        namespace C_TriggerTier3Phase2Shield {
            constexpr std::ptrdiff_t CPlayerSprayDecalRenderHelper = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeAlias_snd_soundscape {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_Boss_Tier3VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hideout_Teleport {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SwingLineVData {
        }

        // Parent: None
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
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGenericPerson1VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Swan_Acrobat = 0x240; // 
        }

        // Parent: m_flBombBonusHits
        // Fields: 2
        namespace CCitadel_Ability_StickyBomb {
            constexpr std::ptrdiff_t C_Projectile_Airheart_Package = 0x0; // 
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TargetPracticeSelfVData {
            constexpr std::ptrdiff_t ability_airheart_rocketeer4 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityChronoSwapVData {
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
        // Fields: 1
        namespace CCitadel_Modifier_TurnCameraToTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_TurnCameraToTarget = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_GameRulesProxy {
            constexpr std::ptrdiff_t C_GameRulesProxy = 0x5f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CRenderComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelDruidInvisAura {
            constexpr std::ptrdiff_t m_AuraParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nikuman {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_Flashbang = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CGameModifier_FireConCommandVData {
        }

        // Parent: m_aPlayers
        // Fields: 1
        namespace C_Team {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityShivDashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_CultistSacrifice_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicClarityWatcherVData {
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
        // Fields: 1
        namespace CCitadel_Projectile_MagicBolt {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: m_flNextShotTime
        // Fields: 1
        namespace CCitadel_CosmeticItem_Snowball {
            constexpr std::ptrdiff_t CCitadel_Item_RejuvTrackingProjectile = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InHideoutMap {
            constexpr std::ptrdiff_t CCitadel_Modifier_InHideoutMap = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PathParticleRopeAlias_path_particle_rope_clientside {
            constexpr std::ptrdiff_t C_PathParticleRopeAlias_path_particle_rope_clientside = 0x700; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointChildModifier {
            constexpr std::ptrdiff_t CPointChildModifier = 0x5f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatFlipMaxHealthBuff {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SilenceBombVData = 0x1918; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_SpreadingFire_DOT {
            constexpr std::ptrdiff_t CAbility_Fencer_Lunge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcarusWingsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColossusActive {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicShock_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AcolytesGlove {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_TriggerMultiple {
            constexpr std::ptrdiff_t C_TriggerMultiple = 0xa78; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidHelicopterSeeds {
            constexpr std::ptrdiff_t CCitadelModifierCadenceGunSpikesVData = 0x758; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_SettingSunThinker {
            constexpr std::ptrdiff_t Modifiers = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ProjectMind {
            constexpr std::ptrdiff_t CCitadelAbilityTangoTetherVData = 0x1a38; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MetalSkinVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RespawnCredit {
        }

        // Parent: m_bvEnabledStateMask
        // Fields: 0
        namespace CModifierProperty {
        }

        // Parent: None
        // Fields: 1
        namespace C_LightCapsuleEntity {
            constexpr std::ptrdiff_t C_LightCapsuleEntity = 0x9b0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_Cyclone {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3Boss_EffigyVData {
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
        // Fields: 2
        namespace CCitadel_Ability_Thumper_3 {
            constexpr std::ptrdiff_t m_ShootingModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_strShootSound = 0x1828; // CSoundEventName
        }

        // Parent: None
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
        // Fields: 1
        namespace CCitadel_Modifier_Base {
            constexpr std::ptrdiff_t CCitadel_Modifier_Base = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_SpiderProjectile {
            constexpr std::ptrdiff_t CCitadel_Ability_ProjectMind = 0x0; // 
        }

        // Parent: m_bImpulseApplied
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_RocketBooster {
            constexpr std::ptrdiff_t CCitadel_Modifier_IcarusWingsVData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_HealthRegenAura {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_Staggered {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_NPCAbility_Shield_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_AttachLaunchOff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Dazed {
            constexpr std::ptrdiff_t m_BuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ZiplineBoost {
            constexpr std::ptrdiff_t CCitadel_Item_BaseProjectileAOEModifier = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Arcane_Eater_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Containment_Victim {
            constexpr std::ptrdiff_t CCitadel_Modifier_Containment_Victim = 0x150; // 
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
            constexpr std::ptrdiff_t CInfoTutorialController = 0xf00; // 
            constexpr std::ptrdiff_t CCitadelPortalTrigger = 0x0; // 
        }

        // Parent: m_FadeDuration
        // Fields: 1
        namespace C_ColorCorrectionVolume {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ArcticBlast {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_InWorldKeyBindPanel {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerGenerator {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerGenerator = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_BarrageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Haze_StackingDamage {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shivas_Bracelet_Watcher {
            constexpr std::ptrdiff_t CCitadel_Item_Stasis_Bomb = 0x0; // 
        }

        // Parent: m_GroundDashCancelExecuteTime
        // Fields: 1
        namespace CCitadel_Ability_Dash {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_arrForceSubtickMoveWhen
        // Fields: 0
        namespace CPlayer_MovementServices {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoDynamicShadowHintBox {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Minimap_EffectsEntity {
            constexpr std::ptrdiff_t CCitadel_Minimap_EffectsEntity = 0x9a8; // 
        }

        // Parent: m_vecSecondarySkeletons
        // Fields: 0
        namespace CBaseAnimGraphController {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shiv_Defer_Damage {
            constexpr std::ptrdiff_t CCitadel_Modifier_Punkgoat_BlastedHealth = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepDagger_Drowsy {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Clone_End = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Leap_Boosting {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_StaticCharge_V2 {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MeleeCharge {
            constexpr std::ptrdiff_t CCitadel_Modifier_BulletShredImbue_Proc = 0x1f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireRateAura {
            constexpr std::ptrdiff_t CCitadel_Item_Bubble = 0x1360; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilencerProcActive {
        }

        // Parent: m_MaxFalloff
        // Fields: 1
        namespace C_ColorCorrection {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBuoyancyHelper {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ModDisruptor {
            constexpr std::ptrdiff_t m_ImpactParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace C_PhysBox {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_RapidFire {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_HealHost = 0x11e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReturnFireVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletArmorShredder_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_HuntAura_Werewolf {
            constexpr std::ptrdiff_t CCitadel_Ability_InfinitySlash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_CitadelProjectile_ImmobilizeTrap {
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_GlassCannon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Frank_ShockTarget2 {
            constexpr std::ptrdiff_t CCitadel_Ability_RocketLauncher = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SalvoBullet {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirLiftExplodingAlly {
            constexpr std::ptrdiff_t CCitadel_Projectile_Cyclone = 0xd58; // 
        }

        // Parent: CCitadel_Ability_HornetLeap
        // Fields: 1
        namespace CCitadel_Ability_HornetLeap {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Attach = 0x1700; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilencedVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_AOESilence_Target {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fervor_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BlastPush {
            constexpr std::ptrdiff_t AdditionalAbilities_t = 0x20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Basic_HealthRegen {
            constexpr std::ptrdiff_t m_eValidStates = 0x750; // CBitVecEnum<EStreetBrawlGameState>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AbilityName {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_GuardianWard {
            constexpr std::ptrdiff_t CCitadel_Modifier_Low_Health_GlowVData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterMultiple {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_Gravestone_Buff {
        }

        // Parent: CCitadel_Ability_Drifter_Hunger
        // Fields: 1
        namespace CCitadel_Ability_Drifter_Hunger {
            constexpr std::ptrdiff_t CCitadel_Ability_Uppercut = 0x1968; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Rutger_RocketLauncher_VData {
            constexpr std::ptrdiff_t ability_nano_pounce_instant = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGarbageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingTarget {
            constexpr std::ptrdiff_t m_ProcParticle = 0x780; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CModifierGlitchVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VitalitySuppressor {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierTier3BossLaserBeamDebuffVData {
            constexpr std::ptrdiff_t upgrade_health_regen_aura = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_FireCursors {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_TeslaCoil {
            constexpr std::ptrdiff_t client = 0xb0208; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscape {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundEventEntityAlias_snd_event_point {
            constexpr std::ptrdiff_t CTriggerFan = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_FogController {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatTethered {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FearWatcher {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_DebrisParticle
        // Fields: 0
        namespace CCitadel_Modifier_FissureWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Parry {
            constexpr std::ptrdiff_t CCitadel_Modifier_Parry = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicCarpet_SummonVData {
            constexpr std::ptrdiff_t citadel_model_entity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_FocusLens_VData {
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundOpvarSetOBBWindEntity {
            constexpr std::ptrdiff_t C_SoundOpvarSetOBBWindEntity = 0x610; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NetTestBaseCombatCharacter {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_FuryTrance {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatPullVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GangActivity_AbilitySwap {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trappers_Bolo {
        }

        // Parent: CCitadel_Ability_PsychicLift
        // Fields: 1
        namespace CCitadel_Ability_PsychicLift {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_ReturnFireVData {
            constexpr std::ptrdiff_t upgrade_debuff_absorb = 0x0; // 
        }

        // Parent: On which side of the crosshair should this hint show
        // Fields: 1
        namespace C_CitadelBaseAbility {
            constexpr std::ptrdiff_t CCitadel_Modifier_BaseEventProc = 0x1f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trooper_InEnemyBaseResist {
            constexpr std::ptrdiff_t CModifierNonPlayerCameraSettingsVData = 0x760; // 
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
            constexpr std::ptrdiff_t CBodyComponentPoint = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Pickup_Modifier {
            constexpr std::ptrdiff_t C_Citadel_Pickup_Modifier = 0xde0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPlayerTrackedStatsEntity {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: CCitadel_Ability_Familiar_Attach
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Attach {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_StackingDefenseVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VampireBat_BatCloud_Self {
            constexpr std::ptrdiff_t CAbilityVandalOverflowVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_WreckingBall {
            constexpr std::ptrdiff_t CCitadel_Ability_HealingSlash = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Trooper_ShrineDownBuff {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_flEncodedController
        // Fields: 1
        namespace C_CitadelObserverPawn {
            constexpr std::ptrdiff_t C_CitadelObserverPawn = 0x10f0; // 
        }

        // Parent: m_iEntityLevel
        // Fields: 0
        namespace C_EconItemView {
        }

        // Parent: CCitadel_ArmorUpgrade_AutoCleanse
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_BurstFire {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_AutoCleanse = 0x12d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Survival {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Survival = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_KnockbackBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_AirDamping = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_EnemyPulled {
            constexpr std::ptrdiff_t CCitadel_Ability_Protection_RacketVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Radiance {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Kobun {
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
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TimelineTimelineEvent_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Pillar {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseModifierAura {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CrowdControl_Diminish_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_CrowdControl_Diminish_Watcher = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fathom_ScaldingSpray {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_AntiSpiritVestVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityAstroRifleVData {
        }

        // Parent: CitadelGameStatePostProcessingManifest
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
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_BellAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_BellAura = 0x110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_RocketLauncher_Rocket {
        }

        // Parent: m_vDashStartPos
        // Fields: 1
        namespace CAbility_Fencer_Lunge {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_Clone = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGenericPerson4VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Chrono_PulseGrenade {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IntensifyingClip {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_TrooperDisabledInvulnerability {
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
        // Fields: 3
        namespace CCitadel_Item_ProjectileTest02 {
            constexpr std::ptrdiff_t m_strPurgeSound = 0x18b8; // CSoundEventName
            constexpr std::ptrdiff_t m_PurgeCastParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_BarrierModifier = 0x19a8; // CEmbeddedSubclass<CCitadelModifier>
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
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData = 0x840; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechBurst_Proc {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 1
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ControlPointBlockerAura {
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundEventPathCornerEntity {
            constexpr std::ptrdiff_t C_SoundEventPathCornerEntity = 0x6c8; // 
        }

        // Parent: m_bEnabled
        // Fields: 0
        namespace C_InfoVisibilityBox {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RadiantFlareBonusDamageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_SpiderJar {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bounce_Pad {
            constexpr std::ptrdiff_t client = 0x60108; // 
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

        // Parent: None
        // Fields: 0
        namespace CModifierUnstickVData {
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_PlayEffectOnDeath {
            constexpr std::ptrdiff_t m_nAuraShapeType = 0x750; // AuraShapeType_t
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorway_Minimap_Range {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tengu_UrnVData {
        }

        // Parent: CCitadel_Ability_Hornet_Snipe
        // Fields: 1
        namespace CCitadel_Ability_Hornet_Snipe {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargedBomb {
            constexpr std::ptrdiff_t client = 0x30108; // 
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
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_LaserBeam {
            constexpr std::ptrdiff_t CCitadel_Modifier_ZiplineBoostVData = 0x7e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PullDownToGroundVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PlayerPinged {
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
        // Fields: 0
        namespace CCitadel_Projectile_FortunaWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatSigilAura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3Boss_Laser_Aura {
            constexpr std::ptrdiff_t CCitadel_Item_TechCleaveVData = 0x18d8; // 
        }

        // Parent: m_flRadius
        // Fields: 1
        namespace C_PathParticleRope {
            constexpr std::ptrdiff_t client = 0x30108; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_HealHost = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_VexBarrierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RescueBeam {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_Gold_VData {
        }

        // Parent: None
        // Fields: 4
        namespace CProjectile_KnightChargeLeading_Projectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Shotgun_Astro = 0x0; // 
            constexpr std::ptrdiff_t m_vImpulseDirection = 0x11d8; // Vector
            constexpr std::ptrdiff_t m_vVelocity = 0x11e4; // Vector
            constexpr std::ptrdiff_t m_vThrustingVelocity = 0x11f0; // Vector
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_PullAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_Urn_Debuff = 0x2c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DisarmProc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boho_ChannelTether_Tether {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_Knockback {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Rend_BulletLifesteal {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_BatSwarmDoTVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_DyingStar {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHighAlertBuffVData {
        }

        // Parent: m_bIsGrabbing
        // Fields: 1
        namespace CCitadel_Ability_Tengu_AirLift {
            constexpr std::ptrdiff_t CCitadel_Ability_HighAlert = 0x0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineSpeed {
        }

        // Parent: CCitadel_Modifier_VoidSphere
        // Fields: 0
        namespace C_Projectile_Stomp_Projectile {
        }

        // Parent: m_tLeapOffTime
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_KickFlip {
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
        // Fields: 1
        namespace CCitadel_Ability_Priest_StackingDefense {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_NeutralDamageGrowth {
            constexpr std::ptrdiff_t CCitadel_Modifier_BarrierTracker = 0xe0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_Item_SmokeBomb_PreCast = 0x1c0; // 
        }

        // Parent: m_flAutoExposureMax
        // Fields: 0
        namespace C_TonemapController2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bolo_Leech {
            constexpr std::ptrdiff_t CCitadel_Ability_BulletFlurry = 0x0; // 
        }

        // Parent: m_bLanded
        // Fields: 1
        namespace CCitadel_Ability_Tengu_StoneForm {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Viper_SlideBuff {
            constexpr std::ptrdiff_t m_strExplodeEffect = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SleepDagger_Drowsy_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VacuumAuraTarget {
            constexpr std::ptrdiff_t ECatStatueState_t = 0x90101; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ElectricSlippers {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_DoubleJump = 0x1360; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EscalatingExposureProcWatcherVData {
            constexpr std::ptrdiff_t upgrade_trophy_collector = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechCleave {
            constexpr std::ptrdiff_t m_RegenParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3Boss_Base {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_DebuffReducerVData = 0x1a88; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Pickup_VData {
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

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Doorman_Bomb {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_KnightBarrier {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_WreckerScrapBlastDebuffVData {
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
        namespace CCitadel_Modifier_TrapperPoisonJar_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Unicorn_DazzlingOrbNextTargetVData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_StasisBomb_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_RocketBarrage = 0x16e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CGameModifier_FireUserEntityIO {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Unicorn_DazzlingOrb {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_HealHost {
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability03 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorman_DimishingTimestop {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Guiding_Arrow = 0xc0; // 
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
        // Fields: 0
        namespace CCitadel_Ability_ExplosiveBarrel {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nikuman {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeadshotBoosterWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_HeadshotBoosterWatcher = 0x298; // 
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
        // Fields: 1
        namespace C_NPC_PestilenceDrone {
            constexpr std::ptrdiff_t C_NPC_PestilenceDrone = 0x1bd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LinkVData {
            constexpr std::ptrdiff_t ability_golden_idol = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IdolReturnTimer {
            constexpr std::ptrdiff_t CCitadelItemKothSpawner = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_AOEMagic {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SmokeGrenade {
            constexpr std::ptrdiff_t CCitadel_Modifier_Shadow_Step = 0x6e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThrowSandDebuff {
            constexpr std::ptrdiff_t CCitadel_Ability_AirheartChargeBlastVData = 0x1818; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_CatFormPounce {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearDeathFXVData {
        }

        // Parent: CCitadelItemPickupRejuv
        // Fields: 1
        namespace CCitadelItemPickupRejuv {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: None
        // Fields: 1
        namespace FilterHealth {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_KnightCharge_Projectile {
            constexpr std::ptrdiff_t CCitadelAbilityDruidLeechSeedVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOE {
            constexpr std::ptrdiff_t m_StunParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strStunSound = 0x830; // CSoundEventName
            constexpr std::ptrdiff_t m_NoExplodeModifier = 0x840; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest06 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Backstabber_VData = 0x780; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_HeadshotDamage {
            constexpr std::ptrdiff_t CCitadel_Item_TechCleave = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_OverrideTargetIdentifier {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_flHeight
        // Fields: 1
        namespace C_PointClientUIHUD {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Unicorn_PrismaticGuard {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartPrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_GunTether {
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_Breach = 0x1460; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifire_Bookworm_DragonFire {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_ShadowMark_Target {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nearby_Enemy_Boost {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpiritSnatch_VData = 0x960; // 
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

        // Parent: m_flFadeOutStart
        // Fields: 3
        namespace C_NPC_TrooperBoss {
            constexpr std::ptrdiff_t client = 0x90108; // 
            constexpr std::ptrdiff_t m_CCitadelPlayerClipComponent = 0x1bd0; // CCitadelPlayerClipComponent
            constexpr std::ptrdiff_t m_iLane = 0x1bfc; // int32
        }

        // Parent: None
        // Fields: 2
        namespace C_NPC_Neutral_Hideout_Rabbit {
            constexpr std::ptrdiff_t C_NPC_Neutral_Hideout_Rabbit = 0xcb0; // 
            constexpr std::ptrdiff_t C_Citadel_Hideout_Clock = 0xcb0; // 
        }

        // Parent: m_vVacuumStartPos
        // Fields: 1
        namespace C_Citadel_Pickup {
            constexpr std::ptrdiff_t C_Citadel_Pickup = 0x0; // 
        }

        // Parent: m_tWallDeployFinishTime
        // Fields: 1
        namespace C_Projectile_GraveStone_Projectile {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ParriedStun {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ModDisruptor {
            constexpr std::ptrdiff_t CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_VehicleTopSpeedScale {
            constexpr std::ptrdiff_t CGameModifier_VehicleTopSpeedScale = 0xc8; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp {
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_Stagger_Watcher = 0xc0; // 
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
        // Fields: 0
        namespace CCitadel_UtilityUpgrade_HealthNova {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupTimer {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupTimer = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_DazzlingOrbVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_UnloadGun2 {
            constexpr std::ptrdiff_t Visuals = 0x1; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_CripplingSlash {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MageWalk {
        }

        // Parent: m_flLatchedTimeScaleFrac
        // Fields: 0
        namespace CCitadel_Ability_Chrono_KineticCarbine {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ChargedShot {
            constexpr std::ptrdiff_t CCitadel_GrandFinaleStage = 0xcd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineBoostVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Backstabber_Watcher {
            constexpr std::ptrdiff_t m_hBuffEffect = 0xc0; // ParticleIndex_t
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

        // Parent: m_vPreservedVelocity
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Rocketeer3 {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_Barrage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Targetdummy_Inherent {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StickyBombAttached {
            constexpr std::ptrdiff_t CCitadel_Modifier_StickyBombAttached = 0x2d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PowerJump {
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
        namespace C_InfoLadderDismount {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: m_flStartTimeInCommentary
        // Fields: 1
        namespace C_PointCommentaryNode {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSpriteOriented {
            constexpr std::ptrdiff_t CSpriteOriented = 0xa20; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_KineticCarbineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_DropBombs {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAutoScaledTime {
        }

        // Parent: m_hMaterialDamageOverlay
        // Fields: 0
        namespace shard_model_desc_t {
        }

        // Parent: None
        // Fields: 1
        namespace C_InfoPortalLink {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 0
        namespace CModifier_Synth_Pulse_Escape_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierThumper_3VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ReinforcingCasings {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_RechargingBullets = 0x1370; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BoxingGlove {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Grit = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MeleeCharge_VData {
            constexpr std::ptrdiff_t upgrade_spellshield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemSilenceGlyph {
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperZipLine = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PointClientUIWorldTextPanel {
            constexpr std::ptrdiff_t C_PointClientUIWorldTextPanel = 0xe00; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RadiantFlareBonusDamage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidLeechSeed {
            constexpr std::ptrdiff_t CAbility_Drifter_StalkersMark_Teleport = 0x0; // 
        }

        // Parent: m_TimeOfRevive
        // Fields: 1
        namespace CCitadel_Ability_Frank_Revive {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Protection_Racket {
            constexpr std::ptrdiff_t m_angBeamAngles = 0x11f8; // QAngle
            constexpr std::ptrdiff_t m_bNeedsBeamReset = 0x1288; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityIncendiaryProjectileVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Discord_Enemy {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayer_CameraServices {
            constexpr std::ptrdiff_t CCitadelPlayer_CameraServices = 0x3a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CatapultStunVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GoldenIdol {
            constexpr std::ptrdiff_t CCitadelItemPickupRejuvHeroTest = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantSomething {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trapper_StealSpiritDebuff {
            constexpr std::ptrdiff_t CCitadelAbilityFlyingStrikeVData = 0x1eb0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Affliction_Debuff {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CrushingFistsDebuff_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HollowPoint_Stack {
            constexpr std::ptrdiff_t CModifierStimPakVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_SelfBuffModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NearbyAllyResist {
        }

        // Parent: nIndex
        // Fields: 0
        namespace ViewAngleServerChange_t {
        }

        // Parent: m_vecPlayerMountPositionBottom
        // Fields: 1
        namespace C_FuncLadder {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LuminousStrikeBuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_LuminousStrikeBuff = 0x260; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_Immobilize {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Operative_UmbrellaManeuver {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FearWatcherVData {
        }

        // Parent: m_bIsDashing
        // Fields: 1
        namespace CCitadel_Ability_ShivDash {
            constexpr std::ptrdiff_t m_DrainParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CItem_ActiveReload_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_WeaponEaterVData {
        }

        // Parent: None
        // Fields: 0
        namespace CitadelAbilityVData {
        }

        // Parent: m_ItemID
        // Fields: 0
        namespace ItemImbuementPair_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ShopProp {
            constexpr std::ptrdiff_t CCitadel_Destroyable_Building_GraphController = 0x1d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_World {
            constexpr std::ptrdiff_t C_World = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_Projectile_Synth_Barrage {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_TenguUrn_Aura {
            constexpr std::ptrdiff_t m_strSwipeParticle = 0x19c0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strSwipeHitParticle = 0x1aa0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_iItemDefinitionIndex
        // Fields: 0
        namespace C_EconItemAttribute {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_TrackingBomb {
            constexpr std::ptrdiff_t CCitadel_Ability_Kobun = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_SpawnZombies_Area {
            constexpr std::ptrdiff_t CCitadel_Modifier_Magician_AnimalHex_HexArea = 0x340; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_ShadowClone {
            constexpr std::ptrdiff_t CCitadel_Ability_FireBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingleVData {
            constexpr std::ptrdiff_t ability_fencer_throwblade = 0x0; // 
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
        // Fields: 0
        namespace CCitadel_Ability_Astro_Shotgun_Toggle {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Kelvin_Frozen {
            constexpr std::ptrdiff_t CCitadel_Modifier_Kelvin_Frozen = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierAirRaidVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceProcWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChainLightning {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Quarantine {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier3Boss_RocketBarrage {
        }

        // Parent: None
        // Fields: 1
        namespace CScaleFunctionAbilityProperty_HealingSpiritScaleVData {
            constexpr std::ptrdiff_t citadel_pregame_hero_draft_button = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Swan_Acrobat {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_ForceField_PushOut {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Crackshot {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDash {
            constexpr std::ptrdiff_t Visuals = 0x1; // 
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
        namespace C_TeamplayRules {
            constexpr std::ptrdiff_t C_TeamplayRules = 0x40; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_DisableGravity {
            constexpr std::ptrdiff_t CGameModifier_DisableGravity = 0xc0; // 
        }

        // Parent: m_flGoingUpTargetElevation
        // Fields: 2
        namespace CCitadel_Ability_PunkGoat_GoatFlip {
            constexpr std::ptrdiff_t m_flMomentumMaintained = 0x750; // float32
            constexpr std::ptrdiff_t m_flVelocityStrengthCurve = 0x758; // CPiecewiseCurve
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_SelfZap {
            constexpr std::ptrdiff_t CCitadel_Ability_Trappers_Bolo_GraphController = 0xb8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGangActivityCancelVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SleepBomb {
            constexpr std::ptrdiff_t CCitadel_Modifier_IceDomeVData = 0x950; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_HatTrick {
        }

        // Parent: m_ImposterModifierFX
        // Fields: 0
        namespace CModifierPowerJumpVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MutedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T2Boss_Wave_Target {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CitadelStolenAbilitySlot_t {
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelMinimapBoundary {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_HornetDrone {
            constexpr std::ptrdiff_t C_NPC_HornetDrone = 0x1bd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SurgingPower {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoCitadelHideout {
            constexpr std::ptrdiff_t CInfoCitadelHideout = 0x620; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fencer_ThrowBlade {
            constexpr std::ptrdiff_t CCitadelFamiliarClone_MovementServices = 0x2f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantBranchWallVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidInvis {
            constexpr std::ptrdiff_t C_Citadel_DruidPlantShield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_SilenceBomb {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_ForceField_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_Salvo {
            constexpr std::ptrdiff_t CCitadel_Modifier_IceBeam_Stacking_Slow = 0x458; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Nano_ClusterGrenade {
            constexpr std::ptrdiff_t CAbility_Fathom_ReefdwellerHarpoon = 0x1488; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelViscousBallVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Weapon_BossTier2 {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x780; // CEmbeddedSubclass<CBaseModifier>
            constexpr std::ptrdiff_t m_SwingParticle = 0x790; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_DeployablePreview {
            constexpr std::ptrdiff_t C_Citadel_DeployablePreview = 0xcb0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Colossus {
            constexpr std::ptrdiff_t CCitadel_Item_PhantomStrike = 0x12d8; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_RapidFire = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage {
            constexpr std::ptrdiff_t CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Crescendo_PostAOE {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wrecker_Ultimate {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirRaid {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_PrimaryWeapon = 0x1438; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemCapacitorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_KineticSash {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpiritBurnProcWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReloadSpeed {
        }

        // Parent: None
        // Fields: 0
        namespace C_fogplayerparams_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Thumper_2_AuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GarbageAura {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_RegenerativeArmor {
            constexpr std::ptrdiff_t CCitadel_Item_Mystic_Regeneration = 0x12e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Victim {
            constexpr std::ptrdiff_t m_eHoldPosition = 0xf8; // ELassoHoldPosition
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
            constexpr std::ptrdiff_t CCitadel_Modifier_AblativeCoatResistBuffVData = 0x830; // 
        }

        // Parent: m_angRotation
        // Fields: 0
        namespace CGameSceneNode {
        }

        // Parent: m_flNextStateTime
        // Fields: 1
        namespace CCitadel_Ability_Lash_Ultimate {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ViperVenomProcWatcher {
            constexpr std::ptrdiff_t CModifier_Wrecker_UltimateThrowEnemyVData = 0x9f0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_InvisFading = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Obscured {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_ObserverServices {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_AnthemAOEVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_BaseHeldItem {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_vPos
        // Fields: 1
        namespace C_SoundAreaEntityBase {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_flFogMaxDensityMultiplier
        // Fields: 1
        namespace C_PlayerVisibility {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeManagercached_attribute_float_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_HauntingSkull_Area {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_AttachHost {
            constexpr std::ptrdiff_t CCitadel_Ability_FlameDash = 0x1500; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Thumper_EnemyPulled_VData {
        }

        // Parent: Visuals
        // Fields: 0
        namespace CAbilityBullChargeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealthSwap {
            constexpr std::ptrdiff_t CCitadel_Modifier_HealthSwap = 0x140; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CloakOfOpportunityWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BerserkerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_CheatDeathImmunityVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicShock_Proc {
            constexpr std::ptrdiff_t CCitadel_Modifier_SuperAcolytesGlove = 0x280; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PortraitWorldUnit {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: overlay_vars
        // Fields: 1
        namespace C_BasePlayerWeapon {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CRagdollManager {
            constexpr std::ptrdiff_t CRagdollManager = 0x5f8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShadowCloneVData {
            constexpr std::ptrdiff_t featherboomerang_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Yakuza_Shakedown {
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_StoneForm = 0x1578; // 
        }

        // Parent: m_flParrySuccessEndTime
        // Fields: 1
        namespace CCitadel_Ability_MeleeParry {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets_HealthLoss_VData {
            constexpr std::ptrdiff_t citadel_shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_AutoCleanseVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TrooperGrenade {
        }

        // Parent: m_hSkyMaterialLightingOnly
        // Fields: 1
        namespace C_EnvSky {
            constexpr std::ptrdiff_t client = 0x40108; // 
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

        // Parent: m_vecDeployedGravestones
        // Fields: 3
        namespace C_Citadel_GraveStone_Blocker {
            constexpr std::ptrdiff_t m_EscapeModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x1828; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_AoEParticle = 0x1838; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_Pulse_Aura {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepAOE {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierIdolReturnTimerVData {
        }

        // Parent: m_fSpeedVariation
        // Fields: 0
        namespace C_EnvWindController {
        }

        // Parent: None
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
            constexpr std::ptrdiff_t CCitadel_Ability_PsychicLift = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Hornet_Chain {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_StaticCharge_V2_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SuperNeutralChargePrepare {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DelayedApply {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Basic_RangedArmorBonus {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStatVData {
        }

        // Parent: m_bGamePaused
        // Fields: 0
        namespace C_GameRules {
        }

        // Parent: CCitadelItemPickupIdol
        // Fields: 0
        namespace CCitadelItemPickupIdol {
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_BookwormDragon_Projectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Hook = 0x1710; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Rutger_Pulse_VData {
            constexpr std::ptrdiff_t citadel_ability_shiv_killing_blow = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BeltFed_MagazineVData {
            constexpr std::ptrdiff_t upgrade_active_reload = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Magic_Clarity_Buff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Magic_Clarity_Buff = 0x148; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LongRangeSlowingTech_Proc {
        }

        // Parent: m_BonusItem2
        // Fields: 0
        namespace ItemDraftOption_t {
        }

        // Parent: None
        // Fields: 4
        namespace C_Citadel_Nano_Predatory_Statue {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_KillSummon = 0x0; // 
            constexpr std::ptrdiff_t m_tSpawnTime = 0x1bf8; // GameTime_t
            constexpr std::ptrdiff_t m_vecCastLocation = 0x1bfc; // VectorWS
            constexpr std::ptrdiff_t m_bDontMove = 0x1c08; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPreviewPlayerController {
        }

        // Parent: m_BackgroundMaterialName
        // Fields: 1
        namespace C_PointWorldText {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fortuna_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_LoveBites {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_TangoTether = 0x1378; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineKnockdownImmune {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerSurge_ChainLightning {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest04VData = 0x18e0; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Fencer_Riposte = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_Ability_Fencer_Riposte = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Escort {
            constexpr std::ptrdiff_t C_InWorldKeyBindPanel = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TimeWall_Aura {
        }

        // Parent: m_nMinCPULevel
        // Fields: 1
        namespace C_RopeKeyframe {
            constexpr std::ptrdiff_t C_TriggerVolume = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_BaseToggle {
        }

        // Parent: None
        // Fields: 1
        namespace C_EnvCubemapBox {
            constexpr std::ptrdiff_t C_EnvCubemapBox = 0x6d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Empty {
            constexpr std::ptrdiff_t CCitadel_Item_Empty = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_HelpingHandsVData {
            constexpr std::ptrdiff_t npc_familiar_helper = 0x0; // 
        }

        // Parent: m_ShoveParticle
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_KnightBarrierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Viscous_TelepunchVData {
            constexpr std::ptrdiff_t citadel_ability_werewolf_clawweapon = 0x0; // 
        }

        // Parent: m_vecCrashPosition
        // Fields: 1
        namespace CCitadel_Ability_Bull_Leap {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_DamageShareVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SplitShotBonusDamage {
            constexpr std::ptrdiff_t CCitadel_Modifier_SplitShotBonusDamage = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GlowToTeammates {
            constexpr std::ptrdiff_t CCitadel_Modifier_CheckNearbyPlayerParryVData = 0x758; // 
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
        // Fields: 1
        namespace CUnitStatusOverlayOld {
            constexpr std::ptrdiff_t CUnitStatusOverlayOld = 0xc60; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_SpotlightAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_SpellslingerHeadshots {
            constexpr std::ptrdiff_t CCitadel_Modifier_Infuser_VData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_MaulingLeap {
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_Speedlines {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCrowdControlVData {
            constexpr std::ptrdiff_t citadel_ability_vandal_surge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ViperVenomVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GooGrenade {
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
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
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
        // Fields: 2
        namespace CCitadel_Ability_TrooperNeutralGrenade {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
            constexpr std::ptrdiff_t m_vCastPosition = 0x460; // Vector
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EntityPinged {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_RopeKeyframeCPhysicsDelegate {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_DoorwayPortal {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoDynamicShadowHint {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemWalkBackVData {
        }

        // Parent: m_strParentPathUniqueID
        // Fields: 1
        namespace CPathNode {
            constexpr std::ptrdiff_t client = 0x40110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_BearTrap {
            constexpr std::ptrdiff_t CModifier_Fathom_LurkersAmbush_Debuff_VData = 0x830; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Fathom_LurkersAmbush_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_Bounty = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Mirage_SandPhantom {
            constexpr std::ptrdiff_t m_CloneModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tengu_AirLiftVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Urn_DebuffVData {
        }

        // Parent: m_arPendingAsyncAbilityReservationSlots
        // Fields: 0
        namespace CCitadelAbilityComponent {
        }

        // Parent: m_flHealingChargeParticlePct
        // Fields: 2
        namespace C_NPC_Trooper {
            constexpr std::ptrdiff_t client = 0x90108; // 
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_FuncMoveLinear {
            constexpr std::ptrdiff_t C_FuncMoveLinear = 0x9a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Affliction {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_CrossbowWeaponVData = 0x1e30; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCadenceCrescendoVData {
            constexpr std::ptrdiff_t citadel_druid_plant_shield = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Succor_MoveVData {
            constexpr std::ptrdiff_t upgrade_infuser = 0x0; // 
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
        namespace CServerOnlyModelEntity {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_TransitionFreeze {
            constexpr std::ptrdiff_t CCitadel_Ability_Chrono_KineticCarbineVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_AntiSpiritVestVData {
            constexpr std::ptrdiff_t citadel_ability_charged_tackle = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ViperHookblade {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Rolling_FireBall {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_SilenceBombVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HeroGravity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
            constexpr std::ptrdiff_t CCitadel_Item_DivineBarrier_VData = 0x19b8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_Colossus_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Apex_Watcher {
            constexpr std::ptrdiff_t CCitadel_Item_Disarm = 0x1258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TossUp {
            constexpr std::ptrdiff_t CCitadel_Modifier_TossUp = 0xd8; // 
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 1
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifer_Viscous_Goo_Aura_VData {
            constexpr std::ptrdiff_t yakuza_gang_activity = 0x0; // 
        }

        // Parent: m_nEntIndex
        // Fields: 0
        namespace C_AssignedLaneParticle {
        }

        // Parent: m_flRadius
        // Fields: 1
        namespace C_SoundEventOBBEntity {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_HauntingSkull_AreaVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Recast {
            constexpr std::ptrdiff_t m_LockingOnParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SwingLine_Swinging {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_Aura_Apply_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldGuy_Ability03 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_Bounty {
            constexpr std::ptrdiff_t CAbility_Synth_Pulse = 0x1360; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MobileResupply {
            constexpr std::ptrdiff_t CCitadelAbilityDruidSprout = 0x11e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wraith_ProjectMind_Shield {
            constexpr std::ptrdiff_t CCitadel_Werewolf_CripplingSlash = 0x0; // 
        }

        // Parent: m_tSlowStopTime
        // Fields: 0
        namespace CCitadel_Ability_LifeDrain {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThermalDetonator_Debuff {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_WeaponEater = 0x13e0; // 
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
        // Fields: 1
        namespace CCitadelAbilityDruidPlantInvisBush {
            constexpr std::ptrdiff_t CCitadel_Modifier_Intimidated = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_Acrobat {
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatTethered = 0x5d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Trapper_SpiderShield {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RadianceVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SummonGangster {
        }

        // Parent: CCitadel_Ability_BulletFlurry
        // Fields: 0
        namespace CCitadel_Ability_BulletFlurry {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Lash {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_PainAura_TargetVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PristineEmblem {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DiscordVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace C_Citadel_SmokeGrenade_Blocker {
            constexpr std::ptrdiff_t CAbility_Fathom_LurkersAmbush = 0x0; // 
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: overlay_vars
        // Fields: 1
        namespace C_BasePropDoor {
            constexpr std::ptrdiff_t C_PhysBox = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_WallTether {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_ApexCombat {
            constexpr std::ptrdiff_t m_flForwardOffset = 0x750; // float32
            constexpr std::ptrdiff_t m_flVerticalOffset = 0x754; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPunchable_Rejuv {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPunchable_Rejuv = 0xc0; // 
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
            constexpr std::ptrdiff_t m_WeaponFxParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelBaseYamatoAbility {
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
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TechOverflowProcWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_NPC_OOC_RegenVData {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertySingleStatCurveVData {
        }

        // Parent: m_flFadeOutEnd
        // Fields: 2
        namespace C_NPC_Boss_Tier2 {
            constexpr std::ptrdiff_t client = 0x90108; // 
            constexpr std::ptrdiff_t m_bBeamActive = 0xf34; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NPCAbility_Vanguard_AOEBuff {
            constexpr std::ptrdiff_t CCitadel_NPCAbility_Vanguard_AOEBuff = 0x1460; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachHeal {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_Ability04 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_BearTrap_Debuff = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SnakeDash {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_LoveBitesVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Wrecker_UltimateVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PassiveBeefy {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStormCloudVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Muted {
            constexpr std::ptrdiff_t CModifierT2BossWaveTargetVData = 0x7b0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseEventProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPunchableNeutralGold {
            constexpr std::ptrdiff_t CCitadelItemPunchableNeutralGold = 0xcf0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelSpeedBoostTrigger {
            constexpr std::ptrdiff_t CCitadelSpeedBoostTrigger = 0xa80; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FrenzyAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CChoreoInfoTarget {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_TrackingBombVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_StackingBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Punkgoat_BlastedShred {
            constexpr std::ptrdiff_t CCitadel_Ability_Fathom_ScaldingSpray_VData = 0x1828; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_Flashbang {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Trapper_SpiderJar_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ProximityRitual_VData {
        }

        // Parent: m_flCancelHookTime
        // Fields: 1
        namespace CCitadel_Ability_Hook {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WeaponEaterStack {
            constexpr std::ptrdiff_t CCitadel_Upgrade_AmmoScavenger = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets_HealthLoss {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: m_flGameStartTime
        // Fields: 1
        namespace C_CitadelGameRules {
            constexpr std::ptrdiff_t C_CitadelGameRules = 0xa088; // 
        }

        // Parent: m_flCycle
        // Fields: 0
        namespace CNetworkedSequenceOperation {
        }

        // Parent: None
        // Fields: 2
        namespace C_ItemCrate {
            constexpr std::ptrdiff_t C_ItemCrate = 0xe40; // 
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAuraTarget = 0xc0; // 
        }

        // Parent: None
        // Fields: 3
        namespace CCitadel_ArmorUpgrade_ReturnFire {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_DoubleJump = 0x0; // 
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_HighImpactArmor = 0x12d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Discord_Aura {
            constexpr std::ptrdiff_t CCitadel_UtilityUpgrade_HealthNova_VData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemPickupRejuvHeroTestInfoSpawn {
            constexpr std::ptrdiff_t CCitadelItemPickupRejuvHeroTestInfoSpawn = 0x5f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_GunSearching {
            constexpr std::ptrdiff_t CCitadel_Ability_Necro_ZombieWall = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierGangActivityAbilitySwapVData {
            constexpr std::ptrdiff_t citadel_ability_tengu_airlift = 0x0; // 
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
        // Fields: 2
        namespace CCitadel_Modifier_EscalatingExposureProcWatcher {
            constexpr std::ptrdiff_t m_BuffStatusParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_BuffStatusParticleEnemy = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EscalatingExposure {
            constexpr std::ptrdiff_t client = 0x401ff; // 
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
        // Fields: 1
        namespace CCitadel_Item_ColdFront {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Containment {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelProjectileTouchVolume {
            constexpr std::ptrdiff_t CCitadelProjectileTouchVolume = 0x9a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tenacity {
        }

        // Parent: m_vecPanelVertices
        // Fields: 0
        namespace ice_path_shard_model_desc_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_StaticCharge {
            constexpr std::ptrdiff_t CCitadel_Ability_BulletFlurry = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeapon_BeamWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicStormWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DummyUnit {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifire_Priest_FlashBangBurnAura {
            constexpr std::ptrdiff_t CAbility_Rutger_ForceField_VData = 0x1958; // 
        }

        // Parent: m_pChoreoComponent
        // Fields: 1
        namespace C_BaseModelEntity {
            constexpr std::ptrdiff_t C_BaseEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Doorman_Hotel_TeleportFX {
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
        // Fields: 1
        namespace CCitadel_Modifier_EternalGift {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_BuffModifier
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilverVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MagicShield_SpiritBuff {
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundOpvarSetAutoRoomEntity {
            constexpr std::ptrdiff_t C_SoundOpvarSetAutoRoomEntity = 0x610; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_TrackingProjectileApplyModifier {
            constexpr std::ptrdiff_t CCitadel_Upgrade_StabilizingTripod = 0x0; // 
        }

        // Parent: m_Entity_flBrightness
        // Fields: 1
        namespace C_EnvCombinedLightProbeVolume {
            constexpr std::ptrdiff_t C_EnvCombinedLightProbeVolume = 0x1738; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Staring {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_CloneSingleVData = 0x1930; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_ChronoSwap_BubbleMove {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SiphonBulletsVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ShadowStepVData {
            constexpr std::ptrdiff_t citadel_shield = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_MultiplayRules {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_AutoaimServices {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_HighImpactArmor {
        }

        // Parent: m_flEndAttackableTime
        // Fields: 1
        namespace CItemXP {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_AltWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirDamping {
            constexpr std::ptrdiff_t client = 0x50108; // 
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
        namespace C_LightDirectionalEntity {
            constexpr std::ptrdiff_t C_LightDirectionalEntity = 0x9b0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Frenzy {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_InstantReloadVData = 0x1998; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_PowerShard {
            constexpr std::ptrdiff_t CCitadel_Modifier_Silence_Buildup = 0xd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_Gravestone_BuffVData {
            constexpr std::ptrdiff_t mirage_teleport = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_CrimsonCannon {
            constexpr std::ptrdiff_t CCitadel_Ability_Viper_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetdummy4VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Intimidate {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UppercutClipSize {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletFlurryWindup {
            constexpr std::ptrdiff_t CCitadel_Modifier_Familiar_Asleep = 0x2c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticReverbExplosion {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InvisFading {
        }

        // Parent: Water
        // Fields: 0
        namespace C_BaseEntity {
        }

        // Parent: m_AssociatedEntities
        // Fields: 0
        namespace ActiveModelConfig_t {
        }

        // Parent: m_brushModelName
        // Fields: 1
        namespace C_RenderPortal {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_KillSummonTrigger {
            constexpr std::ptrdiff_t CCitadel_Modifier_Necro_WallDebuff = 0x240; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidSprout {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: m_vecEndPosition
        // Fields: 2
        namespace CCitadel_Ability_Trapper_WebWall {
            constexpr std::ptrdiff_t m_CastParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_DebuffModifier = 0x18f8; // CEmbeddedSubclass<CCitadelModifier>
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
        // Fields: 0
        namespace CCitadel_Modifier_HealthSwapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Galvanic_Storm_Effect {
            constexpr std::ptrdiff_t CCitadel_Modifier_T2Boss_AoeWaveAura = 0x290; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier2Boss_Stomp {
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

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Pickup_AssignedGold {
            constexpr std::ptrdiff_t C_Citadel_Pickup_AssignedGold = 0xde0; // 
        }

        // Parent: Water
        // Fields: 1
        namespace C_BasePlayerPawn {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTeamRevealHeroCard {
            constexpr std::ptrdiff_t client = 0x80110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_RescueBeam {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_AoEWave = 0x1358; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_KothComebackBonusesVData {
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
        // Fields: 0
        namespace CCitadel_Modifier_Sleep {
        }

        // Parent: None
        // Fields: 0
        namespace C_SoundOpvarSetAABBEntity {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_DruidPlantShield {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_BaseProp_MidStairs {
            constexpr std::ptrdiff_t CCitadel_Item_Empty = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoKOTHSpawnLocation {
            constexpr std::ptrdiff_t CCitadelCatapultTrigger = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AirheartStuckBomb {
            constexpr std::ptrdiff_t CCitadel_Ability_ChargedShot = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_RampSlow = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelDruidInvisBush {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepBomb_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Dust_Storm_Aura_Apply = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpellShield {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BubbleVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModelEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_BloodBlast_VData {
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
            constexpr std::ptrdiff_t m_FlareParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_TeleportParticle = 0x18f8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ChronoSwap {
            constexpr std::ptrdiff_t CCitadel_Ability_PowerJump = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Silence_Buildup {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CheatDeathVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tier2Boss_RocketBarrageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CTakeDamageInfoAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PriestSilenceBomb_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData = 0x840; // 
        }

        // Parent: m_bFixedPosition
        // Fields: 3
        namespace C_Citadel_Shield {
            constexpr std::ptrdiff_t m_BuffStartParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_BuffEndParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_strHitProcSound = 0x910; // CSoundEventName
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HideoutIntroExit {
            constexpr std::ptrdiff_t CCitadel_Modifier_HideoutIntroExit = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeProxy {
            constexpr std::ptrdiff_t CEnvSoundscapeProxy = 0x688; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundEventEntity {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Leaping {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Ability_Shotgun_Astro_Backwards = 0x1430; // 
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
        // Fields: 1
        namespace CCitadel_Ability_LashDownStrike {
            constexpr std::ptrdiff_t CCitadel_Ability_Gunslinger_Salvo = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityChargedShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LightningStrikeArea {
            constexpr std::ptrdiff_t m_bCastWhileAttached = 0x1558; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Low_Health_Glow {
            constexpr std::ptrdiff_t m_RefreshParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: Visuals
        // Fields: 0
        namespace CCitadel_Modifier_EldritchShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BeltFed_Magazine {
            constexpr std::ptrdiff_t CCitadel_Modifier_AbsorbingArmor = 0x1d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_SiphonBullets {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RebuttalWatcher {
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
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_LightOrthoEntity {
            constexpr std::ptrdiff_t C_LightOrthoEntity = 0x9b0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: CCitadel_Ability_Unicorn_LuminousStrike
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_LuminousStrike {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamage {
            constexpr std::ptrdiff_t CCitadel_Projectile_WebWall = 0xad8; // 
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
        // Fields: 1
        namespace CModifier_FleetfootBoots_BonusClip {
            constexpr std::ptrdiff_t m_ProcParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritResilience {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySprintVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
            constexpr std::ptrdiff_t m_vecModifierValues = 0x750; // CUtlVector<ScalingPowerupDefinition_t>
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseFlow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_CripplingSlashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_Hunt {
        }

        // Parent: CCitadel_Ability_Necro_KillSummon
        // Fields: 1
        namespace CCitadel_Ability_Necro_KillSummon {
            constexpr std::ptrdiff_t CCitadel_Modifier_VacuumAuraTarget = 0x1e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Doorman_Hotel {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_Darkness_Caster {
            constexpr std::ptrdiff_t CModifier_Drifter_Darkness_Caster = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseShivAbility {
            constexpr std::ptrdiff_t CAbility_Synth_Barrage = 0x1768; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CorpseExplosionThinkerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Drifter_StalkersMark_Teleport_VData {
            constexpr std::ptrdiff_t citadel_doorway_portal_backside_blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointCapturerAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ControlPointCapturerAuraTarget = 0xc0; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Magician_AnimalHexAreaVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDome_AuraModifierBase {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Passive_Cloak {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Ricochet_Proc {
            constexpr std::ptrdiff_t CCitadel_Modifier_T3BossWaveBeamPreviewVData = 0x928; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NonPlayerCamera {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        namespace CProjectile_Familiar_MovingToAttach {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_StalkersMark_PostTeleport {
            constexpr std::ptrdiff_t CModifier_Drifter_StalkersMark_PostTeleport = 0x240; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_StatStealBase {
            constexpr std::ptrdiff_t CCitadel_Modifier_StatStealBase = 0x1c0; // 
        }

        // Parent: CCitadel_Modifier_PullDownToGroundVData
        // Fields: 0
        namespace CCitadelModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_TrooperBossVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_FlashbangVData {
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
            constexpr std::ptrdiff_t CCitadel_Item_ArcticBlast = 0x0; // 
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
        // Fields: 1
        namespace C_TriggerItemShop {
            constexpr std::ptrdiff_t C_TriggerItemShop = 0xa80; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Fencer_Ultimate_Caster_VData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Graf_Ability03 {
            constexpr std::ptrdiff_t CCitadel_Ability_StormCloud = 0x0; // 
            constexpr std::ptrdiff_t m_vecTargetsInCone = 0x11f0; // C_NetworkUtlVectorBase<CHandle<C_BaseEntity>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_ShadowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MedicBulletsVData {
            constexpr std::ptrdiff_t upgrade_resonant_healing = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_LingeringAssist {
            constexpr std::ptrdiff_t CCitadel_Modifier_LingeringAssist = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Root {
            constexpr std::ptrdiff_t CCitadel_Modifier_NearbyAllyResist = 0xc0; // 
        }

        // Parent: m_nMaxDistance
        // Fields: 1
        namespace CCitadelSoundStackFieldOBB {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: m_stages
        // Fields: 1
        namespace CPropAnimatingBreakable {
            constexpr std::ptrdiff_t client = 0x50108; // 
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
        // Fields: 0
        namespace CCitadel_Item_TechCleave {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_RadiantBlast {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartRocketeer3VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fencer_RiposteVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Graf_Ability04 {
            constexpr std::ptrdiff_t CCitadel_Ability_FireBomb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_BatCloudVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_Pulse_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_Breach {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shotgun_Astro {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityExplosiveBarrelVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ProjectMindVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SplitShotVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SuperAcolytesGlove_VData {
            constexpr std::ptrdiff_t upgrade_resonant_healing = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseAnimFuncs {
        }

        // Parent: None
        // Fields: 0
        namespace C_Citadel_Projectile_Wrecker_Teleport {
        }

        // Parent: m_PanelClassName
        // Fields: 1
        namespace C_BaseClientUIEntity {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_NukeMapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireBomb {
            constexpr std::ptrdiff_t CCitadel_Ability_IceDome = 0x0; // 
        }

        // Parent: m_flTimeStopZipping
        // Fields: 1
        namespace CCitadel_Ability_ZipLine {
            constexpr std::ptrdiff_t CCitadel_Upgrade_AerialAssault = 0x1258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Camouflage_Invis {
            constexpr std::ptrdiff_t CCitadel_Item_ProjectileTest04 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilver_Buff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ActiveDisarm_SpiritSteal {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier2Boss_Stomp = 0x0; // 
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
        namespace CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseArraylib {
        }

        // Parent: None
        // Fields: 1
        namespace C_TriggerLerpObject {
            constexpr std::ptrdiff_t client = 0x20110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Aura {
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_Shadow = 0x1258; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Omnicharge_Pendant {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest04 {
            constexpr std::ptrdiff_t CCitadel_Modifier_Silenced = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Fencer_Riposte_TargetLifesteal {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
            constexpr std::ptrdiff_t CAbilitySummonGangsterVData = 0x1818; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Fervor {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_ArcaneMedallion {
            constexpr std::ptrdiff_t CCitadel_Modifier_ThermalDetonator_Thinker = 0x210; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPointTemplateAPI {
        }

        // Parent: None
        // Fields: 1
        namespace C_DynamicPropAlias_cable_dynamic {
            constexpr std::ptrdiff_t AI_MotorGroundAnimgraph_DebugSnapshotData_t = 0x48; // 
        }

        // Parent: None
        // Fields: 1
        namespace CBaseProp {
            constexpr std::ptrdiff_t client = 0x50110; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_PunkgoatTether {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_bEnableMipGen
        // Fields: 1
        namespace CInfoOffscreenPanoramaTexture {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 1
        namespace CCitadel_Ability_Nano_CatFormVData {
            constexpr std::ptrdiff_t synth_barrage_projectile = 0x0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_BerserkerDamageStack {
        }

        // Parent: None
        // Fields: 0
        namespace CItemRefresherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifire_Priest_FlashBangBurnAuraVData {
        }

        // Parent: m_ProviderType
        // Fields: 0
        namespace CAttributeManager {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Airheart_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_Bebop_LaserBeam = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_HauntingSpiritsVData {
            constexpr std::ptrdiff_t ability_swan_acrobat = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Swan_LeapVData {
            constexpr std::ptrdiff_t fathom_breach = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierDoormanHotelImposterVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_WeaponSwap {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Frank_SelfZapVData {
        }

        // Parent: m_vTargetCastPos
        // Fields: 1
        namespace CCitadel_Ability_FlyingStrike {
            constexpr std::ptrdiff_t m_DebuffParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UltCombo_TargetVData {
            constexpr std::ptrdiff_t citadel_ability_rocket_barrage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Haze_StackingDamage {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_AltWeapon = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargeDragEnemy {
            constexpr std::ptrdiff_t m_ImpactParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CounterspellWatcherVData {
            constexpr std::ptrdiff_t upgrade_auto_cleanse = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Delayed_Stun {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_ReturnFire = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_HealthGrowthVData {
        }

        // Parent: None
        // Fields: 0
        namespace SignatureOutflow_Continue {
        }

        // Parent: None
        // Fields: 1
        namespace CUnitStatusOverlayNew {
            constexpr std::ptrdiff_t CUnitStatusOverlayNew = 0xc70; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTarget {
            constexpr std::ptrdiff_t CInfoTarget = 0x5f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SmokeGrenadeVData {
            constexpr std::ptrdiff_t synth_pulse = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AbsorbingArmorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Objective_BulletReistVData {
        }

        // Parent: m_hColorCorrectionCtrl
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
        // Fields: 2
        namespace CCitadel_KothCashIn {
            constexpr std::ptrdiff_t CCitadel_KothCashIn = 0xaa0; // 
            constexpr std::ptrdiff_t Ping Mini Map on Active = 0x3; // m_ePointType
        }

        // Parent: m_vTangentIn
        // Fields: 1
        namespace CCitadelZipLineNode {
            constexpr std::ptrdiff_t client = 0x50108; // 
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
        // Fields: 0
        namespace CModifierChargedTackleActiveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LightningBullet {
            constexpr std::ptrdiff_t CCitadel_Ability_Gunslinger_SalvoVData = 0x1918; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemShrink_RayVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicStormWatcher {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_HeadshotBooster_VData = 0x890; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Stamina_Regen_Jump_Reduction {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Damage_Taken_Reduction_Handicap {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DelayedCatapultLaunch {
        }

        // Parent: m_bDucked
        // Fields: 1
        namespace CCitadelPlayer_MovementServices {
            constexpr std::ptrdiff_t client = 0x401ff; // 
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
            constexpr std::ptrdiff_t client = 0x401ff; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_SilenceProc_Debuff = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TeleportToObjective {
            constexpr std::ptrdiff_t Shows EMP Status Effect in the Important Box = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ServerOnly {
            constexpr std::ptrdiff_t ItemSectionInfo_t = 0x20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterAttributeInt {
            constexpr std::ptrdiff_t CFilterAttributeInt = 0x630; // 
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
        namespace CPointTemplate {
            constexpr std::ptrdiff_t client = 0x201ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Mirage_Teleport_VData {
        }

        // Parent: None
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
            constexpr std::ptrdiff_t CCitadel_Modifier_Bookworm_KnightBarrier = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hornet_Sting {
            constexpr std::ptrdiff_t CCitadel_Modifier_IncendiaryDebuff = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BullCharging {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcarusWings {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SuperNeutralShield {
            constexpr std::ptrdiff_t CCitadel_Modifier_BurstFire_Actuator = 0x470; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_NeutralSinnerSacrificeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CPointModifierThinker {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_FlashlightServices {
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_BaseDefenseSentry {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelTriggerHideout {
            constexpr std::ptrdiff_t C_CitadelTriggerHideout = 0xa78; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAnimatingModelEntity {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_Evasion {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_HeatSinks {
            constexpr std::ptrdiff_t CCitadel_Ability_GooGrenade = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Targetdummy_3 {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityHookVData {
        }

        // Parent: m_vLastVelocity
        // Fields: 0
        namespace CCitadel_Ability_IcePath {
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
            constexpr std::ptrdiff_t CCitadel_Modifier_Swan_Acrobat = 0x240; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_LuminousStrikeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fencer_PrimaryWeapon_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDome {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Wraith_RapidFireVData {
            constexpr std::ptrdiff_t tokamak_heat_sinks = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
        }

        // Parent: m_flFadeOutStart
        // Fields: 1
        namespace C_NPC_BarrackBoss {
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_DoorwayPortalBacksideBlocker {
            constexpr std::ptrdiff_t CCitadelAbilityChargedBombVData = 0x1920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVData_SetModelScale {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_ClawWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Drifter_BloodBlast {
        }

        // Parent: m_BuildUpModifier
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
            constexpr std::ptrdiff_t CCitadel_Modifier_FireBomb = 0x1c0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_RocketBarrageVolleyVData {
            constexpr std::ptrdiff_t ability_hat_trick = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bull_Leap_BoostingVData {
        }

        // Parent: CCitadel_Modifier_Tier2Boss_LaserCharge
        // Fields: 0
        namespace CCitadel_Modifier_PristineEmblem_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3Boss_Laser_Debuff {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_ItemFlare {
            constexpr std::ptrdiff_t C_ItemFlare = 0xcc8; // 
        }

        // Parent: CCitadelBaseDashCastAbility
        // Fields: 1
        namespace CCitadelBaseDashCastAbility {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPassthroughFakeWall {
        }

        // Parent: m_vMins
        // Fields: 1
        namespace C_SoundEventAABBEntity {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Necro_Coffin {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_Barrier {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierDruidLeechSeedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_MageWalk {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Mirage_FireBeetles {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_SalvoVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_EmpowerBullet {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_Ability04VData {
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 1
        namespace CCitadel_Ability_WreckerTeleport {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IceDomeVData {
            constexpr std::ptrdiff_t genericperson_ability_4 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityPowerJumpVData {
            constexpr std::ptrdiff_t citadel_ability_bull_heal = 0x0; // 
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
        namespace C_TintController {
            constexpr std::ptrdiff_t AI_MotorGroundAnimgraph_DebugSnapshotData_t::Event_t = 0x18; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_YakuzaGangster {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
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
            constexpr std::ptrdiff_t client = 0x60108; // 
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
        // Fields: 2
        namespace CCitadel_Ability_GangActivity_Cancel {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_Rifle = 0x0; // 
            constexpr std::ptrdiff_t m_bAirCast = 0x11d8; // bool
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
        namespace CCitadel_Item_ShadowStrike {
        }

        // Parent: None
        // Fields: 1
        namespace C_FuncBrush {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_GunTetherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LurkersAmbush_Invis {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStompVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LifeDrain {
            constexpr std::ptrdiff_t CCitadel_Ability_StaticChargeVData = 0x1908; // 
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
        // Fields: 1
        namespace CCitadel_Item_TrackingProjectileApplyModifierVData {
            constexpr std::ptrdiff_t upgrade_cooldown_on_miss = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Spiritburn_DOT {
            constexpr std::ptrdiff_t CCitadel_Modifier_AcolytesGlove_VData = 0x950; // 
        }

        // Parent: CCitadel_Ability_Familiar_Spotlight
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Spotlight {
            constexpr std::ptrdiff_t CCitadel_Ability_GenericPerson_1 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_ChannelTether {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_BigBolt {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TetherNoConnectionVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Intimidated_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_MobileResupply = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LashGrappleEnemy_Debuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DetentionAmmo {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Neutral_Debuff_PushbackVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_DivineBarrier {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_EconEntityAttachedParticleInfo_t {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_StealLifeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SleepBomb_Asleep {
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
            constexpr std::ptrdiff_t m_CastTarget = 0x11dc; // CHandle<C_BaseEntity>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SmokeBomb {
            constexpr std::ptrdiff_t m_flDamageTimeOffset = 0x750; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hornet_Snipe {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bomber_Ability02 {
            constexpr std::ptrdiff_t Gameplay = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_KineticSashTriggered {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SilenceProc_Debuff {
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
        namespace CCitadel_WeaponUpgrade_CultistSacrifice {
            constexpr std::ptrdiff_t CCitadel_Modifier_Shadow_Strike_Debuff = 0x240; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_ResonantHealing {
            constexpr std::ptrdiff_t CCitadel_Modifier_T3BossWaveBeamPreviewVData = 0x928; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CatapultStun {
            constexpr std::ptrdiff_t PropertyUpgrade_t = 0x38; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatWaitingToPull {
            constexpr std::ptrdiff_t CAbility_Synth_Affliction_VData = 0x19f8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_FeatherBoomerang {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySpiderShieldVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_AnthemBuff {
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
        // Fields: 2
        namespace CCitadel_Ability_BloodBomb {
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ZapParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpeedBoost {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountInstanceState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Camouflage {
            constexpr std::ptrdiff_t CModifier_Headshot_Damage_Debuff = 0x348; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bebop_Hook_BulletAmp {
            constexpr std::ptrdiff_t m_vStartPos = 0xca8; // Vector
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
        // Fields: 1
        namespace CCitadel_Ability_SuperNeutralCharge {
            constexpr std::ptrdiff_t CCitadel_Modifier_TechDefenderShreddersProcVData = 0x870; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CanDamageMidBoss {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ZiplineSpeedVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_DruidHealingFruit {
            constexpr std::ptrdiff_t m_BoostTrailParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: m_Radius
        // Fields: 1
        namespace C_DynamicLight {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_vecTrackedStats
        // Fields: 0
        namespace TrackedStatNetworkData_t {
        }

        // Parent: m_LeapingSpeedCurve
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_MaulingLeapVData {
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
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Gunslinger_DemonMark {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Urn_Debuff {
            constexpr std::ptrdiff_t m_GrappleRopeParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_Pounce_VData {
        }

        // Parent: None
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
        // Fields: 0
        namespace CCitadel_Modifier_HealEntitiy {
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
        // Fields: 1
        namespace CCitadel_Modifier_ControlPointCapturerAura {
            constexpr std::ptrdiff_t client = 0x10008; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundEventSphereEntity {
            constexpr std::ptrdiff_t C_SoundEventSphereEntity = 0x6b8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AIPhysics {
            constexpr std::ptrdiff_t CCitadel_Modifier_AIPhysics = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_HauntingSkullVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_CloneSingle_Trigger {
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityWreckerScrapBlastVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Disarmed {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletArmorReductionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ActiveReload {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Clone_End {
            constexpr std::ptrdiff_t CCitadel_Ability_SleepBomb = 0x1258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_CameraDummy {
            constexpr std::ptrdiff_t CCitadel_Gunslinger_DemonMarkVData = 0x1828; // 
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
            constexpr std::ptrdiff_t m_BuffChainParticle = 0x840; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Stabilizing_Tripod {
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine_VData = 0x21e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CharmedWraps {
            constexpr std::ptrdiff_t CCitadel_Modifier_FuryTrance_VData = 0x770; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PlayerDisconnected {
            constexpr std::ptrdiff_t CCitadel_Modifier_PlayerDisconnected = 0xc0; // 
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
        namespace C_TonemapController2Alias_env_tonemap_controller2 {
            constexpr std::ptrdiff_t C_EnvSky = 0x0; // 
        }

        // Parent: m_ExplosionParticle
        // Fields: 0
        namespace CCitadel_Ability_Necro_KillSummonTriggerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Electric_Slippers {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemHauntingScream {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterLOS {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPointOrient {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_GlobalLight {
        }

        // Parent: None
        // Fields: 1
        namespace C_EnvWindClientside {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_SpotlightEffect {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatPull {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_SilenceContraptions {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_WreckerSalvageVData {
            constexpr std::ptrdiff_t ability_wrecking_ball = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityCardTossVData {
            constexpr std::ptrdiff_t ability_viper_debuffdagger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GhostBloodShardDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData {
            constexpr std::ptrdiff_t upgrade_cheat_death = 0x0; // 
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
        // Fields: 2
        namespace C_NPC_MortarSentry {
            constexpr std::ptrdiff_t C_NPC_MortarSentry = 0x1bd0; // 
            constexpr std::ptrdiff_t C_NPC_Boss_Tier2 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundEventConeEntity {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DazzlingOrbWatcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Exposed {
            constexpr std::ptrdiff_t CCitadel_Modifier_Disruptive_Charge = 0x240; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_AOEMagicVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Blindside_EnemyDebuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GangActivity {
            constexpr std::ptrdiff_t CCitadel_Ability_GooBowlingBall = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierIntimidatedVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierShadowStepVData {
            constexpr std::ptrdiff_t synth_pulse = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_HornetLeap {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StormCloud {
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
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_Magic_Storm {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nearby_Enemy_Boost = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ArcticBlastAOE {
            constexpr std::ptrdiff_t CCitadel_Item_DivinersKevlar = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CDestructiblePartsComponent {
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelPlayerBotNPCBrain {
            constexpr std::ptrdiff_t C_CitadelPlayerBotNPCBrain = 0x1bd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_WreckingBallThrow {
        }

        // Parent: None
        // Fields: 1
        namespace C_EnvWind {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechDamageProcWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_Aerial_Assault_Watcher = 0x1c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltimateBurst_Proc {
        }

        // Parent: m_Item
        // Fields: 0
        namespace ItemDraftItem_t {
        }

        // Parent: pulse_runtime_lib
        // Fields: 1
        namespace CPulseCell_Step_DebugLog {
            constexpr std::ptrdiff_t CPulseCell_Step_DebugLog = 0x48; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_SuperAcolyteGloves {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CinematicIntro_Player {
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
        // Fields: 1
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Target {
            constexpr std::ptrdiff_t CCitadel_Modifier_Necro_WallDebuffVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Barrage_Amp_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_Radiance {
            constexpr std::ptrdiff_t hProjectile = 0xc0; // CHandle<C_BaseEntity>
        }

        // Parent: None
        // Fields: 0
        namespace CModifierVandalOverflowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CItemAOESilenceModifierVData {
            constexpr std::ptrdiff_t upgrade_headshot_damage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_HealOnLevelVData {
            constexpr std::ptrdiff_t upgrade_reduce_debuff_duration = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheckNearbyPlayerParryVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemKothSpawner {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_FireUserEntityIOVData {
            constexpr std::ptrdiff_t point_modifier_thinker = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_SkyRunner_FlakShotVData {
        }

        // Parent: m_DebuffModifier
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
        // Fields: 0
        namespace CCitadel_Ability_VandalSurge {
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
            constexpr std::ptrdiff_t CBodyComponentBaseAnimGraph = 0x2010; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_FireRateAura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_WeaponShielding {
            constexpr std::ptrdiff_t CCitadel_Item_PhantomStrike = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_BarrackBossVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_OnTheHunt {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Attach_TriggerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_BookWorm_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_Astro_ShotgunBuff = 0x340; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_DoubleDagger {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_MaulingLeapDebuff = 0x1c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
        }

        // Parent: Sounds
        // Fields: 1
        namespace CModifierRiotCastDelayVData {
            constexpr std::ptrdiff_t vandal_pillar_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Viper_DebuffDagger {
            constexpr std::ptrdiff_t CCitadel_Ability_VandalOverflow = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerSalvage_Buff {
            constexpr std::ptrdiff_t CCitadel_Ability_RiotProtocol = 0x1260; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EldritchShot {
            constexpr std::ptrdiff_t CCitadel_Modifier_Magic_Clarity_BuffVData = 0x760; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_CorpseExplosionVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Succor_Move {
        }

        // Parent: m_bRequestStopClimbing
        // Fields: 1
        namespace CCitadel_Ability_Climb_Rope {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 2
        namespace CUnitStatusOverlayV2 {
            constexpr std::ptrdiff_t CUnitStatusOverlayV2 = 0xd00; // 
            constexpr std::ptrdiff_t m_flUIScale = 0xc48; // float32
        }

        // Parent: None
        // Fields: 0
        namespace C_Citadel_Projectile_BloodBomb {
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelConfigurableTrackedProjectile {
            constexpr std::ptrdiff_t C_CitadelConfigurableTrackedProjectile = 0xad8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Werewolf_FrenzyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidLeechSeedVData {
            constexpr std::ptrdiff_t bookwormdragon_projectile = 0x0; // 
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
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Gunslinger_DemonMarkVData {
            constexpr std::ptrdiff_t familiar_projectile_movingtoattach = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShivWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shadow_Step {
            constexpr std::ptrdiff_t CCitadel_Modifier_PunkgoatBlastedActive = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Afterburn {
            constexpr std::ptrdiff_t CModifierRapidFireAirJuggleVData = 0x750; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeapon_Empty {
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
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IsRequirementValidCriteria_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPortalTrigger {
            constexpr std::ptrdiff_t CCitadelPortalTrigger = 0xa98; // 
        }

        // Parent: None
        // Fields: 3
        namespace C_PhysPropClientside {
            constexpr std::ptrdiff_t client = 0x70110; // 
            constexpr std::ptrdiff_t m_duration = 0x8; // float32
            constexpr std::ptrdiff_t m_timestamp = 0xc; // GameTime_t
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Projectile_BatSwarmProjectile {
            constexpr std::ptrdiff_t CCitadel_Modifier_Haunt_Damage_VData = 0x830; // 
            constexpr std::ptrdiff_t m_IgnoreChannelSlow = 0x11d8; // int32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_NukeMap {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_PainAura_Target {
        }

        // Parent: m_bIsModelSwapped
        // Fields: 1
        namespace CCitadel_Ability_Magician_CopyUlt {
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_PrimaryWeapon = 0x14b0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_DemonCarbineVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThrownShiv_Damage_Debuff {
        }

        // Parent: CCitadel_Ability_IceBeam
        // Fields: 1
        namespace CCitadel_Ability_IceBeam {
            constexpr std::ptrdiff_t CModifier_Fencer_Ultimate_Target_VData = 0x868; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Guiding_Arrow_KillCheck {
            constexpr std::ptrdiff_t CCitadelAbilityDruidHelicopterSeeds = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Inhibitor_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_MedicHeal {
            constexpr std::ptrdiff_t CCitadel_Item_Mystic_Regeneration = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backdoor_Protection {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Base_Buildup {
            constexpr std::ptrdiff_t ParamAndPriority_t = 0x10; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_BreakablePropVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_BaseDoor {
            constexpr std::ptrdiff_t ModelConfigHandle_t = 0x4; // 
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
            constexpr std::ptrdiff_t CAbilitySleepDaggerVData = 0x1908; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shakedown_TargetVData {
        }

        // Parent: m_bIsDashing
        // Fields: 1
        namespace CCitadel_Ability_NanoDash {
            constexpr std::ptrdiff_t CCitadel_Ability_Mirage_FireBeetles = 0x1258; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityStackingDamageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityNikumanVData {
            constexpr std::ptrdiff_t projectile_gravestone_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChargedBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EnchantedHolsters_Watcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_BoxingGloveVData = 0x950; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingBullets_ProcVData {
            constexpr std::ptrdiff_t upgrade_return_fire = 0x0; // 
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

        // Parent: None
        // Fields: 0
        namespace CCitadelTriggerMultiCapturePoint {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Projectile_DustStorm {
            constexpr std::ptrdiff_t CCitadel_Ability_Familiar_CloneSingle = 0x11e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_RampUp {
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
        // Fields: 0
        namespace CCitadel_Ability_PrimaryWeapon_Bebop {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityImmobilizeTrapVData {
            constexpr std::ptrdiff_t ability_power_jump = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemMetalSkinVData {
            constexpr std::ptrdiff_t upgrade_shadow_step = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Projectile_Archer_ChargedShot {
            constexpr std::ptrdiff_t CCitadel_Ability_Doorman_Hotel = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_T3Boss_Effigy {
            constexpr std::ptrdiff_t CCitadel_Modifier_T3Boss_Effigy = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InHideoutZone {
            constexpr std::ptrdiff_t CCitadel_Modifier_InHideoutZone = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_MiniMapMarker {
            constexpr std::ptrdiff_t C_CitadelClimbRopeTrigger = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_Familiar_Recast = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_HealingSlash {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_Ability04 {
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
        // Fields: 1
        namespace CCitadel_Modifier_NPC_OOC_Regen {
            constexpr std::ptrdiff_t CCitadel_Modifier_NPC_OOC_Regen = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CFilterMultipleAPI {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_DebuffImmunity {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nearby_Enemy_Boost = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_HuntVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityUppercutVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_HealthSwapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DeathTaxTechAmp {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_LightningBall {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ZipLineBoost_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FuryTrance {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_RestorativeLocket_VData {
            constexpr std::ptrdiff_t citadel_model_entity = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeldItemPickupAuraVData {
            constexpr std::ptrdiff_t item_crate = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_ShieldedSentryVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Projectile_RocketLauncher_Rocket = 0xad8; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_Haunt_Damage_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ThrowSandVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TriggerTowerRegen {
            constexpr std::ptrdiff_t CCitadel_Modifier_LifestrikeGauntlets_VData = 0x940; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PatronsBlessingEnemyTracker {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_FireRateAura = 0x1258; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_RechargingBulletsVData {
            constexpr std::ptrdiff_t upgrade_target_stun = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boss_Damage_Protection {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_eValType
        // Fields: 0
        namespace DynamicAbilityValues_t {
        }

        // Parent: None
        // Fields: 2
        namespace C_CitadelTeleportTrigger {
            constexpr std::ptrdiff_t C_CitadelTeleportTrigger = 0xa88; // 
            constexpr std::ptrdiff_t m_iszSoundName = 0xa78; // CUtlSymbolLarge
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTriggerNoPortals {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_OnTheHunt {
            constexpr std::ptrdiff_t CCitadel_Ability_Unicorn_RadiantBlast = 0x13d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GoatFlipEmpoweredMelee {
            constexpr std::ptrdiff_t CNecro_HauntingSkullEntity = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DeflectingArmorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierStimPakVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Slow {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RebirthCreditVData {
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
        namespace CCitadel_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_LaserBeam = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fealty {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_LockDown {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Killing_Blow_GlowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_Shadow_Debuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IceDomeFriendly {
            constexpr std::ptrdiff_t CCitadel_Modifier_LifeDrainVData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_InfernalResilience_Melee {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_vecMaxs
        // Fields: 0
        namespace CCollisionProperty {
        }

        // Parent: m_hOtherPortal
        // Fields: 1
        namespace CCitadelCatapultTrigger {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: m_nTotalPausedTicks
        // Fields: 1
        namespace C_ShatterGlassShardPhysics {
            constexpr std::ptrdiff_t client = 0x80110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterMassGreater {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_Flying_Weakpoint {
            constexpr std::ptrdiff_t C_NPC_Trooper = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Crescendo_AOE {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_flFadeInLength
        // Fields: 0
        namespace C_EntityDissolve {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 0
        namespace CCitadel_Item_DivineBarrier_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Climb_RopeVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_SoundOpvarSetOBBEntity {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Hideout_Clock {
            constexpr std::ptrdiff_t C_Citadel_Hideout_Clock = 0xcb0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Refresher {
        }

        // Parent: m_flEndTime
        // Fields: 0
        namespace CCitadelRecentDamage {
        }

        // Parent: Sounds
        // Fields: 0
        namespace CCitadel_Werewolf_UnloadGun2 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PunkgoatBlastedPassive {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_StackingDefense {
            constexpr std::ptrdiff_t CCitadel_Ability_Rolling_FireBall = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Uppercut {
            constexpr std::ptrdiff_t CCitadel_GrandFinaleStage = 0x0; // 
        }

        // Parent: m_iClip
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Ability_PrimaryWeapon = 0x1430; // 
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

        // Parent: m_bRenderShadows
        // Fields: 1
        namespace C_FuncMonitor {
            constexpr std::ptrdiff_t client = 0x50110; // 
        }

        // Parent: None
        // Fields: 2
        namespace CUnitStatusOverlay {
            constexpr std::ptrdiff_t CUnitStatusOverlay = 0xc00; // 
            constexpr std::ptrdiff_t m_flUIScale = 0xcb8; // float32
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Projectile_Viscous_GooGrenade {
            constexpr std::ptrdiff_t CCitadel_Werewolf_CripplingSlash = 0x1658; // 
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
            constexpr std::ptrdiff_t m_hShadowdownAbility = 0x11d8; // CHandle<CCitadel_Ability_Yakuza_Shakedown>
            constexpr std::ptrdiff_t m_AimPos = 0x11dc; // Vector
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartUltVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_AttachHealVData {
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
        // Fields: 1
        namespace CModifier_Mirage_Tornado_Lift {
            constexpr std::ptrdiff_t CCitadel_Ability_PunkGoat_Blasted = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VoidSphere_Buff {
            constexpr std::ptrdiff_t CCitadel_Ability_Magician_Escape = 0x12d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Arcane_Eater_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AblativeCoatResistBuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechRangeClamp {
            constexpr std::ptrdiff_t m_empWaveParticle = 0x7a8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CItem_WitheringWhip_VData {
            constexpr std::ptrdiff_t citadel_ability_tier2boss_laser_beam = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierT3BossWaveTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TeamRelativeParticle {
        }

        // Parent: None
        // Fields: 1
        namespace C_ClientRagdoll {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CinematicIntro_Player_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FamiliarHelper_InvisWatcher {
            constexpr std::ptrdiff_t CCitadel_Modifier_FamiliarHelper_InvisWatcher = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Werewolf_UnloadGun {
            constexpr std::ptrdiff_t m_PullAOEModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_KnockbackVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityTargetPracticeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ViscousBall {
            constexpr std::ptrdiff_t CCitadel_Ability_LockDown = 0x1358; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_Near_Climbable_Rope {
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
        namespace CCitadel_Modifier_Familiar_SpotlightAura {
            constexpr std::ptrdiff_t CCitadel_Ability_PowerSurge = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_IdolCashInTimer {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 0
        namespace CAbilityKobunVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpreadingFire_DOT_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierLockDownDebuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Bolo {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier2Boss_LaserCharge {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: Play Sequence
        // Fields: 0
        namespace CPulseCell_PlaySequenceCursorState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CBodyComponentSkeletonInstance {
            constexpr std::ptrdiff_t CBodyComponentSkeletonInstance = 0x4d0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Projectile_FeatherBoomerang {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemWalkBack {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemWalkBack = 0xc0; // 
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
        // Fields: 0
        namespace CAbility_Rutger_ForceField {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Sleeping {
            constexpr std::ptrdiff_t CCitadel_Modifier_Chrono_KineticCarbineVData = 0x930; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_IcePath_Friendly {
            constexpr std::ptrdiff_t CCitadel_Modifier_IcePath_Friendly = 0x240; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
            constexpr std::ptrdiff_t item_projectile_test_02 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_QuickSilver_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Infuser_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MeleeDamageOnly {
            constexpr std::ptrdiff_t CCitadel_Modifier_MeleeDamageOnly = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hero_Clone {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ProjectileTest {
            constexpr std::ptrdiff_t CCitadel_Item_TechDamagePulse = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_DPS_Aura {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_SkyRunner_Ability04 {
            constexpr std::ptrdiff_t m_nRollFXIndex = 0x11d8; // ParticleIndex_t
            constexpr std::ptrdiff_t m_bInFlight = 0x11dc; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_Revelation_Caster {
            constexpr std::ptrdiff_t m_AttackParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldedSentry {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UIHudMessage {
            constexpr std::ptrdiff_t CCitadel_Modifier_UIHudMessage = 0xd8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_Hideout_Cat {
            constexpr std::ptrdiff_t C_NPC_Neutral_Hideout_Cat = 0xcb0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_TrackingBomb {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        namespace CScriptComponent {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelItemMetal {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Thumper_PullAOE_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura_ConeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Skyrunner_MagicBeam {
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
        // Fields: 0
        namespace CCitadel_Ability_Nano_Pounce {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_PredatoryStatueVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityGuidedArrowVData {
        }

        // Parent: None
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
        namespace C_PortraitWorldCallbackHandler {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: C_NPC_FieldSentry
        // Fields: 1
        namespace C_NPC_FieldSentry {
            constexpr std::ptrdiff_t C_NPC_BaseDefenseSentry = 0x0; // 
        }

        // Parent: m_bUseAnimGraph
        // Fields: 0
        namespace C_DynamicProp {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CombatStatus_BulletHit {
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus_BulletHit = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_AirheartAbility02VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Frank_PainAura {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_UmbrellaManeuver_AirHang_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilitySleepDaggerVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_CapacitorSlowDebuff {
            constexpr std::ptrdiff_t m_LaunchParticle = 0x18b8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_InAirWatcherModifier = 0x1998; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Berserker {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierContainmentVictimVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier3Boss_AoEWave {
            constexpr std::ptrdiff_t CCitadel_Modifier_Galvanic_Storm_EffectVData = 0x920; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ApplyDebuff_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CFuncFoliageVData {
        }

        // Parent: CCitadel_MultiCapturePointVData
        // Fields: 0
        namespace C_TeamRelativeParticleSystem {
        }

        // Parent: None
        // Fields: 3
        namespace C_Citadel_Projectile_SettingSun {
            constexpr std::ptrdiff_t m_hAbility = 0x9b0; // CHandle<C_CitadelBaseAbility>
            constexpr std::ptrdiff_t m_flBallRadius = 0x9b4; // float32
            constexpr std::ptrdiff_t m_bNeedsPhysicsUpdate = 0x9b8; // bool
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_InstantReload {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuminousStrikeBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Thumper_Bullet_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceGrandFinaleVData {
        }

        // Parent: m_SplitBeamWidth
        // Fields: 0
        namespace CCitadel_Ability_IceBeamVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IcePath {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_CardToss {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TriggerTower {
            constexpr std::ptrdiff_t CCitadel_Item_TrophyCollectorVData = 0x19b8; // 
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
            constexpr std::ptrdiff_t zip_line_node = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBaseDashCastAbilityVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff = 0xc8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DivinersKevlarBuff_VData {
            constexpr std::ptrdiff_t upgrade_weapon_siphon_bullets = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticReverb_Proc {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Objective_Bullet_Resist {
            constexpr std::ptrdiff_t CCitadel_Modifier_Basic_RangedArmorBonus = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertyMultiStatsVData {
        }

        // Parent: None
        // Fields: 2
        namespace C_CitadelIdolReturnTrigger {
            constexpr std::ptrdiff_t C_CitadelIdolReturnTrigger = 0xa78; // 
            constexpr std::ptrdiff_t m_bAlignCameraOnAutoDismount = 0xa78; // bool
        }

        // Parent: m_hPositionKeys
        // Fields: 1
        namespace C_TextureBasedAnimatable {
            constexpr std::ptrdiff_t C_TextureBasedAnimatable = 0x9e0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_LightEnvironmentEntity {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_Attach_Trigger {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidPlantSomethingVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Doorman_Doorway {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Thumper_4 {
        }

        // Parent: m_vecDashEndPos
        // Fields: 2
        namespace CCitadel_Ability_TangoTether {
            constexpr std::ptrdiff_t m_vecAimPos = 0x11d8; // Vector
            constexpr std::ptrdiff_t m_vecAimNormal = 0x11e4; // Vector
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Shiv_KillingBlowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RestorativeGoo {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Spellbreaker {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ColdFrontVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ScalingPowerUp {
            constexpr std::ptrdiff_t IncompatibleFilter_t = 0x14; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_BaseProjectileAOEModifier {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SlowImmunity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Knockback {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CMatchTrackedStatsEntity {
            constexpr std::ptrdiff_t CMatchTrackedStatsEntity = 0x660; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierGoatChargingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Pulse {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_Pounce_Self = 0x140; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Targetdummy_4 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VandalSurge {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Lash_Flog {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 0
        namespace CCitadel_Item_ContainmentVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Slide_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_ReloadSpeedVData = 0x758; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AttachTarget {
            constexpr std::ptrdiff_t ModifierBarrierBehavior_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAI_NPC_TrooperVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierItemPickupAuraTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelAbilityDruidBasePlantVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_SmokeGrenadeVData {
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
        // Fields: 0
        namespace CCitadel_Ability_ZipLine_Boost {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Backstabber_Debuff {
            constexpr std::ptrdiff_t CTier3BossAbility = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DivineBarrier {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ApplyDebuff_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_XPOrbVData {
        }

        // Parent: None
        // Fields: 0
        namespace CLogicRelayAPI {
        }

        // Parent: m_linearDamping
        // Fields: 1
        namespace C_TriggerPhysics {
            constexpr std::ptrdiff_t C_TriggerPhysics = 0xac8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PropDoorRotating {
            constexpr std::ptrdiff_t C_PropDoorRotating = 0xf30; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_HandleTest {
            constexpr std::ptrdiff_t C_HandleTest = 0x5f8; // 
        }

        // Parent: m_bWorldLayerVisible
        // Fields: 1
        namespace CInfoWorldLayer {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_HauntingSpirits {
            constexpr std::ptrdiff_t CAbilityPunkgoatUltVData = 0x1ad0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Doorman_Hotel_Imposter_FX {
            constexpr std::ptrdiff_t CCitadel_Ability_ChronoSwap = 0x0; // 
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
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TimeWall_AuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ThermalDetonator_ThinkerVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelMatchmakingStatusInfo {
            constexpr std::ptrdiff_t CCitadelItemPickupRejuv = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Viper_PetrifyBola {
            constexpr std::ptrdiff_t m_fHealingSoundBuildup = 0x140; // float32
        }

        // Parent: m_GarbageAuraModifier
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

        // Parent: None
        // Fields: 1
        namespace C_BaseTrigger {
            constexpr std::ptrdiff_t thinkfunc_t = 0x0; // 
        }

        // Parent: None
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
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_EmpowerBullet {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_ShockFullyChargedVData = 0x830; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityRiotProtocolVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TechDefenderShreddersProcVData {
            constexpr std::ptrdiff_t upgrade_grit = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T2Boss_Stagger_Watcher {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Extendable_HealthRegen {
        }

        // Parent: m_strSpawnParticle
        // Fields: 0
        namespace CNPC_Escort_VData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadelItemPickupRejuvHeroTest {
            constexpr std::ptrdiff_t CCitadelItemPickupRejuvHeroTest = 0xee0; // 
            constexpr std::ptrdiff_t CCitadelLootTableVData = 0x50; // 
        }

        // Parent: None
        // Fields: 1
        namespace CTriggerPassthroughFakeWall {
            constexpr std::ptrdiff_t CTriggerPassthroughFakeWall = 0xa90; // 
        }

        // Parent: None
        // Fields: 1
        namespace FilterDamageType {
            constexpr std::ptrdiff_t FilterDamageType = 0x630; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifier_Viscous_Goo_Aura {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAttributeList {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_NetShot {
            constexpr std::ptrdiff_t CAbilityWreckingBallVData = 0x1ae0; // 
        }

        // Parent: m_vDashDirection
        // Fields: 1
        namespace CCitadel_Ability_Fencer_Riposte {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boho_DamageShare {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Spotlight = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Barrage_Amp {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityPowerSlashVData {
            constexpr std::ptrdiff_t ability_unicorn_dazzlingorb = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityVacuumVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StaticCharge {
            constexpr std::ptrdiff_t m_SilenceModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PauseUnPause {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
            constexpr std::ptrdiff_t CItemStimPakVData = 0x19a8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Mystic_RegenerationVData {
        }

        // Parent: tools/images/pulse_editor/inflow_wait.png
        // Fields: 1
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t CPulseCell_Inflow_Wait = 0x90; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelTunnelTrigger {
            constexpr std::ptrdiff_t CCitadelTunnelTrigger = 0xa88; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_RocketBoots {
            constexpr std::ptrdiff_t CCitadel_Item_TrackingProjectileApplyModifier = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelTrackedProjectile {
            constexpr std::ptrdiff_t C_CitadelTrackedProjectile = 0xad8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterProximity {
            constexpr std::ptrdiff_t CFilterProximity = 0x630; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CombatStatus {
            constexpr std::ptrdiff_t CCitadel_Modifier_CombatStatus = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAccoladeDefinition {
        }

        // Parent: None
        // Fields: 1
        namespace CTeamTrackedStatsEntity {
            constexpr std::ptrdiff_t CTeamTrackedStatsEntity = 0x668; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Werewolf_Frenzy {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Fencer_Ultimate_Target {
            constexpr std::ptrdiff_t CAbility_Fencer_Ultimate = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Familiar_HealHostVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WebWall_Debuff {
            constexpr std::ptrdiff_t CCitadel_Ability_Viper_Ability04 = 0x1458; // 
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
        // Fields: 1
        namespace CCitadel_Ability_WreckerGarbageSuck {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 1
        namespace C_Citadel_RestorativeGooCube {
            constexpr std::ptrdiff_t CCitadel_Ability_Vandal_PillarVData = 0x1908; // 
        }

        // Parent: CGameSceneNode::m_hParent
        // Fields: 0
        namespace C_ParticleSystem {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Intensifying_Clip {
        }

        // Parent: m_flTurretExpireTime
        // Fields: 1
        namespace CCitadel_Ability_TurretClone {
            constexpr std::ptrdiff_t CCitadel_Modifier_Fathom_ScaldingSpray_Aura = 0x328; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Rutger_Pulse {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TangoTether_Tether {
            constexpr std::ptrdiff_t C_Citadel_SpiderAnimating = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PrimaryWeapon_BebopVData {
            constexpr std::ptrdiff_t ability_doorman_luggage_cart = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ArcaneEaterDebuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayer_ObserverServices {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 1
        namespace C_BaseFlex {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_StabilizingTripod {
            constexpr std::ptrdiff_t CItem_WitheringWhip_VData = 0x19d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FrenzyAura {
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
        // Fields: 1
        namespace CCitadel_Modifier_PetrifyVData {
            constexpr std::ptrdiff_t yakuza_protection_racket = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ShadowStrikeVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Pickup_NecroDeath {
            constexpr std::ptrdiff_t C_Citadel_Pickup_NecroDeath = 0xde0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_FuncMover {
            constexpr std::ptrdiff_t C_FuncMover = 0x9a8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RiposteTargetSelect {
            constexpr std::ptrdiff_t C_Citadel_Ice_Dome_Blocker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_HealOnLevel {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UltCombo_Target {
            constexpr std::ptrdiff_t CCitadel_Bounce_PadVData = 0x3f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Wrecker_Ultimate {
            constexpr std::ptrdiff_t m_sModelName = 0x28; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            constexpr std::ptrdiff_t m_flModelScale = 0x108; // float32
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityStickyBombVData {
            constexpr std::ptrdiff_t citadel_ability_drifter_primaryweapon = 0x0; // 
        }

        // Parent: m_flBrightness
        // Fields: 0
        namespace CLightComponent {
        }

        // Parent: None
        // Fields: 1
        namespace C_WaterBullet {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItemExplosiveBarrel {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_Ability02 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterModifier {
            constexpr std::ptrdiff_t CFilterModifier = 0x630; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Werewolf_MaulingLeapDebuff {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_UmbrellaManeuver_AirHang {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_CheatDeath_Activated {
            constexpr std::ptrdiff_t m_DiminishingSlowModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_CrimsonCannonVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierFealtyTargetVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_PredatoryStatueTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_Nano_PredatoryStatueTarget = 0x2c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerJump {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bull_Heal {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SilenceProc_Immunity {
            constexpr std::ptrdiff_t CCitadel_Modifier_MysticalPianoVData = 0x8a8; // 
        }

        // Parent: m_nTargetingParticleIndex
        // Fields: 1
        namespace CCitadel_Modifier_HealBuffVData {
            constexpr std::ptrdiff_t upgrade_celestial_guidance = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashUltimateVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_AOESilence {
        }

        // Parent: m_Entity_bCustomCubemapTexture
        // Fields: 1
        namespace C_EnvCubemap {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatCloud {
            constexpr std::ptrdiff_t CCitadel_Modifier_ViscousBallVData = 0x910; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SettingSunThinker_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_Shadow {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargedTackleActive {
            constexpr std::ptrdiff_t CCitadel_Ability_Priest_WeaponSwapVData = 0x1a98; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BerserkerDamageStackVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier3Boss_LaserBeam {
            constexpr std::ptrdiff_t CCitadel_Item_Camouflage = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Tier2Boss_RocketBarrage {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PreMatchWait {
            constexpr std::ptrdiff_t Shows Bleed Status Effect in the Important Box = 0x0; // 
        }

        // Parent: m_bPurchased
        // Fields: 0
        namespace ConsumedComponentState_t {
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

        // Parent: m_vecViewOffset
        // Fields: 1
        namespace C_AI_CitadelNPC {
            constexpr std::ptrdiff_t client = 0x80108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Werewolf_UnloadGun2VData {
        }

        // Parent: CCitadel_Ability_InfinitySlash
        // Fields: 0
        namespace CCitadel_Ability_InfinitySlash {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckingBall_AutoThrow {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_VacuumAuraTargetModifierVData {
            constexpr std::ptrdiff_t synth_plasma_flux_trigger = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Ghost_BloodShards {
            constexpr std::ptrdiff_t CCitadel_Ability_Gunslinger_DemonCarbine = 0x0; // 
            constexpr std::ptrdiff_t Visuals = 0x0; // MPropertyStartGroup
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Proc {
            constexpr std::ptrdiff_t m_DamageTakenParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_FinalDamageParticle = 0x830; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CBaseModifier {
        }

        // Parent: None
        // Fields: 2
        namespace C_NPC_FlyingDrone {
            constexpr std::ptrdiff_t C_NPC_FlyingDrone = 0x1bd0; // 
            constexpr std::ptrdiff_t C_NPC_CarpetBombDrone = 0x1bd0; // 
        }

        // Parent: m_bIsUsable
        // Fields: 1
        namespace C_BaseCombatCharacter {
            constexpr std::ptrdiff_t C_BaseCombatCharacter = 0xee8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_Ricochet {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegeneratingBulletShield = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_NetShotVData {
            constexpr std::ptrdiff_t tokamak_heat_sinks_inherent = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_PainAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_Frank_PainAura = 0x3c8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_GrandFinale_Buff {
        }

        // Parent: m_flStateEnterTime
        // Fields: 0
        namespace CCitadel_Ability_Gunslinger_KnockbackBlastVData {
        }

        // Parent: Modifiers
        // Fields: 0
        namespace CModifier_WreckerSalvageBuffVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Bounce_Pad_Stomp {
            constexpr std::ptrdiff_t CCitadel_Ability_Bull_HealVData = 0x1828; // 
        }

        // Parent: None
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

        // Parent: m_nGlowRange
        // Fields: 0
        namespace CGlowProperty {
        }

        // Parent: m_flSimulationTime
        // Fields: 1
        namespace C_NPC_SimpleAnimatingAI {
            constexpr std::ptrdiff_t C_NPC_Neutral_SinnersSacrifice_Hideout = 0x0; // 
        }

        // Parent: m_iGuidedBotMatchOrbsSecured
        // Fields: 1
        namespace CCitadelPlayerController {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PointClientUIDialog {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Petrify {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierChargedTacklePrepareVData {
            constexpr std::ptrdiff_t ability_shieldguy_ability02 = 0x0; // 
        }

        // Parent: m_nLightningStrikesRemaining
        // Fields: 0
        namespace CCitadel_Modifier_HornetSnipeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PassiveBeefyVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpilledBloodThinker {
            constexpr std::ptrdiff_t m_ExplosionParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
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
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Drifter_StalkersMark_Teleport {
            constexpr std::ptrdiff_t CCitadel_Modifier_HookTargetVData = 0x998; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_NullificationAura {
            constexpr std::ptrdiff_t CCitadelModifierAerialAssaultWatcherVData = 0x760; // 
        }

        // Parent: m_iszOpvarName
        // Fields: 1
        namespace CCitadelSoundOpvarSetOBB {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Guiding_Arrow {
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

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_SinnersSacrifice {
            constexpr std::ptrdiff_t C_NPC_MidBoss = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_SplitShot {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_Shrink_Ray {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_LeapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Swan_Leap {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_BouncyProjectile {
            constexpr std::ptrdiff_t m_ExplodeParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_FireBeetles_Debuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Gunslinger_DemonCarbine {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Uppercutted {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_TargetPracticeEnemyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Siphon_Bullets_WatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CorpseExplosionThinker {
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine_Boost = 0x11e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ArcticBlast_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HollowPoint_Proc {
        }

        // Parent: m_nInteractsExclude
        // Fields: 0
        namespace VPhysicsCollisionAttribute_t {
        }

        // Parent: None
        // Fields: 1
        namespace C_DynamicPropAlias_dynamic_prop {
            constexpr std::ptrdiff_t C_SceneEntity::QueuedEvents_t = 0x18; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemCapacitor {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_Stimpak {
            constexpr std::ptrdiff_t CCitadel_Item_ComboBreaker = 0x1258; // 
        }

        // Parent: m_flExpireTime
        // Fields: 1
        namespace CCitadelBulletTimeWarp {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Wrecker_UltimateGrabEnemyVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CatapultDamageWatcher {
            constexpr std::ptrdiff_t AbilityCastEvent_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerable = 0x0; // 
        }

        // Parent: m_bShowLight
        // Fields: 1
        namespace C_OmniLight {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_AccuracyTracker {
            constexpr std::ptrdiff_t CCitadel_Modifier_AccuracyTracker = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_BodyGroupChoice {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_bMultiplayer
        // Fields: 1
        namespace C_SceneEntity {
            constexpr std::ptrdiff_t client = 0x201ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Unicorn_RadiantBlastVData {
        }

        // Parent: m_tLeapStartTime
        // Fields: 1
        namespace CCitadel_Ability_Werewolf_Leap {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_vecLastPosition
        // Fields: 0
        namespace CAbility_Fencer_Ultimate {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_FireBeetles_Debuff_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_KineticCarbine_Slow {
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
        // Fields: 0
        namespace CProjectile_Necro_HauntProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Drifter_Darkness_Target_VData {
            constexpr std::ptrdiff_t ability_druid_base_plant = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
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
        // Fields: 0
        namespace CCitadel_Modifier_Pillar {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThrownShiv_Slow_Debuff {
            constexpr std::ptrdiff_t C_Projectile_PunkgoatTether = 0xad8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAerialAssaultWatcherVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_APRounds {
            constexpr std::ptrdiff_t Modifiers = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BoxingGloveVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MagicClarityWatcher {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FullSpectrumDamage {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NearbyEnemyResist {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelItemPickupRejuvHeroTestVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_EconEntity {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Ice_Dome_Blocker {
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability03 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Shield {
            constexpr std::ptrdiff_t CCitadelModifierTier2BossLaserChargeVData = 0x848; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Bull_Heal_Target {
            constexpr std::ptrdiff_t CCitadel_Ability_Cadence_Anthem = 0x1258; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CharmedWraps_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CPlayer_UseServices {
        }

        // Parent: m_FinishParticle
        // Fields: 0
        namespace CModifierVacuumAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CGameModifier_SetMoveType {
        }

        // Parent: m_nInputType
        // Fields: 1
        namespace C_PointValueRemapper {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Mirage_Traveler_MovementSpeed {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_KnockbackBlast {
            constexpr std::ptrdiff_t CCitadel_Ability_Graf_Ability02 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TargetPracticeEnemy {
            constexpr std::ptrdiff_t C_Citadel_Projectile_Bebop_Hook = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierChronoPulseGrenadePulseAreaVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VeilWalkerMovespeed {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingBullets_Proc {
            constexpr std::ptrdiff_t m_nBonusClip = 0xc0; // int32
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
        // Fields: 1
        namespace CCitadelHideoutInteractableProp {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DragonFireGroundAuraVData {
        }

        // Parent: m_bMoving
        // Fields: 1
        namespace CProjectile_Priest_SlideTrap_Projectile {
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_ClusterGrenade = 0x0; // 
        }

        // Parent: m_ImpactParticle
        // Fields: 1
        namespace CCitadel_Ability_Trapper_FearVData {
            constexpr std::ptrdiff_t ability_werewolf_transformation = 0x0; // 
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
        // Fields: 1
        namespace CModifier_CheatDeathImmunity {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Unknown {
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_SinnersSacrifice_Hideout {
            constexpr std::ptrdiff_t C_NPC_Neutral_SinnersSacrifice_Hideout = 0x1c40; // 
        }

        // Parent: None
        // Fields: 1
        namespace CGameModifier_SetModelScale {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SpiderShield {
            constexpr std::ptrdiff_t CCitadel_Ability_Trapper_PoisonJar = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_BigBoltVData {
        }

        // Parent: Camera
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
        // Fields: 1
        namespace CInWorldItemPanel {
            constexpr std::ptrdiff_t client = 0x60110; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_Perched_Predator {
            constexpr std::ptrdiff_t CCitadel_Ability_ChargedTackle = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_LearningHeroAbility {
            constexpr std::ptrdiff_t CCitadel_Modifier_LearningHeroAbility = 0xd0; // 
        }

        // Parent: m_RecastEndTime
        // Fields: 1
        namespace CCitadel_Ability_VampireBat_BatBlink {
            constexpr std::ptrdiff_t CCitadel_Ability_Kobun = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fathom_LurkersAmbush_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Haunt_Damage {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldedSentry_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChainLightningEffect {
            constexpr std::ptrdiff_t CCitadel_Item_ContainmentVData = 0x19c8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpellShield_Buff {
            constexpr std::ptrdiff_t CCitadel_Modifier_Siphon_Bullets_Watcher = 0x1c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelBaseAbilityServerOnly {
            constexpr std::ptrdiff_t CCitadelBaseAbilityServerOnly = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHandleBase {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelRankedBadgeProp {
            constexpr std::ptrdiff_t CCitadelRankedBadgeProp = 0xf00; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierGarbageAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Familiar_Clone {
            constexpr std::ptrdiff_t client = 0x50108; // 
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
        // Fields: 0
        namespace CCitadel_Ability_VoidSphereVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HealthSwap {
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_ShockTarget2 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColdFrontAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_DisarmProcWatcherVData = 0x890; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelHeroLoader {
            constexpr std::ptrdiff_t client = 0x30108; // 
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
        // Fields: 2
        namespace CCitadel_Modifier_GraveStone {
            constexpr std::ptrdiff_t m_PrepareParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t CCitadel_Ability_NanoDash = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_AnthemAOE {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_AnthemAOE = 0x210; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Mystic_Regeneration {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_StickyBomb = 0x1670; // 
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
        // Fields: 1
        namespace CCitadel_Ability_NanoDash_VData {
            constexpr std::ptrdiff_t citadel_ability_magewalk = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_DamageOnHitGround {
            constexpr std::ptrdiff_t UnitFilterResult = 0x90101; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Idol_Return {
            constexpr std::ptrdiff_t CCitadel_Modifier_ScalingPowerUp = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DamageRecycler {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidAbility04 {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpinVData = 0x840; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_TangoTether_TetherVData {
            constexpr std::ptrdiff_t ability_trapper_fear = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityLashVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bull_LeapVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RescueBeamVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_AOERoot {
            constexpr std::ptrdiff_t CItemAOESilenceModifierVData = 0x770; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Hideout_TeleportVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shiv_KillingBlow_Leap {
            constexpr std::ptrdiff_t m_TetherParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_CatForm {
            constexpr std::ptrdiff_t client = 0x30108; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Fortuna_Ability04 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_WeaponUpgrade_BloodTribute {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x780; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ShadowStep {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        // Fields: 0
        namespace CAbilityHatTrickVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletShredImbue_Proc {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Out_Of_Combat_Health_Regen {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_TechCleaveVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_HeroPreview {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_BlackboardReference {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest05 {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Disarm {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Upgrade_AmmoScavenger {
            constexpr std::ptrdiff_t CCitadel_Modifier_CrushingFists_Watcher = 0x2c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelSpawnBlocker {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Trapper_Fear {
            constexpr std::ptrdiff_t m_CastOtherParticle = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
            constexpr std::ptrdiff_t m_ArmorModifier = 0x18f8; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_AnimalHexAreaVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_SpreadingFire {
            constexpr std::ptrdiff_t CAbilityLashVData = 0x1928; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EmpowerBulletVData {
        }

        // Parent: m_bStartedOnGround
        // Fields: 0
        namespace CCitadel_Ability_Shiv_KillingBlow {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityShivDeferDamageVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Burrow_VData {
            constexpr std::ptrdiff_t citadel_ability_chrono_swap = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Nano_PrimaryWeapon {
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
        namespace CCitadel_Modifier_HeldItemPickupAura {
            constexpr std::ptrdiff_t CCitadel_Modifier_HeldItemPickupAura = 0x110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DPSTracker {
            constexpr std::ptrdiff_t nGoldThreshold = 0x0; // int32
        }

        // Parent: m_flFogEndDistance
        // Fields: 1
        namespace C_GradientFog {
            constexpr std::ptrdiff_t C_GradientFog = 0x688; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Graf_Ability02 {
            constexpr std::ptrdiff_t CCitadel_Ability_RapidFire = 0x12d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Operative_Revelation {
            constexpr std::ptrdiff_t CModifier_Necro_Coffin = 0x140; // 
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
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_DemonCarbine {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Silenced {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_Bleeding_Bullets_Active {
            constexpr std::ptrdiff_t m_bIsManualReloading = 0x11d8; // bool
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EtherealBulletsBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HalloweenMask {
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityProperty_KineticCarbine {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemPickupAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_SpotlightVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Necro_GraveStone {
            constexpr std::ptrdiff_t Modifiers = 0x1; // m_hAbility
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
            constexpr std::ptrdiff_t CCitadel_Modifier_VisibleDuration = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_StreetBrawl_Phase_VData {
        }

        // Parent: m_PredNetUInt16Variables
        // Fields: 0
        namespace CAnimGraphNetworkedVariables {
        }

        // Parent: m_nHitIndex
        // Fields: 1
        namespace C_Citadel_BreakableProp {
            constexpr std::ptrdiff_t C_Citadel_BreakableProp = 0xce0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_ArmorUpgrade_MetalSkin {
            constexpr std::ptrdiff_t m_BerserkerSound = 0x750; // CSoundEventName
            constexpr std::ptrdiff_t m_ModifierActiveDisplay = 0x760; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_FireScarabs_HealthLoss {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_3 {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_BatBlinkVData = 0x1ba0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gravity_Lasso {
            constexpr std::ptrdiff_t CModifierPowerJumpVData = 0x840; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_DeathTax {
            constexpr std::ptrdiff_t Visuals = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Afterburn_DOT {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_FlameDashBurn {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Upgrade_ArcaneMedallion_VData {
        }

        // Parent: None
        // Fields: 2
        namespace C_Citadel_Destroyable_Building {
            constexpr std::ptrdiff_t client = 0x60108; // 
            constexpr std::ptrdiff_t m_strDamageDefault = 0x0; // CSoundEventName
        }

        // Parent: None
        // Fields: 1
        namespace CFilterModel {
            constexpr std::ptrdiff_t CFilterModel = 0x630; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundAreaEntityOrientedBox {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: CCitadel_Ability_Vandal_PillarVData
        // Fields: 0
        namespace CCitadel_Ability_Werewolf_RifleVData {
        }

        // Parent: CCitadelAbilityDruidAbility04
        // Fields: 0
        namespace CModifierDoormanHotelVictimVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RapidFire_AirJuggle {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Shadow_Strike_Invis {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SpiritBurnEnemyTracker {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_UIAbilityHudNotificaiton {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        namespace C_SoundOpvarSetPointEntity {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Bubble {
            constexpr std::ptrdiff_t m_ResistBuffParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CItem_GreaterWitheringWhip {
            constexpr std::ptrdiff_t CCitadel_Ability_ZipLine = 0x1cd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InMenu {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PermanentPickup {
            constexpr std::ptrdiff_t CCitadel_Modifier_PermanentPickup = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseGameBlackboard {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Boho_DamageShare_VData {
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
        // Fields: 1
        namespace CAbility_Drifter_Darkness {
            constexpr std::ptrdiff_t CCitadel_Ability_UltCombo = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_DoubleDaggerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Warden_HighAlert {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Opera_Ability03 {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CloakOfOpportunityWatcherVData {
        }

        // Parent: None
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

        // Parent: None
        // Fields: 1
        namespace C_Projectile_Airheart_FloatingBomb {
            constexpr std::ptrdiff_t CCitadel_Ability_Burrow = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierDruidInvisVData {
            constexpr std::ptrdiff_t citadel_druid_healing_tree = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_HealthSwapPrecast {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityBloodShardsVData {
            constexpr std::ptrdiff_t citadel_ability_hornet_chain = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RevealTarget {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Basic_HealthRegenVData {
        }

        // Parent: m_iszModelName
        // Fields: 1
        namespace C_CitadelItemPickup {
            constexpr std::ptrdiff_t C_CitadelItemPickup = 0xcf0; // 
        }

        // Parent: m_attachmentPointBoneSpace
        // Fields: 1
        namespace C_RagdollPropAttached {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_SpiritBubble {
        }

        // Parent: None
        // Fields: 0
        namespace C_ModelPointEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_PunkGoat_Tether {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_Flashbang {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_qPostTeleportAngles
        // Fields: 0
        namespace CAbility_Drifter_ShadowMark {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RiotProtocol {
            constexpr std::ptrdiff_t CCitadel_Ability_Wrecker_Salvage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wrecker_BoulderGrenade {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bebop_StickyBomb2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FissureWall {
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_Ability02 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheaterCurse {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_CatAnimating {
            constexpr std::ptrdiff_t CAbilityPunkgoatBlastedVData = 0x1968; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_AbilityLifeSteal {
            constexpr std::ptrdiff_t CCitadelModifierApexWatcherVData = 0x760; // 
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
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_ChannelTether = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Ability_Tier3Boss_AoEWaveVData {
            constexpr std::ptrdiff_t upgrade_damage_recycler = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_RampSlowModifierVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Base_BuildupVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_RectLight {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepAOEVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CrowdControl_Diminish_WatcherVData {
            constexpr std::ptrdiff_t CCitadelRecentDamage = 0x0; // 
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
        // Fields: 0
        namespace CAbilityRollingFireBallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ProjectMindVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_IncendiaryProjectile {
            constexpr std::ptrdiff_t C_Citadel_Ice_Path_Shard_Physics = 0x9f8; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_ClimbRopeSlow = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelPlayerPawnBase {
            constexpr std::ptrdiff_t client = 0x80108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_KothComebackBonuses {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Link {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_pathString
        // Fields: 1
        namespace CPathSimple {
            constexpr std::ptrdiff_t CNetworkedSequenceOperation = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Fear {
            constexpr std::ptrdiff_t CCitadel_Ability_VandalOverflow = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SleepDagger {
            constexpr std::ptrdiff_t C_Citadel_Projectile_DustStorm = 0x0; // 
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
            constexpr std::ptrdiff_t CItemSmokeBombPreCastModifierVData = 0x910; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_Objective_HealthGrowth {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Invis {
        }

        // Parent: None
        // Fields: 2
        namespace C_NPC_TrooperNeutralNodeMover {
            constexpr std::ptrdiff_t C_NPC_TrooperNeutralNodeMover = 0x1c10; // 
            constexpr std::ptrdiff_t C_NPC_MidBoss = 0x1bd0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Pickup_Item {
            constexpr std::ptrdiff_t client = 0x60108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Projectile_Doorman_Cart_Projectile {
            constexpr std::ptrdiff_t CAbilityBouncePadVData = 0x1858; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierTier2BossAoeWaveAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_FuncTrackTrain {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Fencer_ThrowBladeVData {
            constexpr std::ptrdiff_t ability_icebeam = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelFamiliarClone_MovementServices {
        }

        // Parent: m_vTargetPosition
        // Fields: 0
        namespace CCitadel_Ability_Mirage_Teleport {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityCadenceAnthemVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Vandal_PillarVData {
        }

        // Parent: m_flSnapAnglesBackTime
        // Fields: 1
        namespace CCitadel_Ability_GuidedArrow {
            constexpr std::ptrdiff_t CCitadel_Ability_HatTrick = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChainLightningVData {
            constexpr std::ptrdiff_t upgrade_frenzy = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_GuardianWard {
            constexpr std::ptrdiff_t CCitadel_Modifier_MutedVData = 0x9f0; // 
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
        // Fields: 1
        namespace C_EconWearable {
            constexpr std::ptrdiff_t C_EconWearable = 0x1020; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemMysticReverb {
        }

        // Parent: m_flWidth
        // Fields: 1
        namespace C_EnvDecal {
            constexpr std::ptrdiff_t client = 0x40108; // 
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
        namespace CCitadel_Ability_ImmobilizeTrap {
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
        // Fields: 0
        namespace CCitadel_Modifier_PatronsBlessingAura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Stasis_Bomb {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_HauntingSpirits {
            constexpr std::ptrdiff_t CCitadel_Ability_MageWalk = 0x0; // 
        }

        // Parent: m_bHasTetherTarget
        // Fields: 0
        namespace CCitadel_Ability_Necro_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Priest_CrossbowEquipped {
            constexpr std::ptrdiff_t m_flOuterSpeedScale = 0x830; // float32
        }

        // Parent: m_TornadoCastParticle
        // Fields: 0
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntityVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_EvasionVData {
        }

        // Parent: m_ExplosionParticle
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

        // Parent: m_nRenderMode
        // Fields: 1
        namespace C_Beam {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: m_Entity_hLightProbeTexture_SH2_DC
        // Fields: 1
        namespace C_EnvLightProbeVolume {
            constexpr std::ptrdiff_t C_EnvLightProbeVolume = 0x1680; // 
        }

        // Parent: m_nMarks
        // Fields: 0
        namespace AirheartLockOnTarget_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_PunkGoat_Blasted {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_CrossbowWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Revelation_Target {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Operative_Revelation_Target_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Warden_RiotProtocol_CastDelay {
            constexpr std::ptrdiff_t CCitadel_Ability_Vandal_Pillar = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_FissureWallVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ModDisruptorVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_LeechHealbane_Debuff {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_KothCashInVData {
        }

        // Parent: None
        // Fields: 0
        namespace CExplosionTypeData {
        }

        // Parent: m_NPCState
        // Fields: 1
        namespace C_AI_BaseNPC {
            constexpr std::ptrdiff_t client = 0x70108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FamiliarPrimaryWeaponVData {
        }

        // Parent: CAbility_Fathom_LurkersAmbush
        // Fields: 0
        namespace CAbility_Fathom_LurkersAmbush {
        }

        // Parent: Modifiers
        // Fields: 1
        namespace CCitadel_Ability_Fathom_Breach {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Base_DOT {
            constexpr std::ptrdiff_t CCitadel_CosmeticItem_VotingPoster = 0x1460; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Galvanic_Storm {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CNPC_TrooperNeutralNodeMoverVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Operative_Blindside_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbilityThumper3VData {
        }

        // Parent: m_RadianceModifier
        // Fields: 0
        namespace CAbilityTokamakRadianceVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Lockdown_BulletResist {
            constexpr std::ptrdiff_t CCitadel_Ability_Viper_DebuffDagger = 0x1670; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Spin {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SleepDagger_Asleep {
            constexpr std::ptrdiff_t CCitadel_Ability_Frank_PainAura = 0x13f0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_MysticShotVData {
            constexpr std::ptrdiff_t citadel_ability_zip_line = 0x0; // 
            constexpr std::ptrdiff_t citadel_ability_tier3boss_rocket_barrage = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData {
            constexpr std::ptrdiff_t upgrade_dps_aura = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Glitch {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierObscuredVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ShadowClone {
            constexpr std::ptrdiff_t NecroSkeleTargetTier_t = 0x8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_MagicianTurret {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_HeroTestOrbSpawner {
        }

        // Parent: None
        // Fields: 1
        namespace C_PhysMagnet {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable = 0x680; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_AutoCleanse {
        }

        // Parent: None
        // Fields: 1
        namespace C_Breakable {
            constexpr std::ptrdiff_t C_Breakable = 0x9a8; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_GarbageAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_WerewolfVData = 0x988; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Item_HealthNova {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BloodTribute {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_Colossus = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_WarpStone_Caster_VData {
            constexpr std::ptrdiff_t upgrade_high_impact_armor = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Warden_RiotProtocol {
        }

        // Parent: m_TrapModifier
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

        // Parent: C_NPC_TrooperNeutral
        // Fields: 0
        namespace C_NPC_TrooperNeutral {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterName {
            constexpr std::ptrdiff_t CFilterName = 0x630; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_GooseEgg {
            constexpr std::ptrdiff_t CCitadel_Modifier_Tier3_DamagePulse = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fencer_Ultimate_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_FamiliarAltWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Doorman_Bomb_VData {
            constexpr std::ptrdiff_t cadence_ability_crescendo = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_CrossbowWeapon {
        }

        // Parent: CAbility_Mirage_Tornado
        // Fields: 1
        namespace CAbility_Mirage_Tornado {
            constexpr std::ptrdiff_t C_CProjectile_Rutger_Rocket = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_SleepingVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_Lullaby {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Wrecker_Salvage {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StickyBombOnGround {
            constexpr std::ptrdiff_t CCitadel_Modifier_TargetPracticeDebuff = 0x2c0; // 
        }

        // Parent: m_eRollingState
        // Fields: 1
        namespace CCitadel_Ability_GooBowlingBall {
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_HeatSinks_Inherent = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_CQC_Proc = 0x278; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CQC_ProcVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpiritSnatch {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Push {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InvisVData {
        }

        // Parent: m_ragAngles
        // Fields: 1
        namespace C_RagdollProp {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_WeaponPowerForHealth {
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
            constexpr std::ptrdiff_t CCitadel_Ability_Tengu_AirLift = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FireBomb_Buff {
            constexpr std::ptrdiff_t m_DashImpactEffect = 0x1818; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
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
        // Fields: 1
        namespace C_Projectile_Necro_ZombieWall_Projectile {
            constexpr std::ptrdiff_t Sounds = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_RegeneratingBulletShield {
            constexpr std::ptrdiff_t CCitadel_Modifier_DetentionAmmo = 0x478; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CP_Capturer {
        }

        // Parent: None
        // Fields: 0
        namespace CModifierPowerGeneratorVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Vandal_Pillar {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Viper_DebuffDaggerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WreckingBall_Debuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bomber_ULT {
            constexpr std::ptrdiff_t CCitadel_Ability_Cadence_GrandFinale = 0x12d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_ProjectileTest04VData {
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_Bug {
            constexpr std::ptrdiff_t C_NPC_Neutral_Bug = 0xca8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_NPC_Neutral_Flying_Pigeon {
            constexpr std::ptrdiff_t C_NPC_Neutral_Flying_Pigeon = 0xcb0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_PickupItemSpawner {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CProjectile_Boho_BouncyProjectile {
            constexpr std::ptrdiff_t m_AnthemAOEModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Gravity_Lasso_Enemy {
            constexpr std::ptrdiff_t CCitadel_Modifier_Doorman_Hotel_Victim = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_FocusLens {
            constexpr std::ptrdiff_t CCitadel_Ability_Sprint = 0x0; // 
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
            constexpr std::ptrdiff_t CCitadel_Modifier_LifestrikeGauntlets = 0x378; // 
        }

        // Parent: None
        // Fields: 0
        namespace CItemSingleTargetStunVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_ItemAmmo {
            constexpr std::ptrdiff_t C_ItemAmmo = 0xcc8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_GraveStoneVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_DamageShare {
            constexpr std::ptrdiff_t C_Projectile_KnightCharge_Projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_DamageShareVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CopiedUlt_SpawnedEntity {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
            constexpr std::ptrdiff_t citadel_ability_shiv_dash = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Synth_PlasmaFlux_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifierRiotProtocolEnemyDebuffVData {
            constexpr std::ptrdiff_t wrecking_ball_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TetherNoConnection {
            constexpr std::ptrdiff_t CCitadel_Ability_RestorativeGoo = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_ComboBreakerVData {
            constexpr std::ptrdiff_t item_voting_poster = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WeaponPowerForHealth {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_RegenerativeArmorVData = 0x18c8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_T3Phase1VData {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_CallInfo {
        }

        // Parent: m_bAnimGraphUpdateEnabled
        // Fields: 1
        namespace CBaseAnimGraph {
            constexpr std::ptrdiff_t CBaseAnimGraph = 0xca8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_TangoTether_Trigger {
            constexpr std::ptrdiff_t CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_Petrify {
            constexpr std::ptrdiff_t CCitadel_Ability_Werewolf_NetShot = 0x0; // 
        }

        // Parent: CCitadelBaseTriggerAbility
        // Fields: 1
        namespace CCitadelBaseTriggerAbility {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fencer_Lunge_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Doorman_Bomb_Debuff {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Priest_SilenceBombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChargePullEnemy {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_TimeWall_Effect {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RocketBarrage {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Afterburn_DOT_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GooseEggPassiveGold {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HeroUpgradeBonuses {
            constexpr std::ptrdiff_t ModifierValueDisplayUnits_t = 0x10404; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace C_TriggerNeutralShield {
            constexpr std::ptrdiff_t C_TriggerNeutralShield = 0xa78; // 
            constexpr std::ptrdiff_t m_nNumEnemyPlayers = 0xa78; // int8
        }

        // Parent: None
        // Fields: 0
        namespace C_LightEntity {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_LuggageDragVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_AnimalHexArea {
            constexpr std::ptrdiff_t CCitadel_Modifier_CopyUlt = 0x1b0; // 
        }

        // Parent: m_DebuffParticle
        // Fields: 0
        namespace CCitadel_Modifier_PillarVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Viper_Venom {
            constexpr std::ptrdiff_t client = 0x401ff; // 
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
        // Fields: 0
        namespace CModifier_SiphonBullets_RestoreHealth {
        }

        // Parent: None
        // Fields: 1
        namespace C_LocalTempEntity {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Projectile_BookwormGun {
            constexpr std::ptrdiff_t CCitadelAbilityDruidHelicopterSeedsVData = 0x1818; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticalPianoAura {
        }

        // Parent: CCitadel_Upgrade_MagicCarpet
        // Fields: 1
        namespace CCitadel_Upgrade_MagicCarpet {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierAura_Cylinder {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifierVData_BaseAura {
            constexpr std::ptrdiff_t point_modifier_thinker = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Familiar_AttachVData {
            constexpr std::ptrdiff_t ability_familiar_clone = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Boho_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_FissureWallVData = 0x130; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Bookworm_DragonFireVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_ShockFullyCharged {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_IceDomeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Stomp {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PulseGrenade_TimeSlow {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_EnchantedHolsters_Buff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Weapon_BossTier3 {
            constexpr std::ptrdiff_t CCitadel_UtilityUpgrade_DebuffImmunity = 0x11d8; // 
        }

        // Parent: m_strEnemySkin
        // Fields: 1
        namespace C_Citadel_DynamicProp {
            constexpr std::ptrdiff_t client = 0x80110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierAura_Default {
            constexpr std::ptrdiff_t CitadelAbilityHUDElementButtonHint_t = 0x60; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PointEntity {
            constexpr std::ptrdiff_t C_PointEntity = 0x5f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WerewolfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_ImmobilizeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Operative_UmbrellaManeuver_VData {
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
            constexpr std::ptrdiff_t CCitadel_Ability_Crackshot = 0x15e0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_AerialAssualtVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CanDamageTier3Phase2 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BulletArmorReduction {
            constexpr std::ptrdiff_t m_flBulletResistancePctMin = 0x750; // float32
        }

        // Parent: None
        // Fields: 0
        namespace C_SingleplayRules {
        }

        // Parent: None
        // Fields: 1
        namespace CLogicalEntity {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierItemPickupTimerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_ZombieWall {
        }

        // Parent: Modifiers
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

        // Parent: m_ImpactParticle
        // Fields: 0
        namespace CModifierPsychicLiftVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CQC_Proc {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_HealingPulse_Tracker {
            constexpr std::ptrdiff_t CCitadel_Modifier_Camouflage_Invis = 0x570; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ColdFrontAOE_VData {
            constexpr std::ptrdiff_t upgrade_ablative_coat = 0x0; // 
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
        namespace C_CitadelGameRulesProxy {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupAura {
            constexpr std::ptrdiff_t client = 0x501ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PrecipitationBlocker {
            constexpr std::ptrdiff_t C_BaseFlex = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Airheart_Ult {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_MageWalkVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Intimidated {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierStormCloudVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Item_SmokeBomb_PreCast {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_BurstFire_Actuator {
            constexpr std::ptrdiff_t CCitadel_Modifier_Passive_Cloak = 0xc0; // 
        }

        // Parent: m_vecAbilities
        // Fields: 0
        namespace AbilityResource_t {
        }

        // Parent: m_bFreezePeriod
        // Fields: 1
        namespace CCitadelTrooperMinimap {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_SoundOpvarSetPathCornerEntity {
            constexpr std::ptrdiff_t C_SoundOpvarSetPathCornerEntity = 0x610; // 
        }

        // Parent: m_hLastWeapon
        // Fields: 0
        namespace CPlayer_WeaponServices {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HideoutIntro {
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Drifter_Darkness_VData {
            constexpr std::ptrdiff_t ability_airheart_ult = 0x0; // 
        }

        // Parent: m_SelfModifier
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_AnthemBuffVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tengu_Urn {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ThrowSand {
            constexpr std::ptrdiff_t ELeapState_t = 0x90101; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_ApplyModifierOnDamageTaken {
            constexpr std::ptrdiff_t CCitadel_Modifier_Backdoor_Protection = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
            constexpr std::ptrdiff_t citadel_base_ability = 0x0; // 
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
        namespace CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
            constexpr std::ptrdiff_t CCitadel_Modifier_ZiplineKnockdownImmune = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Unstick {
            constexpr std::ptrdiff_t CCitadel_Modifier_Unstick = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_TriggerVolume {
            constexpr std::ptrdiff_t client = 0x10008; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Fortuna_Ability02 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Perched_Predator {
            constexpr std::ptrdiff_t CModifier_Mirage_Tornado_Evasion = 0x1c0; // 
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
        // Fields: 1
        namespace C_Citadel_Pickup_Currency {
            constexpr std::ptrdiff_t C_Citadel_Pickup_Currency = 0xde8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Rutger_ForceField_Aura {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_SilenceContraptions {
            constexpr std::ptrdiff_t CCitadel_Ability_Charged_Bomb = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Fencer_Ultimate_Caster {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x880; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_StaticChargeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Backstabber_VData {
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
        // Fields: 0
        namespace CCitadel_MobileResupply {
        }

        // Parent: None
        // Fields: 0
        namespace C_DynamicPropAlias_prop_dynamic_override {
        }

        // Parent: None
        // Fields: 1
        namespace CEnvSoundscapeTriggerable {
            constexpr std::ptrdiff_t CEnvSoundscapeTriggerable = 0x680; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_FearVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Necro_Ghoul_Explode {
            constexpr std::ptrdiff_t CCitadel_Modifier_Necro_Ghoul_Explode = 0x450; // 
        }

        // Parent: m_bHoldingAbilityButton
        // Fields: 0
        namespace CCitadel_Ability_PunkGoat_Ult {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Thumper_Ability_2 {
            constexpr std::ptrdiff_t CCitadel_Ability_Viscous_Telepunch = 0x1908; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ClusterGrenade_Debuff {
            constexpr std::ptrdiff_t CModifier_Mirage_FireBeetles_Debuff_VData = 0x910; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_DamageAmp {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Chrono_KineticCarbine {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_CloakingDevice_Active_Ambush {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_NewYears_Fireworks {
            constexpr std::ptrdiff_t CCitadel_NewYears_Fireworks = 0xfd0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hero_Testing_Damage_Aura {
            constexpr std::ptrdiff_t CModifierKnockdownVData = 0x8d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ItemPickupAuraTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_ItemPickupAuraTarget = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelProjectile {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_LeapingVData {
            constexpr std::ptrdiff_t ability_vampirebat_batcloud = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Necro_CoffinVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Necro_SpawnZombies_AreaVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Bookworm_KnightChargeVData {
            constexpr std::ptrdiff_t ability_druid_plant_something = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Drifter_PrimaryWeapon {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Operative_Blindside {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_MagicBolt {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Fathom_ReefdwellerHarpoon_VData {
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
        // Fields: 1
        namespace CCitadel_Ability_CrowdControl {
            constexpr std::ptrdiff_t CCitadel_Ability_Tokamak_HeatSinks = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_EtherealBullets_BulletBuff {
            constexpr std::ptrdiff_t CModifier_SiphonBullets_RestoreHealth = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FocusLens_Damage {
            constexpr std::ptrdiff_t client = 0x401ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3Boss_LaserBeam {
            constexpr std::ptrdiff_t CCitadel_Modifier_FuryTrance = 0x1c0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierTier3BossLaserBeamVData {
        }

        // Parent: m_bJumped
        // Fields: 1
        namespace CCitadel_Ability_Jump {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_DamageResistance {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ConeWaveProjectile {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReloadSpeedVData {
        }

        // Parent: m_eAliveState
        // Fields: 1
        namespace C_NPC_Boss_Tier3 {
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: m_flDistanceToTravel
        // Fields: 0
        namespace CCitadel_Ability_Priest_BearTrapVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Frank_Zombie {
            constexpr std::ptrdiff_t client = 0x301ff; // 
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
        // Fields: 0
        namespace CCitadel_Item_SpiritSap_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DebuffImmunity {
            constexpr std::ptrdiff_t AbilityPropertyInfo_t = 0x20; // 
        }

        // Parent: None
        // Fields: 1
        namespace CSkyboxReference {
            constexpr std::ptrdiff_t client = 0x100ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_RestorativeLocket {
            constexpr std::ptrdiff_t CCitadel_Ability_Tier3Boss_RocketBarrage = 0x16e8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_TechUpgrade_CorpseExplosion {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Mirage_Tornado_Lift_VData {
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
            constexpr std::ptrdiff_t CCitadel_Ability_Boho_Ability01 = 0x11d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_WeaponUpgrade_BloodTributeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Shrink_Ray {
            constexpr std::ptrdiff_t CCitadel_Modifier_ArcticBlast_Freeze = 0x140; // 
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
        // Fields: 0
        namespace C_CitadelBoomerangProjectile {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Hornet_Chain_Connection {
            constexpr std::ptrdiff_t CCitadel_Modifier_Familiar_Barrier = 0xc8; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_Citadel_Projectile_Guided_Arrow {
        }

        // Parent: CCitadel_CosmeticItem_VotingPoster
        // Fields: 1
        namespace CCitadel_CosmeticItem_VotingPoster {
            constexpr std::ptrdiff_t CCitadel_Modifier_Glitch = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CItem_WitheringWhip {
            constexpr std::ptrdiff_t CCitadel_ArmorUpgrade_AblativeCoat = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_RejuvTrackingProjectile {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CFilterClass {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PointCameraVFOV {
            constexpr std::ptrdiff_t C_PointCameraVFOV = 0x658; // 
        }

        // Parent: m_Resolution
        // Fields: 1
        namespace C_PointCamera {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Magician_EscapeVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_HighAlert {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Nano_CatFormVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WreckerScrapBlastDebuff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Chrono_PulseGrenade_VData {
            constexpr std::ptrdiff_t ability_boho_ability02 = 0x0; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_FocusLens_Damage_VData = 0x910; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SlowVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_NearDeathFX {
            constexpr std::ptrdiff_t CCitadel_Modifier_SpeedBoost = 0xc8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Operative_Revelation_Aura {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_CelestialGuidance {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPathWithDynamicNodes {
            constexpr std::ptrdiff_t client = 0x40110; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_SettingSun {
            constexpr std::ptrdiff_t CCitadel_Modifier_Werewolf_TrackingBombVData = 0x838; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_MobileResupply {
            constexpr std::ptrdiff_t CCitadel_Ability_Uppercut = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Wraith_RapidFire {
            constexpr std::ptrdiff_t CCitadel_Ability_VampireBat_StealLife = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ChainLightningEffectVData {
            constexpr std::ptrdiff_t item_projectile_test_05 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace C_AirheartStickyBombInWorld {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_T3Boss_AoeWaveAura {
            constexpr std::ptrdiff_t Visuals = 0x0; // 
            constexpr std::ptrdiff_t m_GlowParticle = 0x750; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 0
        namespace CBaseFilter {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Frank_PainAura_TargetVData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Synth_Pulse_Escape {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_ShadowPulse {
            constexpr std::ptrdiff_t CCitadel_Modifier_Priest_Tether = 0x178; // 
        }

        // Parent: m_CastParticle
        // Fields: 0
        namespace CCitadel_Ability_Wraith_RapidFireVData {
        }

        // Parent: None
        // Fields: 1
        namespace CModifier_Item_DPS_Aura_Active {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseObservableBoolExpression_t {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_GuidedArrow_OwlModel {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Rocketeer4 = 0x1208; // 
        }

        // Parent: None
        // Fields: 1
        namespace C_PointEntityAlias_info_target_portrait_root {
            constexpr std::ptrdiff_t C_PointEntityAlias_info_target_portrait_root = 0x5f0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_DebuffReducer {
            constexpr std::ptrdiff_t CCitadel_Modifier_UltimateBurst_DelayedEffect = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Knockdown {
            constexpr std::ptrdiff_t CCitadel_Modifier_DamageResistanceVData = 0x760; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PowerUp_Gun {
            constexpr std::ptrdiff_t CCitadel_Modifier_PowerUp_Gun = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_MovingToAttach {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_SpinVData {
        }

        // Parent: m_vecInitialPosition
        // Fields: 1
        namespace CCitadel_Ability_FissureWall {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Fervor_Bonuses {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Upgrade_SpiritSnatch_Buff {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StreetBrawlTrooper {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: m_unTraceID
        // Fields: 0
        namespace C_PlayerSprayDecal {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FlameDashGroundAura {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Tier3BossInvuln {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Magician_AnimalHex_HexArea {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Tokamak_HotShot {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_Gun_Spikes {
            constexpr std::ptrdiff_t CCitadel_Modifier_Cadence_Gun_Spikes = 0x1c0; // 
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
        // Fields: 0
        namespace CCitadel_Modifier_Aerial_Assault_Watcher {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_WeaponUpgrade_HeadshotDamage_VData {
            constexpr std::ptrdiff_t upgrade_shadow_step = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Upgrade_OverdriveClip_VData {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_SiphonBullets_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingTech_ProcVData {
            constexpr std::ptrdiff_t upgrade_tech_damage_pulse = 0x0; // 
        }

        // Parent: CCitadel_Modifier_Hideout_Teleport
        // Fields: 2
        namespace CCitadelHideoutInteractableTrigger {
            constexpr std::ptrdiff_t CCitadelItemKothSpawner = 0x0; // 
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CNPC_Boss_Tier2VData {
            constexpr std::ptrdiff_t point_clientui_world_panel = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Metal {
            constexpr std::ptrdiff_t CCitadel_Modifier_Metal = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Punkgoat_PrimaryWeapon {
            constexpr std::ptrdiff_t CCitadel_Modifier_MagicBeam = 0x2e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_FealtyTarget {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_TangoTether_TetherReceiver {
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_3 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_WreckerSalvage {
            constexpr std::ptrdiff_t CCitadel_Ability_SettingSun = 0x0; // 
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
            constexpr std::ptrdiff_t CustomCrosshairSettings_t = 0x44; // 
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
        // Fields: 1
        namespace C_NPC_Boss_Tier2_Sidelanes {
            constexpr std::ptrdiff_t C_NPC_Boss_Tier2_Sidelanes = 0x1c98; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ItemPunchable_GoldVData {
        }

        // Parent: m_vecBaseLocationY
        // Fields: 1
        namespace C_CitadelTeam {
            constexpr std::ptrdiff_t client = 0x90108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Infested {
            constexpr std::ptrdiff_t CCitadel_Modifier_Infested = 0x240; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_Kickflip_SucessSelf {
            constexpr std::ptrdiff_t CCitadel_Ability_WreckerTeleport = 0x0; // 
        }

        // Parent: m_SwingEndTime
        // Fields: 1
        namespace CCitadel_Ability_SkyRunner_SwingLine {
            constexpr std::ptrdiff_t CCitadel_Modifier_GoatGoingUpVData = 0x790; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Nano_PredatoryStatue {
            constexpr std::ptrdiff_t CCitadel_Ability_Nano_CatForm = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_MysticShot {
            constexpr std::ptrdiff_t CCitadel_Ability_TrooperZipLine = 0x1cd8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ColossusActive_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoTutorialPoint {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Familiar_ReplicatedBarrier {
        }

        // Parent: None
        // Fields: 0
        namespace CModifier_Drifter_Darkness_Target_BoundaryUnit {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VampireBat_BatCloud_SelfVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Viper_StackingDebuff {
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
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_CheaterCurseVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_LightSpotEntity {
            constexpr std::ptrdiff_t C_InfoVisibilityBox = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_ArmorUpgrade_VexBarrier {
            constexpr std::ptrdiff_t CCitadel_Modifier_EtherealBulletsVData = 0x880; // 
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
        // Fields: 1
        namespace CCitadel_Modifier_Rutger_CheatDeath {
            constexpr std::ptrdiff_t CCitadel_Ability_Swan_Ability04 = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_RapidFire {
            constexpr std::ptrdiff_t CCitadel_Ability_RapidFire = 0x12d8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_HornetSting {
            constexpr std::ptrdiff_t client = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TrooperZipLine {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BulletResilience {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_AOE_Tech_ShieldVData {
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
        namespace CCitadel_Projectile_HookBlade {
        }

        // Parent: m_nAttachment
        // Fields: 1
        namespace C_Sprite {
            constexpr std::ptrdiff_t AmmoIndex_t = 0x1; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_GoatGoingUpVData {
        }

        // Parent: None
        // Fields: 1
        namespace CAbilityLashFlogVData {
            constexpr std::ptrdiff_t ability_fencer_lunge = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HollowPoint_ProcVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_Citadel_Projectile_Bebop_Hook {
            constexpr std::ptrdiff_t client = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_Charge_Mastery {
            constexpr std::ptrdiff_t CCitadel_WeaponUpgrade_FireRateAura = 0x0; // 
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Item_AOE_Tech_Shield {
            constexpr std::ptrdiff_t CAbilitySprintVData = 0x1910; // 
            constexpr std::ptrdiff_t p = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CModifierHoldingGoldenIdolVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Ability_Werewolf_Rifle {
            constexpr std::ptrdiff_t LocalPlayerOwnerAndObserversExclusive = 0x0; // MPropertyStartGroup
            constexpr std::ptrdiff_t CCitadel_Ability_Trapper_SpiderJar_VData = 0x19e8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_PunkgoatBlastedActive {
            constexpr std::ptrdiff_t CCitadel_Modifier_Fathom_ScaldingSpray_Target = 0x2c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CAbility_Synth_Barrage_VData {
            constexpr std::ptrdiff_t ability_magician_cloneturret_trigger = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Dust_Storm {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_GooGrenade {
            constexpr std::ptrdiff_t m_DebuffModifier = 0x1818; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityChargedBombVData {
            constexpr std::ptrdiff_t cadence_ability_lullaby = 0x0; // 
        }

        // Parent: overlay_vars
        // Fields: 0
        namespace C_PhysicsProp {
        }

        // Parent: None
        // Fields: 1
        namespace CFilterTeam {
            constexpr std::ptrdiff_t CFilterTeam = 0x630; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelModifierAura_Cone {
            constexpr std::ptrdiff_t CCitadelModifierAura_Cone = 0x110; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAura {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelModifierAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_CitadelZiplinePath {
            constexpr std::ptrdiff_t C_CitadelZiplinePath = 0x708; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Graf_Ability01 {
            constexpr std::ptrdiff_t CCitadel_Modifier_AfterburnWatcherVData = 0x7c0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadelAbilityDruidBasePlant {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Ability02 = 0x13d8; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Chrono_TimeWall_EffectVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_WeaponPowerForHealthVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_MysticalPianoVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_ArmorUpgrade_CloakingDeviceActive {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_CheatDeath {
        }

        // Parent: CCitadelBaseLockonAbility
        // Fields: 0
        namespace CCitadelBaseLockonAbility {
        }

        // Parent: None
        // Fields: 1
        namespace CInfoInteraction {
            constexpr std::ptrdiff_t client = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Cadence_Crescendo {
            constexpr std::ptrdiff_t CCitadel_Ability_Airheart_Rocketeer3 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_HealthRegenAuraVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_UltimateBurst_DelayedEffect {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_AmmoScavenger {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StreetBrawl_Phase {
            constexpr std::ptrdiff_t CCitadel_Modifier_StreetBrawl_Phase = 0xc0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PreventHealing {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_BaseEventProc {
        }

        // Parent: None
        // Fields: 0
        namespace CBasePlayerWeaponVData {
        }

        // Parent: None
        // Fields: 0
        namespace C_TrackedProjectile_Synth_PlasmaFlux {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Drifter_PrimaryWeapon_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Gunslinger_SpreadingFireVData {
            constexpr std::ptrdiff_t ability_empower_bullet = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_HauntWatcherVData {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_ShieldGuy_Ability01 {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Upgrade_OverdriveClip {
            constexpr std::ptrdiff_t CCitadel_Modifier_RescueBeamVData = 0x910; // 
        }

        // Parent: None
        // Fields: 1
        namespace CInfoParticleTarget {
            constexpr std::ptrdiff_t CInfoParticleTarget = 0x5f0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Skyrunner_MagicBeamVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Boho_DoubleHitBuff {
            constexpr std::ptrdiff_t CAbility_Drifter_BloodBlast_VData = 0x1af8; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Magician_AnimalCurse {
            constexpr std::ptrdiff_t CAbility_Rutger_RocketLauncher = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff {
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
        // Fields: 2
        namespace CCitadel_Ability_ShieldGuy_Ability04 {
            constexpr std::ptrdiff_t m_SpreadPenaltyScaleCurve = 0x19c0; // CPiecewiseCurve
            constexpr std::ptrdiff_t m_flRicochetBulletSpeed = 0x1a00; // float32
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VoidSphere {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_StompDebuff {
            constexpr std::ptrdiff_t CCitadel_Modifier_StompDebuff = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Burning {
            constexpr std::ptrdiff_t CCitadel_Item_HealthRegenAura = 0x1358; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CritShot {
            constexpr std::ptrdiff_t CCitadel_Modifier_BubbleVData = 0xaf0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_DPS_Aura_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
            constexpr std::ptrdiff_t m_eAbilityType != EAbilityType_Cosmetic = 0x2; // 
        }

        // Parent: None
        // Fields: 0
        namespace CScaleFunctionAbilityPropertyBase {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadelPlayerClipComponent {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_VacuumAura {
        }

        // Parent: None
        // Fields: 0
        namespace CItemAOESilenceAuraVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Item_SelfBuffModifier {
            constexpr std::ptrdiff_t CCitadel_Modifier_Dazed = 0xc0; // 
        }

        // Parent: m_bLit
        // Fields: 1
        namespace C_PointClientUIWorldPanel {
            constexpr std::ptrdiff_t C_PointClientUIWorldPanel = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_Priest_Immobilize {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Priest_WeaponSwapVData {
            constexpr std::ptrdiff_t projectile_stomp_projectile = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Mirage_SandPhantom_VData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Cadence_SilenceContraptionsVData {
            constexpr std::ptrdiff_t ability_druid_plant_branch_wall = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_RescueBeamVData {
        }

        // Parent: None
        // Fields: 1
        namespace C_EntityFlame {
            constexpr std::ptrdiff_t C_BaseCombatCharacter = 0x0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_UtilityUpgrade_AOESmokeBomb {
            constexpr std::ptrdiff_t CCitadel_Modifier_ArcticBlast_Freeze_VData = 0x750; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_ThermalDetonator_Thinker {
            constexpr std::ptrdiff_t CCitadel_Modifier_Shrink_Ray = 0x140; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_Werewolf_TransformationWatcher {
            constexpr std::ptrdiff_t CCitadel_Ability_Targetdummy_2 = 0x0; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Boho_PrimaryWeaponVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Frank_SelfZap {
            constexpr std::ptrdiff_t m_SlowModifier = 0x750; // CEmbeddedSubclass<CCitadelModifier>
        }

        // Parent: None
        // Fields: 0
        namespace CAbility_Rutger_RocketLauncher {
        }

        // Parent: m_flHeatTime
        // Fields: 1
        namespace CCitadel_Ability_Tokamak_HeatSinks_Inherent {
            constexpr std::ptrdiff_t client = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_TeleportToGangster {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_LashGrappleTarget {
            constexpr std::ptrdiff_t CCitadel_Modifier_Hornet_Sting = 0x248; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_PowerSurgeVData {
        }

        // Parent: None
        // Fields: 2
        namespace CCitadel_Modifier_FullSpectrum {
            constexpr std::ptrdiff_t m_StimPakModifier = 0x18b8; // CEmbeddedSubclass<CCitadelModifier>
            constexpr std::ptrdiff_t m_CastParticle = 0x18c8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_SlowingTech_Proc {
            constexpr std::ptrdiff_t CCitadel_Modifier_HealingPulse_Tracker = 0xc0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CinematicIntro_Shrine {
            constexpr std::ptrdiff_t m_eTrooperType = 0x1348; // ENeutralTrooperType
        }

        // Parent: m_iTeamNum
        // Fields: 0
        namespace CBasePlayerController {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_VampireBat_StealLife {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Ability_Spinning_BladeVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_CardToss_StackingResistShred {
            constexpr std::ptrdiff_t CCitadel_Modifier_Thumper_Ability_2 = 0x2d0; // 
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Ability_Teleport {
            constexpr std::ptrdiff_t CCitadel_Modifier_FocusLens_Damage = 0x148; // 
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Modifier_InfiniteMagazineActive {
        }

        // Parent: None
        // Fields: 0
        namespace CCitadel_Item_Stasis_BombVData {
        }

        // Parent: None
        // Fields: 1
        namespace CCitadel_Modifier_DebugScale {
            constexpr std::ptrdiff_t CCitadel_Modifier_DebugScale = 0xc8; // 
        }

    } // namespace client_dll
} // namespace schemas
} // namespace deadlock_dumper
