// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2HistoryFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2HistoryFormat() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static UEnum* EFSR2HistoryFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2HistoryFormat"));
		}
		return Singleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2HistoryFormat>()
	{
		return EFSR2HistoryFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFSR2HistoryFormat(EFSR2HistoryFormat_StaticEnum, TEXT("/Script/FSR2TemporalUpscaling"), TEXT("EFSR2HistoryFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Hash() { return 3618911710U; }
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFSR2HistoryFormat"), 0, Get_Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFSR2HistoryFormat::FloatRGBA", (int64)EFSR2HistoryFormat::FloatRGBA },
				{ "EFSR2HistoryFormat::FloatR11G11B10", (int64)EFSR2HistoryFormat::FloatR11G11B10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FloatR11G11B10.Name", "EFSR2HistoryFormat::FloatR11G11B10" },
				{ "FloatRGBA.Name", "EFSR2HistoryFormat::FloatRGBA" },
				{ "ModuleRelativePath", "Public/EFSR2HistoryFormat.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
				nullptr,
				"EFSR2HistoryFormat",
				"EFSR2HistoryFormat",
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
