// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "InputCoreTypes.h"

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FSDSaveGame.generated.h"



/*
* This struct defines a mapped key, which the game uses to override input.ini
*/
USTRUCT(BlueprintType)
struct FCustomKeyBinding
{
	GENERATED_BODY()
public:

		UPROPERTY(BlueprintReadWrite)
		FName ActionName;
		UPROPERTY(BlueprintReadWrite)
		FKey Key;
		UPROPERTY(BlueprintReadWrite)
		int32 Index;
};



/*
* This struct ingame holds all the "Game Settings" (eg. chat fade time and cusom key binds
*/
USTRUCT(BlueprintType)
struct FConsoleOptionsInSaveGame
{
	GENERATED_BODY()
public:

		UPROPERTY(BlueprintReadWrite)
		TArray<struct FCustomKeyBinding> CustomKeyBindings;

		UPROPERTY(BlueprintReadWrite)
		TArray<struct FCustomKeyBinding> CustomControllerBindings;
};



/**
 * A recreation of the Savegame class for DRG. Not comprehensive but has the stuff I need in it
 */
UCLASS()
class FSD_API UFSDSaveGame : public USaveGame
{
	GENERATED_BODY()
public:

		UPROPERTY(BlueprintReadWrite)
		FConsoleOptionsInSaveGame ConsoleOptions;

		UPROPERTY(BlueprintReadWrite)
		FString Name;
};
