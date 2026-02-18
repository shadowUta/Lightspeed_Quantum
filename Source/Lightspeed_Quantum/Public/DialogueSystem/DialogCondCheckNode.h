// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogCondCheckNode.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Category = "Dialogue System")
class LIGHTSPEED_QUANTUM_API UDialogCondCheckNode : public UObject
{
	GENERATED_BODY()
	
public:
	UDialogCondCheckNode();

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue System", meta = (DisplayName = "开始运行"))
    void OnBeginplay();

	UPROPERTY(VisibleAnywhere , BlueprintReadOnly, Category = "Dialouge System",Meta = (ExposeOnSpawn=true))
	AActor* Owner;

    virtual UWorld* GetWorld() const override;






};
