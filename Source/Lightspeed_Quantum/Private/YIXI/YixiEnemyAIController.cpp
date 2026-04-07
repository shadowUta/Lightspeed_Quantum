// Fill out your copyright notice in the Description page of Project Settings.

#include "YIXI/YixiEnemyAIController.h"

// 请确保在 cpp 文件顶部包含这两个头文件
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISense_Sight.h"

AYixiEnemyAIController::AYixiEnemyAIController()
{
}

void AYixiEnemyAIController::UpdateSightRadius(float NewSightRadius, float NewLoseSightRadius)
{
	UAIPerceptionComponent* PerceptionComp = GetPerceptionComponent();
	if (!PerceptionComp) return;

	// 获取 Sight 对应的 SenseID
	FAISenseID SightSenseID = UAISense::GetSenseID<UAISense_Sight>();
	if (!SightSenseID.IsValid()) return;

	// 获取并转换视觉配置
	UAISenseConfig* BaseConfig = PerceptionComp->GetSenseConfig(SightSenseID);
	UAISenseConfig_Sight* SightConfig = Cast<UAISenseConfig_Sight>(BaseConfig);

	if (SightConfig)
	{
		// 覆写策划数值
		SightConfig->SightRadius = NewSightRadius;
		SightConfig->LoseSightRadius = NewLoseSightRadius;

		// 强制引擎重新配置感知监听器，使新数值立刻生效
		PerceptionComp->RequestStimuliListenerUpdate();
	}
}
