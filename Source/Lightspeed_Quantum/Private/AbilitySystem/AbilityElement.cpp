// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityElement.h"


void UAbilityElement::ActivateAbility()
{
    OnActivate(); 
    OnVFXActivate();
}

FGameplayTag UAbilityElement::GetAbilityGameplayTag()
{
    return AbilityGameplayTag;
}

TStatId UAbilityElement::GetStatId() const
{
    // 必须重写：返回性能统计ID（UE性能分析工具会用到）
    RETURN_QUICK_DECLARE_CYCLE_STAT(UAbilityElement, STATGROUP_Tickables);
}

UWorld* UAbilityElement::GetWorld() const
{
    return Owner ? Owner->GetWorld() : nullptr;
}

void UAbilityElement::Tick(float DeltaTime)
{
    if(!ShouldDestroy)
    {
        OnTick(DeltaTime); 
    }
}

void UAbilityElement::DestroyAbilityElement()
{
    if(!IsValid(this)){
        return;
    };
    OnDeactivate();
    ShouldDestroy = true;
    if (IsValid(Owner))
    {
        Owner = nullptr;
    };
    MarkAsGarbage();
}

bool UAbilityElement::UpgradeAbility_Implementation(int32 AddedLevel)
{
    AbilityLevel += AddedLevel;
    if(AbilityLevel < 0)
    {
        AbilityLevel = 0;
        return false;
    }
    else
    {
        return true;
    }
}
