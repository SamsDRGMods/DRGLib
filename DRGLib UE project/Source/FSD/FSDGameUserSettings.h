// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FSDSaveGame.h"

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FSDGameUserSettings.generated.h"

/**
 * 
 */
UCLASS(Config=GameUserSettings)
class FSD_API UFSDGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:

		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCustomKeyBindingsChanged);
		UPROPERTY(BlueprintAssignable) FOnCustomKeyBindingsChanged OnCustomKeyBindingsChanged;

		UPROPERTY(Config, BlueprintReadWrite)
		TArray<FCustomKeyBinding> CustomKeyBindings;

		UFUNCTION(BlueprintCallable, Category = FSD)
		static UFSDGameUserSettings* GetFSDGameUserSettings();


};
