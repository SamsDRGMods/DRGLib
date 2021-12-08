// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FSDSaveGame.h"
#include "GameData.h"
#include "FSDGameState.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FSD_API UGameFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

			UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
			static UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
			UFUNCTION(BlueprintCallable)
			static UGameData* GetFSDGameData();
			UFUNCTION(BlueprintCallable)
			static AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
};
