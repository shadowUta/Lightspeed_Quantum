// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/EffectElement.h"
UEffectElement::UEffectElement(){
    World = GetOuter()->GetWorld();
    OnBeginPlay();
}

void UEffectElement::ActivateEffect()
{
    OnActivate(); 
}

UWorld* UEffectElement::GetWorld() const
{
    if(Owner) return Owner->GetWorld();
    if(World) return World;

        UE_LOG(LogTemp, Warning, TEXT("%s::GetWorld() - Owner and Outer have no valid world!") , *GetName());
        return nullptr;
}

FGameplayTag UEffectElement::GetEffectGameplayTag()
{
    return EffectGameplayTag;
}

void UEffectElement::DestroyEffectElement()
{
    if(!IsValid(this))
    {
        return;
    };
    OnDestroy(); 
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
    };
    return true;
}
