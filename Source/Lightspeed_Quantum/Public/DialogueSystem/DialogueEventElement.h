#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NativeGameplayTags.h"
#include "DialogueEventElement.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Dialogue System")
class LIGHTSPEED_QUANTUM_API UDialogueEventElement : public UObject
{

    GENERATED_BODY()

public:

    UDialogueEventElement();

    UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue System", meta = (DisplayName = "执行对话事件"))
    void ExecuteDialogueEvent();

    UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue System", meta = (DisplayName = "开始运行"))
    void OnBeginplay();

    UPROPERTY(EditDefaultsOnly , BlueprintReadOnly, Category = "Dialouge System", meta = (AllowPrivateAccess = true))
	FGameplayTag DialogueEventGameplayTag;

    UPROPERTY(VisibleAnywhere , BlueprintReadOnly, Category = "Dialouge System",Meta = (ExposeOnSpawn=true))
	AActor* Owner;

    virtual UWorld* GetWorld() const override;

private:


};