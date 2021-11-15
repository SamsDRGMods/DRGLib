// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerInput.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputFunctionLibrary.generated.h"

/**
 * 
 */

UENUM()
enum class EKeyBindingAxis : uint8
{
	None UMETA(DisplayName = "None"),
	Positive UMETA(DisplayName = "Positive"),
	Negative UMETA(DisplayName = "Negative"),
};



UCLASS()
class FSD_API UInputFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		
		UFUNCTION(BlueprintPure, Category = "FSD")
		static bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping &OutResult);

		UFUNCTION(BlueprintCallable, Category = "FSD")
		static TArray<FKey> GetInputKeysBoundToAction(FName ActionName, EKeyBindingAxis Axis, bool IsGamePadKey);
};
