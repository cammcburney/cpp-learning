#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGM_BattleBlueprintLibrary.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FEnemyMoveSet
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, Category = "AI_Move_Set")
    TArray<int32> NumArray;

    UPROPERTY(BlueprintReadWrite, Category = "AI_Move_Set")
    TArray<int32> MagicArray;
};

UCLASS()
class CRANNBETHADHARENA_API UBGM_BattleBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "BGM_Damage")
    static float CalculateArmouredDamage(int32 ArmourUnits, float Damage);

    UFUNCTION(BlueprintCallable, Category = "AI_Move_Set")
    static FEnemyMoveSet CalculateEnemyMoveSet(bool WMUser, bool BMUser, bool VUser, bool HUser, bool TechUser);
};
