// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "YixiEnemyAIController.generated.h"

UCLASS()
class LIGHTSPEED_QUANTUM_API AYixiEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	AYixiEnemyAIController();

	// 动态修改视觉感知半径的蓝图接口
	UFUNCTION(BlueprintCallable, Category = "AI|Perception")
	void UpdateSightRadius(float NewSightRadius, float NewLoseSightRadius);
};
