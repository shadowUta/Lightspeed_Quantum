// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueSystem/DialogCondCheckNode.h"

UDialogCondCheckNode::UDialogCondCheckNode()
{
    OnBeginplay();
}

UWorld *UDialogCondCheckNode::GetWorld() const
{
    return Owner ? Owner->GetWorld() : nullptr;
}