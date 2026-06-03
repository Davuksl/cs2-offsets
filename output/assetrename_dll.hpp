// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: assetrename.dll
        // Class count: 380
        // Enum count: 35
        namespace assetrename_dll {
            // Alignment: 4
            // Member count: 2
            enum class PulseBestOutflowRules_t : uint32_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class PulseCursorCancelPriority_t : uint32_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class PulseMethodCallMode_t : uint32_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class SmartPropRadiusPlacementMode_t : uint32_t {
                SPHERE = 0x0,
                CIRCLE = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class SmartPropPlaceMeshOrientationMode_t : uint32_t {
                FIRST_OPEN_EDGE = 0x0,
                FIRST_CLOSED_EDGE = 0x1,
                UVMAP1 = 0x2,
                UVMAP2 = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class PickMode_t : uint32_t {
                LARGEST_FIRST = 0x0,
                RANDOM = 0x1,
                ALL_IN_ORDER = 0x2
            };
            // Alignment: 4
            // Member count: 5
            enum class SmartPropDeformableOrientMode_t : uint32_t {
                NONE = 0x0,
                FORWARD_NORMAL = 0x1,
                UP_NORMAL = 0x2,
                BACKWARD_NORMAL = 0x3,
                MAINTAIN_OFFSET = 0x4
            };
            // Alignment: 4
            // Member count: 7
            enum class Comparison_t : uint32_t {
                COMPARISON_EQUALS = 0x0,
                COMPARISON_NOT_EQUALS = 0x1,
                COMPARISON_GREATER = 0x2,
                COMPARISON_GREATER_OR_EQUAL = 0x3,
                COMPARISON_LESS = 0x4,
                COMPARISON_LESS_OR_EQUAL = 0x5,
                COMPARISON_COUNT = 0x6
            };
            // Alignment: 4
            // Member count: 4
            enum class ConfigurationHandleShape_t : uint32_t {
                NONE = 0x0,
                SQUARE = 0x1,
                CIRCLE = 0x2,
                DIAMOND = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class SmartPropChoiceSelectionMode_t : uint32_t {
                RANDOM = 0x0,
                FIRST = 0x1,
                SPECIFIC = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class SmartPropDistributionMode_t : uint32_t {
                RANDOM = 0x0,
                REGULAR = 0x1
            };
            // Alignment: 1
            // Member count: 2
            enum class ComparisonValueType : uint8_t {
                COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
                COMPARISONVALUETYPE_PARAMETER = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class DampedValueType : uint32_t {
                FloatParameter = 0x0,
                VectorParameter = 0x1
            };
            // Alignment: 4
            // Member count: 5
            enum class StateValue : uint32_t {
                TotalTranslation_SourceState = 0x0,
                TotalTranslation_TargetState = 0x1,
                SourceStateBlendWeight = 0x2,
                TargetStateBlendWeight = 0x3,
                Count = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class SmartPropDirection_t : uint32_t {
                FORWARD = 0x0,
                LEFT = 0x1,
                UP = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SmartPropPathPositions_t : uint32_t {
                ALL = 0x0,
                NTH = 0x1,
                START_AND_END = 0x2,
                CONTROL_POINTS = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class TargetWarpLinearRootMotionMode : uint32_t {
                TargetWarpLinearRootMotionMode_Default = 0x0,
                TargetWarpLinearRootMotionMode_FollowPath = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class FinishedConditionOption : uint32_t {
                FinishedConditionOption_OnFinished = 0x0,
                FinishedConditionOption_OnAlmostFinished = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class EAnimConflictIndex_t : uint32_t {
                EAC_FIRST = 0x0,
                EAC_SECOND = 0x1,
                EAC_COUNT = 0x2,
                EAC_NONE = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class SmartPropDeformableAttachMode_t : uint32_t {
                RELATIVE = 0x0,
                SNAP = 0x1,
                STIFFEN = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class AnimConflictType_t : uint32_t {
                NONE = 0x0,
                ID = 0x1,
                NAME = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class StateComparisonValueType : uint32_t {
                StateComparisonValue_FixedValue = 0x0,
                StateComparisonValue_StateValue = 0x1,
                StateComparisonValue_Parameter = 0x2
            };
            // Alignment: 4
            // Member count: 6
            enum class SmartPropDetailFadeLevel_t : uint32_t {
                NONE = 0x0,
                MOST_AGGRESSIVE = 0x1,
                MORE_AGGRESSIVE = 0x2,
                NORMAL = 0x3,
                LESS_AGGRESSIVE = 0x4,
                LEAST_AGGRESSIVE = 0x5
            };
            // Alignment: 4
            // Member count: 3
            enum class SmartPropSpace_t : uint32_t {
                WORLD = 0x0,
                OBJECT = 0x1,
                ELEMENT = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class ApplyColorMode_t : uint32_t {
                MULTIPLY_OBJECT = 0x0,
                MULTIPLY_CURRENT = 0x1,
                REPLACE = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class SolveIKChainAnimNodeSettingSource : uint32_t {
                SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
                SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class SmartPropGridOriginBasis_t : uint32_t {
                CENTER = 0x0,
                CORNER = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class EAnimValueSource : uint32_t {
                Constant = 0x0,
                Parameter = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class SingleFrameSelection : uint32_t {
                FirstFrame = 0x0,
                LastFrame = 0x1,
                SpecificFrame = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SmartPropColorSelectionMode_t : uint32_t {
                SPECIFIC_COLOR = 0x0,
                GRADIENT_RANDOM = 0x1,
                GRADIENT_RANDOM_STOP = 0x2,
                GRADIENT_LOCATION = 0x3
            };
            // Alignment: 4
            // Member count: 2
            enum class SmartPropGridPlacementMode_t : uint32_t {
                SEGMENT = 0x0,
                FILL = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class RemapValueType : uint32_t {
                FloatParameter = 0x0,
                VectorParameter = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class ScaleMode_t : uint32_t {
                NONE = 0x0,
                SCALE_END_TO_FIT = 0x1,
                SCALE_EQUALLY = 0x2,
                SCALE_MAXIMIZE = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class TraceNoHitResult_t : uint32_t {
                NOTHING = 0x0,
                DISCARD = 0x1,
                MOVE_TO_START = 0x2,
                MOVE_TO_END = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class SelectionSource_t : uint32_t {
                SelectionSource_Bool = 0x0,
                SelectionSource_Enum = 0x1,
                SelectionSource_Tag = 0x2
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_WaitForCursorsWithTag {
                constexpr std::ptrdiff_t m_bTagSelfWhenComplete = 0x98; // bool
                constexpr std::ptrdiff_t m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Base {
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x8; // PulseDocNodeID_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CSmartPropPulse_FitOnLine {
                constexpr std::ptrdiff_t m_OutflowList = 0x48; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 0
            namespace CPulse_ResumePoint {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_PickBestOutflowSelector {
                constexpr std::ptrdiff_t m_nCheckType = 0x48; // PulseBestOutflowRules_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 0
            namespace CParticleBindingRealPulse {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_WaitForObservable {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_OnTrue = 0xC0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            namespace CSmartPropPulse_SelectionEndCap__Criteria_t {
                constexpr std::ptrdiff_t m_bStart = 0x0; // bool
                constexpr std::ptrdiff_t m_bEnd = 0x1; // bool
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropOperationAPI {
            }
            // Parent: None
            // Field count: 4
            namespace CPulse_OutflowConnection {
                constexpr std::ptrdiff_t m_SourceOutflowName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nInstruction = 0x14; // int32
                constexpr std::ptrdiff_t m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 4
            namespace CSmartPropPulse_SelectionLinearLength__Criteria_t {
                constexpr std::ptrdiff_t m_flLength = 0x0; // float32
                constexpr std::ptrdiff_t m_bAllowScale = 0x4; // bool
                constexpr std::ptrdiff_t m_flMinLength = 0x8; // float32
                constexpr std::ptrdiff_t m_flMaxLength = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropPulse_SelectionChoiceWeight {
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseGraphDef {
                constexpr std::ptrdiff_t m_DomainIdentifier = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_DomainSubType = 0x18; // CPulseValueFullType
                constexpr std::ptrdiff_t m_ParentMapName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ParentXmlName = 0x40; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
                constexpr std::ptrdiff_t m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
                constexpr std::ptrdiff_t m_Vars = 0x80; // CUtlVector<CPulse_Variable>
                constexpr std::ptrdiff_t m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
                constexpr std::ptrdiff_t m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                constexpr std::ptrdiff_t m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
                constexpr std::ptrdiff_t m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
                constexpr std::ptrdiff_t m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
                constexpr std::ptrdiff_t m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
                constexpr std::ptrdiff_t m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropPulse_SelectionEndCap {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_FireCursors {
                constexpr std::ptrdiff_t m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline__TimelineEvent_t {
                constexpr std::ptrdiff_t m_flTimeFromPrevious = 0x0; // float32
                constexpr std::ptrdiff_t m_EventOutflow = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IntervalTimer__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_flWaitInterval = 0x8; // float32
                constexpr std::ptrdiff_t m_flWaitIntervalHigh = 0xC; // float32
                constexpr std::ptrdiff_t m_bCompleteOnNextWake = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            namespace CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace OutflowWithRequirements_t {
                constexpr std::ptrdiff_t m_Connection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
                constexpr std::ptrdiff_t m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Gradient {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                constexpr std::ptrdiff_t m_OutflowID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_Connection = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            namespace CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_GraphHook {
                constexpr std::ptrdiff_t m_HookName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropOperation_MaterialReplacementAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_BaseEntrypoint {
                constexpr std::ptrdiff_t m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_WaitForCursorsWithTagBase {
                constexpr std::ptrdiff_t m_nCursorsAllowedToWait = 0x48; // int32
                constexpr std::ptrdiff_t m_WaitComplete = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_InvokeBinding {
                constexpr std::ptrdiff_t m_RegisterMap = 0x0; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_FuncName = 0x30; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CSmartPropPulse_PlaceOnPath {
                constexpr std::ptrdiff_t m_OutflowList = 0x48; // PulseSelectorOutflowList_t
                constexpr std::ptrdiff_t m_PathName = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_IntervalTimer {
                constexpr std::ptrdiff_t m_Completed = 0x48; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnInterval = 0x90; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CSmartPropPulse_Group {
                constexpr std::ptrdiff_t m_OutflowList = 0x48; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CPulseCell_Value_Curve {
                constexpr std::ptrdiff_t m_Curve = 0x48; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EventHandler {
                constexpr std::ptrdiff_t m_EventName = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                constexpr std::ptrdiff_t m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                constexpr std::ptrdiff_t m_nNextShuffle = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseLerp__CursorState_t {
                constexpr std::ptrdiff_t m_StartTime = 0x0; // GameTime_t
                constexpr std::ptrdiff_t m_EndTime = 0x4; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                constexpr std::ptrdiff_t m_TagName = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseArraylib {
            }
            // Parent: None
            // Field count: 0
            namespace SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Timeline {
                constexpr std::ptrdiff_t m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                constexpr std::ptrdiff_t m_bWaitForChildOutflows = 0x60; // bool
                constexpr std::ptrdiff_t m_OnFinished = 0x68; // CPulse_ResumePoint
                constexpr std::ptrdiff_t m_OnCanceled = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_EntOutputHandler {
                constexpr std::ptrdiff_t m_SourceEntity = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_SourceOutput = 0x90; // PulseSymbol_t
                constexpr std::ptrdiff_t m_ExpectedParamType = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                constexpr std::ptrdiff_t m_nNextIndex = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropPulse_SmartProp {
                constexpr std::ptrdiff_t m_hSmartProp = 0x48; // CStrongHandle<InfoForResourceTypeCSmartProp>
            }
            // Parent: None
            // Field count: 0
            namespace CParticleCollectionBindingInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropPulse_CreateRotator {
                constexpr std::ptrdiff_t m_Name = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_LimitCount__InstanceState_t {
                constexpr std::ptrdiff_t m_nCurrentCount = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseNodeDynamicOutflows_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_IsRequirementValid__Criteria_t {
                constexpr std::ptrdiff_t m_bIsValid = 0x0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_ObservableVariableListener {
                constexpr std::ptrdiff_t m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_bSelfReference = 0x82; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleOrdered {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseSelectorOutflowList_t {
                constexpr std::ptrdiff_t m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropPulse_CriteriaPathPosition {
            }
            // Parent: CEntityComponent
            // Field count: 1
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_Inflow_Wait {
                constexpr std::ptrdiff_t m_WakeResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleShuffled {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Method {
                constexpr std::ptrdiff_t m_MethodName = 0x80; // PulseSymbol_t
                constexpr std::ptrdiff_t m_Description = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_bIsPublic = 0x98; // bool
                constexpr std::ptrdiff_t m_ReturnType = 0xA0; // CPulseValueFullType
                constexpr std::ptrdiff_t m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSmartPropPulse_BaseQueryableFlow {
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropExprAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            namespace CPulseCell_BooleanSwitchState {
                constexpr std::ptrdiff_t m_Condition = 0x48; // PulseObservableBoolExpression_t
                constexpr std::ptrdiff_t m_Always = 0xC0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenTrue = 0x108; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_WhenFalse = 0x150; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Inflow_Yield {
                constexpr std::ptrdiff_t m_UnyieldResume = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            namespace CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_Unknown {
                constexpr std::ptrdiff_t m_UnknownKeys = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Outflow_CycleRandom {
                constexpr std::ptrdiff_t m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_PublicOutput {
                constexpr std::ptrdiff_t m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropPulse_PlaceInSphere {
                constexpr std::ptrdiff_t m_Place = 0x48; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropFilterAPI {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_BlackboardReference {
                constexpr std::ptrdiff_t m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                constexpr std::ptrdiff_t m_BlackboardResource = 0x8; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nNodeID = 0x18; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_NodeName = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            namespace CSmartPropPulse_CriteriaPathPosition__Criteria_t {
                constexpr std::ptrdiff_t m_PlaceAtPositions = 0x0; // SmartPropPathPositions_t
                constexpr std::ptrdiff_t m_nPlaceEveryNthPosition = 0x4; // int32
                constexpr std::ptrdiff_t m_nNthPositionIndexOffset = 0x8; // int32
                constexpr std::ptrdiff_t m_bAllowAtStart = 0xC; // bool
                constexpr std::ptrdiff_t m_bAllowAtEnd = 0xD; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationLayer {
                constexpr std::ptrdiff_t m_hSequence = 0x0; // CAnimNetVar<int32>
                constexpr std::ptrdiff_t m_flPrevCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_flCycle = 0x10; // CAnimNetVar<float32>
                constexpr std::ptrdiff_t m_flWeight = 0x1C; // CAnimNetVar<float32>
                constexpr std::ptrdiff_t m_nOrder = 0x28; // CAnimNetVar<int32>
                constexpr std::ptrdiff_t m_bLooping = 0x34; // bool
                constexpr std::ptrdiff_t m_nFlags = 0x38; // int32
                constexpr std::ptrdiff_t m_bSequenceFinished = 0x3C; // bool
                constexpr std::ptrdiff_t m_flKillRate = 0x40; // float32
                constexpr std::ptrdiff_t m_flKillDelay = 0x44; // float32
                constexpr std::ptrdiff_t m_nPriority = 0x48; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulse_CallInfo {
                constexpr std::ptrdiff_t m_PortName = 0x0; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nEditorNodeID = 0x10; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_RegisterMap = 0x18; // PulseRegisterMap_t
                constexpr std::ptrdiff_t m_CallMethodID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
                constexpr std::ptrdiff_t m_nSrcInstruction = 0x50; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropPulse_CreateLocator {
                constexpr std::ptrdiff_t m_LocatorName = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_InlineNodeSkipSelector {
                constexpr std::ptrdiff_t m_nFlowNodeID = 0x48; // PulseDocNodeID_t
                constexpr std::ptrdiff_t m_bAnd = 0x4C; // bool
                constexpr std::ptrdiff_t m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
                constexpr std::ptrdiff_t m_FailOutflow = 0x68; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            namespace CSmartPropPulse_SelectionChoiceWeight__Criteria_t {
                constexpr std::ptrdiff_t m_flWeight = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CPulseCell_LimitCount {
                constexpr std::ptrdiff_t m_nLimitCount = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseCell_Step_CallExternalMethod {
                constexpr std::ptrdiff_t m_MethodName = 0x48; // PulseSymbol_t
                constexpr std::ptrdiff_t m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                constexpr std::ptrdiff_t m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                constexpr std::ptrdiff_t m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
                constexpr std::ptrdiff_t m_OnFinished = 0x78; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropPulse_CreateSizer {
                constexpr std::ptrdiff_t m_Name = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMinX = 0x50; // bool
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMaxX = 0x51; // bool
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMinY = 0x52; // bool
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMaxY = 0x53; // bool
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMinZ = 0x54; // bool
                constexpr std::ptrdiff_t m_bHACK_ProvideResultMaxZ = 0x55; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            namespace CSmartPropPulse_PickOneSelector {
                constexpr std::ptrdiff_t m_HandleShape = 0x48; // ConfigurationHandleShape_t
                constexpr std::ptrdiff_t m_OutflowList = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PulseObservableBoolExpression_t {
                constexpr std::ptrdiff_t m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
                constexpr std::ptrdiff_t m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                constexpr std::ptrdiff_t m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // Parent: None
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
            }
            // Parent: None
            // Field count: 12
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringTableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
                constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
            }
            // Parent: None
            // Field count: 0
            namespace CPulseGraphInstance_SmartPropEval {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_CursorQueue {
                constexpr std::ptrdiff_t m_nCursorsAllowedToRunParallel = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            namespace CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            namespace CPulseExecCursor {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropPulse_SelectionLinearLength {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StopAtGoalNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flOuterRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x4C; // float32
                constexpr std::ptrdiff_t m_flMaxScale = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinScale = 0x54; // float32
                constexpr std::ptrdiff_t m_damping = 0x58; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ComponentState {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeTintColor
            namespace CSmartPropTransformOperation {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SequenceNode {
                constexpr std::ptrdiff_t m_tagSpans = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_paramSpans = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                constexpr std::ptrdiff_t m_sequenceName = 0xA0; // CUtlString
                constexpr std::ptrdiff_t m_playbackSpeed = 0xA8; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xAC; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptComponent {
                constexpr std::ptrdiff_t m_sName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_scriptFilename = 0x40; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_ChoiceWeight {
                constexpr std::ptrdiff_t m_flWeight = 0x48; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CFootLockItem {
                constexpr std::ptrdiff_t m_footName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_targetBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_disableTagName = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_disableTagID = 0x20; // AnimTagID
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float32
                constexpr std::ptrdiff_t m_footstepLandedTagName = 0x30; // CGlobalSymbol
                constexpr std::ptrdiff_t m_footstepLandedTag = 0x38; // AnimTagID
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CRemapValueItem {
                constexpr std::ptrdiff_t m_valueType = 0x0; // RemapValueType
                constexpr std::ptrdiff_t m_floatParamNameIn = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_floatParamNameOut = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vectorParamNameIn = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_vectorParamNameOut = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_floatParamIn = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_floatParamOut = 0x2C; // AnimParamID
                constexpr std::ptrdiff_t m_vectorParamIn = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_vectorParamOut = 0x34; // AnimParamID
                constexpr std::ptrdiff_t m_flMinInputValue = 0x38; // float32
                constexpr std::ptrdiff_t m_flMaxInputValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMinOutputValue = 0x40; // float32
                constexpr std::ptrdiff_t m_flMaxOutputValue = 0x44; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateAction {
                constexpr std::ptrdiff_t m_pAction = 0x8; // CSmartPtr<CAnimGraphDoc_Action>
                constexpr std::ptrdiff_t m_eBehavior = 0x10; // StateActionBehavior
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSmartPropOperation_Trace {
                constexpr std::ptrdiff_t m_Origin = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_OriginSpace = 0x90; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_flOriginOffset = 0xD0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flSurfaceUpInfluence = 0x110; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_nNoHitResult = 0x150; // CSmartPropAttributeTraceNoHit
                constexpr std::ptrdiff_t m_bIgnoreToolMaterials = 0x190; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreSky = 0x1D0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreNoDraw = 0x210; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreTranslucent = 0x250; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreModels = 0x290; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreEntities = 0x2D0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bIgnoreCables = 0x310; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SaveScale {
                constexpr std::ptrdiff_t m_VariableName = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PlaceInSphere {
                constexpr std::ptrdiff_t m_PlacementMode = 0xA0; // CSmartPropAttributeRadiusPlacementMode
                constexpr std::ptrdiff_t m_DistributionMode = 0xE0; // CSmartPropAttributeDistributionMode
                constexpr std::ptrdiff_t m_flRandomness = 0x120; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_vPlaneUpDirection = 0x160; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_nCountMin = 0x1A0; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_nCountMax = 0x1E0; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_flPositionRadiusInner = 0x220; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flPositionRadiusOuter = 0x260; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bAlignOrientation = 0x2A0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vAlignDirection = 0x2E0; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StanceScaleNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_paramName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeChoiceSelectionMode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_CreateLocator {
                constexpr std::ptrdiff_t m_LocatorName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_vOffset = 0x58; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_flDisplayScale = 0x98; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bConfigurable = 0xD8; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bAllowTranslation = 0x118; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bAllowRotation = 0x158; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bAllowScale = 0x198; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_EdgeAngleCriteria {
                constexpr std::ptrdiff_t m_flMinAngle = 0x48; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flMaxAngle = 0x88; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bInvert = 0xC8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeGridOriginMode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ContainerNodeBase {
                constexpr std::ptrdiff_t m_inputNodeID = 0x48; // AnimNodeID
                constexpr std::ptrdiff_t m_outputNodeID = 0x4C; // AnimNodeID
                constexpr std::ptrdiff_t m_inputConnectionMap = 0x50; // CUtlHashtable<AnimNodeOutputID,CAnimGraphDoc_NodeConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_String {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_NodeList {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CAnimGraphDoc_Node*>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_Layout2DGrid {
                constexpr std::ptrdiff_t m_flWidth = 0xA0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flLength = 0xE0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bVerticalLength = 0x120; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_GridArrangement = 0x160; // CSmartPropAttributeGridPlacementMode
                constexpr std::ptrdiff_t m_GridOriginMode = 0x1A0; // CSmartPropAttributeGridOriginMode
                constexpr std::ptrdiff_t m_nCountW = 0x1E0; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_nCountL = 0x220; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_flSpacingWidth = 0x260; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flSpacingLength = 0x2A0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bAlternateShift = 0x2E0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flAlternateShiftWidth = 0x320; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flAlternateShiftLength = 0x360; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_MotionItem {
                constexpr std::ptrdiff_t m_paramManager = 0x28; // CAnimGraphDoc_MotionParameterManager
                constexpr std::ptrdiff_t m_blockSpans = 0x50; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_tagSpans = 0x68; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_paramSpans = 0x80; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_ScaleMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // ScaleMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_MaterialGroup {
                constexpr std::ptrdiff_t m_sModelName = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_DefaultValue = 0x118; // CModelMaterialGroupName
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_DirectPlaybackNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_bFinishEarly = 0x48; // bool
                constexpr std::ptrdiff_t m_bResetOnFinish = 0x49; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_RandomColorTintColor {
                constexpr std::ptrdiff_t m_SelectionMode = 0x50; // CSmartPropAttributeChoiceSelectionMode
                constexpr std::ptrdiff_t m_ColorPosition = 0x90; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_Mode = 0xD0; // ApplyColorMode_t
                constexpr std::ptrdiff_t m_Gradient = 0xD8; // CColorGradient
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootPinningNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_items = 0x48; // CUtlVector<CFootPinningItem>
                constexpr std::ptrdiff_t m_eTimingSource = 0x60; // FootPinningTimingSource
                constexpr std::ptrdiff_t m_flBlendTime = 0x64; // float32
                constexpr std::ptrdiff_t m_flLockBreakDistance = 0x68; // float32
                constexpr std::ptrdiff_t m_flMaxLegStraightAmount = 0x6C; // float32
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x70; // bool
                constexpr std::ptrdiff_t m_hipBoneName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x80; // bool
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x84; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0x88; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FollowAttachmentNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_boneName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_bMatchTranslation = 0x58; // bool
                constexpr std::ptrdiff_t m_bMatchRotation = 0x59; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_RandomRotation {
                constexpr std::ptrdiff_t m_vRandomRotationMin = 0x50; // CSmartPropAttributeAngles
                constexpr std::ptrdiff_t m_vRandomRotationMax = 0x90; // CSmartPropAttributeAngles
                constexpr std::ptrdiff_t m_vSnapIncrement = 0xD0; // CSmartPropAttributeAngles
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SolveIKChainNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_IkChains = 0x48; // CUtlVector<CSolveIKChainAnimNodeChainData>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_IsValid {
                constexpr std::ptrdiff_t m_Expression = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FollowTargetNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_boneName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_TargetSettings = 0x50; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x78; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Condition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataNodeTintColor
            // MVDataClassGroup
            namespace CSmartPropOperation_RestoreState {
                constexpr std::ptrdiff_t m_StateName = 0x50; // CSmartPropAttributeStateName
                constexpr std::ptrdiff_t m_bDiscardIfUknown = 0x90; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SetPosition {
                constexpr std::ptrdiff_t m_vPosition = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ClipDataManager {
                constexpr std::ptrdiff_t m_itemTable = 0x10; // CUtlHashtable<CUtlString,CSmartPtr<CAnimGraphDoc_ClipData>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_ChoiceSelectionMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropChoiceSelectionMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeGridPlacementMode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_PathHelperNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flStoppingRadius = 0x48; // float32
                constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x4C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootCycleMetric {
                constexpr std::ptrdiff_t m_feet = 0x28; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueComponent {
                constexpr std::ptrdiff_t m_name = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_items = 0x40; // CUtlVector<CDampedValueItem>
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            // MVDataExperimentalNodeSet
            namespace CSmartPropOperation_RotateTowards {
                constexpr std::ptrdiff_t m_vOriginPos = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vTargetPos = 0x90; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vUpPos = 0xD0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_flWeight = 0x110; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OriginSpace = 0x150; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_TargetSpace = 0x190; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_UpSpace = 0x1D0; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ParameterCondition {
                constexpr std::ptrdiff_t m_paramName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_paramID = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_comparisonOp = 0x34; // Comparison_t
                constexpr std::ptrdiff_t m_comparisonValue = 0x38; // CAnimVariant
                constexpr std::ptrdiff_t m_comparisonString = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SlowDownOnSlopesNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flSlowDownStrength = 0x48; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_NodeBlend2DItem {
                constexpr std::ptrdiff_t m_inputConnection = 0x30; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_name = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimConflictBase {
                constexpr std::ptrdiff_t m_sConflictDesc = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_nResolveIdx = 0x20; // int32
                constexpr std::ptrdiff_t m_conflictData = 0x28; // CAnimConflictInfo_t[2]
                constexpr std::ptrdiff_t m_eConflictType = 0x68; // AnimConflictType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSmartPropChoiceOption {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_DisplayName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_VariableValues = 0x10; // CUtlVector<CSmartPropAttributeVariableValue>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_MaterialOverride {
                constexpr std::ptrdiff_t m_bClearCurrentOverrides = 0x50; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_MaterialReplacements = 0x90; // CUtlVector<CSmartPropMaterialReplacement>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_GridPlacementMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropGridPlacementMode_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_MoverNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_bApplyMovement = 0x48; // bool
                constexpr std::ptrdiff_t m_moveVectorParamName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_moveVectorParam = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_bOrientMovement = 0x5C; // bool
                constexpr std::ptrdiff_t m_moveHeadingParamName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_moveHeadingParam = 0x68; // AnimParamID
                constexpr std::ptrdiff_t m_bAdditive = 0x6C; // bool
                constexpr std::ptrdiff_t m_bTurnToFace = 0x6D; // bool
                constexpr std::ptrdiff_t m_facingTarget = 0x70; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x80; // AnimParamID
                constexpr std::ptrdiff_t m_bLimitOnly = 0x84; // bool
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x88; // float32
                constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0x8C; // float32
                constexpr std::ptrdiff_t m_damping = 0x90; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterConflict {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeColorSelectionMode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Node {
                constexpr std::ptrdiff_t m_sName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_vecPosition = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_nNodeID = 0x30; // AnimNodeID
                constexpr std::ptrdiff_t m_bDebugThisNode = 0x34; // bool
                constexpr std::ptrdiff_t m_networkMode = 0x38; // AnimNodeNetworkMode
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SaveSurfaceNormal {
                constexpr std::ptrdiff_t m_CoordinateSpace = 0x50; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_VariableName = 0x90; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOutlinerNameExpr
            namespace CSmartPropVariable {
                constexpr std::ptrdiff_t m_VariableName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bExposeAsParameter = 0x18; // bool
                constexpr std::ptrdiff_t m_DisplayName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_HideExpression = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ReadOnlyExpression = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BlendNode {
                constexpr std::ptrdiff_t m_children = 0x50; // CUtlVector<CBlendNodeChild>
                constexpr std::ptrdiff_t m_blendValueSource = 0x68; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x78; // AnimParamID
                constexpr std::ptrdiff_t m_blendKeyType = 0x7C; // BlendKeyType
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0x80; // bool
                constexpr std::ptrdiff_t m_bSyncCycles = 0x81; // bool
                constexpr std::ptrdiff_t m_bLoop = 0x82; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x83; // bool
                constexpr std::ptrdiff_t m_bIsAngle = 0x84; // bool
                constexpr std::ptrdiff_t m_damping = 0x88; // CAnimInputDamping
                constexpr std::ptrdiff_t m_eLinearRootMotionBlendMode = 0xA0; // LinearRootMotionBlendMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_JiggleBoneNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_items = 0x48; // CUtlVector<CJiggleBoneItem>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_LeanMatrixNode {
                constexpr std::ptrdiff_t m_sequenceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_flMaxValue = 0x50; // float32
                constexpr std::ptrdiff_t m_blendSource = 0x54; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_verticalAxisDirection = 0x64; // Vector
                constexpr std::ptrdiff_t m_horizontalAxisDirection = 0x70; // Vector
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_VertexCountCriteria {
                constexpr std::ptrdiff_t m_nTargetVertexCount = 0x48; // CSmartPropAttributeInt
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ResetScale {
                constexpr std::ptrdiff_t m_bIgnoreObjectScale = 0x50; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 38
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootLockNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_items = 0x48; // CUtlVector<CFootLockItem>
                constexpr std::ptrdiff_t m_hipBoneName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_flBlendTime = 0x68; // float32
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x6C; // bool
                constexpr std::ptrdiff_t m_bResetChild = 0x6D; // bool
                constexpr std::ptrdiff_t m_ikSolverType = 0x70; // IKSolverType
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x74; // bool
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x75; // bool
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x78; // float32
                constexpr std::ptrdiff_t m_flStrideCurveScale = 0x7C; // float32
                constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x80; // float32
                constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x84; // bool
                constexpr std::ptrdiff_t m_bModulateStepHeight = 0x85; // bool
                constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x88; // float32
                constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x8C; // float32
                constexpr std::ptrdiff_t m_bEnableHipShift = 0x90; // bool
                constexpr std::ptrdiff_t m_flHipShiftScale = 0x94; // float32
                constexpr std::ptrdiff_t m_hipShiftDamping = 0x98; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bApplyTilt = 0xB0; // bool
                constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0xB4; // float32
                constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0xB8; // float32
                constexpr std::ptrdiff_t m_bEnableLockBreaking = 0xBC; // bool
                constexpr std::ptrdiff_t m_flLockBreakTolerance = 0xC0; // float32
                constexpr std::ptrdiff_t m_flLockBreakBlendTime = 0xC4; // float32
                constexpr std::ptrdiff_t m_bEnableStretching = 0xC8; // bool
                constexpr std::ptrdiff_t m_flMaxStretchAmount = 0xCC; // float32
                constexpr std::ptrdiff_t m_flStretchExtensionScale = 0xD0; // float32
                constexpr std::ptrdiff_t m_bEnableGroundTracing = 0xD4; // bool
                constexpr std::ptrdiff_t m_flTraceAngleBlend = 0xD8; // float32
                constexpr std::ptrdiff_t m_bApplyHipDrop = 0xDC; // bool
                constexpr std::ptrdiff_t m_flMaxFootHeight = 0xE0; // float32
                constexpr std::ptrdiff_t m_flExtensionScale = 0xE4; // float32
                constexpr std::ptrdiff_t m_hipDampingSettings = 0xE8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x100; // bool
                constexpr std::ptrdiff_t m_rootHeightDamping = 0x108; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x120; // float32
                constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x124; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeDistributionMode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRemapValueComponent {
                constexpr std::ptrdiff_t m_name = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_items = 0x40; // CUtlVector<CRemapValueItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_EmitTagAction {
                constexpr std::ptrdiff_t m_tag = 0x28; // AnimTagID
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookComponent {
                constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x38; // bool
                constexpr std::ptrdiff_t m_lookHeadingID = 0x3C; // AnimParamID
                constexpr std::ptrdiff_t m_lookHeadingNormalizedID = 0x40; // AnimParamID
                constexpr std::ptrdiff_t m_lookHeadingVelocityID = 0x44; // AnimParamID
                constexpr std::ptrdiff_t m_lookPitchID = 0x48; // AnimParamID
                constexpr std::ptrdiff_t m_lookDistanceID = 0x4C; // AnimParamID
                constexpr std::ptrdiff_t m_lookDirectionID = 0x50; // AnimParamID
                constexpr std::ptrdiff_t m_lookTargetID = 0x54; // AnimParamID
                constexpr std::ptrdiff_t m_lookTargetWorldSpaceID = 0x58; // AnimParamID
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_PathMotor {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_TagManager {
                constexpr std::ptrdiff_t m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StateTransition {
                constexpr std::ptrdiff_t m_conditionList = 0x28; // CAnimGraphDoc_ConditionContainer
                constexpr std::ptrdiff_t m_srcState = 0x58; // AnimStateID
                constexpr std::ptrdiff_t m_destState = 0x5C; // AnimStateID
                constexpr std::ptrdiff_t m_sComment = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_bDisabled = 0x68; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeRadiusPlacementMode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CFootStepTriggerItem {
                constexpr std::ptrdiff_t m_footName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_triggerPhase = 0x8; // StepPhase
                constexpr std::ptrdiff_t m_tagNames = 0x10; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_tagIDs = 0x28; // CUtlVector<AnimTagID>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StateMachine {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_State>>
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TwoBoneIKNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_ikChainName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_bAutoDetectHingeAxis = 0x50; // bool
                constexpr std::ptrdiff_t m_endEffectorType = 0x54; // IkEndEffectorType
                constexpr std::ptrdiff_t m_endEffectorAttachmentName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_targetType = 0x60; // IkTargetType
                constexpr std::ptrdiff_t m_attachmentName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_targetBoneName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_targetParamName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_targetParam = 0x80; // AnimParamID
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x84; // bool
                constexpr std::ptrdiff_t m_rotationParamName = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_rotationParam = 0x90; // AnimParamID
                constexpr std::ptrdiff_t m_bConstrainTwist = 0x94; // bool
                constexpr std::ptrdiff_t m_flMaxTwist = 0x98; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_MotionItemGroup {
                constexpr std::ptrdiff_t m_motions = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItem>>
                constexpr std::ptrdiff_t m_name = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_conditions = 0x40; // CAnimGraphDoc_ConditionContainer
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ComponentStateTransition {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            // MVDataOutlinerNameExpr
            namespace CSmartPropOperation_SetVariable {
                constexpr std::ptrdiff_t m_VariableValue = 0x50; // CSmartPropAttributeVariableValue
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_DistributionMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropDistributionMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_InputStreamNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_Scale {
                constexpr std::ptrdiff_t m_flScale = 0x50; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SetTintColor {
                constexpr std::ptrdiff_t m_SelectionMode = 0x50; // CSmartPropAttributeChoiceSelectionMode
                constexpr std::ptrdiff_t m_ColorSelection = 0x90; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_Mode = 0xD0; // CSmartPropAttributeApplyColorMode
                constexpr std::ptrdiff_t m_ColorChoices = 0x110; // CUtlVector<ColorChoice_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_RigidBodyWeightList {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x10; // CUtlVector<CRigidBodyWeight>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ChoreoNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_RootNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x50; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_ApplyColorMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // ApplyColorMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SaveColor {
                constexpr std::ptrdiff_t m_VariableName = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootAdjustmentNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_facingTargetParam = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_facingTarget = 0x50; // AnimParamID
                constexpr std::ptrdiff_t m_bResetChild = 0x54; // bool
                constexpr std::ptrdiff_t m_bAnimationDriven = 0x55; // bool
                constexpr std::ptrdiff_t m_baseClipName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_clips = 0x60; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_flTurnTimeMin = 0x78; // float32
                constexpr std::ptrdiff_t m_flTurnTimeMax = 0x7C; // float32
                constexpr std::ptrdiff_t m_flStepHeightMax = 0x80; // float32
                constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0x84; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_DampedPathMotor {
                constexpr std::ptrdiff_t m_flAnticipationTime = 0x38; // float32
                constexpr std::ptrdiff_t m_flMinSpeedScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_anticipationPosParamName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_anticipationPosParam = 0x48; // AnimParamID
                constexpr std::ptrdiff_t m_anticipationHeadingParamName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_anticipationHeadingParam = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_flSpringConstant = 0x5C; // float32
                constexpr std::ptrdiff_t m_flMinSpringTension = 0x60; // float32
                constexpr std::ptrdiff_t m_flMaxSpringTension = 0x64; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CJiggleBoneItem {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flSpringStrength = 0x8; // float32
                constexpr std::ptrdiff_t m_flSimRateFPS = 0xC; // float32
                constexpr std::ptrdiff_t m_flDamping = 0x10; // float32
                constexpr std::ptrdiff_t m_eSimSpace = 0x14; // JiggleBoneSimSpace
                constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x18; // Vector
                constexpr std::ptrdiff_t m_vBoundsMinLS = 0x24; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SetMateraialGroupChoice {
                constexpr std::ptrdiff_t m_VariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_SelectionMode = 0x58; // CSmartPropAttributeChoiceSelectionMode
                constexpr std::ptrdiff_t m_ChoiceSelection = 0x98; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_MaterialGroupChoices = 0xD8; // CUtlVector<MaterialGroupChoice_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_VariableValue {
                constexpr std::ptrdiff_t m_VariableComparison = 0x50; // CSmartPropVariableComparison
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeApplyColorMode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlopeComponent {
                constexpr std::ptrdiff_t m_flTraceDistance = 0x38; // float32
                constexpr std::ptrdiff_t m_slopeAngleID = 0x3C; // AnimParamID
                constexpr std::ptrdiff_t m_slopeHeadingID = 0x40; // AnimParamID
                constexpr std::ptrdiff_t m_slopeAngleSideID = 0x44; // AnimParamID
                constexpr std::ptrdiff_t m_slopeAngleFrontID = 0x48; // AnimParamID
                constexpr std::ptrdiff_t m_slopeNormalID = 0x4C; // AnimParamID
                constexpr std::ptrdiff_t m_slopeNormal_WorldSpaceID = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SaveDirection {
                constexpr std::ptrdiff_t m_DirectionVector = 0x50; // CSmartPropAttributeDirection
                constexpr std::ptrdiff_t m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_VariableName = 0xD0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StateMachineNode {
                constexpr std::ptrdiff_t m_bBlockWaningTags = 0x68; // bool
                constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0x69; // bool
                constexpr std::ptrdiff_t m_bResetWhenActivated = 0x6A; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_GridOriginMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropGridOriginBasis_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataOutlinerAssetNameExpr
            namespace CSmartPropElement_Model {
                constexpr std::ptrdiff_t m_sModelName = 0x88; // CSmartPropAttributeModelName
                constexpr std::ptrdiff_t m_MaterialGroupName = 0xC8; // CSmartPropAttributeMaterialGroup
                constexpr std::ptrdiff_t m_bDetailObject = 0x108; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vModelScale = 0x148; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_flUniformModelScale = 0x188; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_nLodLevel = 0x1C8; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_SurfacePropertyOverride = 0x208; // CSmartPropAttributeSurfaceProperty
                constexpr std::ptrdiff_t m_nDetailObjectFadeLevel = 0x248; // SmartPropDetailFadeLevel_t
                constexpr std::ptrdiff_t m_bCastShadows = 0x250; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bRigidDeformation = 0x290; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bDisableDynamicDeformable = 0x2D0; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_MaterialCriteria {
                constexpr std::ptrdiff_t m_material = 0x48; // CSmartPropAttributeMaterialName
                constexpr std::ptrdiff_t m_bInvert = 0x88; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CommentNode {
                constexpr std::ptrdiff_t m_commentText = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_size = 0x48; // Vector2D
                constexpr std::ptrdiff_t m_color = 0x50; // Color
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Angles {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // QAngle
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeOrientationMode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSmartPropOperation {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollComponent {
                constexpr std::ptrdiff_t m_weightLists = 0x38; // CUtlVector<CAnimGraphDoc_RigidBodyWeightList>
                constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0x50; // float32
                constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0x54; // float32
                constexpr std::ptrdiff_t m_flMaxStretch = 0x58; // float32
                constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0x5C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropVariable_Model {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_EndCap {
                constexpr std::ptrdiff_t m_bStart = 0x48; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bEnd = 0x88; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeProjectVector3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_InputVectorA = 0x98; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceA = 0xD8; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_InputVectorB = 0x118; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceB = 0x158; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bPlane = 0x198; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeScaleMode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_StateList {
                constexpr std::ptrdiff_t m_states = 0x10; // CUtlVector<CAnimGraphDoc_State*>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ExpressionAction {
                constexpr std::ptrdiff_t m_paramName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_expression = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_Expression {
                constexpr std::ptrdiff_t m_Expression = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeDotProduct3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InputVectorA = 0x58; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_InputVectorB = 0x98; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Bool {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CycleControlClipNode {
                constexpr std::ptrdiff_t m_tagSpans = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_sequenceName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_valueSource = 0x78; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x88; // AnimParamID
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x8C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Vector2D {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // Vector2D
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            // MVDataComponentRequiresAncestor
            namespace CSmartPropOperation_RigidDeformation {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_Group {
                constexpr std::ptrdiff_t m_Children = 0x88; // CUtlVector<CSmartPropElement*>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_State {
                constexpr std::ptrdiff_t m_transitions = 0x28; // CUtlVector<CSmartPtr<CAnimGraphDoc_StateTransition>>
                constexpr std::ptrdiff_t m_actions = 0x40; // CUtlVector<CStateAction>
                constexpr std::ptrdiff_t m_name = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_sComment = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_stateID = 0x68; // AnimStateID
                constexpr std::ptrdiff_t m_position = 0x6C; // Vector2D
                constexpr std::ptrdiff_t m_bIsStartState = 0x74; // bool
                constexpr std::ptrdiff_t m_bIsEndtState = 0x75; // bool
                constexpr std::ptrdiff_t m_bIsInputToGraph = 0x76; // bool
                constexpr std::ptrdiff_t m_bIsPassthrough = 0x77; // bool
                constexpr std::ptrdiff_t m_bIsPassthroughRootMotion = 0x78; // bool
                constexpr std::ptrdiff_t m_bPreEvaluatePassthroughTransitionPath = 0x79; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDemoSettingsComponent {
                constexpr std::ptrdiff_t m_settings = 0x38; // CAnimDemoCaptureSettings
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_MotionParameterManager {
                constexpr std::ptrdiff_t m_params = 0x10; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionParameter>>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataOutlinerAssetNameExpr
            namespace CSmartPropElement_SmartProp {
                constexpr std::ptrdiff_t m_sSmartProp = 0x88; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCSmartProp>>
                constexpr std::ptrdiff_t m_bLocalEvaluationState = 0x168; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SpeedScaleNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_paramName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_GroupNode {
                constexpr std::ptrdiff_t m_nodeMgr = 0x70; // CAnimGraphDoc_NodeManager
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Vector4D {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // Vector4D
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_AimCameraNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_ikChain = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_cameraJointName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_pelvisJointName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_clavicleLeftJointName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_clavicleRightJointName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_parameterNamePosition = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_parameterNameOrientation = 0x74; // AnimParamID
                constexpr std::ptrdiff_t m_parameterNamePelvisOffset = 0x78; // AnimParamID
                constexpr std::ptrdiff_t m_parameterCameraOnly = 0x7C; // AnimParamID
                constexpr std::ptrdiff_t m_parameterCameraClearanceDistance = 0x80; // AnimParamID
                constexpr std::ptrdiff_t m_parameterWeaponDepenetrationDistance = 0x84; // AnimParamID
                constexpr std::ptrdiff_t m_parameterWeaponDepenetrationDelta = 0x88; // AnimParamID
                constexpr std::ptrdiff_t m_depenetrationJointName = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_propJoints = 0x98; // CUtlVector<CAnimGraphDoc_AimCameraNode_PropJoint>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_Probability {
                constexpr std::ptrdiff_t m_flProbability = 0x50; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_PathMotorBase {
                constexpr std::ptrdiff_t m_bLockToPath = 0x30; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ProxyNodeBase {
                constexpr std::ptrdiff_t m_proxyItems = 0x48; // CUtlVector<CConnectionProxyItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace CSmartPropParameter {
                constexpr std::ptrdiff_t m_nElementID = 0x8; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootStepTriggerNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flTolerance = 0x48; // float32
                constexpr std::ptrdiff_t m_items = 0x50; // CUtlVector<CFootStepTriggerItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ConditionContainer {
                constexpr std::ptrdiff_t m_conditions = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Condition>>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ChoiceNode {
                constexpr std::ptrdiff_t m_children = 0x40; // CUtlVector<CChoiceNodeChild>
                constexpr std::ptrdiff_t m_seed = 0x58; // int32
                constexpr std::ptrdiff_t m_choiceMethod = 0x5C; // ChoiceMethod
                constexpr std::ptrdiff_t m_choiceChangeMethod = 0x60; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blendMethod = 0x64; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blendTime = 0x68; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0x6C; // bool
                constexpr std::ptrdiff_t m_bResetChosen = 0x6D; // bool
                constexpr std::ptrdiff_t m_bDontResetSameSelection = 0x6E; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TagCondition {
                constexpr std::ptrdiff_t m_tagID = 0x28; // AnimTagID
                constexpr std::ptrdiff_t m_comparisonValue = 0x2C; // bool
                constexpr std::ptrdiff_t m_latestValue = 0x2D; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_TraceNoHit {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // TraceNoHitResult_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ColorChoice_t {
                constexpr std::ptrdiff_t m_Color = 0x0; // CSmartPropAttributeColor
                constexpr std::ptrdiff_t m_flWeight = 0x40; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ComponentManager {
                constexpr std::ptrdiff_t m_components = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Component>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeDirection {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataOutlinerNameExpr
            namespace CSmartPropChoice {
                constexpr std::ptrdiff_t m_Name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_DefaultOption = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_Options = 0x20; // CUtlVector<CSmartPropChoiceOption>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialGroupChoice_t {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x0; // CSmartPropAttributeMaterialGroup
                constexpr std::ptrdiff_t m_flWeight = 0x40; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FootPositionMetric {
                constexpr std::ptrdiff_t m_feet = 0x28; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bIgnoreSlope = 0x40; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TimeCondition {
                constexpr std::ptrdiff_t m_comparisonOp = 0x28; // Comparison_t
                constexpr std::ptrdiff_t m_comparisonString = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_Translate {
                constexpr std::ptrdiff_t m_vPosition = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StateStatusCondition {
                constexpr std::ptrdiff_t m_sourceValue = 0x28; // StateValue
                constexpr std::ptrdiff_t m_comparisonValueType = 0x2C; // StateComparisonValueType
                constexpr std::ptrdiff_t m_comparisonFixedValue = 0x30; // float32
                constexpr std::ptrdiff_t m_comparisonStateValue = 0x34; // StateValue
                constexpr std::ptrdiff_t m_comparisonParamName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_comparisonParamID = 0x40; // AnimParamID
                constexpr std::ptrdiff_t m_comparisonOp = 0x44; // Comparison_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Graph {
                constexpr std::ptrdiff_t m_pSettingsManager = 0xE0; // CSmartPtr<CAnimGraphSettingsManager>
                constexpr std::ptrdiff_t m_clipDataManager = 0xF0; // CAnimGraphDoc_ClipDataManager
                constexpr std::ptrdiff_t m_modelName = 0x138; // CUtlString
                constexpr std::ptrdiff_t m_previewModelName = 0x140; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FutureFacingMetric {
                constexpr std::ptrdiff_t m_flDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_flTime = 0x2C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_LinearLength {
                constexpr std::ptrdiff_t m_flLength = 0x48; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bAllowScale = 0x88; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flMinLength = 0xC8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flMaxLength = 0x108; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRigidBodyWeight {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BoneVelocityMetric {
                constexpr std::ptrdiff_t m_boneName = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeDistance3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_InputPositionA = 0x98; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceA = 0xD8; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_InputPositionB = 0x118; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceB = 0x158; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BonePositionMetric {
                constexpr std::ptrdiff_t m_boneName = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_AimCameraNode_PropJoint {
                constexpr std::ptrdiff_t m_jointName = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_MotionNodeManager {
            }
            // Parent: None
            // Field count: 0
            namespace CSmartPropElement_Deformer {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataExperimentalNodeSet
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PlaceOnMesh {
                constexpr std::ptrdiff_t m_nPickMode = 0xA0; // CSmartPropAttributeOrientationMode
                constexpr std::ptrdiff_t m_MeshName = 0xE0; // CUtlString
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_DistanceRemainingMetric {
                constexpr std::ptrdiff_t m_flMaxDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x2C; // bool
                constexpr std::ptrdiff_t m_flMinDistance = 0x30; // float32
                constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x34; // bool
                constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x38; // float32
                constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x3C; // bool
                constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x40; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_OrCondition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeTraceNoHit {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_OrientationMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropPlaceMeshOrientationMode_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CFootPinningItem {
                constexpr std::ptrdiff_t m_footName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_targetBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_tag = 0x18; // AnimTagID
                constexpr std::ptrdiff_t m_paramName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PlaceMultiple {
                constexpr std::ptrdiff_t m_nCount = 0xA0; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_Expression = 0xE0; // CUtlString
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_MidpointDeformer {
                constexpr std::ptrdiff_t m_bDeformationEnabled = 0xA0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vStart = 0xE0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vEnd = 0x120; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_fRadius = 0x160; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bContinuousSpline = 0x1A0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vOffset = 0x1E0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vAngles = 0x220; // CSmartPropAttributeAngles
                constexpr std::ptrdiff_t m_vScale = 0x260; // CSmartPropAttributeVector2D
                constexpr std::ptrdiff_t m_fFalloff = 0x2A0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OutputVariable = 0x2E0; // CUtlString
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_MotionMatchingNode {
                constexpr std::ptrdiff_t m_groups = 0x48; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItemGroup>>
                constexpr std::ptrdiff_t m_metrics = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionMetric>>
                constexpr std::ptrdiff_t m_blendCurve = 0x78; // CBlendCurve
                constexpr std::ptrdiff_t m_nRandomSeed = 0x80; // int32
                constexpr std::ptrdiff_t m_flSampleRate = 0x84; // float32
                constexpr std::ptrdiff_t m_bSearchEveryTick = 0x88; // bool
                constexpr std::ptrdiff_t m_flSearchInterval = 0x8C; // float32
                constexpr std::ptrdiff_t m_bSearchWhenMotionEnds = 0x90; // bool
                constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0x91; // bool
                constexpr std::ptrdiff_t m_flBlendTime = 0x94; // float32
                constexpr std::ptrdiff_t m_flSelectionThreshold = 0x98; // float32
                constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x9C; // float32
                constexpr std::ptrdiff_t m_bLockSelectionWhenWaning = 0xA0; // bool
                constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0xA1; // bool
                constexpr std::ptrdiff_t m_bGoalAssist = 0xA2; // bool
                constexpr std::ptrdiff_t m_flGoalAssistDistance = 0xA4; // float32
                constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0xA8; // float32
                constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0xAC; // bool
                constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0xB0; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0xB4; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_distanceScale_Damping = 0xC0; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertySuppressBaseClassField
            namespace CSmartPropElement_ModifyState {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_GraphMotionItem {
                constexpr std::ptrdiff_t m_name = 0xA8; // CUtlString
                constexpr std::ptrdiff_t m_nodeManager = 0xB0; // CAnimGraphDoc_MotionNodeManager
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BlockSelectionMetric {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CycleControlNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_valueSource = 0x48; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x5C; // bool
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_CreateSizer {
                constexpr std::ptrdiff_t m_Name = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_bDisplayModel = 0x58; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flInitialMinX = 0x98; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flInitialMaxX = 0xD8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMinX = 0x118; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMaxX = 0x158; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OutputVariableMinX = 0x198; // CUtlString
                constexpr std::ptrdiff_t m_OutputVariableMaxX = 0x1A0; // CUtlString
                constexpr std::ptrdiff_t m_flInitialMinY = 0x1A8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flInitialMaxY = 0x1E8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMinY = 0x228; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMaxY = 0x268; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OutputVariableMinY = 0x2A8; // CUtlString
                constexpr std::ptrdiff_t m_OutputVariableMaxY = 0x2B0; // CUtlString
                constexpr std::ptrdiff_t m_flInitialMinZ = 0x2B8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flInitialMaxZ = 0x2F8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMinZ = 0x338; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flConstraintMaxZ = 0x378; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OutputVariableMinZ = 0x3B8; // CUtlString
                constexpr std::ptrdiff_t m_OutputVariableMaxZ = 0x3C0; // CUtlString
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TargetWarpNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_eLinearRootMotionMode = 0x48; // TargetWarpLinearRootMotionMode
                constexpr std::ptrdiff_t m_eAngleMode = 0x4C; // TargetWarpAngleMode_t
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0x50; // TargetWarpCorrectionMethod
                constexpr std::ptrdiff_t m_eTargetWarpTimingMethod = 0x54; // TargetWarpTimingMethod
                constexpr std::ptrdiff_t m_moveHeadingParamID = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_desiredMoveHeadingParamID = 0x5C; // AnimParamID
                constexpr std::ptrdiff_t m_targetPositionParamID = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x64; // bool
                constexpr std::ptrdiff_t m_targetFacePositionParamID = 0x68; // AnimParamID
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x6C; // bool
                constexpr std::ptrdiff_t m_targetUpVectorParamID = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_bOnlyWarpWhenTagIsFound = 0x74; // bool
                constexpr std::ptrdiff_t m_bWarpOrientationDuringTranslation = 0x75; // bool
                constexpr std::ptrdiff_t m_flMaxAngle = 0x78; // float32
                constexpr std::ptrdiff_t m_bWarpAroundCenter = 0x7C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLODComponent {
                constexpr std::ptrdiff_t m_nServerLOD = 0x38; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeCrossProduct3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InputVectorA = 0x58; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_InputVectorB = 0x98; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_NodeConnection {
                constexpr std::ptrdiff_t m_nodeID = 0x0; // AnimNodeID
                constexpr std::ptrdiff_t m_outputID = 0x4; // AnimNodeOutputID
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SetOrientation {
                constexpr std::ptrdiff_t m_vForwardVector = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_ForwardDirectionSpace = 0x90; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_vUpVector = 0xD0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_UpDirectionSpace = 0x110; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bPrioritizeUp = 0x150; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_DirectionVector {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropDirection_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PickOne {
                constexpr std::ptrdiff_t m_SelectionMode = 0xA0; // CSmartPropAttributeChoiceSelectionMode
                constexpr std::ptrdiff_t m_SpecificChildIndex = 0xE0; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_OutputChoiceVariableName = 0x120; // CUtlString
                constexpr std::ptrdiff_t m_bConfigurable = 0x128; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vHandleOffset = 0x168; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_HandleColor = 0x1A8; // CSmartPropAttributeColor
                constexpr std::ptrdiff_t m_HandleSize = 0x1E8; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_HandleShape = 0x228; // ConfigurationHandleShape_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace CSmartPropModifier {
                constexpr std::ptrdiff_t m_bEnabled = 0x8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerAssetNameExpr
            namespace CSmartPropElement_ModelEntity {
                constexpr std::ptrdiff_t m_sModelName = 0x88; // CSmartPropAttributeModelName
                constexpr std::ptrdiff_t m_MaterialGroupName = 0xC8; // CSmartPropAttributeMaterialGroup
                constexpr std::ptrdiff_t m_bCastShadows = 0x108; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bForceStatic = 0x148; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_nDeformableAttachmentMode = 0x188; // SmartPropDeformableAttachMode_t
                constexpr std::ptrdiff_t m_nDeformableOrientationMode = 0x18C; // SmartPropDeformableOrientMode_t
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_CreateRotator {
                constexpr std::ptrdiff_t m_Name = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_vOffset = 0x58; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vRotationAxis = 0x98; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpace = 0xD8; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_flDisplayRadius = 0x118; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_DisplayColor = 0x158; // CSmartPropAttributeColor
                constexpr std::ptrdiff_t m_bApplyToCurrentTransform = 0x198; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flSnappingIncrement = 0x1D8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flInitialAngle = 0x218; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_bEnforceLimits = 0x258; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flMinAngle = 0x298; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flMaxAngle = 0x2D8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_OutputVariable = 0x318; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Color {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // Color
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CurrentVelocityMetric {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SequenceMotionItem {
                constexpr std::ptrdiff_t m_sequenceName = 0xA8; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimConflictInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_groupName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_subgraphName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x18; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CChoiceNodeChild {
                constexpr std::ptrdiff_t m_inputConnection = 0x0; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_weight = 0x10; // float32
                constexpr std::ptrdiff_t m_blendTime = 0x14; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_MaterialAttributes {
                constexpr std::ptrdiff_t m_AllowedMaterialAttributes = 0x50; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_DisallowedMaterialAttributes = 0x68; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_FitOnLine {
                constexpr std::ptrdiff_t m_vStart = 0xA0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vEnd = 0xE0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_PointSpace = 0x120; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bOrientAlongLine = 0x160; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vUpDirection = 0x1A0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_UpDirectionSpace = 0x1E0; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bPrioritizeUp = 0x220; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_nScaleMode = 0x260; // CSmartPropAttributeScaleMode
                constexpr std::ptrdiff_t m_nPickMode = 0x2A0; // CSmartPropAttributePickMode
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeVectorBetweenPoints3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bNormalized = 0x98; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_InputPositionA = 0xD8; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceA = 0x118; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_InputPositionB = 0x158; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_CoordinateSpaceB = 0x198; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SubGraphNode {
                constexpr std::ptrdiff_t m_subGraphFilename = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_animNameMap = 0x78; // CUtlHashtable<CUtlString,CUtlString>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ParamSpan {
                constexpr std::ptrdiff_t m_samples = 0x20; // CUtlVector<CAnimGraphDoc_ParamSpanSample>
                constexpr std::ptrdiff_t m_paramName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x40; // AnimParamID
                constexpr std::ptrdiff_t m_flStartCycle = 0x44; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x48; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_AndCondition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_SavePosition {
                constexpr std::ptrdiff_t m_CoordinateSpace = 0x50; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_VariableName = 0x90; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ParameterManager {
                constexpr std::ptrdiff_t m_Parameters = 0x20; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PropDynamic {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_GroupInputNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_MotionParameter {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimParamID
                constexpr std::ptrdiff_t m_flMinValue = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxValue = 0x28; // float32
                constexpr std::ptrdiff_t m_nSamples = 0x2C; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_PathMetric {
                constexpr std::ptrdiff_t m_flDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_pathSamples = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x48; // bool
                constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x4C; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StanceOverrideNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_stanceSourceConnection = 0x48; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_blendParamName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_blendParamID = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_eMode = 0x5C; // StanceOverrideMode
                constexpr std::ptrdiff_t m_sequenceName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nFrameIndex = 0x68; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributeCoordinateSpace {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineComponent {
                constexpr std::ptrdiff_t m_sName = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_NodeState {
                constexpr std::ptrdiff_t m_inputConnection = 0x80; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_bIsRootMotionExclusive = 0x88; // bool
                constexpr std::ptrdiff_t m_bIsRootMotionExclusiveFirstFrame = 0x89; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CConnectionProxyItem {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_outputID = 0x8; // AnimNodeOutputID
                constexpr std::ptrdiff_t m_inputConnection = 0xC; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Int {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // int32
                constexpr std::ptrdiff_t m_nParamaterMinValue = 0x3C; // int32
                constexpr std::ptrdiff_t m_nParamaterMaxValue = 0x40; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ZeroPoseNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_BendDeformer {
                constexpr std::ptrdiff_t m_bDeformationEnabled = 0xA0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vOrigin = 0xE0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vAngles = 0x120; // CSmartPropAttributeAngles
                constexpr std::ptrdiff_t m_vSize = 0x160; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_flBendAngle = 0x1A0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flBendPoint = 0x1E0; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flBendRadius = 0x220; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_RandomScale {
                constexpr std::ptrdiff_t m_flRandomScaleMin = 0x50; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flRandomScaleMax = 0x90; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flSnapIncrement = 0xD0; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Float {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // float32
                constexpr std::ptrdiff_t m_flParamaterMinValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_flParamaterMaxValue = 0x40; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ResetRotation {
                constexpr std::ptrdiff_t m_bIgnoreObjectRotation = 0x50; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bResetPitch = 0x90; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bResetYaw = 0xD0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bResetRoll = 0x110; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_SurfaceAngle {
                constexpr std::ptrdiff_t m_flSurfaceSlopeMin = 0x50; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flSurfaceSlopeMax = 0x90; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Motor {
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bDefault = 0x28; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            namespace CSmartPropSelectionCriteria {
                constexpr std::ptrdiff_t m_bEnabled = 0x8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_DirectionalBlendNode {
                constexpr std::ptrdiff_t m_animNamePrefix = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_blendValueSource = 0x50; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_bLoop = 0x64; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0x65; // bool
                constexpr std::ptrdiff_t m_playbackSpeed = 0x68; // float32
                constexpr std::ptrdiff_t m_damping = 0x70; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_PlayerInputMotor {
                constexpr std::ptrdiff_t m_sampleTimes = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
                constexpr std::ptrdiff_t m_flSpringConstant = 0x4C; // float32
                constexpr std::ptrdiff_t m_flAnticipationDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_anticipationPosParamName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_anticipationPosParam = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_anticipationHeadingParamName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_anticipationHeadingParam = 0x70; // AnimParamID
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_StepsRemainingMetric {
                constexpr std::ptrdiff_t m_feet = 0x28; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x40; // float32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            // MVDataExperimentalNodeSet
            namespace CSmartPropOperation_TraceToLine {
                constexpr std::ptrdiff_t m_EndPointA = 0x350; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_EndPointSpaceA = 0x390; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_EndPointB = 0x3D0; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_EndPointSpaceB = 0x410; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bTraceAway = 0x450; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flTraceLength = 0x490; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_OrientationWarpNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_eMode = 0x48; // OrientationWarpMode_t
                constexpr std::ptrdiff_t m_targetParamID = 0x4C; // AnimParamID
                constexpr std::ptrdiff_t m_targetPositionParamID = 0x50; // AnimParamID
                constexpr std::ptrdiff_t m_fallbackTargetPositionParamID = 0x54; // AnimParamID
                constexpr std::ptrdiff_t m_eTargetOffsetMode = 0x58; // OrientationWarpTargetOffsetMode_t
                constexpr std::ptrdiff_t m_flTargetOffset = 0x5C; // float32
                constexpr std::ptrdiff_t m_targetOffsetParamID = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_flMaxRootMotionScale = 0x64; // float32
                constexpr std::ptrdiff_t m_eRootMotionSource = 0x68; // OrientationWarpRootMotionSource_t
                constexpr std::ptrdiff_t m_damping = 0x70; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bEnablePreferredRotationDirection = 0x88; // bool
                constexpr std::ptrdiff_t m_ePreferredRotationDirection = 0x8C; // AnimValueSource
                constexpr std::ptrdiff_t m_flPreferredRotationThreshold = 0x90; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FinishedCondition {
                constexpr std::ptrdiff_t m_option = 0x28; // FinishedConditionOption
                constexpr std::ptrdiff_t m_bIsFinished = 0x2C; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MSmartPropClassVersion
            // MVDataFileExtension
            // MVDataPreviewWidget
            // MVDataGroupNodeClass
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropRoot {
                constexpr std::ptrdiff_t m_nContentVersion = 0x0; // int32
                constexpr std::ptrdiff_t m_nMaxDepth = 0x8; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_Variables = 0x48; // CUtlVector<CSmartPropVariable*>
                constexpr std::ptrdiff_t m_Choices = 0x60; // CUtlVector<CSmartPropChoice*>
                constexpr std::ptrdiff_t m_Children = 0x78; // CUtlVector<CSmartPropElement*>
                constexpr std::ptrdiff_t m_Modifiers = 0x90; // CUtlVector<CSmartPropModifier*>
                constexpr std::ptrdiff_t m_hPulseGraph = 0xA8; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_SetParameterAction {
                constexpr std::ptrdiff_t m_paramName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_value = 0x34; // CAnimVariant
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_Rotate {
                constexpr std::ptrdiff_t m_vRotation = 0x50; // CSmartPropAttributeAngles
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_LookAtNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_target = 0x48; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x58; // AnimParamID
                constexpr std::ptrdiff_t m_bIsPosition = 0x5C; // bool
                constexpr std::ptrdiff_t m_weightParamName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_weightParam = 0x68; // AnimParamID
                constexpr std::ptrdiff_t m_lookatChainName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_bRotateYawForward = 0x80; // bool
                constexpr std::ptrdiff_t m_flYawLimit = 0x84; // float32
                constexpr std::ptrdiff_t m_flPitchLimit = 0x88; // float32
                constexpr std::ptrdiff_t m_bMaintainUpDirection = 0x8C; // bool
                constexpr std::ptrdiff_t m_bResetBase = 0x8D; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x8E; // bool
                constexpr std::ptrdiff_t m_bUseHysteresis = 0x8F; // bool
                constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0x90; // float32
                constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0x94; // float32
                constexpr std::ptrdiff_t m_damping = 0x98; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_GroupOutputNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFloatAnimValue {
                constexpr std::ptrdiff_t m_flConstValue = 0x8; // float32
                constexpr std::ptrdiff_t m_paramName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_paramID = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_eSource = 0x1C; // EAnimValueSource
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSmartPropVariable_Vector3D {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PropPhysics {
                constexpr std::ptrdiff_t m_bStartAsleep = 0x190; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropVariable_Material {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_JumpHelperNode {
                constexpr std::ptrdiff_t m_targetParamName = 0xB0; // CUtlString
                constexpr std::ptrdiff_t m_targetParamID = 0xB8; // AnimParamID
                constexpr std::ptrdiff_t m_flJumpStartCycle = 0xBC; // float32
                constexpr std::ptrdiff_t m_flJumpDuration = 0xC0; // float32
                constexpr std::ptrdiff_t m_bTranslateX = 0xC4; // bool
                constexpr std::ptrdiff_t m_bTranslateY = 0xC5; // bool
                constexpr std::ptrdiff_t m_bTranslateZ = 0xC6; // bool
                constexpr std::ptrdiff_t m_bScaleSpeed = 0xC7; // bool
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0xC8; // JumpCorrectionMethod
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_RagdollNode {
                constexpr std::ptrdiff_t m_weightListName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_poseControlMethod = 0x48; // RagdollPoseControl
                constexpr std::ptrdiff_t m_inputConnection = 0x4C; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FollowPathNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flBlendOutTime = 0x48; // float32
                constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x4C; // bool
                constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x4D; // bool
                constexpr std::ptrdiff_t m_bScaleSpeed = 0x4E; // bool
                constexpr std::ptrdiff_t m_flScale = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinAngle = 0x54; // float32
                constexpr std::ptrdiff_t m_flMaxAngle = 0x58; // float32
                constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x5C; // float32
                constexpr std::ptrdiff_t m_bTurnToFace = 0x60; // bool
                constexpr std::ptrdiff_t m_facingTarget = 0x64; // AnimValueSource
                constexpr std::ptrdiff_t m_paramName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x74; // float32
                constexpr std::ptrdiff_t m_damping = 0x78; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_AimMatrixNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x48; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_flMaxYawAngle = 0x58; // float32
                constexpr std::ptrdiff_t m_flMaxPitchAngle = 0x5C; // float32
                constexpr std::ptrdiff_t m_target = 0x60; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_param = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_bIsPosition = 0x74; // bool
                constexpr std::ptrdiff_t m_attachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_blendMode = 0x80; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_boneMaskName = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_bResetBase = 0x90; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x91; // bool
                constexpr std::ptrdiff_t m_bUseBiasAndClamp = 0x92; // bool
                constexpr std::ptrdiff_t m_flBiasAndClampYawOffset = 0x94; // float32
                constexpr std::ptrdiff_t m_flBiasAndClampPitchOffset = 0x98; // float32
                constexpr std::ptrdiff_t m_biasAndClampBlendCurve = 0x9C; // CBlendCurve
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TurnHelperNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_facingTarget = 0x48; // AnimValueSource
                constexpr std::ptrdiff_t m_turnStartTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_turnDuration = 0x50; // float32
                constexpr std::ptrdiff_t m_bMatchChildDuration = 0x54; // bool
                constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x55; // bool
                constexpr std::ptrdiff_t m_manualTurnOffset = 0x58; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_ComputeNormalizedVector3D {
                constexpr std::ptrdiff_t m_OutputVariableName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InputVector = 0x58; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SelectorNode {
                constexpr std::ptrdiff_t m_children = 0x40; // CUtlVector<CAnimGraphDoc_NodeConnection>
                constexpr std::ptrdiff_t m_fallbackChild = 0x58; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_tags = 0x60; // CUtlVector<AnimTagID>
                constexpr std::ptrdiff_t m_selectionSource = 0x78; // SelectionSource_t
                constexpr std::ptrdiff_t m_boolParamName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_boolParamID = 0x88; // AnimParamID
                constexpr std::ptrdiff_t m_enumParamName = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_enumParamID = 0x98; // AnimParamID
                constexpr std::ptrdiff_t m_tagID = 0x9C; // AnimTagID
                constexpr std::ptrdiff_t m_blendDuration = 0xA0; // CFloatAnimValue
                constexpr std::ptrdiff_t m_tagBehavior = 0xC0; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_bResetOnChange = 0xC4; // bool
                constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xC5; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xC6; // bool
                constexpr std::ptrdiff_t m_blendCurve = 0xC8; // CBlendCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_RadiusPlacementMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropRadiusPlacementMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_PathPositions {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropPathPositions_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPairedSequenceComponent {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BindPoseNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_PathPosition {
                constexpr std::ptrdiff_t m_PlaceAtPositions = 0x48; // CSmartPropAttributePathPositions
                constexpr std::ptrdiff_t m_nPlaceEveryNthPosition = 0x88; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_nNthPositionIndexOffset = 0xC8; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_bAllowAtStart = 0x108; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bAllowAtEnd = 0x148; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TimeRemainingMetric {
                constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x28; // bool
                constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x2C; // float32
                constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x30; // bool
                constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x34; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            // MVDataExperimentalNodeSet
            namespace CSmartPropOperation_TraceToPoint {
                constexpr std::ptrdiff_t m_TargetPoint = 0x350; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_TargetPointSpace = 0x390; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bTraceAway = 0x3D0; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_flTraceLength = 0x410; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataNodeTintColor
            // MVDataClassGroup
            namespace CSmartPropOperation_SaveState {
                constexpr std::ptrdiff_t m_StateName = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_MaterialTint {
                constexpr std::ptrdiff_t m_Material = 0x50; // CSmartPropAttributeMaterialName
                constexpr std::ptrdiff_t m_SelectionMode = 0x90; // CSmartPropAttributeColorSelectionMode
                constexpr std::ptrdiff_t m_Color = 0xD0; // CSmartPropAttributeColor
                constexpr std::ptrdiff_t m_Gradient = 0x110; // CColorGradient
                constexpr std::ptrdiff_t m_ColorPosition = 0x128; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSmartPropMaterialReplacement {
                constexpr std::ptrdiff_t m_OriginalMaterial = 0x0; // CSmartPropAttributeMaterialName
                constexpr std::ptrdiff_t m_ReplacementMaterial = 0x40; // CSmartPropAttributeMaterialName
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_WayPointHelperNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flStartCycle = 0x48; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x4C; // float32
                constexpr std::ptrdiff_t m_bOnlyGoals = 0x50; // bool
                constexpr std::ptrdiff_t m_bPreventOvershoot = 0x51; // bool
                constexpr std::ptrdiff_t m_bPreventUndershoot = 0x52; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SubtractNode {
                constexpr std::ptrdiff_t m_baseInputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_subtractInputConnection = 0x48; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_timingBehavior = 0x50; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x54; // float32
                constexpr std::ptrdiff_t m_footMotionTiming = 0x58; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x5C; // bool
                constexpr std::ptrdiff_t m_bResetBase = 0x5D; // bool
                constexpr std::ptrdiff_t m_bResetSubtract = 0x5E; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x5F; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x60; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_AddNode {
                constexpr std::ptrdiff_t m_baseInput = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_additiveInput = 0x48; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_timingBehavior = 0x50; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x54; // float32
                constexpr std::ptrdiff_t m_footMotionTiming = 0x58; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x5C; // bool
                constexpr std::ptrdiff_t m_bResetBase = 0x5D; // bool
                constexpr std::ptrdiff_t m_bResetAdditive = 0x5E; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x5F; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x60; // bool
                constexpr std::ptrdiff_t m_bApplyScale = 0x61; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MVDataOutlinerLabelExpr
            namespace CSmartPropElement {
                constexpr std::ptrdiff_t m_nElementID = 0x8; // int32
                constexpr std::ptrdiff_t m_bEnabled = 0x10; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_sLabel = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_SelectionCriteria = 0x58; // CUtlVector<CSmartPropSelectionCriteria*>
                constexpr std::ptrdiff_t m_Modifiers = 0x70; // CUtlVector<CSmartPropModifier*>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBlendNodeChild {
                constexpr std::ptrdiff_t m_inputConnection = 0x8; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_blendValue = 0x18; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CActionComponent {
                constexpr std::ptrdiff_t m_actions = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
                constexpr std::ptrdiff_t m_sName = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_Blend2DItem {
                constexpr std::ptrdiff_t m_blendValue = 0x18; // Vector2D
                constexpr std::ptrdiff_t m_bUseCustomDuration = 0x28; // bool
                constexpr std::ptrdiff_t m_flCustomDuration = 0x2C; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Component {
                constexpr std::ptrdiff_t m_group = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x28; // AnimComponentID
                constexpr std::ptrdiff_t m_bStartEnabled = 0x2C; // bool
                constexpr std::ptrdiff_t m_nPriority = 0x30; // int32
                constexpr std::ptrdiff_t m_networkMode = 0x34; // AnimNodeNetworkMode
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_Blend2DNode {
                constexpr std::ptrdiff_t m_items = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_Blend2DItem>>
                constexpr std::ptrdiff_t m_tagSpans = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_paramSpans = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                constexpr std::ptrdiff_t m_blendSourceX = 0xA0; // AnimValueSource
                constexpr std::ptrdiff_t m_paramNameX = 0xA8; // CUtlString
                constexpr std::ptrdiff_t m_paramX = 0xB0; // AnimParamID
                constexpr std::ptrdiff_t m_blendSourceY = 0xB4; // AnimValueSource
                constexpr std::ptrdiff_t m_paramNameY = 0xB8; // CUtlString
                constexpr std::ptrdiff_t m_paramY = 0xC0; // AnimParamID
                constexpr std::ptrdiff_t m_eBlendMode = 0xC4; // Blend2DMode
                constexpr std::ptrdiff_t m_bLoop = 0xC8; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xC9; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xCA; // bool
                constexpr std::ptrdiff_t m_playbackSpeed = 0xCC; // float32
                constexpr std::ptrdiff_t m_damping = 0xD0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xE8; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_TagSpan {
                constexpr std::ptrdiff_t m_id = 0x20; // AnimTagID
                constexpr std::ptrdiff_t m_fStartCycle = 0x24; // float32
                constexpr std::ptrdiff_t m_fDuration = 0x28; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_FutureVelocityMetric {
                constexpr std::ptrdiff_t m_flDistance = 0x28; // float32
                constexpr std::ptrdiff_t m_flStoppingDistance = 0x2C; // float32
                constexpr std::ptrdiff_t m_eMode = 0x30; // VelocityMetricMode
                constexpr std::ptrdiff_t m_bAutoTargetSpeed = 0x31; // bool
                constexpr std::ptrdiff_t m_flManualTargetSpeed = 0x34; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CDampedValueItem {
                constexpr std::ptrdiff_t m_valueType = 0x0; // DampedValueType
                constexpr std::ptrdiff_t m_floatParamNameIn = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_floatParamNameOut = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vectorParamNameIn = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_vectorParamNameOut = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_floatParamIn = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_floatParamOut = 0x2C; // AnimParamID
                constexpr std::ptrdiff_t m_vectorParamIn = 0x30; // AnimParamID
                constexpr std::ptrdiff_t m_vectorParamOut = 0x34; // AnimParamID
                constexpr std::ptrdiff_t m_damping = 0x38; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributePickMode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagConflict {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_ClipData {
                constexpr std::ptrdiff_t m_tagSpans = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_clipName = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_CoordinateSpace {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropSpace_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ConflictManager {
                constexpr std::ptrdiff_t m_conflicts = 0x18; // CUtlVector<CSmartPtr<CAnimConflictBase>>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_BoneMaskNode {
                constexpr std::ptrdiff_t m_weightListName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_inputConnection1 = 0x48; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_inputConnection2 = 0x50; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_blendSpace = 0x58; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_bUseBlendScale = 0x5C; // bool
                constexpr std::ptrdiff_t m_blendValueSource = 0x60; // AnimValueSource
                constexpr std::ptrdiff_t m_blendParameterName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_blendParameter = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_timingBehavior = 0x74; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x78; // float32
                constexpr std::ptrdiff_t m_flRootMotionBlend = 0x7C; // float32
                constexpr std::ptrdiff_t m_footMotionTiming = 0x80; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bResetChild1 = 0x84; // bool
                constexpr std::ptrdiff_t m_bResetChild2 = 0x85; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CAnimGraphDoc_SequenceBlend2DItem {
                constexpr std::ptrdiff_t m_tagSpans = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CTargetSelectorChild {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_inputConnection = 0x10; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_SingleFrameNode {
                constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_eFrameSelection = 0x58; // SingleFrameSelection
                constexpr std::ptrdiff_t m_nFrameIndex = 0x5C; // int32
                constexpr std::ptrdiff_t m_actions = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CycleCondition {
                constexpr std::ptrdiff_t m_comparisonOp = 0x28; // Comparison_t
                constexpr std::ptrdiff_t m_comparisonString = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_comparisonValue = 0x38; // float32
                constexpr std::ptrdiff_t m_comparisonValueType = 0x3C; // ComparisonValueType
                constexpr std::ptrdiff_t m_comparisonParamName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_comparisonParamID = 0x48; // AnimParamID
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_HitReactNode {
                constexpr std::ptrdiff_t m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
                constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0x48; // float32
                constexpr std::ptrdiff_t m_triggerParamName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_hitBoneParamName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_hitOffsetParamName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_hitDirectionParamName = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_hitStrengthParamName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_triggerParam = 0x78; // AnimParamID
                constexpr std::ptrdiff_t m_hitBoneParam = 0x7C; // AnimParamID
                constexpr std::ptrdiff_t m_hitOffsetParam = 0x80; // AnimParamID
                constexpr std::ptrdiff_t m_hitDirectionParam = 0x84; // AnimParamID
                constexpr std::ptrdiff_t m_hitStrengthParam = 0x88; // AnimParamID
                constexpr std::ptrdiff_t m_weightListName = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_hipBoneName = 0x98; // CUtlString
                constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0xA0; // float32
                constexpr std::ptrdiff_t m_nEffectedBoneCount = 0xA4; // int32
                constexpr std::ptrdiff_t m_flMaxImpactForce = 0xA8; // float32
                constexpr std::ptrdiff_t m_flMinImpactForce = 0xAC; // float32
                constexpr std::ptrdiff_t m_flWhipImpactScale = 0xB0; // float32
                constexpr std::ptrdiff_t m_flCounterRotationScale = 0xB4; // float32
                constexpr std::ptrdiff_t m_flDistanceFadeScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flPropagationScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_flWhipDelay = 0xC0; // float32
                constexpr std::ptrdiff_t m_flSpringStrength = 0xC4; // float32
                constexpr std::ptrdiff_t m_flWhipSpringStrength = 0xC8; // float32
                constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0xCC; // float32
                constexpr std::ptrdiff_t m_flHipDipImpactScale = 0xD0; // float32
                constexpr std::ptrdiff_t m_flHipDipDelay = 0xD4; // float32
                constexpr std::ptrdiff_t m_bResetBase = 0xD8; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeTintColor
            namespace CSmartPropFilter {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_ColorSelectionMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // SmartPropColorSelectionMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_MotionMetric {
                constexpr std::ptrdiff_t m_flWeight = 0x20; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropVariable_PickMode {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // PickMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_NodeManager {
                constexpr std::ptrdiff_t m_nodes = 0x8; // CUtlHashtable<AnimNodeID,CSmartPtr<CAnimGraphDoc_Node>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_Action {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ToggleComponentAction {
                constexpr std::ptrdiff_t m_componentID = 0x28; // AnimComponentID
                constexpr std::ptrdiff_t m_bSetEnabled = 0x2C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMovementComponent {
                constexpr std::ptrdiff_t m_motors = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Motor>>
                constexpr std::ptrdiff_t m_bNetworkPath = 0x50; // bool
                constexpr std::ptrdiff_t m_facingDamping = 0x58; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bNetworkFacing = 0x70; // bool
                constexpr std::ptrdiff_t m_paramIDs = 0x74; // AnimParamID[34]
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropElement_PlaceOnPath {
                constexpr std::ptrdiff_t m_PathName = 0xA0; // CUtlString
                constexpr std::ptrdiff_t m_flSpacing = 0xA8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_flOffsetAlongPath = 0xE8; // CSmartPropAttributeFloat
                constexpr std::ptrdiff_t m_vPathOffset = 0x128; // CSmartPropAttributeVector2D
                constexpr std::ptrdiff_t m_PathSpace = 0x168; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_bUseFixedUpDirection = 0x1A8; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bUseProjectedDistance = 0x1E8; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_vUpDirection = 0x228; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_UpDirectionSpace = 0x268; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_DefaultPathInWorldSpace = 0x2A8; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_DefaultPath = 0x2E8; // CUtlVector<CSmartPropAttributeVector>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_SubGraph {
                constexpr std::ptrdiff_t m_nodeManager = 0x8; // CAnimGraphDoc_NodeManager
                constexpr std::ptrdiff_t m_componentManager = 0x50; // CAnimGraphDoc_ComponentManager
                constexpr std::ptrdiff_t m_localParameters = 0x78; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                constexpr std::ptrdiff_t m_localTags = 0x90; // CUtlVector<CSmartPtr<CAnimTagBase>>
                constexpr std::ptrdiff_t m_referencedParamGroups = 0xA8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_referencedTagGroups = 0xC0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CSolveIKChainAnimNodeChainData {
                constexpr std::ptrdiff_t m_IkChain = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_SolverSettingSource = 0x10; // SolveIKChainAnimNodeSettingSource
                constexpr std::ptrdiff_t m_OverrideSolverSettings = 0x14; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_TargetSettingSource = 0x20; // SolveIKChainAnimNodeSettingSource
                constexpr std::ptrdiff_t m_OverrideTargetSettings = 0x28; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_DebugSetting = 0x50; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_flDebugNormalizedLength = 0x54; // float32
                constexpr std::ptrdiff_t m_vDebugOffset = 0x58; // Vector
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_TargetSelectorNode {
                constexpr std::ptrdiff_t m_children = 0x40; // CUtlVector<CTargetSelectorChild>
                constexpr std::ptrdiff_t m_eLinearRootMotionMode = 0x58; // TargetWarpLinearRootMotionMode
                constexpr std::ptrdiff_t m_eAngleMode = 0x5C; // TargetSelectorAngleMode_t
                constexpr std::ptrdiff_t m_moveHeadingParamID = 0x60; // AnimParamID
                constexpr std::ptrdiff_t m_desiredMoveHeadingParamID = 0x64; // AnimParamID
                constexpr std::ptrdiff_t m_targetPositionParamID = 0x68; // AnimParamID
                constexpr std::ptrdiff_t m_bTargetPositionIsWorldSpace = 0x6C; // bool
                constexpr std::ptrdiff_t m_targetFacePositionParamID = 0x70; // AnimParamID
                constexpr std::ptrdiff_t m_bTargetFacePositionIsWorldSpace = 0x74; // bool
                constexpr std::ptrdiff_t m_bEnablePhaseMatching = 0x75; // bool
                constexpr std::ptrdiff_t m_flPhaseMatchingMaxRootMotionSkip = 0x78; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_CurrentRotationVelocityMetric {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            namespace CSmartPropAttributePathPositions {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphDoc_PairedSequenceNode {
                constexpr std::ptrdiff_t m_sPairedRole = 0x48; // CGlobalSymbol
                constexpr std::ptrdiff_t m_previewSequenceName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x58; // float32
                constexpr std::ptrdiff_t m_bLoop = 0x5C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_ParamSpanSample {
                constexpr std::ptrdiff_t m_value = 0x8; // CAnimVariant
                constexpr std::ptrdiff_t m_flCycle = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_TraceInDirection {
                constexpr std::ptrdiff_t m_vTraceDirection = 0x350; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_DirectionSpace = 0x390; // CSmartPropAttributeCoordinateSpace
                constexpr std::ptrdiff_t m_flTraceLength = 0x3D0; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDoc_NodeStateTransition {
                constexpr std::ptrdiff_t m_blendDuration = 0x70; // CFloatAnimValue
                constexpr std::ptrdiff_t m_bReset = 0x90; // bool
                constexpr std::ptrdiff_t m_resetCycleOption = 0x94; // ResetCycleOption
                constexpr std::ptrdiff_t m_flFixedCycleValue = 0x98; // CFloatAnimValue
                constexpr std::ptrdiff_t m_blendCurve = 0xB8; // CBlendCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCPPScriptComponent {
                constexpr std::ptrdiff_t m_scriptsToRun = 0x38; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropFilter_SurfaceProperties {
                constexpr std::ptrdiff_t m_AllowedSurfaceProperties = 0x50; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_DisallowedSurfaceProperties = 0x68; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropVariable_SurfaceProperty {
                constexpr std::ptrdiff_t m_DefaultValue = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            namespace CSmartPropOperation_RandomOffset {
                constexpr std::ptrdiff_t m_vRandomPositionMin = 0x50; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vRandomPositionMax = 0x90; // CSmartPropAttributeVector
                constexpr std::ptrdiff_t m_vSnapIncrement = 0xD0; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CSmartPropSelectionCriteria_TopoEdgeCountCriteria {
                constexpr std::ptrdiff_t m_nTargetOpenEdgeCount = 0x48; // CSmartPropAttributeInt
                constexpr std::ptrdiff_t m_bInvert = 0x88; // CSmartPropAttributeBool
                constexpr std::ptrdiff_t m_bSharedVert = 0xC8; // CSmartPropAttributeBool
            }
        }
    }
}
