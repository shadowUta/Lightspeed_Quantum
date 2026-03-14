// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "CurveMovement.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement|Path|样曲线")
	AActor* PathActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement|Settings|移动速度")
	float Speed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement|Settings|当前百分比", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float CurrentPercentage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve Movement|Settings|是否面向运动方向")
	bool bOrientToPath;
	
private:
	
	bool bIsMoving;
	
	UPROPERTY()
	USplineComponent* TargetSpline;
	
	void UpdateOwnerTransform();
	
	
};
