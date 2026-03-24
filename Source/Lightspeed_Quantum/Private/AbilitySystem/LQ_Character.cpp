// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/LQ_Character.h"

// Sets default values
ALQ_Character::ALQ_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ALQ_Character::BeginPlay()
{
	Super::BeginPlay();
	HP.Current = HP.Max;
	AP.Current = AP.Base;
	
}

// Called every frame
void ALQ_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALQ_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

float ALQ_Character::ModifyHP(float Value)
{
	float Remain = 0.0f;
	float temp = HP.Current;
	HP.Current += Value;
	if (HP.Current > HP.Max){
		HP.Current = HP.Max;
		Remain = temp + Value - HP.Max;
	}
	if (HP.Current < 0){
		HP.Current = 0;
		Remain = temp + Value;
	}
	OnHPChange(temp, HP.Current);
	return Remain;
}


float ALQ_Character::ModifyAP(float Value)
{
	float Remain = 0.0f;
	float temp = Value;
	AP.Current += Value;
	if (AP.Current < 0){
		AP.Current = 0;
		Remain = temp + Value;
	}
	OnAPChange(temp, AP.Current);
	return Remain;
}

void ALQ_Character::SetSpeed(float Value)
{
	float temp = Value;
	Speed.Current = Value;
	OnSpeedChange(temp, Value);

}

void ALQ_Character::SetAttackSpeed(float Value)
{
	float temp = Value;
	AttackSpeed.Current = Value;
	OnAttackSpeedChange(temp, Value);
}

float ALQ_Character::CalculateDamage_Implementation(float BaseDamage , FCalcCoefficient InDamageFactor , FCalcCoefficient InAttackFactor)
{
	return BaseDamage;
}

void ALQ_Character::ModifyDamageFactor(float AdditiveMultValue, float MultiplicativeMultValue)
{
	 DamageFactor.CurrentAdditiveMultiplier += AdditiveMultValue;
	 DamageFactor.CurrentMultiplicativeMultiplier += MultiplicativeMultValue;
}

void ALQ_Character::ModifyAttackFactor(float AdditiveMultValue, float MultiplicativeMultValue)
{
	 AttackFactor.CurrentAdditiveMultiplier += AdditiveMultValue;
	 AttackFactor.CurrentMultiplicativeMultiplier += MultiplicativeMultValue;
}
