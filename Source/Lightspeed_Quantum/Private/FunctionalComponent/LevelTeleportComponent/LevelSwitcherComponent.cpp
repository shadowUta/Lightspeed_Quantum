#include "FunctionalComponent/LevelTeleportComponent/LevelSwitcherComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

ULevelSwitcherComponent::ULevelSwitcherComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void ULevelSwitcherComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (VisualEffectAsset)
	{
		SpawnedEffect = UNiagaraFunctionLibrary::SpawnSystemAttached(
			VisualEffectAsset, 
			GetOwner()->GetRootComponent(), 
			NAME_None, 
			FVector::ZeroVector, 
			FRotator::ZeroRotator, 
			EAttachLocation::SnapToTarget, 
			true
		);
	}
}

void ULevelSwitcherComponent::TriggerLevelSwitch()
{
	if (TargetLevelName != NAME_None)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ULevelSwitcherComponent::ExecuteLevelChange, DelayBeforeSwitch, false);
	}
}

void ULevelSwitcherComponent::ExecuteLevelChange()
{
	UGameplayStatics::OpenLevel(this, TargetLevelName);
}