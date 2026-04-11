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

class LIGHTSPEED_QUANTUM_API UAbilityElement : public UObject
{
	GENERATED_BODY()

public:
	UAbilityElement();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "开始时"))
	void OnBeginPlay();
	//定义技能激活的逻辑
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "技能激活时"))
	void OnActivate();
	//在激活技能时激活，用来定义特效相关的逻辑，也可直接将调逻辑写至技能激活主逻辑上
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "激活技能特效"))
	void OnVFXActivate();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability System" , meta = (DisplayName = "技能失效时"))
	void OnDeactivate();
	//类外调用，激活技能
	UFUNCTION(BlueprintCallable , Category = "Ability System" , meta = (DisplayName = "激活技能"))
	void ActivateAbility();


public:	


	//获取技能的GameplayTag
	UFUNCTION(BlueprintPure , Category = "Ability System" , meta = (DisplayName = "获取技能GameplayTag"))
    FGameplayTag GetAbilityGameplayTag();

	UFUNCTION(BlueprintCallable , Category = "Ability System|LifeCycle" , meta = (DisplayName = "销毁技能"))
	void DestroyAbilityElement();
	
	UPROPERTY(VisibleAnywhere , BlueprintReadOnly, Category = "Ability System",Meta = (ExposeOnSpawn=true))
	ALQ_Character* Owner;
	
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = true))
	FGameplayTag AbilityGameplayTag;
	
	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly, Category = "Ability System" , meta = (displayname = "最大等级"))
	int32 MaxAbilityLevel;

	UPROPERTY(EditAnywhere , BlueprintReadWrite, Category = "Ability System" , meta = (displayname = "技能等级"))
	int32 AbilityLevel;

	UPROPERTY(EditDefaultsOnly , BlueprintReadOnly, Category = "Ability System" , meta = (displayname = "冷却时间"))
	float CooldownTime;

	//可直接传入材质或纹理
	UPROPERTY(EditAnywhere, BlueprintReadOnly , Category = "Ability System", meta = (AllowedClasses = "Texture2D,MaterialInterface" , displayname = "技能图标"))
	TObjectPtr<UObject> Image;

	UFUNCTION(BlueprintPure , Category = "Ability System" , meta = (DisplayName = "获取世界上下文" , CompactNodeTitle = "WorldContextObject"))
	UWorld* GetWorldContextObject(){ return World; };

private:
	UPROPERTY(VisibleInstanceOnly ,BlueprintReadOnly, Category = "Ability System" , meta = (AllowPrivateAccess = true, ExposeOnSpawn = true , DisplayName = "初始等级"))
	int32 InitialAbilityLevel = 0;
	
	void SetAbilityLevel(int32 Level);
	
	virtual UWorld* GetWorld() const override;
	UWorld* World;


};
