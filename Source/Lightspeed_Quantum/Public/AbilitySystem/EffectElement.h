#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NativeGameplayTags.h"
#include "LQ_Character.h"
#include "EffectElement.generated.h"

/**
 * 
 */
UCLASS(Abstract , Blueprintable, BlueprintType,Category = "Ability System")

class LIGHTSPEED_QUANTUM_API UEffectElement : public UObject , public FTickableGameObject
{
	GENERATED_BODY()

public:
	//定义效果的逻辑
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "效果激活时"))
	void OnActivate();

	//类外调用，激活效果
	UFUNCTION(BlueprintCallable , Category = "Ability System" , meta = (DisplayName = "激活效果"))
	void ActivateEffect();

	
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "效果销毁时"))
	void OnDestroy();

	//获取效果的GameplayTag
	UFUNCTION(BlueprintPure, Category = "Ability System" , meta = (DisplayName = "获取效果GameplayTag"))
    FGameplayTag GetEffectGameplayTag();


	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System")
	void OnTick(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Ability System|LifeCycle" , meta = (DisplayName = "销毁效果"))
	void DestroyEffectElement();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent , Category = "Ability System" , meta = (DisplayName = "修改效果层数"))
	bool ModifyEffectStacks(int32 AddedStacks);

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual UWorld* GetWorld() const override;
	virtual bool NeedsLoadForEditorGame() const override;
	bool ShouldDestroy = false;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System",Meta = (ExposeOnSpawn=true))
	ALQ_Character* Owner;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = true))
	FGameplayTag EffectGameplayTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability System" , meta = (displayName = "效果层数"))
	int32 EffectStacks;
};
