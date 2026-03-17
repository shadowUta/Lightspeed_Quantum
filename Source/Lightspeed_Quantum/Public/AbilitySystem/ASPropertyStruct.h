// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ASPropertyStruct.generated.h"

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

