// Generated using deadlock-dumper
// 2026-09-27T10:33:05Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: animationsystem.dll  classes=68  enums=3
    namespace animationsystem_dll {

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

        // Parent: tools/images/pulse_editor/cursor_tag.png
        // Fields: 3
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t  = 0xb7df4100; // CPulseCell_WaitForCursorsWithTagBase
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t ÈPwþ = 0xb7b8c220; // 
        }

        // Parent: m_StartTime
        // Fields: 0
        namespace CPulseCell_Base {
        }

        // Parent: None
        // Fields: 1
        namespace CPulse_ResumePoint {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_OutflowConnection
        }

        // Parent: tools/images/pulse_editor/requirements.png
        // Fields: 2
        namespace CPulseCell_PickBestOutflowSelector {
            constexpr std::ptrdiff_t  = 0xb7de76a0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CParticleBindingRealPulse {
            constexpr std::ptrdiff_t  = 0x0; // CParticleCollectionBindingInstance
            constexpr std::ptrdiff_t CParticleBindingRealPulse = 0x138; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t  = 0xb7df3790; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_OutflowConnection {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphDef {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_FireCursors {
            constexpr std::ptrdiff_t  = 0xb7df2a30; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TimelineTimelineEvent_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IntervalTimerCursorState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseRequirement {
            constexpr std::ptrdiff_t  = 0xb7df0e80; // CPulseCell_Base
        }

        // Parent: Àß·ý
        // Fields: 2
        namespace CPulseCell_BaseState {
            constexpr std::ptrdiff_t  = 0xb7df38c0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace OutflowWithRequirements_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t  = 0xb7de7bd0; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: øMwþ
        // Fields: 2
        namespace CPulseCell_Value_Gradient {
            constexpr std::ptrdiff_t  = 0xb7df2bb0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCursorFuncs {
        }

        // Parent: None
        // Fields: 0
        namespace PulseNodeDynamicOutflows_tDynamicOutflow_t {
        }

        // Parent: None
        // Fields: 0
        namespace CBasePulseGraphInstance {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_GraphHook {
            constexpr std::ptrdiff_t  = 0xb7df11a0; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace SignatureOutflow_Resume {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_ResumePoint
            constexpr std::ptrdiff_t SignatureOutflow_Resume = 0x48; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t  = 0xb7df0f40; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 2
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t  = 0xb7df3f80; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_InvokeBinding {
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 2
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t  = 0xb7df3040; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t  = 0xb7df1460; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: øMwþ
        // Fields: 2
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t  = 0xb7df2660; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t  = 0xb7df1100; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseFlow {
            constexpr std::ptrdiff_t  = 0xb7df0e00; // CPulseCell_Base
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
        // Fields: 0
        namespace CPulseCell_WaitForCursorsWithTagBaseCursorState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseArraylib {
        }

        // Parent: None
        // Fields: 1
        namespace SignatureOutflow_Continue {
            constexpr std::ptrdiff_t  = 0x0; // CPulse_OutflowConnection
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Timeline {
            constexpr std::ptrdiff_t  = 0xb7df3560; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EntOutputHandler {
            constexpr std::ptrdiff_t  = 0xb7df1280; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CParticleCollectionBindingInstance {
            constexpr std::ptrdiff_t  = 0x0; // CBasePulseGraphInstance
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountInstanceState_t {
        }

        // Parent: pulse_runtime_lib
        // Fields: 2
        namespace CPulseCell_Step_DebugLog {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Step_DebugLog = 0x48; // 
        }

        // Parent: ÈPwþ
        // Fields: 2
        namespace CPulseCell_BaseYieldingInflow {
            constexpr std::ptrdiff_t  = 0xb7df13c0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x301ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseNodeDynamicOutflows_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_IsRequirementValidCriteria_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_ObservableVariableListener {
            constexpr std::ptrdiff_t  = 0xb7df1340; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleOrdered {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleOrdered = 0x60; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseSelectorOutflowList_t {
        }

        // Parent: tools/images/pulse_editor/inflow_wait.png
        // Fields: 3
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t CPulseCell_Inflow_Wait = 0x90; // 
            constexpr std::ptrdiff_t jÌ·ý = 0x0; // Àß·ý
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleShuffled {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleShuffled = 0x60; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_Method {
            constexpr std::ptrdiff_t  = 0xb7df1060; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: ÈPwþ
        // Fields: 1
        namespace CPulseCell_BaseValue {
            constexpr std::ptrdiff_t  = 0xb7df1630; // CPulseCell_Base
        }

        // Parent: { className = 'IsStateNode' item_factory = 'BooleanSwitchState' }
        // Fields: 3
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t  = 0xb7df39e0; // CPulseCell_BaseState
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t ÈPwþ = 0xb7b87e50; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_Inflow_Yield {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t CPulseCell_Inflow_Yield = 0x90; // 
            constexpr std::ptrdiff_t àjÌ·ý = 0x0; // Àß·ý
        }

        // Parent: None
        // Fields: 0
        namespace CPulseMathlib {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Unknown {
            constexpr std::ptrdiff_t  = 0xb7df0d80; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleRandom {
            constexpr std::ptrdiff_t  = 0xb7df0640; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_PublicOutput {
            constexpr std::ptrdiff_t  = 0xb7df16d0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_BlackboardReference {
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 2
        namespace CPulseCell_Value_RandomInt {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t CPulseCell_Value_RandomInt = 0x48; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_CallInfo {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t  = 0xb7de7d60; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_nLimitCount
        // Fields: 2
        namespace CPulseCell_LimitCount {
            constexpr std::ptrdiff_t  = 0xb7de7990; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_CallExternalMethod {
            constexpr std::ptrdiff_t  = 0xb7df0c40; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseObservableBoolExpression_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountCriteria_t {
        }

        // Parent: tools/images/pulse_editor/cursor_wait_zone.png
        // Fields: 4
        namespace CPulseCell_CursorQueue {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_WaitForCursorsWithTagBase
            constexpr std::ptrdiff_t CPulseCell_CursorQueue = 0xa0; // 
            constexpr std::ptrdiff_t  = 0x0; // €?ß·ý
            constexpr std::ptrdiff_t ØLwþ = 0x40161; // CPulseCell_CursorQueue
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 2
        namespace CPulseCell_Value_RandomFloat {
            constexpr std::ptrdiff_t  = 0xb7df09e0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseExecCursor {
        }

    } // namespace animationsystem_dll
} // namespace schemas
} // namespace deadlock_dumper
