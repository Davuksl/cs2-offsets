// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

namespace CS2Dumper.Schemas {
    // Module: assetsystem.dll
    // Class count: 21
    // Enum count: 2
    public static class AssetsystemDll {
        // Alignment: 4
        // Member count: 15
        public enum ResourceDataEncodingType_t : uint {
            RESOURCE_ENCODING_INVALID = unchecked((uint)-1),
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
        }
        // Alignment: 4
        // Member count: 3
        public enum AssetWarningFixType_t : uint {
            NONE = 0x0,
            VMDL_CONVERT_TO_MODELDOC = 0x1,
            VMAP_MANUAL_RECOMPILE = 0x2
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAssetWarning {
            public const nint m_Title = 0x8; // CBufferString
            public const nint m_Message = 0x18; // CBufferString
            public const nint m_Checks = 0x28; // CUtlVector<CAssetWarningCheck>
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CExternalToolInfo {
            public const nint m_Executable = 0x20; // CUtlString
            public const nint m_Args = 0x28; // CUtlString
            public const nint m_ArgsWithLineColumn = 0x30; // CUtlString
            public const nint m_WorkingDir = 0x38; // CUtlString
            public const nint m_MatchSystemExecutable = 0x40; // CUtlString
            public const nint m_SupportedExts = 0x48; // CUtlVector<CUtlString>
            public const nint m_PriorityExts = 0x60; // CUtlVector<CUtlString>
            public const nint m_bDebugCommandline = 0x78; // bool
        }
        // Parent: None
        // Field count: 24
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSimpleAssetTypeInfo {
            public const nint m_FriendlyName = 0x10; // CUtlString
            public const nint m_Ext = 0x18; // CUtlString
            public const nint m_IconLg = 0x20; // CUtlString
            public const nint m_IconSm = 0x28; // CUtlString
            public const nint m_SuppressSubstrings = 0x30; // CUtlVector<CUtlString>
            public const nint m_AdditionalExtensions = 0x48; // CUtlVector<CUtlString>
            public const nint m_EngineCommands = 0x60; // CUtlVector<AssetEngineCommand_t>
            public const nint m_LimitToMods = 0x78; // CUtlVector<CUtlString>
            public const nint m_ExcludeFromMods = 0x90; // CUtlVector<CUtlString>
            public const nint m_HideForRetailMods = 0xA8; // CUtlVector<CUtlString>
            public const nint m_PreviewThumbnailOverlayIcon = 0xC0; // CUtlString
            public const nint m_bErrorOnUnrecognizedOutboundRefs = 0xC8; // bool
            public const nint m_UnrecognizedOutboundRefsErrorTypeExceptions = 0xD0; // CUtlVector<CUtlString>
            public const nint m_bHideTypeByDefault = 0xE8; // bool
            public const nint m_bCannotBeShown = 0xE9; // bool
            public const nint m_bIsNontrivialChildAssetType = 0xEA; // bool
            public const nint m_bSuppressFullFingerprintCalculation = 0xEB; // bool
            public const nint m_bIgnoreCompiledState = 0xEC; // bool
            public const nint m_bContentFileIsText = 0xED; // bool
            public const nint m_bPrefersLivePreview = 0xEE; // bool
            public const nint m_bPresentInGameTree = 0xEF; // bool
            public const nint m_bShouldCompileErrorFallbackToDisk = 0xF0; // bool
            public const nint m_nAssetTypeVersion = 0xF4; // int32
            public const nint m_Test_InjectSearchable = 0xF8; // CUtlString
        }
        // Parent: None
        // Field count: 20
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MVDataOutlinerAssetNameExpr
        public static class CDetailPropModel {
            public const nint m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_MaterialGroup = 0xE0; // CModelMaterialGroupName
            public const nint m_flWeight = 0xE8; // float32
            public const nint m_flStartFadeSize = 0xEC; // float32
            public const nint m_flEndFadeSize = 0xF0; // float32
            public const nint m_flOrientToSurface = 0xF4; // float32
            public const nint m_flMinSurfaceSlope = 0xF8; // float32
            public const nint m_flMaxSurfaceSlope = 0xFC; // float32
            public const nint m_flRandomVerticalOffsetMin = 0x100; // float32
            public const nint m_flRandomVerticalOffsetMax = 0x104; // float32
            public const nint m_vRandomRotationMin = 0x108; // QAngle
            public const nint m_vRandomRotationMax = 0x114; // QAngle
            public const nint m_flRandomScaleMin = 0x120; // float32
            public const nint m_flRandomScaleMax = 0x124; // float32
            public const nint m_flDensityMinScale = 0x128; // float32
            public const nint m_flBlendWeightMinScale = 0x12C; // float32
            public const nint m_flBlendWeightMin = 0x130; // float32
            public const nint m_flBlendWeightMax = 0x134; // float32
            public const nint m_flBlendWeightFullDenstity = 0x138; // float32
            public const nint m_bCastStaticShadows = 0x13C; // bool
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CEngineToolInfo {
            public const nint m_Library = 0x20; // CUtlString
            public const nint m_InterfaceName = 0x28; // CUtlString
            public const nint m_bShowInRevisionSubMenu = 0x30; // bool
            public const nint m_bIsSecondaryTool = 0x31; // bool
            public const nint m_bDoNotWarnAboutLargeAssetBatches = 0x32; // bool
            public const nint m_bIsWorkshopManagerTool = 0x33; // bool
            public const nint m_bIsWorkshopItemTool = 0x34; // bool
            public const nint m_bCanHighlightSubassets = 0x35; // bool
            public const nint m_AssetTypes = 0x38; // CUtlVector<CUtlString>
            public const nint m_LimitToMods = 0x50; // CUtlVector<CUtlString>
            public const nint m_ExcludeFromMods = 0x68; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CMapAssetTypeInfo {
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBitmapAssetTypeInfo {
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CModuleManifests {
            public const nint m_Manifests = 0x0; // CUtlVector<CManifestInfo>
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyFriendlyName
        // MVDataAssociatedFile
        // MVDataOutlinerDefaultExpanded
        public static class CDetailPropType {
            public const nint m_flDensity = 0x0; // float32
            public const nint m_Models = 0x8; // CUtlVector<CDetailPropModel>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CBaseToolInfo {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_OverrideToolShortcutName = 0x8; // CUtlString
            public const nint m_FriendlyName = 0x10; // CUtlString
            public const nint m_ToolIcon = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAssetTypeConfig {
            public const nint m_AssetTypes = 0x0; // CUtlVector<CSimpleAssetTypeInfo*>
            public const nint m_SubassetTypes = 0x18; // CUtlVector<CSubassetTypeInfo*>
            public const nint m_AssetWarnings = 0x30; // CUtlVector<CAssetWarning*>
        }
        // Parent: None
        // Field count: 11
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOutlinerDetailExpr
        // MVDataOutlinerIconExpr
        public static class CAssetTagInfo {
            public const nint m_TagName = 0x30; // CUtlString
            public const nint m_TagDescription = 0x38; // CUtlString
            public const nint m_TagIcon = 0x40; // CUtlString
            public const nint m_TagColor = 0x48; // Color
            public const nint m_TagAliases = 0x50; // CUtlVector<CUtlString>
            public const nint m_ThumbnailOverlayImage = 0x68; // CUtlString
            public const nint m_bTagIndicatesRejectedAsset = 0x70; // bool
            public const nint m_bTagHidesAssetByDefault = 0x71; // bool
            public const nint m_RestrictAutoTagToAssetType = 0x78; // CUtlString
            public const nint m_AutoFilterTag = 0x80; // CUtlString
            public const nint m_AutoDataTag = 0x88; // AutoTagVDataCondition_t
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class ResourceBlockTypeInfo_t {
            public const nint m_Encoding = 0x0; // ResourceDataEncodingType_t
            public const nint m_BlockID = 0x8; // CUtlString
            public const nint m_IntrospectedRootStruct = 0x10; // CUtlString
            public const nint m_ResourceVersion = 0x18; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CToolsConfig {
            public const nint m_EngineTools = 0x0; // CUtlVector<CEngineToolInfo>
            public const nint m_ExternalTools = 0x18; // CUtlVector<CExternalToolInfo>
            public const nint m_EngineModulesThatReferenceAssets = 0x30; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AssetEngineCommand_t {
            public const nint m_Command = 0x0; // CBufferString
            public const nint m_Icon = 0x10; // CBufferString
            public const nint m_Description = 0x20; // CBufferString
            public const nint m_bBringEngineToFront = 0x30; // bool
        }
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CSubassetTypeInfo {
            public const nint m_bFollowReferences = 0x8; // bool
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CResourceAssetTypeInfo {
            public const nint m_CompilerIdentifier = 0x100; // CUtlString
            public const nint m_CompileDependsOnResourceTypes = 0x108; // CUtlVector<CUtlString>
            public const nint m_Blocks = 0x120; // CUtlVector<ResourceBlockTypeInfo_t>
            public const nint m_RequiredSpecialDependency = 0x138; // CUtlString
            public const nint m_bPreventDirectCompile = 0x140; // bool
            public const nint m_bCannotBeAMultiParentChildCompile = 0x141; // bool
            public const nint m_bPrefersIconForThumbnail = 0x142; // bool
            public const nint m_bAllowedToCompileInTestMode = 0x143; // bool
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CVMMDAssetTypeInfo {
        }
        // Parent: None
        // Field count: 6
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CManifestInfo {
            public const nint m_Name = 0x0; // CUtlString
            public const nint m_Group = 0x8; // CUtlString
            public const nint m_Mod = 0x10; // CUtlString
            public const nint m_SourceFile = 0x18; // CUtlString
            public const nint m_nSourceLine = 0x20; // int32
            public const nint m_Resources = 0x28; // CUtlVector<CUtlString>
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class AutoTagVDataCondition_t {
            public const nint m_SourceFile = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCVDataResource>>
            public const nint m_AssetKey = 0xE0; // CKV3MemberNameWithStorage
            public const nint m_AlternateAssetKey = 0x118; // CKV3MemberNameWithStorage
            public const nint m_Expression = 0x150; // CUtlString
        }
        // Parent: None
        // Field count: 9
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CAssetWarningCheck {
            public const nint m_AssetType = 0x0; // CUtlString
            public const nint m_RequireSearchableIntKey = 0x8; // CBufferString
            public const nint m_RequireSearchableIntValue = 0x18; // int32
            public const nint m_bOnlyWarnIfGameFilePresent = 0x1C; // bool
            public const nint m_bOnlyWarnIfContentFilePresent = 0x1D; // bool
            public const nint m_bOnlyWarnAddons = 0x1E; // bool
            public const nint m_ExcludeAddonNames = 0x20; // CUtlVector<CUtlString>
            public const nint m_FixDescription = 0x38; // CUtlString
            public const nint m_FixType = 0x40; // AssetWarningFixType_t
        }
    }
}
