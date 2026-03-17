// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ASPropertyStruct.h"
#include "LQ_Character.generated.h"



UCLASS(Abstract)
class LIGHTSPEED_QUANTUM_API ALQ_Character : public ACharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ALQ_Character();

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category = "Ability System" , displayName = "生命值" )
	struct  FPropertyValueWithMax HP;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category = "Ability System" , displayName = "攻击力" )
	struct  FPropertyValueWithBase AP;

	UPROPERTY(BlueprintReadWrite , VisibleAnywhere , Category = "Ability System" , displayName = "经验值" )
	float EXP;
	
	UPROPERTY(BlueprintReadWrite , VisibleAnywhere , Category = "Ability System" , displayName = "等级" )
	int Level;

	UPROPERTY(BlueprintReadWrite , VisibleAnywhere , Category = "Ability System" , displayName = "护甲" )
	float Armor;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category = "Ability System" , displayName = "速度" )
	struct  FPropertyValueWithBase Speed;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly , Category = "Ability System" , displayName = "攻击速度" )
	struct  FPropertyValueWithBase AttackSpeed;

	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "修改生命值" ))
	float ModifyHP(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "生命值更改时" ))
	void OnHPChange(float OriginalValue, float NewValue);
	
	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "修改攻击力" ))
	float ModifyAP(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "攻击力更改时" ))
	void OnAPChange(float OriginalValue, float NewValue);

	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "设置速度" ))
	void SetSpeed(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "速度更改时" ))
	void OnSpeedChange(float OriginalValue, float NewValue);

	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "设置攻击速度" ))
	void SetAttackSpeed(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "攻击速度更改时" ))
	void OnAttackSpeedChange(float OriginalValue, float NewValue);	

};
