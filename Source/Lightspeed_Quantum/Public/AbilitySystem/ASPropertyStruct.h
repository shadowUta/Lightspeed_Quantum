// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "AbilitySystem/AbilityElement.h"
#include "ASEnum.h"
#include "ASPropertyStruct.generated.h"

class UAbilityElement;
/**
 * 
 */
USTRUCT(BlueprintType)
struct FPropertyValueWithMax
{
	GENERATED_BODY()
	public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "最大值")
	float Max = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property"  , displayName = "当前值")
	float Current = 0.0f;

	bool operator==(const FPropertyValueWithMax& Other) const
	{
		return FMath::IsNearlyEqual(Max, Other.Max) && FMath::IsNearlyEqual(Current, Other.Current);
	}

	FPropertyValueWithMax operator+(const FPropertyValueWithMax& Other) const
	{
		if (FMath::IsNearlyEqual(Max, Other.Max)){
			return FPropertyValueWithMax(Max, Current + Other.Current);
		}
		return *this;
	}
};


USTRUCT(BlueprintType)
struct FPropertyValueWithBase
{

	GENERATED_BODY()
	public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "基础值")
	float Base = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "当前值")
	float Current = 0.0f;

	bool operator==(const FPropertyValueWithBase& Other) const
	{
		return FMath::IsNearlyEqual(Base, Other.Base) && FMath::IsNearlyEqual(Current, Other.Current);
	}

	FPropertyValueWithBase operator+(const FPropertyValueWithBase& Other) const
	{
		if (FMath::IsNearlyEqual(Base, Other.Base)){
			return FPropertyValueWithBase(Base, Current + Other.Current);
		}
		return *this;
	}
};

USTRUCT(BlueprintType)
struct FCalcCoefficient
{
	GENERATED_BODY()
	public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "基础加算系数")
	float BaseAdditiveMultiplier = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "基础乘算系数")
	float BaseMultiplicativeMultiplier = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "当前加算系数")
	float CurrentAdditiveMultiplier = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Character Property" , displayName = "当前乘算系数")
	float CurrentMultiplicativeMultiplier = 1.0f;

	FCalcCoefficient()
	{
		CurrentAdditiveMultiplier = BaseAdditiveMultiplier;
		CurrentMultiplicativeMultiplier = CurrentMultiplicativeMultiplier;
	};
};

USTRUCT(BlueprintType)
struct FAbilityProperty
{
	GENERATED_BODY()
	public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ABility System" , displayName = "技能类")
	TSubclassOf<UAbilityElement> AbilityClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ABility System" , displayName = "技能当前等级")
	int32 AbilityLevel = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ABility System" , displayName = "技能剩余冷却时长")
	float CooldownTime = 0.0f;

};

USTRUCT(BlueprintType)
struct FCharacterState 
{
	GENERATED_BODY()
	public:
	UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Ability System|State" , DisplayName = "无敌" )
	bool Invincible;

	UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Ability System|State" , DisplayName = "能否攻击" )
	bool CanAttack = true;

	UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Ability System|State" , DisplayName = "能否移动" )
	bool CanMove = true;

	UPROPERTY(BlueprintReadWrite , EditAnywhere , Category = "Ability System|State" , DisplayName = "能否使用技能" )
	bool CanUseAbility = true;

};