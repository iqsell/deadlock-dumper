// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod server_dll {

    // Parent: CModelPointEntity
    pub mod CPointWorldText {
        pub const m_messageText: usize = 0x780;
        pub const m_FontName: usize = 0x980;
        pub const m_BackgroundMaterialName: usize = 0x9c0;
        pub const m_bEnabled: usize = 0xa00;
        pub const m_bFullbright: usize = 0xa01;
        pub const m_flWorldUnitsPerPx: usize = 0xa04;
        pub const m_flFontSize: usize = 0xa08;
        pub const m_flDepthOffset: usize = 0xa0c;
        pub const m_bDrawBackground: usize = 0xa10;
        pub const m_flBackgroundBorderWidth: usize = 0xa14;
        pub const m_flBackgroundBorderHeight: usize = 0xa18;
        pub const m_flBackgroundWorldToUV: usize = 0xa1c;
        pub const m_Color: usize = 0xa20;
        pub const m_nJustifyHorizontal: usize = 0xa24;
        pub const m_nJustifyVertical: usize = 0xa28;
        pub const m_nReorientMode: usize = 0xa2c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_BatSwarm {
        pub const m_iBonusBats: usize = 0xf70;
        pub const m_iBatCountOnCast: usize = 0xf74;
        pub const m_flChannelTime: usize = 0xf78;
        pub const m_bPauseChannel: usize = 0xf7c;
        pub const m_flLastRemainingChannelTime: usize = 0xf80;
        pub const m_flNextBatTime: usize = 0xf90;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Operative_Revelation_Caster_VData {
        pub const m_AuraModifier: usize = 0x750;
        pub const m_ShieldParticle: usize = 0x760;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_ShadowClone {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Cadence_Anthem {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Viper_SlideBuffVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: None
    pub mod CIcePathShardGenerator {
        pub const m_icePathModelDesc: usize = 0x0;
        pub const m_hBaseModel: usize = 0x38;
        pub const m_icePathSurfModelDesc: usize = 0x40;
        pub const m_hSurfModel: usize = 0x78;
        pub const m_flRadius: usize = 0x80;
        pub const m_vecPreviousShard: usize = 0x88;
        pub const m_vecPreviousShardOrigin: usize = 0xa0;
        pub const m_vecPreviousPreviousShardOrigin: usize = 0xac;
        pub const m_vecUnitCirclePoints: usize = 0xb8;
        pub const m_vPrevFrontEdgeVerts: usize = 0xd0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VoidSphere {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_NullificationAuraVData {
        pub const m_AOEModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InFountain {
    }

    // Parent: CCitadelSoundStackFieldOBB
    pub mod CCitadelBaseMusicOBB {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_Pickup {
        pub const m_CCitadelMinimapComponent: usize = 0xa90;
        pub const m_bActive: usize = 0xab0;
        pub const m_bInteractive: usize = 0xab1;
        pub const m_vVacuumStartPos: usize = 0xab4;
        pub const m_vInitialVacuumVel: usize = 0xac0;
        pub const m_hVacuumTarget: usize = 0xacc;
        pub const m_vVacuumPos: usize = 0xae0;
        pub const m_flVacuumStartTime: usize = 0xaec;
        pub const m_vImpactVel: usize = 0xaf4;
        pub const m_vImpactPos: usize = 0xb00;
        pub const m_flImpactTime: usize = 0xb0c;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelModifierAura_CylinderVData {
        pub const m_flAuraTargetingCylinderUpOffset: usize = 0x7a8;
        pub const m_flAuraTargetingCylinderHalfHeight: usize = 0x7ac;
    }

    // Parent: CCitadel_Ability_BaseHeldItemVData
    pub mod CCitadel_Ability_GoldenIdolVData {
        pub const m_OnKnockedOffHolderParticle: usize = 0x1900;
        pub const m_OnKnockedOffUrnParticle: usize = 0x19e0;
        pub const m_OnOverheldDamageParticle: usize = 0x1ac0;
        pub const m_OnExpireParticle: usize = 0x1ba0;
        pub const m_strUrnMeleeDropSound: usize = 0x1c80;
        pub const m_strUrnOverheldDamageSound: usize = 0x1c90;
        pub const m_strUrnDroppedOffSound: usize = 0x1ca0;
        pub const m_DropoffTimerModifier: usize = 0x1cb0;
        pub const m_HoldingIdolModifier: usize = 0x1cc0;
        pub const m_flRevealTime: usize = 0x1cd0;
        pub const m_iComebackBounty: usize = 0x1cd4;
        pub const m_flDamageTickRate: usize = 0x1cd8;
        pub const m_flMaxHealthDamage: usize = 0x1cdc;
        pub const m_flTimeToDamage: usize = 0x1ce0;
        pub const m_flTimeToRunBackInstantly: usize = 0x1ce4;
        pub const m_flHeldTimeRadius: usize = 0x1ce8;
        pub const m_flJuggleTimeAdd: usize = 0x1cec;
    }

    // Parent: CPointEntity
    pub mod CAmbientGeneric {
        pub const m_radius: usize = 0x4a0;
        pub const m_flMaxRadius: usize = 0x4a4;
        pub const m_iSoundLevel: usize = 0x4a8;
        pub const m_dpv: usize = 0x4ac;
        pub const m_fActive: usize = 0x510;
        pub const m_fLooping: usize = 0x511;
        pub const m_iszSound: usize = 0x518;
        pub const m_sSourceEntName: usize = 0x520;
        pub const m_hSoundSource: usize = 0x528;
        pub const m_nSoundSourceEntIndex: usize = 0x52c;
    }

    // Parent: CPointEntity
    pub mod CEnvEntityMaker {
        pub const m_vecEntityMins: usize = 0x4a0;
        pub const m_vecEntityMaxs: usize = 0x4ac;
        pub const m_hCurrentInstance: usize = 0x4b8;
        pub const m_hCurrentBlocker: usize = 0x4bc;
        pub const m_vecBlockerOrigin: usize = 0x4c0;
        pub const m_angPostSpawnDirection: usize = 0x4cc;
        pub const m_flPostSpawnDirectionVariance: usize = 0x4d8;
        pub const m_flPostSpawnSpeed: usize = 0x4dc;
        pub const m_bPostSpawnUseAngles: usize = 0x4e0;
        pub const m_iszTemplate: usize = 0x4e8;
        pub const m_pOutputOnSpawned: usize = 0x4f0;
        pub const m_pOutputOnFailedSpawn: usize = 0x508;
    }

    // Parent: CPulseGraphInstance_ServerEntity
    pub mod CPulseGraphInstance_GameBlackboard {
    }

    // Parent: CBaseEntity
    pub mod CPointEntity {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Unicorn_PrimaryWeapon {
        pub const m_flActivatePressTime: usize = 0x1438;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fortuna_Ability01 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim {
        pub const m_flLastProcTime: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Thumper_BulletWatcherVData {
        pub const m_ExplodeParticle: usize = 0x750;
        pub const m_ExplodeSound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_SalvoBulletVData {
        pub const m_DebuffModifier: usize = 0x880;
        pub const m_ExplosionParticle: usize = 0x890;
        pub const m_ExplosionVictimParticle: usize = 0x970;
        pub const m_SalvoWeaponParticle: usize = 0xa50;
        pub const m_ShotVictimSound: usize = 0xb30;
        pub const m_ShotConfirmationSound: usize = 0xb40;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Burrow {
        pub const m_bInGround: usize = 0x13f0;
        pub const m_flLastDamageTime: usize = 0x13f4;
        pub const m_SpinEndTime: usize = 0x13f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Viscous_Telepunch {
        pub const m_vecTeleportPosition: usize = 0x1670;
        pub const m_vecTeleportPositionNormal: usize = 0x167c;
        pub const m_eTelepunchState: usize = 0x1688;
        pub const m_flNextStateTime: usize = 0x168c;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_Backstabber_Watcher_VData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const flDotResultMin: usize = 0x760;
        pub const m_strHitConfirmSound: usize = 0x768;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_EtherealBullets_Watcher {
        pub const m_bProcNextHit: usize = 0x38c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BulletResistReductionStack {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MidBossAggroEnemy {
        pub const m_flLastActiveTime: usize = 0xd0;
    }

    // Parent: CCitadel_Pickup_VData
    pub mod CCitadel_Pickup_Currency_VData {
        pub const m_Currency: usize = 0x9d8;
        pub const m_nCurrencyAmount: usize = 0x9dc;
        pub const m_bPlayCurrencySound: usize = 0x9e0;
        pub const m_strLabelName: usize = 0x9e8;
    }

    // Parent: CBaseFilter
    pub mod CFilterEnemy {
        pub const m_iszEnemyName: usize = 0x4d8;
        pub const m_flRadius: usize = 0x4e0;
        pub const m_flOuterRadius: usize = 0x4e4;
        pub const m_nMaxSquadmatesPerEnemy: usize = 0x4e8;
        pub const m_iszPlayerName: usize = 0x4f0;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_SingleTargetStun {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_ShockTarget {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Cadence_GrandFinale {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Gunslinger_DemonMark {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Killing_Blow_Glow {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy {
        pub const m_bAddedStasisParticle: usize = 0xd0;
        pub const m_vHoldOffset: usize = 0xd4;
        pub const m_flLastTouchTime: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VoidSphereVData {
        pub const m_TeleportStartParticle: usize = 0x750;
        pub const m_TeleportEndParticle: usize = 0x830;
        pub const m_TeleportTrailParticle: usize = 0x910;
        pub const m_TeleportModelParticle: usize = 0x9f0;
        pub const m_flPreTeleportDuration: usize = 0xad0;
        pub const m_TeleportVerticalOffsetCurve: usize = 0xad8;
        pub const m_strAmbientLoopingLocalPlayerSound: usize = 0xb18;
        pub const m_BuffModifier: usize = 0xb28;
    }

    // Parent: CitadelItemVData
    pub mod CItemHauntingScreamVData {
        pub const m_DebuffModifier: usize = 0x18b8;
        pub const m_strHitConfirmSound: usize = 0x18c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FocusLens_Damage_VData {
        pub const m_DamageTakenParticle: usize = 0x750;
        pub const m_FinalDamageParticle: usize = 0x830;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_DivinersKevlar_VData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_PrecastSpiritBuffModifier: usize = 0x18c8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_FullSpectrumVData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_BonusDamageModifier: usize = 0x790;
    }

    // Parent: CPulseCell_WaitForCursorsWithTagBase
    pub mod CPulseCell_WaitForCursorsWithTag {
        pub const m_bTagSelfWhenComplete: usize = 0x98;
        pub const m_nDesiredKillPriority: usize = 0x9c;
    }

    // Parent: CFuncTrackChange
    pub mod CFuncTrackAuto {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_BulletArmorReductionAura {
    }

    // Parent: CPointEntity
    pub mod CAI_VolumetricEventSensor {
        pub const m_bDisabled: usize = 0x4b0;
        pub const m_nEventTypeMask: usize = 0x4b8;
        pub const m_flSensitivity: usize = 0x4c0;
        pub const m_flMaxRange: usize = 0x4c4;
        pub const m_iszListenFilter: usize = 0x4c8;
        pub const m_hListenFilter: usize = 0x4d0;
        pub const m_hSensedEvents: usize = 0x4d8;
        pub const m_OnEventStarted: usize = 0x4f0;
        pub const m_OnEventEnded: usize = 0x520;
        pub const m_OnAllEventsEnded: usize = 0x540;
    }

    // Parent: CBaseEntity
    pub mod CScriptedSequence {
        pub const m_iszEntry: usize = 0x4a0;
        pub const m_iszPreIdle: usize = 0x4a8;
        pub const m_iszPlay: usize = 0x4b0;
        pub const m_iszPostIdle: usize = 0x4b8;
        pub const m_iszModifierToAddOnPlay: usize = 0x4c0;
        pub const m_iszNextScript: usize = 0x4c8;
        pub const m_iszEntity: usize = 0x4d0;
        pub const m_iszSyncGroup: usize = 0x4d8;
        pub const m_nMoveTo: usize = 0x4e0;
        pub const m_nMoveToGait: usize = 0x4e4;
        pub const m_nHeldWeaponBehavior: usize = 0x4e8;
        pub const m_nForcedCrouchState: usize = 0x4ec;
        pub const m_bIsPlayingPreIdle: usize = 0x4f0;
        pub const m_bIsPlayingEntry: usize = 0x4f1;
        pub const m_bIsPlayingAction: usize = 0x4f2;
        pub const m_bIsPlayingPostIdle: usize = 0x4f3;
        pub const m_bDontRotateOther: usize = 0x4f4;
        pub const m_bIsRepeatable: usize = 0x4f5;
        pub const m_bShouldLeaveCorpse: usize = 0x4f6;
        pub const m_bStartOnSpawn: usize = 0x4f7;
        pub const m_bDisallowInterrupts: usize = 0x4f8;
        pub const m_bCanOverrideNPCState: usize = 0x4f9;
        pub const m_bDontTeleportAtEnd: usize = 0x4fa;
        pub const m_bHighPriority: usize = 0x4fb;
        pub const m_bHideDebugComplaints: usize = 0x4fc;
        pub const m_bContinueOnDeath: usize = 0x4fd;
        pub const m_bLoopPreIdleSequence: usize = 0x4fe;
        pub const m_bLoopActionSequence: usize = 0x4ff;
        pub const m_bLoopPostIdleSequence: usize = 0x500;
        pub const m_bSynchPostIdles: usize = 0x501;
        pub const m_bIgnoreLookAt: usize = 0x502;
        pub const m_bIgnoreGravity: usize = 0x503;
        pub const m_bDisableNPCCollisions: usize = 0x504;
        pub const m_bKeepAnimgraphLockedPost: usize = 0x505;
        pub const m_bDontAddModifiers: usize = 0x506;
        pub const m_bDisableAimingWhileMoving: usize = 0x507;
        pub const m_bIgnoreRotation: usize = 0x508;
        pub const m_flRadius: usize = 0x50c;
        pub const m_flRepeat: usize = 0x510;
        pub const m_flPlayAnimFadeInTime: usize = 0x514;
        pub const m_flMoveInterpTime: usize = 0x518;
        pub const m_flAngRate: usize = 0x51c;
        pub const m_flMoveSpeed: usize = 0x520;
        pub const m_bWaitUntilMoveCompletesToStartAnimation: usize = 0x524;
        pub const m_nNotReadySequenceCount: usize = 0x528;
        pub const m_startTime: usize = 0x52c;
        pub const m_bWaitForBeginSequence: usize = 0x530;
        pub const m_saved_effects: usize = 0x534;
        pub const m_savedFlags: usize = 0x538;
        pub const m_savedCollisionGroup: usize = 0x53c;
        pub const m_bInterruptable: usize = 0x540;
        pub const m_sequenceStarted: usize = 0x541;
        pub const m_bPositionRelativeToOtherEntity: usize = 0x542;
        pub const m_hTargetEnt: usize = 0x544;
        pub const m_hNextCine: usize = 0x548;
        pub const m_bThinking: usize = 0x54c;
        pub const m_bInitiatedSelfDelete: usize = 0x54d;
        pub const m_bIsTeleportingDueToMoveTo: usize = 0x54e;
        pub const m_bAllowCustomInterruptConditions: usize = 0x54f;
        pub const m_hForcedTarget: usize = 0x550;
        pub const m_bDontCancelOtherSequences: usize = 0x554;
        pub const m_bForceSynch: usize = 0x555;
        pub const m_bPreventUpdateYawOnFinish: usize = 0x556;
        pub const m_bEnsureOnNavmeshOnFinish: usize = 0x557;
        pub const m_onDeathBehavior: usize = 0x558;
        pub const m_ConflictResponse: usize = 0x55c;
        pub const m_OnBeginSequence: usize = 0x560;
        pub const m_OnActionStartOrLoop: usize = 0x578;
        pub const m_OnEndSequence: usize = 0x590;
        pub const m_OnPostIdleEndSequence: usize = 0x5a8;
        pub const m_OnCancelSequence: usize = 0x5c0;
        pub const m_OnCancelFailedSequence: usize = 0x5d8;
        pub const m_OnScriptEvent: usize = 0x5f0;
        pub const m_matOtherToMain: usize = 0x6b0;
        pub const m_hInteractionMainEntity: usize = 0x6d0;
        pub const m_iPlayerDeathBehavior: usize = 0x6d4;
        pub const m_bSkipFadeIn: usize = 0x6d8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Trapper_PoisonJar {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Gunslinger_DemonMarkVData {
        pub const m_ProcEffect: usize = 0x750;
        pub const m_BuffModifier: usize = 0x830;
        pub const m_SlowModifier: usize = 0x840;
        pub const m_CasterMarkTriggerSound: usize = 0x850;
        pub const m_VictimMarkTriggerSound: usize = 0x860;
    }

    // Parent: CCitadel_Modifier_StickyBombAttachedVData
    pub mod CCitadel_Modifier_StickyBombOnGroundVData {
        pub const m_flGroundOffset: usize = 0xb18;
        pub const m_BombParticle: usize = 0xb20;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_CloakingDevice_Active_Ambush_VData {
        pub const m_InvisRevealedParticle: usize = 0x750;
        pub const m_AmbushParticle: usize = 0x830;
        pub const m_strActivateAmbushSound: usize = 0x910;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SpiritSnatch_VData {
        pub const m_BuffModifier: usize = 0x780;
        pub const m_DebuffModifier: usize = 0x790;
        pub const m_SwingParticle: usize = 0x7a0;
        pub const m_HitParticle: usize = 0x880;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CTier3BossAbility {
    }

    // Parent: CBaseEntity
    pub mod CCitadelLocalPlayerRankedBadgeProp {
    }

    // Parent: None
    pub mod CAI_BaseNPCAPI {
    }

    // Parent: CBaseTrigger
    pub mod CFogTrigger {
        pub const m_fog: usize = 0x8e0;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerIcePathVolume {
    }

    // Parent: CCitadelProjectile
    pub mod CDoormanBombProjectile {
    }

    // Parent: CCitadel_Projectile_BatSwarmProjectile
    pub mod CCitadel_Projectile_BatSwarmExtraProjectile {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifierSleepBombAuraVData {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_DustStorm {
        pub const m_cTicksNoMovement: usize = 0x860;
        pub const m_DustStormAbility: usize = 0x864;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_NPCAbility_Shield {
    }

    // Parent: CPointEntity
    pub mod CInfoTeleportDestination {
    }

    // Parent: CPointEntity
    pub mod CPointBroadcastClientCommand {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SwingLine_SwingingVData {
        pub const m_PullSpeedScaleCurve: usize = 0x750;
        pub const m_flMass: usize = 0x790;
        pub const m_flBodyForwardForce: usize = 0x794;
        pub const m_flCameraForwardForce: usize = 0x798;
        pub const m_flPullForce: usize = 0x79c;
        pub const m_flGravityForce: usize = 0x7a0;
        pub const m_flDampingForce: usize = 0x7a4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Trapper_WebWallVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_SilenceModifier: usize = 0x1828;
        pub const m_WebWallParticle: usize = 0x1838;
        pub const m_WebWallDestroyedParticle: usize = 0x1918;
        pub const m_WebWallHitParticle: usize = 0x19f8;
        pub const m_strWebWallCreated: usize = 0x1ad8;
        pub const m_strWebWallDestroyed: usize = 0x1ae8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_SilenceContraptionsDebuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Burrow {
        pub const m_pUndergroundTrigger: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierLashFlogDebuffVData {
        pub const m_FlogDebuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NullificationAuraAOE {
        pub const m_vecDamagedTargets: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Passive_CloakVData {
        pub const m_InvisModifier: usize = 0x750;
    }

    // Parent: CCitadel_Item_BubbleVData
    pub mod CCitadel_Item_PrismBlastVData {
        pub const m_flBeamRotateSpeed: usize = 0x19b8;
        pub const m_flTickRate: usize = 0x19bc;
        pub const m_flOscilateRate: usize = 0x19c0;
        pub const m_flOscilateMaxPitch: usize = 0x19c4;
        pub const m_BeamParticle: usize = 0x19c8;
        pub const m_BeamParticleLocal: usize = 0x1aa8;
        pub const m_BeamHitParticle: usize = 0x1b88;
        pub const m_strLaserLoopSound: usize = 0x1c68;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_Tier2Boss_AoEWave {
    }

    // Parent: CCitadel_Announcer_Base
    pub mod CCitadel_Announcer {
    }

    // Parent: CBaseEntity
    pub mod CPhysicsSpring {
        pub const m_pSpringJoint: usize = 0x4a0;
        pub const m_flFrequency: usize = 0x4a8;
        pub const m_flDampingRatio: usize = 0x4ac;
        pub const m_flRestLength: usize = 0x4b0;
        pub const m_nameAttachStart: usize = 0x4b8;
        pub const m_nameAttachEnd: usize = 0x4c0;
        pub const m_start: usize = 0x4c8;
        pub const m_end: usize = 0x4d4;
        pub const m_teleportTick: usize = 0x4e0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatGoingUp {
        pub const m_bAtTargetElevation: usize = 0xd0;
        pub const m_vKnockAwayVector: usize = 0xd4;
        pub const m_flTargetElevation: usize = 0x260;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Mirage_FireBeetles_VData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x18f8;
        pub const m_StatStolenDebuffModifier: usize = 0x1908;
        pub const m_strHitConfirmSound: usize = 0x1918;
        pub const m_strWorldImpactSound: usize = 0x1928;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGangActivityVData {
        pub const m_AbilitySwap: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ViperVenom {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SelfVacuum {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Shivas_Bracelet_WatcherVData {
        pub const m_FreezeModifier: usize = 0x750;
        pub const m_ImmuneModifier: usize = 0x760;
        pub const m_ProcParticle: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Healbane_Debuff {
    }

    // Parent: CBaseTrigger
    pub mod CCitadelTriggerCapturePoint {
        pub const m_CCitadelMinimapComponent: usize = 0x8e0;
        pub const m_OnBecomeCapturable: usize = 0x900;
        pub const m_OnFullyCaptured: usize = 0x918;
        pub const m_iszGroupName: usize = 0x938;
        pub const m_nEnabledParticle: usize = 0x940;
        pub const m_nPreEnableFX: usize = 0x944;
        pub const m_hEscort: usize = 0x10c8;
        pub const m_tQueuedEnableTime: usize = 0x10cc;
        pub const m_flCaptureProgress: usize = 0x10d0;
        pub const m_nCaptureProgressOwner: usize = 0x10d4;
        pub const m_nActivelyCapturingTeam: usize = 0x10d8;
        pub const m_nActiveCapturers: usize = 0x10dc;
        pub const m_nEnableState: usize = 0x10e0;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_WeaponEater {
        pub const m_nWeaponPower: usize = 0x1178;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_KothTrooperBuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HideoutIntroVData {
        pub const m_preIntroCamera: usize = 0x750;
        pub const m_introCamera: usize = 0x760;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierVData_SetMoveType {
        pub const m_nMoveType: usize = 0x750;
    }

    // Parent: CNodeEnt
    pub mod CNodeEnt_InfoNodeHint {
    }

    // Parent: CPointEntity
    pub mod CEnvMuzzleFlash {
        pub const m_flScale: usize = 0x4a0;
        pub const m_iszParentAttachment: usize = 0x4a8;
    }

    // Parent: None
    pub mod CEconItemAttribute {
        pub const m_iAttributeDefinitionIndex: usize = 0x30;
        pub const m_flValue: usize = 0x34;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Drifter_ShadowMark_VData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_TeleportTrailParticle: usize = 0x18f8;
        pub const m_TargetModifier: usize = 0x19d8;
        pub const m_TargetTeleportModifier: usize = 0x19e8;
        pub const m_BuffModifier: usize = 0x19f8;
        pub const m_PostTeleportModifier: usize = 0x1a08;
        pub const m_strHitHeroSound: usize = 0x1a18;
        pub const m_strHitNPCSound: usize = 0x1a28;
        pub const m_cameraSequenceTeleport: usize = 0x1a38;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Disruptive_Charge {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ShivDaggerVData {
        pub const m_DamageDebuffModifier: usize = 0x1818;
        pub const m_SlowDebuffModifier: usize = 0x1828;
        pub const m_DaggerStuckParticle: usize = 0x1838;
        pub const m_DaggerImpactParticle: usize = 0x1918;
        pub const m_DaggerExplodeParticle: usize = 0x19f8;
        pub const m_strDaggerHitSound: usize = 0x1ad8;
        pub const m_strDaggerExplodeSound: usize = 0x1ae8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_CatForm {
        pub const m_bIsInCatform: usize = 0xf9c;
        pub const m_flLastDamageTime: usize = 0xfa0;
        pub const m_flTransformStartTime: usize = 0xfa4;
        pub const m_flTransformEndTime: usize = 0xfa8;
        pub const m_flStoredDamageAmp: usize = 0xfac;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_IceGrenade {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_InfernalResilience_MeleeVData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_SwingParticle: usize = 0x790;
        pub const m_HitParticle: usize = 0x870;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_ApexCombat_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SilenceProc_DebuffVData {
        pub const m_SilenceModifier: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_TechDamagePulseVData {
        pub const m_PulseParticle: usize = 0x18b8;
        pub const m_TargetParticle: usize = 0x1998;
        pub const m_strPulseTickSound: usize = 0x1a78;
        pub const m_iMaxTargets: usize = 0x1a88;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier2Boss_AoEWaveVData {
        pub const m_InitialExplodeParticle: usize = 0x1818;
        pub const m_ChargeParticle: usize = 0x18f8;
        pub const m_strAOEImpactSound: usize = 0x19d8;
        pub const m_strAOEAnnounceSound: usize = 0x19e8;
        pub const m_AoEModifier: usize = 0x19f8;
        pub const m_flCastCompleteToAttackTime: usize = 0x1a08;
    }

    // Parent: CCitadelModifier
    pub mod CCitadelModifierProjectilePitchingLoopSoundThinker {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CheckNearbyPlayerParry {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TinyCharacter {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_HealingSpiritScale {
    }

    // Parent: None
    pub mod CBaseTriggerAPI {
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_Boss_Tier2 {
        pub const m_vecStartingPosition: usize = 0x17e0;
        pub const m_iLane: usize = 0x17ec;
        pub const m_hTargetedEnemy: usize = 0x17f8;
        pub const m_flFadeOutStart: usize = 0x17fc;
        pub const m_flFadeOutEnd: usize = 0x1800;
        pub const m_flLastWeakpointHitTime: usize = 0x1804;
        pub const m_vecElectricBeamLookTarget: usize = 0x1854;
        pub const m_nElectricBeamCasts: usize = 0x1860;
        pub const m_eventOnBossKilled: usize = 0x1870;
        pub const m_strBossEntityName: usize = 0x1890;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelShopTunnelTrigger {
        pub const m_tModifier: usize = 0x8e0;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncTrainControls {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Unicorn_PrismaticGuardVData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_CastParticle: usize = 0x1838;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_AirLiftExplodingAllyVData {
        pub const m_strExplodeEffect: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HookSelf {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IceGrenadeDebuff {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_AfterburnWatcherVData {
        pub const m_AfterburnDotModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
        pub const m_strAfterburnHitSound: usize = 0x7a0;
        pub const m_flLightMeleeBuildUp: usize = 0x7b0;
        pub const m_flHeavyMeleeBuildUp: usize = 0x7b4;
        pub const m_flLightMeleeRefresh: usize = 0x7b8;
        pub const m_flHeavyMeleeRefresh: usize = 0x7bc;
    }

    // Parent: CBaseAnimGraph
    pub mod CNPC_Neutral_Bug {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_HideOutTargetSpawnerVData {
        pub const m_flThinkRate: usize = 0x28;
        pub const m_flFirstThink: usize = 0x2c;
        pub const m_flPigeonMaxCount: usize = 0x30;
        pub const m_flBallMaxDist: usize = 0x34;
        pub const m_flBallGoalThresHold: usize = 0x38;
        pub const m_BallScored: usize = 0x40;
        pub const m_BallSpawned: usize = 0x120;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Unicorn_DazzlingOrbNextTarget {
        pub const hProjectile: usize = 0xd0;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Fencer_PrimaryWeapon {
        pub const m_iCurrentShotCount: usize = 0x1198;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ViperHookBladeVData {
        pub const m_SlowDebuffModifier: usize = 0x1818;
        pub const m_DaggerStuckParticle: usize = 0x1828;
        pub const m_DaggerImpactParticle: usize = 0x1908;
        pub const m_DaggerExplodeParticle: usize = 0x19e8;
        pub const m_strDaggerHitSound: usize = 0x1ac8;
        pub const m_strDaggerExplodeSound: usize = 0x1ad8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ThrowSandDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DeathTax {
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_ElectricSlippersVData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_strSlideLoopSound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_PredatorPrecision {
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_MagicCarpet_Summon {
    }

    // Parent: CTonemapController2
    pub mod CTonemapController2Alias_env_tonemap_controller2 {
    }

    // Parent: CNodeEnt
    pub mod CNodeEnt_InfoNodeAir {
    }

    // Parent: CPointEntity
    pub mod CPathTrack {
        pub const m_pnext: usize = 0x4a0;
        pub const m_pprevious: usize = 0x4a8;
        pub const m_paltpath: usize = 0x4b0;
        pub const m_flRadius: usize = 0x4b8;
        pub const m_length: usize = 0x4bc;
        pub const m_altName: usize = 0x4c0;
        pub const m_nIterVal: usize = 0x4c8;
        pub const m_eOrientationType: usize = 0x4cc;
        pub const m_OnPass: usize = 0x4d0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Fencer_Ultimate_Target_VData {
        pub const m_flDamageTimeOffset: usize = 0x750;
        pub const m_flEndTimeScaleForFlinch: usize = 0x754;
        pub const m_DashImpactEffect: usize = 0x758;
        pub const m_strDashHitEnemy: usize = 0x838;
        pub const m_strTimerSound: usize = 0x848;
        pub const m_sSlashSound: usize = 0x858;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPunkgoatBlastedVData {
        pub const m_BlastedModifier: usize = 0x1818;
        pub const m_BlastedPassiveModifier: usize = 0x1828;
        pub const m_ShredModifier: usize = 0x1838;
        pub const m_HealthModifier: usize = 0x1848;
        pub const m_HealthDisplayModifier: usize = 0x1858;
        pub const m_MeleeReloadFX: usize = 0x1868;
        pub const m_strMeleeReloadSoundLight: usize = 0x1948;
        pub const m_strMeleeReloadSoundHeavy: usize = 0x1958;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_ClusterGrenadeVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x18f8;
        pub const m_ExplodeSound: usize = 0x1908;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_TargetPractice {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_RocketBarrageVData {
        pub const m_BarrageModifier: usize = 0x1818;
        pub const m_MoveSlowModifier: usize = 0x1828;
        pub const m_ImpactParticle: usize = 0x1838;
        pub const m_strExplodeSound: usize = 0x1918;
        pub const m_strBarrageSound: usize = 0x1928;
        pub const m_strBarrageLoop: usize = 0x1938;
        pub const m_cameraSequenceSelected: usize = 0x1948;
        pub const m_flMoveSpeedReductionPct: usize = 0x19d0;
        pub const m_flHeightTestDistance: usize = 0x19d4;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_APRoundsVData {
    }

    // Parent: CEntityComponent
    pub mod CCitadelHeroComponent {
        pub const m_spawnedHero: usize = 0x18;
        pub const m_loadingHero: usize = 0x28;
        pub const m_nNoSpawnHeroID: usize = 0x38;
    }

    // Parent: None
    pub mod CPulseCell_Base {
        pub const m_nEditorNodeID: usize = 0x8;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerItemShopSafeZone {
        pub const m_OnContested: usize = 0x900;
        pub const m_OnNotContested: usize = 0x918;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CCitadel_Item_SpiritSap {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRestorativeGooVData {
        pub const m_RestorativeGooEndParticle: usize = 0x750;
        pub const m_ModelName: usize = 0x830;
        pub const m_SelfCubeModelName: usize = 0x910;
        pub const m_BreakoutProgressBarModifier: usize = 0x9f0;
        pub const m_PostCubeBuffModifier: usize = 0xa00;
        pub const m_NonTargetLoopingSound: usize = 0xa10;
        pub const m_TargetLoopingSound: usize = 0xa20;
        pub const m_LightMeleeImpact: usize = 0xa30;
        pub const m_HeavyMeleeImpact: usize = 0xa40;
        pub const m_flBreakoutProectionTime: usize = 0xa50;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPsychicLiftVData {
        pub const m_LiftModifier: usize = 0x1818;
        pub const m_TargetParticle: usize = 0x1828;
        pub const m_AoEPreviewParticle: usize = 0x1908;
        pub const m_DirectionalBeamParticle: usize = 0x19e8;
        pub const m_TargetCastSound: usize = 0x1ac8;
        pub const m_HitConfirmSound: usize = 0x1ad8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VeilWalkerWatcher {
        pub const m_vPreviousPos: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CatapultDamageWatcherVData {
        pub const m_StunModifier: usize = 0x750;
        pub const m_flDamageHealthPct: usize = 0x760;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerProximity {
        pub const m_hMeasureTarget: usize = 0x8e0;
        pub const m_iszMeasureTarget: usize = 0x8e8;
        pub const m_fRadius: usize = 0x8f0;
        pub const m_nTouchers: usize = 0x8f4;
        pub const m_NearestEntityDistance: usize = 0x8f8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_SiphonBullets {
        pub const m_iStacks: usize = 0xf78;
    }

    // Parent: CPointEntity
    pub mod CTankTrainAI {
        pub const m_hTrain: usize = 0x4a0;
        pub const m_hTargetEntity: usize = 0x4a4;
        pub const m_soundPlaying: usize = 0x4a8;
        pub const m_startSoundName: usize = 0x4c0;
        pub const m_engineSoundName: usize = 0x4c8;
        pub const m_movementSoundName: usize = 0x4d0;
        pub const m_targetEntityName: usize = 0x4d8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Familiar_AsleepVData {
        pub const m_WakeUpDamageParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LuggageDrag {
        pub const m_flRelativeDist: usize = 0xd0;
        pub const m_flCartSpeed: usize = 0xd4;
        pub const m_qRelativeOffset: usize = 0xd8;
        pub const m_hDragger: usize = 0xe4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_SmokeGrenade {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityDustStormVData {
        pub const m_DustStormAura: usize = 0x1818;
        pub const m_GrenadeTrailModifier: usize = 0x1828;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Wrecker_BoulderGrenadeVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_SummonParticle: usize = 0x18f8;
        pub const m_SummonReadyParticle: usize = 0x19d8;
        pub const m_SummonParticleAttachment: usize = 0x1ab8;
        pub const m_ExplodeSound: usize = 0x1ac0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_IceDome {
        pub const m_flDomeStartTime: usize = 0xff0;
        pub const m_flDomeEndTime: usize = 0xff4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CrushingFists_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Infuser {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HealEntitiyVData {
        pub const m_flMaxHealthHeal: usize = 0x750;
        pub const m_flFlatHeal: usize = 0x754;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Objective_Regen {
        pub const m_flLastAttackedTime: usize = 0xd0;
    }

    // Parent: CRulePointEntity
    pub mod CGameText {
        pub const m_iszMessage: usize = 0x790;
        pub const m_textParms: usize = 0x798;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_CloakingDevice {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_PhantomStrike {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_SummonDecay {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Doorman_Cart_VData {
        pub const m_flTraceRadius: usize = 0x1818;
        pub const m_flDistanceAboveGround: usize = 0x181c;
        pub const m_flFloatDownRate: usize = 0x1820;
        pub const m_flClimbHeight: usize = 0x1824;
        pub const m_flStepDownHeight: usize = 0x1828;
        pub const m_flMinPitch: usize = 0x182c;
        pub const m_flMaxPitch: usize = 0x1830;
        pub const m_flJumpHeight: usize = 0x1834;
        pub const m_flQAngleSmoothRate: usize = 0x1838;
        pub const m_flCartSpeedFast: usize = 0x183c;
        pub const m_flGroundHitPitchCurve: usize = 0x1840;
        pub const m_flGroundHitRollCurve: usize = 0x1880;
        pub const m_flGroundHitYawCurve: usize = 0x18c0;
        pub const m_ModifierDrag: usize = 0x1900;
        pub const m_CartExpireSound: usize = 0x1910;
        pub const m_CartHitSound: usize = 0x1920;
        pub const m_CartHitAllySound: usize = 0x1930;
        pub const m_strWallSlamSound: usize = 0x1940;
        pub const m_FriendlyCastProjectileTrailParticle: usize = 0x1950;
        pub const m_FriendlyCastProjectileModel: usize = 0x1a30;
        pub const m_CartCastParticle: usize = 0x1b10;
        pub const m_WallImpactParticle: usize = 0x1bf0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bookworm_KnightCharge {
        pub const m_vecHitUnits: usize = 0xf70;
        pub const m_bAffectedAnyTargets: usize = 0x1c24;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RocketBarrageVolley {
        pub const m_flFiringInterval: usize = 0xd0;
        pub const m_flCastTime: usize = 0xd4;
        pub const m_flNextRocketTime: usize = 0xd8;
        pub const m_nGrenadesLeft: usize = 0xdc;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHornetChainVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_strExplodeSound: usize = 0x18f8;
        pub const m_ChainModifier: usize = 0x1908;
        pub const m_DisarmModifier: usize = 0x1918;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_AfterburnWatcher {
    }

    // Parent: CCitadel_Modifier_HeadshotBoosterWatcher
    pub mod CCitadel_Modifier_HeadhunterWatcher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HealBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MetalSkin {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ActiveDisarm_SpiritSteal_VData {
        pub const m_SpiritStealParticle: usize = 0x750;
    }

    // Parent: None
    pub mod PlayOfTheGamePlaybackData_t {
        pub const m_vecParticipants: usize = 0x8;
        pub const m_vecTriggers: usize = 0x20;
        pub const m_tBeginTimeWithPrewarm: usize = 0x88;
        pub const m_tEndTime: usize = 0x8c;
    }

    // Parent: CPulse_OutflowConnection
    pub mod CPulse_ResumePoint {
    }

    // Parent: CBaseAnimGraph
    pub mod CBaseFlex {
        pub const m_flexWeight: usize = 0xa90;
        pub const m_vLookTargetPosition: usize = 0xaa8;
        pub const m_flLastFlexAnimationTime: usize = 0xad8;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerFan {
        pub const m_vFanOriginOffset: usize = 0x8e0;
        pub const m_vDirection: usize = 0x8ec;
        pub const m_bPushTowardsInfoTarget: usize = 0x8f8;
        pub const m_bPushAwayFromInfoTarget: usize = 0x8f9;
        pub const m_qNoiseDelta: usize = 0x900;
        pub const m_hInfoFan: usize = 0x910;
        pub const m_flForce: usize = 0x914;
        pub const m_bFalloff: usize = 0x918;
        pub const m_RampTimer: usize = 0x920;
        pub const m_vFanOriginWS: usize = 0x938;
        pub const m_vFanOriginLS: usize = 0x944;
        pub const m_vFanEndLS: usize = 0x950;
        pub const m_vNoiseDirectionTarget: usize = 0x95c;
        pub const m_iszInfoFan: usize = 0x968;
        pub const m_flRopeForceScale: usize = 0x970;
        pub const m_flParticleForceScale: usize = 0x974;
        pub const m_flPlayerForce: usize = 0x978;
        pub const m_bPlayerWindblock: usize = 0x97c;
        pub const m_flNPCForce: usize = 0x980;
        pub const m_flRampTime: usize = 0x984;
        pub const m_fNoiseDegrees: usize = 0x988;
        pub const m_fNoiseSpeed: usize = 0x98c;
        pub const m_bPushPlayer: usize = 0x990;
        pub const m_bRampDown: usize = 0x991;
        pub const m_nManagerFanIdx: usize = 0x994;
    }

    // Parent: CPointEntity
    pub mod CInfoPortalLink {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_PersonalRejuvenator {
        pub const m_bActivated: usize = 0xf78;
        pub const m_nFxIndex: usize = 0xf7c;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierTier3BossInvulnVData {
        pub const m_AmberShieldParticle: usize = 0x750;
        pub const m_SapphShieldParticle: usize = 0x830;
        pub const m_flShieldRadius: usize = 0x910;
    }

    // Parent: CPhysHinge
    pub mod CPhysHingeAlias_phys_hinge_local {
    }

    // Parent: CLogicalEntity
    pub mod CLogicCase {
        pub const m_nCase: usize = 0x4a0;
        pub const m_nShuffleCases: usize = 0x5a0;
        pub const m_nLastShuffleCase: usize = 0x5a4;
        pub const m_uchShuffleCaseMap: usize = 0x5a8;
        pub const m_OnCase: usize = 0x5c8;
        pub const m_OnDefault: usize = 0x8c8;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoMidBossSpawn {
        pub const m_iCoverGroupID: usize = 0x4a0;
        pub const m_iszSquadName: usize = 0x4a8;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CNPC_Neutral_Hideout_CatVData {
        pub const m_flCollisionRadius: usize = 0x28;
        pub const m_flTraceRadius: usize = 0x2c;
        pub const m_flTraceDistancePerIteration: usize = 0x30;
        pub const m_iMaxTraceIterations: usize = 0x34;
        pub const m_flStepUpHeight: usize = 0x38;
        pub const m_flParticleRadius: usize = 0x3c;
        pub const m_flLifeTime: usize = 0x40;
        pub const m_iHitsToDisappear: usize = 0x48;
        pub const m_flRespawnTime: usize = 0x50;
        pub const m_flModelScale: usize = 0x54;
        pub const m_flWalkSpeed: usize = 0x5c;
        pub const m_flRunSpeed: usize = 0x60;
        pub const m_flRunDistanceMax: usize = 0x64;
        pub const m_flDropDownRate: usize = 0x6c;
        pub const m_flDistTolerance: usize = 0x70;
        pub const m_flValidDirectionDist: usize = 0x74;
        pub const m_flMoveAwayTime: usize = 0x78;
        pub const m_flChaseDistanceStart: usize = 0x80;
        pub const m_flChaseDistanceEnd: usize = 0x84;
        pub const m_flChaseDistTolerance: usize = 0x88;
        pub const m_flChaseAtTarget: usize = 0x8c;
        pub const m_flBallSpeedMin: usize = 0x90;
        pub const m_hModel: usize = 0x98;
        pub const m_SpawnParticle: usize = 0x178;
        pub const m_AmbientParticle: usize = 0x258;
        pub const m_DestroyParticle: usize = 0x338;
        pub const m_strDestroySound: usize = 0x418;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Priest_BearTrap_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Dust_Storm_Thrown {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Astro_Rifle {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_CounterspellWatcher {
        pub const m_bSpellBlockActivated: usize = 0xd0;
        pub const m_bSpellBlocked: usize = 0xd1;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_KnockbackAura {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_AbilityRechargeTime {
    }

    // Parent: CCitadel_Modifier_ScalingPowerUp
    pub mod CCitadel_Modifier_PowerUp_Casting {
    }

    // Parent: CPointEntity
    pub mod CInfoGameEventProxy {
        pub const m_iszEventName: usize = 0x4a0;
        pub const m_flRange: usize = 0x4a8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_Bola {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Viper_VenomVData {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityLashDownStrikeVData {
        pub const m_TargetPreviewParticle: usize = 0x1818;
        pub const m_strGroundCastAnimGraphParam: usize = 0x18f8;
        pub const m_strAirCastAnimGraphParam: usize = 0x1900;
        pub const m_StompParticle: usize = 0x1908;
        pub const m_StompLineParticle: usize = 0x19e8;
        pub const m_StompLineObstructedParticle: usize = 0x1ac8;
        pub const m_StompImpactParticle: usize = 0x1ba8;
        pub const m_StompExplosionSound: usize = 0x1c88;
        pub const m_StompEnemyImpactSound: usize = 0x1c98;
        pub const m_strFallCollideImpactSound: usize = 0x1ca8;
        pub const m_DownStrikeModifier: usize = 0x1cb8;
        pub const m_ImpactModifier: usize = 0x1cc8;
        pub const m_DragModifier: usize = 0x1cd8;
        pub const m_flHeightUILingerTime: usize = 0x1ce8;
        pub const m_flDamageFrustumHalfWidth: usize = 0x1cec;
        pub const m_flDamageFrustumAngle: usize = 0x1cf0;
        pub const m_flDamageWaveSpeed: usize = 0x1cf4;
        pub const m_flDamageTraceProbeDamageRadius: usize = 0x1cf8;
        pub const m_flDamageTraceProbeWorldRadius: usize = 0x1cfc;
        pub const m_flDamageTraceProbeStepUpHeight: usize = 0x1d00;
        pub const m_flDamageTraceProbeStepDownHeight: usize = 0x1d04;
        pub const m_flDamageTraceProbeDropDownRate: usize = 0x1d08;
        pub const m_flInitialDamageRadiusInMeters: usize = 0x1d0c;
        pub const m_nGroundCrackGap: usize = 0x1d10;
        pub const m_flGroupLengthTolerance: usize = 0x1d14;
        pub const m_flDamageEffectScaleMin: usize = 0x1d18;
        pub const m_flDamageEffectScaleMax: usize = 0x1d1c;
        pub const m_flTrackAmount: usize = 0x1d20;
        pub const m_flCollideRadius: usize = 0x1d24;
        pub const m_flMaxTurnAmount: usize = 0x1d28;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Chrono_TimeWall {
        pub const m_hWall: usize = 0xf70;
        pub const vecDir: usize = 0xf74;
        pub const m_hChargingParticle: usize = 0xf80;
        pub const m_vSpawnPos: usize = 0xf84;
        pub const m_qAngles: usize = 0xf90;
        pub const m_bAirCast: usize = 0xf9c;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_PatronsBlessingProcWatcher {
    }

    // Parent: CCitadelModifierVData
    pub mod CItemSmokeBombPreCastModifierVData {
        pub const m_SmokeAreaParticle: usize = 0x750;
        pub const m_CasterParticle: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_MysticReverb_ProcVData {
        pub const m_ExplosionModifier: usize = 0x780;
        pub const m_SlowModifier: usize = 0x790;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_T3BossWaveBeamPreviewVData {
        pub const m_strBeamStartAttachmentPoint_L: usize = 0x750;
        pub const m_strBeamStartAttachmentPoint_R: usize = 0x758;
        pub const m_flShrineChargeOffset: usize = 0x760;
        pub const m_AmberBeamPreviewEffect: usize = 0x768;
        pub const m_SapphBeamPreviewEffect: usize = 0x848;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Sprint {
        pub const m_nSprintParticle: usize = 0xf70;
        pub const m_bSprinting: usize = 0xf74;
        pub const m_flSprintStartTime: usize = 0xf78;
        pub const m_bInCombat: usize = 0xf7c;
    }

    // Parent: None
    pub mod CCitadelLootTableBase {
    }

    // Parent: CRuleBrushEntity
    pub mod CGamePlayerZone {
        pub const m_OnPlayerInZone: usize = 0x788;
        pub const m_OnPlayerOutZone: usize = 0x7a0;
        pub const m_PlayersInCount: usize = 0x7b8;
        pub const m_PlayersOutCount: usize = 0x7d8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Airheart_Mark {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelDruidInvisAuraVData {
    }

    // Parent: CCitadel_Modifier_Link
    pub mod CCitadel_Modifier_HookTarget {
        pub const m_flCurrentVerticalSpeed: usize = 0x100;
        pub const m_bSuccess: usize = 0x104;
        pub const m_bSameTeam: usize = 0x105;
        pub const m_bPlayedApproachingWhoosh: usize = 0x106;
        pub const m_flInitialTravelDistance: usize = 0x108;
        pub const m_flStuckStartTime: usize = 0x10c;
        pub const m_vLastPos: usize = 0x110;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_TrophyCollector {
        pub const m_iTrophyCount: usize = 0x1278;
        pub const m_iInitialKills: usize = 0x127c;
        pub const m_iInitialAssists: usize = 0x1280;
        pub const m_iPrevCount: usize = 0x1284;
        pub const m_bMaxStacksReached: usize = 0x1288;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_DoubleJump {
        pub const m_nTickJumped: usize = 0xf78;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_FireConCommand {
    }

    // Parent: CBaseModelEntity
    pub mod CBaseToggle {
        pub const m_toggle_state: usize = 0x780;
        pub const m_flMoveDistance: usize = 0x784;
        pub const m_flWait: usize = 0x788;
        pub const m_flLip: usize = 0x78c;
        pub const m_bAlwaysFireBlockedOutputs: usize = 0x790;
        pub const m_vecPosition1: usize = 0x794;
        pub const m_vecPosition2: usize = 0x7a0;
        pub const m_vecMoveAng: usize = 0x7ac;
        pub const m_vecAngle1: usize = 0x7b8;
        pub const m_vecAngle2: usize = 0x7c4;
        pub const m_flHeight: usize = 0x7d0;
        pub const m_hActivator: usize = 0x7d4;
        pub const m_vecFinalDest: usize = 0x7d8;
        pub const m_vecFinalAngle: usize = 0x7e4;
        pub const m_movementType: usize = 0x7f0;
        pub const m_sMaster: usize = 0x7f8;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_Tier2Empowered {
        pub const m_nStartingHealth: usize = 0xd0;
        pub const m_nEndingHealth: usize = 0xd4;
        pub const m_flStartingModelScale: usize = 0xd8;
    }

    // Parent: CAI_LocalNavigatorBase
    pub mod CAI_CitadelLocalNavigator {
    }

    // Parent: CCitadel_Modifier_Base_BuildupVData
    pub mod CCitadel_Modifier_Necro_RampUpVData {
        pub const m_strProcSound: usize = 0x768;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Rutger_CheatDeath {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ProjectMind {
        pub const m_particleStart: usize = 0xd0;
        pub const m_particleEnd: usize = 0xd4;
        pub const m_particleTrail: usize = 0xd8;
        pub const m_vecEndLocation: usize = 0xdc;
        pub const m_vecStartPosition: usize = 0xe8;
        pub const m_flStartDelay: usize = 0xf4;
        pub const m_vecApplyOffset: usize = 0xf8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Stimpak_regen {
        pub const m_flTotalPendingHeal: usize = 0xd0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityMedicHealVData {
        pub const m_HealBeamParticle: usize = 0x1818;
        pub const m_HealTargetParticle: usize = 0x18f8;
        pub const m_strHealCastSound: usize = 0x19d8;
    }

    // Parent: CPulseExecCursor
    pub mod CPulseServerCursor {
        pub const m_hActivator: usize = 0xd8;
        pub const m_hCaller: usize = 0xdc;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_PlaySequence {
        pub const m_SequenceName: usize = 0x48;
        pub const m_PulseAnimEvents: usize = 0x50;
        pub const m_OnFinished: usize = 0x68;
        pub const m_OnCanceled: usize = 0xb0;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_GrandFinaleStage {
        pub const m_vStartPos: usize = 0xa90;
        pub const m_vEndPos: usize = 0xa9c;
        pub const m_flStartEmitTime: usize = 0xaa8;
        pub const m_flEndEmitTime: usize = 0xaac;
        pub const m_nTouchCount: usize = 0xab0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_HauntingSkull {
        pub const m_tPriorityTargetTime: usize = 0xf70;
        pub const m_eSkullPriorityTarget: usize = 0xf74;
        pub const m_vLaunchPosition: usize = 0xf78;
        pub const m_qLaunchAngle: usize = 0xf84;
        pub const m_bIsFullyCharged: usize = 0xf91;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CopyUltPending {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AnimalCurse {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_CapturePointVData {
        pub const m_strPreEnableParticle: usize = 0x28;
        pub const m_strOnBecomeEnableParticle: usize = 0x108;
        pub const m_strEnabledParticle: usize = 0x1e8;
        pub const m_strOnFullyCapturedParticle: usize = 0x2c8;
        pub const m_EnabledLoopSounds: usize = 0x3a8;
        pub const m_EnemyCapturingLoopSounds: usize = 0x3d0;
        pub const m_FriendlyCapturingLoopSounds: usize = 0x3f8;
        pub const m_strPreEnableStartSound: usize = 0x420;
        pub const m_strEnableStartSound: usize = 0x430;
        pub const m_strFullyCapturedSound: usize = 0x440;
        pub const m_modifierCapturer: usize = 0x450;
        pub const m_flDecaySpeed: usize = 0x460;
        pub const m_remapCapturersToCaptureTime: usize = 0x464;
        pub const m_flEnemyProgressRemoveScale: usize = 0x474;
        pub const m_flTotalHealthToCapture: usize = 0x478;
        pub const m_flInitialEnableTimeInSeconds: usize = 0x47c;
        pub const m_flPreEnableWindowInSeconds: usize = 0x484;
        pub const m_flRespawnRangeInSeconds: usize = 0x488;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_AblativeCoat {
        pub const m_flLastDamageTime: usize = 0xf78;
        pub const m_iCurrentResistValue: usize = 0xf7c;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_Tornado_Aura_Apply {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Synth_Barrage {
        pub const m_tLastShotID: usize = 0xf70;
        pub const m_nProjectilesScheduled: usize = 0x14f8;
        pub const m_ChannelParticle: usize = 0x14fc;
        pub const m_flNextShootTime: usize = 0x1500;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_Crescendo_InAOE {
    }

    // Parent: CCitadelBaseYamatoAbility
    pub mod CCitadel_Ability_PowerSlash {
        pub const m_nPowerLevel: usize = 0xf98;
        pub const m_vecHitTargets: usize = 0xfa0;
        pub const m_nCastParticle: usize = 0xfb8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Charged_Bomb {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Magic_Clarity_BuffVData {
        pub const m_VisualModifier: usize = 0x750;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_Bounce_Pad {
        pub const m_hAbility: usize = 0xbf0;
        pub const m_flUpFactor: usize = 0xbf4;
        pub const m_flBounceVelocity: usize = 0xbf8;
        pub const m_tDeactivationTime: usize = 0xbfc;
        pub const m_bDeactivated: usize = 0xc00;
        pub const m_flBarrelBounceVelocity: usize = 0xc04;
        pub const m_flBarrelUpFactor: usize = 0xc08;
        pub const m_bSpeedOnLand: usize = 0xc0c;
        pub const m_vBouncedPlayerBefore: usize = 0xc10;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Targetdummy_2 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Opera_Ability01 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GhostBloodShard {
        pub const m_flMinSlowAmount: usize = 0x250;
        pub const m_flMoveSpeedPenaltyPerStack: usize = 0x254;
        pub const m_flSlowDuration: usize = 0x258;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Upgrade_ArcaneSurge {
        pub const m_hExecutedAbility: usize = 0x2d0;
        pub const m_tNextAbilityTriggerWindow: usize = 0x2d4;
    }

    // Parent: CCitadel_Modifier_Tier3Boss_Base
    pub mod CCitadel_Modifier_Tier3_DamagePulse {
        pub const m_vTargets: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BarrierTrackerVData {
        pub const m_WeaponImpactParticle: usize = 0x750;
        pub const m_TechImpactParticle: usize = 0x830;
        pub const m_ShieldBreakParticle: usize = 0x910;
        pub const m_ShieldBreakSound: usize = 0x9f0;
        pub const m_strShieldRefreshSound: usize = 0xa00;
        pub const m_flShieldImpactEffectDuration: usize = 0xa10;
    }

    // Parent: CEntityComponent
    pub mod CTouchExpansionComponent {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Outflow_PlaySceneBase {
        pub const m_OnFinished: usize = 0x48;
        pub const m_OnCanceled: usize = 0x90;
        pub const m_Triggers: usize = 0xd8;
    }

    // Parent: CPulseCell_BaseLerp
    pub mod CPulseCell_LerpCameraSettings {
        pub const m_flSeconds: usize = 0x90;
        pub const m_Start: usize = 0x94;
        pub const m_End: usize = 0xa4;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncInteractionLayerClip {
        pub const m_bDisabled: usize = 0x780;
        pub const m_iszInteractsAs: usize = 0x788;
        pub const m_iszInteractsWith: usize = 0x790;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Fortuna_PrimaryWeapon {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidHelicopterSeedsVData {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CopyUlt {
        pub const m_nCopiedHeroID: usize = 0xd0;
        pub const m_ModelChange: usize = 0xd8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Warden_CrowdControl_Debuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Vandal_Ability03 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Aerial_Assault {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Mantle {
        pub const m_flVertOffset: usize = 0xf70;
        pub const m_flHorizGap: usize = 0xf74;
        pub const m_vStartPos: usize = 0xf78;
        pub const m_vTargetPos: usize = 0xf84;
        pub const m_angFacing: usize = 0xf90;
        pub const m_nMantleTypeIndex: usize = 0xf9c;
        pub const m_flStartTime: usize = 0xfa0;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadelProjectile_ImmobilizeTrap {
        pub const m_flStartTime: usize = 0x860;
        pub const m_vecStartPos: usize = 0x864;
        pub const m_vecEndPos: usize = 0x870;
        pub const m_flProjectileLandTime: usize = 0x87c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Aura_Base {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ControlPointBlockerAuraTarget {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bookworm_DragonFire {
        pub const m_vLaunchPosition: usize = 0x1370;
        pub const m_qLaunchAngle: usize = 0x137c;
        pub const m_nCastParticleIndex: usize = 0x1388;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_BatBlinkVData {
        pub const m_BlinkStartParticle: usize = 0x1818;
        pub const m_BlinkEndParticle: usize = 0x18f8;
        pub const m_BlinkTravelParticle: usize = 0x19d8;
        pub const m_SelfBuffModifier: usize = 0x1ab8;
        pub const m_BuffModifier: usize = 0x1ac8;
        pub const m_cameraSequenceTeleport: usize = 0x1ad8;
        pub const m_BlinkStartSound: usize = 0x1b60;
        pub const m_BlinkEndSound: usize = 0x1b70;
        pub const m_BlinkEndFinalSound: usize = 0x1b80;
        pub const m_strWhizbySound: usize = 0x1b90;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCadenceLullabyVData {
        pub const m_SleepAOEModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Gunslinger_WallStunVData {
        pub const m_ProcEffect: usize = 0x750;
        pub const m_StunModifier: usize = 0x830;
        pub const m_CasterMarkTriggerSound: usize = 0x840;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierAirLiftGrabVData {
        pub const m_GrabEffect: usize = 0x750;
        pub const m_flLiftHorizontal: usize = 0x830;
        pub const m_flLiftHeight: usize = 0x834;
        pub const m_flFollowDampingFactor: usize = 0x838;
        pub const m_flFollowDistance: usize = 0x83c;
        pub const m_flAllyGrabCancelTime: usize = 0x840;
        pub const m_flAllyPossibleStuckDistance: usize = 0x844;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ShivDashVData {
        pub const m_DashParticle: usize = 0x750;
        pub const m_DashEchoParticle: usize = 0x830;
        pub const m_DashTrailParticle: usize = 0x910;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_StormCloud {
        pub const m_nTargetingParticleIndex: usize = 0xf70;
        pub const m_flFloat: usize = 0x12f8;
        pub const m_nLightningStrikesRemaining: usize = 0x12fc;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_CosmeticItem_Snowball_VData {
        pub const m_flMaxLevelDebuffDuration: usize = 0x18b8;
        pub const m_progressionDamage: usize = 0x18c0;
        pub const m_progressionCooldown: usize = 0x18f0;
        pub const m_progressionSpeed: usize = 0x1920;
        pub const m_progressionCharges: usize = 0x1950;
        pub const m_progressionSnowballCount: usize = 0x1980;
        pub const m_progressionRadius: usize = 0x19b0;
        pub const m_SnowballModifier: usize = 0x19e0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VeilWalkerWatcherVData {
        pub const m_InvisModifier: usize = 0x750;
        pub const m_VeilWalkerTriggeredModifier: usize = 0x760;
        pub const m_VeilWalkerMovespeed: usize = 0x770;
        pub const m_strOwnerExpiredSound: usize = 0x780;
        pub const m_flTraceLengthMin: usize = 0x790;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_WarpStone_Caster {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ArcticBlast_Freeze_VData {
    }

    // Parent: CitadelItemVData
    pub mod CItemPhantomStrike_VData {
        pub const m_DebuffModifier: usize = 0x18b8;
        pub const m_PullDownModifier: usize = 0x18c8;
        pub const m_CasterModifier: usize = 0x18d8;
        pub const m_strExplodeSound: usize = 0x18e8;
        pub const m_CastParticle: usize = 0x18f8;
        pub const m_ImpactParticle: usize = 0x19d8;
        pub const m_BuffParticle: usize = 0x1ab8;
        pub const m_flTeleportDistance: usize = 0x1b98;
        pub const m_flVelocityScale: usize = 0x1b9c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Intrinsic_Base {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerDetectBulletFire {
        pub const m_bPlayerFireOnly: usize = 0x8e0;
        pub const m_OnDetectedBulletFire: usize = 0x8e8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DazzlingOrbWatcherVData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_NextTargetModifier: usize = 0x760;
        pub const m_OrbFriendlyBounceWatcherModifier: usize = 0x770;
        pub const m_strExplodeSound: usize = 0x780;
        pub const m_strFinalExplodeSound: usize = 0x790;
        pub const m_strWorldHitSound: usize = 0x7a0;
        pub const m_strGraceLoopSound: usize = 0x7b0;
        pub const m_strExpireSound: usize = 0x7c0;
        pub const m_ExplodeParticle: usize = 0x7d0;
        pub const m_BounceParticle: usize = 0x8b0;
        pub const m_GraceParticle: usize = 0x990;
        pub const m_BouncePositionCurve: usize = 0xa70;
        pub const m_flMinProjectileTravelTime: usize = 0xab0;
        pub const m_TrackingParams: usize = 0xab8;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_Necro_WallDebuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Synth_PlasmaFlux {
        pub const m_bTeleported: usize = 0xf98;
        pub const m_vecUniqueHitList: usize = 0xfa0;
        pub const m_vLastValidTeleportPosition: usize = 0xfb8;
        pub const m_flProjectileLaunchTime: usize = 0xfc4;
        pub const m_flProjectileExpireTime: usize = 0xfc8;
        pub const m_hActiveProjectile: usize = 0xfcc;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTargetdummy3VData {
    }

    // Parent: CCitadelYamatoBaseVData
    pub mod CCitadelAbilityHealingSlashVData {
        pub const m_flEffectSize: usize = 0x1820;
        pub const m_flMaxAttackAngle: usize = 0x1824;
        pub const m_remapAngleToTime: usize = 0x1828;
        pub const m_DebuffModifier: usize = 0x1838;
        pub const m_BuffModifier: usize = 0x1848;
        pub const m_ImpactParticle: usize = 0x1858;
        pub const m_HealingSlashParticle: usize = 0x1938;
        pub const m_HealingSlashSwordGlow: usize = 0x1a18;
        pub const m_CastParticle: usize = 0x1af8;
        pub const m_strDamageTarget: usize = 0x1bd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierTangoTetherTargetVData {
        pub const m_GrappleRopeParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VoidSphereBuffVData {
        pub const m_RapidFireParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Tier3_DamagePulseVData {
        pub const m_AmberZapParticle: usize = 0x750;
        pub const m_SapphZapParticle: usize = 0x830;
        pub const m_strPulseTickSound: usize = 0x910;
        pub const m_iMaxTargets: usize = 0x920;
        pub const m_flRadius: usize = 0x924;
        pub const m_flDamagePerPulse: usize = 0x928;
        pub const m_flStartTickRate: usize = 0x92c;
        pub const m_flEndTickRate: usize = 0x930;
    }

    // Parent: CCitadel_Pickup_VData
    pub mod CCitadel_Pickup_Item_VData {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_GraveStoneVData {
        pub const m_GravestoneParticle: usize = 0x7a8;
        pub const m_DestroyParticle: usize = 0x888;
        pub const m_AuraParticle: usize = 0x968;
        pub const m_CasterBuffModifier: usize = 0xa48;
        pub const m_GravestoneCriticalModifier: usize = 0xa58;
        pub const m_DestroySound: usize = 0xa68;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bookworm_KnightBarrier {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Mirage_Tornado_VData {
        pub const m_TornadoCastParticle: usize = 0x1818;
        pub const m_PurgeCastParticle: usize = 0x18f8;
        pub const m_WhirlwindEvasionModifier: usize = 0x19d8;
        pub const m_TornadoAura: usize = 0x19e8;
        pub const m_GrenadeTrailModifier: usize = 0x19f8;
        pub const m_cameraSequenceTravelingInTornado: usize = 0x1a08;
        pub const m_PurgeSound: usize = 0x1a90;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_GrandFinale_BuffVData {
        pub const m_BuildUpModifier: usize = 0x750;
        pub const m_ExplodeParticle: usize = 0x760;
        pub const m_ExplodeSound: usize = 0x840;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_CatFormPounceVData {
        pub const m_AttackParticle: usize = 0x1818;
        pub const m_strCatFormMeleeSwing: usize = 0x18f8;
        pub const m_flAttackTime: usize = 0x1908;
        pub const m_flAttackRange: usize = 0x190c;
        pub const m_flAttackHalfAngle: usize = 0x1910;
        pub const m_flAttackConeHalfWidth: usize = 0x1914;
        pub const m_flMinAttackTime: usize = 0x1918;
        pub const m_flStopTargetRange: usize = 0x191c;
        pub const m_MovementSpeedCurve: usize = 0x1920;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bounce_Pad_Ally {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySlideVData {
        pub const m_flMinAngleToConsiderASlope: usize = 0x1818;
        pub const m_flSlideMaxSlopeMaxAccSpeed: usize = 0x181c;
        pub const m_flSlideMinSlopeMaxAccSpeed: usize = 0x1820;
        pub const m_flButtonPressWindow: usize = 0x1824;
        pub const m_flTurnSpeed: usize = 0x1828;
        pub const m_flSlideMinSlopeAcceleration: usize = 0x182c;
        pub const m_flSlideMaxSlopeAcceleration: usize = 0x1830;
        pub const m_flTurnMinAngDiff: usize = 0x1834;
        pub const m_flTurnMaxAngDiff: usize = 0x1838;
        pub const m_flLandedFlatGroundFrictionGraceTime: usize = 0x183c;
        pub const m_flFlatGroundFrictionGraceTime: usize = 0x1840;
        pub const m_flFrictionFlatGroundGrace: usize = 0x1844;
        pub const m_flFrictionFlatGround: usize = 0x1848;
        pub const m_flFrictionMinSlope: usize = 0x184c;
        pub const m_flFrictionMaxSlope: usize = 0x1850;
        pub const m_flFrictionUphillMinSlope: usize = 0x1854;
        pub const m_flFrictionUphillMaxSlope: usize = 0x1858;
        pub const m_flLandingSlopeScaleBias: usize = 0x185c;
        pub const m_flBoostMinTriggerSpeed: usize = 0x1860;
        pub const m_flBoostMaxTriggerSpeed: usize = 0x1864;
        pub const m_flBoostMinSpeed: usize = 0x1868;
        pub const m_flBoostMaxSpeed: usize = 0x186c;
        pub const m_flMinActivationSpeed: usize = 0x1870;
        pub const m_flMinSustainSpeed: usize = 0x1874;
        pub const m_flSprintBoostSpeed: usize = 0x1878;
        pub const m_flDashSlideStartTime: usize = 0x187c;
        pub const m_flDashSlideSpeed: usize = 0x1880;
        pub const m_flDashSlideFailSpeed: usize = 0x1884;
        pub const m_strDashSlideActivate: usize = 0x1888;
        pub const m_flDashSlideFrictionTime: usize = 0x1898;
        pub const m_flDashSlideFriction: usize = 0x189c;
        pub const m_flDashMinActivationSpeed: usize = 0x18a0;
        pub const m_flAccMinSlopeDeg: usize = 0x18a4;
        pub const m_flAccMaxSlopeDeg: usize = 0x18a8;
        pub const m_flAccMinSlopeScale: usize = 0x18ac;
        pub const m_flSlideProbeForwardOffset: usize = 0x18b0;
        pub const m_flSlideActivationProbeForwardOffset: usize = 0x18b4;
        pub const m_flMaxDistanceBetweenProbeSamples: usize = 0x18b8;
        pub const m_flInitialSlideUseForwardProbeTime: usize = 0x18bc;
        pub const m_flCurrentSlopeSampleDistance: usize = 0x18c0;
        pub const m_flSampleVelDiffStdDevScaleCutoff: usize = 0x18c4;
        pub const m_flSlopeFacingAngleToActivate: usize = 0x18c8;
        pub const m_flAirDragAfterJump: usize = 0x18cc;
        pub const m_flAirDragAfterJumpTime: usize = 0x18d0;
        pub const m_flAirDragMaxAngle: usize = 0x18d4;
        pub const m_flAirDragResetTime: usize = 0x18d8;
        pub const m_flLateSlideJumpWindow: usize = 0x18dc;
        pub const m_SlideEffectRemap: usize = 0x18e0;
        pub const m_GetupSpeedCurve: usize = 0x18f0;
        pub const m_flGetupBusyDuration: usize = 0x1930;
        pub const m_flSlidingRecoilReduction: usize = 0x1934;
        pub const m_cameraSequenceStartSliding: usize = 0x1938;
        pub const m_cameraSequenceEndSliding: usize = 0x19c0;
        pub const m_SlideParticle: usize = 0x1a48;
        pub const m_strStartSound: usize = 0x1b28;
        pub const m_strLoopingSound: usize = 0x1b38;
        pub const m_strStopSound: usize = 0x1b48;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpiritBurnEnemyTrackerVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_ImmunityModifier: usize = 0x760;
        pub const m_ExplodeParticle: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MagicShock_Proc_ImmuneWatcher {
        pub const m_iAbilityID: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Tier3Boss_Base
    pub mod CCitadel_Modifier_T3Boss_Wave_Target {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NearbyAlliesResistVData {
        pub const m_flNearbyAllyResistRange: usize = 0x750;
        pub const m_flResistValues: usize = 0x758;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_PickBestOutflowSelector {
        pub const m_nCheckType: usize = 0x48;
        pub const m_OutflowList: usize = 0x50;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_PunkgoatSigilAuraVData {
        pub const m_WaveParticle: usize = 0x7a8;
        pub const m_flHeight: usize = 0x888;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ComboBreaker {
    }

    // Parent: CPointEntity
    pub mod CInfoFan {
        pub const m_fFanForceMaxRadius: usize = 0x4e0;
        pub const m_fFanForceMinRadius: usize = 0x4e4;
        pub const m_flCurveDistRange: usize = 0x4e8;
        pub const m_FanForceCurveString: usize = 0x4f0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_CloneSingle {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TargetPracticeSelf {
        pub const m_bFoundTarget: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Chrono_PulseGrenade_Debuff {
    }

    // Parent: CCitadel_Modifier_StatStealBase
    pub mod CCitadel_Modifier_Arcane_Eater_Watcher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_SpiritSnatch_Debuff {
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CAbility_Synth_PlasmaFlux_Trigger {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_CooldownOnMiss {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_AirheartChargeBlastVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Fathom_LurkersAmbush_Debuff_VData {
        pub const m_FlogDebuffParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_TangoTetherTarget {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_Pounce_Instant {
        pub const m_bActive: usize = 0x1470;
        pub const m_hCurrentTarget: usize = 0x1474;
        pub const m_hLastCastTarget: usize = 0x1478;
        pub const m_vStartPosition: usize = 0x147c;
        pub const m_vDeparturePosition: usize = 0x1488;
        pub const m_flDepartureTime: usize = 0x1498;
        pub const m_flArrivalTime: usize = 0x14b0;
        pub const m_vLastKnownSafePos: usize = 0x14c8;
        pub const m_bStartedPhase01: usize = 0x14d4;
        pub const m_bStartedPhase02: usize = 0x14d5;
        pub const m_bIsFirstCastCompleted: usize = 0x14d6;
        pub const m_tDoubleCastWindow: usize = 0x14d8;
        pub const m_CastStartParticle: usize = 0x14dc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Shadow_Strike_Debuff {
    }

    // Parent: None
    pub mod CAI_VolumetricEventSensorOnStartedArgs_t {
        pub const hEvent: usize = 0x0;
        pub const vOrigin: usize = 0x8;
        pub const flRadius: usize = 0x14;
    }

    // Parent: None
    pub mod CGameRules {
        pub const __m_pChainEntity: usize = 0x8;
        pub const m_szQuestName: usize = 0x30;
        pub const m_nQuestPhase: usize = 0xb0;
        pub const m_nLastMatchTime: usize = 0xb4;
        pub const m_nLastMatchTime_MatchID64: usize = 0xb8;
        pub const m_nTotalPausedTicks: usize = 0xc0;
        pub const m_nPauseStartTick: usize = 0xc4;
        pub const m_bGamePaused: usize = 0xc8;
    }

    // Parent: CBaseAnimGraph
    pub mod CFish {
        pub const m_pool: usize = 0xa90;
        pub const m_id: usize = 0xa94;
        pub const m_x: usize = 0xa98;
        pub const m_y: usize = 0xa9c;
        pub const m_z: usize = 0xaa0;
        pub const m_angle: usize = 0xaa4;
        pub const m_angleChange: usize = 0xaa8;
        pub const m_forward: usize = 0xaac;
        pub const m_perp: usize = 0xab8;
        pub const m_poolOrigin: usize = 0xac4;
        pub const m_waterLevel: usize = 0xad0;
        pub const m_speed: usize = 0xad4;
        pub const m_desiredSpeed: usize = 0xad8;
        pub const m_calmSpeed: usize = 0xadc;
        pub const m_panicSpeed: usize = 0xae0;
        pub const m_avoidRange: usize = 0xae4;
        pub const m_turnTimer: usize = 0xae8;
        pub const m_turnClockwise: usize = 0xb00;
        pub const m_goTimer: usize = 0xb08;
        pub const m_moveTimer: usize = 0xb20;
        pub const m_panicTimer: usize = 0xb38;
        pub const m_disperseTimer: usize = 0xb50;
        pub const m_proximityTimer: usize = 0xb68;
        pub const m_visible: usize = 0xb80;
    }

    // Parent: CPointEntity
    pub mod CAI_NetworkManager {
    }

    // Parent: CBaseEntity
    pub mod CHandleTest {
        pub const m_Handle: usize = 0x4a0;
        pub const m_bSendHandle: usize = 0x4a4;
    }

    // Parent: CBaseEntity
    pub mod CLogicNPCCounter {
        pub const m_OnMinCountAll: usize = 0x4a0;
        pub const m_OnMaxCountAll: usize = 0x4b8;
        pub const m_OnFactorAll: usize = 0x4d0;
        pub const m_OnMinPlayerDistAll: usize = 0x4f0;
        pub const m_OnMinCount_1: usize = 0x510;
        pub const m_OnMaxCount_1: usize = 0x528;
        pub const m_OnFactor_1: usize = 0x540;
        pub const m_OnMinPlayerDist_1: usize = 0x560;
        pub const m_OnMinCount_2: usize = 0x580;
        pub const m_OnMaxCount_2: usize = 0x598;
        pub const m_OnFactor_2: usize = 0x5b0;
        pub const m_OnMinPlayerDist_2: usize = 0x5d0;
        pub const m_OnMinCount_3: usize = 0x5f0;
        pub const m_OnMaxCount_3: usize = 0x608;
        pub const m_OnFactor_3: usize = 0x620;
        pub const m_OnMinPlayerDist_3: usize = 0x640;
        pub const m_hSource: usize = 0x660;
        pub const m_iszSourceEntityName: usize = 0x668;
        pub const m_flDistanceMax: usize = 0x670;
        pub const m_bDisabled: usize = 0x674;
        pub const m_nMinCountAll: usize = 0x678;
        pub const m_nMaxCountAll: usize = 0x67c;
        pub const m_nMinFactorAll: usize = 0x680;
        pub const m_nMaxFactorAll: usize = 0x684;
        pub const m_iszNPCClassname_1: usize = 0x690;
        pub const m_nNPCState_1: usize = 0x698;
        pub const m_bInvertState_1: usize = 0x69c;
        pub const m_nMinCount_1: usize = 0x6a0;
        pub const m_nMaxCount_1: usize = 0x6a4;
        pub const m_nMinFactor_1: usize = 0x6a8;
        pub const m_nMaxFactor_1: usize = 0x6ac;
        pub const m_flDefaultDist_1: usize = 0x6b4;
        pub const m_iszNPCClassname_2: usize = 0x6b8;
        pub const m_nNPCState_2: usize = 0x6c0;
        pub const m_bInvertState_2: usize = 0x6c4;
        pub const m_nMinCount_2: usize = 0x6c8;
        pub const m_nMaxCount_2: usize = 0x6cc;
        pub const m_nMinFactor_2: usize = 0x6d0;
        pub const m_nMaxFactor_2: usize = 0x6d4;
        pub const m_flDefaultDist_2: usize = 0x6dc;
        pub const m_iszNPCClassname_3: usize = 0x6e0;
        pub const m_nNPCState_3: usize = 0x6e8;
        pub const m_bInvertState_3: usize = 0x6ec;
        pub const m_nMinCount_3: usize = 0x6f0;
        pub const m_nMaxCount_3: usize = 0x6f4;
        pub const m_nMinFactor_3: usize = 0x6f8;
        pub const m_nMaxFactor_3: usize = 0x6fc;
        pub const m_flDefaultDist_3: usize = 0x704;
    }

    // Parent: None
    pub mod CCitadel_InfoTrooperSpawnAPI {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Clone {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTokamakBreachVData {
        pub const m_AllySmokeAOEModifier: usize = 0x1818;
        pub const m_EnemySmokeAOEModifier: usize = 0x1828;
        pub const m_PurgeParticle: usize = 0x1838;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Shakedown_Target {
        pub const m_hShadowdownAbility: usize = 0xf70;
        pub const m_AimPos: usize = 0xf74;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Astro_Rifle_Self {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Chrono_PulseGrenade_PulseArea {
        pub const m_iPulseCount: usize = 0xd0;
        pub const m_hPreviewRingParticle: usize = 0xd4;
    }

    // Parent: CCitadel_Item_ProjectileTestVData
    pub mod CCitadel_Item_ProjectileTest06VData {
        pub const m_flMaxDrag: usize = 0x18c8;
        pub const m_flMinDrag: usize = 0x18cc;
        pub const m_flMinGravity: usize = 0x18d0;
        pub const m_flMaxGravity: usize = 0x18d4;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_SurgingPowerVData {
        pub const m_ModifierSurgingPower: usize = 0x18b8;
        pub const m_CastTargetEffect: usize = 0x18c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ComboBreakerHeal {
        pub const m_flAmountPerSecond: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_UltimateBurst_ProcVData {
        pub const m_LightningParticle: usize = 0x780;
        pub const m_DelayedEffectModifier: usize = 0x860;
        pub const m_SlowModifier: usize = 0x870;
        pub const m_strLightningSound: usize = 0x880;
    }

    // Parent: CCitadel_Ability_TrooperGrenade
    pub mod CCitadel_Ability_TrooperBossGrenade {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TriggerPush {
        pub const m_vPush: usize = 0xd0;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelHotelExitTrigger {
        pub const m_bIsSuccess: usize = 0x8e0;
    }

    // Parent: CBaseTrigger
    pub mod CRegenerateZone {
    }

    // Parent: CDynamicProp
    pub mod CCitadelPregameHeroDraftButton {
        pub const m_nGameStateChangedEventID: usize = 0xce8;
    }

    // Parent: CCitadel_Modifier_LinkVData
    pub mod CModifierGravityLassoEnemyVData {
        pub const m_LassoEffect: usize = 0x830;
        pub const m_StunModifier: usize = 0x910;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_RechargingBullets {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_ExpressShot {
        pub const m_iShotsToCreate: usize = 0x11f8;
        pub const m_bIsInExpressShot: usize = 0x11fc;
        pub const m_tNextShotTime: usize = 0x1200;
        pub const m_bIsPrimaryProc: usize = 0x1220;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_TechDamagePulse {
    }

    // Parent: CCitadel_Modifier_ScalingPowerUp
    pub mod CCitadel_Modifier_PowerUp_Movement {
        pub const m_bFilled: usize = 0xd8;
    }

    // Parent: CPhysConstraint
    pub mod CRagdollConstraint {
        pub const m_xmin: usize = 0x500;
        pub const m_xmax: usize = 0x504;
        pub const m_ymin: usize = 0x508;
        pub const m_ymax: usize = 0x50c;
        pub const m_zmin: usize = 0x510;
        pub const m_zmax: usize = 0x514;
        pub const m_xfriction: usize = 0x518;
        pub const m_yfriction: usize = 0x51c;
        pub const m_zfriction: usize = 0x520;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncVehicleClip {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTokamakHeatSinksVData {
        pub const m_HeatDotModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierLashGrappleTargetVData {
        pub const m_LockingOnParticle: usize = 0x750;
        pub const m_LockedOnParticle: usize = 0x830;
        pub const m_WarningParticle: usize = 0x910;
        pub const m_strVictimLockonSound: usize = 0x9f0;
    }

    // Parent: CCitadel_Item_ProjectileTestVData
    pub mod CCitadel_Item_ProjectileTest05VData {
        pub const m_flMaxDrag: usize = 0x18c8;
        pub const m_flMinDrag: usize = 0x18cc;
        pub const m_flMinGravity: usize = 0x18d0;
        pub const m_flMaxGravity: usize = 0x18d4;
    }

    // Parent: CCitadel_Modifier_StatStealBase
    pub mod CCitadel_Modifier_Siphon_Bullets_Watcher {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityJumpVData {
        pub const m_flShootingLockoutAfterJump: usize = 0x1818;
        pub const m_flShootingInaccuracyPercentageAfterJump: usize = 0x181c;
        pub const m_flShootingInaccuracyDurationAfterJump: usize = 0x1820;
        pub const m_DashJumpParticle: usize = 0x1828;
        pub const m_AirJumpParticle: usize = 0x1908;
        pub const m_WallJumpParticle: usize = 0x19e8;
        pub const m_DebuffModifier: usize = 0x1ac8;
        pub const m_GroundJumpExecutedSound: usize = 0x1ad8;
        pub const m_AirJumpSound: usize = 0x1ae8;
        pub const m_flMantleRefundWindow: usize = 0x1af8;
        pub const m_flZiplineRefundWindow: usize = 0x1afc;
        pub const m_flLateJumpGraceWindow: usize = 0x1b00;
        pub const m_flMaxSpeedDelta: usize = 0x1b04;
        pub const m_strDashJumpSound: usize = 0x1b08;
        pub const m_flDashJumpStartTime: usize = 0x1b18;
        pub const m_flDashJumpEndTime: usize = 0x1b1c;
        pub const m_flDashJumpDistanceInMeters: usize = 0x1b20;
        pub const m_flDashJumpVerticalSpeed: usize = 0x1b28;
        pub const m_flDashJumpMissMaxSpeed: usize = 0x1b2c;
        pub const m_flDashJumpMantleDisableTime: usize = 0x1b30;
        pub const m_flDashJumpExtraAirControlTime: usize = 0x1b34;
        pub const m_flDashJumpExtraAirControlPercent: usize = 0x1b38;
        pub const m_WallJumpExecutedSound: usize = 0x1b40;
        pub const m_CornerBoostExecutedSound: usize = 0x1b50;
        pub const m_flCollidedWallMaxDist: usize = 0x1b60;
        pub const m_flRemapSpeedToWallJumpVelocityDist: usize = 0x1b64;
        pub const m_flWallJumpFullPowerRechargeTime: usize = 0x1b74;
        pub const m_flWallJumpPowerMin: usize = 0x1b78;
        pub const m_flWallJumpPowerBias: usize = 0x1b7c;
        pub const m_flWallJumpUpSpeed: usize = 0x1b80;
        pub const m_flWallJumpMaxLateralSpeed: usize = 0x1b84;
        pub const m_WallJumpLateralSpeedFalloffVsAlongSpeed: usize = 0x1b88;
        pub const m_flWallJumpMinOutSpeed: usize = 0x1bc8;
        pub const m_flWallJumpMaxOutSpeed: usize = 0x1bcc;
        pub const m_flWallJumpLateralInputSuppressTime: usize = 0x1bd0;
        pub const m_flWallJumpReturnToWallBonusAccel: usize = 0x1bd4;
        pub const m_flSlowedSlideJumpFactor: usize = 0x1bd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_StatStealBaseVData {
        pub const m_StatStolenDebuffModifier: usize = 0x750;
        pub const m_StatStolenBuffModifier: usize = 0x760;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_GraveStone_Blocker {
        pub const m_CCitadelMinimapComponent: usize = 0xbf0;
        pub const m_hAbility: usize = 0xc10;
        pub const m_iGravestoneState: usize = 0xc14;
        pub const m_flLifetime: usize = 0xc18;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_DragonFireGroundAura {
    }

    // Parent: CCitadel_Item
    pub mod CItem_FleetfootBoots {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelProjectile {
        pub const m_flMaxDistance: usize = 0x7a8;
        pub const m_nCachedExcludeFlags: usize = 0x7b0;
        pub const m_bInPortalEnvironment: usize = 0x7b8;
        pub const m_bHandlingPortalResult: usize = 0x7b9;
        pub const m_flArmingTime: usize = 0x7bc;
        pub const m_flChargeAmount: usize = 0x7c0;
        pub const m_bCollideWithThrower: usize = 0x7c4;
        pub const m_bNewCollideWithThrower: usize = 0x7c5;
        pub const m_flTickSoundInterval: usize = 0x7d0;
        pub const m_vLastAbsOrigin: usize = 0x7d8;
        pub const m_vLastAbsVelocity: usize = 0x7e4;
        pub const m_vecTargetToIgnore: usize = 0x808;
        pub const m_bDetonateStarted: usize = 0x820;
        pub const m_bTouchDisabled: usize = 0x821;
        pub const m_vInitialVelocity: usize = 0x824;
        pub const m_vInitialPosition: usize = 0x830;
        pub const m_abilityID: usize = 0x83c;
        pub const m_sParticleName: usize = 0x840;
        pub const m_vecSpawnPosition: usize = 0x848;
        pub const m_flProjectileSpeed: usize = 0x854;
        pub const m_flMaxLifetime: usize = 0x858;
        pub const m_flParticleRadius: usize = 0x85c;
    }

    // Parent: CBaseEntity
    pub mod CBaseTrackedStatsEntity {
        pub const m_vecTrackedStats: usize = 0x4a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_ChargeBlast {
        pub const m_nState: usize = 0xf74;
        pub const m_vecMarks: usize = 0xf78;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_HauntingSpiritsVData {
        pub const m_BuffCastParticle: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x18f8;
        pub const m_HitConfirmSound: usize = 0x19d8;
        pub const m_BuffModifier: usize = 0x19e8;
        pub const m_DebuffModifier: usize = 0x19f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Attached {
        pub const m_hAttachedTo: usize = 0x2fc;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Astro_Rifle_SelfVData {
        pub const m_WeaponFxParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Base_Buildup
    pub mod CCitadel_Modifier_IceBeam_Stacking_Slow {
        pub const m_flCurrBuildup: usize = 0x460;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ChargedTackle {
        pub const m_bPreparing: usize = 0x13f0;
        pub const m_bTackling: usize = 0x13f1;
        pub const m_flTackleStartTime: usize = 0x13f4;
        pub const m_flPrepareStartTime: usize = 0x13f8;
        pub const m_vecTackleDir: usize = 0x13fc;
        pub const m_vecLastPosition: usize = 0x1408;
        pub const m_nStuckFramesCount: usize = 0x1414;
        pub const m_vecHitEnemies: usize = 0x1418;
        pub const m_nDistancePreview: usize = 0x1430;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_CrushingFists_Watcher {
    }

    // Parent: None
    pub mod StatViewerModifierValues_t {
        pub const m_SourceModifierID: usize = 0x30;
        pub const m_eValType: usize = 0x34;
        pub const m_flValue: usize = 0x38;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_MobileResupplyAura {
    }

    // Parent: CPointEntity
    pub mod CEnvSplash {
        pub const m_flScale: usize = 0x4a0;
    }

    // Parent: CPointCamera
    pub mod CPointCameraVFOV {
        pub const m_flVerticalFOV: usize = 0x500;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_Ability02 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Astro_Rifle_Debuff {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_PsychicLift {
        pub const m_vDropStartLocation: usize = 0xd8;
        pub const m_flLiftDuration: usize = 0xe4;
        pub const m_vecSlamDest: usize = 0x268;
        pub const m_bImpacted: usize = 0x274;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChangeTeam {
    }

    // Parent: None
    pub mod CTestPulseIOAPI {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerAddModifier {
        pub const m_strModifier: usize = 0x8e0;
        pub const m_flDuration: usize = 0x8e8;
        pub const m_bMomentary: usize = 0x8ec;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Thumper_2_Aura {
        pub const m_vecOrigin: usize = 0x108;
        pub const m_vecWorldSpaceMins: usize = 0x114;
        pub const m_vecWorldSpaceMaxs: usize = 0x120;
        pub const m_flBarbedWireAuraRadius: usize = 0x12c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_WarpStone {
        pub const m_nCastDelayParticleIndex: usize = 0xf78;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CPrecipitationVData {
        pub const m_szParticlePrecipitationEffect: usize = 0x28;
        pub const m_flInnerDistance: usize = 0x108;
        pub const m_nAttachType: usize = 0x10c;
        pub const m_bBatchSameVolumeType: usize = 0x110;
        pub const m_nRTEnvCP: usize = 0x114;
        pub const m_nRTEnvCPComponent: usize = 0x118;
        pub const m_szModifier: usize = 0x120;
    }

    // Parent: CBaseToggle
    pub mod CFuncMoveLinear {
        pub const m_authoredPosition: usize = 0x800;
        pub const m_angMoveEntitySpace: usize = 0x804;
        pub const m_vecMoveDirParentSpace: usize = 0x810;
        pub const m_soundStart: usize = 0x820;
        pub const m_soundStop: usize = 0x828;
        pub const m_currentSound: usize = 0x830;
        pub const m_flBlockDamage: usize = 0x838;
        pub const m_flStartPosition: usize = 0x83c;
        pub const m_OnFullyOpen: usize = 0x848;
        pub const m_OnFullyClosed: usize = 0x860;
        pub const m_bCreateMovableNavMesh: usize = 0x878;
        pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x879;
        pub const m_bCreateNavObstacle: usize = 0x87a;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_TrackingBombVData {
        pub const m_DebuffParticle: usize = 0x750;
        pub const m_bAllowAlliesToAlsoTrack: usize = 0x830;
        pub const m_flLabelOffset: usize = 0x834;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Spotlight {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Familiar_PrimaryWeapon {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Synth_Affliction_Debuff_VData {
        pub const m_EffectParticle: usize = 0x750;
        pub const m_DebuffParticle: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_Pounce_Self {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckerUltimate_Invincible {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TargetPracticeDebuffVData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_BulletResistModifier: usize = 0x760;
        pub const m_EMPModifier: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Shield {
        pub const m_hShieldEntity: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SlowImmunity {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_SpiritBubbleVData {
        pub const m_BarrierModifier: usize = 0x18b8;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_HealingBoonScale {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_MidBossVData {
        pub const m_iStartingHealth: usize = 0x1348;
        pub const m_iHealthGainPerMinute: usize = 0x134c;
        pub const m_flAggroTime: usize = 0x1350;
        pub const m_DyingSmallExplosion: usize = 0x1358;
        pub const m_DyingFinalExplosion: usize = 0x1438;
        pub const m_flDyingDuration: usize = 0x1518;
        pub const m_KnockbackAura: usize = 0x1520;
        pub const m_AggroEnemy: usize = 0x1530;
    }

    // Parent: None
    pub mod CPhysMotorAPI {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_WaitForObservable {
        pub const m_Condition: usize = 0x48;
        pub const m_OnTrue: usize = 0xc0;
    }

    // Parent: CAI_CitadelNPC
    pub mod CCitadelPlayerBotNPCBrain {
    }

    // Parent: CItem
    pub mod CScriptItem {
        pub const m_MoveTypeOverride: usize = 0xb30;
    }

    // Parent: CDynamicProp
    pub mod CDynamicPropAlias_prop_dynamic_override {
    }

    // Parent: CBaseToggle
    pub mod CBaseTrigger {
        pub const m_OnStartTouch: usize = 0x800;
        pub const m_OnStartTouchAll: usize = 0x818;
        pub const m_OnEndTouch: usize = 0x830;
        pub const m_OnEndTouchAll: usize = 0x848;
        pub const m_OnTouching: usize = 0x860;
        pub const m_OnTouchingEachEntity: usize = 0x878;
        pub const m_OnNotTouching: usize = 0x890;
        pub const m_hTouchingEntities: usize = 0x8a8;
        pub const m_iFilterName: usize = 0x8c0;
        pub const m_hFilter: usize = 0x8c8;
        pub const m_bDisabled: usize = 0x8cc;
        pub const m_bUseAsyncQueries: usize = 0x8d8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_Grit {
    }

    // Parent: CitadelAbilityVData
    pub mod CBaseLockonAbilityVData {
        pub const m_TargetModifier: usize = 0x1818;
        pub const m_strApplyLockonStack: usize = 0x1828;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PermanentPickupVData {
    }

    // Parent: CPointEntity
    pub mod CNPCSpawnDestination {
        pub const m_ReuseDelay: usize = 0x4a0;
        pub const m_RenameNPC: usize = 0x4a8;
        pub const m_TimeNextAvailable: usize = 0x4b0;
        pub const m_OnSpawnNPC: usize = 0x4b8;
    }

    // Parent: CPointEntity
    pub mod CPointPush {
        pub const m_bEnabled: usize = 0x4a0;
        pub const m_flMagnitude: usize = 0x4a4;
        pub const m_flRadius: usize = 0x4a8;
        pub const m_flInnerRadius: usize = 0x4ac;
        pub const m_flConeOfInfluence: usize = 0x4b0;
        pub const m_iszFilterName: usize = 0x4b8;
        pub const m_hFilter: usize = 0x4c0;
    }

    // Parent: CNPC_Neutral_Hideout_CatVData
    pub mod CNPC_Neutral_Hideout_RabbitVData {
        pub const m_flChaseMoveDistance: usize = 0x428;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CNPC_NeutralBugVData {
        pub const m_iGoldReward: usize = 0x28;
        pub const m_flRadius: usize = 0x2c;
        pub const m_flDropDownRate: usize = 0x30;
        pub const m_flRespawnTime: usize = 0x34;
        pub const m_flRespawnTimeHeroTest: usize = 0x38;
        pub const m_flWaitTimeMax: usize = 0x3c;
        pub const m_flPlayerCheckThink: usize = 0x40;
        pub const m_flPlayerCheckDistanceM: usize = 0x44;
        pub const m_flMaxMoveDistance: usize = 0x48;
        pub const m_flMinMoveDistance: usize = 0x4c;
        pub const m_flMoveSpeedMin: usize = 0x50;
        pub const m_flMoveSpeedMax: usize = 0x54;
        pub const m_flValidDirectionDist: usize = 0x58;
        pub const m_flValidMinDist: usize = 0x5c;
        pub const m_sModelName: usize = 0x60;
        pub const m_DeathParticle: usize = 0x140;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Unicorn_PrismaticGuard {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_AirheartRocketeer4VData {
        pub const m_ChargingModifier: usize = 0x1818;
        pub const m_ImpulseAccelCurve: usize = 0x1828;
        pub const m_flChargingTime: usize = 0x1868;
        pub const m_flGravity: usize = 0x186c;
        pub const m_flTerminalGravity: usize = 0x1870;
        pub const m_flVelocityXYDefaultCeiling: usize = 0x1874;
        pub const m_flVelocityDecayToCeilingSpeed: usize = 0x1878;
        pub const m_flThrustVelocityAngleApproachTime: usize = 0x187c;
        pub const m_flThrustVelocityApproachIncreasing: usize = 0x1880;
        pub const m_flThrustVelocityApproachDecreasing: usize = 0x1884;
        pub const m_vThrustingVelocity: usize = 0x1888;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifire_Priest_FlashBangBurn {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VampireBat_BatSwarmDoT {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_DebuffReducerVData {
        pub const m_DebuffReducedParticle: usize = 0x18b8;
        pub const m_PurgeCastParticle: usize = 0x1998;
        pub const m_MoveSpeedModifier: usize = 0x1a78;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_AmmoScavenger_VData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_StackSound: usize = 0x18c8;
        pub const m_AmmoSound: usize = 0x18d8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_BaseBulletPreRollProcVData {
        pub const m_bRollOnceForAllBulletsInAShot: usize = 0x780;
        pub const m_flMaxBulletsToProcInShot: usize = 0x784;
        pub const m_bCanProcMultipleTimesFromSameShot: usize = 0x788;
        pub const m_bRequiresTargetFilter: usize = 0x789;
        pub const m_bCanBeEvaded: usize = 0x78a;
        pub const m_TracerAdditionParticle: usize = 0x790;
        pub const m_OnBulletRolledProcSound: usize = 0x870;
    }

    // Parent: None
    pub mod StolenAbilityPair_t {
        pub const m_ItemSlotType: usize = 0x30;
        pub const m_StolenAbilityID: usize = 0x34;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_EntFire {
        pub const m_Input: usize = 0x48;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ItemPunchable_Gold {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Tokamak_EnemySmokeAOE {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_BloodBomb {
        pub const m_bSecondBomb: usize = 0x860;
        pub const m_nBeepSoundBuildupCount: usize = 0x864;
        pub const m_flBeepSoundIntervalBias: usize = 0x868;
        pub const m_flBeepSoundMaxFrequency: usize = 0x86c;
        pub const m_flArmingDuration: usize = 0x870;
        pub const m_vecBeepIntervals: usize = 0x878;
    }

    // Parent: CCitadel_Item_Bubble
    pub mod CCitadel_Item_PrismBlast {
        pub const m_beam00: usize = 0x12a0;
        pub const m_beam01: usize = 0x2260;
        pub const m_beam02: usize = 0x3220;
        pub const m_beam03: usize = 0x41e0;
        pub const m_beam04: usize = 0x51a0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_CopyUltVData {
        pub const m_CopyTetherParticle: usize = 0x1818;
        pub const m_UltCopiedModifier: usize = 0x18f8;
        pub const m_UltActiveModifier: usize = 0x1908;
        pub const m_InformTargetUltCopiedModifier: usize = 0x1918;
        pub const m_CopiedUltSpawnedEntityModifier: usize = 0x1928;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AirLift_Grab {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VandalOverflow {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Slide {
        pub const m_flGroundDashSlideTime: usize = 0xfc8;
        pub const m_flSlowGetupStartTime: usize = 0xfe0;
        pub const m_bShouldTriggerSlowGetup: usize = 0xfe4;
        pub const m_bWantsSlide: usize = 0xfe5;
        pub const m_bAirborneWhenDuckPressed: usize = 0xfe6;
        pub const m_bIsSliding: usize = 0xfe7;
        pub const m_bSlideIsSticky: usize = 0xfe8;
        pub const m_flSpeedAdjust: usize = 0xfec;
        pub const m_flDuckPressedTime: usize = 0xff0;
        pub const m_flSlideChangeTime: usize = 0xff4;
        pub const m_flSlidingOnFlatStartTime: usize = 0xff8;
        pub const m_nJumpsThisSlideSession: usize = 0xffc;
        pub const m_flOnGroundStartTime: usize = 0x1000;
        pub const m_flDashSlideStartTime: usize = 0x1004;
        pub const m_bStartedSlideViaProbeSlope: usize = 0x1008;
        pub const m_nSlideEffectIndex: usize = 0x100c;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_SpellslingerHeadshots_VData {
        pub const m_HeadshotDebuffModifier: usize = 0x18b8;
        pub const m_ImpactParticle: usize = 0x18c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SuperNeutralChargeActive {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RebirthCredit {
        pub const m_bActivated: usize = 0xd0;
        pub const m_nFxIndex: usize = 0xd4;
    }

    // Parent: CEntityComponent
    pub mod CHitboxComponent {
        pub const m_flBoundsExpandRadius: usize = 0x14;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_FamiliarHelper {
        pub const m_tCooldownStartTime: usize = 0x1b90;
        pub const m_tCooldownEndTime: usize = 0x1b94;
        pub const m_bIsHelperAvailableNet: usize = 0x1b98;
    }

    // Parent: CSoundEventEntity
    pub mod CCitadelSoundEntityOBB {
        pub const m_vMins: usize = 0x574;
        pub const m_vMaxs: usize = 0x580;
    }

    // Parent: CBaseModelEntity
    pub mod CRopeKeyframe {
        pub const m_RopeFlags: usize = 0x788;
        pub const m_iNextLinkName: usize = 0x790;
        pub const m_Slack: usize = 0x798;
        pub const m_Width: usize = 0x79c;
        pub const m_TextureScale: usize = 0x7a0;
        pub const m_nSegments: usize = 0x7a4;
        pub const m_bConstrainBetweenEndpoints: usize = 0x7a5;
        pub const m_strRopeMaterialModel: usize = 0x7a8;
        pub const m_iRopeMaterialModelIndex: usize = 0x7b0;
        pub const m_Subdiv: usize = 0x7b8;
        pub const m_nChangeCount: usize = 0x7b9;
        pub const m_RopeLength: usize = 0x7ba;
        pub const m_fLockedPoints: usize = 0x7bc;
        pub const m_bCreatedFromMapFile: usize = 0x7bd;
        pub const m_flScrollSpeed: usize = 0x7c0;
        pub const m_bStartPointValid: usize = 0x7c4;
        pub const m_bEndPointValid: usize = 0x7c5;
        pub const m_hStartPoint: usize = 0x7c8;
        pub const m_hEndPoint: usize = 0x7cc;
        pub const m_iStartAttachment: usize = 0x7d0;
        pub const m_iEndAttachment: usize = 0x7d1;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Bookworm_KnightBarrierVData {
        pub const m_BlockParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_SelfHealVData {
        pub const m_SelfModifier: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GenericPerson_1 {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRiotProtocolBuffVData {
        pub const m_LaserParticle: usize = 0x750;
        pub const m_PulseHitEnemyParticle: usize = 0x830;
        pub const m_EnemyDebuffModifier: usize = 0x910;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierUppercuttedVData {
        pub const m_StunParticle: usize = 0x750;
        pub const m_strStunSound: usize = 0x830;
        pub const m_NoExplodeModifier: usize = 0x840;
        pub const m_ExplodeDebuffModifier: usize = 0x850;
        pub const m_flEnemyNoAirDashDuration: usize = 0x860;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_TrophyCollectorPassiveGold {
        pub const m_flCurrentThinkRate: usize = 0x1d0;
    }

    // Parent: CBaseFlex
    pub mod CBaseCombatCharacter {
        pub const m_bForceServerRagdoll: usize = 0xae0;
        pub const m_hMyWearables: usize = 0xae8;
        pub const m_impactEnergyScale: usize = 0xb00;
        pub const m_bApplyStressDamage: usize = 0xb04;
        pub const m_bDeathEventsDispatched: usize = 0xb05;
        pub const m_pVecRelationships: usize = 0xb48;
        pub const m_strRelationships: usize = 0xb50;
        pub const m_eHull: usize = 0xb58;
        pub const m_nNavHullIdx: usize = 0xb5c;
        pub const m_movementStats: usize = 0xb60;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ZombieWallGroundAura {
        pub const m_WallWarningParticle: usize = 0x108;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_InfiniteMagazine {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LifeSteal {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Ability02 {
        pub const m_flMarkInterval: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Frank_ShockTarget2VData {
        pub const m_ShockShootSound: usize = 0x1818;
        pub const m_ShockImpactSound: usize = 0x1828;
        pub const m_ShockImpactParticle: usize = 0x1838;
        pub const m_TracerParticle: usize = 0x1918;
        pub const m_ShockReadyParticle: usize = 0x19f8;
        pub const m_CastParticle: usize = 0x1ad8;
        pub const m_SlowModifier: usize = 0x1bb8;
        pub const m_FullyChargedFXModifier: usize = 0x1bc8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Protection_RacketVData {
        pub const m_CastOtherParticle: usize = 0x1818;
        pub const m_ArmorModifier: usize = 0x18f8;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_Spellbreaker_VData {
        pub const m_ProcParticle: usize = 0x750;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_NecroSkele {
        pub const m_tSpawnTime: usize = 0x17d8;
        pub const m_vecCastLocation: usize = 0x17dc;
        pub const m_bDontMove: usize = 0x17e8;
        pub const m_flAttackRange: usize = 0x17ec;
        pub const m_flSpawnDuration: usize = 0x17f0;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_Ice_Dome_Blocker {
        pub const m_flTurnSolidTime: usize = 0xa90;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BossInvuln {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TeleportVData {
        pub const m_SpeedBonusModifier: usize = 0x750;
    }

    // Parent: CCitadelAbilityDruidBasePlant
    pub mod CCitadelAbilityDruidPlantBranchWall {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityThumper1VData {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_WeaponShieldingVData {
        pub const m_BarrierModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
    pub mod CCitadel_Item_Disarm_VData {
        pub const m_BuffModifier: usize = 0x19c8;
        pub const m_DebuffModifier: usize = 0x19d8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierTier2BossLaserBeamVData {
        pub const m_bIsSideHead: usize = 0x750;
        pub const m_flSideSearchRadius: usize = 0x754;
        pub const m_flSideSearchAngle: usize = 0x758;
        pub const m_flMinShootTime: usize = 0x75c;
        pub const m_strBeamStartAttachmentPoint: usize = 0x760;
        pub const m_strBeamStartAttachmentPoint02: usize = 0x768;
        pub const m_strBeamStartSearchPos: usize = 0x770;
        pub const m_BeamPreviewEffect: usize = 0x778;
        pub const m_BeamActiveEffect: usize = 0x858;
        pub const m_BeamLoopSound: usize = 0x938;
        pub const m_BeamFireSound: usize = 0x948;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_OneVsOne {
    }

    // Parent: CAI_LocalNavigatorBase
    pub mod CAI_LocalNavigator {
        pub const m_bLastWasClear: usize = 0x60;
        pub const m_FullDirectTimer: usize = 0x100;
    }

    // Parent: CEntityComponent
    pub mod CPathQueryComponent {
    }

    // Parent: CTriggerMultiple
    pub mod CCitadelControlPointTrigger {
        pub const m_OnFullyCaptured: usize = 0x8f8;
        pub const m_OnBecomeCapturable: usize = 0x910;
        pub const m_flInitialRadius: usize = 0x928;
        pub const m_flEndRadius: usize = 0x92c;
        pub const m_flProgress: usize = 0x930;
        pub const m_flCaptureTime: usize = 0x934;
        pub const m_hUnlockPrereq: usize = 0x938;
        pub const m_bAvailable: usize = 0x93c;
        pub const m_bIsBeingCaptured: usize = 0x93d;
        pub const m_bIsBeingBlocked: usize = 0x93e;
        pub const m_flLastTouchedTime: usize = 0x948;
        pub const m_vecBeamTarget: usize = 0x94c;
        pub const m_vecBeamStart: usize = 0x958;
        pub const m_nFXProgressBeam: usize = 0x964;
        pub const m_strUnlockPrereq: usize = 0x968;
        pub const m_strBeamStart: usize = 0x970;
        pub const m_strBeamTarget: usize = 0x978;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_AerialAssault {
    }

    // Parent: CLogicalEntity
    pub mod CLogicRelay {
        pub const m_OnSpawn: usize = 0x4a0;
        pub const m_OnTrigger: usize = 0x4b8;
        pub const m_bDisabled: usize = 0x4d0;
        pub const m_bWaitForRefire: usize = 0x4d1;
        pub const m_bTriggerOnce: usize = 0x4d2;
        pub const m_bFastRetrigger: usize = 0x4d3;
        pub const m_bPassthoughCaller: usize = 0x4d4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_HopOutLockout {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Punkgoat_BlastedHealth {
        pub const m_nHealthBonus: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Punkgoat_BlastedHealthWatcher {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Frank_ReviveVData {
        pub const m_PreExplodeParticle: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x18f8;
        pub const m_nDeathMarkParticle: usize = 0x19d8;
        pub const m_nHitParticle: usize = 0x1ab8;
        pub const m_ElectricBulletImpactParticle: usize = 0x1b98;
        pub const m_ElectricBulletTracerParticle: usize = 0x1c78;
        pub const m_strTripSound: usize = 0x1d58;
        pub const m_strElectricBulletHitSound: usize = 0x1d68;
        pub const m_RevivingModifier: usize = 0x1d78;
        pub const m_SlowModifier: usize = 0x1d88;
        pub const m_DashSlowModifier: usize = 0x1d98;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Rutger_Pulse_Target {
        pub const m_vAuraCenter: usize = 0x2d0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ShakedownPulseVData {
        pub const m_strFireSound: usize = 0x750;
        pub const m_ShakeParticle: usize = 0x760;
        pub const m_ChainParticle: usize = 0x840;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityMeleeVData {
        pub const m_flMeleeInputBufferTime: usize = 0x1818;
        pub const m_flCollisionDistance: usize = 0x181c;
        pub const m_flHeavyAttackRequiredHoldTime: usize = 0x1820;
        pub const m_flLightAttackMaxHoldTime: usize = 0x1824;
        pub const m_flSideDashDodgeDist: usize = 0x1828;
        pub const m_flBackDashDodgeDist: usize = 0x182c;
        pub const m_MeleeDamageFlags: usize = 0x1830;
        pub const m_strEffectsAttachName: usize = 0x1838;
        pub const m_flChargeAnimDelayTime: usize = 0x1840;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_RebuttalWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
        pub const m_strSuccessProcSound: usize = 0x760;
        pub const m_strLightMeleeSweetenerSound: usize = 0x770;
        pub const m_strHeavyMeleeSweetenerSound: usize = 0x780;
    }

    // Parent: CitadelAbilityVData
    pub mod CitadelItemVData {
        pub const m_iItemTier: usize = 0x181c;
        pub const m_nUpgradeSlotCost: usize = 0x181d;
        pub const m_bWarnIfNoAffectedAbilities: usize = 0x181e;
        pub const m_bShowTextDescription: usize = 0x181f;
        pub const m_eShopFilters: usize = 0x1820;
        pub const m_eAbilityRequirements: usize = 0x1822;
        pub const m_strShopIconLarge: usize = 0x1828;
        pub const m_strLocSearchString: usize = 0x1838;
        pub const m_vecTooltipSectionInfo: usize = 0x1840;
        pub const m_sCustomTooltipID: usize = 0x1858;
        pub const m_bCustomTooltipInteractive: usize = 0x1860;
        pub const m_bDisabledForBots: usize = 0x1861;
        pub const m_sCustomStackLabel: usize = 0x1868;
        pub const m_vecComponentItems: usize = 0x1888;
        pub const m_vecDisabledOnHeroes: usize = 0x18a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BarrierTracker {
        pub const m_flMaxHealth: usize = 0xd4;
        pub const m_flCurrentHealth: usize = 0xd8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HeroRefresh {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InShopTunnel {
    }

    // Parent: None
    pub mod SequenceHistory_t {
        pub const m_hSequence: usize = 0x0;
        pub const m_flSeqStartTime: usize = 0x4;
        pub const m_flSeqFixedCycle: usize = 0x8;
        pub const m_nSeqLoopMode: usize = 0xc;
        pub const m_flPlaybackRate: usize = 0x10;
        pub const m_flCyclesPerSecond: usize = 0x14;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_ItemServices {
    }

    // Parent: None
    pub mod CPulse_OutflowConnection {
        pub const m_SourceOutflowName: usize = 0x0;
        pub const m_nDestChunk: usize = 0x10;
        pub const m_nInstruction: usize = 0x14;
        pub const m_OutflowRegisterMap: usize = 0x18;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Stomp_Projectile {
        pub const m_vLastStompPos: usize = 0x860;
        pub const m_bFinished: usize = 0x86c;
        pub const m_flWidth: usize = 0x870;
        pub const m_tDieTime: usize = 0x874;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_StackingDebuff {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidPlantHealingTreeVData {
        pub const m_HealingTreeModel: usize = 0x1818;
        pub const m_HealingFruitModel: usize = 0x18f8;
        pub const m_FruitGlowParticle: usize = 0x19d8;
        pub const m_FruitPickupParticle: usize = 0x1ab8;
        pub const m_HealingAuraModifier: usize = 0x1b98;
        pub const m_HealingFruitModifier: usize = 0x1ba8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Doorman_Cart {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityWreckerSalvageVData {
        pub const m_SalvageEnemyModifier: usize = 0x1818;
        pub const m_StunEnemyModifier: usize = 0x1828;
        pub const m_BuffModifier: usize = 0x1838;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_StickyBombAttachedVData {
        pub const m_BombAttachedParticle: usize = 0x750;
        pub const m_StunAttachedParticle: usize = 0x830;
        pub const m_ExplodeParticle: usize = 0x910;
        pub const m_BombAttachedVictimTeamParticle: usize = 0x9f0;
        pub const m_strExplodeSound: usize = 0xad0;
        pub const m_strTickTockSound: usize = 0xae0;
        pub const m_strTickTockFastSound: usize = 0xaf0;
        pub const m_OnGroundModifier: usize = 0xb00;
        pub const m_DetonateWarningTime: usize = 0xb10;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ZipLine_VData {
        pub const m_flZiplineAirDrag: usize = 0x1818;
        pub const m_flZiplineAirDragBoosted: usize = 0x181c;
        pub const m_flMinButtonHoldTimeToActivate: usize = 0x1820;
        pub const m_flCrouchDropSpeedFraction: usize = 0x1824;
        pub const m_flCrouchDropAirDragSuppressDuration: usize = 0x1828;
        pub const m_flDetachDisallowedTime: usize = 0x182c;
        pub const m_flCameraWobbleIntensity: usize = 0x1830;
        pub const m_flDismountSpeedMax: usize = 0x1834;
        pub const m_flDismountSpeedMaxBrawl: usize = 0x1838;
        pub const m_flZiplineKnockdownUpImpulse: usize = 0x183c;
        pub const m_flZiplineIntroDuration: usize = 0x1840;
        pub const m_DOFWhileZiplining: usize = 0x1844;
        pub const m_ZipLinePreviewParticle: usize = 0x1858;
        pub const m_ZipLineSpeedParticle: usize = 0x1938;
        pub const m_ZipLineTetherParticle: usize = 0x1a18;
        pub const m_ZipLineTetherAttachParticle: usize = 0x1af8;
        pub const m_ZipLineTetherStartParticle: usize = 0x1bd8;
        pub const m_ZipLineEnemyKnockdownProtectionParticle: usize = 0x1cb8;
        pub const m_ZipLineSelfKnockdownProtectionParticle: usize = 0x1d98;
        pub const m_ZipLineKnockdownProtectionStatusParticle: usize = 0x1e78;
        pub const m_strZipLineSummonSound: usize = 0x1f58;
        pub const m_strZipLineStartSound: usize = 0x1f68;
        pub const m_RidingZipLineModifier: usize = 0x1f78;
        pub const m_KnockedOffSlowModifier: usize = 0x1f88;
        pub const m_ZipLineIntroModifier: usize = 0x1f98;
        pub const m_ZipLineKnockdownImmuneModifier: usize = 0x1fa8;
        pub const m_ZipLineSlowModifier: usize = 0x1fb8;
        pub const m_cameraSequenceAwaitingTether: usize = 0x1fc8;
        pub const m_cameraSequenceLatched: usize = 0x2050;
        pub const m_cameraSequenceAttached: usize = 0x20d8;
        pub const m_cameraSequenceClear: usize = 0x2160;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_PrimaryWeapon_ScalingAltFire {
    }

    // Parent: CCitadel_Modifier_StatStealBase
    pub mod CCitadel_Modifier_Shadow_Strike_Watcher {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_T2Boss_Stagger_WatcherVData {
        pub const m_flDecayDuration: usize = 0x750;
        pub const m_flStaggeredDuration: usize = 0x754;
        pub const m_flBuildUpMax: usize = 0x758;
        pub const m_flAdditionlPlayerMinContribution: usize = 0x75c;
        pub const m_StaggeredModifier: usize = 0x760;
        pub const m_BuildUpModifier: usize = 0x770;
    }

    // Parent: None
    pub mod CNavLinkAreaEntityNpcUserList_t {
        pub const m_vecUsers: usize = 0x0;
    }

    // Parent: CLogicalEntity
    pub mod CTestPulseIO {
        pub const m_OnVariantVoid: usize = 0x4a0;
        pub const m_OnVariantBool: usize = 0x4b8;
        pub const m_OnVariantInt: usize = 0x4d8;
        pub const m_OnVariantFloat: usize = 0x4f8;
        pub const m_OnVariantString: usize = 0x518;
        pub const m_OnVariantColor: usize = 0x538;
        pub const m_OnVariantVector: usize = 0x558;
        pub const m_bAllowEmptyInputs: usize = 0x580;
        pub const m_OnInternalTestVoid: usize = 0x588;
        pub const m_OnInternalTestBool: usize = 0x5a0;
        pub const m_OnInternalTestInt: usize = 0x5c0;
        pub const m_OnInternalTestFloat: usize = 0x5e0;
        pub const m_OnInternalTestString: usize = 0x600;
        pub const m_OnInternalTestColor: usize = 0x620;
        pub const m_OnInternalTestVector: usize = 0x640;
        pub const m_OnInternalTestEntityName: usize = 0x668;
        pub const m_OnInternalTestEntityHandle: usize = 0x688;
        pub const m_OnInternalTestSchemaEnum: usize = 0x6a8;
        pub const m_OnInternalTestFloatString: usize = 0x6c8;
        pub const m_OnInternalTestEntityNameString: usize = 0x6f0;
        pub const m_OnInternalTestEntityHandleInt: usize = 0x718;
        pub const m_OnInternalTestStringStringString: usize = 0x738;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerTrooperDamageReductionDetector {
        pub const m_flRadius: usize = 0x8e0;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Unicorn_PrimaryWeaponVData {
        pub const m_BatonFlameParticle: usize = 0x19c8;
        pub const m_strBounceSound: usize = 0x1aa8;
        pub const m_strFiringLoopSound: usize = 0x1ab8;
        pub const m_flTargetingRadius: usize = 0x1ac8;
        pub const m_flUnitHitTargetingRadius: usize = 0x1acc;
        pub const m_flOrbHitTargetingRadius: usize = 0x1ad0;
        pub const m_eLosCheckType: usize = 0x1ad4;
        pub const m_nRicochetTargets: usize = 0x1ad8;
        pub const m_flRicochetPitchAddition: usize = 0x1adc;
        pub const m_flOrbRicochetPitchAddition: usize = 0x1ae0;
        pub const m_flRicochetGravity: usize = 0x1ae4;
        pub const m_flOrbRicochetConeAngle: usize = 0x1ae8;
        pub const m_flRicochetConeAngle: usize = 0x1aec;
        pub const m_flMaxRicohetDot: usize = 0x1af0;
        pub const m_flMinTargetDot: usize = 0x1af4;
        pub const m_flRicochetDamageScale: usize = 0x1af8;
        pub const m_flRearOffset: usize = 0x1afc;
        pub const m_flRicochetDotMaxDampening: usize = 0x1b00;
        pub const m_flRicochetDotMinDampening: usize = 0x1b04;
        pub const m_flMinVelocityDampening: usize = 0x1b08;
        pub const m_flMaxVelocityDampening: usize = 0x1b0c;
        pub const m_flMinButtonHoldTimeToPlaySound: usize = 0x1b10;
    }

    // Parent: CCitadel_Modifier_Sleep
    pub mod CCitadel_Modifier_Familiar_Asleep {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatGoingUp_LingeringAirControl {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_SelfHeal {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_SettingSun_VData {
        pub const m_BeamTargetParticle: usize = 0x1818;
        pub const m_UnitTargetParticle: usize = 0x18f8;
        pub const m_SettingSunThinkerModifier: usize = 0x19d8;
        pub const m_flSSCameraPreviewOffset: usize = 0x19e8;
        pub const m_flSSCameraPreviewSpeed: usize = 0x19ec;
        pub const m_flSSCameraPreviewDistance: usize = 0x19f0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_WreckerScrapBlast {
        pub const m_BlastParticle: usize = 0xf70;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IncendiaryDebuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ZiplineKnockdownImmuneVData {
        pub const m_ZipLineEnemyKnockdownProtectionParticle: usize = 0x750;
        pub const m_ZipLineSelfKnockdownProtectionParticle: usize = 0x830;
        pub const m_ZipLineKnockdownProtectionStatusParticle: usize = 0x910;
        pub const m_ZipLineKnockdownProtectionStatusEnemyParticle: usize = 0x9f0;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_WeaponDamage {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_HideOutTargetSpawner {
    }

    // Parent: CTriggerNeutralShield
    pub mod CTriggerMidBossShield {
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_Destroyable_Building {
        pub const m_CCitadelMinimapComponent: usize = 0xbf0;
        pub const m_OnDestroyed: usize = 0xc10;
        pub const m_OnRevitilized: usize = 0xc28;
        pub const m_OnDamageTaken: usize = 0xc40;
        pub const m_OnLifeChanged: usize = 0xc60;
        pub const m_OnBecomeActive: usize = 0xc80;
        pub const m_OnBecomeInvulnerable: usize = 0xc98;
        pub const m_OnBecomeVulnerable: usize = 0xcb0;
        pub const m_OnUnderAttack: usize = 0xcc8;
        pub const m_OnAttackSubsided: usize = 0xce0;
        pub const m_nBuildingHealth: usize = 0xcf8;
        pub const m_iLane: usize = 0xd00;
        pub const m_flDestroyedTime: usize = 0xd04;
        pub const m_flLastDamagedTime: usize = 0xd08;
        pub const m_angOriginal: usize = 0xd0c;
        pub const m_backdoorProtectionTrigger: usize = 0xd38;
        pub const m_strTrooperApproach: usize = 0xd48;
        pub const m_CCitadelAbilityComponent: usize = 0xd70;
        pub const m_vecWeakPoints: usize = 0xfd8;
        pub const m_bDestroyed: usize = 0x1040;
        pub const m_bActive: usize = 0x1041;
        pub const m_bFinal: usize = 0x1042;
    }

    // Parent: CParticleSystem
    pub mod CTeamRelativeParticleSystem {
        pub const m_iszFriendlyEffectName: usize = 0xcf8;
        pub const m_iszEnemyEffectName: usize = 0xd00;
        pub const m_iFriendlyEffectIndex: usize = 0xd08;
        pub const m_iEnemyEffectIndex: usize = 0xd10;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_DivinersKevlar {
        pub const m_bExecuted: usize = 0xf78;
    }

    // Parent: CNPC_SimpleAnimatingAIVData
    pub mod CNPC_FieldSentryVData {
        pub const m_LaserSightParticle: usize = 0x108;
        pub const m_KillExplosionParticle: usize = 0x1e8;
        pub const m_DeployProgressModifier: usize = 0x2c8;
        pub const m_sSpawnSound: usize = 0x2d8;
        pub const m_sKillExplosionSound: usize = 0x2e8;
        pub const m_sTargetAcquiredLocalSound: usize = 0x2f8;
        pub const m_sTargetAcquiredSound: usize = 0x308;
        pub const m_flIdleTurnSpeed: usize = 0x318;
        pub const m_flIdleTurnAngles: usize = 0x31c;
        pub const m_flTrooperTakeDamageMult: usize = 0x320;
        pub const m_flNeutralTakeDamageMulti: usize = 0x324;
        pub const m_flNotifyEventTime: usize = 0x328;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_UnrestrictedMotorMovement {
    }

    // Parent: CPointEntity
    pub mod CAI_LookTarget {
        pub const m_iContext: usize = 0x4a0;
        pub const m_iPriority: usize = 0x4a4;
        pub const m_bDisabled: usize = 0x4a8;
        pub const m_flTimeNextAvailable: usize = 0x4ac;
        pub const m_flMaxDist: usize = 0x4b0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Familiar_AttachedVData {
        pub const m_strForceDetachSound: usize = 0x750;
        pub const m_ItemUsedParticle: usize = 0x760;
        pub const m_HostModifier: usize = 0x840;
        pub const m_ReplicatedBarrierModifier: usize = 0x850;
        pub const m_AttachEndingModifier: usize = 0x860;
        pub const m_flInputHoldTimeToCancel: usize = 0x870;
        pub const m_flEndingWarningDuration: usize = 0x874;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Familiar_AltWeapon {
        pub const m_nAmmoToBeConsumedForChannel: usize = 0x1338;
        pub const m_bForceFiring: usize = 0x133a;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CopyUltVData {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_MagicBoltVData {
        pub const m_TargetDebuffModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
        pub const m_RetargetParticle: usize = 0x1908;
        pub const m_strRedirect: usize = 0x19e8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Opera_Ability04 {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ProjectileTestVData {
        pub const m_AOEModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_ChainLightningEffectVData
    pub mod CCitadel_Modifier_Galvanic_Storm_EffectVData {
        pub const m_BuffChainParticle: usize = 0x840;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DiminishingSlow {
        pub const m_flSlowPercent: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Unstoppable {
        pub const m_bInCheckState: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_UnstoppableVData {
        pub const m_ShieldParticle: usize = 0x750;
        pub const m_PlayerShieldParticle: usize = 0x830;
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelBulletRedirectVolume {
    }

    // Parent: CNodeEnt
    pub mod CNodeEnt_InfoNodeAirHint {
    }

    // Parent: CRulePointEntity
    pub mod CGamePlayerEquip {
    }

    // Parent: CBaseEntity
    pub mod CPointEntityFinder {
        pub const m_hEntity: usize = 0x4a0;
        pub const m_iFilterName: usize = 0x4a8;
        pub const m_hFilter: usize = 0x4b0;
        pub const m_iRefName: usize = 0x4b8;
        pub const m_hReference: usize = 0x4c0;
        pub const m_FindMethod: usize = 0x4c4;
        pub const m_OnFoundEntity: usize = 0x4c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadelModifierDruidLeechSeed {
        pub const m_nDamagePulsesDone: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Frank_PainAuraVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_AuraParticle: usize = 0x760;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Rutger_Pulse_VData {
        pub const m_strSilenceTargetSound: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TangoTether_TetherReceiverVData {
        pub const m_strAttackBuffParticle: usize = 0x750;
        pub const m_sBuffLoopingSound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy {
        pub const m_vThrowVelocity: usize = 0xd8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bull_HealVData {
        pub const m_AuraModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpilledBloodThinkerVData {
        pub const m_SpilledBloodParticle: usize = 0x750;
        pub const m_flTickRate: usize = 0x830;
        pub const m_flHeight: usize = 0x834;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_EtherealBulletsVData {
        pub const m_BuffModifier: usize = 0x780;
        pub const m_BulletDamageBuffModifier: usize = 0x790;
        pub const m_ProcParticle: usize = 0x7a0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_QuickSilverBuffVData {
        pub const m_RapidFireParticle: usize = 0x750;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityPropertySingleStat {
    }

    // Parent: None
    pub mod CPulseGraphDef {
        pub const m_DomainIdentifier: usize = 0x8;
        pub const m_DomainSubType: usize = 0x18;
        pub const m_ParentMapName: usize = 0x30;
        pub const m_ParentXmlName: usize = 0x40;
        pub const m_Chunks: usize = 0x50;
        pub const m_Cells: usize = 0x68;
        pub const m_Vars: usize = 0x80;
        pub const m_PublicOutputs: usize = 0x98;
        pub const m_InvokeBindings: usize = 0xb0;
        pub const m_CallInfos: usize = 0xc8;
        pub const m_Constants: usize = 0xe0;
        pub const m_DomainValues: usize = 0xf8;
        pub const m_BlackboardReferences: usize = 0x110;
        pub const m_OutputConnections: usize = 0x128;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_MidBoss {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelModifierTier3BossAoeWaveAuraVData {
        pub const m_flWaveHeight: usize = 0x7a8;
        pub const m_AmberWaveParticle: usize = 0x7b0;
        pub const m_SapphWaveParticle: usize = 0x890;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Frank_ShockTargetVData {
        pub const m_ZapParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_TurretClone_VData {
        pub const m_strTurretParticle: usize = 0x1818;
        pub const m_strSwapParticle: usize = 0x18f8;
        pub const m_TurretModel: usize = 0x19d8;
        pub const m_strTurretLoopSound: usize = 0x1ab8;
        pub const m_strTurretLoopStartSound: usize = 0x1ac8;
        pub const m_strTurretLoopEndSound: usize = 0x1ad8;
        pub const m_strTurretShootSound: usize = 0x1ae8;
        pub const m_strSwapSound: usize = 0x1af8;
        pub const m_strSwapCloneSound: usize = 0x1b08;
        pub const m_BuffModifier: usize = 0x1b18;
        pub const m_cameraSequenceTeleport: usize = 0x1b28;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Gravity_Lasso_Self {
        pub const m_bHasUsedBouncePad: usize = 0xd0;
        pub const m_vCastTargets: usize = 0xd8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_BubbleVData {
        pub const m_CastParticle: usize = 0x18b8;
        pub const m_CastTargetSound: usize = 0x1998;
        pub const m_BubbleModifier: usize = 0x19a8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PullDownToGround {
    }

    // Parent: CBaseDashCastAbilityVData
    pub mod CAbilityCadenceSilenceContraptionsVData {
        pub const m_SilenceContraptionsModifier: usize = 0x18a0;
    }

    // Parent: CLogicalEntity
    pub mod CLogicPlayerProxy {
        pub const m_PlayerHasAmmo: usize = 0x4a0;
        pub const m_PlayerHasNoAmmo: usize = 0x4b8;
        pub const m_PlayerDied: usize = 0x4d0;
        pub const m_RequestedPlayerHealth: usize = 0x4e8;
        pub const m_hPlayer: usize = 0x508;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Mirage_SandPhantom_Proc_VData {
        pub const m_bRollOnceForAllBulletsInAShot: usize = 0x750;
        pub const m_flMaxBulletsToProcInShot: usize = 0x754;
        pub const m_bCanProcMultipleTimesFromSameShot: usize = 0x758;
        pub const m_bRequiresTargetFilter: usize = 0x759;
        pub const m_ProcReadyModifier: usize = 0x760;
        pub const m_PassiveVictimModifier: usize = 0x770;
        pub const m_ProcReadyParticle: usize = 0x780;
        pub const m_TracerAdditionParticle: usize = 0x860;
        pub const m_ExplodeParticle: usize = 0x940;
        pub const m_OnBulletRolledProcSound: usize = 0xa20;
        pub const m_ProcSound: usize = 0xa30;
        pub const m_ExplodeSound: usize = 0xa40;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Rutger_CheatDeath_VData {
        pub const m_ModifierCheatDeathActivated: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRapidFireChannelVData {
        pub const m_flAirDrag: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_FlyingStrikeTarget {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Spinning_Blade {
        pub const m_vecOutgoingHits: usize = 0x1370;
        pub const m_hActiveProjectile: usize = 0x1388;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bomber_Ability03 {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_FireBombVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_ExplodeSound: usize = 0x18f8;
        pub const m_ProgressBarModifier: usize = 0x1908;
        pub const m_FireBombModifier: usize = 0x1918;
        pub const m_DebuffModifier: usize = 0x1928;
        pub const m_BuffModifier: usize = 0x1938;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Surging_Power {
    }

    // Parent: None
    pub mod CBasePlayerControllerAPI {
    }

    // Parent: CMarkupVolumeTagged
    pub mod CSimpleMarkupVolumeTagged {
    }

    // Parent: CEnvSoundscape
    pub mod CEnvSoundscapeAlias_snd_soundscape {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_Boss_Tier3VData {
        pub const m_flAllyPitTimeMin: usize = 0x1348;
        pub const m_nPhase2Health: usize = 0x134c;
        pub const m_flEyeZOffset: usize = 0x1350;
        pub const m_flDefaultMoveSpeed: usize = 0x1354;
        pub const m_flEnemyTrooperProtectionRange: usize = 0x1358;
        pub const m_vPhase1ObserverOrigin: usize = 0x135c;
        pub const m_vPhase2ObserverOrigin: usize = 0x1368;
        pub const m_flPhase1ObserverPitch: usize = 0x1374;
        pub const m_flPhase2ObserverPitch: usize = 0x1378;
        pub const m_flPhase2MaxAnimSpinRate: usize = 0x137c;
        pub const m_flPhase2AttackBias: usize = 0x1380;
        pub const m_flRotateSpeed: usize = 0x1384;
        pub const m_flPhase2SightRange: usize = 0x1388;
        pub const m_flCoreRadius: usize = 0x138c;
        pub const m_flCoreDeathTime: usize = 0x1390;
        pub const m_flTransitionLightTime01: usize = 0x1394;
        pub const m_flTransitionLightTime02: usize = 0x1398;
        pub const m_flTransitionLightTime03: usize = 0x139c;
        pub const m_flTransitionLightTime04: usize = 0x13a0;
        pub const m_flShrineAttackHealthLossPerAttack: usize = 0x13a4;
        pub const m_flShrineAttackMinTimeBetweenAttacks: usize = 0x13a8;
        pub const m_AmberEffigyExplosionParticle: usize = 0x13b0;
        pub const m_AmberTransformUpExplosionParticle: usize = 0x1490;
        pub const m_AmberBeginDyingParticle: usize = 0x1570;
        pub const m_AmberDeathLargeExplosionParticle: usize = 0x1650;
        pub const m_AmberHitResponseParticle: usize = 0x1730;
        pub const m_AmberPhase2AmbientParticle: usize = 0x1810;
        pub const m_SapphEffigyExplosionParticle: usize = 0x18f0;
        pub const m_SapphTransformUpExplosionParticle: usize = 0x19d0;
        pub const m_SapphBeginDyingParticle: usize = 0x1ab0;
        pub const m_SapphDeathLargeExplosionParticle: usize = 0x1b90;
        pub const m_SapphHitResponseParticle: usize = 0x1c70;
        pub const m_SapphPhase2AmbientParticle: usize = 0x1d50;
        pub const m_PatronTransformDownEyeParticle: usize = 0x1e30;
        pub const m_strWIPModelName: usize = 0x1f10;
        pub const m_strTeamAmberModel: usize = 0x1ff0;
        pub const m_AmberEffigyModel: usize = 0x20d0;
        pub const m_SapphEffigyModel: usize = 0x21b0;
        pub const m_AmberCoreModel: usize = 0x2290;
        pub const m_SapphCoreModel: usize = 0x2370;
        pub const m_flCoreVerticalOffset: usize = 0x2450;
        pub const m_PatronTransformStartSound: usize = 0x2458;
        pub const m_PatronKilledSound: usize = 0x2468;
        pub const m_EffigySapphireExplodeSound: usize = 0x2478;
        pub const m_EffigyAmberExplodeSound: usize = 0x2488;
        pub const m_AmberReformSound: usize = 0x2498;
        pub const m_SapphireReformSound: usize = 0x24a8;
        pub const m_AmberReformingLoopSound: usize = 0x24b8;
        pub const m_SapphireReformingLoopSound: usize = 0x24c8;
        pub const m_LaserBeamModifier: usize = 0x24d8;
        pub const m_DyingModifier: usize = 0x24e8;
        pub const m_VulnerableModifier: usize = 0x24f8;
        pub const m_Phase1Modifier: usize = 0x2508;
        pub const m_EffigyModifier: usize = 0x2518;
        pub const m_Phase2DamagePulseModifier: usize = 0x2528;
        pub const m_BackdoorProtection: usize = 0x2538;
        pub const m_RangedArmorModifier: usize = 0x2548;
        pub const m_ObjectiveRegen: usize = 0x2558;
        pub const m_ObjectiveHealthGrowthPhase1: usize = 0x2568;
        pub const m_ObjectiveHealthGrowthPhase2: usize = 0x2578;
        pub const m_DefenderInPitInvulnerable: usize = 0x2588;
        pub const m_flLaserMoveSpeed: usize = 0x2598;
        pub const m_flLaserCooldownPhase1: usize = 0x259c;
        pub const m_flLaserCooldownPhase2: usize = 0x25a0;
        pub const m_flLaserDurationPhase1: usize = 0x25a4;
        pub const m_flLaserDurationPhase2: usize = 0x25a8;
        pub const m_flPhase1DyingBegin: usize = 0x25ac;
        pub const m_flPhase1DyingDrop: usize = 0x25b0;
        pub const m_flPhase2DyingDropScale: usize = 0x25b4;
        pub const m_flPhase1DyingWait: usize = 0x25b8;
        pub const m_flPhase1DyingTransformUp: usize = 0x25bc;
        pub const m_flPhase1BossScale: usize = 0x25c0;
        pub const m_flPhase2BossScale: usize = 0x25c4;
        pub const m_flPostShrineTransition: usize = 0x25c8;
        pub const m_ArmAttackGroundHit: usize = 0x25d0;
        pub const m_flArmAttackHealthMin: usize = 0x26b0;
        pub const m_flArmAttackHealthMax: usize = 0x26b4;
        pub const m_flArmAttackCooldownMin: usize = 0x26b8;
        pub const m_flArmAttackCooldownMax: usize = 0x26bc;
        pub const m_flArmAttackTimeToHit: usize = 0x26c0;
        pub const m_flArmAttackRadius: usize = 0x26c4;
        pub const m_flArmAttackPosDotThres: usize = 0x26c8;
        pub const m_flArmAttackDamage: usize = 0x26cc;
        pub const m_flArmAttackKnockbackStrength: usize = 0x26d0;
        pub const m_flArmAttackInvulCooldownScale: usize = 0x26d4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hideout_Teleport {
        pub const m_sDestMap: usize = 0xd0;
        pub const m_sDestLocString: usize = 0xd8;
        pub const m_sLandmarkName: usize = 0xe0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_SwingLineVData {
        pub const m_SwingModifier: usize = 0x1818;
        pub const m_SwingAttachParticle: usize = 0x1828;
        pub const m_strDaggerHitSound: usize = 0x1908;
        pub const m_strDaggerExplodeSound: usize = 0x1918;
        pub const m_flSwingStartDelay: usize = 0x1928;
        pub const m_flSwingMaxDuration: usize = 0x192c;
        pub const m_flMass: usize = 0x1930;
        pub const m_flBodyForwardForce: usize = 0x1934;
        pub const m_flCameraForwardForce: usize = 0x1938;
        pub const m_flInputForce: usize = 0x193c;
        pub const m_flPullForce: usize = 0x1940;
        pub const m_flGravityForce: usize = 0x1944;
        pub const m_flDampingConstant: usize = 0x1948;
        pub const m_flIdealSpringLengthOverride: usize = 0x194c;
        pub const m_flTensionSpringConstant: usize = 0x1950;
        pub const m_flMaxSpringForce: usize = 0x1954;
        pub const m_flMaxSpeed: usize = 0x1958;
        pub const m_flWhiskerLength: usize = 0x195c;
        pub const m_flWhiskerOffset: usize = 0x1960;
        pub const m_flWhiskerForce: usize = 0x1964;
        pub const m_flWhiskerPositionVerticalOffset: usize = 0x1968;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BigBoltVData {
        pub const m_AuraModifier: usize = 0x750;
        pub const m_ShieldParticle: usize = 0x760;
        pub const m_flModelScale: usize = 0x840;
    }

    // Parent: CCitadel_Modifier_InvisVData
    pub mod CCitadel_Modifier_LurkersAmbush_InvisVData {
        pub const m_flMaxCameraAngleForSeeing: usize = 0xa18;
        pub const m_flMaxDistanceForSeeing: usize = 0xa1c;
        pub const m_flInvisBias: usize = 0xa20;
        pub const m_flSpottedMinTimeToStart: usize = 0xa24;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GenericPerson_4 {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGenericPerson1VData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Opera_Ability02 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_StickyBomb {
        pub const m_hAutoTarget: usize = 0xf74;
        pub const m_flHookEndTime: usize = 0xf78;
        pub const m_flBombBonusHits: usize = 0xf7c;
        pub const m_flBombBonusKills: usize = 0xf80;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TargetPracticeSelfVData {
        pub const m_TracerParticle: usize = 0x750;
        pub const m_strWeaponShootSound: usize = 0x830;
        pub const m_strBulletWhizSound: usize = 0x840;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityChronoSwapVData {
        pub const m_MultiSwapEffect: usize = 0x1818;
        pub const m_BubbleMoveModifier: usize = 0x18f8;
        pub const m_ShieldModifier: usize = 0x1908;
    }

    // Parent: None
    pub mod CCitadel_Modifier_TechCleaveDamageTaken_t {
        pub const m_flDamageAmount: usize = 0x0;
        pub const m_flTimeToExpire: usize = 0x4;
        pub const m_ProcAbility: usize = 0x8;
        pub const m_pTarget: usize = 0xc;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierVitalitySuppressorVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityMantleVData {
        pub const m_vecMantleTypes: usize = 0x1818;
        pub const m_flMantleSlowOnHitDuration: usize = 0x1830;
        pub const m_MantleSlowOnHitModifier: usize = 0x1838;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TurnCameraToTarget {
        pub const m_hTarget: usize = 0xd0;
    }

    // Parent: CEntityComponent
    pub mod CRenderComponent {
        pub const __m_pChainEntity: usize = 0x10;
        pub const m_bIsRenderingWithViewModels: usize = 0x50;
        pub const m_nSplitscreenFlags: usize = 0x54;
        pub const m_bEnableRendering: usize = 0x58;
        pub const m_bInterpolationReadyToDraw: usize = 0xa8;
    }

    // Parent: CBaseAnimGraph
    pub mod CWaterBullet {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerSoundscape {
        pub const m_hSoundscape: usize = 0x8e0;
        pub const m_SoundscapeName: usize = 0x8e8;
        pub const m_spectators: usize = 0x8f0;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadelDruidInvisAura {
        pub const nInvisID: usize = 0x108;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Doorman_Cart_Projectile {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Nikuman {
        pub const m_nTotalSelfHeal: usize = 0x408;
        pub const m_nTotalTeammateHeal: usize = 0x40c;
    }

    // Parent: CCitadelModifierVData
    pub mod CGameModifier_FireConCommandVData {
        pub const m_FireOnAdded: usize = 0x750;
        pub const m_FireOnRemoved: usize = 0x758;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityShivDashVData {
        pub const m_DashModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_DashImpactEffect: usize = 0x1838;
        pub const m_DashSwingEffect: usize = 0x1918;
        pub const m_DashLineEffect: usize = 0x19f8;
        pub const m_strDashStartEcho: usize = 0x1ad8;
        pub const m_strDashHitEnemy: usize = 0x1ae8;
        pub const m_flEchoDelay: usize = 0x1af8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_CultistSacrifice_VData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_strOffCooldownSound: usize = 0x18c8;
        pub const m_CastTargetEffect: usize = 0x18d8;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_MagicClarityWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TeamRelativeParticleVData {
        pub const m_ParentViewParticle: usize = 0x750;
        pub const m_OtherPlayerViewParticle: usize = 0x830;
    }

    // Parent: CCitadelItemPickupVData
    pub mod CCitadelItemPunchableNeutralGoldVData {
        pub const m_flGroundOffset: usize = 0x108;
        pub const m_flSpinRate: usize = 0x10c;
        pub const m_flBobHeight: usize = 0x110;
        pub const m_flBobFrequency: usize = 0x114;
        pub const m_flSpinSpeed: usize = 0x118;
        pub const m_PunchPickupModifier: usize = 0x120;
    }

    // Parent: None
    pub mod CPointTeleportAPI {
    }

    // Parent: CPhysicsProp
    pub mod CItemParachute {
        pub const m_hAttachedEntity: usize = 0xd60;
        pub const m_eObjectivePosition: usize = 0xd74;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_MagicBolt {
        pub const bIsCloneProjectile: usize = 0x860;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_CosmeticItem_Snowball {
        pub const m_nSeasonal2025Level: usize = 0x11f8;
        pub const m_flSeasonal2025LevelFrac: usize = 0x11fc;
        pub const m_flNextShotTime: usize = 0x1200;
        pub const m_nShotsRemaining: usize = 0x1204;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InHideoutMap {
    }

    // Parent: CPointEntity
    pub mod CPointChildModifier {
        pub const m_bOrphanInsteadOfDeletingChildrenOnRemove: usize = 0x4a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatFlipMaxHealthBuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_AnimalCurseVData {
        pub const m_CursedModel: usize = 0x750;
        pub const m_TargetParticle: usize = 0x838;
        pub const m_flModelScale: usize = 0x918;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTokamakHeatSinksInherentVData {
        pub const m_HotTracerParticle: usize = 0x1818;
        pub const m_HotWeaponFxParticle: usize = 0x18f8;
        pub const m_strHotWeaponShootSound: usize = 0x19d8;
        pub const m_strOverheatRed: usize = 0x19e8;
        pub const m_strOverheatFull: usize = 0x19f8;
    }

    // Parent: CCitadel_Modifier_Burning
    pub mod CCitadel_Modifier_SpreadingFire_DOT {
        pub const m_flLastBurnTime: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_IcarusWingsVData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_strFlyingSound: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ColossusActive {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_MagicShock_ProcVData {
        pub const m_ProcParticle: usize = 0x780;
        pub const m_hDamageTrackModifier: usize = 0x860;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_AcolytesGlove {
        pub const m_flCooldownDuration: usize = 0x208;
    }

    // Parent: CPhysicsProp
    pub mod CShatterGlassShardPhysics {
        pub const m_bDebris: usize = 0xd60;
        pub const m_hParentShard: usize = 0xd64;
        pub const m_ShardDesc: usize = 0xd68;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelAbilityDruidHelicopterSeeds {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatFlipDamageBuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GenericPerson_2 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SettingSunThinker {
        pub const m_flTickInterval: usize = 0xd0;
        pub const m_flRadius: usize = 0xd4;
        pub const m_CenterRadius: usize = 0xd8;
        pub const m_CenterDamage: usize = 0xdc;
        pub const m_OuterDamage: usize = 0xe0;
        pub const m_StunDuration: usize = 0xe4;
        pub const m_TargetingDuration: usize = 0xe8;
        pub const m_ShootDuration: usize = 0xec;
        pub const m_bTargetingCompleted: usize = 0xf0;
        pub const m_bSecondHit: usize = 0xf1;
        pub const m_bTwoHits: usize = 0xf2;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ProjectMind {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MetalSkinVData {
        pub const m_BuffStartParticle: usize = 0x750;
        pub const m_BuffEndParticle: usize = 0x830;
        pub const m_strHitProcSound: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier2Boss_StatTracker {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RespawnCredit {
        pub const m_bActivated: usize = 0xd0;
        pub const m_bSpokeAboutToExpire: usize = 0xd1;
        pub const m_iMessageCount: usize = 0xd4;
    }

    // Parent: None
    pub mod CModifierProperty {
        pub const __m_pChainEntity: usize = 0x8;
        pub const m_hOwner: usize = 0x30;
        pub const m_vecModifiers: usize = 0x38;
        pub const m_bModifierStatesDirty: usize = 0x1c7;
        pub const m_bPredictedOwner: usize = 0x1c8;
        pub const m_bAllowModifiersOnDeadEntities: usize = 0x1c9;
        pub const m_iLockRefCount: usize = 0x1ca;
        pub const m_hHandle: usize = 0x1cc;
        pub const m_nBroadcastEventListenerMask: usize = 0x1d0;
        pub const m_nCachedHighestParticleIndex: usize = 0x1d4;
        pub const m_pNotifyOwnerEvents: usize = 0x1d8;
        pub const m_nDisabledGroups: usize = 0x1e0;
        pub const m_bvEnabledStateMask: usize = 0x1e4;
        pub const m_bvDisabledStateMask: usize = 0x20c;
        pub const m_bvEnabledPredictedStateMask: usize = 0x234;
        pub const m_bParentWantsModifierStateChangeCallback: usize = 0x268;
    }

    // Parent: CTriggerModifier
    pub mod CCitadelTeleportTrigger {
        pub const m_CCitadelMinimapComponent: usize = 0x8f0;
        pub const m_vExitOrigin: usize = 0x910;
        pub const m_strExitPoint: usize = 0x960;
        pub const m_OnTeleport: usize = 0x968;
        pub const m_strPropModel: usize = 0x980;
        pub const m_flTeleportDelay: usize = 0x988;
    }

    // Parent: CBaseModelEntity
    pub mod CNPC_Neutral_Weakpoint {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Cyclone {
        pub const m_CycloneAbility: usize = 0x860;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_T3Boss_EffigyVData {
        pub const m_AmberEffigyEffect: usize = 0x750;
        pub const m_SapphEffigyEffect: usize = 0x830;
    }

    // Parent: CBaseEntity
    pub mod CPathParticleRope {
        pub const m_bStartActive: usize = 0x4a8;
        pub const m_flMaxSimulationTime: usize = 0x4ac;
        pub const m_iszEffectName: usize = 0x4b0;
        pub const m_PathNodes_Name: usize = 0x4b8;
        pub const m_flParticleSpacing: usize = 0x4d0;
        pub const m_flSlack: usize = 0x4d4;
        pub const m_flRadius: usize = 0x4d8;
        pub const m_ColorTint: usize = 0x4dc;
        pub const m_nEffectState: usize = 0x4e0;
        pub const m_iEffectIndex: usize = 0x4e8;
        pub const m_PathNodes_Position: usize = 0x4f0;
        pub const m_PathNodes_TangentIn: usize = 0x508;
        pub const m_PathNodes_TangentOut: usize = 0x520;
        pub const m_PathNodes_Color: usize = 0x538;
        pub const m_PathNodes_PinEnabled: usize = 0x550;
        pub const m_PathNodes_RadiusScale: usize = 0x568;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_DoubleHit {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Drifter_Darkness_Caster_VData {
        pub const m_SpiritBulletImpactParticle: usize = 0x750;
        pub const m_SpiritBulletTracerParticle: usize = 0x830;
        pub const m_strSpiritBulletHitSound: usize = 0x910;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Thumper_3 {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityWreckerUltimateVData {
        pub const m_BeamParticle: usize = 0x1818;
        pub const m_ChargeParticle: usize = 0x18f8;
        pub const m_ActiveModifier: usize = 0x19d8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_BulletFlurryVData {
        pub const m_ChannelParticle: usize = 0x1818;
        pub const m_BulletFlurryModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LifeDrainVData {
        pub const m_SilenceModifier: usize = 0x750;
        pub const m_DrainParticle: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Base {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_SpiderProjectile {
        pub const m_flNextRandomPositionTime: usize = 0x860;
    }

    // Parent: CCitadel_UtilityUpgrade_RocketBoots
    pub mod CCitadel_UtilityUpgrade_RocketBooster {
        pub const m_nTargetingParticleIndex: usize = 0x1078;
        pub const m_flCastTime: usize = 0x107c;
        pub const m_bCrashingDown: usize = 0x1080;
        pub const m_bImpulseApplied: usize = 0x1081;
        pub const m_bCanCrash: usize = 0x1082;
        pub const m_vecCrashPosition: usize = 0x1084;
        pub const m_vecCrashDirection: usize = 0x1090;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_HealthRegenAura {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_T2Boss_Staggered {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_NPCAbility_Shield_VData {
        pub const m_flShieldOffset: usize = 0x1818;
        pub const m_flShieldScale: usize = 0x181c;
    }

    // Parent: CPointEntity
    pub mod CCredits {
        pub const m_OnCreditsDone: usize = 0x4a0;
        pub const m_bRolledOutroCredits: usize = 0x4b8;
        pub const m_flLogoLength: usize = 0x4bc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_AttachLaunchOff {
        pub const m_bForceApplied: usize = 0xd0;
        pub const m_vTossUpForce: usize = 0xd4;
        pub const m_flCurrentVelocityScale: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Fear_VData {
        pub const m_ExplodeParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifier_Wrecker_UltimateThrowEnemyVData {
        pub const m_EnemyHeroStasisEffect: usize = 0x830;
        pub const m_EnemyHeroGrabEffect: usize = 0x910;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LightningBallVData {
        pub const m_ZapParticle: usize = 0x750;
        pub const m_TargetScreenParticleEffect: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Dazed {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ZiplineBoost {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Arcane_Eater_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Containment_Victim {
        pub const m_flGoalHeight: usize = 0xd0;
        pub const m_flFallRate: usize = 0xd4;
        pub const m_nFXIndex: usize = 0xd8;
        pub const m_nFXIndexVictim: usize = 0xdc;
        pub const m_nChainFxIndex: usize = 0xe0;
        pub const m_flTetherRadius: usize = 0xe4;
        pub const m_vecOrigin: usize = 0xe8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Trooper_InEnemyBaseResistVData {
        pub const m_flDamageReductionForTroopers: usize = 0x750;
    }

    // Parent: CCitadelLootTableBase
    pub mod CCitadelLootTable {
    }

    // Parent: CDynamicProp
    pub mod CInfoTutorialController {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ArcticBlast {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PowerGenerator {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_BarrageVData {
        pub const m_SelfModifier: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x1828;
        pub const m_ShootSound: usize = 0x1838;
        pub const m_ExplodeSound: usize = 0x1848;
        pub const m_ExplodeParticle: usize = 0x1858;
        pub const m_ShootParticle: usize = 0x1938;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Haze_StackingDamage {
        pub const m_nTotalProcs: usize = 0x250;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Shivas_Bracelet_Watcher {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Dash {
        pub const m_flDashAngle: usize = 0xf70;
        pub const m_GroundDashExecuteTime: usize = 0xf74;
        pub const m_GroundDashCancelExecuteTime: usize = 0xf78;
        pub const m_nLastGroundDashTick: usize = 0xf7c;
        pub const m_bTagCanActivateGroundDash: usize = 0xf80;
        pub const m_flAirDashCastTime: usize = 0xf84;
        pub const m_flAirDashStartPos: usize = 0xf88;
        pub const m_flAirDashDragStartTime: usize = 0xf94;
        pub const m_flParryCancelSlideEndTime: usize = 0xf98;
        pub const m_flParryCancelAirGlideStartTime: usize = 0xf9c;
        pub const m_nConsecutiveAirDashes: usize = 0xfa0;
        pub const m_nConsecutiveDownDashes: usize = 0xfa1;
        pub const m_bDownAirDash: usize = 0xfa2;
        pub const m_flAirDashDelayedEffectsTime: usize = 0xfa4;
    }

    // Parent: CBaseEntity
    pub mod CFishPool {
        pub const m_fishCount: usize = 0x4b0;
        pub const m_maxRange: usize = 0x4b4;
        pub const m_swimDepth: usize = 0x4b8;
        pub const m_waterLevel: usize = 0x4bc;
        pub const m_isDormant: usize = 0x4c0;
        pub const m_fishes: usize = 0x4c8;
        pub const m_visTimer: usize = 0x4e0;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_MovementServices {
        pub const m_nImpulse: usize = 0x48;
        pub const m_nButtons: usize = 0x50;
        pub const m_nQueuedButtonDownMask: usize = 0x70;
        pub const m_nQueuedButtonChangeMask: usize = 0x78;
        pub const m_nButtonDoublePressed: usize = 0x80;
        pub const m_pButtonPressedCmdNumber: usize = 0x88;
        pub const m_nLastCommandNumberProcessed: usize = 0x188;
        pub const m_nToggleButtonDownMask: usize = 0x190;
        pub const m_flMaxspeed: usize = 0x1a0;
        pub const m_arrForceSubtickMoveWhen: usize = 0x1a4;
        pub const m_flForwardMove: usize = 0x1b4;
        pub const m_flLeftMove: usize = 0x1b8;
        pub const m_flUpMove: usize = 0x1bc;
        pub const m_vecLastMovementImpulses: usize = 0x1c0;
        pub const m_vecOldViewAngles: usize = 0x228;
    }

    // Parent: CRagdollProp
    pub mod CRagdollPropAlias_physics_prop_ragdoll {
    }

    // Parent: CBaseProp
    pub mod CBreakableProp {
        pub const m_CPropDataComponent: usize = 0xac8;
        pub const m_OnStartDeath: usize = 0xb08;
        pub const m_OnBreak: usize = 0xb20;
        pub const m_OnHealthChanged: usize = 0xb38;
        pub const m_OnTakeDamage: usize = 0xb58;
        pub const m_impactEnergyScale: usize = 0xb70;
        pub const m_iMinHealthDmg: usize = 0xb74;
        pub const m_preferredCarryAngles: usize = 0xb78;
        pub const m_flPressureDelay: usize = 0xb84;
        pub const m_flDefBurstScale: usize = 0xb88;
        pub const m_vDefBurstOffset: usize = 0xb8c;
        pub const m_hBreaker: usize = 0xb98;
        pub const m_PerformanceMode: usize = 0xb9c;
        pub const m_flPreventDamageBeforeTime: usize = 0xba0;
        pub const m_BreakableContentsType: usize = 0xba4;
        pub const m_strBreakableContentsPropGroupOverride: usize = 0xba8;
        pub const m_strBreakableContentsParticleOverride: usize = 0xbb0;
        pub const m_bHasBreakPiecesOrCommands: usize = 0xbb8;
        pub const m_explodeDamage: usize = 0xbbc;
        pub const m_explodeRadius: usize = 0xbc0;
        pub const m_sExplosionType: usize = 0xbc8;
        pub const m_explosionDelay: usize = 0xbd0;
        pub const m_explosionBuildupSound: usize = 0xbd8;
        pub const m_explosionCustomEffect: usize = 0xbe0;
        pub const m_explosionCustomSound: usize = 0xbe8;
        pub const m_explosionModifier: usize = 0xbf0;
        pub const m_explosionDangerSound: usize = 0xbf8;
        pub const m_hPhysicsAttacker: usize = 0xc00;
        pub const m_flLastPhysicsInfluenceTime: usize = 0xc04;
        pub const m_flDefaultFadeScale: usize = 0xc08;
        pub const m_hLastAttacker: usize = 0xc0c;
        pub const m_iszPuntSound: usize = 0xc10;
        pub const m_bUsePuntSound: usize = 0xc18;
        pub const m_bOriginalBlockLOS: usize = 0xc19;
    }

    // Parent: CBaseModelEntity
    pub mod CLightEntity {
        pub const m_CLightComponent: usize = 0x780;
    }

    // Parent: CInfoDynamicShadowHint
    pub mod CInfoDynamicShadowHintBox {
        pub const m_vBoxMins: usize = 0x4b8;
        pub const m_vBoxMaxs: usize = 0x4c4;
    }

    // Parent: CSkeletonAnimationController
    pub mod CBaseAnimGraphController {
        pub const m_nAnimationAlgorithm: usize = 0x18;
        pub const m_animGraphNetworkedVars: usize = 0x20;
        pub const m_pAnimGraphInstance: usize = 0x228;
        pub const m_nNextExternalGraphHandle: usize = 0x288;
        pub const m_vecSecondarySkeletonNames: usize = 0x290;
        pub const m_vecSecondarySkeletons: usize = 0x2a8;
        pub const m_nSecondarySkeletonMasterCount: usize = 0x2c0;
        pub const m_flSoundSyncTime: usize = 0x2c8;
        pub const m_nActiveIKChainMask: usize = 0x2cc;
        pub const m_hSequence: usize = 0x2d0;
        pub const m_flSeqStartTime: usize = 0x2d4;
        pub const m_flSeqFixedCycle: usize = 0x2d8;
        pub const m_nAnimLoopMode: usize = 0x2dc;
        pub const m_flPlaybackRate: usize = 0x2e0;
        pub const m_nNotifyState: usize = 0x2ec;
        pub const m_bNetworkedAnimationInputsChanged: usize = 0x2ed;
        pub const m_bNetworkedSequenceChanged: usize = 0x2ee;
        pub const m_bLastUpdateSkipped: usize = 0x2ef;
        pub const m_bSequenceFinished: usize = 0x2f0;
        pub const m_nPrevAnimUpdateTick: usize = 0x2f4;
        pub const m_hGraphDefinitionAG2: usize = 0x590;
        pub const m_serializedPoseRecipeAG2: usize = 0x598;
        pub const m_nSerializePoseRecipeSizeAG2: usize = 0x5b0;
        pub const m_nSerializePoseRecipeVersionAG2: usize = 0x5b4;
        pub const m_nServerGraphInstanceIteration: usize = 0x5b8;
        pub const m_nServerSerializationContextIteration: usize = 0x5bc;
        pub const m_primaryGraphId: usize = 0x5c0;
        pub const m_vecExternalGraphIds: usize = 0x5c8;
        pub const m_vecExternalClipIds: usize = 0x5e0;
        pub const m_sAnimGraph2Identifier: usize = 0x5f8;
        pub const m_vecExternalGraphs: usize = 0x820;
    }

    // Parent: CCitadelBaseShivAbility
    pub mod CCitadel_Ability_Shiv_Defer_Damage {
        pub const m_flTotalPendingDamage: usize = 0x1170;
        pub const m_flLastDeferredDamageApplicationTime: usize = 0x1190;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SleepDagger_Drowsy {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Forge_MiniTurret_InnateModifier {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bull_Leap_Boosting {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_StaticCharge_V2 {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_MeleeCharge {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FireRateAura {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SilencerProcActive {
    }

    // Parent: CAI_Component
    pub mod CAI_Scheduler {
        pub const m_ScheduleState: usize = 0x50;
        pub const m_failSchedule: usize = 0x70;
        pub const m_translatedSchedule: usize = 0x78;
        pub const m_untranslatedSchedule: usize = 0x80;
        pub const m_sInterruptText: usize = 0xa8;
    }

    // Parent: None
    pub mod CBuoyancyHelper {
        pub const m_pController: usize = 0x8;
        pub const m_nFluidType: usize = 0x18;
        pub const m_flFluidDensity: usize = 0x1c;
        pub const m_flNeutrallyBuoyantGravity: usize = 0x20;
        pub const m_flNeutrallyBuoyantLinearDamping: usize = 0x24;
        pub const m_flNeutrallyBuoyantAngularDamping: usize = 0x28;
        pub const m_bNeutrallyBuoyant: usize = 0x2c;
        pub const m_vecFractionOfWheelSubmergedForWheelFriction: usize = 0x30;
        pub const m_vecWheelFrictionScales: usize = 0x48;
        pub const m_vecFractionOfWheelSubmergedForWheelDrag: usize = 0x60;
        pub const m_vecWheelDrag: usize = 0x78;
    }

    // Parent: CDynamicProp
    pub mod COrnamentProp {
        pub const m_initialOwner: usize = 0xcd0;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ModDisruptor {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RapidFire {
        pub const m_flNextAttackTime: usize = 0x3d0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ReturnFireVData {
        pub const m_AttackerHitFx: usize = 0x750;
        pub const m_ImpactParticle: usize = 0x830;
        pub const m_SpiritReflectTracerReplacement: usize = 0x910;
        pub const m_strAttackerHitSound: usize = 0x9f0;
        pub const m_strHitProcSound: usize = 0xa00;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_BulletArmorShredder_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_CatAnimating {
    }

    // Parent: CMarkupVolumeWithRef
    pub mod CMarkupVolumeTagged_NavCitadel {
    }

    // Parent: CCitadelModifierAura_Cone
    pub mod CCitadel_Modifier_Werewolf_HuntAura_Werewolf {
        pub const m_playerAngles: usize = 0x108;
        pub const m_ConeParticle: usize = 0x114;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_GlassCannon {
        pub const m_nKillsEarned: usize = 0xf78;
    }

    // Parent: CBaseModelEntity
    pub mod CModelPointEntity {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierBossInvulnVData {
        pub const m_ShieldParticle: usize = 0x750;
        pub const m_flShieldRadius: usize = 0x830;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Frank_ShockTarget2 {
        pub const m_vecHitTargets: usize = 0x1678;
        pub const m_bIsFullyCharged: usize = 0x1698;
        pub const m_hFullyChargedFXModifier: usize = 0x16a0;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_SalvoBullet {
        pub const m_BuffedShotId: usize = 0x328;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AirLiftExplodingAlly {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_HornetLeap {
        pub const m_bLeaping: usize = 0xf72;
        pub const m_flLeapStartTime: usize = 0xf74;
        pub const m_nFXIndex: usize = 0xf78;
        pub const m_TrailFX: usize = 0x1580;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SilencedVData {
        pub const m_EmpParticle: usize = 0x750;
        pub const m_EmpPlayerParticle: usize = 0x830;
        pub const m_EmpStatusParticle: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Item_AOESilence_Target {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Fervor_VData {
        pub const m_FervorParticle: usize = 0x750;
        pub const m_BonusesModifier: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BlastPush {
        pub const m_vPush: usize = 0xd0;
        pub const m_flPushVelocity: usize = 0xdc;
        pub const m_flMaxPushVelocity: usize = 0xe0;
        pub const m_flMaxPushVelocitySqr: usize = 0xe4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Basic_HealthRegen {
        pub const m_flHealthRegen: usize = 0xd0;
        pub const m_flExternalHealthRegen: usize = 0xd4;
    }

    // Parent: CBarnLight
    pub mod CRectLight {
        pub const m_bShowLight: usize = 0xa68;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_AbilityName {
        pub const m_hDoorwayAbility: usize = 0xf80;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_GuardianWard {
    }

    // Parent: CBaseFilter
    pub mod CFilterMultiple {
        pub const m_nFilterType: usize = 0x4d8;
        pub const m_iFilterName: usize = 0x4e0;
        pub const m_hFilter: usize = 0x530;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_Gravestone_Buff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Drifter_Hunger {
        pub const m_vecCurrentTargets: usize = 0xf70;
        pub const m_nKillsEarned: usize = 0xf8c;
        pub const m_nAssistsEarned: usize = 0xf90;
        pub const m_TypeIDDarkness: usize = 0xf94;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Rutger_RocketLauncher_VData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_ShootParticle: usize = 0x18f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGarbageVData {
        pub const m_GarbageAuraModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
        pub const m_flAirSpeedMax: usize = 0x1908;
        pub const m_flFallSpeedMax: usize = 0x190c;
        pub const m_flAirDrag: usize = 0x1910;
        pub const m_flMaxMovespeed: usize = 0x1914;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PatronsBlessingTarget {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierGlitchVData {
        pub const m_DebuffParticle: usize = 0x750;
        pub const m_PurgeCastParticle: usize = 0x830;
        pub const m_PurgeSound: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VitalitySuppressor {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierTier3BossLaserBeamDebuffVData {
        pub const m_flTickRate: usize = 0x750;
        pub const m_flNPCDPS: usize = 0x754;
        pub const m_flPlayerDPS: usize = 0x758;
        pub const m_flMaxHealthDPS: usize = 0x75c;
        pub const m_AmberStatusEffect: usize = 0x760;
        pub const m_AmberEffect: usize = 0x840;
        pub const m_SapphStatusEffect: usize = 0x920;
        pub const m_SapphEffect: usize = 0xa00;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_FireCursors {
        pub const m_Outflows: usize = 0x48;
        pub const m_bWaitForChildOutflows: usize = 0x60;
        pub const m_OnFinished: usize = 0x68;
        pub const m_OnCanceled: usize = 0xb0;
    }

    // Parent: CTriggerHurt
    pub mod CCitadelTriggerHurt {
    }

    // Parent: CBaseModelEntity
    pub mod CFuncNavBlocker {
        pub const m_bDisabled: usize = 0x788;
        pub const m_nBlockedTeamNumber: usize = 0x78c;
    }

    // Parent: CPathNode
    pub mod CMoverPathNode {
        pub const m_OnStartFromOrInSegment: usize = 0x500;
        pub const m_OnStoppedAtOrInSegment: usize = 0x520;
        pub const m_OnPassThrough: usize = 0x540;
        pub const m_OnPassThroughForward: usize = 0x560;
        pub const m_OnPassThroughReverse: usize = 0x580;
    }

    // Parent: CBaseEntity
    pub mod CEnvSoundscape {
        pub const m_OnPlay: usize = 0x4a0;
        pub const m_flRadius: usize = 0x4b8;
        pub const m_soundEventName: usize = 0x4c0;
        pub const m_bOverrideWithEvent: usize = 0x4c8;
        pub const m_soundscapeIndex: usize = 0x4cc;
        pub const m_soundscapeEntityListId: usize = 0x4d0;
        pub const m_positionNames: usize = 0x4d8;
        pub const m_hProxySoundscape: usize = 0x518;
        pub const m_bDisabled: usize = 0x51c;
        pub const m_soundscapeName: usize = 0x520;
        pub const m_soundEventHash: usize = 0x528;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PunkgoatTethered {
        pub const m_nRangeIndicatorCaster: usize = 0xd0;
        pub const m_nRangeIndicatorParent: usize = 0xd4;
        pub const m_tLastLOSTime: usize = 0xd8;
        pub const m_flLastDamageTime: usize = 0xdc;
        pub const m_hTetheredTo: usize = 0x5e0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_FearWatcher {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FissureWallVData {
        pub const m_DebrisParticle: usize = 0x750;
        pub const m_SpikeParticle: usize = 0x830;
        pub const m_WallSpawnSound: usize = 0x910;
        pub const m_DebuffModifier: usize = 0x920;
        pub const m_EnemyVisionModifier: usize = 0x930;
        pub const m_SlowModifier: usize = 0x940;
        pub const m_flSentryDistanceFromWall: usize = 0x950;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Parry {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MagicCarpet_SummonVData {
        pub const m_SummonParticle: usize = 0x750;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
    pub mod CCitadel_Item_FocusLens_VData {
        pub const m_SilenceModifier: usize = 0x19c8;
        pub const m_DamageModifier: usize = 0x19d8;
        pub const m_ResistReductionModifier: usize = 0x19e8;
    }

    // Parent: CBaseCombatCharacter
    pub mod CCitadel_Announcer_Base {
    }

    // Parent: CCitadelModifierAura_ConeVData
    pub mod CCitadel_Modifier_Fathom_ScaldingSpray_Aura_VData {
        pub const m_BuffModifier: usize = 0x7b0;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadelBoomerangProjectile {
        pub const m_bReturning: usize = 0xb60;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_FuryTrance {
    }

    // Parent: CBaseModelEntity
    pub mod CFuncBrush {
        pub const m_iSolidity: usize = 0x780;
        pub const m_iDisabled: usize = 0x784;
        pub const m_bSolidBsp: usize = 0x788;
        pub const m_iszExcludedClass: usize = 0x790;
        pub const m_bInvertExclusion: usize = 0x798;
        pub const m_bScriptedMovement: usize = 0x799;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PunkgoatPullVData {
        pub const m_PullForceFracByDistanceCurve: usize = 0x750;
        pub const m_flPullToCasterLocationDuration: usize = 0x790;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GangActivity_AbilitySwap {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Trappers_Bolo {
        pub const m_hProjectile: usize = 0xff0;
        pub const m_hNextTarget: usize = 0xff4;
        pub const m_hHitTargets: usize = 0xff8;
        pub const m_iBounces: usize = 0x1010;
        pub const m_bReturning: usize = 0x1014;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PsychicLift {
        pub const m_vLiftPosition: usize = 0xff0;
        pub const m_vCrashPosition: usize = 0xffc;
        pub const m_vecLiftTargets: usize = 0x1010;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_ReturnFireVData {
        pub const m_ReactiveArmorModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Trooper_InEnemyBaseResist {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TeleportToObjectiveVData {
        pub const m_TeleportOriginParticle: usize = 0x750;
        pub const m_TeleportDestinationParticle: usize = 0x830;
        pub const m_TeleportStartSound: usize = 0x910;
        pub const m_TeleportCompleteSound: usize = 0x920;
        pub const m_TeleportArriveSound: usize = 0x930;
    }

    // Parent: CCitadelItemPickupVData
    pub mod CCitadelItemPickupIdolVData {
        pub const m_WalkBackModifier: usize = 0x108;
        pub const m_PickUpAura: usize = 0x118;
    }

    // Parent: CBodyComponent
    pub mod CBodyComponentPoint {
        pub const m_sceneNode: usize = 0x80;
    }

    // Parent: CNPC_Neutral_Hideout_Cat
    pub mod CNPC_Neutral_Hideout_Rabbit {
    }

    // Parent: CPointEntity
    pub mod CInfoHeroTestingController {
    }

    // Parent: CBreakable
    pub mod CPhysBox {
        pub const m_damageType: usize = 0x858;
        pub const m_damageToEnableMotion: usize = 0x85c;
        pub const m_flForceToEnableMotion: usize = 0x860;
        pub const m_vHoverPosePosition: usize = 0x864;
        pub const m_angHoverPoseAngles: usize = 0x870;
        pub const m_bNotSolidToWorld: usize = 0x87c;
        pub const m_bEnableUseOutput: usize = 0x87d;
        pub const m_nHoverPoseFlags: usize = 0x87e;
        pub const m_flTouchOutputPerEntityDelay: usize = 0x880;
        pub const m_OnDamaged: usize = 0x888;
        pub const m_OnAwakened: usize = 0x8a0;
        pub const m_OnMotionEnabled: usize = 0x8b8;
        pub const m_OnPlayerUse: usize = 0x8d0;
        pub const m_OnStartTouch: usize = 0x8e8;
        pub const m_hCarryingPlayer: usize = 0x900;
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventAABBEntity {
        pub const m_vMins: usize = 0x560;
        pub const m_vMaxs: usize = 0x56c;
    }

    // Parent: CBaseTrackedStatsEntity
    pub mod CPlayerTrackedStatsEntity {
        pub const m_nPlayerSlot: usize = 0x508;
        pub const m_nTeam: usize = 0x50c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Attach {
        pub const m_vecTagAlongVisitedAllies: usize = 0xf78;
        pub const m_hLastAttachedTo: usize = 0xf90;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Priest_StackingDefenseVData {
        pub const m_StackBuffParticle: usize = 0x750;
        pub const m_StackChangedParticle: usize = 0x830;
        pub const m_StackLvlChangedParticle: usize = 0x910;
        pub const m_SlowModifier: usize = 0x9f0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VampireBat_BatCloud_Self {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_WreckingBall {
        pub const m_nBallParticle: usize = 0xf84;
        pub const m_nCastCompleteParticle: usize = 0xf88;
        pub const m_vecTargetsHit: usize = 0xf90;
        pub const m_bHoldingBall: usize = 0x11a8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_UtilityUpgrade_AOESmokeBombVData {
        pub const m_CastCompleteParticle: usize = 0x18b8;
        pub const m_strBuffGainedSound: usize = 0x1998;
        pub const m_InvisModifier: usize = 0x19a8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Upgrade_KineticSashTriggered_VData {
        pub const m_TriggeredSound: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NearbyEnemyBoostVData {
        pub const m_BerserkerSound: usize = 0x750;
        pub const m_BuffModifier: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Trooper_ShrineDownBuff {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerModifier {
        pub const m_iszModifierName: usize = 0x8e0;
        pub const m_tModifier: usize = 0x8e8;
    }

    // Parent: CBaseAnimGraph
    pub mod CItemSoda {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_BurstFire {
        pub const m_nFastFireEndTime: usize = 0xf78;
    }

    // Parent: CCitadel_Modifier_ScalingPowerUp
    pub mod CCitadel_Modifier_PowerUp_Survival {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Priest_KnockbackBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Thumper_EnemyPulled {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Radiance {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Kobun {
        pub const m_bFlipOffset: usize = 0xf70;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SleepDaggerAsleepVData {
        pub const m_DebuffParticle: usize = 0x750;
        pub const m_PostSleepModifier: usize = 0x830;
        pub const m_PostSleepBulletShredModifier: usize = 0x840;
        pub const m_PostSleepStaminaModifier: usize = 0x850;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Upgrade_OverdriveClip_VData {
        pub const m_BuffEffect: usize = 0x750;
        pub const m_TracerParticle: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DivinersKevlarBuff {
    }

    // Parent: None
    pub mod CPulseCell_TimelineTimelineEvent_t {
        pub const m_flTimeFromPrevious: usize = 0x0;
        pub const m_EventOutflow: usize = 0x8;
    }

    // Parent: CTriggerModifier
    pub mod CCitadelPushTrigger {
        pub const m_vPush: usize = 0x8f0;
        pub const m_angPushEntitySpace: usize = 0x8fc;
    }

    // Parent: CBarnLight
    pub mod COmniLight {
        pub const m_flInnerAngle: usize = 0xa68;
        pub const m_flOuterAngle: usize = 0xa6c;
        pub const m_bShowLight: usize = 0xa70;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Pillar {
    }

    // Parent: CCitadelModifier
    pub mod CBaseModifierAura {
        pub const m_hAuraUnits: usize = 0xd0;
        pub const m_hOldAuraUnits: usize = 0xe8;
        pub const m_flOverrideRadius: usize = 0x100;
    }

    // Parent: CBaseModelEntity
    pub mod CTriggerVolume {
        pub const m_iFilterName: usize = 0x780;
        pub const m_hFilter: usize = 0x788;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CrowdControl_Diminish_Watcher {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fathom_ScaldingSpray {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityAstroRifleVData {
        pub const m_SelfModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
    }

    // Parent: None
    pub mod CCitadelPlayOfTheGame {
        pub const __m_pChainEntity: usize = 0x8;
        pub const m_eState: usize = 0x115;
        pub const m_bTriggerStarted: usize = 0x116;
        pub const m_playOfTheGameDataServer: usize = 0x118;
    }

    // Parent: None
    pub mod CPulseCell_IntervalTimerCursorState_t {
        pub const m_StartTime: usize = 0x0;
        pub const m_EndTime: usize = 0x4;
        pub const m_flWaitInterval: usize = 0x8;
        pub const m_flWaitIntervalHigh: usize = 0xc;
        pub const m_bCompleteOnNextWake: usize = 0x10;
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_BaseRequirement {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Airheart_MarkVData {
        pub const m_IndicatorFX: usize = 0x7a8;
        pub const m_ExplosionFX: usize = 0x888;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Doorman_BellAura {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_RocketLauncher_Rocket {
    }

    // Parent: CModelPointEntity
    pub mod CEnvExplosion {
        pub const m_iMagnitude: usize = 0x780;
        pub const m_flPlayerDamage: usize = 0x784;
        pub const m_iRadiusOverride: usize = 0x788;
        pub const m_flInnerRadius: usize = 0x78c;
        pub const m_flDamageForce: usize = 0x790;
        pub const m_hInflictor: usize = 0x794;
        pub const m_iCustomDamageType: usize = 0x798;
        pub const m_bCreateDebris: usize = 0x79c;
        pub const m_iszCustomEffectName: usize = 0x7a8;
        pub const m_iszCustomSoundName: usize = 0x7b0;
        pub const m_bSuppressParticleImpulse: usize = 0x7b8;
        pub const m_iClassIgnore: usize = 0x7bc;
        pub const m_iClassIgnore2: usize = 0x7c0;
        pub const m_iszEntityIgnoreName: usize = 0x7c8;
        pub const m_hEntityIgnore: usize = 0x7d0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Fencer_Lunge {
        pub const m_nCurrentLungeState: usize = 0xf74;
        pub const m_flStateStartTime: usize = 0xf78;
        pub const m_vDashStartPos: usize = 0xf7c;
        pub const m_vDashDirection: usize = 0xf88;
        pub const m_vLookDirection: usize = 0xf94;
        pub const m_vStrikeDirection: usize = 0xfa0;
        pub const m_bStartedInAir: usize = 0xfac;
        pub const m_iRemainingCasts: usize = 0xfad;
        pub const m_RecastEndTime: usize = 0xfb0;
        pub const m_eLungeDirection: usize = 0xfb4;
        pub const m_flHeldTime: usize = 0xfb8;
        pub const m_vecHitEnemies: usize = 0xfc0;
        pub const m_vLastPosition: usize = 0xfd8;
        pub const m_flStuckTime: usize = 0xfe4;
        pub const m_nGlintParticleIndex: usize = 0xfec;
        pub const m_flLastOuterCircleProgress: usize = 0x1274;
        pub const m_nPowerLevel: usize = 0x1280;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGenericPerson4VData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Chrono_PulseGrenade {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IntensifyingClip {
        pub const m_LastThinkTime: usize = 0x1d0;
        pub const m_flSpinUpTime: usize = 0x1d4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier3Boss_LaserBeamVData {
        pub const m_BeamModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NoCatapult {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TrooperDisabledInvulnerability {
        pub const m_flBulletResistancePctMax: usize = 0xd0;
        pub const m_bShieldUp: usize = 0xd4;
        pub const m_flShieldUpTime: usize = 0xd8;
        pub const m_trackInfo: usize = 0xdc;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_BaseState {
    }

    // Parent: None
    pub mod OutflowWithRequirements_t {
        pub const m_Connection: usize = 0x0;
        pub const m_DestinationFlowNodeID: usize = 0x48;
        pub const m_RequirementNodeIDs: usize = 0x50;
        pub const m_nCursorStateBlockIndex: usize = 0x68;
    }

    // Parent: CCitadel_Item_ProjectileTest
    pub mod CCitadel_Item_ProjectileTest02 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatCharging {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_AntiSpiritVest {
        pub const m_tBuffRechargeTime: usize = 0xff0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ShakedownPulse {
        pub const m_flSharedDamage: usize = 0xd0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_TechUpgrade_SuperAcolyteGlovesVData {
        pub const m_SpiritMeleeProcModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_TechBurst_Proc {
        pub const m_hProcAbility: usize = 0x208;
        pub const m_hitTargets: usize = 0x210;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier2Boss_LaserBeam {
        pub const m_bPreview: usize = 0x250;
        pub const m_flYaw: usize = 0x254;
        pub const m_iEnemy: usize = 0x258;
        pub const m_hCurrentEnemy: usize = 0x25c;
        pub const m_hLaserAttachPoint: usize = 0x260;
        pub const m_hLaserAttachPoint02: usize = 0x261;
        pub const m_hLaserSearchStartPos: usize = 0x262;
        pub const m_flSoundStartTime: usize = 0x278;
        pub const m_vStart: usize = 0x288;
        pub const m_vEnd: usize = 0x294;
        pub const m_vPrevEnd: usize = 0x2a0;
        pub const m_flAngleBetweenTrace: usize = 0x2ac;
        pub const m_flDamagePerTick: usize = 0x2b0;
        pub const m_flCreepDamagePerTick: usize = 0x2b4;
        pub const m_flNextDamageTick: usize = 0x2b8;
        pub const m_vecEntitiesHit: usize = 0x2c0;
        pub const m_flDamageTickRate: usize = 0x2d8;
        pub const m_flLastShakeTime: usize = 0x2dc;
        pub const m_bSweepRightFirst: usize = 0x2e0;
        pub const m_angBeamAim: usize = 0x2e4;
        pub const m_vecBeamTarget: usize = 0x2f0;
        pub const m_flLastBeamUpdateTime: usize = 0x2fc;
        pub const m_flTargetingTaskStartTime: usize = 0x318;
        pub const m_flTrackVel: usize = 0x31c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Near_Climbable_RopeVData {
        pub const m_flEnableStateTime: usize = 0x750;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CDestructableBuildingVData {
        pub const m_flEnemyTrooperProtectionRange: usize = 0x28;
        pub const m_flTrooperJumpRange: usize = 0x2c;
        pub const m_flFinishedDyingThink: usize = 0x30;
        pub const m_sAmberModelName: usize = 0x38;
        pub const m_sSapphModelName: usize = 0x118;
        pub const m_AmberDeathParticle: usize = 0x1f8;
        pub const m_SapphDeathParticle: usize = 0x2d8;
        pub const m_AmberDeathSound: usize = 0x3b8;
        pub const m_SapphDeathSound: usize = 0x3c8;
        pub const m_iMaxHealthFinal: usize = 0x3d8;
        pub const m_iMaxHealthGenerator: usize = 0x3dc;
        pub const m_iMaxHealthGeneratorSecond: usize = 0x3e0;
        pub const m_PowerGenerator: usize = 0x3e8;
        pub const m_ObjectiveRegen: usize = 0x3f8;
        pub const m_BackdoorBulletResistModifier: usize = 0x408;
        pub const m_BackdoorProtectionModifier: usize = 0x418;
        pub const m_RangedArmorModifier: usize = 0x428;
        pub const m_BarrackBossProtection: usize = 0x438;
        pub const m_vecIntrinsicModifiers: usize = 0x448;
    }

    // Parent: None
    pub mod CTestPulseIOThreeStringArgs_t {
        pub const strArg1: usize = 0x0;
        pub const strArg2: usize = 0x8;
        pub const strArg3: usize = 0x10;
    }

    // Parent: CPulseCell_BaseRequirement
    pub mod CPulseCell_IsRequirementValid {
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_AssignedGold {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ControlPointBlockerAura {
        pub const m_hCP: usize = 0x108;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RadiantFlareBonusDamageVData {
        pub const m_strOnBulletHitDamageSound: usize = 0x750;
        pub const m_DamageFX: usize = 0x760;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Trapper_SpiderJar {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
        pub const m_bHasMadeSpiders: usize = 0xf88;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bounce_Pad {
        pub const m_vForward: usize = 0xf70;
        pub const m_bShouldDeploy: usize = 0xf7c;
        pub const m_bAnglesSet: usize = 0xf7d;
        pub const m_bCanCancel: usize = 0xf7e;
        pub const m_angFacing: usize = 0x1200;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FlameDashBurnVData {
        pub const m_DebuffModifier: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CItemAOERootVData {
        pub const m_AOEParticle: usize = 0x18b8;
        pub const m_strRootTargetSound: usize = 0x1998;
        pub const m_TargetModifier: usize = 0x19a8;
        pub const m_TetherModifier: usize = 0x19b8;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_Gradient {
        pub const m_Gradient: usize = 0x48;
    }

    // Parent: CBaseModelEntity
    pub mod CParticleSystem {
        pub const m_szSnapshotFileName: usize = 0x780;
        pub const m_bActive: usize = 0x980;
        pub const m_bFrozen: usize = 0x981;
        pub const m_flFreezeTransitionDuration: usize = 0x984;
        pub const m_nStopType: usize = 0x988;
        pub const m_bAnimateDuringGameplayPause: usize = 0x98c;
        pub const m_iEffectIndex: usize = 0x990;
        pub const m_flStartTime: usize = 0x998;
        pub const m_flPreSimTime: usize = 0x99c;
        pub const m_vServerControlPoints: usize = 0x9a0;
        pub const m_iServerControlPointAssignments: usize = 0x9d0;
        pub const m_hControlPointEnts: usize = 0x9d4;
        pub const m_bNoSave: usize = 0xad4;
        pub const m_bNoFreeze: usize = 0xad5;
        pub const m_bNoRamp: usize = 0xad6;
        pub const m_bStartActive: usize = 0xad7;
        pub const m_iszEffectName: usize = 0xad8;
        pub const m_iszControlPointNames: usize = 0xae0;
        pub const m_nDataCP: usize = 0xce0;
        pub const m_vecDataCPValue: usize = 0xce4;
        pub const m_nTintCP: usize = 0xcf0;
        pub const m_clrTint: usize = 0xcf4;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierUnstickVData {
        pub const m_sSuccessSound: usize = 0x830;
        pub const m_sFailureSound: usize = 0x840;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_PlayEffectOnDeath {
        pub const m_sEffect: usize = 0xd0;
    }

    // Parent: CBaseModelEntity
    pub mod CTriggerBrush {
        pub const m_OnStartTouch: usize = 0x780;
        pub const m_OnEndTouch: usize = 0x798;
        pub const m_OnUse: usize = 0x7b0;
        pub const m_iInputFilter: usize = 0x7c8;
        pub const m_iDontMessageParent: usize = 0x7cc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorway_Minimap_Range {
        pub const m_flMinimapRange: usize = 0xd0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tengu_UrnVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_AuraModifier: usize = 0x18f8;
        pub const m_ExplodeSound: usize = 0x1908;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Hornet_Snipe {
        pub const m_flScopeStartTime: usize = 0x160c;
        pub const m_iSnipeKills: usize = 0x1610;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChargedBomb {
        pub const m_flNextBeep: usize = 0xd0;
        pub const m_flBeepInterval: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_FlameDash {
        pub const m_vecHitEntities: usize = 0xf70;
        pub const m_flDashEndTime: usize = 0xf88;
        pub const m_bIsSpeedBursting: usize = 0xfa0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_CelestialGuidanceVData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_PurgeCastParticle: usize = 0x18c8;
        pub const m_strPurgeSound: usize = 0x19a8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierAerialAssaultVData {
        pub const m_FireRateModifier: usize = 0x750;
        pub const m_ExplodeParticle: usize = 0x760;
        pub const m_TracerParticle: usize = 0x840;
        pub const m_ExplodeSound: usize = 0x920;
        pub const m_flAirDrag: usize = 0x930;
        pub const m_flAirSpeed: usize = 0x934;
        pub const m_flFallSpeed: usize = 0x938;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_Tier2Boss_LaserBeam {
        pub const m_hAttackPosHigh: usize = 0xff0;
        pub const m_hAttackPosLow: usize = 0xff1;
        pub const m_hAttackPosLeft: usize = 0xff2;
        pub const m_hAttackPosRight: usize = 0xff3;
        pub const m_tCastCompleteTime: usize = 0xff4;
        pub const m_pBeamModifier: usize = 0xff8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PullDownToGroundVData {
        pub const m_flMaxHeight: usize = 0x750;
        pub const m_flPullDownSpeedMin: usize = 0x754;
        pub const m_flPullDownSpeedScale: usize = 0x758;
        pub const m_flFullPullDistance: usize = 0x75c;
        pub const m_flDampenVelocityRate: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PlayerPinged {
    }

    // Parent: None
    pub mod IntervalTimer {
        pub const m_timestamp: usize = 0x8;
        pub const m_nWorldGroupId: usize = 0xc;
    }

    // Parent: None
    pub mod audioparams_t {
        pub const localSound: usize = 0x8;
        pub const soundscapeIndex: usize = 0x68;
        pub const localBits: usize = 0x6c;
        pub const soundscapeEntityListIndex: usize = 0x70;
        pub const soundEventHash: usize = 0x74;
    }

    // Parent: CNPC_TrooperNeutral
    pub mod CNPC_Neutral_SinnersSacrifice {
        pub const m_iVaultState: usize = 0x1830;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadelDruidHealingTree {
        pub const m_strFruitModelName: usize = 0xc10;
        pub const m_vStartPos: usize = 0xc18;
        pub const m_vEndPos: usize = 0xc24;
        pub const m_flGrowDuration: usize = 0xc30;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CCitadel_Projectile_FortunaWeapon {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_PunkgoatSigilAura {
        pub const m_vecHitUnits: usize = 0x108;
        pub const m_flWaveRadius: usize = 0x120;
        pub const m_nWaveParticleEnemy: usize = 0x124;
        pub const m_nWaveParticleFriendly: usize = 0x128;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Tier3Boss_Laser_Aura {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Doorman_Bomb_DebuffVData {
        pub const m_InaccuracyCurveScale: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_RocketLauncher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Dust_Storm_Aura_Apply {
        pub const m_flDamagePerTick: usize = 0xd0;
        pub const m_bFirstTick: usize = 0xd4;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_VexBarrierVData {
        pub const m_BarrierModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RescueBeam {
        pub const m_flHealthPerSecond: usize = 0x2d0;
        pub const m_nBeamIndex: usize = 0x2d4;
    }

    // Parent: CCitadel_Pickup_VData
    pub mod CCitadel_Pickup_Gold_VData {
        pub const m_flGoldAmount: usize = 0x9d8;
        pub const m_flGoldPerMinuteAmount: usize = 0x9dc;
    }

    // Parent: CProjectile_KnightCharge_Projectile
    pub mod CProjectile_KnightChargeLeading_Projectile {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Thumper_PullAOE {
    }

    // Parent: CCitadel_Modifier_Disarmed
    pub mod CCitadel_Modifier_DisarmProc {
    }

    // Parent: CBaseEntity
    pub mod CSoundAreaEntityBase {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_iszSoundAreaType: usize = 0x4a8;
        pub const m_vPos: usize = 0x4b0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Boho_ChannelTether_Tether {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_Knockback {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Drifter_Rend_BulletLifesteal {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VampireBat_BatSwarmDoTVData {
        pub const m_BatHitParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_DyingStar {
        pub const m_nRollFXIndex: usize = 0xf70;
        pub const m_bInFlight: usize = 0xf74;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierHighAlertBuffVData {
        pub const m_BuffParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tengu_AirLift {
        pub const m_hGrabTarget: usize = 0xf88;
        pub const m_nHoldBombEffect: usize = 0xf8c;
        pub const m_eFlightState: usize = 0x1698;
        pub const m_bIsGrabbing: usize = 0x1699;
        pub const m_bIsHoldingBomb: usize = 0x169a;
        pub const m_flCurrentSpeed: usize = 0x169c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bebop_LaserBeamVData {
        pub const m_RestrictionModifier: usize = 0x1818;
        pub const m_ChargeParticle: usize = 0x1828;
        pub const m_flCancelCooldown: usize = 0x1908;
        pub const m_BeamParticle: usize = 0x1910;
        pub const m_BeamParticleLocal: usize = 0x19f0;
        pub const m_BeamHitParticle: usize = 0x1ad0;
        pub const m_strLaserStartSound: usize = 0x1bb0;
        pub const m_strLaserEndSound: usize = 0x1bc0;
        pub const m_strLaserLoopSound: usize = 0x1bd0;
        pub const m_strLaserHitSound: usize = 0x1be0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LightningBall {
        pub const m_hProjectile: usize = 0x250;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_StaticChargeVData {
        pub const m_ExplodeParticle: usize = 0x750;
        pub const m_ZapParticle: usize = 0x830;
        pub const m_strChargeHitSound: usize = 0x910;
        pub const m_strChargeHitOtherSound: usize = 0x920;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_ReinforcingCasingsVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Fervor_Bonuses_VData {
        pub const m_BonusesParticle: usize = 0x750;
        pub const m_ActivateBonusesSound: usize = 0x830;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Objective_RegenVData {
        pub const m_flOutOfCombatHealthRegen: usize = 0x750;
        pub const m_flOutOfCombatRegenDelay: usize = 0x754;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ZiplineSpeed {
        pub const m_iLane: usize = 0xd0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_KickFlip {
        pub const m_bIsLeaping: usize = 0xf70;
        pub const m_tLeapStartTime: usize = 0xf74;
        pub const m_tLeapOffTime: usize = 0xf78;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Airheart_Ability01VData {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Boho_DoubleHitVData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_CastParticle: usize = 0x1828;
        pub const m_CastLifeLeechParticle: usize = 0x1908;
        pub const m_strSlashSound: usize = 0x19e8;
        pub const m_strHitConfirmSound: usize = 0x19f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_StackingDefense {
        pub const m_flMaxStacksBonusDamage: usize = 0xf74;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTokamakHotShotVData {
        pub const m_LaserModifier: usize = 0x1818;
        pub const m_strLaserStartSound: usize = 0x1828;
        pub const m_strLaserEndSound: usize = 0x1838;
        pub const m_strLaserLoopSound: usize = 0x1848;
        pub const m_strLaserHitSound: usize = 0x1858;
        pub const m_ChargeParticle: usize = 0x1868;
        pub const m_BeamParticle: usize = 0x1948;
        pub const m_HitParticle: usize = 0x1a28;
        pub const m_GroundParticle: usize = 0x1b08;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_BloodBombVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_SpilledBloodModifier: usize = 0x18f8;
        pub const m_strBloodSpillStatName: usize = 0x1908;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_UtilityUpgrade_DebuffImmunityVData {
        pub const m_DebuffImmunityModifier: usize = 0x18b8;
    }

    // Parent: CitadelItemVData
    pub mod CItemSilenceGlyphVData {
        pub const m_DebuffModifier: usize = 0x18b8;
        pub const m_ResistReductionModifier: usize = 0x18c8;
        pub const m_strHitConfirmSound: usize = 0x18d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NeutralDamageGrowth {
    }

    // Parent: CCitadel_Pickup_VData
    pub mod CCitadel_Pickup_Modifier_VData {
        pub const m_sModifer: usize = 0x9d8;
    }

    // Parent: IntervalTimer
    pub mod CTimeline {
        pub const m_flValues: usize = 0x10;
        pub const m_nValueCounts: usize = 0x110;
        pub const m_nBucketCount: usize = 0x210;
        pub const m_flInterval: usize = 0x214;
        pub const m_flFinalValue: usize = 0x218;
        pub const m_nCompressionType: usize = 0x21c;
        pub const m_bStopped: usize = 0x220;
    }

    // Parent: None
    pub mod CPulseCursorFuncs {
    }

    // Parent: CCitadel_Modifier_Silenced
    pub mod CCitadel_Modifier_Bubble {
        pub const m_flDampingFactor: usize = 0xe8;
        pub const m_ParticleIndex: usize = 0x1f0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bolo_Leech {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tengu_StoneForm {
        pub const m_flStartTime: usize = 0x12f0;
        pub const m_flLandedTime: usize = 0x12f4;
        pub const m_bLanded: usize = 0x12f8;
        pub const m_bFalling: usize = 0x12f9;
        pub const m_bInStoneForm: usize = 0x12fa;
        pub const m_flStartHeight: usize = 0x12fc;
        pub const m_nStoneFormEffect: usize = 0x1300;
        pub const m_vecHitEntities: usize = 0x1308;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Viper_SlideBuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SleepDagger_Drowsy_VData {
        pub const m_SleepModifier: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_VacuumAuraTarget {
        pub const m_flMaxDist: usize = 0x1d8;
        pub const m_vecOffsetDir: usize = 0x1dc;
        pub const m_vecStartPosition: usize = 0x1e8;
        pub const m_flAOERadius: usize = 0x1f4;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_ElectricSlippers {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_EscalatingExposureProcWatcherVData {
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TechCleave {
        pub const m_vDamageTakenEvents: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier3Boss_Base {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_Pickup_VData {
        pub const m_friendlyParticle: usize = 0x28;
        pub const m_enemyParticle: usize = 0x108;
        pub const m_friendlyModelParticle: usize = 0x1e8;
        pub const m_enemyModelParticle: usize = 0x2c8;
        pub const m_friendlyInteractiveParticle: usize = 0x3a8;
        pub const m_enemyInteractiveParticle: usize = 0x488;
        pub const m_gainedParticle: usize = 0x568;
        pub const m_vacuumStartParticle: usize = 0x648;
        pub const m_Color: usize = 0x728;
        pub const m_hModel: usize = 0x730;
        pub const m_sDefaultMaterialGroupName: usize = 0x810;
        pub const m_sNameLocString: usize = 0x818;
        pub const m_nNameOffset: usize = 0x820;
        pub const m_bShowOnMinimap: usize = 0x824;
        pub const m_bIsPermanentPickup: usize = 0x825;
        pub const m_iTempParticleSheetIndex: usize = 0x828;
        pub const m_flParticleRadius: usize = 0x82c;
        pub const m_vecMinimapCssClasses: usize = 0x830;
        pub const m_sPickupSound: usize = 0x848;
        pub const m_sSpawnSound: usize = 0x858;
        pub const m_sBecomeInteractiveSound: usize = 0x868;
        pub const m_strVacuumStartSound: usize = 0x878;
        pub const m_sAmbientSound: usize = 0x888;
        pub const m_sHitSound: usize = 0x898;
        pub const m_eCollectionMethod: usize = 0x8a8;
        pub const m_flPickupRadius: usize = 0x8ac;
        pub const m_bPickupExpires: usize = 0x8bc;
        pub const m_flPickupExpirationDuration: usize = 0x8c0;
        pub const bPhysicallyDropToTheGroundOnSpawn: usize = 0x8d0;
        pub const m_flSolidRadius: usize = 0x8d4;
        pub const m_fInitialSpawnXYSpeed: usize = 0x8d8;
        pub const m_fInitialSpawnZSpeed: usize = 0x8e0;
        pub const m_flFallGravity: usize = 0x8e8;
        pub const m_flHoverOffset: usize = 0x8ec;
        pub const m_iHitsRequired: usize = 0x8f0;
        pub const m_bHeavyMeleeOnly: usize = 0x8f4;
        pub const m_flCollisionRadius: usize = 0x8f8;
        pub const m_flCenterHeightOffset: usize = 0x8fc;
        pub const m_ParryCheckModifier: usize = 0x900;
        pub const m_bPicupIsVacuum: usize = 0x910;
        pub const m_flInitialVacuumSideSpeed: usize = 0x914;
        pub const m_flInitialVacuumUpSpeed: usize = 0x91c;
        pub const m_VacuumToPlayerSpeedCurve: usize = 0x928;
        pub const m_VacuumInitialVelSpeedCurve: usize = 0x968;
        pub const m_flVacuumCloseEnoughToPickup: usize = 0x9a8;
        pub const m_EffectDistanceToRadiusRemap: usize = 0x9ac;
        pub const m_bSameTeamOnly: usize = 0x9bc;
        pub const m_flOutlineRange: usize = 0x9c0;
        pub const m_OutlineColor: usize = 0x9c4;
        pub const m_AuraModifier: usize = 0x9c8;
    }

    // Parent: None
    pub mod CTestPulseIOFloatStringArgs_t {
        pub const flOutFloat: usize = 0x0;
        pub const strOutString: usize = 0x8;
    }

    // Parent: None
    pub mod CountdownTimer {
        pub const m_duration: usize = 0x8;
        pub const m_timestamp: usize = 0xc;
        pub const m_timescale: usize = 0x10;
        pub const m_nWorldGroupId: usize = 0x14;
    }

    // Parent: None
    pub mod PulseNodeDynamicOutflows_tDynamicOutflow_t {
        pub const m_OutflowID: usize = 0x0;
        pub const m_Connection: usize = 0x8;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_FlameDashGroundAuraVData {
        pub const m_GroundParticle: usize = 0x7a8;
        pub const m_flHeight: usize = 0x888;
    }

    // Parent: CBaseModelEntity
    pub mod CBeam {
        pub const m_flFrameRate: usize = 0x780;
        pub const m_flHDRColorScale: usize = 0x784;
        pub const m_flFireTime: usize = 0x788;
        pub const m_flDamage: usize = 0x78c;
        pub const m_nNumBeamEnts: usize = 0x790;
        pub const m_hBaseMaterial: usize = 0x798;
        pub const m_nHaloIndex: usize = 0x7a0;
        pub const m_nBeamType: usize = 0x7a8;
        pub const m_nBeamFlags: usize = 0x7ac;
        pub const m_hAttachEntity: usize = 0x7b0;
        pub const m_nAttachIndex: usize = 0x7d8;
        pub const m_fWidth: usize = 0x7e4;
        pub const m_fEndWidth: usize = 0x7e8;
        pub const m_fFadeLength: usize = 0x7ec;
        pub const m_fHaloScale: usize = 0x7f0;
        pub const m_fAmplitude: usize = 0x7f4;
        pub const m_fStartFrame: usize = 0x7f8;
        pub const m_fSpeed: usize = 0x7fc;
        pub const m_flFrame: usize = 0x800;
        pub const m_nClipStyle: usize = 0x804;
        pub const m_bTurnedOff: usize = 0x808;
        pub const m_vecEndPos: usize = 0x80c;
        pub const m_hEndEntity: usize = 0x818;
        pub const m_nDissolveType: usize = 0x81c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Doorman_Bomb {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bookworm_KnightBarrier {
        pub const m_nCastParticleIndex: usize = 0x1370;
        pub const m_iPendingBonusTargets: usize = 0x1374;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_WreckerScrapBlastDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_GlassCannonVData {
        pub const m_strDeathSound: usize = 0x18b8;
        pub const m_strStackSound: usize = 0x18c8;
        pub const m_DeathParticle: usize = 0x18d8;
        pub const m_ProcNotificationModifier: usize = 0x19b8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Trooper_ShrineDownBuffVData {
        pub const m_flModelScale: usize = 0x750;
        pub const m_flHealthScale: usize = 0x754;
        pub const m_flDamageScale: usize = 0x758;
    }

    // Parent: CServerOnlyEntity
    pub mod CInfoData {
    }

    // Parent: CBaseCombatCharacter
    pub mod CBasePlayerPawn {
        pub const m_pWeaponServices: usize = 0xba0;
        pub const m_pItemServices: usize = 0xba8;
        pub const m_pAutoaimServices: usize = 0xbb0;
        pub const m_pObserverServices: usize = 0xbb8;
        pub const m_pWaterServices: usize = 0xbc0;
        pub const m_pUseServices: usize = 0xbc8;
        pub const m_pFlashlightServices: usize = 0xbd0;
        pub const m_pCameraServices: usize = 0xbd8;
        pub const m_pMovementServices: usize = 0xbe0;
        pub const m_ServerViewAngleChanges: usize = 0xbf0;
        pub const v_angle: usize = 0xc58;
        pub const v_anglePrevious: usize = 0xc64;
        pub const m_iHideHUD: usize = 0xc70;
        pub const m_skybox3d: usize = 0xc78;
        pub const m_fTimeLastHurt: usize = 0xd08;
        pub const m_flDeathTime: usize = 0xd0c;
        pub const m_fNextSuicideTime: usize = 0xd10;
        pub const m_fInitHUD: usize = 0xd14;
        pub const m_pExpresser: usize = 0xd18;
        pub const m_hController: usize = 0xd20;
        pub const m_hDefaultController: usize = 0xd24;
        pub const m_fHltvReplayDelay: usize = 0xd2c;
        pub const m_fHltvReplayEnd: usize = 0xd30;
        pub const m_iHltvReplayEntity: usize = 0xd34;
        pub const m_sndOpvarLatchData: usize = 0xd38;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CNPC_Neutral_Hideout_Cat {
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_Hideout_Clock {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerSuspendModifier {
        pub const m_strModifier: usize = 0x8e0;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_TrapperPoisonJar_Aura {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Item_StasisBomb_Aura {
        pub const m_AuraRadius: usize = 0x108;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_FireUserEntityIO {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Unicorn_DazzlingOrb {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_HealHost {
        pub const m_flOverrideCooldown: usize = 0xf70;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_DimishingTimestop {
        pub const m_flSlowPercent: usize = 0xd0;
        pub const m_flDelay: usize = 0xd4;
        pub const m_bEscaped: usize = 0xd8;
        pub const m_bStunApplied: usize = 0x160;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_Ability01 {
    }

    // Parent: CCitadel_Modifier_RootVData
    pub mod CCitadel_Modifier_Bookworm_ImmobilizeVData {
        pub const flMaxDrag: usize = 0x758;
        pub const flSpeedForNoDrag: usize = 0x75c;
        pub const flSpeedForMaxDrag: usize = 0x760;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityLockDownVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x18f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Disruptive_Charge {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ExplosiveBarrel {
        pub const m_hBarrel: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nikuman {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_HeadshotBoosterWatcher {
        pub const m_ShotId: usize = 0x228;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HunterAuraTarget {
        pub const m_flDebuffScale: usize = 0x250;
        pub const m_AuraModifierHandle: usize = 0x258;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SilenceProcWatcherVData {
        pub const m_BuildUpModifier: usize = 0x780;
        pub const m_TechDamageReductionModifier: usize = 0x790;
        pub const m_DebuffModifier: usize = 0x7a0;
        pub const m_ImmunityModifier: usize = 0x7b0;
        pub const m_sInstantProcIfCasterHasModifier: usize = 0x7c0;
        pub const m_TracerParticle: usize = 0x7c8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_PersonalRejuvenatorVData {
        pub const m_DeployParticle: usize = 0x18b8;
        pub const m_RespawnParticle: usize = 0x1998;
        pub const m_sDeploySound: usize = 0x1a78;
        pub const m_sRespawnSound: usize = 0x1a88;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Boss_Damage_ProtectionVData {
        pub const m_ShieldParticle: usize = 0x750;
        pub const m_flShieldRadius: usize = 0x830;
    }

    // Parent: None
    pub mod CBasePulseGraphInstance {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LinkVData {
        pub const m_LinkEffect: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IdolReturnTimer {
        pub const m_hTrigger: usize = 0xd0;
        pub const m_vGroundOrigin: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bookworm_AOEMagic {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SmokeGrenade {
        pub const m_hBlocker: usize = 0xd0;
        pub const m_hFriendlyAura: usize = 0xd4;
        pub const m_hEnemyAura: usize = 0xd8;
        pub const m_nParticleIndex: usize = 0xdc;
        pub const m_flStartTime: usize = 0xe0;
        pub const m_vOrigin: usize = 0x268;
    }

    // Parent: CCitadel_Modifier_Disarmed
    pub mod CCitadel_Modifier_ThrowSandDebuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_CatFormPounce {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NearDeathFXVData {
        pub const m_EnemyNearDeathParticle: usize = 0x750;
        pub const m_FriendlyNearDeathParticle: usize = 0x830;
        pub const m_sSelfDestructStart: usize = 0x910;
        pub const m_sSelfDestructEnd: usize = 0x920;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_TrooperBoss {
        pub const m_CCitadelPlayerClipComponent: usize = 0x17c8;
        pub const m_iLane: usize = 0x17ec;
        pub const m_hTrooperSpawnPoint: usize = 0x1aec;
        pub const m_LaneSide: usize = 0x1af0;
        pub const m_flFadeOutStart: usize = 0x1af4;
        pub const m_flFadeOutEnd: usize = 0x1af8;
    }

    // Parent: CCitadelItemPickup
    pub mod CCitadelItemPickupRejuv {
        pub const m_CCitadelAbilityComponent: usize = 0x5510;
        pub const m_bPickedUp: usize = 0x577c;
    }

    // Parent: CBaseAnimGraph
    pub mod CAirheartStickyBombInWorld {
    }

    // Parent: CBaseFilter
    pub mod FilterHealth {
        pub const m_bAdrenalineActive: usize = 0x4d8;
        pub const m_iHealthMin: usize = 0x4dc;
        pub const m_iHealthMax: usize = 0x4e0;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Rutger_Rocket {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Cadence_GrandFinaleAOE {
    }

    // Parent: CCitadel_Item_ProjectileTest
    pub mod CCitadel_Item_ProjectileTest06 {
        pub const m_flApproachX: usize = 0x1010;
        pub const m_flApproachY: usize = 0x1014;
        pub const m_flApproachZ: usize = 0x1018;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_HeadshotDamage {
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_OverrideTargetIdentifier {
        pub const m_sTargetIdentifier: usize = 0xd0;
        pub const m_hTarget: usize = 0xd8;
        pub const m_nOriginType: usize = 0xdc;
        pub const m_sAttachmentName: usize = 0xe0;
        pub const m_hAttachment: usize = 0xe8;
    }

    // Parent: CLogicalEntity
    pub mod CMathColorBlend {
        pub const m_flInMin: usize = 0x4a0;
        pub const m_flInMax: usize = 0x4a4;
        pub const m_OutColor1: usize = 0x4a8;
        pub const m_OutColor2: usize = 0x4ac;
        pub const m_OutValue: usize = 0x4b0;
    }

    // Parent: CModelPointEntity
    pub mod CShower {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CNPC_Neutral_Flying_PigeonVData {
        pub const m_flFrequencyY: usize = 0x28;
        pub const m_flVerticalScale: usize = 0x30;
        pub const m_flVerticalOffset: usize = 0x38;
        pub const m_flFrequencyR: usize = 0x40;
        pub const m_flOrbitRadius: usize = 0x48;
        pub const m_flCollisionRadius: usize = 0x50;
        pub const m_flParticleRadius: usize = 0x54;
        pub const m_flLifeTime: usize = 0x58;
        pub const m_flRespawnTime: usize = 0x60;
        pub const m_flModelScale: usize = 0x64;
        pub const m_hModel: usize = 0x68;
        pub const m_SpawnParticle: usize = 0x148;
        pub const m_AmbientParticle: usize = 0x228;
        pub const m_DestroyParticle: usize = 0x308;
        pub const m_strDestroySound: usize = 0x3e8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Unicorn_PrismaticGuard {
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_AirheartPrimaryWeaponVData {
        pub const m_StuckModifier: usize = 0x19c8;
        pub const m_ExplosionFX: usize = 0x19d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_GunTether {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifire_Bookworm_DragonFire {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Drifter_ShadowMark_Target {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nearby_Enemy_Boost {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityPropertySingleStatCurve {
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_GraphHook {
        pub const m_HookName: usize = 0x80;
    }

    // Parent: CFuncNavBlocker
    pub mod CScriptNavBlocker {
        pub const m_vExtent: usize = 0x798;
    }

    // Parent: CCitadel_Modifier_Knockdown
    pub mod CCitadel_Modifier_ParriedStun {
    }

    // Parent: CCitadel_Modifier_Silenced
    pub mod CCitadel_Modifier_ModDisruptor {
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_VehicleTopSpeedScale {
        pub const m_flTopSpeedScale: usize = 0xd0;
    }

    // Parent: CBaseModelEntity
    pub mod CEntityBlocker {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Frank_PainAuraVData {
        pub const m_AuraActive: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x18f8;
        pub const m_strTripSound: usize = 0x19d8;
        pub const m_AuraModifier: usize = 0x19e8;
        pub const m_AuraOffModifier: usize = 0x19f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FuryTrance_VData {
        pub const m_SilenceModifier: usize = 0x750;
        pub const m_ModifierActiveDisplay: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PowerUp {
    }

    // Parent: CPulse_ResumePoint
    pub mod SignatureOutflow_Resume {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_WebWall {
        pub const bHasDetonatedOnTarget: usize = 0x860;
        pub const m_nWebWallFxIndex: usize = 0x864;
        pub const m_vecCastPosition: usize = 0x878;
        pub const m_vecCastPositionNormal: usize = 0x884;
        pub const m_vecEndPosition: usize = 0x890;
        pub const m_vecEndPositionNormal: usize = 0x89c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_UtilityUpgrade_HealthNova {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ItemPickupTimer {
        pub const m_bSilenceApplied: usize = 0xd0;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CNPC_Neutral_WeakpointVData {
        pub const m_flBonusDamageMult: usize = 0x28;
        pub const m_flDamageOnDeath: usize = 0x2c;
        pub const m_flGoldPercent: usize = 0x30;
        pub const m_flMaxHealth: usize = 0x34;
        pub const m_flCollisionRadius: usize = 0x38;
        pub const m_flParticleRadius: usize = 0x3c;
        pub const m_flStunDuration: usize = 0x40;
        pub const m_AmbientParticle: usize = 0x48;
        pub const m_DestroyParticle: usize = 0x128;
        pub const m_strDestroySound: usize = 0x208;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Unicorn_DazzlingOrbVData {
        pub const m_FallSpeedCurve: usize = 0x1818;
        pub const m_flAirSpeedMax: usize = 0x1858;
        pub const m_flAirDrag: usize = 0x185c;
        pub const m_OrbWatcherModifier: usize = 0x1860;
        pub const m_ChargeParticle: usize = 0x1870;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_Werewolf_UnloadGun2 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Werewolf_CripplingSlash {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MageWalk {
        pub const m_bIsFakeout: usize = 0xd0;
        pub const m_bTeleported: usize = 0xd1;
        pub const m_particleStart: usize = 0xd4;
        pub const m_particleEnd: usize = 0xd8;
        pub const m_particleTrail: usize = 0xdc;
        pub const m_vecEndLocation: usize = 0xe0;
        pub const m_vecStartPosition: usize = 0xec;
        pub const m_vecEndLocationCaster: usize = 0xf8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Chrono_KineticCarbine {
        pub const m_bWantsSlow: usize = 0xf70;
        pub const m_flLatchedTimeScaleFracChangeTime: usize = 0xf74;
        pub const m_flLatchedTimeScaleFrac: usize = 0xf78;
        pub const m_flSpeedBoostEndTime: usize = 0xf7c;
        pub const m_flShotTimeScaleEndTime: usize = 0xf80;
        pub const m_flStoredPowerPct: usize = 0xf8c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ChargedShot {
        pub const m_ChannelParticle: usize = 0xf70;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ZiplineBoostVData {
        pub const m_flRampUpTime: usize = 0x750;
        pub const m_flPercentageSpeedIncreaseRampFrom: usize = 0x754;
        pub const m_flPercentageSpeedIncreaseRampTo: usize = 0x758;
        pub const m_cameraSequenceStartBoost: usize = 0x760;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_Backstabber_Watcher {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_BurstFireVData {
        pub const m_ActivationSound: usize = 0x18b8;
        pub const m_BuffModifier: usize = 0x18c8;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_TechDuration {
    }

    // Parent: None
    pub mod CPathSimpleAPI {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerActiveWeaponDetect {
        pub const m_OnTouchedActiveWeapon: usize = 0x8e0;
        pub const m_iszWeaponClassName: usize = 0x8f8;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Archer_ChargedShot {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Rocketeer3 {
        pub const m_nJetpackFireFX: usize = 0x1470;
        pub const m_vDebugVelocityIntentModelSpace: usize = 0x149c;
        pub const m_flDebugCoeffFactor: usize = 0x14a8;
        pub const m_bJetpackActive: usize = 0x14ac;
        pub const m_tJetpackInputDownTime: usize = 0x14b0;
        pub const m_vPreservedVelocity: usize = 0x14b4;
        pub const m_bHasLeftGround: usize = 0x14c0;
        pub const m_bOutOfFuelAndHaventTouchedGround: usize = 0x14c1;
        pub const m_eMode: usize = 0x14c2;
        pub const m_tModeBeginTime: usize = 0x14c4;
        pub const m_vJetpackInput: usize = 0x14c8;
        pub const m_tLastWallAttachTime: usize = 0x14d4;
        pub const m_tLastGroundedTime: usize = 0x14d8;
        pub const m_bQueueWallAttachJump: usize = 0x14dc;
        pub const m_tOverdriveBeginTime: usize = 0x14e0;
        pub const m_vIntentSpaceMPCVelocity: usize = 0x14e4;
        pub const m_vIntentSpaceMPCOrigin: usize = 0x14f0;
        pub const m_flIntentSpeedVerticalActual: usize = 0x14fc;
        pub const m_flIntentMultiplier: usize = 0x1500;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_Barrage {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Targetdummy_Inherent {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StickyBombAttached {
        pub const m_nParticleIndex: usize = 0xd8;
        pub const m_nAllyParticleIndex: usize = 0xdc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PowerJump {
        pub const m_nTargetingParticleIndex: usize = 0xf70;
        pub const m_bAirRaiding: usize = 0xf74;
    }

    // Parent: CCitadel_Item_ProjectileTestVData
    pub mod CCitadel_Item_ProjectileTest02VData {
        pub const m_flDrag: usize = 0x18c8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_GritVData {
        pub const m_BarrierModifier: usize = 0x18b8;
    }

    // Parent: CFuncLadder
    pub mod CFuncLadderAlias_func_useableladder {
    }

    // Parent: CSprite
    pub mod CSpriteOriented {
    }

    // Parent: CPointEntity
    pub mod CPointServerCommand {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Chrono_KineticCarbineVData {
        pub const m_TracerParticle: usize = 0x750;
        pub const m_FullyChargedParticle: usize = 0x830;
        pub const m_strFullyCharged: usize = 0x910;
        pub const m_strShotSound: usize = 0x920;
    }

    // Parent: CTier3BossAbility
    pub mod CCitadel_Ability_Tier3Boss_DropBombs {
        pub const m_tNextBombTime: usize = 0xf74;
        pub const m_vHitTargets: usize = 0xf78;
        pub const m_hShootPos: usize = 0xf90;
        pub const m_flDetonationTime: usize = 0xf94;
    }

    // Parent: None
    pub mod CCitadelAutoScaledTime {
        pub const m_flTime: usize = 0x8;
    }

    // Parent: None
    pub mod shard_model_desc_t {
        pub const m_nModelID: usize = 0x8;
        pub const m_hMaterialBase: usize = 0x10;
        pub const m_hMaterialDamageOverlay: usize = 0x18;
        pub const m_solid: usize = 0x20;
        pub const m_vecPanelSize: usize = 0x24;
        pub const m_vecStressPositionA: usize = 0x2c;
        pub const m_vecStressPositionB: usize = 0x34;
        pub const m_vecPanelVertices: usize = 0x40;
        pub const m_vInitialPanelVertices: usize = 0x58;
        pub const m_flGlassHalfThickness: usize = 0x70;
        pub const m_bHasParent: usize = 0x74;
        pub const m_bParentFrozen: usize = 0x75;
        pub const m_SurfacePropStringToken: usize = 0x78;
    }

    // Parent: CBaseModelEntity
    pub mod CPlayerSprayDecal {
        pub const m_nUniqueID: usize = 0x780;
        pub const m_unAccountID: usize = 0x784;
        pub const m_unTraceID: usize = 0x788;
        pub const m_vecEndPos: usize = 0x78c;
        pub const m_vecStart: usize = 0x798;
        pub const m_vecLeft: usize = 0x7a4;
        pub const m_vecNormal: usize = 0x7b0;
        pub const m_nPlayerSlot: usize = 0x7bc;
        pub const m_nEntity: usize = 0x7c0;
        pub const m_nHitbox: usize = 0x7c4;
        pub const m_flCreationTime: usize = 0x7c8;
        pub const m_nTintID: usize = 0x7cc;
        pub const m_nVersion: usize = 0x7d0;
        pub const m_sTextureName: usize = 0x7d8;
        pub const m_sTextureNameDamaged: usize = 0x7e0;
        pub const m_sSoundNameDamaged: usize = 0x7e8;
        pub const m_bDamaged: usize = 0x7f0;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Item_Discord_AuraVData {
        pub const m_strAreaEffectEnemy: usize = 0x7a8;
        pub const m_strAreaEffectFriendly: usize = 0x888;
        pub const m_strAreaEffectSelf: usize = 0x968;
        pub const m_DrainParticle: usize = 0xa48;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SilenceBomb_Debuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Mirage_FireScarabs_HealthLoss_VData {
        pub const m_HealthLossParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Synth_Pulse_Escape_VData {
        pub const m_SatchelParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierThumper_3VData {
        pub const m_DroneParticle: usize = 0x750;
        pub const m_LoopSound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_ReinforcingCasings {
        pub const m_LastHitShotID: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_BoxingGlove {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_MeleeCharge_VData {
        pub const m_SwingParticle: usize = 0x780;
        pub const m_HitParticle: usize = 0x860;
        pub const m_ReloadVisualModifier: usize = 0x940;
        pub const m_AmmoAddedVisualModifier: usize = 0x950;
    }

    // Parent: None
    pub mod CPointPrefabAPI {
    }

    // Parent: None
    pub mod CPulseCell_Outflow_PlayVCDVCDRequirementInfo_t {
        pub const m_szRequirementName: usize = 0x0;
        pub const m_Outflow: usize = 0x8;
    }

    // Parent: CBaseFlex
    pub mod CEconEntity {
        pub const m_AttributeManager: usize = 0xaf0;
        pub const m_hOldProvidee: usize = 0xc48;
        pub const m_iOldOwnerClass: usize = 0xc4c;
    }

    // Parent: CCitadelModelEntity
    pub mod CCitadelViscousBall {
        pub const m_hAbility: usize = 0x8e0;
        pub const m_flBallRadius: usize = 0x8e4;
        pub const m_bNeedsPhysicsUpdate: usize = 0x8e8;
    }

    // Parent: CCitadel_Item
    pub mod CItemSilenceGlyph {
        pub const m_vHitEnts: usize = 0xf78;
    }

    // Parent: CPointEntity
    pub mod CTankTargetChange {
        pub const m_newTarget: usize = 0x4a0;
        pub const m_newTargetName: usize = 0x4b0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RadiantFlareBonusDamage {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelAbilityDruidLeechSeed {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Frank_Revive {
        pub const m_bReviveIsActive: usize = 0xf72;
        pub const m_TimeOfDeath: usize = 0xf74;
        pub const m_TimeOfRevive: usize = 0xf78;
        pub const m_flTotalPendingHeal: usize = 0xf7c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Protection_Racket {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityIncendiaryProjectileVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x1828;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Discord_Enemy {
    }

    // Parent: CPlayer_CameraServices
    pub mod CCitadelPlayer_CameraServices {
    }

    // Parent: CLogicalEntity
    pub mod CLogicDistanceCheck {
        pub const m_iszEntityA: usize = 0x4a0;
        pub const m_iszEntityB: usize = 0x4a8;
        pub const m_flZone1Distance: usize = 0x4b0;
        pub const m_flZone2Distance: usize = 0x4b4;
        pub const m_InZone1: usize = 0x4b8;
        pub const m_InZone2: usize = 0x4d0;
        pub const m_InZone3: usize = 0x4e8;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_KnightCharge_Projectile {
        pub const m_CCitadelMinimapComponent: usize = 0x860;
    }

    // Parent: CModifierKnockdownVData
    pub mod CCitadel_Modifier_CatapultStunVData {
        pub const m_flStunDurationOnLand: usize = 0x8d8;
        pub const m_SlowModifier: usize = 0x8e0;
    }

    // Parent: CCitadel_Ability_BaseHeldItem
    pub mod CCitadel_Ability_GoldenIdol {
        pub const m_nGold: usize = 0x1000;
        pub const m_nTeamBias: usize = 0x1004;
        pub const m_tAbilityCreateTime: usize = 0x1008;
        pub const m_tLastDamageTime: usize = 0x100c;
        pub const m_vHomePosition: usize = 0x1014;
        pub const m_flHeldTime: usize = 0x1020;
    }

    // Parent: CBaseEntity
    pub mod CEnvCombinedLightProbeVolume {
        pub const m_Entity_Color: usize = 0x1518;
        pub const m_Entity_flBrightness: usize = 0x151c;
        pub const m_Entity_hCubemapTexture: usize = 0x1520;
        pub const m_Entity_bCustomCubemapTexture: usize = 0x1528;
        pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1530;
        pub const m_Entity_hLightProbeTexture_SDF: usize = 0x1538;
        pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x1540;
        pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x1548;
        pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x1550;
        pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x1558;
        pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x1560;
        pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x1568;
        pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x1570;
        pub const m_Entity_vBoxMins: usize = 0x1578;
        pub const m_Entity_vBoxMaxs: usize = 0x1584;
        pub const m_Entity_bMoveable: usize = 0x1590;
        pub const m_Entity_nHandshake: usize = 0x1594;
        pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x1598;
        pub const m_Entity_nPriority: usize = 0x159c;
        pub const m_Entity_bStartDisabled: usize = 0x15a0;
        pub const m_Entity_flEdgeFadeDist: usize = 0x15a4;
        pub const m_Entity_vEdgeFadeDists: usize = 0x15a8;
        pub const m_Entity_nLightProbeSizeX: usize = 0x15b4;
        pub const m_Entity_nLightProbeSizeY: usize = 0x15b8;
        pub const m_Entity_nLightProbeSizeZ: usize = 0x15bc;
        pub const m_Entity_nLightProbeAtlasX: usize = 0x15c0;
        pub const m_Entity_nLightProbeAtlasY: usize = 0x15c4;
        pub const m_Entity_nLightProbeAtlasZ: usize = 0x15c8;
        pub const m_Entity_bEnabled: usize = 0x15e1;
    }

    // Parent: CAI_Motor
    pub mod CAI_CitadelPlayerBotMotor {
    }

    // Parent: CCitadelAbilityDruidBasePlant
    pub mod CCitadelAbilityDruidPlantSomething {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Trapper_StealSpiritDebuff {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Synth_Affliction_Debuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CrushingFistsDebuff_VData {
        pub const m_ProcNotificationModifier: usize = 0x750;
        pub const m_ProcNotificationEffect: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HollowPoint_Stack {
        pub const m_flStackDecayDelayTime: usize = 0xd0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_SelfBuffModifierVData {
        pub const m_BuffModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NearbyAllyResist {
    }

    // Parent: None
    pub mod ViewAngleServerChange_t {
        pub const nType: usize = 0x30;
        pub const qAngle: usize = 0x34;
        pub const nIndex: usize = 0x40;
    }

    // Parent: CLogicalEntity
    pub mod CLogicDistanceAutosave {
        pub const m_iszTargetEntity: usize = 0x4a0;
        pub const m_flDistanceToPlayer: usize = 0x4a8;
        pub const m_bForceNewLevelUnit: usize = 0x4ac;
        pub const m_bCheckCough: usize = 0x4ad;
        pub const m_bThinkDangerous: usize = 0x4ae;
        pub const m_flDangerousTime: usize = 0x4b0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LuminousStrikeBuff {
        pub const m_nPowerupParticle: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Root
    pub mod CCitadel_Modifier_Bookworm_Immobilize {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Operative_UmbrellaManeuver {
        pub const m_ChannelParticle: usize = 0xf70;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_FearWatcherVData {
        pub const m_BuildupProcModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
        pub const m_ExplodeSound: usize = 0x7a0;
    }

    // Parent: CCitadelBaseShivAbility
    pub mod CCitadel_Ability_ShivDash {
        pub const m_vStartPosition: usize = 0xf70;
        pub const m_vDashDirection: usize = 0xf7c;
        pub const m_bIsDashing: usize = 0xf88;
        pub const m_vecHitEnemies: usize = 0xf90;
        pub const m_vecLastPosition: usize = 0xfa8;
        pub const m_nReductionsLeft: usize = 0xfb4;
        pub const m_flStuckTime: usize = 0x1538;
        pub const m_hEchoThinker: usize = 0x1550;
        pub const m_EchoStartTime: usize = 0x1554;
        pub const m_bLetEchoPlay: usize = 0x1558;
        pub const m_bDiscontinuityInEcho: usize = 0x1578;
    }

    // Parent: CitadelItemVData
    pub mod CItem_ActiveReload_VData {
        pub const m_SuccessModifier: usize = 0x18b8;
        pub const m_strSuccessSound: usize = 0x18c8;
        pub const m_strFailureSound: usize = 0x18d8;
        pub const m_strWindowEnteredSound: usize = 0x18e8;
        pub const m_SuccessParticle: usize = 0x18f8;
        pub const m_FailureParticle: usize = 0x19d8;
        pub const m_flGraceTime: usize = 0x1ab8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_WeaponEaterVData {
        pub const m_WeaponEaterTracker: usize = 0x18b8;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CitadelAbilityVData {
        pub const m_eAbilityType: usize = 0x28;
        pub const m_eItemSlotType: usize = 0x29;
        pub const m_bDisabled: usize = 0x2a;
        pub const m_bDisabledOnExperimental: usize = 0x2b;
        pub const m_bInDevelopment: usize = 0x2c;
        pub const m_bStartTrained: usize = 0x2d;
        pub const m_iMaxLevel: usize = 0x30;
        pub const m_nAbilityPointsCost: usize = 0x34;
        pub const m_nAbillityUnlocksCost: usize = 0x38;
        pub const m_iUpdateTime: usize = 0x40;
        pub const m_AbilityBehaviorsBits: usize = 0x4c;
        pub const m_eAbilityTargetingLocation: usize = 0x58;
        pub const m_eAbilityTargetingShape: usize = 0x5c;
        pub const m_flTargetingConeAngle: usize = 0x60;
        pub const m_flTargetingConeHalfWidth: usize = 0x64;
        pub const m_bIncludeExtra2DCone: usize = 0x68;
        pub const m_bUseCameraOffsetsForCone: usize = 0x69;
        pub const m_bCollectNearbyTargetsWithCone: usize = 0x6a;
        pub const m_flNearbySweepOffset: usize = 0x6c;
        pub const m_flNearbySweepRadius: usize = 0x70;
        pub const m_eAbilityActivation: usize = 0x74;
        pub const m_TriggerButtonPreReqButton: usize = 0x78;
        pub const m_TriggerButtonOverride: usize = 0x80;
        pub const m_eAbilitySpectatePriority: usize = 0x88;
        pub const m_bitsInterruptingStates: usize = 0x8c;
        pub const m_IncompatibleFilter: usize = 0xb4;
        pub const m_nAbilityTargetTypes: usize = 0xc8;
        pub const m_nAbilityTargetFlags: usize = 0xcc;
        pub const m_eTargettingLOSCheck: usize = 0xd0;
        pub const m_bitsPreCastEnabledStateMask: usize = 0xd4;
        pub const m_bitsChannelEnabledStateMask: usize = 0xfc;
        pub const m_bitsPostCastEnabledStateMask: usize = 0x124;
        pub const m_TargetAbilityEffectsToApply: usize = 0x14c;
        pub const m_flBossDamageScale: usize = 0x150;
        pub const m_bShowTargetingPreviewWhileChanneling: usize = 0x154;
        pub const m_bShowTargetingPreviewWhileCasting: usize = 0x155;
        pub const m_WeaponInfo: usize = 0x158;
        pub const m_projectileInfo: usize = 0x8d0;
        pub const m_deploymentInfo: usize = 0xc68;
        pub const m_mapAbilityProperties: usize = 0xe68;
        pub const m_mapDependentAbilities: usize = 0xe90;
        pub const m_vecAbilityUpgrades: usize = 0xeb8;
        pub const m_strCastAnimGraphParam: usize = 0xed0;
        pub const m_strSelectionNameOverride: usize = 0xed8;
        pub const m_strCastAnimSequenceName: usize = 0xee0;
        pub const m_bSuppressOutOfCombatOnCast: usize = 0xee8;
        pub const m_bSuppressOutOfCombatWhileChanneling: usize = 0xee9;
        pub const m_strAG2SourceName: usize = 0xef0;
        pub const m_strAG2CastingAction: usize = 0xef8;
        pub const m_strAG2ChannelingAction: usize = 0xf00;
        pub const m_strAG2CastCompletedAction: usize = 0xf08;
        pub const m_AbilityTooltipDetails: usize = 0xf10;
        pub const m_strCSSClass: usize = 0xf40;
        pub const m_strAbilityImage: usize = 0xf48;
        pub const m_strMoviePreviewPath: usize = 0xf58;
        pub const m_HUDPanel: usize = 0xf60;
        pub const m_bShowInPassiveItemsArea: usize = 0xf98;
        pub const m_bForceHideHUDPanel: usize = 0xf99;
        pub const m_bForceShowHUDPanel: usize = 0xf9a;
        pub const m_bUsesFlightControls: usize = 0xf9b;
        pub const m_strFlyUpLocString: usize = 0xfa0;
        pub const m_strFlyDownLocString: usize = 0xfa8;
        pub const m_strSubCastUICSSClass: usize = 0xfb0;
        pub const m_additionalAbilities: usize = 0xfb8;
        pub const m_strSecondaryStatName: usize = 0xfd8;
        pub const m_strCastButtonLocToken: usize = 0xfe0;
        pub const m_strAltCastButtonLocToken: usize = 0xfe8;
        pub const m_cameraSequenceCastStart: usize = 0xff0;
        pub const m_bEndCastStartSequenceOnCastComplete: usize = 0x1078;
        pub const m_cameraSequenceCastComplete: usize = 0x1080;
        pub const m_cameraSequenceChannelStart: usize = 0x1108;
        pub const m_bEndChannelStartSequenceOnChannelComplete: usize = 0x1190;
        pub const m_flCameraPreviewOffset: usize = 0x1194;
        pub const m_flCameraPreviewDistance: usize = 0x1198;
        pub const m_flCameraPreviewSpeed: usize = 0x119c;
        pub const m_previewParticle: usize = 0x11a0;
        pub const m_strPreviewParticleEffectConfig: usize = 0x1280;
        pub const m_PreviewPathParticle: usize = 0x1288;
        pub const m_mapCastEventParticles: usize = 0x1368;
        pub const m_skillshotHitParticle: usize = 0x1390;
        pub const m_skillshotMissParticle: usize = 0x1470;
        pub const m_TargetingPreviewParticle: usize = 0x1550;
        pub const m_HudSharedStyle: usize = 0x1630;
        pub const m_strSelectedSound: usize = 0x1710;
        pub const m_strUnselectedSound: usize = 0x1720;
        pub const m_strSelectedLoopSound: usize = 0x1730;
        pub const m_strCastSound: usize = 0x1740;
        pub const m_strChannelSound: usize = 0x1750;
        pub const m_strChannelLoopSound: usize = 0x1760;
        pub const m_strCastDelaySound: usize = 0x1770;
        pub const m_strCastDelayLoopSound: usize = 0x1780;
        pub const m_strHitConfirmationSound: usize = 0x1790;
        pub const m_strDamageTakenSound: usize = 0x17a0;
        pub const m_strAbilityOffCooldownSound: usize = 0x17b0;
        pub const m_strAbilityChargeReadySound: usize = 0x17c0;
        pub const m_bPlayMeepMop: usize = 0x17d0;
        pub const m_AutoChannelModifier: usize = 0x17d8;
        pub const m_AutoCastDelayModifier: usize = 0x17e8;
        pub const m_AutoIntrinsicModifiers: usize = 0x17f8;
        pub const m_cosmeticInfo: usize = 0x1810;
    }

    // Parent: None
    pub mod ItemImbuementPair_t {
        pub const m_SourceItemID: usize = 0x30;
        pub const m_vecImbuedAbilities: usize = 0x38;
    }

    // Parent: CLogicalEntity
    pub mod CLogicBranch {
        pub const m_bInValue: usize = 0x4a0;
        pub const m_Listeners: usize = 0x4a8;
        pub const m_OnTrue: usize = 0x4c0;
        pub const m_OnFalse: usize = 0x4d8;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Outflow_ScriptedSequence {
        pub const m_szSyncGroup: usize = 0x48;
        pub const m_nExpectedNumSequencesInSyncGroup: usize = 0x50;
        pub const m_bEnsureOnNavmeshOnFinish: usize = 0x54;
        pub const m_bDontTeleportAtEnd: usize = 0x55;
        pub const m_bDisallowInterrupts: usize = 0x56;
        pub const m_scriptedSequenceDataMain: usize = 0x58;
        pub const m_vecAdditionalActors: usize = 0x90;
        pub const m_OnFinished: usize = 0xa8;
        pub const m_OnCanceled: usize = 0xf0;
        pub const m_Triggers: usize = 0x138;
    }

    // Parent: CDynamicProp
    pub mod CCitadel_ShopProp {
    }

    // Parent: CFuncPlatRot
    pub mod CFuncTrackChange {
        pub const m_trackTop: usize = 0x848;
        pub const m_trackBottom: usize = 0x850;
        pub const m_train: usize = 0x858;
        pub const m_trackTopName: usize = 0x860;
        pub const m_trackBottomName: usize = 0x868;
        pub const m_trainName: usize = 0x870;
        pub const m_code: usize = 0x878;
        pub const m_targetState: usize = 0x87c;
        pub const m_use: usize = 0x880;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_TenguUrn_Aura {
    }

    // Parent: CBaseModelEntity
    pub mod CFuncTrackTrain {
        pub const m_ppath: usize = 0x780;
        pub const m_length: usize = 0x784;
        pub const m_vPosPrev: usize = 0x788;
        pub const m_angPrev: usize = 0x794;
        pub const m_controlMins: usize = 0x7a0;
        pub const m_controlMaxs: usize = 0x7ac;
        pub const m_lastBlockPos: usize = 0x7b8;
        pub const m_lastBlockTick: usize = 0x7c4;
        pub const m_flVolume: usize = 0x7c8;
        pub const m_flBank: usize = 0x7cc;
        pub const m_oldSpeed: usize = 0x7d0;
        pub const m_flBlockDamage: usize = 0x7d4;
        pub const m_height: usize = 0x7d8;
        pub const m_maxSpeed: usize = 0x7dc;
        pub const m_dir: usize = 0x7e0;
        pub const m_iszSoundMove: usize = 0x7e8;
        pub const m_iszSoundMovePing: usize = 0x7f0;
        pub const m_iszSoundStart: usize = 0x7f8;
        pub const m_iszSoundStop: usize = 0x800;
        pub const m_strPathTarget: usize = 0x808;
        pub const m_flMoveSoundMinDuration: usize = 0x810;
        pub const m_flMoveSoundMaxDuration: usize = 0x814;
        pub const m_flNextMoveSoundTime: usize = 0x818;
        pub const m_flMoveSoundMinPitch: usize = 0x81c;
        pub const m_flMoveSoundMaxPitch: usize = 0x820;
        pub const m_eOrientationType: usize = 0x824;
        pub const m_eVelocityType: usize = 0x828;
        pub const m_OnStart: usize = 0x840;
        pub const m_OnNext: usize = 0x858;
        pub const m_OnArrivedAtDestinationNode: usize = 0x870;
        pub const m_bManualSpeedChanges: usize = 0x888;
        pub const m_flDesiredSpeed: usize = 0x88c;
        pub const m_flSpeedChangeTime: usize = 0x890;
        pub const m_flAccelSpeed: usize = 0x894;
        pub const m_flDecelSpeed: usize = 0x898;
        pub const m_bAccelToSpeed: usize = 0x89c;
        pub const m_flNextMPSoundTime: usize = 0x8a0;
    }

    // Parent: CPointEntity
    pub mod CEnvInstructorHint {
        pub const m_iszName: usize = 0x4a0;
        pub const m_iszReplace_Key: usize = 0x4a8;
        pub const m_iszHintTargetEntity: usize = 0x4b0;
        pub const m_iTimeout: usize = 0x4b8;
        pub const m_iDisplayLimit: usize = 0x4bc;
        pub const m_iszIcon_Onscreen: usize = 0x4c0;
        pub const m_iszIcon_Offscreen: usize = 0x4c8;
        pub const m_iszCaption: usize = 0x4d0;
        pub const m_iszActivatorCaption: usize = 0x4d8;
        pub const m_Color: usize = 0x4e0;
        pub const m_fIconOffset: usize = 0x4e4;
        pub const m_fRange: usize = 0x4e8;
        pub const m_iPulseOption: usize = 0x4ec;
        pub const m_iAlphaOption: usize = 0x4ed;
        pub const m_iShakeOption: usize = 0x4ee;
        pub const m_bStatic: usize = 0x4ef;
        pub const m_bNoOffscreen: usize = 0x4f0;
        pub const m_bForceCaption: usize = 0x4f1;
        pub const m_iInstanceType: usize = 0x4f4;
        pub const m_bSuppressRest: usize = 0x4f8;
        pub const m_iszBinding: usize = 0x500;
        pub const m_bAllowNoDrawTarget: usize = 0x508;
        pub const m_bAutoStart: usize = 0x509;
        pub const m_bLocalPlayerOnly: usize = 0x50a;
    }

    // Parent: CBaseEntity
    pub mod CEnvWind {
        pub const m_EnvWindShared: usize = 0x4a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_TrackingBomb {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_SpawnZombies_Area {
        pub const m_vecSpawnedZombies: usize = 0xf0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_ShadowClone {
        pub const m_bCloneIsInvisible: usize = 0x150;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_CloneSingleVData {
        pub const m_CloneModifier: usize = 0x1818;
        pub const m_ClonedParticle: usize = 0x1828;
        pub const m_mapClonedAbilities: usize = 0x1908;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCrackshotVData {
        pub const m_ExplosionParticle: usize = 0x1818;
        pub const m_ExplosionVictimParticle: usize = 0x18f8;
        pub const m_ReadyParticle: usize = 0x19d8;
        pub const m_DebuffModifier: usize = 0x1ab8;
        pub const m_CrackshotImmuneModifier: usize = 0x1ac8;
        pub const m_BulletResistModifier: usize = 0x1ad8;
        pub const m_HeadShotVictimSound: usize = 0x1ae8;
        pub const m_HeadShotConfirmationSound: usize = 0x1af8;
        pub const m_ReadySound: usize = 0x1b08;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Shotgun_Astro_Backwards {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Astro_Shotgun_Toggle {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Kelvin_Frozen {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CModifierAirRaidVData {
        pub const m_SlowModifier: usize = 0x780;
        pub const m_strWeaponShootSound: usize = 0x790;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SilenceProcWatcher {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_ChainLightning {
        pub const m_flNextProcTime: usize = 0x2c0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Quarantine {
    }

    // Parent: CTier3BossAbility
    pub mod CCitadel_Ability_Tier3Boss_RocketBarrage {
        pub const m_nGrenadeIndex: usize = 0xf70;
        pub const m_nTotalGrenades: usize = 0xf74;
        pub const m_hShootPos: usize = 0xf78;
    }

    // Parent: CScaleFunctionVData
    pub mod CScaleFunctionAbilityProperty_HealingSpiritScaleVData {
    }

    // Parent: CTriggerNeutralShield
    pub mod CTriggerTier3Phase2Shield {
        pub const m_nNumEnemyPlayers: usize = 0x910;
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventPathCornerEntity {
        pub const m_iszPathCorner: usize = 0x560;
        pub const m_iCountMax: usize = 0x568;
        pub const m_flDistanceMax: usize = 0x56c;
        pub const m_flDistMaxSqr: usize = 0x570;
        pub const m_flDotProductMax: usize = 0x574;
        pub const m_bPlaying: usize = 0x578;
        pub const m_vecCornerPairsNetworked: usize = 0x5a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Swan_Acrobat {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Rutger_ForceField_PushOut {
        pub const m_vStart: usize = 0xd0;
        pub const m_vDest: usize = 0xdc;
        pub const m_vCenter: usize = 0xe8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Crackshot {
        pub const m_ReadyParticleIndex: usize = 0xf74;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FlameDash {
        pub const m_vLastDropZonePos: usize = 0xd0;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_TechDamage {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelBulletTimeWarpVData {
        pub const m_TimeWallHitParticle: usize = 0x28;
        pub const m_TimeWallHitTimerParticle: usize = 0x108;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Inflow_BaseEntrypoint {
        pub const m_EntryChunk: usize = 0x48;
        pub const m_RegisterMap: usize = 0x50;
    }

    // Parent: CBaseCombatCharacter
    pub mod CCitadel_PointTalker_Base {
    }

    // Parent: CTriggerMultiple
    pub mod CDynamicNavConnectionsVolume {
        pub const m_iszConnectionTarget: usize = 0x8f8;
        pub const m_vecConnections: usize = 0x900;
        pub const m_sTransitionType: usize = 0x918;
        pub const m_bConnectionsEnabled: usize = 0x920;
        pub const m_flTargetAreaSearchRadius: usize = 0x924;
        pub const m_flUpdateDistance: usize = 0x928;
        pub const m_flMaxConnectionDistance: usize = 0x92c;
    }

    // Parent: CBaseAnimGraph
    pub mod CConstraintAnchor {
        pub const m_massScale: usize = 0xa90;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_DisableGravity {
    }

    // Parent: None
    pub mod CCitadel_PickupItemSpawnerAPI {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PunkGoat_GoatFlip {
        pub const m_eState: usize = 0x1af0;
        pub const m_tStateStartTime: usize = 0x1af4;
        pub const m_flGoingUpTargetElevation: usize = 0x1af8;
        pub const m_flGoingUpStartElevation: usize = 0x1afc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_SelfZap {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGangActivityCancelVData {
        pub const m_AbilitySwap: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SleepBomb {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_HatTrick {
        pub const m_hProjectile: usize = 0xf70;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierPowerJumpVData {
        pub const m_FloatParticle: usize = 0x750;
        pub const m_flAirDrag: usize = 0x830;
        pub const m_flVerticalCameraOffset: usize = 0x834;
        pub const m_flVerticalCameraOffsetLerpTime: usize = 0x838;
        pub const m_flVerticalCameraOffsetBias: usize = 0x83c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MutedVData {
        pub const m_MutedParticle: usize = 0x750;
        pub const m_MutedPlayerParticle: usize = 0x830;
        pub const m_MutedStatusParticle: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_T2Boss_Wave_Target {
    }

    // Parent: None
    pub mod CitadelStolenAbilitySlot_t {
        pub const m_eStolenSlot: usize = 0x8;
        pub const m_bIsActivelyStolen: usize = 0xa;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_WaitForCursorsWithTagBase {
        pub const m_nCursorsAllowedToWait: usize = 0x48;
        pub const m_WaitComplete: usize = 0x50;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_BarrackBoss {
        pub const m_CCitadelPlayerClipComponent: usize = 0x17c8;
        pub const m_iLane: usize = 0x17ec;
        pub const m_hTrooperSpawnPoint: usize = 0x1af0;
        pub const m_LaneSide: usize = 0x1af4;
        pub const m_flFadeOutStart: usize = 0x1af8;
        pub const m_flFadeOutEnd: usize = 0x1afc;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_Magic_Beam_Blocker {
        pub const m_flTurnSolidTime: usize = 0xa90;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_SurgingPower {
    }

    // Parent: CPointEntity
    pub mod CInfoCitadelHideout {
        pub const m_OnFastCooldownsEnabled: usize = 0x4a0;
        pub const m_OnFastCooldownsDisabled: usize = 0x4b8;
    }

    // Parent: CBaseEntity
    pub mod CEnvLightProbeVolume {
        pub const m_Entity_hLightProbeTexture_AmbientCube: usize = 0x1498;
        pub const m_Entity_hLightProbeTexture_SDF: usize = 0x14a0;
        pub const m_Entity_hLightProbeTexture_SH2_DC: usize = 0x14a8;
        pub const m_Entity_hLightProbeTexture_SH2_R: usize = 0x14b0;
        pub const m_Entity_hLightProbeTexture_SH2_G: usize = 0x14b8;
        pub const m_Entity_hLightProbeTexture_SH2_B: usize = 0x14c0;
        pub const m_Entity_hLightProbeDirectLightIndicesTexture: usize = 0x14c8;
        pub const m_Entity_hLightProbeDirectLightScalarsTexture: usize = 0x14d0;
        pub const m_Entity_hLightProbeDirectLightShadowsTexture: usize = 0x14d8;
        pub const m_Entity_vBoxMins: usize = 0x14e0;
        pub const m_Entity_vBoxMaxs: usize = 0x14ec;
        pub const m_Entity_bMoveable: usize = 0x14f8;
        pub const m_Entity_nHandshake: usize = 0x14fc;
        pub const m_Entity_nPriority: usize = 0x1500;
        pub const m_Entity_bStartDisabled: usize = 0x1504;
        pub const m_Entity_nLightProbeSizeX: usize = 0x1508;
        pub const m_Entity_nLightProbeSizeY: usize = 0x150c;
        pub const m_Entity_nLightProbeSizeZ: usize = 0x1510;
        pub const m_Entity_nLightProbeAtlasX: usize = 0x1514;
        pub const m_Entity_nLightProbeAtlasY: usize = 0x1518;
        pub const m_Entity_nLightProbeAtlasZ: usize = 0x151c;
        pub const m_Entity_bEnabled: usize = 0x1529;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fencer_ThrowBlade {
        pub const m_vCastPosition: usize = 0xf70;
        pub const m_qCastAngles: usize = 0xf7c;
        pub const m_nMarkParticleIndex: usize = 0xf88;
        pub const m_nLingerParticleIndex: usize = 0xf8c;
        pub const m_nExplodeParticleIndex: usize = 0xf90;
        pub const m_bHitEnemyPlayer: usize = 0xf94;
        pub const m_tRecastEndTime: usize = 0xf98;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidPlantBranchWallVData {
        pub const m_BranchWallModel: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadelModifierDruidInvis {
        pub const m_flCurrentObscureLevel: usize = 0xd0;
        pub const m_nInvisModifierID: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_SilenceBomb {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Rutger_ForceField_VData {
        pub const m_AuraModifier: usize = 0x1818;
        pub const m_VictimPushModifier: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
        pub const m_strDomeCreated: usize = 0x1848;
        pub const m_strChargeUpSound: usize = 0x1858;
        pub const m_strPushAndDamage: usize = 0x1868;
        pub const m_ChronoSphereChargeParticle: usize = 0x1878;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Gunslinger_Salvo {
        pub const m_CastTarget: usize = 0xf74;
        pub const m_iCurrentShots: usize = 0xf78;
        pub const m_iTotalShots: usize = 0xf7c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_ClusterGrenade {
        pub const m_vecHitEnemies: usize = 0xf70;
        pub const m_flNextProjectileTime: usize = 0xf88;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelViscousBallVData {
        pub const m_sModelName: usize = 0x28;
        pub const m_flPhysicsRadius: usize = 0x108;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_Weapon_BossTier2 {
    }

    // Parent: CBaseEntity
    pub mod CAI_ScriptConditions {
        pub const m_OnConditionsSatisfied: usize = 0x4a8;
        pub const m_OnConditionsTimeout: usize = 0x4c0;
        pub const m_NoValidActors: usize = 0x4d8;
        pub const m_fDisabled: usize = 0x4f0;
        pub const m_bLeaveAsleep: usize = 0x4f1;
        pub const m_hTarget: usize = 0x4f4;
        pub const m_flRequiredDuration: usize = 0x4f8;
        pub const m_fMinState: usize = 0x4fc;
        pub const m_fMaxState: usize = 0x500;
        pub const m_fScriptStatus: usize = 0x504;
        pub const m_fActorSeePlayer: usize = 0x508;
        pub const m_Actor: usize = 0x510;
        pub const m_flPlayerActorProximity: usize = 0x518;
        pub const m_PlayerActorProxTester: usize = 0x51c;
        pub const m_flPlayerActorFOV: usize = 0x524;
        pub const m_bPlayerActorFOVTrueCone: usize = 0x528;
        pub const m_fPlayerActorLOS: usize = 0x52c;
        pub const m_fActorSeeTarget: usize = 0x530;
        pub const m_flActorTargetProximity: usize = 0x534;
        pub const m_ActorTargetProxTester: usize = 0x538;
        pub const m_flPlayerTargetProximity: usize = 0x540;
        pub const m_PlayerTargetProxTester: usize = 0x544;
        pub const m_flPlayerTargetFOV: usize = 0x54c;
        pub const m_bPlayerTargetFOVTrueCone: usize = 0x550;
        pub const m_fPlayerTargetLOS: usize = 0x554;
        pub const m_fPlayerBlockingActor: usize = 0x558;
        pub const m_fActorInPVS: usize = 0x55c;
        pub const m_flMinTimeout: usize = 0x560;
        pub const m_flMaxTimeout: usize = 0x564;
        pub const m_fActorInVehicle: usize = 0x568;
        pub const m_fPlayerInVehicle: usize = 0x56c;
        pub const m_ElementList: usize = 0x570;
    }

    // Parent: CServerOnlyEntity
    pub mod CAI_Hint {
        pub const m_NodeData: usize = 0x4a0;
        pub const m_hHintOwner: usize = 0x4e0;
        pub const m_flNextUseTime: usize = 0x4e4;
        pub const m_OnNPCStartedUsing: usize = 0x4e8;
        pub const m_OnNPCStoppedUsing: usize = 0x508;
        pub const m_nodeFOV: usize = 0x528;
        pub const m_bNodeFOVCheckBehind: usize = 0x52c;
        pub const m_vecForward: usize = 0x530;
        pub const m_iszAnimgraphEntryAction: usize = 0x540;
        pub const m_iszAnimgraphExitAction: usize = 0x548;
        pub const m_iszAnimgraphEntryCmd: usize = 0x550;
        pub const m_iszAnimgraphExitCmd: usize = 0x558;
        pub const m_iszNavlinkTargetName: usize = 0x560;
        pub const m_bRemoveOnUnreserved: usize = 0x568;
        pub const m_hAssociatedEntity: usize = 0x56c;
        pub const m_flInteractionDistance: usize = 0x570;
        pub const m_flCooldown: usize = 0x574;
        pub const m_iszNPCFollowsEntity: usize = 0x578;
        pub const m_flNPCSnapToHintDistance: usize = 0x580;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_SettingSun {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_Colossus {
    }

    // Parent: CitadelAbilityVData
    pub mod CBaseTriggerAbilityVData {
        pub const m_AbilityToTrigger: usize = 0x1818;
        pub const m_flMinCancelTime: usize = 0x1828;
        pub const m_eHintFeatureToMarkUsedOnTrigger: usize = 0x182c;
        pub const bTriggerOnDeselect: usize = 0x1830;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_ZombieWallVData {
        pub const m_WallParticle: usize = 0x1818;
        pub const m_WallWarningEffect: usize = 0x18f8;
        pub const m_BuffModifier: usize = 0x19d8;
        pub const m_GroundAuraModifier: usize = 0x19e8;
        pub const m_TetherModifier: usize = 0x19f8;
        pub const m_flMiddleStitchDistance: usize = 0x1a08;
        pub const m_flTraceRadius: usize = 0x1a0c;
        pub const m_flDistanceAboveGround: usize = 0x1a10;
        pub const m_flFloatDownRate: usize = 0x1a14;
        pub const m_flClimbHeight: usize = 0x1a18;
        pub const m_flStepDownHeight: usize = 0x1a1c;
        pub const m_flCurlNoiseFrequency: usize = 0x1a20;
        pub const m_CurlNoiseStrengthCurve: usize = 0x1a28;
        pub const m_strWallHitSound: usize = 0x1a68;
        pub const m_strWallPopSound: usize = 0x1a78;
        pub const m_strWallBeamStartSound: usize = 0x1a88;
        pub const m_strWallBeamStopSound: usize = 0x1a98;
        pub const m_strWallBeamPointStartLoopSound: usize = 0x1aa8;
        pub const m_strWallBeamPointEndLoopSound: usize = 0x1ab8;
        pub const m_strWallBeamPointClosestLoopSound: usize = 0x1ac8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fortuna_Ability04 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fathom_ScaldingSpray_WeaponDamage {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_Crescendo_PostAOE {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Wrecker_Ultimate {
        pub const m_vecGrabbed: usize = 0xd0;
        pub const m_nFXIndex: usize = 0xe8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_AirRaid {
    }

    // Parent: CitadelItemVData
    pub mod CItemCapacitorVData {
        pub const m_DebuffModifier: usize = 0x18b8;
        pub const m_DamageParticle: usize = 0x18c8;
        pub const m_PurgeCastParticle: usize = 0x19a8;
        pub const m_PurgeSound: usize = 0x1a88;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Upgrade_KineticSash {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SpiritBurnProcWatcherVData {
        pub const m_SpiritBurnDamageTracker: usize = 0x780;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ReloadSpeed {
        pub const m_flReloadSpeed: usize = 0xd0;
    }

    // Parent: CNPC_Neutral_SinnersSacrifice
    pub mod CNPC_Neutral_SinnersSacrifice_Hideout {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Thumper_2_AuraVData {
        pub const m_AoEParticle: usize = 0x7a8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_GarbageAura {
        pub const m_hEnemyHeroInVacuum: usize = 0x288;
        pub const m_nNumPlayersKilled: usize = 0x2a0;
        pub const m_tLastDamageTime: usize = 0x2a4;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_RegenerativeArmor {
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoTeamSpawn {
        pub const m_bIntroSpawn: usize = 0x4a0;
        pub const m_iLaneNum: usize = 0x4a4;
        pub const m_strGroupTag: usize = 0x4a8;
        pub const m_hAssignedPlayer: usize = 0x4b0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_Hotel_Victim {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VampireBat_LoveBitesProc_VData {
        pub const m_BuffModifier: usize = 0x750;
        pub const m_SlowModifier: usize = 0x760;
        pub const m_strProcHitSound: usize = 0x770;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_AnimalCurseVData {
        pub const m_CurseModifier: usize = 0x1818;
        pub const m_AirDampingModifier: usize = 0x1828;
        pub const m_TargetWarningSound: usize = 0x1838;
        pub const m_ProjectileHitConfirm: usize = 0x1848;
        pub const m_ProjectileImpactParticle: usize = 0x1858;
        pub const m_TargetWarningParticle: usize = 0x1938;
        pub const m_ProjectileExplodeParticle: usize = 0x1a18;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityThumper2VData {
        pub const m_StompParticle: usize = 0x1818;
        pub const m_strStompExplosionSound: usize = 0x18f8;
        pub const m_BuffModifier: usize = 0x1908;
        pub const m_BarbedWireAuraModifier: usize = 0x1918;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SpiritBurnProcWatcher {
    }

    // Parent: None
    pub mod CFuncMoverAPI {
    }

    // Parent: None
    pub mod CGameSceneNode {
        pub const m_nodeToWorld: usize = 0x10;
        pub const m_pOwner: usize = 0x30;
        pub const m_pParent: usize = 0x38;
        pub const m_pChild: usize = 0x40;
        pub const m_pNextSibling: usize = 0x48;
        pub const m_hParent: usize = 0x70;
        pub const m_vecOrigin: usize = 0x80;
        pub const m_angRotation: usize = 0xb8;
        pub const m_flScale: usize = 0xc4;
        pub const m_vecAbsOrigin: usize = 0xc8;
        pub const m_angAbsRotation: usize = 0xd4;
        pub const m_flAbsScale: usize = 0xe0;
        pub const m_nParentAttachmentOrBone: usize = 0xe4;
        pub const m_bDebugAbsOriginChanges: usize = 0xe6;
        pub const m_bDormant: usize = 0xe7;
        pub const m_bForceParentToBeNetworked: usize = 0xe8;
        pub const m_bDirtyHierarchy: usize = 0x0;
        pub const m_bDirtyBoneMergeInfo: usize = 0x0;
        pub const m_bNetworkedPositionChanged: usize = 0x0;
        pub const m_bNetworkedAnglesChanged: usize = 0x0;
        pub const m_bNetworkedScaleChanged: usize = 0x0;
        pub const m_bWillBeCallingPostDataUpdate: usize = 0x0;
        pub const m_bBoneMergeFlex: usize = 0x0;
        pub const m_nLatchAbsOrigin: usize = 0x0;
        pub const m_bDirtyBoneMergeBoneToRoot: usize = 0x0;
        pub const m_nHierarchicalDepth: usize = 0xeb;
        pub const m_nHierarchyType: usize = 0xec;
        pub const m_nDoNotSetAnimTimeInInvalidatePhysicsCount: usize = 0xed;
        pub const m_name: usize = 0xf0;
        pub const m_hierarchyAttachName: usize = 0x104;
        pub const m_flClientLocalScale: usize = 0x108;
        pub const m_vRenderOrigin: usize = 0x10c;
    }

    // Parent: CRopeKeyframe
    pub mod CRopeKeyframeAlias_move_rope {
    }

    // Parent: CBaseModelEntity
    pub mod CConditionalCollidable {
    }

    // Parent: CCitadelBaseLockonAbility
    pub mod CCitadel_Ability_Lash_Ultimate {
        pub const m_EGrappleState: usize = 0x12e0;
        pub const m_flStateEnterTime: usize = 0x12e4;
        pub const m_flNextStateTime: usize = 0x12e8;
        pub const m_flBoostEndTime: usize = 0x12ec;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_ViperVenomProcWatcher {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ShadowPulse_VData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_ChannelParticle: usize = 0x1828;
        pub const m_AoEParticle: usize = 0x1908;
        pub const m_EffectParticle: usize = 0x19e8;
        pub const m_HitParticle: usize = 0x1ac8;
        pub const m_RadiusParticle: usize = 0x1ba8;
        pub const m_strExpireSound: usize = 0x1c88;
        pub const m_cameraSequenceInShadow: usize = 0x1c98;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_PatronsBlessingProcWatcherVData {
        pub const m_DamageTracker: usize = 0x780;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ShieldImpact {
        pub const m_AmbientEffect: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Obscured {
        pub const m_flStartObscuredAmount: usize = 0xd0;
    }

    // Parent: CBaseModifier
    pub mod CCitadelModifier {
        pub const m_flEffectiveness: usize = 0xb0;
    }

    // Parent: None
    pub mod CPulseServerFuncs_Sounds {
    }

    // Parent: None
    pub mod CPulsePhysicsConstraintsFuncs {
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_ObserverServices {
        pub const m_iObserverMode: usize = 0x48;
        pub const m_hObserverTarget: usize = 0x4c;
        pub const m_iObserverLastMode: usize = 0x50;
        pub const m_bForcedObserverMode: usize = 0x54;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Cadence_AnthemAOEVData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_BaseHeldItem {
        pub const m_hProjectile: usize = 0xff0;
        pub const m_tFirstPickupTime: usize = 0xff4;
        pub const m_tLastPickupTime: usize = 0xff8;
    }

    // Parent: CPointEntity
    pub mod CLogicScript {
    }

    // Parent: None
    pub mod CAttributeManagercached_attribute_float_t {
        pub const flIn: usize = 0x0;
        pub const iAttribHook: usize = 0x8;
        pub const flOut: usize = 0x10;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_HauntingSkull_Area {
        pub const m_hPreviewRingParticle: usize = 0xd0;
        pub const m_vecDeployedSkulls: usize = 0xe0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_AttachHost {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Thumper_EnemyPulled_VData {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityBullChargeVData {
        pub const m_cameraSequenceImpact: usize = 0x1818;
        pub const m_ModifierTossAirControlLockout: usize = 0x18a0;
        pub const m_ModifierWeaponPowerIncrease: usize = 0x18b0;
        pub const m_ModifierChargeDragEnemy: usize = 0x18c0;
        pub const m_ModifierBullCharging: usize = 0x18d0;
        pub const m_SlowModifier: usize = 0x18e0;
        pub const m_WallImpactParticle: usize = 0x18f0;
        pub const m_strWallSlamSound: usize = 0x19d0;
        pub const m_strHitEnemySound: usize = 0x19e0;
        pub const m_flWallStunLookAheadDist: usize = 0x19f0;
        pub const m_flEndChargeVelocityScale: usize = 0x19f4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HealthSwap {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_CloakOfOpportunityWatcher {
        pub const m_nAbilityBlocking: usize = 0x1d0;
        pub const m_nAbilityBlockTime: usize = 0x1d4;
        pub const m_hModifierCaster: usize = 0x1d8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BerserkerVData {
        pub const m_StackModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_CheatDeathImmunityVData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_BuffPlayerParticle: usize = 0x830;
        pub const m_StatusEffect: usize = 0x910;
        pub const m_strTimerSound: usize = 0x9f0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_MagicShock_Proc {
    }

    // Parent: None
    pub mod CCitadel_Modifier_ExplosiveShotsBulletEntityPair_t {
        pub const m_hEntHit: usize = 0x0;
        pub const m_ShotHit: usize = 0x4;
    }

    // Parent: CBasePulseGraphInstance
    pub mod CPulseGraphInstance_ServerEntity {
        pub const m_hOwner: usize = 0x190;
        pub const m_bActivated: usize = 0x194;
        pub const m_sNameFixupStaticPrefix: usize = 0x198;
        pub const m_sNameFixupParent: usize = 0x1a0;
        pub const m_sNameFixupLocal: usize = 0x1a8;
        pub const m_sProceduralWorldNameForRelays: usize = 0x1b0;
    }

    // Parent: CSceneEntity
    pub mod CSceneEntityAlias_logic_choreographed_scene {
    }

    // Parent: CBaseModelEntity
    pub mod CAssignedLaneParticle {
        pub const m_iLane: usize = 0x780;
    }

    // Parent: CBaseEntity
    pub mod CRagdollManager {
        pub const m_iCurrentMaxRagdollCount: usize = 0x4a0;
        pub const m_iMaxRagdollCount: usize = 0x4a4;
        pub const m_bSaveImportant: usize = 0x4a8;
        pub const m_bCanTakeDamage: usize = 0x4a9;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ShadowCloneVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Yakuza_Shakedown {
        pub const m_IgnoreChannelSlow: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_MeleeParry {
        pub const m_nActiveFX: usize = 0xf70;
        pub const m_flParryStartTime: usize = 0xf74;
        pub const m_bAttackParried: usize = 0xf78;
        pub const m_flParrySuccessEndTime: usize = 0xf7c;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_SiphonBullets_HealthLoss_VData {
        pub const m_SiphonParticle: usize = 0x750;
        pub const m_HealModifier: usize = 0x830;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_AutoCleanseVData {
        pub const m_strPurgeSound: usize = 0x18b8;
        pub const m_PurgeCastParticle: usize = 0x18c8;
        pub const m_BarrierModifier: usize = 0x19a8;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_TrooperGrenade {
    }

    // Parent: CBaseTrigger
    pub mod CPostProcessingVolume {
        pub const m_hPostSettings: usize = 0x8f0;
        pub const m_flFadeDuration: usize = 0x8f8;
        pub const m_flMinLogExposure: usize = 0x8fc;
        pub const m_flMaxLogExposure: usize = 0x900;
        pub const m_flMinExposure: usize = 0x904;
        pub const m_flMaxExposure: usize = 0x908;
        pub const m_flExposureCompensation: usize = 0x90c;
        pub const m_flExposureFadeSpeedUp: usize = 0x910;
        pub const m_flExposureFadeSpeedDown: usize = 0x914;
        pub const m_flTonemapEVSmoothingRange: usize = 0x918;
        pub const m_bMaster: usize = 0x91c;
        pub const m_bExposureControl: usize = 0x91d;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Bull_Heal_Aura {
        pub const m_playerAngles: usize = 0x108;
        pub const m_AuraParticle: usize = 0x114;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierKnockdownVData {
        pub const m_flSatVolumeRadius: usize = 0x830;
        pub const m_flSatVolumeFadeOut: usize = 0x834;
        pub const m_flGravityScale: usize = 0x838;
        pub const m_flDesatAmount: usize = 0x83c;
        pub const m_satColorDesat: usize = 0x840;
        pub const m_satColorSat: usize = 0x844;
        pub const m_satColorOutline: usize = 0x848;
        pub const m_flGetUpSeqDuration: usize = 0x84c;
        pub const m_cameraSequenceGetUp: usize = 0x850;
    }

    // Parent: CPointEntity
    pub mod CPointProximitySensor {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_hTargetEntity: usize = 0x4a4;
        pub const m_Distance: usize = 0x4a8;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_BookWorm_PrimaryWeaponVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Frank_ShockFullyChargedVData {
        pub const m_FullyChargedParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierStackingDamageVData {
        pub const m_SlowModifier: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Unstable_Concoction {
    }

    // Parent: None
    pub mod CStreetBrawlController {
        pub const m_eStreetBrawlState: usize = 0x8;
        pub const m_flStreetBrawlStateStartTime: usize = 0xc;
        pub const m_flNextStateTime: usize = 0x10;
        pub const m_flStreetBrawlTotalNonCombatTime: usize = 0x14;
        pub const m_iRound: usize = 0x18;
        pub const m_iLastBuyCountDown: usize = 0x1c;
        pub const m_iTeamSapphireScore: usize = 0x20;
        pub const m_iTeamAmberScore: usize = 0x24;
        pub const m_tNoTrooperTime: usize = 0x28;
        pub const m_bOvertime: usize = 0x2c;
        pub const m_nScoringTeam: usize = 0x30;
        pub const m_vTeamSapphireBoss: usize = 0x38;
        pub const m_vTeamAmberBoss: usize = 0x50;
        pub const m_mapOriginalConVarVals: usize = 0x90;
        pub const m_vecOfferedLegendaries: usize = 0xb8;
        pub const m_vecOfferedRares: usize = 0xd0;
        pub const m_vecOfferedEnhanced: usize = 0xe8;
        pub const m_nShuffleSeed: usize = 0x100;
    }

    // Parent: None
    pub mod CPulse_InvokeBinding {
        pub const m_RegisterMap: usize = 0x0;
        pub const m_FuncName: usize = 0x30;
        pub const m_nCellIndex: usize = 0x40;
        pub const m_nSrcChunk: usize = 0x44;
        pub const m_nSrcInstruction: usize = 0x48;
    }

    // Parent: CTriggerOnce
    pub mod CTriggerLook {
        pub const m_hLookTarget: usize = 0x8f8;
        pub const m_flFieldOfView: usize = 0x8fc;
        pub const m_flLookTime: usize = 0x900;
        pub const m_flLookTimeTotal: usize = 0x904;
        pub const m_flLookTimeLast: usize = 0x908;
        pub const m_flTimeoutDuration: usize = 0x90c;
        pub const m_bTimeoutFired: usize = 0x910;
        pub const m_bIsLooking: usize = 0x911;
        pub const m_b2DFOV: usize = 0x912;
        pub const m_bUseVelocity: usize = 0x913;
        pub const m_bTestOcclusion: usize = 0x914;
        pub const m_bTestAllVisibleOcclusion: usize = 0x915;
        pub const m_OnTimeout: usize = 0x918;
        pub const m_OnStartLook: usize = 0x930;
        pub const m_OnEndLook: usize = 0x948;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Rutger_Pulse_Aura {
        pub const m_flStartRadius: usize = 0x108;
        pub const m_flEndRadius: usize = 0x10c;
        pub const m_flSpreadDuration: usize = 0x110;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Cadence_SleepAOE {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Wrecker_Teleport {
        pub const m_CCitadelMinimapComponent: usize = 0x860;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Viscous_GooGrenade {
        pub const m_nBounces: usize = 0x860;
        pub const m_tNextDetonateTime: usize = 0x864;
        pub const m_vecLastHitTargets: usize = 0x868;
        pub const m_vecProjectileHitTargets: usize = 0x880;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierIdolReturnTimerVData {
        pub const m_ChannelParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Unicorn_DazzlingOrbNextTargetVData {
        pub const m_NextTargetParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_Coffin {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Trapper_Immobilize {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Hornet_Chain {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_StaticCharge_V2_VData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_StaticChargeModifier: usize = 0x18f8;
        pub const m_StaticChargeWorldModifier: usize = 0x1908;
        pub const m_flWorldTraceRadius: usize = 0x1918;
        pub const m_flUnitTraceRadius: usize = 0x191c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SuperNeutralChargePrepare {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DelayedApply {
        pub const m_kvCopy: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Basic_RangedArmorBonus {
    }

    // Parent: CScaleFunctionVData
    pub mod CScaleFunctionAbilityPropertySingleStatVData {
    }

    // Parent: CPulseCell_Outflow_PlaySceneBase
    pub mod CPulseCell_Outflow_PlayVCD {
        pub const m_hChoreoScene: usize = 0xf0;
        pub const m_OnPaused: usize = 0xf8;
        pub const m_OnResumed: usize = 0x140;
        pub const m_OutRequirements: usize = 0x188;
    }

    // Parent: CCitadelItemPickup
    pub mod CCitadelItemPickupIdol {
        pub const m_nTeamBias: usize = 0x5520;
        pub const m_bPlaySpawnMusic: usize = 0x5524;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_BookwormDragon_Projectile {
        pub const m_vecHitUnits: usize = 0x860;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Rutger_Pulse_VData {
        pub const m_AuraModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BeltFed_MagazineVData {
        pub const m_SpinUpSound: usize = 0x750;
        pub const m_SpinDownSound: usize = 0x760;
        pub const m_SpinLoopSound: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Magic_Clarity_Buff {
        pub const m_iAbilityID: usize = 0x250;
        pub const m_bAbilityLocked: usize = 0x2d8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_LongRangeSlowingTech_Proc {
    }

    // Parent: None
    pub mod ItemDraftOption_t {
        pub const m_Item: usize = 0x30;
        pub const m_BonusItem1: usize = 0x68;
        pub const m_BonusItem2: usize = 0xa0;
        pub const m_bHasBeenDrafted: usize = 0xd8;
        pub const m_bRare: usize = 0xd9;
    }

    // Parent: CGameRules
    pub mod CMultiplayRules {
    }

    // Parent: CCitadelPlayerController
    pub mod CCitadelPreviewPlayerController {
    }

    // Parent: CPhysForce
    pub mod CPhysTorque {
        pub const m_axis: usize = 0x500;
    }

    // Parent: CLogicalEntity
    pub mod CMultiSource {
        pub const m_rgEntities: usize = 0x4a0;
        pub const m_rgTriggered: usize = 0x520;
        pub const m_OnTrigger: usize = 0x5a0;
        pub const m_iTotal: usize = 0x5b8;
        pub const m_globalstate: usize = 0x5c0;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Fortuna_PrimaryWeaponVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_LoveBites {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Synth_Barrage_Caster {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_FissureWallVData {
        pub const m_FriendlyWallParticle: usize = 0x1818;
        pub const m_EnemyWallParticle: usize = 0x18f8;
        pub const m_WallTravelSoundLoop: usize = 0x19d8;
        pub const m_strWallRemoveSound: usize = 0x19e8;
        pub const m_WallModifier: usize = 0x19f8;
        pub const m_SlowModifier: usize = 0x1a08;
        pub const m_flWallPreviewDropdownRate: usize = 0x1a18;
        pub const m_flWallStepHeight: usize = 0x1a1c;
        pub const m_flWallTraceRadius: usize = 0x1a20;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Wraith_RapidFire {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ZiplineKnockdownImmune {
    }

    // Parent: CCitadel_Modifier_ChainLightningEffect
    pub mod CCitadel_Modifier_PowerSurge_ChainLightning {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_TrooperNeutralVData {
        pub const m_eTrooperType: usize = 0x1348;
        pub const m_flGoldReward: usize = 0x134c;
        pub const m_flGoldRewardBonusPercentPerMinute: usize = 0x1350;
        pub const m_bCapSimultanousAttackers: usize = 0x1354;
        pub const m_flShieldReactivateDelay: usize = 0x1358;
        pub const m_flDyingDuration: usize = 0x135c;
        pub const m_bDamagedByBullets: usize = 0x1360;
        pub const m_bDamagedByMelee: usize = 0x1361;
        pub const m_bDamagedByAbilities: usize = 0x1362;
        pub const m_ShieldParticle: usize = 0x1368;
        pub const m_retaliateParticle: usize = 0x1448;
        pub const m_bHasAOEAttack: usize = 0x1528;
        pub const m_flAOERadius: usize = 0x152c;
        pub const m_flAOEDamage: usize = 0x1530;
        pub const m_flAOEAttackCooldown: usize = 0x1534;
        pub const m_AOEParticle: usize = 0x1538;
        pub const m_AOEDebuffToApply: usize = 0x1618;
        pub const m_AOEInitiateSound: usize = 0x1628;
        pub const m_AOESound: usize = 0x1638;
        pub const m_AOEDebuffDuration: usize = 0x1648;
        pub const m_vecRandomBodyGroup: usize = 0x1650;
        pub const m_vecRandomSkin: usize = 0x1668;
        pub const m_flHullCapsuleRadius: usize = 0x1680;
        pub const m_flHullCapsuleHeight: usize = 0x1684;
        pub const m_bFaceEnemyWhileIdle: usize = 0x1688;
        pub const m_IdleLoopSound: usize = 0x1690;
        pub const m_MoveType: usize = 0x16a0;
        pub const m_iWeakPointCount: usize = 0x16a4;
        pub const m_iWeakPointType: usize = 0x16a8;
        pub const m_iWeakPointRespawnTime: usize = 0x16ac;
        pub const m_NeutralDamageGrowth: usize = 0x16b0;
    }

    // Parent: None
    pub mod CitadelHeroData_t {
        pub const m_vecAnimGraphDefaultValueOverrides: usize = 0x8;
        pub const m_HeroID: usize = 0x28;
        pub const m_strHeroSortName: usize = 0x30;
        pub const m_strHeroSearchName: usize = 0x38;
        pub const m_hDamageTakenParticle: usize = 0x40;
        pub const m_hGroundDamageTakenParticle: usize = 0x120;
        pub const m_hDeathParticle: usize = 0x200;
        pub const m_hLowHealthParticle: usize = 0x2e0;
        pub const m_strIconImageSmall: usize = 0x3c0;
        pub const m_strIconHeroCard: usize = 0x3d0;
        pub const m_strIconHeroCardCritical: usize = 0x3e0;
        pub const m_strIconHeroCardGloat: usize = 0x3f0;
        pub const m_strMinimapImage: usize = 0x400;
        pub const m_strTopBarVertical: usize = 0x410;
        pub const m_strLogoImageEnglish: usize = 0x420;
        pub const m_strLogoImageLocalized: usize = 0x430;
        pub const m_hRespawnParticle: usize = 0x440;
        pub const m_colorUI: usize = 0x520;
        pub const m_strModelName: usize = 0x528;
        pub const m_nModelSkin: usize = 0x608;
        pub const m_strWIPModelName: usize = 0x610;
        pub const m_strMainOnlyModelName: usize = 0x6f0;
        pub const m_bUseMainOnlyModelForExperimental: usize = 0x7d0;
        pub const m_strUIPortraitMap: usize = 0x7d8;
        pub const m_strUIShoppingMap: usize = 0x7e0;
        pub const m_strUITeamRevealMap: usize = 0x7e8;
        pub const m_strUIPostgamePortraitMap: usize = 0x7f0;
        pub const m_heroStatsUI: usize = 0x7f8;
        pub const m_heroStatsDisplay: usize = 0x828;
        pub const m_ShopStatDisplay: usize = 0x8b8;
        pub const m_strDeathVOSound: usize = 0x960;
        pub const m_strDeathSound: usize = 0x970;
        pub const m_strLastHitSound: usize = 0x980;
        pub const m_strRosterSelectedSound: usize = 0x990;
        pub const m_strRosterRemovedSound: usize = 0x9a0;
        pub const m_strRosterAvoidedSound: usize = 0x9b0;
        pub const m_strVoteRevealSound: usize = 0x9c0;
        pub const m_strLowHealthSound: usize = 0x9d0;
        pub const m_strHeroSpecificLowHealthSound: usize = 0x9e0;
        pub const m_strMovementLoop: usize = 0x9f0;
        pub const m_strPostGameVictorySound: usize = 0xa00;
        pub const m_strPostGameDefeatSound: usize = 0xa10;
        pub const m_hGameSoundEventScript: usize = 0xa20;
        pub const m_hGeneratedVOEventScript: usize = 0xb00;
        pub const m_flStealthSpeedMetersPerSecond: usize = 0xbe0;
        pub const m_bInDevelopment: usize = 0xbe4;
        pub const m_bAssignedPlayersOnly: usize = 0xbe5;
        pub const m_bNewPlayerRecommended: usize = 0xbe6;
        pub const m_bLaneTestingRecommended: usize = 0xbe7;
        pub const m_bNeedsTesting: usize = 0xbe8;
        pub const m_bLimitedTesting: usize = 0xbe9;
        pub const m_bDisabled: usize = 0xbea;
        pub const m_bPlayerSelectable: usize = 0xbeb;
        pub const m_bPrereleaseOnly: usize = 0xbec;
        pub const m_nComplexity: usize = 0xbf0;
        pub const m_nAllyBotDifficulty: usize = 0xbf4;
        pub const m_nEnemyBotDifficulty: usize = 0xbf8;
        pub const m_flMinLowHealthPercentage: usize = 0xbfc;
        pub const m_flMaxLowHealthPercentage: usize = 0xc00;
        pub const m_flMinMidHealthPercentage: usize = 0xc04;
        pub const m_flMaxMidHealthPercentage: usize = 0xc08;
        pub const m_flMinHealthForThreshold: usize = 0xc0c;
        pub const m_flMaxHealthForThreshold: usize = 0xc10;
        pub const m_flInCombatWithHeroDuration: usize = 0xc14;
        pub const m_flInCombatWithNonHeroDuration: usize = 0xc18;
        pub const m_flInCombatWithNeutralDuration: usize = 0xc1c;
        pub const m_bNAGunFalloffRange: usize = 0xc20;
        pub const m_bAllowedInTunnels: usize = 0xc21;
        pub const m_mapStartingStats: usize = 0xc28;
        pub const m_mapScalingStats: usize = 0xc50;
        pub const m_groundDashPositionCurve: usize = 0xc78;
        pub const m_mapModCostBonuses: usize = 0xcb8;
        pub const m_mapBoundAbilities: usize = 0xcf8;
        pub const m_mapWIPAbilities: usize = 0xd20;
        pub const m_mapItemSlotInfo: usize = 0xd48;
        pub const m_eAbilityResourceType: usize = 0xdc0;
        pub const m_strGunTag: usize = 0xdc8;
        pub const m_vecHeroTags: usize = 0xdd0;
        pub const m_eHeroType: usize = 0xde8;
        pub const m_strRosterBackgroundLayout: usize = 0xdf0;
        pub const m_strHideoutRichPresence: usize = 0xdf8;
        pub const m_mapItemDraftCounterWeights: usize = 0xe00;
        pub const m_mapStandardLevelUpUpgrades: usize = 0xe40;
        pub const m_mapLevelInfo: usize = 0xe68;
        pub const m_mapPurchaseBonuses: usize = 0xe90;
        pub const m_mapItemDraftBucketing: usize = 0xeb8;
    }

    // Parent: CCitadelPlayerPawn
    pub mod CCitadelFamiliarClonePlayerPawn {
        pub const m_hFamiliar: usize = 0x2218;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadelDruidInvisBush {
        pub const m_vStartPos: usize = 0xbf0;
        pub const m_vEndPos: usize = 0xbfc;
        pub const m_flStartGrowTime: usize = 0xc08;
        pub const m_flEndGrowTime: usize = 0xc0c;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_Nano_Predatory_Statue {
        pub const m_hAbility: usize = 0xc18;
        pub const m_flLifetime: usize = 0xc1c;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_TimeWall_Aura {
        pub const m_vecTimeWarps: usize = 0x388;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Empty {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_HelpingHandsVData {
        pub const m_AIPhysicsModifier: usize = 0x1818;
        pub const m_AIAggroModifier: usize = 0x1828;
        pub const m_InvisWatcherModifier: usize = 0x1838;
        pub const m_InfestModifier: usize = 0x1848;
        pub const m_InfestWaitingModifier: usize = 0x1858;
        pub const m_InfestBarrierModifier: usize = 0x1868;
        pub const m_strHelperShootSound: usize = 0x1878;
        pub const m_strHelperSpawnSound: usize = 0x1888;
        pub const m_strHelperEmoteSound: usize = 0x1898;
        pub const m_strHelperFoundEnemySound: usize = 0x18a8;
        pub const m_strHelperHealTroopSound: usize = 0x18b8;
        pub const m_strHelperScaredSound: usize = 0x18c8;
        pub const m_strHelperBuffSound: usize = 0x18d8;
        pub const m_EmoteParticle: usize = 0x18e8;
        pub const m_HealParticle: usize = 0x19c8;
        pub const m_DamageParticle: usize = 0x1aa8;
        pub const m_DamageAttachedParticle: usize = 0x1b88;
        pub const m_CastRegionIndicatorParticle: usize = 0x1c68;
        pub const m_AuraIndicatorParticle: usize = 0x1d48;
        pub const m_AuraInactiveParticle: usize = 0x1e28;
        pub const m_HelperCreateParticle: usize = 0x1f08;
        pub const m_HelperDestroyParticle: usize = 0x1fe8;
        pub const m_HelperParticle: usize = 0x20c8;
        pub const m_HelperSleepingParticle: usize = 0x21a8;
        pub const m_HelperAttackingParticle: usize = 0x2288;
        pub const m_HelperStunnedParticle: usize = 0x2368;
        pub const m_HelperChargingUpParticle: usize = 0x2448;
        pub const m_HelperAttachedParticle: usize = 0x2528;
        pub const m_HelperTeleportOutParticle: usize = 0x2608;
        pub const m_HelperTeleportInParticle: usize = 0x26e8;
        pub const m_HelperTargetIndicateParticle: usize = 0x27c8;
        pub const m_InfestedParticle: usize = 0x28a8;
        pub const m_InfestedHeroParticle: usize = 0x2988;
        pub const m_ScaredParticle: usize = 0x2a68;
        pub const m_flCollisionSize: usize = 0x2b48;
        pub const m_flCollisionHeight: usize = 0x2b4c;
        pub const m_flLaunchBiasUp: usize = 0x2b50;
        pub const m_flLaunchSpeedMult: usize = 0x2b54;
        pub const m_flLaunchMaxSpeed: usize = 0x2b58;
        pub const m_flHomingBias: usize = 0x2b5c;
        pub const m_flDamageCollisonScale: usize = 0x2b60;
        pub const m_EmoteVelocityZByTime: usize = 0x2b68;
        pub const m_EmoteSpinByTime: usize = 0x2ba8;
        pub const m_flNewlySpawnedWaitTime: usize = 0x2be8;
        pub const m_flHealInterval: usize = 0x2bec;
        pub const m_flSpawnLaunchUpBias: usize = 0x2bf0;
        pub const m_flSpawnLaunchForce: usize = 0x2bf4;
        pub const m_flMoveTolerance_Meters: usize = 0x2bf8;
        pub const m_flMoveTolerance_UnitTarget_Meters: usize = 0x2bfc;
        pub const m_flTolerance_FarFromPlayer_Meters: usize = 0x2c00;
        pub const m_flTolerance_CloseToPlayer_Meters: usize = 0x2c04;
        pub const m_PatrolTravelTimeByDistance: usize = 0x2c08;
        pub const m_flInfestedNPCModelScale: usize = 0x2c48;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bookworm_KnightBarrierVData {
        pub const m_ShoveParticle: usize = 0x1818;
        pub const m_BarrierCastParticle: usize = 0x18f8;
        pub const m_BarrierModifier: usize = 0x19d8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Viscous_TelepunchVData {
        pub const m_PortalParticle: usize = 0x1818;
        pub const m_CastParticle: usize = 0x18f8;
        pub const m_PunchParticle: usize = 0x19d8;
        pub const m_WallPunchParticle: usize = 0x1ab8;
        pub const m_CeilingPunchParticle: usize = 0x1b98;
        pub const m_PunchSound: usize = 0x1c78;
        pub const m_PunchSelfSound: usize = 0x1c88;
        pub const m_EnemyPortalSound: usize = 0x1c98;
        pub const m_PunchRollSlowModifier: usize = 0x1ca8;
        pub const m_ImpactModifier: usize = 0x1cb8;
        pub const m_FriendlyImpactModifier: usize = 0x1cc8;
        pub const m_flEnemyPortalTelegraphTime: usize = 0x1cd8;
        pub const m_flSelfPortalTelegraphTime: usize = 0x1cdc;
        pub const m_flWindupTime: usize = 0x1ce0;
        pub const m_flAttackTime: usize = 0x1ce4;
        pub const m_flGroundTraceOnPlayerHitDistance: usize = 0x1ce8;
        pub const m_flPlayerCheckSphereRadius: usize = 0x1cec;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bull_Leap {
        pub const m_bBraceParamTriggered: usize = 0xf70;
        pub const m_flBoostYaw: usize = 0xf74;
        pub const m_vecCrashPosition: usize = 0xf78;
        pub const m_vecCrashDirection: usize = 0xf84;
        pub const m_eLeapState: usize = 0xf90;
        pub const m_flStateEnterTime: usize = 0xf94;
        pub const m_flNextStateTime: usize = 0xf98;
        pub const m_flBoostEndTime: usize = 0xfb0;
        pub const m_vPrevPos: usize = 0x1348;
        pub const m_vecDraggedEntities: usize = 0x1358;
        pub const m_vecLastVel: usize = 0x137c;
        pub const m_vecCrashDownLastPos: usize = 0x1388;
        pub const m_bInputBufferCrash: usize = 0x1394;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SplitShotBonusDamage {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GlowToTeammates {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_BaseBulletPreRollProc {
        pub const m_nSuppressProcShotID: usize = 0x208;
        pub const m_vecProcdBulletIDs: usize = 0x210;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Healing_Disabled {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Familiar_SpotlightAuraVData {
        pub const m_GroundParticle: usize = 0x7a8;
        pub const m_flHeight: usize = 0x888;
        pub const m_flOffset: usize = 0x88c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_SpellslingerHeadshots {
    }

    // Parent: CBaseEntity
    pub mod CLogicAuto {
        pub const m_OnMapSpawn: usize = 0x4a0;
        pub const m_OnDemoMapSpawn: usize = 0x4b8;
        pub const m_OnNewGame: usize = 0x4d0;
        pub const m_OnLoadGame: usize = 0x4e8;
        pub const m_OnMapTransition: usize = 0x500;
        pub const m_OnBackgroundMap: usize = 0x518;
        pub const m_OnMultiNewMap: usize = 0x530;
        pub const m_OnMultiNewRound: usize = 0x548;
        pub const m_OnVREnabled: usize = 0x560;
        pub const m_OnVRNotEnabled: usize = 0x578;
        pub const m_globalstate: usize = 0x590;
    }

    // Parent: CBaseEntity
    pub mod CPhysicsWire {
        pub const m_nDensity: usize = 0x4a0;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncIllusionary {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_MaulingLeap {
        pub const m_tLeapStartTime: usize = 0xf74;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Speedlines {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCrowdControlVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x1908;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ViperVenomVData {
        pub const m_BuildUpModifier: usize = 0x1818;
        pub const m_VenomModifier: usize = 0x1828;
        pub const m_CastVenomParticle: usize = 0x1838;
        pub const m_VenomExplodeParticle: usize = 0x1918;
        pub const m_strVenomWeakExplode: usize = 0x19f8;
        pub const m_strVenomExplode: usize = 0x1a08;
        pub const m_strVenomStrongExplode: usize = 0x1a18;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GooGrenade {
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_HeroGravityVData {
        pub const m_flGravityChange: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_PrimaryWeaponVData {
        pub const m_DOFWhileZoomed: usize = 0x1820;
        pub const m_bDOFFarSettingsAreOffsetByGunRange: usize = 0x1830;
        pub const m_sDisarmedSound: usize = 0x1838;
        pub const m_flMinDisarmedSoundInterval: usize = 0x1848;
        pub const m_sObstructedShotSound: usize = 0x1850;
        pub const m_mapDelayLoopsSounds: usize = 0x1860;
        pub const m_flActionReloadTimingStart: usize = 0x1888;
        pub const m_flActionReloadTimingDuration: usize = 0x188c;
        pub const m_strCrosshairCSSClass: usize = 0x1890;
        pub const m_bUseCustomCrosshairSettings: usize = 0x1898;
        pub const m_CustomCrosshairSettings: usize = 0x189c;
        pub const m_PassiveWeaponParticle: usize = 0x18e0;
        pub const m_strPassiveWeaponAttachmentSource: usize = 0x19c0;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_MedicBullets {
    }

    // Parent: CCitadel_Modifier_ChainLightningVData
    pub mod CCitadel_Modifier_Galvanic_Storm_VData {
        pub const m_TechShieldModifier: usize = 0x970;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DivineBarrier_VData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_TrailParticle: usize = 0x830;
    }

    // Parent: CCitadel_Ability_TrooperGrenade
    pub mod CCitadel_Ability_TrooperNeutralGrenade {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_EntityPinged {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_DoorwayPortal {
        pub const m_CCitadelMinimapComponent: usize = 0xa90;
        pub const m_hLinkedDoorway: usize = 0xba8;
    }

    // Parent: CPointEntity
    pub mod CInfoDynamicShadowHint {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_flRange: usize = 0x4a4;
        pub const m_nImportance: usize = 0x4a8;
        pub const m_nLightChoice: usize = 0x4ac;
        pub const m_hLight: usize = 0x4b0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ItemWalkBackVData {
        pub const m_IdleParticle: usize = 0x750;
        pub const m_RunningParticle: usize = 0x830;
        pub const m_BiasEffectPositive: usize = 0x910;
        pub const m_BiasEffectNegative: usize = 0x9f0;
        pub const m_WalkingLoopSound: usize = 0xad0;
        pub const m_IdlingLoopSound: usize = 0xae0;
        pub const m_flStopDistance: usize = 0xaf0;
        pub const m_flMoveSpeed: usize = 0xaf4;
        pub const m_flVerticalOffset: usize = 0xaf8;
        pub const m_flTolerance: usize = 0xafc;
        pub const m_flRepathTime: usize = 0xb00;
        pub const m_flWaitTimeLimit: usize = 0xb04;
        pub const m_flWaitTimeLimitOverheld: usize = 0xb08;
        pub const m_flCheckPlayerRate: usize = 0xb0c;
    }

    // Parent: CBaseModelEntity
    pub mod CMarkupVolume {
        pub const m_bDisabled: usize = 0x780;
    }

    // Parent: CPointEntity
    pub mod CPathNode {
        pub const m_vInTangentLocal: usize = 0x4a0;
        pub const m_vOutTangentLocal: usize = 0x4ac;
        pub const m_strParentPathUniqueID: usize = 0x4b8;
        pub const m_strPathNodeParameter: usize = 0x4c0;
        pub const m_xWSPrevParent: usize = 0x4d0;
        pub const m_hPath: usize = 0x4f0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_BearTrap {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Fathom_LurkersAmbush_Debuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Mirage_SandPhantom {
        pub const m_bHasVictims: usize = 0xf70;
        pub const m_vecVictimModifiers: usize = 0xf78;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Synth_PlasmaFlux_WeaponDamage_VData {
        pub const m_BuffParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tengu_AirLiftVData {
        pub const m_FlyingModifier: usize = 0x1818;
        pub const m_GrabModifier: usize = 0x1828;
        pub const m_HoldBombModifier: usize = 0x1838;
        pub const m_DroppedBuffModifier: usize = 0x1848;
        pub const m_ExplodingAllyModifier: usize = 0x1858;
        pub const m_SilenceModifier: usize = 0x1868;
        pub const m_SlowModifier: usize = 0x1878;
        pub const m_BulletResistModifier: usize = 0x1888;
        pub const m_InitialExplodeParticle: usize = 0x1898;
        pub const m_HoldBombEffect: usize = 0x1978;
        pub const m_ExplodeParticle: usize = 0x1a58;
        pub const m_strExplodeSound: usize = 0x1b38;
        pub const m_flAirDrag: usize = 0x1b48;
        pub const m_flMaxFallSpeed: usize = 0x1b4c;
        pub const m_flTargetAirSpeedFast: usize = 0x1b50;
        pub const m_flTargetAirSpeedBase: usize = 0x1b54;
        pub const m_flSprintMult: usize = 0x1b58;
        pub const m_flAcceleration: usize = 0x1b5c;
        pub const m_flDecceleration: usize = 0x1b60;
        pub const m_flAirSideSpeedPercent: usize = 0x1b64;
        pub const m_flBoostEndVerticalSpeed: usize = 0x1b68;
        pub const m_flBoostSpeedUp: usize = 0x1b6c;
        pub const m_flCrouchLaunchReduction: usize = 0x1b70;
        pub const m_flMinFlyHeight: usize = 0x1b74;
        pub const m_flMaxFlyHeight: usize = 0x1b78;
        pub const m_flMaxPitchUp: usize = 0x1b7c;
        pub const m_flMaxPitchDown: usize = 0x1b80;
        pub const m_flAllyDelayedBoostTime: usize = 0x1b84;
        pub const m_flChannelingAirDrag: usize = 0x1b88;
        pub const m_flChannelingMaxFallSpeed: usize = 0x1b8c;
        pub const m_flBombReleaseSpeed: usize = 0x1b90;
        pub const m_flBombReleasePitch: usize = 0x1b94;
        pub const m_flBombDropReleaseOffset: usize = 0x1b98;
        pub const m_flHoldBombOffsetX: usize = 0x1b9c;
        pub const m_flHoldBombOffsetY: usize = 0x1ba0;
        pub const m_flHoldBombOffsetZ: usize = 0x1ba4;
        pub const m_flAnglePitchBias: usize = 0x1ba8;
        pub const m_flTrackAmount: usize = 0x1bac;
        pub const m_flMoveCollideSpeed: usize = 0x1bb0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Urn_DebuffVData {
        pub const m_EntangleModifier: usize = 0x750;
        pub const m_strEntangleCounter: usize = 0x760;
        pub const m_strEntangleSound: usize = 0x840;
        pub const m_strEntangleBuildupSound: usize = 0x850;
    }

    // Parent: CEntityComponent
    pub mod CCitadelAbilityComponent {
        pub const m_vecAbilities: usize = 0x80;
        pub const m_vecThinkableAbilities: usize = 0x98;
        pub const m_arPendingAsyncAbilityReservationSlots: usize = 0xb0;
        pub const m_arPendingAsyncAbilityReservationAbilityIDs: usize = 0xc8;
        pub const m_hSelectedAbility: usize = 0xe0;
        pub const m_hChannellingAbility: usize = 0xe4;
        pub const m_hCastDelayingAbility: usize = 0xe8;
        pub const m_hPreviouslySelectedAbility: usize = 0xec;
        pub const m_bPreviousAbilityQueued: usize = 0xf0;
        pub const m_flTimeScale: usize = 0xf4;
        pub const m_flParticleTimeScale: usize = 0xf8;
        pub const m_bInInterruptState: usize = 0xfc;
        pub const m_ResourceStamina: usize = 0x100;
        pub const m_ResourceAbility: usize = 0x120;
        pub const m_vecConsumedComponents: usize = 0x140;
        pub const m_nExecuteAbilityMask: usize = 0x1f0;
        pub const m_bSelectedEffectsStarted: usize = 0x1f8;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerRemove {
        pub const m_OnRemove: usize = 0x8e0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Synth_Affliction {
        pub const m_hAOEParticle: usize = 0x1170;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCadenceCrescendoVData {
        pub const m_CrescendoAOEModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierCrowdControlDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Headshot_Damage_Debuff {
        pub const m_nDebuffsTotal: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Succor_MoveVData {
        pub const m_PullSound: usize = 0x750;
        pub const m_flPullSpeedMin: usize = 0x760;
        pub const m_flPullSpeedMax: usize = 0x764;
        pub const m_flPullDistanceMin: usize = 0x768;
        pub const m_flPullDistanceMax: usize = 0x76c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HalloweenMaskVData {
        pub const m_nNumMasks: usize = 0x750;
        pub const m_HalloweenMask: usize = 0x758;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityPropertyMultiStats {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CNPC_SimpleAnimatingAIVData {
        pub const m_sModelName: usize = 0x28;
    }

    // Parent: CLogicalEntity
    pub mod CLogicGameEventListener {
        pub const m_OnEventFired: usize = 0x4b0;
        pub const m_iszGameEventName: usize = 0x4c8;
        pub const m_iszGameEventItem: usize = 0x4d0;
        pub const m_bEnabled: usize = 0x4d8;
        pub const m_bStartDisabled: usize = 0x4d9;
    }

    // Parent: CBaseModelEntity
    pub mod CServerOnlyModelEntity {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_Hotel_TransitionFreeze {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_AntiSpiritVestVData {
        pub const m_ProcParticle: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x18f8;
        pub const m_ShieldBreakModifier: usize = 0x1908;
        pub const m_strProcSound: usize = 0x1918;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ViperHookblade {
        pub const m_vecOutgoingHitList: usize = 0xf70;
        pub const m_vecReturningHitList: usize = 0xf88;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Rolling_FireBall {
        pub const m_hActiveProjectile: usize = 0xf70;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_HeroGravity {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Stabilizing_Tripod_Self_Debuff {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_Colossus_VData {
        pub const m_BuffModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_Out_Of_Combat_Health_Regen
    pub mod CCitadel_Modifier_Apex_Watcher {
        pub const m_bShouldEnableBuff: usize = 0x1d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TossUp {
        pub const m_bForceApplied: usize = 0xd0;
        pub const m_bRestrictMovement: usize = 0xd1;
        pub const m_vTossUpForce: usize = 0xd4;
        pub const m_flCurrentVelocityScale: usize = 0xe0;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_IntervalTimer {
        pub const m_Completed: usize = 0x48;
        pub const m_OnInterval: usize = 0x90;
    }

    // Parent: CMarkupVolumeTagged
    pub mod CMarkupVolumeTagged_Nav {
        pub const m_nScopes: usize = 0x7c0;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelModifer_Viscous_Goo_Aura_VData {
    }

    // Parent: CLogicalEntity
    pub mod CLogicAutosave {
        pub const m_bForceNewLevelUnit: usize = 0x4a0;
        pub const m_minHitPoints: usize = 0x4a4;
        pub const m_minHitPointsToCommit: usize = 0x4a8;
    }

    // Parent: CAI_Motor
    pub mod CAI_CitadelMotor {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_HauntingSkull_AreaVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_SlowModifier: usize = 0x760;
        pub const m_PreviewRingParticle: usize = 0x770;
        pub const m_AreaEffect: usize = 0x850;
        pub const m_strArmingSound: usize = 0x930;
        pub const m_strArmedSound: usize = 0x940;
        pub const m_strLoopingSound: usize = 0x950;
        pub const m_strHitSound: usize = 0x960;
        pub const m_flInitialNormalInfluence: usize = 0x970;
        pub const m_flInitialRandomVariance: usize = 0x974;
        pub const m_flSpawnPositionNavMeshSearchRange: usize = 0x978;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Recast {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SwingLine_Swinging {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Mirage_Tornado_Aura_Apply_VData {
        pub const m_LiftModifier: usize = 0x750;
        pub const m_SlowModifier: usize = 0x760;
        pub const m_strHitConfirmSound: usize = 0x770;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_SilenceContraptionsDebuffVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShieldGuy_Ability03 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_Bounty {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MobileResupply {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Wraith_ProjectMind_Shield {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_LifeDrain {
        pub const m_vecModifiers: usize = 0xf70;
        pub const m_tDrainLifeStopTime: usize = 0xf88;
        pub const m_tSlowStartTime: usize = 0xf8c;
        pub const m_tSlowStopTime: usize = 0xf90;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ThermalDetonator_Debuff {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelProjectileTouchVolumeVData {
    }

    // Parent: None
    pub mod CPulseTestScriptLib {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Cadence_Crescendo_AOE_VData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_OnTheHuntVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_TargetBuffSound: usize = 0x18f8;
        pub const m_RapidFireModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Necro_CoffinVData {
        pub const m_SatchelParticle: usize = 0x750;
    }

    // Parent: CCitadelAbilityDruidBasePlant
    pub mod CCitadelAbilityDruidPlantInvisBush {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Swan_Acrobat {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Trapper_SpiderShield {
        pub const m_flNextPulseTime: usize = 0xd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RadianceVData {
        pub const m_RadianceFxParticle: usize = 0x750;
        pub const m_RadianceDamageParticle: usize = 0x830;
        pub const m_ClientsideDamageParticle: usize = 0x910;
        pub const m_strDamageRecievedSound: usize = 0x9f0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SummonGangster {
        pub const m_vecGangsters: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_BulletFlurry {
        pub const m_flFlurryEndTime: usize = 0xf70;
        pub const m_flNextAttackTime: usize = 0xf88;
        pub const m_vecShootTargets: usize = 0x1290;
        pub const m_nNumPlayersKilled: usize = 0x12a8;
        pub const m_nShootIndex: usize = 0x12ac;
        pub const m_nShootIndexNPC: usize = 0x12b0;
        pub const m_nBurstShots: usize = 0x12b4;
        pub const m_bHasCameraOverride: usize = 0x12b8;
        pub const m_nConeVFX: usize = 0x12bc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Lash {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PristineEmblem {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DiscordVData {
        pub const m_ImpactParticle: usize = 0x750;
    }

    // Parent: CGameRules
    pub mod CSingleplayRules {
        pub const m_bSinglePlayerGameEnding: usize = 0xd0;
    }

    // Parent: None
    pub mod CEnvWindShared {
        pub const m_flStartTime: usize = 0x8;
        pub const m_iWindSeed: usize = 0xc;
        pub const m_iMinWind: usize = 0x10;
        pub const m_iMaxWind: usize = 0x12;
        pub const m_windRadius: usize = 0x14;
        pub const m_iMinGust: usize = 0x18;
        pub const m_iMaxGust: usize = 0x1a;
        pub const m_flMinGustDelay: usize = 0x1c;
        pub const m_flMaxGustDelay: usize = 0x20;
        pub const m_flGustDuration: usize = 0x24;
        pub const m_iGustDirChange: usize = 0x28;
        pub const m_iInitialWindDir: usize = 0x2a;
        pub const m_flInitialWindSpeed: usize = 0x2c;
        pub const m_location: usize = 0x30;
        pub const m_OnGustStart: usize = 0x40;
        pub const m_OnGustEnd: usize = 0x58;
        pub const m_hEntOwner: usize = 0x70;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CPointPrefab {
        pub const m_targetMapName: usize = 0x4a0;
        pub const m_forceWorldGroupID: usize = 0x4a8;
        pub const m_associatedRelayTargetName: usize = 0x4b0;
        pub const m_fixupNames: usize = 0x4b8;
        pub const m_bLoadDynamic: usize = 0x4b9;
        pub const m_associatedRelayEntity: usize = 0x4bc;
        pub const m_ProceduralRelaySources: usize = 0x4c0;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_BaseLerp {
        pub const m_WakeResume: usize = 0x48;
    }

    // Parent: CCitadel_Modifier_Link
    pub mod CCitadel_Modifier_Necro_WallTether {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_ApexCombat {
        pub const m_hRicochetModifier: usize = 0xf78;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ItemPunchable_Rejuv {
    }

    // Parent: CPointEntity
    pub mod CEnvInstructorVRHint {
        pub const m_iszName: usize = 0x4a0;
        pub const m_iszHintTargetEntity: usize = 0x4a8;
        pub const m_iTimeout: usize = 0x4b0;
        pub const m_iszCaption: usize = 0x4b8;
        pub const m_iszStartSound: usize = 0x4c0;
        pub const m_iLayoutFileType: usize = 0x4c8;
        pub const m_iszCustomLayoutFile: usize = 0x4d0;
        pub const m_iAttachType: usize = 0x4d8;
        pub const m_flHeightOffset: usize = 0x4dc;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Unicorn_PrismaticGuardVData {
        pub const m_strExplodeSound: usize = 0x750;
        pub const m_strDestroyedSound: usize = 0x760;
        pub const m_strCrackingSound: usize = 0x770;
        pub const m_eExplosionTargetingType: usize = 0x780;
        pub const m_TrackingParams: usize = 0x788;
        pub const m_flVerticalBoost: usize = 0x818;
        pub const m_ExplodeParticle: usize = 0x820;
        pub const m_ShieldParticle: usize = 0x900;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Boho_BouncyProjectileVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_ImpactParticle: usize = 0x1828;
        pub const m_TargetCastSound: usize = 0x1908;
        pub const m_strImpactSound: usize = 0x1918;
        pub const m_flMinProjectileTravelTime: usize = 0x1928;
        pub const m_flDistanceBiasForCaster: usize = 0x192c;
        pub const m_flDistanceBiasForHeroes: usize = 0x1930;
        pub const m_bouncePositionCurve: usize = 0x1938;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hunger_Target {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseYamatoAbility {
        pub const m_flCachedCastTime: usize = 0xf70;
        pub const m_bIsShadowFormCast: usize = 0xf74;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_SnakeDashVData {
        pub const m_strBaseSlideAbility: usize = 0x1818;
        pub const m_strViperSlideAbility: usize = 0x1820;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HealthSwapPrecastVData {
        pub const m_strTargetParticleEffect: usize = 0x750;
        pub const m_strTargetEnemyParticleEffect: usize = 0x830;
        pub const m_strTargetScreenParticleEffect: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_EtherealBullets_Buff {
        pub const m_flEffectivecFireRatePercent: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_TechOverflowProcWatcher {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NPC_OOC_RegenVData {
        pub const m_flOOCRegen: usize = 0x750;
        pub const m_flTimeToOOC: usize = 0x754;
    }

    // Parent: CScaleFunctionVData
    pub mod CScaleFunctionAbilityPropertySingleStatCurveVData {
        pub const m_statCurve: usize = 0x40;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_SmokeGrenade_Blocker {
        pub const m_flTurnSolidTime: usize = 0xa90;
    }

    // Parent: CBaseTrigger
    pub mod CPrecipitation {
    }

    // Parent: CSprite
    pub mod CCommentaryViewPosition {
    }

    // Parent: CPointEntity
    pub mod CCitadel_BaseProp_MidStairs {
        pub const m_CCitadelMinimapComponent: usize = 0x4a0;
        pub const m_eLocation: usize = 0x4c0;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_WreckingBall {
        pub const m_bBroken: usize = 0x870;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_NPCAbility_Vanguard_AOEBuff {
        pub const m_timeNextCast: usize = 0x11f0;
    }

    // Parent: CLogicalEntity
    pub mod CEnvGlobal {
        pub const m_outCounter: usize = 0x4a0;
        pub const m_globalstate: usize = 0x4c0;
        pub const m_triggermode: usize = 0x4c8;
        pub const m_initialstate: usize = 0x4cc;
        pub const m_counter: usize = 0x4d0;
    }

    // Parent: CLogicNPCCounterAABB
    pub mod CLogicNPCCounterOBB {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_AttachHeal {
        pub const m_flTotalPendingHeal: usize = 0xd0;
        pub const m_flTotalHeal: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Swan_Ability04 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SnakeDash {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Wrecker_UltimateVData {
        pub const m_EnemyGrabModifier: usize = 0x750;
        pub const m_EnemyThrowModifier: usize = 0x760;
        pub const m_EnemyDamageModifier: usize = 0x770;
        pub const m_InvincibleModifier: usize = 0x780;
        pub const m_StartSound: usize = 0x790;
        pub const m_AmbientLoopingSound: usize = 0x7a0;
        pub const m_GrabSound: usize = 0x7b0;
        pub const m_ThrowSound: usize = 0x7c0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PassiveBeefy {
        pub const m_flLastHealTime: usize = 0xf88;
        pub const m_flTotalPendingHeal: usize = 0xf8c;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityStormCloudVData {
        pub const m_AoEPreviewParticle: usize = 0x1818;
        pub const m_StormCloudModifier: usize = 0x18f8;
        pub const m_LightningStrikeAOEModifier: usize = 0x1908;
        pub const m_strLightningStrikeCast: usize = 0x1918;
        pub const m_flOscillateFrequency: usize = 0x1928;
        pub const m_flOscillateSpeed: usize = 0x192c;
        pub const m_flOscillateSpeedStart: usize = 0x1930;
        pub const m_flOscillateStartOffset: usize = 0x1934;
        pub const m_flAirDrag: usize = 0x1938;
        pub const m_flFlightAirDrag: usize = 0x193c;
        pub const m_flVerticalMoveSpeedPercent: usize = 0x1940;
        pub const m_flAirAcceleration: usize = 0x1944;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Muted {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BaseEventProcVData {
        pub const m_bProcChanceAffectedByEffectiveness: usize = 0x750;
        pub const m_bShouldApplyAbilityCooldown: usize = 0x751;
        pub const m_bCanProcMultipleTimesOnOneTarget: usize = 0x752;
        pub const m_bCanProcByOtherObjects: usize = 0x753;
        pub const m_bCanProcFromItems: usize = 0x754;
        pub const m_nAbilityTargetTypes: usize = 0x758;
        pub const m_nAbilityTargetFlags: usize = 0x75c;
        pub const m_vecProcDamageTypes: usize = 0x760;
        pub const m_nRequiredDamageFlags: usize = 0x778;
    }

    // Parent: CCitadelItemPickup
    pub mod CCitadelItemPunchableNeutralGold {
    }

    // Parent: CBaseTrigger
    pub mod CCitadelSpeedBoostTrigger {
        pub const m_flMovespeedOverride: usize = 0x8e0;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Guided_Arrow {
        pub const m_CCitadelMinimapComponent: usize = 0x860;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_FrenzyAuraVData {
        pub const m_KillModifier: usize = 0x7a8;
    }

    // Parent: CBaseModelEntity
    pub mod CPlatTrigger {
        pub const m_pPlatform: usize = 0x780;
    }

    // Parent: CPointEntity
    pub mod CSceneEntity {
        pub const m_iszSceneFile: usize = 0x4a8;
        pub const m_iszTarget1: usize = 0x4b0;
        pub const m_iszTarget2: usize = 0x4b8;
        pub const m_iszTarget3: usize = 0x4c0;
        pub const m_iszTarget4: usize = 0x4c8;
        pub const m_iszTarget5: usize = 0x4d0;
        pub const m_iszTarget6: usize = 0x4d8;
        pub const m_iszTarget7: usize = 0x4e0;
        pub const m_iszTarget8: usize = 0x4e8;
        pub const m_hTarget1: usize = 0x4f0;
        pub const m_hTarget2: usize = 0x4f4;
        pub const m_hTarget3: usize = 0x4f8;
        pub const m_hTarget4: usize = 0x4fc;
        pub const m_hTarget5: usize = 0x500;
        pub const m_hTarget6: usize = 0x504;
        pub const m_hTarget7: usize = 0x508;
        pub const m_hTarget8: usize = 0x50c;
        pub const m_hLocatorOrigin: usize = 0x510;
        pub const m_sTargetAttachment: usize = 0x518;
        pub const m_bIsPlayingBack: usize = 0x520;
        pub const m_bPaused: usize = 0x521;
        pub const m_bMultiplayer: usize = 0x522;
        pub const m_bAutogenerated: usize = 0x523;
        pub const m_bAllRequirementsComplete: usize = 0x524;
        pub const m_flForceClientTime: usize = 0x528;
        pub const m_flCurrentTime: usize = 0x52c;
        pub const m_flFrameTime: usize = 0x530;
        pub const m_bCancelAtNextInterrupt: usize = 0x534;
        pub const m_fPitch: usize = 0x538;
        pub const m_bAutomated: usize = 0x53c;
        pub const m_nAutomatedAction: usize = 0x540;
        pub const m_flAutomationDelay: usize = 0x544;
        pub const m_flAutomationTime: usize = 0x548;
        pub const m_nSpeechPriority: usize = 0x54c;
        pub const m_bPausedViaInput: usize = 0x550;
        pub const m_bPauseAtNextInterrupt: usize = 0x551;
        pub const m_bWaitingForActor: usize = 0x552;
        pub const m_bWaitingForInterrupt: usize = 0x553;
        pub const m_bInterruptedActorsScenes: usize = 0x554;
        pub const m_bTakeOverNPCBehavior: usize = 0x555;
        pub const m_bBreakOnNonIdle: usize = 0x556;
        pub const m_bSceneFinished: usize = 0x557;
        pub const m_hActorList: usize = 0x558;
        pub const m_hRemoveActorList: usize = 0x570;
        pub const m_nSceneStringIndex: usize = 0x5b8;
        pub const m_OnStart: usize = 0x5c0;
        pub const m_OnCompletion: usize = 0x5d8;
        pub const m_OnCanceled: usize = 0x5f0;
        pub const m_OnPaused: usize = 0x608;
        pub const m_OnResumed: usize = 0x620;
        pub const m_hInterruptScene: usize = 0x728;
        pub const m_nInterruptCount: usize = 0x72c;
        pub const m_bSceneMissing: usize = 0x730;
        pub const m_bInterrupted: usize = 0x731;
        pub const m_bCompletedEarly: usize = 0x732;
        pub const m_bInterruptSceneFinished: usize = 0x733;
        pub const m_bRestoring: usize = 0x734;
        pub const m_hNotifySceneCompletion: usize = 0x738;
        pub const m_hListManagers: usize = 0x750;
        pub const m_iszSoundName: usize = 0x768;
        pub const m_iszSequenceName: usize = 0x770;
        pub const m_hActor: usize = 0x778;
        pub const m_hActivator: usize = 0x77c;
        pub const m_BusyActor: usize = 0x780;
        pub const m_iPlayerDeathBehavior: usize = 0x784;
    }

    // Parent: CPointEntity
    pub mod CChoreoInfoTarget {
    }

    // Parent: CBaseEntity
    pub mod CTonemapController2 {
        pub const m_flAutoExposureMin: usize = 0x4a0;
        pub const m_flAutoExposureMax: usize = 0x4a4;
        pub const m_flExposureAdaptationSpeedUp: usize = 0x4a8;
        pub const m_flExposureAdaptationSpeedDown: usize = 0x4ac;
        pub const m_flTonemapEVSmoothingRange: usize = 0x4b0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_TrackingBombVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x18f8;
        pub const m_VialDebuffModifier: usize = 0x1908;
        pub const m_HowlDebuffModifier: usize = 0x1918;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_StackingBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Punkgoat_BlastedShred {
        pub const m_flBulletDamageAccum: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Priest_Flashbang {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Trapper_SpiderJar_VData {
        pub const m_SpiderExplodeParticle: usize = 0x1818;
        pub const m_JarExplodeParticle: usize = 0x18f8;
        pub const m_SpiritStealDebuffModifier: usize = 0x19d8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ProximityRitual_VData {
        pub const m_PredatoryStatueModel: usize = 0x1818;
        pub const m_CatReappearParticle: usize = 0x18f8;
        pub const m_CatDisappearParticle: usize = 0x19d8;
        pub const m_CatEyesParticle: usize = 0x1ab8;
        pub const m_CatSummonParticle: usize = 0x1b98;
        pub const m_CatRecallParticle: usize = 0x1c78;
        pub const m_RecallLineParticle: usize = 0x1d58;
        pub const m_strRecallSound: usize = 0x1e38;
        pub const m_strKilledSound: usize = 0x1e48;
        pub const m_PredatoryStatueModifier: usize = 0x1e58;
        pub const m_RecentDamageModifier: usize = 0x1e68;
        pub const m_flHeavyMeleeDmg: usize = 0x1e78;
        pub const m_flLightMeleeDmg: usize = 0x1e7c;
        pub const m_flAbilityDamageScale: usize = 0x1e80;
        pub const m_flNPCDamageScale: usize = 0x1e84;
        pub const m_flCastDelayMin: usize = 0x1e88;
        pub const m_flCastDelayMax: usize = 0x1e8c;
        pub const m_flCastDelayMaxDist: usize = 0x1e90;
        pub const m_flPostCastCooldown: usize = 0x1e94;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Hook {
        pub const m_hHookVictim: usize = 0xf70;
        pub const m_vecHookTargetStartPos: usize = 0xf74;
        pub const m_flCancelHookTime: usize = 0xf80;
        pub const m_flBeginReelHookTime: usize = 0xf84;
        pub const m_flBulletShouldExpireTime: usize = 0xf88;
        pub const m_flMaxHookTravelTime: usize = 0xf94;
        pub const m_flLastUppercutRestoreTime: usize = 0xf98;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_WeaponEaterStack {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_SiphonBullets_HealthLoss {
    }

    // Parent: CLogicalEntity
    pub mod CMapSharedEnvironment {
        pub const m_targetMapName: usize = 0x4a0;
    }

    // Parent: None
    pub mod CNetworkedSequenceOperation {
        pub const m_hSequence: usize = 0x8;
        pub const m_flPrevCycle: usize = 0xc;
        pub const m_flCycle: usize = 0x10;
        pub const m_flWeight: usize = 0x14;
        pub const m_bSequenceChangeNetworked: usize = 0x1c;
        pub const m_bDiscontinuity: usize = 0x1d;
        pub const m_flPrevCycleFromDiscontinuity: usize = 0x20;
        pub const m_flPrevCycleForAnimEventDetection: usize = 0x24;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_TrooperNeutral {
        pub const m_bShieldActive: usize = 0x180b;
        pub const m_bPlayingIdle: usize = 0x180c;
    }

    // Parent: CBaseAnimGraph
    pub mod CPhysMagnet {
        pub const m_OnMagnetAttach: usize = 0xa90;
        pub const m_OnMagnetDetach: usize = 0xaa8;
        pub const m_massScale: usize = 0xac0;
        pub const m_forceLimit: usize = 0xac4;
        pub const m_torqueLimit: usize = 0xac8;
        pub const m_MagnettedEntities: usize = 0xad0;
        pub const m_bActive: usize = 0xae8;
        pub const m_bHasHitSomething: usize = 0xae9;
        pub const m_flTotalMass: usize = 0xaec;
        pub const m_flRadius: usize = 0xaf0;
        pub const m_flNextSuckTime: usize = 0xaf4;
        pub const m_iMaxObjectsAttached: usize = 0xaf8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_ReturnFire {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Item_Discord_Aura {
    }

    // Parent: CPointEntity
    pub mod CCitadelItemPickupRejuvHeroTestInfoSpawn {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_GunSearching {
        pub const m_pSearchingParticle: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierGangActivityAbilitySwapVData {
        pub const m_SummonGangster: usize = 0x750;
        pub const m_TeleportToGangster: usize = 0x760;
        pub const m_Cancel: usize = 0x770;
        pub const m_ReplaceWithSummonGangster: usize = 0x780;
        pub const m_ReplaceWithTeleportToGangster: usize = 0x790;
        pub const m_ReplaceWithCancel: usize = 0x7a0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityLightningBallVData {
        pub const m_ZapModifier: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x1828;
        pub const m_strHitSound: usize = 0x1838;
        pub const m_strProjectileLoopingSound: usize = 0x1848;
        pub const m_ZapParticle: usize = 0x1858;
        pub const m_flHitSpeed: usize = 0x1938;
        pub const m_flNonHeroHitSpeed: usize = 0x193c;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_TrophyCollectorVData {
        pub const m_EarnedParticle: usize = 0x18b8;
        pub const m_GoldModifier: usize = 0x1998;
        pub const m_strEarnedSound: usize = 0x19a8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_EscalatingExposureProcWatcher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_EscalatingExposure {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_UIAbilityHudNotificaitonVData {
    }

    // Parent: None
    pub mod CEntityInstance {
        pub const m_iszPrivateVScripts: usize = 0x8;
        pub const m_pEntity: usize = 0x10;
        pub const m_CScriptComponent: usize = 0x28;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ColdFront {
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CCitadel_Item_Containment {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelProjectileTouchVolume {
        pub const m_hAbility: usize = 0x780;
    }

    // Parent: CBaseEntity
    pub mod CGameGibManager {
        pub const m_bAllowNewGibs: usize = 0x4b8;
        pub const m_iCurrentMaxPieces: usize = 0x4bc;
        pub const m_iMaxPieces: usize = 0x4c0;
        pub const m_iLastFrame: usize = 0x4c4;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_NeutralCampVData {
        pub const m_iInitialSpawnDelayInSeconds: usize = 0x28;
        pub const m_iSpawnIntervalInSeconds: usize = 0x2c;
        pub const m_iSpawnIntervalChange: usize = 0x30;
        pub const m_iSpawnIntervalMin: usize = 0x34;
        pub const m_eNeutralType: usize = 0x38;
        pub const m_sIdleAmbient: usize = 0x40;
        pub const m_sAlertAmbient: usize = 0x50;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tenacity {
    }

    // Parent: None
    pub mod ice_path_shard_model_desc_t {
        pub const m_nModelID: usize = 0x8;
        pub const m_vecPanelSize: usize = 0xc;
        pub const m_vecPanelVertices: usize = 0x18;
        pub const m_flThickness: usize = 0x30;
        pub const m_SurfacePropStringToken: usize = 0x34;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_StaticCharge {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_PrimaryWeapon_BeamWeapon {
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_MagicStormWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DummyUnit {
    }

    // Parent: CCitadel_PointTalker
    pub mod CCitadel_PointTalker_Idol {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifire_Priest_FlashBangBurnAura {
    }

    // Parent: CBaseEntity
    pub mod CHandleDummy {
    }

    // Parent: CFuncWall
    pub mod CFuncWallToggle {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_Hotel_TeleportFX {
        pub const m_vMinimapPositionOverride: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Uppercut_Buff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Astro_Rifle_DebuffVData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_strTargetHitSound: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_EternalGift {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_QuickSilverVData {
        pub const m_BuffModifier: usize = 0x780;
        pub const m_ProcParticle: usize = 0x790;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MagicShield_SpiritBuff {
        pub const m_bHasHealthForBonuses: usize = 0xd0;
    }

    // Parent: CBaseEntity
    pub mod CSkyCamera {
        pub const m_skyboxData: usize = 0x4a0;
        pub const m_skyboxSlotToken: usize = 0x530;
        pub const m_bUseAngles: usize = 0x534;
        pub const m_pNext: usize = 0x538;
    }

    // Parent: CTriggerModifier
    pub mod CCitadelInteriorTrigger {
        pub const m_nInteriorType: usize = 0x8f0;
        pub const m_tInteriorModifier: usize = 0x8f4;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_TrackingProjectileApplyModifier {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Staring {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityVandalOverflowVData {
        pub const m_LiftModifier: usize = 0x1818;
        pub const m_TargetParticle: usize = 0x1828;
        pub const m_TargetCastSound: usize = 0x1908;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_HauntWatcher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChronoSwap_BubbleMove {
        pub const m_bOtherIsInFrontAtStart: usize = 0xd0;
        pub const m_vOtherToDest: usize = 0xd4;
        pub const m_vStart: usize = 0xe0;
        pub const m_vDest: usize = 0xec;
        pub const m_hOther: usize = 0xf8;
        pub const m_vLastSafePos: usize = 0xfc;
        pub const m_bDoFinalTeleport: usize = 0x108;
        pub const m_nBeamIndex: usize = 0x10c;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_SiphonBulletsVData {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ShadowStepVData {
        pub const m_PulseParticle: usize = 0x18b8;
        pub const m_TargetParticle: usize = 0x1998;
        pub const m_strPulseTickSound: usize = 0x1a78;
        pub const m_iMaxTargets: usize = 0x1a88;
        pub const m_strExplodeSound: usize = 0x1a90;
        pub const m_CastDelayParticle: usize = 0x1aa0;
        pub const m_TeleportTrailParticle: usize = 0x1b80;
        pub const m_flGroundProbeSpeed: usize = 0x1c60;
        pub const m_flGroundStepDown: usize = 0x1c64;
        pub const m_flGroundStepUp: usize = 0x1c68;
        pub const m_iMaxGroundIterations: usize = 0x1c6c;
        pub const m_flVelocityScale: usize = 0x1c70;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_AutoaimServices {
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_RestorativeGooCube {
    }

    // Parent: CPathCorner
    pub mod CPathCornerCrash {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_HighImpactArmor {
    }

    // Parent: CBaseModelEntity
    pub mod CItemXP {
        pub const m_timeLaunch: usize = 0x7dc;
        pub const m_flAttackableTime: usize = 0x7e0;
        pub const m_flEndAttackableTime: usize = 0x7e4;
        pub const m_nLaunchNum: usize = 0x7e8;
    }

    // Parent: CPhysConstraint
    pub mod CPhysPulley {
        pub const m_position2: usize = 0x500;
        pub const m_offset: usize = 0x50c;
        pub const m_addLength: usize = 0x524;
        pub const m_gearRatio: usize = 0x528;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Airheart_AltWeapon {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AirDamping {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LightningStrikeAreaVData {
        pub const m_GroundParticle: usize = 0x750;
        pub const m_StrikeParticle: usize = 0x830;
        pub const m_GroundParticleFriendly: usize = 0x910;
        pub const m_StrikeParticleFriendly: usize = 0x9f0;
        pub const m_flHeight: usize = 0xad0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_T3Boss_Phase1 {
        pub const m_nGroundParticle: usize = 0xd0;
        pub const m_nShieldParticle: usize = 0xd4;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerTrooperShrineJumpVolume {
        pub const m_flOuterRadius: usize = 0x8e0;
        pub const m_flInnerRadius: usize = 0x8e4;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_Frenzy {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_PowerShard {
    }

    // Parent: CBaseEntity
    pub mod CCommentaryAuto {
        pub const m_OnCommentaryNewGame: usize = 0x4a0;
        pub const m_OnCommentaryMidGame: usize = 0x4b8;
        pub const m_OnCommentaryMultiplayerSpawn: usize = 0x4d0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_Gravestone_BuffVData {
        pub const m_WeaponBuffParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_CrimsonCannon {
        pub const m_TargetPreviews: usize = 0xf90;
        pub const m_bAirCast: usize = 0xfa8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTargetdummy4VData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Intimidate {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_UppercutClipSize {
        pub const m_nPreClipSize: usize = 0x150;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BulletFlurryWindup {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MysticReverbExplosion {
        pub const m_bNoDeath: usize = 0xd0;
        pub const m_bDamageInProgress: usize = 0xd1;
        pub const m_flDamage: usize = 0xd4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InvisFading {
    }

    // Parent: CServerOnlyEntity
    pub mod CCitadelEnergyTower {
        pub const m_bEnabled: usize = 0x4a0;
        pub const m_flDamage: usize = 0x4a4;
        pub const m_flRadius: usize = 0x4a8;
    }

    // Parent: None
    pub mod CPulseCell_Outflow_ListenForEntityOutputCursorState_t {
        pub const m_entity: usize = 0x0;
    }

    // Parent: None
    pub mod ActiveModelConfig_t {
        pub const m_Handle: usize = 0x30;
        pub const m_Name: usize = 0x38;
        pub const m_AssociatedEntities: usize = 0x40;
        pub const m_AssociatedEntityNames: usize = 0x58;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerTeamBase {
    }

    // Parent: CDynamicProp
    pub mod CCitadel_DynamicProp {
        pub const m_strDefaultSkin: usize = 0xce0;
        pub const m_strFriendlySkin: usize = 0xce8;
        pub const m_strEnemySkin: usize = 0xcf0;
        pub const m_bIsWorld: usize = 0xcf8;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_Necro_KillSummonTrigger {
        pub const m_vLaunchPosition: usize = 0xf80;
        pub const m_qLaunchAngle: usize = 0xf8c;
    }

    // Parent: CLogicalEntity
    pub mod CSoundStackSave {
        pub const m_iszStackName: usize = 0x4a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NeutralShield {
        pub const m_flShieldActivateDelay: usize = 0xd0;
        pub const m_timeEnemyDisappeared: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelAbilityDruidSprout {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Trapper_WebWall {
        pub const m_vecCastPosition: usize = 0x11f0;
        pub const m_vecCastPositionNormal: usize = 0x11fc;
        pub const m_vecEndPosition: usize = 0x1208;
        pub const m_vecEndPositionNormal: usize = 0x1214;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelYamatoBaseVData {
        pub const m_flShadowFormSpeed: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPerchedPredatorVData {
        pub const m_ExplodeBaseParticle: usize = 0x1818;
        pub const m_ExplodeFriendlyParticle: usize = 0x18f8;
        pub const m_ExplodeEnemyParticle: usize = 0x19d8;
        pub const m_strExplodeSound: usize = 0x1ab8;
        pub const m_ModifierDragEnemy: usize = 0x1ac8;
        pub const m_flOnHitDetonateTimer: usize = 0x1ad8;
        pub const m_flTraceTravelRadius: usize = 0x1adc;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Citadel_Bull_Leap_LandingBonuses_VData {
        pub const m_BuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HealthSwapVData {
        pub const m_BloodExchangeParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_ChainLightningEffect
    pub mod CCitadel_Modifier_Galvanic_Storm_Effect {
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_Tier2Boss_Stomp {
    }

    // Parent: None
    pub mod CitadelHeroSpawnData_t {
        pub const m_nHeroID: usize = 0x8;
        pub const m_unHeroBadgeXP: usize = 0xc;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_Curve {
        pub const m_Curve: usize = 0x48;
    }

    // Parent: CNPC_SimpleAnimatingAI
    pub mod CNPC_ShieldedSentry {
        pub const m_CCitadelMinimapComponent: usize = 0xc10;
        pub const m_flAttackRange: usize = 0xc30;
        pub const m_flAimPitch: usize = 0xc34;
        pub const m_bHasRecentlyAttacked: usize = 0xc38;
        pub const m_flLifeTime: usize = 0xc3c;
        pub const m_flSpawnTime: usize = 0xc40;
        pub const m_flAttackCone: usize = 0xc44;
        pub const m_flTrackingSpeed: usize = 0xc48;
        pub const m_flDeployTime: usize = 0xc4c;
        pub const m_flAttackDelay: usize = 0xc50;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_RescueBeam {
        pub const m_bCanPull: usize = 0xf78;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_KothComebackBonusesVData {
        pub const m_flResistMaxAtStart: usize = 0x750;
        pub const m_flResistMaxPerMinute: usize = 0x754;
        pub const m_flResistMaxCap: usize = 0x758;
    }

    // Parent: CLogicalEntity
    pub mod CLogicMeasureMovement {
        pub const m_strMeasureTarget: usize = 0x4a0;
        pub const m_strMeasureReference: usize = 0x4a8;
        pub const m_strTargetReference: usize = 0x4b0;
        pub const m_hMeasureTarget: usize = 0x4b8;
        pub const m_hMeasureReference: usize = 0x4bc;
        pub const m_hTarget: usize = 0x4c0;
        pub const m_hTargetReference: usize = 0x4c4;
        pub const m_flScale: usize = 0x4c8;
        pub const m_nMeasureType: usize = 0x4cc;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_SpiderAnimatingVData {
        pub const m_sModelName: usize = 0x28;
        pub const m_flModelScale: usize = 0x108;
        pub const m_cGlowColor: usize = 0x10c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IcePath_TechPowerLinger {
        pub const m_nBonusSpirit: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Sleep {
        pub const m_vecSleepModifiers: usize = 0xd0;
        pub const m_bIsWakingUp: usize = 0xe8;
        pub const m_flMinSleepDamageToWake: usize = 0xec;
        pub const m_flMinSleepTime: usize = 0xf0;
        pub const m_flWakeUpDelay: usize = 0xf4;
        pub const m_flTotalDamageTakenWhileAsleep: usize = 0xf8;
    }

    // Parent: CDynamicProp
    pub mod CDynamicPropAlias_cable_dynamic {
    }

    // Parent: CPointEntity
    pub mod CInfoKOTHSpawnLocation {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AirheartStuckBomb {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHighAlertVData {
        pub const m_BuffModifier: usize = 0x1818;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_Bounce_PadVData {
        pub const m_flBouncePadCollisionHeight: usize = 0x28;
        pub const m_flBouncePadCollisionRadius: usize = 0x2c;
        pub const m_sModelName: usize = 0x30;
        pub const m_IdleParticle: usize = 0x110;
        pub const m_BounceParticle: usize = 0x1f0;
        pub const m_DestroyParticle: usize = 0x2d0;
        pub const m_strCasterBounceSound: usize = 0x3b0;
        pub const m_strOtherHeroBounceSound: usize = 0x3c0;
        pub const m_strBarrelBounceSound: usize = 0x3d0;
        pub const m_strExpiredSound: usize = 0x3e0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierBullChargingVData {
        pub const m_ChargeParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RampSlow {
    }

    // Parent: None
    pub mod CItemXPAssignedEarner_t {
        pub const m_eSource: usize = 0x0;
        pub const m_iBounty: usize = 0x4;
        pub const m_eDenyType: usize = 0x8;
    }

    // Parent: CBaseFlex
    pub mod CBaseFlexAlias_funCBaseFlex {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_SleepBomb_Aura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_SpellShield {
        pub const fl_mSpellShieldBreakTime: usize = 0xf78;
    }

    // Parent: CCitadel_Modifier_SilencedVData
    pub mod CCitadel_Modifier_BubbleVData {
        pub const m_ExplodeParticle: usize = 0x9f0;
        pub const m_ExplodeSound: usize = 0xad0;
        pub const m_BuffModifier: usize = 0xae0;
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelModelEntity {
        pub const m_CCitadelRegenComponent: usize = 0x780;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoCitadelHelperLocation {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Drifter_BloodBlast_VData {
        pub const m_TargetModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_AreaParticle: usize = 0x1838;
        pub const m_ChargeParticle: usize = 0x1918;
        pub const m_TargetDamageParticle: usize = 0x19f8;
        pub const m_strHitConfirmSound: usize = 0x1ad8;
        pub const m_strPointBlankSweetenerSound: usize = 0x1ae8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Viper_PetrifyBolaVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x18f8;
        pub const m_PetrifyModifier: usize = 0x1908;
        pub const m_strBolaExplodeSound: usize = 0x1918;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_UltCombo_Self {
        pub const m_angles: usize = 0xd0;
        pub const m_hTarget: usize = 0xdc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bebop_LaserBeam {
        pub const m_bZoomed: usize = 0x1770;
        pub const m_bAirCast: usize = 0x1771;
        pub const m_beam: usize = 0x1778;
        pub const m_flAngleBetweenTrace: usize = 0x273c;
        pub const m_nTotalDamage: usize = 0x2740;
        pub const m_flNextDamageTime: usize = 0x2744;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ChronoSwap {
        pub const m_bHitTarget: usize = 0xf70;
        pub const m_bAltCast: usize = 0xf71;
    }

    // Parent: CCitadel_Modifier_Base_Buildup
    pub mod CCitadel_Modifier_Silence_Buildup {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_CheatDeathVData {
        pub const m_DamagePulseParticle: usize = 0x18b8;
        pub const m_DamageTargetParticle: usize = 0x1998;
        pub const m_sHealPulseSound: usize = 0x1a78;
        pub const m_sHealAndDamagePulseSound: usize = 0x1a88;
        pub const m_DeathImmuneModifier: usize = 0x1a98;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier2Boss_RocketBarrageVData {
        pub const m_LaunchAngle: usize = 0x1818;
        pub const m_ExplosionParticle: usize = 0x1820;
        pub const m_ExplosionSound: usize = 0x1900;
        pub const m_RocketFireSound: usize = 0x1910;
        pub const m_AuraModifier: usize = 0x1920;
    }

    // Parent: CBaseEntity
    pub mod CEnvDetailController {
        pub const m_flFadeStartDist: usize = 0x4a0;
        pub const m_flFadeEndDist: usize = 0x4a4;
    }

    // Parent: None
    pub mod CTakeDamageInfoAPI {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_PriestSilenceBomb_Aura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HideoutIntroExit {
    }

    // Parent: CEnvSoundscape
    pub mod CEnvSoundscapeProxy {
        pub const m_MainSoundscapeName: usize = 0x530;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_Leaping {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Ability01 {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierDustStormAuraApplyVData {
        pub const m_DebuffModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BulletFlurryVData {
        pub const m_ImpactParticle: usize = 0x750;
        pub const m_strAttackerHitSound: usize = 0x830;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_LashDownStrike {
        pub const m_ImpactTime: usize = 0x10f0;
        pub const m_vDamagePos: usize = 0x10f4;
        pub const m_vDamageDir: usize = 0x1100;
        pub const m_vHitEnemies: usize = 0x1110;
        pub const m_vecHitEntities: usize = 0x1148;
        pub const m_PreviewEffect: usize = 0x1160;
        pub const m_vStrikeVel: usize = 0x15e8;
        pub const m_flInitialYaw: usize = 0x15f4;
        pub const m_flStartHeight: usize = 0x15f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityChargedShotVData {
        pub const m_ChannelParticle: usize = 0x1818;
        pub const m_ChannelStartParticle: usize = 0x18f8;
        pub const m_ShootParticle: usize = 0x19d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LightningStrikeArea {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Low_Health_Glow {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_EldritchShotVData {
        pub const m_ExplodeParticle: usize = 0x880;
        pub const m_flExplodeParticleSize: usize = 0x960;
        pub const m_DebuffModifier: usize = 0x968;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BeltFed_Magazine {
        pub const m_bInitialized: usize = 0xd0;
        pub const m_flSpinUpRateOverride: usize = 0xd4;
        pub const m_flSpinUpDecayOverride: usize = 0xd8;
        pub const m_flMaxCycleTimeOverride: usize = 0xdc;
        pub const m_flMaxBurstFireCooldownOverride: usize = 0xe0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CModifier_SiphonBullets {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_RebuttalWatcher {
    }

    // Parent: CitadelItemVData
    pub mod CItemStimPakVData {
        pub const m_StimPakModifier: usize = 0x18b8;
        pub const m_CastParticle: usize = 0x18c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpeedBoostVData {
        pub const m_flMoveSpeedBoost: usize = 0x750;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelItemPickupVData {
        pub const m_AmbientParticle: usize = 0x28;
    }

    // Parent: CPlayer_MovementServices
    pub mod CCitadelObserver_MovementServices {
        pub const m_flRoamingSpeed: usize = 0x240;
        pub const m_bHasFreeCursor: usize = 0x244;
    }

    // Parent: CGameRulesProxy
    pub mod CCitadelGameRulesProxy {
        pub const m_pGameRules: usize = 0x4a0;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_EventHandler {
        pub const m_EventName: usize = 0x80;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Item {
        pub const m_bEquipped: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Unicorn_LuminousStrike {
        pub const m_flLastStackChangeTime: usize = 0xf70;
        pub const m_nLastStackCount: usize = 0xf74;
        pub const m_vecNextExplosionTime: usize = 0xf90;
        pub const m_vecNextExplosionLocation: usize = 0xfa8;
        pub const m_nStackCount: usize = 0xfc0;
        pub const m_bPendingStackUpdate: usize = 0xfc4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_Kickflip_BonusDamage {
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierVandalSurgeVData {
        pub const m_LiftParticle: usize = 0x830;
        pub const m_strStartSound: usize = 0x910;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Grapple_Air_Control {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PowerSurge {
        pub const m_flNextProcTime: usize = 0xf70;
        pub const m_flBaseCooldown: usize = 0xf74;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_FireBomb {
        pub const m_flDetonateTime: usize = 0x12f8;
        pub const m_flStartTime: usize = 0x1310;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_FleetfootBoots_BonusClip {
        pub const m_nBonusClip: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_SpiritResilience {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySprintVData {
        pub const m_SprintParticle: usize = 0x1818;
        pub const m_strSprintSound: usize = 0x18f8;
        pub const m_flSprintAccMS: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TrooperDisabledInvulnerabilityFX {
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_BaseFlow {
    }

    // Parent: CBaseModelEntity
    pub mod CRuleEntity {
        pub const m_iszMaster: usize = 0x780;
    }

    // Parent: CPhysForce
    pub mod CPhysThruster {
        pub const m_localOrigin: usize = 0x500;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LifeSteal_Watcher {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Werewolf_CripplingSlashVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_DisarmModifier: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
        pub const m_strSlashStart: usize = 0x1848;
        pub const m_strSlashImpactSound: usize = 0x1858;
        pub const m_SlashSwingEffect: usize = 0x1868;
        pub const m_SlashImpactEffect: usize = 0x1948;
        pub const m_flSlashForwardOffset: usize = 0x1a28;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Werewolf_Hunt {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_KillSummon {
        pub const m_bIsInRecast: usize = 0xff2;
        pub const m_RecastEndTime: usize = 0xff4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Doorman_Hotel {
        pub const m_hHotelStart: usize = 0xf98;
        pub const m_hStartRelay: usize = 0xf9c;
        pub const m_bSpendCooldown: usize = 0xfa0;
        pub const m_vLookTarget: usize = 0xfa4;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Drifter_Darkness_Caster {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseShivAbility {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CorpseExplosionThinkerVData {
        pub const m_WarningParticle: usize = 0x750;
        pub const m_ExplosionParticle: usize = 0x830;
        pub const m_flTickRate: usize = 0x910;
    }

    // Parent: CBaseTriggerAbilityVData
    pub mod CAbility_Drifter_StalkersMark_Teleport_VData {
        pub const m_strCastStartSound: usize = 0x1838;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ControlPointCapturerAuraTarget {
    }

    // Parent: CPointEntity
    pub mod CInfoPlayerStart {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_bIsMaster: usize = 0x4a1;
        pub const m_pPawnSubclass: usize = 0x4a8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_CloneVData {
        pub const m_CloneModifier: usize = 0x1818;
        pub const m_ClonedParticle: usize = 0x1828;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityTangoTetherVData {
        pub const m_TetherModifier: usize = 0x1818;
        pub const m_GrappleTargetModifier: usize = 0x1828;
        pub const m_BulletGrappleTracerParticle: usize = 0x1838;
        pub const m_EnemyGrappleParticle: usize = 0x1918;
        pub const m_strDamageTarget: usize = 0x19f8;
        pub const m_strGrappleHitTarget: usize = 0x1a08;
        pub const m_strGrappleHitWorld: usize = 0x1a18;
        pub const m_strGrappleHitNothing: usize = 0x1a28;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShieldGuy_Ability02 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IceDome_AuraModifierBase {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Passive_Cloak {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_Ricochet_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NonPlayerCamera {
    }

    // Parent: CBaseEntity
    pub mod CEntityFlame {
        pub const m_hEntAttached: usize = 0x4a0;
        pub const m_bCheapEffect: usize = 0x4a4;
        pub const m_flSize: usize = 0x4a8;
        pub const m_bUseHitboxes: usize = 0x4ac;
        pub const m_iNumHitboxFires: usize = 0x4b0;
        pub const m_flHitboxFireScale: usize = 0x4b4;
        pub const m_flLifetime: usize = 0x4b8;
        pub const m_hAttacker: usize = 0x4bc;
        pub const m_iDangerSound: usize = 0x4c0;
        pub const m_flDirectDamagePerSecond: usize = 0x4c8;
        pub const m_iCustomDamageType: usize = 0x4cc;
    }

    // Parent: CGameSceneNode
    pub mod CSkeletonInstance {
        pub const m_modelState: usize = 0x130;
        pub const m_bUseParentRenderBounds: usize = 0x380;
        pub const m_bDisableSolidCollisionsForHierarchy: usize = 0x381;
        pub const m_bDirtyMotionType: usize = 0x0;
        pub const m_bIsGeneratingLatchedParentSpaceState: usize = 0x0;
        pub const m_materialGroup: usize = 0x384;
        pub const m_nHitboxSet: usize = 0x388;
        pub const m_bForceServerConstraintsEnabled: usize = 0x3e4;
    }

    // Parent: None
    pub mod CEntityComponent {
    }

    // Parent: CBaseToggle
    pub mod CBasePlatTrain {
        pub const m_NoiseMoving: usize = 0x800;
        pub const m_NoiseArrived: usize = 0x808;
        pub const m_volume: usize = 0x818;
        pub const m_flTWidth: usize = 0x81c;
        pub const m_flTLength: usize = 0x820;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CProjectile_Familiar_MovingToAttach {
    }

    // Parent: CServerOnlyPointEntity
    pub mod CPointTeleport {
        pub const m_vSaveOrigin: usize = 0x4a0;
        pub const m_vSaveAngles: usize = 0x4ac;
        pub const m_bTeleportParentedEntities: usize = 0x4b8;
        pub const m_bTeleportUseCurrentAngle: usize = 0x4b9;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Drifter_StalkersMark_PostTeleport {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_Escape {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RespawnCreditVData {
        pub const m_eRespawnMechanic: usize = 0x750;
        pub const m_flRespawnDelay: usize = 0x754;
        pub const m_flBonusClipSize: usize = 0x758;
        pub const m_flBonusFirerate: usize = 0x75c;
        pub const m_flBonusHealth: usize = 0x760;
        pub const m_flBonusMoveSpeedMeterPerSecond: usize = 0x764;
        pub const m_sExpireSound: usize = 0x768;
        pub const m_iMaxMessages: usize = 0x778;
        pub const m_flMessageInterval: usize = 0x77c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StatStealBase {
    }

    // Parent: CModifierVData
    pub mod CCitadelModifierVData {
        pub const m_bIsBuildup: usize = 0x408;
        pub const m_bNetworkValuesForStatsPreview: usize = 0x409;
        pub const m_vecAutoRegisterModifierValueFromAbilityPropertyName: usize = 0x410;
        pub const m_bCasterCountsAsAssister: usize = 0x428;
        pub const m_flLingeringAssistWindow: usize = 0x42c;
        pub const m_bDurationCanBeTimeScaled: usize = 0x430;
        pub const m_bDurationReducible: usize = 0x431;
        pub const m_bDurationReducibleByCrowdControlDiminish: usize = 0x432;
        pub const m_eTimeScaleSource: usize = 0x434;
        pub const m_bDurationAffectedByEffectiveness: usize = 0x438;
        pub const m_AG2BaseAction: usize = 0x440;
        pub const m_AG2BaseState: usize = 0x450;
        pub const m_AG2HeroState: usize = 0x460;
        pub const m_eDrawOverheadStatus: usize = 0x470;
        pub const m_bReverseHudProgressBar: usize = 0x474;
        pub const m_strSmallIconCssClass: usize = 0x478;
        pub const m_strHintText: usize = 0x480;
        pub const m_strModifierOverrideStatusID: usize = 0x488;
        pub const m_strHudIcon: usize = 0x490;
        pub const m_eHudDisplayLocation: usize = 0x4a0;
        pub const m_eModifierDisplayLocaiton: usize = 0x4a4;
        pub const m_strHudMessageText: usize = 0x4a8;
        pub const m_bIsHiddenOverhead: usize = 0x4b0;
        pub const m_vecAlwaysShowInStatModifierUI: usize = 0x4b8;
        pub const m_OnCreateResponse: usize = 0x4d0;
        pub const m_cameraSequenceCreated: usize = 0x508;
        pub const m_bEndCreatedSequenceOnRemove: usize = 0x590;
        pub const m_cameraSequenceRemoved: usize = 0x598;
        pub const m_BarrierBehavior: usize = 0x620;
        pub const m_BarrierCreateParticle: usize = 0x628;
        pub const m_bSupressDefaultBarrierBreakParticle: usize = 0x708;
        pub const m_sExpiredSound: usize = 0x710;
        pub const m_FootstepOverride: usize = 0x720;
        pub const m_FootstepAdditional: usize = 0x738;
        pub const m_bRemoveOnInterrupted: usize = 0x748;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerGameEvent {
        pub const m_strStartTouchEventName: usize = 0x8e0;
        pub const m_strEndTouchEventName: usize = 0x8e8;
        pub const m_strTriggerID: usize = 0x8f0;
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_TrooperBossVData {
        pub const m_bMitigateDamageFromPlayers: usize = 0x1348;
        pub const m_flPlayerAutoAttackRange: usize = 0x134c;
        pub const m_flMinMeleeAttackTime: usize = 0x1350;
        pub const m_flMeleeDuration: usize = 0x1354;
        pub const m_flInvulRange: usize = 0x1358;
        pub const m_flTrooperDamageResistPct: usize = 0x135c;
        pub const m_flPlayerDamageResistPct: usize = 0x1360;
        pub const m_flBackDoorProtectionRange: usize = 0x1364;
        pub const m_flDeathFadeTimeStart: usize = 0x1368;
        pub const m_flDeathFadeTimeEnd: usize = 0x136c;
        pub const m_flTier1PlayerClipCapsuleRadius: usize = 0x1370;
        pub const m_flTier1PlayerClipCapsuleHeight: usize = 0x1374;
        pub const m_sAngryStart: usize = 0x1378;
        pub const m_sAngryLoop: usize = 0x1388;
        pub const m_sAngryStop: usize = 0x1398;
        pub const m_BackdoorProtectionModifier: usize = 0x13a8;
        pub const m_TrooperBossInvulnModifier: usize = 0x13b8;
        pub const m_flTrooperDPS: usize = 0x13c8;
        pub const m_flPlayerDPS: usize = 0x13cc;
        pub const m_flDPSPctGrowthPerMinute: usize = 0x13d0;
    }

    // Parent: CPointEntity
    pub mod CMessageEntity {
        pub const m_radius: usize = 0x4a0;
        pub const m_messageText: usize = 0x4a8;
        pub const m_drawText: usize = 0x4b0;
        pub const m_bDeveloperOnly: usize = 0x4b1;
        pub const m_bEnabled: usize = 0x4b2;
    }

    // Parent: CBaseEntity
    pub mod CEnvEntityIgniter {
        pub const m_flLifetime: usize = 0x4a0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Priest_FlashbangVData {
        pub const flFlashFadeInTime: usize = 0x750;
        pub const flFlashFadeOutTime: usize = 0x754;
        pub const flFlashAlpha: usize = 0x758;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityEmpowerBulletVData {
        pub const m_EmpowerBulletModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tengu_StoneFormVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_ImpactParticle: usize = 0x18f8;
        pub const m_StoneFormParticle: usize = 0x19d8;
        pub const m_strImpactSound: usize = 0x1ab8;
        pub const m_DragModifier: usize = 0x1ac8;
        pub const m_strTrueFormModel: usize = 0x1ad8;
        pub const m_flLandHoldTime: usize = 0x1bb8;
        pub const m_flRisingTime: usize = 0x1bbc;
        pub const m_flCollideRadius: usize = 0x1bc0;
        pub const m_flGroundDetectionFailsafeDelay: usize = 0x1bc4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bull_Charge {
        pub const m_vecHitEntities: usize = 0xf70;
        pub const m_bGainedWeaponPowerBuff: usize = 0xf88;
        pub const m_anglesCharging: usize = 0x1610;
        pub const m_flChargeStartTime: usize = 0x161c;
        pub const m_flFastChargeStartTime: usize = 0x1620;
        pub const m_flFastChargeEndTime: usize = 0x1624;
        pub const m_bHitAPlayer: usize = 0x1628;
        pub const m_bFirstTick: usize = 0x162c;
        pub const m_vGoalDir: usize = 0x1630;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_DisarmProcWatcherVData {
        pub const m_BuildUpModifier: usize = 0x780;
        pub const m_DisarmProcModifier: usize = 0x790;
        pub const m_ImmunityModifier: usize = 0x7a0;
        pub const m_TracerParticle: usize = 0x7b0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_SlowImmunityVData {
        pub const m_ImmunityModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Passive_Camouflage {
        pub const m_flRate: usize = 0xd0;
        pub const m_vLastPosition: usize = 0xd4;
    }

    // Parent: CBaseNPCMaker
    pub mod CNPCMaker {
        pub const m_iszNPCSubClass: usize = 0x588;
        pub const m_iszSquadName: usize = 0x590;
        pub const m_iszHintGroup: usize = 0x598;
        pub const m_RelationshipString: usize = 0x5a0;
        pub const m_ChildTargetName: usize = 0x5a8;
    }

    // Parent: None
    pub mod CPulseCell_Outflow_CycleShuffledInstanceState_t {
        pub const m_Shuffle: usize = 0x0;
        pub const m_nNextShuffle: usize = 0x20;
    }

    // Parent: None
    pub mod CPulseCell_BaseLerpCursorState_t {
        pub const m_StartTime: usize = 0x0;
        pub const m_EndTime: usize = 0x4;
    }

    // Parent: CCitadel_PointTalker_Base
    pub mod CCitadel_PointTalker {
    }

    // Parent: CMarkupVolumeWithRef
    pub mod CMarkupVolumeTagged_NavGame {
        pub const m_nScopes: usize = 0x7e8;
        pub const m_bFloodFillAttribute: usize = 0x7e9;
        pub const m_bSplitNavSpace: usize = 0x7ea;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_GraveStone_Projectile {
        pub const m_vLastStompPos: usize = 0x860;
        pub const m_bFinished: usize = 0x86c;
        pub const m_flWidth: usize = 0x870;
        pub const m_tDieTime: usize = 0x874;
    }

    // Parent: CLogicalEntity
    pub mod CMultiLightProxy {
        pub const m_iszLightNameFilter: usize = 0x4a0;
        pub const m_iszLightClassFilter: usize = 0x4a8;
        pub const m_flLightRadiusFilter: usize = 0x4b0;
        pub const m_flBrightnessDelta: usize = 0x4b4;
        pub const m_bPerformScreenFade: usize = 0x4b8;
        pub const m_flTargetBrightnessMultiplier: usize = 0x4bc;
        pub const m_flCurrentBrightnessMultiplier: usize = 0x4c0;
        pub const m_vecLights: usize = 0x4c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Fencer_Ultimate_Caster_VData {
        pub const m_DashParticle: usize = 0x750;
        pub const m_DashTrailParticle: usize = 0x830;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Graf_Ability03 {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_ShadowVData {
        pub const m_ShadowModifier: usize = 0x1818;
        pub const m_PurgeModifier: usize = 0x1828;
        pub const m_EnemyAura: usize = 0x1838;
        pub const m_flAuraRadius: usize = 0x1848;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_MedicBulletsVData {
        pub const m_ImpactParticle: usize = 0x880;
        pub const m_ProcSound: usize = 0x960;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_InstantReloadVData {
        pub const m_ReloadParticle: usize = 0x18b8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier3Boss_RocketBarrageVData {
        pub const m_LaunchAngle: usize = 0x1818;
        pub const m_ExplosionParticle: usize = 0x1820;
        pub const m_ExplosionSound: usize = 0x1900;
        pub const m_RocketFireSound: usize = 0x1910;
        pub const m_AuraModifier: usize = 0x1920;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LingeringAssist {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Root {
    }

    // Parent: CBaseEntity
    pub mod CCitadelSoundStackFieldOBB {
        pub const m_vMins: usize = 0x4a0;
        pub const m_vMaxs: usize = 0x4ac;
        pub const m_nMaxDistance: usize = 0x4b8;
        pub const m_nStackName: usize = 0x4c0;
        pub const m_nOperatorName: usize = 0x4c8;
        pub const m_nOperatorFieldName: usize = 0x4d0;
        pub const m_nMusicState: usize = 0x4d8;
    }

    // Parent: CBaseAnimGraph
    pub mod CPropAnimatingBreakable {
        pub const m_stages: usize = 0xa90;
        pub const m_OnTakeDamage: usize = 0xaa8;
        pub const m_OnFinalBreak: usize = 0xac0;
        pub const m_OnStageAdvanced: usize = 0xad8;
    }

    // Parent: CBaseModelEntity
    pub mod CNecro_HauntingSkullEntity {
        pub const m_hAbility: usize = 0xa80;
        pub const m_eSkullState: usize = 0xa84;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Rutger_Pulse_Aura_VData {
        pub const m_empWaveParticle: usize = 0x7a8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_TechCleave {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Unicorn_RadiantBlast {
        pub const m_vecHitTargets: usize = 0x1170;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_Kickflip_BonusDamageVData {
        pub const m_strOnBulletHitDamageSound: usize = 0x750;
        pub const m_DamageFX: usize = 0x760;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_AirheartRocketeer3VData {
        pub const m_JetpackFireFX: usize = 0x1818;
        pub const m_VTOLExplosionFX: usize = 0x18f8;
        pub const m_flAirDashDistancePct: usize = 0x19d8;
        pub const m_flAirDrag: usize = 0x19dc;
        pub const m_flAirSpeed: usize = 0x19e0;
        pub const m_flBeginJetpackingVelocityMultiplier: usize = 0x19e4;
        pub const m_flTimeToHoldBeforeBeginJetpack: usize = 0x19e8;
        pub const m_flVerticalDampening_FallingBelowNeutral: usize = 0x19ec;
        pub const m_flVerticalDampening_FallingAboveNeutral: usize = 0x19f0;
        pub const m_flVerticalDampening_RisingBelowNeutral: usize = 0x19f4;
        pub const m_flVerticalDampening_RisingAboveNeutral: usize = 0x19f8;
        pub const m_flVerticalDeadzoneSoft: usize = 0x19fc;
        pub const m_flVerticalDeadzoneHard: usize = 0x1a00;
        pub const m_flPreservedVelocityDecaySpeed: usize = 0x1a04;
        pub const m_flIntentMultiplierApproachSpeed: usize = 0x1a08;
        pub const m_flMPCOriginCoeff: usize = 0x1a0c;
        pub const m_flMPCVelocityCoeff: usize = 0x1a10;
        pub const m_flMPCScale: usize = 0x1a14;
        pub const m_flMPCMaxAccel: usize = 0x1a18;
        pub const m_flMoveSpaceSpeed_ZUp: usize = 0x1a1c;
        pub const m_flMoveSpaceSpeed_ZDown: usize = 0x1a20;
        pub const m_flMoveSpaceSpeed_Lateral: usize = 0x1a24;
        pub const m_flMoveSpaceSpeed_LateralZUp: usize = 0x1a28;
        pub const m_flMoveSpaceSpeed_Forward: usize = 0x1a2c;
        pub const m_flMoveSpaceSpeed_Backward: usize = 0x1a30;
        pub const m_flIntentSpaceSoftZone: usize = 0x1a34;
        pub const m_flIntentSpaceHardZone: usize = 0x1a38;
        pub const m_flHardZoneCoeffFrac: usize = 0x1a3c;
        pub const m_flSoftZoneCoeffFrac: usize = 0x1a40;
        pub const m_OverdriveLateral: usize = 0x1a48;
        pub const m_flOverdriveCooldown: usize = 0x1a88;
        pub const m_flConsumedBySideThrusting: usize = 0x1a8c;
        pub const m_flConsumedWhileActive: usize = 0x1a90;
        pub const m_flHoverVelocityDecaySpeed: usize = 0x1a94;
        pub const m_VTOLSpeedByTime: usize = 0x1a98;
        pub const m_flVTOLCamTurnRate: usize = 0x1ad8;
        pub const m_VTOLModifier: usize = 0x1ae0;
        pub const m_flMaxVTOLBounceSpeed: usize = 0x1af0;
        pub const m_flVTOLFloorBounceZSpeed: usize = 0x1af4;
        pub const m_flWallAttachCooldown: usize = 0x1af8;
        pub const m_flWallJumpSpeed: usize = 0x1afc;
        pub const m_flWallAttachMinDuration: usize = 0x1b00;
        pub const m_strOutOfFuelSound: usize = 0x1b08;
        pub const m_strOverdriveActivatedSound: usize = 0x1b18;
        pub const m_strJetpackingLoop: usize = 0x1b28;
        pub const m_strJetpackingThrustingLoop: usize = 0x1b38;
        pub const m_cameraSequenceVTOL: usize = 0x1b48;
        pub const m_cameraSequenceHover: usize = 0x1bd0;
        pub const m_cameraSequenceWallAttach: usize = 0x1c58;
        pub const flScreenShake_VTOL_Amplitude: usize = 0x1ce0;
        pub const flScreenShake_VTOL_Frequency: usize = 0x1ce4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Fencer_RiposteVData {
        pub const m_DashLineEffect: usize = 0x1818;
        pub const m_RiposteDashParticle: usize = 0x18f8;
        pub const m_RiposteParriedParticle: usize = 0x19d8;
        pub const m_strDashStart: usize = 0x1ab8;
        pub const m_strStunImpactSound: usize = 0x1ac8;
        pub const m_strAvoidDamage: usize = 0x1ad8;
        pub const m_strStartParry: usize = 0x1ae8;
        pub const m_DebuffModifier: usize = 0x1af8;
        pub const m_TargetLifestealModifier: usize = 0x1b08;
        pub const m_flAirSpeedMax: usize = 0x1b18;
        pub const m_flAirDrag: usize = 0x1b1c;
        pub const m_flFallSpeedMax: usize = 0x1b20;
        pub const m_flParryMoveSpeed: usize = 0x1b24;
        pub const m_flDashAnimDelay: usize = 0x1b28;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Graf_Ability04 {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_BatCloudVData {
        pub const m_SelfModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_AuraParticle: usize = 0x1838;
        pub const m_BatHitParticle: usize = 0x1918;
        pub const m_strFireBatSound: usize = 0x19f8;
        pub const m_cameraSequenceBatCloud: usize = 0x1a08;
        pub const m_flCameraForwardForce: usize = 0x1a90;
        pub const m_flInputForce: usize = 0x1a94;
        pub const m_flDampingConstant: usize = 0x1a98;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Synth_Pulse_VData {
        pub const m_EscapeModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_AoEParticle: usize = 0x1838;
        pub const m_EffectParticle: usize = 0x1918;
        pub const m_ChannelParticle: usize = 0x19f8;
        pub const m_HitParticle: usize = 0x1ad8;
        pub const m_RadiusParticle: usize = 0x1bb8;
        pub const m_strExpireSound: usize = 0x1c98;
        pub const m_cameraSequenceInSatchel: usize = 0x1ca8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_Breach {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Shotgun_Astro {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityExplosiveBarrelVData {
        pub const m_BarrelExplodeParticle: usize = 0x1818;
        pub const m_MirvExplodeParticle: usize = 0x18f8;
        pub const m_BarrelArmedParticle: usize = 0x19d8;
        pub const m_BarrelReadyToExplodeParticle: usize = 0x1ab8;
        pub const m_strExplodeSound: usize = 0x1b98;
        pub const m_strMirvExplodeSound: usize = 0x1ba8;
        pub const m_strRiccochetSound: usize = 0x1bb8;
        pub const m_strBarrelSoundLp: usize = 0x1bc8;
        pub const m_strBarrelLaunchSound: usize = 0x1bd8;
        pub const m_strBarrelMeleedSound: usize = 0x1be8;
        pub const m_strBarrelArmedSound: usize = 0x1bf8;
        pub const m_BurnModifier: usize = 0x1c08;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ProjectMindVData {
        pub const m_TeleportStartParticle: usize = 0x750;
        pub const m_TeleportEndParticle: usize = 0x830;
        pub const m_TeleportTrailParticle: usize = 0x910;
        pub const m_TeleportModelParticle: usize = 0x9f0;
        pub const m_ShieldModifier: usize = 0xad0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_SplitShotVData {
        pub const m_strWeaponShootSound: usize = 0x18b8;
        pub const m_BuffIndicatorModifier: usize = 0x18c8;
        pub const m_WeaponDamageBuff: usize = 0x18d8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SuperAcolytesGlove_VData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_SwingParticle: usize = 0x790;
        pub const m_HitParticle: usize = 0x870;
        pub const m_FistReadyEffect: usize = 0x950;
    }

    // Parent: None
    pub mod CPulseAnimFuncs {
    }

    // Parent: CEconEntity
    pub mod CEconWearable {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_NukeMapVData {
        pub const m_DamageParticle: usize = 0x1818;
        pub const m_DelayedEffectModifier: usize = 0x18f8;
        pub const m_strDamageSound: usize = 0x1908;
        pub const m_flRandomSpawnOffsetPerSummon: usize = 0x1918;
        pub const m_flVerticalOffset: usize = 0x191c;
        pub const m_flForwardOffset: usize = 0x1920;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Bookworm_AOEMagic_AreaModifierVData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_RootModifier: usize = 0x760;
        pub const m_DebuffModifier: usize = 0x770;
        pub const m_AreaWarningEffect: usize = 0x780;
        pub const m_ExplodeEffect: usize = 0x860;
        pub const m_AoECastEffect: usize = 0x940;
        pub const m_strHitSound: usize = 0xa20;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FireBomb {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ZipLine {
        pub const m_flActivatePressTime: usize = 0x1970;
        pub const m_bThinking: usize = 0x1974;
        pub const m_bMoveCollidedPushUp: usize = 0x1975;
        pub const m_bNoDelayNeeded: usize = 0x1976;
        pub const m_bMouseWheelBind: usize = 0x1977;
        pub const m_eCommittedAttachState: usize = 0x1978;
        pub const m_flTimeStartZipping: usize = 0x19a8;
        pub const m_flTimeForKnockdownProtection: usize = 0x19ac;
        pub const m_flTimeStopZipping: usize = 0x19b0;
        pub const m_flCasterSpeed: usize = 0x19b4;
        pub const m_vecInitialVel: usize = 0x19b8;
        pub const m_vecAttachPoint: usize = 0x19e8;
        pub const m_pPrevNode: usize = 0x19f4;
        pub const m_pNextNode: usize = 0x19f8;
        pub const m_flTimeEnterState: usize = 0x19fc;
        pub const m_flLatchTime: usize = 0x1a00;
        pub const m_flDamagedTime: usize = 0x1a04;
        pub const m_eAttachState: usize = 0x1a08;
        pub const m_iAttachedZipLineLane: usize = 0x1a0c;
        pub const m_bDroppedFromZipline: usize = 0x1a10;
        pub const m_hAttachZipLine: usize = 0x1a11;
        pub const m_vAttachZipLineOffset: usize = 0x1a14;
        pub const m_flZiplineAirDrag: usize = 0x1a20;
        pub const m_vPendulumVelocity: usize = 0x1a24;
        pub const m_vPendulumPosition: usize = 0x1a30;
        pub const m_vVelocityHistory1: usize = 0x1a3c;
        pub const m_vVelocityHistory2: usize = 0x1a48;
        pub const m_iDesiredLane: usize = 0x1a54;
    }

    // Parent: CCitadel_Modifier_Invis
    pub mod CCitadel_Modifier_Camouflage_Invis {
        pub const m_vCastPosition: usize = 0x468;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_QuickSilver_Buff {
        pub const m_flEffectivecFireRatePercent: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ActiveDisarm_SpiritSteal {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NeutralDamageGrowthVData {
        pub const m_flDamageGrowthPctPerMin: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Basic_RangedArmorBonusVData {
        pub const m_flBulletResistancePctMin: usize = 0x750;
        pub const m_flBulletResistancePctMax: usize = 0x754;
        pub const m_flTechResistancePctMin: usize = 0x758;
        pub const m_flTechResistancePctMax: usize = 0x75c;
        pub const m_flRangeMin: usize = 0x760;
        pub const m_flRangeMax: usize = 0x764;
        pub const m_flInvulnRange: usize = 0x768;
        pub const m_bPlayersOnly: usize = 0x76c;
    }

    // Parent: CAI_Component
    pub mod CAI_Navigator {
        pub const m_flGoalStoppingDistance: usize = 0x58;
        pub const m_navType: usize = 0x5c;
        pub const m_bNavComplete: usize = 0x60;
        pub const m_pPath: usize = 0x88;
        pub const m_hLosTarget: usize = 0x90;
        pub const m_vThreatPos: usize = 0x94;
        pub const m_interruptPathWaypoints: usize = 0xa0;
        pub const m_flLastSuccessfulSimplifyTime: usize = 0xa8;
        pub const m_flTimeLastAvoidanceTriangulate: usize = 0xac;
        pub const m_flStartWaitingForFacingTime: usize = 0xb0;
        pub const m_queuedGoal: usize = 0xb8;
        pub const m_queuedGoalFlags: usize = 0x178;
        pub const m_bQueuedGoalSuccess: usize = 0x17c;
        pub const m_sQueuedGoalName: usize = 0x180;
        pub const m_bPeerMoveWait: usize = 0x188;
        pub const m_hPeerWaitingOn: usize = 0x18c;
        pub const m_PeerWaitMoveTimer: usize = 0x190;
        pub const m_PeerWaitClearTimer: usize = 0x19c;
        pub const m_NextSidestepTimer: usize = 0x1a8;
        pub const m_hBigStepGroundEnt: usize = 0x1b4;
        pub const m_hLastBlockingEnt: usize = 0x1b8;
        pub const m_vPosBeginFailedSteer: usize = 0x1bc;
        pub const m_timeBeginFailedSteer: usize = 0x1c8;
        pub const m_nNavFailCounter: usize = 0x1cc;
        pub const m_flLastNavFailTime: usize = 0x1d0;
        pub const m_bShouldBruteForceFailedNav: usize = 0x1d4;
        pub const m_bNavChangedAlongPath: usize = 0x1d5;
        pub const m_nPreviousCollisionGroup: usize = 0x1d8;
        pub const m_flLastNpcOverlapTime: usize = 0x1dc;
        pub const m_flGoalBlockedTolerance: usize = 0x1e0;
        pub const m_flWaypointBlockedTolerance: usize = 0x1e4;
        pub const m_vGoalDirection: usize = 0x1e8;
        pub const m_hGoalDirectionTarget: usize = 0x1f4;
        pub const m_flGoalDirectionToleranceDot: usize = 0x1f8;
        pub const m_flGoalArrivalTolerance: usize = 0x1fc;
        pub const m_eGoalStance: usize = 0x200;
        pub const m_sGoalMovementGaitSet: usize = 0x208;
        pub const m_flArrivalFlyingSpeedScale: usize = 0x210;
        pub const m_flPathEndGoalRange: usize = 0x214;
        pub const m_flPathEndGoalRange_Repathing: usize = 0x218;
        pub const m_flGoalMaxPathLength: usize = 0x21c;
        pub const m_flGoalMaxTravelDist: usize = 0x220;
        pub const m_pathRestrictionTag: usize = 0x228;
        pub const m_smartGoalHelper: usize = 0x248;
    }

    // Parent: None
    pub mod CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
        pub const m_TagName: usize = 0x0;
    }

    // Parent: None
    pub mod CPulseArraylib {
    }

    // Parent: CItemGeneric
    pub mod CItemFlare {
    }

    // Parent: CCitadelModifierAura
    pub mod CModifier_Mirage_Tornado_Aura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Omnicharge_Pendant {
    }

    // Parent: CCitadel_Item_ProjectileTest
    pub mod CCitadel_Item_ProjectileTest04 {
    }

    // Parent: CBaseModelEntity
    pub mod CFuncLadder {
        pub const m_vecLadderDir: usize = 0x780;
        pub const m_Dismounts: usize = 0x790;
        pub const m_vecLocalTop: usize = 0x7a8;
        pub const m_vecPlayerMountPositionTop: usize = 0x7b4;
        pub const m_vecPlayerMountPositionBottom: usize = 0x7c0;
        pub const m_flAutoRideSpeed: usize = 0x7cc;
        pub const m_bDisabled: usize = 0x7d0;
        pub const m_bFakeLadder: usize = 0x7d1;
        pub const m_bHasSlack: usize = 0x7d2;
        pub const m_surfacePropName: usize = 0x7d8;
        pub const m_OnPlayerGotOnLadder: usize = 0x7e0;
        pub const m_OnPlayerGotOffLadder: usize = 0x7f8;
    }

    // Parent: CBaseEntity
    pub mod CFogController {
        pub const m_fog: usize = 0x4a0;
        pub const m_bUseAngles: usize = 0x508;
        pub const m_iChangedVariables: usize = 0x50c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fencer_Riposte_TargetLifesteal {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Synth_Barrage_Caster_VData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Rutger_CheatDeath_Activated_VData {
        pub const m_ActivatedParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Thumper_2 {
        pub const m_vStompPos: usize = 0xf70;
        pub const m_vStompDir: usize = 0xf7c;
        pub const m_nStomps: usize = 0xf88;
    }

    // Parent: CCitadelBaseShivAbility
    pub mod CCitadel_Ability_ShivDagger {
    }

    // Parent: CCitadel_WeaponUpgrade_HeadshotBooster_VData
    pub mod CCitadel_WeaponUpgrade_Headhunter_VData {
        pub const m_HeadshotBuffModifier: usize = 0x890;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fervor {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CModifier_Upgrade_ArcaneMedallion {
    }

    // Parent: CBaseEntity
    pub mod COrbSpawner {
    }

    // Parent: None
    pub mod CPointTemplateAPI {
    }

    // Parent: CBaseAnimGraph
    pub mod CItem {
        pub const m_OnPlayerTouch: usize = 0xa98;
        pub const m_OnPlayerPickup: usize = 0xab0;
        pub const m_bActivateWhenAtRest: usize = 0xac8;
        pub const m_OnCacheInteraction: usize = 0xad0;
        pub const m_OnGlovePulled: usize = 0xae8;
        pub const m_vOriginalSpawnOrigin: usize = 0xb00;
        pub const m_vOriginalSpawnAngles: usize = 0xb0c;
        pub const m_bPhysStartAsleep: usize = 0xb18;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerPush {
        pub const m_angPushEntitySpace: usize = 0x8e0;
        pub const m_vecPushDirEntitySpace: usize = 0x8ec;
        pub const m_bTriggerOnStartTouch: usize = 0x8f8;
        pub const m_bUsePathSimple: usize = 0x8f9;
        pub const m_iszPathSimpleName: usize = 0x900;
        pub const m_PathSimple: usize = 0x908;
        pub const m_splinePushType: usize = 0x910;
    }

    // Parent: CBaseAnimGraph
    pub mod CBaseProp {
        pub const m_bModelOverrodeBlockLOS: usize = 0xa90;
        pub const m_iShapeType: usize = 0xa94;
        pub const m_bConformToCollisionBounds: usize = 0xa98;
        pub const m_mPreferredCatchTransform: usize = 0xaa0;
    }

    // Parent: CPointEntity
    pub mod CInfoOffscreenPanoramaTexture {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_bEnableMipGen: usize = 0x4a1;
        pub const m_nResolutionX: usize = 0x4a4;
        pub const m_nResolutionY: usize = 0x4a8;
        pub const m_szPanelType: usize = 0x4b0;
        pub const m_szLayoutFileName: usize = 0x4b8;
        pub const m_RenderAttrName: usize = 0x4c0;
        pub const m_TargetEntities: usize = 0x4c8;
        pub const m_nTargetChangeCount: usize = 0x4e0;
        pub const m_vecCSSClasses: usize = 0x4e8;
        pub const m_szTargetsName: usize = 0x500;
        pub const m_AdditionalTargetEntities: usize = 0x508;
    }

    // Parent: CPointEntity
    pub mod CPointAngularVelocitySensor {
        pub const m_hTargetEntity: usize = 0x4a0;
        pub const m_flThreshold: usize = 0x4a4;
        pub const m_nLastCompareResult: usize = 0x4a8;
        pub const m_nLastFireResult: usize = 0x4ac;
        pub const m_flFireTime: usize = 0x4b0;
        pub const m_flFireInterval: usize = 0x4b4;
        pub const m_flLastAngVelocity: usize = 0x4b8;
        pub const m_lastOrientation: usize = 0x4bc;
        pub const m_vecAxis: usize = 0x4c8;
        pub const m_bUseHelper: usize = 0x4d4;
        pub const m_AngularVelocity: usize = 0x4d8;
        pub const m_OnLessThan: usize = 0x4f8;
        pub const m_OnLessThanOrEqualTo: usize = 0x510;
        pub const m_OnGreaterThan: usize = 0x528;
        pub const m_OnGreaterThanOrEqualTo: usize = 0x540;
        pub const m_OnEqualTo: usize = 0x558;
    }

    // Parent: CBaseEntity
    pub mod CPlayerVisibility {
        pub const m_flVisibilityStrength: usize = 0x4a0;
        pub const m_flFogDistanceMultiplier: usize = 0x4a4;
        pub const m_flFogMaxDensityMultiplier: usize = 0x4a8;
        pub const m_flFadeTime: usize = 0x4ac;
        pub const m_bStartDisabled: usize = 0x4b0;
        pub const m_bIsEnabled: usize = 0x4b1;
    }

    // Parent: None
    pub mod CCitadelPointPulseAPI {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Werewolf_UnloadGunVData {
        pub const m_ShootingModifier: usize = 0x1818;
        pub const m_strShootSound: usize = 0x1828;
        pub const m_GunReloadParticle: usize = 0x1838;
        pub const m_MuzzleFlashParticle: usize = 0x1918;
        pub const m_bGrantAmmoOnCast: usize = 0x19f8;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_VandalOverflow {
        pub const m_vecFloatDest: usize = 0x1d8;
        pub const m_vecStartingPos: usize = 0x1e4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_CatFormVData {
        pub const m_PoofInParticle: usize = 0x1818;
        pub const m_PoofOutParticle: usize = 0x18f8;
        pub const m_strMeow: usize = 0x19d8;
        pub const m_strCatFormMeleeSwing: usize = 0x19e8;
        pub const m_BuffModifier: usize = 0x19f8;
        pub const m_DamageAmpModifier: usize = 0x1a08;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_SmokeBombVData {
        pub const m_InvisModifier: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x1828;
        pub const m_PhaseOutModifier: usize = 0x1838;
        pub const m_PurgeParticle: usize = 0x1848;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_IceGrenadeVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_IceGrenadeSlowModifier: usize = 0x18f8;
        pub const m_ExplosionSound: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BerserkerDamageStack {
        pub const m_nBuffParticle: usize = 0xd0;
        pub const m_nBuffParticleEnemy: usize = 0xd4;
    }

    // Parent: CitadelItemVData
    pub mod CItemRefresherVData {
        pub const m_RefreshParticle: usize = 0x18b8;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_FollowEntity {
        pub const m_ParamBoneOrAttachName: usize = 0x48;
        pub const m_ParamBoneOrAttachNameChild: usize = 0x50;
    }

    // Parent: CBaseAnimGraph
    pub mod CBasePlayerWeapon {
        pub const m_nNextPrimaryAttackTick: usize = 0xa90;
        pub const m_flNextPrimaryAttackTickRatio: usize = 0xa94;
        pub const m_nNextSecondaryAttackTick: usize = 0xa98;
        pub const m_flNextSecondaryAttackTickRatio: usize = 0xa9c;
        pub const m_iClip1: usize = 0xaa0;
        pub const m_iClip2: usize = 0xaa4;
        pub const m_pReserveAmmo: usize = 0xaa8;
        pub const m_OnPlayerUse: usize = 0xab0;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifire_Priest_FlashBangBurnAuraVData {
        pub const m_BurnModifier: usize = 0x7a8;
        pub const m_RadiusParticle: usize = 0x7b8;
    }

    // Parent: CPointEntity
    pub mod CPhysForce {
        pub const m_pController: usize = 0x4a0;
        pub const m_nameAttach: usize = 0x4a8;
        pub const m_force: usize = 0x4b0;
        pub const m_forceTime: usize = 0x4b4;
        pub const m_attachedObject: usize = 0x4b8;
        pub const m_wasRestored: usize = 0x4bc;
        pub const m_integrator: usize = 0x4c0;
    }

    // Parent: None
    pub mod CAttributeManager {
        pub const m_Providers: usize = 0x8;
        pub const m_Receivers: usize = 0x20;
        pub const m_iReapplyProvisionParity: usize = 0x38;
        pub const m_hOuter: usize = 0x3c;
        pub const m_bPreventLoopback: usize = 0x40;
        pub const m_ProviderType: usize = 0x44;
        pub const m_CachedResults: usize = 0x48;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Airheart_PrimaryWeapon {
        pub const m_vecStuckTargets: usize = 0x1198;
        pub const m_vecBombsInWorld: usize = 0x11b0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_HauntingSpiritsVData {
        pub const m_BlockParticle: usize = 0x750;
        pub const m_strTargetFoundSound: usize = 0x830;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Swan_LeapVData {
        pub const m_BuffModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierDoormanHotelImposterVData {
        pub const m_ImposterModifierFX: usize = 0x750;
        pub const m_strKeyTurnSound: usize = 0x760;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_WeaponSwap {
        pub const m_hOriginalGun: usize = 0x1414;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Frank_SelfZapVData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_healCurve: usize = 0x1828;
    }

    // Parent: CCitadelBaseYamatoAbility
    pub mod CCitadel_Ability_FlyingStrike {
        pub const m_iTargetPosIndex: usize = 0xfa0;
        pub const m_bShadowFormCast: usize = 0xfa4;
        pub const m_vYamatoCastPos: usize = 0xfa8;
        pub const m_vTargetCastPos: usize = 0xfb4;
        pub const m_flFlyingToTargetStartTime: usize = 0xfc0;
        pub const m_flEndAttackTime: usize = 0xfc4;
        pub const m_flGrappleStartTime: usize = 0xfc8;
        pub const m_flGrappleArriveTime: usize = 0xfcc;
        pub const m_flAttackLatchTime: usize = 0xfd0;
        pub const m_vAttackLatchPos: usize = 0xfd4;
        pub const m_hTarget: usize = 0xfe0;
        pub const m_bIsTargetAlly: usize = 0xfe4;
        pub const m_flGrappleShotAttackTime: usize = 0xfe8;
        pub const m_hAttackTarget: usize = 0xfec;
        pub const m_rgPath: usize = 0xff0;
        pub const m_nPathIdx: usize = 0x10e0;
        pub const m_nPathSize: usize = 0x10e4;
        pub const m_flPathLength: usize = 0x10e8;
        pub const m_vFlyingInitialOffsetToPath: usize = 0x10ec;
        pub const flDistFlown: usize = 0x10f8;
        pub const m_vLastSafePos: usize = 0x10fc;
        pub const m_nGrappleTravelEffect: usize = 0x1308;
        pub const m_bPathDirty: usize = 0x1360;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_UltCombo_TargetVData {
        pub const m_flTargetPosDistance: usize = 0x830;
        pub const m_flTargetPosRange: usize = 0x834;
        pub const m_flPullSpeedMin: usize = 0x838;
        pub const m_flPullSpeedMax: usize = 0x83c;
        pub const m_flPullDistanceMin: usize = 0x840;
        pub const m_flPullDistanceMax: usize = 0x844;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Haze_StackingDamage {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChargeDragEnemy {
        pub const m_qRelativeOffset: usize = 0xd0;
        pub const m_flRelativeDist: usize = 0xdc;
        pub const m_flMaxDist: usize = 0xe0;
        pub const m_vecOffsetDir: usize = 0xe4;
        pub const m_vecStartPosition: usize = 0xf0;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_CounterspellWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
        pub const m_ParryFXOverride: usize = 0x760;
        pub const m_HealFX: usize = 0x840;
        pub const m_strSuccessProcSound: usize = 0x920;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Delayed_Stun {
        pub const m_flRadius: usize = 0x250;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Objective_HealthGrowthVData {
        pub const m_iGrowthPerMinute: usize = 0x750;
        pub const m_flTickRate: usize = 0x754;
        pub const m_iGrowthStartTimeInMinutes: usize = 0x758;
    }

    // Parent: CBaseEntity
    pub mod CAI_SpeechFilter {
        pub const m_iszSubject: usize = 0x4a8;
        pub const m_flIdleModifier: usize = 0x4b0;
        pub const m_bNeverSayHello: usize = 0x4b4;
        pub const m_bDisabled: usize = 0x4b5;
    }

    // Parent: CPulse_OutflowConnection
    pub mod SignatureOutflow_Continue {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerTrooperDetector {
        pub const m_flRadius: usize = 0x940;
    }

    // Parent: CPointEntity
    pub mod CInfoTarget {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SmokeGrenadeVData {
        pub const m_BlockerModel: usize = 0x750;
        pub const m_SmokeParticle: usize = 0x830;
        pub const m_FriendlyAuraModifier: usize = 0x910;
        pub const m_EnemyAuraModifier: usize = 0x920;
        pub const m_strDomeEndSound: usize = 0x930;
        pub const m_strTargetLoopingSound: usize = 0x940;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_AbsorbingArmorVData {
        pub const m_ImpactParticle: usize = 0x750;
        pub const m_strImpactSound: usize = 0x830;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Objective_BulletReistVData {
        pub const m_BulletResist: usize = 0x750;
        pub const m_BulletResistReductionPerHero: usize = 0x754;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_CameraServices {
        pub const m_vecPunchAngle: usize = 0x48;
        pub const m_vecPunchAngleVel: usize = 0x54;
        pub const m_nPunchAngleJoltTick: usize = 0x60;
        pub const m_PlayerFog: usize = 0x68;
        pub const m_hColorCorrectionCtrl: usize = 0xa8;
        pub const m_hViewEntity: usize = 0xac;
        pub const m_hTonemapController: usize = 0xb0;
        pub const m_audio: usize = 0xb8;
        pub const m_PostProcessingVolumes: usize = 0x130;
        pub const m_flOldPlayerZ: usize = 0x148;
        pub const m_flOldPlayerViewOffsetZ: usize = 0x14c;
        pub const m_hTriggerSoundscapeList: usize = 0x168;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Timeline {
        pub const m_TimelineEvents: usize = 0x48;
        pub const m_bWaitForChildOutflows: usize = 0x60;
        pub const m_OnFinished: usize = 0x68;
        pub const m_OnCanceled: usize = 0xb0;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_EntOutputHandler {
        pub const m_SourceEntity: usize = 0x80;
        pub const m_SourceOutput: usize = 0x90;
        pub const m_ExpectedParamType: usize = 0xa0;
    }

    // Parent: CCitadelTriggerMultiCapturePoint
    pub mod CCitadel_KothCashIn {
        pub const m_flAmberFavored: usize = 0xc28;
        pub const m_flSapphireFavored: usize = 0xc2c;
        pub const m_iWinningTeam: usize = 0xc30;
        pub const m_iTroopersToSpawn: usize = 0xc34;
        pub const m_hDropOffPlayer: usize = 0x13d4;
        pub const m_nGold: usize = 0x13d8;
        pub const m_nTeamBias: usize = 0x13dc;
        pub const m_nKOTHIdx: usize = 0x13e0;
        pub const m_nAmberNetworth: usize = 0x13e4;
        pub const m_nSapphireNetworth: usize = 0x13e8;
        pub const m_nAmberGoldValue: usize = 0x13ec;
        pub const m_nSapphireGoldValue: usize = 0x13f0;
        pub const m_bGiveUpHasWarned: usize = 0x13f4;
        pub const m_bGivenUp: usize = 0x13f5;
        pub const m_bWasBlockedAtAnyPoint: usize = 0x13f6;
        pub const m_nZoneParticle: usize = 0x13f8;
        pub const m_bCashedIn: usize = 0x13fc;
        pub const m_bPlayBlock: usize = 0x13fd;
        pub const m_bPlayContested: usize = 0x13fe;
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelZipLineNode {
        pub const m_vecConnections: usize = 0x7b8;
        pub const m_vecConnectionDir: usize = 0x7d0;
        pub const m_vTangentIn: usize = 0x7e8;
        pub const m_vTangentOut: usize = 0x7f4;
        pub const m_flCumulativeDistance: usize = 0x800;
        pub const m_strGuardBossName: usize = 0x828;
        pub const m_strGuardBossName2: usize = 0x830;
        pub const m_strGuardBossName3: usize = 0x838;
        pub const m_iNodeIndex: usize = 0x844;
        pub const m_eCaptureState: usize = 0x846;
        pub const m_iPrimaryLane: usize = 0x848;
        pub const m_bUseBaseLaneColor: usize = 0x84a;
        pub const m_nRopesParity: usize = 0x84c;
        pub const m_bCornerNode: usize = 0x84e;
        pub const m_bCapturable: usize = 0x84f;
        pub const m_bDisableZippingToByPlayers: usize = 0x850;
        pub const m_flSpeedMultiplierToBaseBonus: usize = 0x854;
        pub const m_flSpeedMultiplierFromBaseBonus: usize = 0x858;
        pub const m_hGuardingBosses: usize = 0x860;
        pub const m_flRopeRadius: usize = 0x878;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_Werewolf_UnloadGun2VData {
        pub const m_strStackProcSound: usize = 0x880;
        pub const m_strStackProcEffect: usize = 0x890;
        pub const m_StackingModifier: usize = 0x970;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Boho_ChannelTether_TetherVData {
        pub const m_TetherParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Priest_CrossbowEquippedVData {
        pub const m_WeaponBuffParticle: usize = 0x750;
        pub const m_BlessedLoopSound: usize = 0x830;
        pub const m_AimLoopSound: usize = 0x840;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityChargedTackleVData {
        pub const m_ChargePreviewParticle: usize = 0x1818;
        pub const m_ChargePrepareModifier: usize = 0x18f8;
        pub const m_ChargeActiveModifier: usize = 0x1908;
        pub const m_DragModifier: usize = 0x1918;
        pub const m_strHitSound: usize = 0x1928;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierChargedTackleActiveVData {
        pub const m_TackleParticle: usize = 0x750;
        pub const m_PullEnemiesParticle: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LightningBullet {
    }

    // Parent: CitadelItemVData
    pub mod CItemShrink_RayVData {
        pub const m_ShrinkRayModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_MagicStormWatcher {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Stamina_Regen_Jump_Reduction {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Damage_Taken_Reduction_Handicap {
        pub const m_flValue: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DelayedCatapultLaunch {
    }

    // Parent: CPlayer_MovementServices_Humanoid
    pub mod CCitadelPlayer_MovementServices {
        pub const m_vPositionDeltaVelocity: usize = 0x278;
        pub const m_bToggleDuckActive: usize = 0x2a8;
        pub const m_bDucked: usize = 0x2a9;
        pub const m_bInPortalEnvironment: usize = 0x2aa;
        pub const m_vecPogoVelocity: usize = 0x2ac;
        pub const m_vecSupport: usize = 0x2b8;
        pub const m_bColliding: usize = 0x2c4;
        pub const m_bLandedOnGround: usize = 0x2c5;
        pub const m_bHasFreeCursor: usize = 0x2c6;
        pub const m_flTurnSpringSpeed: usize = 0x2c8;
        pub const m_flInputDirectionCommitment: usize = 0x2cc;
        pub const m_nSuccessiveDirChanges: usize = 0x2d0;
        pub const m_flLastDirChange: usize = 0x2d4;
        pub const m_vLastWishDir: usize = 0x2d8;
    }

    // Parent: None
    pub mod CPulseFuncs_GameParticleManager {
    }

    // Parent: None
    pub mod CScenePayloadVData {
        pub const m_eNPCBehavior: usize = 0x0;
        pub const m_sSceneFile: usize = 0x8;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_ZombieWallGroundAuraVData {
        pub const m_GroundParticle: usize = 0x7a8;
        pub const m_strPopSound: usize = 0x888;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_TurretClone_Trigger {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_Ability01VData {
        pub const m_EffectModifier: usize = 0x1818;
        pub const m_StaringModifier: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
        pub const m_UnstoppableWhileChannelingModifier: usize = 0x1848;
        pub const m_AirSpeedMax: usize = 0x1858;
        pub const m_FallSpeedMax: usize = 0x185c;
        pub const m_VerticalDrag: usize = 0x1860;
        pub const m_AirDrag: usize = 0x1864;
        pub const m_CameraTurnRateMax: usize = 0x1868;
        pub const m_flShotCosmeticVarianceMagnitude: usize = 0x186c;
        pub const m_JumpCeilingCheckDistance: usize = 0x1870;
        pub const m_JumpSpeed: usize = 0x1874;
        pub const m_JumpPitch: usize = 0x1878;
        pub const m_JumpUpDownSpeed: usize = 0x187c;
        pub const m_ConeSpacingMeters: usize = 0x1880;
        pub const m_RadiusGrowthCurve: usize = 0x1888;
        pub const aimColorDesat: usize = 0x18c8;
        pub const aimColorSat: usize = 0x18cc;
        pub const aimColorOutline: usize = 0x18d0;
        pub const m_flSatVolumeInnerConeSize: usize = 0x18d4;
        pub const m_BeamParticle: usize = 0x18d8;
        pub const m_EyeGlowParticle: usize = 0x19b8;
        pub const m_TargetDebuffParticle: usize = 0x1a98;
        pub const m_GroundParticle: usize = 0x1b78;
        pub const m_RadiusIndicatorParticle: usize = 0x1c58;
        pub const m_RadiusIndicatorClientParticle: usize = 0x1d38;
        pub const m_ExplosionParticle: usize = 0x1e18;
        pub const m_WakeUpDamageParticle: usize = 0x1ef8;
        pub const m_SleepHitSound: usize = 0x1fd8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityVandalSurgeVData {
        pub const m_LiftModifier: usize = 0x1818;
        pub const m_TargetParticle: usize = 0x1828;
        pub const m_TargetCastSound: usize = 0x1908;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Melee_Base {
        pub const m_nHitNumber: usize = 0xf88;
        pub const m_nPlayerKillNumber: usize = 0xf8c;
        pub const m_bUsingThisMelee: usize = 0xf90;
        pub const m_bUsingMeleeTagActive: usize = 0xf91;
        pub const m_bHitWithThisAttack: usize = 0xf92;
        pub const m_flLastActivateTime: usize = 0xf94;
        pub const m_flNextAttackAllowedTime: usize = 0xf98;
        pub const m_flAttackTriggeredTime: usize = 0xf9c;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_InfiniteMagazineVData {
        pub const m_BuffModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_ArcaneEaterProcVData {
        pub const m_StealWatcherModifier: usize = 0x780;
    }

    // Parent: CCitadel_Modifier_Tier3Boss_Base
    pub mod CCitadel_Modifier_T3BossWaveBeamPreview {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TeleportToObjective {
        pub const m_vDest: usize = 0xd0;
        pub const m_angDestAngles: usize = 0xdc;
        pub const m_vDestVelocity: usize = 0xe8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ServerOnly {
    }

    // Parent: CBaseEntity
    pub mod CCitadelMinimapBoundary {
    }

    // Parent: CBaseFilter
    pub mod CFilterAttributeInt {
        pub const m_sAttributeName: usize = 0x4d8;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Synth_PlasmaFlux {
        pub const m_bSpawnedInNoTeleportArea: usize = 0x860;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_TechUpgrade_Infuser {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_InMenuVData {
    }

    // Parent: CPointEntity
    pub mod CKeepUpright {
        pub const m_worldGoalAxis: usize = 0x4a8;
        pub const m_localTestAxis: usize = 0x4b4;
        pub const m_pController: usize = 0x4c0;
        pub const m_nameAttach: usize = 0x4c8;
        pub const m_attachedObject: usize = 0x4d0;
        pub const m_angularLimit: usize = 0x4d4;
        pub const m_bActive: usize = 0x4d8;
        pub const m_bDampAllRotation: usize = 0x4d9;
    }

    // Parent: CLogicalEntity
    pub mod CPointTemplate {
        pub const m_iszWorldName: usize = 0x4a0;
        pub const m_iszSource2EntityLumpName: usize = 0x4a8;
        pub const m_iszEntityFilterName: usize = 0x4b0;
        pub const m_flTimeoutInterval: usize = 0x4b8;
        pub const m_bAsynchronouslySpawnEntities: usize = 0x4bc;
        pub const m_clientOnlyEntityBehavior: usize = 0x4c0;
        pub const m_ownerSpawnGroupType: usize = 0x4c4;
        pub const m_createdSpawnGroupHandles: usize = 0x4c8;
        pub const m_SpawnedEntityHandles: usize = 0x4e0;
        pub const m_ScriptSpawnCallback: usize = 0x4f8;
        pub const m_ScriptCallbackScope: usize = 0x500;
        pub const m_OnEntitySpawned: usize = 0x508;
    }

    // Parent: CBaseEntity
    pub mod CEnvVolumetricFogController {
        pub const m_flScattering: usize = 0x4a0;
        pub const m_TintColor: usize = 0x4a4;
        pub const m_flAnisotropy: usize = 0x4a8;
        pub const m_flFadeSpeed: usize = 0x4ac;
        pub const m_flDrawDistance: usize = 0x4b0;
        pub const m_flFadeInStart: usize = 0x4b4;
        pub const m_flFadeInEnd: usize = 0x4b8;
        pub const m_flIndirectStrength: usize = 0x4bc;
        pub const m_nVolumeDepth: usize = 0x4c0;
        pub const m_fFirstVolumeSliceThickness: usize = 0x4c4;
        pub const m_nIndirectTextureDimX: usize = 0x4c8;
        pub const m_nIndirectTextureDimY: usize = 0x4cc;
        pub const m_nIndirectTextureDimZ: usize = 0x4d0;
        pub const m_vBoxMins: usize = 0x4d4;
        pub const m_vBoxMaxs: usize = 0x4e0;
        pub const m_bActive: usize = 0x4ec;
        pub const m_flStartAnisoTime: usize = 0x4f0;
        pub const m_flStartScatterTime: usize = 0x4f4;
        pub const m_flStartDrawDistanceTime: usize = 0x4f8;
        pub const m_flStartAnisotropy: usize = 0x4fc;
        pub const m_flStartScattering: usize = 0x500;
        pub const m_flStartDrawDistance: usize = 0x504;
        pub const m_flDefaultAnisotropy: usize = 0x508;
        pub const m_flDefaultScattering: usize = 0x50c;
        pub const m_flDefaultDrawDistance: usize = 0x510;
        pub const m_bStartDisabled: usize = 0x514;
        pub const m_bEnableIndirect: usize = 0x515;
        pub const m_bIsMaster: usize = 0x516;
        pub const m_hFogIndirectTexture: usize = 0x518;
        pub const m_nForceRefreshCount: usize = 0x520;
        pub const m_fNoiseSpeed: usize = 0x524;
        pub const m_fNoiseStrength: usize = 0x528;
        pub const m_vNoiseScale: usize = 0x52c;
        pub const m_fWindSpeed: usize = 0x538;
        pub const m_vWindDirection: usize = 0x53c;
        pub const m_bFirstTime: usize = 0x548;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Drifter_Darkness_Target_BoundaryUnit_VData {
        pub const m_strBoundaryPuffParticle: usize = 0x750;
        pub const m_strAuraEnterPlayerSound: usize = 0x830;
        pub const m_strAuraEnterNPCSound: usize = 0x840;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Mirage_Teleport_VData {
        pub const m_InterruptNotificationModifier: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x1828;
        pub const m_preTeleportParticle: usize = 0x1838;
        pub const m_TeleportStartParticle: usize = 0x1918;
        pub const m_TeleportEndParticle: usize = 0x19f8;
        pub const m_strArriveSound: usize = 0x1ad8;
        pub const m_strDepartSound: usize = 0x1ae8;
        pub const m_strChannelDestinationSound: usize = 0x1af8;
        pub const m_flObjectiveOffset: usize = 0x1b08;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGenericPerson3VData {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Astro_Shotgun_Toggle_VData {
        pub const m_BuffModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TargetPracticeDebuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hornet_Sting {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BullCharging {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_IcarusWings {
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_SuperNeutralShield {
    }

    // Parent: CNPC_TrooperNeutralVData
    pub mod CNPC_NeutralSinnerSacrificeVData {
        pub const m_flRetaliateDamage: usize = 0x16c0;
        pub const m_flVaultMiniGameTime: usize = 0x16c4;
        pub const m_flVaultMiniGameHitWindow: usize = 0x16c8;
        pub const m_flVaultMiniGameWheelScrollTime: usize = 0x16cc;
        pub const m_iVaultSuccessLightBuffDropCount: usize = 0x16d0;
        pub const m_iVaultSuccessHeavyBuffDropCount: usize = 0x16d4;
        pub const m_flVaultLightScrollTime: usize = 0x16d8;
        pub const m_flVaultWheelScrollTime: usize = 0x16dc;
        pub const m_flVaultSuccessLightsScroll: usize = 0x16e0;
        pub const m_flVaultSuccessWheelScroll: usize = 0x16e4;
        pub const m_flVaultSuccessDestroyTime: usize = 0x16e8;
        pub const m_VaultSuccessParticle: usize = 0x16f0;
        pub const m_VaultIdleLoopSound: usize = 0x17d0;
        pub const m_VaultStartActiveSound: usize = 0x17e0;
        pub const m_VaultActiveLoopSound: usize = 0x17f0;
        pub const m_VaultStartCriticalSound: usize = 0x1800;
        pub const m_VaultCriticalLoopSound: usize = 0x1810;
        pub const m_VaultHitSuccessSoundLight: usize = 0x1820;
        pub const m_VaultHitSuccessSoundHeavy: usize = 0x1830;
        pub const m_VaultHitFailSound: usize = 0x1840;
        pub const m_VaultHit01: usize = 0x1850;
        pub const m_VaultHit02: usize = 0x1860;
        pub const m_VaultHit03: usize = 0x1870;
        pub const m_VaultHit04: usize = 0x1880;
        pub const m_VaultHit05: usize = 0x1890;
        pub const m_VaultHit06: usize = 0x18a0;
        pub const m_VaultHit07: usize = 0x18b0;
        pub const m_VaultLight: usize = 0x18c0;
        pub const m_VaultLightHitWindow: usize = 0x18d0;
        pub const m_VaultWheelSuccessDing: usize = 0x18e0;
    }

    // Parent: CBaseEntity
    pub mod CPointModifierThinker {
        pub const m_hModifier: usize = 0x4a0;
        pub const m_bSendToClients: usize = 0x4b8;
    }

    // Parent: CBaseNPCMaker
    pub mod CTemplateNPCMaker {
        pub const m_iszWorldName: usize = 0x588;
        pub const m_iszSource2EntityLumpName: usize = 0x590;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_SetAnimGraphParam {
        pub const m_ParamName: usize = 0x48;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_FlashlightServices {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadelAnimatingModelEntity {
        pub const m_CCitadelRegenComponent: usize = 0xa90;
    }

    // Parent: CPhysConstraint
    pub mod CPhysLength {
        pub const m_offset: usize = 0x500;
        pub const m_vecAttach: usize = 0x518;
        pub const m_addLength: usize = 0x524;
        pub const m_minLength: usize = 0x528;
        pub const m_totalLength: usize = 0x52c;
    }

    // Parent: CBaseEntity
    pub mod CTeam {
        pub const m_aPlayerControllers: usize = 0x4a0;
        pub const m_aPlayers: usize = 0x4b8;
        pub const m_iScore: usize = 0x4d0;
        pub const m_szTeamname: usize = 0x4d4;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_Tornado_Evasion {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_HeatSinks {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Targetdummy_3 {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHookVData {
        pub const m_SelfModifier: usize = 0x1818;
        pub const m_TargetModifier: usize = 0x1828;
        pub const m_BulletAmpModifier: usize = 0x1838;
        pub const m_HookOutParticle: usize = 0x1848;
        pub const m_PrecastHookParticle: usize = 0x1928;
        pub const m_HookRetrieveParticle: usize = 0x1a08;
        pub const m_HookServerImpactParticle: usize = 0x1ae8;
        pub const m_strHookSuccessSound: usize = 0x1bc8;
        pub const m_strHookNPCSound: usize = 0x1bd8;
        pub const m_strHookAllySound: usize = 0x1be8;
        pub const m_strHookImpactGeoSound: usize = 0x1bf8;
        pub const m_flTrooperHitRadius: usize = 0x1c08;
        pub const m_flFriendlyHookIgnoreRange: usize = 0x1c0c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_IcePath {
        pub const m_vInitialPosition: usize = 0x1070;
        pub const m_cShardGenerator: usize = 0x1080;
        pub const m_bIcePathing: usize = 0x1168;
        pub const m_qLastAngles: usize = 0x116c;
        pub const m_vLastVelocity: usize = 0x1178;
        pub const m_bFirstMovementTick: usize = 0x1184;
        pub const m_tLingerMovementControlUntilTime: usize = 0x1188;
    }

    // Parent: None
    pub mod AbilityUpgradeState_t {
        pub const m_ItemID: usize = 0x30;
        pub const m_nUpgradeInfo: usize = 0x34;
    }

    // Parent: None
    pub mod STrooperFOWEntity {
        pub const m_nEntIndex: usize = 0x30;
        pub const m_nTeam: usize = 0x34;
        pub const m_nPositionXY: usize = 0x36;
    }

    // Parent: CCitadel_Modifier_Link
    pub mod CCitadel_Modifier_Priest_Tether {
    }

    // Parent: CPointEntity
    pub mod CAI_VolumetricEventEntity {
        pub const m_iEventType: usize = 0x4a0;
        pub const m_iEventFlags: usize = 0x4a2;
        pub const m_flRadius: usize = 0x4a4;
        pub const m_hEvent: usize = 0x4a8;
        pub const m_flDuration: usize = 0x4b0;
        pub const m_iszProxyEntityName: usize = 0x4b8;
    }

    // Parent: CLogicNPCCounter
    pub mod CLogicNPCCounterAABB {
        pub const m_vDistanceOuterMins: usize = 0x720;
        pub const m_vDistanceOuterMaxs: usize = 0x72c;
        pub const m_vOuterMins: usize = 0x738;
        pub const m_vOuterMaxs: usize = 0x744;
    }

    // Parent: CServerOnlyEntity
    pub mod CLaneMarkerPath {
        pub const m_iLane: usize = 0x4a0;
        pub const m_iPath: usize = 0x4a4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Unicorn_LuminousStrikeVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_TellParticleFriendly: usize = 0x18f8;
        pub const m_TellParticleEnemy: usize = 0x19d8;
        pub const m_TellParticle: usize = 0x1ab8;
        pub const m_EnemyHitParticle: usize = 0x1b98;
        pub const m_FluxStrikeCast: usize = 0x1c78;
        pub const m_strExplodeSound: usize = 0x1d58;
        pub const m_strTellSound: usize = 0x1d68;
        pub const m_strHitSound: usize = 0x1d78;
        pub const m_BuffModifier: usize = 0x1d88;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Fencer_PrimaryWeapon_VData {
        pub const m_strSwipeTracerParticleRight: usize = 0x19c8;
        pub const m_strSwipeTracerParticleRightMove: usize = 0x1aa8;
        pub const m_strSwipeTracerParticleLeft: usize = 0x1b88;
        pub const m_flMoveSlashThreshold: usize = 0x1c68;
        pub const m_vecSlashInfos: usize = 0x1c70;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IceDome {
        pub const m_hBlocker: usize = 0xd0;
        pub const m_hFriendlyAura: usize = 0xd4;
        pub const m_hEnemyAura: usize = 0xd8;
        pub const m_nParticleIndex: usize = 0xdc;
        pub const m_flStartTime: usize = 0xe0;
        pub const m_vOrigin: usize = 0x2e8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Wraith_RapidFireVData {
        pub const m_RapidFireParticle: usize = 0x750;
    }

    // Parent: None
    pub mod CPulseCell_Outflow_CycleOrderedInstanceState_t {
        pub const m_nNextIndex: usize = 0x0;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_PestilenceDrone {
    }

    // Parent: CTriggerModifier
    pub mod CCitadelIdolReturnTrigger {
        pub const m_CCitadelMinimapComponent: usize = 0x908;
    }

    // Parent: CPhysicsProp
    pub mod CPhysicsPropRespawnable {
        pub const m_vOriginalSpawnOrigin: usize = 0xd60;
        pub const m_vOriginalSpawnAngles: usize = 0xd6c;
        pub const m_vOriginalMins: usize = 0xd78;
        pub const m_vOriginalMaxs: usize = 0xd84;
        pub const m_flRespawnDuration: usize = 0xd90;
    }

    // Parent: CBeam
    pub mod CEnvBeam {
        pub const m_active: usize = 0x820;
        pub const m_spriteTexture: usize = 0x828;
        pub const m_iszStartEntity: usize = 0x830;
        pub const m_iszEndEntity: usize = 0x838;
        pub const m_life: usize = 0x840;
        pub const m_boltWidth: usize = 0x844;
        pub const m_noiseAmplitude: usize = 0x848;
        pub const m_speed: usize = 0x84c;
        pub const m_restrike: usize = 0x850;
        pub const m_iszSpriteName: usize = 0x858;
        pub const m_frameStart: usize = 0x860;
        pub const m_vEndPointWorld: usize = 0x864;
        pub const m_vEndPointRelative: usize = 0x870;
        pub const m_radius: usize = 0x87c;
        pub const m_TouchType: usize = 0x880;
        pub const m_iFilterName: usize = 0x888;
        pub const m_hFilter: usize = 0x890;
        pub const m_iszDecal: usize = 0x898;
        pub const m_OnTouchedByEntity: usize = 0x8a0;
    }

    // Parent: CLightEntity
    pub mod CLightSpotEntity {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadel_DoorwayPortalBacksideBlocker {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierVData_SetModelScale {
        pub const m_flScale: usize = 0x750;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon_ScalingAltFire
    pub mod CCitadel_Ability_Werewolf_ClawWeapon {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Drifter_BloodBlast {
        pub const m_SandEffect: usize = 0x1770;
        pub const m_vecHitTargets: usize = 0x1778;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_LoveBitesVData {
        pub const m_BuildUpModifier: usize = 0x1818;
        pub const m_DamageProcModifier: usize = 0x1828;
        pub const m_ImpactParticle: usize = 0x1838;
        pub const m_strAttackerHitSound: usize = 0x1918;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Thumper_1 {
        pub const m_vecHitEntities: usize = 0xf70;
        pub const m_vecAimPos: usize = 0xf88;
        pub const m_vecAimNormal: usize = 0xf94;
        pub const m_flPushForce: usize = 0xfa0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GenericPerson_3 {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityRestorativeGooVData {
        pub const m_RestorativeGooParticle: usize = 0x1818;
        pub const m_RestorativeGooSelfParticle: usize = 0x18f8;
        pub const m_RestorativeGooModifier: usize = 0x19d8;
        pub const m_SelfCubeModelSwapModifier: usize = 0x19e8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Chrono_TimeWallVData {
        pub const m_AuraModifier: usize = 0x1818;
        pub const m_TimeWallParticle: usize = 0x1828;
        pub const m_TimeWallChargeParticle: usize = 0x1908;
        pub const m_TimeWallHitParticle: usize = 0x19e8;
        pub const m_TimeWallHitTimerParticle: usize = 0x1ac8;
        pub const m_strWallCreated: usize = 0x1ba8;
        pub const m_strChargeUpSound: usize = 0x1bb8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RocketBarrageVolleyVData {
        pub const m_strFireSound: usize = 0x750;
        pub const m_RocketLaunchParticle: usize = 0x760;
        pub const m_RocketLaunchAmbientParticle: usize = 0x840;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Bull_Leap_BoostingVData {
        pub const m_BoostTrailParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PristineEmblem_VData {
        pub const m_TracerParticle: usize = 0x750;
        pub const m_ParticleModifier: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_Tier3Boss_Base
    pub mod CCitadel_Modifier_Tier3Boss_Laser_Debuff {
    }

    // Parent: CBaseEntity
    pub mod CCitadelBaseAbility {
        pub const m_vecIntrinsicModifiers: usize = 0x578;
        pub const m_pCastDelayAutoModifier: usize = 0x590;
        pub const m_pChannelAutoModifier: usize = 0x5a8;
        pub const m_strUsedCastGraphParam: usize = 0x5c0;
        pub const m_nCastParamNeedsResetTick: usize = 0x5c8;
        pub const m_bIsCoolingDownInternal: usize = 0x5d0;
        pub const m_flCancelMashProtectionEndTime: usize = 0x5d4;
        pub const m_flCancelLockoutEndTime: usize = 0x5d8;
        pub const m_bChanneling: usize = 0x5f8;
        pub const m_bInCastDelay: usize = 0x5f9;
        pub const m_bShouldBeExecuted: usize = 0x5fa;
        pub const m_bCanBeUpgraded: usize = 0x5fb;
        pub const m_eStolenInSlot: usize = 0x600;
        pub const m_nUpgradeInfo: usize = 0x610;
        pub const m_iBucketID: usize = 0x614;
        pub const m_bToggleState: usize = 0x618;
        pub const m_flCooldownStart: usize = 0x61c;
        pub const m_flCooldownEnd: usize = 0x620;
        pub const m_flCastCompletedTime: usize = 0x624;
        pub const m_flChannelStartTime: usize = 0x628;
        pub const m_flCastDelayStartTime: usize = 0x62c;
        pub const m_eAbilitySlot: usize = 0x630;
        pub const m_flPostCastDelayEndTime: usize = 0x634;
        pub const m_iRemainingCharges: usize = 0x638;
        pub const m_flChargeRechargeStart: usize = 0x63c;
        pub const m_flChargeRechargeEnd: usize = 0x640;
        pub const m_flMovementControlActiveTime: usize = 0x644;
        pub const m_flSelectedChangedTime: usize = 0x648;
        pub const m_flAltCastHoldStartTime: usize = 0x64c;
        pub const m_flAltCastDoubleTapStartTime: usize = 0x650;
        pub const m_bCanBeImbued: usize = 0x654;
        pub const m_vecImbuedAbilities: usize = 0x658;
        pub const m_bSelectionModeIsAltMode: usize = 0x670;
        pub const m_flPreviousEffectiveCooldown: usize = 0x674;
    }

    // Parent: CBaseTrigger
    pub mod CTonemapTrigger {
        pub const m_tonemapControllerName: usize = 0x8e0;
        pub const m_hTonemapController: usize = 0x8e8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseDashCastAbility {
        pub const m_hAbilityToTrigger: usize = 0xf70;
        pub const m_flDashCastStartTime: usize = 0xf74;
        pub const m_vDashCastDir: usize = 0xf78;
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelPassthroughFakeWall {
        pub const m_bAllowAnyone: usize = 0x780;
        pub const m_bAllowTinyCharacters: usize = 0x781;
        pub const m_flTriggerDistanceMeters: usize = 0x784;
        pub const m_hTrigger: usize = 0x788;
        pub const m_eventOnOpen: usize = 0x790;
        pub const m_eventOnClose: usize = 0x7a8;
    }

    // Parent: CPointEntity
    pub mod CEnvShake {
        pub const m_limitToEntity: usize = 0x4a0;
        pub const m_Amplitude: usize = 0x4a8;
        pub const m_Frequency: usize = 0x4ac;
        pub const m_Duration: usize = 0x4b0;
        pub const m_Radius: usize = 0x4b4;
        pub const m_stopTime: usize = 0x4b8;
        pub const m_nextShake: usize = 0x4bc;
        pub const m_currentAmp: usize = 0x4c0;
        pub const m_maxForce: usize = 0x4c4;
        pub const m_pShakeController: usize = 0x4d0;
        pub const m_shakeCallback: usize = 0x4d8;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Necro_Coffin {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Barrier {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierDruidLeechSeedVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_MageWalk {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Mirage_FireBeetles {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Gunslinger_SalvoVData {
        pub const m_BulletWarningParticle: usize = 0x1818;
        pub const m_ProcWatcherModifier: usize = 0x18f8;
        pub const m_VictimWarningModifier: usize = 0x1908;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_EmpowerBullet {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Viper_Ability04VData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_PetrifyModifier: usize = 0x18f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_WreckerTeleport {
        pub const m_hProjectile: usize = 0xf78;
        pub const m_flArrowSpeed: usize = 0xf7c;
        pub const m_flSnapAnglesBackTime: usize = 0xf80;
        pub const m_flCastTimeDamage: usize = 0xf84;
        pub const m_flCastTime: usize = 0xf88;
        pub const m_bNeedsExplosion: usize = 0xf8c;
        pub const m_vProjectileRemovedOrigin: usize = 0xf90;
        pub const m_angCasterAnglesAtCastTime: usize = 0xf9c;
        pub const m_flTravelDistance: usize = 0xfa8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_IceDomeVData {
        pub const m_IceDomeModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPowerJumpVData {
        pub const m_JumpParticle: usize = 0x1818;
        pub const m_InAirModifier: usize = 0x18f8;
        pub const m_PowerJumpModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ScalingPowerUpVData {
        pub const m_vecModifierValues: usize = 0x750;
        pub const m_flTimeMin: usize = 0x768;
        pub const m_flTimeMax: usize = 0x76c;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_TechRange {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CModifierVData {
        pub const m_flDuration: usize = 0x28;
        pub const m_bKeepMaximumDurationOnRefresh: usize = 0x38;
        pub const m_strParticleEffect: usize = 0x40;
        pub const m_strParticleEffectConfig: usize = 0x120;
        pub const m_strParticleStatusEffect: usize = 0x128;
        pub const m_strParticleStatusEffectConfig: usize = 0x208;
        pub const m_strScreenParticleEffect: usize = 0x210;
        pub const m_strScreenParticleEffectConfig: usize = 0x2f0;
        pub const m_nStatusEffectPriority: usize = 0x2f8;
        pub const m_vecRenderAttributes: usize = 0x300;
        pub const m_sStartSound: usize = 0x318;
        pub const m_sAmbientLoopingSound: usize = 0x328;
        pub const m_nAmbientLoopingSoundSource: usize = 0x338;
        pub const m_nAmbientLoopingSoundRecipients: usize = 0x33c;
        pub const m_sEndSound: usize = 0x340;
        pub const m_nEnabledStateMask: usize = 0x350;
        pub const m_nDisabledStateMask: usize = 0x378;
        pub const m_nAttributes: usize = 0x3a0;
        pub const m_vecScriptValues: usize = 0x3a8;
        pub const m_vecScriptEventHandlers: usize = 0x3c0;
        pub const m_nDisableGroupsMask: usize = 0x3d8;
        pub const m_bIsHidden: usize = 0x3dc;
        pub const m_eHiddenType: usize = 0x3e0;
        pub const m_sLocalizationName: usize = 0x3e8;
        pub const m_eDebuffType: usize = 0x3f0;
        pub const m_bAutomaticallyDecayStacks: usize = 0x3f4;
        pub const m_bAllowApplicationPrediction: usize = 0x3f5;
    }

    // Parent: CBaseEntity
    pub mod CPathAccompany {
        pub const m_flPathLength: usize = 0x4a0;
        pub const m_vecNodes: usize = 0x4a8;
        pub const m_flLastPathRecalc: usize = 0x4c0;
        pub const m_xLastParentTransform: usize = 0x4d0;
        pub const m_properties: usize = 0x4f0;
        pub const m_OnNpcStartedPath: usize = 0x510;
        pub const m_OnNpcCompletedPath: usize = 0x528;
        pub const m_OnNpcBreakFromPath: usize = 0x540;
    }

    // Parent: None
    pub mod CTestPulseIOEntityNameStringArgs_t {
        pub const nameA: usize = 0x0;
        pub const strValueB: usize = 0x8;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_YakuzaGangster {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerCallback {
    }

    // Parent: CCitadelModifierAura
    pub mod CModifier_Drifter_Darkness_Target {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_BaseHeldItemVData {
        pub const m_flBaseFallrate: usize = 0x1818;
        pub const m_ItemModel: usize = 0x1820;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fortuna_Ability03 {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_SkyRunner_PrimaryWeapon {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_BatSwarmVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_GainedBatParticle: usize = 0x1828;
        pub const m_ExplodeParticle: usize = 0x1908;
        pub const m_BatSwarmChannelParticle: usize = 0x19e8;
        pub const m_strFireBatSound: usize = 0x1ac8;
        pub const m_strGainedBatSound: usize = 0x1ad8;
        pub const m_strChannelEndSound: usize = 0x1ae8;
        pub const m_bAllowLockOn: usize = 0x1af8;
        pub const m_bAllowSatVolume: usize = 0x1af9;
        pub const m_bAllowRetarget: usize = 0x1afa;
        pub const m_flBatTickRate: usize = 0x1afc;
        pub const m_flBatLifetime: usize = 0x1b00;
        pub const m_flTrackingAngularStrengthMin: usize = 0x1b04;
        pub const m_flTrackingAngularStrengthMax: usize = 0x1b08;
        pub const m_flBatRetargetRadius: usize = 0x1b0c;
        pub const m_flCurlNoiseStrength: usize = 0x1b10;
        pub const m_flCurlNoiseMinFrequency: usize = 0x1b14;
        pub const m_flCurlNoiseMaxFrequency: usize = 0x1b18;
        pub const m_DistanceToAccuracyCurve: usize = 0x1b20;
        pub const m_SatVolumeCastDelayRadiusCurve: usize = 0x1b60;
        pub const aimColorDesat: usize = 0x1ba0;
        pub const aimColorSat: usize = 0x1ba4;
        pub const aimColorOutline: usize = 0x1ba8;
        pub const m_flSatVolumePulsePerBat: usize = 0x1bac;
        pub const m_flSatVolumeInnerConeSize: usize = 0x1bb0;
        pub const m_flLowTickRateDistCheck: usize = 0x1bb4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GangActivity_Cancel {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Gunslinger_DemonCarbineVData {
        pub const m_TracerParticle: usize = 0x750;
        pub const m_FullyChargedParticle: usize = 0x830;
        pub const m_strFullyCharged: usize = 0x910;
        pub const m_strShotSound: usize = 0x920;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Base_DOT_VData {
        pub const m_sDOTParticle: usize = 0x750;
    }

    // Parent: CSoundOpvarSetPointEntity
    pub mod CSoundOpvarSetAutoRoomEntity {
        pub const m_traceResults: usize = 0x618;
        pub const m_doorwayPairs: usize = 0x630;
        pub const m_flSize: usize = 0x648;
        pub const m_flHeightTolerance: usize = 0x64c;
        pub const m_flSizeSqr: usize = 0x650;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Outflow_ListenForEntityOutput {
        pub const m_OnFired: usize = 0x48;
        pub const m_OnCanceled: usize = 0x90;
        pub const m_strEntityOutput: usize = 0xd8;
        pub const m_strEntityOutputParam: usize = 0xe0;
        pub const m_bListenUntilCanceled: usize = 0xe8;
    }

    // Parent: CBreakable
    pub mod CPushable {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ShadowStrike {
        pub const m_tAttackWindowStart: usize = 0xf78;
    }

    // Parent: CPointEntity
    pub mod CRotatorTarget {
        pub const m_OnArrivedAt: usize = 0x4a0;
        pub const m_eSpace: usize = 0x4b8;
    }

    // Parent: CLogicalEntity
    pub mod CPhysicsEntitySolver {
        pub const m_hMovingEntity: usize = 0x4b8;
        pub const m_hPhysicsBlocker: usize = 0x4bc;
        pub const m_separationDuration: usize = 0x4c0;
        pub const m_cancelTime: usize = 0x4c4;
    }

    // Parent: CLogicalEntity
    pub mod CLogicCollisionPair {
        pub const m_nameAttach1: usize = 0x4a0;
        pub const m_nameAttach2: usize = 0x4a8;
        pub const m_includeHierarchy: usize = 0x4b0;
        pub const m_supportMultipleEntitiesWithSameName: usize = 0x4b1;
        pub const m_disabled: usize = 0x4b2;
        pub const m_succeeded: usize = 0x4b3;
    }

    // Parent: CBaseEntity
    pub mod CTestEffect {
        pub const m_iLoop: usize = 0x4a0;
        pub const m_iBeam: usize = 0x4a4;
        pub const m_pBeam: usize = 0x4a8;
        pub const m_flBeamTime: usize = 0x508;
        pub const m_flStartTime: usize = 0x568;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_GunTetherVData {
        pub const m_TetherParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Invis
    pub mod CCitadel_Modifier_LurkersAmbush_Invis {
        pub const m_mapStartLookTime: usize = 0x468;
        pub const m_flStartSpotted: usize = 0x490;
    }

    // Parent: CCitadel_Modifier_Burning
    pub mod CCitadel_Modifier_Tokamak_HeatSinks_DOT {
        pub const m_flLastBurnTime: usize = 0xd0;
        pub const m_flScaledDPS: usize = 0xd4;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityStompVData {
        pub const m_StompParticle: usize = 0x1818;
        pub const m_strStompExplosionSound: usize = 0x18f8;
        pub const m_strCastDelayLocalPlayerSound: usize = 0x1908;
        pub const m_DebuffModifier: usize = 0x1918;
        pub const m_BulletResistModifier: usize = 0x1928;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LifeDrain {
        pub const m_nFXIndex: usize = 0xd0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_UtilityUpgrade_HealthNova_VData {
        pub const m_HealingModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_GuardianWard_VData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_TrailParticle: usize = 0x830;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_TrackingProjectileApplyModifierVData {
        pub const m_ProjectileImpactParticle: usize = 0x18b8;
        pub const m_TargetModifier: usize = 0x1998;
        pub const m_FriendlyOnlyModifier: usize = 0x19a8;
        pub const m_CasterModifier: usize = 0x19b8;
    }

    // Parent: None
    pub mod CPulseCell_Outflow_ScriptedSequenceCursorState_t {
        pub const m_scriptedSequence: usize = 0x0;
    }

    // Parent: CBasePropDoor
    pub mod CPropDoorRotating {
        pub const m_vecAxis: usize = 0xed0;
        pub const m_flDistance: usize = 0xedc;
        pub const m_eSpawnPosition: usize = 0xee0;
        pub const m_eOpenDirection: usize = 0xee4;
        pub const m_eCurrentOpenDirection: usize = 0xee8;
        pub const m_eDefaultCheckDirection: usize = 0xeec;
        pub const m_flAjarAngle: usize = 0xef0;
        pub const m_angRotationAjarDeprecated: usize = 0xef4;
        pub const m_angRotationClosed: usize = 0xf00;
        pub const m_angRotationOpenForward: usize = 0xf0c;
        pub const m_angRotationOpenBack: usize = 0xf18;
        pub const m_angGoal: usize = 0xf24;
        pub const m_vecForwardBoundsMin: usize = 0xf30;
        pub const m_vecForwardBoundsMax: usize = 0xf3c;
        pub const m_vecBackBoundsMin: usize = 0xf48;
        pub const m_vecBackBoundsMax: usize = 0xf54;
        pub const m_bAjarDoorShouldntAlwaysOpen: usize = 0xf60;
        pub const m_hEntityBlocker: usize = 0xf64;
    }

    // Parent: CParticleSystem
    pub mod CEnvParticleGlow {
        pub const m_flAlphaScale: usize = 0xcf8;
        pub const m_flRadiusScale: usize = 0xcfc;
        pub const m_flSelfIllumScale: usize = 0xd00;
        pub const m_ColorTint: usize = 0xd04;
        pub const m_hTextureOverride: usize = 0xd08;
    }

    // Parent: CCitadel_Modifier_Burning
    pub mod CCitadel_Modifier_Spiritburn_DOT {
        pub const m_flLastBurnTime: usize = 0xd0;
    }

    // Parent: CLogicalEntity
    pub mod CMathRemap {
        pub const m_flInMin: usize = 0x4a0;
        pub const m_flInMax: usize = 0x4a4;
        pub const m_flOut1: usize = 0x4a8;
        pub const m_flOut2: usize = 0x4ac;
        pub const m_flOldInValue: usize = 0x4b0;
        pub const m_bEnabled: usize = 0x4b4;
        pub const m_OutValue: usize = 0x4b8;
        pub const m_OnRoseAboveMin: usize = 0x4d8;
        pub const m_OnRoseAboveMax: usize = 0x4f0;
        pub const m_OnFellBelowMin: usize = 0x508;
        pub const m_OnFellBelowMax: usize = 0x520;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Spotlight {
        pub const m_hAuraThinker: usize = 0xf70;
        pub const m_nEyeGlowFX: usize = 0xf74;
        pub const m_vLastValidAuraPosition: usize = 0xf78;
        pub const m_hWasAttachedTo: usize = 0x1008;
        pub const m_vAuraPosition: usize = 0x100c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_ChannelTether {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_BigBolt {
        pub const m_flNextShootTime: usize = 0x13f8;
        pub const m_iBoltsFired: usize = 0x13fc;
        pub const m_iRemainingBolts: usize = 0x1400;
        pub const m_bPreppingShoot: usize = 0x1404;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TetherNoConnectionVData {
        pub const m_flStatMult: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Intimidated_Debuff {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_LashGrappleEnemy_Debuff {
        pub const m_vCrashDir: usize = 0xd8;
        pub const m_vLiftTarget: usize = 0xe4;
        pub const m_flStartTime: usize = 0xf0;
        pub const m_bCrashingDown: usize = 0xf4;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_DetentionAmmo {
        pub const m_flBuildupPerBullet: usize = 0x208;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Neutral_Debuff_PushbackVData {
        pub const m_flPushSpeed: usize = 0x750;
        pub const m_flPushRange: usize = 0x754;
    }

    // Parent: CSoundOpvarSetPointBase
    pub mod CSoundOpvarSetOBBWindEntity {
        pub const m_vMins: usize = 0x548;
        pub const m_vMaxs: usize = 0x554;
        pub const m_vDistanceMins: usize = 0x560;
        pub const m_vDistanceMaxs: usize = 0x56c;
        pub const m_flWindMin: usize = 0x578;
        pub const m_flWindMax: usize = 0x57c;
        pub const m_flWindMapMin: usize = 0x580;
        pub const m_flWindMapMax: usize = 0x584;
    }

    // Parent: CCitadelPlayerPawnBase
    pub mod CCitadelPlayerPawn {
        pub const m_arrGoldSources: usize = 0xdf0;
        pub const m_angClientCamera: usize = 0xea4;
        pub const m_angEyeAngles: usize = 0xeb0;
        pub const m_angLockedEyeAngles: usize = 0xebc;
        pub const m_nLevel: usize = 0xec8;
        pub const m_nCurrencies: usize = 0xecc;
        pub const m_nSpentCurrencies: usize = 0xee4;
        pub const m_nNumHeroChangesUsed: usize = 0xefc;
        pub const m_flRespawnTime: usize = 0xf00;
        pub const m_flLastSpawnTime: usize = 0xf04;
        pub const m_bInRegenerationZone: usize = 0xf08;
        pub const m_bInItemShopZone: usize = 0xf09;
        pub const m_bInHideoutZone: usize = 0xf0a;
        pub const m_timeRevealedOnMinimapByNPC: usize = 0xf0c;
        pub const m_vecFullSellPriceItems: usize = 0xf10;
        pub const m_vecFullSellPriceAbilityUpgrades: usize = 0xf28;
        pub const m_vecQuickbuyQueue: usize = 0xf88;
        pub const m_vecQuickbuySellQueue: usize = 0xfb8;
        pub const m_bQuickbuyAutoPurchase: usize = 0xfd0;
        pub const m_unQuickbuyAutoPurchaseRequest: usize = 0xfd4;
        pub const m_bQuickbuyAutoQueueBuild: usize = 0xfd8;
        pub const m_vecRestrictedToItems: usize = 0x1008;
        pub const m_unHeroBuildID: usize = 0x1020;
        pub const m_sHeroBuildSerialized: usize = 0x1028;
        pub const m_hViewEntityForObserver: usize = 0x1030;
        pub const m_bNetworkDisconnected: usize = 0x1034;
        pub const m_bLearningAbility: usize = 0x1035;
        pub const m_nFlashStartTick: usize = 0x1038;
        pub const m_nFlashMaxStartTick: usize = 0x103c;
        pub const m_nFlashFadeStartTick: usize = 0x1040;
        pub const m_nFlashEndTick: usize = 0x1044;
        pub const m_nFlashMaxAlpha: usize = 0x1048;
        pub const m_nDeducedLane: usize = 0x104c;
        pub const m_hEnemyPlayerAimTarget: usize = 0x1050;
        pub const m_ItemDraftRoundState: usize = 0x1058;
        pub const m_bDismissedReportCard: usize = 0x10f8;
        pub const m_flCurrentHealingAmount: usize = 0x10fc;
        pub const m_hAbilityRequiresDebounce: usize = 0x1100;
        pub const m_CCitadelAbilityComponent: usize = 0x1108;
        pub const m_CCitadelHeroComponent: usize = 0x1370;
        pub const m_CCitadelRegenComponent: usize = 0x13b0;
        pub const m_CCitadelMinimapComponent: usize = 0x1510;
        pub const m_bHasShopOpen: usize = 0x1530;
        pub const m_eCurrentPingLocation: usize = 0x1534;
        pub const m_flLastRegenThinkTime: usize = 0x1bf8;
        pub const m_nBulletsFiredAtUs: usize = 0x1c30;
        pub const m_nBulletsHitOnUs: usize = 0x1c34;
        pub const m_nHeadshotsOnUs: usize = 0x1c38;
        pub const m_flLastGameStatsRecorded: usize = 0x1c3c;
        pub const m_flUnusedGoldRemainder: usize = 0x1c40;
        pub const m_flUnusedAbilityRemainder: usize = 0x1c44;
        pub const m_nBulletsFiredAtEnemyHeroes: usize = 0x1c48;
        pub const m_nBulletsHitOnEnemyHeroes: usize = 0x1c4c;
        pub const m_nHeadshotsOnEnemyHeroes: usize = 0x1c50;
        pub const m_nLuckyShotsOnEnemyHeroes: usize = 0x1c54;
        pub const m_nBulletsHitOnImmobileEnemyHeroes: usize = 0x1c58;
        pub const m_nHeadshotsOnImmobileEnemyHeroes: usize = 0x1c5c;
        pub const m_hEnemyHeroClientAimedAtAttackTime: usize = 0x1c60;
        pub const m_bHasOverrideSpawnPos: usize = 0x1c64;
        pub const m_vecOverrideSpawnPos: usize = 0x1c68;
        pub const m_iTrooperWaveEventCount: usize = 0x1c74;
        pub const m_iTrooperWaveNumber: usize = 0x1c78;
        pub const m_iPrevTrooperWaveEventCount: usize = 0x1c7c;
        pub const m_iPrevTrooperWaveNumber: usize = 0x1c80;
        pub const m_bHasStartedPlaying: usize = 0x1c84;
        pub const m_hRevengeTarget: usize = 0x1c88;
        pub const m_flLastHurtTimeByEnemyHero: usize = 0x1c9c;
        pub const m_flLastHurtByNeutral: usize = 0x1ca0;
        pub const m_flLastHurtByEnemyNPC: usize = 0x1ca4;
        pub const m_flLastTimeLookedAtByDirector: usize = 0x1ca8;
        pub const m_ragdollDamage: usize = 0x1cb0;
        pub const m_sInCombat: usize = 0x1d68;
        pub const m_sPlayerDamageTaken: usize = 0x1d80;
        pub const m_sPlayerDamageDealt: usize = 0x1d98;
        pub const m_eZipLineLaneColor: usize = 0x1e6c;
        pub const m_bCanBecomeRagdoll: usize = 0x1e70;
        pub const m_blindUntilTime: usize = 0x1e74;
        pub const m_blindStartTime: usize = 0x1e78;
        pub const m_nSuccessiveDucks: usize = 0x1e7c;
        pub const m_flLastDuckTime: usize = 0x1e80;
        pub const m_bAnimGraphMovementClipped: usize = 0x1e84;
        pub const m_bAnimGraphMovementDisableGravity: usize = 0x1e85;
        pub const m_bAnimGraphMovementDirectAirControl: usize = 0x1e86;
        pub const m_flPredTimeSlowedStart: usize = 0x1e88;
        pub const m_flPredTimeSlowedEnd: usize = 0x1e8c;
        pub const m_flPredSlowSpeed: usize = 0x1e90;
        pub const m_flTimeSlowedStart: usize = 0x1e94;
        pub const m_flTimeSlowedEnd: usize = 0x1ea4;
        pub const m_flSlowSpeed: usize = 0x1eb4;
        pub const m_flForceInCombatAnimsUntilTime: usize = 0x1ec4;
        pub const m_arrPreventAbilityLearning: usize = 0x1ec8;
        pub const m_iCurSlowSlot: usize = 0x1ecc;
        pub const m_nRespawnParticleIndex: usize = 0x1ed4;
        pub const m_nShoppingParticle: usize = 0x1ed8;
        pub const m_pBot: usize = 0x1f08;
        pub const m_bLocoLeanTriggeredForDirection: usize = 0x2190;
        pub const m_bLocoRunToStopCanTrigger: usize = 0x2191;
        pub const m_flCrouchFraction: usize = 0x2194;
        pub const m_flCrouchSpeed: usize = 0x2198;
        pub const m_fidgetTime: usize = 0x219c;
        pub const m_vShootTestOffsetStanding: usize = 0x21a0;
        pub const m_vShootTestOffsetCrouching: usize = 0x21ac;
        pub const m_leanStartTime: usize = 0x21b8;
        pub const m_nLastUnpredictableMovementTick: usize = 0x21bc;
        pub const m_nAudioEnclosure: usize = 0x2200;
        pub const m_bAudioHasSkyExposure: usize = 0x2201;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_DivineBarrier {
    }

    // Parent: CAI_Navigator
    pub mod CAI_CitadelNavigator {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_StealLifeVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_CastParticle: usize = 0x1828;
        pub const m_CastLifeLeechParticle: usize = 0x1908;
        pub const m_DamageTargetParticle: usize = 0x19e8;
        pub const m_strSlashSound: usize = 0x1ac8;
        pub const m_strHitConfirmSound: usize = 0x1ad8;
        pub const m_strKillConfirmSound: usize = 0x1ae8;
        pub const m_bAllowFloating: usize = 0x1af8;
    }

    // Parent: CCitadel_Modifier_Sleep
    pub mod CCitadel_Modifier_SleepBomb_Asleep {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LockDown_Debuff {
        pub const m_vEscapeTarget: usize = 0x3d0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_BurrowVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_BurrowStartParticle: usize = 0x18f8;
        pub const m_BurrowEndParticle: usize = 0x19d8;
        pub const m_BurrowInGroundParticle: usize = 0x1ab8;
        pub const m_BurrowModifier: usize = 0x1b98;
        pub const m_SpinModifier: usize = 0x1ba8;
        pub const m_strBurrowEndSound: usize = 0x1bb8;
        pub const m_flChannelEndEnemyPopUpForce: usize = 0x1bc8;
        pub const m_flChannelEndEnemyPopUpCylinderHeight: usize = 0x1bcc;
        pub const m_cameraSpinStart: usize = 0x1bd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BulletFlurry {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SmokeBomb {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hornet_Snipe {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bomber_Ability02 {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Upgrade_KineticSashTriggered {
        pub const m_nBonusClip: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SilenceProc_Debuff {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_SpellShieldVData {
        pub const m_SpellShieldBuffModifier: usize = 0x18b8;
    }

    // Parent: None
    pub mod PhysicsRagdollPose_t {
        pub const m_Transforms: usize = 0x8;
        pub const m_hOwner: usize = 0x20;
        pub const m_bSetFromDebugHistory: usize = 0x24;
    }

    // Parent: CEntityComponent
    pub mod CPropDataComponent {
        pub const m_flDmgModBullet: usize = 0x10;
        pub const m_flDmgModClub: usize = 0x14;
        pub const m_flDmgModExplosive: usize = 0x18;
        pub const m_flDmgModFire: usize = 0x1c;
        pub const m_iszPhysicsDamageTableName: usize = 0x20;
        pub const m_iszBasePropData: usize = 0x28;
        pub const m_nInteractions: usize = 0x30;
        pub const m_bSpawnMotionDisabled: usize = 0x34;
        pub const m_nDisableTakePhysicsDamageSpawnFlag: usize = 0x38;
        pub const m_nMotionDisabledSpawnFlag: usize = 0x3c;
    }

    // Parent: CTriggerOnce
    pub mod CScriptTriggerOnce {
        pub const m_vExtent: usize = 0x8f8;
    }

    // Parent: CLightEntity
    pub mod CLightOrthoEntity {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_CultistSacrifice {
    }

    // Parent: CCitadel_Item
    pub mod CItem_ResonantHealing {
        pub const m_bForceModUpdate: usize = 0xfa4;
        pub const m_iRegenStacks: usize = 0xfa8;
    }

    // Parent: CCitadel_Modifier_Knockdown
    pub mod CCitadel_Modifier_CatapultStun {
        pub const m_bLanded: usize = 0xf8;
    }

    // Parent: CPointClientUIWorldPanel
    pub mod CInWorldKeyBindPanel {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_PickupItemSpawnerVData {
        pub const m_hModel: usize = 0x28;
        pub const m_flModelScale: usize = 0x108;
        pub const m_InactiveParticle: usize = 0x110;
        pub const m_ActiveParticle: usize = 0x1f0;
        pub const m_vecPrimaryPickups: usize = 0x2d0;
        pub const m_sSinglePickupOverride: usize = 0x2e8;
        pub const m_flInitialSpawnTime: usize = 0x2f8;
        pub const m_flRespawnTime: usize = 0x2fc;
        pub const m_flInitialSpawnTimeTest: usize = 0x300;
        pub const m_flRespawnTimeTest: usize = 0x304;
        pub const m_bRespawnTimerStartsAfterPickup: usize = 0x308;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PunkgoatWaitingToPull {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Swan_FeatherBoomerang {
        pub const m_vecHitTargetList: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySpiderShieldVData {
        pub const m_BuffModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_AnthemBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RestorativeGoo {
        pub const m_flEarliestBreakoutTime: usize = 0xd0;
        pub const m_flTotalPendingHeal: usize = 0xd4;
        pub const m_hGooCube: usize = 0x758;
        pub const m_flBreakoutPercentage: usize = 0x75c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_IcePathVData {
        pub const m_IcePathModifier: usize = 0x1818;
        pub const m_flMomentumDecayRate: usize = 0x1828;
        pub const m_flMomentumWeight: usize = 0x182c;
        pub const m_flMaxPitchChange: usize = 0x1830;
        pub const m_flMaxPitchUp: usize = 0x1834;
        pub const m_flMaxPitchDown: usize = 0x1838;
        pub const m_flMaxHeight: usize = 0x183c;
        pub const m_flForwardAngleBias: usize = 0x1840;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Chrono_KineticCarbineVData {
        pub const m_flShotTimeScaleLingerDuration: usize = 0x1818;
        pub const m_ChargingModifier: usize = 0x1820;
        pub const m_DebuffModifier: usize = 0x1830;
        pub const m_cameraKineticCarbineShotFired: usize = 0x1840;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_BloodBomb {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SpeedBoost {
        pub const m_flSpeedBoostOverride: usize = 0xd0;
    }

    // Parent: None
    pub mod CPulseCell_LimitCountInstanceState_t {
        pub const m_nCurrentCount: usize = 0x0;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerTeleport {
        pub const m_iLandmark: usize = 0x8e0;
        pub const m_bUseLandmarkAngles: usize = 0x8e8;
        pub const m_bMirrorPlayer: usize = 0x8e9;
        pub const m_bCheckDestIfClearForPlayer: usize = 0x8ea;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Camouflage {
    }

    // Parent: CBaseModelEntity
    pub mod CFuncWall {
        pub const m_nState: usize = 0x780;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bebop_Hook_BulletAmp {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_BaseProjectileAOEModifierVData {
        pub const m_AOEModifier: usize = 0x18b8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier2Boss_LaserBeamVData {
        pub const m_LaserLeft: usize = 0x1818;
        pub const m_LaserMid: usize = 0x1828;
        pub const m_LaserRight: usize = 0x1838;
        pub const m_LaserCharge: usize = 0x1848;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SuperNeutralCharge {
        pub const m_bPreparing: usize = 0x1370;
        pub const m_bTackling: usize = 0x1371;
        pub const m_flTackleStartTime: usize = 0x1374;
        pub const m_flTackleDuration: usize = 0x1378;
        pub const m_vecTackleDir: usize = 0x137c;
        pub const m_vecLastPosition: usize = 0x1388;
        pub const m_nStuckFramesCount: usize = 0x1394;
        pub const m_vecHitEnemies: usize = 0x1398;
        pub const m_flPrepareStartTime: usize = 0x13b0;
        pub const m_nDistancePreview: usize = 0x13b4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CanDamageMidBoss {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ZiplineSpeedVData {
        pub const m_flPercentageMultiplierStart: usize = 0x750;
        pub const m_flPercentageMultiplierEnd: usize = 0x754;
        pub const m_flRampUpTime: usize = 0x758;
    }

    // Parent: CBaseEntity
    pub mod CGameRulesProxy {
    }

    // Parent: CBaseEntity
    pub mod CInfoLadderDismount {
    }

    // Parent: None
    pub mod CPulseServerFuncs {
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_Escort {
    }

    // Parent: CPointEntity
    pub mod CMessage {
        pub const m_iszMessage: usize = 0x4a0;
        pub const m_MessageVolume: usize = 0x4a8;
        pub const m_MessageAttenuation: usize = 0x4ac;
        pub const m_Radius: usize = 0x4b0;
        pub const m_sNoise: usize = 0x4b8;
        pub const m_OnShowMessage: usize = 0x4c0;
    }

    // Parent: CPointEntity
    pub mod CPointVelocitySensor {
        pub const m_hTargetEntity: usize = 0x4a0;
        pub const m_vecAxis: usize = 0x4a4;
        pub const m_bEnabled: usize = 0x4b0;
        pub const m_fPrevVelocity: usize = 0x4b4;
        pub const m_flAvgInterval: usize = 0x4b8;
        pub const m_Velocity: usize = 0x4c0;
    }

    // Parent: None
    pub mod TrackedStatNetworkData_t {
        pub const unStatID: usize = 0x30;
        pub const unStatValue: usize = 0x34;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_MaulingLeapVData {
        pub const m_LeapingSpeedCurve: usize = 0x1818;
        pub const m_LeapingUpCurve: usize = 0x1858;
        pub const m_flVelocityCarryoverOnHit: usize = 0x1898;
        pub const m_flVelocityCarryoverOnMiss: usize = 0x189c;
        pub const m_flFracToAllowUp: usize = 0x18a0;
        pub const m_LeapHitImpact: usize = 0x18a8;
        pub const m_UltLeapCastParticle: usize = 0x1988;
        pub const m_LeapHitSound: usize = 0x1a68;
        pub const m_LeapingModifier: usize = 0x1a78;
        pub const m_DebuffModifier: usize = 0x1a88;
        pub const m_strAG2SuccessHeroState: usize = 0x1a98;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidPlantInvisBushVData {
        pub const m_InvisBushModel: usize = 0x1818;
        pub const m_InvisAreaModifier: usize = 0x18f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Operative_Revelation_VData {
        pub const m_CasterModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_Tornado_HoldInPlace {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Gunslinger_DemonMark {
        pub const m_flNextSearchTime: usize = 0xf70;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Urn_Debuff {
        pub const m_bProcApplied: usize = 0xd0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_Pounce_VData {
        pub const m_LeapModifier: usize = 0x1818;
        pub const m_ActiveBuff: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
        pub const m_DoublePounceModifier: usize = 0x1848;
        pub const m_AttackParticle: usize = 0x1858;
        pub const m_FlashParticle: usize = 0x1938;
        pub const m_CastParticle: usize = 0x1a18;
        pub const m_ExplodeSlowParticle: usize = 0x1af8;
        pub const m_PrimaryHitParticle: usize = 0x1bd8;
        pub const m_AttackSound: usize = 0x1cb8;
        pub const m_strExplodeSound: usize = 0x1cc8;
        pub const m_flAttackTimePhase01: usize = 0x1cd8;
        pub const m_flAttackTimePhase02: usize = 0x1cdc;
        pub const m_flAllyMinTargetRange: usize = 0x1ce0;
        pub const m_flTargetVerticalOffset: usize = 0x1ce4;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Guiding_ArrowVData {
        pub const m_GlowEnemeyModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NullificationAuraAOE_VData {
        pub const m_TargetModifier: usize = 0x750;
        pub const m_PurgeCastParticle: usize = 0x760;
        pub const m_PurgeSound: usize = 0x840;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_WeaponPowerForHealthVData {
        pub const m_BuffModifier: usize = 0x18b8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier3Boss_DropBombsVData {
        pub const m_AmberExplodeParticle: usize = 0x1818;
        pub const m_AmberAoeWarningParticle: usize = 0x18f8;
        pub const m_AmberAoeWarningGroundParticle: usize = 0x19d8;
        pub const m_SapphExplodeParticle: usize = 0x1ab8;
        pub const m_SapphAoeWarningParticle: usize = 0x1b98;
        pub const m_SapphAoeWarningGroundParticle: usize = 0x1c78;
        pub const m_AmberAOEWarningSound: usize = 0x1d58;
        pub const m_AmberAOEImpactSound: usize = 0x1d68;
        pub const m_SapphireAOEWarningSound: usize = 0x1d78;
        pub const m_SapphireAOEImpactSound: usize = 0x1d88;
        pub const m_strLaunchSound: usize = 0x1d98;
        pub const m_strLandSound: usize = 0x1da8;
        pub const m_strExplodeSound: usize = 0x1db8;
        pub const m_CurseModifier: usize = 0x1dc8;
        pub const m_flExplodeRadius: usize = 0x1dd8;
        pub const m_flBombOffsets: usize = 0x1ddc;
        pub const m_flBaseDamage: usize = 0x1de0;
        pub const m_flDamageNonPlayer: usize = 0x1de4;
        pub const m_flMaxHealthPctDamage: usize = 0x1de8;
        pub const m_flDebuffDuration: usize = 0x1dec;
        pub const m_flCooldownMax: usize = 0x1df0;
        pub const m_flCooldownMin: usize = 0x1df4;
        pub const m_flDetonationTimeMax: usize = 0x1df8;
        pub const m_flDetonationTimeMin: usize = 0x1dfc;
        pub const m_flBossHealthMax: usize = 0x1e00;
        pub const m_flBossHealthMin: usize = 0x1e04;
        pub const m_flBombDropDist: usize = 0x1e08;
        pub const m_flWarningOffset: usize = 0x1e0c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierTier2BossLaserChargeVData {
        pub const m_strAttachmentPoints: usize = 0x750;
        pub const m_BeamChargingEffect: usize = 0x768;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HealEntitiy {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DamageResistanceVData {
        pub const m_flDamageResistancePerSecond: usize = 0x750;
        pub const m_flTickInterval: usize = 0x754;
        pub const m_flDamageResistanceBonusPerGameMinute: usize = 0x758;
    }

    // Parent: None
    pub mod EngineCountdownTimer {
        pub const m_duration: usize = 0x8;
        pub const m_timestamp: usize = 0xc;
        pub const m_timescale: usize = 0x10;
    }

    // Parent: None
    pub mod CBaseModelEntityAPI {
    }

    // Parent: CTriggerMultiple
    pub mod CScriptTriggerMultiple {
        pub const m_vExtent: usize = 0x8f8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ControlPointCapturerAura {
        pub const m_particle: usize = 0x108;
        pub const m_hCP: usize = 0x10c;
    }

    // Parent: CPointEntity
    pub mod CEnvSpark {
        pub const m_flDelay: usize = 0x4a0;
        pub const m_nMagnitude: usize = 0x4a4;
        pub const m_nTrailLength: usize = 0x4a8;
        pub const m_nType: usize = 0x4ac;
        pub const m_OnSpark: usize = 0x4b0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AIPhysics {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_HauntingSkullVData {
        pub const m_JarExplodeParticle: usize = 0x1818;
        pub const m_SkullFriendlyFoundParticle: usize = 0x18f8;
        pub const m_SkullTargetDashParticle: usize = 0x19d8;
        pub const m_SkullHitParticle: usize = 0x1ab8;
        pub const m_SkullExplodeParticle: usize = 0x1b98;
        pub const m_ResourceGainedParticle: usize = 0x1c78;
        pub const m_HeroResourceGainedParticle: usize = 0x1d58;
        pub const m_SkullModel: usize = 0x1e38;
        pub const m_flSkullScale: usize = 0x1f18;
        pub const m_ResourceGainedSound: usize = 0x1f20;
        pub const m_HeroResourceGainedSound: usize = 0x1f30;
        pub const m_JarExplodeSound: usize = 0x1f40;
        pub const m_SkullHitSound: usize = 0x1f50;
        pub const m_SkullKilledSound: usize = 0x1f60;
        pub const m_SkullAttackSound: usize = 0x1f70;
        pub const m_SkullLoopStartSound: usize = 0x1f80;
        pub const m_SkullLoopEndSound: usize = 0x1f90;
        pub const m_SkullLoopSound: usize = 0x1fa0;
        pub const m_SkullLastHitSound: usize = 0x1fb0;
        pub const m_AreaModifier: usize = 0x1fc0;
        pub const m_SummonModifier: usize = 0x1fd0;
        pub const m_SummonBuffModifier: usize = 0x1fe0;
        pub const m_StackingDebuffModifier: usize = 0x1ff0;
        pub const m_SlowModifier: usize = 0x2000;
        pub const m_flSkullRadius: usize = 0x2010;
        pub const m_bAllowStackingDamageFromGun: usize = 0x2014;
        pub const m_flInitialVelocityVariance: usize = 0x2018;
        pub const m_flDrag: usize = 0x201c;
        pub const m_flCurlNoiseStrength: usize = 0x2020;
        pub const m_flCurlNoiseStrengthDuringTarget: usize = 0x2024;
        pub const m_flCurlNoiseStrengthDuringFriendly: usize = 0x2028;
        pub const m_flCurlNoiseMinFrequency: usize = 0x202c;
        pub const m_flCurlNoiseMaxFrequency: usize = 0x2030;
        pub const m_flBobbingFrequency: usize = 0x2034;
        pub const m_flBobbingStrength: usize = 0x2038;
        pub const m_flFloorSpringLength: usize = 0x203c;
        pub const m_flFloorSpringStrength: usize = 0x2040;
        pub const m_flTargetForwardSpeed: usize = 0x2048;
        pub const m_flTargetHitRecoilRatio: usize = 0x2088;
        pub const m_flTargetHitRecoilRandomness: usize = 0x208c;
        pub const m_flTargetHitUpVelocity: usize = 0x2090;
        pub const m_flFriendlyChaseAcceleration: usize = 0x2094;
        pub const m_flFriendlyChaseMaxSpeed: usize = 0x2098;
        pub const m_flFriendlyChaseMinDistance: usize = 0x209c;
        pub const m_flFriendlyChaseMaxDistance: usize = 0x20a0;
        pub const m_flFriendlyChaseRandomPositionDistance: usize = 0x20a4;
        pub const m_flFriendlyChaseBufferDelay: usize = 0x20a8;
        pub const m_flPriorityTargetLingerDuration: usize = 0x20ac;
        pub const m_flSkullMeleeRange: usize = 0x20b0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_CloneSingle_Trigger {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityWreckerScrapBlastVData {
        pub const m_SprayParticle: usize = 0x1818;
        pub const m_ChannelStartParticle: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x19d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Disarmed {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BulletArmorReductionVData {
    }

    // Parent: CTeam
    pub mod CCitadelTeam {
        pub const m_flBaseObjectiveHealth: usize = 0x564;
        pub const m_vecBaseLocationX: usize = 0x568;
        pub const m_vecBaseLocationY: usize = 0x56c;
        pub const m_bHasValidBaseLocation: usize = 0x570;
        pub const m_nBossesAlive: usize = 0x590;
        pub const m_nBossesMax: usize = 0x594;
        pub const m_nFlexSlotsUnlocked: usize = 0x598;
        pub const m_nBaseGuardianLanesCleared: usize = 0x59c;
        pub const m_vecFOWEntities: usize = 0x5a0;
        pub const m_nStreetBrawlScore: usize = 0x608;
        pub const m_nStreetBrawlScoreLastRound: usize = 0x60c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ActiveReload {
        pub const m_bPlayedStartSound: usize = 0xf78;
        pub const m_bActiveReloadFailed: usize = 0xf79;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Clone_End {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_CameraDummy {
        pub const m_bCamOverrideActive: usize = 0xd0;
        pub const m_hDummy: usize = 0xd4;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PunkgoatTetheredVData {
        pub const m_RopeParticle: usize = 0x750;
        pub const m_RopeCancelParticle: usize = 0x830;
        pub const m_BleedParticle: usize = 0x910;
        pub const m_RangeIndicatorParticle: usize = 0x9f0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Swan_AcrobatVData {
        pub const m_StackBuffParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_GarbageAuraTargetModifierVData {
        pub const m_flOuterSpeedScale: usize = 0x830;
        pub const m_flSpeedScaleBias: usize = 0x834;
        pub const m_TargetLoopingSound: usize = 0x838;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHornetStingVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_HitParticle: usize = 0x1828;
        pub const m_RicochetTracerParticle: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Stunned {
        pub const m_bEnabled: usize = 0xd0;
        pub const m_nParticleIndex: usize = 0xd4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Stabilizing_Tripod {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_CharmedWraps {
        pub const m_fLastPrimingLightAttackTime: usize = 0x208;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PlayerDisconnected {
        pub const m_flTimePathUpdated: usize = 0xd0;
    }

    // Parent: None
    pub mod ItemDraftRoundState_t {
        pub const m_vecOptions: usize = 0x8;
        pub const m_nID: usize = 0x70;
        pub const m_nDraftsRemaining: usize = 0x74;
        pub const m_nDraftsTotal: usize = 0x78;
        pub const m_nRoundsRemaining: usize = 0x7c;
        pub const m_nRoundsTotal: usize = 0x80;
        pub const m_flCompletedTime: usize = 0x84;
    }

    // Parent: None
    pub mod STeamFOWEntity {
        pub const m_nEntIndex: usize = 0x30;
        pub const m_nTeam: usize = 0x34;
        pub const m_eClass: usize = 0x38;
        pub const m_iLane: usize = 0x3c;
        pub const m_eHeight: usize = 0x40;
        pub const m_bVisibleOnMap: usize = 0x41;
        pub const m_bBackdoorProtectionActive: usize = 0x42;
        pub const m_nTickHidden: usize = 0x44;
        pub const m_strEntityName: usize = 0x48;
        pub const m_nHealthPercent: usize = 0x50;
        pub const m_nPositionX: usize = 0x51;
        pub const m_nPositionY: usize = 0x52;
    }

    // Parent: CAI_Component
    pub mod CAI_LocalNavigatorBase {
    }

    // Parent: None
    pub mod CBaseModelEntityOnDamageLevelChangedArgs_t {
        pub const nHitGroup: usize = 0x0;
        pub const nDamageLevel: usize = 0x4;
        pub const nDamageLevelsRemaining: usize = 0x8;
        pub const nPrevDamageLevel: usize = 0xc;
    }

    // Parent: CBaseTriggerAbilityVData
    pub mod CCitadel_Ability_Necro_KillSummonTriggerVData {
        pub const m_ExplosionParticle: usize = 0x1838;
        pub const m_AuraModifier: usize = 0x1918;
        pub const m_ExplodeSound: usize = 0x1928;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Electric_Slippers {
    }

    // Parent: CCitadel_Item
    pub mod CItemHauntingScream {
    }

    // Parent: CBaseFilter
    pub mod CFilterLOS {
    }

    // Parent: CBaseEntity
    pub mod CPointOrient {
        pub const m_iszSpawnTargetName: usize = 0x4a0;
        pub const m_hTarget: usize = 0x4a8;
        pub const m_bActive: usize = 0x4ac;
        pub const m_nGoalDirection: usize = 0x4b0;
        pub const m_nConstraint: usize = 0x4b4;
        pub const m_flMaxTurnRate: usize = 0x4b8;
        pub const m_flLastGameTime: usize = 0x4bc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_SpotlightEffect {
        pub const m_flSlowPercent: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PunkgoatPull {
        pub const m_flDamageToDealAtEnd: usize = 0xd0;
        pub const m_flDamageLeftToDealOverPull: usize = 0xd4;
        pub const m_flDamageOverPullAccumulator: usize = 0xd8;
        pub const m_vPullToLocation: usize = 0xdc;
        pub const m_bAllowTrackTarget: usize = 0xe8;
        pub const m_flCurrentVerticalSpeed: usize = 0xec;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_SilenceContraptions {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_WreckerSalvageVData {
        pub const m_SalvageBeam: usize = 0x750;
        pub const m_ConnectBeam: usize = 0x830;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCardTossVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_SummonedCard: usize = 0x18f8;
        pub const m_ClubCardTrail: usize = 0x19d8;
        pub const m_DiamondCardTrail: usize = 0x1ab8;
        pub const m_HeartCardTrail: usize = 0x1b98;
        pub const m_SpadeCardTrail: usize = 0x1c78;
        pub const m_JokerCardTrail: usize = 0x1d58;
        pub const m_strCardSummonSound: usize = 0x1e38;
        pub const m_strCardCastSound: usize = 0x1e48;
        pub const m_ClubModifier: usize = 0x1e58;
        pub const m_DiamondModifier: usize = 0x1e68;
        pub const m_flSummonedCardStartSideOffset: usize = 0x1e78;
        pub const m_flSummonedCardSideOffsetStep: usize = 0x1e7c;
        pub const m_flSummonedCardForwardOffset: usize = 0x1e80;
        pub const m_flSummonedCardVerticalOffset: usize = 0x1e84;
        pub const m_flSpadeWeight: usize = 0x1e88;
        pub const m_flClubWeight: usize = 0x1e8c;
        pub const m_flHeartWeight: usize = 0x1e90;
        pub const m_flDiamondWeight: usize = 0x1e94;
        pub const m_flJokerWeight: usize = 0x1e98;
        pub const m_flImprovedJokerWeight: usize = 0x1e9c;
        pub const m_vDefaultCardColor: usize = 0x1ea0;
        pub const m_vNextCardColor: usize = 0x1eac;
        pub const m_strNewCardActionName: usize = 0x1eb8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_GhostBloodShardDebuffVData {
        pub const m_BloodShardDebuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_EtherealBulletsBulletDamageBuffVData {
        pub const m_TracerParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierApplyModifierOnDamageTakenVData {
        pub const m_vecDamageTypes: usize = 0x750;
        pub const m_TargetModifier: usize = 0x768;
        pub const m_TargetModifierDurationAbilityProp: usize = 0x778;
        pub const m_SelfModifier: usize = 0x780;
        pub const m_SelfModifierDurationAbilityProp: usize = 0x790;
    }

    // Parent: None
    pub mod sky3dparams_t {
        pub const scale: usize = 0x8;
        pub const origin: usize = 0xc;
        pub const bClip3DSkyBoxNearToWorldFar: usize = 0x18;
        pub const flClip3DSkyBoxNearToWorldFarOffset: usize = 0x1c;
        pub const fog: usize = 0x20;
        pub const m_nWorldGroupID: usize = 0x88;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadelDruidPlantShield {
        pub const m_bSolid: usize = 0xbf0;
        pub const m_vStartPos: usize = 0xbf4;
        pub const m_vEndPos: usize = 0xc00;
        pub const m_flStartGrowTime: usize = 0xc0c;
        pub const m_flEndGrowTime: usize = 0xc10;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DazzlingOrbWatcher {
        pub const m_nAssociatedShotID: usize = 0xd0;
        pub const m_hAssociatedProjectile: usize = 0xd4;
        pub const m_flLastHitTime: usize = 0xd8;
        pub const m_hLastHitTarget: usize = 0xdc;
        pub const m_vLastHitLocation: usize = 0xe0;
        pub const m_nBouncesRemaining: usize = 0xec;
        pub const m_flLingerEndTime: usize = 0xf0;
        pub const m_flDamageAtCast: usize = 0xf4;
        pub const m_flSlowDurationAtCast: usize = 0xf8;
        pub const m_flBounceRadiusAtCast: usize = 0xfc;
        pub const m_nGraceParticleIndex: usize = 0x100;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Exposed {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bookworm_AOEMagicVData {
        pub const m_AreaModifier: usize = 0x1818;
        pub const m_flGroundHeightOffset: usize = 0x1828;
        pub const m_flGroundDistance: usize = 0x182c;
        pub const m_flSearchUpDistance: usize = 0x1830;
        pub const m_flSearchDownDistance: usize = 0x1834;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Operative_Blindside_EnemyDebuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GangActivity {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierIntimidatedVData {
        pub const m_EffectParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_InvisVData
    pub mod CCitadelModifierShadowStepVData {
        pub const m_SilenceModifier: usize = 0xa18;
        pub const m_ArmorDebuff: usize = 0xa28;
        pub const m_InvisChangedEffect: usize = 0xa38;
        pub const m_ShadowRevealedEffect: usize = 0xb18;
        pub const m_flMinInvisDuration: usize = 0xbf8;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_HornetLeap {
        pub const m_iBonusClip: usize = 0xe8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StormCloud {
        pub const m_flDamageInterval: usize = 0xd8;
        pub const m_bGrowing: usize = 0xdc;
        pub const m_flLastDamageWaveTime: usize = 0xe0;
        pub const m_nNumPlayersKilled: usize = 0xe4;
        pub const m_flNextRandomLightningStrike: usize = 0xe8;
        pub const m_flStartTime: usize = 0xec;
        pub const m_flRadiusIncrementPerSecond: usize = 0xf0;
        pub const m_vCastPosition: usize = 0xf4;
        pub const m_bFiredEndingSoonSound: usize = 0x100;
        pub const m_nLastTickForLightningCenterCalc: usize = 0x104;
        pub const m_vecLightningCenter: usize = 0x108;
        pub const m_nSatVolumeIndex: usize = 0x114;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_ExpressShot_VData {
        pub const m_ReadyParticle: usize = 0x18b8;
        pub const m_TracerAdditionParticle: usize = 0x1998;
        pub const flShotDelay: usize = 0x1a78;
        pub const m_strOffCooldownSound: usize = 0x1a80;
        pub const m_ProcNotificationModifier: usize = 0x1a90;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AbsorbingArmor {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_Magic_Storm {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ArcticBlastAOE {
        pub const m_vecDamagedTargets: usize = 0xd0;
    }

    // Parent: None
    pub mod CDestructiblePartsComponent {
        pub const __m_pChainEntity: usize = 0x0;
        pub const m_vecDamageTakenByHitGroup: usize = 0x48;
        pub const m_hOwner: usize = 0x60;
        pub const m_pAnimGraphDestructibleGraphController: usize = 0x68;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CNPC_Neutral_Flying_Pigeon {
    }

    // Parent: CBaseTrigger
    pub mod CChangeLevel {
        pub const m_sMapName: usize = 0x8e0;
        pub const m_sLandmarkName: usize = 0x8e8;
        pub const m_OnChangeLevel: usize = 0x8f0;
        pub const m_bTouched: usize = 0x908;
        pub const m_bNoTouch: usize = 0x909;
        pub const m_bNewChapter: usize = 0x90a;
        pub const m_bOnChangeLevelFired: usize = 0x90b;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_WreckingBallThrow {
        pub const m_hWreckingBallAbility: usize = 0xf80;
    }

    // Parent: CBaseToggle
    pub mod CBaseButton {
        pub const m_angMoveEntitySpace: usize = 0x800;
        pub const m_fStayPushed: usize = 0x80c;
        pub const m_fRotating: usize = 0x80d;
        pub const m_ls: usize = 0x810;
        pub const m_sUseSound: usize = 0x830;
        pub const m_sLockedSound: usize = 0x838;
        pub const m_sUnlockedSound: usize = 0x840;
        pub const m_sOverrideAnticipationName: usize = 0x848;
        pub const m_bLocked: usize = 0x850;
        pub const m_bDisabled: usize = 0x851;
        pub const m_flUseLockedTime: usize = 0x854;
        pub const m_bSolidBsp: usize = 0x858;
        pub const m_OnDamaged: usize = 0x860;
        pub const m_OnPressed: usize = 0x878;
        pub const m_OnUseLocked: usize = 0x890;
        pub const m_OnIn: usize = 0x8a8;
        pub const m_OnOut: usize = 0x8c0;
        pub const m_nState: usize = 0x8d8;
        pub const m_hConstraint: usize = 0x8dc;
        pub const m_hConstraintParent: usize = 0x8e0;
        pub const m_bForceNpcExclude: usize = 0x8e4;
        pub const m_sGlowEntity: usize = 0x8e8;
        pub const m_glowEntity: usize = 0x8f0;
        pub const m_usable: usize = 0x8f4;
        pub const m_szDisplayText: usize = 0x8f8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_TechDamageProcWatcher {
        pub const m_flNextProcTime: usize = 0x208;
        pub const m_shotProced: usize = 0x20c;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_UltimateBurst_Proc {
        pub const m_hHitTargets: usize = 0x208;
    }

    // Parent: None
    pub mod ItemDraftItem_t {
        pub const m_unItemID: usize = 0x30;
        pub const m_nUpgradeBits: usize = 0x34;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_SoundEventStart {
        pub const m_Type: usize = 0x48;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_DebugLog {
    }

    // Parent: CBaseTrigger
    pub mod CColorCorrectionVolume {
        pub const m_MaxWeight: usize = 0x8e0;
        pub const m_FadeDuration: usize = 0x8e4;
        pub const m_Weight: usize = 0x8e8;
        pub const m_lookupFilename: usize = 0x8ec;
        pub const m_LastEnterWeight: usize = 0xaec;
        pub const m_LastEnterTime: usize = 0xaf0;
        pub const m_LastExitWeight: usize = 0xaf4;
        pub const m_LastExitTime: usize = 0xaf8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_TechUpgrade_SuperAcolyteGloves {
        pub const fl_StoredDamage: usize = 0xff8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CinematicIntro_Player {
        pub const m_bFirstFrame: usize = 0xd0;
        pub const m_override: usize = 0xd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ItemPunchable_RejuvVData {
        pub const m_iRejuvBossKill01: usize = 0x750;
        pub const m_iRejuvBossKill02: usize = 0x754;
        pub const m_flPhysicsRadius: usize = 0x758;
        pub const m_flMaxDistForHeal: usize = 0x75c;
        pub const m_IsDroppingParticle: usize = 0x760;
        pub const m_IsPunchableParticle: usize = 0x840;
        pub const m_IsFrozenParticle: usize = 0x920;
        pub const m_DamagedParticle: usize = 0xa00;
        pub const m_AoEHealParticle: usize = 0xae0;
        pub const m_NearRejuvAuraModifier: usize = 0xbc0;
        pub const m_ParryCheckModifier: usize = 0xbd0;
        pub const m_sHitSound: usize = 0xbe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_WallDebuffVData {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fathom_ScaldingSpray_Target {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Synth_Barrage_Amp_VData {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Synth_PlasmaFlux_WeaponDamage {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_Radiance {
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierVandalOverflowVData {
        pub const m_LiftParticle: usize = 0x830;
        pub const m_strStartSound: usize = 0x910;
    }

    // Parent: CCitadelModifierVData
    pub mod CItemAOESilenceModifierVData {
        pub const m_strSilenceTargetSound: usize = 0x750;
        pub const m_SilenceModifier: usize = 0x760;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_HealOnLevelVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CheckNearbyPlayerParryVData {
        pub const m_flParryCheckRadius: usize = 0x750;
    }

    // Parent: CCitadelItemPickup
    pub mod CCitadelItemKothSpawner {
    }

    // Parent: CCitadelModifierVData
    pub mod CGameModifier_FireUserEntityIOVData {
        pub const m_FireOnAdded: usize = 0x750;
        pub const m_FireOnRemoved: usize = 0x754;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_SkyRunner_FlakShotVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_ExplodeSound: usize = 0x18f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Doorman_Hotel_VData {
        pub const m_NoDrawModifier: usize = 0x1818;
        pub const m_FreezeModifier: usize = 0x1828;
        pub const m_HotelModifier: usize = 0x1838;
        pub const m_DamageModifier: usize = 0x1848;
        pub const m_TeleportFXModifier: usize = 0x1858;
        pub const m_PreTeleportModifier: usize = 0x1868;
        pub const m_UnstoppableWhileChannelingModifier: usize = 0x1878;
        pub const m_ImposterModifier: usize = 0x1888;
        pub const m_TrackEnemy: usize = 0x1898;
        pub const m_TimeslowModifier: usize = 0x18a8;
        pub const m_CastParticle: usize = 0x18b8;
        pub const m_ChannelStartParticle: usize = 0x1998;
        pub const m_strLateHitConfirmSound: usize = 0x1a78;
        pub const m_flSequenceTriggerOffset: usize = 0x1a88;
        pub const m_flTeleportToHotelDelay: usize = 0x1a8c;
        pub const m_flTeleportToSourceDelay: usize = 0x1a90;
        pub const m_flPostSourceTeleportHold: usize = 0x1a94;
        pub const m_flFadeToBlackDuration: usize = 0x1a98;
        pub const m_flDoormanGroundSpeedMax: usize = 0x1a9c;
        pub const m_flDoormanAirSpeedMax: usize = 0x1aa0;
        pub const m_flDoormanFallSpeedMax: usize = 0x1aa4;
        pub const m_flDoormanAirDrag: usize = 0x1aa8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Hunger_Target_VData {
        pub const m_HungerTargetParticle: usize = 0x750;
        pub const m_HungerTargetPlayerParticle: usize = 0x830;
        pub const m_distanceToPitchRemap: usize = 0x910;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTargetdummy1VData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VandalSurge {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Lash_Flog_Debuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DebuffImmunityVData {
        pub const m_ShieldParticle: usize = 0x750;
        pub const m_PlayerShieldParticle: usize = 0x830;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CAI_BaseNPCVData {
        pub const m_sModelName: usize = 0x28;
        pub const m_hFootstepSounds: usize = 0x108;
        pub const m_vecNavLinkMovementNames: usize = 0x110;
        pub const m_flAimConeAngle: usize = 0x128;
        pub const m_nMaxHealth: usize = 0x130;
        pub const m_vecIntrinsicModifiers: usize = 0x138;
        pub const m_statusEffectMap: usize = 0x150;
        pub const m_vecAttachments: usize = 0x158;
        pub const m_flHeadDamageMultiplier: usize = 0x170;
        pub const m_flChestDamageMultiplier: usize = 0x180;
        pub const m_flStomachDamageMultiplier: usize = 0x190;
        pub const m_flArmDamageMultiplier: usize = 0x1a0;
        pub const m_flLegDamageMultiplier: usize = 0x1b0;
        pub const m_nMaxAdditionalAmmoBalancingShots: usize = 0x1c0;
        pub const m_bTakesDamage: usize = 0x1d0;
        pub const m_strDamagedEffect: usize = 0x1d8;
        pub const m_bLightsFiresWhenDamaged: usize = 0x2b8;
        pub const m_nRagdollHealth: usize = 0x2bc;
        pub const m_flImpactEnergyScale: usize = 0x2c0;
        pub const m_bAllowNonZUpMovement: usize = 0x2c4;
        pub const m_bUseDynamicCollisionHull: usize = 0x2c5;
        pub const m_bRequestCapsuleCollision: usize = 0x2c6;
        pub const m_flCapsuleRadiusOverride: usize = 0x2c8;
        pub const m_flCapsuleHeightOverride: usize = 0x2cc;
        pub const m_vecActionDesiredShared: usize = 0x2d0;
        pub const m_sPlayerKilledNpcSound: usize = 0x2e8;
        pub const m_sCustomDeathHandshake: usize = 0x2f8;
        pub const m_sDefaultMovementSettings: usize = 0x300;
        pub const m_mappedMovementSettings: usize = 0x308;
        pub const m_bEnableCodeDrivenAnimgraphMovement: usize = 0x320;
        pub const m_bEnableAnimgraphTagDrivenStrafing: usize = 0x321;
        pub const m_flMassOverride: usize = 0x324;
        pub const m_flThreatTemperature: usize = 0x328;
        pub const m_flFlashpoint: usize = 0x32c;
    }

    // Parent: CBodyComponentSkeletonInstance
    pub mod CBodyComponentBaseAnimGraph {
        pub const m_animationController: usize = 0x4a0;
    }

    // Parent: CLightEntity
    pub mod CLightCapsuleEntity {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_FireRateAura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_WeaponShielding {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_BarrackBossVData {
        pub const m_flPlayerAutoAttackRange: usize = 0x1348;
        pub const m_flMinMeleeAttackTime: usize = 0x134c;
        pub const m_flMeleeDuration: usize = 0x1350;
        pub const m_flInvulRange: usize = 0x1354;
        pub const m_flTrooperDamageResistPct: usize = 0x1358;
        pub const m_flPlayerDamageResistPct: usize = 0x135c;
        pub const m_flBackDoorProtectionRange: usize = 0x1360;
        pub const m_flDeathFadeTimeStart: usize = 0x1364;
        pub const m_flDeathFadeTimeEnd: usize = 0x1368;
        pub const m_flTier1PlayerClipCapsuleRadius: usize = 0x136c;
        pub const m_flTier1PlayerClipCapsuleHeight: usize = 0x1370;
        pub const m_sAngryStart: usize = 0x1378;
        pub const m_sAngryLoop: usize = 0x1388;
        pub const m_sAngryStop: usize = 0x1398;
        pub const m_BackdoorProtectionModifier: usize = 0x13a8;
        pub const m_TrooperBossInvulnModifier: usize = 0x13b8;
        pub const m_flTrooperDPS: usize = 0x13c8;
        pub const m_flPlayerDPS: usize = 0x13cc;
        pub const m_flDPSPctGrowthPerMinute: usize = 0x13d0;
        pub const m_flEnemyTrooperProtectionRange: usize = 0x13d4;
        pub const m_BackdoorBulletResistModifier: usize = 0x13d8;
        pub const m_ObjectiveRegen: usize = 0x13e8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_OnTheHunt {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_Attach_TriggerVData {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_BookWorm_PrimaryWeapon {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_DoubleDagger {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Yamato_InfinitySlash_BuffTimer {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRiotCastDelayVData {
        pub const m_UnstoppableModifier: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Viper_DebuffDagger {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckerSalvage_Buff {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_EldritchShot {
        pub const m_shotID: usize = 0x228;
        pub const m_BuffedShotId: usize = 0x3b0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_TechUpgrade_CorpseExplosionVData {
        pub const m_ExplodeParticle: usize = 0x18b8;
        pub const m_ExplosionModifier: usize = 0x1998;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Succor_Move {
        pub const m_bHasPulled: usize = 0xd0;
        pub const m_bIsPulling: usize = 0xd1;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Climb_Rope {
        pub const m_vTop: usize = 0xf70;
        pub const m_vBottom: usize = 0xfa0;
        pub const m_flActivatePressTime: usize = 0xfd0;
        pub const m_flDisconnectTime: usize = 0xfd4;
        pub const m_flClimbStartTime: usize = 0xfd8;
        pub const m_bNoDelayNeeded: usize = 0xfdc;
        pub const m_bMouseWheelBind: usize = 0xfdd;
        pub const m_vLastPos: usize = 0xfe0;
        pub const m_bRequestStopClimbing: usize = 0x1000;
        pub const m_bRequestJumpToRoof: usize = 0x1001;
        pub const m_flMoveDownStartTime: usize = 0x1004;
        pub const m_eClimbState: usize = 0x1008;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_BaseYieldingInflow {
    }

    // Parent: None
    pub mod PulseNodeDynamicOutflows_t {
        pub const m_Outflows: usize = 0x0;
    }

    // Parent: CServerOnlyModelEntity
    pub mod CFogVolume {
        pub const m_fogName: usize = 0x780;
        pub const m_postProcessName: usize = 0x788;
        pub const m_colorCorrectionName: usize = 0x790;
        pub const m_bDisabled: usize = 0x7a0;
        pub const m_bInFogVolumesList: usize = 0x7a1;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncRotating {
        pub const m_OnStopped: usize = 0x780;
        pub const m_OnStarted: usize = 0x798;
        pub const m_OnReachedStart: usize = 0x7b0;
        pub const m_localRotationVector: usize = 0x7c8;
        pub const m_flFanFriction: usize = 0x7d4;
        pub const m_flAttenuation: usize = 0x7d8;
        pub const m_flVolume: usize = 0x7dc;
        pub const m_flTargetSpeed: usize = 0x7e0;
        pub const m_flMaxSpeed: usize = 0x7e4;
        pub const m_flBlockDamage: usize = 0x7e8;
        pub const m_NoiseRunning: usize = 0x7f0;
        pub const m_bReversed: usize = 0x7f8;
        pub const m_bAccelDecel: usize = 0x7f9;
        pub const m_prevLocalAngles: usize = 0x810;
        pub const m_angStart: usize = 0x81c;
        pub const m_bStopAtStartPos: usize = 0x828;
        pub const m_vecClientOrigin: usize = 0x82c;
        pub const m_vecClientAngles: usize = 0x838;
    }

    // Parent: CLogicalEntity
    pub mod CTimerEntity {
        pub const m_OnTimer: usize = 0x4a0;
        pub const m_OnTimerHigh: usize = 0x4b8;
        pub const m_OnTimerLow: usize = 0x4d0;
        pub const m_iDisabled: usize = 0x4e8;
        pub const m_flInitialDelay: usize = 0x4ec;
        pub const m_flRefireTime: usize = 0x4f0;
        pub const m_bUpDownState: usize = 0x4f4;
        pub const m_iUseRandomTime: usize = 0x4f8;
        pub const m_bPauseAfterFiring: usize = 0x4fc;
        pub const m_flLowerRandomBound: usize = 0x500;
        pub const m_flUpperRandomBound: usize = 0x504;
        pub const m_flRemainingTime: usize = 0x508;
        pub const m_bPaused: usize = 0x50c;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Werewolf_FrenzyVData {
        pub const m_TargetModifier: usize = 0x1818;
        pub const m_AreaParticle: usize = 0x1828;
        pub const m_ChargeParticle: usize = 0x1908;
        pub const m_TargetDamageParticle: usize = 0x19e8;
        pub const m_strHitConfirmSound: usize = 0x1ac8;
        pub const m_strPointBlankSweetenerSound: usize = 0x1ad8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidLeechSeedVData {
        pub const m_LeechModifier: usize = 0x1818;
        pub const m_ImpactParticle: usize = 0x1828;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_CatAnimatingVData {
        pub const m_sModelName: usize = 0x28;
        pub const m_cGlowColor: usize = 0x108;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ViscousBallVData {
        pub const m_TrailParticle: usize = 0x750;
        pub const m_DirectionParticle: usize = 0x830;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHornetSnipeVData {
        pub const m_AssassinateShotParticle: usize = 0x1818;
        pub const m_AssassinateShotParticleOwnerOnly: usize = 0x18f8;
        pub const m_LaserSightParticle: usize = 0x19d8;
        pub const m_LaserSightParticleOwnerOnly: usize = 0x1ab8;
        pub const m_SnipeModifier: usize = 0x1b98;
        pub const m_GlowEnemyModifier: usize = 0x1ba8;
        pub const m_KillCheckModifier: usize = 0x1bb8;
        pub const m_strSnipeImpactSound: usize = 0x1bc8;
        pub const m_strZoomIn: usize = 0x1bd8;
        pub const m_strZoomOut: usize = 0x1be8;
        pub const m_strFullyChargedSound: usize = 0x1bf8;
        pub const m_flMinScopeTimeToShoot: usize = 0x1c08;
        pub const m_flFadeToBlackTime: usize = 0x1c0c;
        pub const m_flFoVChangeTime: usize = 0x1c10;
        pub const m_ScopeFoV: usize = 0x1c18;
        pub const m_flKillCheckDuration: usize = 0x1c30;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FireBombVData {
        pub const m_ChargeParticle: usize = 0x750;
        pub const m_GroundParticle: usize = 0x830;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Headshot_Damage_DebuffVData {
        pub const m_HeadShotParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BonusDamagePercent {
    }

    // Parent: CPlayer_MovementServices
    pub mod CPlayer_MovementServices_Humanoid {
        pub const m_flStepSoundTime: usize = 0x240;
        pub const m_flFallVelocity: usize = 0x244;
        pub const m_groundNormal: usize = 0x248;
        pub const m_flSurfaceFriction: usize = 0x254;
        pub const m_surfaceProps: usize = 0x258;
        pub const m_nStepside: usize = 0x268;
        pub const m_vecSmoothedVelocity: usize = 0x26c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Gunslinger_DemonMarkVData {
        pub const m_MarkModifier: usize = 0x1818;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_ShivWeapon {
    }

    // Parent: CCitadel_Modifier_Invis
    pub mod CCitadel_Modifier_Shadow_Step {
        pub const m_nRevealedEffect: usize = 0x468;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Afterburn {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_PrimaryWeapon_Empty {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_LifestrikeGauntlets_VData {
        pub const m_SwingParticle: usize = 0x780;
        pub const m_HitParticle: usize = 0x860;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_ApexCombat_ProcVData {
        pub const m_RicochetTracerParticle: usize = 0x780;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierApexWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_MagicCarpetVData {
        pub const m_SummonParticle: usize = 0x18b8;
        pub const m_FlyingCarpetModifier: usize = 0x1998;
        pub const m_SummonFlyingCarpetModifier: usize = 0x19a8;
        pub const m_SummonFlyingCarpetVisualModifier: usize = 0x19b8;
        pub const m_FlyingCarpetVisualModifier: usize = 0x19c8;
        pub const m_flSummonVisualDuration: usize = 0x19d8;
        pub const m_flBurstSpeedBonus: usize = 0x19dc;
        pub const m_flBurstSpeedMin: usize = 0x19e0;
        pub const m_flBurstSpeedDuration: usize = 0x19e4;
        pub const m_flMinDistanceAboveGround: usize = 0x19e8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Discord_Friendly {
    }

    // Parent: None
    pub mod CBaseEntityAPI {
    }

    // Parent: None
    pub mod CPulseCell_IsRequirementValidCriteria_t {
        pub const m_bIsValid: usize = 0x0;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_NanoRollermine {
        pub const m_flForwardSpeed: usize = 0x17e8;
        pub const m_hOwnerPawn: usize = 0x1830;
    }

    // Parent: CTriggerNeutralShield
    pub mod CTriggerNeutralIdles {
    }

    // Parent: CBaseTrigger
    pub mod CCitadelPortalTrigger {
        pub const m_hOtherPortal: usize = 0x8f8;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CCitadel_Projectile_BatSwarmProjectile {
        pub const m_vecTargetVelocity: usize = 0x91c;
        pub const m_vecLastVelocity: usize = 0x928;
        pub const m_SpawnTime: usize = 0x934;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_NukeMap {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_PainAura_Target {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_CopyUlt {
        pub const m_bHasUsedCopiedUlt: usize = 0x1170;
        pub const m_bHasCopiedUlt: usize = 0x1171;
        pub const m_bIsModelSwapped: usize = 0x1172;
        pub const m_timeSwappedModel: usize = 0x1174;
        pub const m_pActiveCopyUltimateAbility: usize = 0x1178;
        pub const m_nCopiedHeroID: usize = 0x117c;
        pub const m_vecLingeringCopiedAbilities: usize = 0x1180;
        pub const m_ModelChange: usize = 0x1198;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Gunslinger_DemonCarbineVData {
        pub const m_flShotTimeScaleLingerDuration: usize = 0x1818;
        pub const m_ChargingModifier: usize = 0x1820;
        pub const m_DebuffModifier: usize = 0x1830;
        pub const m_cameraDemonCarbineShotFired: usize = 0x1840;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ThrownShiv_Damage_Debuff {
        pub const m_nNumTicksRemaining: usize = 0xd0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_IceBeam {
        pub const m_bIceBeaming: usize = 0xf70;
        pub const m_flNextDamageTick: usize = 0x137c;
        pub const m_beam: usize = 0x1380;
        pub const m_vecEntitiesHit: usize = 0x2378;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Guiding_Arrow_KillCheck {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_Inhibitor_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_MedicHeal {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Backdoor_Protection {
        pub const m_MaxHealth: usize = 0xd0;
        pub const m_flLastAttackedTime: usize = 0xd4;
        pub const m_nActiveShieldEffect: usize = 0xd8;
        pub const m_bIsActive: usize = 0xdc;
        pub const m_tActivationTime: usize = 0xe0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Base_Buildup {
        pub const m_flLastBuildupAppliedTime: usize = 0xd0;
        pub const m_flDelayedDieTimeRemaining: usize = 0xd4;
        pub const m_bInDelayTime: usize = 0xd8;
        pub const m_flBuildUpDecayDelayFromWeaponCycleTime: usize = 0xdc;
    }

    // Parent: CServerOnlyEntity
    pub mod CCitadelTeleportLocation {
        pub const m_iLane: usize = 0x4a0;
        pub const m_iObjective: usize = 0x4a4;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_BreakablePropVData {
        pub const m_bBreakOnDodgeTouch: usize = 0x28;
        pub const m_bRenderAfterDeath: usize = 0x29;
        pub const m_bSolidAfterDeath: usize = 0x2a;
        pub const m_bIsPermanent: usize = 0x2b;
        pub const m_bDamagedByBullets: usize = 0x2c;
        pub const m_bDamagedByMelee: usize = 0x2d;
        pub const m_bDamagedByAbilities: usize = 0x2e;
        pub const m_hModel: usize = 0x30;
        pub const m_sAnimgraphParamDamageReceived: usize = 0x110;
        pub const m_sAnimgraphParamOnHit: usize = 0x118;
        pub const m_sAnimgraphParamOnRespawn: usize = 0x120;
        pub const m_sBreakSound: usize = 0x128;
        pub const m_sSpawnSound: usize = 0x138;
        pub const m_sDamageSound: usize = 0x148;
        pub const m_sHeavyDamageSound: usize = 0x158;
        pub const m_sHitIndicatorSound: usize = 0x168;
        pub const m_iHealth: usize = 0x178;
        pub const m_flInitialSpawnTime: usize = 0x17c;
        pub const m_flRespawnTime: usize = 0x180;
        pub const m_flInitialSpawnTimeTest: usize = 0x184;
        pub const m_flRespawnTimeTest: usize = 0x188;
        pub const m_bIsMantleable: usize = 0x18c;
        pub const m_flPrimaryDropChance: usize = 0x190;
        pub const m_eRollType: usize = 0x194;
        pub const m_vecPrimaryPickups: usize = 0x198;
        pub const m_iMatchTimeMinsForLevel2Pickups: usize = 0x1b0;
        pub const m_vecPickups_lv2: usize = 0x1b8;
        pub const m_iMatchTimeMinsForLevel3Pickups: usize = 0x1d0;
        pub const m_vecPickups_lv3: usize = 0x1d8;
        pub const m_iLootListDeckSize: usize = 0x1f0;
    }

    // Parent: CTriggerMultiple
    pub mod CTriggerOnce {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_FissureWall {
        pub const m_vStartPos: usize = 0xa90;
        pub const m_vEndPos: usize = 0xa9c;
        pub const m_flStartEmitTime: usize = 0xaa8;
        pub const m_flEndEmitTime: usize = 0xaac;
        pub const m_bSolid: usize = 0xab0;
        pub const m_nTouchCount: usize = 0xab4;
    }

    // Parent: CCitadel_Modifier_LinkVData
    pub mod CCitadel_Modifier_HookTargetVData {
        pub const m_flApproachingWhooshAnticipationTime: usize = 0x830;
        pub const m_flCloseEnoughDistance: usize = 0x834;
        pub const m_flTossUpSpeed: usize = 0x838;
        pub const m_PullSpeedScaleCurve: usize = 0x840;
        pub const m_flReturnSpeed: usize = 0x880;
        pub const m_flReturnPositionForwardOffset: usize = 0x884;
        pub const m_flReturnSpeedFail: usize = 0x888;
        pub const m_flReturnStuckTime: usize = 0x88c;
        pub const m_flFailSafeMinTime: usize = 0x890;
        pub const m_flFailSafeDurationMult: usize = 0x894;
        pub const m_RestrictionModifier: usize = 0x898;
        pub const m_HookRetrieveParticle: usize = 0x8a8;
        pub const m_strApproachingWhooshSound: usize = 0x988;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_ActiveBulletShield {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_Reviving {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Shakedown_TargetVData {
        pub const m_RootModifier: usize = 0x1818;
        pub const m_PulseModifier: usize = 0x1828;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_NanoDash {
        pub const m_vStartPosition: usize = 0xf70;
        pub const m_vEndPosition: usize = 0xf7c;
        pub const m_bIsDashing: usize = 0xf88;
        pub const m_vecHitEnemies: usize = 0xf90;
        pub const m_vecLastPosition: usize = 0xfa8;
        pub const m_flStuckTime: usize = 0x1638;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityStackingDamageVData {
        pub const m_StackingModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityNikumanVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_NikumanModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ChargedBombVData {
        pub const m_ChargeParticle: usize = 0x750;
        pub const m_strBeepSound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_EnchantedHolsters_Watcher {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SlowingBullets_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CItemCrateSpawn {
        pub const m_eLootType: usize = 0x4b8;
        pub const m_eObjectivePosition: usize = 0x4bc;
    }

    // Parent: CTeamplayRules
    pub mod CCitadelGameRules {
        pub const m_bFreezePeriod: usize = 0xe0;
        pub const m_fLevelStartTime: usize = 0xe4;
        pub const m_flGameStartTime: usize = 0xe8;
        pub const m_flGameStateStartTime: usize = 0xec;
        pub const m_flGameStateEndTime: usize = 0xf0;
        pub const m_flRoundStartTime: usize = 0xf4;
        pub const m_flPlayOfTheGameStateEndTime: usize = 0xf8;
        pub const m_eGameState: usize = 0xfc;
        pub const m_hTowerAmber: usize = 0x100;
        pub const m_hTowerSapphire: usize = 0x104;
        pub const m_bEnemyInAmberBase: usize = 0x108;
        pub const m_bEnemyInSapphireBase: usize = 0x109;
        pub const m_bEnemyPlayersInAmberBase: usize = 0x10a;
        pub const m_bEnemyPlayersInSapphireBase: usize = 0x10b;
        pub const m_vMinimapMins: usize = 0x10c;
        pub const m_vMinimapMaxs: usize = 0x118;
        pub const m_bMatchSafeToAbandon: usize = 0x124;
        pub const m_bMatchNotScored: usize = 0x125;
        pub const m_tAbandonTriggerEarlyTime: usize = 0x128;
        pub const m_bAbandonTriggerSapphire: usize = 0x12c;
        pub const m_bAbandonTriggerAmber: usize = 0x12d;
        pub const m_bNoDeathEnabled: usize = 0x12e;
        pub const m_bFastCooldownsEnabled: usize = 0x12f;
        pub const m_bStaminaCooldownsEnabled: usize = 0x130;
        pub const m_bUnlimitedAmmoEnabled: usize = 0x131;
        pub const m_bInfiniteResourcesEnabled: usize = 0x132;
        pub const m_bFlexSlotsForcedUnlocked: usize = 0x133;
        pub const m_eMatchMode: usize = 0x134;
        pub const m_eGameMode: usize = 0x138;
        pub const m_unSpectatorCount: usize = 0x13c;
        pub const m_unExpectedPlayerCount: usize = 0x140;
        pub const m_nHideoutOwner: usize = 0x144;
        pub const m_hTrooperMinimap: usize = 0x148;
        pub const m_iWinningTeam: usize = 0x14c;
        pub const m_vecBannedHeroes: usize = 0x150;
        pub const m_vecTeamKothStates: usize = 0x168;
        pub const m_nKothScoringTeam: usize = 0x290;
        pub const m_timeKothScoring: usize = 0x294;
        pub const m_timeKothCashInStarted: usize = 0x298;
        pub const m_timeKothGiveUp: usize = 0x29c;
        pub const m_nAmberGold: usize = 0x2a0;
        pub const m_nSapphireGold: usize = 0x2a4;
        pub const m_vKothCashInCurrentLocation: usize = 0x2a8;
        pub const m_hCurrentHeroDrafterRebels: usize = 0x2b4;
        pub const m_hCurrentHeroDrafterCombine: usize = 0x2b8;
        pub const m_bDontUploadStats: usize = 0x2bc;
        pub const m_bIsEndGameTest: usize = 0x2bd;
        pub const m_bSpawnedBots: usize = 0x328;
        pub const m_bGuideBotAssigned: usize = 0x329;
        pub const m_nKothWindowWarning: usize = 0x32c;
        pub const m_timeLastSpawnCrates: usize = 0x330;
        pub const m_timeNextKothSpawn: usize = 0x334;
        pub const m_timeNextKothSpawnWindowTime: usize = 0x338;
        pub const m_vNextKothLocation: usize = 0x33c;
        pub const m_KothWarningSound: usize = 0x348;
        pub const m_vKothSpawnLocationDeck: usize = 0x360;
        pub const m_bNotifiedClientsOfNextCrateSpawn: usize = 0x378;
        pub const m_bEarlyCratesSpawned: usize = 0x379;
        pub const m_bIsEarlyCrateGamestate: usize = 0x37a;
        pub const m_flGameTimeAllPlayersDisconnected: usize = 0x5e8;
        pub const m_nNextHeroDraftPosition: usize = 0x5ec;
        pub const m_CheckIdleTimer: usize = 0x1838;
        pub const m_CheckCheatersTimer: usize = 0x1850;
        pub const m_flTimeScaleStart: usize = 0x19c8;
        pub const m_flTimeScaleEndTime: usize = 0x19cc;
        pub const m_flTimeScaleRampInEndTime: usize = 0x19d0;
        pub const m_flTimeScaleRampOutStartTime: usize = 0x19d4;
        pub const m_flTimeScaleRampInTime: usize = 0x19d8;
        pub const m_flTimeScaleDuration: usize = 0x19dc;
        pub const m_flTimeScaleRampOutTime: usize = 0x19e0;
        pub const m_flTimeScale: usize = 0x19e4;
        pub const m_flOriginalTimeScale: usize = 0x19e8;
        pub const m_bTimeScaleActive: usize = 0x19ec;
        pub const m_iMidbossKillCount: usize = 0x19f0;
        pub const m_iAmberRejuvCount: usize = 0x19f4;
        pub const m_iSapphireRejuvCount: usize = 0x19f8;
        pub const m_tNextMidBossSpawnTime: usize = 0x19fc;
        pub const m_bServerPaused: usize = 0x29c0;
        pub const m_iPauseTeam: usize = 0x29c4;
        pub const m_nMatchClockUpdateTick: usize = 0x29c8;
        pub const m_flMatchClockAtLastUpdate: usize = 0x29cc;
        pub const m_flPauseTime: usize = 0x29d0;
        pub const m_pausingPlayerId: usize = 0x29d8;
        pub const m_unpausingPlayerId: usize = 0x29dc;
        pub const m_fPauseRawTime: usize = 0x29e0;
        pub const m_fPauseCurTime: usize = 0x29e4;
        pub const m_fUnpauseRawTime: usize = 0x29e8;
        pub const m_fUnpauseCurTime: usize = 0x29ec;
        pub const m_nLastPreGameCount: usize = 0x2a40;
        pub const m_eGGTeam: usize = 0x2a44;
        pub const m_flGGEndsAtTime: usize = 0x2a48;
        pub const m_unMatchID: usize = 0x2a50;
        pub const m_sGameplayExperiment: usize = 0x2a58;
        pub const m_ExperimentTokenHashCode: usize = 0x2a60;
        pub const m_nPlayerDeathEventID: usize = 0x2a64;
        pub const m_nReplayChangedEvent: usize = 0x2a68;
        pub const m_nGameOverEvent: usize = 0x2a6c;
        pub const m_flHeroDiedTime: usize = 0x2a90;
        pub const m_pPlayOfTheGame: usize = 0x2a98;
        pub const m_tStreetBrawl: usize = 0x2aa0;
    }

    // Parent: None
    pub mod EntityRenderAttribute_t {
        pub const m_ID: usize = 0x30;
        pub const m_Values: usize = 0x34;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_ObservableVariableListener {
        pub const m_nBlackboardReference: usize = 0x80;
        pub const m_bSelfReference: usize = 0x82;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelTriggerMultiCapturePoint {
        pub const m_CCitadelMinimapComponent: usize = 0x8f8;
        pub const m_OnBecomeCapturable: usize = 0x918;
        pub const m_OnFullyCaptured: usize = 0x930;
        pub const m_iszGroupName: usize = 0x950;
        pub const m_nEnabledParticle: usize = 0x958;
        pub const m_nPreEnableFX: usize = 0x95c;
        pub const m_nEnableState: usize = 0xc20;
    }

    // Parent: CFuncBrush
    pub mod CFuncMonitor {
        pub const m_targetCamera: usize = 0x7a0;
        pub const m_nResolutionEnum: usize = 0x7a8;
        pub const m_bRenderShadows: usize = 0x7ac;
        pub const m_bUseUniqueColorTarget: usize = 0x7ad;
        pub const m_brushModelName: usize = 0x7b0;
        pub const m_hTargetCamera: usize = 0x7b8;
        pub const m_bEnabled: usize = 0x7bc;
        pub const m_bDraw3DSkybox: usize = 0x7bd;
        pub const m_bStartEnabled: usize = 0x7be;
    }

    // Parent: CBaseEntity
    pub mod CInfoVisibilityBox {
        pub const m_nMode: usize = 0x4a4;
        pub const m_vBoxSize: usize = 0x4a8;
        pub const m_bEnabled: usize = 0x4b4;
    }

    // Parent: CCitadel_Modifier_Base_Buildup
    pub mod CCitadel_Modifier_Necro_RampUp {
        pub const m_flCurrBuildup: usize = 0xe4;
        pub const m_tLastTetherTime: usize = 0x570;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_Fear {
        pub const m_flTotalBuildup: usize = 0xf88;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Necro_PrimaryWeaponVData {
        pub const m_TetherModifier: usize = 0x19c8;
        pub const m_DummyTetherModifier: usize = 0x19d8;
        pub const m_TetheredModifier: usize = 0x19e8;
        pub const m_SearchingModifier: usize = 0x19f8;
        pub const m_ActiveParticle: usize = 0x1a08;
        pub const m_flDefaultSpreadScale: usize = 0x1ae8;
        pub const m_flSearchingSpreadScale: usize = 0x1aec;
        pub const m_flTetheredSpreadScale: usize = 0x1af0;
        pub const m_flApproachSpeed: usize = 0x1af4;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon_BeamWeapon
    pub mod CCitadel_Ability_PrimaryWeapon_Bebop {
        pub const m_flStartWindUpTime: usize = 0x1518;
        pub const m_flStartFiringTime: usize = 0x151c;
        pub const m_bFiring: usize = 0x1520;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityImmobilizeTrapVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_PreviewRingParticle: usize = 0x18f8;
        pub const m_TrapHighlightParticle: usize = 0x19d8;
        pub const m_ArmedParticle: usize = 0x1ab8;
        pub const m_strTripSound: usize = 0x1b98;
        pub const m_strExplodeSound: usize = 0x1ba8;
        pub const m_strExpiredSound: usize = 0x1bb8;
        pub const m_strImmobilizeTargetSound: usize = 0x1bc8;
        pub const m_strArmingSound: usize = 0x1bd8;
        pub const m_GlitchModifier: usize = 0x1be8;
        pub const m_DebuffModifier: usize = 0x1bf8;
    }

    // Parent: CitadelItemVData
    pub mod CItemMetalSkinVData {
        pub const m_MetalSkinModifier: usize = 0x18b8;
    }

    // Parent: CBaseToggle
    pub mod CGunTarget {
        pub const m_on: usize = 0x800;
        pub const m_hTargetEnt: usize = 0x804;
        pub const m_OnDeath: usize = 0x808;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_T3Boss_Effigy {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InHideoutZone {
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventConeEntity {
        pub const m_flEmitterAngle: usize = 0x560;
        pub const m_flSweetSpotAngle: usize = 0x564;
        pub const m_flAttenMin: usize = 0x568;
        pub const m_flAttenMax: usize = 0x56c;
        pub const m_iszParameterName: usize = 0x570;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_SpotlightVData {
        pub const m_ExposedAuraModifier: usize = 0x1818;
        pub const m_BuildupModifier: usize = 0x1828;
        pub const m_EffectModifier: usize = 0x1838;
        pub const m_EyeGlowParticle: usize = 0x1848;
        pub const m_strChannelFinishSound: usize = 0x1928;
        pub const m_AirSpeedMax: usize = 0x1938;
        pub const m_FallSpeedMax: usize = 0x193c;
        pub const m_VerticalDrag: usize = 0x1940;
        pub const m_AirDrag: usize = 0x1944;
        pub const m_CameraTurnRateMax: usize = 0x1948;
        pub const m_flShotCosmeticVarianceMagnitude: usize = 0x194c;
        pub const m_JumpCeilingCheckDistance: usize = 0x1950;
        pub const m_JumpSpeed: usize = 0x1954;
        pub const m_JumpPitch: usize = 0x1958;
        pub const aimColorDesat: usize = 0x195c;
        pub const aimColorSat: usize = 0x1960;
        pub const aimColorOutline: usize = 0x1964;
        pub const m_flSatVolumeInnerConeSize: usize = 0x1968;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_SkyRunner_PrimaryWeaponVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Drifter_ShadowMark_TargetVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Frank_PrimaryWeapon {
        pub const m_pNextShooter: usize = 0x11a0;
    }

    // Parent: CCitadelBaseYamatoAbility
    pub mod CCitadel_Ability_HealingSlash {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Viper_Ability04 {
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_ShivWeapon_VData {
        pub const m_flPushForce: usize = 0x19c8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_MobileResupplyVData {
        pub const m_flResupplyForceScale: usize = 0x1818;
        pub const m_flResupplyUp: usize = 0x181c;
        pub const m_strKilledSound: usize = 0x1820;
        pub const m_strDeploySound: usize = 0x1830;
        pub const m_AuraModifier: usize = 0x1840;
        pub const m_DispenserModel: usize = 0x1850;
        pub const m_SprayParticle: usize = 0x1930;
        pub const m_DestroyedParticle: usize = 0x1a10;
        pub const m_DeployParticle: usize = 0x1af0;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_Item_Bleeding_Bullets_ActiveVData {
        pub const m_BleedModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
        pub const m_BulletImpactParticle: usize = 0x7a0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierDelayedStunVData {
        pub const m_HitParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NPC_OOC_Regen {
        pub const m_tLastDamageTime: usize = 0xd0;
    }

    // Parent: CSoundOpvarSetAABBEntity
    pub mod CSoundOpvarSetOBBEntity {
    }

    // Parent: None
    pub mod CFilterMultipleAPI {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_UtilityUpgrade_DebuffImmunity {
    }

    // Parent: CFuncBrush
    pub mod CCitadelSpawnBlocker {
    }

    // Parent: CBaseModelEntity
    pub mod CPrecipitationBlocker {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Werewolf_HuntVData {
        pub const m_SelfBuffWerewolfModifier: usize = 0x1818;
        pub const m_SelfBuffHumanModifier: usize = 0x1828;
        pub const m_AuraWerewolfModifier: usize = 0x1838;
        pub const m_AuraHumanModifier: usize = 0x1848;
    }

    // Parent: CAbilityMeleeVData
    pub mod CAbilityUppercutVData {
        pub const m_UppercutAttackData: usize = 0x1848;
        pub const m_UppercutModifier: usize = 0x1d70;
        pub const m_BuffModifier: usize = 0x1d80;
        pub const m_ClipModifier: usize = 0x1d90;
        pub const m_flMaxPitchUp: usize = 0x1da0;
        pub const m_flDamageTriggerTime: usize = 0x1da4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_HealthSwapVData {
        pub const m_SwapParticle: usize = 0x1818;
        pub const m_SilenceExplodeParticle: usize = 0x18f8;
        pub const m_SwapModifier: usize = 0x19d8;
        pub const m_PreCastModifier: usize = 0x19e8;
        pub const m_BuffModifier: usize = 0x19f8;
        pub const m_SilenceModifier: usize = 0x1a08;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DeathTaxTechAmp {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_LightningBall {
        pub const m_flInitialSpeed: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ZipLineBoost_VData {
        pub const m_ZipboostModifier: usize = 0x1818;
        pub const m_flTimeToActivate: usize = 0x1828;
        pub const m_flTimeForHint: usize = 0x182c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FuryTrance {
    }

    // Parent: CitadelItemVData
    pub mod CItem_RestorativeLocket_VData {
        pub const m_CastParticle: usize = 0x18b8;
        pub const m_TrailParticle: usize = 0x1998;
        pub const m_strStackSound: usize = 0x1a78;
        pub const m_strMaxStackSound: usize = 0x1a88;
        pub const m_strTargetHealSound: usize = 0x1a98;
    }

    // Parent: CSoundOpvarSetPointEntity
    pub mod CSoundOpvarSetPathCornerEntity {
        pub const m_bUseParentedPath: usize = 0x630;
        pub const m_flDistMinSqr: usize = 0x634;
        pub const m_flDistMaxSqr: usize = 0x638;
        pub const m_iszPathCornerEntityName: usize = 0x640;
    }

    // Parent: CCitadel_Modifier_ItemPickupAuraVData
    pub mod CCitadel_Modifier_HeldItemPickupAuraVData {
        pub const m_strFilterAbilityName: usize = 0x888;
    }

    // Parent: CNPC_SimpleAnimatingAIVData
    pub mod CNPC_ShieldedSentryVData {
        pub const m_flZShootPostionOffset: usize = 0x108;
        pub const m_LaserSightParticle: usize = 0x110;
        pub const m_KillExplosionParticle: usize = 0x1f0;
        pub const m_AutoDestructParticle: usize = 0x2d0;
        pub const m_DeployProgressModifier: usize = 0x3b0;
        pub const m_NearDeathModifier: usize = 0x3c0;
        pub const m_IntrinsicModifier: usize = 0x3d0;
        pub const m_sSpawnSound: usize = 0x3e0;
        pub const m_sKillExplosionSound: usize = 0x3f0;
        pub const m_sLastHitSound: usize = 0x400;
        pub const m_sTargetAcquiredLocalSound: usize = 0x410;
        pub const m_sTargetAcquiredSound: usize = 0x420;
        pub const m_flIdleTurnSpeed: usize = 0x430;
        pub const m_flIdleTurnAngles: usize = 0x434;
        pub const m_flTrooperTakeDamageMult: usize = 0x438;
        pub const m_flNeutralTakeDamageMulti: usize = 0x43c;
        pub const m_flNotifyEventTime: usize = 0x440;
        pub const m_flNearDeathDuration: usize = 0x444;
        pub const m_flMinimapRevealTime: usize = 0x448;
        pub const m_flMinLifetime: usize = 0x44c;
        pub const m_flAttackThinkTime: usize = 0x450;
    }

    // Parent: CPointEntity
    pub mod CPointClientCommand {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Ability01 {
        pub const m_vecTargetsInCone: usize = 0xf90;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Ability02 {
        pub const m_bCastWhileAttached: usize = 0x12f0;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Frank_PrimaryWeaponVData {
        pub const m_SpreadPenaltyScaleCurve: usize = 0x19c8;
        pub const m_strShootDelaySound: usize = 0x1a08;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MageWalkVData {
        pub const m_TeleportStartParticle: usize = 0x750;
        pub const m_TeleportEndParticle: usize = 0x830;
        pub const m_TeleportTrailParticle: usize = 0x910;
        pub const m_flPreTeleportDuration: usize = 0x9f0;
        pub const m_strAmbientLoopingLocalPlayerSound: usize = 0x9f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Haunt_Damage_VData {
        pub const m_sAfterburnParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ThrowSandVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_SilenceDebuff: usize = 0x1828;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TriggerTowerRegen {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PatronsBlessingEnemyTracker {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_RechargingBulletsVData {
        pub const m_ProcParticle: usize = 0x18b8;
        pub const m_strProcSound: usize = 0x1998;
        pub const m_ProcNotificationModifier: usize = 0x19a8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Boss_Damage_Protection {
    }

    // Parent: None
    pub mod DynamicAbilityValues_t {
        pub const m_SourceAbilityID: usize = 0x30;
        pub const m_vecImbuedAbilities: usize = 0x38;
        pub const m_eValType: usize = 0x50;
        pub const m_flValue: usize = 0x54;
    }

    // Parent: CAI_Component
    pub mod CAI_EnemyServices {
        pub const m_hEnemy: usize = 0x50;
        pub const m_hLastEnemy: usize = 0x54;
        pub const m_flTimeEnemyAcquired: usize = 0x58;
        pub const m_bHasEnemyAcquired: usize = 0x5c;
        pub const m_flTimeLastHadEnemy: usize = 0x60;
        pub const m_bHasLastHadEnemy: usize = 0x64;
        pub const m_nEnemiesSerialNumber: usize = 0x68;
        pub const m_hEnemyOccluder: usize = 0x6c;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelTriggerNoPortals {
    }

    // Parent: CBaseModelEntity
    pub mod CWorld {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_OnTheHunt {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GoatFlipEmpoweredMelee {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DeflectingArmorVData {
        pub const m_ImpactParticle: usize = 0x750;
        pub const m_strImpactSound: usize = 0x830;
        pub const m_strProcDeflectionImpactSound: usize = 0x840;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierStimPakVData {
        pub const m_BuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Slow {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RebirthCreditVData {
        pub const m_DeployParticle: usize = 0x750;
        pub const m_RespawnParticle: usize = 0x830;
        pub const m_sDeploySound: usize = 0x910;
        pub const m_sRespawnSound: usize = 0x920;
        pub const m_flRespawnLifePct: usize = 0x930;
        pub const m_flRespawnDelay: usize = 0x934;
    }

    // Parent: CBaseEntity
    pub mod CCitadelZipLinePathNode {
        pub const m_bCornerNode: usize = 0x4b8;
        pub const m_bDisableZippingToByPlayers: usize = 0x4b9;
        pub const m_bCapturable: usize = 0x4ba;
        pub const m_strGuardBossName: usize = 0x4c0;
        pub const m_strGuardBossName2: usize = 0x4c8;
        pub const m_strGuardBossName3: usize = 0x4d0;
        pub const m_flSpeedMultiplierToBaseBonus: usize = 0x4dc;
        pub const m_flSpeedMultiplierFromBaseBonus: usize = 0x4e0;
    }

    // Parent: CAI_Component
    pub mod CAI_MoveProbe {
        pub const m_hLastBlockingEnt: usize = 0x50;
    }

    // Parent: CLogicalEntity
    pub mod CPathMoverEntitySpawner {
        pub const m_szSpawnTemplates: usize = 0x4a0;
        pub const m_nSpawnIndex: usize = 0x4c0;
        pub const m_hPathMover: usize = 0x4c4;
        pub const m_flSpawnFrequencySeconds: usize = 0x4c8;
        pub const m_flSpawnFrequencyDistToNearestMover: usize = 0x4cc;
        pub const m_mapSpawnedMoverTemplates: usize = 0x4d0;
        pub const m_nMaxActive: usize = 0x4f0;
        pub const m_flLastSpawnTime: usize = 0x4f4;
        pub const m_bEnabled: usize = 0x4f8;
    }

    // Parent: None
    pub mod CModelState {
        pub const m_hModel: usize = 0xa0;
        pub const m_ModelName: usize = 0xa8;
        pub const m_pVPhysicsAggregate: usize = 0xe0;
        pub const m_vRootBoneOffset: usize = 0xe8;
        pub const m_nRootBoneOffsetResetSerialNumber: usize = 0xf4;
        pub const m_bClientClothCreationSuppressed: usize = 0xf5;
        pub const m_MeshGroupMask: usize = 0x1a0;
        pub const m_nBodyGroupChoices: usize = 0x1f0;
        pub const m_nIdealMotionType: usize = 0x23a;
        pub const m_nForceLOD: usize = 0x23b;
        pub const m_nClothUpdateFlags: usize = 0x23c;
    }

    // Parent: CPulseCell_BaseLerp::CursorState_t
    pub mod CPulseCell_LerpCameraSettingsCursorState_t {
        pub const m_hCamera: usize = 0x8;
        pub const m_OverlaidStart: usize = 0xc;
        pub const m_OverlaidEnd: usize = 0x1c;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleOrdered {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerGravity {
    }

    // Parent: CNPC_Neutral_Weakpoint
    pub mod CNPC_Neutral_Flying_Weakpoint {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_OverdriveClip {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fealty {
        pub const m_hTarget: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_LockDown {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Killing_Blow_GlowVData {
        pub const m_ShivOnlyDeathStatus: usize = 0x750;
        pub const m_ShivOnlyDeathTrail: usize = 0x830;
        pub const m_ShivOnlyExecuteHeart: usize = 0x910;
        pub const m_strShivOnlyActivateSound: usize = 0x9f0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_Shadow_Debuff {
    }

    // Parent: CCitadel_Modifier_IceDome_AuraModifierBase
    pub mod CCitadel_Modifier_IceDomeFriendly {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_InfernalResilience_Melee {
    }

    // Parent: CAI_Component
    pub mod CAI_Motor {
        pub const m_flMoveInterval: usize = 0x60;
        pub const m_flYawSpeed: usize = 0x64;
        pub const m_vMoveVel: usize = 0x68;
        pub const m_vMoveVelNavigation: usize = 0x74;
        pub const m_vecAngularVelocity: usize = 0x80;
        pub const m_timerFloorPointCached: usize = 0x8c;
        pub const m_vFloorPointCached: usize = 0x94;
        pub const m_bFloorPointCachingEnabled: usize = 0xa0;
        pub const m_bAllowFlyingAnimMovement: usize = 0xa1;
        pub const m_flSpeed: usize = 0xe0;
        pub const m_bMovementActive: usize = 0xe4;
        pub const m_vBoundaryDistCachedPos: usize = 0xe8;
        pub const m_flBoundaryDistCached: usize = 0xf4;
        pub const m_motorGroundAnimgraph: usize = 0x100;
        pub const m_bIsExecutingMoveSolve: usize = 0x820;
        pub const m_pMovementGaitSetRequests: usize = 0xd88;
        pub const m_pMovementGaitRequests: usize = 0xda0;
        pub const m_sDesiredMovementGaitSetId: usize = 0xdc0;
        pub const m_sDesiredMovementSettingsId: usize = 0xdc8;
        pub const m_sDesiredMovementGaitId: usize = 0xdd0;
        pub const m_sCurrentMovementGaitSetId: usize = 0xdd8;
        pub const m_sCurrentMovementSettingsId: usize = 0xde0;
        pub const m_sCurrentMovementGaitId: usize = 0xde8;
        pub const m_pStanceRequests: usize = 0xdf0;
        pub const m_bStanceCapabilities: usize = 0xdfc;
        pub const m_bTemporaryDisabledStances: usize = 0xdff;
        pub const m_nDesiredStance: usize = 0xe04;
        pub const m_nCurrentStance: usize = 0xe08;
    }

    // Parent: None
    pub mod CCollisionProperty {
        pub const m_collisionAttribute: usize = 0x10;
        pub const m_vecMins: usize = 0x40;
        pub const m_vecMaxs: usize = 0x4c;
        pub const m_usSolidFlags: usize = 0x5a;
        pub const m_nSolidType: usize = 0x5b;
        pub const m_triggerBloat: usize = 0x5c;
        pub const m_nSurroundType: usize = 0x5d;
        pub const m_CollisionGroup: usize = 0x5e;
        pub const m_nEnablePhysics: usize = 0x5f;
        pub const m_flBoundingRadius: usize = 0x60;
        pub const m_vecSpecifiedSurroundingMins: usize = 0x64;
        pub const m_vecSpecifiedSurroundingMaxs: usize = 0x70;
        pub const m_vecSurroundingMaxs: usize = 0x7c;
        pub const m_vecSurroundingMins: usize = 0x88;
        pub const m_vCapsuleCenter1: usize = 0x94;
        pub const m_vCapsuleCenter2: usize = 0xa0;
        pub const m_flCapsuleRadius: usize = 0xac;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelCatapultTrigger {
        pub const m_vLaunchTarget: usize = 0x8e0;
        pub const m_flLaunchSpeed: usize = 0x8ec;
        pub const m_nameTarget: usize = 0x8f0;
    }

    // Parent: CBaseFilter
    pub mod CFilterMassGreater {
        pub const m_fFilterMass: usize = 0x4d8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Cadence_Crescendo_AOE {
        pub const m_nTicks: usize = 0x110;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier {
        pub const m_hAOEWarningParticle: usize = 0xd0;
        pub const m_nCastParticleIndex: usize = 0x458;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityThumper4VData {
        pub const m_PullAOEModifier: usize = 0x1818;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SilencerProcActiveVData {
        pub const m_TracerParticle: usize = 0x780;
        pub const m_SilencerActiveParticle: usize = 0x860;
        pub const m_SilenceActiveModifier: usize = 0x940;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_DivineBarrier_VData {
        pub const m_DivineBarrierModifier: usize = 0x18b8;
        pub const m_CastParticle: usize = 0x18c8;
        pub const m_strPurgeSound: usize = 0x19a8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Climb_RopeVData {
        pub const m_flMinButtonHoldTimeToActivate: usize = 0x1818;
        pub const m_flClimbSpeedUp: usize = 0x181c;
        pub const m_flClimbSpeedDown: usize = 0x1820;
        pub const m_flClimbSpeedDownMax: usize = 0x1824;
        pub const m_flClimbDownAccelTime: usize = 0x1828;
        pub const m_flLatchSpeed: usize = 0x182c;
        pub const m_flAttachOffset: usize = 0x1830;
        pub const m_flMinReconnectTime: usize = 0x1834;
        pub const m_flSideMoveReduction: usize = 0x1838;
        pub const m_flTopOffset: usize = 0x183c;
        pub const m_flBottomOffset: usize = 0x1840;
        pub const m_flTraceRadiusSize: usize = 0x1844;
        pub const m_flStopTimeToShoot: usize = 0x1848;
        pub const m_flJumpOffVertical: usize = 0x184c;
        pub const m_flJumpOffHorizontal: usize = 0x1850;
        pub const m_flDuckOffVertical: usize = 0x1854;
        pub const m_flDuckOffHorizontal: usize = 0x1858;
        pub const m_flActivateRange: usize = 0x185c;
        pub const m_flJumpToRoofRayCheckDist: usize = 0x1860;
        pub const m_flMinTimeToRoofCheck: usize = 0x1864;
        pub const m_flTimeToHintRefresh: usize = 0x1868;
        pub const m_iMaxHintCount: usize = 0x186c;
        pub const m_flClimbRopeSlowDurationOnHit: usize = 0x1870;
        pub const m_flCameraRotateSpeed: usize = 0x1874;
        pub const m_flCameraRotateMaxTime: usize = 0x1878;
        pub const m_ClimbRopeSlowOnHitModifier: usize = 0x1880;
        pub const m_ClimbRopeSlowFromRecentDamageModifier: usize = 0x1890;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Refresher {
    }

    // Parent: CBaseEntity
    pub mod CEnableMotionFixup {
    }

    // Parent: CLogicAutosave
    pub mod CLogicActiveAutosave {
        pub const m_TriggerHitPoints: usize = 0x4b0;
        pub const m_flTimeToTrigger: usize = 0x4b4;
        pub const m_flStartTime: usize = 0x4b8;
        pub const m_flDangerousTime: usize = 0x4bc;
    }

    // Parent: CLogicalEntity
    pub mod CMathCounter {
        pub const m_flMin: usize = 0x4a0;
        pub const m_flMax: usize = 0x4a4;
        pub const m_bHitMin: usize = 0x4a8;
        pub const m_bHitMax: usize = 0x4a9;
        pub const m_bDisabled: usize = 0x4aa;
        pub const m_OutValue: usize = 0x4b0;
        pub const m_OnGetValue: usize = 0x4d0;
        pub const m_OnHitMin: usize = 0x4f0;
        pub const m_OnHitMax: usize = 0x508;
        pub const m_OnChangedFromMin: usize = 0x520;
        pub const m_OnChangedFromMax: usize = 0x538;
    }

    // Parent: None
    pub mod CCitadelRecentDamage {
        pub const m_flLastDamageTime: usize = 0x8;
        pub const m_flStartTime: usize = 0xc;
        pub const m_flEndTime: usize = 0x10;
        pub const m_hPlayerEntToStore: usize = 0x14;
    }

    // Parent: CEntityComponent
    pub mod CCitadelRegenComponent {
        pub const m_flLastRegenThinkTime: usize = 0x10;
        pub const m_flRegenAccumulator: usize = 0x14;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Werewolf_UnloadGun2 {
        pub const m_tActiveEndTime: usize = 0xf74;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PunkgoatBlastedPassive {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Priest_StackingDefense {
    }

    // Parent: CCitadel_Ability_Melee_Base
    pub mod CCitadel_Ability_Uppercut {
        pub const m_TypeIDStickyBombAttached: usize = 0x10a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PrimaryWeapon {
        pub const m_flLastReloadStartTime: usize = 0xf70;
        pub const m_flNextPrimaryAttack: usize = 0xf74;
        pub const m_flDelayedShotCreateTime: usize = 0xf78;
        pub const m_iClip: usize = 0x1098;
        pub const m_iBonusClip: usize = 0x109c;
        pub const m_nNumContinuousShots: usize = 0x10a0;
        pub const m_flContinuousShotStartTime: usize = 0x10a4;
        pub const m_flSpreadPenalty: usize = 0x10a8;
        pub const m_flZoomTime: usize = 0x10ac;
        pub const m_flZoomOutTime: usize = 0x10b0;
        pub const m_iSpreadIndex: usize = 0x10b4;
        pub const m_nShotRecoilIndex: usize = 0x10b6;
        pub const m_flNextShotRecoilRecoveryTime: usize = 0x10b8;
        pub const m_bIsZoomed: usize = 0x10bc;
        pub const m_nBurstShotsRemaining: usize = 0x10bd;
        pub const m_nShotNumber: usize = 0x10c0;
        pub const m_bInReload: usize = 0x10c4;
        pub const m_bSingleShotReloadFirstBullet: usize = 0x10c5;
        pub const m_reloadQueuedStartTime: usize = 0x10c8;
        pub const m_flReloadAvailableTime: usize = 0x10cc;
        pub const m_bCanActiveReload: usize = 0x10d0;
        pub const m_flLastAttackTime: usize = 0x10d4;
        pub const m_flNextAttackDelayStartTime: usize = 0x10d8;
        pub const m_flNextAttackDelayEndTime: usize = 0x10dc;
        pub const m_flAttackDelayPauseTotalTime: usize = 0x10e0;
        pub const m_flAttackDelayPauseEndTime: usize = 0x10e4;
        pub const m_eNextAttackDelayReason: usize = 0x10e8;
        pub const m_bInputPressedWhileSelected: usize = 0x10ec;
        pub const m_eActiveFireMode: usize = 0x10f0;
        pub const m_bPassiveFXActive: usize = 0x10f4;
        pub const m_flAmmoFrac: usize = 0x10f8;
        pub const m_bFiredRecently: usize = 0x10fc;
        pub const m_angRecoilAngles: usize = 0x1100;
        pub const m_angRecoilToAdd: usize = 0x110c;
        pub const m_angRecoilRecovery: usize = 0x1118;
        pub const m_flRecoilStartTime: usize = 0x1124;
        pub const m_flRecoilRecoverySpeed: usize = 0x1128;
        pub const m_flAddApproachSpeed: usize = 0x112c;
        pub const m_currentSpread: usize = 0x1130;
        pub const m_currentMaxSpread: usize = 0x1134;
        pub const m_currentFireSpread: usize = 0x1138;
        pub const m_flCurrentSpinRate: usize = 0x113c;
        pub const m_bWasSpinningUp: usize = 0x1140;
        pub const m_fFireDuration: usize = 0x1144;
        pub const m_bPrimaryAttackHeld: usize = 0x1148;
        pub const m_bFireOnEmpty: usize = 0x1149;
        pub const m_bHasReleasedForSemiAuto: usize = 0x114a;
        pub const m_flNextDisarmSound: usize = 0x114c;
        pub const m_nPrimaryMuzzleIndex: usize = 0x1178;
        pub const m_flPrimaryMuzzleResetTime: usize = 0x117c;
        pub const m_nSecondaryMuzzleIndex: usize = 0x1180;
        pub const m_flSecondaryMuzzleResetTime: usize = 0x1184;
        pub const m_nRandomStreak: usize = 0x1188;
        pub const m_nLastUsedMuzzleIndex: usize = 0x118c;
        pub const m_nClipSizeBeforeSwap: usize = 0x1190;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_BulletShredImbue_ProcVData {
        pub const m_BuffModifier: usize = 0x780;
        pub const m_BuffNonHeroModifier: usize = 0x790;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TechCleaveVData {
        pub const m_CleavePlayerParticle: usize = 0x750;
        pub const m_CleaveTrooperParticle: usize = 0x830;
        pub const m_sVictimSound: usize = 0x910;
    }

    // Parent: CScaleFunctionVData
    pub mod CScaleFunctionAbilityProperty_HealingBoonScaleVData {
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadelDruidHealingFruit {
    }

    // Parent: CPointEntity
    pub mod CNavLinkAreaEntity {
        pub const m_flWidth: usize = 0x4a0;
        pub const m_vLocatorOffset: usize = 0x4a4;
        pub const m_qLocatorAnglesOffset: usize = 0x4b0;
        pub const m_strEndLocatorParentName: usize = 0x4c0;
        pub const m_hEndLocatorParent: usize = 0x4c8;
        pub const m_endLocator: usize = 0x4d0;
        pub const m_strMovementForward: usize = 0x500;
        pub const m_strMovementReverse: usize = 0x508;
        pub const m_bEnabled: usize = 0x540;
        pub const m_bAllowCrossMovableConnections: usize = 0x541;
        pub const m_strFilterName: usize = 0x548;
        pub const m_hFilter: usize = 0x550;
        pub const m_OnNavLinkStart: usize = 0x558;
        pub const m_OnNavLinkFinish: usize = 0x570;
        pub const m_bIsTerminus: usize = 0x588;
        pub const m_vecSavedConnections: usize = 0x590;
        pub const m_vecNpcUsersByNavLink: usize = 0x5a8;
        pub const m_szListenForAnimTag: usize = 0x5c0;
        pub const m_bIsListeningForAnimTag: usize = 0x5c8;
        pub const m_OnAnimTagFired: usize = 0x5d8;
        pub const m_OnAnimTagStart: usize = 0x5f0;
        pub const m_OnAnimTagEnd: usize = 0x608;
        pub const m_nProcessOrder: usize = 0x620;
        pub const m_nSplits: usize = 0x624;
    }

    // Parent: None
    pub mod CCitadelPlayerBot {
    }

    // Parent: CAttributeManager
    pub mod CAttributeContainer {
        pub const m_Item: usize = 0x68;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_TransformationWatcherVData {
        pub const m_WerewolfModifier: usize = 0x750;
        pub const m_HunterModifier: usize = 0x760;
        pub const m_vecWerewolfAbilitySlots: usize = 0x770;
        pub const m_vecHunterAbilitySlots: usize = 0x788;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Werewolf_Transformation {
        pub const m_bIsTransformed: usize = 0x1570;
        pub const m_bIsTransformingBack: usize = 0x1571;
        pub const m_tLastRegenComponentThinkTime: usize = 0x1574;
        pub const m_tForceTransformTime: usize = 0x157c;
        pub const m_flWerewolfStartTime: usize = 0x1580;
        pub const m_pWerewolfModifier: usize = 0x1588;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_AirheartUltVData {
        pub const m_FlareParticle: usize = 0x1818;
        pub const m_TeleportParticle: usize = 0x18f8;
        pub const m_PackageOpenParticle: usize = 0x19d8;
        pub const m_PackagePunchedParticle: usize = 0x1ab8;
        pub const m_PackageCrashedOnGroundParticle: usize = 0x1b98;
        pub const m_PackageModel: usize = 0x1c78;
        pub const m_flModelScale: usize = 0x1d58;
        pub const m_flGravitySlowFalling: usize = 0x1d5c;
        pub const m_flGravityFalling: usize = 0x1d60;
        pub const m_flMaxElevation: usize = 0x1d64;
        pub const m_flSlowFallElevationStart: usize = 0x1d68;
        pub const m_flSlowFallElevationEnd: usize = 0x1d6c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Familiar_AttachHealVData {
        pub const m_HealBurstParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Fathom_ScaldingSpray_Target_VData {
        pub const m_DrainParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Mirage_SandPhantom_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_Tornado_Lift {
        pub const m_vecFloatDest: usize = 0x1d0;
        pub const m_vecStartingPos: usize = 0x1dc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VoidSphere_Buff {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_Arcane_Eater_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AblativeCoatResistBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TechRangeClamp {
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
    pub mod CItem_WitheringWhip_VData {
        pub const m_DebuffModifier: usize = 0x19c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierT3BossWaveTargetVData {
        pub const m_strSilenceTargetSound: usize = 0x750;
        pub const m_CurseModifier: usize = 0x760;
        pub const m_flTossUpStrength: usize = 0x770;
        pub const m_flTossHorizontalMax: usize = 0x774;
        pub const m_flTossHorizontalMin: usize = 0x778;
        pub const m_flDebuffDuration: usize = 0x77c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TeamRelativeParticle {
        pub const m_nParentViewParticle: usize = 0xd0;
        pub const m_nOtherPlayerViewParticle: usize = 0xd4;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CinematicIntro_Player_VData {
        pub const m_flZiplineStartDelayDuration: usize = 0x750;
        pub const m_vecPostProcessEffects: usize = 0x758;
        pub const m_bTeamSpecificCameras: usize = 0x770;
        pub const m_vecIntroCameraSequenceAmber: usize = 0x778;
        pub const m_vecIntroCameraSequenceSapphire: usize = 0x790;
        pub const m_vecIntroCameraSequence: usize = 0x7a8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FamiliarHelper_InvisWatcher {
        pub const m_flInvisLevel: usize = 0xd0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Werewolf_UnloadGun {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf {
        pub const m_mapHunterAbilities: usize = 0x450;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_KnockbackVData {
        pub const m_SlowModifier: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x1828;
        pub const m_DebuffModifier: usize = 0x1838;
        pub const m_KnockbackToWallModifier: usize = 0x1848;
        pub const m_KnockbackModifier: usize = 0x1858;
        pub const m_ShootParticle: usize = 0x1868;
        pub const m_InitialImpactParticle: usize = 0x1948;
        pub const m_WallImpactParticle: usize = 0x1a28;
        pub const m_strShootSound: usize = 0x1b08;
        pub const m_bDoWallSlamBehavior: usize = 0x1b18;
        pub const m_flMinTravelTime: usize = 0x1b1c;
        pub const m_flTravelTimeFudge: usize = 0x1b20;
        pub const m_iFakeBulletCount: usize = 0x1b24;
        pub const m_flFakeBulletSpread: usize = 0x1b28;
        pub const m_flFakeBulletDistanceFudge: usize = 0x1b2c;
        pub const m_flDotProductToStun: usize = 0x1b30;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTargetPracticeVData {
        pub const m_TargetPracticeSelfModifier: usize = 0x1818;
        pub const m_TargetPracticeEnemyModifier: usize = 0x1828;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ViscousBall {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_GuardianWard_VData {
        pub const m_GuardianWardModifier: usize = 0x18b8;
        pub const m_CastParticle: usize = 0x18c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Upgrade_ArcaneSurge_VData {
        pub const m_SurgeWindowModifier: usize = 0x750;
        pub const m_AbilityWatcherModifier: usize = 0x760;
        pub const m_flMaxSurgeTime: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Near_Climbable_Rope {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ExplosiveShots {
        pub const m_vecHitEnts: usize = 0xd0;
        pub const m_bExplosionCanHitMultipleTimes: usize = 0xe8;
    }

    // Parent: None
    pub mod PulseSelectorOutflowList_t {
        pub const m_Outflows: usize = 0x0;
    }

    // Parent: CBaseFilter
    pub mod CFilterContext {
        pub const m_iFilterContext: usize = 0x4d8;
    }

    // Parent: CLightDirectionalEntity
    pub mod CLightEnvironmentEntity {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Familiar_SpotlightAura {
        pub const m_vRightVectorWS: usize = 0x110;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IdolCashInTimer {
    }

    // Parent: CBaseModelEntity
    pub mod CEnvDecal {
        pub const m_hDecalMaterial: usize = 0x780;
        pub const m_flWidth: usize = 0x788;
        pub const m_flHeight: usize = 0x78c;
        pub const m_flDepth: usize = 0x790;
        pub const m_nRenderOrder: usize = 0x794;
        pub const m_bProjectOnWorld: usize = 0x798;
        pub const m_bProjectOnCharacters: usize = 0x799;
        pub const m_bProjectOnWater: usize = 0x79a;
        pub const m_flDepthSortBias: usize = 0x79c;
    }

    // Parent: CBaseEntity
    pub mod CEnvVolumetricFogVolume {
        pub const m_bActive: usize = 0x4a0;
        pub const m_vBoxMins: usize = 0x4a4;
        pub const m_vBoxMaxs: usize = 0x4b0;
        pub const m_bStartDisabled: usize = 0x4bc;
        pub const m_bIndirectUseLPVs: usize = 0x4bd;
        pub const m_flStrength: usize = 0x4c0;
        pub const m_nFalloffShape: usize = 0x4c4;
        pub const m_flFalloffExponent: usize = 0x4c8;
        pub const m_flHeightFogDepth: usize = 0x4cc;
        pub const m_fHeightFogEdgeWidth: usize = 0x4d0;
        pub const m_fIndirectLightStrength: usize = 0x4d4;
        pub const m_fSunLightStrength: usize = 0x4d8;
        pub const m_fNoiseStrength: usize = 0x4dc;
        pub const m_TintColor: usize = 0x4e0;
        pub const m_bOverrideTintColor: usize = 0x4e4;
        pub const m_bOverrideIndirectLightStrength: usize = 0x4e5;
        pub const m_bOverrideSunLightStrength: usize = 0x4e6;
        pub const m_bOverrideNoiseStrength: usize = 0x4e7;
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CCitadelPlayerBotNPCBrainVData {
        pub const m_flJumpMaxRise: usize = 0x1348;
        pub const m_flAirJumpMin: usize = 0x134c;
        pub const m_flJumpMaxDrop: usize = 0x1350;
        pub const m_flJumpMaxDist: usize = 0x1354;
        pub const m_flJumpMinDist: usize = 0x1358;
        pub const m_flClimbUpCostBase: usize = 0x135c;
        pub const m_flClimbUpCostScalar: usize = 0x1360;
        pub const m_flFaceTargetDistance: usize = 0x1364;
        pub const m_flNavGoalTolerance: usize = 0x1368;
        pub const m_flVerticalAttachOffset: usize = 0x136c;
        pub const m_flStuckTime: usize = 0x1370;
        pub const m_flStuckTimeAir: usize = 0x1374;
        pub const m_flMajorStuckTime: usize = 0x1378;
        pub const m_unMajorStuckAttemptCount: usize = 0x137c;
        pub const m_flStuckDistance: usize = 0x1380;
        pub const m_flMaxPathDistance: usize = 0x1384;
        pub const m_flMinLanePathDistance: usize = 0x1388;
        pub const m_flEnemyDistanceForReload: usize = 0x138c;
        pub const m_flReloadEnemyFarPct: usize = 0x1390;
        pub const m_flReloadEnemyLoSPct: usize = 0x1394;
        pub const m_flReloadEnemyLosTime: usize = 0x1398;
        pub const m_flMinShootTimeToReload: usize = 0x139c;
        pub const m_flDashDamageThreshold: usize = 0x13a0;
        pub const m_flDashDamageTickDown: usize = 0x13a4;
        pub const m_flMinDesiredDashDist: usize = 0x13a8;
        pub const m_flMinAbilityAimTime: usize = 0x13ac;
        pub const m_flDisengageFromEnemyToLaneDist: usize = 0x13b0;
        pub const m_flDefendBaseSearchRadius: usize = 0x13b4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Werewolf_TransformationVData {
        pub const m_ReadyModifier: usize = 0x1818;
        pub const m_WerewolfModifier: usize = 0x1828;
        pub const m_KillCreditModifier: usize = 0x1838;
        pub const m_TransformEndParticle: usize = 0x1848;
        pub const m_TransformKillParticle: usize = 0x1928;
        pub const m_bAutoTransformOnReadyComplete: usize = 0x1a08;
        pub const m_strEndingWarningSound: usize = 0x1a10;
        pub const m_strAG2PostCastAction: usize = 0x1a20;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTargetdummy2VData {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityKobunVData {
        pub const m_vSummonFollowOffset: usize = 0x1818;
        pub const m_CloneModifier: usize = 0x1828;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpreadingFire_DOT_VData {
        pub const m_sSpreadingFireParticle: usize = 0x750;
        pub const m_sSpreadingFireTetherParticle: usize = 0x830;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierLockDownDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
        pub const m_AOEParticleCaster: usize = 0x830;
        pub const m_AOEParticleEnemy: usize = 0x910;
        pub const m_AOEParticleOthers: usize = 0x9f0;
        pub const m_strFollowLoop: usize = 0xad0;
        pub const m_strEscapedSound: usize = 0xae0;
        pub const m_RootModifier: usize = 0xaf0;
        pub const m_BulletResistModifier: usize = 0xb00;
        pub const m_SilencedModifier: usize = 0xb10;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bolo {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier2Boss_LaserCharge {
    }

    // Parent: CBaseEntity
    pub mod CServerOnlyEntity {
    }

    // Parent: None
    pub mod CPulseCell_PlaySequenceCursorState_t {
        pub const m_hTarget: usize = 0x0;
    }

    // Parent: CBodyComponent
    pub mod CBodyComponentSkeletonInstance {
        pub const m_skeletonInstance: usize = 0x80;
    }

    // Parent: CItem
    pub mod CItemGeneric {
        pub const m_bHasTriggerRadius: usize = 0xb44;
        pub const m_bHasPickupRadius: usize = 0xb45;
        pub const m_flPickupRadiusSqr: usize = 0xb48;
        pub const m_flTriggerRadiusSqr: usize = 0xb4c;
        pub const m_flLastPickupCheck: usize = 0xb50;
        pub const m_bPlayerCounterListenerAdded: usize = 0xb54;
        pub const m_bPlayerInTriggerRadius: usize = 0xb55;
        pub const m_hSpawnParticleEffect: usize = 0xb58;
        pub const m_pAmbientSoundEffect: usize = 0xb60;
        pub const m_bAutoStartAmbientSound: usize = 0xb68;
        pub const m_pSpawnScriptFunction: usize = 0xb70;
        pub const m_hPickupParticleEffect: usize = 0xb78;
        pub const m_pPickupSoundEffect: usize = 0xb80;
        pub const m_pPickupScriptFunction: usize = 0xb88;
        pub const m_hTimeoutParticleEffect: usize = 0xb90;
        pub const m_pTimeoutSoundEffect: usize = 0xb98;
        pub const m_pTimeoutScriptFunction: usize = 0xba0;
        pub const m_pPickupFilterName: usize = 0xba8;
        pub const m_hPickupFilter: usize = 0xbb0;
        pub const m_OnPickup: usize = 0xbb8;
        pub const m_OnTimeout: usize = 0xbd0;
        pub const m_OnTriggerStartTouch: usize = 0xbe8;
        pub const m_OnTriggerTouch: usize = 0xc00;
        pub const m_OnTriggerEndTouch: usize = 0xc18;
        pub const m_pAllowPickupScriptFunction: usize = 0xc30;
        pub const m_flPickupRadius: usize = 0xc38;
        pub const m_flTriggerRadius: usize = 0xc3c;
        pub const m_pTriggerSoundEffect: usize = 0xc40;
        pub const m_bGlowWhenInTrigger: usize = 0xc48;
        pub const m_glowColor: usize = 0xc49;
        pub const m_bUseable: usize = 0xc4d;
        pub const m_hTriggerHelper: usize = 0xc50;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_FeatherBoomerang {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ItemWalkBack {
    }

    // Parent: CBaseEntity
    pub mod CPointValueRemapper {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_bUpdateOnClient: usize = 0x4a1;
        pub const m_nInputType: usize = 0x4a4;
        pub const m_iszRemapLineStartName: usize = 0x4a8;
        pub const m_iszRemapLineEndName: usize = 0x4b0;
        pub const m_hRemapLineStart: usize = 0x4b8;
        pub const m_hRemapLineEnd: usize = 0x4bc;
        pub const m_flMaximumChangePerSecond: usize = 0x4c0;
        pub const m_flDisengageDistance: usize = 0x4c4;
        pub const m_flEngageDistance: usize = 0x4c8;
        pub const m_bRequiresUseKey: usize = 0x4cc;
        pub const m_nOutputType: usize = 0x4d0;
        pub const m_iszOutputEntityName: usize = 0x4d8;
        pub const m_iszOutputEntity2Name: usize = 0x4e0;
        pub const m_iszOutputEntity3Name: usize = 0x4e8;
        pub const m_iszOutputEntity4Name: usize = 0x4f0;
        pub const m_hOutputEntities: usize = 0x4f8;
        pub const m_nHapticsType: usize = 0x510;
        pub const m_nMomentumType: usize = 0x514;
        pub const m_flMomentumModifier: usize = 0x518;
        pub const m_flSnapValue: usize = 0x51c;
        pub const m_flCurrentMomentum: usize = 0x520;
        pub const m_nRatchetType: usize = 0x524;
        pub const m_flRatchetOffset: usize = 0x528;
        pub const m_flInputOffset: usize = 0x52c;
        pub const m_bEngaged: usize = 0x530;
        pub const m_bFirstUpdate: usize = 0x531;
        pub const m_flPreviousValue: usize = 0x534;
        pub const m_flPreviousUpdateTickTime: usize = 0x538;
        pub const m_vecPreviousTestPoint: usize = 0x53c;
        pub const m_hUsingPlayer: usize = 0x548;
        pub const m_flCustomOutputValue: usize = 0x54c;
        pub const m_iszSoundEngage: usize = 0x550;
        pub const m_iszSoundDisengage: usize = 0x558;
        pub const m_iszSoundReachedValueZero: usize = 0x560;
        pub const m_iszSoundReachedValueOne: usize = 0x568;
        pub const m_iszSoundMovingLoop: usize = 0x570;
        pub const m_Position: usize = 0x590;
        pub const m_PositionDelta: usize = 0x5b0;
        pub const m_OnReachedValueZero: usize = 0x5d0;
        pub const m_OnReachedValueOne: usize = 0x5e8;
        pub const m_OnReachedValueCustom: usize = 0x600;
        pub const m_OnEngage: usize = 0x618;
        pub const m_OnDisengage: usize = 0x630;
    }

    // Parent: CEntityComponent
    pub mod CCitadelMinimapComponent {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierDoormanHotelImposterFXVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Fathom_Breach_VData {
        pub const m_ExplosionParticle: usize = 0x1818;
        pub const m_LeapParticle: usize = 0x18f8;
        pub const m_strInFlightAnimGraphParam: usize = 0x19d8;
        pub const m_strExplodeSound: usize = 0x19e0;
        pub const m_InFlightModifier: usize = 0x19f0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Rutger_ForceField {
        pub const m_hChargingParticle: usize = 0xf70;
        pub const m_hExplodeParticle: usize = 0xf74;
        pub const m_vSpawnPos: usize = 0xf78;
        pub const m_fTimeToDestroyForceField: usize = 0xf84;
        pub const m_bFirstThink: usize = 0xf88;
    }

    // Parent: CCitadel_Modifier_Sleep
    pub mod CCitadel_Modifier_Cadence_Sleeping {
    }

    // Parent: CCitadelYamatoBaseVData
    pub mod CCitadel_Ability_InfinitySlashVData {
        pub const m_flRiseSpeed: usize = 0x1820;
        pub const m_flRiseDuration: usize = 0x1824;
        pub const m_flSpeedDecayScale: usize = 0x1828;
        pub const m_flExplodeHoldTime: usize = 0x182c;
        pub const m_flExplosionShakeAmplitude: usize = 0x1830;
        pub const m_flExplosionShakeFrequency: usize = 0x1834;
        pub const m_flExplosionShakeDuration: usize = 0x1838;
        pub const m_AOERangeEffect: usize = 0x1840;
        pub const m_AnimCastEffect: usize = 0x1920;
        pub const m_cameraSequenceExplosion: usize = 0x1a00;
        pub const m_BuffModifier: usize = 0x1a88;
        pub const m_BuffTimerModifier: usize = 0x1a98;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTrappersBoloVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_TrapModifier: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BoucePadVData {
        pub const m_StompParticle: usize = 0x750;
        pub const m_strImpactSound: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IcePath_Friendly {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_CloakingDeviceActive_VData {
        pub const m_AmbushModifier: usize = 0x18b8;
        pub const m_InvisModifier: usize = 0x18c8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_QuickSilver_Watcher {
        pub const m_bProcNextHit: usize = 0x38c;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Upgrade_ArcaneSurge_AbilityWatcher {
        pub const m_hBuffedAbility: usize = 0xd0;
        pub const m_bEnabled: usize = 0xd4;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Infuser_VData {
        pub const m_BuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MeleeDamageOnly {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hero_Clone {
        pub const m_bMimicOwner: usize = 0xd0;
    }

    // Parent: CAI_Component
    pub mod CAI_Senses {
        pub const m_flLookDist: usize = 0x50;
        pub const m_flLookDistIdle: usize = 0x54;
        pub const m_flLastLookDist: usize = 0x58;
        pub const m_TimeLastLook: usize = 0x5c;
        pub const m_SeenHighPriority: usize = 0x60;
        pub const m_SeenNPCs: usize = 0x78;
        pub const m_SeenMisc: usize = 0x90;
        pub const m_GatheredEntities: usize = 0xa8;
        pub const m_GatheredProxyEntities: usize = 0xc0;
        pub const m_SeenArrays: usize = 0xd8;
        pub const m_TimeLastLookHighPriority: usize = 0xf0;
        pub const m_TimeLastLookNPCs: usize = 0xf4;
        pub const m_TimeLastLookMisc: usize = 0xf8;
        pub const m_iSensingFlags: usize = 0xfc;
        pub const m_nExclusionFlags: usize = 0x100;
        pub const m_pCachedTaskEvent: usize = 0x108;
        pub const m_flSensingSensitivity: usize = 0x110;
        pub const m_nSensingInterests: usize = 0x118;
        pub const m_vecAudibleEvents: usize = 0x120;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Tokamak_EnemySmokeAOE_VData {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ProjectileTest {
        pub const m_vLaunchPosition: usize = 0xf78;
        pub const m_qLaunchAngle: usize = 0xf84;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_DPS_Aura {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SkyRunner_Ability04 {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Operative_Revelation_Caster {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShieldedSentry {
        pub const m_vecDeployedSentries: usize = 0xf98;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_UIHudMessage {
        pub const m_eModifierValue: usize = 0xd0;
        pub const m_flValue: usize = 0xd4;
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_Health {
    }

    // Parent: CBaseAnimGraph
    pub mod CRagdollProp {
        pub const m_ragdoll: usize = 0xaa0;
        pub const m_bStartDisabled: usize = 0xaf0;
        pub const m_ragEnabled: usize = 0xaf8;
        pub const m_ragPos: usize = 0xb10;
        pub const m_ragAngles: usize = 0xb28;
        pub const m_lastUpdateTickCount: usize = 0xb40;
        pub const m_allAsleep: usize = 0xb44;
        pub const m_bFirstCollisionAfterLaunch: usize = 0xb45;
        pub const m_hDamageEntity: usize = 0xb48;
        pub const m_hKiller: usize = 0xb4c;
        pub const m_hPhysicsAttacker: usize = 0xb50;
        pub const m_flLastPhysicsInfluenceTime: usize = 0xb54;
        pub const m_flFadeOutStartTime: usize = 0xb58;
        pub const m_flFadeTime: usize = 0xb5c;
        pub const m_vecLastOrigin: usize = 0xb60;
        pub const m_flAwakeTime: usize = 0xb6c;
        pub const m_flLastOriginChangeTime: usize = 0xb70;
        pub const m_strOriginClassName: usize = 0xb78;
        pub const m_strSourceClassName: usize = 0xb80;
        pub const m_bHasBeenPhysgunned: usize = 0xb88;
        pub const m_bAllowStretch: usize = 0xb89;
        pub const m_flBlendWeight: usize = 0xb8c;
        pub const m_flDefaultFadeScale: usize = 0xb90;
        pub const m_ragdollMins: usize = 0xb98;
        pub const m_ragdollMaxs: usize = 0xbb0;
        pub const m_bShouldDeleteActivationRecord: usize = 0xbc8;
    }

    // Parent: CNodeEnt
    pub mod CNodeEnt_InfoHint {
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoTrooperBossSpawn {
        pub const m_strBossEntityName: usize = 0x4c8;
        pub const m_iLane: usize = 0x4d0;
        pub const m_iCoverGroupID: usize = 0x4d4;
        pub const m_bReinforcementsOnly: usize = 0x4e0;
        pub const m_bTrooperTestSpawner: usize = 0x4e1;
        pub const m_eventOnTrooperKilled: usize = 0x4f0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_TrackingBomb {
        pub const m_bWithinTrackingRange: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_Hotel_Imposter {
        pub const m_hRagdoll: usize = 0xd0;
        pub const m_vImposterPos: usize = 0xd4;
        pub const m_bPlayEnd: usize = 0xe0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PoisonJar_Debuff {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGenericPerson2VData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Backdoor_ProtectionVData {
        pub const m_flActivationTime: usize = 0x750;
        pub const m_flBackdoorProtectionDamageMitigationFromPlayers: usize = 0x754;
        pub const m_flBackdoorProtectionDamageMitigationFromPlayers_Streetbrawl: usize = 0x758;
        pub const m_flHealthPerSecondRegen: usize = 0x75c;
        pub const m_flOutOfCombatHealthRegen: usize = 0x760;
        pub const m_flOutOfCombatRegenDelay: usize = 0x764;
        pub const m_flEffectsLingerTime: usize = 0x768;
        pub const m_ShieldImpactParticle: usize = 0x770;
        pub const m_ShieldActiveParticle: usize = 0x850;
        pub const m_strActiveEffectConfigName: usize = 0x930;
        pub const flShieldImpactDirectionOffset: usize = 0x938;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hero_Testing_Damage_AuraDebuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_NearbyEnemyResistVData {
        pub const m_flNearbyEnemyResistRange: usize = 0x750;
        pub const m_flResistValues: usize = 0x758;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_AbilityCharges {
    }

    // Parent: CCitadelItemPickupVData
    pub mod CCitadelItemKothSpawnerVData {
        pub const m_OnGroundTouchParticle: usize = 0x108;
    }

    // Parent: INavLinkMotor
    pub mod CNavLinkMotor_NonZUp_Transition {
        pub const m_transitionTimer: usize = 0x18;
        pub const m_xTransitionOrigin: usize = 0x30;
        pub const m_xTransitionTarget: usize = 0x50;
    }

    // Parent: CEntityComponent
    pub mod CScriptComponent {
        pub const m_scriptClassName: usize = 0x30;
    }

    // Parent: CItemGeneric
    pub mod CCitadelItemMetal {
    }

    // Parent: CBasePlatTrain
    pub mod CFuncTrain {
        pub const m_hCurrentTarget: usize = 0x828;
        pub const m_activated: usize = 0x82c;
        pub const m_hEnemy: usize = 0x830;
        pub const m_flBlockDamage: usize = 0x834;
        pub const m_flNextBlockTime: usize = 0x838;
        pub const m_iszLastTarget: usize = 0x840;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Thumper_PullAOE_VData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Rolling_FireBall {
        pub const m_bHitWorld: usize = 0x860;
        pub const m_vInitialDirection: usize = 0x864;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelModifierAura_ConeVData {
        pub const m_flAuraTargetingConeHalfWidth: usize = 0x7a8;
        pub const m_flAuraTargetingConeAngle: usize = 0x7ac;
    }

    // Parent: CBaseEntity
    pub mod CAI_ChangeHintGroup {
        pub const m_iSearchType: usize = 0x4a0;
        pub const m_strSearchName: usize = 0x4a8;
        pub const m_strNewHintGroup: usize = 0x4b0;
        pub const m_flRadius: usize = 0x4b8;
    }

    // Parent: CAI_Navigator
    pub mod CAI_CitadelPlayerBotNavigator {
        pub const m_bBlocked: usize = 0x350;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Skyrunner_MagicBeam {
        pub const m_vCastPosition: usize = 0xf70;
        pub const m_qCastAngle: usize = 0xf7c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Swan_AcrobatVData {
        pub const m_StackingModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySummonGangsterVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_Pounce {
        pub const m_bActive: usize = 0x1470;
        pub const m_hCurrentTarget: usize = 0x1474;
        pub const m_hLastCastTarget: usize = 0x1478;
        pub const m_vStartPosition: usize = 0x147c;
        pub const m_vDeparturePosition: usize = 0x1488;
        pub const m_flDepartureTime: usize = 0x1498;
        pub const m_flArrivalTime: usize = 0x14b0;
        pub const m_vLastKnownSafePos: usize = 0x14c8;
        pub const m_bStartedPhase01: usize = 0x14d4;
        pub const m_bStartedPhase02: usize = 0x14d5;
        pub const m_bIsFirstCastCompleted: usize = 0x14d6;
        pub const m_tDoubleCastWindow: usize = 0x14d8;
        pub const m_CastStartParticle: usize = 0x14dc;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Nano_PredatoryStatueVData {
        pub const m_AOEParticle: usize = 0x750;
        pub const m_EnabledParticle: usize = 0x830;
        pub const m_DrainParticle: usize = 0x910;
        pub const m_strEnabledSound: usize = 0x9f0;
        pub const m_strEnabledLoopSound: usize = 0xa00;
        pub const m_strDisabledSound: usize = 0xa10;
        pub const m_strLaserHitSound: usize = 0xa20;
        pub const m_strLaserStartSound: usize = 0xa30;
        pub const m_strLaserLoopSound: usize = 0xa40;
        pub const m_TargetModifier: usize = 0xa50;
        pub const m_RevealModifier: usize = 0xa60;
        pub const m_StatueInvis: usize = 0xa70;
        pub const m_flNewTargetAttackTime: usize = 0xa80;
        pub const m_flMinRevealTime: usize = 0xa84;
        pub const m_flMinDebuffTime: usize = 0xa88;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGuidedArrowVData {
        pub const m_cameraCancelledTransitionBacktoArcher: usize = 0x1818;
        pub const m_cameraExplodedTransitionBackToArcher: usize = 0x18a0;
        pub const m_flCameraHoldAtExplosion: usize = 0x1928;
        pub const m_flFadeIn: usize = 0x192c;
        pub const m_flFadeHoldTime: usize = 0x1930;
        pub const m_flFadeOut: usize = 0x1934;
        pub const m_SpectatingProjectileParticle: usize = 0x1938;
        pub const m_ExplosionParticle: usize = 0x1a18;
        pub const m_GuidedArrowChannelParticle: usize = 0x1af8;
        pub const m_ProjectileModel: usize = 0x1bd8;
        pub const m_ArrowOffsetX: usize = 0x1cb8;
        pub const m_ArrowCameraDistance: usize = 0x1cbc;
        pub const m_ArrowCameraHeightOffset: usize = 0x1cc0;
        pub const m_ArrowInitialPitch: usize = 0x1cc4;
        pub const m_GuidingModifier: usize = 0x1cc8;
        pub const m_DebuffModifier: usize = 0x1cd8;
        pub const m_KillCheckModifier: usize = 0x1ce8;
        pub const m_strExplodeSound: usize = 0x1cf8;
        pub const m_flTrackAmount: usize = 0x1d08;
        pub const m_flSpeedAccel: usize = 0x1d0c;
        pub const m_flSpeedDeccel: usize = 0x1d10;
        pub const m_flBaseProjectileSpeed: usize = 0x1d14;
        pub const m_flMaxProjectileSpeed: usize = 0x1d18;
        pub const m_flArrowModelTurnSpringStrength: usize = 0x1d1c;
        pub const m_flKillCheckWindow: usize = 0x1d20;
        pub const m_flWorldCollideGraceWindow: usize = 0x1d24;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DragEnemyVData {
        pub const m_flForwardOffset: usize = 0x750;
        pub const m_flVerticalOffset: usize = 0x754;
        pub const m_flDragDistance: usize = 0x758;
        pub const m_flForceDistScale: usize = 0x75c;
        pub const m_bZDownOnly: usize = 0x760;
        pub const m_bAnimate: usize = 0x761;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_StunnedVData {
        pub const m_StunnedParticle: usize = 0x750;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelLootTableVData {
        pub const m_vecEntries: usize = 0x30;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_MultiCapturePointVData {
        pub const m_strPreEnableParticle: usize = 0x28;
        pub const m_strOnBecomeEnableParticle: usize = 0x108;
        pub const m_strEnabledParticle: usize = 0x1e8;
        pub const m_strOnFullyCapturedParticle: usize = 0x2c8;
        pub const m_bPingMinimapOnActive: usize = 0x3a8;
        pub const m_EnabledLoopSounds: usize = 0x3b0;
        pub const m_EnemyCapturingLoopSounds: usize = 0x3d8;
        pub const m_FriendlyCapturingLoopSounds: usize = 0x400;
        pub const m_EnemyAndFriendlyCapturingLoopSounds: usize = 0x428;
        pub const m_strPreEnableStartSound: usize = 0x450;
        pub const m_strEnableStartSound: usize = 0x460;
        pub const m_strFullyCapturedSound: usize = 0x470;
        pub const m_modifierCapturer: usize = 0x480;
        pub const m_flDecaySpeed: usize = 0x490;
        pub const m_flTotalTimeToCapture: usize = 0x494;
        pub const m_bDestroyNearbyNeutrals: usize = 0x498;
        pub const m_flHoldAtPercent: usize = 0x49c;
        pub const m_flStepOutGraceWindow: usize = 0x4a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CombatStatus_BulletHit {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_AirheartAbility02VData {
        pub const m_AuraModifier: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Frank_PainAura {
        pub const m_ToggleOnTime: usize = 0xf74;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Operative_UmbrellaManeuver_AirHang_VData {
        pub const m_ExplodeParticle: usize = 0x750;
        pub const m_TracerParticle: usize = 0x830;
        pub const m_ExplodeSound: usize = 0x910;
        pub const m_flAirDrag: usize = 0x920;
        pub const m_flAirSpeed: usize = 0x924;
        pub const m_flFallSpeed: usize = 0x928;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySleepDaggerVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_SleepModifier: usize = 0x18f8;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_CapacitorSlowDebuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Berserker {
        pub const m_flDamageTaken: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierContainmentVictimVData {
        pub const m_AreaParticle: usize = 0x750;
        pub const m_ChainedParticle: usize = 0x830;
        pub const m_DebuffParticle: usize = 0x910;
    }

    // Parent: CTier3BossAbility
    pub mod CCitadel_Ability_Tier3Boss_AoEWave {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_ApplyDebuff_ProcVData {
        pub const m_bUseNonEmbedded: usize = 0x780;
        pub const m_DurationAbilityPropOverride: usize = 0x788;
        pub const m_DebuffModifier: usize = 0x790;
        pub const m_NonEmbeddedModifier: usize = 0x7a0;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CFuncFoliageVData {
        pub const m_BulletImpactParticle: usize = 0x28;
        pub const m_BulletExitParticle: usize = 0x108;
    }

    // Parent: CBaseEntity
    pub mod CAI_Relationship {
        pub const m_iszSubject: usize = 0x4b0;
        pub const m_iszSubjectClass: usize = 0x4b8;
        pub const m_nSubjectClassifyAs: usize = 0x4c0;
        pub const m_iszTargetClass: usize = 0x4c8;
        pub const m_nTargetClassifyAs: usize = 0x4d0;
        pub const m_iDisposition: usize = 0x4d4;
        pub const m_iRank: usize = 0x4d8;
        pub const m_fStartActive: usize = 0x4dc;
        pub const m_bIsActive: usize = 0x4dd;
        pub const m_iPreviousDisposition: usize = 0x4e0;
        pub const m_flRadius: usize = 0x4e4;
        pub const m_iPreviousRank: usize = 0x4e8;
        pub const m_bReciprocal: usize = 0x4ec;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelTriggerHideout {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_InstantReload {
        pub const m_bIsManualReloading: usize = 0xf78;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LuminousStrikeBuffVData {
        pub const m_strBuffReceivedSound: usize = 0x750;
        pub const m_strMaxBuffReceivedSound: usize = 0x760;
        pub const m_BuffParticle: usize = 0x770;
        pub const m_IncomingParticle: usize = 0x850;
        pub const m_nStackCountForMaxParticle: usize = 0x930;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Thumper_Bullet_Watcher {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCadenceGrandFinaleVData {
        pub const m_StageModel: usize = 0x1818;
        pub const m_flStageModelHeight: usize = 0x18f8;
        pub const m_flStageModelWidth: usize = 0x18fc;
        pub const m_flStageModelLength: usize = 0x1900;
        pub const m_flStageModelScale: usize = 0x1904;
        pub const m_GrandFinaleAOEModifier: usize = 0x1908;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_IceBeamVData {
        pub const m_SplitBeamWidth: usize = 0x1818;
        pub const m_BeamParticle: usize = 0x1820;
        pub const m_HitParticle: usize = 0x1900;
        pub const m_IceBeamModifier: usize = 0x19e0;
        pub const m_SlowModifier: usize = 0x19f0;
        pub const m_BuildupModifier: usize = 0x1a00;
        pub const m_BuildupProcModifier: usize = 0x1a10;
        pub const m_BeamStartSound: usize = 0x1a20;
        pub const m_BeamStopSound: usize = 0x1a30;
        pub const m_BeamPointStartLoopSound: usize = 0x1a40;
        pub const m_BeamPointEndLoopSound: usize = 0x1a50;
        pub const m_BeamPointClosestLoopSound: usize = 0x1a60;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_IcePath {
        pub const m_iShardCount: usize = 0x5d0;
        pub const m_vLastShardPosition: usize = 0x5d4;
        pub const m_hSurfShard: usize = 0x5e0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_CardToss {
        pub const m_nPreviousMaxCharges: usize = 0xf70;
        pub const m_vecCards: usize = 0xf78;
        pub const m_vecFlyingCards: usize = 0xf90;
        pub const m_vCardList: usize = 0xfa8;
        pub const m_bCardIsFlying: usize = 0x1a58;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_TriggerTower {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_NanoTechRoundsDamage {
    }

    // Parent: None
    pub mod TeamKothState_t {
        pub const m_flCaptureProgressFrac: usize = 0x30;
        pub const m_nCapturerCount: usize = 0x34;
        pub const m_bIsBlocked: usize = 0x38;
        pub const m_vecParticipants: usize = 0x40;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifierTier3BossLaserBeamAuraVData {
        pub const m_AmberGroundEffect: usize = 0x7a8;
        pub const m_SapphGroundEffect: usize = 0x888;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_KothTrooperBuffVData {
        pub const m_vecHealthPercents: usize = 0x750;
        pub const m_vecDamagePercents: usize = 0x768;
        pub const vecSpiritResistPercents: usize = 0x780;
        pub const vecMeleeResistPercents: usize = 0x798;
        pub const m_vecModelScaleFractions: usize = 0x7b0;
    }

    // Parent: CitadelAbilityVData
    pub mod CBaseDashCastAbilityVData {
        pub const m_AbilityToTrigger: usize = 0x1818;
        pub const m_flDashCastTriggerRadius: usize = 0x1828;
        pub const m_flDashSpeed: usize = 0x182c;
        pub const m_bSnapToZeroSpeedOnEnd: usize = 0x1830;
        pub const m_bUseCurveToDefineSpeed: usize = 0x1831;
        pub const m_MovementSpeedCurve: usize = 0x1838;
        pub const m_flMovementSpeedCurveAvgSpeed: usize = 0x1878;
        pub const m_strTargetHitSound: usize = 0x1880;
        pub const m_strMissSound: usize = 0x1890;
    }

    // Parent: CPhysConstraint
    pub mod CPhysHinge {
        pub const m_soundInfo: usize = 0x508;
        pub const m_NotifyMinLimitReached: usize = 0x5a0;
        pub const m_NotifyMaxLimitReached: usize = 0x5b8;
        pub const m_bAtMinLimit: usize = 0x5d0;
        pub const m_bAtMaxLimit: usize = 0x5d1;
        pub const m_hinge: usize = 0x5d4;
        pub const m_hingeFriction: usize = 0x614;
        pub const m_systemLoadScale: usize = 0x618;
        pub const m_bIsAxisLocal: usize = 0x61c;
        pub const m_flMinRotation: usize = 0x620;
        pub const m_flMaxRotation: usize = 0x624;
        pub const m_flInitialRotation: usize = 0x628;
        pub const m_flMotorFrequency: usize = 0x62c;
        pub const m_flMotorDampingRatio: usize = 0x630;
        pub const m_flAngleSpeed: usize = 0x634;
        pub const m_flAngleSpeedThreshold: usize = 0x638;
        pub const m_flLimitsDebugVisRotation: usize = 0x63c;
        pub const m_OnStartMoving: usize = 0x640;
        pub const m_OnStopMoving: usize = 0x658;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Warden_RiotProtocol_EnemyDebuff {
        pub const m_flEnemyMoveSlow: usize = 0x150;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ChronoSwap_BubbleMoveVData {
        pub const m_flMultiSwapDistFromOrigin: usize = 0x750;
        pub const m_BeamParticle: usize = 0x758;
        pub const m_HealParticle: usize = 0x838;
        pub const m_DamageParticle: usize = 0x918;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DivinersKevlarBuff_VData {
        pub const m_KevlarChannelParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_MysticReverb_Proc {
        pub const m_bNoDeath: usize = 0x208;
        pub const m_flDamage: usize = 0x20c;
        pub const m_nDamageTick: usize = 0x210;
        pub const m_hTarget: usize = 0x214;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Objective_Bullet_Resist {
        pub const m_hTrigger: usize = 0xd0;
        pub const m_iEnemyHeroCount: usize = 0xd4;
    }

    // Parent: CScaleFunctionVData
    pub mod CScaleFunctionAbilityPropertyMultiStatsVData {
        pub const m_vecScalingStats: usize = 0x40;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_Attach_Trigger {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidPlantSomethingVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Doorman_Doorway {
        pub const m_hDoor1: usize = 0xfa0;
        pub const m_flLastRangeFailCast: usize = 0xfa8;
        pub const m_flDoorBreakableRadius: usize = 0x1130;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Thumper_4 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_TangoTether {
        pub const m_iTargetPosIndex: usize = 0xf70;
        pub const m_hLockOnTarget: usize = 0xf74;
        pub const m_vecCastStartPos: usize = 0xf78;
        pub const m_vecDashStartPos: usize = 0xf84;
        pub const m_vecDashEndPos: usize = 0xf90;
        pub const m_angDashStartAng: usize = 0xf9c;
        pub const m_flDashStartTime: usize = 0xfa8;
        pub const m_flGrappleStartTime: usize = 0xfac;
        pub const m_flGrappleArriveTime: usize = 0xfb0;
        pub const m_hTarget: usize = 0xfb4;
        pub const m_flVelSpring: usize = 0xfb8;
        pub const m_flGrappleShotAttackTime: usize = 0xfbc;
        pub const m_nTicksNotMoving: usize = 0xfc0;
        pub const m_vecPrevPos: usize = 0xfc4;
        pub const m_rgTargetPos: usize = 0xfd0;
        pub const m_rgTargetPosTime: usize = 0x10c0;
        pub const m_nGrappleTravelEffect: usize = 0x1110;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Shiv_KillingBlowVData {
        pub const m_LeapModifier: usize = 0x1818;
        pub const m_ActiveBuff: usize = 0x1828;
        pub const m_KillableModifier: usize = 0x1838;
        pub const m_AttackParticle: usize = 0x1848;
        pub const m_ImpactParticle: usize = 0x1928;
        pub const m_FlashParticle: usize = 0x1a08;
        pub const m_KillingBlowCastParticle: usize = 0x1ae8;
        pub const m_OnKillSound: usize = 0x1bc8;
        pub const m_flKillableGlowRange: usize = 0x1bd8;
        pub const m_flGlowMinTime: usize = 0x1bdc;
        pub const m_flFracToAllowUp: usize = 0x1be0;
        pub const m_flMinLeapTime: usize = 0x1be4;
        pub const m_flCheckRadius: usize = 0x1be8;
        pub const m_flSlashRadius: usize = 0x1bec;
        pub const m_flRefreshLockOutTime: usize = 0x1bf0;
        pub const m_flMaxTurnRate: usize = 0x1bf4;
        pub const m_flCameraTurnRate: usize = 0x1bf8;
        pub const m_SpeedCurve: usize = 0x1c00;
        pub const m_SpeedUpCurve: usize = 0x1c40;
        pub const m_flVelocityCarryoverOnMiss: usize = 0x1c80;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_RestorativeGoo {
        pub const m_flSelfCastEndTime: usize = 0xf70;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_Spellbreaker {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ColdFrontVData {
        pub const m_AOEModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ScalingPowerUp {
    }

    // Parent: None
    pub mod CNPCMakerAPI {
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_PickupItemSpawner {
        pub const m_tNextDropTime: usize = 0xa98;
        pub const m_bPowerupActive: usize = 0xa9c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_BaseProjectileAOEModifier {
        pub const m_vLaunchPosition: usize = 0xf78;
        pub const m_qLaunchAngle: usize = 0xf84;
        pub const m_projInfo: usize = 0x1010;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_SlowImmunity {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Knockback {
        pub const m_flForce: usize = 0xd8;
        pub const m_bKnockedBack: usize = 0xdc;
    }

    // Parent: CBaseTrackedStatsEntity
    pub mod CMatchTrackedStatsEntity {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierGoatChargingVData {
        pub const m_ChargeParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Synth_Pulse {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Targetdummy_4 {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_VandalSurge {
        pub const m_vecFloatDest: usize = 0x1d8;
        pub const m_vecStartingPos: usize = 0x1e4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Lash_Flog {
        pub const m_SandEffect: usize = 0x11f0;
    }

    // Parent: CAbilityMeleeVData
    pub mod CAbilityHoldMelee_VData {
        pub const m_mapAttacks: usize = 0x1848;
        pub const m_flLightMeleeAnimChainTime: usize = 0x1870;
        pub const m_flMinDashTime: usize = 0x1874;
        pub const m_bUseCasterFacing: usize = 0x1878;
        pub const m_AirMeleeUpScale: usize = 0x187c;
        pub const m_HeavyTurnSpeedCurve: usize = 0x1890;
        pub const m_flCameraMaxTurnRate: usize = 0x18d0;
        pub const m_flHeavyMeleeMaxTurnRate: usize = 0x18d4;
        pub const m_HoldBeginEffect: usize = 0x18d8;
        pub const m_SuccessfulParryParticle: usize = 0x19b8;
        pub const m_ParryActivateParticle: usize = 0x1a98;
        pub const m_cameraSequenceHoldStart: usize = 0x1b78;
        pub const m_cameraSequenceHitImpact: usize = 0x1c00;
        pub const m_strHoldBegin: usize = 0x1c88;
        pub const m_strSuccessfulParrySound: usize = 0x1c98;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_WeaponUpgrade_HeadshotBooster_VData {
        pub const m_HeadShotSound: usize = 0x880;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpiritBurnDOT_VData {
        pub const m_sBurnParticle: usize = 0x750;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
    pub mod CCitadel_Item_ContainmentVData {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_Slide_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AttachTarget {
        pub const m_hTarget: usize = 0xd0;
        pub const m_vecOffset: usize = 0xd4;
    }

    // Parent: None
    pub mod CAI_VolumetricEventSensorAPI {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CAI_NPC_TrooperVData {
        pub const m_TrooperType: usize = 0x1348;
        pub const m_flNearDeathDuration: usize = 0x134c;
        pub const m_flFlySpeed: usize = 0x1350;
        pub const m_flFlyHeight: usize = 0x1354;
        pub const m_flMeleeDamage: usize = 0x1358;
        pub const m_flMeleeDuration: usize = 0x135c;
        pub const m_flMeleeChargeRange: usize = 0x1360;
        pub const m_flHealthBarOffsetDucking: usize = 0x1364;
        pub const m_VSPlayer: usize = 0x1368;
        pub const m_VSTrooper: usize = 0x137c;
        pub const m_VSGuardian: usize = 0x1390;
        pub const m_VSWalker: usize = 0x13a4;
        pub const m_VSWatcher: usize = 0x13b8;
        pub const m_VSShrine: usize = 0x13cc;
        pub const m_VSPatron: usize = 0x13e0;
        pub const m_VSPatronPhase2: usize = 0x13f4;
        pub const m_flDPSPctGrowthPerMinute: usize = 0x1408;
        pub const m_bBossWeaponEnabled: usize = 0x140c;
        pub const m_BossWeapon: usize = 0x1410;
        pub const m_BossAttackParticle: usize = 0x1b88;
        pub const m_LastHitParticle: usize = 0x1c68;
        pub const m_TargetingLaserParticle: usize = 0x1d48;
        pub const m_TargetingEyeFlashParticle: usize = 0x1e28;
        pub const m_sZiplineContainerBreakFromDamageParticle: usize = 0x1f08;
        pub const m_sZiplineContainerBreakFromLandingParticle: usize = 0x1fe8;
        pub const m_MedicHealActiveParticle: usize = 0x20c8;
        pub const m_HeadHealthChangeAmberParticle: usize = 0x21a8;
        pub const m_HeadHealthChangeSapphireParticle: usize = 0x2288;
        pub const m_sPlayerLastHitSound: usize = 0x2368;
        pub const m_sCelebrationSound: usize = 0x2378;
        pub const m_sZiplineContainerBreakSound: usize = 0x2388;
        pub const m_NearDeathModifier: usize = 0x2398;
        pub const m_ShrinesDownBuffModifier: usize = 0x23a8;
        pub const m_NpcOutOfCombatRegenModifier: usize = 0x23b8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierItemPickupAuraTargetVData {
        pub const m_PickupTimer: usize = 0x750;
        pub const m_PickupTimerModifier: usize = 0x758;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityDruidBasePlantVData {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_SmokeGrenadeVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_SmokeGrenadeModifier: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PriestKnockback {
        pub const m_StartTime: usize = 0xd0;
        pub const m_vecPushDirection: usize = 0xd4;
        pub const m_vecFinalPosition: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Bull_Heal_TargetVData {
        pub const m_DrainParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ZipLine_Boost {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Backstabber_Debuff {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DivineBarrier {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_ApplyDebuff_Proc {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_XPOrbVData {
        pub const m_bIsObjective: usize = 0x28;
        pub const m_strOrbClaimed: usize = 0x30;
        pub const m_strOrbClaimedTeammate: usize = 0x40;
        pub const m_strOrbDenied: usize = 0x50;
        pub const m_strOrbDeniedPlayer: usize = 0x60;
        pub const m_strOrbHitConfirm: usize = 0x70;
        pub const m_strOrbHitPredicted: usize = 0x80;
        pub const m_sOrbModel: usize = 0x90;
        pub const m_sPredictedHitLimboGlowParticle: usize = 0x170;
        pub const m_sFriendlyHitConfirmParticle: usize = 0x250;
        pub const m_sEnemyHitConfirmParticle: usize = 0x330;
        pub const m_sFriendlyGlowParticle: usize = 0x410;
        pub const m_sEnemyGlowParticle: usize = 0x4f0;
        pub const m_sGoldReceivedParticle: usize = 0x5d0;
        pub const m_sFriendlyOrbDeniedParticle: usize = 0x6b0;
        pub const m_sEnemyOrbDeniedParticle: usize = 0x790;
        pub const m_sFriendlyOrbEarnedParticle: usize = 0x870;
        pub const m_sEnemyOrbEarnedParticle: usize = 0x950;
        pub const m_flOrbSpawnDelayMin: usize = 0xa30;
        pub const m_flOrbSpawnDelayMax: usize = 0xa34;
        pub const m_flOrbSpawnOffsetZ: usize = 0xa38;
        pub const m_flOrbSpawnOffsetRandomXYZ: usize = 0xa3c;
        pub const m_flGravityScale: usize = 0xa40;
        pub const m_flLateralSpeedMin: usize = 0xa44;
        pub const m_flLateralSpeedMax: usize = 0xa48;
        pub const m_flLateralMoveDuration: usize = 0xa4c;
        pub const m_flUpSpeedMin: usize = 0xa50;
        pub const m_flUpSpeedMax: usize = 0xa54;
        pub const m_flDownSpeed: usize = 0xa58;
        pub const m_flBurstSpeedMultiplier: usize = 0xa5c;
        pub const m_flBurstSpeedDuration: usize = 0xa60;
        pub const m_flOscillateFrequency: usize = 0xa64;
        pub const m_flLifeTime: usize = 0xa68;
        pub const m_flRadius: usize = 0xa6c;
        pub const m_flCollisionRadius: usize = 0xa70;
        pub const m_flInvulDurationMin: usize = 0xa74;
        pub const m_flInvulDurationMax: usize = 0xa78;
        pub const m_bUseKillerPlaneOffsets: usize = 0xa7c;
        pub const m_flKillerPlaneOffset: usize = 0xa80;
        pub const m_flKillerPlaneHorizontalDecayRate: usize = 0xa84;
        pub const m_flKillerPlaneHorizontalSpeedX: usize = 0xa88;
        pub const m_flKillerPlaneHorizontalSpeedY: usize = 0xa8c;
        pub const m_flKillerPlaneVerticalSpeed: usize = 0xa90;
        pub const m_flKillerPlaneSpeedNoise: usize = 0xa94;
        pub const m_flKillerPlaneLaunchOffset: usize = 0xa98;
        pub const m_flKillerPlaneLaunchDelay: usize = 0xa9c;
        pub const m_flOrbClaimWindow: usize = 0xaa0;
    }

    // Parent: None
    pub mod CLogicRelayAPI {
    }

    // Parent: CBaseEntity
    pub mod CInfoWorldLayer {
        pub const m_pOutputOnEntitiesSpawned: usize = 0x4a0;
        pub const m_worldName: usize = 0x4b8;
        pub const m_layerName: usize = 0x4c0;
        pub const m_bWorldLayerVisible: usize = 0x4c8;
        pub const m_bEntitiesSpawned: usize = 0x4c9;
        pub const m_bCreateAsChildSpawnGroup: usize = 0x4ca;
        pub const m_hLayerSpawnGroup: usize = 0x4cc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_HauntingSpirits {
        pub const m_nCastParticleIndex: usize = 0x10f0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Doorman_Hotel_Imposter_FX {
        pub const m_bEndStarted: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_Crescendo_PostAOE_VData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BulletResistReductionStackVData {
        pub const m_bSelfish: usize = 0x750;
    }

    // Parent: CBodyComponentSkeletonInstance
    pub mod CBodyComponentBaseModelEntity {
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Necro_ZombieWall_Projectile {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_TimeWall_AuraVData {
        pub const m_DebuffModifier: usize = 0x7a8;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_ThermalDetonator_ThinkerVData {
        pub const m_GroundParticle: usize = 0x7a8;
        pub const m_GroundParticleFriendly: usize = 0x888;
    }

    // Parent: CPointEntity
    pub mod CCitadelMatchmakingStatusInfo {
        pub const m_OnStartMatchmaking: usize = 0x4a0;
        pub const m_OnStopMatchmaking: usize = 0x4b8;
    }

    // Parent: CPointEntity
    pub mod CLogicProximity {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Viper_PetrifyBola {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityViscousBowlingVData {
        pub const m_TransformStartFx: usize = 0x1818;
        pub const m_ExplodeFX: usize = 0x18f8;
        pub const m_WallImpactFx: usize = 0x19d8;
        pub const m_BallTrailFx: usize = 0x1ab8;
        pub const m_GroundImpactParticle: usize = 0x1b98;
        pub const m_JumpParticle: usize = 0x1c78;
        pub const m_DirectionParticle: usize = 0x1d58;
        pub const m_strPopGraphParamter: usize = 0x1e38;
        pub const m_BallJumpSound: usize = 0x1e40;
        pub const m_EnterBallSound: usize = 0x1e50;
        pub const m_BallLoopSound: usize = 0x1e60;
        pub const m_ExitBallSound: usize = 0x1e70;
        pub const m_WallImpactSound: usize = 0x1e80;
        pub const m_PlayerImpactSound: usize = 0x1e90;
        pub const m_ImpactModifier: usize = 0x1ea0;
        pub const m_DamagePreventionModifier: usize = 0x1eb0;
        pub const m_RollingModifier: usize = 0x1ec0;
        pub const m_flTransformToBallTime: usize = 0x1ed0;
        pub const m_flTransformFromBallTime: usize = 0x1ed4;
        pub const m_flAirTurnRatio: usize = 0x1ed8;
        pub const m_flWallTurnRatioMax: usize = 0x1edc;
        pub const m_flWallTurnRatioMin: usize = 0x1ee0;
        pub const m_flTurnRatio: usize = 0x1ee4;
        pub const m_flDefaultBallSpeed: usize = 0x1ee8;
        pub const m_flFastBallSpeed: usize = 0x1eec;
        pub const m_flSpeedAccel: usize = 0x1ef0;
        pub const m_flSpeedDeccel: usize = 0x1ef4;
        pub const m_flElasticity: usize = 0x1ef8;
        pub const m_flWallCheckGroundOffset: usize = 0x1efc;
        pub const m_flWallPauseTime: usize = 0x1f00;
        pub const m_flWallAngleMin: usize = 0x1f04;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Surging_PowerVData {
        pub const m_BerserkerSound: usize = 0x750;
        pub const m_ModifierActiveDisplay: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DeflectingArmor {
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadelItemPickup {
        pub const m_CCitadelMinimapComponent: usize = 0xc08;
        pub const m_eLootType: usize = 0xc28;
        pub const m_nCurrencyValue: usize = 0xc2c;
        pub const m_iszModelName: usize = 0xc30;
        pub const m_flModelScale: usize = 0xc38;
        pub const m_hTargetPlayer: usize = 0xc3c;
        pub const m_flFallRate: usize = 0xc40;
        pub const m_eObjectivePosition: usize = 0xc44;
        pub const m_bRequireGroundForPickup: usize = 0xc48;
        pub const m_bOnGround: usize = 0xc49;
        pub const m_nKillingTeamNumber: usize = 0xc4c;
        pub const m_vHomePosition: usize = 0xc50;
        pub const m_vDropPosition: usize = 0xc5c;
        pub const m_tFirstPickupTime: usize = 0xc68;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifierNikumanVData {
        pub const m_SelfParticle: usize = 0x7a8;
        pub const m_strAmbientLoopingLocalPlayerSound: usize = 0x888;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Empty {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Familiar_HelpingHands {
        pub const m_vecHelpers: usize = 0xf78;
        pub const m_tChoreUseCooldownEndTime: usize = 0xf90;
        pub const m_tSoonestHelperCooldownEndTime: usize = 0xf94;
        pub const m_nAvailableHelperCount: usize = 0xf98;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_EmpowerBullet {
        pub const m_BuffedShotId: usize = 0x328;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityRiotProtocolVData {
        pub const m_ChargeUpParticle: usize = 0x1818;
        pub const m_CastParticle: usize = 0x18f8;
        pub const m_WardenBuffModifier: usize = 0x19d8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_TechDefenderShreddersProcVData {
        pub const m_TechDebuffModifier: usize = 0x780;
        pub const m_ImpactParticle: usize = 0x790;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_T2Boss_Stagger_Watcher {
    }

    // Parent: CCitadel_Modifier_Basic_HealthRegen
    pub mod CCitadel_Modifier_Extendable_HealthRegen {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_Escort_VData {
        pub const m_strSpawnParticle: usize = 0x1348;
        pub const m_flEscortFriendlyHeroSlowMoveSearchRadius: usize = 0x1428;
        pub const m_flEscortFriendlyHeroFastMoveSearchRadius: usize = 0x142c;
        pub const m_flEscortEnemyObjectiveSearchRadius: usize = 0x1430;
        pub const m_flEscortEnemySlowWalkRadius: usize = 0x1434;
        pub const m_flCloseEnoughToNode: usize = 0x1438;
        pub const m_flCatchUpSpeed: usize = 0x143c;
        pub const m_flActivateDelay: usize = 0x1440;
    }

    // Parent: CAI_BaseNPC
    pub mod CAI_CitadelNPC {
        pub const m_vLastGroundEntityCheckPos: usize = 0x11c8;
        pub const m_flLastGroundCheckTime: usize = 0x11d4;
        pub const m_CCitadelAbilityComponent: usize = 0x11d8;
        pub const m_CCitadelRegenComponent: usize = 0x1440;
        pub const m_CCitadelMinimapComponent: usize = 0x15a0;
        pub const m_iBaseGoldReward: usize = 0x15c8;
        pub const m_iSkillShotReward: usize = 0x15cc;
        pub const m_hAbilityOwner: usize = 0x15fc;
        pub const m_vecWeakPoints: usize = 0x1660;
        pub const m_bMinion: usize = 0x16c8;
        pub const m_hLookTarget: usize = 0x16cc;
        pub const m_iCoverGroupID: usize = 0x16d0;
        pub const m_vecSpawnOrigin: usize = 0x1734;
        pub const m_bBeamActive: usize = 0x1764;
        pub const m_vEyeBeamTarget: usize = 0x1768;
    }

    // Parent: CCitadelItemPickupRejuv
    pub mod CCitadelItemPickupRejuvHeroTest {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerPassthroughFakeWall {
    }

    // Parent: CBaseFilter
    pub mod FilterDamageType {
        pub const m_iDamageType: usize = 0x4d8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadelModifier_Viscous_Goo_Aura {
        pub const m_AuraParticle: usize = 0x108;
    }

    // Parent: CBaseEntity
    pub mod CPointCamera {
        pub const m_FOV: usize = 0x4a0;
        pub const m_Resolution: usize = 0x4a4;
        pub const m_bFogEnable: usize = 0x4a8;
        pub const m_FogColor: usize = 0x4a9;
        pub const m_flFogStart: usize = 0x4b0;
        pub const m_flFogEnd: usize = 0x4b4;
        pub const m_flFogMaxDensity: usize = 0x4b8;
        pub const m_bActive: usize = 0x4bc;
        pub const m_bUseScreenAspectRatio: usize = 0x4bd;
        pub const m_flAspectRatio: usize = 0x4c0;
        pub const m_bNoSky: usize = 0x4c4;
        pub const m_fBrightness: usize = 0x4c8;
        pub const m_flZFar: usize = 0x4cc;
        pub const m_flZNear: usize = 0x4d0;
        pub const m_bCanHLTVUse: usize = 0x4d4;
        pub const m_bAlignWithParent: usize = 0x4d5;
        pub const m_bDofEnabled: usize = 0x4d6;
        pub const m_flDofNearBlurry: usize = 0x4d8;
        pub const m_flDofNearCrisp: usize = 0x4dc;
        pub const m_flDofFarCrisp: usize = 0x4e0;
        pub const m_flDofFarBlurry: usize = 0x4e4;
        pub const m_flDofTiltToGround: usize = 0x4e8;
        pub const m_TargetFOV: usize = 0x4ec;
        pub const m_DegreesPerSecond: usize = 0x4f0;
        pub const m_bIsOn: usize = 0x4f4;
        pub const m_pNext: usize = 0x4f8;
    }

    // Parent: None
    pub mod CAttributeList {
        pub const m_Attributes: usize = 0x8;
        pub const m_pManager: usize = 0x70;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_NetShot {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fencer_Riposte {
        pub const m_hTarget: usize = 0xf70;
        pub const m_vRiposteStartPosition: usize = 0xf74;
        pub const m_vDashDirection: usize = 0xf80;
        pub const m_flStateStartTime: usize = 0xf8c;
        pub const m_nCurrentRiposteState: usize = 0xf90;
        pub const m_flSuccessfulRiposteTime: usize = 0xf94;
        pub const m_vecHitEnemies: usize = 0x1818;
        pub const m_vecLastPosition: usize = 0x1830;
        pub const m_flStuckTime: usize = 0x183c;
        pub const m_nParriedFXIndex: usize = 0x1840;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Boho_DamageShare {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Synth_Barrage_Amp {
    }

    // Parent: CCitadelYamatoBaseVData
    pub mod CAbilityPowerSlashVData {
        pub const m_flAirDrag: usize = 0x1820;
        pub const m_flMaxPowerPadding: usize = 0x1824;
        pub const m_flEffectGroundTrace: usize = 0x1828;
        pub const m_flWhizbyMaxRange: usize = 0x182c;
        pub const m_flStartPosTestCapsuleLength: usize = 0x1830;
        pub const m_flCoverLOSBackDist: usize = 0x1834;
        pub const m_vecLongEffectOffset: usize = 0x1838;
        pub const m_vecPlayerLeftOffset: usize = 0x1844;
        pub const m_PowerSlashParticle: usize = 0x1848;
        pub const m_PowerSlashFullParticle: usize = 0x1928;
        pub const m_ImpactParticle: usize = 0x1a08;
        pub const m_CastParticle: usize = 0x1ae8;
        pub const m_PowerUpParticle: usize = 0x1bc8;
        pub const m_strStartSound: usize = 0x1ca8;
        pub const m_strHitConfirmSound: usize = 0x1cb8;
        pub const m_strPowerUp1Sounds: usize = 0x1cc8;
        pub const m_strPowerUp2Sounds: usize = 0x1cd8;
        pub const m_strPowerUp3Sounds: usize = 0x1ce8;
        pub const m_strWhizbySound: usize = 0x1cf8;
        pub const m_strSlashSound: usize = 0x1d08;
        pub const m_strSlashFullSound: usize = 0x1d18;
        pub const m_SlowModifier: usize = 0x1d28;
        pub const m_UnstoppableWhileCastingModifier: usize = 0x1d38;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityVacuumVData {
        pub const m_VacuumAuraModifier: usize = 0x1818;
        pub const m_flAirSpeedMax: usize = 0x1828;
        pub const m_flFallSpeedMax: usize = 0x182c;
        pub const m_flAirDrag: usize = 0x1830;
        pub const m_flMaxMovespeed: usize = 0x1834;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StaticCharge {
        pub const m_flRadius: usize = 0x1d0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PauseUnPause {
        pub const m_qPauseStartAngle: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_OverdriveClip_Reload {
        pub const m_nStartingClipSize: usize = 0xd0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_Mystic_RegenerationVData {
        pub const m_RegenParticle: usize = 0x18b8;
        pub const m_StackNotificationModifier: usize = 0x1998;
        pub const m_HealingLoopSoundOverride: usize = 0x19a8;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Inflow_Wait {
        pub const m_WakeResume: usize = 0x48;
    }

    // Parent: CCitadelSpeedBoostTrigger
    pub mod CCitadelTunnelTrigger {
        pub const m_bKillWhenNotTiny: usize = 0x8e9;
    }

    // Parent: CNPC_SimpleAnimatingAI
    pub mod CNPC_TeslaCoil {
        pub const m_CCitadelAbilityComponent: usize = 0xc10;
        pub const m_flDeployTime: usize = 0xe7c;
        pub const m_flLifeTime: usize = 0xe84;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerObscuredVolume {
        pub const m_iszModifierName: usize = 0x8e0;
        pub const m_tModifier: usize = 0x8e8;
    }

    // Parent: CBaseFilter
    pub mod CCitadelFilterModifier {
        pub const m_iModifierName: usize = 0x4d8;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CProjectile_PunkgoatTether {
        pub const m_nRopeProjectileParticle: usize = 0x890;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_UtilityUpgrade_RocketBoots {
    }

    // Parent: CBaseFilter
    pub mod CFilterProximity {
        pub const m_flRadius: usize = 0x4d8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Tier2EmpoweredVData {
        pub const m_flTransitionDuration: usize = 0x750;
        pub const m_nMaxHealth: usize = 0x754;
        pub const m_flModelScale: usize = 0x758;
    }

    // Parent: None
    pub mod CAccoladeDefinition {
        pub const m_unAccoladeID: usize = 0x0;
        pub const m_sTrackedStatName: usize = 0x10;
        pub const m_sFlavorName: usize = 0x20;
        pub const m_sDescription: usize = 0x30;
        pub const m_eThresholdType: usize = 0x40;
        pub const m_vecThresholds: usize = 0x48;
        pub const m_vecEnabledGameModes: usize = 0x60;
    }

    // Parent: CBaseTrackedStatsEntity
    pub mod CTeamTrackedStatsEntity {
        pub const m_nTeam: usize = 0x508;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CombatStatus {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Werewolf_Frenzy {
        pub const m_SandEffect: usize = 0x1370;
        pub const m_vecHitTargets: usize = 0x1378;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Fencer_Ultimate_Target {
        pub const m_bDamageDone: usize = 0xd0;
        pub const m_flDamageTime: usize = 0xd4;
        pub const m_vDashDirection: usize = 0x458;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_HealHostVData {
        pub const m_HealParticle: usize = 0x1818;
        pub const m_BarrierModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WebWall_Debuff {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityIntimidateVData {
        pub const m_EnemyModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_AoEPlayerParticle: usize = 0x1838;
        pub const m_AoEParticle: usize = 0x1918;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_UltComboVData {
        pub const m_MeleeSwingParticle: usize = 0x1818;
        pub const m_MeleeImpactParticle: usize = 0x18f8;
        pub const m_SelfModifier: usize = 0x19d8;
        pub const m_TargetModifier: usize = 0x19e8;
        pub const m_KillCheckModifier: usize = 0x19f8;
        pub const m_flKillCheckWindow: usize = 0x1a08;
        pub const m_flDamageInterval: usize = 0x1a0c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_WreckerGarbageSuck {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_DisarmProcWatcher {
    }

    // Parent: None
    pub mod CEffectData {
        pub const m_vOrigin: usize = 0x8;
        pub const m_vStart: usize = 0x14;
        pub const m_vNormal: usize = 0x20;
        pub const m_vAngles: usize = 0x2c;
        pub const m_hEntity: usize = 0x38;
        pub const m_hOtherEntity: usize = 0x3c;
        pub const m_flScale: usize = 0x40;
        pub const m_flMagnitude: usize = 0x44;
        pub const m_flRadius: usize = 0x48;
        pub const m_nSurfaceProp: usize = 0x4c;
        pub const m_nEffectIndex: usize = 0x50;
        pub const m_nDamageType: usize = 0x58;
        pub const m_nPenetrate: usize = 0x5c;
        pub const m_nMaterial: usize = 0x5e;
        pub const m_nHitBox: usize = 0x60;
        pub const m_nColor: usize = 0x62;
        pub const m_fFlags: usize = 0x63;
        pub const m_nAttachmentIndex: usize = 0x64;
        pub const m_nAttachmentName: usize = 0x68;
        pub const m_iEffectName: usize = 0x6c;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Airheart_FloatingBomb {
        pub const vVelocity: usize = 0x860;
        pub const m_tSpawnTime: usize = 0x86c;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Intensifying_Clip {
        pub const m_flSpinUpTime: usize = 0xff8;
    }

    // Parent: CBaseModelEntity
    pub mod CEntityDissolve {
        pub const m_flFadeInStart: usize = 0x780;
        pub const m_flFadeInLength: usize = 0x784;
        pub const m_flFadeOutModelStart: usize = 0x788;
        pub const m_flFadeOutModelLength: usize = 0x78c;
        pub const m_flFadeOutStart: usize = 0x790;
        pub const m_flFadeOutLength: usize = 0x794;
        pub const m_flStartTime: usize = 0x798;
        pub const m_nDissolveType: usize = 0x79c;
        pub const m_vDissolverOrigin: usize = 0x7a0;
        pub const m_nMagnitude: usize = 0x7ac;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_TurretClone {
        pub const m_bHasTurretReady: usize = 0x11f0;
        pub const m_iCurrentSwapCount: usize = 0x11f4;
        pub const m_flTurretExpireTime: usize = 0x11f8;
        pub const m_nLastBulletShotID: usize = 0x1200;
        pub const m_pActiveTurret: usize = 0x1204;
        pub const m_nTurretFXIndex: usize = 0x1208;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Rutger_Pulse {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TangoTether_Tether {
        pub const m_fHealingSoundBuildup: usize = 0x378;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_PrimaryWeapon_BebopVData {
        pub const m_strWindupSound: usize = 0x19c8;
        pub const m_strBeamStartSound: usize = 0x19d8;
        pub const m_strBeamLoopSound1: usize = 0x19e8;
        pub const m_strBeamLoopSound2: usize = 0x19f8;
        pub const m_strBeamStopSound: usize = 0x1a08;
        pub const m_szWeaponBeamParticle: usize = 0x1a18;
        pub const m_flWindupRepeatCycle: usize = 0x1af8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ArcaneEaterDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CPlayer_ObserverServices
    pub mod CCitadelPlayer_ObserverServices {
        pub const m_nCurrentObservedTeam: usize = 0x58;
        pub const m_hLastObserverTarget: usize = 0x5c;
        pub const m_hPreviousTeamTarget: usize = 0x60;
        pub const m_angTargetCamera: usize = 0x64;
        pub const m_vTargetCameraPos: usize = 0x70;
    }

    // Parent: None
    pub mod CBaseAnimGraphModifierHandleVector_t {
        pub const m_ModifierHandles: usize = 0x0;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleShuffled {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_StabilizingTripod {
        pub const m_vecDeployedSentries: usize = 0xf78;
        pub const m_vDeployPosition: usize = 0xf90;
        pub const m_vDeployAngles: usize = 0xf9c;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_FrenzyAura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HoldingGoldenIdol {
        pub const m_iIdolParticle: usize = 0x4d0;
        pub const m_nGoldValue: usize = 0x4d4;
        pub const m_nTeamBias: usize = 0x4d8;
        pub const m_bRevealed: usize = 0x4dc;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierCadenceGunSpikesVData {
        pub const m_strSmallIconCssClassMax: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_PetrifyVData {
        pub const m_DebuffParticle: usize = 0x830;
        pub const m_BuffStartParticle: usize = 0x910;
        pub const m_BuffEndParticle: usize = 0x9f0;
        pub const m_PostSleepModifier: usize = 0xad0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ShadowStrikeVData {
        pub const m_ShadowStrikeInvisModifier: usize = 0x18b8;
        pub const m_StealWatcherModifier: usize = 0x18c8;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_RiposteTargetSelect {
        pub const pRiposteAbility: usize = 0xf80;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Tokamak_AllySmokeAOE {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_HealOnLevel {
    }

    // Parent: CLogicalEntity
    pub mod CPhysConstraint {
        pub const m_hJoint: usize = 0x4a0;
        pub const m_nameAttach1: usize = 0x4a8;
        pub const m_nameAttach2: usize = 0x4b0;
        pub const m_hAttach1: usize = 0x4b8;
        pub const m_hAttach2: usize = 0x4bc;
        pub const m_nameAttachment1: usize = 0x4c0;
        pub const m_nameAttachment2: usize = 0x4c8;
        pub const m_breakSound: usize = 0x4d0;
        pub const m_forceLimit: usize = 0x4d8;
        pub const m_torqueLimit: usize = 0x4dc;
        pub const m_minTeleportDistance: usize = 0x4e0;
        pub const m_bSnapObjectPositions: usize = 0x4e4;
        pub const m_bTreatEntity1AsInfiniteMass: usize = 0x4e5;
        pub const m_OnBreak: usize = 0x4e8;
    }

    // Parent: CLogicalEntity
    pub mod CLogicAchievement {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_iszAchievementEventID: usize = 0x4a8;
        pub const m_OnFired: usize = 0x4b0;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_UltCombo_Target {
        pub const m_angles: usize = 0xd8;
        pub const m_pAttachmentModifier: usize = 0xe8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Wrecker_Ultimate {
        pub const m_angBeamAngles: usize = 0xf90;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityStickyBombVData {
        pub const m_BombAttachedModifier: usize = 0x1818;
        pub const m_SelfBuffModifier: usize = 0x1828;
        pub const m_KillCheckModifier: usize = 0x1838;
        pub const m_CastBombParticle: usize = 0x1848;
        pub const m_flPostRangeGravityScale: usize = 0x1928;
        pub const m_flAllyCollideRadius: usize = 0x192c;
        pub const m_flBombDragStartRange: usize = 0x1930;
        pub const m_flBombDragStartValue: usize = 0x1934;
        pub const m_flBombDragEndValue: usize = 0x1938;
        pub const m_flAllyTargetRangeMult: usize = 0x193c;
        pub const m_flHookTargetOnlyWindow: usize = 0x1940;
    }

    // Parent: CEntityComponent
    pub mod CLightComponent {
        pub const __m_pChainEntity: usize = 0x38;
        pub const m_Color: usize = 0x75;
        pub const m_SecondaryColor: usize = 0x79;
        pub const m_flBrightness: usize = 0x80;
        pub const m_flBrightnessScale: usize = 0x84;
        pub const m_flBrightnessMult: usize = 0x88;
        pub const m_flRange: usize = 0x8c;
        pub const m_flFalloff: usize = 0x90;
        pub const m_flAttenuation0: usize = 0x94;
        pub const m_flAttenuation1: usize = 0x98;
        pub const m_flAttenuation2: usize = 0x9c;
        pub const m_flTheta: usize = 0xa0;
        pub const m_flPhi: usize = 0xa4;
        pub const m_hLightCookie: usize = 0xa8;
        pub const m_nCascades: usize = 0xb0;
        pub const m_nCastShadows: usize = 0xb4;
        pub const m_nShadowWidth: usize = 0xb8;
        pub const m_nShadowHeight: usize = 0xbc;
        pub const m_bRenderDiffuse: usize = 0xc0;
        pub const m_nRenderSpecular: usize = 0xc4;
        pub const m_bRenderTransmissive: usize = 0xc8;
        pub const m_flOrthoLightWidth: usize = 0xcc;
        pub const m_flOrthoLightHeight: usize = 0xd0;
        pub const m_nStyle: usize = 0xd4;
        pub const m_Pattern: usize = 0xd8;
        pub const m_nCascadeRenderStaticObjects: usize = 0xe0;
        pub const m_flShadowCascadeCrossFade: usize = 0xe4;
        pub const m_flShadowCascadeDistanceFade: usize = 0xe8;
        pub const m_flShadowCascadeDistance0: usize = 0xec;
        pub const m_flShadowCascadeDistance1: usize = 0xf0;
        pub const m_flShadowCascadeDistance2: usize = 0xf4;
        pub const m_flShadowCascadeDistance3: usize = 0xf8;
        pub const m_nShadowCascadeResolution0: usize = 0xfc;
        pub const m_nShadowCascadeResolution1: usize = 0x100;
        pub const m_nShadowCascadeResolution2: usize = 0x104;
        pub const m_nShadowCascadeResolution3: usize = 0x108;
        pub const m_bUsesBakedShadowing: usize = 0x10c;
        pub const m_nShadowPriority: usize = 0x110;
        pub const m_nBakedShadowIndex: usize = 0x114;
        pub const m_nLightPathUniqueId: usize = 0x118;
        pub const m_nLightMapUniqueId: usize = 0x11c;
        pub const m_bRenderToCubemaps: usize = 0x120;
        pub const m_bAllowSSTGeneration: usize = 0x121;
        pub const m_nDirectLight: usize = 0x124;
        pub const m_nIndirectLight: usize = 0x128;
        pub const m_bDynamicBounce: usize = 0x12c;
        pub const m_flFadeMinDist: usize = 0x130;
        pub const m_flFadeMaxDist: usize = 0x134;
        pub const m_flShadowFadeMinDist: usize = 0x138;
        pub const m_flShadowFadeMaxDist: usize = 0x13c;
        pub const m_bEnabled: usize = 0x140;
        pub const m_bFlicker: usize = 0x141;
        pub const m_bPrecomputedFieldsValid: usize = 0x142;
        pub const m_vPrecomputedBoundsMins: usize = 0x144;
        pub const m_vPrecomputedBoundsMaxs: usize = 0x150;
        pub const m_vPrecomputedOBBOrigin: usize = 0x15c;
        pub const m_vPrecomputedOBBAngles: usize = 0x168;
        pub const m_vPrecomputedOBBExtent: usize = 0x174;
        pub const m_flPrecomputedMaxRange: usize = 0x180;
        pub const m_nFogLightingMode: usize = 0x184;
        pub const m_flFogContributionStength: usize = 0x188;
        pub const m_flNearClipPlane: usize = 0x18c;
        pub const m_SkyColor: usize = 0x190;
        pub const m_flSkyIntensity: usize = 0x194;
        pub const m_SkyAmbientBounce: usize = 0x198;
        pub const m_bUseSecondaryColor: usize = 0x19c;
        pub const m_bMixedShadows: usize = 0x19d;
        pub const m_flLightStyleStartTime: usize = 0x1a0;
        pub const m_flCapsuleLength: usize = 0x1a4;
        pub const m_flMinRoughness: usize = 0x1a8;
        pub const m_bPvsModifyEntity: usize = 0x1b8;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_MortarSentry {
        pub const m_flAttackCone: usize = 0x17bc;
        pub const m_flLastAlertSound: usize = 0x17c0;
        pub const m_flTrackingSpeed: usize = 0x17c4;
        pub const m_vTargetPosition: usize = 0x17c8;
        pub const m_flSearchRadius: usize = 0x17d4;
        pub const m_flLifeTime: usize = 0x17d8;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Perched_Predator {
        pub const m_vecHitEntities: usize = 0x860;
    }

    // Parent: CCitadelProjectile
    pub mod CItemExplosiveBarrel {
    }

    // Parent: CAI_Component
    pub mod CAI_FacingServices {
        pub const m_pEntityFacingRequests: usize = 0x50;
        pub const m_eScheduleFacingRequestPriority: usize = 0x258;
        pub const m_strafingRequests: usize = 0x259;
        pub const m_pEnableForceFacing: usize = 0x260;
        pub const m_nEntityFacingLockCount: usize = 0x262;
        pub const m_vecChoreoEntityFacings: usize = 0x268;
        pub const m_bFailedTargetValidation: usize = 0x280;
    }

    // Parent: CBaseClientUIEntity
    pub mod CPointClientUIDialog {
        pub const m_hActivator: usize = 0x8e0;
        pub const m_bStartEnabled: usize = 0x8e4;
    }

    // Parent: CLogicalEntity
    pub mod CLogicLineToEntity {
        pub const m_Line: usize = 0x4a0;
        pub const m_SourceName: usize = 0x4c8;
        pub const m_StartEntity: usize = 0x4d0;
        pub const m_EndEntity: usize = 0x4d4;
    }

    // Parent: CBaseFilter
    pub mod CFilterModifier {
        pub const m_iFilterModifier: usize = 0x4d8;
    }

    // Parent: CSoundAreaEntityBase
    pub mod CSoundAreaEntitySphere {
        pub const m_flRadius: usize = 0x4c0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_MaulingLeapDebuff {
        pub const m_flLastTickTime: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Operative_UmbrellaManeuver_AirHang {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Rutger_CheatDeath_Activated {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tokamak_CrimsonCannonVData {
        pub const m_LaserShot: usize = 0x1818;
        pub const m_ChargeParticle: usize = 0x18f8;
        pub const m_CasterOnlyTargetParticle: usize = 0x19d8;
        pub const m_EnemyTargetedParticle: usize = 0x1ab8;
        pub const m_strEnemyBeenTargetedSound: usize = 0x1b98;
        pub const m_strCasterTargetSelectedSound: usize = 0x1ba8;
        pub const m_strFireSound: usize = 0x1bb8;
        pub const m_strImpactSound: usize = 0x1bc8;
        pub const m_strBlockedSound: usize = 0x1bd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierFealtyTargetVData {
        pub const m_CastParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_PredatoryStatueTarget {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PowerJump {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bull_Heal {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SilenceProc_Immunity {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HealBuffVData {
        pub const m_BuffModifier: usize = 0x750;
    }

    // Parent: CBaseLockonAbilityVData
    pub mod CAbilityLashUltimateVData {
        pub const m_TargetPreviewParticle: usize = 0x1838;
        pub const m_LaunchParticle: usize = 0x1918;
        pub const m_UltimateCastParticle: usize = 0x19f8;
        pub const m_UltimateCastEnemyParticle: usize = 0x1ad8;
        pub const m_AllyIndicatorParticle: usize = 0x1bb8;
        pub const m_strThrowEnemyAnimGraphParam: usize = 0x1c98;
        pub const m_GrappleEnemyModifier: usize = 0x1ca0;
        pub const m_GrabSound: usize = 0x1cb0;
        pub const m_MissSound: usize = 0x1cc0;
        pub const m_ThrowSound: usize = 0x1cd0;
        pub const m_flAirSpeedMax: usize = 0x1ce0;
        pub const m_flFallSpeedMax: usize = 0x1ce4;
        pub const m_flAirDrag: usize = 0x1ce8;
        pub const m_flMaxPitchRangeScale: usize = 0x1cec;
        pub const m_flThrowAnimTossPoint: usize = 0x1cf0;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Item_AOESilence {
        pub const m_flStartRadius: usize = 0x108;
        pub const m_flEndRadius: usize = 0x10c;
        pub const m_flSpreadDuration: usize = 0x110;
    }

    // Parent: CBaseButton
    pub mod CPhysicalButton {
    }

    // Parent: CLogicalEntity
    pub mod CInfoSpawnGroupLoadUnload {
        pub const m_OnSpawnGroupLoadStarted: usize = 0x4a0;
        pub const m_OnSpawnGroupLoadFinished: usize = 0x4b8;
        pub const m_OnSpawnGroupUnloadStarted: usize = 0x4d0;
        pub const m_OnSpawnGroupUnloadFinished: usize = 0x4e8;
        pub const m_iszSpawnGroupName: usize = 0x500;
        pub const m_iszSpawnGroupFilterName: usize = 0x508;
        pub const m_iszLandmarkName: usize = 0x510;
        pub const m_sFixedSpawnGroupName: usize = 0x518;
        pub const m_flTimeoutInterval: usize = 0x520;
        pub const m_bAutoActivate: usize = 0x524;
        pub const m_bUnloadingStarted: usize = 0x525;
        pub const m_bQueueActiveSpawnGroupChange: usize = 0x526;
        pub const m_bQueueFinishLoading: usize = 0x527;
    }

    // Parent: CSoundAreaEntityBase
    pub mod CSoundAreaEntityOrientedBox {
        pub const m_vMin: usize = 0x4c0;
        pub const m_vMax: usize = 0x4cc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_BatCloud {
        pub const m_flBatCloudEndTime: usize = 0xf90;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SettingSunThinker_VData {
        pub const m_TargetParticle: usize = 0x750;
        pub const m_ExplodeParticle: usize = 0x830;
        pub const m_LingerParticle: usize = 0x910;
        pub const m_LayerParticle: usize = 0x9f0;
        pub const m_strExplodeSound: usize = 0xad0;
        pub const m_strTargetingCompletedSound: usize = 0xae0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Nano_Shadow {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChargedTackleActive {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BerserkerDamageStackVData {
        pub const m_BuffStatusParticle: usize = 0x750;
        pub const m_BuffStatusParticleEnemy: usize = 0x830;
        pub const m_strBerserkerStackSound: usize = 0x910;
        pub const m_strMaxStackLayer: usize = 0x920;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_LongRangeSlowingTech_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CTier3BossAbility
    pub mod CCitadel_Ability_Tier3Boss_LaserBeam {
        pub const m_pBeamModifier: usize = 0xf70;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_Tier2Boss_RocketBarrage {
        pub const m_nGrenadeIndex: usize = 0xf70;
        pub const m_nTotalGrenades: usize = 0xf74;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PreMatchWait {
    }

    // Parent: None
    pub mod ConsumedComponentState_t {
        pub const m_unComponentID: usize = 0x30;
        pub const m_nRefCount: usize = 0x34;
        pub const m_bPurchased: usize = 0x38;
        pub const m_vecImbuedAbilityIDs: usize = 0x40;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Outflow_ListenForAnimgraphTag {
        pub const m_OnStart: usize = 0x48;
        pub const m_OnEnd: usize = 0x90;
        pub const m_OnCanceled: usize = 0xd8;
        pub const m_TagName: usize = 0x120;
    }

    // Parent: CEntityComponent
    pub mod CBodyComponent {
        pub const m_pSceneNode: usize = 0x8;
        pub const __m_pChainEntity: usize = 0x48;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_Method {
        pub const m_MethodName: usize = 0x80;
        pub const m_Description: usize = 0x90;
        pub const m_bIsPublic: usize = 0x98;
        pub const m_ReturnType: usize = 0xa0;
        pub const m_Args: usize = 0xb8;
    }

    // Parent: CBaseModelEntity
    pub mod CRenderPortal {
        pub const m_hLocalPortalLink: usize = 0x780;
        pub const m_hRemotePortalLink: usize = 0x784;
        pub const m_brushModelName: usize = 0x788;
        pub const m_flFadeStartDist: usize = 0x790;
        pub const m_flFadeEndDist: usize = 0x794;
        pub const m_flFadeStartAngle: usize = 0x798;
        pub const m_flFadeEndAngle: usize = 0x79c;
        pub const m_flRemoteViewForwardOffset: usize = 0x7a0;
        pub const m_fadeToColor: usize = 0x7a4;
    }

    // Parent: IEconItemInterface
    pub mod CEconItemView {
        pub const m_iItemDefinitionIndex: usize = 0x8;
        pub const m_iEntityQuality: usize = 0xc;
        pub const m_iEntityLevel: usize = 0x10;
        pub const m_iItemID: usize = 0x18;
        pub const m_iAccountID: usize = 0x20;
        pub const m_iInventoryPosition: usize = 0x24;
        pub const m_bInitialized: usize = 0x30;
        pub const m_nOverrideStyle: usize = 0x31;
        pub const m_bIsStoreItem: usize = 0x32;
        pub const m_bIsTradeItem: usize = 0x33;
        pub const m_bHasComputedAttachedParticles: usize = 0x34;
        pub const m_bHasAttachedParticles: usize = 0x35;
        pub const m_iEntityQuantity: usize = 0x38;
        pub const m_unClientFlags: usize = 0x3c;
        pub const m_unOverrideOrigin: usize = 0x40;
        pub const m_AttributeList: usize = 0x58;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Werewolf_UnloadGun2VData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_strShootSound: usize = 0x1828;
        pub const m_GunReloadParticle: usize = 0x1838;
        pub const m_MuzzleFlashParticle: usize = 0x1918;
        pub const m_bGrantAmmoOnCast: usize = 0x19f8;
        pub const m_InaccuracyCurveScaleDuringPrecast: usize = 0x1a00;
    }

    // Parent: CCitadelBaseYamatoAbility
    pub mod CCitadel_Ability_InfinitySlash {
        pub const m_flExplodeEndTime: usize = 0x11f8;
        pub const m_flBuffEndTime: usize = 0x11fc;
        pub const m_nCastEffect: usize = 0x1200;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckingBall_AutoThrow {
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_VacuumAuraTargetModifierVData {
        pub const m_flOuterSpeedScale: usize = 0x830;
        pub const m_flSpeedScaleBias: usize = 0x834;
        pub const m_TargetLoopingSound: usize = 0x838;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Ghost_BloodShards {
        pub const m_vecDamagedTargets: usize = 0x12f0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_Tech_Defender_Shredders_Proc {
    }

    // Parent: None
    pub mod CBaseModifier {
        pub const m_nSerialNumber: usize = 0x28;
        pub const m_flLastAppliedTime: usize = 0x2c;
        pub const m_flCreationTime: usize = 0x30;
        pub const m_flDuration: usize = 0x34;
        pub const m_hCaster: usize = 0x38;
        pub const m_hAbility: usize = 0x3c;
        pub const m_hAuraProvider: usize = 0x40;
        pub const m_bInAuraRange: usize = 0x58;
        pub const m_nQueuedModifierRefreshHandle: usize = 0x5a;
        pub const m_nAbilitySubclassID: usize = 0x5c;
        pub const m_iAttributes: usize = 0x60;
        pub const m_iTeam: usize = 0x61;
        pub const m_iStackCount: usize = 0x62;
        pub const m_iMaxStackCount: usize = 0x64;
        pub const m_pVecStackDecayTimes: usize = 0x68;
        pub const m_eDestroyReason: usize = 0x70;
        pub const m_bDisabled: usize = 0x71;
        pub const m_bSuppressSendModifier: usize = 0x72;
        pub const m_flThinkInterval: usize = 0x74;
        pub const m_flThinkIntervalStartTime: usize = 0x78;
        pub const m_flAsyncThinkInterval: usize = 0x7c;
        pub const m_flAsyncThinkIntervalStartTime: usize = 0x80;
        pub const m_flTimeScale: usize = 0x84;
        pub const m_pVecTrackedObjects: usize = 0x88;
        pub const m_hModifierListHandle: usize = 0x90;
        pub const m_iStringIndex: usize = 0x94;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_Ricochet {
        pub const m_hRicochetModifier: usize = 0xf78;
    }

    // Parent: CPointEntity
    pub mod CBaseDMStart {
        pub const m_Master: usize = 0x4a0;
    }

    // Parent: CBaseEntity
    pub mod CBaseModelEntity {
        pub const m_CRenderComponent: usize = 0x4a0;
        pub const m_CHitboxComponent: usize = 0x4a8;
        pub const m_pChoreoComponent: usize = 0x4c0;
        pub const m_nDestructiblePartInitialStateDestructed0: usize = 0x4c8;
        pub const m_nDestructiblePartInitialStateDestructed1: usize = 0x4cc;
        pub const m_nDestructiblePartInitialStateDestructed2: usize = 0x4d0;
        pub const m_nDestructiblePartInitialStateDestructed3: usize = 0x4d4;
        pub const m_nDestructiblePartInitialStateDestructed4: usize = 0x4d8;
        pub const m_nDestructiblePartInitialStateDestructed0_PartIndex: usize = 0x4dc;
        pub const m_nDestructiblePartInitialStateDestructed1_PartIndex: usize = 0x4e0;
        pub const m_nDestructiblePartInitialStateDestructed2_PartIndex: usize = 0x4e4;
        pub const m_nDestructiblePartInitialStateDestructed3_PartIndex: usize = 0x4e8;
        pub const m_nDestructiblePartInitialStateDestructed4_PartIndex: usize = 0x4ec;
        pub const m_pDestructiblePartsSystemComponent: usize = 0x4f0;
        pub const m_OnDestructibleHitGroupDamageLevelChanged: usize = 0x4f8;
        pub const m_flDissolveStartTime: usize = 0x520;
        pub const m_OnIgnite: usize = 0x528;
        pub const m_nRenderMode: usize = 0x540;
        pub const m_nRenderFX: usize = 0x541;
        pub const m_szAddModifier: usize = 0x548;
        pub const m_bAllowFadeInView: usize = 0x550;
        pub const m_bHasCollision: usize = 0x570;
        pub const m_vSupport: usize = 0x574;
        pub const m_clrRender: usize = 0x580;
        pub const m_vecRenderAttributes: usize = 0x588;
        pub const m_bRenderToCubemaps: usize = 0x5f0;
        pub const m_bNoInterpolate: usize = 0x5f1;
        pub const m_Collision: usize = 0x5f8;
        pub const m_Glow: usize = 0x6b0;
        pub const m_flGlowBackfaceMult: usize = 0x708;
        pub const m_fadeMinDist: usize = 0x70c;
        pub const m_fadeMaxDist: usize = 0x710;
        pub const m_flFadeScale: usize = 0x714;
        pub const m_flShadowStrength: usize = 0x718;
        pub const m_nObjectCulling: usize = 0x71c;
        pub const m_bodyGroupChoices: usize = 0x720;
        pub const m_vecViewOffset: usize = 0x748;
        pub const m_bvDisabledHitGroups: usize = 0x778;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_Tier2WeakenedVData {
        pub const m_flTechDamagePctIncrease: usize = 0x830;
        pub const m_WeakenedSound: usize = 0x838;
        pub const m_WeakenedEffect: usize = 0x848;
        pub const m_sWeakenedEffectAttachment: usize = 0x928;
    }

    // Parent: CNPC_SimpleAnimatingAIVData
    pub mod CNPC_BaseDefenseSentryVData {
        pub const m_AbilityWeapon: usize = 0x108;
        pub const m_SentryExplosionParticle: usize = 0x118;
        pub const m_flTimeToStartScale: usize = 0x1f8;
        pub const m_flTimeToEndScale: usize = 0x1fc;
        pub const m_flMaxScale: usize = 0x200;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_NetShotVData {
        pub const m_ShootParticle: usize = 0x1818;
        pub const m_strShootSound: usize = 0x18f8;
        pub const m_strHitConfirmSound: usize = 0x1908;
        pub const m_RootModifier: usize = 0x1918;
        pub const m_DebuffModifier: usize = 0x1928;
        pub const m_BonusDebuffModifier: usize = 0x1938;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_PainAura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_GrandFinale_Buff {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Gunslinger_KnockbackBlastVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_WallImpactParticle: usize = 0x18f8;
        pub const m_strWallSlamSound: usize = 0x19d8;
        pub const m_DebuffModifier: usize = 0x19e8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_WreckerSalvageBuffVData {
        pub const m_WeaponBuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bounce_Pad_Stomp {
        pub const m_bStomped: usize = 0x5d0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_FuryTrance_VData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_CastTargetEffect: usize = 0x18c8;
    }

    // Parent: CitadelItemVData
    pub mod CItemPowerShardVData {
        pub const m_RefreshParticle: usize = 0x18b8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierT2BossWaveTargetVData {
        pub const m_strSilenceTargetSound: usize = 0x750;
        pub const m_SilenceModifier: usize = 0x760;
        pub const m_DisarmModifier: usize = 0x770;
        pub const m_SlowModifier: usize = 0x780;
        pub const m_BulletResistModifier: usize = 0x790;
        pub const m_flTossUpStrength: usize = 0x7a0;
        pub const m_flTossHorizontalMax: usize = 0x7a4;
        pub const m_flTossHorizontalMin: usize = 0x7a8;
        pub const m_flDebuffDuration: usize = 0x7ac;
    }

    // Parent: CAI_BaseNPCVData
    pub mod CAI_CitadelNPCVData {
        pub const m_mapBoundAbilities: usize = 0x330;
        pub const m_flSightRangePlayers: usize = 0x358;
        pub const m_flSightRangeNPCs: usize = 0x35c;
        pub const m_MeleeAnimName: usize = 0x360;
        pub const m_flMeleeAttemptRange: usize = 0x368;
        pub const m_flMeleeHitRange: usize = 0x36c;
        pub const m_MeleeAttackPoints: usize = 0x370;
        pub const m_flMaxHealthBarDrawDistance: usize = 0x388;
        pub const m_flWalkSpeed: usize = 0x38c;
        pub const m_flRunSpeed: usize = 0x390;
        pub const m_flTurnRate: usize = 0x394;
        pub const m_flAcceleration: usize = 0x398;
        pub const m_flStepHeight: usize = 0x39c;
        pub const m_flJumpAnticipationTime: usize = 0x3a0;
        pub const m_BeamStartSound: usize = 0x3a8;
        pub const m_BeamStopSound: usize = 0x3b8;
        pub const m_BeamPointStartLoopSound: usize = 0x3c8;
        pub const m_BeamPointEndLoopSound: usize = 0x3d8;
        pub const m_BeamPointClosestLoopSound: usize = 0x3e8;
        pub const m_strAmbientLoopSound: usize = 0x3f8;
        pub const m_DeathSound: usize = 0x408;
        pub const m_strLastHitSound: usize = 0x418;
        pub const m_bPlayLastHitSound: usize = 0x428;
        pub const m_flLastHitSoundWindowTime: usize = 0x42c;
        pub const m_MeleeHitSound: usize = 0x430;
        pub const m_MeleeHitPlayerSound: usize = 0x440;
        pub const m_sAmberModelName: usize = 0x450;
        pub const m_sSapphireModelName: usize = 0x530;
        pub const m_sDefaultMaterialGroupName: usize = 0x610;
        pub const m_sEnemyMaterialGroupName: usize = 0x618;
        pub const m_sTeam1MaterialGroupName: usize = 0x620;
        pub const m_sTeam2MaterialGroupName: usize = 0x628;
        pub const m_MeleeSwingParticle: usize = 0x630;
        pub const m_MeleeActivateParticle: usize = 0x710;
        pub const m_flModelScale: usize = 0x7f0;
        pub const m_DeathParticle: usize = 0x7f8;
        pub const m_JumpParticle: usize = 0x8d8;
        pub const m_flOutlineRange: usize = 0x9b8;
        pub const m_flOutlineWidth: usize = 0x9bc;
        pub const m_bOutlineThroughWalls: usize = 0x9c0;
        pub const m_bOutlineWhenVisible: usize = 0x9c1;
        pub const m_bSuppressOtherOutlinesWhenVisible: usize = 0x9c2;
        pub const m_HealthBarParticle: usize = 0x9c8;
        pub const m_sHealthBarAttachment: usize = 0xaa8;
        pub const m_HealthBarColorFriend: usize = 0xab0;
        pub const m_HealthBarColorEnemy: usize = 0xab4;
        pub const m_HealthBarColorTeam1: usize = 0xab8;
        pub const m_HealthBarColorTeam2: usize = 0xabc;
        pub const m_HealthBarColorTeamNeutral: usize = 0xac0;
        pub const m_flMeleeTargetRadius: usize = 0xac4;
        pub const m_flHealthBarOffset: usize = 0xac8;
        pub const m_bSpawnBreakablesOnDeath: usize = 0xacc;
        pub const m_flBreakableForceScale: usize = 0xad0;
        pub const m_flPhysicsImpulseMultiplier: usize = 0xad4;
        pub const m_flBeamWeaponWidth: usize = 0xad8;
        pub const m_flBeamTurnRate: usize = 0xadc;
        pub const m_BeamWeaponParticle: usize = 0xae0;
        pub const m_strCustomUnitIcon: usize = 0xbc0;
        pub const m_WeaponInfo: usize = 0xbd0;
    }

    // Parent: None
    pub mod fogplayerparams_t {
        pub const m_hCtrl: usize = 0x8;
        pub const m_flTransitionTime: usize = 0xc;
        pub const m_OldColor: usize = 0x10;
        pub const m_flOldStart: usize = 0x14;
        pub const m_flOldEnd: usize = 0x18;
        pub const m_flOldMaxDensity: usize = 0x1c;
        pub const m_flOldHDRColorScale: usize = 0x20;
        pub const m_flOldFarZ: usize = 0x24;
        pub const m_NewColor: usize = 0x28;
        pub const m_flNewStart: usize = 0x2c;
        pub const m_flNewEnd: usize = 0x30;
        pub const m_flNewMaxDensity: usize = 0x34;
        pub const m_flNewHDRColorScale: usize = 0x38;
        pub const m_flNewFarZ: usize = 0x3c;
    }

    // Parent: None
    pub mod CGlowProperty {
        pub const m_fGlowColor: usize = 0x8;
        pub const m_iGlowType: usize = 0x30;
        pub const m_iGlowTeam: usize = 0x34;
        pub const m_nGlowRange: usize = 0x38;
        pub const m_nGlowRangeMin: usize = 0x3c;
        pub const m_glowColorOverride: usize = 0x40;
        pub const m_bFlashing: usize = 0x44;
        pub const m_flGlowTime: usize = 0x48;
        pub const m_flGlowStartTime: usize = 0x4c;
        pub const m_bGlowing: usize = 0x50;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerBurrowUnderground {
        pub const m_pTouchedEntities: usize = 0x8e0;
    }

    // Parent: CSceneEntity
    pub mod CInstancedSceneEntity {
        pub const m_hOwner: usize = 0x790;
        pub const m_bHadOwner: usize = 0x794;
        pub const m_flPostSpeakDelay: usize = 0x798;
        pub const m_flPreDelay: usize = 0x79c;
        pub const m_bIsBackground: usize = 0x7a0;
        pub const m_bRemoveOnCompletion: usize = 0x7a1;
        pub const m_hTarget: usize = 0x7a4;
    }

    // Parent: CBasePlayerController
    pub mod CCitadelPlayerController {
        pub const m_ePlayState: usize = 0x7d0;
        pub const m_iGuidedBotMatchLastHits: usize = 0x7d4;
        pub const m_iGuidedBotMatchOrbsSecured: usize = 0x7d8;
        pub const m_iGuidedBotMatchOrbsDenied: usize = 0x7dc;
        pub const m_iGuidedBotMatchDamageToGuardians: usize = 0x7e0;
        pub const m_iGuidedBotMatchDamageToPlayers: usize = 0x7e4;
        pub const m_iGuidedBotMatchDamageTaken: usize = 0x7e8;
        pub const m_iGuidedBotMatchNetWorth: usize = 0x7ec;
        pub const m_iGuidedBotMatchModsPurchased: usize = 0x7f0;
        pub const m_iGuidedBotMatchAbilityUpgrades: usize = 0x7f4;
        pub const m_flGuideBotMatchLastTaskNagVO: usize = 0x7f8;
        pub const m_flGuideBotLastTimeTaskCompleted: usize = 0x7fc;
        pub const m_eGuidedBotMatchObjective: usize = 0x800;
        pub const m_nCurrentRank: usize = 0x804;
        pub const m_nAssignedLane: usize = 0x808;
        pub const m_nOriginalLaneAssignment: usize = 0x809;
        pub const m_bBotDisconnectTakeover: usize = 0x80a;
        pub const m_bInTeamChat: usize = 0x80b;
        pub const m_bInPartyChat: usize = 0x80c;
        pub const m_bLaneSwapLocked: usize = 0x80d;
        pub const m_vecLaneSwapRequests: usize = 0x810;
        pub const m_vecLaneSwapRejects: usize = 0x828;
        pub const m_vecMutedPlayers: usize = 0x840;
        pub const m_bCommsRestricted: usize = 0x858;
        pub const m_hHeroPawn: usize = 0x984;
        pub const m_PlayerDataGlobal: usize = 0x9c8;
        pub const m_nDeathReplayAvailable: usize = 0xd08;
        pub const m_unLobbyPlayerSlot: usize = 0xd09;
        pub const m_flLastCommsTime: usize = 0xd0c;
        pub const m_flNextAllowedCommsTime: usize = 0xd10;
        pub const m_flLastFailedCommsTime: usize = 0xd14;
        pub const m_vecRecentCommAttempts: usize = 0xd18;
        pub const m_nTotalCommsAttempted: usize = 0xd30;
        pub const m_nGuideBotNumTasksComplete: usize = 0xd34;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Petrify {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierChargedTacklePrepareVData {
        pub const m_PrepareParticle: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_HornetSnipeVData {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_PassiveBeefyVData {
        pub const m_HealParticle: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SpilledBloodThinker {
        pub const m_flRadius: usize = 0xd0;
        pub const m_flDPS: usize = 0xd4;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CScaleFunctionVData {
        pub const m_eSpecificStatScaleType: usize = 0x28;
        pub const m_bFunctionDisabled: usize = 0x2c;
        pub const m_flStatScale: usize = 0x30;
        pub const m_flStreetBrawlStatScale: usize = 0x34;
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_BaseValue {
    }

    // Parent: CBaseTrigger
    pub mod CCitadelHideoutTeleportTrigger {
        pub const m_strDestLandmark: usize = 0x920;
        pub const m_strDestMap: usize = 0x928;
        pub const m_strDestLocString: usize = 0x930;
        pub const m_OnHideoutTeleport: usize = 0x938;
        pub const m_strPropModel: usize = 0x950;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CAbility_Drifter_StalkersMark_Teleport {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_NullificationAura {
    }

    // Parent: CBaseEntity
    pub mod CCitadelSoundOpvarSetOBB {
        pub const m_iszStackName: usize = 0x4a0;
        pub const m_iszOperatorName: usize = 0x4a8;
        pub const m_iszOpvarName: usize = 0x4b0;
        pub const m_vDistanceInnerMins: usize = 0x4b8;
        pub const m_vDistanceInnerMaxs: usize = 0x4c4;
        pub const m_vDistanceOuterMins: usize = 0x4d0;
        pub const m_vDistanceOuterMaxs: usize = 0x4dc;
        pub const m_nAABBDirection: usize = 0x4e8;
    }

    // Parent: CBaseEntity
    pub mod CSoundEventParameter {
        pub const m_iszParamName: usize = 0x4b8;
        pub const m_flFloatValue: usize = 0x4c0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Guiding_Arrow {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_BaseWeaponDamage {
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_WaterServices {
    }

    // Parent: CPulseCell_BaseState
    pub mod CPulseCell_BooleanSwitchState {
        pub const m_Condition: usize = 0x48;
        pub const m_SubGraph: usize = 0xc0;
        pub const m_WhenTrue: usize = 0x108;
        pub const m_WhenFalse: usize = 0x150;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_SplitShot {
        pub const m_nLastShotID: usize = 0xf78;
        pub const m_nLastHitShotID: usize = 0xf7c;
        pub const m_nWpnBatchCount: usize = 0xf80;
        pub const m_nLastBulletHitShotID: usize = 0xff0;
        pub const m_nLastBulletHitCount: usize = 0xff4;
        pub const m_eLastBulletHitEnt: usize = 0xff8;
        pub const m_bSplitShotActive: usize = 0xffc;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_Shrink_Ray {
    }

    // Parent: CBaseButton
    pub mod CRotButton {
    }

    // Parent: CPointEntity
    pub mod CEnvViewPunch {
        pub const m_flRadius: usize = 0x4a0;
        pub const m_angViewPunch: usize = 0x4a4;
    }

    // Parent: None
    pub mod CEconEntityAttachedParticleInfo_t {
        pub const m_nAttachedParticleIndex: usize = 0x0;
        pub const m_customType: usize = 0x4;
        pub const m_bShouldDestroyImmediately: usize = 0x8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_LeapVData {
        pub const m_strCrashSound: usize = 0x1818;
        pub const m_LeapingModifier: usize = 0x1828;
        pub const m_LandingBonusesModifier: usize = 0x1838;
        pub const m_DebuffModifier: usize = 0x1848;
        pub const m_CrashParticle: usize = 0x1858;
        pub const m_flBufferTimeBeforeLanding: usize = 0x1938;
        pub const m_flMaxPitch: usize = 0x193c;
        pub const m_flMinPitch: usize = 0x1940;
        pub const m_LeapSpeedCurve: usize = 0x1948;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Swan_Leap {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_BouncyProjectile {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_FireBeetles_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Gunslinger_DemonCarbine {
        pub const m_nBulletCount: usize = 0xd0;
        pub const m_flElapsedPct: usize = 0xd4;
        pub const m_nFullyChargedParticle: usize = 0xd8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Uppercutted {
        pub const m_vecFromBebop: usize = 0xd0;
        pub const m_flDamage: usize = 0xdc;
        pub const m_bExplodeOnLand: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TargetPracticeEnemyVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_BuildupCompleteModifier: usize = 0x760;
        pub const m_BuildupModifier: usize = 0x770;
        pub const m_TargetParticle: usize = 0x780;
        pub const m_HitParticle: usize = 0x860;
        pub const m_HeadParticle: usize = 0x940;
        pub const m_strTargetHitSound: usize = 0xa20;
        pub const m_strTargetHeadShotHitSound: usize = 0xa30;
        pub const m_strTargetCompleteSound: usize = 0xa40;
    }

    // Parent: CCitadel_Modifier_StatStealBaseVData
    pub mod CCitadel_Modifier_Siphon_Bullets_WatcherVData {
        pub const m_HealModifier: usize = 0x770;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CorpseExplosionThinker {
        pub const m_flExplosionTime: usize = 0xd0;
        pub const m_flRadius: usize = 0xd4;
        pub const m_flDamage: usize = 0xd8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ArcticBlast_VData {
        pub const m_AOEModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_HollowPoint_Proc {
    }

    // Parent: None
    pub mod VPhysicsCollisionAttribute_t {
        pub const m_nInteractsAs: usize = 0x8;
        pub const m_nInteractsWith: usize = 0x10;
        pub const m_nInteractsExclude: usize = 0x18;
        pub const m_nEntityId: usize = 0x20;
        pub const m_nOwnerId: usize = 0x24;
        pub const m_nHierarchyId: usize = 0x28;
        pub const m_nDetailLayerMask: usize = 0x2a;
        pub const m_nDetailLayerMaskType: usize = 0x2c;
        pub const m_nTargetDetailLayer: usize = 0x2d;
        pub const m_nCollisionGroup: usize = 0x2e;
        pub const m_nCollisionFunctionMask: usize = 0x2f;
    }

    // Parent: CCitadel_Item
    pub mod CItemCapacitor {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_Stimpak {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadelBulletTimeWarp {
        pub const m_flBulletTimeScale: usize = 0x780;
        pub const m_flProjectileTimeScale: usize = 0x784;
        pub const m_flExpireTime: usize = 0x788;
        pub const m_flStopDuration: usize = 0x78c;
        pub const m_flBulletTimeScaleFriendly: usize = 0x790;
        pub const m_flBonusBulletBaseDamageFriendly: usize = 0x794;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncShatterglass {
        pub const m_matPanelTransform: usize = 0x780;
        pub const m_matPanelTransformWsTemp: usize = 0x7b0;
        pub const m_vecShatterGlassShards: usize = 0x7e0;
        pub const m_PanelSize: usize = 0x7f8;
        pub const m_flLastShatterSoundEmitTime: usize = 0x800;
        pub const m_flLastCleanupTime: usize = 0x804;
        pub const m_flInitAtTime: usize = 0x808;
        pub const m_flGlassThickness: usize = 0x80c;
        pub const m_flSpawnInvulnerability: usize = 0x810;
        pub const m_bBreakSilent: usize = 0x814;
        pub const m_bBreakShardless: usize = 0x815;
        pub const m_bBroken: usize = 0x816;
        pub const m_bGlassNavIgnore: usize = 0x817;
        pub const m_bGlassInFrame: usize = 0x818;
        pub const m_bStartBroken: usize = 0x819;
        pub const m_iInitialDamageType: usize = 0x81a;
        pub const m_szDamagePositioningEntityName01: usize = 0x820;
        pub const m_szDamagePositioningEntityName02: usize = 0x828;
        pub const m_szDamagePositioningEntityName03: usize = 0x830;
        pub const m_szDamagePositioningEntityName04: usize = 0x838;
        pub const m_vInitialDamagePositions: usize = 0x840;
        pub const m_vExtraDamagePositions: usize = 0x858;
        pub const m_vInitialPanelVertices: usize = 0x870;
        pub const m_OnBroken: usize = 0x888;
        pub const m_iSurfaceType: usize = 0x8a0;
        pub const m_hMaterialDamageBase: usize = 0x8a8;
    }

    // Parent: CPointEntity
    pub mod CNavWalkable {
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoTrooperSpawn {
        pub const m_iLane: usize = 0x4a4;
        pub const m_bDisableZiplining: usize = 0x4a8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Wrecker_UltimateGrabEnemyVData {
        pub const m_EnemyHeroStasisEffect: usize = 0x750;
        pub const m_EnemyHeroGrabEffect: usize = 0x830;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_ActiveBulletShieldVData {
        pub const m_TempShieldModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CatapultDamageWatcher {
    }

    // Parent: CEnvSoundscapeProxy
    pub mod CEnvSoundscapeProxyAlias_snd_soundscape_proxy {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadel_Ice_Path_Shard_Physics {
        pub const m_ShardDesc: usize = 0x780;
        pub const m_qForward: usize = 0x7b8;
        pub const m_flStartTime: usize = 0x7c4;
        pub const m_flEndTime: usize = 0x7c8;
        pub const m_flShardWidth: usize = 0x7cc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AccuracyTracker {
        pub const m_flInterval: usize = 0xe8;
        pub const m_flProgress: usize = 0xec;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_BodyGroupChoice {
        pub const m_nBodyGroupName: usize = 0xd0;
        pub const m_nBodyGroupChoice: usize = 0xd4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Unicorn_RadiantBlastVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_strHitSound: usize = 0x1828;
        pub const m_CastParticle: usize = 0x1838;
        pub const m_HitParticle: usize = 0x1918;
        pub const m_flJumpAirSpeedMax: usize = 0x19f8;
        pub const m_flJumpFallSpeedMax: usize = 0x19fc;
        pub const m_flJumpAirDrag: usize = 0x1a00;
        pub const m_iConeBulletCount: usize = 0x1a04;
        pub const m_flConeBulletSpread: usize = 0x1a08;
        pub const m_flRangeScaleIncreaseMax: usize = 0x1a0c;
        pub const m_flRangeScaleIncreaseMaxSpeed: usize = 0x1a10;
        pub const m_flHitConeAngleExtra: usize = 0x1a14;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Werewolf_Leap {
        pub const m_bWillLeapOff: usize = 0xf70;
        pub const m_bIsLeaping: usize = 0xf71;
        pub const m_tLeapStartTime: usize = 0xf74;
        pub const m_tLeapOffTime: usize = 0xf78;
        pub const m_vLaunchPosition: usize = 0xf7c;
        pub const m_vLaunchVelocity: usize = 0xf88;
        pub const m_qLaunchAngle: usize = 0xf94;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Fencer_Ultimate {
        pub const m_vStartPosition: usize = 0xf70;
        pub const m_vDashDirection: usize = 0xf7c;
        pub const m_vecLastPosition: usize = 0xf88;
        pub const m_eUltState: usize = 0xf94;
        pub const m_flStateStartTime: usize = 0xf98;
        pub const m_bHitSomeone: usize = 0xf9c;
        pub const m_vecHitEnemies: usize = 0xfa0;
        pub const m_vecHitHeroes: usize = 0xfb8;
        pub const m_flStuckTime: usize = 0xfd0;
        pub const m_UltHoldVFX: usize = 0xfd4;
        pub const m_DirPreviewVFX: usize = 0xfd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Mirage_FireBeetles_Debuff_VData {
        pub const m_DebuffParticle: usize = 0x750;
        pub const m_DebuffStartParticle: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Chrono_KineticCarbine_Slow {
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_CrushingFistsWatcher_VData {
        pub const m_StackingDebuffModifier: usize = 0x750;
        pub const m_strStackSound: usize = 0x760;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_Ricochet_ProcVData {
        pub const m_RicochetTracerParticle: usize = 0x780;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Inflow_Yield {
        pub const m_UnyieldResume: usize = 0x48;
    }

    // Parent: None
    pub mod CPulseMathlib {
    }

    // Parent: CBaseModelEntity
    pub mod CCitadel_Hideout_Ball {
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Necro_HauntProjectile {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifier_Drifter_Darkness_Target_VData {
        pub const m_VictimParticleEffect: usize = 0x7a8;
        pub const m_BlindedStatusParticle: usize = 0x888;
        pub const m_NearbyVictimStatusParticle: usize = 0x968;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Tokamak_AllySmokeAOE_VData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CAI_Component
    pub mod CAI_AnimGraphServices {
        pub const m_pHandshakeInfo: usize = 0x50;
        pub const m_LastIncomingHit: usize = 0x80;
    }

    // Parent: CPointEntity
    pub mod CPhysImpact {
        pub const m_damage: usize = 0x4a0;
        pub const m_distance: usize = 0x4a4;
        pub const m_directionEntityName: usize = 0x4a8;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Werewolf_ClawWeaponVData {
        pub const m_strSwipeParticle: usize = 0x19c8;
        pub const m_strSwipeHitParticle: usize = 0x1aa8;
        pub const m_vecClawSwipeInfos: usize = 0x1b88;
        pub const m_strSwipeHitSound: usize = 0x1ba0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_Flashbang_VData {
        pub const m_EnemyDebuffModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
        pub const m_BounceParticle: usize = 0x1908;
        pub const m_ExplosionSound: usize = 0x19e8;
        pub const m_BounceSound: usize = 0x19f8;
        pub const m_flMinSurfaceDotToBounce: usize = 0x1a08;
        pub const m_flMaxSurfaceDotToBounce: usize = 0x1a0c;
        pub const m_flBounceVerticalReductionRatio: usize = 0x1a10;
        pub const m_bDebug: usize = 0x1a14;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Pillar {
        pub const flAccumulatedDamage: usize = 0xd8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ThrownShiv_Slow_Debuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierAerialAssaultWatcherVData {
        pub const m_AssaultModifier: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_APRounds {
        pub const m_nLastProcShotID: usize = 0x228;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_BoxingGloveVData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_SwingParticle: usize = 0x790;
        pub const m_HitParticle: usize = 0x870;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_MagicClarityWatcher {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FullSpectrumDamage {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NearbyEnemyResist {
    }

    // Parent: CCitadelItemPickupRejuvVData
    pub mod CCitadelItemPickupRejuvHeroTestVData {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Ability_Shield {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_NPCAbility_Vanguard_AOEBuff_VData {
        pub const m_HealingModifier: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x1828;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Rocketeer4 {
        pub const m_vImpulseDirection: usize = 0xf70;
        pub const m_vVelocity: usize = 0xf7c;
        pub const m_vThrustingVelocity: usize = 0xf88;
        pub const m_tStateEnterTime: usize = 0xf94;
        pub const m_eState: usize = 0xf98;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPunkgoatTetherVData {
        pub const m_FireRateSlowModifier: usize = 0x1818;
        pub const m_TetheredModifier: usize = 0x1828;
        pub const m_PullModifier: usize = 0x1838;
        pub const m_WaitingToPullModifier: usize = 0x1848;
        pub const m_UnstoppableModifier: usize = 0x1858;
        pub const m_RopeParticle: usize = 0x1868;
        pub const m_strPullSound: usize = 0x1948;
        pub const m_strTimerSound: usize = 0x1958;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityDistruptiveChargeVData {
        pub const m_Particle: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bull_Heal_Target {
        pub const m_flTetherRangeSquared: usize = 0x350;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_CharmedWraps_VData {
        pub const m_SwingParticle: usize = 0x780;
        pub const m_HitParticle: usize = 0x860;
    }

    // Parent: CEntityInstance
    pub mod CBaseEntity {
        pub const m_CBodyComponent: usize = 0x30;
        pub const m_NetworkTransmitComponent: usize = 0x38;
        pub const m_aThinkFunctions: usize = 0x248;
        pub const m_iCurrentThinkContext: usize = 0x260;
        pub const m_nLastThinkTick: usize = 0x264;
        pub const m_bDisabledContextThinks: usize = 0x268;
        pub const m_isSteadyState: usize = 0x278;
        pub const m_lastNetworkChange: usize = 0x280;
        pub const m_ResponseContexts: usize = 0x290;
        pub const m_iszResponseContext: usize = 0x2a8;
        pub const m_iHealth: usize = 0x2d0;
        pub const m_iMaxHealth: usize = 0x2d4;
        pub const m_lifeState: usize = 0x2d8;
        pub const m_flDamageAccumulator: usize = 0x2dc;
        pub const m_bTakesDamage: usize = 0x2e0;
        pub const m_nTakeDamageFlags: usize = 0x2e8;
        pub const m_nPlatformType: usize = 0x2f0;
        pub const m_MoveCollide: usize = 0x2f2;
        pub const m_MoveType: usize = 0x2f3;
        pub const m_nActualMoveType: usize = 0x2f4;
        pub const m_nWaterTouch: usize = 0x2f5;
        pub const m_nSlimeTouch: usize = 0x2f6;
        pub const m_bRestoreInHierarchy: usize = 0x2f7;
        pub const m_target: usize = 0x2f8;
        pub const m_hDamageFilter: usize = 0x300;
        pub const m_iszDamageFilterName: usize = 0x308;
        pub const m_flMoveDoneTime: usize = 0x310;
        pub const m_nSubclassID: usize = 0x314;
        pub const m_flAnimTime: usize = 0x320;
        pub const m_flSimulationTime: usize = 0x324;
        pub const m_flCreateTime: usize = 0x328;
        pub const m_bClientSideRagdoll: usize = 0x32c;
        pub const m_ubInterpolationFrame: usize = 0x32d;
        pub const m_vPrevVPhysicsUpdatePos: usize = 0x330;
        pub const m_iTeamNum: usize = 0x33c;
        pub const m_iGlobalname: usize = 0x340;
        pub const m_iSentToClients: usize = 0x348;
        pub const m_flSpeed: usize = 0x34c;
        pub const m_sUniqueHammerID: usize = 0x350;
        pub const m_spawnflags: usize = 0x358;
        pub const m_nNextThinkTick: usize = 0x35c;
        pub const m_nSimulationTick: usize = 0x360;
        pub const m_OnKilled: usize = 0x368;
        pub const m_fFlags: usize = 0x380;
        pub const m_vecAbsVelocity: usize = 0x384;
        pub const m_vecVelocity: usize = 0x390;
        pub const m_nPushEnumCount: usize = 0x3c0;
        pub const m_pCollision: usize = 0x3c8;
        pub const m_pModifierProp: usize = 0x3d0;
        pub const m_hEffectEntity: usize = 0x3d8;
        pub const m_hOwnerEntity: usize = 0x3dc;
        pub const m_fEffects: usize = 0x3e0;
        pub const m_hGroundEntity: usize = 0x3e4;
        pub const m_nGroundBodyIndex: usize = 0x3e8;
        pub const m_flFriction: usize = 0x3ec;
        pub const m_flElasticity: usize = 0x3f0;
        pub const m_flGravityScale: usize = 0x3f4;
        pub const m_flTimeScale: usize = 0x3f8;
        pub const m_flWaterLevel: usize = 0x3fc;
        pub const m_bGravityDisabled: usize = 0x400;
        pub const m_bAnimatedEveryTick: usize = 0x401;
        pub const m_flActualGravityScale: usize = 0x404;
        pub const m_bGravityActuallyDisabled: usize = 0x408;
        pub const m_bDisableLowViolence: usize = 0x409;
        pub const m_nWaterType: usize = 0x40a;
        pub const m_iEFlags: usize = 0x40c;
        pub const m_OnUser1: usize = 0x410;
        pub const m_OnUser2: usize = 0x428;
        pub const m_OnUser3: usize = 0x440;
        pub const m_OnUser4: usize = 0x458;
        pub const m_iInitialTeamNum: usize = 0x470;
        pub const m_flNavIgnoreUntilTime: usize = 0x474;
        pub const m_vecAngVelocity: usize = 0x478;
        pub const m_bNetworkQuantizeOriginAndAngles: usize = 0x484;
        pub const m_bLagCompensate: usize = 0x485;
        pub const m_pBlocker: usize = 0x488;
        pub const m_flLocalTime: usize = 0x48c;
        pub const m_flVPhysicsUpdateLocalTime: usize = 0x490;
        pub const m_pPulseGraphInstance: usize = 0x498;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_UseServices {
    }

    // Parent: CNPC_SimpleAnimatingAI
    pub mod CNPC_BaseDefenseSentry {
        pub const m_vecUnitStatusOffset: usize = 0xc18;
        pub const m_flAttackCone: usize = 0xc4c;
        pub const m_flAttackDelay: usize = 0xc50;
        pub const m_flLastAlertSound: usize = 0xc54;
        pub const m_nSentryLevel: usize = 0xc5c;
        pub const m_vecForward: usize = 0xc60;
    }

    // Parent: CBaseTrigger
    pub mod CNpcFootSweep {
        pub const m_vecPushers: usize = 0x8e0;
        pub const m_bUseCenterPusher: usize = 0x8f8;
        pub const m_bUseForwardPusher: usize = 0x8f9;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifierVacuumAuraVData {
        pub const m_FinishParticle: usize = 0x7a8;
        pub const m_AlliedParticle: usize = 0x888;
        pub const m_EnemyParticle: usize = 0x968;
        pub const m_strAmbientLoopingLocalPlayerSound: usize = 0xa48;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_SetMoveType {
        pub const m_nMoveType: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_Traveler_MovementSpeed {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Gunslinger_KnockbackBlast {
        pub const m_vecKnockbackDirection: usize = 0xf70;
        pub const m_vecKnockbackedUnits: usize = 0xf80;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TargetPracticeEnemy {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierChronoPulseGrenadePulseAreaVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_SlowModifier: usize = 0x760;
        pub const m_PreviewRingParticle: usize = 0x770;
        pub const m_AreaEffect: usize = 0x850;
        pub const m_strArmingSound: usize = 0x930;
        pub const m_strArmedSound: usize = 0x940;
        pub const m_strHitSound: usize = 0x950;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VeilWalkerMovespeed {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SlowingBullets_Proc {
    }

    // Parent: None
    pub mod PlayerDataGlobal_t {
        pub const m_iLevel: usize = 0x8;
        pub const m_iMaxAmmo: usize = 0xc;
        pub const m_iHealthMax: usize = 0x10;
        pub const m_flHealthRegen: usize = 0x14;
        pub const m_flRespawnTime: usize = 0x18;
        pub const m_nHeroID: usize = 0x1c;
        pub const m_nPreGameHeroID: usize = 0x20;
        pub const m_unHeroBadgeXP: usize = 0x24;
        pub const m_iGoldNetWorth: usize = 0x28;
        pub const m_iAPNetWorth: usize = 0x2c;
        pub const m_iCreepGold: usize = 0x30;
        pub const m_iCreepGoldSoloBonus: usize = 0x34;
        pub const m_iCreepGoldKill: usize = 0x38;
        pub const m_iCreepGoldAirOrb: usize = 0x3c;
        pub const m_iCreepGoldGroundOrb: usize = 0x40;
        pub const m_iCreepGoldDeny: usize = 0x44;
        pub const m_iCreepGoldNeutral: usize = 0x48;
        pub const m_iFarmBaseline: usize = 0x4c;
        pub const m_iHealth: usize = 0x50;
        pub const m_iPlayerKills: usize = 0x54;
        pub const m_iPlayerAssists: usize = 0x58;
        pub const m_iDeaths: usize = 0x5c;
        pub const m_iDenies: usize = 0x60;
        pub const m_iLastHits: usize = 0x64;
        pub const m_iKillStreak: usize = 0x68;
        pub const m_bAlive: usize = 0x6c;
        pub const m_nHeroDraftPosition: usize = 0x70;
        pub const m_bUltimateTrained: usize = 0x74;
        pub const m_flUltimateCooldownStart: usize = 0x78;
        pub const m_flUltimateCooldownEnd: usize = 0x7c;
        pub const m_bHasRejuvenator: usize = 0x80;
        pub const m_bHasRebirth: usize = 0x81;
        pub const m_bFlaggedAsCheater: usize = 0x82;
        pub const m_bAbandon: usize = 0x83;
        pub const m_iHeroDamage: usize = 0x84;
        pub const m_iHeroHealing: usize = 0x88;
        pub const m_iSelfHealing: usize = 0x8c;
        pub const m_iObjectiveDamage: usize = 0x90;
        pub const m_vecUpgrades: usize = 0x98;
        pub const m_vecBonusCounterAbilities: usize = 0xb0;
        pub const m_vecBonusCounterValues: usize = 0xc8;
        pub const m_vecBonusCounterModifiers: usize = 0xe0;
        pub const m_vecModifierBonusCounterValues: usize = 0xf8;
        pub const m_tHeldItem: usize = 0x110;
        pub const m_vecImbuements: usize = 0x118;
        pub const m_vecDynamicAbilityValues: usize = 0x180;
        pub const m_vecStatViewerModifierValues: usize = 0x1e8;
        pub const m_vecStolenAbilities: usize = 0x250;
        pub const m_vecAbilityUpgradeState: usize = 0x2b8;
        pub const m_strIconHeroCardOverride: usize = 0x320;
        pub const m_strIconHeroCardCriticalOverride: usize = 0x328;
        pub const m_strIconHeroCardGloatOverride: usize = 0x330;
        pub const m_unPackedRank: usize = 0x338;
    }

    // Parent: None
    pub mod CGameSceneNodeHandle {
        pub const m_hOwner: usize = 0x8;
        pub const m_name: usize = 0xc;
    }

    // Parent: CDynamicProp
    pub mod CCitadelHideoutInteractableProp {
        pub const m_OnStartTouch: usize = 0xcf0;
        pub const m_OnStartTouchAll: usize = 0xd08;
        pub const m_OnEndTouch: usize = 0xd20;
        pub const m_OnEndTouchAll: usize = 0xd38;
        pub const m_OnInteracted: usize = 0xd50;
        pub const m_strInteractLocString: usize = 0xd68;
        pub const m_eInteractStyle: usize = 0xd70;
        pub const m_eHideoutAction: usize = 0xd74;
        pub const m_flInteractDistance: usize = 0xd78;
        pub const m_strWorldPanelEntity: usize = 0xd80;
        pub const m_strOpacityCurveString: usize = 0xd88;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_DragonFireGroundAuraVData {
        pub const m_GroundParticle: usize = 0x7a8;
        pub const m_flHeight: usize = 0x888;
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Priest_SlideTrap_Projectile {
        pub const m_flRangeAtCast: usize = 0x874;
        pub const m_bArmed: usize = 0x8b4;
        pub const m_bMoving: usize = 0x8b5;
        pub const m_bFinished: usize = 0x8b6;
    }

    // Parent: CMarkupVolumeTagged
    pub mod CMarkupVolumeWithRef {
        pub const m_bUseRef: usize = 0x7c8;
        pub const m_vRefPosEntitySpace: usize = 0x7cc;
        pub const m_vRefPosWorldSpace: usize = 0x7d8;
        pub const m_flRefDot: usize = 0x7e4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Trapper_FearVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x18f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilitySleepBombVData {
        pub const m_ExplosionParticle: usize = 0x1818;
        pub const m_AuraModifier: usize = 0x18f8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityGooGrenadeVData {
        pub const m_GooGrenadeImpactModifier: usize = 0x1818;
        pub const m_GooGrenadePuddleAuraModifier: usize = 0x1828;
        pub const m_GooGrenadePuddleAuraFriendlyModifier: usize = 0x1838;
        pub const m_GooGrenadeSkipParticle: usize = 0x1848;
        pub const m_GooGrenadeExplodeParticle: usize = 0x1928;
        pub const m_GrenadeHitSound: usize = 0x1a08;
        pub const m_flMinRestitution: usize = 0x1a18;
        pub const m_flMaxRestitution: usize = 0x1a1c;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Citadel_Bull_Leap_LandingBonuses {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_CheatDeathImmunity {
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_Unknown {
        pub const m_UnknownKeys: usize = 0x48;
    }

    // Parent: CFuncPlat
    pub mod CFuncPlatRot {
        pub const m_end: usize = 0x830;
        pub const m_start: usize = 0x83c;
    }

    // Parent: CCitadelModifier
    pub mod CGameModifier_SetModelScale {
        pub const m_flOldModelScale: usize = 0xd0;
    }

    // Parent: CPointEntity
    pub mod CRagdollMagnet {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_radius: usize = 0x4a4;
        pub const m_force: usize = 0x4a8;
        pub const m_axis: usize = 0x4ac;
    }

    // Parent: CPointEntity
    pub mod CInfoInstructorHintTarget {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SpiderShield {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_BigBoltVData {
        pub const m_ChargeParticle: usize = 0x1818;
        pub const m_ShootDelayParticle: usize = 0x18f8;
        pub const m_CasterModifier: usize = 0x19d8;
        pub const m_BoltHitModifier: usize = 0x19e8;
        pub const m_strBoltDelay: usize = 0x19f8;
        pub const m_strBoltFire: usize = 0x1a08;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTeleportToGangsterVData {
    }

    // Parent: CitadelItemVData
    pub mod CItem_WarpStone_VData {
        pub const m_CasterModifier: usize = 0x18b8;
        pub const m_CasterDebuffModifier: usize = 0x18c8;
        pub const m_strExplodeSound: usize = 0x18d8;
        pub const m_CastDelayParticle: usize = 0x18e8;
        pub const m_TeleportTrailParticle: usize = 0x19c8;
        pub const m_flGroundProbeSpeed: usize = 0x1aa8;
        pub const m_flGroundStepDown: usize = 0x1aac;
        pub const m_flGroundStepUp: usize = 0x1ab0;
        pub const m_iMaxGroundIterations: usize = 0x1ab4;
        pub const m_flVelocityScale: usize = 0x1ab8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_SpellslingerHeadshots_Debuff {
        pub const m_tLastHeadshot: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BonusDamagePercentVData {
        pub const m_bSelfish: usize = 0x750;
    }

    // Parent: CSprite
    pub mod CSpriteAlias_env_glow {
    }

    // Parent: CBaseModelEntity
    pub mod CSpotlightEnd {
        pub const m_flLightScale: usize = 0x780;
        pub const m_Radius: usize = 0x784;
        pub const m_vSpotlightDir: usize = 0x788;
        pub const m_vSpotlightOrg: usize = 0x794;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoCoverPoint {
        pub const m_nGroupID: usize = 0x4a0;
        pub const m_nVisionRadius: usize = 0x4a4;
        pub const m_bAllowOffNav: usize = 0x4a8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Familiar_AttachHostVData {
        pub const m_FakeFamiliarParticle: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_StabilizingTripodVData {
        pub const m_SelfDebuffModifier: usize = 0x18b8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_AcolytesGlove_VData {
        pub const m_DebuffModifier: usize = 0x780;
        pub const m_SwingParticle: usize = 0x790;
        pub const m_HitParticle: usize = 0x870;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LearningHeroAbility {
        pub const m_sDescription: usize = 0xd0;
    }

    // Parent: CBaseModelEntity
    pub mod CEnvSky {
        pub const m_hSkyMaterial: usize = 0x780;
        pub const m_hSkyMaterialLightingOnly: usize = 0x788;
        pub const m_bStartDisabled: usize = 0x790;
        pub const m_vTintColor: usize = 0x791;
        pub const m_vTintColorLightingOnly: usize = 0x795;
        pub const m_flBrightnessScale: usize = 0x79c;
        pub const m_nFogType: usize = 0x7a0;
        pub const m_flFogMinStart: usize = 0x7a4;
        pub const m_flFogMinEnd: usize = 0x7a8;
        pub const m_flFogMaxStart: usize = 0x7ac;
        pub const m_flFogMaxEnd: usize = 0x7b0;
        pub const m_bEnabled: usize = 0x7b4;
    }

    // Parent: CPointEntity
    pub mod CInfoSpawnGroupLandmark {
    }

    // Parent: CPointEntity
    pub mod CPointAngleSensor {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_nLookAtName: usize = 0x4a8;
        pub const m_hTargetEntity: usize = 0x4b0;
        pub const m_hLookAtEntity: usize = 0x4b4;
        pub const m_flDuration: usize = 0x4b8;
        pub const m_flDotTolerance: usize = 0x4bc;
        pub const m_flFacingTime: usize = 0x4c0;
        pub const m_bFired: usize = 0x4c4;
        pub const m_OnFacingLookat: usize = 0x4c8;
        pub const m_OnNotFacingLookat: usize = 0x4e0;
        pub const m_TargetDir: usize = 0x4f8;
        pub const m_FacingPercentage: usize = 0x520;
    }

    // Parent: CBaseEntity
    pub mod CEnvWindController {
        pub const m_EnvWindShared: usize = 0x4a0;
        pub const m_fDirectionVariation: usize = 0x5d0;
        pub const m_fSpeedVariation: usize = 0x5d4;
        pub const m_fTurbulence: usize = 0x5d8;
        pub const m_fVolumeHalfExtentXY: usize = 0x5dc;
        pub const m_fVolumeHalfExtentZ: usize = 0x5e0;
        pub const m_nVolumeResolutionXY: usize = 0x5e4;
        pub const m_nVolumeResolutionZ: usize = 0x5e8;
        pub const m_nClipmapLevels: usize = 0x5ec;
        pub const m_bIsMaster: usize = 0x5f0;
        pub const m_bFirstTime: usize = 0x5f1;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_BatBlink {
        pub const m_iRemainingCasts: usize = 0x1278;
        pub const m_bIsBlinking: usize = 0x127c;
        pub const m_RecastEndTime: usize = 0x1280;
        pub const m_BlinkEndTime: usize = 0x1284;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Fathom_LurkersAmbush_VData {
        pub const m_ChargeUpParticle: usize = 0x1818;
        pub const m_InvisModifier: usize = 0x18f8;
        pub const m_RegenModifier: usize = 0x1908;
        pub const m_DebuffModifier: usize = 0x1918;
        pub const m_strSwapStarted: usize = 0x1928;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_Haunt_Damage {
        pub const m_bCheckForExplosion: usize = 0xd0;
        pub const m_flLastBurnTime: usize = 0xd4;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ShieldedSentry_VData {
        pub const m_InnateModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_flDamageFalloffEndScale: usize = 0x1838;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChainLightningEffect {
        pub const m_nChainCount: usize = 0xd0;
        pub const m_hHitEntities: usize = 0xd8;
        pub const m_hUnhitEnts: usize = 0xf0;
        pub const m_vLastSource: usize = 0x108;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SpellShield_Buff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseAbilityServerOnly {
    }

    // Parent: None
    pub mod CModifierHandleBase {
        pub const m_hStableHandle: usize = 0x8;
    }

    // Parent: CDynamicProp
    pub mod CCitadelRankedBadgeProp {
        pub const m_unPackedRank: usize = 0xcd0;
    }

    // Parent: CCitadelModifierAura_Cone
    pub mod CCitadel_Modifier_Fathom_ScaldingSpray_Aura {
        pub const m_playerAngles: usize = 0x108;
        pub const m_bHasAnyTargets: usize = 0x114;
        pub const m_flLastStackTime: usize = 0x118;
        pub const m_ConeParticle: usize = 0x11c;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CModifierGarbageAuraVData {
        pub const m_FinishParticle: usize = 0x7a8;
        pub const m_AlliedParticle: usize = 0x888;
        pub const m_EnemyParticle: usize = 0x968;
        pub const m_strAmbientLoopingLocalPlayerSound: usize = 0xa48;
    }

    // Parent: CPhysConstraint
    pub mod CGenericConstraint {
        pub const m_nLinearMotionX: usize = 0x508;
        pub const m_nLinearMotionY: usize = 0x50c;
        pub const m_nLinearMotionZ: usize = 0x510;
        pub const m_flLinearFrequencyX: usize = 0x514;
        pub const m_flLinearFrequencyY: usize = 0x518;
        pub const m_flLinearFrequencyZ: usize = 0x51c;
        pub const m_flLinearDampingRatioX: usize = 0x520;
        pub const m_flLinearDampingRatioY: usize = 0x524;
        pub const m_flLinearDampingRatioZ: usize = 0x528;
        pub const m_flMaxLinearImpulseX: usize = 0x52c;
        pub const m_flMaxLinearImpulseY: usize = 0x530;
        pub const m_flMaxLinearImpulseZ: usize = 0x534;
        pub const m_flBreakAfterTimeX: usize = 0x538;
        pub const m_flBreakAfterTimeY: usize = 0x53c;
        pub const m_flBreakAfterTimeZ: usize = 0x540;
        pub const m_flBreakAfterTimeStartTimeX: usize = 0x544;
        pub const m_flBreakAfterTimeStartTimeY: usize = 0x548;
        pub const m_flBreakAfterTimeStartTimeZ: usize = 0x54c;
        pub const m_flBreakAfterTimeThresholdX: usize = 0x550;
        pub const m_flBreakAfterTimeThresholdY: usize = 0x554;
        pub const m_flBreakAfterTimeThresholdZ: usize = 0x558;
        pub const m_flNotifyForceX: usize = 0x55c;
        pub const m_flNotifyForceY: usize = 0x560;
        pub const m_flNotifyForceZ: usize = 0x564;
        pub const m_flNotifyForceMinTimeX: usize = 0x568;
        pub const m_flNotifyForceMinTimeY: usize = 0x56c;
        pub const m_flNotifyForceMinTimeZ: usize = 0x570;
        pub const m_flNotifyForceLastTimeX: usize = 0x574;
        pub const m_flNotifyForceLastTimeY: usize = 0x578;
        pub const m_flNotifyForceLastTimeZ: usize = 0x57c;
        pub const m_bAxisNotifiedX: usize = 0x580;
        pub const m_bAxisNotifiedY: usize = 0x581;
        pub const m_bAxisNotifiedZ: usize = 0x582;
        pub const m_nAngularMotionX: usize = 0x584;
        pub const m_nAngularMotionY: usize = 0x588;
        pub const m_nAngularMotionZ: usize = 0x58c;
        pub const m_flAngularFrequencyX: usize = 0x590;
        pub const m_flAngularFrequencyY: usize = 0x594;
        pub const m_flAngularFrequencyZ: usize = 0x598;
        pub const m_flAngularDampingRatioX: usize = 0x59c;
        pub const m_flAngularDampingRatioY: usize = 0x5a0;
        pub const m_flAngularDampingRatioZ: usize = 0x5a4;
        pub const m_flMaxAngularImpulseX: usize = 0x5a8;
        pub const m_flMaxAngularImpulseY: usize = 0x5ac;
        pub const m_flMaxAngularImpulseZ: usize = 0x5b0;
        pub const m_NotifyForceReachedX: usize = 0x5b8;
        pub const m_NotifyForceReachedY: usize = 0x5d0;
        pub const m_NotifyForceReachedZ: usize = 0x5e8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_Clone {
        pub const m_nCopiedHeroID: usize = 0x198;
        pub const m_ModelChange: usize = 0x1a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ProximityRitual {
        pub const m_eState: usize = 0xf70;
        pub const m_hStatue: usize = 0xf74;
        pub const m_tCatRecallTime: usize = 0xf78;
        pub const m_iCatRecallHealth: usize = 0xf7c;
        pub const m_vLaunchPosition: usize = 0xf80;
        pub const m_qLaunchAngle: usize = 0xf8c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_IceDomeFriendlyVData {
        pub const m_PurgeCastParticle: usize = 0x750;
        pub const m_PurgeSound: usize = 0x830;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VoidSphereVData {
        pub const m_BubbleModifier: usize = 0x1818;
        pub const m_strCastEffect: usize = 0x1828;
        pub const m_strAllyPositionPreview: usize = 0x1908;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_HealthSwap {
        pub const m_nFXIndex: usize = 0xf70;
        pub const m_flPostCastHoldEndTime: usize = 0x12f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ColdFrontAOE {
        pub const m_vecDamagedTargets: usize = 0xd0;
    }

    // Parent: CBaseEntity
    pub mod CCitadelHeroLoader {
        pub const m_hero: usize = 0x4a0;
        pub const m_nLoadSeq: usize = 0x4a8;
        pub const m_hOwner: usize = 0x4ac;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleRandom {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_PublicOutput {
        pub const m_OutputIndex: usize = 0x48;
    }

    // Parent: CBeam
    pub mod CEnvLaser {
        pub const m_iszLaserTarget: usize = 0x820;
        pub const m_pSprite: usize = 0x828;
        pub const m_iszSpriteName: usize = 0x830;
        pub const m_firePosition: usize = 0x838;
        pub const m_flStartFrame: usize = 0x844;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_GraveStone {
        pub const m_nParticleIndexAura: usize = 0x120;
        pub const m_nParticleIndex: usize = 0x124;
        pub const m_flStartTime: usize = 0x128;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Cadence_AnthemAOE {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Mystic_Regeneration {
        pub const m_bForceModUpdate: usize = 0xfa4;
        pub const m_iRegenStacks: usize = 0xfa8;
    }

    // Parent: CBaseEntity
    pub mod CSoundOpvarSetEntity {
        pub const m_iszStackName: usize = 0x4b8;
        pub const m_iszOperatorName: usize = 0x4c0;
        pub const m_iszOpvarName: usize = 0x4c8;
        pub const m_nOpvarType: usize = 0x4d0;
        pub const m_nOpvarIndex: usize = 0x4d4;
        pub const m_flOpvarValue: usize = 0x4d8;
        pub const m_OpvarValueString: usize = 0x4e0;
        pub const m_bSetOnSpawn: usize = 0x4e8;
    }

    // Parent: CBaseEntity
    pub mod CEnvBeverage {
        pub const m_CanInDispenser: usize = 0x4a0;
        pub const m_nBeverageType: usize = 0x4a4;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CombatStatusVData {
        pub const m_flBulletHitSlowPct: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPunkgoatUltVData {
        pub const m_DiminishingSlowModifier: usize = 0x1818;
        pub const m_FireRateModifier: usize = 0x1828;
        pub const m_VulnerableModifier: usize = 0x1838;
        pub const m_GroundAuraModifier: usize = 0x1848;
        pub const m_PullToGroundModifier: usize = 0x1858;
        pub const m_BatChargingEffect: usize = 0x1868;
        pub const m_GroundParticle: usize = 0x1948;
        pub const m_strHangSound: usize = 0x1a28;
        pub const m_strDiveSound: usize = 0x1a38;
        pub const m_TimeToReachGroundByHeight: usize = 0x1a48;
        pub const m_GoUpSpeedCurve: usize = 0x1a88;
        pub const m_flGoUpDuration: usize = 0x1ac8;
        pub const m_flGoDownVelocityDampRate: usize = 0x1acc;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bookworm_KnightCharge_Buff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Fathom_ReefdwellerHarpoon {
        pub const m_bHitTarget: usize = 0xf70;
        pub const m_vPrevPos: usize = 0xf74;
        pub const m_bBulletFlying: usize = 0xf80;
        pub const m_bHasLatchedOnce: usize = 0xf81;
        pub const m_bLatched: usize = 0xf82;
        pub const m_vHarpoonTarget: usize = 0xf84;
        pub const m_flLatchedYaw: usize = 0xf90;
        pub const m_flCloseEnoughStartTime: usize = 0xf94;
        pub const m_flStuckStartTime: usize = 0xf98;
        pub const m_flReelStartTime: usize = 0xf9c;
    }

    // Parent: CCitadelYamatoBaseVData
    pub mod CCitadelAbilityFlyingStrikeVData {
        pub const m_flJumpFallSpeedMax: usize = 0x1820;
        pub const m_flJumpAirDrag: usize = 0x1824;
        pub const m_flJumpAirSpeedMax: usize = 0x1828;
        pub const m_flOnCancelVerticalSpeedBonus: usize = 0x182c;
        pub const m_flFlyingCloseEnoughToTarget: usize = 0x1830;
        pub const m_curveSpeedScale: usize = 0x1838;
        pub const m_flAnimToStrikePointTime: usize = 0x1878;
        pub const m_flAnimToStrikeArrivalBias: usize = 0x187c;
        pub const m_flGrappleShotFloatTime: usize = 0x1880;
        pub const m_flGrappleShotDelayToFlyOnHit: usize = 0x1884;
        pub const m_flGrappleSpeed: usize = 0x1888;
        pub const m_SlowModifier: usize = 0x1890;
        pub const m_GrappleTargetModifier: usize = 0x18a0;
        pub const m_BuffModifier: usize = 0x18b0;
        pub const m_LeapParticle: usize = 0x18c0;
        pub const m_ImpactParticle: usize = 0x19a0;
        pub const m_SlashParticle: usize = 0x1a80;
        pub const m_BulletGrappleTracerParticle: usize = 0x1b60;
        pub const m_EnemyGrappleParticle: usize = 0x1c40;
        pub const m_strDamageTarget: usize = 0x1d20;
        pub const m_strStartFlyingToTarget: usize = 0x1d30;
        pub const m_strStartAttack: usize = 0x1d40;
        pub const m_strGrappleHitTarget: usize = 0x1d50;
        pub const m_strGrappleHitWorld: usize = 0x1d60;
        pub const m_strGrappleHitNothing: usize = 0x1d70;
        pub const m_strGrappleLoop: usize = 0x1d80;
        pub const m_strFlyingLoop: usize = 0x1d90;
        pub const m_cameraSequenceFlying: usize = 0x1da0;
        pub const m_cameraSequenceAttacking: usize = 0x1e28;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_NanoDash_VData {
        pub const m_DashImpactEffect: usize = 0x1818;
        pub const m_DashSwingEffect: usize = 0x18f8;
        pub const m_DashLineEffect: usize = 0x19d8;
        pub const m_SlashSwingEffect: usize = 0x1ab8;
        pub const m_strDashStart: usize = 0x1b98;
        pub const m_strSlashStart: usize = 0x1ba8;
        pub const m_strSlashImpactSound: usize = 0x1bb8;
        pub const m_BountyModifier: usize = 0x1bc8;
        pub const m_cameraSequenceSlash: usize = 0x1bd8;
        pub const m_flGroundBreakOffAngle: usize = 0x1c60;
        pub const m_SpeedCurve: usize = 0x1c68;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChargedTacklePrepare {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_CosmeticItem_VotingPoster_VData {
        pub const m_vecVotingPosters: usize = 0x18b8;
        pub const m_nDecalLimit: usize = 0x18d0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DamageOnHitGround {
        pub const m_flDamage: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Idol_Return {
    }

    // Parent: CLogicalEntity
    pub mod CPhysMotor {
        pub const m_nameAttach: usize = 0x4a0;
        pub const m_nameAnchor: usize = 0x4a8;
        pub const m_hAttachedObject: usize = 0x4b0;
        pub const m_hAnchorObject: usize = 0x4b4;
        pub const m_spinUp: usize = 0x4b8;
        pub const m_spinDown: usize = 0x4bc;
        pub const m_flMotorFriction: usize = 0x4c0;
        pub const m_additionalAcceleration: usize = 0x4c4;
        pub const m_angularAcceleration: usize = 0x4c8;
        pub const m_flTorqueScale: usize = 0x4cc;
        pub const m_flTargetSpeed: usize = 0x4d0;
        pub const m_flSpeedWhenSpinUpOrSpinDownStarted: usize = 0x4d4;
        pub const m_pFixedWorldBody: usize = 0x4d8;
        pub const m_pMotorJoint: usize = 0x4e0;
        pub const m_motor: usize = 0x4e8;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelZiplineCaptureTrigger {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_DamageRecycler {
    }

    // Parent: CLogicalEntity
    pub mod CLogicGameEvent {
        pub const m_iszEventName: usize = 0x4a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelAbilityDruidAbility04 {
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Punkgoat_PrimaryWeaponVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Magician_AnimalHex_HexAreaVData {
        pub const m_HexModifier: usize = 0x750;
        pub const m_AreaWarningEffect: usize = 0x760;
        pub const m_ExplodeEffect: usize = 0x840;
        pub const m_strArmingSound: usize = 0x920;
        pub const m_strArmedSound: usize = 0x930;
        pub const m_strLoopingSound: usize = 0x940;
        pub const m_strHitSound: usize = 0x950;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_TangoTether_TetherVData {
        pub const m_HealSound: usize = 0x750;
        pub const m_GrappleHitSound: usize = 0x760;
        pub const m_BuffModifier: usize = 0x770;
        pub const m_DisconnectingModifier: usize = 0x780;
        pub const m_DisconnectedModifier: usize = 0x790;
        pub const m_LockedTargetModifier: usize = 0x7a0;
        pub const m_NoConnectionModifier: usize = 0x7b0;
        pub const m_flMinConnectTime: usize = 0x7c0;
        pub const m_flDisconnectDistanceBuffer: usize = 0x7c4;
        pub const m_flCandidateCloserDistance: usize = 0x7c8;
        pub const m_flTargetAwayDistance: usize = 0x7cc;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityLashVData {
        pub const m_LashParticle: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x18f8;
        pub const m_AirControlModifier: usize = 0x1908;
        pub const m_strVictimCastSound: usize = 0x1918;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bull_LeapVData {
        pub const m_CrashSpeedScaleCurve: usize = 0x1818;
        pub const m_ActiveModifier: usize = 0x1858;
        pub const m_BoostModifier: usize = 0x1868;
        pub const m_CrashModifier: usize = 0x1878;
        pub const m_ImmunityModifier: usize = 0x1888;
        pub const m_LandingBonusesModifier: usize = 0x1898;
        pub const m_DragModifier: usize = 0x18a8;
        pub const m_TakeOffParticle: usize = 0x18b8;
        pub const m_ImpactParticle: usize = 0x1998;
        pub const m_AoEPreviewParticle: usize = 0x1a78;
        pub const m_HoverParticle: usize = 0x1b58;
        pub const m_DivingPreviewParticle: usize = 0x1c38;
        pub const m_strCrashingSound: usize = 0x1d18;
        pub const m_strImpactSound: usize = 0x1d28;
        pub const m_flStartupTime: usize = 0x1d38;
        pub const m_flForwardBoostSpeed: usize = 0x1d3c;
        pub const m_flUpBoostSpeed: usize = 0x1d40;
        pub const m_flBoostTurnRate: usize = 0x1d44;
        pub const m_flHoverTime: usize = 0x1d48;
        pub const m_flMinAimAngle: usize = 0x1d4c;
        pub const m_flBoostGain: usize = 0x1d50;
        pub const m_flBoostTime: usize = 0x1d54;
        pub const m_flLandingTime: usize = 0x1d58;
        pub const m_flCrashSpeed: usize = 0x1d5c;
        pub const m_flCrashBraceAnimTime: usize = 0x1d60;
        pub const m_flCollideRadius: usize = 0x1d64;
        pub const m_flHoverInputSpeedMax: usize = 0x1d68;
        pub const m_flHoverInputAcceleration: usize = 0x1d6c;
        pub const m_flHoverSpeedDecay: usize = 0x1d70;
        pub const m_flCrashDownInputBuffer: usize = 0x1d74;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RescueBeamVData {
        pub const m_BeamParticle: usize = 0x750;
        pub const m_ImpactParticle: usize = 0x830;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_Trooper {
        pub const m_iLane: usize = 0x17c8;
        pub const m_iLaneSlot: usize = 0x17cc;
        pub const m_hSpawnWaveController: usize = 0x1800;
        pub const m_hTrooperSpawnPoint: usize = 0x1804;
        pub const m_hNearDeathModifier: usize = 0x1828;
        pub const m_hTargetedEnemy: usize = 0x1848;
        pub const m_flHealingChargeParticlePct: usize = 0x184c;
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_Item {
        pub const m_unItemID: usize = 0xb10;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_DeployablePreview {
    }

    // Parent: CPointEntity
    pub mod CInfoTrooperNeutralCamp {
        pub const m_CCitadelMinimapComponent: usize = 0x4a0;
        pub const m_iszCampName: usize = 0x4d8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_AOERoot {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Hideout_TeleportVData {
    }

    // Parent: CPointEntity
    pub mod CPhysExplosion {
        pub const m_bExplodeOnSpawn: usize = 0x4a0;
        pub const m_flMagnitude: usize = 0x4a4;
        pub const m_flDamage: usize = 0x4a8;
        pub const m_radius: usize = 0x4ac;
        pub const m_targetEntityName: usize = 0x4b0;
        pub const m_flInnerRadius: usize = 0x4b8;
        pub const m_flPushScale: usize = 0x4bc;
        pub const m_bConvertToDebrisWhenPossible: usize = 0x4c0;
        pub const m_bAffectInvulnerableEnts: usize = 0x4c1;
        pub const m_OnPushedPlayer: usize = 0x4c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Shiv_KillingBlow_Leap {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_CatForm {
        pub const m_ModelChange: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_DetentionAmmoVData {
        pub const m_BuildUpModifier: usize = 0x780;
        pub const m_DebuffModifier: usize = 0x790;
        pub const m_ImmunityModifier: usize = 0x7a0;
        pub const m_TracerParticle: usize = 0x7b0;
    }

    // Parent: CitadelItemVData
    pub mod CItem_Infuser_VData {
        pub const m_BuffModifier: usize = 0x18b8;
        pub const m_CastParticle: usize = 0x18c8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Dust_Storm_Aura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_WeaponUpgrade_BloodTribute {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_ShadowStep {
        pub const m_nCastDelayParticleIndex: usize = 0x10f8;
        pub const m_flLastTickTime: usize = 0x10fc;
    }

    // Parent: CPhysConstraint
    pub mod CSplineConstraint {
        pub const m_vAnchorOffsetRestore: usize = 0x550;
        pub const m_hSplineEntity: usize = 0x55c;
        pub const m_pSplineBody: usize = 0x560;
        pub const m_bEnableLateralConstraint: usize = 0x568;
        pub const m_bEnableVerticalConstraint: usize = 0x569;
        pub const m_bEnableAngularConstraint: usize = 0x56a;
        pub const m_bEnableLimit: usize = 0x56b;
        pub const m_bFireEventsOnPath: usize = 0x56c;
        pub const m_flLinearFrequency: usize = 0x570;
        pub const m_flLinarDampingRatio: usize = 0x574;
        pub const m_flJointFriction: usize = 0x578;
        pub const m_flTransitionTime: usize = 0x57c;
        pub const m_vPreSolveAnchorPos: usize = 0x590;
        pub const m_StartTransitionTime: usize = 0x59c;
        pub const m_vTangentSpaceAnchorAtTransitionStart: usize = 0x5a0;
    }

    // Parent: CLogicalEntity
    pub mod CLogicCompare {
        pub const m_flInValue: usize = 0x4a0;
        pub const m_flCompareValue: usize = 0x4a4;
        pub const m_OnLessThan: usize = 0x4a8;
        pub const m_OnEqualTo: usize = 0x4c8;
        pub const m_OnNotEqualTo: usize = 0x4e8;
        pub const m_OnGreaterThan: usize = 0x508;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ShivDash {
        pub const m_bUseTrail: usize = 0x150;
        pub const m_bUseEchoEffect: usize = 0x151;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Nano_Pounce_InstantVData {
        pub const m_LeapModifier: usize = 0x1818;
        pub const m_ActiveBuff: usize = 0x1828;
        pub const m_SlowModifier: usize = 0x1838;
        pub const m_AttackParticle: usize = 0x1848;
        pub const m_FlashParticle: usize = 0x1928;
        pub const m_CastParticle: usize = 0x1a08;
        pub const m_ExplodeSlowParticle: usize = 0x1ae8;
        pub const m_PrimaryHitParticle: usize = 0x1bc8;
        pub const m_AttackSound: usize = 0x1ca8;
        pub const m_strExplodeSound: usize = 0x1cb8;
        pub const m_flAttackTimePhase01: usize = 0x1cc8;
        pub const m_flAttackTimePhase02: usize = 0x1ccc;
        pub const m_flAllyMinTargetRange: usize = 0x1cd0;
        pub const m_flTargetVerticalOffset: usize = 0x1cd4;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHatTrickVData {
        pub const m_SpectatingProjectileParticle: usize = 0x1818;
        pub const m_ExplosionParticle: usize = 0x18f8;
        pub const m_HatTrickChannelParticle: usize = 0x19d8;
        pub const m_DebuffModifier: usize = 0x1ab8;
        pub const m_strExplodeSound: usize = 0x1ac8;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_BulletShredImbue_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Out_Of_Combat_Health_Regen {
        pub const m_LastDamageTaken: usize = 0x1d0;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_TechCleaveVData {
        pub const m_TechCleaveModifier: usize = 0x18b8;
        pub const m_sCleaveProcSound: usize = 0x18c8;
    }

    // Parent: CBaseEntity
    pub mod C_HeroPreview {
        pub const m_CCitadelHeroComponent: usize = 0x4a0;
    }

    // Parent: None
    pub mod CPulse_BlackboardReference {
        pub const m_hBlackboardResource: usize = 0x0;
        pub const m_BlackboardResource: usize = 0x8;
        pub const m_nNodeID: usize = 0x18;
        pub const m_NodeName: usize = 0x20;
    }

    // Parent: CFuncTrackTrain
    pub mod CFuncTankTrain {
        pub const m_OnDeath: usize = 0x8a8;
    }

    // Parent: CCitadel_Item_ProjectileTest
    pub mod CCitadel_Item_ProjectileTest05 {
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CCitadel_Item_Disarm {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_AmmoScavenger {
        pub const m_hLastOrbTarget: usize = 0xf78;
    }

    // Parent: CBaseClientUIEntity
    pub mod CPointClientUIWorldPanel {
        pub const m_bIgnoreInput: usize = 0x8e0;
        pub const m_bLit: usize = 0x8e1;
        pub const m_bFollowPlayerAcrossTeleport: usize = 0x8e2;
        pub const m_flWidth: usize = 0x8e4;
        pub const m_flHeight: usize = 0x8e8;
        pub const m_flDPI: usize = 0x8ec;
        pub const m_flInteractDistance: usize = 0x8f0;
        pub const m_flDepthOffset: usize = 0x8f4;
        pub const m_unOwnerContext: usize = 0x8f8;
        pub const m_unHorizontalAlign: usize = 0x8fc;
        pub const m_unVerticalAlign: usize = 0x900;
        pub const m_unOrientation: usize = 0x904;
        pub const m_bAllowInteractionFromAllSceneWorlds: usize = 0x908;
        pub const m_vecCSSClasses: usize = 0x910;
        pub const m_bOpaque: usize = 0x928;
        pub const m_bNoDepth: usize = 0x929;
        pub const m_bVisibleWhenParentNoDraw: usize = 0x92a;
        pub const m_bRenderBackface: usize = 0x92b;
        pub const m_bUseOffScreenIndicator: usize = 0x92c;
        pub const m_bExcludeFromSaveGames: usize = 0x92d;
        pub const m_bGrabbable: usize = 0x92e;
        pub const m_bOnlyRenderToTexture: usize = 0x92f;
        pub const m_bDisableMipGen: usize = 0x930;
        pub const m_nExplicitImageLayout: usize = 0x934;
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventSphereEntity {
        pub const m_flRadius: usize = 0x560;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Trapper_Fear {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_AnimalHexAreaVData {
        pub const m_HexAreaModifier: usize = 0x1818;
        pub const m_TargetWarningSound: usize = 0x1828;
        pub const m_ProjectileHitConfirm: usize = 0x1838;
        pub const m_AreaWarningEffect: usize = 0x1848;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Gunslinger_SpreadingFire {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_EmpowerBulletVData {
        pub const m_DebuffModifier: usize = 0x880;
        pub const m_ExplosionParticle: usize = 0x890;
        pub const m_ExplosionVictimParticle: usize = 0x970;
        pub const m_EmpowerWeaponParticle: usize = 0xa50;
        pub const m_ShotVictimSound: usize = 0xb30;
        pub const m_ShotConfirmationSound: usize = 0xb40;
    }

    // Parent: CCitadelBaseShivAbility
    pub mod CCitadel_Ability_Shiv_KillingBlow {
        pub const m_vHitEnts: usize = 0xf70;
        pub const m_bDamagedAnyHero: usize = 0x1410;
        pub const m_bActive: usize = 0x1411;
        pub const m_bStartedOnGround: usize = 0x1412;
        pub const m_bIsBonusCast: usize = 0x1413;
        pub const m_vStartPosition: usize = 0x1414;
        pub const m_qCurrentAngles: usize = 0x1420;
        pub const m_flDepartureTime: usize = 0x1430;
        pub const m_flArrivalTime: usize = 0x1448;
        pub const m_vLastKnownSafePos: usize = 0x1460;
        pub const m_bMadeSlashParticle: usize = 0x146c;
        pub const m_ChannelParticle: usize = 0x1470;
        pub const m_flDrainSuppressEndTime: usize = 0x1474;
        pub const m_flRecastWindowEnd: usize = 0x1478;
        pub const m_BuffModifier: usize = 0x1800;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityShivDeferDamageVData {
        pub const m_ActiveCastParticle: usize = 0x1818;
        pub const m_flDeferredDamageApplicationInterval: usize = 0x18f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Burrow_VData {
        pub const m_BurrowPlayerParticle: usize = 0x750;
        pub const m_flDesatAmount: usize = 0x830;
        pub const m_DesatTint: usize = 0x834;
        pub const m_SatTint: usize = 0x838;
        pub const m_Outline: usize = 0x83c;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Nano_PrimaryWeapon {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PerchedPredatorDrag {
        pub const m_qRelativeOffset: usize = 0x1d0;
        pub const m_flRelativeDist: usize = 0x1dc;
        pub const m_vecOffsetDir: usize = 0x1e0;
        pub const m_hFollowEnt: usize = 0x1ec;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityWreckingBallVData {
        pub const m_SummonParticle: usize = 0x1818;
        pub const m_SummonReadyParticle: usize = 0x18f8;
        pub const m_SummonParticleAttachment: usize = 0x19d8;
        pub const m_ExplodeParticle: usize = 0x19e0;
        pub const m_AutoThrowModifier: usize = 0x1ac0;
        pub const m_HoldingBallLoop: usize = 0x1ad0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Gravity_Lasso_VData {
        pub const m_GravityLassoSelf: usize = 0x1818;
        pub const m_GravityLassoTarget: usize = 0x1828;
        pub const m_TargetWarningSound: usize = 0x1838;
        pub const m_PreCastParticle: usize = 0x1848;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PowerSurge {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Upgrade_KineticSash_VData {
        pub const m_KineticSashTriggeredModifier: usize = 0x750;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CCitadelBotTestNode {
        pub const m_eNodeType: usize = 0x4a0;
        pub const m_sNextNode: usize = 0x4a8;
        pub const m_sShootTarget: usize = 0x4b0;
        pub const m_hNextNode: usize = 0x4b8;
        pub const m_hShootTarget: usize = 0x4bc;
        pub const m_hLockingEntity: usize = 0x4c0;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelClimbRopeTrigger {
        pub const m_bAlignCameraOnAutoDismount: usize = 0x8e0;
        pub const m_tModifier: usize = 0x8e4;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerPingLocation {
        pub const m_ePingLocation: usize = 0x8e0;
    }

    // Parent: CCitadel_Modifier_ItemPickupAura
    pub mod CCitadel_Modifier_HeldItemPickupAura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DPSTracker {
        pub const m_flInterval: usize = 0xe8;
        pub const m_flProgress: usize = 0xec;
        pub const m_flDistToTarget: usize = 0xf0;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadelConfigurableTrackedProjectile {
        pub const m_eTrackedTargetType: usize = 0x860;
        pub const m_hTarget: usize = 0x864;
        pub const m_flTrackingStartTime: usize = 0x868;
        pub const m_vLastValidPosition: usize = 0x86c;
        pub const m_flTrackingDuration: usize = 0x878;
        pub const m_TrackingParams: usize = 0x880;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Graf_Ability02 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Operative_Revelation {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierSpiderShieldBuffVData {
        pub const m_BuffParticle: usize = 0x750;
        pub const m_RadiusParticle: usize = 0x830;
        pub const m_PulseParticle: usize = 0x910;
        pub const m_PulseDebuffModifier: usize = 0x9f0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_Crescendo_InAOE_VData {
        pub const m_PostAOEModifier: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Gunslinger_DemonCarbine {
        pub const m_bWantsSlow: usize = 0xf70;
        pub const m_flLatchedTimeScaleFracChangeTime: usize = 0xf74;
        pub const m_flLatchedTimeScaleFrac: usize = 0xf78;
        pub const m_flSpeedBoostEndTime: usize = 0xf7c;
        pub const m_flShotTimeScaleEndTime: usize = 0xf80;
        pub const m_flStoredPowerPct: usize = 0xf88;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Silenced {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_Item_Bleeding_Bullets_Active {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_EtherealBulletsBuffVData {
        pub const m_RapidFireParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HalloweenMask {
        pub const m_nMaskToUse: usize = 0xd0;
        pub const m_nMaskFX: usize = 0xd4;
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityProperty_KineticCarbine {
    }

    // Parent: CCitadelPlayerPawnBase
    pub mod CCitadelObserverPawn {
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_ItemPickupAuraVData {
        pub const m_IsFrozenParticle: usize = 0x7a8;
    }

    // Parent: CRuleEntity
    pub mod CRuleBrushEntity {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Airheart_SpotlightVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_GraveStone {
        pub const m_vecDeployedGravestones: usize = 0xf70;
        pub const m_vCastPosition: usize = 0xf88;
        pub const m_qCastAngle: usize = 0xf94;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_ShadowCloneVData {
        pub const m_CloneModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_CritShotVData {
        pub const m_strHitProcSound: usize = 0x880;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VisibleDuration {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_StreetBrawl_Phase_VData {
        pub const m_eValidStates: usize = 0x750;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CNodeEnt {
        pub const m_bDontDropNode: usize = 0x4a0;
        pub const m_HullForceFlags: usize = 0x4a1;
        pub const m_NodeData: usize = 0x4b0;
    }

    // Parent: None
    pub mod CAnimGraphNetworkedVariables {
        pub const m_PredNetBoolVariables: usize = 0x8;
        pub const m_PredNetByteVariables: usize = 0x20;
        pub const m_PredNetUInt16Variables: usize = 0x38;
        pub const m_PredNetIntVariables: usize = 0x50;
        pub const m_PredNetUInt32Variables: usize = 0x68;
        pub const m_PredNetUInt64Variables: usize = 0x80;
        pub const m_PredNetFloatVariables: usize = 0x98;
        pub const m_PredNetVectorVariables: usize = 0xb0;
        pub const m_PredNetQuaternionVariables: usize = 0xc8;
        pub const m_PredNetGlobalSymbolVariables: usize = 0xe0;
        pub const m_OwnerOnlyPredNetBoolVariables: usize = 0xf8;
        pub const m_OwnerOnlyPredNetByteVariables: usize = 0x110;
        pub const m_OwnerOnlyPredNetUInt16Variables: usize = 0x128;
        pub const m_OwnerOnlyPredNetIntVariables: usize = 0x140;
        pub const m_OwnerOnlyPredNetUInt32Variables: usize = 0x158;
        pub const m_OwnerOnlyPredNetUInt64Variables: usize = 0x170;
        pub const m_OwnerOnlyPredNetFloatVariables: usize = 0x188;
        pub const m_OwnerOnlyPredNetVectorVariables: usize = 0x1a0;
        pub const m_OwnerOnlyPredNetQuaternionVariables: usize = 0x1b8;
        pub const m_OwnerOnlyPredNetGlobalSymbolVariables: usize = 0x1d0;
        pub const m_nBoolVariablesCount: usize = 0x1e8;
        pub const m_nOwnerOnlyBoolVariablesCount: usize = 0x1ec;
        pub const m_nRandomSeedOffset: usize = 0x1f0;
        pub const m_flLastTeleportTime: usize = 0x1f4;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Bebop_Hook {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_MetalSkin {
    }

    // Parent: CBaseEntity
    pub mod CFuncPropRespawnZone {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Mirage_FireScarabs_HealthLoss {
        pub const m_bCanProc: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Thumper_3 {
        pub const m_nFXIndex: usize = 0xd0;
        pub const m_flVisibilityTime: usize = 0xd4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Gravity_Lasso {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_DeathTax {
    }

    // Parent: CCitadel_Modifier_Burning
    pub mod CCitadel_Modifier_Afterburn_DOT {
        pub const m_bCheckForExplosion: usize = 0xd0;
        pub const m_flLastBurnTime: usize = 0xd4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FlameDashBurn {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CModifier_Upgrade_ArcaneMedallion_VData {
        pub const m_TriggeredModifier: usize = 0x780;
    }

    // Parent: CBaseFilter
    pub mod CFilterModel {
        pub const m_iFilterModel: usize = 0x4d8;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Werewolf_RifleVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierDoormanHotelVictimVData {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RapidFire_AirJuggle {
    }

    // Parent: CCitadel_Modifier_Invis
    pub mod CCitadel_Modifier_Shadow_Strike_Invis {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_SpiritBurnEnemyTracker {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_UIAbilityHudNotificaiton {
    }

    // Parent: None
    pub mod LockonTarget_t {
        pub const m_flGainRate: usize = 0x30;
        pub const m_flDrainRate: usize = 0x34;
        pub const m_flMaxValue: usize = 0x38;
        pub const m_nPrevFullStacks: usize = 0x3c;
        pub const m_flLatchedValue: usize = 0x40;
        pub const m_flLatchedTime: usize = 0x44;
        pub const m_eLockonState: usize = 0x48;
        pub const m_hTarget: usize = 0x4c;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadelBulletRedirectVolumeVData {
        pub const m_RedirectParticle: usize = 0x28;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Bubble {
        pub const m_flEndTime: usize = 0xf78;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CItem_GreaterWitheringWhip {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InMenu {
    }

    // Parent: CCitadel_Modifier_PowerUp
    pub mod CCitadel_Modifier_PermanentPickup {
    }

    // Parent: CPointEntity
    pub mod CNavSpaceInfo {
    }

    // Parent: CPhysConstraint
    pub mod CPhysSlideConstraint {
        pub const m_axisEnd: usize = 0x508;
        pub const m_slideFriction: usize = 0x514;
        pub const m_systemLoadScale: usize = 0x518;
        pub const m_initialOffset: usize = 0x51c;
        pub const m_bEnableLinearConstraint: usize = 0x520;
        pub const m_bEnableAngularConstraint: usize = 0x521;
        pub const m_flMotorFrequency: usize = 0x524;
        pub const m_flMotorDampingRatio: usize = 0x528;
        pub const m_bUseEntityPivot: usize = 0x52c;
        pub const m_soundInfo: usize = 0x530;
    }

    // Parent: CBaseEntity
    pub mod CPulseGameBlackboard {
        pub const m_strGraphName: usize = 0x4a8;
        pub const m_strStateBlob: usize = 0x4b0;
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventEntityAlias_snd_event_point {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Boho_DamageShare_VData {
        pub const m_TetherParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_StackingDefenseVData {
        pub const m_StackingModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Drifter_HungerVData {
        pub const m_TargetModifier: usize = 0x1818;
        pub const m_BuffModifier: usize = 0x1828;
        pub const m_InvisModifier: usize = 0x1838;
        pub const m_HungerTargetKillParticle: usize = 0x1848;
        pub const m_strStackGainedSound: usize = 0x1928;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Drifter_Darkness {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_VampireBat_DoubleDaggerVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_BonusImpactParticle: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x19d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Warden_HighAlert {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Opera_Ability03 {
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_CloakOfOpportunityWatcherVData {
        pub const m_BuffModifier: usize = 0x750;
        pub const m_StatusImmuneModifier: usize = 0x760;
    }

    // Parent: None
    pub mod CCitadelAbilityBeam_t {
        pub const m_nActivateTime: usize = 0x8;
        pub const m_angBeamAngles: usize = 0xc;
        pub const m_vBeamAimPos: usize = 0x18;
        pub const m_hShooter: usize = 0x24;
        pub const m_hPlayerShooter: usize = 0x28;
        pub const m_bEnforceLOSToShootPosition: usize = 0xfb8;
    }

    // Parent: None
    pub mod CChoreoComponent {
        pub const __m_pChainEntity: usize = 0x8;
        pub const m_hOwner: usize = 0x30;
        pub const m_nNextSceneEventId: usize = 0x68;
        pub const m_bUpdateLayerPriorities: usize = 0x6c;
        pub const m_vecChoreoModifiers: usize = 0x70;
        pub const m_flAllowResponsesEndTime: usize = 0x88;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_RandomInt {
    }

    // Parent: CCitadelModelEntity
    pub mod CCitadel_Shield {
        pub const m_bAllowRotatingUp: usize = 0x8e0;
        pub const m_bFixedPosition: usize = 0x8e1;
        pub const m_flShieldOffset: usize = 0x8e4;
    }

    // Parent: CLogicalEntity
    pub mod CPhysicsNPCSolver {
        pub const m_pNext: usize = 0x4a8;
        pub const m_hNPC: usize = 0x4b0;
        pub const m_hEntity: usize = 0x4b4;
        pub const m_pController: usize = 0x4b8;
        pub const m_separationDuration: usize = 0x4c0;
        pub const m_cancelTime: usize = 0x4c4;
        pub const m_allowIntersection: usize = 0x4c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierDruidInvisVData {
        pub const m_flHideDuration: usize = 0x750;
        pub const m_flRevealDuration: usize = 0x754;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_MagicBeam {
        pub const m_hBlocker: usize = 0xd0;
        pub const m_nParticleIndex: usize = 0xd4;
        pub const m_flStartTime: usize = 0xd8;
        pub const m_qAngle: usize = 0x2e0;
        pub const m_vOrigin: usize = 0x2ec;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Boho_ChannelTetherVData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_ImmobilizeModifier: usize = 0x1838;
        pub const m_StartAoEParticle: usize = 0x1848;
        pub const m_ExitAoEParticle: usize = 0x1928;
        pub const m_EffectParticle: usize = 0x1a08;
        pub const m_HitParticle: usize = 0x1ae8;
        pub const m_RadiusParticle: usize = 0x1bc8;
        pub const m_strExpireSound: usize = 0x1ca8;
        pub const m_strHitConfirmSound: usize = 0x1cb8;
        pub const m_cameraSequenceInShadow: usize = 0x1cc8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Synth_Affliction_VData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_AoEParticle: usize = 0x1828;
        pub const m_CastParticle: usize = 0x1908;
        pub const m_strHitSound: usize = 0x19e8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HealthSwapPrecast {
        pub const m_hTarget: usize = 0xd0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityBloodShardsVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_ImpactParticle: usize = 0x1828;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_RevealTarget {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Basic_HealthRegenVData {
        pub const m_HealingLoopSoundOverride: usize = 0x750;
    }

    // Parent: CAI_CitadelNPC
    pub mod CCitadel_PestilenceDroneDispenser {
        pub const m_hAbility: usize = 0x17c0;
    }

    // Parent: CBaseModelEntity
    pub mod CTextureBasedAnimatable {
        pub const m_bLoop: usize = 0x780;
        pub const m_flFPS: usize = 0x784;
        pub const m_hPositionKeys: usize = 0x788;
        pub const m_hRotationKeys: usize = 0x790;
        pub const m_vAnimationBoundsMin: usize = 0x798;
        pub const m_vAnimationBoundsMax: usize = 0x7a4;
        pub const m_flStartTime: usize = 0x7b0;
        pub const m_flStartFrame: usize = 0x7b4;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_SpiritBubble {
    }

    // Parent: CBaseModelEntity
    pub mod CSprite {
        pub const m_hSpriteMaterial: usize = 0x780;
        pub const m_hAttachedToEntity: usize = 0x788;
        pub const m_nAttachment: usize = 0x78c;
        pub const m_flSpriteFramerate: usize = 0x790;
        pub const m_flFrame: usize = 0x794;
        pub const m_flDieTime: usize = 0x798;
        pub const m_nBrightness: usize = 0x7a8;
        pub const m_flBrightnessDuration: usize = 0x7ac;
        pub const m_flSpriteScale: usize = 0x7b0;
        pub const m_flScaleDuration: usize = 0x7b4;
        pub const m_bWorldSpaceScale: usize = 0x7b8;
        pub const m_flGlowProxySize: usize = 0x7bc;
        pub const m_flHDRColorScale: usize = 0x7c0;
        pub const m_flLastTime: usize = 0x7c4;
        pub const m_flMaxFrame: usize = 0x7c8;
        pub const m_flStartScale: usize = 0x7cc;
        pub const m_flDestScale: usize = 0x7d0;
        pub const m_flScaleTimeStart: usize = 0x7d4;
        pub const m_nStartBrightness: usize = 0x7d8;
        pub const m_nDestBrightness: usize = 0x7dc;
        pub const m_flBrightnessTimeStart: usize = 0x7e0;
        pub const m_nSpriteWidth: usize = 0x7e4;
        pub const m_nSpriteHeight: usize = 0x7e8;
    }

    // Parent: CPathKeyFrame
    pub mod CBaseMoveBehavior {
        pub const m_iPositionInterpolator: usize = 0x500;
        pub const m_iRotationInterpolator: usize = 0x504;
        pub const m_flAnimStartTime: usize = 0x508;
        pub const m_flAnimEndTime: usize = 0x50c;
        pub const m_flAverageSpeedAcrossFrame: usize = 0x510;
        pub const m_pCurrentKeyFrame: usize = 0x518;
        pub const m_pTargetKeyFrame: usize = 0x520;
        pub const m_pPreKeyFrame: usize = 0x528;
        pub const m_pPostKeyFrame: usize = 0x530;
        pub const m_flTimeIntoFrame: usize = 0x538;
        pub const m_iDirection: usize = 0x53c;
    }

    // Parent: CBaseModelEntity
    pub mod CDynamicLight {
        pub const m_ActualFlags: usize = 0x780;
        pub const m_Flags: usize = 0x781;
        pub const m_LightStyle: usize = 0x782;
        pub const m_On: usize = 0x783;
        pub const m_Radius: usize = 0x784;
        pub const m_Exponent: usize = 0x788;
        pub const m_InnerAngle: usize = 0x78c;
        pub const m_OuterAngle: usize = 0x790;
        pub const m_SpotRadius: usize = 0x794;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PunkGoat_Tether {
        pub const m_tTetherEndTime: usize = 0xf88;
        pub const m_bTetheringActive: usize = 0xfa0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Priest_Flashbang {
        pub const m_tInitialShotID: usize = 0xf70;
        pub const m_vLaunchPosition: usize = 0xf74;
        pub const m_qLaunchAngle: usize = 0xf80;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Drifter_ShadowMark {
        pub const m_vLastValidTeleportPosition: usize = 0xf70;
        pub const m_hTeleportTarget: usize = 0xf7c;
        pub const m_bTeleported: usize = 0xf80;
        pub const m_qPostTeleportAngles: usize = 0xf84;
        pub const m_flExpireTime: usize = 0xf94;
        pub const m_flTeleportedTime: usize = 0xf98;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_RiotProtocol {
        pub const m_ChargeUpParticle: usize = 0xf70;
        pub const m_bActive: usize = 0xf74;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Wrecker_BoulderGrenade {
        pub const m_hHitTroopers: usize = 0xf70;
        pub const m_nBallParticle: usize = 0xf8c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bebop_StickyBomb2 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FissureWall {
        pub const m_vecFissureWallEntities: usize = 0x6d0;
        pub const m_vecFisureEntitiesHit: usize = 0x6e8;
        pub const m_nSegment: usize = 0x700;
        pub const m_vPosition: usize = 0x704;
        pub const m_vDirection: usize = 0x710;
        pub const m_vLeft: usize = 0x71c;
        pub const m_Length: usize = 0x728;
        pub const m_vBiasDirLeft: usize = 0x72c;
        pub const m_vBiasPosLeft: usize = 0x738;
        pub const m_vBiasDirRight: usize = 0x744;
        pub const m_vBiasPosRight: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CheaterCurse {
    }

    // Parent: CBaseEntity
    pub mod CLogicAutoCitadel {
        pub const m_OnWaitingForPlayersToJoin: usize = 0x4a0;
        pub const m_OnPreGameWait: usize = 0x4b8;
        pub const m_OnGameInProgress: usize = 0x4d0;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_AbilityLifeSteal {
    }

    // Parent: CFuncBrush
    pub mod CCitadelZapTrigger {
        pub const m_flShootAfterEnteringTime: usize = 0x7a0;
        pub const m_flWaitForNextShootTime: usize = 0x7a4;
        pub const m_flPercentMaxHealthDamage: usize = 0x7a8;
        pub const m_strShootOrigin: usize = 0x7b0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_KillSummonVData {
        pub const m_KillTrailParticle: usize = 0x1818;
    }

    // Parent: CCitadelAbilityDruidBasePlant
    pub mod CCitadelAbilityDruidPlantHealingTree {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_PrimaryWeapon_Cadence {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityRocketLauncherVData {
        pub const m_ExplosionParticle: usize = 0x1818;
    }

    // Parent: CitadelItemVData
    pub mod CItem_ResonantHealing_VData {
        pub const m_StackNotificationModifier: usize = 0x18b8;
        pub const m_OnCastModifier: usize = 0x18c8;
        pub const m_RegenParticle: usize = 0x18d8;
        pub const m_ProcParticle: usize = 0x19b8;
        pub const m_HealingLoopSoundOverride: usize = 0x1a98;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tier3Boss_AoEWaveVData {
        pub const m_AmberInitialExplodeParticle: usize = 0x1818;
        pub const m_AmberShrineChargeParticle: usize = 0x18f8;
        pub const m_SapphInitialExplodeParticle: usize = 0x19d8;
        pub const m_SapphShrineChargeParticle: usize = 0x1ab8;
        pub const m_AOEAmberImpactSound: usize = 0x1b98;
        pub const m_AOESapphImpactSound: usize = 0x1ba8;
        pub const m_AOEAmberAnnounceSound: usize = 0x1bb8;
        pub const m_AOESapphAnnounceSound: usize = 0x1bc8;
        pub const m_AoEModifier: usize = 0x1bd8;
        pub const m_PreviewModifier: usize = 0x1be8;
        pub const m_flCastCompleteToAttackTime: usize = 0x1bf8;
        pub const m_flShakeRadius: usize = 0x1bfc;
        pub const m_flShakeAmplitue: usize = 0x1c00;
        pub const m_flShakeFreqency: usize = 0x1c04;
        pub const m_flShakeDuration: usize = 0x1c08;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RampSlowModifierVData {
        pub const m_flRampUpTime: usize = 0x750;
        pub const m_flPercentageMultiplierStart: usize = 0x754;
        pub const m_flPercentageMultiplierEnd: usize = 0x758;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Base_BuildupVData {
        pub const m_bUseBaseWeaponCycleTimeForDelay: usize = 0x750;
        pub const m_flCycleTimeDelayAdd: usize = 0x754;
        pub const m_flBuildUpDecayDelay: usize = 0x758;
        pub const m_eBuildupMode: usize = 0x75c;
        pub const m_bBuildupAffectedByEffectiveness: usize = 0x760;
        pub const m_bPassBuildupEffectivenessToFillModifier: usize = 0x761;
    }

    // Parent: CBaseDoor
    pub mod CRotDoor {
        pub const m_bSolidBsp: usize = 0x980;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Cadence_SleepAOEVData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CPathWithDynamicNodes
    pub mod CPathMover {
        pub const m_vecMovers: usize = 0x5f0;
        pub const m_hMoverSpawner: usize = 0x608;
        pub const m_iszMoverSpawnerName: usize = 0x610;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncVPhysicsClip {
        pub const m_bDisabled: usize = 0x780;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CrowdControl_Diminish_WatcherVData {
        pub const m_flModifierWindow: usize = 0x750;
        pub const m_flReductionPerModifier: usize = 0x754;
        pub const m_flMaxReduction: usize = 0x758;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_OnTheHuntVData {
        pub const m_RapidFireParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VampireBat_LoveBitesProc {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityRollingFireBallVData {
        pub const m_flBallLifetime: usize = 0x1818;
        pub const m_flBallStepUpHeight: usize = 0x181c;
        pub const m_flBallDistAboveGround: usize = 0x1820;
        pub const m_flBallFloatDownRate: usize = 0x1824;
        pub const m_flBallSpeed: usize = 0x1828;
        pub const m_flBallTraceRadius: usize = 0x182c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_ProjectMindVData {
        pub const m_ProjectMindModifier: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_IncendiaryProjectile {
        pub const m_vecHitEnemies: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_FlameDashVData {
        pub const m_FlameDashModifier: usize = 0x1818;
        pub const m_DashBurstSound: usize = 0x1828;
        pub const m_ChargeHitSound: usize = 0x1838;
        pub const m_cameraSpeedBoost: usize = 0x1848;
    }

    // Parent: CCitadel_UtilityUpgrade_RocketBootsVData
    pub mod CCitadel_UtilityUpgrade_RocketBoosterVData {
        pub const m_LandingParticle: usize = 0x19b0;
        pub const m_AoEPreviewParticle: usize = 0x1a90;
        pub const m_DropDownStartParticle: usize = 0x1b70;
        pub const m_DropDownStartSound: usize = 0x1c50;
        pub const m_LandingSound: usize = 0x1c60;
        pub const m_DebuffModifier: usize = 0x1c70;
        pub const m_BarrierModifier: usize = 0x1c80;
        pub const m_flSlamEnabledTime: usize = 0x1c90;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ClimbRopeSlow {
    }

    // Parent: CBasePlayerPawn
    pub mod CCitadelPlayerPawnBase {
    }

    // Parent: CBaseTrigger
    pub mod CCitadelDevTrigger {
        pub const m_eDevTriggerType: usize = 0x8e0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_KothComebackBonuses {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Link {
        pub const m_hPortalToCaster: usize = 0xd0;
        pub const m_flPortalStartTime: usize = 0xd4;
        pub const m_flPortalEndTime: usize = 0xd8;
        pub const m_sCasterAttachment: usize = 0xe0;
        pub const m_sParentAttachment: usize = 0xe8;
        pub const m_vecLinkPosition: usize = 0xf0;
    }

    // Parent: CPhysConstraint
    pub mod CPhysFixed {
        pub const m_flLinearFrequency: usize = 0x500;
        pub const m_flLinearDampingRatio: usize = 0x504;
        pub const m_flAngularFrequency: usize = 0x508;
        pub const m_flAngularDampingRatio: usize = 0x50c;
        pub const m_bEnableLinearConstraint: usize = 0x510;
        pub const m_bEnableAngularConstraint: usize = 0x511;
        pub const m_sBoneName1: usize = 0x518;
        pub const m_sBoneName2: usize = 0x520;
    }

    // Parent: CLogicalEntity
    pub mod CLogicNavigation {
        pub const m_isOn: usize = 0x4a8;
        pub const m_navProperty: usize = 0x4ac;
    }

    // Parent: CBaseEntity
    pub mod CPathSimple {
        pub const m_CPathQueryComponent: usize = 0x4b0;
        pub const m_pathString: usize = 0x5a0;
        pub const m_bClosedLoop: usize = 0x5a8;
    }

    // Parent: CPathParticleRope
    pub mod CPathParticleRopeAlias_path_particle_rope_clientside {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NeutralAgro {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_Ability02VData {
        pub const m_EffectModifier: usize = 0x1818;
        pub const m_ExplosionParticle: usize = 0x1828;
        pub const m_CastParticle: usize = 0x1908;
        pub const m_strPillowHitSound: usize = 0x19e8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Swan_FeatherBoomerangVData {
        pub const m_HitParticle: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x18f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fear {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SleepDagger {
    }

    // Parent: CitadelItemVData
    pub mod CItem_FleetfootBoots_VData {
        pub const m_FleetfootBootsModifier: usize = 0x18b8;
        pub const m_FleetfootBootsBonusClipModifier: usize = 0x18c8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FireRateAuraVData {
        pub const m_FireRateAuraSourceParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_Inhibitor_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ReturnFire {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ArcticBlast_Freeze {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Objective_HealthGrowth {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Invis {
        pub const m_bInvis: usize = 0x450;
        pub const m_flStartInvisTime: usize = 0x454;
        pub const m_bFullyInvis: usize = 0x458;
        pub const m_flLastDamageTaken: usize = 0x45c;
        pub const m_flLastSpotted: usize = 0x460;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadelModifierTier2BossAoeWaveAuraVData {
        pub const m_flWaveHeight: usize = 0x7a8;
        pub const m_waveParticle: usize = 0x7b0;
    }

    // Parent: CBaseEntity
    pub mod CEnvWindVolume {
        pub const m_bActive: usize = 0x4a0;
        pub const m_vBoxMins: usize = 0x4a4;
        pub const m_vBoxMaxs: usize = 0x4b0;
        pub const m_bStartDisabled: usize = 0x4bc;
        pub const m_nShape: usize = 0x4c0;
        pub const m_fWindSpeedMultiplier: usize = 0x4c4;
        pub const m_fWindTurbulenceMultiplier: usize = 0x4c8;
        pub const m_fWindSpeedVariationMultiplier: usize = 0x4cc;
        pub const m_fWindDirectionVariationMultiplier: usize = 0x4d0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Fencer_ThrowBladeVData {
        pub const m_MarkParticle: usize = 0x1818;
        pub const m_MarkLingerParticle: usize = 0x18f8;
        pub const m_ExplodeParticle: usize = 0x19d8;
        pub const m_LaunchTrailParticle: usize = 0x1ab8;
        pub const m_BuffModifier: usize = 0x1b98;
        pub const m_DebuffModifier: usize = 0x1ba8;
        pub const m_DisarmModifier: usize = 0x1bb8;
        pub const m_flUpDisenageJumpRatio: usize = 0x1bc8;
        pub const m_flMinDisengageAmountBack: usize = 0x1bcc;
        pub const m_flForwardPlacementDistance: usize = 0x1bd0;
        pub const m_flHeightAboveGround: usize = 0x1bd4;
        pub const m_velocityCurve: usize = 0x1bd8;
        pub const m_sStartSound: usize = 0x1c18;
        pub const m_sExpiredSound: usize = 0x1c28;
        pub const m_strHitSound: usize = 0x1c38;
    }

    // Parent: CCitadelPlayer_MovementServices
    pub mod CCitadelFamiliarClone_MovementServices {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Mirage_Teleport {
        pub const m_hTarget: usize = 0xf88;
        pub const m_tTeleportCompletedTime: usize = 0xf8c;
        pub const m_vTargetPosition: usize = 0xf90;
        pub const m_vTargetAngles: usize = 0xf9c;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityCadenceAnthemVData {
        pub const m_AnthemAOEModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Vandal_PillarVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_PetrifyModifier: usize = 0x18f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GuidedArrow {
        pub const m_hProjectile: usize = 0xf78;
        pub const m_flArrowSpeed: usize = 0xf7c;
        pub const m_flSnapAnglesBackTime: usize = 0xf80;
        pub const m_nBonusTechPower: usize = 0xf84;
        pub const m_bNeedsExplosion: usize = 0xf88;
        pub const m_hOwl: usize = 0xf8c;
        pub const m_flCastTime: usize = 0xf9c;
        pub const m_vProjectileRemovedOrigin: usize = 0xfa0;
        pub const m_angCasterAnglesAtCastTime: usize = 0xfac;
        pub const m_flTravelDistance: usize = 0xfb8;
        pub const m_bInKillFlow: usize = 0xfbc;
        pub const m_flProjectileTurnVel: usize = 0xfc0;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_ChainLightningVData {
        pub const m_TracerParticle: usize = 0x880;
        pub const m_ChainModifier: usize = 0x960;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_GuardianWard {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_AblativeCoatResistBuffVData {
        pub const m_ResistBuffParticle: usize = 0x750;
    }

    // Parent: None
    pub mod PlayOfTheGameTrigger_t {
        pub const m_tTriggerTime: usize = 0x30;
        pub const m_eType: usize = 0x34;
        pub const m_nTarget: usize = 0x38;
    }

    // Parent: CFuncBrush
    pub mod CFuncElectrifiedVolume {
        pub const m_EffectName: usize = 0x7a0;
        pub const m_EffectInterpenetrateName: usize = 0x7a8;
        pub const m_EffectZapName: usize = 0x7b0;
        pub const m_iszEffectSource: usize = 0x7b8;
    }

    // Parent: CCitadel_Item
    pub mod CItemMysticReverb {
    }

    // Parent: CAI_VolumetricEventEntity
    pub mod CAI_VolumetricEventEntityAlias_ai_sound {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PriestKnockbackVData {
        pub const m_flMomentumMaintained: usize = 0x750;
        pub const m_flVelocityStrengthCurve: usize = 0x758;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Trapper_PoisonJarVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_AuraModifier: usize = 0x18f8;
        pub const m_ExplodeSound: usize = 0x1908;
    }

    // Parent: None
    pub mod CCitadel_Ability_CardTossCard_t {
        pub const m_nCardNum: usize = 0x0;
        pub const m_eCardType: usize = 0x4;
        pub const m_nFxIdx: usize = 0x8;
        pub const m_hProjectile: usize = 0xc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ImmobilizeTrap {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_HeroTestOrbSpawnerVData {
        pub const m_iGoldValue: usize = 0x28;
        pub const m_flSpawnRate: usize = 0x2c;
        pub const m_flFirstSpawnTime: usize = 0x30;
        pub const m_hModel: usize = 0x38;
        pub const m_flModelScale: usize = 0x118;
        pub const m_flSpawnOffset: usize = 0x11c;
        pub const m_AmbientParticle: usize = 0x120;
        pub const m_SpawnParticle: usize = 0x200;
    }

    // Parent: None
    pub mod fogparams_t {
        pub const dirPrimary: usize = 0x8;
        pub const colorPrimary: usize = 0x14;
        pub const colorSecondary: usize = 0x18;
        pub const colorPrimaryLerpTo: usize = 0x1c;
        pub const colorSecondaryLerpTo: usize = 0x20;
        pub const start: usize = 0x24;
        pub const end: usize = 0x28;
        pub const farz: usize = 0x2c;
        pub const maxdensity: usize = 0x30;
        pub const exponent: usize = 0x34;
        pub const HDRColorScale: usize = 0x38;
        pub const skyboxFogFactor: usize = 0x3c;
        pub const skyboxFogFactorLerpTo: usize = 0x40;
        pub const startLerpTo: usize = 0x44;
        pub const endLerpTo: usize = 0x48;
        pub const maxdensityLerpTo: usize = 0x4c;
        pub const lerptime: usize = 0x50;
        pub const duration: usize = 0x54;
        pub const blendtobackground: usize = 0x58;
        pub const scattering: usize = 0x5c;
        pub const locallightscale: usize = 0x60;
        pub const enable: usize = 0x64;
        pub const blend: usize = 0x65;
        pub const m_bPadding2: usize = 0x66;
        pub const m_bPadding: usize = 0x67;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_PatronsBlessingAura {
    }

    // Parent: CCitadel_Item_Bubble
    pub mod CCitadel_Item_Stasis_Bomb {
    }

    // Parent: CSoundEventEntity
    pub mod CSoundEventOBBEntity {
        pub const m_vMins: usize = 0x560;
        pub const m_vMaxs: usize = 0x56c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_HauntingSpirits {
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Necro_PrimaryWeapon {
        pub const m_tTetherAttachTime: usize = 0x18b0;
        pub const m_tTetherBreakTime: usize = 0x18b4;
        pub const m_bHasTetherTarget: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Priest_CrossbowEquipped {
        pub const m_pCrossbowWeapon: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CopiedUlt_SpawnedEntityVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Mirage_Tornado_EvasionVData {
        pub const m_AttackerHitFx: usize = 0x750;
        pub const m_ImpactParticle: usize = 0x830;
        pub const m_playerBuffSelf: usize = 0x910;
        pub const m_playerBuffEnemy: usize = 0x9f0;
        pub const m_ReflectedBulletTracerParticle: usize = 0xad0;
        pub const m_strAttackerHitSound: usize = 0xbb0;
        pub const m_strVictimHitSound: usize = 0xbc0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Tokamak_DyingStarVData {
        pub const m_ExplosionParticle: usize = 0x1818;
        pub const m_FlameAuraParticle: usize = 0x18f8;
        pub const m_strInFlightAnimGraphParam: usize = 0x19d8;
        pub const m_strExplodeSound: usize = 0x19e0;
        pub const m_InFlightModifier: usize = 0x19f0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bebop_StickyBomb2VData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_RestrictionModifier: usize = 0x18f8;
        pub const m_DebuffModifier: usize = 0x1908;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_RegenerativeArmorVData {
        pub const m_RegenModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ClimbRopeSlowVData {
        pub const m_flRampDownTime: usize = 0x750;
        pub const m_flPercentageMultiplierStart: usize = 0x754;
        pub const m_flPercentageMultiplierEnd: usize = 0x758;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Intrinsic_BaseVData {
    }

    // Parent: None
    pub mod WeakPoint_t {
        pub const m_bRegistered: usize = 0x7c;
        pub const m_hOuter: usize = 0x80;
        pub const m_nCritHitGroup: usize = 0x84;
        pub const m_nBodyGroup: usize = 0x88;
        pub const m_bPermanentlyBroken: usize = 0x8c;
        pub const m_nBrokenBodygroupIndex: usize = 0x90;
    }

    // Parent: CAI_CitadelNPC
    pub mod CNPC_Boss_Tier3 {
        pub const m_iLane: usize = 0x17b4;
        pub const m_vecElectricBeamTargetEnd: usize = 0x17ec;
        pub const m_eventOnBossKilled: usize = 0x1808;
        pub const m_eventOnPhase1End: usize = 0x1820;
        pub const m_backdoorProtectionTrigger: usize = 0x1838;
        pub const m_eAliveState: usize = 0x1844;
        pub const m_ePhase: usize = 0x1848;
        pub const m_vShrineAttackTargetPos: usize = 0x1878;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerMultiple {
        pub const m_OnTrigger: usize = 0x8e0;
    }

    // Parent: CPhysConstraint
    pub mod CPhysBallSocket {
        pub const m_flJointFriction: usize = 0x500;
        pub const m_bEnableSwingLimit: usize = 0x504;
        pub const m_flSwingLimit: usize = 0x508;
        pub const m_bEnableTwistLimit: usize = 0x50c;
        pub const m_flMinTwistAngle: usize = 0x510;
        pub const m_flMaxTwistAngle: usize = 0x514;
    }

    // Parent: CBaseEntity
    pub mod CDebugHistory {
    }

    // Parent: None
    pub mod AirheartLockOnTarget_t {
        pub const m_hTarget: usize = 0x30;
        pub const m_nMarks: usize = 0x34;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PunkGoat_Blasted {
        pub const m_tTimeOfLastBulletHit: usize = 0xf70;
        pub const m_flPendingBlastedTimeToAdd: usize = 0xf74;
        pub const m_flDeferredHealingFromBlasted: usize = 0xf78;
        pub const m_flBlastedCurrentDuration: usize = 0xf7c;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Priest_CrossbowWeaponVData {
        pub const m_SpreadPenaltyScaleCurve: usize = 0x19c8;
        pub const m_flRicochetBulletSpeed: usize = 0x1a08;
        pub const m_LaserSightParticle: usize = 0x1a10;
        pub const m_LaserSightParticleOwnerOnly: usize = 0x1af0;
        pub const m_BlessedTracerParticle: usize = 0x1bd0;
        pub const m_CrossbowMuzzleFlashParticle: usize = 0x1cb0;
        pub const m_strHitSound: usize = 0x1d90;
        pub const m_strHitHeadshotSound: usize = 0x1da0;
        pub const m_cameraSequenceBolt: usize = 0x1db0;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Operative_Revelation_Target {
        pub const m_flTotalTimeLookedAtCaster: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Operative_Revelation_Target_VData {
        pub const m_DebuffModifier: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Warden_RiotProtocol_CastDelay {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_FissureWallVData {
        pub const m_nMeleeHits: usize = 0x28;
        pub const m_HitSound: usize = 0x30;
        pub const m_DestroySound: usize = 0x40;
        pub const m_DestroyParticle: usize = 0x50;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ModDisruptorVData {
        pub const m_DetonateParticle: usize = 0x18b8;
        pub const m_DisruptModifier: usize = 0x1998;
        pub const m_flWaveSpeed: usize = 0x19a8;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_LeechHealbane_Debuff {
    }

    // Parent: CCitadel_MultiCapturePointVData
    pub mod CCitadel_KothCashInVData {
        pub const m_ZoneParticle: usize = 0x4a8;
        pub const m_EndParticleFriendly: usize = 0x588;
        pub const m_EndParticleEnemy: usize = 0x668;
        pub const m_AuraModifier: usize = 0x748;
        pub const m_ComebackAuraModifier: usize = 0x758;
        pub const m_TrooperModifier: usize = 0x768;
        pub const m_strKothCashedInSoundFriendly: usize = 0x778;
        pub const m_strKothCashedInSoundEnemy: usize = 0x788;
        pub const m_strKothContestedSound: usize = 0x798;
        pub const m_strKothBlockedSound: usize = 0x7a8;
        pub const m_strKothGiveUpSound: usize = 0x7b8;
        pub const m_strKothGiveUpWarnSound: usize = 0x7c8;
        pub const m_strKothCashinLoopSound: usize = 0x7d8;
        pub const m_strKothGivingUpWarningLoopSound: usize = 0x7e8;
        pub const m_strKothContestedLoopSound: usize = 0x7f8;
        pub const m_strKothCaptureStartAnnounce: usize = 0x808;
        pub const m_flZoneHeightMeters: usize = 0x818;
        pub const m_flTotalTimeToCaptureFavored: usize = 0x81c;
        pub const m_flTotalTimeToCaptureUnfavored: usize = 0x820;
        pub const m_flTimeToGiveUp: usize = 0x824;
        pub const m_flTimeToWarnAboutGivingUp: usize = 0x828;
        pub const m_nGiveUpOrbs: usize = 0x82c;
        pub const m_flTroopersMin: usize = 0x830;
        pub const m_flTroopersMax: usize = 0x834;
        pub const m_flTroopersSpawnRate: usize = 0x838;
        pub const m_flDelayedDelete: usize = 0x83c;
    }

    // Parent: CBaseEntity
    pub mod CSoundOpvarSetPointBase {
        pub const m_bDisabled: usize = 0x4a0;
        pub const m_hSource: usize = 0x4a4;
        pub const m_iszSourceEntityName: usize = 0x4c0;
        pub const m_vLastPosition: usize = 0x518;
        pub const m_flRefreshTime: usize = 0x524;
        pub const m_iszStackName: usize = 0x528;
        pub const m_iszOperatorName: usize = 0x530;
        pub const m_iszOpvarName: usize = 0x538;
        pub const m_iOpvarIndex: usize = 0x540;
        pub const m_bUseAutoCompare: usize = 0x544;
        pub const m_bFastRefresh: usize = 0x545;
    }

    // Parent: None
    pub mod CExplosionTypeData {
        pub const m_SoundName: usize = 0x0;
        pub const m_ParticleEffect: usize = 0x10;
        pub const m_bIsIncindiary: usize = 0xf0;
        pub const m_bHasForces: usize = 0xf1;
        pub const m_DecalType: usize = 0xf8;
    }

    // Parent: CLogicalEntity
    pub mod CPathKeyFrame {
        pub const m_Origin: usize = 0x4a0;
        pub const m_Angles: usize = 0x4ac;
        pub const m_qAngle: usize = 0x4c0;
        pub const m_iNextKey: usize = 0x4d0;
        pub const m_flNextTime: usize = 0x4d8;
        pub const m_pNextKey: usize = 0x4e0;
        pub const m_pPrevKey: usize = 0x4e8;
        pub const m_flMoveSpeed: usize = 0x4f0;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_FamiliarPrimaryWeaponVData {
        pub const m_flShotCosmeticVarianceMagnitude: usize = 0x19c8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Fathom_LurkersAmbush {
        pub const m_hRegenModifier: usize = 0x13f0;
        pub const m_hInvisModifier: usize = 0x1408;
        pub const m_bIsVisibleOnMinimap: usize = 0x1420;
        pub const m_flStoppedMovingStartTime: usize = 0x1424;
        pub const m_vLastPos: usize = 0x1428;
        pub const m_flDebuffDuration: usize = 0x1434;
        pub const m_flChannelTimeStarted: usize = 0x1438;
        pub const m_bWasLatchedWhenCast: usize = 0x143c;
        pub const m_ChargeUpParticle: usize = 0x1440;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fathom_Breach {
        pub const m_nRollFXIndex: usize = 0xf70;
        pub const m_bInFlight: usize = 0xf74;
    }

    // Parent: CCitadel_Modifier_Burning
    pub mod CCitadel_Modifier_Base_DOT {
        pub const m_flLastDamageTime: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_ChainLightning
    pub mod CCitadel_Modifier_Galvanic_Storm {
    }

    // Parent: CNPC_TrooperNeutralVData
    pub mod CNPC_TrooperNeutralNodeMoverVData {
        pub const m_bEnableMovementToNodes: usize = 0x16c0;
        pub const m_flExposedDuration: usize = 0x16c4;
        pub const m_flHideDuration: usize = 0x16cc;
        pub const m_HidingModifier: usize = 0x16d8;
    }

    // Parent: CTriggerPush
    pub mod CScriptTriggerPush {
        pub const m_vExtent: usize = 0x918;
    }

    // Parent: CPointEntity
    pub mod CAITestPath {
        pub const m_strNextPath: usize = 0x4a8;
    }

    // Parent: CModelPointEntity
    pub mod CRevertSaved {
        pub const m_loadTime: usize = 0x780;
        pub const m_Duration: usize = 0x784;
        pub const m_HoldTime: usize = 0x788;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Operative_Blindside_VData {
        pub const m_EnemyDebuffModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
        pub const m_ExplosionSound: usize = 0x1908;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityThumper3VData {
        pub const m_DroneModifier: usize = 0x1818;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityTokamakRadianceVData {
        pub const m_RadianceModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Lockdown_BulletResist {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Spin {
    }

    // Parent: CCitadel_Modifier_Sleep
    pub mod CCitadel_Modifier_SleepDagger_Asleep {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_MysticShotVData {
        pub const m_ExplodeParticle: usize = 0x880;
        pub const m_ExplodeSound: usize = 0x960;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Upgrade_ArcaneSurge_AbilityWatcher_VData {
        pub const m_flRefreshBuffer: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Glitch {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierObscuredVData {
        pub const m_flHideDuration: usize = 0x750;
        pub const m_flRevealDuration: usize = 0x754;
    }

    // Parent: CNPC_SimpleAnimatingAI
    pub mod CNPC_FieldSentry {
        pub const m_flAimPitch: usize = 0xc1c;
        pub const m_flNextAttackTime: usize = 0xc20;
        pub const m_flAttackCone: usize = 0xc24;
        pub const m_flAttackDelay: usize = 0xc28;
        pub const m_flLastAlertSound: usize = 0xc2c;
        pub const m_flTrackingSpeed: usize = 0xc30;
        pub const m_flDeployTime: usize = 0xc34;
        pub const m_flLifeTime: usize = 0xc3c;
        pub const m_bHadEnemy: usize = 0xc42;
        pub const m_bLockedOn: usize = 0xc43;
        pub const m_flAttackRange: usize = 0xc54;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_SpiderAnimating {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerHurt {
        pub const m_flOriginalDamage: usize = 0x8e0;
        pub const m_flDamage: usize = 0x8e4;
        pub const m_flDamageCap: usize = 0x8e8;
        pub const m_flLastDmgTime: usize = 0x8ec;
        pub const m_flForgivenessDelay: usize = 0x8f0;
        pub const m_bitsDamageInflict: usize = 0x8f4;
        pub const m_damageModel: usize = 0x8f8;
        pub const m_bNoDmgForce: usize = 0x8fc;
        pub const m_vDamageForce: usize = 0x900;
        pub const m_thinkAlways: usize = 0x90c;
        pub const m_hurtThinkPeriod: usize = 0x910;
        pub const m_OnHurt: usize = 0x918;
        pub const m_OnHurtPlayer: usize = 0x930;
        pub const m_hurtEntities: usize = 0x948;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ShadowClone {
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_Gold {
        pub const m_iGoldReward: usize = 0xb10;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_MagicianTurret {
        pub const m_hAbility: usize = 0xc40;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_HeroTestOrbSpawner {
    }

    // Parent: CEnvSoundscapeTriggerable
    pub mod CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_AutoCleanse {
        pub const m_nAbilityBlocking: usize = 0xf78;
        pub const m_nAbilityBlockTime: usize = 0xf7c;
        pub const m_hModifierCaster: usize = 0xf80;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_Kickflip_SucessSelfVData {
        pub const m_InitialVelocityCurve: usize = 0x750;
        pub const m_KickOffVelocityCurve: usize = 0x790;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_Ghoul_ExplodeVData {
        pub const m_ExplosionParticle: usize = 0x750;
        pub const m_WarningParticle: usize = 0x830;
        pub const m_ExplodeSound: usize = 0x910;
        pub const m_WarningSound: usize = 0x920;
        pub const m_SlowModifier: usize = 0x930;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Doorman_Doorway_VData {
        pub const m_DoorOpenStartSound: usize = 0x1818;
        pub const m_DoorOpenEndSound: usize = 0x1828;
        pub const m_DoorPlaceSound: usize = 0x1838;
        pub const m_DoorPlacementClearedSound: usize = 0x1848;
        pub const m_DoorStartCastSound: usize = 0x1858;
        pub const m_DoorEndCastSound: usize = 0x1868;
        pub const m_DoorExpireSound: usize = 0x1878;
        pub const m_DoorLoopSound: usize = 0x1888;
        pub const m_CastParticle: usize = 0x1898;
        pub const m_PendingDoorParticle: usize = 0x1978;
        pub const m_PlaceDoorParticle: usize = 0x1a58;
        pub const m_DoorDurationParticle: usize = 0x1b38;
        pub const m_DoorDestructionParticle: usize = 0x1c18;
        pub const m_hDoorModel: usize = 0x1cf8;
        pub const m_hPortalModel: usize = 0x1dd8;
        pub const m_strSingleDoorAbilityImage: usize = 0x1eb8;
        pub const m_ColorStart: usize = 0x1ec8;
        pub const m_ColorEnd: usize = 0x1ecc;
        pub const m_DoorwayTimerModifier: usize = 0x1ed0;
        pub const m_PortalBarrierModifier: usize = 0x1ee0;
        pub const m_flPlacementWallTestDistance: usize = 0x1ef0;
        pub const m_flPlacementWallTestExtentsSolidScale: usize = 0x1ef4;
        pub const m_flPlacementWallTestExtentsWallScale: usize = 0x1ef8;
        pub const m_flPlacementWallTestSphereRadius: usize = 0x1efc;
        pub const m_vPlacementOffset: usize = 0x1f00;
        pub const m_flPlacementCooldown: usize = 0x1f0c;
        pub const m_flPlacementRangeHintDuration: usize = 0x1f10;
        pub const m_flPlacementSphereMaxDesat: usize = 0x1f14;
        pub const m_colorPlacementSphereSat: usize = 0x1f18;
        pub const m_colorPlacementSphereDesat: usize = 0x1f1c;
        pub const m_colorPlacementSphereOutline: usize = 0x1f20;
        pub const m_curvePlacementFail: usize = 0x1f28;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_GarbageAuraTarget {
        pub const m_flMaxDist: usize = 0x1d8;
        pub const m_vecOffsetDir: usize = 0x1dc;
        pub const m_vecStartPosition: usize = 0x1e8;
        pub const m_flAOERadius: usize = 0x1f4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Item_HealthNova {
        pub const m_flAmountPerSecond: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BloodTribute {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_WarpStone_Caster_VData {
        pub const m_playerBuffSelf: usize = 0x750;
    }

    // Parent: CServerOnlyEntity
    pub mod CTrooperApproachHorizon {
    }

    // Parent: CMultiplayRules
    pub mod CTeamplayRules {
    }

    // Parent: CTriggerHurt
    pub mod CScriptTriggerHurt {
        pub const m_vExtent: usize = 0x968;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Warden_RiotProtocol {
        pub const m_mapEntToTimeHit: usize = 0xd0;
        pub const m_nNumPlayersAffected: usize = 0xf8;
        pub const m_nNumPlayersKilled: usize = 0xfc;
        pub const m_playerAngles: usize = 0x100;
        pub const m_ConeParticle: usize = 0x10c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_BoloVData {
        pub const m_TrapModifier: usize = 0x750;
        pub const m_ReverseLeechModifier: usize = 0x760;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ArcticBlastAOE_VData {
        pub const m_FreezeModifier: usize = 0x750;
        pub const m_SlowModifier: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Neutral_Debuff_Pushback {
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_Currency {
        pub const m_nCurrencyAmount: usize = 0xb10;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerDetectExplosion {
        pub const m_OnDetectedExplosion: usize = 0x908;
    }

    // Parent: CBaseFilter
    pub mod CFilterName {
        pub const m_iFilterName: usize = 0x4d8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_GooseEgg {
        pub const m_iAccruedGold: usize = 0xf80;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Fencer_Ultimate_VData {
        pub const m_flHoldingDuration: usize = 0x1818;
        pub const m_flSweepingDuration: usize = 0x181c;
        pub const m_flDamageTimeOffsetFromCamera: usize = 0x1820;
        pub const m_flNonHeroDamageDelay: usize = 0x1824;
        pub const m_flMaxVeerDistanceAllowed: usize = 0x1828;
        pub const m_flMinCameraSweepSpeed: usize = 0x182c;
        pub const m_CasterModifier: usize = 0x1830;
        pub const m_CasterArrivalModifier: usize = 0x1840;
        pub const m_TargetModifier: usize = 0x1850;
        pub const m_TargetNonHeroModifier: usize = 0x1860;
        pub const m_TargetPreviewParticle: usize = 0x1870;
        pub const m_DashImpactEffect: usize = 0x1950;
        pub const m_DashSwingEffect: usize = 0x1a30;
        pub const m_DashLineEffect: usize = 0x1b10;
        pub const m_UltHoldEffect: usize = 0x1bf0;
        pub const m_DirPreviewEffect: usize = 0x1cd0;
        pub const m_strDashHitEnemy: usize = 0x1db0;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_FamiliarAltWeaponVData {
        pub const m_PendingBulletParticle: usize = 0x19c8;
        pub const m_strAddPendingBulletSound: usize = 0x1aa8;
        pub const m_strFirePendingBulletSound: usize = 0x1ab8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Doorman_Bomb_VData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_MiniExplodeParticle: usize = 0x18f8;
        pub const m_ImpactParticle: usize = 0x19d8;
        pub const m_ExplosionSound: usize = 0x1ab8;
        pub const m_ImpactSound: usize = 0x1ac8;
        pub const m_HitConfirmSound: usize = 0x1ad8;
        pub const m_InaccuracyModifier: usize = 0x1ae8;
        pub const m_AuraModifier: usize = 0x1af8;
        pub const m_ProjectileDragCurve: usize = 0x1b08;
        pub const m_flShakeAmp: usize = 0x1b48;
        pub const m_flShakeFreq: usize = 0x1b4c;
        pub const m_flShakeDuration: usize = 0x1b50;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Priest_CrossbowWeapon {
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Mirage_Tornado {
        pub const m_RecastWindowEnd: usize = 0xf74;
        pub const m_anglesCharging: usize = 0x13f8;
        pub const m_flChargeStartTime: usize = 0x1404;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_SleepingVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Cadence_Lullaby {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Wrecker_Salvage {
        pub const m_vecTargets: usize = 0xf70;
    }

    // Parent: CCitadel_Modifier_StickyBombAttached
    pub mod CCitadel_Modifier_StickyBombOnGround {
        pub const m_tLastStopTime: usize = 0x2e0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GooBowlingBall {
        pub const m_nAirJumpsLeft: usize = 0x1670;
        pub const m_bIsRolling: usize = 0x1674;
        pub const m_hBall: usize = 0x1678;
        pub const m_eRollingState: usize = 0x167c;
        pub const m_flNextStateTime: usize = 0x1680;
        pub const m_flNextWallCheck: usize = 0x1684;
        pub const m_flRollStartTime: usize = 0x1688;
        pub const m_flWallExitTime: usize = 0x168c;
        pub const m_vecWallExitVelocity: usize = 0x1690;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierLashGrappleEnemyDebuffVData {
        pub const m_GrappleParticle: usize = 0x830;
        pub const m_LaunchParticle: usize = 0x910;
        pub const m_ImpactParticle: usize = 0x9f0;
        pub const m_RopeParticle: usize = 0xad0;
        pub const m_ImpactSound: usize = 0xbb0;
        pub const m_DebuffModifier: usize = 0xbc0;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_RunedGauntlets {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_LifestrikeGauntlets {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_CQC_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SpiritSnatch {
        pub const m_flCooldownDuration: usize = 0x208;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Push {
        pub const m_vPushForce: usize = 0xd0;
        pub const m_flDecayRate: usize = 0xdc;
        pub const m_TimeDestroy: usize = 0xe0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_InvisVData {
        pub const m_InvisLoopParticle: usize = 0x750;
        pub const m_InvisDetectRadiusParticle: usize = 0x830;
        pub const m_InvisRevealedParticle: usize = 0x910;
        pub const m_flDesatFactor: usize = 0x9f0;
        pub const m_strInvisRevealedSound: usize = 0x9f8;
        pub const m_bFadeInsteadOfRemoveOnBulletFire: usize = 0xa08;
        pub const m_bFadeInsteadOfRemoveOnAbilityUse: usize = 0xa09;
        pub const m_bBreakOnItemUse: usize = 0xa0a;
        pub const m_bFadeToVisibleAtEndOfDuration: usize = 0xa0b;
        pub const m_flMinCloak: usize = 0xa0c;
        pub const m_flMaxCloak: usize = 0xa10;
    }

    // Parent: None
    pub mod COrbSpawnerBounty_t {
        pub const m_nGoldToGive: usize = 0x0;
        pub const m_nNumOrbs: usize = 0x4;
        pub const m_eDenyType: usize = 0x8;
        pub const m_eSource: usize = 0xc;
        pub const m_hTarget: usize = 0x10;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_WeaponPowerForHealth {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Werewolf_KickFlipVData {
        pub const m_LeapingSpeedCurve: usize = 0x1818;
        pub const m_flVelocityCarryoverOnMiss: usize = 0x1858;
        pub const m_flFracToAllowUp: usize = 0x185c;
        pub const m_flGroundBreakOffAngle: usize = 0x1860;
        pub const m_KickHitImpact: usize = 0x1868;
        pub const m_PushOffImpact: usize = 0x1948;
        pub const m_BootKickCast: usize = 0x1a28;
        pub const m_KickHitSound: usize = 0x1b08;
        pub const m_strPushOffSound: usize = 0x1b18;
        pub const m_SuccessSelfModifier: usize = 0x1b28;
        pub const m_SuccessEnemyModifier: usize = 0x1b38;
        pub const m_LeapingModifier: usize = 0x1b48;
        pub const m_DisarmModifier: usize = 0x1b58;
        pub const m_BuffModifier: usize = 0x1b68;
        pub const m_DebuffModifier: usize = 0x1b78;
        pub const m_MarkModifier: usize = 0x1b88;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData {
        pub const m_strKeyLoopSound: usize = 0x750;
        pub const m_strKeyLoopStartSound: usize = 0x760;
        pub const m_strKeyLoopEndSound: usize = 0x770;
        pub const m_HitSound: usize = 0x780;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Targetdummy_1 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FireBomb_Buff {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_BulletArmorShredder_Proc {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierQuarantineVData {
        pub const m_BubbleParticle: usize = 0x750;
        pub const m_BubbleExplodeParticle: usize = 0x830;
        pub const m_SilenceModifier: usize = 0x910;
    }

    // Parent: None
    pub mod CPulseAIVolumetricEventAPI {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_RegeneratingBulletShield {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CP_Capturer {
        pub const m_hCP: usize = 0xd0;
        pub const m_hEscort: usize = 0xd4;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierPowerGeneratorVData {
        pub const m_AmberEffectToTitan: usize = 0x750;
        pub const m_SapphEffectToTitan: usize = 0x830;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_Hideout_ClockVData {
        pub const m_hModel: usize = 0x28;
        pub const m_HourParticle: usize = 0x108;
        pub const m_MinuteParticle: usize = 0x1e8;
        pub const m_strStartHourSound: usize = 0x2c8;
        pub const m_strHourSound: usize = 0x2d8;
        pub const m_strMinuteSound: usize = 0x2e8;
        pub const m_flHourChimeInterval: usize = 0x2f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Tokamak_HeatSinks_DOT_VData {
        pub const m_sAfterburnParticle: usize = 0x750;
        pub const m_sAfterburnExplodeParticle: usize = 0x830;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Vandal_Pillar {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Viper_DebuffDaggerVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_strWorldImpactSound: usize = 0x18f8;
        pub const m_strHitConfirmSound: usize = 0x1908;
        pub const m_SlowModifier: usize = 0x1918;
        pub const m_DebuffModifier: usize = 0x1928;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Nano_PredatoryStatueTargetVData {
        pub const m_strLaserHitSound: usize = 0x750;
        pub const m_strLaserStartSound: usize = 0x760;
        pub const m_strLaserLoopSound: usize = 0x770;
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckingBall_Debuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Bomber_ULT {
    }

    // Parent: CCitadel_Item_ProjectileTestVData
    pub mod CCitadel_Item_ProjectileTest04VData {
        pub const m_flDrag: usize = 0x18c8;
        pub const m_flMaxDrag: usize = 0x18cc;
        pub const m_flMinDrag: usize = 0x18d0;
        pub const m_flMinGravity: usize = 0x18d4;
        pub const m_flMaxGravity: usize = 0x18d8;
        pub const m_flLerpBeginDistanceToTarget: usize = 0x18dc;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CProjectile_Boho_BouncyProjectile {
    }

    // Parent: CCitadel_Modifier_Link
    pub mod CCitadel_Modifier_Gravity_Lasso_Enemy {
        pub const m_eHoldPosition: usize = 0x100;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CCitadel_Item_FocusLens {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_T2Boss_AoeWaveAura {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Bull_Leap_Boosting_CrashVData {
        pub const m_DragModifier: usize = 0x750;
        pub const m_CrashTrailParticle: usize = 0x760;
        pub const m_flCollideRadius: usize = 0x840;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SuperAcolytesGlove {
    }

    // Parent: CitadelItemVData
    pub mod CItemSingleTargetStunVData {
        pub const m_StunDelayModifier: usize = 0x18b8;
        pub const m_CastParticle: usize = 0x18c8;
    }

    // Parent: CRuleEntity
    pub mod CRulePointEntity {
        pub const m_Score: usize = 0x788;
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Tier2Weakened {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_GraveStoneVData {
        pub const m_CastWarningParticle: usize = 0x1818;
        pub const m_strSummonGravestoneSound: usize = 0x18f8;
        pub const m_GraveStoneModifier: usize = 0x1908;
        pub const m_ZombieSummonModifier: usize = 0x1918;
        pub const m_BlockerModel: usize = 0x1928;
        pub const m_flStoneSubmergeMinDepth: usize = 0x1a08;
        pub const m_flStoneSubmergeMaxDepth: usize = 0x1a0c;
        pub const m_flStonePitchMinOffset: usize = 0x1a10;
        pub const m_flStonePitchMaxOffset: usize = 0x1a14;
        pub const m_flStoneRollMinOffset: usize = 0x1a18;
        pub const m_flStoneRollMaxOffset: usize = 0x1a1c;
        pub const m_flStoneYawMinOffset: usize = 0x1a20;
        pub const m_flStoneYawMaxOffset: usize = 0x1a24;
        pub const m_flDropDownRate: usize = 0x1a28;
        pub const m_flClimbHeight: usize = 0x1a2c;
        pub const m_flDistanceAboveGround: usize = 0x1a30;
        pub const m_flNavMeshSearchRadius: usize = 0x1a34;
        pub const m_bAllowStackingDamageFromGun: usize = 0x1a38;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Boho_DamageShare {
        pub const m_vecLinkedEnemies: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Boho_DamageShareVData {
        pub const m_DamageShareParticle: usize = 0x1818;
        pub const m_DamageShareModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CopiedUlt_SpawnedEntity {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_DebuffStatusPlayerParticle: usize = 0x760;
        pub const m_DebuffStatusVictimParticle: usize = 0x840;
        pub const m_DebuffStatusNPCParticle: usize = 0x920;
        pub const m_StackDamageParticle: usize = 0xa00;
        pub const m_StackReadyParticle: usize = 0xae0;
        pub const m_StackAppliedParticle: usize = 0xbc0;
        pub const m_ConsumeMaxStacksSound: usize = 0xca0;
        pub const m_ConsumeMaxStacksHeroSound: usize = 0xcb0;
        pub const m_ApplyStackSound: usize = 0xcc0;
        pub const m_ApplyStackNPCSound: usize = 0xcd0;
        pub const m_StunSound: usize = 0xce0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Synth_PlasmaFlux_VData {
        pub const m_WeaponDamageBonusModifier: usize = 0x1818;
        pub const m_TeleportTrailParticle: usize = 0x1828;
        pub const m_ImpactParticle: usize = 0x1908;
        pub const m_strCasterLoopingSound: usize = 0x19e8;
        pub const m_strProjectileExpireSound: usize = 0x19f8;
        pub const m_strImpactSound: usize = 0x1a08;
        pub const m_strTimerSound: usize = 0x1a18;
        pub const m_strArrivedSound: usize = 0x1a28;
        pub const m_cameraSequenceTeleport: usize = 0x1a38;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRiotProtocolEnemyDebuffVData {
        pub const m_DebuffParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_TetherNoConnection {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_ComboBreakerVData {
        pub const m_ComboBreakerModifier: usize = 0x18b8;
        pub const m_HealModifier: usize = 0x18c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WeaponPowerForHealth {
        pub const m_flHealthDrained: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_T3Phase1VData {
        pub const m_flForwardOffset: usize = 0x750;
        pub const m_flPitRadius: usize = 0x754;
        pub const m_flVisualHeight: usize = 0x758;
        pub const m_flRefreshRate: usize = 0x75c;
        pub const m_AmberPitGroundEffect: usize = 0x760;
        pub const m_SaphhPitGroundEffect: usize = 0x840;
    }

    // Parent: None
    pub mod CPulse_CallInfo {
        pub const m_PortName: usize = 0x0;
        pub const m_nEditorNodeID: usize = 0x10;
        pub const m_RegisterMap: usize = 0x18;
        pub const m_CallMethodID: usize = 0x48;
        pub const m_nSrcChunk: usize = 0x4c;
        pub const m_nSrcInstruction: usize = 0x50;
    }

    // Parent: CFuncMoveLinear
    pub mod CFuncMoveLinearAlias_momentary_door {
    }

    // Parent: CBaseModelEntity
    pub mod CBaseAnimGraph {
        pub const m_graphControllerManager: usize = 0x780;
        pub const m_pMainGraphController: usize = 0x830;
        pub const m_bInitiallyPopulateInterpHistory: usize = 0x838;
        pub const m_pChoreoServices: usize = 0x840;
        pub const m_bAnimGraphUpdateEnabled: usize = 0x848;
        pub const m_flMaxSlopeDistance: usize = 0x84c;
        pub const m_vLastSlopeCheckPos: usize = 0x850;
        pub const m_nAnimGraphUpdateId: usize = 0x85c;
        pub const m_bAnimationUpdateScheduled: usize = 0x860;
        pub const m_vecForce: usize = 0x864;
        pub const m_nForceBone: usize = 0x870;
        pub const m_pRagdollControl: usize = 0x880;
        pub const m_RagdollPose: usize = 0x888;
        pub const m_bRagdollEnabled: usize = 0x8b0;
        pub const m_bRagdollClientSide: usize = 0x8b1;
        pub const m_xParentedRagdollRootInEntitySpace: usize = 0x8c0;
        pub const m_bodyGroupModifiers: usize = 0xa20;
    }

    // Parent: CCitadelBaseTriggerAbility
    pub mod CCitadel_Ability_TangoTether_Trigger {
        pub const m_hBaseAbility: usize = 0xf84;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_Petrify {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseTriggerAbility {
        pub const m_hAbilityToTrigger: usize = 0xf70;
        pub const m_SwappedToTime: usize = 0xf74;
    }

    // Parent: CBaseEntity
    pub mod CEnvCubemapFog {
        pub const m_flEndDistance: usize = 0x4a0;
        pub const m_flStartDistance: usize = 0x4a4;
        pub const m_flFogFalloffExponent: usize = 0x4a8;
        pub const m_bHeightFogEnabled: usize = 0x4ac;
        pub const m_flFogHeightWidth: usize = 0x4b0;
        pub const m_flFogHeightEnd: usize = 0x4b4;
        pub const m_flFogHeightStart: usize = 0x4b8;
        pub const m_flFogHeightExponent: usize = 0x4bc;
        pub const m_flLODBias: usize = 0x4c0;
        pub const m_bActive: usize = 0x4c4;
        pub const m_bStartDisabled: usize = 0x4c5;
        pub const m_flFogMaxOpacity: usize = 0x4c8;
        pub const m_nCubemapSourceType: usize = 0x4cc;
        pub const m_hSkyMaterial: usize = 0x4d0;
        pub const m_iszSkyEntity: usize = 0x4d8;
        pub const m_hFogCubemapTexture: usize = 0x4e0;
        pub const m_bHasHeightFogEnd: usize = 0x4e8;
        pub const m_bFirstTime: usize = 0x4e9;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Fencer_Lunge_VData {
        pub const m_DashImpactEffect: usize = 0x1818;
        pub const m_DashSwingEffect: usize = 0x18f8;
        pub const m_DashTrailEffect: usize = 0x19d8;
        pub const m_SwordChargeEffect: usize = 0x1ab8;
        pub const m_SlashSwingEffect: usize = 0x1b98;
        pub const m_StackProcParticle: usize = 0x1c78;
        pub const m_GlintParticle: usize = 0x1d58;
        pub const m_PerfectImpactParticle: usize = 0x1e38;
        pub const m_vecLongEffectOffset: usize = 0x1f18;
        pub const m_vecPlayerLeftOffset: usize = 0x1f24;
        pub const m_DashBuffModifier: usize = 0x1f28;
        pub const m_flAirSpeedMax: usize = 0x1f38;
        pub const m_flAirDrag: usize = 0x1f3c;
        pub const m_flFallSpeedMax: usize = 0x1f40;
        pub const m_flDashTurnRateMax: usize = 0x1f44;
        pub const m_flMaxPowerPadding: usize = 0x1f48;
        pub const m_flEffectGroundTrace: usize = 0x1f4c;
        pub const m_flWhizbyMaxRange: usize = 0x1f50;
        pub const m_flStartPosTestCapsuleLength: usize = 0x1f54;
        pub const m_flCoverLOSBackDist: usize = 0x1f58;
        pub const m_flAttackDuration: usize = 0x1f5c;
        pub const m_flPostAttackDuration: usize = 0x1f60;
        pub const m_flMinGlintTime: usize = 0x1f64;
        pub const m_strDashStart: usize = 0x1f68;
        pub const m_strSlashStart: usize = 0x1f78;
        pub const m_strSlashImpactSound: usize = 0x1f88;
        pub const m_strChargeSound: usize = 0x1f98;
        pub const m_strChargeGlintSound: usize = 0x1fa8;
        pub const m_strMaxHoldSweetener: usize = 0x1fb8;
        pub const m_strPerfectDamageHitSound: usize = 0x1fc8;
        pub const m_cameraSequencePreRelease: usize = 0x1fd8;
        pub const m_cameraSequenceSlash: usize = 0x2060;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Doorman_Bomb_Debuff {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_SilenceBombVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_AuraModifier: usize = 0x18f8;
        pub const m_ExplodeSound: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ChargePullEnemy {
        pub const m_vecOffsetDir: usize = 0x2d0;
        pub const m_flTackleRadius: usize = 0x2dc;
        pub const m_flPullTargetSpeed: usize = 0x2e0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Chrono_TimeWall_Effect {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_RocketBarrage {
        pub const m_flBarrageEndTime: usize = 0xf70;
        pub const m_flCurrentTimeScale: usize = 0x1408;
        pub const m_vecAimPos: usize = 0x140c;
        pub const m_vecAimVel: usize = 0x1418;
        pub const m_flLastUpdateTime: usize = 0x1424;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Afterburn_DOT_VData {
        pub const m_sAfterburnParticle: usize = 0x750;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_GooseEggPassiveGold {
        pub const m_flCurrentThinkRate: usize = 0x1d8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HeroUpgradeBonuses {
        pub const m_pOwningPlayer: usize = 0xd0;
        pub const m_flWeaponPower: usize = 0xd8;
        pub const m_flArmorPower: usize = 0xdc;
        pub const m_flTechPower: usize = 0xe0;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_InlineNodeSkipSelector {
        pub const m_nFlowNodeID: usize = 0x48;
        pub const m_bAnd: usize = 0x4c;
        pub const m_PassOutflow: usize = 0x50;
        pub const m_FailOutflow: usize = 0x68;
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_Modifier {
    }

    // Parent: CBaseToggle
    pub mod CBaseDoor {
        pub const m_angMoveEntitySpace: usize = 0x810;
        pub const m_vecMoveDirParentSpace: usize = 0x81c;
        pub const m_ls: usize = 0x828;
        pub const m_bForceClosed: usize = 0x848;
        pub const m_bDoorGroup: usize = 0x849;
        pub const m_bLocked: usize = 0x84a;
        pub const m_bIgnoreDebris: usize = 0x84b;
        pub const m_bNoNPCs: usize = 0x84c;
        pub const m_eSpawnPosition: usize = 0x850;
        pub const m_flBlockDamage: usize = 0x854;
        pub const m_NoiseMoving: usize = 0x858;
        pub const m_NoiseArrived: usize = 0x860;
        pub const m_NoiseMovingClosed: usize = 0x868;
        pub const m_NoiseArrivedClosed: usize = 0x870;
        pub const m_ChainTarget: usize = 0x878;
        pub const m_OnBlockedClosing: usize = 0x880;
        pub const m_OnBlockedOpening: usize = 0x898;
        pub const m_OnUnblockedClosing: usize = 0x8b0;
        pub const m_OnUnblockedOpening: usize = 0x8c8;
        pub const m_OnFullyClosed: usize = 0x8e0;
        pub const m_OnFullyOpen: usize = 0x8f8;
        pub const m_OnClose: usize = 0x910;
        pub const m_OnOpen: usize = 0x928;
        pub const m_OnLockedUse: usize = 0x940;
        pub const m_bLoopMoveSound: usize = 0x958;
        pub const m_bCreateNavObstacle: usize = 0x978;
        pub const m_isChaining: usize = 0x979;
        pub const m_bIsUsable: usize = 0x97a;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_LuggageDragVData {
        pub const m_SlowModifier: usize = 0x750;
        pub const m_StompIgnoreLingerModifier: usize = 0x760;
        pub const m_flForwardOffset: usize = 0x770;
        pub const m_flVerticalOffset: usize = 0x774;
        pub const m_flDragDistance: usize = 0x778;
        pub const m_flForceDistScale: usize = 0x77c;
        pub const m_flWallStunLookAheadDist: usize = 0x780;
        pub const m_flStompIgnoreLingerDuration: usize = 0x784;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_AnimalHexArea {
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CCitadel_Modifier_PillarVData {
        pub const m_DebuffParticle: usize = 0x830;
        pub const m_BuffStartParticle: usize = 0x910;
        pub const m_BuffEndParticle: usize = 0x9f0;
        pub const m_PostSleepModifier: usize = 0xad0;
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_Viper_Venom {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Astro_ShotgunBuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MobileResupplyVData {
        pub const m_AuraBuffParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_SiphonBullets_RestoreHealth {
        pub const m_flHealAmount: usize = 0xd0;
    }

    // Parent: CServerOnlyEntity
    pub mod CServerOnlyPointEntity {
    }

    // Parent: CCitadelProjectile
    pub mod CCitadel_Projectile_BookwormGun {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_MysticalPianoAura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Upgrade_MagicCarpet {
        pub const m_flFlyingStartTime: usize = 0xf78;
        pub const m_bFlying: usize = 0x1080;
        pub const m_bSummoning: usize = 0x1081;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadelModifierAura_Cylinder {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierVData_BaseAura {
        pub const m_nAuraShapeType: usize = 0x750;
        pub const m_nCenterType: usize = 0x754;
        pub const m_flAuraRadius: usize = 0x758;
        pub const m_flAuraEntityBoundsScale: usize = 0x768;
        pub const m_nAmbientParticleRadiusControlPoint: usize = 0x778;
        pub const m_modifierProvidedByAura: usize = 0x780;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Familiar_AttachVData {
        pub const m_AttachedModifier: usize = 0x1818;
        pub const m_MovingToAttachModifier: usize = 0x1828;
        pub const m_CameraDummyModifier: usize = 0x1838;
        pub const m_SpeedModifier: usize = 0x1848;
        pub const m_DeathBarrierModifier: usize = 0x1858;
        pub const m_HopOutLockoutModifier: usize = 0x1868;
        pub const m_LaunchTossModifier: usize = 0x1878;
        pub const m_LaunchedSelfModifier: usize = 0x1888;
        pub const m_AllyLockoutModifier: usize = 0x1898;
        pub const m_HopOffBuffModifier: usize = 0x18a8;
        pub const m_AttachHealModifier: usize = 0x18b8;
        pub const m_sCamDummyModelName: usize = 0x18c8;
        pub const m_FakeFamiliarParticle: usize = 0x19a8;
        pub const m_flDetachForce: usize = 0x1a88;
        pub const m_flDetachForceUp: usize = 0x1a8c;
        pub const m_flTriggeredDetachForce: usize = 0x1a90;
        pub const m_flTriggeredDetachForceUp: usize = 0x1a94;
        pub const m_MovingToAttachProjectileSpeedCurve: usize = 0x1a98;
        pub const m_LaunchAngleRemap: usize = 0x1ad8;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Boho_PrimaryWeapon {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bookworm_DragonFireVData {
        pub const m_DragonSpawnParticle: usize = 0x1818;
        pub const m_DragonCastParticle: usize = 0x18f8;
        pub const m_ImpactParticle: usize = 0x19d8;
        pub const m_ProjectileModel: usize = 0x1ab8;
        pub const m_GroundAuraModifier: usize = 0x1b98;
        pub const m_strExpiredSound: usize = 0x1ba8;
        pub const flSpawnVerticalOffset: usize = 0x1bb8;
        pub const flIdealSpringLength: usize = 0x1bbc;
        pub const flSpringConstant: usize = 0x1bc0;
        pub const flDamperConstant: usize = 0x1bc4;
        pub const flVelocityImpactOnAngle: usize = 0x1bc8;
        pub const flPitchOffset: usize = 0x1bcc;
        pub const flDotToChangeForwardDirectionBasedOnImpactNormal: usize = 0x1bd0;
        pub const bDebug: usize = 0x1bd4;
        pub const flForwardTraceDistance: usize = 0x1bd8;
        pub const m_flFloorRaycastForward: usize = 0x1bdc;
        pub const m_flTraceRadius: usize = 0x1be0;
        pub const m_flDistanceAboveGround: usize = 0x1be4;
        pub const m_flFloatDownRate: usize = 0x1be8;
        pub const m_flClimbHeight: usize = 0x1bec;
        pub const m_flStepDownHeight: usize = 0x1bf0;
        pub const m_flQAngleSmoothRate: usize = 0x1bf4;
        pub const m_bShouldReflectAgainstWall: usize = 0x1bf8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_ShockFullyCharged {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_IceDomeVData {
        pub const m_BlockerModel: usize = 0x750;
        pub const m_DomeParticle: usize = 0x830;
        pub const m_FriendlyAuraModifier: usize = 0x910;
        pub const m_EnemyAuraModifier: usize = 0x920;
        pub const m_strDomeEndSound: usize = 0x930;
        pub const m_strTargetLoopingSound: usize = 0x940;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Stomp {
        pub const m_vStompPos: usize = 0xf70;
        pub const m_vStompDir: usize = 0xf7c;
        pub const m_vecStompedEnemies: usize = 0xf88;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PulseGrenade_TimeSlow {
    }

    // Parent: CCitadel_Modifier_Base
    pub mod CCitadel_Modifier_EnchantedHolsters_Buff {
    }

    // Parent: CTier3BossAbility
    pub mod CCitadel_Ability_Weapon_BossTier3 {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadelModifierAura_Default {
    }

    // Parent: CPointEntity
    pub mod CInfoRemarkable {
        pub const m_iTimesRemarkedUpon: usize = 0x4a0;
        pub const m_szRemarkContext: usize = 0x4a8;
    }

    // Parent: CBaseEntity
    pub mod CNullEntity {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_WerewolfVData {
        pub const m_mapWerewolfAbilities: usize = 0x750;
        pub const m_StackingBuffModifier: usize = 0x778;
        pub const m_BuffEndingParticle: usize = 0x788;
        pub const m_WerewolfModel: usize = 0x868;
        pub const m_flModelScale: usize = 0x950;
        pub const m_HeroCardOverride: usize = 0x958;
    }

    // Parent: CCitadel_Modifier_RootVData
    pub mod CCitadel_Modifier_Priest_ImmobilizeVData {
        pub const flMaxDrag: usize = 0x758;
        pub const flSpeedForNoDrag: usize = 0x75c;
        pub const flSpeedForMaxDrag: usize = 0x760;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Operative_UmbrellaManeuver_VData {
        pub const m_AirHangModifier: usize = 0x1818;
        pub const m_LaunchParticle: usize = 0x1828;
        pub const m_ChannelParticle: usize = 0x1908;
        pub const m_ChannelStartParticle: usize = 0x19e8;
        pub const m_ShootParticle: usize = 0x1ac8;
        pub const m_ExplodeParticle: usize = 0x1ba8;
        pub const m_ExplodeSound: usize = 0x1c88;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CAbilityCadencePrimaryWeaponVData {
        pub const m_DebuffModifier: usize = 0x19c8;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityFealtyVData {
        pub const m_TargetModifier: usize = 0x1818;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_UltCombo {
        pub const m_hTargetComboModifier: usize = 0xf70;
        pub const m_flLastAttackTime: usize = 0xf88;
        pub const m_nAttackNum: usize = 0xf8c;
        pub const m_iBonusHealth: usize = 0x1110;
        pub const m_hTarget: usize = 0x1114;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_AerialAssualtVData {
        pub const m_WatcherModifier: usize = 0x18b8;
        pub const m_LaunchParticle: usize = 0x18c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CanDamageTier3Phase2 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BulletArmorReduction {
    }

    // Parent: CServerOnlyEntity
    pub mod CLogicalEntity {
    }

    // Parent: CCitadel_Pickup
    pub mod CCitadel_Pickup_NecroDeath {
    }

    // Parent: CPathParticleRope
    pub mod CCitadelZiplinePath {
        pub const m_iLaneNumber: usize = 0x588;
        pub const m_bUseBaseLaneColor: usize = 0x58c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierItemPickupTimerVData {
        pub const m_OnExpireParticle: usize = 0x750;
        pub const m_TimerToSilence: usize = 0x830;
        pub const m_SilenceDuration: usize = 0x834;
        pub const m_SilenceModifier: usize = 0x838;
        pub const m_bIsIdolPickup: usize = 0x848;
    }

    // Parent: CCitadelProjectile
    pub mod CCitadelTrackedProjectile {
        pub const m_eTrackedTargetType: usize = 0x860;
        pub const m_hTarget: usize = 0x864;
        pub const m_flTrackingStartTime: usize = 0x868;
        pub const m_flTrackingDampingCoefficient: usize = 0x86c;
        pub const m_flTrackingSpeed: usize = 0x870;
        pub const m_flTrackingDuration: usize = 0x874;
        pub const m_flTrackingWindowStart: usize = 0x878;
        pub const m_flTrackingWindowEnd: usize = 0x87c;
        pub const m_vLastValidPosition: usize = 0x880;
    }

    // Parent: CBaseModelEntity
    pub mod CItemGenericTriggerHelper {
        pub const m_hParentItem: usize = 0x780;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Necro_ZombieWall {
        pub const m_tWallDeployFinishTime: usize = 0xf74;
        pub const m_vecHitUnits: usize = 0xfa8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Fathom_ScaldingSpray_VData {
        pub const m_AuraModifier: usize = 0x1818;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Mirage_SandPhantom_ProcReady_VData {
        pub const m_ProcReadyParticle: usize = 0x750;
        pub const m_strProcReadySound: usize = 0x830;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_ViperVenomProcWatcherVData {
        pub const m_TracerParticle: usize = 0x780;
    }

    // Parent: CCitadel_Modifier_StunnedVData
    pub mod CModifierPsychicLiftVData {
        pub const m_SilenceModifier: usize = 0x830;
        pub const m_DisarmModifier: usize = 0x840;
        pub const m_SlowModifier: usize = 0x850;
        pub const m_LiftParticle: usize = 0x860;
        pub const m_ImpactParticle: usize = 0x940;
        pub const m_strImpactSound: usize = 0xa20;
        pub const m_flOccilateMaxDistance: usize = 0xa30;
        pub const m_flOccilateDegreesPerSecond: usize = 0xa34;
        pub const m_flRiseTime: usize = 0xa38;
        pub const m_flSlamTime: usize = 0xa3c;
        pub const m_flRiseAcc: usize = 0xa40;
        pub const m_flRiseMaxSpeed: usize = 0xa44;
        pub const m_flRiseDecayFracStart: usize = 0xa48;
        pub const m_flRiseDecayFracEnd: usize = 0xa4c;
        pub const m_flSlamAcc: usize = 0xa50;
        pub const m_flSlamMaxSpeed: usize = 0xa54;
        pub const m_flSlamImpactRadius: usize = 0xa58;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_CQC_Proc {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HealingPulse_Tracker {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ColdFrontAOE_VData {
        pub const m_TargetModifier: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MysticReverbExplosionVData {
        pub const m_DamageParticle: usize = 0x750;
        pub const m_SlowModifier: usize = 0x830;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier2Boss_RocketDamage_AuraDebuff {
    }

    // Parent: CAI_Component
    pub mod CAI_FreePass {
        pub const m_hTarget: usize = 0x50;
        pub const m_FreePassTimeRemaining: usize = 0x54;
        pub const m_FreePassMoveMonitor: usize = 0x58;
        pub const m_Params: usize = 0x68;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ItemPickupAura {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Airheart_Ult {
        pub const m_vecPackages: usize = 0xf70;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_MageWalkVData {
        pub const m_BubbleModifier: usize = 0x1818;
        pub const m_TurretModifier: usize = 0x1828;
        pub const m_strCastEffect: usize = 0x1838;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Intimidated {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierStormCloudVData {
        pub const m_ZapFriendly: usize = 0x750;
        pub const m_DrawFriendly: usize = 0x830;
        pub const m_AoEFriendly: usize = 0x910;
        pub const m_ZapEnemy: usize = 0x9f0;
        pub const m_DrawEnemy: usize = 0xad0;
        pub const m_AoEEnemy: usize = 0xbb0;
        pub const m_strChannelEndingSoonSound: usize = 0xc90;
        pub const m_strChannelFinishedSound: usize = 0xca0;
        pub const m_strDamageRecievedSound: usize = 0xcb0;
        pub const m_strAmbientZapSound: usize = 0xcc0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Item_SmokeBomb_PreCast {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BurstFire_Actuator {
        pub const m_bLastShotInFlight: usize = 0xd0;
        pub const m_bBonusTracked: usize = 0xd1;
        pub const m_nHitCounter: usize = 0xd4;
        pub const m_nTotalBurstFireShots: usize = 0xd8;
        pub const m_nInitialzedClipSize: usize = 0xdc;
        pub const m_nBonusPitch: usize = 0xe0;
        pub const m_bInitialized: usize = 0xe4;
        pub const m_nIncreasedBurstShotCount: usize = 0xe8;
        pub const m_flIntraBurstCycleTime: usize = 0xec;
        pub const m_flCycleTimePct: usize = 0xf0;
        pub const m_flMaxCycleTimeOverride: usize = 0xf4;
        pub const m_flMaxBurstFireCooldownOverride: usize = 0xf8;
    }

    // Parent: None
    pub mod AbilityResource_t {
        pub const m_flCurrentValue: usize = 0x8;
        pub const m_flPrevRegenRate: usize = 0xc;
        pub const m_flMaxValue: usize = 0x10;
        pub const m_flLatchTime: usize = 0x14;
        pub const m_flLatchValue: usize = 0x18;
    }

    // Parent: CBaseEntity
    pub mod CCitadelTrooperMinimap {
        pub const m_timeLastUpdate: usize = 0x4a0;
        pub const m_vecFOWEntities: usize = 0x4a8;
    }

    // Parent: CPlayerPawnComponent
    pub mod CPlayer_WeaponServices {
        pub const m_hMyWeapons: usize = 0x48;
        pub const m_hActiveWeapon: usize = 0x60;
        pub const m_hLastWeapon: usize = 0x64;
        pub const m_iAmmo: usize = 0x68;
        pub const m_bPreventWeaponPickup: usize = 0xa8;
    }

    // Parent: CRagdollProp
    pub mod CRagdollPropAttached {
        pub const m_boneIndexAttached: usize = 0xbe0;
        pub const m_ragdollAttachedObjectIndex: usize = 0xbe4;
        pub const m_attachmentPointBoneSpace: usize = 0xbe8;
        pub const m_attachmentPointRagdollSpace: usize = 0xbf4;
        pub const m_bShouldDetach: usize = 0xc00;
        pub const m_bShouldDeleteAttachedActivationRecord: usize = 0xc10;
    }

    // Parent: CBasePlatTrain
    pub mod CFuncPlat {
        pub const m_sNoise: usize = 0x828;
    }

    // Parent: CBaseModelEntity
    pub mod CBarnLight {
        pub const m_bEnabled: usize = 0x780;
        pub const m_nColorMode: usize = 0x784;
        pub const m_Color: usize = 0x788;
        pub const m_flColorTemperature: usize = 0x78c;
        pub const m_flBrightness: usize = 0x790;
        pub const m_flBrightnessScale: usize = 0x794;
        pub const m_nDirectLight: usize = 0x798;
        pub const m_nBakedShadowIndex: usize = 0x79c;
        pub const m_nLightPathUniqueId: usize = 0x7a0;
        pub const m_nLightMapUniqueId: usize = 0x7a4;
        pub const m_nLuminaireShape: usize = 0x7a8;
        pub const m_flLuminaireSize: usize = 0x7ac;
        pub const m_flLuminaireAnisotropy: usize = 0x7b0;
        pub const m_LightStyleString: usize = 0x7b8;
        pub const m_flLightStyleStartTime: usize = 0x7c0;
        pub const m_QueuedLightStyleStrings: usize = 0x7c8;
        pub const m_LightStyleEvents: usize = 0x7e0;
        pub const m_LightStyleTargets: usize = 0x7f8;
        pub const m_StyleEvent: usize = 0x810;
        pub const m_hLightCookie: usize = 0x890;
        pub const m_flShape: usize = 0x898;
        pub const m_flSoftX: usize = 0x89c;
        pub const m_flSoftY: usize = 0x8a0;
        pub const m_flSkirt: usize = 0x8a4;
        pub const m_flSkirtNear: usize = 0x8a8;
        pub const m_vSizeParams: usize = 0x8ac;
        pub const m_flRange: usize = 0x8b8;
        pub const m_vShear: usize = 0x8bc;
        pub const m_nBakeSpecularToCubemaps: usize = 0x8c8;
        pub const m_vBakeSpecularToCubemapsSize: usize = 0x8cc;
        pub const m_nCastShadows: usize = 0x8d8;
        pub const m_nShadowMapSize: usize = 0x8dc;
        pub const m_nShadowPriority: usize = 0x8e0;
        pub const m_bContactShadow: usize = 0x8e4;
        pub const m_bForceShadowsEnabled: usize = 0x8e5;
        pub const m_nBounceLight: usize = 0x8e8;
        pub const m_flBounceScale: usize = 0x8ec;
        pub const m_bDynamicBounce: usize = 0x8f0;
        pub const m_flMinRoughness: usize = 0x8f4;
        pub const m_vAlternateColor: usize = 0x8f8;
        pub const m_fAlternateColorBrightness: usize = 0x904;
        pub const m_nFog: usize = 0x908;
        pub const m_flFogStrength: usize = 0x90c;
        pub const m_nFogShadows: usize = 0x910;
        pub const m_flFogScale: usize = 0x914;
        pub const m_flFadeSizeStart: usize = 0x918;
        pub const m_flFadeSizeEnd: usize = 0x91c;
        pub const m_flShadowFadeSizeStart: usize = 0x920;
        pub const m_flShadowFadeSizeEnd: usize = 0x924;
        pub const m_bPrecomputedFieldsValid: usize = 0x928;
        pub const m_vPrecomputedBoundsMins: usize = 0x92c;
        pub const m_vPrecomputedBoundsMaxs: usize = 0x938;
        pub const m_vPrecomputedOBBOrigin: usize = 0x944;
        pub const m_vPrecomputedOBBAngles: usize = 0x950;
        pub const m_vPrecomputedOBBExtent: usize = 0x95c;
        pub const m_nPrecomputedSubFrusta: usize = 0x968;
        pub const m_vPrecomputedOBBOrigin0: usize = 0x96c;
        pub const m_vPrecomputedOBBAngles0: usize = 0x978;
        pub const m_vPrecomputedOBBExtent0: usize = 0x984;
        pub const m_vPrecomputedOBBOrigin1: usize = 0x990;
        pub const m_vPrecomputedOBBAngles1: usize = 0x99c;
        pub const m_vPrecomputedOBBExtent1: usize = 0x9a8;
        pub const m_vPrecomputedOBBOrigin2: usize = 0x9b4;
        pub const m_vPrecomputedOBBAngles2: usize = 0x9c0;
        pub const m_vPrecomputedOBBExtent2: usize = 0x9cc;
        pub const m_vPrecomputedOBBOrigin3: usize = 0x9d8;
        pub const m_vPrecomputedOBBAngles3: usize = 0x9e4;
        pub const m_vPrecomputedOBBExtent3: usize = 0x9f0;
        pub const m_vPrecomputedOBBOrigin4: usize = 0x9fc;
        pub const m_vPrecomputedOBBAngles4: usize = 0xa08;
        pub const m_vPrecomputedOBBExtent4: usize = 0xa14;
        pub const m_vPrecomputedOBBOrigin5: usize = 0xa20;
        pub const m_vPrecomputedOBBAngles5: usize = 0xa2c;
        pub const m_vPrecomputedOBBExtent5: usize = 0xa38;
        pub const m_bPvsModifyEntity: usize = 0xa44;
        pub const m_VisClusters: usize = 0xa48;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_HideoutIntro {
    }

    // Parent: CPointEntity
    pub mod CInstructorEventEntity {
        pub const m_iszName: usize = 0x4a0;
        pub const m_iszHintTargetEntity: usize = 0x4a8;
        pub const m_hTargetPlayer: usize = 0x4b0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Drifter_Darkness_VData {
        pub const m_CasterModifier: usize = 0x1818;
        pub const m_TargetModifier: usize = 0x1828;
        pub const m_TargetRevealModifier: usize = 0x1838;
        pub const m_OutOfCombatSprintCamera: usize = 0x1848;
        pub const m_CastParticle: usize = 0x1858;
        pub const m_CastDelayParticle: usize = 0x1938;
        pub const m_HitConfirmSound: usize = 0x1a18;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_AnthemBuffVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tengu_Urn {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ThrowSand {
        pub const m_vHitEnts: usize = 0x1070;
    }

    // Parent: CCitadel_Modifier_Intrinsic_BaseVData
    pub mod CCitadel_Modifier_EnchantedHolsters_Watcher_VData {
        pub const m_BuffModifier: usize = 0x750;
        pub const m_strRefreshStackSound: usize = 0x760;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_TechOverflowProcWatcherVData {
        pub const m_BuildUpModifier: usize = 0x780;
        pub const m_ProcModifier: usize = 0x790;
        pub const m_BuildupSuccessEffect: usize = 0x7a0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ApplyModifierOnDamageTaken {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadelModifierProjectilePitchingLoopSoundThinkerVData {
        pub const m_speedToPitchRemap: usize = 0x750;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierNonPlayerCameraSettingsVData {
        pub const m_flCameraSideOffset: usize = 0x750;
        pub const m_flCameraBackOffset: usize = 0x754;
        pub const m_flCameraHeightStanding: usize = 0x758;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_RootVData {
        pub const m_bStopMovementXY: usize = 0x750;
        pub const m_bStopMovementPosZ: usize = 0x751;
    }

    // Parent: CPointEntity
    pub mod CInfoHeroTestingPoint {
        pub const m_ePointType: usize = 0x4a0;
        pub const m_sMoveTarget: usize = 0x4a8;
        pub const m_HeroID: usize = 0x4b0;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Tier2Boss_RocketDamage_Aura {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Unstick {
        pub const m_vStartPos: usize = 0xd8;
    }

    // Parent: CPointEntity
    pub mod CPathCorner {
        pub const m_flWait: usize = 0x4a0;
        pub const m_flRadius: usize = 0x4a4;
        pub const m_OnPass: usize = 0x4a8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Fortuna_Ability02 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Perched_Predator {
        pub const m_hActiveProjectile: usize = 0x11f0;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityDashVData {
        pub const m_DashParticle: usize = 0x1818;
        pub const m_DownDashParticle: usize = 0x18f8;
        pub const m_WallJumpParticle: usize = 0x19d8;
        pub const m_strArriveSound: usize = 0x1ab8;
        pub const m_strStaminaDrainedSound: usize = 0x1ac8;
        pub const m_cameraSequenceGroundDashActivate: usize = 0x1ad8;
        pub const m_cameraSequenceAirDashActivate: usize = 0x1b60;
        pub const m_flMaxAngDiff: usize = 0x1be8;
        pub const m_flSlideCancelBlockerWindow: usize = 0x1bec;
        pub const m_flSlideLockoutTime: usize = 0x1bf0;
        pub const m_flGroundDashAirbornDrag: usize = 0x1bf4;
        pub const m_flGroundDashAirbornSpeedClamp: usize = 0x1bf8;
        pub const m_strGroundDashSound: usize = 0x1c00;
        pub const m_flAirDashEndVelocityScale: usize = 0x1c10;
        pub const m_flAirDashAccPct: usize = 0x1c14;
        pub const m_flDuringDrag: usize = 0x1c18;
        pub const m_flAirSpeedForMaxDrag: usize = 0x1c1c;
        pub const m_flAirSpeedForMinDrag: usize = 0x1c20;
        pub const m_flPostMaxDrag: usize = 0x1c24;
        pub const m_flPostDragDuration: usize = 0x1c28;
        pub const m_flDownwardAirDashSpeed: usize = 0x1c2c;
        pub const m_flParryCancelSpeedScale: usize = 0x1c30;
        pub const m_flParryCancelSlideDuration: usize = 0x1c34;
        pub const m_flParryCancelSlideFrictionPercent: usize = 0x1c38;
        pub const m_flParryCancelAirGlideDuration: usize = 0x1c3c;
        pub const m_flParryCancelAirGravityScale: usize = 0x1c40;
        pub const m_strAirDashSound: usize = 0x1c48;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_DiminishingSlowVData {
    }

    // Parent: CNPC_NeutralSinnerSacrificeVData
    pub mod CNPC_NeutralSinnerSacrificeHideoutVData {
        pub const m_sLocHint01: usize = 0x18f0;
        pub const m_sLocHint02: usize = 0x18f8;
        pub const m_flRespawnTime: usize = 0x1900;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerSndSosOpvar {
        pub const m_hTouchingPlayers: usize = 0x8e0;
        pub const m_flPosition: usize = 0x8f8;
        pub const m_flCenterSize: usize = 0x904;
        pub const m_flMinVal: usize = 0x908;
        pub const m_flMaxVal: usize = 0x90c;
        pub const m_opvarName: usize = 0x910;
        pub const m_stackName: usize = 0x918;
        pub const m_operatorName: usize = 0x920;
        pub const m_bVolIs2D: usize = 0x928;
        pub const m_opvarNameChar: usize = 0x929;
        pub const m_stackNameChar: usize = 0xa29;
        pub const m_operatorNameChar: usize = 0xb29;
        pub const m_VecNormPos: usize = 0xc2c;
        pub const m_flNormCenterSize: usize = 0xc38;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Rutger_ForceField_Aura {
    }

    // Parent: CCitadelBaseDashCastAbility
    pub mod CCitadel_Ability_Cadence_SilenceContraptions {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Fencer_Ultimate_Caster {
        pub const m_bUseTrail: usize = 0xd0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_StaticChargeVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_StaticChargeModifier: usize = 0x18f8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Backstabber_VData {
        pub const m_GlowModifier: usize = 0x750;
        pub const m_BuffModifier: usize = 0x760;
        pub const m_strDamageTickSound: usize = 0x770;
    }

    // Parent: CPulseCell_BaseRequirement
    pub mod CPulseCell_LimitCount {
        pub const m_nLimitCount: usize = 0x48;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Step_CallExternalMethod {
        pub const m_MethodName: usize = 0x48;
        pub const m_GameBlackboard: usize = 0x58;
        pub const m_ExpectedArgs: usize = 0x68;
        pub const m_nAsyncCallMode: usize = 0x78;
        pub const m_OnFinished: usize = 0x80;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_MobileResupply {
        pub const m_hAbility: usize = 0xc4c;
        pub const m_bFloating: usize = 0xc50;
    }

    // Parent: CBaseAnimGraph
    pub mod CPointCommentaryNode {
        pub const m_iszPreCommands: usize = 0xa90;
        pub const m_iszPostCommands: usize = 0xa98;
        pub const m_iszCommentaryFile: usize = 0xaa0;
        pub const m_iszViewTarget: usize = 0xaa8;
        pub const m_hViewTarget: usize = 0xab0;
        pub const m_hViewTargetAngles: usize = 0xab4;
        pub const m_iszViewPosition: usize = 0xab8;
        pub const m_hViewPosition: usize = 0xac0;
        pub const m_hViewPositionMover: usize = 0xac4;
        pub const m_bPreventMovement: usize = 0xac8;
        pub const m_bUnderCrosshair: usize = 0xac9;
        pub const m_bUnstoppable: usize = 0xaca;
        pub const m_flFinishedTime: usize = 0xacc;
        pub const m_vecFinishOrigin: usize = 0xad0;
        pub const m_vecOriginalAngles: usize = 0xadc;
        pub const m_vecFinishAngles: usize = 0xae8;
        pub const m_bPreventChangesWhileMoving: usize = 0xaf4;
        pub const m_bDisabled: usize = 0xaf5;
        pub const m_vecTeleportOrigin: usize = 0xaf8;
        pub const m_flAbortedPlaybackAt: usize = 0xb04;
        pub const m_pOnCommentaryStarted: usize = 0xb08;
        pub const m_pOnCommentaryStopped: usize = 0xb20;
        pub const m_bActive: usize = 0xb38;
        pub const m_flStartTime: usize = 0xb3c;
        pub const m_flStartTimeInCommentary: usize = 0xb40;
        pub const m_iszTitle: usize = 0xb48;
        pub const m_iszSpeakers: usize = 0xb50;
        pub const m_iNodeNumber: usize = 0xb58;
        pub const m_iNodeNumberMax: usize = 0xb5c;
        pub const m_bListenedTo: usize = 0xb60;
    }

    // Parent: CRotButton
    pub mod CMomentaryRotButton {
        pub const m_Position: usize = 0x900;
        pub const m_OnUnpressed: usize = 0x920;
        pub const m_OnFullyOpen: usize = 0x938;
        pub const m_OnFullyClosed: usize = 0x950;
        pub const m_OnReachedPosition: usize = 0x968;
        pub const m_lastUsed: usize = 0x980;
        pub const m_start: usize = 0x984;
        pub const m_end: usize = 0x990;
        pub const m_IdealYaw: usize = 0x99c;
        pub const m_sNoise: usize = 0x9a0;
        pub const m_bUpdateTarget: usize = 0x9a8;
        pub const m_direction: usize = 0x9ac;
        pub const m_returnSpeed: usize = 0x9b0;
        pub const m_flStartPosition: usize = 0x9b4;
    }

    // Parent: CLogicalEntity
    pub mod CSceneListManager {
        pub const m_hListManagers: usize = 0x4a0;
        pub const m_iszScenes: usize = 0x4b8;
        pub const m_hScenes: usize = 0x538;
    }

    // Parent: CPointEntity
    pub mod CEnvTilt {
        pub const m_Duration: usize = 0x4a0;
        pub const m_Radius: usize = 0x4a4;
        pub const m_TiltTime: usize = 0x4a8;
        pub const m_stopTime: usize = 0x4ac;
    }

    // Parent: CEnvSoundscape
    pub mod CEnvSoundscapeTriggerable {
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CCitadel_Hideout_BallVData {
        pub const m_flModelScale: usize = 0x28;
        pub const m_flBallTouchRadius: usize = 0x2c;
        pub const m_flForceMult: usize = 0x30;
        pub const m_flForceMultBullet: usize = 0x34;
        pub const m_flMaxDistanceAway: usize = 0x38;
        pub const m_flDamagePositionOffset: usize = 0x3c;
        pub const m_strKickSoundName: usize = 0x40;
        pub const m_strGoalSoundName: usize = 0x50;
        pub const m_flMinPlayerBallTouchForce: usize = 0x60;
        pub const m_flMinPlayerLightMeleeForce: usize = 0x64;
        pub const m_flPlayerLightMeleeChipAngle: usize = 0x68;
        pub const m_flMinPlayerHeavyMeleeForce: usize = 0x6c;
        pub const m_flForceMultPlayer: usize = 0x70;
        pub const m_flInheritPlayerSpeedMultiplier: usize = 0x74;
        pub const m_ForceVSCameraPitch: usize = 0x78;
        pub const m_ConsecutiveJugglesVsRandomness: usize = 0xb8;
        pub const fl_MaxExtraGravityScale: usize = 0xf8;
        pub const m_nMinJugglesBeforeDisplay: usize = 0xfc;
        pub const m_BallApexParticle: usize = 0x100;
        pub const m_strBallApexSound: usize = 0x1e0;
        pub const m_JuggleRunEnded: usize = 0x1f0;
        pub const m_strJuggleRunEnded: usize = 0x2d0;
        pub const m_hModel: usize = 0x2e0;
        pub const m_AmbientParticle: usize = 0x3c0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_FearVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_strProcSound: usize = 0x1828;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Necro_Ghoul_Explode {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_PunkGoat_Ult {
        pub const m_nBatChargingFX: usize = 0xf70;
        pub const m_nSlamTravelType: usize = 0xf88;
        pub const m_flDistanceToTravel: usize = 0xf8c;
        pub const m_bHoldingAbilityButton: usize = 0xf90;
        pub const m_bFirstFrameGoingDown: usize = 0xf91;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Thumper_Ability_2 {
        pub const m_vLastPosition: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ClusterGrenade_Debuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_DamageAmp {
        pub const m_flDamageAmp: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Chrono_KineticCarbine {
        pub const m_bShotAnimPlayed: usize = 0xd0;
        pub const m_nBulletCount: usize = 0xd4;
        pub const m_flElapsedPct: usize = 0xd8;
        pub const m_hTimeWarp: usize = 0xdc;
        pub const m_nFullyChargedParticle: usize = 0xe0;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_CloakingDevice_Active_Ambush {
        pub const m_nAmbushParticle: usize = 0xd0;
    }

    // Parent: CDynamicProp
    pub mod CCitadel_NewYears_Fireworks {
        pub const m_unShowDurationSeconds: usize = 0xcd0;
        pub const m_unShowDelaySeconds: usize = 0xcd4;
        pub const m_flFireworkIntervalMin: usize = 0xcd8;
        pub const m_flFireworkIntervalMax: usize = 0xcdc;
        pub const m_sFireworkParticle1: usize = 0xce0;
        pub const m_sFireworkParticle2: usize = 0xce8;
        pub const m_sFireworkParticle3: usize = 0xcf0;
        pub const m_sFireworkParticle4: usize = 0xcf8;
        pub const m_sFireworkParticle5: usize = 0xd00;
        pub const m_sFireworkParticle6: usize = 0xd08;
        pub const m_sFireworkParticle7: usize = 0xd10;
        pub const m_sFireworkParticle8: usize = 0xd18;
        pub const m_iszSoundName: usize = 0xd20;
        pub const m_flStartSoundVerticalOffset: usize = 0xd28;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_Cadence_GrandFinaleAOEVData {
        pub const m_AuraParticle: usize = 0x7a8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_Hero_Testing_Damage_Aura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ItemPickupAuraTarget {
    }

    // Parent: CAI_Component
    pub mod CAI_Behavior {
        pub const m_bActive: usize = 0x50;
        pub const m_bOverrode: usize = 0x51;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncMover {
        pub const m_iszPathName: usize = 0x780;
        pub const m_hPathMover: usize = 0x788;
        pub const m_hPrevPathMover: usize = 0x78c;
        pub const m_iszPathNodeStart: usize = 0x790;
        pub const m_iszPathNodeEnd: usize = 0x798;
        pub const m_bIgnoreEndNode: usize = 0x7a0;
        pub const m_eMoveType: usize = 0x7a4;
        pub const m_bIsReversing: usize = 0x7a8;
        pub const m_flStartSpeed: usize = 0x7ac;
        pub const m_flPathLocation: usize = 0x7b0;
        pub const m_flT: usize = 0x7b4;
        pub const m_nCurrentNodeIndex: usize = 0x7b8;
        pub const m_nPreviousNodeIndex: usize = 0x7bc;
        pub const m_eSolidType: usize = 0x7c0;
        pub const m_bIsMoving: usize = 0x7c1;
        pub const m_flTimeToReachMaxSpeed: usize = 0x7c4;
        pub const m_flDistanceToReachMaxSpeed: usize = 0x7c8;
        pub const m_flTimeToReachZeroSpeed: usize = 0x7cc;
        pub const m_flComputedDistanceToReachMaxSpeed: usize = 0x7d0;
        pub const m_flComputedDistanceToReachZeroSpeed: usize = 0x7d4;
        pub const m_flStartCurveScale: usize = 0x7d8;
        pub const m_flStopCurveScale: usize = 0x7dc;
        pub const m_flDistanceToReachZeroSpeed: usize = 0x7e0;
        pub const m_flTimeMovementStart: usize = 0x7e4;
        pub const m_flTimeMovementStop: usize = 0x7e8;
        pub const m_hStopAtNode: usize = 0x7ec;
        pub const m_flPathLocationToBeginStop: usize = 0x7f0;
        pub const m_flPathLocationStart: usize = 0x7f4;
        pub const m_flBeginStopT: usize = 0x7f8;
        pub const m_iszStartForwardSound: usize = 0x800;
        pub const m_iszLoopForwardSound: usize = 0x808;
        pub const m_iszStopForwardSound: usize = 0x810;
        pub const m_iszStartReverseSound: usize = 0x818;
        pub const m_iszLoopReverseSound: usize = 0x820;
        pub const m_iszStopReverseSound: usize = 0x828;
        pub const m_iszArriveAtDestinationSound: usize = 0x830;
        pub const m_OnMovementEnd: usize = 0x850;
        pub const m_bStartAtClosestPoint: usize = 0x868;
        pub const m_bStartAtEnd: usize = 0x869;
        pub const m_bStartFollowingClosestMover: usize = 0x86a;
        pub const m_eOrientationUpdate: usize = 0x86c;
        pub const m_flTimeStartOrientationChange: usize = 0x870;
        pub const m_flTimeToBlendToNewOrientation: usize = 0x874;
        pub const m_flDurationBlendToNewOrientationRan: usize = 0x878;
        pub const m_bCreateMovableNavMesh: usize = 0x87c;
        pub const m_bAllowMovableNavMeshDockingOnEntireEntity: usize = 0x87d;
        pub const m_OnNodePassed: usize = 0x880;
        pub const m_iszOrientationMatchEntityName: usize = 0x8a0;
        pub const m_hOrientationMatchEntity: usize = 0x8a8;
        pub const m_flTimeToTraverseToNextNode: usize = 0x8ac;
        pub const m_vLerpToNewPosStartInPathEntitySpace: usize = 0x8b0;
        pub const m_vLerpToNewPosEndInPathEntitySpace: usize = 0x8bc;
        pub const m_flLerpToPositionT: usize = 0x8c8;
        pub const m_flLerpToPositionDeltaT: usize = 0x8cc;
        pub const m_OnLerpToPositionComplete: usize = 0x8d0;
        pub const m_bIsPaused: usize = 0x8e8;
        pub const m_eTransitionedToPathNodeAction: usize = 0x8ec;
        pub const m_qTransitionSourceOrientation: usize = 0x8f0;
        pub const m_nDelayedTeleportToNode: usize = 0x900;
        pub const m_bIsImGuiLogging: usize = 0x904;
        pub const m_hFollowEntity: usize = 0x908;
        pub const m_flFollowDistance: usize = 0x90c;
        pub const m_flFollowMinimumSpeed: usize = 0x910;
        pub const m_flCurFollowEntityT: usize = 0x914;
        pub const m_flCurFollowSpeed: usize = 0x918;
        pub const m_strOrientationFaceEntityName: usize = 0x920;
        pub const m_hOrientationFaceEntity: usize = 0x928;
        pub const m_OnStart: usize = 0x930;
        pub const m_OnStartForward: usize = 0x948;
        pub const m_OnStartReverse: usize = 0x960;
        pub const m_OnStop: usize = 0x978;
        pub const m_OnStopped: usize = 0x990;
        pub const m_bNextNodeReturnsCurrent: usize = 0x9a8;
        pub const m_bStartedMoving: usize = 0x9a9;
        pub const m_eFollowEntityDirection: usize = 0x9c8;
        pub const m_hFollowMover: usize = 0x9cc;
        pub const m_iszFollowMoverEntityName: usize = 0x9d0;
        pub const m_flFollowMoverDistance: usize = 0x9d8;
        pub const m_flFollowMoverCalculatedDistance: usize = 0x9dc;
        pub const m_flFollowMoverSpringStrength: usize = 0x9e0;
        pub const m_bFollowConstraintsInitialized: usize = 0x9e4;
        pub const m_eFollowConstraint: usize = 0x9e8;
        pub const m_flFollowMoverSpeed: usize = 0x9ec;
        pub const m_flFollowMoverVelocity: usize = 0x9f0;
        pub const m_nTickMovementRan: usize = 0x9f4;
    }

    // Parent: CNPC_Neutral_WeakpointVData
    pub mod CNPC_Neutral_Flying_WeakpointVData {
        pub const m_flFrequencyY: usize = 0x218;
        pub const m_flMinY: usize = 0x21c;
        pub const m_flMaxY: usize = 0x220;
        pub const m_flFrequencyR: usize = 0x224;
        pub const m_flOrbitRadius: usize = 0x228;
        pub const m_flOffSetScaler: usize = 0x22c;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Werewolf_LeapingVData {
        pub const m_ChargeParticle: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Necro_CoffinVData {
        pub const m_BuffModifier: usize = 0x1818;
        pub const m_DebuffModifier: usize = 0x1828;
        pub const m_AoEParticle: usize = 0x1838;
        pub const m_HitParticle: usize = 0x1918;
        pub const m_strExplodeSound: usize = 0x19f8;
        pub const m_cameraSequenceInSatchel: usize = 0x1a08;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Necro_SpawnZombies_AreaVData {
        pub const m_SummonParticle: usize = 0x750;
        pub const m_SummonModifier: usize = 0x830;
        pub const m_SummonDecayModifier: usize = 0x840;
        pub const m_SpawningInModifier: usize = 0x850;
        pub const m_bDebug: usize = 0x860;
        pub const m_flRandomSpawnOffsetPerSummon: usize = 0x864;
        pub const m_flZombieSpawnVerticalOffset: usize = 0x868;
        pub const m_flZombieSpawnForwardOffset: usize = 0x86c;
        pub const m_flZombieSpawnNavMeshSearchDistance: usize = 0x870;
        pub const m_flForwardWalkDistance: usize = 0x874;
        pub const m_flWalkDestinationRandomness: usize = 0x878;
        pub const m_flSpawningInTime: usize = 0x87c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Bookworm_KnightChargeVData {
        pub const m_KnightChargeChannelParticle: usize = 0x1818;
        pub const m_KnightChargeCastParticle: usize = 0x18f8;
        pub const m_strKnightChargeExplosionSound: usize = 0x19d8;
        pub const m_strCastDelayLocalPlayerSound: usize = 0x19e8;
        pub const m_strExpireSound: usize = 0x19f8;
        pub const m_BuffModifier: usize = 0x1a08;
        pub const m_DebuffModifier: usize = 0x1a18;
        pub const m_flNavMeshSearchRange: usize = 0x1a28;
        pub const m_flNavMeshSearchForwardOffset: usize = 0x1a2c;
        pub const m_flObstacleAvoidanceAmount: usize = 0x1a30;
        pub const m_flGravity: usize = 0x1a34;
        pub const m_flGroundCheckDistance: usize = 0x1a38;
        pub const m_flGroundSnapDistance: usize = 0x1a3c;
        pub const m_flJumpSpeed: usize = 0x1a40;
        pub const m_flTimescale: usize = 0x1a44;
        pub const m_flHintRecoveryStrength: usize = 0x1a48;
        pub const m_worldPositionHeightCurveX: usize = 0x1a50;
        pub const m_worldPositionHeightCurveY: usize = 0x1a90;
        pub const m_flDestroyLeashDistance: usize = 0x1ad0;
        pub const m_flDestroyMapDistance: usize = 0x1ad4;
        pub const m_flQAngleSpringConstant: usize = 0x1ad8;
        pub const m_flMiniHopSpeedMin: usize = 0x1adc;
        pub const m_flMiniHopSpeedMax: usize = 0x1ae0;
        pub const m_flMinPitch: usize = 0x1ae4;
        pub const m_flMaxPitch: usize = 0x1ae8;
        pub const m_bDebug: usize = 0x1aec;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Drifter_PrimaryWeapon {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Operative_Blindside {
        pub const m_vLaunchPosition: usize = 0xf70;
        pub const m_qLaunchAngle: usize = 0xf7c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_MagicBolt {
        pub const m_vecDeployedProjectiles: usize = 0xf78;
        pub const m_iCurrentRedirects: usize = 0xf90;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Fathom_ReefdwellerHarpoon_VData {
        pub const m_DetachBuff: usize = 0x1818;
        pub const m_strSwapStarted: usize = 0x1828;
        pub const m_cameraSequenceFlying: usize = 0x1838;
        pub const m_flAirSpeedMax: usize = 0x18c0;
        pub const m_flFallSpeedMax: usize = 0x18c4;
        pub const m_flAirDrag: usize = 0x18c8;
        pub const m_flInitialSlowSpeed: usize = 0x18cc;
        pub const m_flInitialSpeedBias: usize = 0x18d0;
        pub const m_flMaxSurfacePitch: usize = 0x18d4;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityRapidFireVData {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierRapidFireAirJuggleVData {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_CrowdControl {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Low_Health_GlowVData {
        pub const m_GlowParticle: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_UtilityUpgrade_RocketBootsVData {
        pub const m_LaunchParticle: usize = 0x18b8;
        pub const m_InAirWatcherModifier: usize = 0x1998;
        pub const m_flMinHeadClearance: usize = 0x19a8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_ArmorUpgrade_AblativeCoatVData {
        pub const m_RestoreEffectModifier: usize = 0x18b8;
        pub const m_OnTakeDamageEffectModifier: usize = 0x18c8;
        pub const m_OnBreakEffectModifier: usize = 0x18d8;
        pub const m_ResistBuffModifier: usize = 0x18e8;
        pub const m_flOnTakeDamageEffectDuration: usize = 0x18f8;
        pub const m_flOnBreakEffectDuration: usize = 0x18fc;
        pub const m_flOnRestoreEffectDuration: usize = 0x1900;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_EtherealBullets_BulletBuff {
        pub const m_iHitCount: usize = 0xd0;
        pub const m_shotProced: usize = 0xd4;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FocusLens_Damage {
        pub const m_flDamageDealt: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Tier3Boss_Base
    pub mod CCitadel_Modifier_Tier3Boss_LaserBeam {
        pub const m_vStart: usize = 0xd4;
        pub const m_vEnd: usize = 0xe0;
        pub const m_vPrevEnd: usize = 0xec;
        pub const m_flAngleBetweenTrace: usize = 0xf8;
        pub const m_flNextDamageTick: usize = 0xfc;
        pub const m_flNextAuraDropTick: usize = 0x100;
        pub const m_vecEntitiesHit: usize = 0x108;
        pub const m_flLastShakeTime: usize = 0x120;
        pub const m_vecBeamTarget: usize = 0x124;
        pub const m_flLastBeamUpdateTime: usize = 0x130;
        pub const m_vecEnemyPosition: usize = 0x134;
        pub const m_bPreviewMode: usize = 0x140;
        pub const m_iAttachmentIndex: usize = 0x144;
        pub const m_hAttachment: usize = 0x148;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierTier3BossLaserBeamVData {
        pub const m_GroundAuraModifier: usize = 0x750;
        pub const m_flAuraDropTickRate: usize = 0x760;
        pub const m_AmberLaserBeamEffect: usize = 0x768;
        pub const m_AmberLaserPreviewEffect: usize = 0x848;
        pub const m_SapphLaserBeamEffect: usize = 0x928;
        pub const m_SapphLaserPreviewEffect: usize = 0xa08;
        pub const m_AmberLaserChargingEffect: usize = 0xae8;
        pub const m_SapphLaserChargingEffect: usize = 0xbc8;
        pub const m_strLaserLoopSound: usize = 0xca8;
        pub const m_strLaserFireSound: usize = 0xcb8;
        pub const m_strLaserHitSound: usize = 0xcc8;
        pub const m_flLaserDPSToPlayers: usize = 0xcd8;
        pub const m_flLaserDPSMaxHealth: usize = 0xcdc;
        pub const m_flLaserDPSToNPCs: usize = 0xce0;
        pub const m_flLaserDPSTickRate: usize = 0xce4;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Jump {
        pub const m_flLastTimeOnZipLine: usize = 0xf70;
        pub const m_flLastOnGroundTime: usize = 0xf74;
        pub const m_flPhaseStartTime: usize = 0xf78;
        pub const m_flJumpTime: usize = 0xf7c;
        pub const m_flWallJumpFatigueStartTime: usize = 0xf80;
        pub const m_flLastThinkTime: usize = 0xf84;
        pub const m_vCurrentWallNormal: usize = 0xf88;
        pub const m_vLastWallCollidedWithNormal: usize = 0xf94;
        pub const m_vLastValidWallJumpNormal: usize = 0xfa0;
        pub const m_vLastValidWallJumpNormal_PlayerPosition: usize = 0xfac;
        pub const m_flLastWallJumpTime: usize = 0xfb8;
        pub const m_vWallJumpFacingDir: usize = 0xfbc;
        pub const m_eWallJumpFacing: usize = 0xfc8;
        pub const m_flLastWallJumpFatigueStrength: usize = 0xfcc;
        pub const m_LastJumpType: usize = 0xfd0;
        pub const m_bShouldCreateAirJumpEffects: usize = 0xfd1;
        pub const m_flDoubleJumpFailTime: usize = 0xfd4;
        pub const m_eDoubleJumpFailReason: usize = 0xfd8;
        pub const m_vWallJumpNormalUsed: usize = 0xfdc;
        pub const m_flGroundDashJumpStartTime: usize = 0x12e8;
        pub const m_flGroundDashJumpEndTime: usize = 0x1300;
        pub const m_bJumped: usize = 0x1318;
        pub const m_bCanDashJump: usize = 0x1319;
        pub const m_nDesiredAirJumpCount: usize = 0x131c;
        pub const m_nExecutedAirJumpCount: usize = 0x1320;
        pub const m_bInSlideJump: usize = 0x1324;
        pub const m_nConsecutiveAirJumps: usize = 0x1325;
        pub const m_nConsecutiveWallJumps: usize = 0x1326;
        pub const m_flLateralInputSuppressEndTime: usize = 0x1328;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DamageResistance {
        pub const m_flShieldHealth: usize = 0xd0;
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_ConeWaveProjectile {
        pub const m_vInitialCastPosition: usize = 0x250;
        pub const m_flProjectileSpeed: usize = 0x25c;
        pub const m_vecHitEntities: usize = 0x260;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ReloadSpeedVData {
        pub const m_flReloadSpeedPercent: usize = 0x750;
        pub const m_bDestroyAfterReload: usize = 0x754;
    }

    // Parent: CBreakableProp
    pub mod CPhysicsProp {
        pub const m_MotionEnabled: usize = 0xc30;
        pub const m_OnAwakened: usize = 0xc48;
        pub const m_OnAwake: usize = 0xc60;
        pub const m_OnAsleep: usize = 0xc78;
        pub const m_OnPlayerUse: usize = 0xc90;
        pub const m_OnOutOfWorld: usize = 0xca8;
        pub const m_OnPlayerPickup: usize = 0xcc0;
        pub const m_bForceNavIgnore: usize = 0xcd8;
        pub const m_bNoNavmeshBlocker: usize = 0xcd9;
        pub const m_bForceNpcExclude: usize = 0xcda;
        pub const m_massScale: usize = 0xcdc;
        pub const m_buoyancyScale: usize = 0xce0;
        pub const m_damageType: usize = 0xce4;
        pub const m_damageToEnableMotion: usize = 0xce8;
        pub const m_flForceToEnableMotion: usize = 0xcec;
        pub const m_bThrownByPlayer: usize = 0xcf0;
        pub const m_bDroppedByPlayer: usize = 0xcf1;
        pub const m_bTouchedByPlayer: usize = 0xcf2;
        pub const m_bFirstCollisionAfterLaunch: usize = 0xcf3;
        pub const m_bHasBeenAwakened: usize = 0xcf4;
        pub const m_bIsOverrideProp: usize = 0xcf5;
        pub const m_flLastBurn: usize = 0xcf8;
        pub const m_nDynamicContinuousContactBehavior: usize = 0xcfc;
        pub const m_fNextCheckDisableMotionContactsTime: usize = 0xd00;
        pub const m_iInitialGlowState: usize = 0xd04;
        pub const m_nGlowRange: usize = 0xd08;
        pub const m_nGlowRangeMin: usize = 0xd0c;
        pub const m_glowColor: usize = 0xd10;
        pub const m_bShouldAutoConvertBackFromDebris: usize = 0xd14;
        pub const m_bMuteImpactEffects: usize = 0xd15;
        pub const m_nNavObstacleType: usize = 0xd18;
        pub const m_bUpdateNavWhenMoving: usize = 0xd1c;
        pub const m_bForceNavObstacleCut: usize = 0xd1d;
        pub const m_bAllowObstacleConvexHullMerging: usize = 0xd1e;
        pub const m_bAcceptDamageFromHeldObjects: usize = 0xd1f;
        pub const m_bEnableUseOutput: usize = 0xd20;
        pub const m_CrateType: usize = 0xd24;
        pub const m_strItemClass: usize = 0xd28;
        pub const m_nItemCount: usize = 0xd48;
        pub const m_bRemovableForAmmoBalancing: usize = 0xd58;
        pub const m_bAwake: usize = 0xd59;
        pub const m_bAttachedToReferenceFrame: usize = 0xd5a;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncNavObstruction {
        pub const m_bDisabled: usize = 0x798;
        pub const m_bUseAsyncObstacleUpdate: usize = 0x799;
    }

    // Parent: CPhysConstraint
    pub mod CPhysWheelConstraint {
        pub const m_flSuspensionFrequency: usize = 0x500;
        pub const m_flSuspensionDampingRatio: usize = 0x504;
        pub const m_flSuspensionHeightOffset: usize = 0x508;
        pub const m_bEnableSuspensionLimit: usize = 0x50c;
        pub const m_flMinSuspensionOffset: usize = 0x510;
        pub const m_flMaxSuspensionOffset: usize = 0x514;
        pub const m_bEnableSteeringLimit: usize = 0x518;
        pub const m_flMinSteeringAngle: usize = 0x51c;
        pub const m_flMaxSteeringAngle: usize = 0x520;
        pub const m_flSteeringAxisFriction: usize = 0x524;
        pub const m_flSpinAxisFriction: usize = 0x528;
        pub const m_hSteeringMimicsEntity: usize = 0x52c;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_BearTrapVData {
        pub const m_ArmedParticle: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x18f8;
        pub const m_strExpiredSound: usize = 0x19d8;
        pub const m_strDestroyedSound: usize = 0x19e8;
        pub const m_strArmSound: usize = 0x19f8;
        pub const m_strProjBounceSound: usize = 0x1a08;
        pub const m_strProjThrowLoopSound: usize = 0x1a18;
        pub const m_strProjArmedLoopSound: usize = 0x1a28;
        pub const m_TetherModifier: usize = 0x1a38;
        pub const m_DebuffModifier: usize = 0x1a48;
        pub const m_flVerticalSpawnOffset: usize = 0x1a58;
        pub const m_flHorizontalSpawnOffset: usize = 0x1a5c;
        pub const m_flDropDownRate: usize = 0x1a60;
        pub const m_flClimbHeight: usize = 0x1a64;
        pub const m_flDistanceAboveGround: usize = 0x1a68;
        pub const m_flDeceleration: usize = 0x1a6c;
        pub const m_flMinSpeedToArm: usize = 0x1a70;
        pub const m_flReflectSpeedReductionRatio: usize = 0x1a74;
        pub const m_flGroundYawSpeedRatio: usize = 0x1a78;
        pub const m_flAirYawSpeedRatio: usize = 0x1a7c;
        pub const m_flAirPitchSpeedRatio: usize = 0x1a80;
        pub const m_flAirRollSpeedRatio: usize = 0x1a84;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frank_Zombie {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityHornetLeapVData {
        pub const m_flChannelingAirDrag: usize = 0x1818;
        pub const m_flChannelingMaxFallSpeed: usize = 0x181c;
        pub const m_flVerticalMoveSpeedPercent: usize = 0x1820;
        pub const m_flAirDrag: usize = 0x1824;
        pub const m_flAirAcceleration: usize = 0x1828;
        pub const m_flLaunchAirDrag: usize = 0x182c;
        pub const m_flLaunchTime: usize = 0x1830;
        pub const m_flMoveSpeedAboveBaseScale: usize = 0x1834;
        pub const m_LeapModifier: usize = 0x1838;
        pub const m_KillCheckModifier: usize = 0x1848;
        pub const m_DustParticle: usize = 0x1858;
        pub const m_TrailParticle: usize = 0x1938;
        pub const m_CastParticle: usize = 0x1a18;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_LifeDrainVData {
        pub const m_LifeDrainTargetModifier: usize = 0x1818;
        pub const m_LifeDrainCasterModifier: usize = 0x1828;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifierVData
    pub mod CCitadel_Item_SpiritSap_VData {
        pub const m_DebuffModifier: usize = 0x19c8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DebuffImmunity {
    }

    // Parent: CBaseEntity
    pub mod CSkyboxReference {
        pub const m_worldGroupId: usize = 0x4a0;
        pub const m_hSkyCamera: usize = 0x4a4;
    }

    // Parent: CCitadel_Item
    pub mod CItem_RestorativeLocket {
        pub const m_nNumStacks: usize = 0x11f8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_TechUpgrade_CorpseExplosion {
    }

    // Parent: CBaseEntity
    pub mod CPointPulse {
    }

    // Parent: CCitadel_Pickup_VData
    pub mod CCitadel_BreakablePropHealthPickupVData {
        pub const m_ParticleAOEHeal: usize = 0x9d8;
        pub const m_flHealMaxHealthPercent: usize = 0xab8;
        pub const m_flHealFixed: usize = 0xac8;
        pub const m_flMissingPctHeal: usize = 0xad8;
        pub const m_flRegenMaxHealthPercent: usize = 0xae8;
        pub const m_flRegenFixed: usize = 0xaf8;
        pub const m_flMissingPctRegen: usize = 0xb08;
        pub const m_bUseFixedDuration: usize = 0xb18;
        pub const m_flRegenDuration: usize = 0xb1c;
        pub const m_flRegenDurationTroopers: usize = 0xb20;
        pub const m_flRegenTrooperMulti: usize = 0xb24;
        pub const m_flRegenHPS: usize = 0xb28;
        pub const m_RegenModifier: usize = 0xb30;
        pub const m_flAOERadius: usize = 0xb40;
        pub const m_AOETargetTypes: usize = 0xb44;
        pub const m_AOETargetFlags: usize = 0xb48;
        pub const m_AOELOSCheckType: usize = 0xb4c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Teleport {
        pub const m_vDest: usize = 0xd0;
        pub const m_angDestAngles: usize = 0xdc;
        pub const m_vDestVelocity: usize = 0xe8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifier_Mirage_Tornado_Lift_VData {
        pub const m_HoldInPlaceModifier: usize = 0x750;
        pub const m_LiftParticle: usize = 0x760;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Nano_PrimaryWeaponVData {
        pub const m_EscapeModifier: usize = 0x19c8;
        pub const m_SlashEffectParticle: usize = 0x19d8;
        pub const m_strExpireSound: usize = 0x1ab8;
        pub const m_cameraSequenceInShadow: usize = 0x1ac8;
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierIcePathVData {
        pub const m_FrontModel: usize = 0x750;
        pub const m_BodyModel: usize = 0x830;
        pub const m_GroundParticle: usize = 0x910;
        pub const m_FloatingParticle: usize = 0x9f0;
        pub const m_IcePathBuffParticle: usize = 0xad0;
        pub const m_FriendlyAuraModifier: usize = 0xbb0;
        pub const m_BonusSpiritLingerModifier: usize = 0xbc0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Bull_Leap_Boosting_Crash {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_BloodTributeVData {
        pub const m_BuffModifier: usize = 0x18b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Shrink_Ray {
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_TechBurst_ProcVData {
        pub const m_bIgnoreResists: usize = 0x780;
        pub const m_ProcParticle: usize = 0x788;
        pub const m_ProcNotificationModifier: usize = 0x868;
    }

    // Parent: CCitadelBaseAbilityServerOnly
    pub mod CCitadel_Ability_SuperNeutralIncendiary {
    }

    // Parent: CCitadelItemPickupVData
    pub mod CCitadelItemPickupRejuvVData {
        pub const m_AbilityProjectile: usize = 0x108;
        pub const m_flMaxDistForHeal: usize = 0x118;
        pub const m_flPhysicsRadius: usize = 0x11c;
        pub const m_RebirthModifier: usize = 0x120;
        pub const m_PunchPickupModifier: usize = 0x130;
        pub const m_IsFrozenParticle: usize = 0x140;
    }

    // Parent: CCitadel_Modifier_Link
    pub mod CCitadel_Modifier_Hornet_Chain_Connection {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_CosmeticItem_VotingPoster {
        pub const m_bPreview: usize = 0x11f8;
        pub const m_nActiveHero: usize = 0x11fc;
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CItem_WitheringWhip {
    }

    // Parent: CCitadel_Item_TrackingProjectileApplyModifier
    pub mod CCitadel_Item_RejuvTrackingProjectile {
    }

    // Parent: CBaseFilter
    pub mod CFilterClass {
        pub const m_iFilterClass: usize = 0x4d8;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Magician_EscapeVData {
        pub const m_EscapedModifier: usize = 0x1818;
        pub const m_PoofParticle: usize = 0x1828;
        pub const m_TetherParticle: usize = 0x1908;
        pub const m_strEscaped: usize = 0x19e8;
        pub const m_cameraSequenceTeleport: usize = 0x19f8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_HighAlert {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Nano_CatFormVData {
        pub const m_ModelChange: usize = 0x750;
        pub const m_flModelScale: usize = 0x838;
        pub const m_ExplodeSound: usize = 0x840;
        pub const m_ImpactSound: usize = 0x850;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckerScrapBlastDebuff {
        pub const m_flEnemyMoveSlow: usize = 0x150;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Chrono_PulseGrenade_VData {
        pub const m_PulseAreaModifier: usize = 0x1818;
        pub const m_strHitSound: usize = 0x1828;
        pub const m_strDebuffStatName: usize = 0x1838;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_FlameDashVData {
        pub const m_GroundAuraModifier: usize = 0x750;
        pub const m_ProgressModifier: usize = 0x760;
        pub const m_FlameDashParticle: usize = 0x770;
        pub const m_FlameAuraParticle: usize = 0x850;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_Headhunter_HeadshotBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tech_Defender_Shredders_Debuff {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SlowVData {
        pub const m_flGravityScale: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_NearDeathFX {
    }

    // Parent: CBaseAnimGraph
    pub mod CProjectile_Airheart_Package {
        pub const m_vVelocity: usize = 0xa90;
        pub const m_flFloorDist: usize = 0xa9c;
        pub const m_bPunchedOnce: usize = 0xaa0;
        pub const m_bOnGround: usize = 0xaa1;
        pub const m_pAbility: usize = 0xaa8;
        pub const m_flStunDuration: usize = 0xab0;
        pub const m_flStunRadius: usize = 0xab4;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerToggleSave {
    }

    // Parent: CCitadelModifierAura
    pub mod CModifier_Operative_Revelation_Aura {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_CelestialGuidance {
    }

    // Parent: CPathSimple
    pub mod CPathWithDynamicNodes {
        pub const m_vecPathNodes: usize = 0x5b0;
        pub const m_xInitialPathWorldToLocal: usize = 0x5d0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SettingSun {
        pub const m_bProjectileActive: usize = 0xf70;
        pub const m_TargetPreviews: usize = 0x12f8;
        pub const m_bWasSelected: usize = 0x1418;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_MobileResupply {
        pub const m_vDeployPosition: usize = 0xf70;
        pub const m_angDeploy: usize = 0xf7c;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Wraith_RapidFire {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ChainLightningEffectVData {
        pub const m_ChainParticle: usize = 0x750;
        pub const m_strChainSound: usize = 0x830;
    }

    // Parent: CBaseEntity
    pub mod CBaseNPCMaker {
        pub const m_nMaxNumNPCs: usize = 0x4a0;
        pub const m_flSpawnFrequency: usize = 0x4a4;
        pub const m_flRetryFrequency: usize = 0x4a8;
        pub const m_nHullCheckMode: usize = 0x4ac;
        pub const m_OnSpawnNPC: usize = 0x4b0;
        pub const m_OnSpawnedNPCDied: usize = 0x4d0;
        pub const m_OnAllSpawned: usize = 0x4e8;
        pub const m_OnAllSpawnedDead: usize = 0x500;
        pub const m_OnAllLiveChildrenDead: usize = 0x518;
        pub const m_nLiveChildren: usize = 0x530;
        pub const m_nMaxLiveChildren: usize = 0x534;
        pub const m_nMinSpawnDistance: usize = 0x538;
        pub const m_nSpawnThreshold: usize = 0x53c;
        pub const m_nBatchCount: usize = 0x540;
        pub const m_flRadius: usize = 0x544;
        pub const m_bDisabled: usize = 0x548;
        pub const m_bSpawning: usize = 0x549;
        pub const m_bZeroPitchAndRoll: usize = 0x54a;
        pub const m_hIgnoreEntity: usize = 0x54c;
        pub const m_iszIgnoreEnt: usize = 0x550;
        pub const m_iszDestinationGroup: usize = 0x558;
        pub const m_hSpawnEntity: usize = 0x560;
        pub const m_hSpawnedNPC: usize = 0x564;
        pub const m_nCurrentBatchCount: usize = 0x568;
        pub const m_nNumSpawnDestinations: usize = 0x56c;
        pub const m_nNumValidDestinations: usize = 0x570;
        pub const m_CriterionVisibility: usize = 0x574;
        pub const m_CriterionDistance: usize = 0x578;
    }

    // Parent: CBaseEntity
    pub mod CColorCorrection {
        pub const m_flFadeInDuration: usize = 0x4a0;
        pub const m_flFadeOutDuration: usize = 0x4a4;
        pub const m_flStartFadeInWeight: usize = 0x4a8;
        pub const m_flStartFadeOutWeight: usize = 0x4ac;
        pub const m_flTimeStartFadeIn: usize = 0x4b0;
        pub const m_flTimeStartFadeOut: usize = 0x4b4;
        pub const m_flMaxWeight: usize = 0x4b8;
        pub const m_bStartDisabled: usize = 0x4bc;
        pub const m_bEnabled: usize = 0x4bd;
        pub const m_bMaster: usize = 0x4be;
        pub const m_bClientSide: usize = 0x4bf;
        pub const m_bExclusive: usize = 0x4c0;
        pub const m_MinFalloff: usize = 0x4c4;
        pub const m_MaxFalloff: usize = 0x4c8;
        pub const m_flCurWeight: usize = 0x4cc;
        pub const m_netlookupFilename: usize = 0x4d0;
        pub const m_lookupFilename: usize = 0x6d0;
    }

    // Parent: CPropDoorRotating
    pub mod CPropDoorRotatingBreakable {
        pub const m_bBreakable: usize = 0xf70;
        pub const m_isAbleToCloseAreaPortals: usize = 0xf71;
        pub const m_currentDamageState: usize = 0xf74;
        pub const m_damageStates: usize = 0xf78;
    }

    // Parent: CPhysicsProp
    pub mod CItemCrate {
        pub const m_CCitadelMinimapComponent: usize = 0xd60;
        pub const m_hSpawner: usize = 0xd80;
        pub const m_eObjectivePosition: usize = 0xd8c;
        pub const m_eLootType: usize = 0xd94;
    }

    // Parent: CLightEntity
    pub mod CLightDirectionalEntity {
    }

    // Parent: CCitadelProjectile
    pub mod CProjectile_Synth_Barrage {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_T3Boss_AoeWaveAura {
    }

    // Parent: CBaseModelEntity
    pub mod CBaseClientUIEntity {
        pub const m_bEnabled: usize = 0x780;
        pub const m_DialogXMLName: usize = 0x788;
        pub const m_PanelClassName: usize = 0x790;
        pub const m_PanelID: usize = 0x798;
        pub const m_CustomOutput0: usize = 0x7a0;
        pub const m_CustomOutput1: usize = 0x7c0;
        pub const m_CustomOutput2: usize = 0x7e0;
        pub const m_CustomOutput3: usize = 0x800;
        pub const m_CustomOutput4: usize = 0x820;
        pub const m_CustomOutput5: usize = 0x840;
        pub const m_CustomOutput6: usize = 0x860;
        pub const m_CustomOutput7: usize = 0x880;
        pub const m_CustomOutput8: usize = 0x8a0;
        pub const m_CustomOutput9: usize = 0x8c0;
    }

    // Parent: CBaseModelEntity
    pub mod CBreakable {
        pub const m_CPropDataComponent: usize = 0x788;
        pub const m_Material: usize = 0x7c8;
        pub const m_hBreaker: usize = 0x7cc;
        pub const m_Explosion: usize = 0x7d0;
        pub const m_iszSpawnObject: usize = 0x7d8;
        pub const m_flPressureDelay: usize = 0x7e0;
        pub const m_iMinHealthDmg: usize = 0x7e4;
        pub const m_iszPropData: usize = 0x7e8;
        pub const m_impactEnergyScale: usize = 0x7f0;
        pub const m_nOverrideBlockLOS: usize = 0x7f4;
        pub const m_OnStartDeath: usize = 0x7f8;
        pub const m_OnBreak: usize = 0x810;
        pub const m_OnHealthChanged: usize = 0x828;
        pub const m_PerformanceMode: usize = 0x848;
        pub const m_hPhysicsAttacker: usize = 0x84c;
        pub const m_flLastPhysicsInfluenceTime: usize = 0x850;
    }

    // Parent: CPointEntity
    pub mod CInfoLandmark {
    }

    // Parent: CLogicalEntity
    pub mod CBaseFilter {
        pub const m_bNegated: usize = 0x4a0;
        pub const m_OnPass: usize = 0x4a8;
        pub const m_OnFail: usize = 0x4c0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Frank_PainAura_TargetVData {
        pub const m_DrainParticle: usize = 0x750;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Synth_Pulse_Escape {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShadowPulse {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Wraith_RapidFireVData {
        pub const m_CastParticle: usize = 0x1818;
        pub const m_TargetBuffSound: usize = 0x18f8;
        pub const m_RapidFireModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Item_DPS_Aura_Active {
    }

    // Parent: None
    pub mod CPulseCell_Outflow_PlaySceneBaseCursorState_t {
        pub const m_sceneInstance: usize = 0x0;
        pub const m_mainActor: usize = 0x4;
        pub const m_cursorIDToPort: usize = 0x8;
    }

    // Parent: None
    pub mod PulseObservableBoolExpression_t {
        pub const m_EvaluateConnection: usize = 0x0;
        pub const m_DependentObservableVars: usize = 0x48;
        pub const m_DependentObservableBlackboardReferences: usize = 0x60;
    }

    // Parent: CCitadelAnimatingModelEntity
    pub mod CCitadel_GuidedArrow_OwlModel {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_DebuffReducer {
    }

    // Parent: CCitadel_Modifier_Stunned
    pub mod CCitadel_Modifier_Knockdown {
        pub const m_angStunAngles: usize = 0xd8;
        pub const m_ePreferredKnockdownType: usize = 0xe4;
        pub const m_bForceTakePreferred: usize = 0xe8;
        pub const m_flGetUpAnimTime: usize = 0xec;
        pub const m_bGetUpCamSeqStarted: usize = 0xf0;
        pub const m_flOnGroundDuration: usize = 0xf4;
    }

    // Parent: CCitadel_Modifier_ScalingPowerUp
    pub mod CCitadel_Modifier_PowerUp_Gun {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_MovingToAttach {
        pub const m_hTarget: usize = 0xd4;
        pub const m_hProjectile: usize = 0xd8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_SpinVData {
        pub const m_AoEParticle: usize = 0x750;
        pub const m_SlowModifier: usize = 0x830;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_FissureWall {
        pub const m_vecPosition: usize = 0x1180;
        pub const m_vecTravellingPosition: usize = 0x118c;
        pub const m_vecInitialPosition: usize = 0x1198;
        pub const m_CastTime: usize = 0x11a4;
        pub const m_vecDirection: usize = 0x11a8;
        pub const m_vecLeft: usize = 0x11b4;
        pub const m_Length: usize = 0x11c0;
        pub const m_bTraveling: usize = 0x11da;
        pub const m_bPreview: usize = 0x11db;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Fervor_Bonuses {
        pub const m_nBonusesParticle: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_SpiritSnatch_Buff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StreetBrawlTrooper {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_FlameDashGroundAura {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Tier3BossInvuln {
    }

    // Parent: CBaseEntity
    pub mod CGradientFog {
        pub const m_hGradientFogTexture: usize = 0x4a0;
        pub const m_flFogStartDistance: usize = 0x4a8;
        pub const m_flFogEndDistance: usize = 0x4ac;
        pub const m_bHeightFogEnabled: usize = 0x4b0;
        pub const m_flFogStartHeight: usize = 0x4b4;
        pub const m_flFogEndHeight: usize = 0x4b8;
        pub const m_flFarZ: usize = 0x4bc;
        pub const m_flFogMaxOpacity: usize = 0x4c0;
        pub const m_flFogFalloffExponent: usize = 0x4c4;
        pub const m_flFogVerticalExponent: usize = 0x4c8;
        pub const m_fogColor: usize = 0x4cc;
        pub const m_flFogStrength: usize = 0x4d0;
        pub const m_flFadeTime: usize = 0x4d4;
        pub const m_bStartDisabled: usize = 0x4d8;
        pub const m_bIsEnabled: usize = 0x4d9;
        pub const m_bGradientFogNeedsTextures: usize = 0x4da;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Magician_AnimalHex_HexArea {
        pub const m_hHexWarningParticle: usize = 0xd0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_HotShot {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Cadence_Gun_Spikes {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityWreckerTeleportVData {
        pub const m_SpectatingProjectileParticle: usize = 0x1818;
        pub const m_ExplosionParticle: usize = 0x18f8;
        pub const m_ChannelParticle: usize = 0x19d8;
        pub const m_CastParticle: usize = 0x1ab8;
        pub const m_ArrowOffsetX: usize = 0x1b98;
        pub const m_ArrowCameraDistance: usize = 0x1b9c;
        pub const m_ArrowCameraHeightOffset: usize = 0x1ba0;
        pub const m_ArrowInitialPitch: usize = 0x1ba4;
        pub const m_GuidingModifier: usize = 0x1ba8;
        pub const m_DebuffModifier: usize = 0x1bb8;
        pub const m_strExplodeSound: usize = 0x1bc8;
        pub const m_flTrackAmount: usize = 0x1bd8;
        pub const m_flSpeedAccel: usize = 0x1bdc;
        pub const m_flSpeedDeccel: usize = 0x1be0;
        pub const m_flBaseProjectileSpeed: usize = 0x1be4;
        pub const m_flMaxProjectileSpeed: usize = 0x1be8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PatronsBlessingEnemyTrackerVData {
        pub const m_ProcNotificationModifier: usize = 0x750;
        pub const m_HealParticle: usize = 0x760;
        pub const m_strHealSound: usize = 0x840;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Aerial_Assault_Watcher {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_WeaponUpgrade_HeadshotDamage_VData {
        pub const m_DebuffModifier: usize = 0x18b8;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Upgrade_OverdriveClip_VData {
        pub const m_OverdriveClipModifier: usize = 0x18b8;
        pub const m_ReloadModifier: usize = 0x18c8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CModifier_SiphonBullets_VData {
        pub const m_StealWatcherModifier: usize = 0x780;
        pub const m_HealModifier: usize = 0x790;
        pub const m_TracerParticle: usize = 0x7a0;
        pub const m_ExplodeParticle: usize = 0x880;
        pub const m_ExplodeSound: usize = 0x960;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_SlowingTech_ProcVData {
        pub const m_DebuffModifier: usize = 0x780;
    }

    // Parent: CSoundOpvarSetPointEntity
    pub mod CSoundOpvarSetAABBEntity {
        pub const m_vDistanceInnerMins: usize = 0x618;
        pub const m_vDistanceInnerMaxs: usize = 0x624;
        pub const m_vDistanceOuterMins: usize = 0x630;
        pub const m_vDistanceOuterMaxs: usize = 0x63c;
        pub const m_nAABBDirection: usize = 0x648;
        pub const m_vInnerMins: usize = 0x64c;
        pub const m_vInnerMaxs: usize = 0x658;
        pub const m_vOuterMins: usize = 0x664;
        pub const m_vOuterMaxs: usize = 0x670;
    }

    // Parent: CPulseCell_Outflow_PlaySceneBase
    pub mod CPulseCell_Outflow_PlaySequence {
        pub const m_ParamSequenceName: usize = 0xf0;
    }

    // Parent: CBaseAnimGraph
    pub mod CCitadel_BreakableProp {
        pub const m_nHitIndex: usize = 0xa90;
        pub const m_flOverrideInitialSpawnTime: usize = 0xa98;
        pub const m_flOverrideRespawnTime: usize = 0xa9c;
    }

    // Parent: CBaseTrigger
    pub mod CCitadelHideoutInteractableTrigger {
        pub const m_OnInteracted: usize = 0x8e8;
        pub const m_strInteractLocString: usize = 0x900;
        pub const m_eHideoutAction: usize = 0x908;
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CNPC_Boss_Tier2VData {
        pub const m_flSightRange: usize = 0x1348;
        pub const m_flPlayerInitialSightRange: usize = 0x134c;
        pub const m_strWIPModelName: usize = 0x1350;
        pub const m_BeamHitSound: usize = 0x1430;
        pub const m_BeamAnnounceSound: usize = 0x1440;
        pub const m_BarrageAnnounceSound: usize = 0x1450;
        pub const m_MeleeAnnounceSound: usize = 0x1460;
        pub const m_bBeamTurnToFire: usize = 0x1470;
        pub const m_StompImpactEffect: usize = 0x1478;
        pub const m_StompWarningEffect: usize = 0x1558;
        pub const m_flTossSpeed: usize = 0x1638;
        pub const m_flStompDamage: usize = 0x163c;
        pub const m_flStompDamageMaxHealthPercent: usize = 0x1640;
        pub const m_flStompDamageTrooperRate: usize = 0x1644;
        pub const m_flStompTossUpMagnitude: usize = 0x1648;
        pub const m_flStunDuration: usize = 0x164c;
        pub const m_flStompAttemptRadius: usize = 0x1650;
        pub const m_flStompImpactRadius: usize = 0x1654;
        pub const m_flStompImpactHeight: usize = 0x1658;
        pub const m_flStompParryRadius: usize = 0x165c;
        pub const m_flStompParryImpulse: usize = 0x1660;
        pub const m_flStompParryImpulseInAir: usize = 0x1664;
        pub const m_flStompParryDamageMult: usize = 0x1668;
        pub const m_flSweepRadius: usize = 0x166c;
        pub const m_flSweepSpeed: usize = 0x1670;
        pub const m_flSweepZScale: usize = 0x1674;
        pub const m_flSweepMaxAngle: usize = 0x1678;
        pub const m_flSweepMaxRange: usize = 0x167c;
        pub const m_flSweepAdjustSpeed: usize = 0x1680;
        pub const m_StompAnnounceSound: usize = 0x1688;
        pub const m_StompParriedSound: usize = 0x1698;
        pub const m_StompImpactSound: usize = 0x16a8;
        pub const m_flBurstDuration: usize = 0x16b8;
        pub const m_flBurstCooldown: usize = 0x16bc;
        pub const m_flMeleeDuration: usize = 0x16c0;
        pub const m_flMeleeHitTime: usize = 0x16c4;
        pub const m_flMeleeAttackRadius: usize = 0x16c8;
        pub const m_flMeleeDamage: usize = 0x16cc;
        pub const m_flMeleeDamageHealthPct: usize = 0x16d0;
        pub const m_flMeleeTrooperStunTime: usize = 0x16d4;
        pub const m_BackdoorProtectionModifier: usize = 0x16d8;
        pub const m_flBackDoorProtectionRange: usize = 0x16e8;
        pub const m_InvulModifier: usize = 0x16f0;
        pub const m_flInvulModifierRange: usize = 0x1700;
        pub const m_RangedArmorModifier: usize = 0x1708;
        pub const m_FriendlyAuraModifier: usize = 0x1718;
        pub const m_NearbyEnemyResist: usize = 0x1728;
        pub const m_StatTrackerAuraModifier: usize = 0x1738;
        pub const m_EmpoweredModifierLevel1: usize = 0x1748;
        pub const m_EmpoweredModifierLevel2: usize = 0x1758;
        pub const m_StaggerWatcherModifier: usize = 0x1768;
        pub const m_flMaxStaggerBuildup: usize = 0x1778;
        pub const m_flStaggerDuration: usize = 0x177c;
        pub const m_flStaggerMeleeMult: usize = 0x1780;
        pub const m_flStaggerDamageMult: usize = 0x1784;
        pub const m_flAoeWaveHealthThreshold: usize = 0x1788;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Metal {
    }

    // Parent: CPointClientUIWorldPanel
    pub mod CPointClientUIWorldTextPanel {
        pub const m_messageText: usize = 0x938;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Punkgoat_PrimaryWeapon {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_FealtyTarget {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_TangoTether_TetherReceiver {
        pub const m_nFXIndex: usize = 0xd0;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_WreckerSalvage {
        pub const m_flDPS: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Astro_ShotgunBuffVData {
        pub const m_DebuffModifier: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityMeleeParryVData {
        pub const m_flWhiffDuration: usize = 0x1818;
        pub const m_flMovementRestrictionTime: usize = 0x181c;
        pub const m_flActiveTime: usize = 0x1820;
        pub const m_flParryEndVisualTime: usize = 0x1824;
        pub const m_flSuccessActiveTime: usize = 0x1828;
        pub const m_flMashProtectTime: usize = 0x182c;
        pub const m_flBossVictimNoMeleeTime: usize = 0x1830;
        pub const m_flBossVictimCalmTime: usize = 0x1834;
        pub const m_SuccessfulParryParticle: usize = 0x1838;
        pub const m_SuccessfulAbilityParryParticle: usize = 0x1918;
        pub const m_ActiveParryParticle: usize = 0x19f8;
        pub const m_strSuccessfulParrySound: usize = 0x1ad8;
        pub const m_strSuccessfulParryTrooperSound: usize = 0x1ae8;
        pub const m_ParryActiveModifier: usize = 0x1af8;
        pub const m_ParryVictimModifier: usize = 0x1b08;
        pub const m_ParryCooldownModifier: usize = 0x1b18;
        pub const m_ParryEndVisualModifier: usize = 0x1b28;
        pub const m_ParryBossVictimNoMeleeModifier: usize = 0x1b38;
        pub const m_ParryBossVictimCalmModifier: usize = 0x1b48;
    }

    // Parent: CCitadel_Ability_Melee_Base
    pub mod CCitadel_Ability_HoldMelee {
        pub const m_flStateStartTime: usize = 0x10a0;
        pub const m_flDashStartTime: usize = 0x10a4;
        pub const m_eCurrentAttackState: usize = 0x10a8;
        pub const m_eCurrentAttackType: usize = 0x10ac;
        pub const m_vAirDashDir: usize = 0x10b0;
        pub const m_bAttackStartedWhileSliding: usize = 0x10bc;
        pub const m_flLightChainEndTime: usize = 0x10c0;
        pub const m_nLightChainCount: usize = 0x10c4;
        pub const m_bCreatedChargeEffects: usize = 0x10c8;
        pub const m_angForced: usize = 0x10cc;
        pub const m_vGoalDir: usize = 0x10d8;
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

    // Parent: None
    pub mod CPulseCell_LimitCountCriteria_t {
        pub const m_bLimitCountPasses: usize = 0x0;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_ItemPunchable_GoldVData {
        pub const m_flPhysicsRadius: usize = 0x7a8;
        pub const m_sHitSound: usize = 0x7b0;
    }

    // Parent: CBaseModelEntity
    pub mod CFuncRotator {
        pub const m_hRotatorTarget: usize = 0x780;
        pub const m_bIsRotating: usize = 0x784;
        pub const m_bIsReversing: usize = 0x785;
        pub const m_flTimeToReachMaxSpeed: usize = 0x788;
        pub const m_flTimeToReachZeroSpeed: usize = 0x78c;
        pub const m_flDistanceAlongArcTraveled: usize = 0x790;
        pub const m_flTimeToWaitOscillate: usize = 0x794;
        pub const m_flTimeRotationStart: usize = 0x798;
        pub const m_qLSPrevChange: usize = 0x7a0;
        pub const m_qWSPrev: usize = 0x7b0;
        pub const m_qWSInit: usize = 0x7c0;
        pub const m_qLSInit: usize = 0x7d0;
        pub const m_qLSOrientation: usize = 0x7e0;
        pub const m_OnRotationStarted: usize = 0x7f0;
        pub const m_OnRotationCompleted: usize = 0x808;
        pub const m_OnOscillate: usize = 0x820;
        pub const m_OnOscillateStartArrive: usize = 0x838;
        pub const m_OnOscillateStartDepart: usize = 0x850;
        pub const m_OnOscillateEndArrive: usize = 0x868;
        pub const m_OnOscillateEndDepart: usize = 0x880;
        pub const m_bOscillateDepart: usize = 0x898;
        pub const m_nOscillateCount: usize = 0x89c;
        pub const m_eRotateType: usize = 0x8a0;
        pub const m_ePrevRotateType: usize = 0x8a4;
        pub const m_bHasTargetOverride: usize = 0x8a8;
        pub const m_qOrientationOverride: usize = 0x8b0;
        pub const m_eSpaceOverride: usize = 0x8c0;
        pub const m_qAngularVelocity: usize = 0x8c4;
        pub const m_vLookAtForcedUp: usize = 0x8d0;
        pub const m_strRotatorTarget: usize = 0x8e0;
        pub const m_bRecordHistory: usize = 0x8e8;
        pub const m_vecRotatorHistory: usize = 0x8f0;
        pub const m_bReturningToPreviousOrientation: usize = 0x908;
        pub const m_vecRotatorQueue: usize = 0x910;
        pub const m_vecRotatorQueueHistory: usize = 0x928;
        pub const m_eSolidType: usize = 0x940;
        pub const m_hSpeedFromMover: usize = 0x944;
        pub const m_iszSpeedFromMover: usize = 0x948;
        pub const m_flSpeedScale: usize = 0x950;
        pub const m_flMinYawRotation: usize = 0x954;
        pub const m_flMaxYawRotation: usize = 0x958;
    }

    // Parent: CBaseEntity
    pub mod CSoundEventEntity {
        pub const m_bStartOnSpawn: usize = 0x4a0;
        pub const m_bToLocalPlayer: usize = 0x4a1;
        pub const m_bStopOnNew: usize = 0x4a2;
        pub const m_bSaveRestore: usize = 0x4a3;
        pub const m_bSavedIsPlaying: usize = 0x4a4;
        pub const m_flSavedElapsedTime: usize = 0x4a8;
        pub const m_iszSourceEntityName: usize = 0x4b0;
        pub const m_iszAttachmentName: usize = 0x4b8;
        pub const m_onGUIDChanged: usize = 0x4c0;
        pub const m_onSoundFinished: usize = 0x4f0;
        pub const m_flClientCullRadius: usize = 0x508;
        pub const m_iszSoundName: usize = 0x538;
        pub const m_hSource: usize = 0x554;
        pub const m_nEntityIndexSelection: usize = 0x558;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Infested {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_Kickflip_SucessSelf {
        pub const m_vecInitialVelocity: usize = 0x2d0;
        pub const m_vecKickOffVelocity: usize = 0x2dc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SkyRunner_SwingLine {
        pub const m_eSwingState: usize = 0xf70;
        pub const m_SwingStartTime: usize = 0xf74;
        pub const m_SwingEndTime: usize = 0xf78;
        pub const m_vecSwingPoint: usize = 0xf7c;
        pub const m_vecCurrentPosition: usize = 0xf88;
        pub const m_flIdealSpringLength: usize = 0xf94;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Nano_PredatoryStatue {
        pub const m_GameTimeEnabled: usize = 0xfc;
        pub const m_LastCatInAreaTime: usize = 0x100;
        pub const m_bIsAttacking: usize = 0x104;
        pub const m_iTargetID: usize = 0x108;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_MysticShot {
        pub const m_shotID: usize = 0x228;
        pub const m_BuffedShotId: usize = 0x330;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_ColossusActive_VData {
        pub const m_AuraModifier: usize = 0x750;
        pub const m_ShieldParticle: usize = 0x760;
    }

    // Parent: CPointEntity
    pub mod CInfoTutorialPoint {
        pub const m_ePointType: usize = 0x4a0;
        pub const m_sMoveTarget: usize = 0x4a8;
        pub const m_HeroID: usize = 0x4b0;
    }

    // Parent: CLogicalEntity
    pub mod CEnvFade {
        pub const m_fadeColor: usize = 0x4a0;
        pub const m_Duration: usize = 0x4a4;
        pub const m_HoldDuration: usize = 0x4a8;
        pub const m_OnBeginFade: usize = 0x4b0;
    }

    // Parent: CEntitySubclassVDataBase
    pub mod CBasePlayerVData {
        pub const m_sModelName: usize = 0x28;
        pub const m_vecIntrinsicModifiers: usize = 0x108;
        pub const m_flHeadDamageMultiplier: usize = 0x120;
        pub const m_flChestDamageMultiplier: usize = 0x130;
        pub const m_flStomachDamageMultiplier: usize = 0x140;
        pub const m_flArmDamageMultiplier: usize = 0x150;
        pub const m_flLegDamageMultiplier: usize = 0x160;
        pub const m_flHoldBreathTime: usize = 0x170;
        pub const m_flDrowningDamageInterval: usize = 0x174;
        pub const m_nDrowningDamageInitial: usize = 0x178;
        pub const m_nDrowningDamageMax: usize = 0x17c;
        pub const m_nWaterSpeed: usize = 0x180;
        pub const m_flUseRange: usize = 0x184;
        pub const m_flUseAngleTolerance: usize = 0x188;
        pub const m_flCrouchTime: usize = 0x18c;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Familiar_ReplicatedBarrier {
    }

    // Parent: CCitadelModifier
    pub mod CModifier_Drifter_Darkness_Target_BoundaryUnit {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_VampireBat_BatCloud_SelfVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_AuraParticle: usize = 0x760;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Viper_StackingDebuff {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityBouncePadVData {
        pub const m_BounceModifier: usize = 0x1818;
        pub const m_AllyBounceModifier: usize = 0x1828;
        pub const m_SpeedOnLandModifier: usize = 0x1838;
        pub const m_NoBounceModifier: usize = 0x1848;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPowerSurgeVData {
        pub const m_ChainParticle: usize = 0x1818;
        pub const m_CastHitParticle: usize = 0x18f8;
        pub const m_BuffModifier: usize = 0x19d8;
        pub const m_ChainModifier: usize = 0x19e8;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Unstable_ConcoctionVData {
        pub const m_ExplodeParticle: usize = 0x750;
        pub const m_ChargeParticle: usize = 0x830;
        pub const m_UnstoppableModifier: usize = 0x910;
        pub const m_ExplodeSound: usize = 0x920;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_Electric_SlippersVData {
        pub const m_ElectricParticle: usize = 0x18b8;
        pub const m_strProcSound: usize = 0x1998;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Frenzy_MoveSpeed {
        pub const m_flMoveSpeedPerStack: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_CheaterCurseVData {
        pub const m_CursedModel: usize = 0x750;
        pub const m_flModelScale: usize = 0x830;
    }

    // Parent: CTriggerMultiple
    pub mod CTriggerImpact {
        pub const m_flMagnitude: usize = 0x8f8;
        pub const m_flNoise: usize = 0x8fc;
        pub const m_flViewkick: usize = 0x900;
        pub const m_pOutputForce: usize = 0x908;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_VexBarrier {
    }

    // Parent: CAI_CitadelNPCVData
    pub mod CAI_NPC_NecroSkeleVData {
        pub const m_flMeleeDuration: usize = 0x1348;
        pub const m_flMeleeFireDelay: usize = 0x134c;
        pub const m_flNonPlayerDamageResist: usize = 0x1350;
        pub const m_ExplodeModifier: usize = 0x1358;
        pub const m_DamageSlowModifier: usize = 0x1368;
        pub const m_flHeroLockRange: usize = 0x1378;
        pub const m_flHeroLockBreakRange: usize = 0x137c;
        pub const m_vecTargettingTiers: usize = 0x1380;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityPunkgoatGoatFlipVData {
        pub const m_ChargingSpeedCurve: usize = 0x1818;
        pub const m_GoingUpSpeedCurve: usize = 0x1858;
        pub const m_flGroundBreakOffAngle: usize = 0x1898;
        pub const m_Charging: usize = 0x18a0;
        pub const m_GoatGoingUp: usize = 0x18b0;
        pub const m_DamageBuff: usize = 0x18c0;
        pub const m_MaxHealthBuff: usize = 0x18d0;
        pub const m_EmpowerMelee: usize = 0x18e0;
        pub const m_LingeringAirControl: usize = 0x18f0;
        pub const m_flDelayBeforeCasterRegainsControlAfterFlip: usize = 0x1900;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_MagicBeamVData {
        pub const m_BlockerModel: usize = 0x750;
        pub const m_BeamParticle: usize = 0x830;
        pub const m_strBeamEndSound: usize = 0x910;
        pub const m_strTargetLoopingSound: usize = 0x920;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_SkyRunner_FlakShot {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Rutger_CheatDeath {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_RapidFire {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_HornetSting {
        pub const m_BounceCount: usize = 0xf70;
        pub const m_bHitHero: usize = 0xf74;
        pub const m_vecValidBounceTargets: usize = 0xf78;
    }

    // Parent: CCitadel_Ability_ZipLine
    pub mod CCitadel_Ability_TrooperZipLine {
    }

    // Parent: CCitadel_Modifier_Intrinsic_Base
    pub mod CCitadel_Modifier_BulletResilience {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_AOE_Tech_ShieldVData {
        pub const m_DurationModifier: usize = 0x18b8;
    }

    // Parent: None
    pub mod CTestPulseIOEntityHandleIntArgs_t {
        pub const handleA: usize = 0x0;
        pub const valueB: usize = 0x4;
    }

    // Parent: CPulseCell_WaitForCursorsWithTagBase
    pub mod CPulseCell_CursorQueue {
        pub const m_nCursorsAllowedToRunParallel: usize = 0x98;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_RandomFloat {
    }

    // Parent: None
    pub mod CPulseExecCursor {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerRemoveModifier {
        pub const m_strModifier: usize = 0x8e0;
    }

    // Parent: CDynamicProp
    pub mod CBasePropDoor {
        pub const m_flAutoReturnDelay: usize = 0xce0;
        pub const m_hDoorList: usize = 0xce8;
        pub const m_nHardwareType: usize = 0xd00;
        pub const m_bNeedsHardware: usize = 0xd04;
        pub const m_eDoorState: usize = 0xd08;
        pub const m_bLocked: usize = 0xd0c;
        pub const m_bNoNPCs: usize = 0xd0d;
        pub const m_closedPosition: usize = 0xd10;
        pub const m_closedAngles: usize = 0xd1c;
        pub const m_hBlocker: usize = 0xd28;
        pub const m_bFirstBlocked: usize = 0xd2c;
        pub const m_ls: usize = 0xd30;
        pub const m_bForceClosed: usize = 0xd50;
        pub const m_vecLatchWorldPosition: usize = 0xd54;
        pub const m_hActivator: usize = 0xd60;
        pub const m_SoundMoving: usize = 0xd78;
        pub const m_SoundOpen: usize = 0xd80;
        pub const m_SoundClose: usize = 0xd88;
        pub const m_SoundLock: usize = 0xd90;
        pub const m_SoundUnlock: usize = 0xd98;
        pub const m_SoundLatch: usize = 0xda0;
        pub const m_SoundPound: usize = 0xda8;
        pub const m_SoundJiggle: usize = 0xdb0;
        pub const m_SoundLockedAnim: usize = 0xdb8;
        pub const m_numCloseAttempts: usize = 0xdc0;
        pub const m_nPhysicsMaterial: usize = 0xdc4;
        pub const m_SlaveName: usize = 0xdc8;
        pub const m_hMaster: usize = 0xdd0;
        pub const m_OnBlockedClosing: usize = 0xdd8;
        pub const m_OnBlockedOpening: usize = 0xdf0;
        pub const m_OnUnblockedClosing: usize = 0xe08;
        pub const m_OnUnblockedOpening: usize = 0xe20;
        pub const m_OnFullyClosed: usize = 0xe38;
        pub const m_OnFullyOpen: usize = 0xe50;
        pub const m_OnClose: usize = 0xe68;
        pub const m_OnOpen: usize = 0xe80;
        pub const m_OnLockedUse: usize = 0xe98;
        pub const m_OnAjarOpen: usize = 0xeb0;
    }

    // Parent: CCitadelTrackedProjectile
    pub mod CCitadel_Projectile_HookBlade {
        pub const bIsReturning: usize = 0x890;
    }

    // Parent: CLogicalEntity
    pub mod CLogicBranchList {
        pub const m_nLogicBranchNames: usize = 0x4a0;
        pub const m_LogicBranchList: usize = 0x520;
        pub const m_eLastState: usize = 0x538;
        pub const m_OnAllTrue: usize = 0x540;
        pub const m_OnAllFalse: usize = 0x558;
        pub const m_OnMixed: usize = 0x570;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_GoatGoingUpVData {
        pub const m_GoingUpSpeedCurve: usize = 0x750;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbilityLashFlogVData {
        pub const m_FlogParticle: usize = 0x1818;
        pub const m_FlogLifeLeachParticle: usize = 0x18f8;
        pub const m_strHitConfirmSound: usize = 0x19d8;
        pub const m_FlogDebuffModifier: usize = 0x19e8;
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProcVData
    pub mod CCitadel_Modifier_HollowPoint_ProcVData {
        pub const m_TracerParticle: usize = 0x880;
        pub const m_ParticleModifier: usize = 0x960;
        pub const m_DebuffModifier: usize = 0x970;
    }

    // Parent: CBaseAnimGraph
    pub mod CNPC_SimpleAnimatingAI {
        pub const m_hEnemy: usize = 0xaa0;
        pub const m_hAbilityOwner: usize = 0xaa4;
        pub const m_CCitadelRegenComponent: usize = 0xaa8;
    }

    // Parent: CBreakableProp
    pub mod CDynamicProp {
        pub const m_bCreateNavObstacle: usize = 0xc28;
        pub const m_bNavObstacleUpdatesOverridden: usize = 0xc29;
        pub const m_bUseHitboxesForRenderBox: usize = 0xc2a;
        pub const m_bUseAnimGraph: usize = 0xc2b;
        pub const m_pOutputAnimBegun: usize = 0xc30;
        pub const m_pOutputAnimOver: usize = 0xc48;
        pub const m_pOutputAnimLoopCycleOver: usize = 0xc60;
        pub const m_OnAnimReachedStart: usize = 0xc78;
        pub const m_OnAnimReachedEnd: usize = 0xc90;
        pub const m_iszIdleAnim: usize = 0xca8;
        pub const m_nIdleAnimLoopMode: usize = 0xcb0;
        pub const m_bRandomizeCycle: usize = 0xcb4;
        pub const m_bStartDisabled: usize = 0xcb5;
        pub const m_bFiredStartEndOutput: usize = 0xcb6;
        pub const m_bForceNpcExclude: usize = 0xcb7;
        pub const m_bCreateNonSolid: usize = 0xcb8;
        pub const m_bIsOverrideProp: usize = 0xcb9;
        pub const m_iInitialGlowState: usize = 0xcbc;
        pub const m_nGlowRange: usize = 0xcc0;
        pub const m_nGlowRangeMin: usize = 0xcc4;
        pub const m_glowColor: usize = 0xcc8;
        pub const m_nGlowTeam: usize = 0xccc;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_Charge_Mastery {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_AOE_Tech_Shield {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierHoldingGoldenIdolVData {
        pub const m_IdolParticle: usize = 0x750;
    }

    // Parent: CCitadel_Ability_PrimaryWeapon
    pub mod CCitadel_Ability_Werewolf_Rifle {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PunkgoatBlastedActive {
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Synth_Barrage_VData {
        pub const m_BarrageCasterModifier: usize = 0x1818;
        pub const m_AmpModifier: usize = 0x1828;
        pub const m_DebuffModifier: usize = 0x1838;
        pub const m_ShootParticle: usize = 0x1848;
        pub const m_ImpactParticle: usize = 0x1928;
        pub const m_ChannelParticle: usize = 0x1a08;
        pub const m_strProjectileLaunchSound: usize = 0x1ae8;
        pub const m_flAttackInterval: usize = 0x1af8;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Dust_Storm {
        pub const m_hSpinningBladeAbility: usize = 0xf70;
        pub const m_vTargets: usize = 0xf78;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_GooGrenade {
        pub const m_vecPuddleModifiers: usize = 0xf70;
        pub const m_LastDetonateTime: usize = 0x1488;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadelAbilityChargedBombVData {
        pub const m_ChargeBombModifier: usize = 0x1818;
        pub const m_ExplodeParticle: usize = 0x1828;
        pub const m_strExplodeSound: usize = 0x1908;
        pub const m_flChargeForMaxDamage: usize = 0x1918;
        pub const m_flMinDamagePercent: usize = 0x191c;
    }

    // Parent: CBaseFilter
    pub mod CFilterTeam {
        pub const m_iFilterTeam: usize = 0x4d8;
    }

    // Parent: CPointEntity
    pub mod CMiniMapMarker {
        pub const m_CCitadelMinimapComponent: usize = 0x4a0;
        pub const m_eType: usize = 0x4c0;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadelModifierAura_Cone {
    }

    // Parent: CBaseModifierAura
    pub mod CCitadelModifierAura {
    }

    // Parent: CModifierVData_BaseAura
    pub mod CCitadelModifierAuraVData {
        pub const m_iAuraSearchType: usize = 0x790;
        pub const m_iAuraSearchFlags: usize = 0x794;
        pub const m_eLosCheck: usize = 0x798;
        pub const m_flModifierProvidedByAuraDuration: usize = 0x79c;
        pub const m_bRemoveProvidedModifierOnAuraRemoval: usize = 0x7a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Graf_Ability01 {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelAbilityDruidBasePlant {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Chrono_TimeWall_EffectVData {
        pub const m_DebuffModifier: usize = 0x750;
        pub const m_BuffParticle: usize = 0x760;
        pub const m_DebuffParticle: usize = 0x840;
        pub const m_strDamageSound: usize = 0x920;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_WeaponPowerForHealthVData {
        pub const m_ActiveBuff: usize = 0x750;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerPhysics {
        pub const m_pController: usize = 0x8e8;
        pub const m_gravityScale: usize = 0x8f0;
        pub const m_linearLimit: usize = 0x8f4;
        pub const m_linearDamping: usize = 0x8f8;
        pub const m_angularLimit: usize = 0x8fc;
        pub const m_angularDamping: usize = 0x900;
        pub const m_linearForce: usize = 0x904;
        pub const m_flFrequency: usize = 0x908;
        pub const m_flDampingRatio: usize = 0x90c;
        pub const m_vecLinearForcePointAt: usize = 0x910;
        pub const m_bCollapseToForcePoint: usize = 0x91c;
        pub const m_vecLinearForcePointAtWorld: usize = 0x920;
        pub const m_vecLinearForceDirection: usize = 0x92c;
        pub const m_bConvertToDebrisWhenPossible: usize = 0x938;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CCitadel_Modifier_MysticalPianoVData {
        pub const m_StunModifier: usize = 0x7a8;
        pub const m_DazeModifier: usize = 0x7b8;
        pub const m_HitParticle: usize = 0x7c8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_ArmorUpgrade_CloakingDeviceActive {
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_CheatDeath {
        pub const m_bStartCooldown: usize = 0xf78;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadelBaseLockonAbility {
        pub const m_vecLockonTargets: usize = 0x1270;
        pub const m_LockOnStartTime: usize = 0x12d8;
    }

    // Parent: CBaseEntity
    pub mod CFuncTimescale {
        pub const m_flDesiredTimescale: usize = 0x4a0;
        pub const m_flAcceleration: usize = 0x4a4;
        pub const m_flMinBlendRate: usize = 0x4a8;
        pub const m_flBlendDeltaMultiplier: usize = 0x4ac;
        pub const m_isStarted: usize = 0x4b0;
    }

    // Parent: CPointEntity
    pub mod CInfoInteraction {
        pub const m_strInteractVData: usize = 0x4a0;
        pub const m_flInteractRadius: usize = 0x4b8;
        pub const m_hSceneRequest: usize = 0x4bc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Cadence_Crescendo {
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_HealthRegenAuraVData {
        pub const m_HealParticle: usize = 0x18b8;
        pub const m_CastHealParticle: usize = 0x1998;
        pub const m_HealingPulseTrackerModifier: usize = 0x1a78;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_UltimateBurst_DelayedEffect {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_AmmoScavenger {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StreetBrawl_Phase {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_PreventHealing {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_BaseEventProc {
        pub const m_vecProcdUnitsThisShot: usize = 0xd0;
        pub const m_vecTrackedUnitsThisFrame: usize = 0xe8;
        pub const m_nLastShotId: usize = 0x100;
    }

    // Parent: CSoundOpvarSetPointBase
    pub mod CSoundOpvarSetPointEntity {
        pub const m_OnEnter: usize = 0x548;
        pub const m_OnExit: usize = 0x560;
        pub const m_bAutoDisable: usize = 0x578;
        pub const m_flDistanceMin: usize = 0x59c;
        pub const m_flDistanceMax: usize = 0x5a0;
        pub const m_flDistanceMapMin: usize = 0x5a4;
        pub const m_flDistanceMapMax: usize = 0x5a8;
        pub const m_flOcclusionRadius: usize = 0x5ac;
        pub const m_flOcclusionMin: usize = 0x5b0;
        pub const m_flOcclusionMax: usize = 0x5b4;
        pub const m_flValSetOnDisable: usize = 0x5b8;
        pub const m_bSetValueOnDisable: usize = 0x5bc;
        pub const m_bReloading: usize = 0x5bd;
        pub const m_nSimulationMode: usize = 0x5c0;
        pub const m_nVisibilitySamples: usize = 0x5c4;
        pub const m_vDynamicProxyPoint: usize = 0x5c8;
        pub const m_flDynamicMaximumOcclusion: usize = 0x5d4;
        pub const m_hDynamicEntity: usize = 0x5d8;
        pub const m_iszDynamicEntityName: usize = 0x5e0;
        pub const m_flPathingDistanceNormFactor: usize = 0x5e8;
        pub const m_vPathingSourcePos: usize = 0x5ec;
        pub const m_vPathingListenerPos: usize = 0x5f8;
        pub const m_vPathingDirection: usize = 0x604;
        pub const m_nPathingSourceIndex: usize = 0x610;
    }

    // Parent: None
    pub mod CBasePlayerWeaponVData {
        pub const m_szClassName: usize = 0x10;
        pub const m_szWorldModel: usize = 0x18;
        pub const m_sToolsOnlyOwnerModelName: usize = 0xf8;
        pub const m_bBuiltRightHanded: usize = 0x1d8;
        pub const m_bAllowFlipping: usize = 0x1d9;
        pub const m_sMuzzleAttachment: usize = 0x1e0;
        pub const m_szMuzzleFlashParticle: usize = 0x200;
        pub const m_szMuzzleFlashParticleConfig: usize = 0x2e0;
        pub const m_szBarrelSmokeParticle: usize = 0x2e8;
        pub const m_nMuzzleSmokeShotThreshold: usize = 0x3c8;
        pub const m_flMuzzleSmokeTimeout: usize = 0x3cc;
        pub const m_flMuzzleSmokeDecrementRate: usize = 0x3d0;
        pub const m_bGenerateMuzzleLight: usize = 0x3d4;
        pub const m_bLinkedCooldowns: usize = 0x3d5;
        pub const m_vecIntrinsicModifiers: usize = 0x3d8;
        pub const m_iFlags: usize = 0x3f0;
        pub const m_iWeight: usize = 0x3f4;
        pub const m_bAutoSwitchTo: usize = 0x3f8;
        pub const m_bAutoSwitchFrom: usize = 0x3f9;
        pub const m_nPrimaryAmmoType: usize = 0x3fa;
        pub const m_nSecondaryAmmoType: usize = 0x3fb;
        pub const m_iMaxClip1: usize = 0x3fc;
        pub const m_iMaxClip2: usize = 0x400;
        pub const m_iDefaultClip1: usize = 0x404;
        pub const m_iDefaultClip2: usize = 0x408;
        pub const m_bReserveAmmoAsClips: usize = 0x40c;
        pub const m_bTreatAsSingleClip: usize = 0x40d;
        pub const m_bKeepLoadedAmmo: usize = 0x40e;
        pub const m_iRumbleEffect: usize = 0x410;
        pub const m_flDropSpeed: usize = 0x414;
        pub const m_iSlot: usize = 0x418;
        pub const m_iPosition: usize = 0x41c;
        pub const m_aShootSounds: usize = 0x420;
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoTargetServerOnly {
    }

    // Parent: CServerOnlyPointEntity
    pub mod CInfoTrooperNeutralSpawn {
        pub const m_iCoverGroupID: usize = 0x4a0;
        pub const m_iszSquadName: usize = 0x4a8;
        pub const m_eTrooperType: usize = 0x4b8;
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Drifter_PrimaryWeapon_VData {
        pub const m_strSwipeTracerParticleRight: usize = 0x19c8;
        pub const m_strSwipeTracerParticleLeft: usize = 0x1aa8;
        pub const m_vecOriginOffsetsLeft: usize = 0x1b88;
        pub const m_flCenterBulletRadiusOverride: usize = 0x1ba0;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Gunslinger_SpreadingFireVData {
        pub const m_ImpactParticle: usize = 0x1818;
        pub const m_FireDebuffModifier: usize = 0x18f8;
    }

    // Parent: CCitadel_Modifier_BaseEventProcVData
    pub mod CCitadel_Modifier_HauntWatcherVData {
        pub const m_HauntDamageModifier: usize = 0x780;
        pub const m_BuildUpModifier: usize = 0x790;
        pub const m_ExplodeSound: usize = 0x7a0;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShieldGuy_Ability01 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Upgrade_OverdriveClip {
        pub const m_nBonusMaxClipSize: usize = 0xd0;
    }

    // Parent: CBaseTrigger
    pub mod CServerRagdollTrigger {
    }

    // Parent: CDynamicProp
    pub mod CDynamicPropAlias_dynamic_prop {
    }

    // Parent: CMarkupVolume
    pub mod CMarkupVolumeTagged {
        pub const m_GroupNames: usize = 0x788;
        pub const m_Tags: usize = 0x7a0;
        pub const m_bIsGroup: usize = 0x7b8;
        pub const m_bGroupByPrefab: usize = 0x7b9;
        pub const m_bGroupByVolume: usize = 0x7ba;
        pub const m_bGroupOtherGroups: usize = 0x7bb;
        pub const m_bIsInGroup: usize = 0x7bc;
    }

    // Parent: CPointEntity
    pub mod CInfoParticleTarget {
    }

    // Parent: CBaseEntity
    pub mod CEnvCubemap {
        pub const m_Entity_hCubemapTexture: usize = 0x520;
        pub const m_Entity_bCustomCubemapTexture: usize = 0x528;
        pub const m_Entity_flInfluenceRadius: usize = 0x52c;
        pub const m_Entity_vBoxProjectMins: usize = 0x530;
        pub const m_Entity_vBoxProjectMaxs: usize = 0x53c;
        pub const m_Entity_bMoveable: usize = 0x548;
        pub const m_Entity_nHandshake: usize = 0x54c;
        pub const m_Entity_nEnvCubeMapArrayIndex: usize = 0x550;
        pub const m_Entity_nPriority: usize = 0x554;
        pub const m_Entity_flEdgeFadeDist: usize = 0x558;
        pub const m_Entity_vEdgeFadeDists: usize = 0x55c;
        pub const m_Entity_flDiffuseScale: usize = 0x568;
        pub const m_Entity_bStartDisabled: usize = 0x56c;
        pub const m_Entity_bDefaultEnvMap: usize = 0x56d;
        pub const m_Entity_bDefaultSpecEnvMap: usize = 0x56e;
        pub const m_Entity_bIndoorCubeMap: usize = 0x56f;
        pub const m_Entity_bCopyDiffuseFromDefaultCubemap: usize = 0x570;
        pub const m_Entity_bEnabled: usize = 0x580;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Skyrunner_MagicBeamVData {
        pub const m_ExplodeParticle: usize = 0x1818;
        pub const m_ExplodeSound: usize = 0x18f8;
        pub const m_MagicBeamModifier: usize = 0x1908;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Boho_DoubleHitBuff {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Magician_AnimalCurse {
        pub const m_CachedTarget: usize = 0xf70;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Mirage_SandPhantom_ProcReady {
    }

    // Parent: CCitadelModifierVData
    pub mod CModifierFlyingStrikeTargetVData {
        pub const m_GrappleRopeParticle: usize = 0x750;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_ShieldGuy_Ability04 {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_VoidSphere {
        pub const m_bTeleported: usize = 0xd0;
        pub const m_particleStart: usize = 0xd4;
        pub const m_particleEnd: usize = 0xd8;
        pub const m_particleTrail: usize = 0xdc;
        pub const m_vecEndLocation: usize = 0xe0;
        pub const m_vecStartPosition: usize = 0xec;
        pub const m_vecEndLocationCaster: usize = 0xf8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_StompDebuff {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Burning {
    }

    // Parent: CCitadel_Modifier_BaseBulletPreRollProc
    pub mod CCitadel_Modifier_CritShot {
        pub const m_iShotID: usize = 0x228;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_DPS_Aura_VData {
        pub const m_AOECastParticle: usize = 0x18b8;
        pub const m_ActiveModifier: usize = 0x1998;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DebugIsVisibleToEnemyTeam {
    }

    // Parent: CScaleFunctionBase
    pub mod CScaleFunctionAbilityPropertyBase {
    }

    // Parent: CEntityComponent
    pub mod CCitadelPlayerClipComponent {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerItemShop {
        pub const m_CCitadelMinimapComponent: usize = 0x8e0;
        pub const m_iszSoundName: usize = 0x900;
        pub const m_vAudioOffset: usize = 0x908;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerLerpObject {
        pub const m_iszLerpTarget: usize = 0x8e0;
        pub const m_hLerpTarget: usize = 0x8e8;
        pub const m_iszLerpTargetAttachment: usize = 0x8f0;
        pub const m_hLerpTargetAttachment: usize = 0x8f8;
        pub const m_flLerpDuration: usize = 0x8fc;
        pub const m_bAttachedEntityWasParented: usize = 0x900;
        pub const m_bLerpRestoreMoveType: usize = 0x901;
        pub const m_bSingleLerpObject: usize = 0x902;
        pub const m_vecLerpingObjects: usize = 0x908;
        pub const m_iszLerpEffect: usize = 0x920;
        pub const m_iszLerpSound: usize = 0x928;
        pub const m_bAttachTouchingObject: usize = 0x930;
        pub const m_hEntityToWaitForDisconnect: usize = 0x934;
        pub const m_OnLerpStarted: usize = 0x938;
        pub const m_OnLerpFinished: usize = 0x950;
        pub const m_OnDetached: usize = 0x968;
    }

    // Parent: CPhysicsProp
    pub mod CPhysicsPropOverride {
    }

    // Parent: CBaseTrigger
    pub mod CTriggerSave {
        pub const m_bForceNewLevelUnit: usize = 0x8e0;
        pub const m_fDangerousTimer: usize = 0x8e4;
        pub const m_minHitPoints: usize = 0x8e8;
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_VacuumAura {
        pub const m_hEnemyHeroInVacuum: usize = 0x488;
        pub const m_nNumPlayersKilled: usize = 0x4a0;
        pub const m_tLastDamageTime: usize = 0x4a4;
    }

    // Parent: CCitadelModifierAuraVData
    pub mod CItemAOESilenceAuraVData {
        pub const m_empWaveParticle: usize = 0x7a8;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_Item_SelfBuffModifier {
    }

    // Parent: CPointEntity
    pub mod CPointHurt {
        pub const m_nDamage: usize = 0x4a0;
        pub const m_bitsDamageType: usize = 0x4a4;
        pub const m_flRadius: usize = 0x4a8;
        pub const m_flDelay: usize = 0x4ac;
        pub const m_strTarget: usize = 0x4b0;
        pub const m_pActivator: usize = 0x4b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Hero_Testing_Damage {
    }

    // Parent: CCitadel_Modifier_Root
    pub mod CCitadel_Modifier_Priest_Immobilize {
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Priest_WeaponSwapVData {
        pub const m_SelfModifier: usize = 0x1818;
        pub const m_SlowModifier: usize = 0x1828;
        pub const m_NewWeaponAbility: usize = 0x1838;
        pub const m_flMinTimeBeforeSwappingBack: usize = 0x1848;
        pub const m_CrossbowEntImpactParticle: usize = 0x1850;
        pub const m_CrossbowImpactParticle: usize = 0x1930;
        pub const m_cameraSequenceSwapWeapons: usize = 0x1a10;
    }

    // Parent: CitadelAbilityVData
    pub mod CAbility_Mirage_SandPhantom_VData {
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_Cadence_SilenceContraptionsVData {
        pub const m_DebuffModifier: usize = 0x750;
    }

    // Parent: CitadelItemVData
    pub mod CCitadel_Item_RescueBeamVData {
        pub const m_DispelAndHealModifier: usize = 0x18b8;
        pub const m_PullModifier: usize = 0x18c8;
    }

    // Parent: CBaseEntity
    pub mod CAI_GoalEntity {
        pub const m_iszActor: usize = 0x4a8;
        pub const m_iszGoal: usize = 0x4b0;
        pub const m_fStartActive: usize = 0x4b8;
        pub const m_SearchType: usize = 0x4bc;
        pub const m_iszConceptModifiers: usize = 0x4c0;
        pub const m_actors: usize = 0x4c8;
        pub const m_hGoalEntity: usize = 0x4e0;
        pub const m_flags: usize = 0x4e4;
    }

    // Parent: CCitadel_Item
    pub mod CCitadel_UtilityUpgrade_AOESmokeBomb {
    }

    // Parent: CCitadelModifierAura
    pub mod CCitadel_Modifier_ThermalDetonator_Thinker {
        pub const m_vecOrigin: usize = 0x108;
        pub const m_vecWorldSpaceMins: usize = 0x114;
        pub const m_vecWorldSpaceMaxs: usize = 0x120;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_Werewolf_TransformationWatcher {
    }

    // Parent: CCitadel_Ability_PrimaryWeaponVData
    pub mod CCitadel_Ability_Boho_PrimaryWeaponVData {
        pub const m_flBeadRadius: usize = 0x19c8;
        pub const m_flBeadCount: usize = 0x19cc;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Frank_SelfZap {
        pub const m_flTotalPendingHeal: usize = 0xf80;
    }

    // Parent: CCitadelBaseAbility
    pub mod CAbility_Rutger_RocketLauncher {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Tokamak_HeatSinks_Inherent {
        pub const m_nIntervalsElapsed: usize = 0xf70;
        pub const m_NextShotTime: usize = 0xf74;
        pub const m_flDissipationRate: usize = 0xf78;
        pub const m_flDissipationTime: usize = 0xf7c;
        pub const m_flHeatTime: usize = 0xf80;
        pub const m_flOverheatSoundTime: usize = 0xf84;
        pub const m_bOverheating: usize = 0xf88;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_TeleportToGangster {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_LashGrappleTarget {
        pub const m_nActiveRopeFX: usize = 0xd0;
    }

    // Parent: CCitadelModifierVData
    pub mod CCitadel_Modifier_PowerSurgeVData {
        pub const m_TracerParticle: usize = 0x750;
        pub const m_WeaponFxParticle: usize = 0x830;
        pub const m_strWeaponShootSound: usize = 0x910;
        pub const m_strBulletWhizSound: usize = 0x920;
        pub const m_DebuffModifier: usize = 0x930;
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_FullSpectrum {
    }

    // Parent: CCitadel_Modifier_BaseEventProc
    pub mod CCitadel_Modifier_SlowingTech_Proc {
    }

    // Parent: CBaseCombatCharacter
    pub mod CAI_BaseNPC {
        pub const m_currentNPCBasePhysicsHull: usize = 0xbb0;
        pub const m_bCheckContacts: usize = 0xbf0;
        pub const m_bForceDynamicHull: usize = 0xbf1;
        pub const m_lastNavLocation: usize = 0xc18;
        pub const m_flLastPositionTolerance: usize = 0xc58;
        pub const m_hSynchronizedPrimaryNPC: usize = 0xc5c;
        pub const m_vecSynchronizedSecondaryNPCs: usize = 0xc60;
        pub const m_NPCState: usize = 0xc78;
        pub const m_nPreModifierNPCState: usize = 0xc7c;
        pub const m_IdealNPCState: usize = 0xc80;
        pub const m_flLastStateChangeTime: usize = 0xc84;
        pub const m_pSenses: usize = 0xc88;
        pub const m_Conditions: usize = 0xc90;
        pub const m_ExistingConditionsAsync: usize = 0xcb4;
        pub const m_NonGatherConditions: usize = 0xcd8;
        pub const m_CustomInterruptConditions: usize = 0xcfc;
        pub const m_bForceConditionsGather: usize = 0xd20;
        pub const m_bConditionsGathered: usize = 0xd21;
        pub const m_bConditionsGatheredAsync: usize = 0xd22;
        pub const m_nTickGatheredConditions: usize = 0xd24;
        pub const m_flLastTimeIgnited: usize = 0xd2c;
        pub const m_flTimeIgnitionStarted: usize = 0xd30;
        pub const m_bDoPostRestoreRefindPath: usize = 0xd34;
        pub const m_pBehaviorHost: usize = 0xd38;
        pub const m_sDeathAnim: usize = 0xd40;
        pub const m_pEnemyServices: usize = 0xd48;
        pub const m_GiveUpOnDeadEnemyTimer: usize = 0xd50;
        pub const m_FailChooseEnemyTimer: usize = 0xd64;
        pub const m_flAcceptableTimeSeenEnemy: usize = 0xd6c;
        pub const m_bSkippedChooseEnemy: usize = 0xd70;
        pub const m_bIgnoreUnseenEnemies: usize = 0xd71;
        pub const m_hEnemyFilter: usize = 0xd74;
        pub const m_iszEnemyFilterName: usize = 0xd78;
        pub const m_hTargetEnt: usize = 0xd80;
        pub const m_bClearTargetOnScheduleEnd: usize = 0xd84;
        pub const m_flSoundWaitTime: usize = 0xd88;
        pub const m_nSoundPriority: usize = 0xd8c;
        pub const m_bSuppressFootsteps: usize = 0xd90;
        pub const m_afCapability: usize = 0xd94;
        pub const m_flGroundSpeed: usize = 0xd98;
        pub const m_lastTimeBashedObstacle: usize = 0xd9c;
        pub const m_nextMantleTime: usize = 0xda0;
        pub const m_flMoveWaitFinished: usize = 0xda4;
        pub const m_hOpeningDoor: usize = 0xda8;
        pub const m_UnreachableTargets: usize = 0xdb0;
        pub const m_hPathObstructor: usize = 0xdd0;
        pub const m_flJumpMaxRise: usize = 0xdd4;
        pub const m_flJumpMaxDrop: usize = 0xdd8;
        pub const m_flJumpMaxDist: usize = 0xddc;
        pub const m_flJumpMinDist: usize = 0xde0;
        pub const m_pFacingServices: usize = 0xde8;
        pub const m_pAnimGraphServices: usize = 0xdf0;
        pub const m_bAnimGraphIsAnimatingDeath: usize = 0xdf8;
        pub const m_bDeferredNavigation: usize = 0xdfa;
        pub const m_Scheduler: usize = 0xe00;
        pub const m_pNavigator: usize = 0xeb0;
        pub const m_pPathfinder: usize = 0xeb8;
        pub const m_pPathfinderNet: usize = 0xec0;
        pub const m_pMotor: usize = 0xed8;
        pub const m_flTimeLastMovement: usize = 0xee0;
        pub const m_flTimeLastFootstep: usize = 0xee4;
        pub const m_hFootstepEvent: usize = 0xee8;
        pub const m_CheckOnGroundTimer: usize = 0xef0;
        pub const m_strNavRestrictionVolume: usize = 0xef8;
        pub const m_afMemory: usize = 0xf00;
        pub const m_flLastAttackTime: usize = 0xf04;
        pub const m_flLastTookDamageTime: usize = 0xf08;
        pub const m_flLastTookDamageFromPlayerTime: usize = 0xf0c;
        pub const m_vecLastTookDamageAttackVector: usize = 0xf10;
        pub const m_iszSquadName: usize = 0xf20;
        pub const m_vecMySquadSlots: usize = 0xf28;
        pub const m_nPrevHealthDuringModifyDamage: usize = 0xf48;
        pub const m_bFadeCorpse: usize = 0xf50;
        pub const m_bImportantRagdoll: usize = 0xf51;
        pub const m_bDidDeathCleanup: usize = 0xf52;
        pub const m_bReceivedEnemyDeadNotification: usize = 0xf53;
        pub const m_flWaitFinished: usize = 0xf5c;
        pub const m_fNoDamageDecal: usize = 0xf60;
        pub const m_pVecAttachments: usize = 0xf68;
        pub const m_OnDamaged: usize = 0xf70;
        pub const m_OnStartDeath: usize = 0xf88;
        pub const m_OnDeath: usize = 0xfa0;
        pub const m_OnQuarterHealth: usize = 0xfb8;
        pub const m_OnHalfHealth: usize = 0xfd0;
        pub const m_OnThreeQuarterHealth: usize = 0xfe8;
        pub const m_OnFoundEnemy: usize = 0x1000;
        pub const m_OnLostEnemy: usize = 0x1020;
        pub const m_OnLostPlayer: usize = 0x1038;
        pub const m_OnDamagedByPlayer: usize = 0x1050;
        pub const m_OnDamagedByPlayerSquad: usize = 0x1068;
        pub const m_OnPlayerUse: usize = 0x1080;
        pub const m_OnUse: usize = 0x1098;
        pub const m_OnStartTouchMaterial: usize = 0x10b0;
        pub const m_OnEndTouchMaterial: usize = 0x10c8;
        pub const m_OnLostEnemyLOS: usize = 0x10e0;
        pub const m_OnLostPlayerLOS: usize = 0x10f8;
        pub const m_nAITraceMask: usize = 0x1110;
        pub const m_bDynamicAILOD: usize = 0x1118;
        pub const m_aiLOD: usize = 0x111c;
        pub const m_flThinkTime: usize = 0x1120;
        pub const m_nDebugCurIndex: usize = 0x1140;
    }

    // Parent: CBaseTrigger
    pub mod CTriggerNeutralShield {
        pub const m_vecPlayers: usize = 0x8e0;
        pub const m_vecNeutrals: usize = 0x8f8;
    }

    // Parent: CPointEntity
    pub mod CInfoAbilityTestBot {
    }

    // Parent: CPointEntity
    pub mod CCitadel_Prop_MidBossIndicator {
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CinematicIntro_Shrine {
    }

    // Parent: CBaseEntity
    pub mod CBasePlayerController {
        pub const m_nInButtonsWhichAreToggles: usize = 0x4a8;
        pub const m_nTickBase: usize = 0x4b0;
        pub const m_hPawn: usize = 0x4d8;
        pub const m_bKnownTeamMismatch: usize = 0x4dc;
        pub const m_nSplitScreenSlot: usize = 0x4e0;
        pub const m_hSplitOwner: usize = 0x4e4;
        pub const m_hSplitScreenPlayers: usize = 0x4e8;
        pub const m_bIsHLTV: usize = 0x500;
        pub const m_iConnected: usize = 0x504;
        pub const m_iszPlayerName: usize = 0x508;
        pub const m_szNetworkIDString: usize = 0x588;
        pub const m_fLerpTime: usize = 0x590;
        pub const m_bLagCompensation: usize = 0x594;
        pub const m_bPredict: usize = 0x595;
        pub const m_bIsLowViolence: usize = 0x59c;
        pub const m_bGamePaused: usize = 0x59d;
        pub const m_iIgnoreGlobalChat: usize = 0x6e8;
        pub const m_flLastPlayerTalkTime: usize = 0x6ec;
        pub const m_flLastEntitySteadyState: usize = 0x6f0;
        pub const m_nAvailableEntitySteadyState: usize = 0x6f4;
        pub const m_bHasAnySteadyStateEnts: usize = 0x6f8;
        pub const m_steamID: usize = 0x708;
        pub const m_bNoClipEnabled: usize = 0x710;
        pub const m_iDesiredFOV: usize = 0x714;
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_VampireBat_StealLife {
        pub const m_flFloatElapsedTime: usize = 0xf74;
        pub const m_bFloating: usize = 0x1398;
    }

    // Parent: CitadelAbilityVData
    pub mod CCitadel_Ability_Spinning_BladeVData {
        pub const m_DebuffModifier: usize = 0x1818;
        pub const m_CatchIndicator: usize = 0x1828;
        pub const m_CatchParticle: usize = 0x1908;
        pub const m_strThrowSound: usize = 0x19e8;
        pub const m_strReturnSound: usize = 0x19f8;
        pub const m_strCatchSound: usize = 0x1a08;
        pub const m_strFailSound: usize = 0x1a18;
        pub const m_strHitSound: usize = 0x1a28;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_CardToss_StackingResistShred {
    }

    // Parent: CCitadelBaseAbility
    pub mod CCitadel_Ability_Teleport {
        pub const m_bTeleportingToTarget: usize = 0xf70;
        pub const m_vTargetPosition: usize = 0xf74;
        pub const m_vTargetAngles: usize = 0xf80;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_InfiniteMagazineActive {
    }

    // Parent: CCitadel_Item_BubbleVData
    pub mod CCitadel_Item_Stasis_BombVData {
        pub const m_AuraModifier: usize = 0x19b8;
    }

    // Parent: CCitadelModifier
    pub mod CCitadel_Modifier_DebugScale {
        pub const m_flScale: usize = 0xd0;
    }

    pub mod CLogicBranchListLogicBranchListenerLastState_t {
        pub const LOGIC_BRANCH_LISTENER_NOT_INIT: i64 = 0x0;
        pub const LOGIC_BRANCH_LISTENER_ALL_TRUE: i64 = 0x1;
        pub const LOGIC_BRANCH_LISTENER_ALL_FALSE: i64 = 0x2;
        pub const LOGIC_BRANCH_LISTENER_MIXED: i64 = 0x3;
    }

    pub mod CAI_GoalEntitySearchType_t {
        pub const ST_ENTNAME: i64 = 0x0;
        pub const ST_CLASSNAME: i64 = 0x1;
    }

    pub mod CFuncMoverMove_t {
        pub const MOVE_LOOP: i64 = 0x0;
        pub const MOVE_OSCILLATE: i64 = 0x1;
        pub const MOVE_STOP_AT_END: i64 = 0x2;
    }

    pub mod CFuncRotatorRotate_t {
        pub const ROTATE_LOOP: i64 = 0x0;
        pub const ROTATE_OSCILLATE: i64 = 0x1;
        pub const ROTATE_STOP_AT_END: i64 = 0x2;
        pub const ROTATE_LOOK_AT_TARGET: i64 = 0x3;
        pub const ROTATE_LOOK_AT_TARGET_ONLY_YAW: i64 = 0x4;
        pub const ROTATE_RETURN_TO_INITIAL_ORIENTATION: i64 = 0x5;
    }

    pub mod PulseBestOutflowRules_t {
        pub const SORT_BY_NUMBER_OF_VALID_CRITERIA: i64 = 0x0;
        pub const SORT_BY_OUTFLOW_INDEX: i64 = 0x1;
    }

    pub mod CPhysicsPropCrateType_t {
        pub const CRATE_SPECIFIC_ITEM: i64 = 0x0;
        pub const CRATE_TYPE_COUNT: i64 = 0x1;
    }

    pub mod PulseCursorCancelPriority_t {
        pub const None: i64 = 0x0;
        pub const CancelOnSucceeded: i64 = 0x1;
        pub const SoftCancel: i64 = 0x2;
        pub const HardCancel: i64 = 0x3;
    }

    pub mod CBaseNPCMakerThreeStateDist_t {
        pub const TS_DIST_NEAREST: i64 = 0x0;
        pub const TS_DIST_FARTHEST: i64 = 0x1;
        pub const TS_DIST_DONT_CARE: i64 = 0x2;
    }

    pub mod PulseMethodCallMode_t {
        pub const SYNC_WAIT_FOR_COMPLETION: i64 = 0x0;
        pub const ASYNC_FIRE_AND_FORGET: i64 = 0x1;
    }

    pub mod CFuncMoverFollowConstraint_t {
        pub const FOLLOW_CONSTRAINT_DISTANCE: i64 = 0x0;
        pub const FOLLOW_CONSTRAINT_SPRING: i64 = 0x1;
    }

    pub mod CFuncMoverFollowEntityDirection_t {
        pub const FOLLOW_ENTITY_BIDIRECTIONAL: i64 = 0x0;
        pub const FOLLOW_ENTITY_FORWARD: i64 = 0x1;
        pub const FOLLOW_ENTITY_REVERSE: i64 = 0x2;
    }

    pub mod CFuncMoverTransitionToPathNodeAction_t {
        pub const TRANSITION_TO_PATH_NODE_ACTION_NONE: i64 = 0x0;
        pub const TRANSITION_TO_PATH_NODE_ACTION_START_FORWARD: i64 = 0x1;
        pub const TRANSITION_TO_PATH_NODE_ACTION_START_REVERSE: i64 = 0x2;
        pub const TRANSITION_TO_PATH_NODE_TRANSITIONING: i64 = 0x3;
    }

    pub mod CBaseNPCMakerVisibilityCriterion_t {
        pub const VC_YES_LOS: i64 = 0x0;
        pub const VC_NO_LOS: i64 = 0x1;
        pub const VC_DONT_CARE: i64 = 0x2;
        pub const VC_YES_IN_VIEWCONE: i64 = 0x3;
        pub const VC_NO_IN_VIEWCONE: i64 = 0x4;
        pub const VC_YES_LOS_VIEWCONE: i64 = 0x5;
        pub const VC_NO_LOS_VIEWCONE: i64 = 0x6;
    }

    pub mod CFuncMoverOrientationUpdate_t {
        pub const ORIENTATION_FORWARD_PATH: i64 = 0x0;
        pub const ORIENTATION_FORWARD_PATH_AND_FIXED_PITCH: i64 = 0x1;
        pub const ORIENTATION_FORWARD_PATH_AND_UP_CONTROL_POINT: i64 = 0x2;
        pub const ORIENTATION_MATCH_CONTROL_POINT: i64 = 0x3;
        pub const ORIENTATION_FIXED: i64 = 0x4;
        pub const ORIENTATION_FACE_PLAYER: i64 = 0x5;
        pub const ORIENTATION_FORWARD_MOVEMENT_DIRECTION: i64 = 0x6;
        pub const ORIENTATION_FORWARD_MOVEMENT_DIRECTION_AND_UP_CONTROL_POINT: i64 = 0x7;
        pub const ORIENTATION_FACE_ENTITY: i64 = 0x8;
    }

}
