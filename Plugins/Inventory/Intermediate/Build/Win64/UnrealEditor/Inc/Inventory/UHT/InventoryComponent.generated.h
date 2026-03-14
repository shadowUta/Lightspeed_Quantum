// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventorySlot;
struct FItemData;
#ifdef INVENTORY_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORY_InventoryComponent_generated_h

#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_12_DELEGATE \
INVENTORY_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_15_DELEGATE \
INVENTORY_API void FOnConsumableUsed_DelegateWrapper(const FMulticastScriptDelegate& OnConsumableUsed, FName ItemID, int32 Quantity);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_18_DELEGATE \
INVENTORY_API void FOnItemDropped_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropped, FName ItemID, int32 Quantity);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncreaseInventorySize); \
	DECLARE_FUNCTION(execMergeSlot); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execSwapItem); \
	DECLARE_FUNCTION(execGetItemData); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_CALLBACK_WRAPPERS
#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_20_PROLOG
#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_CALLBACK_WRAPPERS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
