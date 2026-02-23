#include "ItemUseElement.h"

void UItemUseElement::UseItem(AActor* User, FName ItemID, int32 Count)
{
    OnUse(User, ItemID, Count);
    Owner = User;
}

UWorld* UItemUseElement::GetWorld() const
{
    return Owner ? Owner->GetWorld() : nullptr;
}
