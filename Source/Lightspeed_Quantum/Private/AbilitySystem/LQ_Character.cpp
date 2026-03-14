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

void ALQ_Character::ModifyHP(float Value)
{
}


void ALQ_Character::ModifyAP(float Value)
{
}
