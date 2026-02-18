
#include "DialogueSystem/DialogueEventElement.h"

UDialogueEventElement::UDialogueEventElement()
{
    OnBeginplay();
}

UWorld* UDialogueEventElement::GetWorld() const
{
    return Owner ? Owner->GetWorld() : nullptr;
}
