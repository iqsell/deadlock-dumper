// Generated using deadlock-dumper
// 2026-09-27T15:22:12Z

#pragma once

#include <cstddef>
#include <cstdint>

namespace deadlock_dumper {
namespace schemas {

    // Module: pulse_system.dll  classes=97  enums=5
    namespace pulse_system_dll {

        // Alignment: 4  Members: 2
        enum class PulseBestOutflowRules_t : uint32_t {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1,
        };

        // Alignment: 4  Members: 3
        enum class PulseTestEnumShape_t : uint32_t {
            CIRCLE = 0x64,
            SQUARE = 0xc8,
            TRIANGLE = 0x12c,
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

        // Alignment: 4  Members: 5
        enum class PulseTestEnumColor_t : uint32_t {
            BLACK = 0x0,
            WHITE = 0x1,
            RED = 0x2,
            GREEN = 0x3,
            BLUE = 0x4,
        };

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Step_TestDomainDestroyFakeEntity {
        }

        // Parent: tools/images/pulse_editor/cursor_tag.png
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTag {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Test_NoInflow {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphInstance_TestDomain_FakeEntityOwner {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Base {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_ResumePoint {
        }

        // Parent: None
        // Fields: 0
        namespace CTestDomainDerived_Cursor {
        }

        // Parent: tools/images/pulse_editor/requirements.png
        // Fields: 1
        namespace CPulseCell_PickBestOutflowSelector {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestFuncs_LibraryA {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_WaitForObservable {
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
        // Fields: 0
        namespace CPulseGraphInstance_TestDomain_UseReadOnlyBlackboardView {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_FireCursors {
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
        // Fields: 0
        namespace CPulseCell_BaseRequirement {
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
        namespace CPulseCell_IsRequirementValid {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Value_Gradient {
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
        namespace CPulseCell_Test_MultiOutflow_WithParams {
        }

        // Parent: None
        // Fields: 0
        namespace CBasePulseGraphInstance {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_GraphHook {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace SignatureOutflow_Resume {
            constexpr std::ptrdiff_t SignatureOutflow_Resume = 0x48; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Test_MultiOutflow_WithParams_YieldingCursorState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTurtleGraphicsCursor {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TestWaitWithCursorStateCursorState_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_BaseEntrypoint {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: CPulseCell_Step_TestDomainEntFire::Run
        // Fields: 0
        namespace CPulseCell_Test_MultiInflow_NoDefault {
        }

        // Parent: m_nCursorsAllowedToWait
        // Fields: 1
        namespace CPulseCell_WaitForCursorsWithTagBase {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_InvokeBinding {
        }

        // Parent: tools/images/pulse_editor/node_timer.png
        // Fields: 1
        namespace CPulseCell_IntervalTimer {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseTestScriptLib {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BaseLerp {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x401ff; // 
        }

        // Parent: Tracepoint
        // Fields: 0
        namespace CPulseCell_Value_TestValue50 {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Test_MultiOutflow_WithParams_Yielding {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Value_Curve {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_EventHandler {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseFlow {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Step_TestDomainTracepoint {
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
        namespace CPulseGraphInstance_TestDomain_Derived {
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
        // Fields: 0
        namespace CPulseGraphInstance_TestDomain {
        }

        // Parent: None
        // Fields: 0
        namespace SignatureOutflow_Continue {
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
        // Fields: 0
        namespace CPulseCell_Outflow_TestExplicitYesNo {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_TestRandomYesNo {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Outflow_CycleOrderedInstanceState_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountInstanceState_t {
        }

        // Parent: None
        // Fields: 0
        namespace FakeEntity_tAPI {
        }

        // Parent: CPulseCell_Step_TestDomainTracepoint::Run
        // Fields: 0
        namespace CPulseCell_Test_MultiInflow_WithDefault {
        }

        // Parent: pulse_runtime_lib
        // Fields: 1
        namespace CPulseCell_Step_DebugLog {
            constexpr std::ptrdiff_t CPulseCell_Step_DebugLog = 0x48; // 
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
        // Fields: 0
        namespace CPulseCell_IsRequirementValidCriteria_t {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_ObservableVariableListener {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleOrdered {
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleOrdered = 0x60; // 
        }

        // Parent: None
        // Fields: 0
        namespace PulseSelectorOutflowList_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseGraphInstance_TurtleGraphics {
        }

        // Parent: Inflow A
        // Fields: 0
        namespace CPulseCell_Val_TestDomainGetEntityName {
        }

        // Parent: tools/images/pulse_editor/inflow_wait.png
        // Fields: 1
        namespace CPulseCell_Inflow_Wait {
            constexpr std::ptrdiff_t CPulseCell_Inflow_Wait = 0x90; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_TestWaitWithCursorState {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Outflow_CycleShuffled {
            constexpr std::ptrdiff_t CPulseCell_Outflow_CycleShuffled = 0x60; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Inflow_Method {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x40108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_BaseValue {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_BooleanSwitchState {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x50108; // 
        }

        // Parent: None
        // Fields: 0
        namespace FakeEntityDerivedB_tAPI {
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
        namespace CPulseCell_Unknown {
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
        // Fields: 0
        namespace CPulseCell_Val_TestDomainFindEntityByName {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_BlackboardReference {
        }

        // Parent: tools/images/pulse_editor/exit_cycle_random.png
        // Fields: 1
        namespace CPulseCell_Value_RandomInt {
            constexpr std::ptrdiff_t CPulseCell_Value_RandomInt = 0x48; // 
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_Step_TestDomainEntFire {
            constexpr std::ptrdiff_t flWaitValue = 0x0; // float32
        }

        // Parent: None
        // Fields: 0
        namespace FakeEntityDerivedA_tAPI {
        }

        // Parent: pulse_test_example_suggestion
        // Fields: 0
        namespace CPulseCell_ExampleSelector {
        }

        // Parent: None
        // Fields: 0
        namespace CPulse_CallInfo {
        }

        // Parent: None
        // Fields: 1
        namespace CPulseCell_InlineNodeSkipSelector {
            constexpr std::ptrdiff_t pulse_runtime_lib = 0x30108; // 
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_ExampleCriteriaCriteria_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_ExampleCriteria {
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

        // Parent: None
        // Fields: 0
        namespace PulseObservableBoolExpression_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_LimitCountCriteria_t {
        }

        // Parent: None
        // Fields: 0
        namespace CPulseCell_Step_TestDomainCreateFakeEntity {
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

    } // namespace pulse_system_dll
} // namespace schemas
} // namespace deadlock_dumper
