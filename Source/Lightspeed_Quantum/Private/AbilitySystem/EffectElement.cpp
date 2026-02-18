// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/EffectElement.h"

void UEffectElement::ActivateEffect()
{
    OnActivate(); 
}

UWorld* UEffectElement::GetWorld() const
{
    return Owner ? Owner->GetWorld() : nullptr;
}


FGameplayTag UEffectElement::GetEffectGameplayTag()
{
    return EffectGameplayTag;
}

TStatId UEffectElement::GetStatId() const
{
    // 必须重写：返回性能统计ID（UE性能分析工具会用到）
    RETURN_QUICK_DECLARE_CYCLE_STAT(UEffectElement, STATGROUP_Tickables);
}

void UEffectElement::Tick(float DeltaTime)
{
    if(!ShouldDestroy)
    {
        OnTick(DeltaTime); 
    }
}

void UEffectElement::DestroyEffectElement()
{
    if(!IsValid(this))
    {
        return;
    };
    OnDestroy(); 
    ShouldDestroy = true;
    if (IsValid(Owner))
    {
        Owner = nullptr;
    };
    MarkAsGarbage();
}

// 修改效果层数的默认实现：直接修改EffectStacks变量，并返回是否成功（层数不能为负）
bool UEffectElement::ModifyEffectStacks_Implementation(int32 AddedStacks)
{
    EffectStacks += AddedStacks;
    if (EffectStacks < 0)
    {
        EffectStacks = 0;
        return false;
    }
    else
    {      
        return true;
    }
}
