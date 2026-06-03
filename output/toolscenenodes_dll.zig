// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: toolscenenodes.dll
        // Class count: 94
        // Enum count: 3
        pub const toolscenenodes_dll = struct {
            // Alignment: 4
            // Member count: 2
            pub const PulseBestOutflowRules_t = enum(u32) {
                SORT_BY_NUMBER_OF_VALID_CRITERIA = 0x0,
                SORT_BY_OUTFLOW_INDEX = 0x1
            };
            // Alignment: 4
            // Member count: 4
            pub const PulseCursorCancelPriority_t = enum(u32) {
                None = 0x0,
                CancelOnSucceeded = 0x1,
                SoftCancel = 0x2,
                HardCancel = 0x3
            };
            // Alignment: 4
            // Member count: 2
            pub const PulseMethodCallMode_t = enum(u32) {
                SYNC_WAIT_FOR_COMPLETION = 0x0,
                ASYNC_FIRE_AND_FORGET = 0x1
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_WaitForCursorsWithTag = struct {
                pub const m_bTagSelfWhenComplete: usize = 0x98; // bool
                pub const m_nDesiredKillPriority: usize = 0x9C; // PulseCursorCancelPriority_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Base = struct {
                pub const m_nEditorNodeID: usize = 0x8; // PulseDocNodeID_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CSmartPropPulse_FitOnLine = struct {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            };
            // Parent: None
            // Field count: 0
            pub const CPulse_ResumePoint = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_PickBestOutflowSelector = struct {
                pub const m_nCheckType: usize = 0x48; // PulseBestOutflowRules_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_WaitForObservable = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_OnTrue: usize = 0xC0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 2
            pub const CSmartPropPulse_SelectionEndCap__Criteria_t = struct {
                pub const m_bStart: usize = 0x0; // bool
                pub const m_bEnd: usize = 0x1; // bool
            };
            // Parent: None
            // Field count: 0
            pub const CSmartPropOperationAPI = struct {
            };
            // Parent: None
            // Field count: 4
            pub const CPulse_OutflowConnection = struct {
                pub const m_SourceOutflowName: usize = 0x0; // PulseSymbol_t
                pub const m_nDestChunk: usize = 0x10; // PulseRuntimeChunkIndex_t
                pub const m_nInstruction: usize = 0x14; // int32
                pub const m_OutflowRegisterMap: usize = 0x18; // PulseRegisterMap_t
            };
            // Parent: None
            // Field count: 4
            pub const CSmartPropPulse_SelectionLinearLength__Criteria_t = struct {
                pub const m_flLength: usize = 0x0; // float32
                pub const m_bAllowScale: usize = 0x4; // bool
                pub const m_flMinLength: usize = 0x8; // float32
                pub const m_flMaxLength: usize = 0xC; // float32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CSmartPropPulse_SelectionChoiceWeight = struct {
            };
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseGraphDef = struct {
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
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CSmartPropPulse_SelectionEndCap = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_FireCursors = struct {
                pub const m_Outflows: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline__TimelineEvent_t = struct {
                pub const m_flTimeFromPrevious: usize = 0x0; // float32
                pub const m_EventOutflow: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IntervalTimer__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
                pub const m_flWaitInterval: usize = 0x8; // float32
                pub const m_flWaitIntervalHigh: usize = 0xC; // float32
                pub const m_bCompleteOnNextWake: usize = 0x10; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseRequirement = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorHeaderIcon
            pub const CPulseCell_BaseState = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const OutflowWithRequirements_t = struct {
                pub const m_Connection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DestinationFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_RequirementNodeIDs: usize = 0x50; // CUtlVector<PulseDocNodeID_t>
                pub const m_nCursorStateBlockIndex: usize = 0x68; // CUtlVector<int32>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_IsRequirementValid = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Gradient = struct {
                pub const m_Gradient: usize = 0x48; // CColorGradient
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseCursorFuncs = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t__DynamicOutflow_t = struct {
                pub const m_OutflowID: usize = 0x0; // CGlobalSymbol
                pub const m_Connection: usize = 0x8; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 0
            pub const CBasePulseGraphInstance = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_GraphHook = struct {
                pub const m_HookName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Resume = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CSmartPropOperation_MaterialReplacementAPI = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_BaseEntrypoint = struct {
                pub const m_EntryChunk: usize = 0x48; // PulseRuntimeChunkIndex_t
                pub const m_RegisterMap: usize = 0x50; // PulseRegisterMap_t
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_WaitForCursorsWithTagBase = struct {
                pub const m_nCursorsAllowedToWait: usize = 0x48; // int32
                pub const m_WaitComplete: usize = 0x50; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_InvokeBinding = struct {
                pub const m_RegisterMap: usize = 0x0; // PulseRegisterMap_t
                pub const m_FuncName: usize = 0x30; // PulseSymbol_t
                pub const m_nCellIndex: usize = 0x40; // PulseRuntimeCellIndex_t
                pub const m_nSrcChunk: usize = 0x44; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CSmartPropPulse_PlaceOnPath = struct {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
                pub const m_PathName: usize = 0x60; // CUtlString
            };
            // Parent: None
            // Field count: 0
            pub const CSmartPropAPI = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_IntervalTimer = struct {
                pub const m_Completed: usize = 0x48; // CPulse_ResumePoint
                pub const m_OnInterval: usize = 0x90; // SignatureOutflow_Continue
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseTestScriptLib = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 3
            pub const CEntityInstance = struct {
                pub const m_iszPrivateVScripts: usize = 0x8; // CUtlSymbolLarge
                pub const m_pEntity: usize = 0x10; // CEntityIdentity*
                pub const m_CScriptComponent: usize = 0x28; // CScriptComponent*
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CSmartPropPulse_Group = struct {
                pub const m_OutflowList: usize = 0x48; // PulseSelectorOutflowList_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CPulseCell_Value_Curve = struct {
                pub const m_Curve: usize = 0x48; // CPiecewiseCurve
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EventHandler = struct {
                pub const m_EventName: usize = 0x80; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseFlow = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CEntityComponent = struct {
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled__InstanceState_t = struct {
                pub const m_Shuffle: usize = 0x0; // CUtlVectorFixedGrowable<uint8,8>
                pub const m_nNextShuffle: usize = 0x20; // int32
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseLerp__CursorState_t = struct {
                pub const m_StartTime: usize = 0x0; // GameTime_t
                pub const m_EndTime: usize = 0x4; // GameTime_t
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_WaitForCursorsWithTagBase__CursorState_t = struct {
                pub const m_TagName: usize = 0x0; // PulseSymbol_t
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseArraylib = struct {
            };
            // Parent: None
            // Field count: 0
            pub const SignatureOutflow_Continue = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Timeline = struct {
                pub const m_TimelineEvents: usize = 0x48; // CUtlVector<CPulseCell_Timeline::TimelineEvent_t>
                pub const m_bWaitForChildOutflows: usize = 0x60; // bool
                pub const m_OnFinished: usize = 0x68; // CPulse_ResumePoint
                pub const m_OnCanceled: usize = 0xB0; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_EntOutputHandler = struct {
                pub const m_SourceEntity: usize = 0x80; // PulseSymbol_t
                pub const m_SourceOutput: usize = 0x90; // PulseSymbol_t
                pub const m_ExpectedParamType: usize = 0xA0; // CPulseValueFullType
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered__InstanceState_t = struct {
                pub const m_nNextIndex: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CSmartPropPulse_SmartProp = struct {
                pub const m_hSmartProp: usize = 0x48; // CStrongHandle<InfoForResourceTypeCSmartProp>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub const CSmartPropPulse_CreateRotator = struct {
                pub const m_Name: usize = 0x48; // CUtlString
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_LimitCount__InstanceState_t = struct {
                pub const m_nCurrentCount: usize = 0x0; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_DebugLog = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseYieldingInflow = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseNodeDynamicOutflows_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<PulseNodeDynamicOutflows_t::DynamicOutflow_t>
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_IsRequirementValid__Criteria_t = struct {
                pub const m_bIsValid: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_ObservableVariableListener = struct {
                pub const m_nBlackboardReference: usize = 0x80; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_bSelfReference: usize = 0x82; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleOrdered = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseSelectorOutflowList_t = struct {
                pub const m_Outflows: usize = 0x0; // CUtlVector<OutflowWithRequirements_t>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            pub const CSmartPropPulse_CriteriaPathPosition = struct {
            };
            // Parent: CEntityComponent
            // Field count: 1
            pub const CScriptComponent = struct {
                pub const m_scriptClassName: usize = 0x30; // CUtlSymbolLarge
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_Inflow_Wait = struct {
                pub const m_WakeResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleShuffled = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Method = struct {
                pub const m_MethodName: usize = 0x80; // PulseSymbol_t
                pub const m_Description: usize = 0x90; // CUtlString
                pub const m_bIsPublic: usize = 0x98; // bool
                pub const m_ReturnType: usize = 0xA0; // CPulseValueFullType
                pub const m_Args: usize = 0xB8; // CUtlLeanVector<CPulseRuntimeMethodArg>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSmartPropPulse_BaseQueryableFlow = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CSmartPropExprAPI = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_BaseValue = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorCanvasItemSpecKV3
            pub const CPulseCell_BooleanSwitchState = struct {
                pub const m_Condition: usize = 0x48; // PulseObservableBoolExpression_t
                pub const m_Always: usize = 0xC0; // CPulse_OutflowConnection
                pub const m_WhenTrue: usize = 0x108; // CPulse_OutflowConnection
                pub const m_WhenFalse: usize = 0x150; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Inflow_Yield = struct {
                pub const m_UnyieldResume: usize = 0x48; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MPropertyDescription
            pub const CPulseMathlib = struct {
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_Unknown = struct {
                pub const m_UnknownKeys: usize = 0x48; // KeyValues3
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Outflow_CycleRandom = struct {
                pub const m_Outputs: usize = 0x48; // CUtlVector<CPulse_OutflowConnection>
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_PublicOutput = struct {
                pub const m_OutputIndex: usize = 0x48; // PulseRuntimeOutputIndex_t
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CSmartPropPulse_PlaceInSphere = struct {
                pub const m_Place: usize = 0x48; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 0
            pub const CSmartPropFilterAPI = struct {
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_BlackboardReference = struct {
                pub const m_hBlackboardResource: usize = 0x0; // CStrongHandle<InfoForResourceTypeIPulseGraphDef>
                pub const m_BlackboardResource: usize = 0x8; // PulseSymbol_t
                pub const m_nNodeID: usize = 0x18; // PulseDocNodeID_t
                pub const m_NodeName: usize = 0x20; // CGlobalSymbol
            };
            // Parent: None
            // Field count: 5
            pub const CSmartPropPulse_CriteriaPathPosition__Criteria_t = struct {
                pub const m_PlaceAtPositions: usize = 0x0; // SmartPropPathPositions_t
                pub const m_nPlaceEveryNthPosition: usize = 0x4; // int32
                pub const m_nNthPositionIndexOffset: usize = 0x8; // int32
                pub const m_bAllowAtStart: usize = 0xC; // bool
                pub const m_bAllowAtEnd: usize = 0xD; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomInt = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulse_CallInfo = struct {
                pub const m_PortName: usize = 0x0; // PulseSymbol_t
                pub const m_nEditorNodeID: usize = 0x10; // PulseDocNodeID_t
                pub const m_RegisterMap: usize = 0x18; // PulseRegisterMap_t
                pub const m_CallMethodID: usize = 0x48; // PulseDocNodeID_t
                pub const m_nSrcChunk: usize = 0x4C; // PulseRuntimeChunkIndex_t
                pub const m_nSrcInstruction: usize = 0x50; // int32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub const CSmartPropPulse_CreateLocator = struct {
                pub const m_LocatorName: usize = 0x48; // CUtlString
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_InlineNodeSkipSelector = struct {
                pub const m_nFlowNodeID: usize = 0x48; // PulseDocNodeID_t
                pub const m_bAnd: usize = 0x4C; // bool
                pub const m_PassOutflow: usize = 0x50; // PulseSelectorOutflowList_t
                pub const m_FailOutflow: usize = 0x68; // CPulse_OutflowConnection
            };
            // Parent: None
            // Field count: 1
            pub const CSmartPropPulse_SelectionChoiceWeight__Criteria_t = struct {
                pub const m_flWeight: usize = 0x0; // float32
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CPulseCell_LimitCount = struct {
                pub const m_nLimitCount: usize = 0x48; // int32
            };
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CPulseCell_Step_CallExternalMethod = struct {
                pub const m_MethodName: usize = 0x48; // PulseSymbol_t
                pub const m_nBlackboardIndex: usize = 0x58; // PulseRuntimeBlackboardReferenceIndex_t
                pub const m_ExpectedArgs: usize = 0x60; // CUtlLeanVector<CPulseRuntimeMethodArg>
                pub const m_nAsyncCallMode: usize = 0x70; // PulseMethodCallMode_t
                pub const m_OnFinished: usize = 0x78; // CPulse_ResumePoint
            };
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MVDataClassGroup
            pub const CSmartPropPulse_CreateSizer = struct {
                pub const m_Name: usize = 0x48; // CUtlString
                pub const m_bHACK_ProvideResultMinX: usize = 0x50; // bool
                pub const m_bHACK_ProvideResultMaxX: usize = 0x51; // bool
                pub const m_bHACK_ProvideResultMinY: usize = 0x52; // bool
                pub const m_bHACK_ProvideResultMaxY: usize = 0x53; // bool
                pub const m_bHACK_ProvideResultMinZ: usize = 0x54; // bool
                pub const m_bHACK_ProvideResultMaxZ: usize = 0x55; // bool
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            // MPulseEditorCanvasItemSpecKV3
            pub const CSmartPropPulse_PickOneSelector = struct {
                pub const m_HandleShape: usize = 0x48; // ConfigurationHandleShape_t
                pub const m_OutflowList: usize = 0x50; // PulseSelectorOutflowList_t
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const PulseObservableBoolExpression_t = struct {
                pub const m_EvaluateConnection: usize = 0x0; // CPulse_OutflowConnection
                pub const m_DependentObservableVars: usize = 0x48; // CUtlVector<PulseRuntimeVarIndex_t>
                pub const m_DependentObservableBlackboardReferences: usize = 0x60; // CUtlVector<PulseRuntimeBlackboardReferenceIndex_t>
            };
            // Parent: None
            // Field count: 1
            pub const CPulseCell_LimitCount__Criteria_t = struct {
                pub const m_bLimitCountPasses: usize = 0x0; // bool
            };
            // Parent: None
            // Field count: 12
            pub const CEntityIdentity = struct {
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
            };
            // Parent: None
            // Field count: 0
            pub const CPulseGraphInstance_SmartPropEval = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_CursorQueue = struct {
                pub const m_nCursorsAllowedToRunParallel: usize = 0x98; // int32
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            // MPulseEditorHeaderIcon
            pub const CPulseCell_Value_RandomFloat = struct {
            };
            // Parent: None
            // Field count: 0
            pub const CPulseExecCursor = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyDescription
            pub const CSmartPropPulse_SelectionLinearLength = struct {
            };
        };
    };
};
