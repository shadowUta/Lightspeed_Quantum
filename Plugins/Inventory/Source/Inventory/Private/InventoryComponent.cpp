#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::BeginPlay()
{
    Super::BeginPlay();
    
    Inventory.SetNum(InventorySize);
}

int32 UInventoryComponent::AddItem(FName ItemID, int32 Amount)
{
    if (Amount <= 0 || ItemID == NAME_None) return Amount;
    
    FItemData ItemData;
    if (!GetItemData(ItemID, ItemData)) return Amount; 

    int32 RemainingAmount = Amount;
    
    for (FInventorySlot& Slot : Inventory)
    {
        if (Slot.ItemID == ItemID && Slot.Quantity < ItemData.MaxStack)
        {
            int32 SpaceLeft = ItemData.MaxStack - Slot.Quantity; 
            if (RemainingAmount <= SpaceLeft)
            {
                Slot.Quantity += RemainingAmount;
                RemainingAmount = 0;
                break; 
            }
            else
            {
                Slot.Quantity = ItemData.MaxStack;
                RemainingAmount -= SpaceLeft;
            }
        }
    }
    
    if (RemainingAmount > 0)
    {
        for (FInventorySlot& Slot : Inventory)
        {
            if (Slot.IsEmpty())
            {
                Slot.ItemID = ItemID; 

                if (RemainingAmount <= ItemData.MaxStack)
                {
                    Slot.Quantity = RemainingAmount;
                    RemainingAmount = 0;
                    break; 
                }
                else
                {
                    Slot.Quantity = ItemData.MaxStack;
                    RemainingAmount -= ItemData.MaxStack;
                }
            }
        }
    }
    
    OnInventoryUpdated.Broadcast();
    
    return RemainingAmount;
}

void UInventoryComponent::UseItem(int32 SlotIndex)
{
    if (!Inventory.IsValidIndex(SlotIndex)) return;
    
    FInventorySlot& Slot = Inventory[SlotIndex];
    if (Slot.IsEmpty()) return;
    
    FItemData ItemData;
    if (GetItemData(Slot.ItemID, ItemData))
    {
        switch (ItemData.ItemType)
        {
            case EItemType::Consumable:
                HandleConsumable(SlotIndex, ItemData);
                break;
                
            case EItemType::Equipment:
                HandleEquipment(SlotIndex, ItemData);
                break;
                
            case EItemType::Material:
                HandleMaterial(SlotIndex, ItemData);
                break;
                
            case EItemType::QuestItem:
                UE_LOG(LogTemp, Warning, TEXT("任务物品无法直接点击使用！"));
                break;
                
            default:
                break;
        }
    }
}


bool UInventoryComponent::GetItemData(FName ItemID, FItemData& OutItemData) const
{
    if (ItemDataTable)
    {
        static const FString ContextString(TEXT("Inventory System Context"));
        FItemData* Row = ItemDataTable->FindRow<FItemData>(ItemID, ContextString);
        if (Row)
        {
            OutItemData = *Row;
            return true;
        }
    }
    return false;
}



void UInventoryComponent::HandleConsumable(int32 SlotIndex, const FItemData& ItemData)
{
    FInventorySlot& Slot = Inventory[SlotIndex];
    Slot.Quantity--;
    if (Slot.Quantity <= 0)
    {
        Slot.ClearSlot();
    }
    OnInventoryUpdated.Broadcast();
    OnConsumableUsed.Broadcast(ItemData.ItemID);
}

void UInventoryComponent::HandleEquipment(int32 SlotIndex, const FItemData& ItemData)
{
    OnEquipmentEquipped.Broadcast(ItemData.ItemID);
}

void UInventoryComponent::HandleMaterial(int32 SlotIndex, const FItemData& ItemData)
{
    UE_LOG(LogTemp, Log, TEXT("材料通常用于合成，无法直接右键使用: %s"), *ItemData.ItemName.ToString());
}

void UInventoryComponent::SwapItem(int32 IndexA, int32 IndexB)
{
    if (!Inventory.IsValidIndex(IndexA) || !Inventory.IsValidIndex(IndexB)) return;
    if (IndexA == IndexB) return;
    
    Inventory.Swap(IndexA, IndexB);
    
    OnInventoryUpdated.Broadcast();
}

void UInventoryComponent::DropItem(int32 SlotIndex)
{
    if (!Inventory.IsValidIndex(SlotIndex)) return;
    FInventorySlot& Slot = Inventory[SlotIndex]; 
    if (Slot.IsEmpty()) return;
    
    OnItemDropped.Broadcast(Slot.ItemID, Slot.Quantity);
    
    Slot.ClearSlot();
    
    OnInventoryUpdated.Broadcast();
}