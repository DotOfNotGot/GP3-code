// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HPInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHPInterface : public UInterface
{
	GENERATED_BODY()

};

/**
 * 
 */
class GAMEPROJECT3_API IHPInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetHealth();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ModifyHealth(float Value, bool IsAdditive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SendHealth(float HpValue);
	
};
