// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: assetpreview.dll
        // Class count: 101
        // Enum count: 4
        pub mod assetpreview_dll {
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
            // Member count: 4
            #[repr(u32)]
            pub enum LightRigType_t {
                PREVIEW = 0x0,
                THUMBNAIL = 0x1,
                MATERIAL_THUMBNAIL = 0x2,
                NUM_TYPES = 0x3
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
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigBackground {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_Color: usize = 0x1; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigExposure {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_flMinEV: usize = 0x4; // float32
                pub const m_flMaxEV: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigSky {
                pub const m_hSkyMaterial: usize = 0x0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigSpotLight {
                pub const m_flOuterConeAngle: usize = 0x40; // float32
                pub const m_flInnerConeAngle: usize = 0x44; // float32
                pub const m_bCastShadows: usize = 0x48; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigSunLight {
                pub const m_flShadowCascadeDistance0: usize = 0x40; // float32
                pub const m_flShadowCascadeDistance1: usize = 0x44; // float32
                pub const m_flShadowCascadeDistance2: usize = 0x48; // float32
                pub const m_flShadowCascadeDistance3: usize = 0x4C; // float32
                pub const m_bCastShadows: usize = 0x50; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigPostProcessing {
                pub const m_hPostProcessing: usize = 0x0; // CStrongHandle<InfoForResourceTypeCPostProcessingResource>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigGrid {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_Color: usize = 0x1; // Color
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigPointLight {
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigLight {
                pub const m_vPosition: usize = 0x0; // Vector
                pub const m_vDirection: usize = 0xC; // Vector
                pub const m_vLookAt: usize = 0x18; // Vector
                pub const m_Color: usize = 0x24; // Color
                pub const m_flAxisScale: usize = 0x28; // float32
                pub const m_flRadius: usize = 0x2C; // float32
                pub const m_flBrightness: usize = 0x30; // float32
                pub const m_flLightSourceRadius: usize = 0x34; // float32
                pub const m_flDistance: usize = 0x38; // float32
                pub const m_bRelativePositioning: usize = 0x3C; // bool
                pub const m_bParentToCamera: usize = 0x3D; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLightRigVMap {
                pub const m_MapName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeVMapResourceData_t>>
                pub const m_bRender3DSkybox: usize = 0xE0; // bool
                pub const m_bParticlesTraceAgainstMap: usize = 0xE1; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataAssociatedFile
            pub mod CToolSceneLightRig {
                pub const m_nRigType: usize = 0x8; // LightRigType_t
                pub const m_Suns: usize = 0x10; // CUtlVector<CLightRigSunLight>
                pub const m_PointLights: usize = 0x28; // CUtlVector<CLightRigPointLight>
                pub const m_SpotLights: usize = 0x40; // CUtlVector<CLightRigSpotLight>
                pub const m_Background: usize = 0x58; // CLightRigBackground
                pub const m_Grid: usize = 0x5D; // CLightRigGrid
                pub const m_Exposure: usize = 0x64; // CLightRigExposure
                pub const m_PostProcessing: usize = 0x70; // CLightRigPostProcessing
                pub const m_Sky: usize = 0x78; // CLightRigSky
                pub const m_BackgroundMap: usize = 0x80; // CLightRigVMap
            }
        }
    }
}
