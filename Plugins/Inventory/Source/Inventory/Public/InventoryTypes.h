#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InventoryTypes.generated.h"

// 物品类
UENUM(BlueprintType)
enum class EItemType : uint8
{
	Consumable  UMETA(DisplayName = "消耗品"),
	Equipment   UMETA(DisplayName = "装备"),
	Material    UMETA(DisplayName = "材料"),
	QuestItem   UMETA(DisplayName = "任务物品")
};

// 物品基础数据 
USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 MaxStack = 64;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	EItemType ItemType = EItemType::Material;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	TSubclassOf<AActor> DropItemClass; 
};

// 背包格子数据
USTRUCT(BlueprintType)
struct FInventorySlot
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Slot")
	FName ItemID = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Slot")
	int32 Quantity = 0;

	bool IsEmpty() const { return ItemID == NAME_None || Quantity <= 0; }
	void ClearSlot() { ItemID = NAME_None; Quantity = 0; }
};