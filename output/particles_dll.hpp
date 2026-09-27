// Generated using deadlock-dumper
// 2026-09-27T10:33:06Z

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

        // Parent: tools/images/pulse_editor/cursor_tag.png
        // Fields: 3
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t  = 0xb4093850; // CPulseCell_WaitForCursorsWithTagBase
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0xb3f05640; // 
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
            constexpr std::ptrdiff_t  = 0xb4086df0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CParticleBindingRealPulse {
            constexpr std::ptrdiff_t  = 0xb4083b90; // CParticleCollectionBindingInstance
            constexpr std::ptrdiff_t particleslib = 0x301ff; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_WaitForObservable {
            constexpr std::ptrdiff_t  = 0xb4092ee0; // CPulseCell_BaseYieldingInflow
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
            constexpr std::ptrdiff_t  = 0xb4092180; // CPulseCell_BaseYieldingInflow
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
            constexpr std::ptrdiff_t  = 0xb40905d0; // CPulseCell_Base
        }

        // Parent: 	¥˝
        // Fields: 2
        namespace CPulseCell_BaseState {
            constexpr std::ptrdiff_t  = 0xb4093010; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: None
        // Fields: 0
        namespace OutflowWithRequirements_t {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t  = 0xb4087320; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CPulseCell_Value_Gradient {
            constexpr std::ptrdiff_t  = 0xb4092300; // CPulseCell_BaseValue
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
            constexpr std::ptrdiff_t  = 0xb40908f0; // CPulseCell_Inflow_BaseEntrypoint
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
            constexpr std::ptrdiff_t  = 0xb4090690; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 2
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t  = 0xb40936d0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_InvokeBinding {
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 2
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t  = 0xb4092790; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t  = 0xb4090bb0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: ¯Mw˛
        // Fields: 2
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t  = 0xb4091db0; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t  = 0xb4090850; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseFlow {
            constexpr std::ptrdiff_t  = 0xb4090550; // CPulseCell_Base
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
            constexpr std::ptrdiff_t  = 0xb4092cb0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Inflow_EntOutputHandler {
            constexpr std::ptrdiff_t  = 0xb40909d0; // CPulseCell_Inflow_BaseEntrypoint
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

        // Parent: »Pw˛
        // Fields: 2
        namespace CPulseCell_BaseYieldingInflow {
            constexpr std::ptrdiff_t  = 0xb4090b10; // CPulseCell_BaseFlow
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
            constexpr std::ptrdiff_t  = 0xb4090a90; // CPulseCell_Inflow_BaseEntrypoint
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
            constexpr std::ptrdiff_t òÎ˜≥˝ = 0x0; // 	¥˝
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
            constexpr std::ptrdiff_t  = 0xb40907b0; // CPulseCell_Inflow_BaseEntrypoint
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: »Pw˛
        // Fields: 1
        namespace CPulseCell_BaseValue {
            constexpr std::ptrdiff_t  = 0xb4090d80; // CPulseCell_Base
        }

        // Parent: { className = 'IsStateNode' item_factory = 'BooleanSwitchState' }
        // Fields: 3
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t  = 0xb4093130; // CPulseCell_BaseState
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
            constexpr std::ptrdiff_t »Pw˛ = 0xb3f01270; // 
        }

        // Parent: None
        // Fields: 3
        namespace CPulseCell_Inflow_Yield {
            constexpr std::ptrdiff_t  = 0x0; // CPulseCell_BaseYieldingInflow
            constexpr std::ptrdiff_t CPulseCell_Inflow_Yield = 0x90; // 
            constexpr std::ptrdiff_t `Ï˜≥˝ = 0x0; // 	¥˝
        }

        // Parent: None
        // Fields: 0
        namespace CPulseMathlib {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Unknown {
            constexpr std::ptrdiff_t  = 0xb40904d0; // CPulseCell_Base
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Outflow_CycleRandom {
            constexpr std::ptrdiff_t  = 0xb408fd90; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_PublicOutput {
            constexpr std::ptrdiff_t  = 0xb4090e20; // CPulseCell_BaseFlow
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
            constexpr std::ptrdiff_t  = 0xb40874b0; // CPulseCell_BaseFlow
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: m_nLimitCount
        // Fields: 2
        namespace CPulseCell_LimitCount {
            constexpr std::ptrdiff_t  = 0xb40870e0; // CPulseCell_BaseRequirement
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 2
        namespace CPulseCell_Step_CallExternalMethod {
            constexpr std::ptrdiff_t  = 0xb4090390; // CPulseCell_BaseYieldingInflow
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
            constexpr std::ptrdiff_t ê¯≥˝ = 0x0; // –6	¥˝
            constexpr std::ptrdiff_t ÿLw˛ = 0x40161; // CPulseCell_CursorQueue
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 2
        namespace CPulseCell_Value_RandomFloat {
            constexpr std::ptrdiff_t  = 0xb4090130; // CPulseCell_BaseValue
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseExecCursor {
        }

    } // namespace particles_dll
} // namespace schemas
} // namespace deadlock_dumper
