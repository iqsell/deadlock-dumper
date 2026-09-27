// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

#![allow(non_upper_case_globals, non_camel_case_types, unused)]

pub mod pulse_system_dll {

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_TestDomainDestroyFakeEntity {
    }

    // Parent: CPulseCell_WaitForCursorsWithTagBase
    pub mod CPulseCell_WaitForCursorsWithTag {
        pub const m_bTagSelfWhenComplete: usize = 0x98;
        pub const m_nDesiredKillPriority: usize = 0x9c;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Test_NoInflow {
    }

    // Parent: CBasePulseGraphInstance
    pub mod CPulseGraphInstance_TestDomain_FakeEntityOwner {
    }

    // Parent: None
    pub mod CPulseCell_Base {
        pub const m_nEditorNodeID: usize = 0x8;
    }

    // Parent: CPulse_OutflowConnection
    pub mod CPulse_ResumePoint {
    }

    // Parent: CPulseExecCursor
    pub mod CTestDomainDerived_Cursor {
        pub const m_nCursorValueA: usize = 0xd0;
        pub const m_nCursorValueB: usize = 0xd4;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_PickBestOutflowSelector {
        pub const m_nCheckType: usize = 0x48;
        pub const m_OutflowList: usize = 0x50;
    }

    // Parent: None
    pub mod CPulseTestFuncs_LibraryA {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_WaitForObservable {
        pub const m_Condition: usize = 0x48;
        pub const m_OnTrue: usize = 0xc0;
    }

    // Parent: None
    pub mod CPulse_OutflowConnection {
        pub const m_SourceOutflowName: usize = 0x0;
        pub const m_nDestChunk: usize = 0x10;
        pub const m_nInstruction: usize = 0x14;
        pub const m_OutflowRegisterMap: usize = 0x18;
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

    // Parent: CPulseGraphInstance_TestDomain
    pub mod CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_FireCursors {
        pub const m_Outflows: usize = 0x48;
        pub const m_bWaitForChildOutflows: usize = 0x60;
        pub const m_OnFinished: usize = 0x68;
        pub const m_OnCanceled: usize = 0xb0;
    }

    // Parent: None
    pub mod CPulseCell_TimelineTimelineEvent_t {
        pub const m_flTimeFromPrevious: usize = 0x0;
        pub const m_EventOutflow: usize = 0x8;
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

    // Parent: CPulseCell_BaseRequirement
    pub mod CPulseCell_IsRequirementValid {
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_Gradient {
        pub const m_Gradient: usize = 0x48;
    }

    // Parent: None
    pub mod CPulseCursorFuncs {
    }

    // Parent: None
    pub mod PulseNodeDynamicOutflows_tDynamicOutflow_t {
        pub const m_OutflowID: usize = 0x0;
        pub const m_Connection: usize = 0x8;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Test_MultiOutflow_WithParams {
        pub const m_Out1: usize = 0x48;
        pub const m_Out2: usize = 0x90;
    }

    // Parent: None
    pub mod CBasePulseGraphInstance {
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_GraphHook {
        pub const m_HookName: usize = 0x80;
    }

    // Parent: CPulse_ResumePoint
    pub mod SignatureOutflow_Resume {
    }

    // Parent: None
    pub mod CPulseCell_Test_MultiOutflow_WithParams_YieldingCursorState_t {
        pub const nTestStep: usize = 0x0;
    }

    // Parent: CPulseExecCursor
    pub mod CPulseTurtleGraphicsCursor {
        pub const m_Color: usize = 0xd0;
        pub const m_vPos: usize = 0xd4;
        pub const m_flHeadingDeg: usize = 0xdc;
        pub const m_bPenUp: usize = 0xe0;
    }

    // Parent: None
    pub mod CPulseCell_TestWaitWithCursorStateCursorState_t {
        pub const flWaitValue: usize = 0x0;
        pub const bFailOnCancel: usize = 0x4;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Inflow_BaseEntrypoint {
        pub const m_EntryChunk: usize = 0x48;
        pub const m_RegisterMap: usize = 0x50;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Test_MultiInflow_NoDefault {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_WaitForCursorsWithTagBase {
        pub const m_nCursorsAllowedToWait: usize = 0x48;
        pub const m_WaitComplete: usize = 0x50;
    }

    // Parent: None
    pub mod CPulse_InvokeBinding {
        pub const m_RegisterMap: usize = 0x0;
        pub const m_FuncName: usize = 0x30;
        pub const m_nCellIndex: usize = 0x40;
        pub const m_nSrcChunk: usize = 0x44;
        pub const m_nSrcInstruction: usize = 0x48;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_IntervalTimer {
        pub const m_Completed: usize = 0x48;
        pub const m_OnInterval: usize = 0x90;
    }

    // Parent: None
    pub mod CPulseTestScriptLib {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_BaseLerp {
        pub const m_WakeResume: usize = 0x48;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_TestValue50 {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        pub const m_Out1: usize = 0x48;
        pub const m_AsyncChild1: usize = 0x90;
        pub const m_AsyncChild2: usize = 0xd8;
        pub const m_YieldResume1: usize = 0x120;
        pub const m_YieldResume2: usize = 0x168;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_Curve {
        pub const m_Curve: usize = 0x48;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_EventHandler {
        pub const m_EventName: usize = 0x80;
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_BaseFlow {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_TestDomainTracepoint {
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

    // Parent: CPulseGraphInstance_TestDomain
    pub mod CPulseGraphInstance_TestDomain_Derived {
        pub const m_nInstanceValueX: usize = 0x160;
    }

    // Parent: None
    pub mod CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
        pub const m_TagName: usize = 0x0;
    }

    // Parent: None
    pub mod CPulseArraylib {
    }

    // Parent: CBasePulseGraphInstance
    pub mod CPulseGraphInstance_TestDomain {
        pub const m_bIsRunningUnitTests: usize = 0x130;
        pub const m_bExplicitTimeStepping: usize = 0x131;
        pub const m_bExpectingToDestroyWithYieldedCursors: usize = 0x132;
        pub const m_bQuietTracepoints: usize = 0x133;
        pub const m_bExpectingCursorTerminatedDueToMaxInstructions: usize = 0x134;
        pub const m_nCursorsTerminatedDueToMaxInstructions: usize = 0x138;
        pub const m_nNextValidateIndex: usize = 0x13c;
        pub const m_Tracepoints: usize = 0x140;
        pub const m_bTestYesOrNoPath: usize = 0x158;
    }

    // Parent: CPulse_OutflowConnection
    pub mod SignatureOutflow_Continue {
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

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_TestExplicitYesNo {
        pub const m_Yes: usize = 0x48;
        pub const m_No: usize = 0x90;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_TestRandomYesNo {
        pub const m_Yes: usize = 0x48;
        pub const m_No: usize = 0x90;
    }

    // Parent: None
    pub mod CPulseCell_Outflow_CycleOrderedInstanceState_t {
        pub const m_nNextIndex: usize = 0x0;
    }

    // Parent: None
    pub mod CPulseCell_LimitCountInstanceState_t {
        pub const m_nCurrentCount: usize = 0x0;
    }

    // Parent: None
    pub mod FakeEntity_tAPI {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Test_MultiInflow_WithDefault {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_DebugLog {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_BaseYieldingInflow {
    }

    // Parent: None
    pub mod PulseNodeDynamicOutflows_t {
        pub const m_Outflows: usize = 0x0;
    }

    // Parent: None
    pub mod CPulseCell_IsRequirementValidCriteria_t {
        pub const m_bIsValid: usize = 0x0;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_ObservableVariableListener {
        pub const m_nBlackboardReference: usize = 0x80;
        pub const m_bSelfReference: usize = 0x82;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleOrdered {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: None
    pub mod PulseSelectorOutflowList_t {
        pub const m_Outflows: usize = 0x0;
    }

    // Parent: CBasePulseGraphInstance
    pub mod CPulseGraphInstance_TurtleGraphics {
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Val_TestDomainGetEntityName {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Inflow_Wait {
        pub const m_WakeResume: usize = 0x48;
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_TestWaitWithCursorState {
        pub const m_WakeResume: usize = 0x48;
        pub const m_WakeCancel: usize = 0x90;
        pub const m_WakeFail: usize = 0xd8;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleShuffled {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: CPulseCell_Inflow_BaseEntrypoint
    pub mod CPulseCell_Inflow_Method {
        pub const m_MethodName: usize = 0x80;
        pub const m_Description: usize = 0x90;
        pub const m_bIsPublic: usize = 0x98;
        pub const m_ReturnType: usize = 0xa0;
        pub const m_Args: usize = 0xb8;
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_BaseValue {
    }

    // Parent: CPulseCell_BaseState
    pub mod CPulseCell_BooleanSwitchState {
        pub const m_Condition: usize = 0x48;
        pub const m_SubGraph: usize = 0xc0;
        pub const m_WhenTrue: usize = 0x108;
        pub const m_WhenFalse: usize = 0x150;
    }

    // Parent: None
    pub mod FakeEntityDerivedB_tAPI {
    }

    // Parent: CPulseCell_BaseYieldingInflow
    pub mod CPulseCell_Inflow_Yield {
        pub const m_UnyieldResume: usize = 0x48;
    }

    // Parent: None
    pub mod CPulseMathlib {
    }

    // Parent: CPulseCell_Base
    pub mod CPulseCell_Unknown {
        pub const m_UnknownKeys: usize = 0x48;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Outflow_CycleRandom {
        pub const m_Outputs: usize = 0x48;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_PublicOutput {
        pub const m_OutputIndex: usize = 0x48;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Val_TestDomainFindEntityByName {
    }

    // Parent: None
    pub mod CPulse_BlackboardReference {
        pub const m_hBlackboardResource: usize = 0x0;
        pub const m_BlackboardResource: usize = 0x8;
        pub const m_nNodeID: usize = 0x18;
        pub const m_NodeName: usize = 0x20;
    }

    // Parent: CPulseCell_BaseValue
    pub mod CPulseCell_Value_RandomInt {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_TestDomainEntFire {
        pub const m_Input: usize = 0x48;
    }

    // Parent: None
    pub mod FakeEntityDerivedA_tAPI {
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_ExampleSelector {
        pub const m_OutflowList: usize = 0x48;
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

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_InlineNodeSkipSelector {
        pub const m_nFlowNodeID: usize = 0x48;
        pub const m_bAnd: usize = 0x4c;
        pub const m_PassOutflow: usize = 0x50;
        pub const m_FailOutflow: usize = 0x68;
    }

    // Parent: None
    pub mod CPulseCell_ExampleCriteriaCriteria_t {
        pub const m_flFloatValue1: usize = 0x0;
        pub const m_flFloatValue2: usize = 0x4;
        pub const m_bMyBool: usize = 0x8;
    }

    // Parent: CPulseCell_BaseRequirement
    pub mod CPulseCell_ExampleCriteria {
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

    // Parent: None
    pub mod PulseObservableBoolExpression_t {
        pub const m_EvaluateConnection: usize = 0x0;
        pub const m_DependentObservableVars: usize = 0x48;
        pub const m_DependentObservableBlackboardReferences: usize = 0x60;
    }

    // Parent: None
    pub mod CPulseCell_LimitCountCriteria_t {
        pub const m_bLimitCountPasses: usize = 0x0;
    }

    // Parent: CPulseCell_BaseFlow
    pub mod CPulseCell_Step_TestDomainCreateFakeEntity {
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

    pub mod PulseBestOutflowRules_t {
        pub const SORT_BY_NUMBER_OF_VALID_CRITERIA: i64 = 0x0;
        pub const SORT_BY_OUTFLOW_INDEX: i64 = 0x1;
    }

    pub mod PulseTestEnumShape_t {
        pub const CIRCLE: i64 = 0x64;
        pub const SQUARE: i64 = 0xc8;
        pub const TRIANGLE: i64 = 0x12c;
    }

    pub mod PulseCursorCancelPriority_t {
        pub const None: i64 = 0x0;
        pub const CancelOnSucceeded: i64 = 0x1;
        pub const SoftCancel: i64 = 0x2;
        pub const HardCancel: i64 = 0x3;
    }

    pub mod PulseMethodCallMode_t {
        pub const SYNC_WAIT_FOR_COMPLETION: i64 = 0x0;
        pub const ASYNC_FIRE_AND_FORGET: i64 = 0x1;
    }

    pub mod PulseTestEnumColor_t {
        pub const BLACK: i64 = 0x0;
        pub const WHITE: i64 = 0x1;
        pub const RED: i64 = 0x2;
        pub const GREEN: i64 = 0x3;
        pub const BLUE: i64 = 0x4;
    }

}
