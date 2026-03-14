// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityElement.h"

UAbilityElement::UAbilityElement(){
    World = GetOuter()->GetWorld();
    OnBeginPlay();
}

void UAbilityElement::ActivateAbility()
{
    OnActivate(); 
    OnVFXActivate();
}

FGameplayTag UAbilityElement::GetAbilityGameplayTag()
{
    return AbilityGameplayTag;
}

UWorld* UAbilityElement::GetWorld() const
{
    if(Owner) return Owner->GetWorld();
    if(World) return World;
        UE_LOG(LogTemp, Warning, TEXT("%s::GetWorld() - Owner and Outer have no valid world!") , *GetName());
        return nullptr;
}

void UAbilityElement::DestroyAbilityElement()
{
    if(!IsValid(this)){
        return;
    };
    OnDeactivate();
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
    };
    return true;
}
