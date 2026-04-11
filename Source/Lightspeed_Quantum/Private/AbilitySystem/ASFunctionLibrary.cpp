// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/ASFunctionLibrary.h"

#include "Engine/ObjectLibrary.h"        // UObjectLibrary 所需
#include "AssetRegistry/AssetData.h"     // FAssetData 所需


TMap<FGameplayTag, TSubclassOf<UAbilityElement>> UASFunctionLibrary::AbilityElementClassMap;
TMap<FGameplayTag, TSubclassOf<UEffectElement>> UASFunctionLibrary::EffectElementClassMap;

void UASFunctionLibrary::InitAbilityElementMap()
{
    // 创建 ObjectLibrary 并加载指定路径下的所有蓝图
    UObjectLibrary* AbilityObjectLibrary = UObjectLibrary::CreateLibrary(UAbilityElement::StaticClass(), true, true);
    AbilityObjectLibrary->LoadBlueprintAssetDataFromPath(TEXT("/Game/AbilitySystem")); // 替换为实际路径
    
    TArray<FAssetData> AssetDatas;
    AbilityObjectLibrary->GetAssetDataList(AssetDatas);
    
    FString Outprint  = FString::Printf(TEXT("AbilityElementLoad: %d"), AssetDatas.Num());
    PrintOut(Outprint, FColor::Green);

    for (const FAssetData& AssetData : AssetDatas){
        // 加载蓝图类
        UClass* LoadedClass = LoadClass<UAbilityElement>(nullptr, *AssetData.GetObjectPathString());
        PrintOut(FString::Printf(TEXT("AbilityElementClassMap: %s"), *AssetData.GetObjectPathString()), FColor::Green);
    }
    AbilityElementClassMap.Empty();
    TArray<UClass*> DerivedClasses;
    GetDerivedClasses(UAbilityElement::StaticClass(), DerivedClasses , true);
    // 遍历Map，把键和值分别存入蓝图支持的数组
    for (const auto& ChildClass : DerivedClasses){
        bool bIsAbstract = (ChildClass->GetClassFlags() & CLASS_Abstract) != 0;
        if(ChildClass->ClassDefaultObject && !bIsAbstract){
            auto* CDO = ChildClass->GetDefaultObject<UAbilityElement>();
            if(CDO && CDO->AbilityGameplayTag.IsValid()){
                 AbilityElementClassMap.Add(CDO->AbilityGameplayTag, ChildClass);
            }
        }
        else{
            UE_LOG(LogTemp, Warning, TEXT("Class %s is abstract or has no CDO, skipping."), *ChildClass->GetName());
        }
    }
}

void UASFunctionLibrary::InitEffectElementMap()
{
        // 创建 ObjectLibrary 并加载指定路径下的所有蓝图
    UObjectLibrary* EffectObjectLibrary = UObjectLibrary::CreateLibrary(UEffectElement::StaticClass(), true, true);
    EffectObjectLibrary->LoadBlueprintAssetDataFromPath(TEXT("/Game/AbilitySystem")); 
    
    TArray<FAssetData> AssetDatas;
    EffectObjectLibrary->GetAssetDataList(AssetDatas);
    
    FString Outprint  = FString::Printf(TEXT("EffectElementLoad: %d"), AssetDatas.Num());
    PrintOut(Outprint, FColor::Green);
    
    for (const FAssetData& AssetData : AssetDatas)
    {
        // 加载蓝图类
        UClass* LoadedClass = LoadClass<UEffectElement>(nullptr, *AssetData.GetObjectPathString());
        PrintOut(FString::Printf(TEXT("EffectElementClassMap: %s"), *AssetData.GetObjectPathString()), FColor::Green);
    }

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
    if(AbilityElementClassMap.Num() == 0)   {
        InitAbilityElementMap();
    }
    AbilityClass = AbilityElementClassMap.FindRef(Tag);
    return AbilityElementClassMap.Contains(Tag);
}

bool UASFunctionLibrary::SearchEffectClassByTag(FGameplayTag Tag , TSubclassOf<UEffectElement>& EffectClass)
{
    if(EffectElementClassMap.Num() == 0)   {
        InitEffectElementMap();
    }
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

void UASFunctionLibrary::PrintOut(FString Outprint , FColor Color )
{
    if(GEngine)
    {
    GEngine->AddOnScreenDebugMessage(-1, 5.f, Color , Outprint);
    }
}

TMap<FGameplayTag, TSubclassOf<UAbilityElement>> UASFunctionLibrary::GetAbilityElementClassMap()
{
    return AbilityElementClassMap;
}

TMap<FGameplayTag, TSubclassOf<UEffectElement>> UASFunctionLibrary::GetEffectElementClassMap()
{
    return EffectElementClassMap;
}

bool UASFunctionLibrary::MatchAbilityClass(struct FAbilityProperty AbilityProperty,TSubclassOf<UAbilityElement> InAbilityClass )
{
    return AbilityProperty.AbilityClass == InAbilityClass;
}