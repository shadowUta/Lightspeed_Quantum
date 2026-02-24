// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventorySlot;
struct FItemData;
#ifdef INVENTORY_InventoryFunctionLibrary_generated_h
#error "InventoryFunctionLibrary.generated.h already included, missing '#pragma once' in InventoryFunctionLibrary.h"
#endif
#define INVENTORY_InventoryFunctionLibrary_generated_h

#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execItemDataNotEquals); \
	DECLARE_FUNCTION(execItemDataEquals);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryFunctionLibrary(); \
	friend struct Z_Construct_UClass_UInventoryFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UInventoryFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryFunctionLibrary)


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryFunctionLibrary(UInventoryFunctionLibrary&&); \
	UInventoryFunctionLibrary(const UInventoryFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryFunctionLibrary) \
	NO_API virtual ~UInventoryFunctionLibrary();


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_8_PROLOG
#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInventoryFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_InventoryFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
