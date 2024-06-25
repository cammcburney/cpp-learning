// Fill out your copyright notice in the Description page of Project Settings.


#include "BGM_BattleBlueprintLibrary.h"

float UBGM_BattleBlueprintLibrary::CalculateArmouredDamage(int32 ArmourUnits, float Damage)
{
    /**
     * For each unit of armour an enemy has the damage taken is divided by 4.
     *      Parameters: 
                        ArmourUnits = int32 :: Units of armour
                        Damage = float :: Damage dealt from current attack

            Return:
                        NewDamage: float :: Calculated damage dealt 
     */

    float NewDamage = Damage;

    for (int i = 0; i < ArmourUnits; i++)
    {   
        if (NewDamage <= 1.0f)
        {
            return 1.0f;
        }
        else
        {
            NewDamage /= 2.0f;
        }
    }

    return NewDamage;
}

#include "BGM_BattleBlueprintLibrary.h"

FEnemyMoveSet UBGM_BattleBlueprintLibrary::CalculateEnemyMoveSet(bool WMUser, bool BMUser, bool VUser, bool HUser, bool TechUser)
{
    FEnemyMoveSet MoveSet;

    MoveSet.NumArray.Add(0);

    if (WMUser || BMUser || HUser || VUser)
    {
        MoveSet.NumArray.Add(1);
    }
    if (TechUser)
    {
        MoveSet.NumArray.Add(2);
    }

    if (WMUser)
    {
        MoveSet.MagicArray.Add(0);
    }
    else if (BMUser)
    {
        MoveSet.MagicArray.Add(1);
    }
    else if (HUser)
    {
        MoveSet.MagicArray.Add(2);
    }
    else if (VUser)
    {
        MoveSet.MagicArray.Add(3);
    }

    return MoveSet;
}
