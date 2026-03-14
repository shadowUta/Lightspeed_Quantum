#include "CurveMovement.h"
#include "GameFramework/Actor.h"
#include "Math/UnrealMathUtility.h"

UCurveMovement::UCurveMovement()
{
	PrimaryComponentTick.bCanEverTick = true;
	Speed = 300.0f;
	CurrentPercentage = 0.0f;
	bOrientToPath = true;
	bIsMoving = false;
	PathActor = nullptr;
	TargetSpline = nullptr;
}

void UCurveMovement::BeginPlay()
{
	Super::BeginPlay();

	if (PathActor)
	{
		TargetSpline = PathActor->FindComponentByClass<USplineComponent>();
	}

	if (TargetSpline)
	{
		UpdateOwnerTransform();
	}
}

void UCurveMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsMoving && TargetSpline)
	{
		float SplineLength = TargetSpline->GetSplineLength();
		
		if (SplineLength <= 0.0f) return;

		float PercentageDelta = (Speed * DeltaTime) / SplineLength;
		CurrentPercentage += PercentageDelta;

		if (CurrentPercentage >= 1.0f)
		{
			CurrentPercentage = 1.0f;
			StopMovemennt();
		}
		else if (CurrentPercentage <= 0.0f)
		{
			CurrentPercentage = 0.0f;
			StopMovemennt();
		}

		UpdateOwnerTransform();
	}
}

void UCurveMovement::StartMovemennt()
{
	if (!TargetSpline && PathActor)
	{
		TargetSpline = PathActor->FindComponentByClass<USplineComponent>();
	}

	if (TargetSpline)
	{
		bIsMoving = true;
	}
}

void UCurveMovement::StopMovemennt()
{
	bIsMoving = false;
}

void UCurveMovement::SetPercentage(float NewPercentage)
{
	CurrentPercentage = FMath::Clamp(NewPercentage, 0.0f, 1.0f);
	
	if (TargetSpline)
	{
		UpdateOwnerTransform();
	}
}

void UCurveMovement::UpdateOwnerTransform()
{
	AActor* OwnerActor = GetOwner();
	if (!TargetSpline || !OwnerActor) return;

	float SplineLength = TargetSpline->GetSplineLength();
	float Distance = CurrentPercentage * SplineLength;

	FVector NewLocation = TargetSpline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

	if (bOrientToPath)
	{
		FRotator NewRotation = TargetSpline->GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
		OwnerActor->SetActorLocationAndRotation(NewLocation, NewRotation);
	}
	else
	{
		OwnerActor->SetActorLocation(NewLocation);
	}
}