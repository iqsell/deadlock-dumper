// Generated using deadlock-dumper
// 2026-09-27T23:17:11Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: particles.dll  classes=68  enums=3
    namespace particles_dll {

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

        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields: 2
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
            constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9c; // PulseCursorCancelPriority_t
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Base {
            constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
        }

        // Parent: CPulse_OutflowConnection
        // Fields: 0
        namespace CPulse_ResumePoint {
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 2
        namespace CPulseCell_PickBestOutflowSelector {
            constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
            constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }

        // Parent: CParticleCollectionBindingInstance
        // Fields: 0
        namespace CParticleBindingRealPulse {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 2
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
            constexpr std::ptrdiff_t m_OnTrue = 0xc0; // CPulse_ResumePoint
        }

        // Parent: None
        // Fields: 4
        namespace CPulse_OutflowConnection {
            constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
            constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
            constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }

        // Parent: None
        // Fields: 14
        namespace CPulseGraphDef {
            constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
            constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
            constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
            constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
            constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            constexpr std::ptrdiff_t m_InvokeBindings = 0xb0; // CUtlVector<CPulse_InvokeBinding*>
            constexpr std::ptrdiff_t m_CallInfos = 0xc8; // CUtlVector<CPulse_CallInfo*>
            constexpr std::ptrdiff_t m_Constants = 0xe0; // CUtlVector<CPulse_Constant>
            constexpr std::ptrdiff_t m_DomainValues = 0xf8; // CUtlVector<CPulse_DomainValue>
            constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 4
        namespace CPulseCell_FireCursors {
            constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
            constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
            constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_TimelineTimelineEvent_t {
            constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
            constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }

        // Parent: None
        // Fields: 5
        namespace CPulseCell_IntervalTimerCursorState_t {
            constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
            constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
            constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xc; // float32
            constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
        }

        // Parent: CPulseCell_Base
        // Fields: 0
        namespace CPulseCell_BaseRequirement {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 0
        namespace CPulseCell_BaseState {
        }

        // Parent: None
        // Fields: 4
        namespace OutflowWithRequirements_t {
            constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
            constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }

        // Parent: CPulseCell_BaseRequirement
        // Fields: 0
        namespace CPulseCell_IsRequirementValid {
        }

        // Parent: CPulseCell_BaseValue
        // Fields: 1
        namespace CPulseCell_Value_Gradient {
            constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCursorFuncs {
        }

        // Parent: None
        // Fields: 2
        namespace PulseNodeDynamicOutflows_tDynamicOutflow_t {
            constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
            constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
        }

        // Parent: None
        // Fields: 0
        namespace CBasePulseGraphInstance {
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields: 1
        namespace CPulseCell_Inflow_GraphHook {
            constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
        }

        // Parent: CPulse_ResumePoint
        // Fields: 0
        namespace SignatureOutflow_Resume {
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 2
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 2
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
            constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
        }

        // Parent: None
        // Fields: 5
        namespace CPulse_InvokeBinding {
            constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
            constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
            constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 2
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
            constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 1
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_BaseValue
        // Fields: 1
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields: 1
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
        }

        // Parent: CPulseCell_Base
        // Fields: 0
        namespace CPulseCell_BaseFlow {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleShuffledInstanceState_t {
            constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_BaseLerpCursorState_t {
            constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
            constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
            constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
        }

        // Parent: None
        // Fields: 0
        namespace CPulseArraylib {
        }

        // Parent: CPulse_OutflowConnection
        // Fields: 0
        namespace SignatureOutflow_Continue {
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 4
        namespace CPulseCell_Timeline {
            constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
            constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
            constexpr std::ptrdiff_t m_OnCanceled = 0xb0; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields: 3
        namespace CPulseCell_Inflow_EntOutputHandler {
            constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
            constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
            constexpr std::ptrdiff_t m_ExpectedParamType = 0xa0; // CPulseValueFullType
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
            constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
        }

        // Parent: CBasePulseGraphInstance
        // Fields: 0
        namespace CParticleCollectionBindingInstance {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_LimitCountInstanceState_t {
            constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 0
        namespace CPulseCell_Step_DebugLog {
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 0
        namespace CPulseCell_BaseYieldingInflow {
        }

        // Parent: None
        // Fields: 1
        namespace PulseNodeDynamicOutflows_t {
            constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_IsRequirementValidCriteria_t {
            constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields: 2
        namespace CPulseCell_Inflow_ObservableVariableListener {
            constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 1
        namespace CPulseCell_Outflow_CycleOrdered {
            constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: None
        // Fields: 1
        namespace PulseSelectorOutflowList_t {
            constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 1
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 1
        namespace CPulseCell_Outflow_CycleShuffled {
            constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: CPulseCell_Inflow_BaseEntrypoint
        // Fields: 5
        namespace CPulseCell_Inflow_Method {
            constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
            constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
            constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
            constexpr std::ptrdiff_t m_ReturnType = 0xa0; // CPulseValueFullType
            constexpr std::ptrdiff_t m_Args = 0xb8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }

        // Parent: CPulseCell_Base
        // Fields: 0
        namespace CPulseCell_BaseValue {
        }

        // Parent: CPulseCell_BaseState
        // Fields: 4
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
            constexpr std::ptrdiff_t m_SubGraph = 0xc0; // CPulse_OutflowConnection
            constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
            constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 1
        namespace CPulseCell_Inflow_Yield {
            constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }

        // Parent: None
        // Fields: 0
        namespace CPulseMathlib {
        }

        // Parent: CPulseCell_Base
        // Fields: 1
        namespace CPulseCell_Unknown {
            constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 1
        namespace CPulseCell_Outflow_CycleRandom {
            constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 1
        namespace CPulseCell_Step_PublicOutput {
            constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }

        // Parent: None
        // Fields: 4
        namespace CPulse_BlackboardReference {
            constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
            constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
            constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
        }

        // Parent: CPulseCell_BaseValue
        // Fields: 0
        namespace CPulseCell_Value_RandomInt {
        }

        // Parent: None
        // Fields: 6
        namespace CPulse_CallInfo {
            constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
            constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
            constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
            constexpr std::ptrdiff_t m_nSrcChunk = 0x4c; // PulseRuntimeChunkIndex_t
            constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
        }

        // Parent: CPulseCell_BaseFlow
        // Fields: 4
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            constexpr std::ptrdiff_t m_bAnd = 0x4c; // bool
            constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }

        // Parent: CPulseCell_BaseRequirement
        // Fields: 1
        namespace CPulseCell_LimitCount {
            constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
        }

        // Parent: CPulseCell_BaseYieldingInflow
        // Fields: 5
        namespace CPulseCell_Step_CallExternalMethod {
            constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
            constexpr std::ptrdiff_t m_GameBlackboard = 0x58; // PulseSymbol_t
            constexpr std::ptrdiff_t m_ExpectedArgs = 0x68; // CUtlLeanVector<CPulseRuntimeMethodArg>
            constexpr std::ptrdiff_t m_nAsyncCallMode = 0x78; // PulseMethodCallMode_t
            constexpr std::ptrdiff_t m_OnFinished = 0x80; // CPulse_ResumePoint
        }

        // Parent: None
        // Fields: 3
        namespace PulseObservableBoolExpression_t {
            constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_LimitCountCriteria_t {
            constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
        }

        // Parent: CPulseCell_WaitForCursorsWithTagBase
        // Fields: 1
        namespace CPulseCell_CursorQueue {
            constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
        }

        // Parent: CPulseCell_BaseValue
        // Fields: 0
        namespace CPulseCell_Value_RandomFloat {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseExecCursor {
        }

    } // namespace particles_dll
} // namespace schemas
} // namespace deadlock_dumper
