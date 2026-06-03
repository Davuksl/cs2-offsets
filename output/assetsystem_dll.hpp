// Generated using https://github.com/a2x/cs2-dumper
// 2026-06-03 08:55:27.313551 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: assetsystem.dll
        // Class count: 21
        // Enum count: 2
        namespace assetsystem_dll {
            // Alignment: 4
            // Member count: 15
            enum class ResourceDataEncodingType_t : uint32_t {
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
            enum class AssetWarningFixType_t : uint32_t {
                NONE = 0x0,
                VMDL_CONVERT_TO_MODELDOC = 0x1,
                VMAP_MANUAL_RECOMPILE = 0x2
            };
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAssetWarning {
                constexpr std::ptrdiff_t m_Title = 0x8; // CBufferString
                constexpr std::ptrdiff_t m_Message = 0x18; // CBufferString
                constexpr std::ptrdiff_t m_Checks = 0x28; // CUtlVector<CAssetWarningCheck>
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExternalToolInfo {
                constexpr std::ptrdiff_t m_Executable = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ArgsWithLineColumn = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_WorkingDir = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_MatchSystemExecutable = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_SupportedExts = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_PriorityExts = 0x60; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bDebugCommandline = 0x78; // bool
            }
            // Parent: None
            // Field count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSimpleAssetTypeInfo {
                constexpr std::ptrdiff_t m_FriendlyName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_Ext = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_IconLg = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_IconSm = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_SuppressSubstrings = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_AdditionalExtensions = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_EngineCommands = 0x60; // CUtlVector<AssetEngineCommand_t>
                constexpr std::ptrdiff_t m_LimitToMods = 0x78; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ExcludeFromMods = 0x90; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_HideForRetailMods = 0xA8; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_PreviewThumbnailOverlayIcon = 0xC0; // CUtlString
                constexpr std::ptrdiff_t m_bErrorOnUnrecognizedOutboundRefs = 0xC8; // bool
                constexpr std::ptrdiff_t m_UnrecognizedOutboundRefsErrorTypeExceptions = 0xD0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_bHideTypeByDefault = 0xE8; // bool
                constexpr std::ptrdiff_t m_bCannotBeShown = 0xE9; // bool
                constexpr std::ptrdiff_t m_bIsNontrivialChildAssetType = 0xEA; // bool
                constexpr std::ptrdiff_t m_bSuppressFullFingerprintCalculation = 0xEB; // bool
                constexpr std::ptrdiff_t m_bIgnoreCompiledState = 0xEC; // bool
                constexpr std::ptrdiff_t m_bContentFileIsText = 0xED; // bool
                constexpr std::ptrdiff_t m_bPrefersLivePreview = 0xEE; // bool
                constexpr std::ptrdiff_t m_bPresentInGameTree = 0xEF; // bool
                constexpr std::ptrdiff_t m_bShouldCompileErrorFallbackToDisk = 0xF0; // bool
                constexpr std::ptrdiff_t m_nAssetTypeVersion = 0xF4; // int32
                constexpr std::ptrdiff_t m_Test_InjectSearchable = 0xF8; // CUtlString
            }
            // Parent: None
            // Field count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataOutlinerAssetNameExpr
            namespace CDetailPropModel {
                constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_MaterialGroup = 0xE0; // CModelMaterialGroupName
                constexpr std::ptrdiff_t m_flWeight = 0xE8; // float32
                constexpr std::ptrdiff_t m_flStartFadeSize = 0xEC; // float32
                constexpr std::ptrdiff_t m_flEndFadeSize = 0xF0; // float32
                constexpr std::ptrdiff_t m_flOrientToSurface = 0xF4; // float32
                constexpr std::ptrdiff_t m_flMinSurfaceSlope = 0xF8; // float32
                constexpr std::ptrdiff_t m_flMaxSurfaceSlope = 0xFC; // float32
                constexpr std::ptrdiff_t m_flRandomVerticalOffsetMin = 0x100; // float32
                constexpr std::ptrdiff_t m_flRandomVerticalOffsetMax = 0x104; // float32
                constexpr std::ptrdiff_t m_vRandomRotationMin = 0x108; // QAngle
                constexpr std::ptrdiff_t m_vRandomRotationMax = 0x114; // QAngle
                constexpr std::ptrdiff_t m_flRandomScaleMin = 0x120; // float32
                constexpr std::ptrdiff_t m_flRandomScaleMax = 0x124; // float32
                constexpr std::ptrdiff_t m_flDensityMinScale = 0x128; // float32
                constexpr std::ptrdiff_t m_flBlendWeightMinScale = 0x12C; // float32
                constexpr std::ptrdiff_t m_flBlendWeightMin = 0x130; // float32
                constexpr std::ptrdiff_t m_flBlendWeightMax = 0x134; // float32
                constexpr std::ptrdiff_t m_flBlendWeightFullDenstity = 0x138; // float32
                constexpr std::ptrdiff_t m_bCastStaticShadows = 0x13C; // bool
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEngineToolInfo {
                constexpr std::ptrdiff_t m_Library = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_InterfaceName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_bShowInRevisionSubMenu = 0x30; // bool
                constexpr std::ptrdiff_t m_bIsSecondaryTool = 0x31; // bool
                constexpr std::ptrdiff_t m_bDoNotWarnAboutLargeAssetBatches = 0x32; // bool
                constexpr std::ptrdiff_t m_bIsWorkshopManagerTool = 0x33; // bool
                constexpr std::ptrdiff_t m_bIsWorkshopItemTool = 0x34; // bool
                constexpr std::ptrdiff_t m_bCanHighlightSubassets = 0x35; // bool
                constexpr std::ptrdiff_t m_AssetTypes = 0x38; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_LimitToMods = 0x50; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ExcludeFromMods = 0x68; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMapAssetTypeInfo {
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBitmapAssetTypeInfo {
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModuleManifests {
                constexpr std::ptrdiff_t m_Manifests = 0x0; // CUtlVector<CManifestInfo>
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MVDataAssociatedFile
            // MVDataOutlinerDefaultExpanded
            namespace CDetailPropType {
                constexpr std::ptrdiff_t m_flDensity = 0x0; // float32
                constexpr std::ptrdiff_t m_Models = 0x8; // CUtlVector<CDetailPropModel>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseToolInfo {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_OverrideToolShortcutName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_FriendlyName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_ToolIcon = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAssetTypeConfig {
                constexpr std::ptrdiff_t m_AssetTypes = 0x0; // CUtlVector<CSimpleAssetTypeInfo*>
                constexpr std::ptrdiff_t m_SubassetTypes = 0x18; // CUtlVector<CSubassetTypeInfo*>
                constexpr std::ptrdiff_t m_AssetWarnings = 0x30; // CUtlVector<CAssetWarning*>
            }
            // Parent: None
            // Field count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOutlinerDetailExpr
            // MVDataOutlinerIconExpr
            namespace CAssetTagInfo {
                constexpr std::ptrdiff_t m_TagName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_TagDescription = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_TagIcon = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_TagColor = 0x48; // Color
                constexpr std::ptrdiff_t m_TagAliases = 0x50; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ThumbnailOverlayImage = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_bTagIndicatesRejectedAsset = 0x70; // bool
                constexpr std::ptrdiff_t m_bTagHidesAssetByDefault = 0x71; // bool
                constexpr std::ptrdiff_t m_RestrictAutoTagToAssetType = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_AutoFilterTag = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_AutoDataTag = 0x88; // AutoTagVDataCondition_t
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ResourceBlockTypeInfo_t {
                constexpr std::ptrdiff_t m_Encoding = 0x0; // ResourceDataEncodingType_t
                constexpr std::ptrdiff_t m_BlockID = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_IntrospectedRootStruct = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_ResourceVersion = 0x18; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CToolsConfig {
                constexpr std::ptrdiff_t m_EngineTools = 0x0; // CUtlVector<CEngineToolInfo>
                constexpr std::ptrdiff_t m_ExternalTools = 0x18; // CUtlVector<CExternalToolInfo>
                constexpr std::ptrdiff_t m_EngineModulesThatReferenceAssets = 0x30; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AssetEngineCommand_t {
                constexpr std::ptrdiff_t m_Command = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_Icon = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_Description = 0x20; // CBufferString
                constexpr std::ptrdiff_t m_bBringEngineToFront = 0x30; // bool
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSubassetTypeInfo {
                constexpr std::ptrdiff_t m_bFollowReferences = 0x8; // bool
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CResourceAssetTypeInfo {
                constexpr std::ptrdiff_t m_CompilerIdentifier = 0x100; // CUtlString
                constexpr std::ptrdiff_t m_CompileDependsOnResourceTypes = 0x108; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_Blocks = 0x120; // CUtlVector<ResourceBlockTypeInfo_t>
                constexpr std::ptrdiff_t m_RequiredSpecialDependency = 0x138; // CUtlString
                constexpr std::ptrdiff_t m_bPreventDirectCompile = 0x140; // bool
                constexpr std::ptrdiff_t m_bCannotBeAMultiParentChildCompile = 0x141; // bool
                constexpr std::ptrdiff_t m_bPrefersIconForThumbnail = 0x142; // bool
                constexpr std::ptrdiff_t m_bAllowedToCompileInTestMode = 0x143; // bool
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVMMDAssetTypeInfo {
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CManifestInfo {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Group = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_Mod = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_SourceFile = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_nSourceLine = 0x20; // int32
                constexpr std::ptrdiff_t m_Resources = 0x28; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AutoTagVDataCondition_t {
                constexpr std::ptrdiff_t m_SourceFile = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCVDataResource>>
                constexpr std::ptrdiff_t m_AssetKey = 0xE0; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_AlternateAssetKey = 0x118; // CKV3MemberNameWithStorage
                constexpr std::ptrdiff_t m_Expression = 0x150; // CUtlString
            }
            // Parent: None
            // Field count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAssetWarningCheck {
                constexpr std::ptrdiff_t m_AssetType = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_RequireSearchableIntKey = 0x8; // CBufferString
                constexpr std::ptrdiff_t m_RequireSearchableIntValue = 0x18; // int32
                constexpr std::ptrdiff_t m_bOnlyWarnIfGameFilePresent = 0x1C; // bool
                constexpr std::ptrdiff_t m_bOnlyWarnIfContentFilePresent = 0x1D; // bool
                constexpr std::ptrdiff_t m_bOnlyWarnAddons = 0x1E; // bool
                constexpr std::ptrdiff_t m_ExcludeAddonNames = 0x20; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_FixDescription = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_FixType = 0x40; // AssetWarningFixType_t
            }
        }
    }
}
