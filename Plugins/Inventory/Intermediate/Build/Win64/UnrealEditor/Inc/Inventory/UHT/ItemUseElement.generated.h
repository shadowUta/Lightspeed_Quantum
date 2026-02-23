// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemUseElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef INVENTORY_ItemUseElement_generated_h
#error "ItemUseElement.generated.h already included, missing '#pragma once' in ItemUseElement.h"
#endif
#define INVENTORY_ItemUseElement_generated_h

#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUseItem);


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_CALLBACK_WRAPPERS
#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemUseElement(); \
	friend struct Z_Construct_UClass_UItemUseElement_Statics; \
public: \
	DECLARE_CLASS(UItemUseElement, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UItemUseElement)


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemUseElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemUseElement(UItemUseElement&&); \
	UItemUseElement(const UItemUseElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemUseElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemUseElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemUseElement) \
	NO_API virtual ~UItemUseElement();


#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_8_PROLOG
#define FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_CALLBACK_WRAPPERS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UItemUseElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Lightspeed_Quantum_Plugins_Inventory_Source_Inventory_Public_ItemUseElement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
