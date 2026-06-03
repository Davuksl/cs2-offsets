// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

namespace CS2Dumper.Schemas {
    // Module: resourcecompiler.dll
    // Class count: 390
    // Enum count: 26
    public static class ResourcecompilerDll {
        // Alignment: 4
        // Member count: 2
        public enum PulseBestOutflowRules_t : uint {
            SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
            SORT_BY_OUTFLOW_INDEX = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum PulseCursorCancelPriority_t : uint {
            None = 0x0,
            CancelOnSucceeded = 0x1,
            SoftCancel = 0x2,
            HardCancel = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum PulseMethodCallMode_t : uint {
            SYNC_WAIT_FOR_COMPLETION = 0x0,
            ASYNC_FIRE_AND_FORGET = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum CNmGraphDocStateNode__TimedStateEventType_t : uint {
            TimeElapsed = 0x0,
            TimeRemaining = 0x1
        }
        // Alignment: 4
        // Member count: 14
        public enum LayerType_t : uint {
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
        }
        // Alignment: 4
        // Member count: 2
        public enum SteamAudioHRTFInterpolationType_t : uint {
            SA_HRTFINTEROP_NEAREST = 0x0,
            SA_HRTFINTEROP_BILINEAR = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum CNmClipDocEvent_EntityAttribute_Type_t : uint {
            EVENT_ENTITY_ATTR_TYPE_INT = 0x0,
            EVENT_ENTITY_ATTR_TYPE_FLOAT = 0x1
        }
        // Alignment: 1
        // Member count: 3
        public enum CNmGraphDocIDEventConditionNode__SearchRule_t : byte {
            SearchAll = 0x0,
            OnlySearchGraphEvents = 0x1,
            OnlySearchAnimEvents = 0x2
        }
        // Alignment: 1
        // Member count: 2
        public enum NmEventConditionOperator_t : byte {
            Or = 0x0,
            And = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum LayerMaskType_t : uint {
            LAYER_MASK_LUMINOSITY = 0x0,
            LAYER_MASK_COLOR_RANGE = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum PackingMode_t : uint {
            PCKM_INVALID = 0x0,
            PCKM_FLAT = 0x1,
            PCKM_RGB_A = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum SequenceLoopMode_t : uint {
            CLAMP = 0x0,
            LOOP = 0x1,
            CLAMP_EXTEND = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum SequenceAlphaCropMode_t : uint {
            NONE = 0x0,
            UV = 0x1,
            U = 0x2,
            V = 0x3
        }
        // Alignment: 4
        // Member count: 8
        public enum NmGraphDocGraphType_t : uint {
            Invalid = 0x0,
            BlendTree = 0x1,
            ValueTree = 0x2,
            StateMachine = 0x3,
            EntryOverrideTree = 0x4,
            TransitionConduit = 0x5,
            GlobalTransitionConduit = 0x6,
            VirtualParameterValueTree = 0x7
        }
        // Alignment: 1
        // Member count: 2
        public enum NmEventPriorityRule_t : byte {
            HighestWeight = 0x0,
            HighestPercentageThrough = 0x1
        }
        // Alignment: 1
        // Member count: 5
        public enum CNmClipDocument__AdditiveType_t : byte {
            None = 0x0,
            RelativeToSkeleton = 0x1,
            RelativeToFrame = 0x2,
            RelativeToAnimation = 0x3,
            RelativeToAnimationFrame = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum PulsePortUserVisibility_t : uint {
            UNSPECIFIED = 0x0,
            SHOW = 0x1,
            HIDE = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum SequenceChannelMode_t : uint {
            RGBA = 0x0,
            RGB = 0x1,
            ALPHA = 0x2
        }
        // Alignment: 1
        // Member count: 3
        public enum CNmClipDocument__AdditiveBaseFrame_t : byte {
            FirstFrame = 0x0,
            LastFrame = 0x1,
            UserSpecifiedFrame = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum SeqMode_t : uint {
            SQM_RGBA = 0x0,
            SQM_RGB = 0x1,
            SQM_ALPHA = 0x2,
            SQM_ALPHA_INVALID = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum AlphaCropAxis_t : uint {
            ALPHACROP_UV = 0x0,
            ALPHACROP_U = 0x1,
            ALPHACROP_V = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum CNmGraphDocOrientationWarpNode__OffsetType_t : uint {
            RelativeToCharacter = 0x0,
            RelativeToOriginalRootMotion = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum CNmGraphDocStateNode__StateType_t : uint {
            OffState = 0x0,
            BlendTreeState = 0x1,
            StateMachineState = 0x2,
            Clone = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum SteamAudioOcclusionModeType_t : uint {
            SA_OCCLUSIONMODE_NONE = 0x0,
            SA_OCCLUSIONMODE_NOTRANSMISSION = 0x1,
            SA_OCCLUSIONMODE_FREQINDEPENDENT = 0x2,
            SA_OCCLUSIONMODE_FREQDEPENDENT = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum CNmClipDocEventTrack__Type_t : uint {
            Immediate = 0x0,
            Duration = 0x1,
            Num = 0x2
        }
        // Alignment: 4
        // Member count: 11
        public enum CNmGraphDocTransitionNode__TimeMatchMode_t : uint {
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
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_WaitForCursorsWithTag {
            public const nint m_bTagSelfWhenComplete = 0x98; // bool
            public const nint m_nDesiredKillPriority = 0x9C; // PulseCursorCancelPriority_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Base {
            public const nint m_nEditorNodeID = 0x8; // PulseDocNodeID_t
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
        public static class CSmartPropPulse_FitOnLine {
            public const nint m_OutflowList = 0x48; // PulseSelectorOutflowList_t
        }
        // Parent: None
        // Field count: 0
        public static class CPulse_ResumePoint {
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
        public static class CPulseCell_PickBestOutflowSelector {
            public const nint m_nCheckType = 0x48; // PulseBestOutflowRules_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }
        // Parent: None
        // Field count: 0
        public static class CParticleBindingRealPulse {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_WaitForObservable {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_OnTrue = 0xC0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 2
        public static class CSmartPropPulse_SelectionEndCap__Criteria_t {
            public const nint m_bStart = 0x0; // bool
            public const nint m_bEnd = 0x1; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropOperationAPI {
        }
        // Parent: None
        // Field count: 4
        public static class CPulse_OutflowConnection {
            public const nint m_SourceOutflowName = 0x0; // PulseSymbol_t
            public const nint m_nDestChunk = 0x10; // PulseRuntimeChunkIndex_t
            public const nint m_nInstruction = 0x14; // int32
            public const nint m_OutflowRegisterMap = 0x18; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 4
        public static class CSmartPropPulse_SelectionLinearLength__Criteria_t {
            public const nint m_flLength = 0x0; // float32
            public const nint m_bAllowScale = 0x4; // bool
            public const nint m_flMinLength = 0x8; // float32
            public const nint m_flMaxLength = 0xC; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropPulse_SelectionChoiceWeight {
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseGraphDef {
            public const nint m_DomainIdentifier = 0x8; // PulseSymbol_t
            public const nint m_DomainSubType = 0x18; // CPulseValueFullType
            public const nint m_ParentMapName = 0x30; // PulseSymbol_t
            public const nint m_ParentXmlName = 0x40; // PulseSymbol_t
            public const nint m_Chunks = 0x50; // CUtlVector<CPulse_Chunk*>
            public const nint m_Cells = 0x68; // CUtlVector<CPulseCell_Base*>
            public const nint m_Vars = 0x80; // CUtlVector<CPulse_Variable>
            public const nint m_PublicOutputs = 0x98; // CUtlVector<CPulse_PublicOutput>
            public const nint m_InvokeBindings = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
            public const nint m_CallInfos = 0xC8; // CUtlVector<CPulse_CallInfo*>
            public const nint m_Constants = 0xE0; // CUtlVector<CPulse_Constant>
            public const nint m_DomainValues = 0xF8; // CUtlVector<CPulse_DomainValue>
            public const nint m_BlackboardReferences = 0x110; // CUtlVector<CPulse_BlackboardReference>
            public const nint m_OutputConnections = 0x128; // CUtlVector<CPulse_OutputConnection*>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropPulse_SelectionEndCap {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_FireCursors {
            public const nint m_Outflows = 0x48; // CUtlVector<CPulse_OutflowConnection>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline__TimelineEvent_t {
            public const nint m_flTimeFromPrevious = 0x0; // float32
            public const nint m_EventOutflow = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IntervalTimer__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
            public const nint m_flWaitInterval = 0x8; // float32
            public const nint m_flWaitIntervalHigh = 0xC; // float32
            public const nint m_bCompleteOnNextWake = 0x10; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseRequirement {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorHeaderIcon
        public static class CPulseCell_BaseState {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class OutflowWithRequirements_t {
            public const nint m_Connection = 0x0; // CPulse_OutflowConnection
            public const nint m_DestinationFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_RequirementNodeIDs = 0x50; // CUtlVector<PulseDocNodeID_t>
            public const nint m_nCursorStateBlockIndex = 0x68; // CUtlVector<int32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_IsRequirementValid {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Gradient {
            public const nint m_Gradient = 0x48; // CColorGradient
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseCursorFuncs {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t__DynamicOutflow_t {
            public const nint m_OutflowID = 0x0; // CGlobalSymbol
            public const nint m_Connection = 0x8; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 0
        public static class CBasePulseGraphInstance {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_GraphHook {
            public const nint m_HookName = 0x80; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Resume {
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropOperation_MaterialReplacementAPI {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_BaseEntrypoint {
            public const nint m_EntryChunk = 0x48; // PulseRuntimeChunkIndex_t
            public const nint m_RegisterMap = 0x50; // PulseRegisterMap_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_WaitForCursorsWithTagBase {
            public const nint m_nCursorsAllowedToWait = 0x48; // int32
            public const nint m_WaitComplete = 0x50; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_InvokeBinding {
            public const nint m_RegisterMap = 0x0; // PulseRegisterMap_t
            public const nint m_FuncName = 0x30; // PulseSymbol_t
            public const nint m_nCellIndex = 0x40; // PulseRuntimeCellIndex_t
            public const nint m_nSrcChunk = 0x44; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x48; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPulseEditorHeaderIcon
        // MPulseEditorCanvasItemSpecKV3
        public static class CSmartPropPulse_PlaceOnPath {
            public const nint m_OutflowList = 0x48; // PulseSelectorOutflowList_t
            public const nint m_PathName = 0x60; // CUtlString
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropAPI {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_IntervalTimer {
            public const nint m_Completed = 0x48; // CPulse_ResumePoint
            public const nint m_OnInterval = 0x90; // SignatureOutflow_Continue
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseTestScriptLib {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        public static class CEntityInstance {
            public const nint m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
            public const nint m_pEntity = 0x10; // CEntityIdentity*
            public const nint m_CScriptComponent = 0x28; // CScriptComponent*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPulseEditorHeaderIcon
        // MPulseEditorCanvasItemSpecKV3
        public static class CSmartPropPulse_Group {
            public const nint m_OutflowList = 0x48; // PulseSelectorOutflowList_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CPulseCell_Value_Curve {
            public const nint m_Curve = 0x48; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EventHandler {
            public const nint m_EventName = 0x80; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseFlow {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled__InstanceState_t {
            public const nint m_Shuffle = 0x0; // CUtlVectorFixedGrowable<uint8,8>
            public const nint m_nNextShuffle = 0x20; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseLerp__CursorState_t {
            public const nint m_StartTime = 0x0; // GameTime_t
            public const nint m_EndTime = 0x4; // GameTime_t
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
            public const nint m_TagName = 0x0; // PulseSymbol_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseArraylib {
        }
        // Parent: None
        // Field count: 0
        public static class SignatureOutflow_Continue {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Timeline {
            public const nint m_TimelineEvents = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
            public const nint m_bWaitForChildOutflows = 0x60; // bool
            public const nint m_OnFinished = 0x68; // CPulse_ResumePoint
            public const nint m_OnCanceled = 0xB0; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_EntOutputHandler {
            public const nint m_SourceEntity = 0x80; // PulseSymbol_t
            public const nint m_SourceOutput = 0x90; // PulseSymbol_t
            public const nint m_ExpectedParamType = 0xA0; // CPulseValueFullType
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered__InstanceState_t {
            public const nint m_nNextIndex = 0x0; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropPulse_SmartProp {
            public const nint m_hSmartProp = 0x48; // CStrongHandle<InfoForResourceTypeCSmartProp>
        }
        // Parent: None
        // Field count: 0
        public static class CParticleCollectionBindingInstance {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropPulse_CreateRotator {
            public const nint m_Name = 0x48; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_LimitCount__InstanceState_t {
            public const nint m_nCurrentCount = 0x0; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_DebugLog {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseYieldingInflow {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseNodeDynamicOutflows_t {
            public const nint m_Outflows = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_IsRequirementValid__Criteria_t {
            public const nint m_bIsValid = 0x0; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_ObservableVariableListener {
            public const nint m_nBlackboardReference = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_bSelfReference = 0x82; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleOrdered {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseSelectorOutflowList_t {
            public const nint m_Outflows = 0x0; // CUtlVector<OutflowWithRequirements_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropPulse_CriteriaPathPosition {
        }
        // Parent: CEntityComponent
        // Field count: 1
        public static class CScriptComponent {
            public const nint m_scriptClassName = 0x30; // CUtlSymbolLarge
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
        public static class CPulseCell_Inflow_Wait {
            public const nint m_WakeResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleShuffled {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Method {
            public const nint m_MethodName = 0x80; // PulseSymbol_t
            public const nint m_Description = 0x90; // CUtlString
            public const nint m_bIsPublic = 0x98; // bool
            public const nint m_ReturnType = 0xA0; // CPulseValueFullType
            public const nint m_Args = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSmartPropPulse_BaseQueryableFlow {
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropExprAPI {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_BaseValue {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorCanvasItemSpecKV3
        public static class CPulseCell_BooleanSwitchState {
            public const nint m_Condition = 0x48; // PulseObservableBoolExpression_t
            public const nint m_Always = 0xC0; // CPulse_OutflowConnection
            public const nint m_WhenTrue = 0x108; // CPulse_OutflowConnection
            public const nint m_WhenFalse = 0x150; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Inflow_Yield {
            public const nint m_UnyieldResume = 0x48; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyDescription
        public static class CPulseMathlib {
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_Unknown {
            public const nint m_UnknownKeys = 0x48; // KeyValues3
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Outflow_CycleRandom {
            public const nint m_Outputs = 0x48; // CUtlVector<CPulse_OutflowConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_PublicOutput {
            public const nint m_OutputIndex = 0x48; // PulseRuntimeOutputIndex_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropPulse_PlaceInSphere {
            public const nint m_Place = 0x48; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropFilterAPI {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_BlackboardReference {
            public const nint m_hBlackboardResource = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            public const nint m_BlackboardResource = 0x8; // PulseSymbol_t
            public const nint m_nNodeID = 0x18; // PulseDocNodeID_t
            public const nint m_NodeName = 0x20; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        public static class CSmartPropPulse_CriteriaPathPosition__Criteria_t {
            public const nint m_PlaceAtPositions = 0x0; // SmartPropPathPositions_t
            public const nint m_nPlaceEveryNthPosition = 0x4; // int32
            public const nint m_nNthPositionIndexOffset = 0x8; // int32
            public const nint m_bAllowAtStart = 0xC; // bool
            public const nint m_bAllowAtEnd = 0xD; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomInt {
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimationLayer {
            public const nint m_hSequence = 0x0; // CAnimNetVar<int32>
            public const nint m_flPrevCycle = 0xC; // float32
            public const nint m_flCycle = 0x10; // CAnimNetVar<float32>
            public const nint m_flWeight = 0x1C; // CAnimNetVar<float32>
            public const nint m_nOrder = 0x28; // CAnimNetVar<int32>
            public const nint m_bLooping = 0x34; // bool
            public const nint m_nFlags = 0x38; // int32
            public const nint m_bSequenceFinished = 0x3C; // bool
            public const nint m_flKillRate = 0x40; // float32
            public const nint m_flKillDelay = 0x44; // float32
            public const nint m_nPriority = 0x48; // int32
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulse_CallInfo {
            public const nint m_PortName = 0x0; // PulseSymbol_t
            public const nint m_nEditorNodeID = 0x10; // PulseDocNodeID_t
            public const nint m_RegisterMap = 0x18; // PulseRegisterMap_t
            public const nint m_CallMethodID = 0x48; // PulseDocNodeID_t
            public const nint m_nSrcChunk = 0x4C; // PulseRuntimeChunkIndex_t
            public const nint m_nSrcInstruction = 0x50; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropPulse_CreateLocator {
            public const nint m_LocatorName = 0x48; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_InlineNodeSkipSelector {
            public const nint m_nFlowNodeID = 0x48; // PulseDocNodeID_t
            public const nint m_bAnd = 0x4C; // bool
            public const nint m_PassOutflow = 0x50; // PulseSelectorOutflowList_t
            public const nint m_FailOutflow = 0x68; // CPulse_OutflowConnection
        }
        // Parent: None
        // Field count: 1
        public static class CSmartPropPulse_SelectionChoiceWeight__Criteria_t {
            public const nint m_flWeight = 0x0; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CPulseCell_LimitCount {
            public const nint m_nLimitCount = 0x48; // int32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseCell_Step_CallExternalMethod {
            public const nint m_MethodName = 0x48; // PulseSymbol_t
            public const nint m_nBlackboardIndex = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
            public const nint m_ExpectedArgs = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
            public const nint m_nAsyncCallMode = 0x70; // PulseMethodCallMode_t
            public const nint m_OnFinished = 0x78; // CPulse_ResumePoint
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropPulse_CreateSizer {
            public const nint m_Name = 0x48; // CUtlString
            public const nint m_bHACK_ProvideResultMinX = 0x50; // bool
            public const nint m_bHACK_ProvideResultMaxX = 0x51; // bool
            public const nint m_bHACK_ProvideResultMinY = 0x52; // bool
            public const nint m_bHACK_ProvideResultMaxY = 0x53; // bool
            public const nint m_bHACK_ProvideResultMinZ = 0x54; // bool
            public const nint m_bHACK_ProvideResultMaxZ = 0x55; // bool
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
        public static class CSmartPropPulse_PickOneSelector {
            public const nint m_HandleShape = 0x48; // ConfigurationHandleShape_t
            public const nint m_OutflowList = 0x50; // PulseSelectorOutflowList_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class PulseObservableBoolExpression_t {
            public const nint m_EvaluateConnection = 0x0; // CPulse_OutflowConnection
            public const nint m_DependentObservableVars = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
            public const nint m_DependentObservableBlackboardReferences = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
        }
        // Parent: None
        // Field count: 12
        public static class CEntityIdentity {
            public const nint m_nameStringTableIndex = 0x14; // int32
            public const nint m_name = 0x18; // CUtlSymbolLarge
            public const nint m_designerName = 0x20; // CUtlSymbolLarge
            public const nint m_flags = 0x30; // uint32
            public const nint m_worldGroupId = 0x38; // WorldGroupId_t
            public const nint m_fDataObjectTypes = 0x3C; // uint32
            public const nint m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
            public const nint m_pAttributes = 0x48; // CEntityAttributeTable*
            public const nint m_pPrev = 0x50; // CEntityIdentity*
            public const nint m_pNext = 0x58; // CEntityIdentity*
            public const nint m_pPrevByClass = 0x60; // CEntityIdentity*
            public const nint m_pNextByClass = 0x68; // CEntityIdentity*
        }
        // Parent: None
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
        }
        // Parent: None
        // Field count: 0
        public static class CPulseGraphInstance_SmartPropEval {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_CursorQueue {
            public const nint m_nCursorsAllowedToRunParallel = 0x98; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPulseEditorHeaderIcon
        public static class CPulseCell_Value_RandomFloat {
        }
        // Parent: None
        // Field count: 0
        public static class CPulseExecCursor {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropPulse_SelectionLinearLength {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCachedBoolNode {
            public const nint m_mode = 0x100; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterizedClipSelectorNode__CData {
            public const nint m_optionWeights = 0x8; // CUtlVector<uint8>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstBoolNode {
            public const nint m_bValue = 0x100; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocNotNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocChainLookatNode {
            public const nint m_bIsTargetInWorldSpace = 0x200; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_Sound {
            public const nint m_relevance = 0x10; // CNmEventRelevance_t
            public const nint m_bContinuePlayingSoundAtDurationEnd = 0x14; // bool
            public const nint m_flDurationInterruptionThreshold = 0x18; // float32
            public const nint m_name = 0x20; // CUtlString
            public const nint m_position = 0x28; // CNmSoundEvent::Position_t
            public const nint m_attachmentName = 0x30; // CUtlString
            public const nint m_tags = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlOutput {
            public const nint m_flDefaultValue = 0x20; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVibranceColorCorrectionLayer {
            public const nint m_nVibrance = 0x28; // int32
            public const nint m_nSaturation = 0x2C; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocPoseResultNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixEffectName {
            public const nint m_defaultValue = 0x20; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDSelectorNode {
            public const nint m_options = 0x100; // CUtlVector<CGlobalSymbol>
            public const nint m_defaultID = 0x118; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlRemap {
            public const nint m_flInputMin = 0x20; // float32
            public const nint m_flInputMax = 0x24; // float32
            public const nint m_flOutputStart = 0x28; // float32
            public const nint m_flOutputEnd = 0x2C; // float32
            public const nint m_flPower = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCachedVectorNode {
            public const nint m_mode = 0x100; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocClipNode__CData {
            public const nint m_clip = 0x8; // CUtlString
            public const nint m_flSpeedMultiplier = 0x10; // float32
            public const nint m_nStartSyncEventOffset = 0x14; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCachedTargetNode {
            public const nint m_mode = 0x100; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatRemapNode__RemapRange_t {
            public const nint m_flBegin = 0x0; // float32
            public const nint m_flEnd = 0x4; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixPanner {
            public const nint m_type = 0x20; // VMixPannerType_t
            public const nint m_flStrength = 0x24; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstTargetNode {
            public const nint m_rotation = 0x100; // QAngle
            public const nint m_translation = 0x10C; // Vector
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFlowNode {
            public const nint m_inputPins = 0x50; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,4>
            public const nint m_outputPins = 0xD8; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,1>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixFlanger {
            public const nint m_flDelay = 0x20; // float32
            public const nint m_flFeedback = 0x24; // float32
            public const nint m_flFeedfoward = 0x28; // float32
            public const nint m_flModRate = 0x2C; // float32
            public const nint m_flModDepth = 0x30; // float32
            public const nint m_bPhaseInvert = 0x34; // bool
            public const nint m_flGlideTime = 0x38; // float32
            public const nint m_bAntialiasing = 0x3C; // bool
            public const nint m_flGain = 0x40; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSplitterBlend {
            public const nint m_flLockAmount = 0x20; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatClampNode {
            public const nint m_clampRange = 0x100; // Range_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatSwitchNode {
            public const nint m_flFalseValue = 0x100; // float32
            public const nint m_flTrueValue = 0x104; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlMeter {
            public const nint m_flValue = 0x20; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBlendSpace1D__Point_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_flValue = 0x8; // float32
            public const nint m_pinID = 0xC; // V_uuid_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVariationDataNode {
            public const nint m_pDefaultVariationData = 0x100; // CNmGraphDocVariationDataNode::CData*
            public const nint m_overrides = 0x108; // CUtlVector<CNmGraphDocVariationDataNode::OverrideValue_t>
            public const nint m_defaultResourceName = 0x120; // CResourceName
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlInput {
            public const nint m_flDefaultValue = 0x20; // float32
            public const nint m_flMinRange = 0x24; // float32
            public const nint m_flMaxRange = 0x28; // float32
            public const nint m_bUseDecibels = 0x2C; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocReferencePoseNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskParameterReferenceNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_OrientationWarp {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent {
            public const nint m_flStartTime = 0x8; // float32
            public const nint m_flDuration = 0xC; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstVectorNode {
            public const nint m_value = 0x100; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLocalContrastLayer {
            public const nint m_params = 0x28; // PostProcessingLocalContrastParameters_t
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixVocoder {
            public const nint m_nBandCount = 0x20; // int32
            public const nint m_flBandwidth = 0x24; // float32
            public const nint m_fldBModGain = 0x28; // float32
            public const nint m_flAttackTime = 0x2C; // float32
            public const nint m_flReleaseTime = 0x30; // float32
            public const nint m_flFreqRangeStart = 0x34; // float32
            public const nint m_flFreqRangeEnd = 0x38; // float32
            public const nint m_fldBUnvoicedGain = 0x3C; // float32
            public const nint m_nDebugBand = 0x40; // int32
            public const nint m_bPeakMode = 0x44; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFootstepEventIDNode {
            public const nint m_priorityRule = 0x100; // NmEventPriorityRule_t
            public const nint m_bLimitSearchToSourceState = 0x101; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x102; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatSpringNode {
            public const nint m_flHertz = 0x100; // float32
            public const nint m_flDampingRatio = 0x104; // float32
            public const nint m_bUseStartValue = 0x108; // bool
            public const nint m_flStartValue = 0x10C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterizedClipSelectorNode {
            public const nint m_optionLabels = 0x200; // CUtlVector<CUtlString>
            public const nint m_bIgnoreInvalidOptions = 0x218; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_Transition {
            public const nint m_rule = 0x10; // NmTransitionRule_t
            public const nint m_optionalID = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmVariationHierarchy {
            public const nint m_variations = 0x0; // CUtlVector<NmVariation_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoolVirtualParameterNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocZeroPoseNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_ID {
            public const nint m_ID = 0x10; // CGlobalSymbol
            public const nint m_secondaryID = 0x18; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTransitionNode {
            public const nint m_flDurationSeconds = 0x108; // float32
            public const nint m_bClampDurationToSource = 0x10C; // bool
            public const nint m_rootMotionBlend = 0x10D; // NmRootMotionBlendMode_t
            public const nint m_blendWeightEasing = 0x10E; // NmEasingOperation_t
            public const nint m_flBoneMaskBlendInTimePercentage = 0x110; // float32
            public const nint m_timeMatchMode = 0x114; // CNmGraphDocTransitionNode::TimeMatchMode_t
            public const nint m_flTimeOffset = 0x118; // float32
            public const nint m_bCanBeForced = 0x11C; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDualCompressor {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_desc = 0x24; // VMixDualCompressorDesc_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSelectableSubgraph {
            public const nint file = 0x8; // CUtlString
            public const nint subgraphName = 0x10; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetSelectorNode {
            public const nint m_optionLabels = 0x100; // CUtlVector<CUtlString>
            public const nint m_flOrientationScoreWeight = 0x118; // float32
            public const nint m_flPositionScoreWeight = 0x11C; // float32
            public const nint m_bIsWorldSpaceTarget = 0x120; // bool
            public const nint m_bIgnoreInvalidOptions = 0x121; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocSelectorBaseNode {
            public const nint m_optionLabels = 0x100; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBrightnessContrastColorCorrectionLayer {
            public const nint m_nBrightness = 0x28; // int32
            public const nint m_nContrast = 0x2C; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocTwoBoneIKNode__CData {
            public const nint m_effectorBoneName = 0x8; // CUtlString
            public const nint m_flBlendTimeSeconds = 0x10; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGraphEditorState {
            public const nint m_viewConfig = 0x0; // CGraphEditorViewConfig
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDBasedClipSelectorNode {
            public const nint m_optionLabels = 0x100; // CUtlVector<CUtlString>
            public const nint m_bIgnoreInvalidOptions = 0x118; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateCompletedConditionNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixVsndName {
            public const nint m_defaultValue = 0x20; // CUtlString
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixBoxverb {
            public const nint m_flSizeMax = 0x20; // float32
            public const nint m_flSizeMin = 0x24; // float32
            public const nint m_flComplexity = 0x28; // float32
            public const nint m_flModDepth = 0x2C; // float32
            public const nint m_flModRate = 0x30; // float32
            public const nint m_bParallel = 0x34; // bool
            public const nint m_filterType = 0x38; // VMixFilterDesc_t
            public const nint m_flWidth = 0x48; // float32
            public const nint m_flHeight = 0x4C; // float32
            public const nint m_flDepth = 0x50; // float32
            public const nint m_flFeedbackScale = 0x54; // float32
            public const nint m_flFeedbackWidth = 0x58; // float32
            public const nint m_flFeedbackHeight = 0x5C; // float32
            public const nint m_flFeedbackDepth = 0x60; // float32
            public const nint m_flOutputGain = 0x64; // float32
            public const nint m_flTaps = 0x68; // float32
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_Particle {
            public const nint m_relevance = 0x10; // CNmEventRelevance_t
            public const nint m_type = 0x14; // CNmParticleEvent::Type_t
            public const nint m_target = 0x18; // CNmEventTargetEntity_t
            public const nint m_particleSystem = 0x20; // CUtlString
            public const nint m_bDetachFromOwner = 0x28; // bool
            public const nint m_bStopImmediately = 0x29; // bool
            public const nint m_bPlayEndCap = 0x2A; // bool
            public const nint m_attachmentPoint0 = 0x30; // CUtlString
            public const nint m_attachmentType0 = 0x38; // ParticleAttachment_t
            public const nint m_attachmentPoint1 = 0x40; // CUtlString
            public const nint m_attachmentType1 = 0x48; // ParticleAttachment_t
            public const nint m_config = 0x50; // CUtlString
            public const nint m_effectForConfig = 0x58; // CUtlString
            public const nint m_tags = 0x60; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVariationIDComparisonNode {
            public const nint m_comparison = 0x200; // CNmIDComparisonNode::Comparison_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDiffusor {
            public const nint m_flSize = 0x20; // float32
            public const nint m_flComplexity = 0x24; // float32
            public const nint m_flFeedback = 0x28; // float32
            public const nint m_flOutputGain = 0x2C; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCurvesColorCorrectionLayer {
            public const nint m_curvePointsRGB = 0x28; // CUtlVector<Vector2D>
            public const nint m_curvePointsR = 0x40; // CUtlVector<Vector2D>
            public const nint m_curvePointsG = 0x58; // CUtlVector<Vector2D>
            public const nint m_curvePointsB = 0x70; // CUtlVector<Vector2D>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_Foot {
            public const nint m_phase = 0x10; // NmFootPhase_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocAnimationPoseNode {
            public const nint m_inputTimeRemapRange = 0x200; // Range_t
            public const nint m_fixedTimeValue = 0x208; // float32
            public const nint m_useFramesAsInput = 0x20C; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDVirtualParameterNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskResultNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDResultNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBlendSpace2D {
            public const nint m_pointNames = 0x0; // CUtlVector<CUtlString>
            public const nint m_points = 0x18; // CUtlVector<Vector2D>
            public const nint m_indices = 0x30; // CUtlVector<uint8>
            public const nint m_hullIndices = 0x48; // CUtlVector<uint8>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixAudioMeter {
            public const nint m_flLeftLevel = 0x20; // float32
            public const nint m_flLeftPeak = 0x24; // float32
            public const nint m_flRightLevel = 0x28; // float32
            public const nint m_flRightPeak = 0x2C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorControlParameterNode {
            public const nint m_previewStartValue = 0x118; // Vector
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocGraph {
            public const nint m_ID = 0x8; // V_uuid_t
            public const nint m_nodes = 0x20; // CUtlVector<CNmGraphDocNode*>
            public const nint m_graphType = 0x38; // NmGraphDocGraphType_t
            public const nint m_viewOffset = 0x3C; // Vector2D
            public const nint m_flViewZoom = 0x44; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVirtualParameterNode {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CColorLookupColorCorrectionLayer {
            public const nint m_fileName = 0x28; // CUtlString
            public const nint m_lut = 0x30; // CUtlVector<float32>
            public const nint m_nDim = 0x48; // int32
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSteamAudioDirect {
            public const nint m_bApplyDistanceAttenuation = 0x20; // bool
            public const nint m_bApplyAirAbsorption = 0x21; // bool
            public const nint m_bApplyDirectivity = 0x22; // bool
            public const nint m_bApplyOcclusion = 0x23; // bool
            public const nint m_bApplyTransmission = 0x24; // bool
            public const nint m_flDipoleWeight = 0x28; // float32
            public const nint m_flDipolePower = 0x2C; // float32
            public const nint m_flOcclusion = 0x30; // float32
            public const nint m_flTransmissionLow = 0x34; // float32
            public const nint m_flTransmissionMid = 0x38; // float32
            public const nint m_flTransmissionHigh = 0x3C; // float32
            public const nint m_vecTransmission = 0x40; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDynamics {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_fldbNoiseGateThreshold = 0x24; // float32
            public const nint m_fldbGain = 0x28; // float32
            public const nint m_fldbCompressionThreshold = 0x2C; // float32
            public const nint m_fldbLimiterThreshold = 0x30; // float32
            public const nint m_fldbKneeWidth = 0x34; // float32
            public const nint m_flRatio = 0x38; // float32
            public const nint m_flLimiterRatio = 0x3C; // float32
            public const nint m_flAttackTime = 0x40; // float32
            public const nint m_flReleaseTime = 0x44; // float32
            public const nint m_flRMSTime = 0x48; // float32
            public const nint m_flWetMix = 0x4C; // float32
            public const nint m_bPeakMode = 0x50; // bool
            public const nint m_nUIPage = 0x54; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixEQ8 {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_stages = 0x28; // CFilterStage[8]
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSkeletonDocument__SecondarySkeleton_t {
            public const nint m_skeleton = 0x0; // CUtlString
            public const nint m_attachToBoneID = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmPreviewArchetype__SecondarySkeleton_t {
            public const nint m_skeleton = 0x0; // CUtlString
            public const nint m_previewModel = 0x8; // CUtlString
            public const nint m_bodyPartChoiceName = 0x10; // CUtlString
            public const nint m_attachToBoneName = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocGraphEventConditionNode {
            public const nint m_operator = 0x100; // NmEventConditionOperator_t
            public const nint m_bLimitSearchToSourceState = 0x101; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x102; // bool
            public const nint m_conditions = 0x108; // CUtlVector<CNmGraphDocGraphEventConditionNode::Condition_t>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDynamics3Band {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_fldbOutputGain = 0x24; // float32
            public const nint m_flRMSTime = 0x28; // float32
            public const nint m_flDepth = 0x2C; // float32
            public const nint m_flWetMix = 0x30; // float32
            public const nint m_flTimeScale = 0x34; // float32
            public const nint m_fldbKneeWidth = 0x38; // float32
            public const nint m_flLowCutoffFreq = 0x3C; // float32
            public const nint m_flHighCutoffFreq = 0x40; // float32
            public const nint m_bPeakMode = 0x44; // bool
            public const nint m_nSelectedPage = 0x48; // int32
            public const nint m_bands = 0x4C; // VMixDynamicsBand_t[3]
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSteamAudioSource {
            public const nint m_nInterpolation = 0x20; // SteamAudioHRTFInterpolationType_t
            public const nint m_flDirectMixLevel = 0x24; // float32
            public const nint m_bEnablePerspectiveCorrection = 0x28; // bool
            public const nint m_bRelativePosition = 0x29; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocSelectorConditionNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CGraphPreviewList {
            public const nint m_flVolume = 0x0; // float32
            public const nint m_previewList = 0x8; // CPreviewList
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocVelocityBasedSpeedScaleNode {
            public const nint m_flDesiredVelocity = 0x100; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CToneMappingLayer {
            public const nint m_params = 0x28; // PostProcessingTonemapParameters_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixAmp {
            public const nint m_flVolume = 0x20; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocClipSelectorNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorResultNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSteamAudioPathing {
            public const nint m_flPathingMixLevel = 0x20; // float32
            public const nint m_vPathingEQ = 0x24; // float32[3]
            public const nint m_vPathingCoeffs = 0x30; // CUtlVector<float32>
            public const nint m_vecPathingEQ = 0x48; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixFilter {
            public const nint m_filterType = 0x20; // CUtlString
            public const nint m_nChannels = 0x28; // int32
            public const nint m_flFrequency = 0x2C; // float32
            public const nint m_flQ = 0x30; // float32
            public const nint m_fldbGain = 0x34; // float32
            public const nint m_nFilterSlope = 0x38; // VMixFilterSlope_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSubgraph {
            public const nint subgraphFile = 0x20; // CUtlString
            public const nint subgraphName = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixShaper {
            public const nint m_desc = 0x20; // VMixShaperDesc_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocFootIKNode {
            public const nint m_bIsTargetInWorldSpace = 0x200; // bool
            public const nint m_blendMode = 0x201; // NmIKBlendMode_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlMax {
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLevelsColorCorrectionLayer {
            public const nint m_nInputBlackPointRGB = 0x28; // int32
            public const nint m_nInputBlackPointR = 0x2C; // int32
            public const nint m_nInputBlackPointG = 0x30; // int32
            public const nint m_nInputBlackPointB = 0x34; // int32
            public const nint m_nInputWhitePointRGB = 0x38; // int32
            public const nint m_nInputWhitePointR = 0x3C; // int32
            public const nint m_nInputWhitePointG = 0x40; // int32
            public const nint m_nInputWhitePointB = 0x44; // int32
            public const nint m_nOutputBlackPointRGB = 0x48; // int32
            public const nint m_nOutputBlackPointR = 0x4C; // int32
            public const nint m_nOutputBlackPointG = 0x50; // int32
            public const nint m_nOutputBlackPointB = 0x54; // int32
            public const nint m_nOutputWhitePointRGB = 0x58; // int32
            public const nint m_nOutputWhitePointR = 0x5C; // int32
            public const nint m_nOutputWhitePointG = 0x60; // int32
            public const nint m_nOutputWhitePointB = 0x64; // int32
            public const nint m_flGammaRGB = 0x68; // float32
            public const nint m_flGammaR = 0x6C; // float32
            public const nint m_flGammaG = 0x70; // float32
            public const nint m_flGammaB = 0x74; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPreviewEntry {
            public const nint m_soundName = 0x0; // CUtlString
            public const nint m_trackName = 0x8; // CUtlString
            public const nint m_bIsSoundEvent = 0x10; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVariationDataNode__OverrideValue_t {
            public const nint m_variationID = 0x0; // CGlobalSymbol
            public const nint m_pData = 0x8; // CNmGraphDocVariationDataNode::CData*
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorCreateNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatMathNode {
            public const nint m_bReturnAbsoluteResult = 0x100; // bool
            public const nint m_bReturnNegatedResult = 0x101; // bool
            public const nint m_operator = 0x102; // CNmFloatMathNode::Operator_t
            public const nint m_flValueB = 0x104; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocResultNode {
            public const nint m_resultType = 0x100; // NmGraphValueType_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskNode__CData {
            public const nint m_overrideMaskID = 0x8; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetInfoNode {
            public const nint m_infoType = 0x100; // CNmTargetInfoNode::Info_t
            public const nint m_bIsWorldSpaceTarget = 0x104; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocDataDictionary__Parameter_t {
            public const nint m_ID = 0x0; // V_uuid_t
            public const nint m_name = 0x10; // CUtlString
            public const nint m_groupName = 0x18; // CUtlString
            public const nint m_valueType = 0x20; // NmGraphValueType_t
            public const nint m_expectedValues = 0x28; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocument {
            public const nint m_pRootGraph = 0x70; // CNmGraphDocFlowGraph*
            public const nint m_variationHierarchy = 0x78; // CNmVariationHierarchy
            public const nint m_debugParameterSets = 0x90; // CUtlLeanVector<CNmGraphDocument::DebugParameterSet_t>
            public const nint m_dictionaryIDSetIDs = 0xA0; // CUtlVector<V_uuid_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTimeConditionNode {
            public const nint m_flComparand = 0x100; // float32
            public const nint m_type = 0x104; // CNmTimeConditionNode::ComparisonType_t
            public const nint m_operator = 0x105; // CNmTimeConditionNode::Operator_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDComparisonNode {
            public const nint m_comparison = 0x100; // CNmIDComparisonNode::Comparison_t
            public const nint m_values = 0x108; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_TargetWarp {
            public const nint m_rule = 0x10; // NmTargetWarpRule_t
            public const nint m_algorithm = 0x11; // NmTargetWarpAlgorithm_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLayerMask {
            public const nint m_nLumMaskCenter = 0x8; // int32
            public const nint m_nLumMaskWidth = 0xC; // int32
            public const nint m_nLumMaskShape = 0x10; // int32
            public const nint m_bInverted = 0x14; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocSpeedScaleNode {
            public const nint m_flMultiplier = 0x100; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateNode__TimedStateEvent_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_type = 0x8; // CNmGraphDocStateNode::TimedStateEventType_t
            public const nint m_comparisonOperator = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
            public const nint m_flTimeValueSeconds = 0x10; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocScaleNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTransitionConduitNode {
            public const nint m_startStateID = 0x50; // V_uuid_t
            public const nint m_endStateID = 0x60; // V_uuid_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlListener {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatRemapNode {
            public const nint m_inputRange = 0x100; // CNmGraphDocFloatRemapNode::RemapRange_t
            public const nint m_outputRange = 0x108; // CNmGraphDocFloatRemapNode::RemapRange_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoolParameterReferenceNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterReferenceNode {
            public const nint m_parameterUUID = 0x108; // V_uuid_t
            public const nint m_parameterValueType = 0x118; // NmGraphValueType_t
            public const nint m_parameterName = 0x120; // CUtlString
            public const nint m_parameterGroupName = 0x128; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocDurationScaleNode {
            public const nint m_flDesiredDuration = 0x100; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatControlParameterNode {
            public const nint m_previewStartValue = 0x118; // float32
            public const nint m_previewMin = 0x11C; // float32
            public const nint m_previewMax = 0x120; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlTransientInput {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPreviewList {
            public const nint m_sounds = 0x0; // CUtlVector<CPreviewEntry>
            public const nint m_bPreviewInGame = 0x18; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIsTargetSetNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocGraphEventConditionNode__Condition_t {
            public const nint m_eventID = 0x0; // CGlobalSymbol
            public const nint m_type = 0x8; // NmGraphEventTypeCondition_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCommentNode {
            public const nint m_size = 0x50; // Vector2D
            public const nint m_comment = 0x58; // CUtlString
            public const nint m_nodeColor = 0x60; // Color
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_BodyGroup {
            public const nint m_target = 0x10; // CNmEventTargetEntity_t
            public const nint bodygroup = 0x18; // CUtlString
            public const nint value = 0x20; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixPresetDSP {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_effectName = 0x28; // CUtlString
            public const nint m_flXFade = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFixedWeightBoneMaskNode {
            public const nint m_flBoneWeight = 0x100; // float32
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocument {
            public const nint m_sourceFilename = 0x70; // CUtlString
            public const nint m_animationSkeletonName = 0x78; // CUtlString
            public const nint m_secondaryAnimationSkeletonNames = 0x80; // CUtlVector<CUtlString>
            public const nint m_eventTracks = 0x98; // CUtlLeanVector<CNmClipDocEventTrack>
            public const nint m_nStartFrame = 0xA8; // int32
            public const nint m_nEndFrame = 0xAC; // int32
            public const nint m_flDurationOverrideSeconds = 0xB0; // float32
            public const nint m_additiveType = 0xB4; // CNmClipDocument::AdditiveType_t
            public const nint m_additiveBaseFilename = 0xB8; // CUtlString
            public const nint m_additiveBaseFrame = 0xC0; // CNmClipDocument::AdditiveBaseFrame_t
            public const nint m_nAdditiveBaseFrameIdx = 0xC4; // int32
            public const nint m_bUseReferencePoseForSecondaryAnimAdditives = 0xC8; // bool
            public const nint m_bonesToSampleInModelSpace = 0xD0; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlAutomatic {
        }
        // Parent: None
        // Field count: 17
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixBoxverb2 {
            public const nint m_flSizeMax = 0x20; // float32
            public const nint m_flSizeMin = 0x24; // float32
            public const nint m_flComplexity = 0x28; // float32
            public const nint m_flModDepth = 0x2C; // float32
            public const nint m_flModRate = 0x30; // float32
            public const nint m_bParallel = 0x34; // bool
            public const nint m_filterType = 0x38; // VMixFilterDesc_t
            public const nint m_flWidth = 0x48; // float32
            public const nint m_flHeight = 0x4C; // float32
            public const nint m_flDepth = 0x50; // float32
            public const nint m_flFeedbackScale = 0x54; // float32
            public const nint m_flFeedbackWidth = 0x58; // float32
            public const nint m_flFeedbackHeight = 0x5C; // float32
            public const nint m_flFeedbackDepth = 0x60; // float32
            public const nint m_flWetMix = 0x64; // float32
            public const nint m_flOutputGain = 0x68; // float32
            public const nint m_flTaps = 0x6C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class SetVarTarget_t {
            public const nint nVarDefID = 0x0; // PulseDocNodeID_t
            public const nint strValueEncoded = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocChainLookatNode__CData {
            public const nint m_chainEndBoneName = 0x8; // CUtlString
            public const nint m_chainForwardDir = 0x10; // Vector
            public const nint m_nChainLength = 0x1C; // uint8
            public const nint m_flBlendTimeSeconds = 0x20; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTextureSheetDoc_SequenceDecalParams {
            public const nint m_flScale = 0x0; // float32
            public const nint m_flDepth = 0x4; // float32
            public const nint m_flScaleVariation = 0x8; // float32
            public const nint m_flStartFadeTime = 0xC; // float32
            public const nint m_flFadeDuration = 0x10; // float32
            public const nint m_flAnimationScale = 0x14; // float32
            public const nint m_flAnimationStartTime = 0x18; // float32
            public const nint m_flAlignWithGravityFactor = 0x1C; // float32
            public const nint m_nDecalRtEncoding = 0x20; // DecalRtEncoding_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatResultNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class GetVarTarget_t {
            public const nint nVarDefID = 0x0; // PulseDocNodeID_t
            public const nint strValueEncoded = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixOsc {
            public const nint m_desc = 0x20; // VMixOscDesc_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocOrNode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTransitionEventConditionNode {
            public const nint m_ruleCondition = 0x100; // NmTransitionRuleCondition_t
            public const nint m_bMatchOnlySpecificMarkerID = 0x101; // bool
            public const nint m_markerIDToMatch = 0x108; // CGlobalSymbol
            public const nint m_bLimitSearchToSourceState = 0x110; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x111; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixEnvelopeTrigger {
            public const nint m_flBaseValue = 0x20; // float32
            public const nint m_flDestinationValue = 0x24; // float32
            public const nint m_flAttackTime = 0x28; // float32
            public const nint m_flHoldTime = 0x2C; // float32
            public const nint m_flReleaseTime = 0x30; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocDataDictionary {
            public const nint m_parameterSets = 0x0; // CUtlVector<CNmGraphDocDataDictionary::ParameterSet_t>
            public const nint m_IDSets = 0x18; // CUtlVector<CNmGraphDocDataDictionary::IDSet_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetWarpNode__CData {
            public const nint m_strAlignmentBoneName = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatCurveEventNode {
            public const nint m_matchID = 0x100; // CGlobalSymbol
            public const nint m_flDefaultValue = 0x108; // float32
            public const nint m_priorityRule = 0x10C; // NmEventPriorityRule_t
            public const nint m_bLimitSearchToSourceState = 0x10D; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x10E; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVariationIDComparisonNode__CData {
            public const nint m_values = 0x8; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocNode {
            public const nint m_ID = 0x8; // V_uuid_t
            public const nint m_name = 0x18; // CUtlString
            public const nint m_floatingComment = 0x20; // CUtlString
            public const nint m_position = 0x28; // Vector2D
            public const nint m_pChildGraph = 0x40; // CNmGraphDocGraph*
            public const nint m_pSecondaryGraph = 0x48; // CNmGraphDocGraph*
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixOutput {
            public const nint m_flVolume1 = 0x20; // float32
            public const nint m_flVolume2 = 0x24; // float32
            public const nint m_sendTo = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorVirtualParameterNode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocRootMotionOverrideNode {
            public const nint m_flMaxLinearVelocity = 0x100; // float32
            public const nint m_flMaxAngularVelocityDegrees = 0x104; // float32
            public const nint m_bOverrideMoveDirX = 0x108; // bool
            public const nint m_bOverrideMoveDirY = 0x109; // bool
            public const nint m_bOverrideMoveDirZ = 0x10A; // bool
            public const nint m_bAllowPitchForFacing = 0x10B; // bool
            public const nint m_bListenForRootMotionEvents = 0x10C; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CColorTintColorCorrectionLayer {
            public const nint m_nTintColorR = 0x28; // int32
            public const nint m_nTintColorG = 0x2C; // int32
            public const nint m_nTintColorB = 0x30; // int32
            public const nint m_nStrength = 0x34; // int32
            public const nint m_bPreserveLuminosity = 0x38; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocLocalLayerNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVariationDataNode__CData {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlCrossfade {
            public const nint m_flFadeStart = 0x20; // float32
            public const nint m_flFadeEnd = 0x24; // float32
        }
        // Parent: None
        // Field count: 103
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPulseEditorSettings {
            public const nint m_colCanvasBackground = 0x0; // Color
            public const nint m_colCanvasBackgroundWhenDebugging = 0x4; // Color
            public const nint m_flGridSnapV2 = 0x8; // float32
            public const nint m_bSnapAbsToGrid = 0xC; // bool
            public const nint m_bSnapSizeToGrid = 0xD; // bool
            public const nint m_bGridMinorPoints = 0xE; // bool
            public const nint m_flGridMinorSpacingV2 = 0x10; // float32
            public const nint m_flSuppressMinorGridFurtherThan = 0x14; // float32
            public const nint m_colGridMinorColor = 0x18; // Color
            public const nint m_flGridMinorWidth = 0x1C; // float32
            public const nint m_nGridMajorMultiple = 0x20; // int32
            public const nint m_colGridMajorColor = 0x24; // Color
            public const nint m_flGridMajorWidth = 0x28; // float32
            public const nint m_colGridOriginColor = 0x2C; // Color
            public const nint m_flGridOriginWidth = 0x30; // float32
            public const nint m_nFlowTooltipBoxMargin = 0x34; // float32
            public const nint m_FontSequencePoint = 0x38; // CUtlString
            public const nint m_flSequencePointRadius = 0x40; // float32
            public const nint m_flSequencePointLinkWidth = 0x44; // float32
            public const nint m_colSequencePointFadeOverlay = 0x48; // Color
            public const nint m_colSequencePointSpontaneous = 0x4C; // Color
            public const nint m_colSequencePointYield = 0x50; // Color
            public const nint m_colSequencePoint = 0x54; // Color
            public const nint m_colSequencePointLink = 0x58; // Color
            public const nint m_colSequencePointLinkYield = 0x5C; // Color
            public const nint m_colSequencePointName = 0x60; // Color
            public const nint m_colFlowTooltipBorder = 0x64; // Color
            public const nint m_colFlowTooltipBackground = 0x68; // Color
            public const nint m_colFlowTooltipForeground = 0x6C; // Color
            public const nint m_flPortDragOffCreateThreshold = 0x70; // float32
            public const nint m_colBool = 0x74; // Color
            public const nint m_colNumber = 0x78; // Color
            public const nint m_colString = 0x7C; // Color
            public const nint m_colOther = 0x80; // Color
            public const nint m_colCursorFlow = 0x84; // Color
            public const nint m_FontFlowTooltip = 0x88; // CUtlString
            public const nint m_FontLiteral = 0x90; // CUtlString
            public const nint m_FontDomainName = 0x98; // CUtlString
            public const nint m_vDomainNameOffsetPX = 0xA0; // Vector2D
            public const nint m_colDomainName = 0xA8; // Color
            public const nint m_colDomainNameWhenDebugging = 0xAC; // Color
            public const nint m_FontParentAssets = 0xB0; // CUtlString
            public const nint m_colParentAssets = 0xB8; // Color
            public const nint m_colParentAssetsBroken = 0xBC; // Color
            public const nint m_flLiteralLabelSpacing = 0xC0; // float32
            public const nint m_colDebuggerBrokenBorder = 0xC4; // Color
            public const nint m_DebuggerBrokenImg = 0xC8; // CUtlString
            public const nint m_DebuggerBrokenOtherImg = 0xD0; // CUtlString
            public const nint m_flDebuggerBrokenMarkerOffset = 0xD8; // float32
            public const nint m_flDebuggerBrokenMarkerSize = 0xDC; // float32
            public const nint m_DebuggerBreakpointImg = 0xE0; // CUtlString
            public const nint m_DebuggerBreakpointDisabledImg = 0xE8; // CUtlString
            public const nint m_flDebuggerBreakpointOffset = 0xF0; // float32
            public const nint m_flDebuggerBreakpointSize = 0xF4; // float32
            public const nint m_flYieldedCursorStackOffset = 0xF8; // float32
            public const nint m_GraphInstanceImg = 0x100; // CUtlString
            public const nint m_flRecentExecTimeoutSec = 0x108; // float32
            public const nint m_flRecentExecStartOffset = 0x10C; // float32
            public const nint m_flRecentExecEndOffset = 0x110; // float32
            public const nint m_flRecentExecLineWidth = 0x114; // float32
            public const nint m_colRecentExecStartColor = 0x118; // Color
            public const nint m_colRecentExecEndColor = 0x11C; // Color
            public const nint m_colRecentExecRequirementFailStartColor = 0x120; // Color
            public const nint m_colRecentExecRequirementFailEndColor = 0x124; // Color
            public const nint m_flRecentExecConnectionIndicatorSize = 0x128; // float32
            public const nint m_RecentExecConnectionIndicatorImg = 0x130; // CUtlString
            public const nint m_bBreakOnExceptions = 0x138; // bool
            public const nint m_bShowExecutionHistory = 0x139; // bool
            public const nint m_bBoxSelectRequiresFullyContained = 0x13A; // bool
            public const nint m_flFlowMinWidth = 0x13C; // float32
            public const nint m_colSelectedBorder = 0x140; // Color
            public const nint m_flAppendButtonSize = 0x144; // float32
            public const nint m_colAppendHover = 0x148; // Color
            public const nint m_AppendImg = 0x150; // CUtlString
            public const nint m_flMoveChildArrowOffset = 0x158; // float32
            public const nint m_flMoveChildArrowSize = 0x15C; // float32
            public const nint m_MoveChildArrowImg = 0x160; // CUtlString
            public const nint m_colMoveChildArrow = 0x168; // Color
            public const nint m_flConnectionTangentStrength = 0x16C; // float32
            public const nint m_flConnectionCurveSpacing = 0x170; // float32
            public const nint m_flConnectionDeltaLimitScale = 0x174; // float32
            public const nint m_flBrokenConnectionOffset = 0x178; // float32
            public const nint m_flConnectionInflowOffset = 0x17C; // float32
            public const nint m_flConnectionInparamOffset = 0x180; // float32
            public const nint m_flConnectionInparamOffsetArray = 0x184; // float32
            public const nint m_flConnectionCapBrokenSize = 0x188; // float32
            public const nint m_ConnectionCapBrokenImg = 0x190; // CUtlString
            public const nint m_flConnectionColorLerpPercentageStart = 0x198; // float32
            public const nint m_vecBlockCommentDefaultSize = 0x19C; // Vector2D
            public const nint m_vecBlockCommentMinSize = 0x1A4; // Vector2D
            public const nint m_colBlockCommentDefault = 0x1AC; // Color
            public const nint m_colBlockCommentTextLight = 0x1B0; // Color
            public const nint m_colBlockCommentTextDark = 0x1B4; // Color
            public const nint m_flBlockCommentRegionAlpha = 0x1B8; // float32
            public const nint m_flTimelineSeekBarHeight = 0x1BC; // float32
            public const nint m_flTimelinePauseIconSize = 0x1C0; // float32
            public const nint m_flTimelineCallModeIconSize = 0x1C4; // float32
            public const nint m_FontTimelineTime = 0x1C8; // CUtlString
            public const nint m_colTimelineLabel = 0x1D0; // Color
            public const nint m_vecTimelineIconFromPort = 0x1D4; // Vector2D
            public const nint m_vecTimelinePauseIconOffset = 0x1DC; // Vector2D
            public const nint m_flTimelineCursorHeight = 0x1E4; // float32
            public const nint m_flTimelineCursorTextHeight = 0x1E8; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixTrack {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_nMixDownRule = 0x24; // int32
            public const nint m_sendOperator = 0x28; // CUtlString
            public const nint m_Send1 = 0x30; // CUtlString
            public const nint m_Send2 = 0x38; // CUtlString
            public const nint m_Send3 = 0x40; // CUtlString
            public const nint m_Send4 = 0x48; // CUtlString
        }
        // Parent: None
        // Field count: 21
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CHueSaturationColorCorrectionLayer {
            public const nint m_nHueMaster = 0x28; // int32
            public const nint m_nHueRed = 0x2C; // int32
            public const nint m_nHueYellow = 0x30; // int32
            public const nint m_nHueGreen = 0x34; // int32
            public const nint m_nHueCyan = 0x38; // int32
            public const nint m_nHueBlue = 0x3C; // int32
            public const nint m_nHueMagenta = 0x40; // int32
            public const nint m_nSaturationMaster = 0x44; // int32
            public const nint m_nSaturationRed = 0x48; // int32
            public const nint m_nSaturationYellow = 0x4C; // int32
            public const nint m_nSaturationGreen = 0x50; // int32
            public const nint m_nSaturationCyan = 0x54; // int32
            public const nint m_nSaturationBlue = 0x58; // int32
            public const nint m_nSaturationMagenta = 0x5C; // int32
            public const nint m_nBrightnessMaster = 0x60; // int32
            public const nint m_nBrightnessRed = 0x64; // int32
            public const nint m_nBrightnessYellow = 0x68; // int32
            public const nint m_nBrightnessGreen = 0x6C; // int32
            public const nint m_nBrightnessCyan = 0x70; // int32
            public const nint m_nBrightnessBlue = 0x74; // int32
            public const nint m_nBrightnessMagenta = 0x78; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocFollowBoneNode {
            public const nint m_mode = 0x200; // NmFollowBoneMode_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEffectsPreviewList {
            public const nint m_previewGraphInput = 0x0; // CUtlString
            public const nint m_flMix = 0x8; // float32
            public const nint m_previewList = 0x10; // CPreviewList
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataPreviewWidget
        // MVDataFileExtension
        public static class CTextureSheetDoc {
            public const nint m_ePackingMode = 0x0; // PackingMode_t
            public const nint m_NumMips = 0x4; // int32
            public const nint m_bHasDecalParams = 0x8; // bool
            public const nint m_sLayoutOwnerSheet = 0x10; // CUtlString
            public const nint m_Sequences = 0x18; // CUtlStringMap<CTextureSheetDoc_Sequence*>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixEditorNode {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_friendlyName = 0x8; // CUtlString
            public const nint m_type = 0x10; // CUtlString
            public const nint m_vPos = 0x18; // Vector2D
            public const nint m_vSize = 0x20; // Vector2D
            public const nint m_properties = 0x28; // KeyValues3
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocLayerBlendNode {
            public const nint m_onlySampleBaseRootMotion = 0x100; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocSyncEventIndexConditionNode {
            public const nint m_triggerMode = 0x100; // CNmSyncEventIndexConditionNode::TriggerMode_t
            public const nint m_nSyncEventIdx = 0x104; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetVirtualParameterNode {
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmSkeletonDocument {
            public const nint m_sourceFilename = 0x70; // CUtlString
            public const nint m_rootBoneName = 0x78; // CUtlString
            public const nint m_flGlobalScale = 0x80; // float32
            public const nint m_bIsAttachableProp = 0x84; // bool
            public const nint m_bIsCS_HACK = 0x85; // bool
            public const nint m_secondarySkeletons = 0x88; // CUtlVector<CNmSkeletonDocument::SecondarySkeleton_t>
            public const nint m_gameplayRelevantBones = 0xA0; // CUtlVector<CGlobalSymbol>
            public const nint m_highLODBones = 0xB8; // CUtlVector<CUtlString>
            public const nint m_boneMaskSetDefinitions = 0xD0; // CUtlVector<NmBoneMaskSetDefinition_t>
            public const nint m_previewModelName = 0xE8; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixUtility {
            public const nint m_desc = 0x20; // VMixUtilityDesc_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDynamicsCompressor {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_desc = 0x24; // VMixDynamicsCompressorDesc_t
            public const nint m_nUIPage = 0x48; // int32
            public const nint m_bIsLimiter = 0x4C; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixEnvelope {
            public const nint m_flAttackTime = 0x20; // float32
            public const nint m_flHoldTime = 0x24; // float32
            public const nint m_flReleaseTime = 0x28; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocEntryOverrideNode {
            public const nint m_stateID = 0x108; // V_uuid_t
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyCustomEditor
        public static class CTextureSheetDoc_Frame {
            public const nint m_sImageName = 0x0; // CUtlString
            public const nint m_fDisplayTime = 0x8; // float32
            public const nint m_bCropEnabled = 0xC; // bool
            public const nint m_srcCropXStart = 0x10; // int32
            public const nint m_srcCropYStart = 0x14; // int32
            public const nint m_srcCropXEnd = 0x18; // int32
            public const nint m_srcCropYEnd = 0x1C; // int32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmBlendSpace1D {
            public const nint m_points = 0x0; // CUtlVector<CNmBlendSpace1D::Point_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIsInactiveBranchConditionNode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetControlParameterNode {
            public const nint m_bIsSet = 0x118; // bool
            public const nint m_bIsBoneID = 0x119; // bool
            public const nint m_targetOrientation = 0x11C; // QAngle
            public const nint m_targetPosition = 0x128; // Vector
            public const nint m_previewStartBoneID = 0x138; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocLayerBaseNode {
            public const nint m_isSynchronized = 0x100; // bool
            public const nint m_ignoreEvents = 0x101; // bool
            public const nint m_blendMode = 0x102; // NmPoseBlendMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskNode {
            public const nint m_maskID = 0x200; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocTwoBoneIKNode {
            public const nint m_bIsTargetInWorldSpace = 0x200; // bool
            public const nint m_blendMode = 0x201; // NmIKBlendMode_t
            public const nint m_flChainRotationWeight = 0x204; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVignetteLayer {
            public const nint m_params = 0x28; // PostProcessingVignetteParameters_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateMachineGraph {
            public const nint m_entryStateID = 0x50; // V_uuid_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDSwitchNode {
            public const nint m_falseValue = 0x100; // CGlobalSymbol
            public const nint m_trueValue = 0x108; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixPitchShift {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_flPitchScale = 0x24; // float32
            public const nint m_flGrainMs = 0x28; // float32
            public const nint m_nProcType = 0x2C; // int32
            public const nint m_nQuality = 0x30; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatSelectorNode {
            public const nint m_options = 0x100; // CUtlVector<CNmGraphDocFloatSelectorNode::Option_t>
            public const nint m_flDefaultValue = 0x118; // float32
            public const nint m_easing = 0x11C; // NmEasingOperation_t
            public const nint m_easeTime = 0x120; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixBlendAudio {
            public const nint m_flLockAmount = 0x20; // float32
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDelay {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_flDelay = 0x24; // float32
            public const nint m_fldbDirectGain = 0x28; // float32
            public const nint m_fldbDelayGain = 0x2C; // float32
            public const nint m_fldbFeedbackGain = 0x30; // float32
            public const nint m_flWidth = 0x34; // float32
            public const nint m_bEnableFilter = 0x38; // bool
            public const nint m_filterType = 0x40; // CUtlString
            public const nint m_flFrequency = 0x48; // float32
            public const nint m_flQ = 0x4C; // float32
            public const nint m_fldbGain = 0x50; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateMachineLayerNode {
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSplitter {
            public const nint m_flVolume1 = 0x20; // float32
            public const nint m_flVolume2 = 0x24; // float32
            public const nint m_flVolume3 = 0x28; // float32
            public const nint m_flVolume4 = 0x2C; // float32
            public const nint m_flVolume5 = 0x30; // float32
            public const nint m_flVolume6 = 0x34; // float32
            public const nint m_flVolume7 = 0x38; // float32
            public const nint m_flVolume8 = 0x3C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCurrentSyncEventNode {
            public const nint m_infoType = 0x100; // CNmCurrentSyncEventNode::InfoType_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDToFloatNode__Mapping_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_value = 0x8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoolControlParameterNode {
            public const nint m_previewStartValue = 0x118; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterizedSelectorNode {
            public const nint m_optionLabels = 0x200; // CUtlVector<CUtlString>
            public const nint m_bIgnoreInvalidOptions = 0x218; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmAnimDocument {
            public const nint m_nVersion = 0x68; // int32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocDataDictionary__ParameterSet_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_parameters = 0x8; // CUtlVector<CNmGraphDocDataDictionary::Parameter_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocControlParameterNode {
            public const nint m_dictionaryParameterBinding = 0x108; // V_uuid_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixEditorEdge {
            public const nint m_plug0 = 0x0; // CUtlString
            public const nint m_plug1 = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatVirtualParameterNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorParameterReferenceNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CColorCorrectionLayer {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_nOpacityPercent = 0x10; // int32
            public const nint m_bVisible = 0x14; // bool
            public const nint m_pLayerMask = 0x18; // CLayerMask*
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskSwitchNode {
            public const nint m_bSwitchDynamically = 0x100; // bool
            public const nint m_flBlendTimeSeconds = 0x104; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskVirtualParameterNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDBasedSelectorNode {
            public const nint m_optionLabels = 0x100; // CUtlVector<CUtlString>
            public const nint m_bIgnoreInvalidOptions = 0x118; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateNode {
            public const nint m_type = 0x50; // CNmGraphDocStateNode::StateType_t
            public const nint m_cloneSourceStateID = 0x54; // V_uuid_t
            public const nint m_stateEvents = 0x68; // CUtlVector<CNmGraphDocStateNode::StateEvent_t>
            public const nint m_timedStateEvents = 0x80; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
            public const nint m_events = 0x98; // CUtlVector<CGlobalSymbol>
            public const nint m_entryEvents = 0xB0; // CUtlVector<CGlobalSymbol>
            public const nint m_executeEvents = 0xC8; // CUtlVector<CGlobalSymbol>
            public const nint m_exitEvents = 0xE0; // CUtlVector<CGlobalSymbol>
            public const nint m_timeRemainingEvents = 0xF8; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
            public const nint m_timeElapsedEvents = 0x110; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
            public const nint m_bUseActualElapsedTimeInStateForTimedEvents = 0x128; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlInputArray {
            public const nint m_vflData = 0x20; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFlowGraph__Connection_t {
            public const nint m_ID = 0x0; // V_uuid_t
            public const nint m_fromNodeID = 0x10; // V_uuid_t
            public const nint m_outputPinID = 0x20; // V_uuid_t
            public const nint m_toNodeID = 0x30; // V_uuid_t
            public const nint m_inputPinID = 0x40; // V_uuid_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOverlayType
        public static class CNmPreviewArchetype {
            public const nint m_primarySkeleton = 0x0; // CUtlString
            public const nint m_previewModel = 0x8; // CUtlString
            public const nint m_bodyPartChoiceName = 0x10; // CUtlString
            public const nint m_secondarySkeletonSettings = 0x18; // CUtlVector<CNmPreviewArchetype::SecondarySkeleton_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstBoneTargetNode {
            public const nint m_boneName = 0x100; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixModDelay {
            public const nint m_bPhaseInvert = 0x20; // bool
            public const nint m_flGlideTime = 0x24; // float32
            public const nint m_flDelay = 0x28; // float32
            public const nint m_flFeedback = 0x2C; // float32
            public const nint m_flGain = 0x30; // float32
            public const nint m_flModRate = 0x34; // float32
            public const nint m_flModDepth = 0x38; // float32
            public const nint m_filterType = 0x3C; // VMixFilterType_t
            public const nint m_flFrequency = 0x40; // float32
            public const nint m_flQ = 0x44; // float32
            public const nint m_flFilterGain = 0x48; // float32
            public const nint m_bAntialiasing = 0x4C; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFootEventConditionNode {
            public const nint m_phaseCondition = 0x100; // NmFootPhaseCondition_t
            public const nint m_bLimitSearchToSourceState = 0x101; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x102; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixGroupBox {
            public const nint m_color = 0x20; // Color
            public const nint m_bMovesNodes = 0x24; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBlend2DNode {
            public const nint m_blendSpace = 0x100; // CNmBlendSpace2D
            public const nint m_bAllowLooping = 0x160; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstIDNode {
            public const nint m_value = 0x100; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPostProcessData {
            public const nint m_layers = 0x8; // CUtlVector<CColorCorrectionLayer*>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetParameterReferenceNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatParameterReferenceNode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSubgraphSwitch {
            public const nint bUseDetailedPlugNames = 0x20; // bool
            public const nint defaultSubgraph = 0x28; // CSelectableSubgraph
            public const nint interpolationMode = 0x40; // VMixSubgraphSwitchInterpolationType_t
            public const nint bOnlyTailsOnFadeOut = 0x44; // bool
            public const nint flTransitionTime = 0x48; // float32
            public const nint nChannels = 0x4C; // int32
            public const nint subgraphs = 0x50; // CUtlVector<CSelectableSubgraph>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatEaseNode {
            public const nint m_easing = 0x100; // NmEasingOperation_t
            public const nint m_flEaseTime = 0x104; // float32
            public const nint m_bUseStartValue = 0x108; // bool
            public const nint m_flStartValue = 0x10C; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatComparisonNode {
            public const nint m_comparison = 0x100; // CNmFloatComparisonNode::Comparison_t
            public const nint m_flComparisonValue = 0x104; // float32
            public const nint m_flEpsilon = 0x108; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CTextureSheetDoc_Sequence {
            public const nint m_ChannelMode = 0x0; // SequenceChannelMode_t
            public const nint m_LoopMode = 0x4; // SequenceLoopMode_t
            public const nint m_AlphaCropMode = 0x8; // SequenceAlphaCropMode_t
            public const nint m_DecalParams = 0xC; // CTextureSheetDoc_SequenceDecalParams
            public const nint m_Frames = 0x30; // CUtlVector<CTextureSheetDoc_Frame>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocDataDictionary__IDSet_t {
            public const nint m_ID = 0x0; // V_uuid_t
            public const nint m_name = 0x10; // CUtlString
            public const nint m_graphIDs = 0x18; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixConvolution {
            public const nint m_desc = 0x20; // VMixConvolutionDesc_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_FloatCurve {
            public const nint m_ID = 0x10; // CUtlString
            public const nint m_curve = 0x18; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCachedFloatNode {
            public const nint m_mode = 0x100; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetResultNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_FrameSnap {
            public const nint m_frameSnapMode = 0x10; // NmFrameSnapEventMode_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFootstepEventPercentageThroughNode {
            public const nint m_phaseCondition = 0x100; // NmFootPhaseCondition_t
            public const nint m_priorityRule = 0x101; // NmEventPriorityRule_t
            public const nint m_bLimitSearchToSourceState = 0x102; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x103; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatSelectorNode__Option_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_flValue = 0x8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixFreeverb {
            public const nint m_flRoomSize = 0x20; // float32
            public const nint m_flDamp = 0x24; // float32
            public const nint m_flWidth = 0x28; // float32
            public const nint m_flLateReflections = 0x2C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIsExternalPoseSetNode {
            public const nint m_slotID = 0x100; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixToolGraphEntry {
            public const nint m_graph = 0x0; // CVMixToolGraph
            public const nint m_editorState = 0x48; // CGraphEditorState
            public const nint m_graphPreview = 0x70; // CGraphPreviewList
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_Legacy {
            public const nint m_eventClass = 0x10; // CUtlString
            public const nint m_KV = 0x18; // KeyValues3
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocClipNode {
            public const nint m_bSampleRootMotion = 0x200; // bool
            public const nint m_bAllowLooping = 0x201; // bool
            public const nint m_graphEvents = 0x208; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocSelectorNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterBaseNode {
            public const nint m_groupName = 0x100; // CUtlString
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFilterStage {
            public const nint m_filterType = 0x0; // CUtlString
            public const nint m_flFrequency = 0x8; // float32
            public const nint m_flQ = 0xC; // float32
            public const nint m_fldbGain = 0x10; // float32
            public const nint m_nFilterSlope = 0x14; // VMixFilterSlope_t
            public const nint m_bEnable = 0x15; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorNegateNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_RootMotion {
            public const nint m_flBlendTimeSeconds = 0x10; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDEventConditionNode {
            public const nint m_operator = 0x100; // NmEventConditionOperator_t
            public const nint m_searchRule = 0x101; // CNmGraphDocIDEventConditionNode::SearchRule_t
            public const nint m_bLimitSearchToSourceState = 0x102; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x103; // bool
            public const nint m_eventIDs = 0x108; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMixPropertyBase {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_Comment = 0x10; // CUtlString
            public const nint m_bActive = 0x18; // bool
            public const nint m_bSolo = 0x19; // bool
            public const nint m_bEditProperties = 0x1A; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDToFloatNode {
            public const nint m_defaultValue = 0x100; // float32
            public const nint m_mappings = 0x108; // CUtlVector<CNmGraphDocIDToFloatNode::Mapping_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatCurveNode {
            public const nint m_curve = 0x100; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmGraphDocPin_t {
            public const nint m_ID = 0x0; // V_uuid_t
            public const nint m_name = 0x10; // CUtlString
            public const nint m_type = 0x18; // NmGraphValueType_t
            public const nint m_bIsDynamicPin = 0x19; // bool
            public const nint m_bAllowMultipleOutConnections = 0x1A; // bool
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixBlendVsndsToImpulseResponse {
            public const nint m_flWeight0 = 0x20; // float32
            public const nint m_flWeight1 = 0x24; // float32
            public const nint m_flWeight2 = 0x28; // float32
            public const nint m_flWeight3 = 0x2C; // float32
            public const nint m_flWeight4 = 0x30; // float32
            public const nint m_flWeight5 = 0x34; // float32
            public const nint m_flWeight6 = 0x38; // float32
            public const nint m_flWeight7 = 0x3C; // float32
            public const nint m_flPreDelayMS0 = 0x40; // float32
            public const nint m_flPreDelayMS1 = 0x44; // float32
            public const nint m_flPreDelayMS2 = 0x48; // float32
            public const nint m_flPreDelayMS3 = 0x4C; // float32
            public const nint m_flPreDelayMS4 = 0x50; // float32
            public const nint m_flPreDelayMS5 = 0x54; // float32
            public const nint m_flPreDelayMS6 = 0x58; // float32
            public const nint m_flPreDelayMS7 = 0x5C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixRemapVsndToImpulseResponse {
            public const nint m_flPreDelayMS = 0x20; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskBlendNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDEventNode {
            public const nint m_defaultValue = 0x100; // CGlobalSymbol
            public const nint m_bLimitSearchToSourceState = 0x108; // bool
            public const nint m_priorityRule = 0x109; // NmEventPriorityRule_t
            public const nint m_bIgnoreInactiveBranchEvents = 0x10A; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocAndNode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocGlobalTransitionConduitNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocFollowBoneNode__CData {
            public const nint m_boneName = 0x8; // CUtlString
            public const nint m_followTargetBoneName = 0x10; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDParameterReferenceNode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocAnimationPoseNode__CData {
            public const nint m_clip = 0x8; // CUtlString
            public const nint m_variationTimeValue = 0x10; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVectorInfoNode {
            public const nint m_desiredInfo = 0x100; // CNmVectorInfoNode::Info_t
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocument__DebugParameterSet_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_boolValues = 0x8; // CUtlLeanVector<std::pair<CGlobalSymbol,bool>>
            public const nint m_floatValues = 0x18; // CUtlLeanVector<std::pair<CGlobalSymbol,float32>>
            public const nint m_IDValues = 0x28; // CUtlLeanVector<std::pair<CGlobalSymbol,CGlobalSymbol>>
            public const nint m_vectorValues = 0x38; // CUtlLeanVector<std::pair<CGlobalSymbol,Vector>>
            public const nint m_targetValues = 0x48; // CUtlLeanVector<std::pair<CGlobalSymbol,CNmTarget>>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatAngleMathNode {
            public const nint m_operation = 0x100; // CNmFloatAngleMathNode::Operation_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateNode__StateEvent_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_bIsEntry = 0x8; // bool
            public const nint m_bIsFullyInState = 0x9; // bool
            public const nint m_bIsExit = 0xA; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixToolGraph {
            public const nint m_graphDescData = 0x0; // CVMixGraphDescData
            public const nint m_editorNodes = 0x10; // CUtlVector<CVMixEditorNode>
            public const nint m_editorEdges = 0x28; // CUtlVector<CVMixEditorEdge>
            public const nint m_nPreviewNode = 0x40; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCurrentSyncEventIDNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixImpulseResponseInput {
            public const nint m_defaultValue = 0x20; // CUtlString
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetWarpNode {
            public const nint m_targetUpdateRule = 0x200; // CNmTargetWarpNode::TargetUpdateRule_t
            public const nint m_bAllowTargetUpdate = 0x201; // bool
            public const nint m_bAlignWithTargetAtLastWarpEvent = 0x202; // bool
            public const nint m_samplingMode = 0x203; // CNmRootMotionData::SamplingMode_t
            public const nint m_flSamplingPositionErrorThreshold = 0x204; // float32
            public const nint m_flMaxTangentLength = 0x208; // float32
            public const nint m_flLerpFallbackDistanceThreshold = 0x20C; // float32
            public const nint m_flTargetUpdateDistanceThresholdDegrees = 0x210; // float32
            public const nint m_flTargetUpdateAngleThresholdDegrees = 0x214; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBlend1DNode {
            public const nint m_blendSpace = 0x100; // CNmBlendSpace1D
            public const nint m_bAllowLooping = 0x118; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocVariationConstFloatNode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_EntityAttribute {
            public const nint m_target = 0x10; // CNmEventTargetEntity_t
            public const nint m_attributeName = 0x18; // CUtlString
            public const nint m_nValueType = 0x20; // CNmClipDocEvent_EntityAttribute_Type_t
            public const nint m_nIntValue = 0x24; // int32
            public const nint m_FloatValue = 0x28; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocVelocityBlendNode {
            public const nint m_bAllowLooping = 0x100; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixStereoDelay {
            public const nint m_flDelayLeft = 0x20; // float32
            public const nint m_flDelayRight = 0x24; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDControlParameterNode {
            public const nint m_previewStartValue = 0x118; // CGlobalSymbol
            public const nint m_expectedValues = 0x120; // CUtlVector<CGlobalSymbol>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixEffectChain {
            public const nint m_nChannels = 0x20; // int32
            public const nint m_effectName = 0x28; // CUtlString
            public const nint m_flXFade = 0x30; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocParameterizedSelectorNode__CData {
            public const nint m_optionWeights = 0x8; // CUtlVector<uint8>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEvent_MaterialAttribute {
            public const nint m_target = 0x10; // CNmEventTargetEntity_t
            public const nint m_attributeName = 0x18; // CUtlString
            public const nint m_x = 0x20; // CPiecewiseCurve
            public const nint m_y = 0x60; // CPiecewiseCurve
            public const nint m_z = 0xA0; // CPiecewiseCurve
            public const nint m_w = 0xE0; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocExternalPoseNode {
            public const nint m_bShouldSampleRootMotion = 0x100; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMixToolEditorData {
            public const nint m_nSelectedGraph = 0x0; // int32
            public const nint m_nSelectedEffectPreset = 0x4; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocOrientationWarpNode {
            public const nint m_offsetType = 0x100; // CNmGraphDocOrientationWarpNode::OffsetType_t
            public const nint m_samplingMode = 0x104; // CNmRootMotionData::SamplingMode_t
            public const nint m_bWarpTranslation = 0x105; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CColorBalanceColorCorrectionLayer {
            public const nint m_nRedCyanBalS = 0x28; // int32
            public const nint m_nRedCyanBalM = 0x2C; // int32
            public const nint m_nRedCyanBalH = 0x30; // int32
            public const nint m_nGreenMagentaBalS = 0x34; // int32
            public const nint m_nGreenMagentaBalM = 0x38; // int32
            public const nint m_nGreenMagentaBalH = 0x3C; // int32
            public const nint m_nBlueYellowBalS = 0x40; // int32
            public const nint m_nBlueYellowBalM = 0x44; // int32
            public const nint m_nBlueYellowBalH = 0x48; // int32
            public const nint m_bPreserveLuminosity = 0x4C; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixAutoFilter {
            public const nint m_desc = 0x20; // VMixAutoFilterDesc_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocReferencedGraphNode {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoneMaskSelectorNode {
            public const nint m_switchDynamically = 0x100; // bool
            public const nint m_options = 0x108; // CUtlVector<CGlobalSymbol>
            public const nint m_flBlendTimeSeconds = 0x120; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIDEventPercentageThroughNode {
            public const nint m_priorityRule = 0x100; // NmEventPriorityRule_t
            public const nint m_bLimitSearchToSourceState = 0x101; // bool
            public const nint m_bIgnoreInactiveBranchEvents = 0x102; // bool
            public const nint m_eventID = 0x108; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlCurve {
            public const nint m_flInputMin = 0x20; // float32
            public const nint m_flInputMax = 0x24; // float32
            public const nint m_flOutputMin = 0x28; // float32
            public const nint m_flOutputMax = 0x2C; // float32
            public const nint m_curve = 0x30; // CPiecewiseCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocVariationConstFloatNode__CData {
            public const nint m_flValue = 0x8; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSteamAudioHybridReverb {
            public const nint m_flReverbTimeLow = 0x20; // float32
            public const nint m_flReverbTimeMid = 0x24; // float32
            public const nint m_flReverbTimeHigh = 0x28; // float32
            public const nint m_vecReverbTime = 0x30; // CUtlVector<float32>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocExternalGraphNode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixPlateverb {
            public const nint m_flPrefilter = 0x20; // float32
            public const nint m_flInputDiffusion1 = 0x24; // float32
            public const nint m_flInputDiffusion2 = 0x28; // float32
            public const nint m_flDecay = 0x2C; // float32
            public const nint m_flDamp = 0x30; // float32
            public const nint m_flFeedbackDiffusion1 = 0x34; // float32
            public const nint m_flFeedbackDiffusion2 = 0x38; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocEntryStateOverrideConduitNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class NmVariation_t {
            public const nint m_ID = 0x0; // CGlobalSymbol
            public const nint m_parentID = 0x8; // CGlobalSymbol
            public const nint m_skeleton = 0x10; // CResourceName
            public const nint m_pUserData = 0xF0; // CNmGraphVariationUserData*
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocEntryStateOverrideConditionsNode {
            public const nint m_pinToStateMapping = 0x108; // CUtlVector<V_uuid_t>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateLayerDataNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocReferencedGraphNode__CData {
            public const nint m_variation = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmClipDocEventTrack {
            public const nint m_events = 0x0; // CUtlVector<CNmClipDocEvent*>
            public const nint m_eventClassName = 0x18; // CUtlString
            public const nint m_type = 0x20; // CNmClipDocEventTrack::Type_t
            public const nint m_bIsSyncTrack = 0x24; // bool
            public const nint m_bIsDisabled = 0x25; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocIsExternalGraphSlotFilledNode {
            public const nint m_slotID = 0x100; // CGlobalSymbol
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetPointNode {
            public const nint m_bIsWorldSpaceTarget = 0x100; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocFootIKNode__CData {
            public const nint m_leftEffectorBoneName = 0x8; // CUtlString
            public const nint m_rightEffectorBoneName = 0x10; // CUtlString
            public const nint m_flBlendTimeSeconds = 0x18; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocGlobalTransitionNode {
            public const nint m_stateID = 0x120; // V_uuid_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocCachedIDNode {
            public const nint m_mode = 0x100; // NmCachedValueMode_t
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixSum {
            public const nint m_flVolume1 = 0x20; // float32
            public const nint m_flVolume2 = 0x24; // float32
            public const nint m_flVolume3 = 0x28; // float32
            public const nint m_flVolume4 = 0x2C; // float32
            public const nint m_flVolume5 = 0x30; // float32
            public const nint m_flVolume6 = 0x34; // float32
            public const nint m_flVolume7 = 0x38; // float32
            public const nint m_flVolume8 = 0x3C; // float32
            public const nint m_channelName = 0x40; // CUtlString[8]
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFlowGraph {
            public const nint m_connections = 0x50; // CUtlVector<CNmGraphDocFlowGraph::Connection_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFogScatteringLayer {
            public const nint m_params = 0x28; // PostProcessingFogScatteringParameters_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CnmGraphDocConstFloatNode {
            public const nint m_flValue = 0x100; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocTargetOffsetNode {
            public const nint m_bIsBoneSpaceOffset = 0x100; // bool
            public const nint m_rotationOffset = 0x104; // QAngle
            public const nint m_translationOffset = 0x110; // Vector
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocBoolResultNode {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixControlStackInput {
            public const nint m_flDefaultValue = 0x20; // float32
            public const nint m_flMinRange = 0x24; // float32
            public const nint m_flMaxRange = 0x28; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateMachineNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBloomLayer {
            public const nint m_params = 0x28; // PostProcessingBloomParameters_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocFloatRangeComparisonNode {
            public const nint m_range = 0x100; // Range_t
            public const nint m_isInclusiveCheck = 0x108; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CMixDelayImpulseResponse {
            public const nint m_flPreDelayMS = 0x20; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmGraphDocStateMachineGraphNode {
        }
    }
}
