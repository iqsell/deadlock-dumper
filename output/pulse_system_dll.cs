// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

namespace DeadlockDumper.Schemas {

    public static class PulseSystemDll {

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_TestDomainDestroyFakeEntity {
        }

        // Parent: CPulseCell_WaitForCursorsWithTagBase
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x98; // bool
            public const nint m_nDesiredKillPriority = 0x9c; // PulseCursorCancelPriority_t
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Test_NoInflow {
        }

        // Parent: CBasePulseGraphInstance
        public static class CPulseGraphInstance_TestDomain_FakeEntityOwner {
        }

        // Parent: None
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }

        // Parent: CPulse_OutflowConnection
        public static class CPulse_ResumePoint {
        }

        // Parent: CPulseExecCursor
        public static class CTestDomainDerived_Cursor {
            public const nint m_nCursorValueA = 0xd0; // int32
            public const nint m_nCursorValueB = 0xd4; // int32
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_PickBestOutflowSelector {
            public const nint m_nCheckType = 0x48; // PulseBestOutflowRules_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }

        // Parent: None
        public static class CPulseTestFuncs_LibraryA {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xc0; // CPulse_ResumePoint
        }

        // Parent: None
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }

        // Parent: None
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // PulseSymbol_t
            public const nint m_DomainSubType = 0x18; // CPulseValueFullType
            public const nint m_ParentMapName = 0x30; // PulseSymbol_t
            public const nint m_ParentXmlName = 0x40; // PulseSymbol_t
            public const nint m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0xb0; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xc8; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xe0; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xf8; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }

        // Parent: CPulseGraphInstance_TestDomain
        public static class CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xb0; // CPulse_ResumePoint
        }

        // Parent: None
        public static class CPulseCell_TimelineTimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }

        // Parent: None
        public static class CPulseCell_IntervalTimerCursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
            public const nint m_flWaitInterval = 0x8; // float32
            public const nint m_flWaitIntervalHigh = 0xc; // float32
            public const nint m_bCompleteOnNextWake = 0x10; // bool
        }

        // Parent: CPulseCell_Base
        public static class CPulseCell_BaseRequirement {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_BaseState {
        }

        // Parent: None
        public static class OutflowWithRequirements_t {
            public const nint m_Connection = 0x0; // CPulse_OutflowConnection
            public const nint m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            public const nint m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }

        // Parent: CPulseCell_BaseRequirement
        public static class CPulseCell_IsRequirementValid {
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Value_Gradient {
            public const nint m_Gradient = 0x48; // CColorGradient
        }

        // Parent: None
        public static class CPulseCursorFuncs {
        }

        // Parent: None
        public static class PulseNodeDynamicOutflows_tDynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Test_MultiOutflow_WithParams {
            public const nint m_Out1 = 0x48; // SignatureOutflow_Continue
            public const nint m_Out2 = 0x90; // SignatureOutflow_Continue
        }

        // Parent: None
        public static class CBasePulseGraphInstance {
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x80; // PulseSymbol_t
        }

        // Parent: CPulse_ResumePoint
        public static class SignatureOutflow_Resume {
        }

        // Parent: None
        public static class CPulseCell_Test_MultiOutflow_WithParams_YieldingCursorState_t {
            public const nint nTestStep = 0x0; // int32
        }

        // Parent: CPulseExecCursor
        public static class CPulseTurtleGraphicsCursor {
            public const nint m_Color = 0xd0; // Color
            public const nint m_vPos = 0xd4; // Vector2D
            public const nint m_flHeadingDeg = 0xdc; // float32
            public const nint m_bPenUp = 0xe0; // bool
        }

        // Parent: None
        public static class CPulseCell_TestWaitWithCursorStateCursorState_t {
            public const nint flWaitValue = 0x0; // float32
            public const nint bFailOnCancel = 0x4; // bool
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Test_MultiInflow_NoDefault {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }

        // Parent: None
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x30; // PulseSymbol_t
            public const nint m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x48; // int32
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_IntervalTimer {
            public const nint m_Completed = 0x48; // CPulse_ResumePoint
            public const nint m_OnInterval = 0x90; // SignatureOutflow_Continue
        }

        // Parent: None
        public static class CPulseTestScriptLib {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Value_TestValue50 {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_Test_MultiOutflow_WithParams_Yielding {
            public const nint m_Out1 = 0x48; // SignatureOutflow_Continue
            public const nint m_AsyncChild1 = 0x90; // SignatureOutflow_Continue
            public const nint m_AsyncChild2 = 0xd8; // SignatureOutflow_Continue
            public const nint m_YieldResume1 = 0x120; // SignatureOutflow_Resume
            public const nint m_YieldResume2 = 0x168; // SignatureOutflow_Resume
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Value_Curve {
            public const nint m_Curve = 0x48; // CPiecewiseCurve
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x80; // PulseSymbol_t
        }

        // Parent: CPulseCell_Base
        public static class CPulseCell_BaseFlow {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_TestDomainTracepoint {
        }

        // Parent: None
        public static class CPulseCell_Outflow_CycleShuffledInstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }

        // Parent: None
        public static class CPulseCell_BaseLerpCursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }

        // Parent: CPulseGraphInstance_TestDomain
        public static class CPulseGraphInstance_TestDomain_Derived {
            public const nint m_nInstanceValueX = 0x160; // int32
        }

        // Parent: None
        public static class CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
            public const nint m_TagName = 0x0; // PulseSymbol_t
        }

        // Parent: None
        public static class CPulseArraylib {
        }

        // Parent: CBasePulseGraphInstance
        public static class CPulseGraphInstance_TestDomain {
            public const nint m_bIsRunningUnitTests = 0x130; // bool
            public const nint m_bExplicitTimeStepping = 0x131; // bool
            public const nint m_bExpectingToDestroyWithYieldedCursors = 0x132; // bool
            public const nint m_bQuietTracepoints = 0x133; // bool
            public const nint m_bExpectingCursorTerminatedDueToMaxInstructions = 0x134; // bool
            public const nint m_nCursorsTerminatedDueToMaxInstructions = 0x138; // int32
            public const nint m_nNextValidateIndex = 0x13c; // int32
            public const nint m_Tracepoints = 0x140; // CUtlVector<CUtlString>
            public const nint m_bTestYesOrNoPath = 0x158; // bool
        }

        // Parent: CPulse_OutflowConnection
        public static class SignatureOutflow_Continue {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xb0; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x80; // PulseSymbol_t
            public const nint m_SourceOutput = 0x90; // PulseSymbol_t
            public const nint m_ExpectedParamType = 0xa0; // CPulseValueFullType
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Outflow_TestExplicitYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x90; // CPulse_OutflowConnection
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Outflow_TestRandomYesNo {
            public const nint m_Yes = 0x48; // CPulse_OutflowConnection
            public const nint m_No = 0x90; // CPulse_OutflowConnection
        }

        // Parent: None
        public static class CPulseCell_Outflow_CycleOrderedInstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }

        // Parent: None
        public static class CPulseCell_LimitCountInstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }

        // Parent: None
        public static class FakeEntity_tAPI {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Test_MultiInflow_WithDefault {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_DebugLog {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_BaseYieldingInflow {
        }

        // Parent: None
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }

        // Parent: None
        public static class CPulseCell_IsRequirementValidCriteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_bSelfReference = 0x82; // bool
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: None
        public static class PulseSelectorOutflowList_t {
            public const nint m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }

        // Parent: CBasePulseGraphInstance
        public static class CPulseGraphInstance_TurtleGraphics {
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Val_TestDomainGetEntityName {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_TestWaitWithCursorState {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
            public const nint m_WakeCancel = 0x90; // CPulse_ResumePoint
            public const nint m_WakeFail = 0xd8; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x80; // PulseSymbol_t
            public const nint m_Description = 0x90; // CUtlString
            public const nint m_bIsPublic = 0x98; // bool
            public const nint m_ReturnType = 0xa0; // CPulseValueFullType
            public const nint m_Args = 0xb8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }

        // Parent: CPulseCell_Base
        public static class CPulseCell_BaseValue {
        }

        // Parent: CPulseCell_BaseState
        public static class CPulseCell_BooleanSwitchState {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_SubGraph = 0xc0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }

        // Parent: None
        public static class FakeEntityDerivedB_tAPI {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: None
        public static class CPulseMathlib {
        }

        // Parent: CPulseCell_Base
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Val_TestDomainFindEntityByName {
        }

        // Parent: None
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            public const nint m_BlackboardResource = 0x8; // PulseSymbol_t
            public const nint m_nNodeID = 0x18; // PulseDocNodeID_t
            public const nint m_NodeName = 0x20; // CGlobalSymbol
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Value_RandomInt {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_TestDomainEntFire {
            public const nint m_Input = 0x48; // CUtlString
        }

        // Parent: None
        public static class FakeEntityDerivedA_tAPI {
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_ExampleSelector {
            public const nint m_OutflowList = 0x48; // PulseSelectorOutflowList_t
        }

        // Parent: None
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // PulseSymbol_t
            public const nint m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x18; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x48; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x4c; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x50; // int32
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_InlineNodeSkipSelector {
            public const nint m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_bAnd = 0x4c; // bool
            public const nint m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            public const nint m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }

        // Parent: None
        public static class CPulseCell_ExampleCriteriaCriteria_t {
            public const nint m_flFloatValue1 = 0x0; // float32
            public const nint m_flFloatValue2 = 0x4; // float32
            public const nint m_bMyBool = 0x8; // bool
        }

        // Parent: CPulseCell_BaseRequirement
        public static class CPulseCell_ExampleCriteria {
        }

        // Parent: CPulseCell_BaseRequirement
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }

        // Parent: CPulseCell_BaseYieldingInflow
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // PulseSymbol_t
            public const nint m_GameBlackboard = 0x58; // PulseSymbol_t
            public const nint m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x80; // CPulse_ResumePoint
        }

        // Parent: None
        public static class PulseObservableBoolExpression_t {
            public const nint m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            public const nint m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            public const nint m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }

        // Parent: None
        public static class CPulseCell_LimitCountCriteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }

        // Parent: CPulseCell_BaseFlow
        public static class CPulseCell_Step_TestDomainCreateFakeEntity {
        }

        // Parent: CPulseCell_WaitForCursorsWithTagBase
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x98; // int32
        }

        // Parent: CPulseCell_BaseValue
        public static class CPulseCell_Value_RandomFloat {
        }

        // Parent: None
        public static class CPulseExecCursor {
        }

        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1,
        }

        public enum PulseTestEnumShape_t : uint {
            CIRCLE = 0x64,
            SQUARE = 0xc8,
            TRIANGLE = 0x12c,
        }

        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3,
        }

        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1,
        }

        public enum PulseTestEnumColor_t : uint {
            BLACK = 0x0,
            WHITE = 0x1,
            RED = 0x2,
            GREEN = 0x3,
            BLUE = 0x4,
        }

    }
}
