// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/FSR2Settings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSR2Settings() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UClass* Z_Construct_UClass_UFSR2Settings_NoRegister();
	FSR2TEMPORALUPSCALING_API UClass* Z_Construct_UClass_UFSR2Settings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode();
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat();
// End Cross Module References
	void UFSR2Settings::StaticRegisterNativesUFSR2Settings()
	{
	}
	UClass* Z_Construct_UClass_UFSR2Settings_NoRegister()
	{
		return UFSR2Settings::StaticClass();
	}
	struct Z_Construct_UClass_UFSR2Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposure_MetaData[];
#endif
		static void NewProp_AutoExposure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledInEditorViewport_MetaData[];
#endif
		static void NewProp_EnabledInEditorViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnabledInEditorViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSSRExperimentalDenoiser_MetaData[];
#endif
		static void NewProp_UseSSRExperimentalDenoiser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSSRExperimentalDenoiser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseNativeDX12_MetaData[];
#endif
		static void NewProp_UseNativeDX12_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseNativeDX12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseNativeVulkan_MetaData[];
#endif
		static void NewProp_UseNativeVulkan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseNativeVulkan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QualityMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HistoryFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustMipBias_MetaData[];
#endif
		static void NewProp_AdjustMipBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AdjustMipBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactiveMask_MetaData[];
#endif
		static void NewProp_ReactiveMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReactiveMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceVertexDeformationOutputsVelocity_MetaData[];
#endif
		static void NewProp_ForceVertexDeformationOutputsVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceVertexDeformationOutputsVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionLuminanceBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionLuminanceBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoughnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoughnessBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoughnessMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactiveMaskRoughnessForceMaxDistance_MetaData[];
#endif
		static void NewProp_ReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReactiveMaskRoughnessForceMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucencyBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLuminanceBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucencyLuminanceBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslucencyMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreDOFTranslucencyScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreDOFTranslucencyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreDOFTranslucencyMax_MetaData[];
#endif
		static void NewProp_PreDOFTranslucencyMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreDOFTranslucencyMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSR2Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FSR2Settings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->AutoExposure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure = { "AutoExposure", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->EnabledInEditorViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport = { "EnabledInEditorViewport", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->UseSSRExperimentalDenoiser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser = { "UseSSRExperimentalDenoiser", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->UseNativeDX12 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12 = { "UseNativeDX12", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->UseNativeVulkan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan = { "UseNativeVulkan", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode_MetaData[] = {
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, QualityMode), Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat_MetaData[] = {
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat = { "HistoryFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, HistoryFormat), Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_Sharpness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, Sharpness), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_Sharpness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_Sharpness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->AdjustMipBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias = { "AdjustMipBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->ReactiveMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask = { "ReactiveMask", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->ForceVertexDeformationOutputsVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity = { "ForceVertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionScale = { "ReflectionScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, ReflectionScale), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionLuminanceBias = { "ReflectionLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, ReflectionLuminanceBias), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessScale = { "RoughnessScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, RoughnessScale), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessBias = { "RoughnessBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, RoughnessBias), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessMaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessMaxDistance = { "RoughnessMaxDistance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, RoughnessMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->ReactiveMaskRoughnessForceMaxDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance = { "ReactiveMaskRoughnessForceMaxDistance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyBias = { "TranslucencyBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, TranslucencyBias), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyLuminanceBias = { "TranslucencyLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, TranslucencyLuminanceBias), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyMaxDistance = { "TranslucencyMaxDistance", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, TranslucencyMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyScale = { "PreDOFTranslucencyScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFSR2Settings, PreDOFTranslucencyScale), METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2Settings" },
		{ "ModuleRelativePath", "Public/FSR2Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax_SetBit(void* Obj)
	{
		((UFSR2Settings*)Obj)->PreDOFTranslucencyMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax = { "PreDOFTranslucencyMax", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFSR2Settings), &Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSR2Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AutoExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_EnabledInEditorViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseSSRExperimentalDenoiser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeDX12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_UseNativeVulkan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_QualityMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_HistoryFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_Sharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_AdjustMipBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ForceVertexDeformationOutputsVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReflectionLuminanceBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_RoughnessMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_ReactiveMaskRoughnessForceMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyLuminanceBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_TranslucencyMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2Settings_Statics::NewProp_PreDOFTranslucencyMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSR2Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSR2Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFSR2Settings_Statics::ClassParams = {
		&UFSR2Settings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSR2Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFSR2Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSR2Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFSR2Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFSR2Settings, 3303115880);
	template<> FSR2TEMPORALUPSCALING_API UClass* StaticClass<UFSR2Settings>()
	{
		return UFSR2Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFSR2Settings(Z_Construct_UClass_UFSR2Settings, &UFSR2Settings::StaticClass, TEXT("/Script/FSR2TemporalUpscaling"), TEXT("UFSR2Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSR2Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
