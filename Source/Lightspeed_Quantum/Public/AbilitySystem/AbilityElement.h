#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NativeGameplayTags.h"
#include "LQ_Character.h"
#include "UObject/UObjectBaseUtility.h" 
#include "AbilityElement.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, BlueprintType,Category = "Ability System")

class LIGHTSPEED_QUANTUM_API UAbilityElement : public UObject , public FTickableGameObject
{
	GENERATED_BODY()

public:

	//定义技能激活的逻辑
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "技能激活时"))
	void OnActivate();

	//在激活技能时激活，用来定义特效相关的逻辑，也可直接将调逻辑写至技能激活主逻辑上
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "激活技能特效"))
	void OnVFXActivate();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "技能失效时"))
	void OnDeactivate();

	UFUNCTION(BlueprintImplementableEvent , Category = "Ability System")
	void OnTick(float DeltaTime);

	//类外调用，激活技能
	UFUNCTION(BlueprintCallable , Category = "Ability System" , meta = (DisplayName = "激活技能"))
	void ActivateAbility();

	UFUNCTION(BlueprintCallable , BlueprintNativeEvent , Category = "Ability System" , meta = (DisplayName = "修改技能等级"))
	bool UpgradeAbility(int32 AddedLevel = 1);

	//获取技能的GameplayTag
	UFUNCTION(BlueprintPure , Category = "Ability System" , meta = (DisplayName = "获取技能GameplayTag"))
    FGameplayTag GetAbilityGameplayTag();

	UFUNCTION(BlueprintCallable , Category = "Ability System|LifeCycle" , meta = (DisplayName = "销毁技能"))
	void DestroyAbilityElement();

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	virtual UWorld* GetWorld() const override;
	bool ShouldDestroy = false;
	
	UPROPERTY(VisibleAnywhere , BlueprintReadOnly, Category = "Ability System",Meta = (ExposeOnSpawn=true))
	ALQ_Character* Owner;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = true))
	FGameplayTag AbilityGameplayTag;

	UPROPERTY(EditAnywhere , BlueprintReadWrite, Category = "Ability System")
	int32 AbilityLevel;

	UPROPERTY(EditAnywhere , BlueprintReadWrite, Category = "Ability System" , meta = (displayname = "冷却时间"))
	float CooldownTime;



};
