// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UDLSSMode : uint8;
struct FVector2D;
enum class UDLSSSupport : uint8;
#ifdef DLSSBLUEPRINT_DLSSLibrary_generated_h
#error "DLSSLibrary.generated.h already included, missing '#pragma once' in DLSSLibrary.h"
#endif
#define DLSSBLUEPRINT_DLSSLibrary_generated_h

#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_SPARSE_DATA
#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableDLAA); \
	DECLARE_FUNCTION(execGetDefaultDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSMinimumDriverVersion); \
	DECLARE_FUNCTION(execGetDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSModeInformation); \
	DECLARE_FUNCTION(execGetDLSSScreenPercentageRange); \
	DECLARE_FUNCTION(execGetDLSSSharpness); \
	DECLARE_FUNCTION(execGetSupportedDLSSModes); \
	DECLARE_FUNCTION(execIsDLAAEnabled); \
	DECLARE_FUNCTION(execIsDLSSModeSupported); \
	DECLARE_FUNCTION(execIsDLSSSupported); \
	DECLARE_FUNCTION(execQueryDLSSSupport); \
	DECLARE_FUNCTION(execSetDLSSMode); \
	DECLARE_FUNCTION(execSetDLSSSharpness);


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableDLAA); \
	DECLARE_FUNCTION(execGetDefaultDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSMinimumDriverVersion); \
	DECLARE_FUNCTION(execGetDLSSMode); \
	DECLARE_FUNCTION(execGetDLSSModeInformation); \
	DECLARE_FUNCTION(execGetDLSSScreenPercentageRange); \
	DECLARE_FUNCTION(execGetDLSSSharpness); \
	DECLARE_FUNCTION(execGetSupportedDLSSModes); \
	DECLARE_FUNCTION(execIsDLAAEnabled); \
	DECLARE_FUNCTION(execIsDLSSModeSupported); \
	DECLARE_FUNCTION(execIsDLSSSupported); \
	DECLARE_FUNCTION(execQueryDLSSSupport); \
	DECLARE_FUNCTION(execSetDLSSMode); \
	DECLARE_FUNCTION(execSetDLSSSharpness);


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDLSSLibrary(); \
	friend struct Z_Construct_UClass_UDLSSLibrary_Statics; \
public: \
	DECLARE_CLASS(UDLSSLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DLSSBlueprint"), DLSSBLUEPRINT_API) \
	DECLARE_SERIALIZER(UDLSSLibrary)


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDLSSLibrary(); \
	friend struct Z_Construct_UClass_UDLSSLibrary_Statics; \
public: \
	DECLARE_CLASS(UDLSSLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DLSSBlueprint"), DLSSBLUEPRINT_API) \
	DECLARE_SERIALIZER(UDLSSLibrary)


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DLSSBLUEPRINT_API UDLSSLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDLSSLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DLSSBLUEPRINT_API, UDLSSLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLSSLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DLSSBLUEPRINT_API UDLSSLibrary(UDLSSLibrary&&); \
	DLSSBLUEPRINT_API UDLSSLibrary(const UDLSSLibrary&); \
public:


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DLSSBLUEPRINT_API UDLSSLibrary(UDLSSLibrary&&); \
	DLSSBLUEPRINT_API UDLSSLibrary(const UDLSSLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DLSSBLUEPRINT_API, UDLSSLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDLSSLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDLSSLibrary)


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_9_PROLOG
#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_SPARSE_DATA \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_RPC_WRAPPERS \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_INCLASS \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_SPARSE_DATA \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_INCLASS_NO_PURE_DECLS \
	DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DLSSBLUEPRINT_API UClass* StaticClass<class UDLSSLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DRGLib_UE_project_Plugins_Nvidia_DLSS_Source_DLSSBlueprint_Public_DLSSLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
