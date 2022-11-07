// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSR2TEMPORALUPSCALING_EFSR2QualityMode_generated_h
#error "EFSR2QualityMode.generated.h already included, missing '#pragma once' in EFSR2QualityMode.h"
#endif
#define FSR2TEMPORALUPSCALING_EFSR2QualityMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DRGLib_UE_project_Plugins_AMD_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h


#define FOREACH_ENUM_EFSR2QUALITYMODE(op) \
	op(EFSR2QualityMode::Unused) \
	op(EFSR2QualityMode::Quality) \
	op(EFSR2QualityMode::Balanced) \
	op(EFSR2QualityMode::Performance) \
	op(EFSR2QualityMode::UltraPerformance) 

enum class EFSR2QualityMode : int32;
template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2QualityMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
