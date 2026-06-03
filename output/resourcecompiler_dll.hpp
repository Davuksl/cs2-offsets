// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: resourcecompiler.dll
        // Class count: 390
        // Enum count: 26
        namespace resourcecompiler_dll {
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
            enum class CNmGraphDocStateNode__TimedStateEventType_t : uint32_t {
                TimeElapsed = 0x0,
                TimeRemaining = 0x1
            };
            // Alignment: 4
            // Member count: 14
            enum class LayerType_t : uint32_t {
                LAYER_TYPE_LEVELS = 0x0,
                LAYER_TYPE_VIBRANCE = 0x1,
                LAYER_TYPE_BRIGHTNESS_CONTRAST = 0x2,
                LAYER_TYPE_LUT = 0x3,
                LAYER_TYPE_COLOR_BALANCE = 0x4,
                LAYER_TYPE_COLOR_TINT = 0x5,
                LAYER_TYPE_HUE_SATURATION = 0x6,
                LAYER_TYPE_CURVES = 0x7,
                LAYER_TYPE_TONEMAPPING = 0x8,
                LAYER_TYPE_BLOOM = 0x9,
                LAYER_TYPE_VIGNETTE = 0xA,
                LAYER_TYPE_LOCAL_CONTRAST = 0xB,
                LAYER_TYPE_FOG_SCATTERING = 0xC,
                MAX_LAYER_TYPES = 0xD
            };
            // Alignment: 4
            // Member count: 2
            enum class SteamAudioHRTFInterpolationType_t : uint32_t {
                SA_HRTFINTEROP_NEAREST = 0x0,
                SA_HRTFINTEROP_BILINEAR = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class CNmClipDocEvent_EntityAttribute_Type_t : uint32_t {
                EVENT_ENTITY_ATTR_TYPE_INT = 0x0,
                EVENT_ENTITY_ATTR_TYPE_FLOAT = 0x1
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmGraphDocIDEventConditionNode__SearchRule_t : uint8_t {
                SearchAll = 0x0,
                OnlySearchGraphEvents = 0x1,
                OnlySearchAnimEvents = 0x2
            };
            // Alignment: 1
            // Member count: 2
            enum class NmEventConditionOperator_t : uint8_t {
                Or = 0x0,
                And = 0x1
            };
            // Alignment: 4
            // Member count: 2
            enum class LayerMaskType_t : uint32_t {
                LAYER_MASK_LUMINOSITY = 0x0,
                LAYER_MASK_COLOR_RANGE = 0x1
            };
            // Alignment: 4
            // Member count: 3
            enum class PackingMode_t : uint32_t {
                PCKM_INVALID = 0x0,
                PCKM_FLAT = 0x1,
                PCKM_RGB_A = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class SequenceLoopMode_t : uint32_t {
                CLAMP = 0x0,
                LOOP = 0x1,
                CLAMP_EXTEND = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SequenceAlphaCropMode_t : uint32_t {
                NONE = 0x0,
                UV = 0x1,
                U = 0x2,
                V = 0x3
            };
            // Alignment: 4
            // Member count: 8
            enum class NmGraphDocGraphType_t : uint32_t {
                Invalid = 0x0,
                BlendTree = 0x1,
                ValueTree = 0x2,
                StateMachine = 0x3,
                EntryOverrideTree = 0x4,
                TransitionConduit = 0x5,
                GlobalTransitionConduit = 0x6,
                VirtualParameterValueTree = 0x7
            };
            // Alignment: 1
            // Member count: 2
            enum class NmEventPriorityRule_t : uint8_t {
                HighestWeight = 0x0,
                HighestPercentageThrough = 0x1
            };
            // Alignment: 1
            // Member count: 5
            enum class CNmClipDocument__AdditiveType_t : uint8_t {
                None = 0x0,
                RelativeToSkeleton = 0x1,
                RelativeToFrame = 0x2,
                RelativeToAnimation = 0x3,
                RelativeToAnimationFrame = 0x4
            };
            // Alignment: 4
            // Member count: 3
            enum class PulsePortUserVisibility_t : uint32_t {
                UNSPECIFIED = 0x0,
                SHOW = 0x1,
                HIDE = 0x2
            };
            // Alignment: 4
            // Member count: 3
            enum class SequenceChannelMode_t : uint32_t {
                RGBA = 0x0,
                RGB = 0x1,
                ALPHA = 0x2
            };
            // Alignment: 1
            // Member count: 3
            enum class CNmClipDocument__AdditiveBaseFrame_t : uint8_t {
                FirstFrame = 0x0,
                LastFrame = 0x1,
                UserSpecifiedFrame = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class SeqMode_t : uint32_t {
                SQM_RGBA = 0x0,
                SQM_RGB = 0x1,
                SQM_ALPHA = 0x2,
                SQM_ALPHA_INVALID = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class AlphaCropAxis_t : uint32_t {
                ALPHACROP_UV = 0x0,
                ALPHACROP_U = 0x1,
                ALPHACROP_V = 0x2
            };
            // Alignment: 4
            // Member count: 2
            enum class CNmGraphDocOrientationWarpNode__OffsetType_t : uint32_t {
                RelativeToCharacter = 0x0,
                RelativeToOriginalRootMotion = 0x1
            };
            // Alignment: 4
            // Member count: 4
            enum class CNmGraphDocStateNode__StateType_t : uint32_t {
                OffState = 0x0,
                BlendTreeState = 0x1,
                StateMachineState = 0x2,
                Clone = 0x3
            };
            // Alignment: 4
            // Member count: 4
            enum class SteamAudioOcclusionModeType_t : uint32_t {
                SA_OCCLUSIONMODE_NONE = 0x0,
                SA_OCCLUSIONMODE_NOTRANSMISSION = 0x1,
                SA_OCCLUSIONMODE_FREQINDEPENDENT = 0x2,
                SA_OCCLUSIONMODE_FREQDEPENDENT = 0x3
            };
            // Alignment: 4
            // Member count: 3
            enum class CNmClipDocEventTrack__Type_t : uint32_t {
                Immediate = 0x0,
                Duration = 0x1,
                Num = 0x2
            };
            // Alignment: 4
            // Member count: 11
            enum class CNmGraphDocTransitionNode__TimeMatchMode_t : uint32_t {
                None = 0x0,
                Synchronized = 0x1,
                MatchSourceSyncEventIndex = 0x2,
                MatchSourceSyncEventPercentage = 0x3,
                MatchSourceSyncEventIndexAndPercentage = 0x4,
                MatchSyncEventID = 0x5,
                MatchClosestSyncEventID = 0x6,
                MatchSyncEventIDAndPercentage = 0x7,
                MatchClosestSyncEventIDAndPercentage = 0x8,
                MatchTimeInSeconds = 0x9,
                OffsetTimeInSeconds = 0xA
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
            // Field count: 1
            namespace CPulseCell_LimitCount__Criteria_t {
                constexpr std::ptrdiff_t m_bLimitCountPasses = 0x0; // bool
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
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCachedBoolNode {
                constexpr std::ptrdiff_t m_mode = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterizedClipSelectorNode__CData {
                constexpr std::ptrdiff_t m_optionWeights = 0x8; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstBoolNode {
                constexpr std::ptrdiff_t m_bValue = 0x100; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocNotNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocChainLookatNode {
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x200; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_Sound {
                constexpr std::ptrdiff_t m_relevance = 0x10; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_bContinuePlayingSoundAtDurationEnd = 0x14; // bool
                constexpr std::ptrdiff_t m_flDurationInterruptionThreshold = 0x18; // float32
                constexpr std::ptrdiff_t m_name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_position = 0x28; // CNmSoundEvent::Position_t
                constexpr std::ptrdiff_t m_attachmentName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlOutput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x20; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVibranceColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nVibrance = 0x28; // int32
                constexpr std::ptrdiff_t m_nSaturation = 0x2C; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocPoseResultNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixEffectName {
                constexpr std::ptrdiff_t m_defaultValue = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDSelectorNode {
                constexpr std::ptrdiff_t m_options = 0x100; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_defaultID = 0x118; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlRemap {
                constexpr std::ptrdiff_t m_flInputMin = 0x20; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x24; // float32
                constexpr std::ptrdiff_t m_flOutputStart = 0x28; // float32
                constexpr std::ptrdiff_t m_flOutputEnd = 0x2C; // float32
                constexpr std::ptrdiff_t m_flPower = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCachedVectorNode {
                constexpr std::ptrdiff_t m_mode = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocClipNode__CData {
                constexpr std::ptrdiff_t m_clip = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flSpeedMultiplier = 0x10; // float32
                constexpr std::ptrdiff_t m_nStartSyncEventOffset = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCachedTargetNode {
                constexpr std::ptrdiff_t m_mode = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatRemapNode__RemapRange_t {
                constexpr std::ptrdiff_t m_flBegin = 0x0; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixPanner {
                constexpr std::ptrdiff_t m_type = 0x20; // VMixPannerType_t
                constexpr std::ptrdiff_t m_flStrength = 0x24; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstTargetNode {
                constexpr std::ptrdiff_t m_rotation = 0x100; // QAngle
                constexpr std::ptrdiff_t m_translation = 0x10C; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFlowNode {
                constexpr std::ptrdiff_t m_inputPins = 0x50; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,4>
                constexpr std::ptrdiff_t m_outputPins = 0xD8; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,1>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixFlanger {
                constexpr std::ptrdiff_t m_flDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x24; // float32
                constexpr std::ptrdiff_t m_flFeedfoward = 0x28; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x2C; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x30; // float32
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x34; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x38; // float32
                constexpr std::ptrdiff_t m_bAntialiasing = 0x3C; // bool
                constexpr std::ptrdiff_t m_flGain = 0x40; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSplitterBlend {
                constexpr std::ptrdiff_t m_flLockAmount = 0x20; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatClampNode {
                constexpr std::ptrdiff_t m_clampRange = 0x100; // Range_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatSwitchNode {
                constexpr std::ptrdiff_t m_flFalseValue = 0x100; // float32
                constexpr std::ptrdiff_t m_flTrueValue = 0x104; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlMeter {
                constexpr std::ptrdiff_t m_flValue = 0x20; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBlendSpace1D__Point_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flValue = 0x8; // float32
                constexpr std::ptrdiff_t m_pinID = 0xC; // V_uuid_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVariationDataNode {
                constexpr std::ptrdiff_t m_pDefaultVariationData = 0x100; // CNmGraphDocVariationDataNode::CData*
                constexpr std::ptrdiff_t m_overrides = 0x108; // CUtlVector<CNmGraphDocVariationDataNode::OverrideValue_t>
                constexpr std::ptrdiff_t m_defaultResourceName = 0x120; // CResourceName
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlInput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x20; // float32
                constexpr std::ptrdiff_t m_flMinRange = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRange = 0x28; // float32
                constexpr std::ptrdiff_t m_bUseDecibels = 0x2C; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocReferencePoseNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskParameterReferenceNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_OrientationWarp {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // float32
                constexpr std::ptrdiff_t m_flDuration = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstVectorNode {
                constexpr std::ptrdiff_t m_value = 0x100; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLocalContrastLayer {
                constexpr std::ptrdiff_t m_params = 0x28; // PostProcessingLocalContrastParameters_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixVocoder {
                constexpr std::ptrdiff_t m_nBandCount = 0x20; // int32
                constexpr std::ptrdiff_t m_flBandwidth = 0x24; // float32
                constexpr std::ptrdiff_t m_fldBModGain = 0x28; // float32
                constexpr std::ptrdiff_t m_flAttackTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flReleaseTime = 0x30; // float32
                constexpr std::ptrdiff_t m_flFreqRangeStart = 0x34; // float32
                constexpr std::ptrdiff_t m_flFreqRangeEnd = 0x38; // float32
                constexpr std::ptrdiff_t m_fldBUnvoicedGain = 0x3C; // float32
                constexpr std::ptrdiff_t m_nDebugBand = 0x40; // int32
                constexpr std::ptrdiff_t m_bPeakMode = 0x44; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFootstepEventIDNode {
                constexpr std::ptrdiff_t m_priorityRule = 0x100; // NmEventPriorityRule_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x101; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x102; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatSpringNode {
                constexpr std::ptrdiff_t m_flHertz = 0x100; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x104; // float32
                constexpr std::ptrdiff_t m_bUseStartValue = 0x108; // bool
                constexpr std::ptrdiff_t m_flStartValue = 0x10C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterizedClipSelectorNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x200; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x218; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_Transition {
                constexpr std::ptrdiff_t m_rule = 0x10; // NmTransitionRule_t
                constexpr std::ptrdiff_t m_optionalID = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmVariationHierarchy {
                constexpr std::ptrdiff_t m_variations = 0x0; // CUtlVector<NmVariation_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoolVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocZeroPoseNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_ID {
                constexpr std::ptrdiff_t m_ID = 0x10; // CGlobalSymbol
                constexpr std::ptrdiff_t m_secondaryID = 0x18; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTransitionNode {
                constexpr std::ptrdiff_t m_flDurationSeconds = 0x108; // float32
                constexpr std::ptrdiff_t m_bClampDurationToSource = 0x10C; // bool
                constexpr std::ptrdiff_t m_rootMotionBlend = 0x10D; // NmRootMotionBlendMode_t
                constexpr std::ptrdiff_t m_blendWeightEasing = 0x10E; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_flBoneMaskBlendInTimePercentage = 0x110; // float32
                constexpr std::ptrdiff_t m_timeMatchMode = 0x114; // CNmGraphDocTransitionNode::TimeMatchMode_t
                constexpr std::ptrdiff_t m_flTimeOffset = 0x118; // float32
                constexpr std::ptrdiff_t m_bCanBeForced = 0x11C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDualCompressor {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_desc = 0x24; // VMixDualCompressorDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSelectableSubgraph {
                constexpr std::ptrdiff_t file = 0x8; // CUtlString
                constexpr std::ptrdiff_t subgraphName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetSelectorNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x100; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_flOrientationScoreWeight = 0x118; // float32
                constexpr std::ptrdiff_t m_flPositionScoreWeight = 0x11C; // float32
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x120; // bool
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x121; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocSelectorBaseNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x100; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBrightnessContrastColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nBrightness = 0x28; // int32
                constexpr std::ptrdiff_t m_nContrast = 0x2C; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocTwoBoneIKNode__CData {
                constexpr std::ptrdiff_t m_effectorBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGraphEditorState {
                constexpr std::ptrdiff_t m_viewConfig = 0x0; // CGraphEditorViewConfig
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDBasedClipSelectorNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x100; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateCompletedConditionNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixVsndName {
                constexpr std::ptrdiff_t m_defaultValue = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixBoxverb {
                constexpr std::ptrdiff_t m_flSizeMax = 0x20; // float32
                constexpr std::ptrdiff_t m_flSizeMin = 0x24; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x28; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x30; // float32
                constexpr std::ptrdiff_t m_bParallel = 0x34; // bool
                constexpr std::ptrdiff_t m_filterType = 0x38; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flWidth = 0x48; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x4C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x50; // float32
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x54; // float32
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x58; // float32
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x5C; // float32
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x60; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x64; // float32
                constexpr std::ptrdiff_t m_flTaps = 0x68; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_Particle {
                constexpr std::ptrdiff_t m_relevance = 0x10; // CNmEventRelevance_t
                constexpr std::ptrdiff_t m_type = 0x14; // CNmParticleEvent::Type_t
                constexpr std::ptrdiff_t m_target = 0x18; // CNmEventTargetEntity_t
                constexpr std::ptrdiff_t m_particleSystem = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x28; // bool
                constexpr std::ptrdiff_t m_bStopImmediately = 0x29; // bool
                constexpr std::ptrdiff_t m_bPlayEndCap = 0x2A; // bool
                constexpr std::ptrdiff_t m_attachmentPoint0 = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType0 = 0x38; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentPoint1 = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType1 = 0x48; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_config = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_effectForConfig = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVariationIDComparisonNode {
                constexpr std::ptrdiff_t m_comparison = 0x200; // CNmIDComparisonNode::Comparison_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDiffusor {
                constexpr std::ptrdiff_t m_flSize = 0x20; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x24; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x28; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x2C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurvesColorCorrectionLayer {
                constexpr std::ptrdiff_t m_curvePointsRGB = 0x28; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_curvePointsR = 0x40; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_curvePointsG = 0x58; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_curvePointsB = 0x70; // CUtlVector<Vector2D>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_Foot {
                constexpr std::ptrdiff_t m_phase = 0x10; // NmFootPhase_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocAnimationPoseNode {
                constexpr std::ptrdiff_t m_inputTimeRemapRange = 0x200; // Range_t
                constexpr std::ptrdiff_t m_fixedTimeValue = 0x208; // float32
                constexpr std::ptrdiff_t m_useFramesAsInput = 0x20C; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskResultNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDResultNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBlendSpace2D {
                constexpr std::ptrdiff_t m_pointNames = 0x0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_points = 0x18; // CUtlVector<Vector2D>
                constexpr std::ptrdiff_t m_indices = 0x30; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_hullIndices = 0x48; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixAudioMeter {
                constexpr std::ptrdiff_t m_flLeftLevel = 0x20; // float32
                constexpr std::ptrdiff_t m_flLeftPeak = 0x24; // float32
                constexpr std::ptrdiff_t m_flRightLevel = 0x28; // float32
                constexpr std::ptrdiff_t m_flRightPeak = 0x2C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorControlParameterNode {
                constexpr std::ptrdiff_t m_previewStartValue = 0x118; // Vector
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocGraph {
                constexpr std::ptrdiff_t m_ID = 0x8; // V_uuid_t
                constexpr std::ptrdiff_t m_nodes = 0x20; // CUtlVector<CNmGraphDocNode*>
                constexpr std::ptrdiff_t m_graphType = 0x38; // NmGraphDocGraphType_t
                constexpr std::ptrdiff_t m_viewOffset = 0x3C; // Vector2D
                constexpr std::ptrdiff_t m_flViewZoom = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVirtualParameterNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CColorLookupColorCorrectionLayer {
                constexpr std::ptrdiff_t m_fileName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_lut = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nDim = 0x48; // int32
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSteamAudioDirect {
                constexpr std::ptrdiff_t m_bApplyDistanceAttenuation = 0x20; // bool
                constexpr std::ptrdiff_t m_bApplyAirAbsorption = 0x21; // bool
                constexpr std::ptrdiff_t m_bApplyDirectivity = 0x22; // bool
                constexpr std::ptrdiff_t m_bApplyOcclusion = 0x23; // bool
                constexpr std::ptrdiff_t m_bApplyTransmission = 0x24; // bool
                constexpr std::ptrdiff_t m_flDipoleWeight = 0x28; // float32
                constexpr std::ptrdiff_t m_flDipolePower = 0x2C; // float32
                constexpr std::ptrdiff_t m_flOcclusion = 0x30; // float32
                constexpr std::ptrdiff_t m_flTransmissionLow = 0x34; // float32
                constexpr std::ptrdiff_t m_flTransmissionMid = 0x38; // float32
                constexpr std::ptrdiff_t m_flTransmissionHigh = 0x3C; // float32
                constexpr std::ptrdiff_t m_vecTransmission = 0x40; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDynamics {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_fldbNoiseGateThreshold = 0x24; // float32
                constexpr std::ptrdiff_t m_fldbGain = 0x28; // float32
                constexpr std::ptrdiff_t m_fldbCompressionThreshold = 0x2C; // float32
                constexpr std::ptrdiff_t m_fldbLimiterThreshold = 0x30; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x34; // float32
                constexpr std::ptrdiff_t m_flRatio = 0x38; // float32
                constexpr std::ptrdiff_t m_flLimiterRatio = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAttackTime = 0x40; // float32
                constexpr std::ptrdiff_t m_flReleaseTime = 0x44; // float32
                constexpr std::ptrdiff_t m_flRMSTime = 0x48; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x4C; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x50; // bool
                constexpr std::ptrdiff_t m_nUIPage = 0x54; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixEQ8 {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_stages = 0x28; // CFilterStage[8]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSkeletonDocument__SecondarySkeleton_t {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_attachToBoneID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmPreviewArchetype__SecondarySkeleton_t {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_previewModel = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_bodyPartChoiceName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_attachToBoneName = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocGraphEventConditionNode {
                constexpr std::ptrdiff_t m_operator = 0x100; // NmEventConditionOperator_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x101; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x102; // bool
                constexpr std::ptrdiff_t m_conditions = 0x108; // CUtlVector<CNmGraphDocGraphEventConditionNode::Condition_t>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDynamics3Band {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_fldbOutputGain = 0x24; // float32
                constexpr std::ptrdiff_t m_flRMSTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x30; // float32
                constexpr std::ptrdiff_t m_flTimeScale = 0x34; // float32
                constexpr std::ptrdiff_t m_fldbKneeWidth = 0x38; // float32
                constexpr std::ptrdiff_t m_flLowCutoffFreq = 0x3C; // float32
                constexpr std::ptrdiff_t m_flHighCutoffFreq = 0x40; // float32
                constexpr std::ptrdiff_t m_bPeakMode = 0x44; // bool
                constexpr std::ptrdiff_t m_nSelectedPage = 0x48; // int32
                constexpr std::ptrdiff_t m_bands = 0x4C; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSteamAudioSource {
                constexpr std::ptrdiff_t m_nInterpolation = 0x20; // SteamAudioHRTFInterpolationType_t
                constexpr std::ptrdiff_t m_flDirectMixLevel = 0x24; // float32
                constexpr std::ptrdiff_t m_bEnablePerspectiveCorrection = 0x28; // bool
                constexpr std::ptrdiff_t m_bRelativePosition = 0x29; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocSelectorConditionNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CGraphPreviewList {
                constexpr std::ptrdiff_t m_flVolume = 0x0; // float32
                constexpr std::ptrdiff_t m_previewList = 0x8; // CPreviewList
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocVelocityBasedSpeedScaleNode {
                constexpr std::ptrdiff_t m_flDesiredVelocity = 0x100; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CToneMappingLayer {
                constexpr std::ptrdiff_t m_params = 0x28; // PostProcessingTonemapParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixAmp {
                constexpr std::ptrdiff_t m_flVolume = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocClipSelectorNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorResultNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSteamAudioPathing {
                constexpr std::ptrdiff_t m_flPathingMixLevel = 0x20; // float32
                constexpr std::ptrdiff_t m_vPathingEQ = 0x24; // float32[3]
                constexpr std::ptrdiff_t m_vPathingCoeffs = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_vecPathingEQ = 0x48; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixFilter {
                constexpr std::ptrdiff_t m_filterType = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nChannels = 0x28; // int32
                constexpr std::ptrdiff_t m_flFrequency = 0x2C; // float32
                constexpr std::ptrdiff_t m_flQ = 0x30; // float32
                constexpr std::ptrdiff_t m_fldbGain = 0x34; // float32
                constexpr std::ptrdiff_t m_nFilterSlope = 0x38; // VMixFilterSlope_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSubgraph {
                constexpr std::ptrdiff_t subgraphFile = 0x20; // CUtlString
                constexpr std::ptrdiff_t subgraphName = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixShaper {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixShaperDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocFootIKNode {
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x200; // bool
                constexpr std::ptrdiff_t m_blendMode = 0x201; // NmIKBlendMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlMax {
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLevelsColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nInputBlackPointRGB = 0x28; // int32
                constexpr std::ptrdiff_t m_nInputBlackPointR = 0x2C; // int32
                constexpr std::ptrdiff_t m_nInputBlackPointG = 0x30; // int32
                constexpr std::ptrdiff_t m_nInputBlackPointB = 0x34; // int32
                constexpr std::ptrdiff_t m_nInputWhitePointRGB = 0x38; // int32
                constexpr std::ptrdiff_t m_nInputWhitePointR = 0x3C; // int32
                constexpr std::ptrdiff_t m_nInputWhitePointG = 0x40; // int32
                constexpr std::ptrdiff_t m_nInputWhitePointB = 0x44; // int32
                constexpr std::ptrdiff_t m_nOutputBlackPointRGB = 0x48; // int32
                constexpr std::ptrdiff_t m_nOutputBlackPointR = 0x4C; // int32
                constexpr std::ptrdiff_t m_nOutputBlackPointG = 0x50; // int32
                constexpr std::ptrdiff_t m_nOutputBlackPointB = 0x54; // int32
                constexpr std::ptrdiff_t m_nOutputWhitePointRGB = 0x58; // int32
                constexpr std::ptrdiff_t m_nOutputWhitePointR = 0x5C; // int32
                constexpr std::ptrdiff_t m_nOutputWhitePointG = 0x60; // int32
                constexpr std::ptrdiff_t m_nOutputWhitePointB = 0x64; // int32
                constexpr std::ptrdiff_t m_flGammaRGB = 0x68; // float32
                constexpr std::ptrdiff_t m_flGammaR = 0x6C; // float32
                constexpr std::ptrdiff_t m_flGammaG = 0x70; // float32
                constexpr std::ptrdiff_t m_flGammaB = 0x74; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPreviewEntry {
                constexpr std::ptrdiff_t m_soundName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_trackName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_bIsSoundEvent = 0x10; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVariationDataNode__OverrideValue_t {
                constexpr std::ptrdiff_t m_variationID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_pData = 0x8; // CNmGraphDocVariationDataNode::CData*
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorCreateNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatMathNode {
                constexpr std::ptrdiff_t m_bReturnAbsoluteResult = 0x100; // bool
                constexpr std::ptrdiff_t m_bReturnNegatedResult = 0x101; // bool
                constexpr std::ptrdiff_t m_operator = 0x102; // CNmFloatMathNode::Operator_t
                constexpr std::ptrdiff_t m_flValueB = 0x104; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocResultNode {
                constexpr std::ptrdiff_t m_resultType = 0x100; // NmGraphValueType_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskNode__CData {
                constexpr std::ptrdiff_t m_overrideMaskID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetInfoNode {
                constexpr std::ptrdiff_t m_infoType = 0x100; // CNmTargetInfoNode::Info_t
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x104; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocDataDictionary__Parameter_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // V_uuid_t
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_groupName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_valueType = 0x20; // NmGraphValueType_t
                constexpr std::ptrdiff_t m_expectedValues = 0x28; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocument {
                constexpr std::ptrdiff_t m_pRootGraph = 0x70; // CNmGraphDocFlowGraph*
                constexpr std::ptrdiff_t m_variationHierarchy = 0x78; // CNmVariationHierarchy
                constexpr std::ptrdiff_t m_debugParameterSets = 0x90; // CUtlLeanVector<CNmGraphDocument::DebugParameterSet_t>
                constexpr std::ptrdiff_t m_dictionaryIDSetIDs = 0xA0; // CUtlVector<V_uuid_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTimeConditionNode {
                constexpr std::ptrdiff_t m_flComparand = 0x100; // float32
                constexpr std::ptrdiff_t m_type = 0x104; // CNmTimeConditionNode::ComparisonType_t
                constexpr std::ptrdiff_t m_operator = 0x105; // CNmTimeConditionNode::Operator_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDComparisonNode {
                constexpr std::ptrdiff_t m_comparison = 0x100; // CNmIDComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_values = 0x108; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_TargetWarp {
                constexpr std::ptrdiff_t m_rule = 0x10; // NmTargetWarpRule_t
                constexpr std::ptrdiff_t m_algorithm = 0x11; // NmTargetWarpAlgorithm_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLayerMask {
                constexpr std::ptrdiff_t m_nLumMaskCenter = 0x8; // int32
                constexpr std::ptrdiff_t m_nLumMaskWidth = 0xC; // int32
                constexpr std::ptrdiff_t m_nLumMaskShape = 0x10; // int32
                constexpr std::ptrdiff_t m_bInverted = 0x14; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocSpeedScaleNode {
                constexpr std::ptrdiff_t m_flMultiplier = 0x100; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateNode__TimedStateEvent_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_type = 0x8; // CNmGraphDocStateNode::TimedStateEventType_t
                constexpr std::ptrdiff_t m_comparisonOperator = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
                constexpr std::ptrdiff_t m_flTimeValueSeconds = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocScaleNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTransitionConduitNode {
                constexpr std::ptrdiff_t m_startStateID = 0x50; // V_uuid_t
                constexpr std::ptrdiff_t m_endStateID = 0x60; // V_uuid_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlListener {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatRemapNode {
                constexpr std::ptrdiff_t m_inputRange = 0x100; // CNmGraphDocFloatRemapNode::RemapRange_t
                constexpr std::ptrdiff_t m_outputRange = 0x108; // CNmGraphDocFloatRemapNode::RemapRange_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoolParameterReferenceNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterReferenceNode {
                constexpr std::ptrdiff_t m_parameterUUID = 0x108; // V_uuid_t
                constexpr std::ptrdiff_t m_parameterValueType = 0x118; // NmGraphValueType_t
                constexpr std::ptrdiff_t m_parameterName = 0x120; // CUtlString
                constexpr std::ptrdiff_t m_parameterGroupName = 0x128; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocDurationScaleNode {
                constexpr std::ptrdiff_t m_flDesiredDuration = 0x100; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatControlParameterNode {
                constexpr std::ptrdiff_t m_previewStartValue = 0x118; // float32
                constexpr std::ptrdiff_t m_previewMin = 0x11C; // float32
                constexpr std::ptrdiff_t m_previewMax = 0x120; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlTransientInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPreviewList {
                constexpr std::ptrdiff_t m_sounds = 0x0; // CUtlVector<CPreviewEntry>
                constexpr std::ptrdiff_t m_bPreviewInGame = 0x18; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIsTargetSetNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocGraphEventConditionNode__Condition_t {
                constexpr std::ptrdiff_t m_eventID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_type = 0x8; // NmGraphEventTypeCondition_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCommentNode {
                constexpr std::ptrdiff_t m_size = 0x50; // Vector2D
                constexpr std::ptrdiff_t m_comment = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_nodeColor = 0x60; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_BodyGroup {
                constexpr std::ptrdiff_t m_target = 0x10; // CNmEventTargetEntity_t
                constexpr std::ptrdiff_t bodygroup = 0x18; // CUtlString
                constexpr std::ptrdiff_t value = 0x20; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixPresetDSP {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_effectName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_flXFade = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFixedWeightBoneMaskNode {
                constexpr std::ptrdiff_t m_flBoneWeight = 0x100; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocument {
                constexpr std::ptrdiff_t m_sourceFilename = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_animationSkeletonName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_secondaryAnimationSkeletonNames = 0x80; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_eventTracks = 0x98; // CUtlLeanVector<CNmClipDocEventTrack>
                constexpr std::ptrdiff_t m_nStartFrame = 0xA8; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0xAC; // int32
                constexpr std::ptrdiff_t m_flDurationOverrideSeconds = 0xB0; // float32
                constexpr std::ptrdiff_t m_additiveType = 0xB4; // CNmClipDocument::AdditiveType_t
                constexpr std::ptrdiff_t m_additiveBaseFilename = 0xB8; // CUtlString
                constexpr std::ptrdiff_t m_additiveBaseFrame = 0xC0; // CNmClipDocument::AdditiveBaseFrame_t
                constexpr std::ptrdiff_t m_nAdditiveBaseFrameIdx = 0xC4; // int32
                constexpr std::ptrdiff_t m_bUseReferencePoseForSecondaryAnimAdditives = 0xC8; // bool
                constexpr std::ptrdiff_t m_bonesToSampleInModelSpace = 0xD0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlAutomatic {
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixBoxverb2 {
                constexpr std::ptrdiff_t m_flSizeMax = 0x20; // float32
                constexpr std::ptrdiff_t m_flSizeMin = 0x24; // float32
                constexpr std::ptrdiff_t m_flComplexity = 0x28; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x2C; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x30; // float32
                constexpr std::ptrdiff_t m_bParallel = 0x34; // bool
                constexpr std::ptrdiff_t m_filterType = 0x38; // VMixFilterDesc_t
                constexpr std::ptrdiff_t m_flWidth = 0x48; // float32
                constexpr std::ptrdiff_t m_flHeight = 0x4C; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x50; // float32
                constexpr std::ptrdiff_t m_flFeedbackScale = 0x54; // float32
                constexpr std::ptrdiff_t m_flFeedbackWidth = 0x58; // float32
                constexpr std::ptrdiff_t m_flFeedbackHeight = 0x5C; // float32
                constexpr std::ptrdiff_t m_flFeedbackDepth = 0x60; // float32
                constexpr std::ptrdiff_t m_flWetMix = 0x64; // float32
                constexpr std::ptrdiff_t m_flOutputGain = 0x68; // float32
                constexpr std::ptrdiff_t m_flTaps = 0x6C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SetVarTarget_t {
                constexpr std::ptrdiff_t nVarDefID = 0x0; // PulseDocNodeID_t
                constexpr std::ptrdiff_t strValueEncoded = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocChainLookatNode__CData {
                constexpr std::ptrdiff_t m_chainEndBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_chainForwardDir = 0x10; // Vector
                constexpr std::ptrdiff_t m_nChainLength = 0x1C; // uint8
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x20; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTextureSheetDoc_SequenceDecalParams {
                constexpr std::ptrdiff_t m_flScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flDepth = 0x4; // float32
                constexpr std::ptrdiff_t m_flScaleVariation = 0x8; // float32
                constexpr std::ptrdiff_t m_flStartFadeTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flFadeDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_flAnimationScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flAnimationStartTime = 0x18; // float32
                constexpr std::ptrdiff_t m_flAlignWithGravityFactor = 0x1C; // float32
                constexpr std::ptrdiff_t m_nDecalRtEncoding = 0x20; // DecalRtEncoding_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatResultNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace GetVarTarget_t {
                constexpr std::ptrdiff_t nVarDefID = 0x0; // PulseDocNodeID_t
                constexpr std::ptrdiff_t strValueEncoded = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixOsc {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixOscDesc_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocOrNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTransitionEventConditionNode {
                constexpr std::ptrdiff_t m_ruleCondition = 0x100; // NmTransitionRuleCondition_t
                constexpr std::ptrdiff_t m_bMatchOnlySpecificMarkerID = 0x101; // bool
                constexpr std::ptrdiff_t m_markerIDToMatch = 0x108; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x110; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x111; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixEnvelopeTrigger {
                constexpr std::ptrdiff_t m_flBaseValue = 0x20; // float32
                constexpr std::ptrdiff_t m_flDestinationValue = 0x24; // float32
                constexpr std::ptrdiff_t m_flAttackTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flHoldTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flReleaseTime = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocDataDictionary {
                constexpr std::ptrdiff_t m_parameterSets = 0x0; // CUtlVector<CNmGraphDocDataDictionary::ParameterSet_t>
                constexpr std::ptrdiff_t m_IDSets = 0x18; // CUtlVector<CNmGraphDocDataDictionary::IDSet_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetWarpNode__CData {
                constexpr std::ptrdiff_t m_strAlignmentBoneName = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatCurveEventNode {
                constexpr std::ptrdiff_t m_matchID = 0x100; // CGlobalSymbol
                constexpr std::ptrdiff_t m_flDefaultValue = 0x108; // float32
                constexpr std::ptrdiff_t m_priorityRule = 0x10C; // NmEventPriorityRule_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x10D; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x10E; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVariationIDComparisonNode__CData {
                constexpr std::ptrdiff_t m_values = 0x8; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocNode {
                constexpr std::ptrdiff_t m_ID = 0x8; // V_uuid_t
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_floatingComment = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_position = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_pChildGraph = 0x40; // CNmGraphDocGraph*
                constexpr std::ptrdiff_t m_pSecondaryGraph = 0x48; // CNmGraphDocGraph*
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixOutput {
                constexpr std::ptrdiff_t m_flVolume1 = 0x20; // float32
                constexpr std::ptrdiff_t m_flVolume2 = 0x24; // float32
                constexpr std::ptrdiff_t m_sendTo = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorVirtualParameterNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocRootMotionOverrideNode {
                constexpr std::ptrdiff_t m_flMaxLinearVelocity = 0x100; // float32
                constexpr std::ptrdiff_t m_flMaxAngularVelocityDegrees = 0x104; // float32
                constexpr std::ptrdiff_t m_bOverrideMoveDirX = 0x108; // bool
                constexpr std::ptrdiff_t m_bOverrideMoveDirY = 0x109; // bool
                constexpr std::ptrdiff_t m_bOverrideMoveDirZ = 0x10A; // bool
                constexpr std::ptrdiff_t m_bAllowPitchForFacing = 0x10B; // bool
                constexpr std::ptrdiff_t m_bListenForRootMotionEvents = 0x10C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CColorTintColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nTintColorR = 0x28; // int32
                constexpr std::ptrdiff_t m_nTintColorG = 0x2C; // int32
                constexpr std::ptrdiff_t m_nTintColorB = 0x30; // int32
                constexpr std::ptrdiff_t m_nStrength = 0x34; // int32
                constexpr std::ptrdiff_t m_bPreserveLuminosity = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocLocalLayerNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVariationDataNode__CData {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlCrossfade {
                constexpr std::ptrdiff_t m_flFadeStart = 0x20; // float32
                constexpr std::ptrdiff_t m_flFadeEnd = 0x24; // float32
            }
            // Parent: None
            // Field count: 103
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPulseEditorSettings {
                constexpr std::ptrdiff_t m_colCanvasBackground = 0x0; // Color
                constexpr std::ptrdiff_t m_colCanvasBackgroundWhenDebugging = 0x4; // Color
                constexpr std::ptrdiff_t m_flGridSnapV2 = 0x8; // float32
                constexpr std::ptrdiff_t m_bSnapAbsToGrid = 0xC; // bool
                constexpr std::ptrdiff_t m_bSnapSizeToGrid = 0xD; // bool
                constexpr std::ptrdiff_t m_bGridMinorPoints = 0xE; // bool
                constexpr std::ptrdiff_t m_flGridMinorSpacingV2 = 0x10; // float32
                constexpr std::ptrdiff_t m_flSuppressMinorGridFurtherThan = 0x14; // float32
                constexpr std::ptrdiff_t m_colGridMinorColor = 0x18; // Color
                constexpr std::ptrdiff_t m_flGridMinorWidth = 0x1C; // float32
                constexpr std::ptrdiff_t m_nGridMajorMultiple = 0x20; // int32
                constexpr std::ptrdiff_t m_colGridMajorColor = 0x24; // Color
                constexpr std::ptrdiff_t m_flGridMajorWidth = 0x28; // float32
                constexpr std::ptrdiff_t m_colGridOriginColor = 0x2C; // Color
                constexpr std::ptrdiff_t m_flGridOriginWidth = 0x30; // float32
                constexpr std::ptrdiff_t m_nFlowTooltipBoxMargin = 0x34; // float32
                constexpr std::ptrdiff_t m_FontSequencePoint = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_flSequencePointRadius = 0x40; // float32
                constexpr std::ptrdiff_t m_flSequencePointLinkWidth = 0x44; // float32
                constexpr std::ptrdiff_t m_colSequencePointFadeOverlay = 0x48; // Color
                constexpr std::ptrdiff_t m_colSequencePointSpontaneous = 0x4C; // Color
                constexpr std::ptrdiff_t m_colSequencePointYield = 0x50; // Color
                constexpr std::ptrdiff_t m_colSequencePoint = 0x54; // Color
                constexpr std::ptrdiff_t m_colSequencePointLink = 0x58; // Color
                constexpr std::ptrdiff_t m_colSequencePointLinkYield = 0x5C; // Color
                constexpr std::ptrdiff_t m_colSequencePointName = 0x60; // Color
                constexpr std::ptrdiff_t m_colFlowTooltipBorder = 0x64; // Color
                constexpr std::ptrdiff_t m_colFlowTooltipBackground = 0x68; // Color
                constexpr std::ptrdiff_t m_colFlowTooltipForeground = 0x6C; // Color
                constexpr std::ptrdiff_t m_flPortDragOffCreateThreshold = 0x70; // float32
                constexpr std::ptrdiff_t m_colBool = 0x74; // Color
                constexpr std::ptrdiff_t m_colNumber = 0x78; // Color
                constexpr std::ptrdiff_t m_colString = 0x7C; // Color
                constexpr std::ptrdiff_t m_colOther = 0x80; // Color
                constexpr std::ptrdiff_t m_colCursorFlow = 0x84; // Color
                constexpr std::ptrdiff_t m_FontFlowTooltip = 0x88; // CUtlString
                constexpr std::ptrdiff_t m_FontLiteral = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_FontDomainName = 0x98; // CUtlString
                constexpr std::ptrdiff_t m_vDomainNameOffsetPX = 0xA0; // Vector2D
                constexpr std::ptrdiff_t m_colDomainName = 0xA8; // Color
                constexpr std::ptrdiff_t m_colDomainNameWhenDebugging = 0xAC; // Color
                constexpr std::ptrdiff_t m_FontParentAssets = 0xB0; // CUtlString
                constexpr std::ptrdiff_t m_colParentAssets = 0xB8; // Color
                constexpr std::ptrdiff_t m_colParentAssetsBroken = 0xBC; // Color
                constexpr std::ptrdiff_t m_flLiteralLabelSpacing = 0xC0; // float32
                constexpr std::ptrdiff_t m_colDebuggerBrokenBorder = 0xC4; // Color
                constexpr std::ptrdiff_t m_DebuggerBrokenImg = 0xC8; // CUtlString
                constexpr std::ptrdiff_t m_DebuggerBrokenOtherImg = 0xD0; // CUtlString
                constexpr std::ptrdiff_t m_flDebuggerBrokenMarkerOffset = 0xD8; // float32
                constexpr std::ptrdiff_t m_flDebuggerBrokenMarkerSize = 0xDC; // float32
                constexpr std::ptrdiff_t m_DebuggerBreakpointImg = 0xE0; // CUtlString
                constexpr std::ptrdiff_t m_DebuggerBreakpointDisabledImg = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_flDebuggerBreakpointOffset = 0xF0; // float32
                constexpr std::ptrdiff_t m_flDebuggerBreakpointSize = 0xF4; // float32
                constexpr std::ptrdiff_t m_flYieldedCursorStackOffset = 0xF8; // float32
                constexpr std::ptrdiff_t m_GraphInstanceImg = 0x100; // CUtlString
                constexpr std::ptrdiff_t m_flRecentExecTimeoutSec = 0x108; // float32
                constexpr std::ptrdiff_t m_flRecentExecStartOffset = 0x10C; // float32
                constexpr std::ptrdiff_t m_flRecentExecEndOffset = 0x110; // float32
                constexpr std::ptrdiff_t m_flRecentExecLineWidth = 0x114; // float32
                constexpr std::ptrdiff_t m_colRecentExecStartColor = 0x118; // Color
                constexpr std::ptrdiff_t m_colRecentExecEndColor = 0x11C; // Color
                constexpr std::ptrdiff_t m_colRecentExecRequirementFailStartColor = 0x120; // Color
                constexpr std::ptrdiff_t m_colRecentExecRequirementFailEndColor = 0x124; // Color
                constexpr std::ptrdiff_t m_flRecentExecConnectionIndicatorSize = 0x128; // float32
                constexpr std::ptrdiff_t m_RecentExecConnectionIndicatorImg = 0x130; // CUtlString
                constexpr std::ptrdiff_t m_bBreakOnExceptions = 0x138; // bool
                constexpr std::ptrdiff_t m_bShowExecutionHistory = 0x139; // bool
                constexpr std::ptrdiff_t m_bBoxSelectRequiresFullyContained = 0x13A; // bool
                constexpr std::ptrdiff_t m_flFlowMinWidth = 0x13C; // float32
                constexpr std::ptrdiff_t m_colSelectedBorder = 0x140; // Color
                constexpr std::ptrdiff_t m_flAppendButtonSize = 0x144; // float32
                constexpr std::ptrdiff_t m_colAppendHover = 0x148; // Color
                constexpr std::ptrdiff_t m_AppendImg = 0x150; // CUtlString
                constexpr std::ptrdiff_t m_flMoveChildArrowOffset = 0x158; // float32
                constexpr std::ptrdiff_t m_flMoveChildArrowSize = 0x15C; // float32
                constexpr std::ptrdiff_t m_MoveChildArrowImg = 0x160; // CUtlString
                constexpr std::ptrdiff_t m_colMoveChildArrow = 0x168; // Color
                constexpr std::ptrdiff_t m_flConnectionTangentStrength = 0x16C; // float32
                constexpr std::ptrdiff_t m_flConnectionCurveSpacing = 0x170; // float32
                constexpr std::ptrdiff_t m_flConnectionDeltaLimitScale = 0x174; // float32
                constexpr std::ptrdiff_t m_flBrokenConnectionOffset = 0x178; // float32
                constexpr std::ptrdiff_t m_flConnectionInflowOffset = 0x17C; // float32
                constexpr std::ptrdiff_t m_flConnectionInparamOffset = 0x180; // float32
                constexpr std::ptrdiff_t m_flConnectionInparamOffsetArray = 0x184; // float32
                constexpr std::ptrdiff_t m_flConnectionCapBrokenSize = 0x188; // float32
                constexpr std::ptrdiff_t m_ConnectionCapBrokenImg = 0x190; // CUtlString
                constexpr std::ptrdiff_t m_flConnectionColorLerpPercentageStart = 0x198; // float32
                constexpr std::ptrdiff_t m_vecBlockCommentDefaultSize = 0x19C; // Vector2D
                constexpr std::ptrdiff_t m_vecBlockCommentMinSize = 0x1A4; // Vector2D
                constexpr std::ptrdiff_t m_colBlockCommentDefault = 0x1AC; // Color
                constexpr std::ptrdiff_t m_colBlockCommentTextLight = 0x1B0; // Color
                constexpr std::ptrdiff_t m_colBlockCommentTextDark = 0x1B4; // Color
                constexpr std::ptrdiff_t m_flBlockCommentRegionAlpha = 0x1B8; // float32
                constexpr std::ptrdiff_t m_flTimelineSeekBarHeight = 0x1BC; // float32
                constexpr std::ptrdiff_t m_flTimelinePauseIconSize = 0x1C0; // float32
                constexpr std::ptrdiff_t m_flTimelineCallModeIconSize = 0x1C4; // float32
                constexpr std::ptrdiff_t m_FontTimelineTime = 0x1C8; // CUtlString
                constexpr std::ptrdiff_t m_colTimelineLabel = 0x1D0; // Color
                constexpr std::ptrdiff_t m_vecTimelineIconFromPort = 0x1D4; // Vector2D
                constexpr std::ptrdiff_t m_vecTimelinePauseIconOffset = 0x1DC; // Vector2D
                constexpr std::ptrdiff_t m_flTimelineCursorHeight = 0x1E4; // float32
                constexpr std::ptrdiff_t m_flTimelineCursorTextHeight = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixTrack {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_nMixDownRule = 0x24; // int32
                constexpr std::ptrdiff_t m_sendOperator = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_Send1 = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_Send2 = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_Send3 = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_Send4 = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHueSaturationColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nHueMaster = 0x28; // int32
                constexpr std::ptrdiff_t m_nHueRed = 0x2C; // int32
                constexpr std::ptrdiff_t m_nHueYellow = 0x30; // int32
                constexpr std::ptrdiff_t m_nHueGreen = 0x34; // int32
                constexpr std::ptrdiff_t m_nHueCyan = 0x38; // int32
                constexpr std::ptrdiff_t m_nHueBlue = 0x3C; // int32
                constexpr std::ptrdiff_t m_nHueMagenta = 0x40; // int32
                constexpr std::ptrdiff_t m_nSaturationMaster = 0x44; // int32
                constexpr std::ptrdiff_t m_nSaturationRed = 0x48; // int32
                constexpr std::ptrdiff_t m_nSaturationYellow = 0x4C; // int32
                constexpr std::ptrdiff_t m_nSaturationGreen = 0x50; // int32
                constexpr std::ptrdiff_t m_nSaturationCyan = 0x54; // int32
                constexpr std::ptrdiff_t m_nSaturationBlue = 0x58; // int32
                constexpr std::ptrdiff_t m_nSaturationMagenta = 0x5C; // int32
                constexpr std::ptrdiff_t m_nBrightnessMaster = 0x60; // int32
                constexpr std::ptrdiff_t m_nBrightnessRed = 0x64; // int32
                constexpr std::ptrdiff_t m_nBrightnessYellow = 0x68; // int32
                constexpr std::ptrdiff_t m_nBrightnessGreen = 0x6C; // int32
                constexpr std::ptrdiff_t m_nBrightnessCyan = 0x70; // int32
                constexpr std::ptrdiff_t m_nBrightnessBlue = 0x74; // int32
                constexpr std::ptrdiff_t m_nBrightnessMagenta = 0x78; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocFollowBoneNode {
                constexpr std::ptrdiff_t m_mode = 0x200; // NmFollowBoneMode_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEffectsPreviewList {
                constexpr std::ptrdiff_t m_previewGraphInput = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flMix = 0x8; // float32
                constexpr std::ptrdiff_t m_previewList = 0x10; // CPreviewList
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataPreviewWidget
            // MVDataFileExtension
            namespace CTextureSheetDoc {
                constexpr std::ptrdiff_t m_ePackingMode = 0x0; // PackingMode_t
                constexpr std::ptrdiff_t m_NumMips = 0x4; // int32
                constexpr std::ptrdiff_t m_bHasDecalParams = 0x8; // bool
                constexpr std::ptrdiff_t m_sLayoutOwnerSheet = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Sequences = 0x18; // CUtlStringMap<CTextureSheetDoc_Sequence*>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixEditorNode {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_friendlyName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_type = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vPos = 0x18; // Vector2D
                constexpr std::ptrdiff_t m_vSize = 0x20; // Vector2D
                constexpr std::ptrdiff_t m_properties = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocLayerBlendNode {
                constexpr std::ptrdiff_t m_onlySampleBaseRootMotion = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocSyncEventIndexConditionNode {
                constexpr std::ptrdiff_t m_triggerMode = 0x100; // CNmSyncEventIndexConditionNode::TriggerMode_t
                constexpr std::ptrdiff_t m_nSyncEventIdx = 0x104; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetVirtualParameterNode {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSkeletonDocument {
                constexpr std::ptrdiff_t m_sourceFilename = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_rootBoneName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_flGlobalScale = 0x80; // float32
                constexpr std::ptrdiff_t m_bIsAttachableProp = 0x84; // bool
                constexpr std::ptrdiff_t m_bIsCS_HACK = 0x85; // bool
                constexpr std::ptrdiff_t m_secondarySkeletons = 0x88; // CUtlVector<CNmSkeletonDocument::SecondarySkeleton_t>
                constexpr std::ptrdiff_t m_gameplayRelevantBones = 0xA0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_highLODBones = 0xB8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_boneMaskSetDefinitions = 0xD0; // CUtlVector<NmBoneMaskSetDefinition_t>
                constexpr std::ptrdiff_t m_previewModelName = 0xE8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixUtility {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixUtilityDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDynamicsCompressor {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_desc = 0x24; // VMixDynamicsCompressorDesc_t
                constexpr std::ptrdiff_t m_nUIPage = 0x48; // int32
                constexpr std::ptrdiff_t m_bIsLimiter = 0x4C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixEnvelope {
                constexpr std::ptrdiff_t m_flAttackTime = 0x20; // float32
                constexpr std::ptrdiff_t m_flHoldTime = 0x24; // float32
                constexpr std::ptrdiff_t m_flReleaseTime = 0x28; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocEntryOverrideNode {
                constexpr std::ptrdiff_t m_stateID = 0x108; // V_uuid_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            namespace CTextureSheetDoc_Frame {
                constexpr std::ptrdiff_t m_sImageName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_fDisplayTime = 0x8; // float32
                constexpr std::ptrdiff_t m_bCropEnabled = 0xC; // bool
                constexpr std::ptrdiff_t m_srcCropXStart = 0x10; // int32
                constexpr std::ptrdiff_t m_srcCropYStart = 0x14; // int32
                constexpr std::ptrdiff_t m_srcCropXEnd = 0x18; // int32
                constexpr std::ptrdiff_t m_srcCropYEnd = 0x1C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBlendSpace1D {
                constexpr std::ptrdiff_t m_points = 0x0; // CUtlVector<CNmBlendSpace1D::Point_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIsInactiveBranchConditionNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetControlParameterNode {
                constexpr std::ptrdiff_t m_bIsSet = 0x118; // bool
                constexpr std::ptrdiff_t m_bIsBoneID = 0x119; // bool
                constexpr std::ptrdiff_t m_targetOrientation = 0x11C; // QAngle
                constexpr std::ptrdiff_t m_targetPosition = 0x128; // Vector
                constexpr std::ptrdiff_t m_previewStartBoneID = 0x138; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocLayerBaseNode {
                constexpr std::ptrdiff_t m_isSynchronized = 0x100; // bool
                constexpr std::ptrdiff_t m_ignoreEvents = 0x101; // bool
                constexpr std::ptrdiff_t m_blendMode = 0x102; // NmPoseBlendMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskNode {
                constexpr std::ptrdiff_t m_maskID = 0x200; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocTwoBoneIKNode {
                constexpr std::ptrdiff_t m_bIsTargetInWorldSpace = 0x200; // bool
                constexpr std::ptrdiff_t m_blendMode = 0x201; // NmIKBlendMode_t
                constexpr std::ptrdiff_t m_flChainRotationWeight = 0x204; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVignetteLayer {
                constexpr std::ptrdiff_t m_params = 0x28; // PostProcessingVignetteParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateMachineGraph {
                constexpr std::ptrdiff_t m_entryStateID = 0x50; // V_uuid_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDSwitchNode {
                constexpr std::ptrdiff_t m_falseValue = 0x100; // CGlobalSymbol
                constexpr std::ptrdiff_t m_trueValue = 0x108; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixPitchShift {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_flPitchScale = 0x24; // float32
                constexpr std::ptrdiff_t m_flGrainMs = 0x28; // float32
                constexpr std::ptrdiff_t m_nProcType = 0x2C; // int32
                constexpr std::ptrdiff_t m_nQuality = 0x30; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatSelectorNode {
                constexpr std::ptrdiff_t m_options = 0x100; // CUtlVector<CNmGraphDocFloatSelectorNode::Option_t>
                constexpr std::ptrdiff_t m_flDefaultValue = 0x118; // float32
                constexpr std::ptrdiff_t m_easing = 0x11C; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_easeTime = 0x120; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixBlendAudio {
                constexpr std::ptrdiff_t m_flLockAmount = 0x20; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDelay {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_flDelay = 0x24; // float32
                constexpr std::ptrdiff_t m_fldbDirectGain = 0x28; // float32
                constexpr std::ptrdiff_t m_fldbDelayGain = 0x2C; // float32
                constexpr std::ptrdiff_t m_fldbFeedbackGain = 0x30; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x34; // float32
                constexpr std::ptrdiff_t m_bEnableFilter = 0x38; // bool
                constexpr std::ptrdiff_t m_filterType = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_flFrequency = 0x48; // float32
                constexpr std::ptrdiff_t m_flQ = 0x4C; // float32
                constexpr std::ptrdiff_t m_fldbGain = 0x50; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateMachineLayerNode {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSplitter {
                constexpr std::ptrdiff_t m_flVolume1 = 0x20; // float32
                constexpr std::ptrdiff_t m_flVolume2 = 0x24; // float32
                constexpr std::ptrdiff_t m_flVolume3 = 0x28; // float32
                constexpr std::ptrdiff_t m_flVolume4 = 0x2C; // float32
                constexpr std::ptrdiff_t m_flVolume5 = 0x30; // float32
                constexpr std::ptrdiff_t m_flVolume6 = 0x34; // float32
                constexpr std::ptrdiff_t m_flVolume7 = 0x38; // float32
                constexpr std::ptrdiff_t m_flVolume8 = 0x3C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCurrentSyncEventNode {
                constexpr std::ptrdiff_t m_infoType = 0x100; // CNmCurrentSyncEventNode::InfoType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDToFloatNode__Mapping_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_value = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoolControlParameterNode {
                constexpr std::ptrdiff_t m_previewStartValue = 0x118; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterizedSelectorNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x200; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x218; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmAnimDocument {
                constexpr std::ptrdiff_t m_nVersion = 0x68; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocDataDictionary__ParameterSet_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parameters = 0x8; // CUtlVector<CNmGraphDocDataDictionary::Parameter_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocControlParameterNode {
                constexpr std::ptrdiff_t m_dictionaryParameterBinding = 0x108; // V_uuid_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixEditorEdge {
                constexpr std::ptrdiff_t m_plug0 = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_plug1 = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorParameterReferenceNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CColorCorrectionLayer {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nOpacityPercent = 0x10; // int32
                constexpr std::ptrdiff_t m_bVisible = 0x14; // bool
                constexpr std::ptrdiff_t m_pLayerMask = 0x18; // CLayerMask*
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskSwitchNode {
                constexpr std::ptrdiff_t m_bSwitchDynamically = 0x100; // bool
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x104; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskVirtualParameterNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDBasedSelectorNode {
                constexpr std::ptrdiff_t m_optionLabels = 0x100; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bIgnoreInvalidOptions = 0x118; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateNode {
                constexpr std::ptrdiff_t m_type = 0x50; // CNmGraphDocStateNode::StateType_t
                constexpr std::ptrdiff_t m_cloneSourceStateID = 0x54; // V_uuid_t
                constexpr std::ptrdiff_t m_stateEvents = 0x68; // CUtlVector<CNmGraphDocStateNode::StateEvent_t>
                constexpr std::ptrdiff_t m_timedStateEvents = 0x80; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                constexpr std::ptrdiff_t m_events = 0x98; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_entryEvents = 0xB0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_executeEvents = 0xC8; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_exitEvents = 0xE0; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_timeRemainingEvents = 0xF8; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                constexpr std::ptrdiff_t m_timeElapsedEvents = 0x110; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                constexpr std::ptrdiff_t m_bUseActualElapsedTimeInStateForTimedEvents = 0x128; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlInputArray {
                constexpr std::ptrdiff_t m_vflData = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFlowGraph__Connection_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // V_uuid_t
                constexpr std::ptrdiff_t m_fromNodeID = 0x10; // V_uuid_t
                constexpr std::ptrdiff_t m_outputPinID = 0x20; // V_uuid_t
                constexpr std::ptrdiff_t m_toNodeID = 0x30; // V_uuid_t
                constexpr std::ptrdiff_t m_inputPinID = 0x40; // V_uuid_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            namespace CNmPreviewArchetype {
                constexpr std::ptrdiff_t m_primarySkeleton = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_previewModel = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_bodyPartChoiceName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_secondarySkeletonSettings = 0x18; // CUtlVector<CNmPreviewArchetype::SecondarySkeleton_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstBoneTargetNode {
                constexpr std::ptrdiff_t m_boneName = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixModDelay {
                constexpr std::ptrdiff_t m_bPhaseInvert = 0x20; // bool
                constexpr std::ptrdiff_t m_flGlideTime = 0x24; // float32
                constexpr std::ptrdiff_t m_flDelay = 0x28; // float32
                constexpr std::ptrdiff_t m_flFeedback = 0x2C; // float32
                constexpr std::ptrdiff_t m_flGain = 0x30; // float32
                constexpr std::ptrdiff_t m_flModRate = 0x34; // float32
                constexpr std::ptrdiff_t m_flModDepth = 0x38; // float32
                constexpr std::ptrdiff_t m_filterType = 0x3C; // VMixFilterType_t
                constexpr std::ptrdiff_t m_flFrequency = 0x40; // float32
                constexpr std::ptrdiff_t m_flQ = 0x44; // float32
                constexpr std::ptrdiff_t m_flFilterGain = 0x48; // float32
                constexpr std::ptrdiff_t m_bAntialiasing = 0x4C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFootEventConditionNode {
                constexpr std::ptrdiff_t m_phaseCondition = 0x100; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x101; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x102; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixGroupBox {
                constexpr std::ptrdiff_t m_color = 0x20; // Color
                constexpr std::ptrdiff_t m_bMovesNodes = 0x24; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBlend2DNode {
                constexpr std::ptrdiff_t m_blendSpace = 0x100; // CNmBlendSpace2D
                constexpr std::ptrdiff_t m_bAllowLooping = 0x160; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstIDNode {
                constexpr std::ptrdiff_t m_value = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPostProcessData {
                constexpr std::ptrdiff_t m_layers = 0x8; // CUtlVector<CColorCorrectionLayer*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetParameterReferenceNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatParameterReferenceNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSubgraphSwitch {
                constexpr std::ptrdiff_t bUseDetailedPlugNames = 0x20; // bool
                constexpr std::ptrdiff_t defaultSubgraph = 0x28; // CSelectableSubgraph
                constexpr std::ptrdiff_t interpolationMode = 0x40; // VMixSubgraphSwitchInterpolationType_t
                constexpr std::ptrdiff_t bOnlyTailsOnFadeOut = 0x44; // bool
                constexpr std::ptrdiff_t flTransitionTime = 0x48; // float32
                constexpr std::ptrdiff_t nChannels = 0x4C; // int32
                constexpr std::ptrdiff_t subgraphs = 0x50; // CUtlVector<CSelectableSubgraph>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatEaseNode {
                constexpr std::ptrdiff_t m_easing = 0x100; // NmEasingOperation_t
                constexpr std::ptrdiff_t m_flEaseTime = 0x104; // float32
                constexpr std::ptrdiff_t m_bUseStartValue = 0x108; // bool
                constexpr std::ptrdiff_t m_flStartValue = 0x10C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatComparisonNode {
                constexpr std::ptrdiff_t m_comparison = 0x100; // CNmFloatComparisonNode::Comparison_t
                constexpr std::ptrdiff_t m_flComparisonValue = 0x104; // float32
                constexpr std::ptrdiff_t m_flEpsilon = 0x108; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTextureSheetDoc_Sequence {
                constexpr std::ptrdiff_t m_ChannelMode = 0x0; // SequenceChannelMode_t
                constexpr std::ptrdiff_t m_LoopMode = 0x4; // SequenceLoopMode_t
                constexpr std::ptrdiff_t m_AlphaCropMode = 0x8; // SequenceAlphaCropMode_t
                constexpr std::ptrdiff_t m_DecalParams = 0xC; // CTextureSheetDoc_SequenceDecalParams
                constexpr std::ptrdiff_t m_Frames = 0x30; // CUtlVector<CTextureSheetDoc_Frame>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocDataDictionary__IDSet_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // V_uuid_t
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_graphIDs = 0x18; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixConvolution {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixConvolutionDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_FloatCurve {
                constexpr std::ptrdiff_t m_ID = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_curve = 0x18; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCachedFloatNode {
                constexpr std::ptrdiff_t m_mode = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetResultNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_FrameSnap {
                constexpr std::ptrdiff_t m_frameSnapMode = 0x10; // NmFrameSnapEventMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFootstepEventPercentageThroughNode {
                constexpr std::ptrdiff_t m_phaseCondition = 0x100; // NmFootPhaseCondition_t
                constexpr std::ptrdiff_t m_priorityRule = 0x101; // NmEventPriorityRule_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x102; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x103; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatSelectorNode__Option_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flValue = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixFreeverb {
                constexpr std::ptrdiff_t m_flRoomSize = 0x20; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x24; // float32
                constexpr std::ptrdiff_t m_flWidth = 0x28; // float32
                constexpr std::ptrdiff_t m_flLateReflections = 0x2C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIsExternalPoseSetNode {
                constexpr std::ptrdiff_t m_slotID = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixToolGraphEntry {
                constexpr std::ptrdiff_t m_graph = 0x0; // CVMixToolGraph
                constexpr std::ptrdiff_t m_editorState = 0x48; // CGraphEditorState
                constexpr std::ptrdiff_t m_graphPreview = 0x70; // CGraphPreviewList
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_Legacy {
                constexpr std::ptrdiff_t m_eventClass = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_KV = 0x18; // KeyValues3
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocClipNode {
                constexpr std::ptrdiff_t m_bSampleRootMotion = 0x200; // bool
                constexpr std::ptrdiff_t m_bAllowLooping = 0x201; // bool
                constexpr std::ptrdiff_t m_graphEvents = 0x208; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocSelectorNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterBaseNode {
                constexpr std::ptrdiff_t m_groupName = 0x100; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFilterStage {
                constexpr std::ptrdiff_t m_filterType = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flFrequency = 0x8; // float32
                constexpr std::ptrdiff_t m_flQ = 0xC; // float32
                constexpr std::ptrdiff_t m_fldbGain = 0x10; // float32
                constexpr std::ptrdiff_t m_nFilterSlope = 0x14; // VMixFilterSlope_t
                constexpr std::ptrdiff_t m_bEnable = 0x15; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorNegateNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_RootMotion {
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x10; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDEventConditionNode {
                constexpr std::ptrdiff_t m_operator = 0x100; // NmEventConditionOperator_t
                constexpr std::ptrdiff_t m_searchRule = 0x101; // CNmGraphDocIDEventConditionNode::SearchRule_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x102; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x103; // bool
                constexpr std::ptrdiff_t m_eventIDs = 0x108; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMixPropertyBase {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Comment = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bActive = 0x18; // bool
                constexpr std::ptrdiff_t m_bSolo = 0x19; // bool
                constexpr std::ptrdiff_t m_bEditProperties = 0x1A; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDToFloatNode {
                constexpr std::ptrdiff_t m_defaultValue = 0x100; // float32
                constexpr std::ptrdiff_t m_mappings = 0x108; // CUtlVector<CNmGraphDocIDToFloatNode::Mapping_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatCurveNode {
                constexpr std::ptrdiff_t m_curve = 0x100; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmGraphDocPin_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // V_uuid_t
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_type = 0x18; // NmGraphValueType_t
                constexpr std::ptrdiff_t m_bIsDynamicPin = 0x19; // bool
                constexpr std::ptrdiff_t m_bAllowMultipleOutConnections = 0x1A; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixBlendVsndsToImpulseResponse {
                constexpr std::ptrdiff_t m_flWeight0 = 0x20; // float32
                constexpr std::ptrdiff_t m_flWeight1 = 0x24; // float32
                constexpr std::ptrdiff_t m_flWeight2 = 0x28; // float32
                constexpr std::ptrdiff_t m_flWeight3 = 0x2C; // float32
                constexpr std::ptrdiff_t m_flWeight4 = 0x30; // float32
                constexpr std::ptrdiff_t m_flWeight5 = 0x34; // float32
                constexpr std::ptrdiff_t m_flWeight6 = 0x38; // float32
                constexpr std::ptrdiff_t m_flWeight7 = 0x3C; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS0 = 0x40; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS1 = 0x44; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS2 = 0x48; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS3 = 0x4C; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS4 = 0x50; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS5 = 0x54; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS6 = 0x58; // float32
                constexpr std::ptrdiff_t m_flPreDelayMS7 = 0x5C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixRemapVsndToImpulseResponse {
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskBlendNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDEventNode {
                constexpr std::ptrdiff_t m_defaultValue = 0x100; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x108; // bool
                constexpr std::ptrdiff_t m_priorityRule = 0x109; // NmEventPriorityRule_t
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x10A; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocAndNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocGlobalTransitionConduitNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocFollowBoneNode__CData {
                constexpr std::ptrdiff_t m_boneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_followTargetBoneName = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDParameterReferenceNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocAnimationPoseNode__CData {
                constexpr std::ptrdiff_t m_clip = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_variationTimeValue = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVectorInfoNode {
                constexpr std::ptrdiff_t m_desiredInfo = 0x100; // CNmVectorInfoNode::Info_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocument__DebugParameterSet_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_boolValues = 0x8; // CUtlLeanVector<std::pair<CGlobalSymbol,bool>>
                constexpr std::ptrdiff_t m_floatValues = 0x18; // CUtlLeanVector<std::pair<CGlobalSymbol,float32>>
                constexpr std::ptrdiff_t m_IDValues = 0x28; // CUtlLeanVector<std::pair<CGlobalSymbol,CGlobalSymbol>>
                constexpr std::ptrdiff_t m_vectorValues = 0x38; // CUtlLeanVector<std::pair<CGlobalSymbol,Vector>>
                constexpr std::ptrdiff_t m_targetValues = 0x48; // CUtlLeanVector<std::pair<CGlobalSymbol,CNmTarget>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatAngleMathNode {
                constexpr std::ptrdiff_t m_operation = 0x100; // CNmFloatAngleMathNode::Operation_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateNode__StateEvent_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_bIsEntry = 0x8; // bool
                constexpr std::ptrdiff_t m_bIsFullyInState = 0x9; // bool
                constexpr std::ptrdiff_t m_bIsExit = 0xA; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixToolGraph {
                constexpr std::ptrdiff_t m_graphDescData = 0x0; // CVMixGraphDescData
                constexpr std::ptrdiff_t m_editorNodes = 0x10; // CUtlVector<CVMixEditorNode>
                constexpr std::ptrdiff_t m_editorEdges = 0x28; // CUtlVector<CVMixEditorEdge>
                constexpr std::ptrdiff_t m_nPreviewNode = 0x40; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCurrentSyncEventIDNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixImpulseResponseInput {
                constexpr std::ptrdiff_t m_defaultValue = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetWarpNode {
                constexpr std::ptrdiff_t m_targetUpdateRule = 0x200; // CNmTargetWarpNode::TargetUpdateRule_t
                constexpr std::ptrdiff_t m_bAllowTargetUpdate = 0x201; // bool
                constexpr std::ptrdiff_t m_bAlignWithTargetAtLastWarpEvent = 0x202; // bool
                constexpr std::ptrdiff_t m_samplingMode = 0x203; // CNmRootMotionData::SamplingMode_t
                constexpr std::ptrdiff_t m_flSamplingPositionErrorThreshold = 0x204; // float32
                constexpr std::ptrdiff_t m_flMaxTangentLength = 0x208; // float32
                constexpr std::ptrdiff_t m_flLerpFallbackDistanceThreshold = 0x20C; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateDistanceThresholdDegrees = 0x210; // float32
                constexpr std::ptrdiff_t m_flTargetUpdateAngleThresholdDegrees = 0x214; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBlend1DNode {
                constexpr std::ptrdiff_t m_blendSpace = 0x100; // CNmBlendSpace1D
                constexpr std::ptrdiff_t m_bAllowLooping = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocVariationConstFloatNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_EntityAttribute {
                constexpr std::ptrdiff_t m_target = 0x10; // CNmEventTargetEntity_t
                constexpr std::ptrdiff_t m_attributeName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_nValueType = 0x20; // CNmClipDocEvent_EntityAttribute_Type_t
                constexpr std::ptrdiff_t m_nIntValue = 0x24; // int32
                constexpr std::ptrdiff_t m_FloatValue = 0x28; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocVelocityBlendNode {
                constexpr std::ptrdiff_t m_bAllowLooping = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixStereoDelay {
                constexpr std::ptrdiff_t m_flDelayLeft = 0x20; // float32
                constexpr std::ptrdiff_t m_flDelayRight = 0x24; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDControlParameterNode {
                constexpr std::ptrdiff_t m_previewStartValue = 0x118; // CGlobalSymbol
                constexpr std::ptrdiff_t m_expectedValues = 0x120; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixEffectChain {
                constexpr std::ptrdiff_t m_nChannels = 0x20; // int32
                constexpr std::ptrdiff_t m_effectName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_flXFade = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocParameterizedSelectorNode__CData {
                constexpr std::ptrdiff_t m_optionWeights = 0x8; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEvent_MaterialAttribute {
                constexpr std::ptrdiff_t m_target = 0x10; // CNmEventTargetEntity_t
                constexpr std::ptrdiff_t m_attributeName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_x = 0x20; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_y = 0x60; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_z = 0xA0; // CPiecewiseCurve
                constexpr std::ptrdiff_t m_w = 0xE0; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocExternalPoseNode {
                constexpr std::ptrdiff_t m_bShouldSampleRootMotion = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMixToolEditorData {
                constexpr std::ptrdiff_t m_nSelectedGraph = 0x0; // int32
                constexpr std::ptrdiff_t m_nSelectedEffectPreset = 0x4; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocOrientationWarpNode {
                constexpr std::ptrdiff_t m_offsetType = 0x100; // CNmGraphDocOrientationWarpNode::OffsetType_t
                constexpr std::ptrdiff_t m_samplingMode = 0x104; // CNmRootMotionData::SamplingMode_t
                constexpr std::ptrdiff_t m_bWarpTranslation = 0x105; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CColorBalanceColorCorrectionLayer {
                constexpr std::ptrdiff_t m_nRedCyanBalS = 0x28; // int32
                constexpr std::ptrdiff_t m_nRedCyanBalM = 0x2C; // int32
                constexpr std::ptrdiff_t m_nRedCyanBalH = 0x30; // int32
                constexpr std::ptrdiff_t m_nGreenMagentaBalS = 0x34; // int32
                constexpr std::ptrdiff_t m_nGreenMagentaBalM = 0x38; // int32
                constexpr std::ptrdiff_t m_nGreenMagentaBalH = 0x3C; // int32
                constexpr std::ptrdiff_t m_nBlueYellowBalS = 0x40; // int32
                constexpr std::ptrdiff_t m_nBlueYellowBalM = 0x44; // int32
                constexpr std::ptrdiff_t m_nBlueYellowBalH = 0x48; // int32
                constexpr std::ptrdiff_t m_bPreserveLuminosity = 0x4C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixAutoFilter {
                constexpr std::ptrdiff_t m_desc = 0x20; // VMixAutoFilterDesc_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocReferencedGraphNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoneMaskSelectorNode {
                constexpr std::ptrdiff_t m_switchDynamically = 0x100; // bool
                constexpr std::ptrdiff_t m_options = 0x108; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x120; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIDEventPercentageThroughNode {
                constexpr std::ptrdiff_t m_priorityRule = 0x100; // NmEventPriorityRule_t
                constexpr std::ptrdiff_t m_bLimitSearchToSourceState = 0x101; // bool
                constexpr std::ptrdiff_t m_bIgnoreInactiveBranchEvents = 0x102; // bool
                constexpr std::ptrdiff_t m_eventID = 0x108; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlCurve {
                constexpr std::ptrdiff_t m_flInputMin = 0x20; // float32
                constexpr std::ptrdiff_t m_flInputMax = 0x24; // float32
                constexpr std::ptrdiff_t m_flOutputMin = 0x28; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x2C; // float32
                constexpr std::ptrdiff_t m_curve = 0x30; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocVariationConstFloatNode__CData {
                constexpr std::ptrdiff_t m_flValue = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSteamAudioHybridReverb {
                constexpr std::ptrdiff_t m_flReverbTimeLow = 0x20; // float32
                constexpr std::ptrdiff_t m_flReverbTimeMid = 0x24; // float32
                constexpr std::ptrdiff_t m_flReverbTimeHigh = 0x28; // float32
                constexpr std::ptrdiff_t m_vecReverbTime = 0x30; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocExternalGraphNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixPlateverb {
                constexpr std::ptrdiff_t m_flPrefilter = 0x20; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion1 = 0x24; // float32
                constexpr std::ptrdiff_t m_flInputDiffusion2 = 0x28; // float32
                constexpr std::ptrdiff_t m_flDecay = 0x2C; // float32
                constexpr std::ptrdiff_t m_flDamp = 0x30; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion1 = 0x34; // float32
                constexpr std::ptrdiff_t m_flFeedbackDiffusion2 = 0x38; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocEntryStateOverrideConduitNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmVariation_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_parentID = 0x8; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x10; // CResourceName
                constexpr std::ptrdiff_t m_pUserData = 0xF0; // CNmGraphVariationUserData*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocEntryStateOverrideConditionsNode {
                constexpr std::ptrdiff_t m_pinToStateMapping = 0x108; // CUtlVector<V_uuid_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateLayerDataNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocReferencedGraphNode__CData {
                constexpr std::ptrdiff_t m_variation = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClipDocEventTrack {
                constexpr std::ptrdiff_t m_events = 0x0; // CUtlVector<CNmClipDocEvent*>
                constexpr std::ptrdiff_t m_eventClassName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_type = 0x20; // CNmClipDocEventTrack::Type_t
                constexpr std::ptrdiff_t m_bIsSyncTrack = 0x24; // bool
                constexpr std::ptrdiff_t m_bIsDisabled = 0x25; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocIsExternalGraphSlotFilledNode {
                constexpr std::ptrdiff_t m_slotID = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetPointNode {
                constexpr std::ptrdiff_t m_bIsWorldSpaceTarget = 0x100; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocFootIKNode__CData {
                constexpr std::ptrdiff_t m_leftEffectorBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_rightEffectorBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_flBlendTimeSeconds = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocGlobalTransitionNode {
                constexpr std::ptrdiff_t m_stateID = 0x120; // V_uuid_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocCachedIDNode {
                constexpr std::ptrdiff_t m_mode = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixSum {
                constexpr std::ptrdiff_t m_flVolume1 = 0x20; // float32
                constexpr std::ptrdiff_t m_flVolume2 = 0x24; // float32
                constexpr std::ptrdiff_t m_flVolume3 = 0x28; // float32
                constexpr std::ptrdiff_t m_flVolume4 = 0x2C; // float32
                constexpr std::ptrdiff_t m_flVolume5 = 0x30; // float32
                constexpr std::ptrdiff_t m_flVolume6 = 0x34; // float32
                constexpr std::ptrdiff_t m_flVolume7 = 0x38; // float32
                constexpr std::ptrdiff_t m_flVolume8 = 0x3C; // float32
                constexpr std::ptrdiff_t m_channelName = 0x40; // CUtlString[8]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFlowGraph {
                constexpr std::ptrdiff_t m_connections = 0x50; // CUtlVector<CNmGraphDocFlowGraph::Connection_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFogScatteringLayer {
                constexpr std::ptrdiff_t m_params = 0x28; // PostProcessingFogScatteringParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CnmGraphDocConstFloatNode {
                constexpr std::ptrdiff_t m_flValue = 0x100; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocTargetOffsetNode {
                constexpr std::ptrdiff_t m_bIsBoneSpaceOffset = 0x100; // bool
                constexpr std::ptrdiff_t m_rotationOffset = 0x104; // QAngle
                constexpr std::ptrdiff_t m_translationOffset = 0x110; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocBoolResultNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixControlStackInput {
                constexpr std::ptrdiff_t m_flDefaultValue = 0x20; // float32
                constexpr std::ptrdiff_t m_flMinRange = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRange = 0x28; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateMachineNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBloomLayer {
                constexpr std::ptrdiff_t m_params = 0x28; // PostProcessingBloomParameters_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocFloatRangeComparisonNode {
                constexpr std::ptrdiff_t m_range = 0x100; // Range_t
                constexpr std::ptrdiff_t m_isInclusiveCheck = 0x108; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            namespace CMixDelayImpulseResponse {
                constexpr std::ptrdiff_t m_flPreDelayMS = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDocStateMachineGraphNode {
            }
        }
    }
}
