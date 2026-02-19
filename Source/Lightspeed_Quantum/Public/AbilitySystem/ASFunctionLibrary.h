// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NativeGameplayTags.h"
#include "AbilityElement.h"
#include "EffectElement.h"
#include "UObject/Class.h"
#include "ASFunctionLibrary.generated.h"

UCLASS()
class LIGHTSPEED_QUANTUM_API UASFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UASFunctionLibrary();

	static void InitAbilityElementMap();
	static void InitEffectElementMap();

	static TMap<FGameplayTag, TSubclassOf<UAbilityElement>> AbilityElementClassMap;
	static TMap<FGameplayTag, TSubclassOf<UEffectElement>> EffectElementClassMap;

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
};
