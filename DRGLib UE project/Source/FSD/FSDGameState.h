// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "FSDGameState.generated.h"

/**
 * A recreation of FSDGameState from DRG. No promises on whether setting the variables will work
 * 
 */
UCLASS()
class FSD_API AFSDGameState : public AGameState
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite) bool IsOnSpaceRig;
};
