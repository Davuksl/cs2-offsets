// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

namespace CS2Dumper.Schemas {
    // Module: assetrename.dll
    // Class count: 380
    // Enum count: 35
    public static class AssetrenameDll {
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
        public enum SmartPropRadiusPlacementMode_t : uint {
            SPHERE = 0x0,
            CIRCLE = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum SmartPropPlaceMeshOrientationMode_t : uint {
            FIRST_OPEN_EDGE = 0x0,
            FIRST_CLOSED_EDGE = 0x1,
            UVMAP1 = 0x2,
            UVMAP2 = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum PickMode_t : uint {
            LARGEST_FIRST = 0x0,
            RANDOM = 0x1,
            ALL_IN_ORDER = 0x2
        }
        // Alignment: 4
        // Member count: 5
        public enum SmartPropDeformableOrientMode_t : uint {
            NONE = 0x0,
            FORWARD_NORMAL = 0x1,
            UP_NORMAL = 0x2,
            BACKWARD_NORMAL = 0x3,
            MAINTAIN_OFFSET = 0x4
        }
        // Alignment: 4
        // Member count: 7
        public enum Comparison_t : uint {
            COMPARISON_EQUALS = 0x0,
            COMPARISON_NOT_EQUALS = 0x1,
            COMPARISON_GREATER = 0x2,
            COMPARISON_GREATER_OR_EQUAL = 0x3,
            COMPARISON_LESS = 0x4,
            COMPARISON_LESS_OR_EQUAL = 0x5,
            COMPARISON_COUNT = 0x6
        }
        // Alignment: 4
        // Member count: 4
        public enum ConfigurationHandleShape_t : uint {
            NONE = 0x0,
            SQUARE = 0x1,
            CIRCLE = 0x2,
            DIAMOND = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum SmartPropChoiceSelectionMode_t : uint {
            RANDOM = 0x0,
            FIRST = 0x1,
            SPECIFIC = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SmartPropDistributionMode_t : uint {
            RANDOM = 0x0,
            REGULAR = 0x1
        }
        // Alignment: 1
        // Member count: 2
        public enum ComparisonValueType : byte {
            COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
            COMPARISONVALUETYPE_PARAMETER = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum DampedValueType : uint {
            FloatParameter = 0x0,
            VectorParameter = 0x1
        }
        // Alignment: 4
        // Member count: 5
        public enum StateValue : uint {
            TotalTranslation_SourceState = 0x0,
            TotalTranslation_TargetState = 0x1,
            SourceStateBlendWeight = 0x2,
            TargetStateBlendWeight = 0x3,
            Count = 0x4
        }
        // Alignment: 4
        // Member count: 3
        public enum SmartPropDirection_t : uint {
            FORWARD = 0x0,
            LEFT = 0x1,
            UP = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum SmartPropPathPositions_t : uint {
            ALL = 0x0,
            NTH = 0x1,
            START_AND_END = 0x2,
            CONTROL_POINTS = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum TargetWarpLinearRootMotionMode : uint {
            TargetWarpLinearRootMotionMode_Default = 0x0,
            TargetWarpLinearRootMotionMode_FollowPath = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum FinishedConditionOption : uint {
            FinishedConditionOption_OnFinished = 0x0,
            FinishedConditionOption_OnAlmostFinished = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum EAnimConflictIndex_t : uint {
            EAC_FIRST = 0x0,
            EAC_SECOND = 0x1,
            EAC_COUNT = 0x2,
            EAC_NONE = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum SmartPropDeformableAttachMode_t : uint {
            RELATIVE = 0x0,
            SNAP = 0x1,
            STIFFEN = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum AnimConflictType_t : uint {
            NONE = 0x0,
            ID = 0x1,
            NAME = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum StateComparisonValueType : uint {
            StateComparisonValue_FixedValue = 0x0,
            StateComparisonValue_StateValue = 0x1,
            StateComparisonValue_Parameter = 0x2
        }
        // Alignment: 4
        // Member count: 6
        public enum SmartPropDetailFadeLevel_t : uint {
            NONE = 0x0,
            MOST_AGGRESSIVE = 0x1,
            MORE_AGGRESSIVE = 0x2,
            NORMAL = 0x3,
            LESS_AGGRESSIVE = 0x4,
            LEAST_AGGRESSIVE = 0x5
        }
        // Alignment: 4
        // Member count: 3
        public enum SmartPropSpace_t : uint {
            WORLD = 0x0,
            OBJECT = 0x1,
            ELEMENT = 0x2
        }
        // Alignment: 4
        // Member count: 3
        public enum ApplyColorMode_t : uint {
            MULTIPLY_OBJECT = 0x0,
            MULTIPLY_CURRENT = 0x1,
            REPLACE = 0x2
        }
        // Alignment: 4
        // Member count: 2
        public enum SolveIKChainAnimNodeSettingSource : uint {
            SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
            SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum SmartPropGridOriginBasis_t : uint {
            CENTER = 0x0,
            CORNER = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum EAnimValueSource : uint {
            Constant = 0x0,
            Parameter = 0x1
        }
        // Alignment: 4
        // Member count: 3
        public enum SingleFrameSelection : uint {
            FirstFrame = 0x0,
            LastFrame = 0x1,
            SpecificFrame = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum SmartPropColorSelectionMode_t : uint {
            SPECIFIC_COLOR = 0x0,
            GRADIENT_RANDOM = 0x1,
            GRADIENT_RANDOM_STOP = 0x2,
            GRADIENT_LOCATION = 0x3
        }
        // Alignment: 4
        // Member count: 2
        public enum SmartPropGridPlacementMode_t : uint {
            SEGMENT = 0x0,
            FILL = 0x1
        }
        // Alignment: 4
        // Member count: 2
        public enum RemapValueType : uint {
            FloatParameter = 0x0,
            VectorParameter = 0x1
        }
        // Alignment: 4
        // Member count: 4
        public enum ScaleMode_t : uint {
            NONE = 0x0,
            SCALE_END_TO_FIT = 0x1,
            SCALE_EQUALLY = 0x2,
            SCALE_MAXIMIZE = 0x3
        }
        // Alignment: 4
        // Member count: 4
        public enum TraceNoHitResult_t : uint {
            NOTHING = 0x0,
            DISCARD = 0x1,
            MOVE_TO_START = 0x2,
            MOVE_TO_END = 0x3
        }
        // Alignment: 4
        // Member count: 3
        public enum SelectionSource_t : uint {
            SelectionSource_Bool = 0x0,
            SelectionSource_Enum = 0x1,
            SelectionSource_Tag = 0x2
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
        // Field count: 1
        public static class CPulseCell_LimitCount__Criteria_t {
            public const nint m_bLimitCountPasses = 0x0; // bool
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
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StopAtGoalNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flOuterRadius = 0x48; // float32
            public const nint m_flInnerRadius = 0x4C; // float32
            public const nint m_flMaxScale = 0x50; // float32
            public const nint m_flMinScale = 0x54; // float32
            public const nint m_damping = 0x58; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ComponentState {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeTintColor
        public static class CSmartPropTransformOperation {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SequenceNode {
            public const nint m_tagSpans = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_paramSpans = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
            public const nint m_sequenceName = 0xA0; // CUtlString
            public const nint m_playbackSpeed = 0xA8; // float32
            public const nint m_bLoop = 0xAC; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimScriptComponent {
            public const nint m_sName = 0x38; // CUtlString
            public const nint m_scriptFilename = 0x40; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_ChoiceWeight {
            public const nint m_flWeight = 0x48; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CFootLockItem {
            public const nint m_footName = 0x0; // CUtlString
            public const nint m_targetBoneName = 0x8; // CUtlString
            public const nint m_ikChainName = 0x10; // CUtlString
            public const nint m_disableTagName = 0x18; // CGlobalSymbol
            public const nint m_disableTagID = 0x20; // AnimTagID
            public const nint m_flMaxRotationLeft = 0x24; // float32
            public const nint m_flMaxRotationRight = 0x28; // float32
            public const nint m_footstepLandedTagName = 0x30; // CGlobalSymbol
            public const nint m_footstepLandedTag = 0x38; // AnimTagID
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CRemapValueItem {
            public const nint m_valueType = 0x0; // RemapValueType
            public const nint m_floatParamNameIn = 0x8; // CUtlString
            public const nint m_floatParamNameOut = 0x10; // CUtlString
            public const nint m_vectorParamNameIn = 0x18; // CUtlString
            public const nint m_vectorParamNameOut = 0x20; // CUtlString
            public const nint m_floatParamIn = 0x28; // AnimParamID
            public const nint m_floatParamOut = 0x2C; // AnimParamID
            public const nint m_vectorParamIn = 0x30; // AnimParamID
            public const nint m_vectorParamOut = 0x34; // AnimParamID
            public const nint m_flMinInputValue = 0x38; // float32
            public const nint m_flMaxInputValue = 0x3C; // float32
            public const nint m_flMinOutputValue = 0x40; // float32
            public const nint m_flMaxOutputValue = 0x44; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateAction {
            public const nint m_pAction = 0x8; // CSmartPtr<CAnimGraphDoc_Action>
            public const nint m_eBehavior = 0x10; // StateActionBehavior
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSmartPropOperation_Trace {
            public const nint m_Origin = 0x50; // CSmartPropAttributeVector
            public const nint m_OriginSpace = 0x90; // CSmartPropAttributeCoordinateSpace
            public const nint m_flOriginOffset = 0xD0; // CSmartPropAttributeFloat
            public const nint m_flSurfaceUpInfluence = 0x110; // CSmartPropAttributeFloat
            public const nint m_nNoHitResult = 0x150; // CSmartPropAttributeTraceNoHit
            public const nint m_bIgnoreToolMaterials = 0x190; // CSmartPropAttributeBool
            public const nint m_bIgnoreSky = 0x1D0; // CSmartPropAttributeBool
            public const nint m_bIgnoreNoDraw = 0x210; // CSmartPropAttributeBool
            public const nint m_bIgnoreTranslucent = 0x250; // CSmartPropAttributeBool
            public const nint m_bIgnoreModels = 0x290; // CSmartPropAttributeBool
            public const nint m_bIgnoreEntities = 0x2D0; // CSmartPropAttributeBool
            public const nint m_bIgnoreCables = 0x310; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SaveScale {
            public const nint m_VariableName = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PlaceInSphere {
            public const nint m_PlacementMode = 0xA0; // CSmartPropAttributeRadiusPlacementMode
            public const nint m_DistributionMode = 0xE0; // CSmartPropAttributeDistributionMode
            public const nint m_flRandomness = 0x120; // CSmartPropAttributeFloat
            public const nint m_vPlaneUpDirection = 0x160; // CSmartPropAttributeVector
            public const nint m_nCountMin = 0x1A0; // CSmartPropAttributeInt
            public const nint m_nCountMax = 0x1E0; // CSmartPropAttributeInt
            public const nint m_flPositionRadiusInner = 0x220; // CSmartPropAttributeFloat
            public const nint m_flPositionRadiusOuter = 0x260; // CSmartPropAttributeFloat
            public const nint m_bAlignOrientation = 0x2A0; // CSmartPropAttributeBool
            public const nint m_vAlignDirection = 0x2E0; // CSmartPropAttributeVector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StanceScaleNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_paramName = 0x48; // CUtlString
            public const nint m_param = 0x50; // AnimParamID
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeChoiceSelectionMode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_CreateLocator {
            public const nint m_LocatorName = 0x50; // CUtlString
            public const nint m_vOffset = 0x58; // CSmartPropAttributeVector
            public const nint m_flDisplayScale = 0x98; // CSmartPropAttributeFloat
            public const nint m_bConfigurable = 0xD8; // CSmartPropAttributeBool
            public const nint m_bAllowTranslation = 0x118; // CSmartPropAttributeBool
            public const nint m_bAllowRotation = 0x158; // CSmartPropAttributeBool
            public const nint m_bAllowScale = 0x198; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_EdgeAngleCriteria {
            public const nint m_flMinAngle = 0x48; // CSmartPropAttributeFloat
            public const nint m_flMaxAngle = 0x88; // CSmartPropAttributeFloat
            public const nint m_bInvert = 0xC8; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeGridOriginMode {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ContainerNodeBase {
            public const nint m_inputNodeID = 0x48; // AnimNodeID
            public const nint m_outputNodeID = 0x4C; // AnimNodeID
            public const nint m_inputConnectionMap = 0x50; // CUtlHashtable<AnimNodeOutputID,CAnimGraphDoc_NodeConnection>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_String {
            public const nint m_DefaultValue = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_NodeList {
            public const nint m_nodes = 0x10; // CUtlVector<CAnimGraphDoc_Node*>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_Layout2DGrid {
            public const nint m_flWidth = 0xA0; // CSmartPropAttributeFloat
            public const nint m_flLength = 0xE0; // CSmartPropAttributeFloat
            public const nint m_bVerticalLength = 0x120; // CSmartPropAttributeBool
            public const nint m_GridArrangement = 0x160; // CSmartPropAttributeGridPlacementMode
            public const nint m_GridOriginMode = 0x1A0; // CSmartPropAttributeGridOriginMode
            public const nint m_nCountW = 0x1E0; // CSmartPropAttributeInt
            public const nint m_nCountL = 0x220; // CSmartPropAttributeInt
            public const nint m_flSpacingWidth = 0x260; // CSmartPropAttributeFloat
            public const nint m_flSpacingLength = 0x2A0; // CSmartPropAttributeFloat
            public const nint m_bAlternateShift = 0x2E0; // CSmartPropAttributeBool
            public const nint m_flAlternateShiftWidth = 0x320; // CSmartPropAttributeFloat
            public const nint m_flAlternateShiftLength = 0x360; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_MotionItem {
            public const nint m_paramManager = 0x28; // CAnimGraphDoc_MotionParameterManager
            public const nint m_blockSpans = 0x50; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_tagSpans = 0x68; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_paramSpans = 0x80; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
            public const nint m_bLoop = 0xA0; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_ScaleMode {
            public const nint m_DefaultValue = 0x38; // ScaleMode_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_MaterialGroup {
            public const nint m_sModelName = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_DefaultValue = 0x118; // CModelMaterialGroupName
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_DirectPlaybackNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_bFinishEarly = 0x48; // bool
            public const nint m_bResetOnFinish = 0x49; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_RandomColorTintColor {
            public const nint m_SelectionMode = 0x50; // CSmartPropAttributeChoiceSelectionMode
            public const nint m_ColorPosition = 0x90; // CSmartPropAttributeFloat
            public const nint m_Mode = 0xD0; // ApplyColorMode_t
            public const nint m_Gradient = 0xD8; // CColorGradient
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootPinningNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_items = 0x48; // CUtlVector<CFootPinningItem>
            public const nint m_eTimingSource = 0x60; // FootPinningTimingSource
            public const nint m_flBlendTime = 0x64; // float32
            public const nint m_flLockBreakDistance = 0x68; // float32
            public const nint m_flMaxLegStraightAmount = 0x6C; // float32
            public const nint m_bApplyFootRotationLimits = 0x70; // bool
            public const nint m_hipBoneName = 0x78; // CUtlString
            public const nint m_bApplyLegTwistLimits = 0x80; // bool
            public const nint m_flMaxLegTwist = 0x84; // float32
            public const nint m_bResetChild = 0x88; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FollowAttachmentNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_boneName = 0x48; // CUtlString
            public const nint m_attachmentName = 0x50; // CUtlString
            public const nint m_bMatchTranslation = 0x58; // bool
            public const nint m_bMatchRotation = 0x59; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_RandomRotation {
            public const nint m_vRandomRotationMin = 0x50; // CSmartPropAttributeAngles
            public const nint m_vRandomRotationMax = 0x90; // CSmartPropAttributeAngles
            public const nint m_vSnapIncrement = 0xD0; // CSmartPropAttributeAngles
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SolveIKChainNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_IkChains = 0x48; // CUtlVector<CSolveIKChainAnimNodeChainData>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_IsValid {
            public const nint m_Expression = 0x48; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FollowTargetNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_boneName = 0x48; // CUtlString
            public const nint m_TargetSettings = 0x50; // IKTargetSettings_t
            public const nint m_bMatchTargetOrientation = 0x78; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Condition {
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
        public static class CSmartPropOperation_RestoreState {
            public const nint m_StateName = 0x50; // CSmartPropAttributeStateName
            public const nint m_bDiscardIfUknown = 0x90; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SetPosition {
            public const nint m_vPosition = 0x50; // CSmartPropAttributeVector
            public const nint m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ClipDataManager {
            public const nint m_itemTable = 0x10; // CUtlHashtable<CUtlString,CSmartPtr<CAnimGraphDoc_ClipData>>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_ChoiceSelectionMode {
            public const nint m_DefaultValue = 0x38; // SmartPropChoiceSelectionMode_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeGridPlacementMode {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_PathHelperNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flStoppingRadius = 0x48; // float32
            public const nint m_flStoppingSpeedScale = 0x4C; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootCycleMetric {
            public const nint m_feet = 0x28; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDampedValueComponent {
            public const nint m_name = 0x38; // CUtlString
            public const nint m_items = 0x40; // CUtlVector<CDampedValueItem>
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
        public static class CSmartPropOperation_RotateTowards {
            public const nint m_vOriginPos = 0x50; // CSmartPropAttributeVector
            public const nint m_vTargetPos = 0x90; // CSmartPropAttributeVector
            public const nint m_vUpPos = 0xD0; // CSmartPropAttributeVector
            public const nint m_flWeight = 0x110; // CSmartPropAttributeFloat
            public const nint m_OriginSpace = 0x150; // CSmartPropAttributeCoordinateSpace
            public const nint m_TargetSpace = 0x190; // CSmartPropAttributeCoordinateSpace
            public const nint m_UpSpace = 0x1D0; // CSmartPropAttributeCoordinateSpace
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ParameterCondition {
            public const nint m_paramName = 0x28; // CUtlString
            public const nint m_paramID = 0x30; // AnimParamID
            public const nint m_comparisonOp = 0x34; // Comparison_t
            public const nint m_comparisonValue = 0x38; // CAnimVariant
            public const nint m_comparisonString = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SlowDownOnSlopesNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flSlowDownStrength = 0x48; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_NodeBlend2DItem {
            public const nint m_inputConnection = 0x30; // CAnimGraphDoc_NodeConnection
            public const nint m_name = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimConflictBase {
            public const nint m_sConflictDesc = 0x18; // CUtlString
            public const nint m_nResolveIdx = 0x20; // int32
            public const nint m_conflictData = 0x28; // CAnimConflictInfo_t[2]
            public const nint m_eConflictType = 0x68; // AnimConflictType_t
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSmartPropChoiceOption {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_DisplayName = 0x8; // CUtlString
            public const nint m_VariableValues = 0x10; // CUtlVector<CSmartPropAttributeVariableValue>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_MaterialOverride {
            public const nint m_bClearCurrentOverrides = 0x50; // CSmartPropAttributeBool
            public const nint m_MaterialReplacements = 0x90; // CUtlVector<CSmartPropMaterialReplacement>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_GridPlacementMode {
            public const nint m_DefaultValue = 0x38; // SmartPropGridPlacementMode_t
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_MoverNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_bApplyMovement = 0x48; // bool
            public const nint m_moveVectorParamName = 0x50; // CUtlString
            public const nint m_moveVectorParam = 0x58; // AnimParamID
            public const nint m_bOrientMovement = 0x5C; // bool
            public const nint m_moveHeadingParamName = 0x60; // CUtlString
            public const nint m_moveHeadingParam = 0x68; // AnimParamID
            public const nint m_bAdditive = 0x6C; // bool
            public const nint m_bTurnToFace = 0x6D; // bool
            public const nint m_facingTarget = 0x70; // AnimValueSource
            public const nint m_paramName = 0x78; // CUtlString
            public const nint m_param = 0x80; // AnimParamID
            public const nint m_bLimitOnly = 0x84; // bool
            public const nint m_flTurnToFaceOffset = 0x88; // float32
            public const nint m_flTurnToFaceLimit = 0x8C; // float32
            public const nint m_damping = 0x90; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimParameterConflict {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeColorSelectionMode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Node {
            public const nint m_sName = 0x20; // CUtlString
            public const nint m_vecPosition = 0x28; // Vector2D
            public const nint m_nNodeID = 0x30; // AnimNodeID
            public const nint m_bDebugThisNode = 0x34; // bool
            public const nint m_networkMode = 0x38; // AnimNodeNetworkMode
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SaveSurfaceNormal {
            public const nint m_CoordinateSpace = 0x50; // CSmartPropAttributeCoordinateSpace
            public const nint m_VariableName = 0x90; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MVDataOutlinerNameExpr
        public static class CSmartPropVariable {
            public const nint m_VariableName = 0x10; // CUtlString
            public const nint m_bExposeAsParameter = 0x18; // bool
            public const nint m_DisplayName = 0x20; // CUtlString
            public const nint m_HideExpression = 0x28; // CUtlString
            public const nint m_ReadOnlyExpression = 0x30; // CUtlString
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BlendNode {
            public const nint m_children = 0x50; // CUtlVector<CBlendNodeChild>
            public const nint m_blendValueSource = 0x68; // AnimValueSource
            public const nint m_paramName = 0x70; // CUtlString
            public const nint m_param = 0x78; // AnimParamID
            public const nint m_blendKeyType = 0x7C; // BlendKeyType
            public const nint m_bLockBlendOnReset = 0x80; // bool
            public const nint m_bSyncCycles = 0x81; // bool
            public const nint m_bLoop = 0x82; // bool
            public const nint m_bLockWhenWaning = 0x83; // bool
            public const nint m_bIsAngle = 0x84; // bool
            public const nint m_damping = 0x88; // CAnimInputDamping
            public const nint m_eLinearRootMotionBlendMode = 0xA0; // LinearRootMotionBlendMode_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_JiggleBoneNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_items = 0x48; // CUtlVector<CJiggleBoneItem>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_LeanMatrixNode {
            public const nint m_sequenceName = 0x48; // CUtlString
            public const nint m_flMaxValue = 0x50; // float32
            public const nint m_blendSource = 0x54; // AnimVectorSource
            public const nint m_paramName = 0x58; // CUtlString
            public const nint m_param = 0x60; // AnimParamID
            public const nint m_verticalAxisDirection = 0x64; // Vector
            public const nint m_horizontalAxisDirection = 0x70; // Vector
            public const nint m_damping = 0x80; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_VertexCountCriteria {
            public const nint m_nTargetVertexCount = 0x48; // CSmartPropAttributeInt
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ResetScale {
            public const nint m_bIgnoreObjectScale = 0x50; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 38
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootLockNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_items = 0x48; // CUtlVector<CFootLockItem>
            public const nint m_hipBoneName = 0x60; // CUtlString
            public const nint m_flBlendTime = 0x68; // float32
            public const nint m_bApplyFootRotationLimits = 0x6C; // bool
            public const nint m_bResetChild = 0x6D; // bool
            public const nint m_ikSolverType = 0x70; // IKSolverType
            public const nint m_bAlwaysUseFallbackHinge = 0x74; // bool
            public const nint m_bApplyLegTwistLimits = 0x75; // bool
            public const nint m_flMaxLegTwist = 0x78; // float32
            public const nint m_flStrideCurveScale = 0x7C; // float32
            public const nint m_flStrideCurveLimitScale = 0x80; // float32
            public const nint m_bEnableVerticalCurvedPaths = 0x84; // bool
            public const nint m_bModulateStepHeight = 0x85; // bool
            public const nint m_flStepHeightIncreaseScale = 0x88; // float32
            public const nint m_flStepHeightDecreaseScale = 0x8C; // float32
            public const nint m_bEnableHipShift = 0x90; // bool
            public const nint m_flHipShiftScale = 0x94; // float32
            public const nint m_hipShiftDamping = 0x98; // CAnimInputDamping
            public const nint m_bApplyTilt = 0xB0; // bool
            public const nint m_flTiltPlanePitchSpringStrength = 0xB4; // float32
            public const nint m_flTiltPlaneRollSpringStrength = 0xB8; // float32
            public const nint m_bEnableLockBreaking = 0xBC; // bool
            public const nint m_flLockBreakTolerance = 0xC0; // float32
            public const nint m_flLockBreakBlendTime = 0xC4; // float32
            public const nint m_bEnableStretching = 0xC8; // bool
            public const nint m_flMaxStretchAmount = 0xCC; // float32
            public const nint m_flStretchExtensionScale = 0xD0; // float32
            public const nint m_bEnableGroundTracing = 0xD4; // bool
            public const nint m_flTraceAngleBlend = 0xD8; // float32
            public const nint m_bApplyHipDrop = 0xDC; // bool
            public const nint m_flMaxFootHeight = 0xE0; // float32
            public const nint m_flExtensionScale = 0xE4; // float32
            public const nint m_hipDampingSettings = 0xE8; // CAnimInputDamping
            public const nint m_bEnableRootHeightDamping = 0x100; // bool
            public const nint m_rootHeightDamping = 0x108; // CAnimInputDamping
            public const nint m_flMaxRootHeightOffset = 0x120; // float32
            public const nint m_flMinRootHeightOffset = 0x124; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeDistributionMode {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRemapValueComponent {
            public const nint m_name = 0x38; // CUtlString
            public const nint m_items = 0x40; // CUtlVector<CRemapValueItem>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_EmitTagAction {
            public const nint m_tag = 0x28; // AnimTagID
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLookComponent {
            public const nint m_bNetworkLookTarget = 0x38; // bool
            public const nint m_lookHeadingID = 0x3C; // AnimParamID
            public const nint m_lookHeadingNormalizedID = 0x40; // AnimParamID
            public const nint m_lookHeadingVelocityID = 0x44; // AnimParamID
            public const nint m_lookPitchID = 0x48; // AnimParamID
            public const nint m_lookDistanceID = 0x4C; // AnimParamID
            public const nint m_lookDirectionID = 0x50; // AnimParamID
            public const nint m_lookTargetID = 0x54; // AnimParamID
            public const nint m_lookTargetWorldSpaceID = 0x58; // AnimParamID
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_PathMotor {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_TagManager {
            public const nint m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StateTransition {
            public const nint m_conditionList = 0x28; // CAnimGraphDoc_ConditionContainer
            public const nint m_srcState = 0x58; // AnimStateID
            public const nint m_destState = 0x5C; // AnimStateID
            public const nint m_sComment = 0x60; // CUtlString
            public const nint m_bDisabled = 0x68; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeRadiusPlacementMode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CFootStepTriggerItem {
            public const nint m_footName = 0x0; // CUtlString
            public const nint m_triggerPhase = 0x8; // StepPhase
            public const nint m_tagNames = 0x10; // CUtlVector<CGlobalSymbol>
            public const nint m_tagIDs = 0x28; // CUtlVector<AnimTagID>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StateMachine {
            public const nint m_states = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_State>>
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TwoBoneIKNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_ikChainName = 0x48; // CUtlString
            public const nint m_bAutoDetectHingeAxis = 0x50; // bool
            public const nint m_endEffectorType = 0x54; // IkEndEffectorType
            public const nint m_endEffectorAttachmentName = 0x58; // CUtlString
            public const nint m_targetType = 0x60; // IkTargetType
            public const nint m_attachmentName = 0x68; // CUtlString
            public const nint m_targetBoneName = 0x70; // CUtlString
            public const nint m_targetParamName = 0x78; // CUtlString
            public const nint m_targetParam = 0x80; // AnimParamID
            public const nint m_bMatchTargetOrientation = 0x84; // bool
            public const nint m_rotationParamName = 0x88; // CUtlString
            public const nint m_rotationParam = 0x90; // AnimParamID
            public const nint m_bConstrainTwist = 0x94; // bool
            public const nint m_flMaxTwist = 0x98; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_MotionItemGroup {
            public const nint m_motions = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItem>>
            public const nint m_name = 0x38; // CUtlString
            public const nint m_conditions = 0x40; // CAnimGraphDoc_ConditionContainer
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ComponentStateTransition {
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
        public static class CSmartPropOperation_SetVariable {
            public const nint m_VariableValue = 0x50; // CSmartPropAttributeVariableValue
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_DistributionMode {
            public const nint m_DefaultValue = 0x38; // SmartPropDistributionMode_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_InputStreamNode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_Scale {
            public const nint m_flScale = 0x50; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SetTintColor {
            public const nint m_SelectionMode = 0x50; // CSmartPropAttributeChoiceSelectionMode
            public const nint m_ColorSelection = 0x90; // CSmartPropAttributeInt
            public const nint m_Mode = 0xD0; // CSmartPropAttributeApplyColorMode
            public const nint m_ColorChoices = 0x110; // CUtlVector<ColorChoice_t>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_RigidBodyWeightList {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_weights = 0x10; // CUtlVector<CRigidBodyWeight>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ChoreoNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_RootNode {
            public const nint m_inputConnection = 0x50; // CAnimGraphDoc_NodeConnection
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_ApplyColorMode {
            public const nint m_DefaultValue = 0x38; // ApplyColorMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SaveColor {
            public const nint m_VariableName = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootAdjustmentNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_facingTargetParam = 0x48; // CUtlString
            public const nint m_facingTarget = 0x50; // AnimParamID
            public const nint m_bResetChild = 0x54; // bool
            public const nint m_bAnimationDriven = 0x55; // bool
            public const nint m_baseClipName = 0x58; // CUtlString
            public const nint m_clips = 0x60; // CUtlVector<CUtlString>
            public const nint m_flTurnTimeMin = 0x78; // float32
            public const nint m_flTurnTimeMax = 0x7C; // float32
            public const nint m_flStepHeightMax = 0x80; // float32
            public const nint m_flStepHeightMaxAngle = 0x84; // float32
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_DampedPathMotor {
            public const nint m_flAnticipationTime = 0x38; // float32
            public const nint m_flMinSpeedScale = 0x3C; // float32
            public const nint m_anticipationPosParamName = 0x40; // CUtlString
            public const nint m_anticipationPosParam = 0x48; // AnimParamID
            public const nint m_anticipationHeadingParamName = 0x50; // CUtlString
            public const nint m_anticipationHeadingParam = 0x58; // AnimParamID
            public const nint m_flSpringConstant = 0x5C; // float32
            public const nint m_flMinSpringTension = 0x60; // float32
            public const nint m_flMaxSpringTension = 0x64; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CJiggleBoneItem {
            public const nint m_boneName = 0x0; // CUtlString
            public const nint m_flSpringStrength = 0x8; // float32
            public const nint m_flSimRateFPS = 0xC; // float32
            public const nint m_flDamping = 0x10; // float32
            public const nint m_eSimSpace = 0x14; // JiggleBoneSimSpace
            public const nint m_vBoundsMaxLS = 0x18; // Vector
            public const nint m_vBoundsMinLS = 0x24; // Vector
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SetMateraialGroupChoice {
            public const nint m_VariableName = 0x50; // CUtlString
            public const nint m_SelectionMode = 0x58; // CSmartPropAttributeChoiceSelectionMode
            public const nint m_ChoiceSelection = 0x98; // CSmartPropAttributeInt
            public const nint m_MaterialGroupChoices = 0xD8; // CUtlVector<MaterialGroupChoice_t>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_VariableValue {
            public const nint m_VariableComparison = 0x50; // CSmartPropVariableComparison
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeApplyColorMode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSlopeComponent {
            public const nint m_flTraceDistance = 0x38; // float32
            public const nint m_slopeAngleID = 0x3C; // AnimParamID
            public const nint m_slopeHeadingID = 0x40; // AnimParamID
            public const nint m_slopeAngleSideID = 0x44; // AnimParamID
            public const nint m_slopeAngleFrontID = 0x48; // AnimParamID
            public const nint m_slopeNormalID = 0x4C; // AnimParamID
            public const nint m_slopeNormal_WorldSpaceID = 0x50; // AnimParamID
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SaveDirection {
            public const nint m_DirectionVector = 0x50; // CSmartPropAttributeDirection
            public const nint m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
            public const nint m_VariableName = 0xD0; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StateMachineNode {
            public const nint m_bBlockWaningTags = 0x68; // bool
            public const nint m_bLockStateWhenWaning = 0x69; // bool
            public const nint m_bResetWhenActivated = 0x6A; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_GridOriginMode {
            public const nint m_DefaultValue = 0x38; // SmartPropGridOriginBasis_t
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataOutlinerAssetNameExpr
        public static class CSmartPropElement_Model {
            public const nint m_sModelName = 0x88; // CSmartPropAttributeModelName
            public const nint m_MaterialGroupName = 0xC8; // CSmartPropAttributeMaterialGroup
            public const nint m_bDetailObject = 0x108; // CSmartPropAttributeBool
            public const nint m_vModelScale = 0x148; // CSmartPropAttributeVector
            public const nint m_flUniformModelScale = 0x188; // CSmartPropAttributeFloat
            public const nint m_nLodLevel = 0x1C8; // CSmartPropAttributeInt
            public const nint m_SurfacePropertyOverride = 0x208; // CSmartPropAttributeSurfaceProperty
            public const nint m_nDetailObjectFadeLevel = 0x248; // SmartPropDetailFadeLevel_t
            public const nint m_bCastShadows = 0x250; // CSmartPropAttributeBool
            public const nint m_bRigidDeformation = 0x290; // CSmartPropAttributeBool
            public const nint m_bDisableDynamicDeformable = 0x2D0; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_MaterialCriteria {
            public const nint m_material = 0x48; // CSmartPropAttributeMaterialName
            public const nint m_bInvert = 0x88; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CommentNode {
            public const nint m_commentText = 0x40; // CUtlString
            public const nint m_size = 0x48; // Vector2D
            public const nint m_color = 0x50; // Color
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Angles {
            public const nint m_DefaultValue = 0x38; // QAngle
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeOrientationMode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSmartPropOperation {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRagdollComponent {
            public const nint m_weightLists = 0x38; // CUtlVector<CAnimGraphDoc_RigidBodyWeightList>
            public const nint m_flSpringFrequencyMin = 0x50; // float32
            public const nint m_flSpringFrequencyMax = 0x54; // float32
            public const nint m_flMaxStretch = 0x58; // float32
            public const nint m_bSolidCollisionAtZeroWeight = 0x5C; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropVariable_Model {
            public const nint m_DefaultValue = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_EndCap {
            public const nint m_bStart = 0x48; // CSmartPropAttributeBool
            public const nint m_bEnd = 0x88; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeProjectVector3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
            public const nint m_InputVectorA = 0x98; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceA = 0xD8; // CSmartPropAttributeCoordinateSpace
            public const nint m_InputVectorB = 0x118; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceB = 0x158; // CSmartPropAttributeCoordinateSpace
            public const nint m_bPlane = 0x198; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeScaleMode {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_StateList {
            public const nint m_states = 0x10; // CUtlVector<CAnimGraphDoc_State*>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ExpressionAction {
            public const nint m_paramName = 0x28; // CUtlString
            public const nint m_param = 0x30; // AnimParamID
            public const nint m_expression = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_Expression {
            public const nint m_Expression = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeDotProduct3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_InputVectorA = 0x58; // CSmartPropAttributeVector
            public const nint m_InputVectorB = 0x98; // CSmartPropAttributeVector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Bool {
            public const nint m_DefaultValue = 0x38; // bool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CycleControlClipNode {
            public const nint m_tagSpans = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_sequenceName = 0x70; // CUtlString
            public const nint m_valueSource = 0x78; // AnimValueSource
            public const nint m_paramName = 0x80; // CUtlString
            public const nint m_param = 0x88; // AnimParamID
            public const nint m_bLockWhenWaning = 0x8C; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Vector2D {
            public const nint m_DefaultValue = 0x38; // Vector2D
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
        public static class CSmartPropOperation_RigidDeformation {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_Group {
            public const nint m_Children = 0x88; // CUtlVector<CSmartPropElement*>
        }
        // Parent: None
        // Field count: 12
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_State {
            public const nint m_transitions = 0x28; // CUtlVector<CSmartPtr<CAnimGraphDoc_StateTransition>>
            public const nint m_actions = 0x40; // CUtlVector<CStateAction>
            public const nint m_name = 0x58; // CUtlString
            public const nint m_sComment = 0x60; // CUtlString
            public const nint m_stateID = 0x68; // AnimStateID
            public const nint m_position = 0x6C; // Vector2D
            public const nint m_bIsStartState = 0x74; // bool
            public const nint m_bIsEndtState = 0x75; // bool
            public const nint m_bIsInputToGraph = 0x76; // bool
            public const nint m_bIsPassthrough = 0x77; // bool
            public const nint m_bIsPassthroughRootMotion = 0x78; // bool
            public const nint m_bPreEvaluatePassthroughTransitionPath = 0x79; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CDemoSettingsComponent {
            public const nint m_settings = 0x38; // CAnimDemoCaptureSettings
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_MotionParameterManager {
            public const nint m_params = 0x10; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionParameter>>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataOutlinerAssetNameExpr
        public static class CSmartPropElement_SmartProp {
            public const nint m_sSmartProp = 0x88; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCSmartProp>>
            public const nint m_bLocalEvaluationState = 0x168; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SpeedScaleNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_paramName = 0x48; // CUtlString
            public const nint m_param = 0x50; // AnimParamID
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_GroupNode {
            public const nint m_nodeMgr = 0x70; // CAnimGraphDoc_NodeManager
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Vector4D {
            public const nint m_DefaultValue = 0x38; // Vector4D
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_AimCameraNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_ikChain = 0x48; // CUtlString
            public const nint m_cameraJointName = 0x50; // CUtlString
            public const nint m_pelvisJointName = 0x58; // CUtlString
            public const nint m_clavicleLeftJointName = 0x60; // CUtlString
            public const nint m_clavicleRightJointName = 0x68; // CUtlString
            public const nint m_parameterNamePosition = 0x70; // AnimParamID
            public const nint m_parameterNameOrientation = 0x74; // AnimParamID
            public const nint m_parameterNamePelvisOffset = 0x78; // AnimParamID
            public const nint m_parameterCameraOnly = 0x7C; // AnimParamID
            public const nint m_parameterCameraClearanceDistance = 0x80; // AnimParamID
            public const nint m_parameterWeaponDepenetrationDistance = 0x84; // AnimParamID
            public const nint m_parameterWeaponDepenetrationDelta = 0x88; // AnimParamID
            public const nint m_depenetrationJointName = 0x90; // CUtlString
            public const nint m_propJoints = 0x98; // CUtlVector<CAnimGraphDoc_AimCameraNode_PropJoint>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_Probability {
            public const nint m_flProbability = 0x50; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_PathMotorBase {
            public const nint m_bLockToPath = 0x30; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ProxyNodeBase {
            public const nint m_proxyItems = 0x48; // CUtlVector<CConnectionProxyItem>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        public static class CSmartPropParameter {
            public const nint m_nElementID = 0x8; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootStepTriggerNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flTolerance = 0x48; // float32
            public const nint m_items = 0x50; // CUtlVector<CFootStepTriggerItem>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ConditionContainer {
            public const nint m_conditions = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Condition>>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ChoiceNode {
            public const nint m_children = 0x40; // CUtlVector<CChoiceNodeChild>
            public const nint m_seed = 0x58; // int32
            public const nint m_choiceMethod = 0x5C; // ChoiceMethod
            public const nint m_choiceChangeMethod = 0x60; // ChoiceChangeMethod
            public const nint m_blendMethod = 0x64; // ChoiceBlendMethod
            public const nint m_blendTime = 0x68; // float32
            public const nint m_bCrossFade = 0x6C; // bool
            public const nint m_bResetChosen = 0x6D; // bool
            public const nint m_bDontResetSameSelection = 0x6E; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TagCondition {
            public const nint m_tagID = 0x28; // AnimTagID
            public const nint m_comparisonValue = 0x2C; // bool
            public const nint m_latestValue = 0x2D; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_TraceNoHit {
            public const nint m_DefaultValue = 0x38; // TraceNoHitResult_t
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ColorChoice_t {
            public const nint m_Color = 0x0; // CSmartPropAttributeColor
            public const nint m_flWeight = 0x40; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ComponentManager {
            public const nint m_components = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Component>>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeDirection {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MVDataOutlinerNameExpr
        public static class CSmartPropChoice {
            public const nint m_Name = 0x10; // CUtlString
            public const nint m_DefaultOption = 0x18; // CUtlString
            public const nint m_Options = 0x20; // CUtlVector<CSmartPropChoiceOption>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class MaterialGroupChoice_t {
            public const nint m_MaterialGroupName = 0x0; // CSmartPropAttributeMaterialGroup
            public const nint m_flWeight = 0x40; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FootPositionMetric {
            public const nint m_feet = 0x28; // CUtlVector<CUtlString>
            public const nint m_bIgnoreSlope = 0x40; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TimeCondition {
            public const nint m_comparisonOp = 0x28; // Comparison_t
            public const nint m_comparisonString = 0x30; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_Translate {
            public const nint m_vPosition = 0x50; // CSmartPropAttributeVector
            public const nint m_CoordinateSpace = 0x90; // CSmartPropAttributeCoordinateSpace
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StateStatusCondition {
            public const nint m_sourceValue = 0x28; // StateValue
            public const nint m_comparisonValueType = 0x2C; // StateComparisonValueType
            public const nint m_comparisonFixedValue = 0x30; // float32
            public const nint m_comparisonStateValue = 0x34; // StateValue
            public const nint m_comparisonParamName = 0x38; // CUtlString
            public const nint m_comparisonParamID = 0x40; // AnimParamID
            public const nint m_comparisonOp = 0x44; // Comparison_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Graph {
            public const nint m_pSettingsManager = 0xE0; // CSmartPtr<CAnimGraphSettingsManager>
            public const nint m_clipDataManager = 0xF0; // CAnimGraphDoc_ClipDataManager
            public const nint m_modelName = 0x138; // CUtlString
            public const nint m_previewModelName = 0x140; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FutureFacingMetric {
            public const nint m_flDistance = 0x28; // float32
            public const nint m_flTime = 0x2C; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_LinearLength {
            public const nint m_flLength = 0x48; // CSmartPropAttributeFloat
            public const nint m_bAllowScale = 0x88; // CSmartPropAttributeBool
            public const nint m_flMinLength = 0xC8; // CSmartPropAttributeFloat
            public const nint m_flMaxLength = 0x108; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CRigidBodyWeight {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_flWeight = 0x8; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BoneVelocityMetric {
            public const nint m_boneName = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeDistance3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
            public const nint m_InputPositionA = 0x98; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceA = 0xD8; // CSmartPropAttributeCoordinateSpace
            public const nint m_InputPositionB = 0x118; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceB = 0x158; // CSmartPropAttributeCoordinateSpace
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BonePositionMetric {
            public const nint m_boneName = 0x28; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_AimCameraNode_PropJoint {
            public const nint m_jointName = 0x8; // CUtlString
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_MotionNodeManager {
        }
        // Parent: None
        // Field count: 0
        public static class CSmartPropElement_Deformer {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataExperimentalNodeSet
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PlaceOnMesh {
            public const nint m_nPickMode = 0xA0; // CSmartPropAttributeOrientationMode
            public const nint m_MeshName = 0xE0; // CUtlString
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_DistanceRemainingMetric {
            public const nint m_flMaxDistance = 0x28; // float32
            public const nint m_bFilterFixedMinDistance = 0x2C; // bool
            public const nint m_flMinDistance = 0x30; // float32
            public const nint m_bFilterGoalDistance = 0x34; // bool
            public const nint m_flStartGoalFilterDistance = 0x38; // float32
            public const nint m_bFilterGoalOvershoot = 0x3C; // bool
            public const nint m_flMaxGoalOvershootScale = 0x40; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_OrCondition {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeTraceNoHit {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_OrientationMode {
            public const nint m_DefaultValue = 0x38; // SmartPropPlaceMeshOrientationMode_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CFootPinningItem {
            public const nint m_footName = 0x0; // CUtlString
            public const nint m_targetBoneName = 0x8; // CUtlString
            public const nint m_ikChainName = 0x10; // CUtlString
            public const nint m_tag = 0x18; // AnimTagID
            public const nint m_paramName = 0x20; // CUtlString
            public const nint m_param = 0x28; // AnimParamID
            public const nint m_flMaxRotationLeft = 0x2C; // float32
            public const nint m_flMaxRotationRight = 0x30; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PlaceMultiple {
            public const nint m_nCount = 0xA0; // CSmartPropAttributeInt
            public const nint m_Expression = 0xE0; // CUtlString
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_MidpointDeformer {
            public const nint m_bDeformationEnabled = 0xA0; // CSmartPropAttributeBool
            public const nint m_vStart = 0xE0; // CSmartPropAttributeVector
            public const nint m_vEnd = 0x120; // CSmartPropAttributeVector
            public const nint m_fRadius = 0x160; // CSmartPropAttributeFloat
            public const nint m_bContinuousSpline = 0x1A0; // CSmartPropAttributeBool
            public const nint m_vOffset = 0x1E0; // CSmartPropAttributeVector
            public const nint m_vAngles = 0x220; // CSmartPropAttributeAngles
            public const nint m_vScale = 0x260; // CSmartPropAttributeVector2D
            public const nint m_fFalloff = 0x2A0; // CSmartPropAttributeFloat
            public const nint m_OutputVariable = 0x2E0; // CUtlString
        }
        // Parent: None
        // Field count: 23
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_MotionMatchingNode {
            public const nint m_groups = 0x48; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItemGroup>>
            public const nint m_metrics = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionMetric>>
            public const nint m_blendCurve = 0x78; // CBlendCurve
            public const nint m_nRandomSeed = 0x80; // int32
            public const nint m_flSampleRate = 0x84; // float32
            public const nint m_bSearchEveryTick = 0x88; // bool
            public const nint m_flSearchInterval = 0x8C; // float32
            public const nint m_bSearchWhenMotionEnds = 0x90; // bool
            public const nint m_bSearchWhenGoalChanges = 0x91; // bool
            public const nint m_flBlendTime = 0x94; // float32
            public const nint m_flSelectionThreshold = 0x98; // float32
            public const nint m_flReselectionTimeWindow = 0x9C; // float32
            public const nint m_bLockSelectionWhenWaning = 0xA0; // bool
            public const nint m_bEnableRotationCorrection = 0xA1; // bool
            public const nint m_bGoalAssist = 0xA2; // bool
            public const nint m_flGoalAssistDistance = 0xA4; // float32
            public const nint m_flGoalAssistTolerance = 0xA8; // float32
            public const nint m_bEnableDistanceScaling = 0xAC; // bool
            public const nint m_flDistanceScale_OuterRadius = 0xB0; // float32
            public const nint m_flDistanceScale_InnerRadius = 0xB4; // float32
            public const nint m_flDistanceScale_MaxScale = 0xB8; // float32
            public const nint m_flDistanceScale_MinScale = 0xBC; // float32
            public const nint m_distanceScale_Damping = 0xC0; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MPropertySuppressBaseClassField
        public static class CSmartPropElement_ModifyState {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_GraphMotionItem {
            public const nint m_name = 0xA8; // CUtlString
            public const nint m_nodeManager = 0xB0; // CAnimGraphDoc_MotionNodeManager
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BlockSelectionMetric {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CycleControlNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_valueSource = 0x48; // AnimValueSource
            public const nint m_paramName = 0x50; // CUtlString
            public const nint m_param = 0x58; // AnimParamID
            public const nint m_bLockWhenWaning = 0x5C; // bool
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_CreateSizer {
            public const nint m_Name = 0x50; // CUtlString
            public const nint m_bDisplayModel = 0x58; // CSmartPropAttributeBool
            public const nint m_flInitialMinX = 0x98; // CSmartPropAttributeFloat
            public const nint m_flInitialMaxX = 0xD8; // CSmartPropAttributeFloat
            public const nint m_flConstraintMinX = 0x118; // CSmartPropAttributeFloat
            public const nint m_flConstraintMaxX = 0x158; // CSmartPropAttributeFloat
            public const nint m_OutputVariableMinX = 0x198; // CUtlString
            public const nint m_OutputVariableMaxX = 0x1A0; // CUtlString
            public const nint m_flInitialMinY = 0x1A8; // CSmartPropAttributeFloat
            public const nint m_flInitialMaxY = 0x1E8; // CSmartPropAttributeFloat
            public const nint m_flConstraintMinY = 0x228; // CSmartPropAttributeFloat
            public const nint m_flConstraintMaxY = 0x268; // CSmartPropAttributeFloat
            public const nint m_OutputVariableMinY = 0x2A8; // CUtlString
            public const nint m_OutputVariableMaxY = 0x2B0; // CUtlString
            public const nint m_flInitialMinZ = 0x2B8; // CSmartPropAttributeFloat
            public const nint m_flInitialMaxZ = 0x2F8; // CSmartPropAttributeFloat
            public const nint m_flConstraintMinZ = 0x338; // CSmartPropAttributeFloat
            public const nint m_flConstraintMaxZ = 0x378; // CSmartPropAttributeFloat
            public const nint m_OutputVariableMinZ = 0x3B8; // CUtlString
            public const nint m_OutputVariableMaxZ = 0x3C0; // CUtlString
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TargetWarpNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_eLinearRootMotionMode = 0x48; // TargetWarpLinearRootMotionMode
            public const nint m_eAngleMode = 0x4C; // TargetWarpAngleMode_t
            public const nint m_eCorrectionMethod = 0x50; // TargetWarpCorrectionMethod
            public const nint m_eTargetWarpTimingMethod = 0x54; // TargetWarpTimingMethod
            public const nint m_moveHeadingParamID = 0x58; // AnimParamID
            public const nint m_desiredMoveHeadingParamID = 0x5C; // AnimParamID
            public const nint m_targetPositionParamID = 0x60; // AnimParamID
            public const nint m_bTargetPositionIsWorldSpace = 0x64; // bool
            public const nint m_targetFacePositionParamID = 0x68; // AnimParamID
            public const nint m_bTargetFacePositionIsWorldSpace = 0x6C; // bool
            public const nint m_targetUpVectorParamID = 0x70; // AnimParamID
            public const nint m_bOnlyWarpWhenTagIsFound = 0x74; // bool
            public const nint m_bWarpOrientationDuringTranslation = 0x75; // bool
            public const nint m_flMaxAngle = 0x78; // float32
            public const nint m_bWarpAroundCenter = 0x7C; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CLODComponent {
            public const nint m_nServerLOD = 0x38; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeCrossProduct3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_InputVectorA = 0x58; // CSmartPropAttributeVector
            public const nint m_InputVectorB = 0x98; // CSmartPropAttributeVector
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_NodeConnection {
            public const nint m_nodeID = 0x0; // AnimNodeID
            public const nint m_outputID = 0x4; // AnimNodeOutputID
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SetOrientation {
            public const nint m_vForwardVector = 0x50; // CSmartPropAttributeVector
            public const nint m_ForwardDirectionSpace = 0x90; // CSmartPropAttributeCoordinateSpace
            public const nint m_vUpVector = 0xD0; // CSmartPropAttributeVector
            public const nint m_UpDirectionSpace = 0x110; // CSmartPropAttributeCoordinateSpace
            public const nint m_bPrioritizeUp = 0x150; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_DirectionVector {
            public const nint m_DefaultValue = 0x38; // SmartPropDirection_t
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PickOne {
            public const nint m_SelectionMode = 0xA0; // CSmartPropAttributeChoiceSelectionMode
            public const nint m_SpecificChildIndex = 0xE0; // CSmartPropAttributeInt
            public const nint m_OutputChoiceVariableName = 0x120; // CUtlString
            public const nint m_bConfigurable = 0x128; // CSmartPropAttributeBool
            public const nint m_vHandleOffset = 0x168; // CSmartPropAttributeVector
            public const nint m_HandleColor = 0x1A8; // CSmartPropAttributeColor
            public const nint m_HandleSize = 0x1E8; // CSmartPropAttributeInt
            public const nint m_HandleShape = 0x228; // ConfigurationHandleShape_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        public static class CSmartPropModifier {
            public const nint m_bEnabled = 0x8; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOutlinerAssetNameExpr
        public static class CSmartPropElement_ModelEntity {
            public const nint m_sModelName = 0x88; // CSmartPropAttributeModelName
            public const nint m_MaterialGroupName = 0xC8; // CSmartPropAttributeMaterialGroup
            public const nint m_bCastShadows = 0x108; // CSmartPropAttributeBool
            public const nint m_bForceStatic = 0x148; // CSmartPropAttributeBool
            public const nint m_nDeformableAttachmentMode = 0x188; // SmartPropDeformableAttachMode_t
            public const nint m_nDeformableOrientationMode = 0x18C; // SmartPropDeformableOrientMode_t
        }
        // Parent: None
        // Field count: 13
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_CreateRotator {
            public const nint m_Name = 0x50; // CUtlString
            public const nint m_vOffset = 0x58; // CSmartPropAttributeVector
            public const nint m_vRotationAxis = 0x98; // CSmartPropAttributeVector
            public const nint m_CoordinateSpace = 0xD8; // CSmartPropAttributeCoordinateSpace
            public const nint m_flDisplayRadius = 0x118; // CSmartPropAttributeFloat
            public const nint m_DisplayColor = 0x158; // CSmartPropAttributeColor
            public const nint m_bApplyToCurrentTransform = 0x198; // CSmartPropAttributeBool
            public const nint m_flSnappingIncrement = 0x1D8; // CSmartPropAttributeFloat
            public const nint m_flInitialAngle = 0x218; // CSmartPropAttributeFloat
            public const nint m_bEnforceLimits = 0x258; // CSmartPropAttributeBool
            public const nint m_flMinAngle = 0x298; // CSmartPropAttributeFloat
            public const nint m_flMaxAngle = 0x2D8; // CSmartPropAttributeFloat
            public const nint m_OutputVariable = 0x318; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Color {
            public const nint m_DefaultValue = 0x38; // Color
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CurrentVelocityMetric {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SequenceMotionItem {
            public const nint m_sequenceName = 0xA8; // CUtlString
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimConflictInfo_t {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_groupName = 0x8; // CUtlString
            public const nint m_subgraphName = 0x10; // CUtlString
            public const nint m_id = 0x18; // uint32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CChoiceNodeChild {
            public const nint m_inputConnection = 0x0; // CAnimGraphDoc_NodeConnection
            public const nint m_name = 0x8; // CUtlString
            public const nint m_weight = 0x10; // float32
            public const nint m_blendTime = 0x14; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_MaterialAttributes {
            public const nint m_AllowedMaterialAttributes = 0x50; // CUtlVector<CUtlString>
            public const nint m_DisallowedMaterialAttributes = 0x68; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_FitOnLine {
            public const nint m_vStart = 0xA0; // CSmartPropAttributeVector
            public const nint m_vEnd = 0xE0; // CSmartPropAttributeVector
            public const nint m_PointSpace = 0x120; // CSmartPropAttributeCoordinateSpace
            public const nint m_bOrientAlongLine = 0x160; // CSmartPropAttributeBool
            public const nint m_vUpDirection = 0x1A0; // CSmartPropAttributeVector
            public const nint m_UpDirectionSpace = 0x1E0; // CSmartPropAttributeCoordinateSpace
            public const nint m_bPrioritizeUp = 0x220; // CSmartPropAttributeBool
            public const nint m_nScaleMode = 0x260; // CSmartPropAttributeScaleMode
            public const nint m_nPickMode = 0x2A0; // CSmartPropAttributePickMode
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeVectorBetweenPoints3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_OutputCoordinateSpace = 0x58; // CSmartPropAttributeCoordinateSpace
            public const nint m_bNormalized = 0x98; // CSmartPropAttributeBool
            public const nint m_InputPositionA = 0xD8; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceA = 0x118; // CSmartPropAttributeCoordinateSpace
            public const nint m_InputPositionB = 0x158; // CSmartPropAttributeVector
            public const nint m_CoordinateSpaceB = 0x198; // CSmartPropAttributeCoordinateSpace
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SubGraphNode {
            public const nint m_subGraphFilename = 0x70; // CUtlString
            public const nint m_animNameMap = 0x78; // CUtlHashtable<CUtlString,CUtlString>
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ParamSpan {
            public const nint m_samples = 0x20; // CUtlVector<CAnimGraphDoc_ParamSpanSample>
            public const nint m_paramName = 0x38; // CUtlString
            public const nint m_id = 0x40; // AnimParamID
            public const nint m_flStartCycle = 0x44; // float32
            public const nint m_flEndCycle = 0x48; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_AndCondition {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_SavePosition {
            public const nint m_CoordinateSpace = 0x50; // CSmartPropAttributeCoordinateSpace
            public const nint m_VariableName = 0x90; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ParameterManager {
            public const nint m_Parameters = 0x20; // CUtlVector<CSmartPtr<CAnimParameterBase>>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PropDynamic {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_GroupInputNode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_MotionParameter {
            public const nint m_name = 0x18; // CUtlString
            public const nint m_id = 0x20; // AnimParamID
            public const nint m_flMinValue = 0x24; // float32
            public const nint m_flMaxValue = 0x28; // float32
            public const nint m_nSamples = 0x2C; // int32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_PathMetric {
            public const nint m_flDistance = 0x28; // float32
            public const nint m_pathSamples = 0x30; // CUtlVector<float32>
            public const nint m_bExtrapolateMovement = 0x48; // bool
            public const nint m_flMinExtrapolationSpeed = 0x4C; // float32
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StanceOverrideNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_stanceSourceConnection = 0x48; // CAnimGraphDoc_NodeConnection
            public const nint m_blendParamName = 0x50; // CUtlString
            public const nint m_blendParamID = 0x58; // AnimParamID
            public const nint m_eMode = 0x5C; // StanceOverrideMode
            public const nint m_sequenceName = 0x60; // CUtlString
            public const nint m_nFrameIndex = 0x68; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributeCoordinateSpace {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CStateMachineComponent {
            public const nint m_sName = 0x60; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_NodeState {
            public const nint m_inputConnection = 0x80; // CAnimGraphDoc_NodeConnection
            public const nint m_bIsRootMotionExclusive = 0x88; // bool
            public const nint m_bIsRootMotionExclusiveFirstFrame = 0x89; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CConnectionProxyItem {
            public const nint m_name = 0x0; // CUtlString
            public const nint m_outputID = 0x8; // AnimNodeOutputID
            public const nint m_inputConnection = 0xC; // CAnimGraphDoc_NodeConnection
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Int {
            public const nint m_DefaultValue = 0x38; // int32
            public const nint m_nParamaterMinValue = 0x3C; // int32
            public const nint m_nParamaterMaxValue = 0x40; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ZeroPoseNode {
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_BendDeformer {
            public const nint m_bDeformationEnabled = 0xA0; // CSmartPropAttributeBool
            public const nint m_vOrigin = 0xE0; // CSmartPropAttributeVector
            public const nint m_vAngles = 0x120; // CSmartPropAttributeAngles
            public const nint m_vSize = 0x160; // CSmartPropAttributeVector
            public const nint m_flBendAngle = 0x1A0; // CSmartPropAttributeFloat
            public const nint m_flBendPoint = 0x1E0; // CSmartPropAttributeFloat
            public const nint m_flBendRadius = 0x220; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_RandomScale {
            public const nint m_flRandomScaleMin = 0x50; // CSmartPropAttributeFloat
            public const nint m_flRandomScaleMax = 0x90; // CSmartPropAttributeFloat
            public const nint m_flSnapIncrement = 0xD0; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Float {
            public const nint m_DefaultValue = 0x38; // float32
            public const nint m_flParamaterMinValue = 0x3C; // float32
            public const nint m_flParamaterMaxValue = 0x40; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ResetRotation {
            public const nint m_bIgnoreObjectRotation = 0x50; // CSmartPropAttributeBool
            public const nint m_bResetPitch = 0x90; // CSmartPropAttributeBool
            public const nint m_bResetYaw = 0xD0; // CSmartPropAttributeBool
            public const nint m_bResetRoll = 0x110; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_SurfaceAngle {
            public const nint m_flSurfaceSlopeMin = 0x50; // CSmartPropAttributeFloat
            public const nint m_flSurfaceSlopeMax = 0x90; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Motor {
            public const nint m_name = 0x20; // CUtlString
            public const nint m_bDefault = 0x28; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        public static class CSmartPropSelectionCriteria {
            public const nint m_bEnabled = 0x8; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_DirectionalBlendNode {
            public const nint m_animNamePrefix = 0x48; // CUtlString
            public const nint m_blendValueSource = 0x50; // AnimValueSource
            public const nint m_paramName = 0x58; // CUtlString
            public const nint m_param = 0x60; // AnimParamID
            public const nint m_bLoop = 0x64; // bool
            public const nint m_bLockBlendOnReset = 0x65; // bool
            public const nint m_playbackSpeed = 0x68; // float32
            public const nint m_damping = 0x70; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_PlayerInputMotor {
            public const nint m_sampleTimes = 0x30; // CUtlVector<float32>
            public const nint m_bUseAcceleration = 0x48; // bool
            public const nint m_flSpringConstant = 0x4C; // float32
            public const nint m_flAnticipationDistance = 0x50; // float32
            public const nint m_anticipationPosParamName = 0x58; // CUtlString
            public const nint m_anticipationPosParam = 0x60; // AnimParamID
            public const nint m_anticipationHeadingParamName = 0x68; // CUtlString
            public const nint m_anticipationHeadingParam = 0x70; // AnimParamID
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_StepsRemainingMetric {
            public const nint m_feet = 0x28; // CUtlVector<CUtlString>
            public const nint m_flMinStepsRemaining = 0x40; // float32
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
        public static class CSmartPropOperation_TraceToLine {
            public const nint m_EndPointA = 0x350; // CSmartPropAttributeVector
            public const nint m_EndPointSpaceA = 0x390; // CSmartPropAttributeCoordinateSpace
            public const nint m_EndPointB = 0x3D0; // CSmartPropAttributeVector
            public const nint m_EndPointSpaceB = 0x410; // CSmartPropAttributeCoordinateSpace
            public const nint m_bTraceAway = 0x450; // CSmartPropAttributeBool
            public const nint m_flTraceLength = 0x490; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_OrientationWarpNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_eMode = 0x48; // OrientationWarpMode_t
            public const nint m_targetParamID = 0x4C; // AnimParamID
            public const nint m_targetPositionParamID = 0x50; // AnimParamID
            public const nint m_fallbackTargetPositionParamID = 0x54; // AnimParamID
            public const nint m_eTargetOffsetMode = 0x58; // OrientationWarpTargetOffsetMode_t
            public const nint m_flTargetOffset = 0x5C; // float32
            public const nint m_targetOffsetParamID = 0x60; // AnimParamID
            public const nint m_flMaxRootMotionScale = 0x64; // float32
            public const nint m_eRootMotionSource = 0x68; // OrientationWarpRootMotionSource_t
            public const nint m_damping = 0x70; // CAnimInputDamping
            public const nint m_bEnablePreferredRotationDirection = 0x88; // bool
            public const nint m_ePreferredRotationDirection = 0x8C; // AnimValueSource
            public const nint m_flPreferredRotationThreshold = 0x90; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FinishedCondition {
            public const nint m_option = 0x28; // FinishedConditionOption
            public const nint m_bIsFinished = 0x2C; // bool
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
        public static class CSmartPropRoot {
            public const nint m_nContentVersion = 0x0; // int32
            public const nint m_nMaxDepth = 0x8; // CSmartPropAttributeInt
            public const nint m_Variables = 0x48; // CUtlVector<CSmartPropVariable*>
            public const nint m_Choices = 0x60; // CUtlVector<CSmartPropChoice*>
            public const nint m_Children = 0x78; // CUtlVector<CSmartPropElement*>
            public const nint m_Modifiers = 0x90; // CUtlVector<CSmartPropModifier*>
            public const nint m_hPulseGraph = 0xA8; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_SetParameterAction {
            public const nint m_paramName = 0x28; // CUtlString
            public const nint m_param = 0x30; // AnimParamID
            public const nint m_value = 0x34; // CAnimVariant
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_Rotate {
            public const nint m_vRotation = 0x50; // CSmartPropAttributeAngles
        }
        // Parent: None
        // Field count: 19
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_LookAtNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_target = 0x48; // AnimVectorSource
            public const nint m_paramName = 0x50; // CUtlString
            public const nint m_param = 0x58; // AnimParamID
            public const nint m_bIsPosition = 0x5C; // bool
            public const nint m_weightParamName = 0x60; // CUtlString
            public const nint m_weightParam = 0x68; // AnimParamID
            public const nint m_lookatChainName = 0x70; // CUtlString
            public const nint m_attachmentName = 0x78; // CUtlString
            public const nint m_bRotateYawForward = 0x80; // bool
            public const nint m_flYawLimit = 0x84; // float32
            public const nint m_flPitchLimit = 0x88; // float32
            public const nint m_bMaintainUpDirection = 0x8C; // bool
            public const nint m_bResetBase = 0x8D; // bool
            public const nint m_bLockWhenWaning = 0x8E; // bool
            public const nint m_bUseHysteresis = 0x8F; // bool
            public const nint m_flHysteresisInnerAngle = 0x90; // float32
            public const nint m_flHysteresisOuterAngle = 0x94; // float32
            public const nint m_damping = 0x98; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_GroupOutputNode {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CFloatAnimValue {
            public const nint m_flConstValue = 0x8; // float32
            public const nint m_paramName = 0x10; // CUtlString
            public const nint m_paramID = 0x18; // AnimParamID
            public const nint m_eSource = 0x1C; // EAnimValueSource
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CSmartPropVariable_Vector3D {
            public const nint m_DefaultValue = 0x38; // Vector
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PropPhysics {
            public const nint m_bStartAsleep = 0x190; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropVariable_Material {
            public const nint m_DefaultValue = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_JumpHelperNode {
            public const nint m_targetParamName = 0xB0; // CUtlString
            public const nint m_targetParamID = 0xB8; // AnimParamID
            public const nint m_flJumpStartCycle = 0xBC; // float32
            public const nint m_flJumpDuration = 0xC0; // float32
            public const nint m_bTranslateX = 0xC4; // bool
            public const nint m_bTranslateY = 0xC5; // bool
            public const nint m_bTranslateZ = 0xC6; // bool
            public const nint m_bScaleSpeed = 0xC7; // bool
            public const nint m_eCorrectionMethod = 0xC8; // JumpCorrectionMethod
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_RagdollNode {
            public const nint m_weightListName = 0x40; // CUtlString
            public const nint m_poseControlMethod = 0x48; // RagdollPoseControl
            public const nint m_inputConnection = 0x4C; // CAnimGraphDoc_NodeConnection
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FollowPathNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flBlendOutTime = 0x48; // float32
            public const nint m_bBlockNonPathMovement = 0x4C; // bool
            public const nint m_bStopFeetAtGoal = 0x4D; // bool
            public const nint m_bScaleSpeed = 0x4E; // bool
            public const nint m_flScale = 0x50; // float32
            public const nint m_flMinAngle = 0x54; // float32
            public const nint m_flMaxAngle = 0x58; // float32
            public const nint m_flSpeedScaleBlending = 0x5C; // float32
            public const nint m_bTurnToFace = 0x60; // bool
            public const nint m_facingTarget = 0x64; // AnimValueSource
            public const nint m_paramName = 0x68; // CUtlString
            public const nint m_param = 0x70; // AnimParamID
            public const nint m_flTurnToFaceOffset = 0x74; // float32
            public const nint m_damping = 0x78; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 18
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_AimMatrixNode {
            public const nint m_inputConnection = 0x48; // CAnimGraphDoc_NodeConnection
            public const nint m_sequenceName = 0x50; // CUtlString
            public const nint m_flMaxYawAngle = 0x58; // float32
            public const nint m_flMaxPitchAngle = 0x5C; // float32
            public const nint m_target = 0x60; // AnimVectorSource
            public const nint m_paramName = 0x68; // CUtlString
            public const nint m_param = 0x70; // AnimParamID
            public const nint m_bIsPosition = 0x74; // bool
            public const nint m_attachmentName = 0x78; // CUtlString
            public const nint m_blendMode = 0x80; // AimMatrixBlendMode
            public const nint m_boneMaskName = 0x88; // CUtlString
            public const nint m_bResetBase = 0x90; // bool
            public const nint m_bLockWhenWaning = 0x91; // bool
            public const nint m_bUseBiasAndClamp = 0x92; // bool
            public const nint m_flBiasAndClampYawOffset = 0x94; // float32
            public const nint m_flBiasAndClampPitchOffset = 0x98; // float32
            public const nint m_biasAndClampBlendCurve = 0x9C; // CBlendCurve
            public const nint m_damping = 0xA8; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TurnHelperNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_facingTarget = 0x48; // AnimValueSource
            public const nint m_turnStartTime = 0x4C; // float32
            public const nint m_turnDuration = 0x50; // float32
            public const nint m_bMatchChildDuration = 0x54; // bool
            public const nint m_bUseManualTurnOffset = 0x55; // bool
            public const nint m_manualTurnOffset = 0x58; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_ComputeNormalizedVector3D {
            public const nint m_OutputVariableName = 0x50; // CUtlString
            public const nint m_InputVector = 0x58; // CSmartPropAttributeVector
        }
        // Parent: None
        // Field count: 15
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SelectorNode {
            public const nint m_children = 0x40; // CUtlVector<CAnimGraphDoc_NodeConnection>
            public const nint m_fallbackChild = 0x58; // CAnimGraphDoc_NodeConnection
            public const nint m_tags = 0x60; // CUtlVector<AnimTagID>
            public const nint m_selectionSource = 0x78; // SelectionSource_t
            public const nint m_boolParamName = 0x80; // CUtlString
            public const nint m_boolParamID = 0x88; // AnimParamID
            public const nint m_enumParamName = 0x90; // CUtlString
            public const nint m_enumParamID = 0x98; // AnimParamID
            public const nint m_tagID = 0x9C; // AnimTagID
            public const nint m_blendDuration = 0xA0; // CFloatAnimValue
            public const nint m_tagBehavior = 0xC0; // SelectorTagBehavior_t
            public const nint m_bResetOnChange = 0xC4; // bool
            public const nint m_bSyncCyclesOnChange = 0xC5; // bool
            public const nint m_bLockWhenWaning = 0xC6; // bool
            public const nint m_blendCurve = 0xC8; // CBlendCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_RadiusPlacementMode {
            public const nint m_DefaultValue = 0x38; // SmartPropRadiusPlacementMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_PathPositions {
            public const nint m_DefaultValue = 0x38; // SmartPropPathPositions_t
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CPairedSequenceComponent {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BindPoseNode {
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_PathPosition {
            public const nint m_PlaceAtPositions = 0x48; // CSmartPropAttributePathPositions
            public const nint m_nPlaceEveryNthPosition = 0x88; // CSmartPropAttributeInt
            public const nint m_nNthPositionIndexOffset = 0xC8; // CSmartPropAttributeInt
            public const nint m_bAllowAtStart = 0x108; // CSmartPropAttributeBool
            public const nint m_bAllowAtEnd = 0x148; // CSmartPropAttributeBool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TimeRemainingMetric {
            public const nint m_bMatchByTimeRemaining = 0x28; // bool
            public const nint m_flMaxTimeRemaining = 0x2C; // float32
            public const nint m_bFilterByTimeRemaining = 0x30; // bool
            public const nint m_flMinTimeRemaining = 0x34; // float32
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
        public static class CSmartPropOperation_TraceToPoint {
            public const nint m_TargetPoint = 0x350; // CSmartPropAttributeVector
            public const nint m_TargetPointSpace = 0x390; // CSmartPropAttributeCoordinateSpace
            public const nint m_bTraceAway = 0x3D0; // CSmartPropAttributeBool
            public const nint m_flTraceLength = 0x410; // CSmartPropAttributeFloat
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
        public static class CSmartPropOperation_SaveState {
            public const nint m_StateName = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_MaterialTint {
            public const nint m_Material = 0x50; // CSmartPropAttributeMaterialName
            public const nint m_SelectionMode = 0x90; // CSmartPropAttributeColorSelectionMode
            public const nint m_Color = 0xD0; // CSmartPropAttributeColor
            public const nint m_Gradient = 0x110; // CColorGradient
            public const nint m_ColorPosition = 0x128; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSmartPropMaterialReplacement {
            public const nint m_OriginalMaterial = 0x0; // CSmartPropAttributeMaterialName
            public const nint m_ReplacementMaterial = 0x40; // CSmartPropAttributeMaterialName
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_WayPointHelperNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flStartCycle = 0x48; // float32
            public const nint m_flEndCycle = 0x4C; // float32
            public const nint m_bOnlyGoals = 0x50; // bool
            public const nint m_bPreventOvershoot = 0x51; // bool
            public const nint m_bPreventUndershoot = 0x52; // bool
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SubtractNode {
            public const nint m_baseInputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_subtractInputConnection = 0x48; // CAnimGraphDoc_NodeConnection
            public const nint m_timingBehavior = 0x50; // BinaryNodeTiming
            public const nint m_flTimingBlend = 0x54; // float32
            public const nint m_footMotionTiming = 0x58; // BinaryNodeChildOption
            public const nint m_bApplyToFootMotion = 0x5C; // bool
            public const nint m_bResetBase = 0x5D; // bool
            public const nint m_bResetSubtract = 0x5E; // bool
            public const nint m_bApplyChannelsSeparately = 0x5F; // bool
            public const nint m_bUseModelSpace = 0x60; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_AddNode {
            public const nint m_baseInput = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_additiveInput = 0x48; // CAnimGraphDoc_NodeConnection
            public const nint m_timingBehavior = 0x50; // BinaryNodeTiming
            public const nint m_flTimingBlend = 0x54; // float32
            public const nint m_footMotionTiming = 0x58; // BinaryNodeChildOption
            public const nint m_bApplyToFootMotion = 0x5C; // bool
            public const nint m_bResetBase = 0x5D; // bool
            public const nint m_bResetAdditive = 0x5E; // bool
            public const nint m_bApplyChannelsSeparately = 0x5F; // bool
            public const nint m_bUseModelSpace = 0x60; // bool
            public const nint m_bApplyScale = 0x61; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeType
        // MPropertyFriendlyName
        // MVDataOutlinerLabelExpr
        public static class CSmartPropElement {
            public const nint m_nElementID = 0x8; // int32
            public const nint m_bEnabled = 0x10; // CSmartPropAttributeBool
            public const nint m_sLabel = 0x50; // CUtlString
            public const nint m_SelectionCriteria = 0x58; // CUtlVector<CSmartPropSelectionCriteria*>
            public const nint m_Modifiers = 0x70; // CUtlVector<CSmartPropModifier*>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CBlendNodeChild {
            public const nint m_inputConnection = 0x8; // CAnimGraphDoc_NodeConnection
            public const nint m_name = 0x10; // CUtlString
            public const nint m_blendValue = 0x18; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CActionComponent {
            public const nint m_actions = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
            public const nint m_sName = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_Blend2DItem {
            public const nint m_blendValue = 0x18; // Vector2D
            public const nint m_bUseCustomDuration = 0x28; // bool
            public const nint m_flCustomDuration = 0x2C; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Component {
            public const nint m_group = 0x18; // CUtlString
            public const nint m_id = 0x28; // AnimComponentID
            public const nint m_bStartEnabled = 0x2C; // bool
            public const nint m_nPriority = 0x30; // int32
            public const nint m_networkMode = 0x34; // AnimNodeNetworkMode
        }
        // Parent: None
        // Field count: 16
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_Blend2DNode {
            public const nint m_items = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_Blend2DItem>>
            public const nint m_tagSpans = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_paramSpans = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
            public const nint m_blendSourceX = 0xA0; // AnimValueSource
            public const nint m_paramNameX = 0xA8; // CUtlString
            public const nint m_paramX = 0xB0; // AnimParamID
            public const nint m_blendSourceY = 0xB4; // AnimValueSource
            public const nint m_paramNameY = 0xB8; // CUtlString
            public const nint m_paramY = 0xC0; // AnimParamID
            public const nint m_eBlendMode = 0xC4; // Blend2DMode
            public const nint m_bLoop = 0xC8; // bool
            public const nint m_bLockBlendOnReset = 0xC9; // bool
            public const nint m_bLockWhenWaning = 0xCA; // bool
            public const nint m_playbackSpeed = 0xCC; // float32
            public const nint m_damping = 0xD0; // CAnimInputDamping
            public const nint m_bAnimEventsAndTagsOnMostWeightedOnly = 0xE8; // bool
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_TagSpan {
            public const nint m_id = 0x20; // AnimTagID
            public const nint m_fStartCycle = 0x24; // float32
            public const nint m_fDuration = 0x28; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_FutureVelocityMetric {
            public const nint m_flDistance = 0x28; // float32
            public const nint m_flStoppingDistance = 0x2C; // float32
            public const nint m_eMode = 0x30; // VelocityMetricMode
            public const nint m_bAutoTargetSpeed = 0x31; // bool
            public const nint m_flManualTargetSpeed = 0x34; // float32
        }
        // Parent: None
        // Field count: 10
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CDampedValueItem {
            public const nint m_valueType = 0x0; // DampedValueType
            public const nint m_floatParamNameIn = 0x8; // CUtlString
            public const nint m_floatParamNameOut = 0x10; // CUtlString
            public const nint m_vectorParamNameIn = 0x18; // CUtlString
            public const nint m_vectorParamNameOut = 0x20; // CUtlString
            public const nint m_floatParamIn = 0x28; // AnimParamID
            public const nint m_floatParamOut = 0x2C; // AnimParamID
            public const nint m_vectorParamIn = 0x30; // AnimParamID
            public const nint m_vectorParamOut = 0x34; // AnimParamID
            public const nint m_damping = 0x38; // CAnimInputDamping
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributePickMode {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimTagConflict {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_ClipData {
            public const nint m_tagSpans = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_clipName = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_CoordinateSpace {
            public const nint m_DefaultValue = 0x38; // SmartPropSpace_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ConflictManager {
            public const nint m_conflicts = 0x18; // CUtlVector<CSmartPtr<CAnimConflictBase>>
        }
        // Parent: None
        // Field count: 14
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_BoneMaskNode {
            public const nint m_weightListName = 0x40; // CUtlString
            public const nint m_inputConnection1 = 0x48; // CAnimGraphDoc_NodeConnection
            public const nint m_inputConnection2 = 0x50; // CAnimGraphDoc_NodeConnection
            public const nint m_blendSpace = 0x58; // BoneMaskBlendSpace
            public const nint m_bUseBlendScale = 0x5C; // bool
            public const nint m_blendValueSource = 0x60; // AnimValueSource
            public const nint m_blendParameterName = 0x68; // CUtlString
            public const nint m_blendParameter = 0x70; // AnimParamID
            public const nint m_timingBehavior = 0x74; // BinaryNodeTiming
            public const nint m_flTimingBlend = 0x78; // float32
            public const nint m_flRootMotionBlend = 0x7C; // float32
            public const nint m_footMotionTiming = 0x80; // BinaryNodeChildOption
            public const nint m_bResetChild1 = 0x84; // bool
            public const nint m_bResetChild2 = 0x85; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyElementNameFn
        public static class CAnimGraphDoc_SequenceBlend2DItem {
            public const nint m_tagSpans = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
            public const nint m_sequenceName = 0x50; // CUtlString
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CTargetSelectorChild {
            public const nint m_name = 0x8; // CUtlString
            public const nint m_inputConnection = 0x10; // CAnimGraphDoc_NodeConnection
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_SingleFrameNode {
            public const nint m_sequenceName = 0x50; // CUtlString
            public const nint m_eFrameSelection = 0x58; // SingleFrameSelection
            public const nint m_nFrameIndex = 0x5C; // int32
            public const nint m_actions = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CycleCondition {
            public const nint m_comparisonOp = 0x28; // Comparison_t
            public const nint m_comparisonString = 0x30; // CUtlString
            public const nint m_comparisonValue = 0x38; // float32
            public const nint m_comparisonValueType = 0x3C; // ComparisonValueType
            public const nint m_comparisonParamName = 0x40; // CUtlString
            public const nint m_comparisonParamID = 0x48; // AnimParamID
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_HitReactNode {
            public const nint m_inputConnection = 0x40; // CAnimGraphDoc_NodeConnection
            public const nint m_flMinDelayBetweenHits = 0x48; // float32
            public const nint m_triggerParamName = 0x50; // CUtlString
            public const nint m_hitBoneParamName = 0x58; // CUtlString
            public const nint m_hitOffsetParamName = 0x60; // CUtlString
            public const nint m_hitDirectionParamName = 0x68; // CUtlString
            public const nint m_hitStrengthParamName = 0x70; // CUtlString
            public const nint m_triggerParam = 0x78; // AnimParamID
            public const nint m_hitBoneParam = 0x7C; // AnimParamID
            public const nint m_hitOffsetParam = 0x80; // AnimParamID
            public const nint m_hitDirectionParam = 0x84; // AnimParamID
            public const nint m_hitStrengthParam = 0x88; // AnimParamID
            public const nint m_weightListName = 0x90; // CUtlString
            public const nint m_hipBoneName = 0x98; // CUtlString
            public const nint m_flHipBoneTranslationScale = 0xA0; // float32
            public const nint m_nEffectedBoneCount = 0xA4; // int32
            public const nint m_flMaxImpactForce = 0xA8; // float32
            public const nint m_flMinImpactForce = 0xAC; // float32
            public const nint m_flWhipImpactScale = 0xB0; // float32
            public const nint m_flCounterRotationScale = 0xB4; // float32
            public const nint m_flDistanceFadeScale = 0xB8; // float32
            public const nint m_flPropagationScale = 0xBC; // float32
            public const nint m_flWhipDelay = 0xC0; // float32
            public const nint m_flSpringStrength = 0xC4; // float32
            public const nint m_flWhipSpringStrength = 0xC8; // float32
            public const nint m_flHipDipSpringStrength = 0xCC; // float32
            public const nint m_flHipDipImpactScale = 0xD0; // float32
            public const nint m_flHipDipDelay = 0xD4; // float32
            public const nint m_bResetBase = 0xD8; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataNodeTintColor
        public static class CSmartPropFilter {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_ColorSelectionMode {
            public const nint m_DefaultValue = 0x38; // SmartPropColorSelectionMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_MotionMetric {
            public const nint m_flWeight = 0x20; // float32
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropVariable_PickMode {
            public const nint m_DefaultValue = 0x38; // PickMode_t
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_NodeManager {
            public const nint m_nodes = 0x8; // CUtlHashtable<AnimNodeID,CSmartPtr<CAnimGraphDoc_Node>>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_Action {
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ToggleComponentAction {
            public const nint m_componentID = 0x28; // AnimComponentID
            public const nint m_bSetEnabled = 0x2C; // bool
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMovementComponent {
            public const nint m_motors = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Motor>>
            public const nint m_bNetworkPath = 0x50; // bool
            public const nint m_facingDamping = 0x58; // CAnimInputDamping
            public const nint m_bNetworkFacing = 0x70; // bool
            public const nint m_paramIDs = 0x74; // AnimParamID[34]
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropElement_PlaceOnPath {
            public const nint m_PathName = 0xA0; // CUtlString
            public const nint m_flSpacing = 0xA8; // CSmartPropAttributeFloat
            public const nint m_flOffsetAlongPath = 0xE8; // CSmartPropAttributeFloat
            public const nint m_vPathOffset = 0x128; // CSmartPropAttributeVector2D
            public const nint m_PathSpace = 0x168; // CSmartPropAttributeCoordinateSpace
            public const nint m_bUseFixedUpDirection = 0x1A8; // CSmartPropAttributeBool
            public const nint m_bUseProjectedDistance = 0x1E8; // CSmartPropAttributeBool
            public const nint m_vUpDirection = 0x228; // CSmartPropAttributeVector
            public const nint m_UpDirectionSpace = 0x268; // CSmartPropAttributeCoordinateSpace
            public const nint m_DefaultPathInWorldSpace = 0x2A8; // CSmartPropAttributeBool
            public const nint m_DefaultPath = 0x2E8; // CUtlVector<CSmartPropAttributeVector>
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_SubGraph {
            public const nint m_nodeManager = 0x8; // CAnimGraphDoc_NodeManager
            public const nint m_componentManager = 0x50; // CAnimGraphDoc_ComponentManager
            public const nint m_localParameters = 0x78; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            public const nint m_localTags = 0x90; // CUtlVector<CSmartPtr<CAnimTagBase>>
            public const nint m_referencedParamGroups = 0xA8; // CUtlVector<CUtlString>
            public const nint m_referencedTagGroups = 0xC0; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CSolveIKChainAnimNodeChainData {
            public const nint m_IkChain = 0x8; // CUtlString
            public const nint m_SolverSettingSource = 0x10; // SolveIKChainAnimNodeSettingSource
            public const nint m_OverrideSolverSettings = 0x14; // IKSolverSettings_t
            public const nint m_TargetSettingSource = 0x20; // SolveIKChainAnimNodeSettingSource
            public const nint m_OverrideTargetSettings = 0x28; // IKTargetSettings_t
            public const nint m_DebugSetting = 0x50; // SolveIKChainAnimNodeDebugSetting
            public const nint m_flDebugNormalizedLength = 0x54; // float32
            public const nint m_vDebugOffset = 0x58; // Vector
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_TargetSelectorNode {
            public const nint m_children = 0x40; // CUtlVector<CTargetSelectorChild>
            public const nint m_eLinearRootMotionMode = 0x58; // TargetWarpLinearRootMotionMode
            public const nint m_eAngleMode = 0x5C; // TargetSelectorAngleMode_t
            public const nint m_moveHeadingParamID = 0x60; // AnimParamID
            public const nint m_desiredMoveHeadingParamID = 0x64; // AnimParamID
            public const nint m_targetPositionParamID = 0x68; // AnimParamID
            public const nint m_bTargetPositionIsWorldSpace = 0x6C; // bool
            public const nint m_targetFacePositionParamID = 0x70; // AnimParamID
            public const nint m_bTargetFacePositionIsWorldSpace = 0x74; // bool
            public const nint m_bEnablePhaseMatching = 0x75; // bool
            public const nint m_flPhaseMatchingMaxRootMotionSkip = 0x78; // float32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_CurrentRotationVelocityMetric {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MPropertyCustomEditor
        public static class CSmartPropAttributePathPositions {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        public static class CAnimGraphDoc_PairedSequenceNode {
            public const nint m_sPairedRole = 0x48; // CGlobalSymbol
            public const nint m_previewSequenceName = 0x50; // CUtlString
            public const nint m_flPlaybackSpeed = 0x58; // float32
            public const nint m_bLoop = 0x5C; // bool
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_ParamSpanSample {
            public const nint m_value = 0x8; // CAnimVariant
            public const nint m_flCycle = 0x1C; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_TraceInDirection {
            public const nint m_vTraceDirection = 0x350; // CSmartPropAttributeVector
            public const nint m_DirectionSpace = 0x390; // CSmartPropAttributeCoordinateSpace
            public const nint m_flTraceLength = 0x3D0; // CSmartPropAttributeFloat
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAnimGraphDoc_NodeStateTransition {
            public const nint m_blendDuration = 0x70; // CFloatAnimValue
            public const nint m_bReset = 0x90; // bool
            public const nint m_resetCycleOption = 0x94; // ResetCycleOption
            public const nint m_flFixedCycleValue = 0x98; // CFloatAnimValue
            public const nint m_blendCurve = 0xB8; // CBlendCurve
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCPPScriptComponent {
            public const nint m_scriptsToRun = 0x38; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropFilter_SurfaceProperties {
            public const nint m_AllowedSurfaceProperties = 0x50; // CUtlVector<CUtlString>
            public const nint m_DisallowedSurfaceProperties = 0x68; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropVariable_SurfaceProperty {
            public const nint m_DefaultValue = 0x38; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MPropertyDescription
        // MVDataClassGroup
        public static class CSmartPropOperation_RandomOffset {
            public const nint m_vRandomPositionMin = 0x50; // CSmartPropAttributeVector
            public const nint m_vRandomPositionMax = 0x90; // CSmartPropAttributeVector
            public const nint m_vSnapIncrement = 0xD0; // CSmartPropAttributeVector
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataComponentValidGrandParents
        // MPropertyFriendlyName
        // MPropertyDescription
        public static class CSmartPropSelectionCriteria_TopoEdgeCountCriteria {
            public const nint m_nTargetOpenEdgeCount = 0x48; // CSmartPropAttributeInt
            public const nint m_bInvert = 0x88; // CSmartPropAttributeBool
            public const nint m_bSharedVert = 0xC8; // CSmartPropAttributeBool
        }
    }
}
