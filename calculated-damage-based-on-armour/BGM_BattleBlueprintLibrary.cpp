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