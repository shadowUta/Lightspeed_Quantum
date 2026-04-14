// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ASPropertyStruct.h"
#include "LQ_Character.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHPChange, float, OriginalHP, float, NewHP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAPChange, float, OriginalAP, float, NewAP);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpeedChange, float, OriginalSpeed, float, NewSpeed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackSpeedChange, float, OriginalAttackSpeed, float, NewAttackSpeed);

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

	UPROPERTY(BlueprintReadOnly , VisibleAnywhere , Category = "Ability System" , DisplayName = "角色基础状态" )
	struct FCharacterState BaseState;
	
	
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
	void OnHPChange(float OriginalHP, float NewHP);
	
	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "修改攻击力" ))
	float ModifyAP(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "攻击力更改时" ))
	void OnAPChange(float OriginalAP, float NewAP);

	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "设置速度" ))
	void SetSpeed(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "速度更改时" ))
	void OnSpeedChange(float OriginalSpeed, float NewSpeed);

	UFUNCTION(BlueprintCallable, Category = "Ability System" , meta = (DisplayName = "设置攻击速度" ))
	void SetAttackSpeed(float Value);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "攻击速度更改时" ))
	void OnAttackSpeedChange(float OriginalAttackSpeed, float NewAttackSpeed);

public:
	//角色状态相关函数

	UFUNCTION(BlueprintCallable, Category = "Ability System|State" , meta = (DisplayName = "设置无敌状态" ))
	void SetInvincible(bool Invincible){ BaseState.Invincible = Invincible; };

	UFUNCTION(BlueprintCallable, Category = "Ability System|State" , meta = (DisplayName = "设置攻击状态" ))
	void SetCanAttack(bool CanAttack){ BaseState.CanAttack = CanAttack; };

	UFUNCTION(BlueprintCallable, Category = "Ability System|State" , meta = (DisplayName = "设置移动状态" ))
	void SetCanMove(bool CanMove){ BaseState.CanMove = CanMove; };

	UFUNCTION(BlueprintCallable, Category = "Ability System|State" , meta = (DisplayName = "设置技能状态" ))
	void SetCanUseAbility(bool CanUseAbility){ BaseState.CanUseAbility = CanUseAbility; };

	UFUNCTION(BlueprintPure, Category = "Ability System|State" , meta = (DisplayName = "查询角色状态" ))
	FCharacterState GetCharacterState(){ return BaseState; };


public:
	UPROPERTY(BlueprintReadOnly , EditDefaultsOnly , Category = "Ability System|Attack" , DisplayName = "受伤系数" )
	struct FCalcCoefficient DamageFactor;

	UPROPERTY(BlueprintReadOnly , EditDefaultsOnly , Category = "Ability System|Attack" , DisplayName = "造成伤害系数" )
	struct FCalcCoefficient AttackFactor;

	UFUNCTION(BlueprintCallable, Category = "Ability System|Attack" , meta = (DisplayName = "修改受伤系数" ))
	void ModifyDamageFactor(float AdditiveMultValue, float MultiplicativeMultValue);

	UFUNCTION(BlueprintCallable, Category = "Ability System|Attack" , meta = (DisplayName = "修改造成伤害系数" ))
	void ModifyAttackFactor(float AdditiveMultValue, float MultiplicativeMultValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Ability System|Attack" , meta = (DisplayName = "伤害计算" ))
	float CalculateDamage(float BaseDamage , FCalcCoefficient InDamageFactor , FCalcCoefficient InAttackFactor);

};

