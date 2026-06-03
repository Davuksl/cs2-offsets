// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

pub const cs2_dumper = struct {
    pub const schemas = struct {
        // Module: assetsystem.dll
        // Class count: 21
        // Enum count: 2
        pub const assetsystem_dll = struct {
            // Alignment: 4
            // Member count: 15
            pub const ResourceDataEncodingType_t = enum(u32) {
                RESOURCE_ENCODING_INVALID = 0xFFFFFFFF,
                RESOURCE_ENCODING_INTROSPECTED = 0x0,
                RESOURCE_ENCODING_KV3 = 0x1,
                RESOURCE_ENCODING_VTEX = 0x2,
                RESOURCE_ENCODING_RAW_BYTES = 0x3,
                RESOURCE_ENCODING_VSNAP = 0x4,
                RESOURCE_ENCODING_VRMAN = 0x5,
                RESOURCE_ENCODING_COMPILEIMAGEUTILS_TEXT = 0x6,
                RESOURCE_ENCODING_TEXT = 0x7,
                RESOURCE_ENCODING_MBUF = 0x8,
                RESOURCE_ENCODING_MVTX = 0x9,
                RESOURCE_ENCODING_MIDX = 0xA,
                RESOURCE_ENCODING_MSLT = 0xB,
                RESOURCE_ENCODING_LEGACY_VSND = 0xC,
                RESOURCE_ENCODING_COUNT = 0xD
            };
            // Alignment: 4
            // Member count: 3
            pub const AssetWarningFixType_t = enum(u32) {
                NONE = 0x0,
                VMDL_CONVERT_TO_MODELDOC = 0x1,
                VMAP_MANUAL_RECOMPILE = 0x2
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAssetWarning = struct {
                pub const m_Title: usize = 0x8; // CBufferString
                pub const m_Message: usize = 0x18; // CBufferString
                pub const m_Checks: usize = 0x28; // CUtlVector<CAssetWarningCheck>
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CExternalToolInfo = struct {
                pub const m_Executable: usize = 0x20; // CUtlString
                pub const m_Args: usize = 0x28; // CUtlString
                pub const m_ArgsWithLineColumn: usize = 0x30; // CUtlString
                pub const m_WorkingDir: usize = 0x38; // CUtlString
                pub const m_MatchSystemExecutable: usize = 0x40; // CUtlString
                pub const m_SupportedExts: usize = 0x48; // CUtlVector<CUtlString>
                pub const m_PriorityExts: usize = 0x60; // CUtlVector<CUtlString>
                pub const m_bDebugCommandline: usize = 0x78; // bool
            };
            // Parent: None
            // Field count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSimpleAssetTypeInfo = struct {
                pub const m_FriendlyName: usize = 0x10; // CUtlString
                pub const m_Ext: usize = 0x18; // CUtlString
                pub const m_IconLg: usize = 0x20; // CUtlString
                pub const m_IconSm: usize = 0x28; // CUtlString
                pub const m_SuppressSubstrings: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_AdditionalExtensions: usize = 0x48; // CUtlVector<CUtlString>
                pub const m_EngineCommands: usize = 0x60; // CUtlVector<AssetEngineCommand_t>
                pub const m_LimitToMods: usize = 0x78; // CUtlVector<CUtlString>
                pub const m_ExcludeFromMods: usize = 0x90; // CUtlVector<CUtlString>
                pub const m_HideForRetailMods: usize = 0xA8; // CUtlVector<CUtlString>
                pub const m_PreviewThumbnailOverlayIcon: usize = 0xC0; // CUtlString
                pub const m_bErrorOnUnrecognizedOutboundRefs: usize = 0xC8; // bool
                pub const m_UnrecognizedOutboundRefsErrorTypeExceptions: usize = 0xD0; // CUtlVector<CUtlString>
                pub const m_bHideTypeByDefault: usize = 0xE8; // bool
                pub const m_bCannotBeShown: usize = 0xE9; // bool
                pub const m_bIsNontrivialChildAssetType: usize = 0xEA; // bool
                pub const m_bSuppressFullFingerprintCalculation: usize = 0xEB; // bool
                pub const m_bIgnoreCompiledState: usize = 0xEC; // bool
                pub const m_bContentFileIsText: usize = 0xED; // bool
                pub const m_bPrefersLivePreview: usize = 0xEE; // bool
                pub const m_bPresentInGameTree: usize = 0xEF; // bool
                pub const m_bShouldCompileErrorFallbackToDisk: usize = 0xF0; // bool
                pub const m_nAssetTypeVersion: usize = 0xF4; // int32
                pub const m_Test_InjectSearchable: usize = 0xF8; // CUtlString
            };
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataOutlinerAssetNameExpr
            pub const CDetailPropModel = struct {
                pub const m_ModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_MaterialGroup: usize = 0xE0; // CModelMaterialGroupName
                pub const m_flWeight: usize = 0xE8; // float32
                pub const m_flStartFadeSize: usize = 0xEC; // float32
                pub const m_flEndFadeSize: usize = 0xF0; // float32
                pub const m_flOrientToSurface: usize = 0xF4; // float32
                pub const m_flMinSurfaceSlope: usize = 0xF8; // float32
                pub const m_flMaxSurfaceSlope: usize = 0xFC; // float32
                pub const m_flRandomVerticalOffsetMin: usize = 0x100; // float32
                pub const m_flRandomVerticalOffsetMax: usize = 0x104; // float32
                pub const m_vRandomRotationMin: usize = 0x108; // QAngle
                pub const m_vRandomRotationMax: usize = 0x114; // QAngle
                pub const m_flRandomScaleMin: usize = 0x120; // float32
                pub const m_flRandomScaleMax: usize = 0x124; // float32
                pub const m_flDensityMinScale: usize = 0x128; // float32
                pub const m_flBlendWeightMinScale: usize = 0x12C; // float32
                pub const m_flBlendWeightMin: usize = 0x130; // float32
                pub const m_flBlendWeightMax: usize = 0x134; // float32
                pub const m_flBlendWeightFullDenstity: usize = 0x138; // float32
                pub const m_bCastStaticShadows: usize = 0x13C; // bool
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CEngineToolInfo = struct {
                pub const m_Library: usize = 0x20; // CUtlString
                pub const m_InterfaceName: usize = 0x28; // CUtlString
                pub const m_bShowInRevisionSubMenu: usize = 0x30; // bool
                pub const m_bIsSecondaryTool: usize = 0x31; // bool
                pub const m_bDoNotWarnAboutLargeAssetBatches: usize = 0x32; // bool
                pub const m_bIsWorkshopManagerTool: usize = 0x33; // bool
                pub const m_bIsWorkshopItemTool: usize = 0x34; // bool
                pub const m_bCanHighlightSubassets: usize = 0x35; // bool
                pub const m_AssetTypes: usize = 0x38; // CUtlVector<CUtlString>
                pub const m_LimitToMods: usize = 0x50; // CUtlVector<CUtlString>
                pub const m_ExcludeFromMods: usize = 0x68; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CMapAssetTypeInfo = struct {
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBitmapAssetTypeInfo = struct {
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CModuleManifests = struct {
                pub const m_Manifests: usize = 0x0; // CUtlVector<CManifestInfo>
            };
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataAssociatedFile
            // MVDataOutlinerDefaultExpanded
            pub const CDetailPropType = struct {
                pub const m_flDensity: usize = 0x0; // float32
                pub const m_Models: usize = 0x8; // CUtlVector<CDetailPropModel>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CBaseToolInfo = struct {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_OverrideToolShortcutName: usize = 0x8; // CUtlString
                pub const m_FriendlyName: usize = 0x10; // CUtlString
                pub const m_ToolIcon: usize = 0x18; // CUtlString
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAssetTypeConfig = struct {
                pub const m_AssetTypes: usize = 0x0; // CUtlVector<CSimpleAssetTypeInfo*>
                pub const m_SubassetTypes: usize = 0x18; // CUtlVector<CSubassetTypeInfo*>
                pub const m_AssetWarnings: usize = 0x30; // CUtlVector<CAssetWarning*>
            };
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOutlinerIconExpr
            pub const CAssetTagInfo = struct {
                pub const m_TagName: usize = 0x30; // CUtlString
                pub const m_TagDescription: usize = 0x38; // CUtlString
                pub const m_TagIcon: usize = 0x40; // CUtlString
                pub const m_TagColor: usize = 0x48; // Color
                pub const m_TagAliases: usize = 0x50; // CUtlVector<CUtlString>
                pub const m_ThumbnailOverlayImage: usize = 0x68; // CUtlString
                pub const m_bTagIndicatesRejectedAsset: usize = 0x70; // bool
                pub const m_bTagHidesAssetByDefault: usize = 0x71; // bool
                pub const m_RestrictAutoTagToAssetType: usize = 0x78; // CUtlString
                pub const m_AutoFilterTag: usize = 0x80; // CUtlString
                pub const m_AutoDataTag: usize = 0x88; // AutoTagVDataCondition_t
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const ResourceBlockTypeInfo_t = struct {
                pub const m_Encoding: usize = 0x0; // ResourceDataEncodingType_t
                pub const m_BlockID: usize = 0x8; // CUtlString
                pub const m_IntrospectedRootStruct: usize = 0x10; // CUtlString
                pub const m_ResourceVersion: usize = 0x18; // int32
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CToolsConfig = struct {
                pub const m_EngineTools: usize = 0x0; // CUtlVector<CEngineToolInfo>
                pub const m_ExternalTools: usize = 0x18; // CUtlVector<CExternalToolInfo>
                pub const m_EngineModulesThatReferenceAssets: usize = 0x30; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AssetEngineCommand_t = struct {
                pub const m_Command: usize = 0x0; // CBufferString
                pub const m_Icon: usize = 0x10; // CBufferString
                pub const m_Description: usize = 0x20; // CBufferString
                pub const m_bBringEngineToFront: usize = 0x30; // bool
            };
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CSubassetTypeInfo = struct {
                pub const m_bFollowReferences: usize = 0x8; // bool
            };
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CResourceAssetTypeInfo = struct {
                pub const m_CompilerIdentifier: usize = 0x100; // CUtlString
                pub const m_CompileDependsOnResourceTypes: usize = 0x108; // CUtlVector<CUtlString>
                pub const m_Blocks: usize = 0x120; // CUtlVector<ResourceBlockTypeInfo_t>
                pub const m_RequiredSpecialDependency: usize = 0x138; // CUtlString
                pub const m_bPreventDirectCompile: usize = 0x140; // bool
                pub const m_bCannotBeAMultiParentChildCompile: usize = 0x141; // bool
                pub const m_bPrefersIconForThumbnail: usize = 0x142; // bool
                pub const m_bAllowedToCompileInTestMode: usize = 0x143; // bool
            };
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CVMMDAssetTypeInfo = struct {
            };
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CManifestInfo = struct {
                pub const m_Name: usize = 0x0; // CUtlString
                pub const m_Group: usize = 0x8; // CUtlString
                pub const m_Mod: usize = 0x10; // CUtlString
                pub const m_SourceFile: usize = 0x18; // CUtlString
                pub const m_nSourceLine: usize = 0x20; // int32
                pub const m_Resources: usize = 0x28; // CUtlVector<CUtlString>
            };
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const AutoTagVDataCondition_t = struct {
                pub const m_SourceFile: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCVDataResource>>
                pub const m_AssetKey: usize = 0xE0; // CKV3MemberNameWithStorage
                pub const m_AlternateAssetKey: usize = 0x118; // CKV3MemberNameWithStorage
                pub const m_Expression: usize = 0x150; // CUtlString
            };
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub const CAssetWarningCheck = struct {
                pub const m_AssetType: usize = 0x0; // CUtlString
                pub const m_RequireSearchableIntKey: usize = 0x8; // CBufferString
                pub const m_RequireSearchableIntValue: usize = 0x18; // int32
                pub const m_bOnlyWarnIfGameFilePresent: usize = 0x1C; // bool
                pub const m_bOnlyWarnIfContentFilePresent: usize = 0x1D; // bool
                pub const m_bOnlyWarnAddons: usize = 0x1E; // bool
                pub const m_ExcludeAddonNames: usize = 0x20; // CUtlVector<CUtlString>
                pub const m_FixDescription: usize = 0x38; // CUtlString
                pub const m_FixType: usize = 0x40; // AssetWarningFixType_t
            };
        };
    };
};
