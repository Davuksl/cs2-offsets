// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: assetrename.dll
        // Class count: 380
        // Enum count: 35
        pub mod assetrename_dll {
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseBestOutflowRules_t {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum PulseCursorCancelPriority_t {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum PulseMethodCallMode_t {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SmartPropRadiusPlacementMode_t {
                SPHERE = 0x0,
                CIRCLE = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SmartPropPlaceMeshOrientationMode_t {
                FIRST_OPEN_EDGE = 0x0,
                FIRST_CLOSED_EDGE = 0x1,
                UVMAP1 = 0x2,
                UVMAP2 = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PickMode_t {
                LARGEST_FIRST = 0x0,
                RANDOM = 0x1,
                ALL_IN_ORDER = 0x2
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum SmartPropDeformableOrientMode_t {
                NONE = 0x0,
                FORWARD_NORMAL = 0x1,
                UP_NORMAL = 0x2,
                BACKWARD_NORMAL = 0x3,
                MAINTAIN_OFFSET = 0x4
            }
            // Alignment: 4
            // Member count: 7
            #[repr(u32)]
            pub enum Comparison_t {
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
            #[repr(u32)]
            pub enum ConfigurationHandleShape_t {
                NONE = 0x0,
                SQUARE = 0x1,
                CIRCLE = 0x2,
                DIAMOND = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SmartPropChoiceSelectionMode_t {
                RANDOM = 0x0,
                FIRST = 0x1,
                SPECIFIC = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SmartPropDistributionMode_t {
                RANDOM = 0x0,
                REGULAR = 0x1
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum ComparisonValueType {
                COMPARISONVALUETYPE_FIXEDVALUE = 0x0,
                COMPARISONVALUETYPE_PARAMETER = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum DampedValueType {
                FloatParameter = 0x0,
                VectorParameter = 0x1
            }
            // Alignment: 4
            // Member count: 5
            #[repr(u32)]
            pub enum StateValue {
                TotalTranslation_SourceState = 0x0,
                TotalTranslation_TargetState = 0x1,
                SourceStateBlendWeight = 0x2,
                TargetStateBlendWeight = 0x3,
                Count = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SmartPropDirection_t {
                FORWARD = 0x0,
                LEFT = 0x1,
                UP = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SmartPropPathPositions_t {
                ALL = 0x0,
                NTH = 0x1,
                START_AND_END = 0x2,
                CONTROL_POINTS = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum TargetWarpLinearRootMotionMode {
                TargetWarpLinearRootMotionMode_Default = 0x0,
                TargetWarpLinearRootMotionMode_FollowPath = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum FinishedConditionOption {
                FinishedConditionOption_OnFinished = 0x0,
                FinishedConditionOption_OnAlmostFinished = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum EAnimConflictIndex_t {
                EAC_FIRST = 0x0,
                EAC_SECOND = 0x1,
                EAC_COUNT = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SmartPropDeformableAttachMode_t {
                RELATIVE = 0x0,
                SNAP = 0x1,
                STIFFEN = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum AnimConflictType_t {
                NONE = 0x0,
                ID = 0x1,
                NAME = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum StateComparisonValueType {
                StateComparisonValue_FixedValue = 0x0,
                StateComparisonValue_StateValue = 0x1,
                StateComparisonValue_Parameter = 0x2
            }
            // Alignment: 4
            // Member count: 6
            #[repr(u32)]
            pub enum SmartPropDetailFadeLevel_t {
                NONE = 0x0,
                MOST_AGGRESSIVE = 0x1,
                MORE_AGGRESSIVE = 0x2,
                NORMAL = 0x3,
                LESS_AGGRESSIVE = 0x4,
                LEAST_AGGRESSIVE = 0x5
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SmartPropSpace_t {
                WORLD = 0x0,
                OBJECT = 0x1,
                ELEMENT = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum ApplyColorMode_t {
                MULTIPLY_OBJECT = 0x0,
                MULTIPLY_CURRENT = 0x1,
                REPLACE = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SolveIKChainAnimNodeSettingSource {
                SOLVEIKCHAINANIMNODESETTINGSOURCE_Default = 0x0,
                SOLVEIKCHAINANIMNODESETTINGSOURCE_Override = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SmartPropGridOriginBasis_t {
                CENTER = 0x0,
                CORNER = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum EAnimValueSource {
                Constant = 0x0,
                Parameter = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SingleFrameSelection {
                FirstFrame = 0x0,
                LastFrame = 0x1,
                SpecificFrame = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SmartPropColorSelectionMode_t {
                SPECIFIC_COLOR = 0x0,
                GRADIENT_RANDOM = 0x1,
                GRADIENT_RANDOM_STOP = 0x2,
                GRADIENT_LOCATION = 0x3
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum SmartPropGridPlacementMode_t {
                SEGMENT = 0x0,
                FILL = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum RemapValueType {
                FloatParameter = 0x0,
                VectorParameter = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum ScaleMode_t {
                NONE = 0x0,
                SCALE_END_TO_FIT = 0x1,
                SCALE_EQUALLY = 0x2,
                SCALE_MAXIMIZE = 0x3
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum TraceNoHitResult_t {
                NOTHING = 0x0,
                DISCARD = 0x1,
                MOVE_TO_START = 0x2,
                MOVE_TO_END = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SelectionSource_t {
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
            pub mod CPulseCell_WaitForCursorsWithTag {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Base {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
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
            pub mod CSmartPropPulse_FitOnLine {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 0
            pub mod CPulse_ResumePoint {
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
            pub mod CPulseCell_PickBestOutflowSelector {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 0
            pub mod CParticleBindingRealPulse {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_WaitForObservable {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            pub mod CSmartPropPulse_SelectionEndCap__Criteria_t {
                pub const m_bStart: usize = 0x0; // bool
                pub const m_bEnd: usize = 0x1; // bool
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropOperationAPI {
            }
            // Parent: None
            // Field count: 4
            pub mod CPulse_OutflowConnection {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 4
            pub mod CSmartPropPulse_SelectionLinearLength__Criteria_t {
                pub const m_flLength: usize = 0x0; // float32
                pub const m_bAllowScale: usize = 0x4; // bool
                pub const m_flMinLength: usize = 0x8; // float32
                pub const m_flMaxLength: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropPulse_SelectionChoiceWeight {
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseGraphDef {
                pub const m_DomainIdentifier: usize = 0x8; // PulseSymbol_t
                pub const m_DomainSubType: usize = 0x18; // CPulseValueFullType
                pub const m_ParentMapName: usize = 0x30; // PulseSymbol_t
                pub const m_ParentXmlName: usize = 0x40; // PulseSymbol_t
                pub const m_Chunks: usize = 0x50; // CUtlVector<CPulse_Chunk*>
                pub const m_Cells: usize = 0x68; // CUtlVector<CPulseCell_Base*>
                pub const m_Vars: usize = 0x80; // CUtlVector<CPulse_Variable>
                pub const m_PublicOutputs: usize = 0x98; // CUtlVector<CPulse_PublicOutput>
                pub const m_InvokeBindings: usize = 0xB0; // CUtlVector<CPulse_InvokeBinding*>
                pub const m_CallInfos: usize = 0xC8; // CUtlVector<CPulse_CallInfo*>
                pub const m_Constants: usize = 0xE0; // CUtlVector<CPulse_Constant>
                pub const m_DomainValues: usize = 0xF8; // CUtlVector<CPulse_DomainValue>
                pub const m_BlackboardReferences: usize = 0x110; // CUtlVector<CPulse_BlackboardReference>
                pub const m_OutputConnections: usize = 0x128; // CUtlVector<CPulse_OutputConnection*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropPulse_SelectionEndCap {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_FireCursors {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline__TimelineEvent_t {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IntervalTimer__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseRequirement {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_BaseState {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod OutflowWithRequirements_t {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_IsRequirementValid {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Gradient {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseCursorFuncs {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t__DynamicOutflow_t {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            pub mod CBasePulseGraphInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_GraphHook {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Resume {
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropOperation_MaterialReplacementAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_BaseEntrypoint {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_WaitForCursorsWithTagBase {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_InvokeBinding {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CSmartPropPulse_PlaceOnPath {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
                pub const m_PathName: usize = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropAPI {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_IntervalTimer {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseTestScriptLib {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            pub mod CEntityInstance {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub mod CSmartPropPulse_Group {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CPulseCell_Value_Curve {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EventHandler {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseFlow {
            }
            // Parent: None
            // Field count: 0
            pub mod CEntityComponent {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled__InstanceState_t {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseLerp__CursorState_t {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_WaitForCursorsWithTagBase__CursorState_t {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseArraylib {
            }
            // Parent: None
            // Field count: 0
            pub mod SignatureOutflow_Continue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Timeline {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_EntOutputHandler {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered__InstanceState_t {
                pub const m_nNextIndex: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropPulse_SmartProp {
                pub const m_hSmartProp: usize = 0x48; // CStrongHandle<InfoForResourceTypeCSmartProp>
            }
            // Parent: None
            // Field count: 0
            pub mod CParticleCollectionBindingInstance {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropPulse_CreateRotator {
                pub const m_Name: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_LimitCount__InstanceState_t {
                pub const m_nCurrentCount: usize = 0x0; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_DebugLog {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseYieldingInflow {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseNodeDynamicOutflows_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_IsRequirementValid__Criteria_t {
                pub const m_bIsValid: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_ObservableVariableListener {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleOrdered {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseSelectorOutflowList_t {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropPulse_CriteriaPathPosition {
            }
            // Parent: CEntityComponent
            // Field count: 1
            pub mod CScriptComponent {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
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
            pub mod CPulseCell_Inflow_Wait {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleShuffled {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Method {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmartPropPulse_BaseQueryableFlow {
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropExprAPI {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_BaseValue {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub mod CPulseCell_BooleanSwitchState {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_Always: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Inflow_Yield {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub mod CPulseMathlib {
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_Unknown {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Outflow_CycleRandom {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_PublicOutput {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropPulse_PlaceInSphere {
                pub const m_Place: usize = 0x48; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropFilterAPI {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_BlackboardReference {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            pub mod CSmartPropPulse_CriteriaPathPosition__Criteria_t {
                pub const m_PlaceAtPositions: usize = 0x0; // SmartPropPathPositions_t
                pub const m_nPlaceEveryNthPosition: usize = 0x4; // int32
                pub const m_nNthPositionIndexOffset: usize = 0x8; // int32
                pub const m_bAllowAtStart: usize = 0xC; // bool
                pub const m_bAllowAtEnd: usize = 0xD; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomInt {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimationLayer {
                pub const m_hSequence: usize = 0x0; // CAnimNetVar<int32>
                pub const m_flPrevCycle: usize = 0xC; // float32
                pub const m_flCycle: usize = 0x10; // CAnimNetVar<float32>
                pub const m_flWeight: usize = 0x1C; // CAnimNetVar<float32>
                pub const m_nOrder: usize = 0x28; // CAnimNetVar<int32>
                pub const m_bLooping: usize = 0x34; // bool
                pub const m_nFlags: usize = 0x38; // int32
                pub const m_bSequenceFinished: usize = 0x3C; // bool
                pub const m_flKillRate: usize = 0x40; // float32
                pub const m_flKillDelay: usize = 0x44; // float32
                pub const m_nPriority: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulse_CallInfo {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropPulse_CreateLocator {
                pub const m_LocatorName: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_InlineNodeSkipSelector {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            }
            // Parent: None
            // Field count: 1
            pub mod CSmartPropPulse_SelectionChoiceWeight__Criteria_t {
                pub const m_flWeight: usize = 0x0; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CPulseCell_LimitCount {
                pub const m_nLimitCount: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseCell_Step_CallExternalMethod {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x70; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x78; // CPulse_ResumePoint
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropPulse_CreateSizer {
                pub const m_Name: usize = 0x48; // CUtlString
                pub const m_bHACK_ProvideResultMinX: usize = 0x50; // bool
                pub const m_bHACK_ProvideResultMaxX: usize = 0x51; // bool
                pub const m_bHACK_ProvideResultMinY: usize = 0x52; // bool
                pub const m_bHACK_ProvideResultMaxY: usize = 0x53; // bool
                pub const m_bHACK_ProvideResultMinZ: usize = 0x54; // bool
                pub const m_bHACK_ProvideResultMaxZ: usize = 0x55; // bool
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
            pub mod CSmartPropPulse_PickOneSelector {
                pub const m_HandleShape: usize = 0x48; // ConfigurationHandleShape_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod PulseObservableBoolExpression_t {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            }
            // Parent: None
            // Field count: 1
            pub mod CPulseCell_LimitCount__Criteria_t {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            }
            // Parent: None
            // Field count: 12
            pub mod CEntityIdentity {
                pub const m_nameStringTableIndex: usize = 0x14; // int32
                pub const m_name: usize = 0x18; // CUtlSymbolLarge
                pub const m_designerName: usize = 0x20; // CUtlSymbolLarge
                pub const m_flags: usize = 0x30; // uint32
                pub const m_worldGroupId: usize = 0x38; // WorldGroupId_t
                pub const m_fDataObjectTypes: usize = 0x3C; // uint32
                pub const m_PathIndex: usize = 0x40; // ChangeAccessorFieldPathIndex_t
                pub const m_pAttributes: usize = 0x48; // CEntityAttributeTable*
                pub const m_pPrev: usize = 0x50; // CEntityIdentity*
                pub const m_pNext: usize = 0x58; // CEntityIdentity*
                pub const m_pPrevByClass: usize = 0x60; // CEntityIdentity*
                pub const m_pNextByClass: usize = 0x68; // CEntityIdentity*
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseGraphInstance_SmartPropEval {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_CursorQueue {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub mod CPulseCell_Value_RandomFloat {
            }
            // Parent: None
            // Field count: 0
            pub mod CPulseExecCursor {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropPulse_SelectionLinearLength {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StopAtGoalNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flOuterRadius: usize = 0x48; // float32
                pub const m_flInnerRadius: usize = 0x4C; // float32
                pub const m_flMaxScale: usize = 0x50; // float32
                pub const m_flMinScale: usize = 0x54; // float32
                pub const m_damping: usize = 0x58; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ComponentState {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeTintColor
            pub mod CSmartPropTransformOperation {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SequenceNode {
                pub const m_tagSpans: usize = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_paramSpans: usize = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                pub const m_sequenceName: usize = 0xA0; // CUtlString
                pub const m_playbackSpeed: usize = 0xA8; // float32
                pub const m_bLoop: usize = 0xAC; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimScriptComponent {
                pub const m_sName: usize = 0x38; // CUtlString
                pub const m_scriptFilename: usize = 0x40; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_ChoiceWeight {
                pub const m_flWeight: usize = 0x48; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CFootLockItem {
                pub const m_footName: usize = 0x0; // CUtlString
                pub const m_targetBoneName: usize = 0x8; // CUtlString
                pub const m_ikChainName: usize = 0x10; // CUtlString
                pub const m_disableTagName: usize = 0x18; // CGlobalSymbol
                pub const m_disableTagID: usize = 0x20; // AnimTagID
                pub const m_flMaxRotationLeft: usize = 0x24; // float32
                pub const m_flMaxRotationRight: usize = 0x28; // float32
                pub const m_footstepLandedTagName: usize = 0x30; // CGlobalSymbol
                pub const m_footstepLandedTag: usize = 0x38; // AnimTagID
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CRemapValueItem {
                pub const m_valueType: usize = 0x0; // RemapValueType
                pub const m_floatParamNameIn: usize = 0x8; // CUtlString
                pub const m_floatParamNameOut: usize = 0x10; // CUtlString
                pub const m_vectorParamNameIn: usize = 0x18; // CUtlString
                pub const m_vectorParamNameOut: usize = 0x20; // CUtlString
                pub const m_floatParamIn: usize = 0x28; // AnimParamID
                pub const m_floatParamOut: usize = 0x2C; // AnimParamID
                pub const m_vectorParamIn: usize = 0x30; // AnimParamID
                pub const m_vectorParamOut: usize = 0x34; // AnimParamID
                pub const m_flMinInputValue: usize = 0x38; // float32
                pub const m_flMaxInputValue: usize = 0x3C; // float32
                pub const m_flMinOutputValue: usize = 0x40; // float32
                pub const m_flMaxOutputValue: usize = 0x44; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateAction {
                pub const m_pAction: usize = 0x8; // CSmartPtr<CAnimGraphDoc_Action>
                pub const m_eBehavior: usize = 0x10; // StateActionBehavior
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmartPropOperation_Trace {
                pub const m_Origin: usize = 0x50; // CSmartPropAttributeVector
                pub const m_OriginSpace: usize = 0x90; // CSmartPropAttributeCoordinateSpace
                pub const m_flOriginOffset: usize = 0xD0; // CSmartPropAttributeFloat
                pub const m_flSurfaceUpInfluence: usize = 0x110; // CSmartPropAttributeFloat
                pub const m_nNoHitResult: usize = 0x150; // CSmartPropAttributeTraceNoHit
                pub const m_bIgnoreToolMaterials: usize = 0x190; // CSmartPropAttributeBool
                pub const m_bIgnoreSky: usize = 0x1D0; // CSmartPropAttributeBool
                pub const m_bIgnoreNoDraw: usize = 0x210; // CSmartPropAttributeBool
                pub const m_bIgnoreTranslucent: usize = 0x250; // CSmartPropAttributeBool
                pub const m_bIgnoreModels: usize = 0x290; // CSmartPropAttributeBool
                pub const m_bIgnoreEntities: usize = 0x2D0; // CSmartPropAttributeBool
                pub const m_bIgnoreCables: usize = 0x310; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SaveScale {
                pub const m_VariableName: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PlaceInSphere {
                pub const m_PlacementMode: usize = 0xA0; // CSmartPropAttributeRadiusPlacementMode
                pub const m_DistributionMode: usize = 0xE0; // CSmartPropAttributeDistributionMode
                pub const m_flRandomness: usize = 0x120; // CSmartPropAttributeFloat
                pub const m_vPlaneUpDirection: usize = 0x160; // CSmartPropAttributeVector
                pub const m_nCountMin: usize = 0x1A0; // CSmartPropAttributeInt
                pub const m_nCountMax: usize = 0x1E0; // CSmartPropAttributeInt
                pub const m_flPositionRadiusInner: usize = 0x220; // CSmartPropAttributeFloat
                pub const m_flPositionRadiusOuter: usize = 0x260; // CSmartPropAttributeFloat
                pub const m_bAlignOrientation: usize = 0x2A0; // CSmartPropAttributeBool
                pub const m_vAlignDirection: usize = 0x2E0; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StanceScaleNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_paramName: usize = 0x48; // CUtlString
                pub const m_param: usize = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeChoiceSelectionMode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_CreateLocator {
                pub const m_LocatorName: usize = 0x50; // CUtlString
                pub const m_vOffset: usize = 0x58; // CSmartPropAttributeVector
                pub const m_flDisplayScale: usize = 0x98; // CSmartPropAttributeFloat
                pub const m_bConfigurable: usize = 0xD8; // CSmartPropAttributeBool
                pub const m_bAllowTranslation: usize = 0x118; // CSmartPropAttributeBool
                pub const m_bAllowRotation: usize = 0x158; // CSmartPropAttributeBool
                pub const m_bAllowScale: usize = 0x198; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_EdgeAngleCriteria {
                pub const m_flMinAngle: usize = 0x48; // CSmartPropAttributeFloat
                pub const m_flMaxAngle: usize = 0x88; // CSmartPropAttributeFloat
                pub const m_bInvert: usize = 0xC8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeGridOriginMode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ContainerNodeBase {
                pub const m_inputNodeID: usize = 0x48; // AnimNodeID
                pub const m_outputNodeID: usize = 0x4C; // AnimNodeID
                pub const m_inputConnectionMap: usize = 0x50; // CUtlHashtable<AnimNodeOutputID,CAnimGraphDoc_NodeConnection>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_String {
                pub const m_DefaultValue: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_NodeList {
                pub const m_nodes: usize = 0x10; // CUtlVector<CAnimGraphDoc_Node*>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_Layout2DGrid {
                pub const m_flWidth: usize = 0xA0; // CSmartPropAttributeFloat
                pub const m_flLength: usize = 0xE0; // CSmartPropAttributeFloat
                pub const m_bVerticalLength: usize = 0x120; // CSmartPropAttributeBool
                pub const m_GridArrangement: usize = 0x160; // CSmartPropAttributeGridPlacementMode
                pub const m_GridOriginMode: usize = 0x1A0; // CSmartPropAttributeGridOriginMode
                pub const m_nCountW: usize = 0x1E0; // CSmartPropAttributeInt
                pub const m_nCountL: usize = 0x220; // CSmartPropAttributeInt
                pub const m_flSpacingWidth: usize = 0x260; // CSmartPropAttributeFloat
                pub const m_flSpacingLength: usize = 0x2A0; // CSmartPropAttributeFloat
                pub const m_bAlternateShift: usize = 0x2E0; // CSmartPropAttributeBool
                pub const m_flAlternateShiftWidth: usize = 0x320; // CSmartPropAttributeFloat
                pub const m_flAlternateShiftLength: usize = 0x360; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_MotionItem {
                pub const m_paramManager: usize = 0x28; // CAnimGraphDoc_MotionParameterManager
                pub const m_blockSpans: usize = 0x50; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_tagSpans: usize = 0x68; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_paramSpans: usize = 0x80; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                pub const m_bLoop: usize = 0xA0; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_ScaleMode {
                pub const m_DefaultValue: usize = 0x38; // ScaleMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_MaterialGroup {
                pub const m_sModelName: usize = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_DefaultValue: usize = 0x118; // CModelMaterialGroupName
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_DirectPlaybackNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_bFinishEarly: usize = 0x48; // bool
                pub const m_bResetOnFinish: usize = 0x49; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_RandomColorTintColor {
                pub const m_SelectionMode: usize = 0x50; // CSmartPropAttributeChoiceSelectionMode
                pub const m_ColorPosition: usize = 0x90; // CSmartPropAttributeFloat
                pub const m_Mode: usize = 0xD0; // ApplyColorMode_t
                pub const m_Gradient: usize = 0xD8; // CColorGradient
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootPinningNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_items: usize = 0x48; // CUtlVector<CFootPinningItem>
                pub const m_eTimingSource: usize = 0x60; // FootPinningTimingSource
                pub const m_flBlendTime: usize = 0x64; // float32
                pub const m_flLockBreakDistance: usize = 0x68; // float32
                pub const m_flMaxLegStraightAmount: usize = 0x6C; // float32
                pub const m_bApplyFootRotationLimits: usize = 0x70; // bool
                pub const m_hipBoneName: usize = 0x78; // CUtlString
                pub const m_bApplyLegTwistLimits: usize = 0x80; // bool
                pub const m_flMaxLegTwist: usize = 0x84; // float32
                pub const m_bResetChild: usize = 0x88; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FollowAttachmentNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_boneName: usize = 0x48; // CUtlString
                pub const m_attachmentName: usize = 0x50; // CUtlString
                pub const m_bMatchTranslation: usize = 0x58; // bool
                pub const m_bMatchRotation: usize = 0x59; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_RandomRotation {
                pub const m_vRandomRotationMin: usize = 0x50; // CSmartPropAttributeAngles
                pub const m_vRandomRotationMax: usize = 0x90; // CSmartPropAttributeAngles
                pub const m_vSnapIncrement: usize = 0xD0; // CSmartPropAttributeAngles
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SolveIKChainNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_IkChains: usize = 0x48; // CUtlVector<CSolveIKChainAnimNodeChainData>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_IsValid {
                pub const m_Expression: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FollowTargetNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_boneName: usize = 0x48; // CUtlString
                pub const m_TargetSettings: usize = 0x50; // IKTargetSettings_t
                pub const m_bMatchTargetOrientation: usize = 0x78; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Condition {
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
            pub mod CSmartPropOperation_RestoreState {
                pub const m_StateName: usize = 0x50; // CSmartPropAttributeStateName
                pub const m_bDiscardIfUknown: usize = 0x90; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SetPosition {
                pub const m_vPosition: usize = 0x50; // CSmartPropAttributeVector
                pub const m_CoordinateSpace: usize = 0x90; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ClipDataManager {
                pub const m_itemTable: usize = 0x10; // CUtlHashtable<CUtlString,CSmartPtr<CAnimGraphDoc_ClipData>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_ChoiceSelectionMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropChoiceSelectionMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeGridPlacementMode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_PathHelperNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flStoppingRadius: usize = 0x48; // float32
                pub const m_flStoppingSpeedScale: usize = 0x4C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootCycleMetric {
                pub const m_feet: usize = 0x28; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDampedValueComponent {
                pub const m_name: usize = 0x38; // CUtlString
                pub const m_items: usize = 0x40; // CUtlVector<CDampedValueItem>
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
            pub mod CSmartPropOperation_RotateTowards {
                pub const m_vOriginPos: usize = 0x50; // CSmartPropAttributeVector
                pub const m_vTargetPos: usize = 0x90; // CSmartPropAttributeVector
                pub const m_vUpPos: usize = 0xD0; // CSmartPropAttributeVector
                pub const m_flWeight: usize = 0x110; // CSmartPropAttributeFloat
                pub const m_OriginSpace: usize = 0x150; // CSmartPropAttributeCoordinateSpace
                pub const m_TargetSpace: usize = 0x190; // CSmartPropAttributeCoordinateSpace
                pub const m_UpSpace: usize = 0x1D0; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ParameterCondition {
                pub const m_paramName: usize = 0x28; // CUtlString
                pub const m_paramID: usize = 0x30; // AnimParamID
                pub const m_comparisonOp: usize = 0x34; // Comparison_t
                pub const m_comparisonValue: usize = 0x38; // CAnimVariant
                pub const m_comparisonString: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SlowDownOnSlopesNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flSlowDownStrength: usize = 0x48; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_NodeBlend2DItem {
                pub const m_inputConnection: usize = 0x30; // CAnimGraphDoc_NodeConnection
                pub const m_name: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimConflictBase {
                pub const m_sConflictDesc: usize = 0x18; // CUtlString
                pub const m_nResolveIdx: usize = 0x20; // int32
                pub const m_conflictData: usize = 0x28; // CAnimConflictInfo_t[2]
                pub const m_eConflictType: usize = 0x68; // AnimConflictType_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmartPropChoiceOption {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_DisplayName: usize = 0x8; // CUtlString
                pub const m_VariableValues: usize = 0x10; // CUtlVector<CSmartPropAttributeVariableValue>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_MaterialOverride {
                pub const m_bClearCurrentOverrides: usize = 0x50; // CSmartPropAttributeBool
                pub const m_MaterialReplacements: usize = 0x90; // CUtlVector<CSmartPropMaterialReplacement>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_GridPlacementMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropGridPlacementMode_t
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_MoverNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_bApplyMovement: usize = 0x48; // bool
                pub const m_moveVectorParamName: usize = 0x50; // CUtlString
                pub const m_moveVectorParam: usize = 0x58; // AnimParamID
                pub const m_bOrientMovement: usize = 0x5C; // bool
                pub const m_moveHeadingParamName: usize = 0x60; // CUtlString
                pub const m_moveHeadingParam: usize = 0x68; // AnimParamID
                pub const m_bAdditive: usize = 0x6C; // bool
                pub const m_bTurnToFace: usize = 0x6D; // bool
                pub const m_facingTarget: usize = 0x70; // AnimValueSource
                pub const m_paramName: usize = 0x78; // CUtlString
                pub const m_param: usize = 0x80; // AnimParamID
                pub const m_bLimitOnly: usize = 0x84; // bool
                pub const m_flTurnToFaceOffset: usize = 0x88; // float32
                pub const m_flTurnToFaceLimit: usize = 0x8C; // float32
                pub const m_damping: usize = 0x90; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimParameterConflict {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeColorSelectionMode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Node {
                pub const m_sName: usize = 0x20; // CUtlString
                pub const m_vecPosition: usize = 0x28; // Vector2D
                pub const m_nNodeID: usize = 0x30; // AnimNodeID
                pub const m_bDebugThisNode: usize = 0x34; // bool
                pub const m_networkMode: usize = 0x38; // AnimNodeNetworkMode
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SaveSurfaceNormal {
                pub const m_CoordinateSpace: usize = 0x50; // CSmartPropAttributeCoordinateSpace
                pub const m_VariableName: usize = 0x90; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MVDataOutlinerNameExpr
            pub mod CSmartPropVariable {
                pub const m_VariableName: usize = 0x10; // CUtlString
                pub const m_bExposeAsParameter: usize = 0x18; // bool
                pub const m_DisplayName: usize = 0x20; // CUtlString
                pub const m_HideExpression: usize = 0x28; // CUtlString
                pub const m_ReadOnlyExpression: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BlendNode {
                pub const m_children: usize = 0x50; // CUtlVector<CBlendNodeChild>
                pub const m_blendValueSource: usize = 0x68; // AnimValueSource
                pub const m_paramName: usize = 0x70; // CUtlString
                pub const m_param: usize = 0x78; // AnimParamID
                pub const m_blendKeyType: usize = 0x7C; // BlendKeyType
                pub const m_bLockBlendOnReset: usize = 0x80; // bool
                pub const m_bSyncCycles: usize = 0x81; // bool
                pub const m_bLoop: usize = 0x82; // bool
                pub const m_bLockWhenWaning: usize = 0x83; // bool
                pub const m_bIsAngle: usize = 0x84; // bool
                pub const m_damping: usize = 0x88; // CAnimInputDamping
                pub const m_eLinearRootMotionBlendMode: usize = 0xA0; // LinearRootMotionBlendMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_JiggleBoneNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_items: usize = 0x48; // CUtlVector<CJiggleBoneItem>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_LeanMatrixNode {
                pub const m_sequenceName: usize = 0x48; // CUtlString
                pub const m_flMaxValue: usize = 0x50; // float32
                pub const m_blendSource: usize = 0x54; // AnimVectorSource
                pub const m_paramName: usize = 0x58; // CUtlString
                pub const m_param: usize = 0x60; // AnimParamID
                pub const m_verticalAxisDirection: usize = 0x64; // Vector
                pub const m_horizontalAxisDirection: usize = 0x70; // Vector
                pub const m_damping: usize = 0x80; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_VertexCountCriteria {
                pub const m_nTargetVertexCount: usize = 0x48; // CSmartPropAttributeInt
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ResetScale {
                pub const m_bIgnoreObjectScale: usize = 0x50; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 38
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootLockNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_items: usize = 0x48; // CUtlVector<CFootLockItem>
                pub const m_hipBoneName: usize = 0x60; // CUtlString
                pub const m_flBlendTime: usize = 0x68; // float32
                pub const m_bApplyFootRotationLimits: usize = 0x6C; // bool
                pub const m_bResetChild: usize = 0x6D; // bool
                pub const m_ikSolverType: usize = 0x70; // IKSolverType
                pub const m_bAlwaysUseFallbackHinge: usize = 0x74; // bool
                pub const m_bApplyLegTwistLimits: usize = 0x75; // bool
                pub const m_flMaxLegTwist: usize = 0x78; // float32
                pub const m_flStrideCurveScale: usize = 0x7C; // float32
                pub const m_flStrideCurveLimitScale: usize = 0x80; // float32
                pub const m_bEnableVerticalCurvedPaths: usize = 0x84; // bool
                pub const m_bModulateStepHeight: usize = 0x85; // bool
                pub const m_flStepHeightIncreaseScale: usize = 0x88; // float32
                pub const m_flStepHeightDecreaseScale: usize = 0x8C; // float32
                pub const m_bEnableHipShift: usize = 0x90; // bool
                pub const m_flHipShiftScale: usize = 0x94; // float32
                pub const m_hipShiftDamping: usize = 0x98; // CAnimInputDamping
                pub const m_bApplyTilt: usize = 0xB0; // bool
                pub const m_flTiltPlanePitchSpringStrength: usize = 0xB4; // float32
                pub const m_flTiltPlaneRollSpringStrength: usize = 0xB8; // float32
                pub const m_bEnableLockBreaking: usize = 0xBC; // bool
                pub const m_flLockBreakTolerance: usize = 0xC0; // float32
                pub const m_flLockBreakBlendTime: usize = 0xC4; // float32
                pub const m_bEnableStretching: usize = 0xC8; // bool
                pub const m_flMaxStretchAmount: usize = 0xCC; // float32
                pub const m_flStretchExtensionScale: usize = 0xD0; // float32
                pub const m_bEnableGroundTracing: usize = 0xD4; // bool
                pub const m_flTraceAngleBlend: usize = 0xD8; // float32
                pub const m_bApplyHipDrop: usize = 0xDC; // bool
                pub const m_flMaxFootHeight: usize = 0xE0; // float32
                pub const m_flExtensionScale: usize = 0xE4; // float32
                pub const m_hipDampingSettings: usize = 0xE8; // CAnimInputDamping
                pub const m_bEnableRootHeightDamping: usize = 0x100; // bool
                pub const m_rootHeightDamping: usize = 0x108; // CAnimInputDamping
                pub const m_flMaxRootHeightOffset: usize = 0x120; // float32
                pub const m_flMinRootHeightOffset: usize = 0x124; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeDistributionMode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRemapValueComponent {
                pub const m_name: usize = 0x38; // CUtlString
                pub const m_items: usize = 0x40; // CUtlVector<CRemapValueItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_EmitTagAction {
                pub const m_tag: usize = 0x28; // AnimTagID
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLookComponent {
                pub const m_bNetworkLookTarget: usize = 0x38; // bool
                pub const m_lookHeadingID: usize = 0x3C; // AnimParamID
                pub const m_lookHeadingNormalizedID: usize = 0x40; // AnimParamID
                pub const m_lookHeadingVelocityID: usize = 0x44; // AnimParamID
                pub const m_lookPitchID: usize = 0x48; // AnimParamID
                pub const m_lookDistanceID: usize = 0x4C; // AnimParamID
                pub const m_lookDirectionID: usize = 0x50; // AnimParamID
                pub const m_lookTargetID: usize = 0x54; // AnimParamID
                pub const m_lookTargetWorldSpaceID: usize = 0x58; // AnimParamID
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_PathMotor {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_TagManager {
                pub const m_tags: usize = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StateTransition {
                pub const m_conditionList: usize = 0x28; // CAnimGraphDoc_ConditionContainer
                pub const m_srcState: usize = 0x58; // AnimStateID
                pub const m_destState: usize = 0x5C; // AnimStateID
                pub const m_sComment: usize = 0x60; // CUtlString
                pub const m_bDisabled: usize = 0x68; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeRadiusPlacementMode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CFootStepTriggerItem {
                pub const m_footName: usize = 0x0; // CUtlString
                pub const m_triggerPhase: usize = 0x8; // StepPhase
                pub const m_tagNames: usize = 0x10; // CUtlVector<CGlobalSymbol>
                pub const m_tagIDs: usize = 0x28; // CUtlVector<AnimTagID>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StateMachine {
                pub const m_states: usize = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_State>>
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TwoBoneIKNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_ikChainName: usize = 0x48; // CUtlString
                pub const m_bAutoDetectHingeAxis: usize = 0x50; // bool
                pub const m_endEffectorType: usize = 0x54; // IkEndEffectorType
                pub const m_endEffectorAttachmentName: usize = 0x58; // CUtlString
                pub const m_targetType: usize = 0x60; // IkTargetType
                pub const m_attachmentName: usize = 0x68; // CUtlString
                pub const m_targetBoneName: usize = 0x70; // CUtlString
                pub const m_targetParamName: usize = 0x78; // CUtlString
                pub const m_targetParam: usize = 0x80; // AnimParamID
                pub const m_bMatchTargetOrientation: usize = 0x84; // bool
                pub const m_rotationParamName: usize = 0x88; // CUtlString
                pub const m_rotationParam: usize = 0x90; // AnimParamID
                pub const m_bConstrainTwist: usize = 0x94; // bool
                pub const m_flMaxTwist: usize = 0x98; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_MotionItemGroup {
                pub const m_motions: usize = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItem>>
                pub const m_name: usize = 0x38; // CUtlString
                pub const m_conditions: usize = 0x40; // CAnimGraphDoc_ConditionContainer
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ComponentStateTransition {
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
            pub mod CSmartPropOperation_SetVariable {
                pub const m_VariableValue: usize = 0x50; // CSmartPropAttributeVariableValue
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_DistributionMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropDistributionMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_InputStreamNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_Scale {
                pub const m_flScale: usize = 0x50; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SetTintColor {
                pub const m_SelectionMode: usize = 0x50; // CSmartPropAttributeChoiceSelectionMode
                pub const m_ColorSelection: usize = 0x90; // CSmartPropAttributeInt
                pub const m_Mode: usize = 0xD0; // CSmartPropAttributeApplyColorMode
                pub const m_ColorChoices: usize = 0x110; // CUtlVector<ColorChoice_t>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_RigidBodyWeightList {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_weights: usize = 0x10; // CUtlVector<CRigidBodyWeight>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ChoreoNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_RootNode {
                pub const m_inputConnection: usize = 0x50; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_ApplyColorMode {
                pub const m_DefaultValue: usize = 0x38; // ApplyColorMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SaveColor {
                pub const m_VariableName: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootAdjustmentNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_facingTargetParam: usize = 0x48; // CUtlString
                pub const m_facingTarget: usize = 0x50; // AnimParamID
                pub const m_bResetChild: usize = 0x54; // bool
                pub const m_bAnimationDriven: usize = 0x55; // bool
                pub const m_baseClipName: usize = 0x58; // CUtlString
                pub const m_clips: usize = 0x60; // CUtlVector<CUtlString>
                pub const m_flTurnTimeMin: usize = 0x78; // float32
                pub const m_flTurnTimeMax: usize = 0x7C; // float32
                pub const m_flStepHeightMax: usize = 0x80; // float32
                pub const m_flStepHeightMaxAngle: usize = 0x84; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_DampedPathMotor {
                pub const m_flAnticipationTime: usize = 0x38; // float32
                pub const m_flMinSpeedScale: usize = 0x3C; // float32
                pub const m_anticipationPosParamName: usize = 0x40; // CUtlString
                pub const m_anticipationPosParam: usize = 0x48; // AnimParamID
                pub const m_anticipationHeadingParamName: usize = 0x50; // CUtlString
                pub const m_anticipationHeadingParam: usize = 0x58; // AnimParamID
                pub const m_flSpringConstant: usize = 0x5C; // float32
                pub const m_flMinSpringTension: usize = 0x60; // float32
                pub const m_flMaxSpringTension: usize = 0x64; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CJiggleBoneItem {
                pub const m_boneName: usize = 0x0; // CUtlString
                pub const m_flSpringStrength: usize = 0x8; // float32
                pub const m_flSimRateFPS: usize = 0xC; // float32
                pub const m_flDamping: usize = 0x10; // float32
                pub const m_eSimSpace: usize = 0x14; // JiggleBoneSimSpace
                pub const m_vBoundsMaxLS: usize = 0x18; // Vector
                pub const m_vBoundsMinLS: usize = 0x24; // Vector
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SetMateraialGroupChoice {
                pub const m_VariableName: usize = 0x50; // CUtlString
                pub const m_SelectionMode: usize = 0x58; // CSmartPropAttributeChoiceSelectionMode
                pub const m_ChoiceSelection: usize = 0x98; // CSmartPropAttributeInt
                pub const m_MaterialGroupChoices: usize = 0xD8; // CUtlVector<MaterialGroupChoice_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_VariableValue {
                pub const m_VariableComparison: usize = 0x50; // CSmartPropVariableComparison
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeApplyColorMode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSlopeComponent {
                pub const m_flTraceDistance: usize = 0x38; // float32
                pub const m_slopeAngleID: usize = 0x3C; // AnimParamID
                pub const m_slopeHeadingID: usize = 0x40; // AnimParamID
                pub const m_slopeAngleSideID: usize = 0x44; // AnimParamID
                pub const m_slopeAngleFrontID: usize = 0x48; // AnimParamID
                pub const m_slopeNormalID: usize = 0x4C; // AnimParamID
                pub const m_slopeNormal_WorldSpaceID: usize = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SaveDirection {
                pub const m_DirectionVector: usize = 0x50; // CSmartPropAttributeDirection
                pub const m_CoordinateSpace: usize = 0x90; // CSmartPropAttributeCoordinateSpace
                pub const m_VariableName: usize = 0xD0; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StateMachineNode {
                pub const m_bBlockWaningTags: usize = 0x68; // bool
                pub const m_bLockStateWhenWaning: usize = 0x69; // bool
                pub const m_bResetWhenActivated: usize = 0x6A; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_GridOriginMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropGridOriginBasis_t
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataOutlinerAssetNameExpr
            pub mod CSmartPropElement_Model {
                pub const m_sModelName: usize = 0x88; // CSmartPropAttributeModelName
                pub const m_MaterialGroupName: usize = 0xC8; // CSmartPropAttributeMaterialGroup
                pub const m_bDetailObject: usize = 0x108; // CSmartPropAttributeBool
                pub const m_vModelScale: usize = 0x148; // CSmartPropAttributeVector
                pub const m_flUniformModelScale: usize = 0x188; // CSmartPropAttributeFloat
                pub const m_nLodLevel: usize = 0x1C8; // CSmartPropAttributeInt
                pub const m_SurfacePropertyOverride: usize = 0x208; // CSmartPropAttributeSurfaceProperty
                pub const m_nDetailObjectFadeLevel: usize = 0x248; // SmartPropDetailFadeLevel_t
                pub const m_bCastShadows: usize = 0x250; // CSmartPropAttributeBool
                pub const m_bRigidDeformation: usize = 0x290; // CSmartPropAttributeBool
                pub const m_bDisableDynamicDeformable: usize = 0x2D0; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_MaterialCriteria {
                pub const m_material: usize = 0x48; // CSmartPropAttributeMaterialName
                pub const m_bInvert: usize = 0x88; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CommentNode {
                pub const m_commentText: usize = 0x40; // CUtlString
                pub const m_size: usize = 0x48; // Vector2D
                pub const m_color: usize = 0x50; // Color
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Angles {
                pub const m_DefaultValue: usize = 0x38; // QAngle
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeOrientationMode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmartPropOperation {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRagdollComponent {
                pub const m_weightLists: usize = 0x38; // CUtlVector<CAnimGraphDoc_RigidBodyWeightList>
                pub const m_flSpringFrequencyMin: usize = 0x50; // float32
                pub const m_flSpringFrequencyMax: usize = 0x54; // float32
                pub const m_flMaxStretch: usize = 0x58; // float32
                pub const m_bSolidCollisionAtZeroWeight: usize = 0x5C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropVariable_Model {
                pub const m_DefaultValue: usize = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_EndCap {
                pub const m_bStart: usize = 0x48; // CSmartPropAttributeBool
                pub const m_bEnd: usize = 0x88; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeProjectVector3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_OutputCoordinateSpace: usize = 0x58; // CSmartPropAttributeCoordinateSpace
                pub const m_InputVectorA: usize = 0x98; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceA: usize = 0xD8; // CSmartPropAttributeCoordinateSpace
                pub const m_InputVectorB: usize = 0x118; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceB: usize = 0x158; // CSmartPropAttributeCoordinateSpace
                pub const m_bPlane: usize = 0x198; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeScaleMode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_StateList {
                pub const m_states: usize = 0x10; // CUtlVector<CAnimGraphDoc_State*>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ExpressionAction {
                pub const m_paramName: usize = 0x28; // CUtlString
                pub const m_param: usize = 0x30; // AnimParamID
                pub const m_expression: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_Expression {
                pub const m_Expression: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeDotProduct3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_InputVectorA: usize = 0x58; // CSmartPropAttributeVector
                pub const m_InputVectorB: usize = 0x98; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Bool {
                pub const m_DefaultValue: usize = 0x38; // bool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CycleControlClipNode {
                pub const m_tagSpans: usize = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_sequenceName: usize = 0x70; // CUtlString
                pub const m_valueSource: usize = 0x78; // AnimValueSource
                pub const m_paramName: usize = 0x80; // CUtlString
                pub const m_param: usize = 0x88; // AnimParamID
                pub const m_bLockWhenWaning: usize = 0x8C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Vector2D {
                pub const m_DefaultValue: usize = 0x38; // Vector2D
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
            pub mod CSmartPropOperation_RigidDeformation {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_Group {
                pub const m_Children: usize = 0x88; // CUtlVector<CSmartPropElement*>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_State {
                pub const m_transitions: usize = 0x28; // CUtlVector<CSmartPtr<CAnimGraphDoc_StateTransition>>
                pub const m_actions: usize = 0x40; // CUtlVector<CStateAction>
                pub const m_name: usize = 0x58; // CUtlString
                pub const m_sComment: usize = 0x60; // CUtlString
                pub const m_stateID: usize = 0x68; // AnimStateID
                pub const m_position: usize = 0x6C; // Vector2D
                pub const m_bIsStartState: usize = 0x74; // bool
                pub const m_bIsEndtState: usize = 0x75; // bool
                pub const m_bIsInputToGraph: usize = 0x76; // bool
                pub const m_bIsPassthrough: usize = 0x77; // bool
                pub const m_bIsPassthroughRootMotion: usize = 0x78; // bool
                pub const m_bPreEvaluatePassthroughTransitionPath: usize = 0x79; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CDemoSettingsComponent {
                pub const m_settings: usize = 0x38; // CAnimDemoCaptureSettings
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_MotionParameterManager {
                pub const m_params: usize = 0x10; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionParameter>>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataOutlinerAssetNameExpr
            pub mod CSmartPropElement_SmartProp {
                pub const m_sSmartProp: usize = 0x88; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCSmartProp>>
                pub const m_bLocalEvaluationState: usize = 0x168; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SpeedScaleNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_paramName: usize = 0x48; // CUtlString
                pub const m_param: usize = 0x50; // AnimParamID
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_GroupNode {
                pub const m_nodeMgr: usize = 0x70; // CAnimGraphDoc_NodeManager
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Vector4D {
                pub const m_DefaultValue: usize = 0x38; // Vector4D
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_AimCameraNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_ikChain: usize = 0x48; // CUtlString
                pub const m_cameraJointName: usize = 0x50; // CUtlString
                pub const m_pelvisJointName: usize = 0x58; // CUtlString
                pub const m_clavicleLeftJointName: usize = 0x60; // CUtlString
                pub const m_clavicleRightJointName: usize = 0x68; // CUtlString
                pub const m_parameterNamePosition: usize = 0x70; // AnimParamID
                pub const m_parameterNameOrientation: usize = 0x74; // AnimParamID
                pub const m_parameterNamePelvisOffset: usize = 0x78; // AnimParamID
                pub const m_parameterCameraOnly: usize = 0x7C; // AnimParamID
                pub const m_parameterCameraClearanceDistance: usize = 0x80; // AnimParamID
                pub const m_parameterWeaponDepenetrationDistance: usize = 0x84; // AnimParamID
                pub const m_parameterWeaponDepenetrationDelta: usize = 0x88; // AnimParamID
                pub const m_depenetrationJointName: usize = 0x90; // CUtlString
                pub const m_propJoints: usize = 0x98; // CUtlVector<CAnimGraphDoc_AimCameraNode_PropJoint>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_Probability {
                pub const m_flProbability: usize = 0x50; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_PathMotorBase {
                pub const m_bLockToPath: usize = 0x30; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ProxyNodeBase {
                pub const m_proxyItems: usize = 0x48; // CUtlVector<CConnectionProxyItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            pub mod CSmartPropParameter {
                pub const m_nElementID: usize = 0x8; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootStepTriggerNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flTolerance: usize = 0x48; // float32
                pub const m_items: usize = 0x50; // CUtlVector<CFootStepTriggerItem>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ConditionContainer {
                pub const m_conditions: usize = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Condition>>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ChoiceNode {
                pub const m_children: usize = 0x40; // CUtlVector<CChoiceNodeChild>
                pub const m_seed: usize = 0x58; // int32
                pub const m_choiceMethod: usize = 0x5C; // ChoiceMethod
                pub const m_choiceChangeMethod: usize = 0x60; // ChoiceChangeMethod
                pub const m_blendMethod: usize = 0x64; // ChoiceBlendMethod
                pub const m_blendTime: usize = 0x68; // float32
                pub const m_bCrossFade: usize = 0x6C; // bool
                pub const m_bResetChosen: usize = 0x6D; // bool
                pub const m_bDontResetSameSelection: usize = 0x6E; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TagCondition {
                pub const m_tagID: usize = 0x28; // AnimTagID
                pub const m_comparisonValue: usize = 0x2C; // bool
                pub const m_latestValue: usize = 0x2D; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_TraceNoHit {
                pub const m_DefaultValue: usize = 0x38; // TraceNoHitResult_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod ColorChoice_t {
                pub const m_Color: usize = 0x0; // CSmartPropAttributeColor
                pub const m_flWeight: usize = 0x40; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ComponentManager {
                pub const m_components: usize = 0x8; // CUtlVector<CSmartPtr<CAnimGraphDoc_Component>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeDirection {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataOutlinerNameExpr
            pub mod CSmartPropChoice {
                pub const m_Name: usize = 0x10; // CUtlString
                pub const m_DefaultOption: usize = 0x18; // CUtlString
                pub const m_Options: usize = 0x20; // CUtlVector<CSmartPropChoiceOption>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod MaterialGroupChoice_t {
                pub const m_MaterialGroupName: usize = 0x0; // CSmartPropAttributeMaterialGroup
                pub const m_flWeight: usize = 0x40; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FootPositionMetric {
                pub const m_feet: usize = 0x28; // CUtlVector<CUtlString>
                pub const m_bIgnoreSlope: usize = 0x40; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TimeCondition {
                pub const m_comparisonOp: usize = 0x28; // Comparison_t
                pub const m_comparisonString: usize = 0x30; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_Translate {
                pub const m_vPosition: usize = 0x50; // CSmartPropAttributeVector
                pub const m_CoordinateSpace: usize = 0x90; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StateStatusCondition {
                pub const m_sourceValue: usize = 0x28; // StateValue
                pub const m_comparisonValueType: usize = 0x2C; // StateComparisonValueType
                pub const m_comparisonFixedValue: usize = 0x30; // float32
                pub const m_comparisonStateValue: usize = 0x34; // StateValue
                pub const m_comparisonParamName: usize = 0x38; // CUtlString
                pub const m_comparisonParamID: usize = 0x40; // AnimParamID
                pub const m_comparisonOp: usize = 0x44; // Comparison_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Graph {
                pub const m_pSettingsManager: usize = 0xE0; // CSmartPtr<CAnimGraphSettingsManager>
                pub const m_clipDataManager: usize = 0xF0; // CAnimGraphDoc_ClipDataManager
                pub const m_modelName: usize = 0x138; // CUtlString
                pub const m_previewModelName: usize = 0x140; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FutureFacingMetric {
                pub const m_flDistance: usize = 0x28; // float32
                pub const m_flTime: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_LinearLength {
                pub const m_flLength: usize = 0x48; // CSmartPropAttributeFloat
                pub const m_bAllowScale: usize = 0x88; // CSmartPropAttributeBool
                pub const m_flMinLength: usize = 0xC8; // CSmartPropAttributeFloat
                pub const m_flMaxLength: usize = 0x108; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CRigidBodyWeight {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_flWeight: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BoneVelocityMetric {
                pub const m_boneName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeDistance3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_OutputCoordinateSpace: usize = 0x58; // CSmartPropAttributeCoordinateSpace
                pub const m_InputPositionA: usize = 0x98; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceA: usize = 0xD8; // CSmartPropAttributeCoordinateSpace
                pub const m_InputPositionB: usize = 0x118; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceB: usize = 0x158; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BonePositionMetric {
                pub const m_boneName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_AimCameraNode_PropJoint {
                pub const m_jointName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_MotionNodeManager {
            }
            // Parent: None
            // Field count: 0
            pub mod CSmartPropElement_Deformer {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataExperimentalNodeSet
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PlaceOnMesh {
                pub const m_nPickMode: usize = 0xA0; // CSmartPropAttributeOrientationMode
                pub const m_MeshName: usize = 0xE0; // CUtlString
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_DistanceRemainingMetric {
                pub const m_flMaxDistance: usize = 0x28; // float32
                pub const m_bFilterFixedMinDistance: usize = 0x2C; // bool
                pub const m_flMinDistance: usize = 0x30; // float32
                pub const m_bFilterGoalDistance: usize = 0x34; // bool
                pub const m_flStartGoalFilterDistance: usize = 0x38; // float32
                pub const m_bFilterGoalOvershoot: usize = 0x3C; // bool
                pub const m_flMaxGoalOvershootScale: usize = 0x40; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_OrCondition {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeTraceNoHit {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_OrientationMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropPlaceMeshOrientationMode_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CFootPinningItem {
                pub const m_footName: usize = 0x0; // CUtlString
                pub const m_targetBoneName: usize = 0x8; // CUtlString
                pub const m_ikChainName: usize = 0x10; // CUtlString
                pub const m_tag: usize = 0x18; // AnimTagID
                pub const m_paramName: usize = 0x20; // CUtlString
                pub const m_param: usize = 0x28; // AnimParamID
                pub const m_flMaxRotationLeft: usize = 0x2C; // float32
                pub const m_flMaxRotationRight: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PlaceMultiple {
                pub const m_nCount: usize = 0xA0; // CSmartPropAttributeInt
                pub const m_Expression: usize = 0xE0; // CUtlString
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_MidpointDeformer {
                pub const m_bDeformationEnabled: usize = 0xA0; // CSmartPropAttributeBool
                pub const m_vStart: usize = 0xE0; // CSmartPropAttributeVector
                pub const m_vEnd: usize = 0x120; // CSmartPropAttributeVector
                pub const m_fRadius: usize = 0x160; // CSmartPropAttributeFloat
                pub const m_bContinuousSpline: usize = 0x1A0; // CSmartPropAttributeBool
                pub const m_vOffset: usize = 0x1E0; // CSmartPropAttributeVector
                pub const m_vAngles: usize = 0x220; // CSmartPropAttributeAngles
                pub const m_vScale: usize = 0x260; // CSmartPropAttributeVector2D
                pub const m_fFalloff: usize = 0x2A0; // CSmartPropAttributeFloat
                pub const m_OutputVariable: usize = 0x2E0; // CUtlString
            }
            // Parent: None
            // Field count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_MotionMatchingNode {
                pub const m_groups: usize = 0x48; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionItemGroup>>
                pub const m_metrics: usize = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_MotionMetric>>
                pub const m_blendCurve: usize = 0x78; // CBlendCurve
                pub const m_nRandomSeed: usize = 0x80; // int32
                pub const m_flSampleRate: usize = 0x84; // float32
                pub const m_bSearchEveryTick: usize = 0x88; // bool
                pub const m_flSearchInterval: usize = 0x8C; // float32
                pub const m_bSearchWhenMotionEnds: usize = 0x90; // bool
                pub const m_bSearchWhenGoalChanges: usize = 0x91; // bool
                pub const m_flBlendTime: usize = 0x94; // float32
                pub const m_flSelectionThreshold: usize = 0x98; // float32
                pub const m_flReselectionTimeWindow: usize = 0x9C; // float32
                pub const m_bLockSelectionWhenWaning: usize = 0xA0; // bool
                pub const m_bEnableRotationCorrection: usize = 0xA1; // bool
                pub const m_bGoalAssist: usize = 0xA2; // bool
                pub const m_flGoalAssistDistance: usize = 0xA4; // float32
                pub const m_flGoalAssistTolerance: usize = 0xA8; // float32
                pub const m_bEnableDistanceScaling: usize = 0xAC; // bool
                pub const m_flDistanceScale_OuterRadius: usize = 0xB0; // float32
                pub const m_flDistanceScale_InnerRadius: usize = 0xB4; // float32
                pub const m_flDistanceScale_MaxScale: usize = 0xB8; // float32
                pub const m_flDistanceScale_MinScale: usize = 0xBC; // float32
                pub const m_distanceScale_Damping: usize = 0xC0; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPropertySuppressBaseClassField
            pub mod CSmartPropElement_ModifyState {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_GraphMotionItem {
                pub const m_name: usize = 0xA8; // CUtlString
                pub const m_nodeManager: usize = 0xB0; // CAnimGraphDoc_MotionNodeManager
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BlockSelectionMetric {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CycleControlNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_valueSource: usize = 0x48; // AnimValueSource
                pub const m_paramName: usize = 0x50; // CUtlString
                pub const m_param: usize = 0x58; // AnimParamID
                pub const m_bLockWhenWaning: usize = 0x5C; // bool
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_CreateSizer {
                pub const m_Name: usize = 0x50; // CUtlString
                pub const m_bDisplayModel: usize = 0x58; // CSmartPropAttributeBool
                pub const m_flInitialMinX: usize = 0x98; // CSmartPropAttributeFloat
                pub const m_flInitialMaxX: usize = 0xD8; // CSmartPropAttributeFloat
                pub const m_flConstraintMinX: usize = 0x118; // CSmartPropAttributeFloat
                pub const m_flConstraintMaxX: usize = 0x158; // CSmartPropAttributeFloat
                pub const m_OutputVariableMinX: usize = 0x198; // CUtlString
                pub const m_OutputVariableMaxX: usize = 0x1A0; // CUtlString
                pub const m_flInitialMinY: usize = 0x1A8; // CSmartPropAttributeFloat
                pub const m_flInitialMaxY: usize = 0x1E8; // CSmartPropAttributeFloat
                pub const m_flConstraintMinY: usize = 0x228; // CSmartPropAttributeFloat
                pub const m_flConstraintMaxY: usize = 0x268; // CSmartPropAttributeFloat
                pub const m_OutputVariableMinY: usize = 0x2A8; // CUtlString
                pub const m_OutputVariableMaxY: usize = 0x2B0; // CUtlString
                pub const m_flInitialMinZ: usize = 0x2B8; // CSmartPropAttributeFloat
                pub const m_flInitialMaxZ: usize = 0x2F8; // CSmartPropAttributeFloat
                pub const m_flConstraintMinZ: usize = 0x338; // CSmartPropAttributeFloat
                pub const m_flConstraintMaxZ: usize = 0x378; // CSmartPropAttributeFloat
                pub const m_OutputVariableMinZ: usize = 0x3B8; // CUtlString
                pub const m_OutputVariableMaxZ: usize = 0x3C0; // CUtlString
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TargetWarpNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_eLinearRootMotionMode: usize = 0x48; // TargetWarpLinearRootMotionMode
                pub const m_eAngleMode: usize = 0x4C; // TargetWarpAngleMode_t
                pub const m_eCorrectionMethod: usize = 0x50; // TargetWarpCorrectionMethod
                pub const m_eTargetWarpTimingMethod: usize = 0x54; // TargetWarpTimingMethod
                pub const m_moveHeadingParamID: usize = 0x58; // AnimParamID
                pub const m_desiredMoveHeadingParamID: usize = 0x5C; // AnimParamID
                pub const m_targetPositionParamID: usize = 0x60; // AnimParamID
                pub const m_bTargetPositionIsWorldSpace: usize = 0x64; // bool
                pub const m_targetFacePositionParamID: usize = 0x68; // AnimParamID
                pub const m_bTargetFacePositionIsWorldSpace: usize = 0x6C; // bool
                pub const m_targetUpVectorParamID: usize = 0x70; // AnimParamID
                pub const m_bOnlyWarpWhenTagIsFound: usize = 0x74; // bool
                pub const m_bWarpOrientationDuringTranslation: usize = 0x75; // bool
                pub const m_flMaxAngle: usize = 0x78; // float32
                pub const m_bWarpAroundCenter: usize = 0x7C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLODComponent {
                pub const m_nServerLOD: usize = 0x38; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeCrossProduct3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_InputVectorA: usize = 0x58; // CSmartPropAttributeVector
                pub const m_InputVectorB: usize = 0x98; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_NodeConnection {
                pub const m_nodeID: usize = 0x0; // AnimNodeID
                pub const m_outputID: usize = 0x4; // AnimNodeOutputID
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SetOrientation {
                pub const m_vForwardVector: usize = 0x50; // CSmartPropAttributeVector
                pub const m_ForwardDirectionSpace: usize = 0x90; // CSmartPropAttributeCoordinateSpace
                pub const m_vUpVector: usize = 0xD0; // CSmartPropAttributeVector
                pub const m_UpDirectionSpace: usize = 0x110; // CSmartPropAttributeCoordinateSpace
                pub const m_bPrioritizeUp: usize = 0x150; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_DirectionVector {
                pub const m_DefaultValue: usize = 0x38; // SmartPropDirection_t
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PickOne {
                pub const m_SelectionMode: usize = 0xA0; // CSmartPropAttributeChoiceSelectionMode
                pub const m_SpecificChildIndex: usize = 0xE0; // CSmartPropAttributeInt
                pub const m_OutputChoiceVariableName: usize = 0x120; // CUtlString
                pub const m_bConfigurable: usize = 0x128; // CSmartPropAttributeBool
                pub const m_vHandleOffset: usize = 0x168; // CSmartPropAttributeVector
                pub const m_HandleColor: usize = 0x1A8; // CSmartPropAttributeColor
                pub const m_HandleSize: usize = 0x1E8; // CSmartPropAttributeInt
                pub const m_HandleShape: usize = 0x228; // ConfigurationHandleShape_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            pub mod CSmartPropModifier {
                pub const m_bEnabled: usize = 0x8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerAssetNameExpr
            pub mod CSmartPropElement_ModelEntity {
                pub const m_sModelName: usize = 0x88; // CSmartPropAttributeModelName
                pub const m_MaterialGroupName: usize = 0xC8; // CSmartPropAttributeMaterialGroup
                pub const m_bCastShadows: usize = 0x108; // CSmartPropAttributeBool
                pub const m_bForceStatic: usize = 0x148; // CSmartPropAttributeBool
                pub const m_nDeformableAttachmentMode: usize = 0x188; // SmartPropDeformableAttachMode_t
                pub const m_nDeformableOrientationMode: usize = 0x18C; // SmartPropDeformableOrientMode_t
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_CreateRotator {
                pub const m_Name: usize = 0x50; // CUtlString
                pub const m_vOffset: usize = 0x58; // CSmartPropAttributeVector
                pub const m_vRotationAxis: usize = 0x98; // CSmartPropAttributeVector
                pub const m_CoordinateSpace: usize = 0xD8; // CSmartPropAttributeCoordinateSpace
                pub const m_flDisplayRadius: usize = 0x118; // CSmartPropAttributeFloat
                pub const m_DisplayColor: usize = 0x158; // CSmartPropAttributeColor
                pub const m_bApplyToCurrentTransform: usize = 0x198; // CSmartPropAttributeBool
                pub const m_flSnappingIncrement: usize = 0x1D8; // CSmartPropAttributeFloat
                pub const m_flInitialAngle: usize = 0x218; // CSmartPropAttributeFloat
                pub const m_bEnforceLimits: usize = 0x258; // CSmartPropAttributeBool
                pub const m_flMinAngle: usize = 0x298; // CSmartPropAttributeFloat
                pub const m_flMaxAngle: usize = 0x2D8; // CSmartPropAttributeFloat
                pub const m_OutputVariable: usize = 0x318; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Color {
                pub const m_DefaultValue: usize = 0x38; // Color
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CurrentVelocityMetric {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SequenceMotionItem {
                pub const m_sequenceName: usize = 0xA8; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimConflictInfo_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_groupName: usize = 0x8; // CUtlString
                pub const m_subgraphName: usize = 0x10; // CUtlString
                pub const m_id: usize = 0x18; // uint32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CChoiceNodeChild {
                pub const m_inputConnection: usize = 0x0; // CAnimGraphDoc_NodeConnection
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_weight: usize = 0x10; // float32
                pub const m_blendTime: usize = 0x14; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_MaterialAttributes {
                pub const m_AllowedMaterialAttributes: usize = 0x50; // CUtlVector<CUtlString>
                pub const m_DisallowedMaterialAttributes: usize = 0x68; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_FitOnLine {
                pub const m_vStart: usize = 0xA0; // CSmartPropAttributeVector
                pub const m_vEnd: usize = 0xE0; // CSmartPropAttributeVector
                pub const m_PointSpace: usize = 0x120; // CSmartPropAttributeCoordinateSpace
                pub const m_bOrientAlongLine: usize = 0x160; // CSmartPropAttributeBool
                pub const m_vUpDirection: usize = 0x1A0; // CSmartPropAttributeVector
                pub const m_UpDirectionSpace: usize = 0x1E0; // CSmartPropAttributeCoordinateSpace
                pub const m_bPrioritizeUp: usize = 0x220; // CSmartPropAttributeBool
                pub const m_nScaleMode: usize = 0x260; // CSmartPropAttributeScaleMode
                pub const m_nPickMode: usize = 0x2A0; // CSmartPropAttributePickMode
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeVectorBetweenPoints3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_OutputCoordinateSpace: usize = 0x58; // CSmartPropAttributeCoordinateSpace
                pub const m_bNormalized: usize = 0x98; // CSmartPropAttributeBool
                pub const m_InputPositionA: usize = 0xD8; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceA: usize = 0x118; // CSmartPropAttributeCoordinateSpace
                pub const m_InputPositionB: usize = 0x158; // CSmartPropAttributeVector
                pub const m_CoordinateSpaceB: usize = 0x198; // CSmartPropAttributeCoordinateSpace
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SubGraphNode {
                pub const m_subGraphFilename: usize = 0x70; // CUtlString
                pub const m_animNameMap: usize = 0x78; // CUtlHashtable<CUtlString,CUtlString>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ParamSpan {
                pub const m_samples: usize = 0x20; // CUtlVector<CAnimGraphDoc_ParamSpanSample>
                pub const m_paramName: usize = 0x38; // CUtlString
                pub const m_id: usize = 0x40; // AnimParamID
                pub const m_flStartCycle: usize = 0x44; // float32
                pub const m_flEndCycle: usize = 0x48; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_AndCondition {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_SavePosition {
                pub const m_CoordinateSpace: usize = 0x50; // CSmartPropAttributeCoordinateSpace
                pub const m_VariableName: usize = 0x90; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ParameterManager {
                pub const m_Parameters: usize = 0x20; // CUtlVector<CSmartPtr<CAnimParameterBase>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PropDynamic {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_GroupInputNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_MotionParameter {
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x20; // AnimParamID
                pub const m_flMinValue: usize = 0x24; // float32
                pub const m_flMaxValue: usize = 0x28; // float32
                pub const m_nSamples: usize = 0x2C; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_PathMetric {
                pub const m_flDistance: usize = 0x28; // float32
                pub const m_pathSamples: usize = 0x30; // CUtlVector<float32>
                pub const m_bExtrapolateMovement: usize = 0x48; // bool
                pub const m_flMinExtrapolationSpeed: usize = 0x4C; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StanceOverrideNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_stanceSourceConnection: usize = 0x48; // CAnimGraphDoc_NodeConnection
                pub const m_blendParamName: usize = 0x50; // CUtlString
                pub const m_blendParamID: usize = 0x58; // AnimParamID
                pub const m_eMode: usize = 0x5C; // StanceOverrideMode
                pub const m_sequenceName: usize = 0x60; // CUtlString
                pub const m_nFrameIndex: usize = 0x68; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributeCoordinateSpace {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CStateMachineComponent {
                pub const m_sName: usize = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_NodeState {
                pub const m_inputConnection: usize = 0x80; // CAnimGraphDoc_NodeConnection
                pub const m_bIsRootMotionExclusive: usize = 0x88; // bool
                pub const m_bIsRootMotionExclusiveFirstFrame: usize = 0x89; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CConnectionProxyItem {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_outputID: usize = 0x8; // AnimNodeOutputID
                pub const m_inputConnection: usize = 0xC; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Int {
                pub const m_DefaultValue: usize = 0x38; // int32
                pub const m_nParamaterMinValue: usize = 0x3C; // int32
                pub const m_nParamaterMaxValue: usize = 0x40; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ZeroPoseNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_BendDeformer {
                pub const m_bDeformationEnabled: usize = 0xA0; // CSmartPropAttributeBool
                pub const m_vOrigin: usize = 0xE0; // CSmartPropAttributeVector
                pub const m_vAngles: usize = 0x120; // CSmartPropAttributeAngles
                pub const m_vSize: usize = 0x160; // CSmartPropAttributeVector
                pub const m_flBendAngle: usize = 0x1A0; // CSmartPropAttributeFloat
                pub const m_flBendPoint: usize = 0x1E0; // CSmartPropAttributeFloat
                pub const m_flBendRadius: usize = 0x220; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_RandomScale {
                pub const m_flRandomScaleMin: usize = 0x50; // CSmartPropAttributeFloat
                pub const m_flRandomScaleMax: usize = 0x90; // CSmartPropAttributeFloat
                pub const m_flSnapIncrement: usize = 0xD0; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Float {
                pub const m_DefaultValue: usize = 0x38; // float32
                pub const m_flParamaterMinValue: usize = 0x3C; // float32
                pub const m_flParamaterMaxValue: usize = 0x40; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ResetRotation {
                pub const m_bIgnoreObjectRotation: usize = 0x50; // CSmartPropAttributeBool
                pub const m_bResetPitch: usize = 0x90; // CSmartPropAttributeBool
                pub const m_bResetYaw: usize = 0xD0; // CSmartPropAttributeBool
                pub const m_bResetRoll: usize = 0x110; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_SurfaceAngle {
                pub const m_flSurfaceSlopeMin: usize = 0x50; // CSmartPropAttributeFloat
                pub const m_flSurfaceSlopeMax: usize = 0x90; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Motor {
                pub const m_name: usize = 0x20; // CUtlString
                pub const m_bDefault: usize = 0x28; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            pub mod CSmartPropSelectionCriteria {
                pub const m_bEnabled: usize = 0x8; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_DirectionalBlendNode {
                pub const m_animNamePrefix: usize = 0x48; // CUtlString
                pub const m_blendValueSource: usize = 0x50; // AnimValueSource
                pub const m_paramName: usize = 0x58; // CUtlString
                pub const m_param: usize = 0x60; // AnimParamID
                pub const m_bLoop: usize = 0x64; // bool
                pub const m_bLockBlendOnReset: usize = 0x65; // bool
                pub const m_playbackSpeed: usize = 0x68; // float32
                pub const m_damping: usize = 0x70; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_PlayerInputMotor {
                pub const m_sampleTimes: usize = 0x30; // CUtlVector<float32>
                pub const m_bUseAcceleration: usize = 0x48; // bool
                pub const m_flSpringConstant: usize = 0x4C; // float32
                pub const m_flAnticipationDistance: usize = 0x50; // float32
                pub const m_anticipationPosParamName: usize = 0x58; // CUtlString
                pub const m_anticipationPosParam: usize = 0x60; // AnimParamID
                pub const m_anticipationHeadingParamName: usize = 0x68; // CUtlString
                pub const m_anticipationHeadingParam: usize = 0x70; // AnimParamID
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_StepsRemainingMetric {
                pub const m_feet: usize = 0x28; // CUtlVector<CUtlString>
                pub const m_flMinStepsRemaining: usize = 0x40; // float32
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
            pub mod CSmartPropOperation_TraceToLine {
                pub const m_EndPointA: usize = 0x350; // CSmartPropAttributeVector
                pub const m_EndPointSpaceA: usize = 0x390; // CSmartPropAttributeCoordinateSpace
                pub const m_EndPointB: usize = 0x3D0; // CSmartPropAttributeVector
                pub const m_EndPointSpaceB: usize = 0x410; // CSmartPropAttributeCoordinateSpace
                pub const m_bTraceAway: usize = 0x450; // CSmartPropAttributeBool
                pub const m_flTraceLength: usize = 0x490; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_OrientationWarpNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_eMode: usize = 0x48; // OrientationWarpMode_t
                pub const m_targetParamID: usize = 0x4C; // AnimParamID
                pub const m_targetPositionParamID: usize = 0x50; // AnimParamID
                pub const m_fallbackTargetPositionParamID: usize = 0x54; // AnimParamID
                pub const m_eTargetOffsetMode: usize = 0x58; // OrientationWarpTargetOffsetMode_t
                pub const m_flTargetOffset: usize = 0x5C; // float32
                pub const m_targetOffsetParamID: usize = 0x60; // AnimParamID
                pub const m_flMaxRootMotionScale: usize = 0x64; // float32
                pub const m_eRootMotionSource: usize = 0x68; // OrientationWarpRootMotionSource_t
                pub const m_damping: usize = 0x70; // CAnimInputDamping
                pub const m_bEnablePreferredRotationDirection: usize = 0x88; // bool
                pub const m_ePreferredRotationDirection: usize = 0x8C; // AnimValueSource
                pub const m_flPreferredRotationThreshold: usize = 0x90; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FinishedCondition {
                pub const m_option: usize = 0x28; // FinishedConditionOption
                pub const m_bIsFinished: usize = 0x2C; // bool
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
            pub mod CSmartPropRoot {
                pub const m_nContentVersion: usize = 0x0; // int32
                pub const m_nMaxDepth: usize = 0x8; // CSmartPropAttributeInt
                pub const m_Variables: usize = 0x48; // CUtlVector<CSmartPropVariable*>
                pub const m_Choices: usize = 0x60; // CUtlVector<CSmartPropChoice*>
                pub const m_Children: usize = 0x78; // CUtlVector<CSmartPropElement*>
                pub const m_Modifiers: usize = 0x90; // CUtlVector<CSmartPropModifier*>
                pub const m_hPulseGraph: usize = 0xA8; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_SetParameterAction {
                pub const m_paramName: usize = 0x28; // CUtlString
                pub const m_param: usize = 0x30; // AnimParamID
                pub const m_value: usize = 0x34; // CAnimVariant
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_Rotate {
                pub const m_vRotation: usize = 0x50; // CSmartPropAttributeAngles
            }
            // Parent: None
            // Field count: 19
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_LookAtNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_target: usize = 0x48; // AnimVectorSource
                pub const m_paramName: usize = 0x50; // CUtlString
                pub const m_param: usize = 0x58; // AnimParamID
                pub const m_bIsPosition: usize = 0x5C; // bool
                pub const m_weightParamName: usize = 0x60; // CUtlString
                pub const m_weightParam: usize = 0x68; // AnimParamID
                pub const m_lookatChainName: usize = 0x70; // CUtlString
                pub const m_attachmentName: usize = 0x78; // CUtlString
                pub const m_bRotateYawForward: usize = 0x80; // bool
                pub const m_flYawLimit: usize = 0x84; // float32
                pub const m_flPitchLimit: usize = 0x88; // float32
                pub const m_bMaintainUpDirection: usize = 0x8C; // bool
                pub const m_bResetBase: usize = 0x8D; // bool
                pub const m_bLockWhenWaning: usize = 0x8E; // bool
                pub const m_bUseHysteresis: usize = 0x8F; // bool
                pub const m_flHysteresisInnerAngle: usize = 0x90; // float32
                pub const m_flHysteresisOuterAngle: usize = 0x94; // float32
                pub const m_damping: usize = 0x98; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_GroupOutputNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFloatAnimValue {
                pub const m_flConstValue: usize = 0x8; // float32
                pub const m_paramName: usize = 0x10; // CUtlString
                pub const m_paramID: usize = 0x18; // AnimParamID
                pub const m_eSource: usize = 0x1C; // EAnimValueSource
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CSmartPropVariable_Vector3D {
                pub const m_DefaultValue: usize = 0x38; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PropPhysics {
                pub const m_bStartAsleep: usize = 0x190; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropVariable_Material {
                pub const m_DefaultValue: usize = 0x38; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_JumpHelperNode {
                pub const m_targetParamName: usize = 0xB0; // CUtlString
                pub const m_targetParamID: usize = 0xB8; // AnimParamID
                pub const m_flJumpStartCycle: usize = 0xBC; // float32
                pub const m_flJumpDuration: usize = 0xC0; // float32
                pub const m_bTranslateX: usize = 0xC4; // bool
                pub const m_bTranslateY: usize = 0xC5; // bool
                pub const m_bTranslateZ: usize = 0xC6; // bool
                pub const m_bScaleSpeed: usize = 0xC7; // bool
                pub const m_eCorrectionMethod: usize = 0xC8; // JumpCorrectionMethod
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_RagdollNode {
                pub const m_weightListName: usize = 0x40; // CUtlString
                pub const m_poseControlMethod: usize = 0x48; // RagdollPoseControl
                pub const m_inputConnection: usize = 0x4C; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FollowPathNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flBlendOutTime: usize = 0x48; // float32
                pub const m_bBlockNonPathMovement: usize = 0x4C; // bool
                pub const m_bStopFeetAtGoal: usize = 0x4D; // bool
                pub const m_bScaleSpeed: usize = 0x4E; // bool
                pub const m_flScale: usize = 0x50; // float32
                pub const m_flMinAngle: usize = 0x54; // float32
                pub const m_flMaxAngle: usize = 0x58; // float32
                pub const m_flSpeedScaleBlending: usize = 0x5C; // float32
                pub const m_bTurnToFace: usize = 0x60; // bool
                pub const m_facingTarget: usize = 0x64; // AnimValueSource
                pub const m_paramName: usize = 0x68; // CUtlString
                pub const m_param: usize = 0x70; // AnimParamID
                pub const m_flTurnToFaceOffset: usize = 0x74; // float32
                pub const m_damping: usize = 0x78; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_AimMatrixNode {
                pub const m_inputConnection: usize = 0x48; // CAnimGraphDoc_NodeConnection
                pub const m_sequenceName: usize = 0x50; // CUtlString
                pub const m_flMaxYawAngle: usize = 0x58; // float32
                pub const m_flMaxPitchAngle: usize = 0x5C; // float32
                pub const m_target: usize = 0x60; // AnimVectorSource
                pub const m_paramName: usize = 0x68; // CUtlString
                pub const m_param: usize = 0x70; // AnimParamID
                pub const m_bIsPosition: usize = 0x74; // bool
                pub const m_attachmentName: usize = 0x78; // CUtlString
                pub const m_blendMode: usize = 0x80; // AimMatrixBlendMode
                pub const m_boneMaskName: usize = 0x88; // CUtlString
                pub const m_bResetBase: usize = 0x90; // bool
                pub const m_bLockWhenWaning: usize = 0x91; // bool
                pub const m_bUseBiasAndClamp: usize = 0x92; // bool
                pub const m_flBiasAndClampYawOffset: usize = 0x94; // float32
                pub const m_flBiasAndClampPitchOffset: usize = 0x98; // float32
                pub const m_biasAndClampBlendCurve: usize = 0x9C; // CBlendCurve
                pub const m_damping: usize = 0xA8; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TurnHelperNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_facingTarget: usize = 0x48; // AnimValueSource
                pub const m_turnStartTime: usize = 0x4C; // float32
                pub const m_turnDuration: usize = 0x50; // float32
                pub const m_bMatchChildDuration: usize = 0x54; // bool
                pub const m_bUseManualTurnOffset: usize = 0x55; // bool
                pub const m_manualTurnOffset: usize = 0x58; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_ComputeNormalizedVector3D {
                pub const m_OutputVariableName: usize = 0x50; // CUtlString
                pub const m_InputVector: usize = 0x58; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SelectorNode {
                pub const m_children: usize = 0x40; // CUtlVector<CAnimGraphDoc_NodeConnection>
                pub const m_fallbackChild: usize = 0x58; // CAnimGraphDoc_NodeConnection
                pub const m_tags: usize = 0x60; // CUtlVector<AnimTagID>
                pub const m_selectionSource: usize = 0x78; // SelectionSource_t
                pub const m_boolParamName: usize = 0x80; // CUtlString
                pub const m_boolParamID: usize = 0x88; // AnimParamID
                pub const m_enumParamName: usize = 0x90; // CUtlString
                pub const m_enumParamID: usize = 0x98; // AnimParamID
                pub const m_tagID: usize = 0x9C; // AnimTagID
                pub const m_blendDuration: usize = 0xA0; // CFloatAnimValue
                pub const m_tagBehavior: usize = 0xC0; // SelectorTagBehavior_t
                pub const m_bResetOnChange: usize = 0xC4; // bool
                pub const m_bSyncCyclesOnChange: usize = 0xC5; // bool
                pub const m_bLockWhenWaning: usize = 0xC6; // bool
                pub const m_blendCurve: usize = 0xC8; // CBlendCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_RadiusPlacementMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropRadiusPlacementMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_PathPositions {
                pub const m_DefaultValue: usize = 0x38; // SmartPropPathPositions_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPairedSequenceComponent {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BindPoseNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_PathPosition {
                pub const m_PlaceAtPositions: usize = 0x48; // CSmartPropAttributePathPositions
                pub const m_nPlaceEveryNthPosition: usize = 0x88; // CSmartPropAttributeInt
                pub const m_nNthPositionIndexOffset: usize = 0xC8; // CSmartPropAttributeInt
                pub const m_bAllowAtStart: usize = 0x108; // CSmartPropAttributeBool
                pub const m_bAllowAtEnd: usize = 0x148; // CSmartPropAttributeBool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TimeRemainingMetric {
                pub const m_bMatchByTimeRemaining: usize = 0x28; // bool
                pub const m_flMaxTimeRemaining: usize = 0x2C; // float32
                pub const m_bFilterByTimeRemaining: usize = 0x30; // bool
                pub const m_flMinTimeRemaining: usize = 0x34; // float32
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
            pub mod CSmartPropOperation_TraceToPoint {
                pub const m_TargetPoint: usize = 0x350; // CSmartPropAttributeVector
                pub const m_TargetPointSpace: usize = 0x390; // CSmartPropAttributeCoordinateSpace
                pub const m_bTraceAway: usize = 0x3D0; // CSmartPropAttributeBool
                pub const m_flTraceLength: usize = 0x410; // CSmartPropAttributeFloat
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
            pub mod CSmartPropOperation_SaveState {
                pub const m_StateName: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_MaterialTint {
                pub const m_Material: usize = 0x50; // CSmartPropAttributeMaterialName
                pub const m_SelectionMode: usize = 0x90; // CSmartPropAttributeColorSelectionMode
                pub const m_Color: usize = 0xD0; // CSmartPropAttributeColor
                pub const m_Gradient: usize = 0x110; // CColorGradient
                pub const m_ColorPosition: usize = 0x128; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSmartPropMaterialReplacement {
                pub const m_OriginalMaterial: usize = 0x0; // CSmartPropAttributeMaterialName
                pub const m_ReplacementMaterial: usize = 0x40; // CSmartPropAttributeMaterialName
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_WayPointHelperNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flStartCycle: usize = 0x48; // float32
                pub const m_flEndCycle: usize = 0x4C; // float32
                pub const m_bOnlyGoals: usize = 0x50; // bool
                pub const m_bPreventOvershoot: usize = 0x51; // bool
                pub const m_bPreventUndershoot: usize = 0x52; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SubtractNode {
                pub const m_baseInputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_subtractInputConnection: usize = 0x48; // CAnimGraphDoc_NodeConnection
                pub const m_timingBehavior: usize = 0x50; // BinaryNodeTiming
                pub const m_flTimingBlend: usize = 0x54; // float32
                pub const m_footMotionTiming: usize = 0x58; // BinaryNodeChildOption
                pub const m_bApplyToFootMotion: usize = 0x5C; // bool
                pub const m_bResetBase: usize = 0x5D; // bool
                pub const m_bResetSubtract: usize = 0x5E; // bool
                pub const m_bApplyChannelsSeparately: usize = 0x5F; // bool
                pub const m_bUseModelSpace: usize = 0x60; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_AddNode {
                pub const m_baseInput: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_additiveInput: usize = 0x48; // CAnimGraphDoc_NodeConnection
                pub const m_timingBehavior: usize = 0x50; // BinaryNodeTiming
                pub const m_flTimingBlend: usize = 0x54; // float32
                pub const m_footMotionTiming: usize = 0x58; // BinaryNodeChildOption
                pub const m_bApplyToFootMotion: usize = 0x5C; // bool
                pub const m_bResetBase: usize = 0x5D; // bool
                pub const m_bResetAdditive: usize = 0x5E; // bool
                pub const m_bApplyChannelsSeparately: usize = 0x5F; // bool
                pub const m_bUseModelSpace: usize = 0x60; // bool
                pub const m_bApplyScale: usize = 0x61; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeType
            // MPropertyFriendlyName
            // MVDataOutlinerLabelExpr
            pub mod CSmartPropElement {
                pub const m_nElementID: usize = 0x8; // int32
                pub const m_bEnabled: usize = 0x10; // CSmartPropAttributeBool
                pub const m_sLabel: usize = 0x50; // CUtlString
                pub const m_SelectionCriteria: usize = 0x58; // CUtlVector<CSmartPropSelectionCriteria*>
                pub const m_Modifiers: usize = 0x70; // CUtlVector<CSmartPropModifier*>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CBlendNodeChild {
                pub const m_inputConnection: usize = 0x8; // CAnimGraphDoc_NodeConnection
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_blendValue: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CActionComponent {
                pub const m_actions: usize = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
                pub const m_sName: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_Blend2DItem {
                pub const m_blendValue: usize = 0x18; // Vector2D
                pub const m_bUseCustomDuration: usize = 0x28; // bool
                pub const m_flCustomDuration: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Component {
                pub const m_group: usize = 0x18; // CUtlString
                pub const m_id: usize = 0x28; // AnimComponentID
                pub const m_bStartEnabled: usize = 0x2C; // bool
                pub const m_nPriority: usize = 0x30; // int32
                pub const m_networkMode: usize = 0x34; // AnimNodeNetworkMode
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_Blend2DNode {
                pub const m_items: usize = 0x58; // CUtlVector<CSmartPtr<CAnimGraphDoc_Blend2DItem>>
                pub const m_tagSpans: usize = 0x70; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_paramSpans: usize = 0x88; // CUtlVector<CSmartPtr<CAnimGraphDoc_ParamSpan>>
                pub const m_blendSourceX: usize = 0xA0; // AnimValueSource
                pub const m_paramNameX: usize = 0xA8; // CUtlString
                pub const m_paramX: usize = 0xB0; // AnimParamID
                pub const m_blendSourceY: usize = 0xB4; // AnimValueSource
                pub const m_paramNameY: usize = 0xB8; // CUtlString
                pub const m_paramY: usize = 0xC0; // AnimParamID
                pub const m_eBlendMode: usize = 0xC4; // Blend2DMode
                pub const m_bLoop: usize = 0xC8; // bool
                pub const m_bLockBlendOnReset: usize = 0xC9; // bool
                pub const m_bLockWhenWaning: usize = 0xCA; // bool
                pub const m_playbackSpeed: usize = 0xCC; // float32
                pub const m_damping: usize = 0xD0; // CAnimInputDamping
                pub const m_bAnimEventsAndTagsOnMostWeightedOnly: usize = 0xE8; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_TagSpan {
                pub const m_id: usize = 0x20; // AnimTagID
                pub const m_fStartCycle: usize = 0x24; // float32
                pub const m_fDuration: usize = 0x28; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_FutureVelocityMetric {
                pub const m_flDistance: usize = 0x28; // float32
                pub const m_flStoppingDistance: usize = 0x2C; // float32
                pub const m_eMode: usize = 0x30; // VelocityMetricMode
                pub const m_bAutoTargetSpeed: usize = 0x31; // bool
                pub const m_flManualTargetSpeed: usize = 0x34; // float32
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CDampedValueItem {
                pub const m_valueType: usize = 0x0; // DampedValueType
                pub const m_floatParamNameIn: usize = 0x8; // CUtlString
                pub const m_floatParamNameOut: usize = 0x10; // CUtlString
                pub const m_vectorParamNameIn: usize = 0x18; // CUtlString
                pub const m_vectorParamNameOut: usize = 0x20; // CUtlString
                pub const m_floatParamIn: usize = 0x28; // AnimParamID
                pub const m_floatParamOut: usize = 0x2C; // AnimParamID
                pub const m_vectorParamIn: usize = 0x30; // AnimParamID
                pub const m_vectorParamOut: usize = 0x34; // AnimParamID
                pub const m_damping: usize = 0x38; // CAnimInputDamping
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributePickMode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimTagConflict {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_ClipData {
                pub const m_tagSpans: usize = 0x20; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_clipName: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_CoordinateSpace {
                pub const m_DefaultValue: usize = 0x38; // SmartPropSpace_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ConflictManager {
                pub const m_conflicts: usize = 0x18; // CUtlVector<CSmartPtr<CAnimConflictBase>>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_BoneMaskNode {
                pub const m_weightListName: usize = 0x40; // CUtlString
                pub const m_inputConnection1: usize = 0x48; // CAnimGraphDoc_NodeConnection
                pub const m_inputConnection2: usize = 0x50; // CAnimGraphDoc_NodeConnection
                pub const m_blendSpace: usize = 0x58; // BoneMaskBlendSpace
                pub const m_bUseBlendScale: usize = 0x5C; // bool
                pub const m_blendValueSource: usize = 0x60; // AnimValueSource
                pub const m_blendParameterName: usize = 0x68; // CUtlString
                pub const m_blendParameter: usize = 0x70; // AnimParamID
                pub const m_timingBehavior: usize = 0x74; // BinaryNodeTiming
                pub const m_flTimingBlend: usize = 0x78; // float32
                pub const m_flRootMotionBlend: usize = 0x7C; // float32
                pub const m_footMotionTiming: usize = 0x80; // BinaryNodeChildOption
                pub const m_bResetChild1: usize = 0x84; // bool
                pub const m_bResetChild2: usize = 0x85; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            pub mod CAnimGraphDoc_SequenceBlend2DItem {
                pub const m_tagSpans: usize = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_TagSpan>>
                pub const m_sequenceName: usize = 0x50; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CTargetSelectorChild {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_inputConnection: usize = 0x10; // CAnimGraphDoc_NodeConnection
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_SingleFrameNode {
                pub const m_sequenceName: usize = 0x50; // CUtlString
                pub const m_eFrameSelection: usize = 0x58; // SingleFrameSelection
                pub const m_nFrameIndex: usize = 0x5C; // int32
                pub const m_actions: usize = 0x60; // CUtlVector<CSmartPtr<CAnimGraphDoc_Action>>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CycleCondition {
                pub const m_comparisonOp: usize = 0x28; // Comparison_t
                pub const m_comparisonString: usize = 0x30; // CUtlString
                pub const m_comparisonValue: usize = 0x38; // float32
                pub const m_comparisonValueType: usize = 0x3C; // ComparisonValueType
                pub const m_comparisonParamName: usize = 0x40; // CUtlString
                pub const m_comparisonParamID: usize = 0x48; // AnimParamID
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_HitReactNode {
                pub const m_inputConnection: usize = 0x40; // CAnimGraphDoc_NodeConnection
                pub const m_flMinDelayBetweenHits: usize = 0x48; // float32
                pub const m_triggerParamName: usize = 0x50; // CUtlString
                pub const m_hitBoneParamName: usize = 0x58; // CUtlString
                pub const m_hitOffsetParamName: usize = 0x60; // CUtlString
                pub const m_hitDirectionParamName: usize = 0x68; // CUtlString
                pub const m_hitStrengthParamName: usize = 0x70; // CUtlString
                pub const m_triggerParam: usize = 0x78; // AnimParamID
                pub const m_hitBoneParam: usize = 0x7C; // AnimParamID
                pub const m_hitOffsetParam: usize = 0x80; // AnimParamID
                pub const m_hitDirectionParam: usize = 0x84; // AnimParamID
                pub const m_hitStrengthParam: usize = 0x88; // AnimParamID
                pub const m_weightListName: usize = 0x90; // CUtlString
                pub const m_hipBoneName: usize = 0x98; // CUtlString
                pub const m_flHipBoneTranslationScale: usize = 0xA0; // float32
                pub const m_nEffectedBoneCount: usize = 0xA4; // int32
                pub const m_flMaxImpactForce: usize = 0xA8; // float32
                pub const m_flMinImpactForce: usize = 0xAC; // float32
                pub const m_flWhipImpactScale: usize = 0xB0; // float32
                pub const m_flCounterRotationScale: usize = 0xB4; // float32
                pub const m_flDistanceFadeScale: usize = 0xB8; // float32
                pub const m_flPropagationScale: usize = 0xBC; // float32
                pub const m_flWhipDelay: usize = 0xC0; // float32
                pub const m_flSpringStrength: usize = 0xC4; // float32
                pub const m_flWhipSpringStrength: usize = 0xC8; // float32
                pub const m_flHipDipSpringStrength: usize = 0xCC; // float32
                pub const m_flHipDipImpactScale: usize = 0xD0; // float32
                pub const m_flHipDipDelay: usize = 0xD4; // float32
                pub const m_bResetBase: usize = 0xD8; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataNodeTintColor
            pub mod CSmartPropFilter {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_ColorSelectionMode {
                pub const m_DefaultValue: usize = 0x38; // SmartPropColorSelectionMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_MotionMetric {
                pub const m_flWeight: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropVariable_PickMode {
                pub const m_DefaultValue: usize = 0x38; // PickMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_NodeManager {
                pub const m_nodes: usize = 0x8; // CUtlHashtable<AnimNodeID,CSmartPtr<CAnimGraphDoc_Node>>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_Action {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ToggleComponentAction {
                pub const m_componentID: usize = 0x28; // AnimComponentID
                pub const m_bSetEnabled: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMovementComponent {
                pub const m_motors: usize = 0x38; // CUtlVector<CSmartPtr<CAnimGraphDoc_Motor>>
                pub const m_bNetworkPath: usize = 0x50; // bool
                pub const m_facingDamping: usize = 0x58; // CAnimInputDamping
                pub const m_bNetworkFacing: usize = 0x70; // bool
                pub const m_paramIDs: usize = 0x74; // AnimParamID[34]
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropElement_PlaceOnPath {
                pub const m_PathName: usize = 0xA0; // CUtlString
                pub const m_flSpacing: usize = 0xA8; // CSmartPropAttributeFloat
                pub const m_flOffsetAlongPath: usize = 0xE8; // CSmartPropAttributeFloat
                pub const m_vPathOffset: usize = 0x128; // CSmartPropAttributeVector2D
                pub const m_PathSpace: usize = 0x168; // CSmartPropAttributeCoordinateSpace
                pub const m_bUseFixedUpDirection: usize = 0x1A8; // CSmartPropAttributeBool
                pub const m_bUseProjectedDistance: usize = 0x1E8; // CSmartPropAttributeBool
                pub const m_vUpDirection: usize = 0x228; // CSmartPropAttributeVector
                pub const m_UpDirectionSpace: usize = 0x268; // CSmartPropAttributeCoordinateSpace
                pub const m_DefaultPathInWorldSpace: usize = 0x2A8; // CSmartPropAttributeBool
                pub const m_DefaultPath: usize = 0x2E8; // CUtlVector<CSmartPropAttributeVector>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_SubGraph {
                pub const m_nodeManager: usize = 0x8; // CAnimGraphDoc_NodeManager
                pub const m_componentManager: usize = 0x50; // CAnimGraphDoc_ComponentManager
                pub const m_localParameters: usize = 0x78; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                pub const m_localTags: usize = 0x90; // CUtlVector<CSmartPtr<CAnimTagBase>>
                pub const m_referencedParamGroups: usize = 0xA8; // CUtlVector<CUtlString>
                pub const m_referencedTagGroups: usize = 0xC0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CSolveIKChainAnimNodeChainData {
                pub const m_IkChain: usize = 0x8; // CUtlString
                pub const m_SolverSettingSource: usize = 0x10; // SolveIKChainAnimNodeSettingSource
                pub const m_OverrideSolverSettings: usize = 0x14; // IKSolverSettings_t
                pub const m_TargetSettingSource: usize = 0x20; // SolveIKChainAnimNodeSettingSource
                pub const m_OverrideTargetSettings: usize = 0x28; // IKTargetSettings_t
                pub const m_DebugSetting: usize = 0x50; // SolveIKChainAnimNodeDebugSetting
                pub const m_flDebugNormalizedLength: usize = 0x54; // float32
                pub const m_vDebugOffset: usize = 0x58; // Vector
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_TargetSelectorNode {
                pub const m_children: usize = 0x40; // CUtlVector<CTargetSelectorChild>
                pub const m_eLinearRootMotionMode: usize = 0x58; // TargetWarpLinearRootMotionMode
                pub const m_eAngleMode: usize = 0x5C; // TargetSelectorAngleMode_t
                pub const m_moveHeadingParamID: usize = 0x60; // AnimParamID
                pub const m_desiredMoveHeadingParamID: usize = 0x64; // AnimParamID
                pub const m_targetPositionParamID: usize = 0x68; // AnimParamID
                pub const m_bTargetPositionIsWorldSpace: usize = 0x6C; // bool
                pub const m_targetFacePositionParamID: usize = 0x70; // AnimParamID
                pub const m_bTargetFacePositionIsWorldSpace: usize = 0x74; // bool
                pub const m_bEnablePhaseMatching: usize = 0x75; // bool
                pub const m_flPhaseMatchingMaxRootMotionSkip: usize = 0x78; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_CurrentRotationVelocityMetric {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyCustomEditor
            pub mod CSmartPropAttributePathPositions {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub mod CAnimGraphDoc_PairedSequenceNode {
                pub const m_sPairedRole: usize = 0x48; // CGlobalSymbol
                pub const m_previewSequenceName: usize = 0x50; // CUtlString
                pub const m_flPlaybackSpeed: usize = 0x58; // float32
                pub const m_bLoop: usize = 0x5C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_ParamSpanSample {
                pub const m_value: usize = 0x8; // CAnimVariant
                pub const m_flCycle: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_TraceInDirection {
                pub const m_vTraceDirection: usize = 0x350; // CSmartPropAttributeVector
                pub const m_DirectionSpace: usize = 0x390; // CSmartPropAttributeCoordinateSpace
                pub const m_flTraceLength: usize = 0x3D0; // CSmartPropAttributeFloat
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CAnimGraphDoc_NodeStateTransition {
                pub const m_blendDuration: usize = 0x70; // CFloatAnimValue
                pub const m_bReset: usize = 0x90; // bool
                pub const m_resetCycleOption: usize = 0x94; // ResetCycleOption
                pub const m_flFixedCycleValue: usize = 0x98; // CFloatAnimValue
                pub const m_blendCurve: usize = 0xB8; // CBlendCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCPPScriptComponent {
                pub const m_scriptsToRun: usize = 0x38; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropFilter_SurfaceProperties {
                pub const m_AllowedSurfaceProperties: usize = 0x50; // CUtlVector<CUtlString>
                pub const m_DisallowedSurfaceProperties: usize = 0x68; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropVariable_SurfaceProperty {
                pub const m_DefaultValue: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub mod CSmartPropOperation_RandomOffset {
                pub const m_vRandomPositionMin: usize = 0x50; // CSmartPropAttributeVector
                pub const m_vRandomPositionMax: usize = 0x90; // CSmartPropAttributeVector
                pub const m_vSnapIncrement: usize = 0xD0; // CSmartPropAttributeVector
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataComponentValidGrandParents
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CSmartPropSelectionCriteria_TopoEdgeCountCriteria {
                pub const m_nTargetOpenEdgeCount: usize = 0x48; // CSmartPropAttributeInt
                pub const m_bInvert: usize = 0x88; // CSmartPropAttributeBool
                pub const m_bSharedVert: usize = 0xC8; // CSmartPropAttributeBool
            }
        }
    }
}
