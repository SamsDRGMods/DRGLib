// Fill out your copyright notice in the Description page of Project Settings.


#include "InputFunctionLibrary.h"


bool UInputFunctionLibrary::GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping &OutResult)
{
	return true;
}

TArray<FKey> UInputFunctionLibrary::GetInputKeysBoundToAction(FName ActionName, EKeyBindingAxis Axis, bool IsGamePadKey)
{
	TArray<FKey> empty;
	return empty;
}