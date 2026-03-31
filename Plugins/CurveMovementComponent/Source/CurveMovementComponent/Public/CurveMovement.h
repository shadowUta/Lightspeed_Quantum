// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "CurveMovement.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurveMovementUpdated, float , Percentage);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCurveMovementFinished);

UCLASS(ClassGroup=(CurveMovement), meta=(BlueprintSpawnableComponent),Blueprintable)
class CURVEMOVEMENTCOMPONENT_API UCurveMovement : public UActorComponent
{
	GENERATED_BODY()

public:
	UCurveMovement();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable,Category="Curve Movement",meta = (DisplayName = "开始曲线运动"))
	void StartMovemennt();
	
	UFUNCTION(BlueprintCallable,Category="Curve Movement",meta = (DisplayName = "停止曲线运动"))
	void StopMovemennt();
	
	UFUNCTION(BlueprintCallable,Category="Curve Movement",meta = (DisplayName = "设置百分比位置"))
	void SetPercentage(float NewPercentage);

	UFUNCTION(BlueprintCallable,Category="Curve Movement",meta = (DisplayName = "设置循环运动"))
	void SetLoopMovement(bool bLoop);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement", meta = (DisplayName = "样曲线"))
	AActor* PathActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement", meta = (DisplayName = "曲线速度"))
	float Speed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement", meta = (ClampMin = "0.0", ClampMax = "1.0", DisplayName = "曲线位置百分比"))
	float CurrentPercentage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement", meta = (DisplayName = "是否朝向路径"))
	bool bOrientToPath;

public:

	UPROPERTY(BlueprintAssignable, Category = "Curve Movement", meta = (DisplayName = "运动更新时"))
	FCurveMovementUpdated OnCurveMovementUpdated;

	UPROPERTY(BlueprintAssignable, Category = "Curve Movement", meta = (DisplayName = "运动结束时"))
	FCurveMovementFinished OnCurveMovementFinished;

private:
	
	bool bIsMoving;
	bool bLoopMovement = false;
	
	UPROPERTY()
	USplineComponent* TargetSpline;
	
	void UpdateOwnerTransform();

public:
	UFUNCTION(BlueprintPure,Category="Curve Movement",meta = (DisplayName = "运动中"))
	bool IsMoving() const { return bIsMoving; };

	UFUNCTION(BlueprintPure,Category="Curve Movement",meta = (DisplayName = "获取百分比位置"))
	float GetCurrentPercentage() const { return CurrentPercentage; };

	UFUNCTION(BlueprintPure,Category="Curve Movement",meta = (DisplayName = "是否循环运动"))
	bool IsLoopMovement() const { return bLoopMovement; };
	
};
