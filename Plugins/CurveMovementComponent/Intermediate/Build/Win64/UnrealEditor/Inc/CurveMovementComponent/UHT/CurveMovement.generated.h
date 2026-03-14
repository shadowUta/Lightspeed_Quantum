// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurveMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEMOVEMENTCOMPONENT_CurveMovement_generated_h
#error "CurveMovement.generated.h already included, missing '#pragma once' in CurveMovement.h"
#endif
#define CURVEMOVEMENTCOMPONENT_CurveMovement_generated_h

#define FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPercentage); \
	DECLARE_FUNCTION(execStopMovemennt); \
	DECLARE_FUNCTION(execStartMovemennt);


#define FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveMovement(); \
	friend struct Z_Construct_UClass_UCurveMovement_Statics; \
public: \
	DECLARE_CLASS(UCurveMovement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveMovementComponent"), NO_API) \
	DECLARE_SERIALIZER(UCurveMovement)


#define FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveMovement(UCurveMovement&&); \
	UCurveMovement(const UCurveMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveMovement) \
	NO_API virtual ~UCurveMovement();


#define FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_11_PROLOG
#define FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_INCLASS_NO_PURE_DECLS \
	FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEMOVEMENTCOMPONENT_API UClass* StaticClass<class UCurveMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
