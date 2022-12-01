// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2QualityMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2QualityMode() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static UEnum* EFSR2QualityMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2QualityMode"));
		}
		return Singleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2QualityMode>()
	{
		return EFSR2QualityMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFSR2QualityMode(EFSR2QualityMode_StaticEnum, TEXT("/Script/FSR2TemporalUpscaling"), TEXT("EFSR2QualityMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Hash() { return 2449038063U; }
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFSR2QualityMode"), 0, Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFSR2QualityMode::Unused", (int64)EFSR2QualityMode::Unused },
				{ "EFSR2QualityMode::Quality", (int64)EFSR2QualityMode::Quality },
				{ "EFSR2QualityMode::Balanced", (int64)EFSR2QualityMode::Balanced },
				{ "EFSR2QualityMode::Performance", (int64)EFSR2QualityMode::Performance },
				{ "EFSR2QualityMode::UltraPerformance", (int64)EFSR2QualityMode::UltraPerformance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Balanced.Name", "EFSR2QualityMode::Balanced" },
				{ "ModuleRelativePath", "Public/EFSR2QualityMode.h" },
				{ "Performance.Name", "EFSR2QualityMode::Performance" },
				{ "Quality.Name", "EFSR2QualityMode::Quality" },
				{ "UltraPerformance.Name", "EFSR2QualityMode::UltraPerformance" },
				{ "Unused.Name", "EFSR2QualityMode::Unused" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
				nullptr,
				"EFSR2QualityMode",
				"EFSR2QualityMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
