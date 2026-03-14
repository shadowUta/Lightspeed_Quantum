// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "NativeGameplayTags.h"
#include "UObject/Class.h"  

#include "AbilityElement.h"
#include "EffectElement.h"

#include "ASFunctionLibrary.generated.h"

UCLASS()
class LIGHTSPEED_QUANTUM_API UASFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	static void InitAbilityElementMap();
	static void InitEffectElementMap();

	static TMap<FGameplayTag, TSubclassOf<UAbilityElement>> AbilityElementClassMap;
	static TMap<FGameplayTag, TSubclassOf<UEffectElement>> EffectElementClassMap;

	UFUNCTION(BlueprintPure, Category = "Ability System|Data" , meta = (DisplayName = "获取技能映射"))
    static TMap<FGameplayTag, TSubclassOf<UAbilityElement>> GetAbilityElementClassMap();

    UFUNCTION(BlueprintPure, Category = "Ability System|Data" , meta = (DisplayName = "获取效果映射"))
    static TMap<FGameplayTag, TSubclassOf<UEffectElement>> GetEffectElementClassMap();


	UFUNCTION(BlueprintPure , Category = "Ability System|Functions" , meta = (DisplayName = "查询技能类"))
	static bool SearchAbilityClassByTag(FGameplayTag Tag , TSubclassOf<UAbilityElement>& AbilityClass);

	UFUNCTION(BlueprintPure , Category = "Ability System|Functions" , meta = (DisplayName = "查询效果类"))
	static bool SearchEffectClassByTag(FGameplayTag Tag , TSubclassOf<UEffectElement>& EffectClass);

	//调试用
	UFUNCTION(BlueprintPure , Category = "Ability System|Functions" , meta = (DisplayName = "查询技能映射长度"))
	static int32 GetAbilityClassMapLength();

	//调试用
	UFUNCTION(BlueprintPure , Category = "Ability System|Functions" , meta = (DisplayName = "查询效果映射长度"))
	static int32 GetEffectClassMapLength();

	UFUNCTION(BlueprintCallable , Category = "Ability System|Functions" , meta = (DisplayName = "更新映射"))
	static void UpdateMaps();

	static void PrintOut(FString Outprint , FColor Color);
};
