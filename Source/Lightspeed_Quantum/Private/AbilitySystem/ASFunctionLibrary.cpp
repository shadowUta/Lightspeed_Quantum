// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ASFunctionLibrary.h"
//

TMap<FGameplayTag, TSubclassOf<UAbilityElement>> UASFunctionLibrary::AbilityElementClassMap;
TMap<FGameplayTag, TSubclassOf<UEffectElement>> UASFunctionLibrary::EffectElementClassMap;

UASFunctionLibrary::UASFunctionLibrary()
{  
    InitAbilityElementMap();
    InitEffectElementMap();
}

void UASFunctionLibrary::InitAbilityElementMap()
{
    //清空Map
    AbilityElementClassMap.Empty();

    TArray<UClass*> DerivedClasses;
    GetDerivedClasses(UAbilityElement::StaticClass(), DerivedClasses , true);
    // 遍历Map，把键和值分别存入蓝图支持的数组
    for (const auto& ChildClass : DerivedClasses)
    {
        bool bIsAbstract = (ChildClass->GetClassFlags() & CLASS_Abstract) != 0;

        if(ChildClass->ClassDefaultObject && !bIsAbstract)
        {
            auto* CDO = ChildClass->GetDefaultObject<UAbilityElement>();
            if(CDO && CDO->AbilityGameplayTag.IsValid())
            {
                 AbilityElementClassMap.Add(CDO->AbilityGameplayTag, ChildClass);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Class %s is abstract or has no CDO, skipping."), *ChildClass->GetName());
        }
    }
}

void UASFunctionLibrary::InitEffectElementMap()
{
    //清空Map
    EffectElementClassMap.Empty();

    TArray<UClass*> DerivedClasses;
    GetDerivedClasses(UEffectElement::StaticClass(), DerivedClasses , true);
    // 遍历Map，把键和值分别存入蓝图支持的数组
    for (const auto& ChildClass : DerivedClasses)
    {
        bool bIsAbstract = (ChildClass->GetClassFlags() & CLASS_Abstract) != 0;

        if(ChildClass->ClassDefaultObject && !bIsAbstract)
        {
            auto* CDO = ChildClass->GetDefaultObject<UEffectElement>();
            if(CDO && CDO->EffectGameplayTag.IsValid())
            {
                 EffectElementClassMap.Add(CDO->EffectGameplayTag, ChildClass);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Class %s is abstract or has no CDO, skipping."), *ChildClass->GetName());
        }
    }
}

bool UASFunctionLibrary::SearchAbilityClassByTag(FGameplayTag Tag , TSubclassOf<UAbilityElement>& AbilityClass)
{
    AbilityClass = AbilityElementClassMap.FindRef(Tag);
    return AbilityElementClassMap.Contains(Tag);
}

bool UASFunctionLibrary::SearchEffectClassByTag(FGameplayTag Tag , TSubclassOf<UEffectElement>& EffectClass)
{
    EffectClass = EffectElementClassMap.FindRef(Tag);
    return EffectElementClassMap.Contains(Tag);
}

int32 UASFunctionLibrary::GetAbilityClassMapLength()
{
    return AbilityElementClassMap.Num();
}
int32 UASFunctionLibrary::GetEffectClassMapLength()
{
    return EffectElementClassMap.Num();
}


void UASFunctionLibrary::UpdateMaps()
{
    InitAbilityElementMap();
    InitEffectElementMap();
    UE_LOG(LogTemp, Warning, TEXT("Maps updated successfully."));
}