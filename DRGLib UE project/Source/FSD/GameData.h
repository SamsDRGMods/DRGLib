// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "FSDSaveGame.h"
#include "InputFunctionLibrary.h"

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameData.generated.h"


USTRUCT(BlueprintType)
struct FCustomKeySetting
{
	GENERATED_BODY()
public:
		UPROPERTY(BlueprintReadWrite)
		TArray<FName> ActionNames;

		UPROPERTY(BlueprintReadWrite)
		FText Description;
		
		UPROPERTY(BlueprintReadWrite)
		FName SaveID;
		
		UPROPERTY(BlueprintReadWrite)
		EKeyBindingAxis ActionAxis;
};


UCLASS()
class FSD_API UKeyBindingSettings : public UDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(BlueprintReadWrite)
		TArray<FCustomKeySetting> KeyboardMouseButtons;


};


/**
 * 
 */
UCLASS()
class FSD_API UGameData : public UObject
{
	GENERATED_BODY()
	
public:
		UPROPERTY(BlueprintReadWrite)
		UKeyBindingSettings* KeyBindingSettings;
};
