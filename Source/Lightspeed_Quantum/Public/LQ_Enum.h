#pragma once

#include "CoreMinimal.h"
#include "LQ_Enum.generated.h"


UENUM(BlueprintType) 
enum class UDE_InteractableType : uint8 // 用enum class（强类型枚举）更安全
{
    IT_None               UMETA(DisplayName = "None"),      
    IT_NPC                UMETA(DisplayName = "NPC"),
    IT_Drop               UMETA(DisplayName = "掉落物"),
    IT_Loot               UMETA(DisplayName = "宝箱")
};