// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "LevelSwitcherComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable)
class LIGHTSPEED_QUANTUM_API ULevelSwitcherComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	ULevelSwitcherComponent();

protected:
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere,category = "LevelSwitche")
	FName TargetLevelName;
	
	UPROPERTY(EditAnywhere,category = "LevelSwitche")
	UNiagaraSystem* VisualEffectAsset;
	
	UPROPERTY(EditAnywhere,category = "LevelSwitche")
	float DelayBeforeSwitch = 1.0f;
	
	UFUNCTION(BlueprintCallable,Category="LevelSwitche")
	void TriggerLevelSwitch();
	
private:
	void ExecuteLevelChange();
	FTimerHandle TimerHandle;
	
	UPROPERTY()
	UNiagaraComponent* SpawnedEffect;
};
