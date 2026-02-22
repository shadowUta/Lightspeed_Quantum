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

};

