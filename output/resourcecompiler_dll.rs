// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: resourcecompiler.dll
        // Class count: 390
        // Enum count: 26
        pub mod resourcecompiler_dll {
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
            pub enum CNmGraphDocStateNode__TimedStateEventType_t {
                TimeElapsed = 0x0,
                TimeRemaining = 0x1
            }
            // Alignment: 4
            // Member count: 14
            #[repr(u32)]
            pub enum LayerType_t {
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
            #[repr(u32)]
            pub enum SteamAudioHRTFInterpolationType_t {
                SA_HRTFINTEROP_NEAREST = 0x0,
                SA_HRTFINTEROP_BILINEAR = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum CNmClipDocEvent_EntityAttribute_Type_t {
                EVENT_ENTITY_ATTR_TYPE_INT = 0x0,
                EVENT_ENTITY_ATTR_TYPE_FLOAT = 0x1
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum CNmGraphDocIDEventConditionNode__SearchRule_t {
                SearchAll = 0x0,
                OnlySearchGraphEvents = 0x1,
                OnlySearchAnimEvents = 0x2
            }
            // Alignment: 1
            // Member count: 2
            #[repr(u8)]
            pub enum NmEventConditionOperator_t {
                Or = 0x0,
                And = 0x1
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum LayerMaskType_t {
                LAYER_MASK_LUMINOSITY = 0x0,
                LAYER_MASK_COLOR_RANGE = 0x1
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PackingMode_t {
                PCKM_INVALID = 0x0,
                PCKM_FLAT = 0x1,
                PCKM_RGB_A = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SequenceLoopMode_t {
                CLAMP = 0x0,
                LOOP = 0x1,
                CLAMP_EXTEND = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SequenceAlphaCropMode_t {
                NONE = 0x0,
                UV = 0x1,
                U = 0x2,
                V = 0x3
            }
            // Alignment: 4
            // Member count: 8
            #[repr(u32)]
            pub enum NmGraphDocGraphType_t {
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
            #[repr(u8)]
            pub enum NmEventPriorityRule_t {
                HighestWeight = 0x0,
                HighestPercentageThrough = 0x1
            }
            // Alignment: 1
            // Member count: 5
            #[repr(u8)]
            pub enum CNmClipDocument__AdditiveType_t {
                None = 0x0,
                RelativeToSkeleton = 0x1,
                RelativeToFrame = 0x2,
                RelativeToAnimation = 0x3,
                RelativeToAnimationFrame = 0x4
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum PulsePortUserVisibility_t {
                UNSPECIFIED = 0x0,
                SHOW = 0x1,
                HIDE = 0x2
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum SequenceChannelMode_t {
                RGBA = 0x0,
                RGB = 0x1,
                ALPHA = 0x2
            }
            // Alignment: 1
            // Member count: 3
            #[repr(u8)]
            pub enum CNmClipDocument__AdditiveBaseFrame_t {
                FirstFrame = 0x0,
                LastFrame = 0x1,
                UserSpecifiedFrame = 0x2
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SeqMode_t {
                SQM_RGBA = 0x0,
                SQM_RGB = 0x1,
                SQM_ALPHA = 0x2,
                SQM_ALPHA_INVALID = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum AlphaCropAxis_t {
                ALPHACROP_UV = 0x0,
                ALPHACROP_U = 0x1,
                ALPHACROP_V = 0x2
            }
            // Alignment: 4
            // Member count: 2
            #[repr(u32)]
            pub enum CNmGraphDocOrientationWarpNode__OffsetType_t {
                RelativeToCharacter = 0x0,
                RelativeToOriginalRootMotion = 0x1
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum CNmGraphDocStateNode__StateType_t {
                OffState = 0x0,
                BlendTreeState = 0x1,
                StateMachineState = 0x2,
                Clone = 0x3
            }
            // Alignment: 4
            // Member count: 4
            #[repr(u32)]
            pub enum SteamAudioOcclusionModeType_t {
                SA_OCCLUSIONMODE_NONE = 0x0,
                SA_OCCLUSIONMODE_NOTRANSMISSION = 0x1,
                SA_OCCLUSIONMODE_FREQINDEPENDENT = 0x2,
                SA_OCCLUSIONMODE_FREQDEPENDENT = 0x3
            }
            // Alignment: 4
            // Member count: 3
            #[repr(u32)]
            pub enum CNmClipDocEventTrack__Type_t {
                Immediate = 0x0,
                Duration = 0x1,
                Num = 0x2
            }
            // Alignment: 4
            // Member count: 11
            #[repr(u32)]
            pub enum CNmGraphDocTransitionNode__TimeMatchMode_t {
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
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCachedBoolNode {
                pub const m_mode: usize = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterizedClipSelectorNode__CData {
                pub const m_optionWeights: usize = 0x8; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstBoolNode {
                pub const m_bValue: usize = 0x100; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocNotNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocChainLookatNode {
                pub const m_bIsTargetInWorldSpace: usize = 0x200; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_Sound {
                pub const m_relevance: usize = 0x10; // CNmEventRelevance_t
                pub const m_bContinuePlayingSoundAtDurationEnd: usize = 0x14; // bool
                pub const m_flDurationInterruptionThreshold: usize = 0x18; // float32
                pub const m_name: usize = 0x20; // CUtlString
                pub const m_position: usize = 0x28; // CNmSoundEvent::Position_t
                pub const m_attachmentName: usize = 0x30; // CUtlString
                pub const m_tags: usize = 0x38; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlOutput {
                pub const m_flDefaultValue: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVibranceColorCorrectionLayer {
                pub const m_nVibrance: usize = 0x28; // int32
                pub const m_nSaturation: usize = 0x2C; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocPoseResultNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixEffectName {
                pub const m_defaultValue: usize = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDSelectorNode {
                pub const m_options: usize = 0x100; // CUtlVector<CGlobalSymbol>
                pub const m_defaultID: usize = 0x118; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlRemap {
                pub const m_flInputMin: usize = 0x20; // float32
                pub const m_flInputMax: usize = 0x24; // float32
                pub const m_flOutputStart: usize = 0x28; // float32
                pub const m_flOutputEnd: usize = 0x2C; // float32
                pub const m_flPower: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCachedVectorNode {
                pub const m_mode: usize = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocClipNode__CData {
                pub const m_clip: usize = 0x8; // CUtlString
                pub const m_flSpeedMultiplier: usize = 0x10; // float32
                pub const m_nStartSyncEventOffset: usize = 0x14; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCachedTargetNode {
                pub const m_mode: usize = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatRemapNode__RemapRange_t {
                pub const m_flBegin: usize = 0x0; // float32
                pub const m_flEnd: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixPanner {
                pub const m_type: usize = 0x20; // VMixPannerType_t
                pub const m_flStrength: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstTargetNode {
                pub const m_rotation: usize = 0x100; // QAngle
                pub const m_translation: usize = 0x10C; // Vector
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFlowNode {
                pub const m_inputPins: usize = 0x50; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,4>
                pub const m_outputPins: usize = 0xD8; // CUtlLeanVectorFixedGrowable<NmGraphDocPin_t,1>
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixFlanger {
                pub const m_flDelay: usize = 0x20; // float32
                pub const m_flFeedback: usize = 0x24; // float32
                pub const m_flFeedfoward: usize = 0x28; // float32
                pub const m_flModRate: usize = 0x2C; // float32
                pub const m_flModDepth: usize = 0x30; // float32
                pub const m_bPhaseInvert: usize = 0x34; // bool
                pub const m_flGlideTime: usize = 0x38; // float32
                pub const m_bAntialiasing: usize = 0x3C; // bool
                pub const m_flGain: usize = 0x40; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSplitterBlend {
                pub const m_flLockAmount: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatClampNode {
                pub const m_clampRange: usize = 0x100; // Range_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatSwitchNode {
                pub const m_flFalseValue: usize = 0x100; // float32
                pub const m_flTrueValue: usize = 0x104; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlMeter {
                pub const m_flValue: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmBlendSpace1D__Point_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_flValue: usize = 0x8; // float32
                pub const m_pinID: usize = 0xC; // V_uuid_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVariationDataNode {
                pub const m_pDefaultVariationData: usize = 0x100; // CNmGraphDocVariationDataNode::CData*
                pub const m_overrides: usize = 0x108; // CUtlVector<CNmGraphDocVariationDataNode::OverrideValue_t>
                pub const m_defaultResourceName: usize = 0x120; // CResourceName
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlInput {
                pub const m_flDefaultValue: usize = 0x20; // float32
                pub const m_flMinRange: usize = 0x24; // float32
                pub const m_flMaxRange: usize = 0x28; // float32
                pub const m_bUseDecibels: usize = 0x2C; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocReferencePoseNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskParameterReferenceNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_OrientationWarp {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent {
                pub const m_flStartTime: usize = 0x8; // float32
                pub const m_flDuration: usize = 0xC; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstVectorNode {
                pub const m_value: usize = 0x100; // Vector
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLocalContrastLayer {
                pub const m_params: usize = 0x28; // PostProcessingLocalContrastParameters_t
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixVocoder {
                pub const m_nBandCount: usize = 0x20; // int32
                pub const m_flBandwidth: usize = 0x24; // float32
                pub const m_fldBModGain: usize = 0x28; // float32
                pub const m_flAttackTime: usize = 0x2C; // float32
                pub const m_flReleaseTime: usize = 0x30; // float32
                pub const m_flFreqRangeStart: usize = 0x34; // float32
                pub const m_flFreqRangeEnd: usize = 0x38; // float32
                pub const m_fldBUnvoicedGain: usize = 0x3C; // float32
                pub const m_nDebugBand: usize = 0x40; // int32
                pub const m_bPeakMode: usize = 0x44; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFootstepEventIDNode {
                pub const m_priorityRule: usize = 0x100; // NmEventPriorityRule_t
                pub const m_bLimitSearchToSourceState: usize = 0x101; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x102; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatSpringNode {
                pub const m_flHertz: usize = 0x100; // float32
                pub const m_flDampingRatio: usize = 0x104; // float32
                pub const m_bUseStartValue: usize = 0x108; // bool
                pub const m_flStartValue: usize = 0x10C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterizedClipSelectorNode {
                pub const m_optionLabels: usize = 0x200; // CUtlVector<CUtlString>
                pub const m_bIgnoreInvalidOptions: usize = 0x218; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_Transition {
                pub const m_rule: usize = 0x10; // NmTransitionRule_t
                pub const m_optionalID: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmVariationHierarchy {
                pub const m_variations: usize = 0x0; // CUtlVector<NmVariation_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoolVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocZeroPoseNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_ID {
                pub const m_ID: usize = 0x10; // CGlobalSymbol
                pub const m_secondaryID: usize = 0x18; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTransitionNode {
                pub const m_flDurationSeconds: usize = 0x108; // float32
                pub const m_bClampDurationToSource: usize = 0x10C; // bool
                pub const m_rootMotionBlend: usize = 0x10D; // NmRootMotionBlendMode_t
                pub const m_blendWeightEasing: usize = 0x10E; // NmEasingOperation_t
                pub const m_flBoneMaskBlendInTimePercentage: usize = 0x110; // float32
                pub const m_timeMatchMode: usize = 0x114; // CNmGraphDocTransitionNode::TimeMatchMode_t
                pub const m_flTimeOffset: usize = 0x118; // float32
                pub const m_bCanBeForced: usize = 0x11C; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDualCompressor {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_desc: usize = 0x24; // VMixDualCompressorDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CSelectableSubgraph {
                pub const file: usize = 0x8; // CUtlString
                pub const subgraphName: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetSelectorNode {
                pub const m_optionLabels: usize = 0x100; // CUtlVector<CUtlString>
                pub const m_flOrientationScoreWeight: usize = 0x118; // float32
                pub const m_flPositionScoreWeight: usize = 0x11C; // float32
                pub const m_bIsWorldSpaceTarget: usize = 0x120; // bool
                pub const m_bIgnoreInvalidOptions: usize = 0x121; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocSelectorBaseNode {
                pub const m_optionLabels: usize = 0x100; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBrightnessContrastColorCorrectionLayer {
                pub const m_nBrightness: usize = 0x28; // int32
                pub const m_nContrast: usize = 0x2C; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocTwoBoneIKNode__CData {
                pub const m_effectorBoneName: usize = 0x8; // CUtlString
                pub const m_flBlendTimeSeconds: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGraphEditorState {
                pub const m_viewConfig: usize = 0x0; // CGraphEditorViewConfig
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDBasedClipSelectorNode {
                pub const m_optionLabels: usize = 0x100; // CUtlVector<CUtlString>
                pub const m_bIgnoreInvalidOptions: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateCompletedConditionNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixVsndName {
                pub const m_defaultValue: usize = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixBoxverb {
                pub const m_flSizeMax: usize = 0x20; // float32
                pub const m_flSizeMin: usize = 0x24; // float32
                pub const m_flComplexity: usize = 0x28; // float32
                pub const m_flModDepth: usize = 0x2C; // float32
                pub const m_flModRate: usize = 0x30; // float32
                pub const m_bParallel: usize = 0x34; // bool
                pub const m_filterType: usize = 0x38; // VMixFilterDesc_t
                pub const m_flWidth: usize = 0x48; // float32
                pub const m_flHeight: usize = 0x4C; // float32
                pub const m_flDepth: usize = 0x50; // float32
                pub const m_flFeedbackScale: usize = 0x54; // float32
                pub const m_flFeedbackWidth: usize = 0x58; // float32
                pub const m_flFeedbackHeight: usize = 0x5C; // float32
                pub const m_flFeedbackDepth: usize = 0x60; // float32
                pub const m_flOutputGain: usize = 0x64; // float32
                pub const m_flTaps: usize = 0x68; // float32
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_Particle {
                pub const m_relevance: usize = 0x10; // CNmEventRelevance_t
                pub const m_type: usize = 0x14; // CNmParticleEvent::Type_t
                pub const m_target: usize = 0x18; // CNmEventTargetEntity_t
                pub const m_particleSystem: usize = 0x20; // CUtlString
                pub const m_bDetachFromOwner: usize = 0x28; // bool
                pub const m_bStopImmediately: usize = 0x29; // bool
                pub const m_bPlayEndCap: usize = 0x2A; // bool
                pub const m_attachmentPoint0: usize = 0x30; // CUtlString
                pub const m_attachmentType0: usize = 0x38; // ParticleAttachment_t
                pub const m_attachmentPoint1: usize = 0x40; // CUtlString
                pub const m_attachmentType1: usize = 0x48; // ParticleAttachment_t
                pub const m_config: usize = 0x50; // CUtlString
                pub const m_effectForConfig: usize = 0x58; // CUtlString
                pub const m_tags: usize = 0x60; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVariationIDComparisonNode {
                pub const m_comparison: usize = 0x200; // CNmIDComparisonNode::Comparison_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDiffusor {
                pub const m_flSize: usize = 0x20; // float32
                pub const m_flComplexity: usize = 0x24; // float32
                pub const m_flFeedback: usize = 0x28; // float32
                pub const m_flOutputGain: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCurvesColorCorrectionLayer {
                pub const m_curvePointsRGB: usize = 0x28; // CUtlVector<Vector2D>
                pub const m_curvePointsR: usize = 0x40; // CUtlVector<Vector2D>
                pub const m_curvePointsG: usize = 0x58; // CUtlVector<Vector2D>
                pub const m_curvePointsB: usize = 0x70; // CUtlVector<Vector2D>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_Foot {
                pub const m_phase: usize = 0x10; // NmFootPhase_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocAnimationPoseNode {
                pub const m_inputTimeRemapRange: usize = 0x200; // Range_t
                pub const m_fixedTimeValue: usize = 0x208; // float32
                pub const m_useFramesAsInput: usize = 0x20C; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskResultNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDResultNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmBlendSpace2D {
                pub const m_pointNames: usize = 0x0; // CUtlVector<CUtlString>
                pub const m_points: usize = 0x18; // CUtlVector<Vector2D>
                pub const m_indices: usize = 0x30; // CUtlVector<uint8>
                pub const m_hullIndices: usize = 0x48; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixAudioMeter {
                pub const m_flLeftLevel: usize = 0x20; // float32
                pub const m_flLeftPeak: usize = 0x24; // float32
                pub const m_flRightLevel: usize = 0x28; // float32
                pub const m_flRightPeak: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorControlParameterNode {
                pub const m_previewStartValue: usize = 0x118; // Vector
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocGraph {
                pub const m_ID: usize = 0x8; // V_uuid_t
                pub const m_nodes: usize = 0x20; // CUtlVector<CNmGraphDocNode*>
                pub const m_graphType: usize = 0x38; // NmGraphDocGraphType_t
                pub const m_viewOffset: usize = 0x3C; // Vector2D
                pub const m_flViewZoom: usize = 0x44; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVirtualParameterNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CColorLookupColorCorrectionLayer {
                pub const m_fileName: usize = 0x28; // CUtlString
                pub const m_lut: usize = 0x30; // CUtlVector<float32>
                pub const m_nDim: usize = 0x48; // int32
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSteamAudioDirect {
                pub const m_bApplyDistanceAttenuation: usize = 0x20; // bool
                pub const m_bApplyAirAbsorption: usize = 0x21; // bool
                pub const m_bApplyDirectivity: usize = 0x22; // bool
                pub const m_bApplyOcclusion: usize = 0x23; // bool
                pub const m_bApplyTransmission: usize = 0x24; // bool
                pub const m_flDipoleWeight: usize = 0x28; // float32
                pub const m_flDipolePower: usize = 0x2C; // float32
                pub const m_flOcclusion: usize = 0x30; // float32
                pub const m_flTransmissionLow: usize = 0x34; // float32
                pub const m_flTransmissionMid: usize = 0x38; // float32
                pub const m_flTransmissionHigh: usize = 0x3C; // float32
                pub const m_vecTransmission: usize = 0x40; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDynamics {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_fldbNoiseGateThreshold: usize = 0x24; // float32
                pub const m_fldbGain: usize = 0x28; // float32
                pub const m_fldbCompressionThreshold: usize = 0x2C; // float32
                pub const m_fldbLimiterThreshold: usize = 0x30; // float32
                pub const m_fldbKneeWidth: usize = 0x34; // float32
                pub const m_flRatio: usize = 0x38; // float32
                pub const m_flLimiterRatio: usize = 0x3C; // float32
                pub const m_flAttackTime: usize = 0x40; // float32
                pub const m_flReleaseTime: usize = 0x44; // float32
                pub const m_flRMSTime: usize = 0x48; // float32
                pub const m_flWetMix: usize = 0x4C; // float32
                pub const m_bPeakMode: usize = 0x50; // bool
                pub const m_nUIPage: usize = 0x54; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixEQ8 {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_stages: usize = 0x28; // CFilterStage[8]
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmSkeletonDocument__SecondarySkeleton_t {
                pub const m_skeleton: usize = 0x0; // CUtlString
                pub const m_attachToBoneID: usize = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmPreviewArchetype__SecondarySkeleton_t {
                pub const m_skeleton: usize = 0x0; // CUtlString
                pub const m_previewModel: usize = 0x8; // CUtlString
                pub const m_bodyPartChoiceName: usize = 0x10; // CUtlString
                pub const m_attachToBoneName: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocGraphEventConditionNode {
                pub const m_operator: usize = 0x100; // NmEventConditionOperator_t
                pub const m_bLimitSearchToSourceState: usize = 0x101; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x102; // bool
                pub const m_conditions: usize = 0x108; // CUtlVector<CNmGraphDocGraphEventConditionNode::Condition_t>
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDynamics3Band {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_fldbOutputGain: usize = 0x24; // float32
                pub const m_flRMSTime: usize = 0x28; // float32
                pub const m_flDepth: usize = 0x2C; // float32
                pub const m_flWetMix: usize = 0x30; // float32
                pub const m_flTimeScale: usize = 0x34; // float32
                pub const m_fldbKneeWidth: usize = 0x38; // float32
                pub const m_flLowCutoffFreq: usize = 0x3C; // float32
                pub const m_flHighCutoffFreq: usize = 0x40; // float32
                pub const m_bPeakMode: usize = 0x44; // bool
                pub const m_nSelectedPage: usize = 0x48; // int32
                pub const m_bands: usize = 0x4C; // VMixDynamicsBand_t[3]
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSteamAudioSource {
                pub const m_nInterpolation: usize = 0x20; // SteamAudioHRTFInterpolationType_t
                pub const m_flDirectMixLevel: usize = 0x24; // float32
                pub const m_bEnablePerspectiveCorrection: usize = 0x28; // bool
                pub const m_bRelativePosition: usize = 0x29; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocSelectorConditionNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CGraphPreviewList {
                pub const m_flVolume: usize = 0x0; // float32
                pub const m_previewList: usize = 0x8; // CPreviewList
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocVelocityBasedSpeedScaleNode {
                pub const m_flDesiredVelocity: usize = 0x100; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CToneMappingLayer {
                pub const m_params: usize = 0x28; // PostProcessingTonemapParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixAmp {
                pub const m_flVolume: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocClipSelectorNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorResultNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSteamAudioPathing {
                pub const m_flPathingMixLevel: usize = 0x20; // float32
                pub const m_vPathingEQ: usize = 0x24; // float32[3]
                pub const m_vPathingCoeffs: usize = 0x30; // CUtlVector<float32>
                pub const m_vecPathingEQ: usize = 0x48; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixFilter {
                pub const m_filterType: usize = 0x20; // CUtlString
                pub const m_nChannels: usize = 0x28; // int32
                pub const m_flFrequency: usize = 0x2C; // float32
                pub const m_flQ: usize = 0x30; // float32
                pub const m_fldbGain: usize = 0x34; // float32
                pub const m_nFilterSlope: usize = 0x38; // VMixFilterSlope_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSubgraph {
                pub const subgraphFile: usize = 0x20; // CUtlString
                pub const subgraphName: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixShaper {
                pub const m_desc: usize = 0x20; // VMixShaperDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocFootIKNode {
                pub const m_bIsTargetInWorldSpace: usize = 0x200; // bool
                pub const m_blendMode: usize = 0x201; // NmIKBlendMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlMax {
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLevelsColorCorrectionLayer {
                pub const m_nInputBlackPointRGB: usize = 0x28; // int32
                pub const m_nInputBlackPointR: usize = 0x2C; // int32
                pub const m_nInputBlackPointG: usize = 0x30; // int32
                pub const m_nInputBlackPointB: usize = 0x34; // int32
                pub const m_nInputWhitePointRGB: usize = 0x38; // int32
                pub const m_nInputWhitePointR: usize = 0x3C; // int32
                pub const m_nInputWhitePointG: usize = 0x40; // int32
                pub const m_nInputWhitePointB: usize = 0x44; // int32
                pub const m_nOutputBlackPointRGB: usize = 0x48; // int32
                pub const m_nOutputBlackPointR: usize = 0x4C; // int32
                pub const m_nOutputBlackPointG: usize = 0x50; // int32
                pub const m_nOutputBlackPointB: usize = 0x54; // int32
                pub const m_nOutputWhitePointRGB: usize = 0x58; // int32
                pub const m_nOutputWhitePointR: usize = 0x5C; // int32
                pub const m_nOutputWhitePointG: usize = 0x60; // int32
                pub const m_nOutputWhitePointB: usize = 0x64; // int32
                pub const m_flGammaRGB: usize = 0x68; // float32
                pub const m_flGammaR: usize = 0x6C; // float32
                pub const m_flGammaG: usize = 0x70; // float32
                pub const m_flGammaB: usize = 0x74; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPreviewEntry {
                pub const m_soundName: usize = 0x0; // CUtlString
                pub const m_trackName: usize = 0x8; // CUtlString
                pub const m_bIsSoundEvent: usize = 0x10; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVariationDataNode__OverrideValue_t {
                pub const m_variationID: usize = 0x0; // CGlobalSymbol
                pub const m_pData: usize = 0x8; // CNmGraphDocVariationDataNode::CData*
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorCreateNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatMathNode {
                pub const m_bReturnAbsoluteResult: usize = 0x100; // bool
                pub const m_bReturnNegatedResult: usize = 0x101; // bool
                pub const m_operator: usize = 0x102; // CNmFloatMathNode::Operator_t
                pub const m_flValueB: usize = 0x104; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocResultNode {
                pub const m_resultType: usize = 0x100; // NmGraphValueType_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskNode__CData {
                pub const m_overrideMaskID: usize = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetInfoNode {
                pub const m_infoType: usize = 0x100; // CNmTargetInfoNode::Info_t
                pub const m_bIsWorldSpaceTarget: usize = 0x104; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocDataDictionary__Parameter_t {
                pub const m_ID: usize = 0x0; // V_uuid_t
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_groupName: usize = 0x18; // CUtlString
                pub const m_valueType: usize = 0x20; // NmGraphValueType_t
                pub const m_expectedValues: usize = 0x28; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocument {
                pub const m_pRootGraph: usize = 0x70; // CNmGraphDocFlowGraph*
                pub const m_variationHierarchy: usize = 0x78; // CNmVariationHierarchy
                pub const m_debugParameterSets: usize = 0x90; // CUtlLeanVector<CNmGraphDocument::DebugParameterSet_t>
                pub const m_dictionaryIDSetIDs: usize = 0xA0; // CUtlVector<V_uuid_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTimeConditionNode {
                pub const m_flComparand: usize = 0x100; // float32
                pub const m_type: usize = 0x104; // CNmTimeConditionNode::ComparisonType_t
                pub const m_operator: usize = 0x105; // CNmTimeConditionNode::Operator_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDComparisonNode {
                pub const m_comparison: usize = 0x100; // CNmIDComparisonNode::Comparison_t
                pub const m_values: usize = 0x108; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_TargetWarp {
                pub const m_rule: usize = 0x10; // NmTargetWarpRule_t
                pub const m_algorithm: usize = 0x11; // NmTargetWarpAlgorithm_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CLayerMask {
                pub const m_nLumMaskCenter: usize = 0x8; // int32
                pub const m_nLumMaskWidth: usize = 0xC; // int32
                pub const m_nLumMaskShape: usize = 0x10; // int32
                pub const m_bInverted: usize = 0x14; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocSpeedScaleNode {
                pub const m_flMultiplier: usize = 0x100; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateNode__TimedStateEvent_t {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_type: usize = 0x8; // CNmGraphDocStateNode::TimedStateEventType_t
                pub const m_comparisonOperator: usize = 0xC; // CNmStateNode::TimedEvent_t::Comparison_t
                pub const m_flTimeValueSeconds: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocScaleNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTransitionConduitNode {
                pub const m_startStateID: usize = 0x50; // V_uuid_t
                pub const m_endStateID: usize = 0x60; // V_uuid_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlListener {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatRemapNode {
                pub const m_inputRange: usize = 0x100; // CNmGraphDocFloatRemapNode::RemapRange_t
                pub const m_outputRange: usize = 0x108; // CNmGraphDocFloatRemapNode::RemapRange_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoolParameterReferenceNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterReferenceNode {
                pub const m_parameterUUID: usize = 0x108; // V_uuid_t
                pub const m_parameterValueType: usize = 0x118; // NmGraphValueType_t
                pub const m_parameterName: usize = 0x120; // CUtlString
                pub const m_parameterGroupName: usize = 0x128; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocDurationScaleNode {
                pub const m_flDesiredDuration: usize = 0x100; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatControlParameterNode {
                pub const m_previewStartValue: usize = 0x118; // float32
                pub const m_previewMin: usize = 0x11C; // float32
                pub const m_previewMax: usize = 0x120; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlTransientInput {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPreviewList {
                pub const m_sounds: usize = 0x0; // CUtlVector<CPreviewEntry>
                pub const m_bPreviewInGame: usize = 0x18; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIsTargetSetNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocGraphEventConditionNode__Condition_t {
                pub const m_eventID: usize = 0x0; // CGlobalSymbol
                pub const m_type: usize = 0x8; // NmGraphEventTypeCondition_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCommentNode {
                pub const m_size: usize = 0x50; // Vector2D
                pub const m_comment: usize = 0x58; // CUtlString
                pub const m_nodeColor: usize = 0x60; // Color
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_BodyGroup {
                pub const m_target: usize = 0x10; // CNmEventTargetEntity_t
                pub const bodygroup: usize = 0x18; // CUtlString
                pub const value: usize = 0x20; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixPresetDSP {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_effectName: usize = 0x28; // CUtlString
                pub const m_flXFade: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFixedWeightBoneMaskNode {
                pub const m_flBoneWeight: usize = 0x100; // float32
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocument {
                pub const m_sourceFilename: usize = 0x70; // CUtlString
                pub const m_animationSkeletonName: usize = 0x78; // CUtlString
                pub const m_secondaryAnimationSkeletonNames: usize = 0x80; // CUtlVector<CUtlString>
                pub const m_eventTracks: usize = 0x98; // CUtlLeanVector<CNmClipDocEventTrack>
                pub const m_nStartFrame: usize = 0xA8; // int32
                pub const m_nEndFrame: usize = 0xAC; // int32
                pub const m_flDurationOverrideSeconds: usize = 0xB0; // float32
                pub const m_additiveType: usize = 0xB4; // CNmClipDocument::AdditiveType_t
                pub const m_additiveBaseFilename: usize = 0xB8; // CUtlString
                pub const m_additiveBaseFrame: usize = 0xC0; // CNmClipDocument::AdditiveBaseFrame_t
                pub const m_nAdditiveBaseFrameIdx: usize = 0xC4; // int32
                pub const m_bUseReferencePoseForSecondaryAnimAdditives: usize = 0xC8; // bool
                pub const m_bonesToSampleInModelSpace: usize = 0xD0; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlAutomatic {
            }
            // Parent: None
            // Field count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixBoxverb2 {
                pub const m_flSizeMax: usize = 0x20; // float32
                pub const m_flSizeMin: usize = 0x24; // float32
                pub const m_flComplexity: usize = 0x28; // float32
                pub const m_flModDepth: usize = 0x2C; // float32
                pub const m_flModRate: usize = 0x30; // float32
                pub const m_bParallel: usize = 0x34; // bool
                pub const m_filterType: usize = 0x38; // VMixFilterDesc_t
                pub const m_flWidth: usize = 0x48; // float32
                pub const m_flHeight: usize = 0x4C; // float32
                pub const m_flDepth: usize = 0x50; // float32
                pub const m_flFeedbackScale: usize = 0x54; // float32
                pub const m_flFeedbackWidth: usize = 0x58; // float32
                pub const m_flFeedbackHeight: usize = 0x5C; // float32
                pub const m_flFeedbackDepth: usize = 0x60; // float32
                pub const m_flWetMix: usize = 0x64; // float32
                pub const m_flOutputGain: usize = 0x68; // float32
                pub const m_flTaps: usize = 0x6C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod SetVarTarget_t {
                pub const nVarDefID: usize = 0x0; // PulseDocNodeID_t
                pub const strValueEncoded: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocChainLookatNode__CData {
                pub const m_chainEndBoneName: usize = 0x8; // CUtlString
                pub const m_chainForwardDir: usize = 0x10; // Vector
                pub const m_nChainLength: usize = 0x1C; // uint8
                pub const m_flBlendTimeSeconds: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTextureSheetDoc_SequenceDecalParams {
                pub const m_flScale: usize = 0x0; // float32
                pub const m_flDepth: usize = 0x4; // float32
                pub const m_flScaleVariation: usize = 0x8; // float32
                pub const m_flStartFadeTime: usize = 0xC; // float32
                pub const m_flFadeDuration: usize = 0x10; // float32
                pub const m_flAnimationScale: usize = 0x14; // float32
                pub const m_flAnimationStartTime: usize = 0x18; // float32
                pub const m_flAlignWithGravityFactor: usize = 0x1C; // float32
                pub const m_nDecalRtEncoding: usize = 0x20; // DecalRtEncoding_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatResultNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod GetVarTarget_t {
                pub const nVarDefID: usize = 0x0; // PulseDocNodeID_t
                pub const strValueEncoded: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixOsc {
                pub const m_desc: usize = 0x20; // VMixOscDesc_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocOrNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTransitionEventConditionNode {
                pub const m_ruleCondition: usize = 0x100; // NmTransitionRuleCondition_t
                pub const m_bMatchOnlySpecificMarkerID: usize = 0x101; // bool
                pub const m_markerIDToMatch: usize = 0x108; // CGlobalSymbol
                pub const m_bLimitSearchToSourceState: usize = 0x110; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x111; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixEnvelopeTrigger {
                pub const m_flBaseValue: usize = 0x20; // float32
                pub const m_flDestinationValue: usize = 0x24; // float32
                pub const m_flAttackTime: usize = 0x28; // float32
                pub const m_flHoldTime: usize = 0x2C; // float32
                pub const m_flReleaseTime: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocDataDictionary {
                pub const m_parameterSets: usize = 0x0; // CUtlVector<CNmGraphDocDataDictionary::ParameterSet_t>
                pub const m_IDSets: usize = 0x18; // CUtlVector<CNmGraphDocDataDictionary::IDSet_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetWarpNode__CData {
                pub const m_strAlignmentBoneName: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatCurveEventNode {
                pub const m_matchID: usize = 0x100; // CGlobalSymbol
                pub const m_flDefaultValue: usize = 0x108; // float32
                pub const m_priorityRule: usize = 0x10C; // NmEventPriorityRule_t
                pub const m_bLimitSearchToSourceState: usize = 0x10D; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x10E; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVariationIDComparisonNode__CData {
                pub const m_values: usize = 0x8; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocNode {
                pub const m_ID: usize = 0x8; // V_uuid_t
                pub const m_name: usize = 0x18; // CUtlString
                pub const m_floatingComment: usize = 0x20; // CUtlString
                pub const m_position: usize = 0x28; // Vector2D
                pub const m_pChildGraph: usize = 0x40; // CNmGraphDocGraph*
                pub const m_pSecondaryGraph: usize = 0x48; // CNmGraphDocGraph*
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixOutput {
                pub const m_flVolume1: usize = 0x20; // float32
                pub const m_flVolume2: usize = 0x24; // float32
                pub const m_sendTo: usize = 0x28; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorVirtualParameterNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocRootMotionOverrideNode {
                pub const m_flMaxLinearVelocity: usize = 0x100; // float32
                pub const m_flMaxAngularVelocityDegrees: usize = 0x104; // float32
                pub const m_bOverrideMoveDirX: usize = 0x108; // bool
                pub const m_bOverrideMoveDirY: usize = 0x109; // bool
                pub const m_bOverrideMoveDirZ: usize = 0x10A; // bool
                pub const m_bAllowPitchForFacing: usize = 0x10B; // bool
                pub const m_bListenForRootMotionEvents: usize = 0x10C; // bool
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CColorTintColorCorrectionLayer {
                pub const m_nTintColorR: usize = 0x28; // int32
                pub const m_nTintColorG: usize = 0x2C; // int32
                pub const m_nTintColorB: usize = 0x30; // int32
                pub const m_nStrength: usize = 0x34; // int32
                pub const m_bPreserveLuminosity: usize = 0x38; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocLocalLayerNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVariationDataNode__CData {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlCrossfade {
                pub const m_flFadeStart: usize = 0x20; // float32
                pub const m_flFadeEnd: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 103
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPulseEditorSettings {
                pub const m_colCanvasBackground: usize = 0x0; // Color
                pub const m_colCanvasBackgroundWhenDebugging: usize = 0x4; // Color
                pub const m_flGridSnapV2: usize = 0x8; // float32
                pub const m_bSnapAbsToGrid: usize = 0xC; // bool
                pub const m_bSnapSizeToGrid: usize = 0xD; // bool
                pub const m_bGridMinorPoints: usize = 0xE; // bool
                pub const m_flGridMinorSpacingV2: usize = 0x10; // float32
                pub const m_flSuppressMinorGridFurtherThan: usize = 0x14; // float32
                pub const m_colGridMinorColor: usize = 0x18; // Color
                pub const m_flGridMinorWidth: usize = 0x1C; // float32
                pub const m_nGridMajorMultiple: usize = 0x20; // int32
                pub const m_colGridMajorColor: usize = 0x24; // Color
                pub const m_flGridMajorWidth: usize = 0x28; // float32
                pub const m_colGridOriginColor: usize = 0x2C; // Color
                pub const m_flGridOriginWidth: usize = 0x30; // float32
                pub const m_nFlowTooltipBoxMargin: usize = 0x34; // float32
                pub const m_FontSequencePoint: usize = 0x38; // CUtlString
                pub const m_flSequencePointRadius: usize = 0x40; // float32
                pub const m_flSequencePointLinkWidth: usize = 0x44; // float32
                pub const m_colSequencePointFadeOverlay: usize = 0x48; // Color
                pub const m_colSequencePointSpontaneous: usize = 0x4C; // Color
                pub const m_colSequencePointYield: usize = 0x50; // Color
                pub const m_colSequencePoint: usize = 0x54; // Color
                pub const m_colSequencePointLink: usize = 0x58; // Color
                pub const m_colSequencePointLinkYield: usize = 0x5C; // Color
                pub const m_colSequencePointName: usize = 0x60; // Color
                pub const m_colFlowTooltipBorder: usize = 0x64; // Color
                pub const m_colFlowTooltipBackground: usize = 0x68; // Color
                pub const m_colFlowTooltipForeground: usize = 0x6C; // Color
                pub const m_flPortDragOffCreateThreshold: usize = 0x70; // float32
                pub const m_colBool: usize = 0x74; // Color
                pub const m_colNumber: usize = 0x78; // Color
                pub const m_colString: usize = 0x7C; // Color
                pub const m_colOther: usize = 0x80; // Color
                pub const m_colCursorFlow: usize = 0x84; // Color
                pub const m_FontFlowTooltip: usize = 0x88; // CUtlString
                pub const m_FontLiteral: usize = 0x90; // CUtlString
                pub const m_FontDomainName: usize = 0x98; // CUtlString
                pub const m_vDomainNameOffsetPX: usize = 0xA0; // Vector2D
                pub const m_colDomainName: usize = 0xA8; // Color
                pub const m_colDomainNameWhenDebugging: usize = 0xAC; // Color
                pub const m_FontParentAssets: usize = 0xB0; // CUtlString
                pub const m_colParentAssets: usize = 0xB8; // Color
                pub const m_colParentAssetsBroken: usize = 0xBC; // Color
                pub const m_flLiteralLabelSpacing: usize = 0xC0; // float32
                pub const m_colDebuggerBrokenBorder: usize = 0xC4; // Color
                pub const m_DebuggerBrokenImg: usize = 0xC8; // CUtlString
                pub const m_DebuggerBrokenOtherImg: usize = 0xD0; // CUtlString
                pub const m_flDebuggerBrokenMarkerOffset: usize = 0xD8; // float32
                pub const m_flDebuggerBrokenMarkerSize: usize = 0xDC; // float32
                pub const m_DebuggerBreakpointImg: usize = 0xE0; // CUtlString
                pub const m_DebuggerBreakpointDisabledImg: usize = 0xE8; // CUtlString
                pub const m_flDebuggerBreakpointOffset: usize = 0xF0; // float32
                pub const m_flDebuggerBreakpointSize: usize = 0xF4; // float32
                pub const m_flYieldedCursorStackOffset: usize = 0xF8; // float32
                pub const m_GraphInstanceImg: usize = 0x100; // CUtlString
                pub const m_flRecentExecTimeoutSec: usize = 0x108; // float32
                pub const m_flRecentExecStartOffset: usize = 0x10C; // float32
                pub const m_flRecentExecEndOffset: usize = 0x110; // float32
                pub const m_flRecentExecLineWidth: usize = 0x114; // float32
                pub const m_colRecentExecStartColor: usize = 0x118; // Color
                pub const m_colRecentExecEndColor: usize = 0x11C; // Color
                pub const m_colRecentExecRequirementFailStartColor: usize = 0x120; // Color
                pub const m_colRecentExecRequirementFailEndColor: usize = 0x124; // Color
                pub const m_flRecentExecConnectionIndicatorSize: usize = 0x128; // float32
                pub const m_RecentExecConnectionIndicatorImg: usize = 0x130; // CUtlString
                pub const m_bBreakOnExceptions: usize = 0x138; // bool
                pub const m_bShowExecutionHistory: usize = 0x139; // bool
                pub const m_bBoxSelectRequiresFullyContained: usize = 0x13A; // bool
                pub const m_flFlowMinWidth: usize = 0x13C; // float32
                pub const m_colSelectedBorder: usize = 0x140; // Color
                pub const m_flAppendButtonSize: usize = 0x144; // float32
                pub const m_colAppendHover: usize = 0x148; // Color
                pub const m_AppendImg: usize = 0x150; // CUtlString
                pub const m_flMoveChildArrowOffset: usize = 0x158; // float32
                pub const m_flMoveChildArrowSize: usize = 0x15C; // float32
                pub const m_MoveChildArrowImg: usize = 0x160; // CUtlString
                pub const m_colMoveChildArrow: usize = 0x168; // Color
                pub const m_flConnectionTangentStrength: usize = 0x16C; // float32
                pub const m_flConnectionCurveSpacing: usize = 0x170; // float32
                pub const m_flConnectionDeltaLimitScale: usize = 0x174; // float32
                pub const m_flBrokenConnectionOffset: usize = 0x178; // float32
                pub const m_flConnectionInflowOffset: usize = 0x17C; // float32
                pub const m_flConnectionInparamOffset: usize = 0x180; // float32
                pub const m_flConnectionInparamOffsetArray: usize = 0x184; // float32
                pub const m_flConnectionCapBrokenSize: usize = 0x188; // float32
                pub const m_ConnectionCapBrokenImg: usize = 0x190; // CUtlString
                pub const m_flConnectionColorLerpPercentageStart: usize = 0x198; // float32
                pub const m_vecBlockCommentDefaultSize: usize = 0x19C; // Vector2D
                pub const m_vecBlockCommentMinSize: usize = 0x1A4; // Vector2D
                pub const m_colBlockCommentDefault: usize = 0x1AC; // Color
                pub const m_colBlockCommentTextLight: usize = 0x1B0; // Color
                pub const m_colBlockCommentTextDark: usize = 0x1B4; // Color
                pub const m_flBlockCommentRegionAlpha: usize = 0x1B8; // float32
                pub const m_flTimelineSeekBarHeight: usize = 0x1BC; // float32
                pub const m_flTimelinePauseIconSize: usize = 0x1C0; // float32
                pub const m_flTimelineCallModeIconSize: usize = 0x1C4; // float32
                pub const m_FontTimelineTime: usize = 0x1C8; // CUtlString
                pub const m_colTimelineLabel: usize = 0x1D0; // Color
                pub const m_vecTimelineIconFromPort: usize = 0x1D4; // Vector2D
                pub const m_vecTimelinePauseIconOffset: usize = 0x1DC; // Vector2D
                pub const m_flTimelineCursorHeight: usize = 0x1E4; // float32
                pub const m_flTimelineCursorTextHeight: usize = 0x1E8; // float32
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixTrack {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_nMixDownRule: usize = 0x24; // int32
                pub const m_sendOperator: usize = 0x28; // CUtlString
                pub const m_Send1: usize = 0x30; // CUtlString
                pub const m_Send2: usize = 0x38; // CUtlString
                pub const m_Send3: usize = 0x40; // CUtlString
                pub const m_Send4: usize = 0x48; // CUtlString
            }
            // Parent: None
            // Field count: 21
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CHueSaturationColorCorrectionLayer {
                pub const m_nHueMaster: usize = 0x28; // int32
                pub const m_nHueRed: usize = 0x2C; // int32
                pub const m_nHueYellow: usize = 0x30; // int32
                pub const m_nHueGreen: usize = 0x34; // int32
                pub const m_nHueCyan: usize = 0x38; // int32
                pub const m_nHueBlue: usize = 0x3C; // int32
                pub const m_nHueMagenta: usize = 0x40; // int32
                pub const m_nSaturationMaster: usize = 0x44; // int32
                pub const m_nSaturationRed: usize = 0x48; // int32
                pub const m_nSaturationYellow: usize = 0x4C; // int32
                pub const m_nSaturationGreen: usize = 0x50; // int32
                pub const m_nSaturationCyan: usize = 0x54; // int32
                pub const m_nSaturationBlue: usize = 0x58; // int32
                pub const m_nSaturationMagenta: usize = 0x5C; // int32
                pub const m_nBrightnessMaster: usize = 0x60; // int32
                pub const m_nBrightnessRed: usize = 0x64; // int32
                pub const m_nBrightnessYellow: usize = 0x68; // int32
                pub const m_nBrightnessGreen: usize = 0x6C; // int32
                pub const m_nBrightnessCyan: usize = 0x70; // int32
                pub const m_nBrightnessBlue: usize = 0x74; // int32
                pub const m_nBrightnessMagenta: usize = 0x78; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocFollowBoneNode {
                pub const m_mode: usize = 0x200; // NmFollowBoneMode_t
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CEffectsPreviewList {
                pub const m_previewGraphInput: usize = 0x0; // CUtlString
                pub const m_flMix: usize = 0x8; // float32
                pub const m_previewList: usize = 0x10; // CPreviewList
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataPreviewWidget
            // MVDataFileExtension
            pub mod CTextureSheetDoc {
                pub const m_ePackingMode: usize = 0x0; // PackingMode_t
                pub const m_NumMips: usize = 0x4; // int32
                pub const m_bHasDecalParams: usize = 0x8; // bool
                pub const m_sLayoutOwnerSheet: usize = 0x10; // CUtlString
                pub const m_Sequences: usize = 0x18; // CUtlStringMap<CTextureSheetDoc_Sequence*>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixEditorNode {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_friendlyName: usize = 0x8; // CUtlString
                pub const m_type: usize = 0x10; // CUtlString
                pub const m_vPos: usize = 0x18; // Vector2D
                pub const m_vSize: usize = 0x20; // Vector2D
                pub const m_properties: usize = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocLayerBlendNode {
                pub const m_onlySampleBaseRootMotion: usize = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocSyncEventIndexConditionNode {
                pub const m_triggerMode: usize = 0x100; // CNmSyncEventIndexConditionNode::TriggerMode_t
                pub const m_nSyncEventIdx: usize = 0x104; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetVirtualParameterNode {
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmSkeletonDocument {
                pub const m_sourceFilename: usize = 0x70; // CUtlString
                pub const m_rootBoneName: usize = 0x78; // CUtlString
                pub const m_flGlobalScale: usize = 0x80; // float32
                pub const m_bIsAttachableProp: usize = 0x84; // bool
                pub const m_bIsCS_HACK: usize = 0x85; // bool
                pub const m_secondarySkeletons: usize = 0x88; // CUtlVector<CNmSkeletonDocument::SecondarySkeleton_t>
                pub const m_gameplayRelevantBones: usize = 0xA0; // CUtlVector<CGlobalSymbol>
                pub const m_highLODBones: usize = 0xB8; // CUtlVector<CUtlString>
                pub const m_boneMaskSetDefinitions: usize = 0xD0; // CUtlVector<NmBoneMaskSetDefinition_t>
                pub const m_previewModelName: usize = 0xE8; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixUtility {
                pub const m_desc: usize = 0x20; // VMixUtilityDesc_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDynamicsCompressor {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_desc: usize = 0x24; // VMixDynamicsCompressorDesc_t
                pub const m_nUIPage: usize = 0x48; // int32
                pub const m_bIsLimiter: usize = 0x4C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixEnvelope {
                pub const m_flAttackTime: usize = 0x20; // float32
                pub const m_flHoldTime: usize = 0x24; // float32
                pub const m_flReleaseTime: usize = 0x28; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocEntryOverrideNode {
                pub const m_stateID: usize = 0x108; // V_uuid_t
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyCustomEditor
            pub mod CTextureSheetDoc_Frame {
                pub const m_sImageName: usize = 0x0; // CUtlString
                pub const m_fDisplayTime: usize = 0x8; // float32
                pub const m_bCropEnabled: usize = 0xC; // bool
                pub const m_srcCropXStart: usize = 0x10; // int32
                pub const m_srcCropYStart: usize = 0x14; // int32
                pub const m_srcCropXEnd: usize = 0x18; // int32
                pub const m_srcCropYEnd: usize = 0x1C; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmBlendSpace1D {
                pub const m_points: usize = 0x0; // CUtlVector<CNmBlendSpace1D::Point_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIsInactiveBranchConditionNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetControlParameterNode {
                pub const m_bIsSet: usize = 0x118; // bool
                pub const m_bIsBoneID: usize = 0x119; // bool
                pub const m_targetOrientation: usize = 0x11C; // QAngle
                pub const m_targetPosition: usize = 0x128; // Vector
                pub const m_previewStartBoneID: usize = 0x138; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocLayerBaseNode {
                pub const m_isSynchronized: usize = 0x100; // bool
                pub const m_ignoreEvents: usize = 0x101; // bool
                pub const m_blendMode: usize = 0x102; // NmPoseBlendMode_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskNode {
                pub const m_maskID: usize = 0x200; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocTwoBoneIKNode {
                pub const m_bIsTargetInWorldSpace: usize = 0x200; // bool
                pub const m_blendMode: usize = 0x201; // NmIKBlendMode_t
                pub const m_flChainRotationWeight: usize = 0x204; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVignetteLayer {
                pub const m_params: usize = 0x28; // PostProcessingVignetteParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateMachineGraph {
                pub const m_entryStateID: usize = 0x50; // V_uuid_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDSwitchNode {
                pub const m_falseValue: usize = 0x100; // CGlobalSymbol
                pub const m_trueValue: usize = 0x108; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixPitchShift {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_flPitchScale: usize = 0x24; // float32
                pub const m_flGrainMs: usize = 0x28; // float32
                pub const m_nProcType: usize = 0x2C; // int32
                pub const m_nQuality: usize = 0x30; // int32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatSelectorNode {
                pub const m_options: usize = 0x100; // CUtlVector<CNmGraphDocFloatSelectorNode::Option_t>
                pub const m_flDefaultValue: usize = 0x118; // float32
                pub const m_easing: usize = 0x11C; // NmEasingOperation_t
                pub const m_easeTime: usize = 0x120; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixBlendAudio {
                pub const m_flLockAmount: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDelay {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_flDelay: usize = 0x24; // float32
                pub const m_fldbDirectGain: usize = 0x28; // float32
                pub const m_fldbDelayGain: usize = 0x2C; // float32
                pub const m_fldbFeedbackGain: usize = 0x30; // float32
                pub const m_flWidth: usize = 0x34; // float32
                pub const m_bEnableFilter: usize = 0x38; // bool
                pub const m_filterType: usize = 0x40; // CUtlString
                pub const m_flFrequency: usize = 0x48; // float32
                pub const m_flQ: usize = 0x4C; // float32
                pub const m_fldbGain: usize = 0x50; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateMachineLayerNode {
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSplitter {
                pub const m_flVolume1: usize = 0x20; // float32
                pub const m_flVolume2: usize = 0x24; // float32
                pub const m_flVolume3: usize = 0x28; // float32
                pub const m_flVolume4: usize = 0x2C; // float32
                pub const m_flVolume5: usize = 0x30; // float32
                pub const m_flVolume6: usize = 0x34; // float32
                pub const m_flVolume7: usize = 0x38; // float32
                pub const m_flVolume8: usize = 0x3C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCurrentSyncEventNode {
                pub const m_infoType: usize = 0x100; // CNmCurrentSyncEventNode::InfoType_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDToFloatNode__Mapping_t {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_value: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoolControlParameterNode {
                pub const m_previewStartValue: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterizedSelectorNode {
                pub const m_optionLabels: usize = 0x200; // CUtlVector<CUtlString>
                pub const m_bIgnoreInvalidOptions: usize = 0x218; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmAnimDocument {
                pub const m_nVersion: usize = 0x68; // int32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocDataDictionary__ParameterSet_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_parameters: usize = 0x8; // CUtlVector<CNmGraphDocDataDictionary::Parameter_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocControlParameterNode {
                pub const m_dictionaryParameterBinding: usize = 0x108; // V_uuid_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixEditorEdge {
                pub const m_plug0: usize = 0x0; // CUtlString
                pub const m_plug1: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatVirtualParameterNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorParameterReferenceNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CColorCorrectionLayer {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_nOpacityPercent: usize = 0x10; // int32
                pub const m_bVisible: usize = 0x14; // bool
                pub const m_pLayerMask: usize = 0x18; // CLayerMask*
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskSwitchNode {
                pub const m_bSwitchDynamically: usize = 0x100; // bool
                pub const m_flBlendTimeSeconds: usize = 0x104; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskVirtualParameterNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDBasedSelectorNode {
                pub const m_optionLabels: usize = 0x100; // CUtlVector<CUtlString>
                pub const m_bIgnoreInvalidOptions: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateNode {
                pub const m_type: usize = 0x50; // CNmGraphDocStateNode::StateType_t
                pub const m_cloneSourceStateID: usize = 0x54; // V_uuid_t
                pub const m_stateEvents: usize = 0x68; // CUtlVector<CNmGraphDocStateNode::StateEvent_t>
                pub const m_timedStateEvents: usize = 0x80; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                pub const m_events: usize = 0x98; // CUtlVector<CGlobalSymbol>
                pub const m_entryEvents: usize = 0xB0; // CUtlVector<CGlobalSymbol>
                pub const m_executeEvents: usize = 0xC8; // CUtlVector<CGlobalSymbol>
                pub const m_exitEvents: usize = 0xE0; // CUtlVector<CGlobalSymbol>
                pub const m_timeRemainingEvents: usize = 0xF8; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                pub const m_timeElapsedEvents: usize = 0x110; // CUtlVector<CNmGraphDocStateNode::TimedStateEvent_t>
                pub const m_bUseActualElapsedTimeInStateForTimedEvents: usize = 0x128; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlInputArray {
                pub const m_vflData: usize = 0x20; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFlowGraph__Connection_t {
                pub const m_ID: usize = 0x0; // V_uuid_t
                pub const m_fromNodeID: usize = 0x10; // V_uuid_t
                pub const m_outputPinID: usize = 0x20; // V_uuid_t
                pub const m_toNodeID: usize = 0x30; // V_uuid_t
                pub const m_inputPinID: usize = 0x40; // V_uuid_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            pub mod CNmPreviewArchetype {
                pub const m_primarySkeleton: usize = 0x0; // CUtlString
                pub const m_previewModel: usize = 0x8; // CUtlString
                pub const m_bodyPartChoiceName: usize = 0x10; // CUtlString
                pub const m_secondarySkeletonSettings: usize = 0x18; // CUtlVector<CNmPreviewArchetype::SecondarySkeleton_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstBoneTargetNode {
                pub const m_boneName: usize = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixModDelay {
                pub const m_bPhaseInvert: usize = 0x20; // bool
                pub const m_flGlideTime: usize = 0x24; // float32
                pub const m_flDelay: usize = 0x28; // float32
                pub const m_flFeedback: usize = 0x2C; // float32
                pub const m_flGain: usize = 0x30; // float32
                pub const m_flModRate: usize = 0x34; // float32
                pub const m_flModDepth: usize = 0x38; // float32
                pub const m_filterType: usize = 0x3C; // VMixFilterType_t
                pub const m_flFrequency: usize = 0x40; // float32
                pub const m_flQ: usize = 0x44; // float32
                pub const m_flFilterGain: usize = 0x48; // float32
                pub const m_bAntialiasing: usize = 0x4C; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFootEventConditionNode {
                pub const m_phaseCondition: usize = 0x100; // NmFootPhaseCondition_t
                pub const m_bLimitSearchToSourceState: usize = 0x101; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x102; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixGroupBox {
                pub const m_color: usize = 0x20; // Color
                pub const m_bMovesNodes: usize = 0x24; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBlend2DNode {
                pub const m_blendSpace: usize = 0x100; // CNmBlendSpace2D
                pub const m_bAllowLooping: usize = 0x160; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstIDNode {
                pub const m_value: usize = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CPostProcessData {
                pub const m_layers: usize = 0x8; // CUtlVector<CColorCorrectionLayer*>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetParameterReferenceNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatParameterReferenceNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSubgraphSwitch {
                pub const bUseDetailedPlugNames: usize = 0x20; // bool
                pub const defaultSubgraph: usize = 0x28; // CSelectableSubgraph
                pub const interpolationMode: usize = 0x40; // VMixSubgraphSwitchInterpolationType_t
                pub const bOnlyTailsOnFadeOut: usize = 0x44; // bool
                pub const flTransitionTime: usize = 0x48; // float32
                pub const nChannels: usize = 0x4C; // int32
                pub const subgraphs: usize = 0x50; // CUtlVector<CSelectableSubgraph>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatEaseNode {
                pub const m_easing: usize = 0x100; // NmEasingOperation_t
                pub const m_flEaseTime: usize = 0x104; // float32
                pub const m_bUseStartValue: usize = 0x108; // bool
                pub const m_flStartValue: usize = 0x10C; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatComparisonNode {
                pub const m_comparison: usize = 0x100; // CNmFloatComparisonNode::Comparison_t
                pub const m_flComparisonValue: usize = 0x104; // float32
                pub const m_flEpsilon: usize = 0x108; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CTextureSheetDoc_Sequence {
                pub const m_ChannelMode: usize = 0x0; // SequenceChannelMode_t
                pub const m_LoopMode: usize = 0x4; // SequenceLoopMode_t
                pub const m_AlphaCropMode: usize = 0x8; // SequenceAlphaCropMode_t
                pub const m_DecalParams: usize = 0xC; // CTextureSheetDoc_SequenceDecalParams
                pub const m_Frames: usize = 0x30; // CUtlVector<CTextureSheetDoc_Frame>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocDataDictionary__IDSet_t {
                pub const m_ID: usize = 0x0; // V_uuid_t
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_graphIDs: usize = 0x18; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixConvolution {
                pub const m_desc: usize = 0x20; // VMixConvolutionDesc_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_FloatCurve {
                pub const m_ID: usize = 0x10; // CUtlString
                pub const m_curve: usize = 0x18; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCachedFloatNode {
                pub const m_mode: usize = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetResultNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_FrameSnap {
                pub const m_frameSnapMode: usize = 0x10; // NmFrameSnapEventMode_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFootstepEventPercentageThroughNode {
                pub const m_phaseCondition: usize = 0x100; // NmFootPhaseCondition_t
                pub const m_priorityRule: usize = 0x101; // NmEventPriorityRule_t
                pub const m_bLimitSearchToSourceState: usize = 0x102; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x103; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatSelectorNode__Option_t {
                pub const m_name: usize = 0x0; // CUtlString
                pub const m_flValue: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixFreeverb {
                pub const m_flRoomSize: usize = 0x20; // float32
                pub const m_flDamp: usize = 0x24; // float32
                pub const m_flWidth: usize = 0x28; // float32
                pub const m_flLateReflections: usize = 0x2C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIsExternalPoseSetNode {
                pub const m_slotID: usize = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixToolGraphEntry {
                pub const m_graph: usize = 0x0; // CVMixToolGraph
                pub const m_editorState: usize = 0x48; // CGraphEditorState
                pub const m_graphPreview: usize = 0x70; // CGraphPreviewList
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_Legacy {
                pub const m_eventClass: usize = 0x10; // CUtlString
                pub const m_KV: usize = 0x18; // KeyValues3
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocClipNode {
                pub const m_bSampleRootMotion: usize = 0x200; // bool
                pub const m_bAllowLooping: usize = 0x201; // bool
                pub const m_graphEvents: usize = 0x208; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocSelectorNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterBaseNode {
                pub const m_groupName: usize = 0x100; // CUtlString
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFilterStage {
                pub const m_filterType: usize = 0x0; // CUtlString
                pub const m_flFrequency: usize = 0x8; // float32
                pub const m_flQ: usize = 0xC; // float32
                pub const m_fldbGain: usize = 0x10; // float32
                pub const m_nFilterSlope: usize = 0x14; // VMixFilterSlope_t
                pub const m_bEnable: usize = 0x15; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorNegateNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_RootMotion {
                pub const m_flBlendTimeSeconds: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDEventConditionNode {
                pub const m_operator: usize = 0x100; // NmEventConditionOperator_t
                pub const m_searchRule: usize = 0x101; // CNmGraphDocIDEventConditionNode::SearchRule_t
                pub const m_bLimitSearchToSourceState: usize = 0x102; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x103; // bool
                pub const m_eventIDs: usize = 0x108; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CMixPropertyBase {
                pub const m_name: usize = 0x8; // CUtlString
                pub const m_Comment: usize = 0x10; // CUtlString
                pub const m_bActive: usize = 0x18; // bool
                pub const m_bSolo: usize = 0x19; // bool
                pub const m_bEditProperties: usize = 0x1A; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDToFloatNode {
                pub const m_defaultValue: usize = 0x100; // float32
                pub const m_mappings: usize = 0x108; // CUtlVector<CNmGraphDocIDToFloatNode::Mapping_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatCurveNode {
                pub const m_curve: usize = 0x100; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NmGraphDocPin_t {
                pub const m_ID: usize = 0x0; // V_uuid_t
                pub const m_name: usize = 0x10; // CUtlString
                pub const m_type: usize = 0x18; // NmGraphValueType_t
                pub const m_bIsDynamicPin: usize = 0x19; // bool
                pub const m_bAllowMultipleOutConnections: usize = 0x1A; // bool
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixBlendVsndsToImpulseResponse {
                pub const m_flWeight0: usize = 0x20; // float32
                pub const m_flWeight1: usize = 0x24; // float32
                pub const m_flWeight2: usize = 0x28; // float32
                pub const m_flWeight3: usize = 0x2C; // float32
                pub const m_flWeight4: usize = 0x30; // float32
                pub const m_flWeight5: usize = 0x34; // float32
                pub const m_flWeight6: usize = 0x38; // float32
                pub const m_flWeight7: usize = 0x3C; // float32
                pub const m_flPreDelayMS0: usize = 0x40; // float32
                pub const m_flPreDelayMS1: usize = 0x44; // float32
                pub const m_flPreDelayMS2: usize = 0x48; // float32
                pub const m_flPreDelayMS3: usize = 0x4C; // float32
                pub const m_flPreDelayMS4: usize = 0x50; // float32
                pub const m_flPreDelayMS5: usize = 0x54; // float32
                pub const m_flPreDelayMS6: usize = 0x58; // float32
                pub const m_flPreDelayMS7: usize = 0x5C; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixRemapVsndToImpulseResponse {
                pub const m_flPreDelayMS: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskBlendNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDEventNode {
                pub const m_defaultValue: usize = 0x100; // CGlobalSymbol
                pub const m_bLimitSearchToSourceState: usize = 0x108; // bool
                pub const m_priorityRule: usize = 0x109; // NmEventPriorityRule_t
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x10A; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocAndNode {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocGlobalTransitionConduitNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocFollowBoneNode__CData {
                pub const m_boneName: usize = 0x8; // CUtlString
                pub const m_followTargetBoneName: usize = 0x10; // CUtlString
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDParameterReferenceNode {
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocAnimationPoseNode__CData {
                pub const m_clip: usize = 0x8; // CUtlString
                pub const m_variationTimeValue: usize = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVectorInfoNode {
                pub const m_desiredInfo: usize = 0x100; // CNmVectorInfoNode::Info_t
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocument__DebugParameterSet_t {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_boolValues: usize = 0x8; // CUtlLeanVector<std::pair<CGlobalSymbol,bool>>
                pub const m_floatValues: usize = 0x18; // CUtlLeanVector<std::pair<CGlobalSymbol,float32>>
                pub const m_IDValues: usize = 0x28; // CUtlLeanVector<std::pair<CGlobalSymbol,CGlobalSymbol>>
                pub const m_vectorValues: usize = 0x38; // CUtlLeanVector<std::pair<CGlobalSymbol,Vector>>
                pub const m_targetValues: usize = 0x48; // CUtlLeanVector<std::pair<CGlobalSymbol,CNmTarget>>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatAngleMathNode {
                pub const m_operation: usize = 0x100; // CNmFloatAngleMathNode::Operation_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateNode__StateEvent_t {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_bIsEntry: usize = 0x8; // bool
                pub const m_bIsFullyInState: usize = 0x9; // bool
                pub const m_bIsExit: usize = 0xA; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixToolGraph {
                pub const m_graphDescData: usize = 0x0; // CVMixGraphDescData
                pub const m_editorNodes: usize = 0x10; // CUtlVector<CVMixEditorNode>
                pub const m_editorEdges: usize = 0x28; // CUtlVector<CVMixEditorEdge>
                pub const m_nPreviewNode: usize = 0x40; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCurrentSyncEventIDNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixImpulseResponseInput {
                pub const m_defaultValue: usize = 0x20; // CUtlString
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetWarpNode {
                pub const m_targetUpdateRule: usize = 0x200; // CNmTargetWarpNode::TargetUpdateRule_t
                pub const m_bAllowTargetUpdate: usize = 0x201; // bool
                pub const m_bAlignWithTargetAtLastWarpEvent: usize = 0x202; // bool
                pub const m_samplingMode: usize = 0x203; // CNmRootMotionData::SamplingMode_t
                pub const m_flSamplingPositionErrorThreshold: usize = 0x204; // float32
                pub const m_flMaxTangentLength: usize = 0x208; // float32
                pub const m_flLerpFallbackDistanceThreshold: usize = 0x20C; // float32
                pub const m_flTargetUpdateDistanceThresholdDegrees: usize = 0x210; // float32
                pub const m_flTargetUpdateAngleThresholdDegrees: usize = 0x214; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBlend1DNode {
                pub const m_blendSpace: usize = 0x100; // CNmBlendSpace1D
                pub const m_bAllowLooping: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocVariationConstFloatNode {
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_EntityAttribute {
                pub const m_target: usize = 0x10; // CNmEventTargetEntity_t
                pub const m_attributeName: usize = 0x18; // CUtlString
                pub const m_nValueType: usize = 0x20; // CNmClipDocEvent_EntityAttribute_Type_t
                pub const m_nIntValue: usize = 0x24; // int32
                pub const m_FloatValue: usize = 0x28; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocVelocityBlendNode {
                pub const m_bAllowLooping: usize = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixStereoDelay {
                pub const m_flDelayLeft: usize = 0x20; // float32
                pub const m_flDelayRight: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDControlParameterNode {
                pub const m_previewStartValue: usize = 0x118; // CGlobalSymbol
                pub const m_expectedValues: usize = 0x120; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixEffectChain {
                pub const m_nChannels: usize = 0x20; // int32
                pub const m_effectName: usize = 0x28; // CUtlString
                pub const m_flXFade: usize = 0x30; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocParameterizedSelectorNode__CData {
                pub const m_optionWeights: usize = 0x8; // CUtlVector<uint8>
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEvent_MaterialAttribute {
                pub const m_target: usize = 0x10; // CNmEventTargetEntity_t
                pub const m_attributeName: usize = 0x18; // CUtlString
                pub const m_x: usize = 0x20; // CPiecewiseCurve
                pub const m_y: usize = 0x60; // CPiecewiseCurve
                pub const m_z: usize = 0xA0; // CPiecewiseCurve
                pub const m_w: usize = 0xE0; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocExternalPoseNode {
                pub const m_bShouldSampleRootMotion: usize = 0x100; // bool
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CVMixToolEditorData {
                pub const m_nSelectedGraph: usize = 0x0; // int32
                pub const m_nSelectedEffectPreset: usize = 0x4; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocOrientationWarpNode {
                pub const m_offsetType: usize = 0x100; // CNmGraphDocOrientationWarpNode::OffsetType_t
                pub const m_samplingMode: usize = 0x104; // CNmRootMotionData::SamplingMode_t
                pub const m_bWarpTranslation: usize = 0x105; // bool
            }
            // Parent: None
            // Field count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CColorBalanceColorCorrectionLayer {
                pub const m_nRedCyanBalS: usize = 0x28; // int32
                pub const m_nRedCyanBalM: usize = 0x2C; // int32
                pub const m_nRedCyanBalH: usize = 0x30; // int32
                pub const m_nGreenMagentaBalS: usize = 0x34; // int32
                pub const m_nGreenMagentaBalM: usize = 0x38; // int32
                pub const m_nGreenMagentaBalH: usize = 0x3C; // int32
                pub const m_nBlueYellowBalS: usize = 0x40; // int32
                pub const m_nBlueYellowBalM: usize = 0x44; // int32
                pub const m_nBlueYellowBalH: usize = 0x48; // int32
                pub const m_bPreserveLuminosity: usize = 0x4C; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixAutoFilter {
                pub const m_desc: usize = 0x20; // VMixAutoFilterDesc_t
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocReferencedGraphNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoneMaskSelectorNode {
                pub const m_switchDynamically: usize = 0x100; // bool
                pub const m_options: usize = 0x108; // CUtlVector<CGlobalSymbol>
                pub const m_flBlendTimeSeconds: usize = 0x120; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIDEventPercentageThroughNode {
                pub const m_priorityRule: usize = 0x100; // NmEventPriorityRule_t
                pub const m_bLimitSearchToSourceState: usize = 0x101; // bool
                pub const m_bIgnoreInactiveBranchEvents: usize = 0x102; // bool
                pub const m_eventID: usize = 0x108; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlCurve {
                pub const m_flInputMin: usize = 0x20; // float32
                pub const m_flInputMax: usize = 0x24; // float32
                pub const m_flOutputMin: usize = 0x28; // float32
                pub const m_flOutputMax: usize = 0x2C; // float32
                pub const m_curve: usize = 0x30; // CPiecewiseCurve
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocVariationConstFloatNode__CData {
                pub const m_flValue: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSteamAudioHybridReverb {
                pub const m_flReverbTimeLow: usize = 0x20; // float32
                pub const m_flReverbTimeMid: usize = 0x24; // float32
                pub const m_flReverbTimeHigh: usize = 0x28; // float32
                pub const m_vecReverbTime: usize = 0x30; // CUtlVector<float32>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocExternalGraphNode {
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixPlateverb {
                pub const m_flPrefilter: usize = 0x20; // float32
                pub const m_flInputDiffusion1: usize = 0x24; // float32
                pub const m_flInputDiffusion2: usize = 0x28; // float32
                pub const m_flDecay: usize = 0x2C; // float32
                pub const m_flDamp: usize = 0x30; // float32
                pub const m_flFeedbackDiffusion1: usize = 0x34; // float32
                pub const m_flFeedbackDiffusion2: usize = 0x38; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocEntryStateOverrideConduitNode {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod NmVariation_t {
                pub const m_ID: usize = 0x0; // CGlobalSymbol
                pub const m_parentID: usize = 0x8; // CGlobalSymbol
                pub const m_skeleton: usize = 0x10; // CResourceName
                pub const m_pUserData: usize = 0xF0; // CNmGraphVariationUserData*
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocEntryStateOverrideConditionsNode {
                pub const m_pinToStateMapping: usize = 0x108; // CUtlVector<V_uuid_t>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateLayerDataNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocReferencedGraphNode__CData {
                pub const m_variation: usize = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmClipDocEventTrack {
                pub const m_events: usize = 0x0; // CUtlVector<CNmClipDocEvent*>
                pub const m_eventClassName: usize = 0x18; // CUtlString
                pub const m_type: usize = 0x20; // CNmClipDocEventTrack::Type_t
                pub const m_bIsSyncTrack: usize = 0x24; // bool
                pub const m_bIsDisabled: usize = 0x25; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocIsExternalGraphSlotFilledNode {
                pub const m_slotID: usize = 0x100; // CGlobalSymbol
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetPointNode {
                pub const m_bIsWorldSpaceTarget: usize = 0x100; // bool
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocFootIKNode__CData {
                pub const m_leftEffectorBoneName: usize = 0x8; // CUtlString
                pub const m_rightEffectorBoneName: usize = 0x10; // CUtlString
                pub const m_flBlendTimeSeconds: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocGlobalTransitionNode {
                pub const m_stateID: usize = 0x120; // V_uuid_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocCachedIDNode {
                pub const m_mode: usize = 0x100; // NmCachedValueMode_t
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixSum {
                pub const m_flVolume1: usize = 0x20; // float32
                pub const m_flVolume2: usize = 0x24; // float32
                pub const m_flVolume3: usize = 0x28; // float32
                pub const m_flVolume4: usize = 0x2C; // float32
                pub const m_flVolume5: usize = 0x30; // float32
                pub const m_flVolume6: usize = 0x34; // float32
                pub const m_flVolume7: usize = 0x38; // float32
                pub const m_flVolume8: usize = 0x3C; // float32
                pub const m_channelName: usize = 0x40; // CUtlString[8]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFlowGraph {
                pub const m_connections: usize = 0x50; // CUtlVector<CNmGraphDocFlowGraph::Connection_t>
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CFogScatteringLayer {
                pub const m_params: usize = 0x28; // PostProcessingFogScatteringParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CnmGraphDocConstFloatNode {
                pub const m_flValue: usize = 0x100; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocTargetOffsetNode {
                pub const m_bIsBoneSpaceOffset: usize = 0x100; // bool
                pub const m_rotationOffset: usize = 0x104; // QAngle
                pub const m_translationOffset: usize = 0x110; // Vector
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocBoolResultNode {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixControlStackInput {
                pub const m_flDefaultValue: usize = 0x20; // float32
                pub const m_flMinRange: usize = 0x24; // float32
                pub const m_flMaxRange: usize = 0x28; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateMachineNode {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CBloomLayer {
                pub const m_params: usize = 0x28; // PostProcessingBloomParameters_t
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocFloatRangeComparisonNode {
                pub const m_range: usize = 0x100; // Range_t
                pub const m_isInclusiveCheck: usize = 0x108; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub mod CMixDelayImpulseResponse {
                pub const m_flPreDelayMS: usize = 0x20; // float32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmGraphDocStateMachineGraphNode {
            }
        }
    }
}
