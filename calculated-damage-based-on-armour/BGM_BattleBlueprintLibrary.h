// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGM_BattleBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CRANNBETHADHARENA_API UBGM_BattleBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "MyCustomFunctions")
    static float CalculateArmouredDamage(int32 ArmourUnits, float Damage);
};
