
#include "DialogueSystem/DialogueEventElement.h"

UDialogueEventElement::UDialogueEventElement()
{
    OnBeginplay();

    World = GetOuter()->GetWorld();

}

UWorld* UDialogueEventElement::GetWorld() const
{
    if(Owner)
    {
        return Owner->GetWorld();
    }
    else if(World)
    {
        return World;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UDialogueEventElement::GetWorld() - Owner and Outer have no valid world!"));
        return nullptr;
    }
    // return Owner ? Owner->GetWorld() : nullptr;
}
