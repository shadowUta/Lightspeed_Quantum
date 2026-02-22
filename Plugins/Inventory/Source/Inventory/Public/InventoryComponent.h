// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryTypes.h"
#include "InventoryComponent.generated.h"

//UI 刷新广播
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

// 使用广播
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsumableUsed, FName, ItemID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentEquipped, FName, ItemID);

//丢弃广播
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDropped, FName, ItemID, int32, Amount);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , Blueprintable)
class INVENTORY_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComponent();
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
	UDataTable* ItemDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
	int32 InventorySize = 36;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<FInventorySlot> Inventory;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FOnInventoryUpdated OnInventoryUpdated;

	//可监听的消耗品使用事件
	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FOnConsumableUsed OnConsumableUsed;

	//可监听的装备使用事件
	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FOnEquipmentEquipped OnEquipmentEquipped;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	int32 AddItem(FName ItemID, int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void UseItem(int32 SlotIndex);

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	bool GetItemData(FName ItemID, FItemData& OutItemData) const;
	
	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FOnItemDropped OnItemDropped;
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void SwapItem(int32 IndexA, int32 IndexB);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void DropItem(int32 SlotIndex);

protected:
	void HandleConsumable(int32 SlotIndex, const FItemData& ItemData);
	void HandleEquipment(int32 SlotIndex, const FItemData& ItemData);
	void HandleMaterial(int32 SlotIndex, const FItemData& ItemData);
	//Ciallo～(∠・ω< )⌒★
};
