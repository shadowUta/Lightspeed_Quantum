// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveMovementComponent/Public/CurveMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveMovement() {}

// Begin Cross Module References
CURVEMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCurveMovement();
CURVEMOVEMENTCOMPONENT_API UClass* Z_Construct_UClass_UCurveMovement_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CurveMovementComponent();
// End Cross Module References

// Begin Class UCurveMovement Function SetPercentage
struct Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics
{
	struct CurveMovement_eventSetPercentage_Parms
	{
		float NewPercentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curve Movement" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::NewProp_NewPercentage = { "NewPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveMovement_eventSetPercentage_Parms, NewPercentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::NewProp_NewPercentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveMovement, nullptr, "SetPercentage", nullptr, nullptr, Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::CurveMovement_eventSetPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::CurveMovement_eventSetPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveMovement_SetPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveMovement_SetPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveMovement::execSetPercentage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPercentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercentage(Z_Param_NewPercentage);
	P_NATIVE_END;
}
// End Class UCurveMovement Function SetPercentage

// Begin Class UCurveMovement Function StartMovemennt
struct Z_Construct_UFunction_UCurveMovement_StartMovemennt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curve Movement" },
		{ "DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\x9b\xb2\xe7\xba\xbf\xe8\xbf\x90\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveMovement_StartMovemennt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveMovement, nullptr, "StartMovemennt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveMovement_StartMovemennt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveMovement_StartMovemennt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCurveMovement_StartMovemennt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveMovement_StartMovemennt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveMovement::execStartMovemennt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMovemennt();
	P_NATIVE_END;
}
// End Class UCurveMovement Function StartMovemennt

// Begin Class UCurveMovement Function StopMovemennt
struct Z_Construct_UFunction_UCurveMovement_StopMovemennt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Curve Movement" },
		{ "DisplayName", "\xe5\x81\x9c\xe6\xad\xa2\xe6\x9b\xb2\xe7\xba\xbf\xe8\xbf\x90\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveMovement_StopMovemennt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveMovement, nullptr, "StopMovemennt", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveMovement_StopMovemennt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveMovement_StopMovemennt_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCurveMovement_StopMovemennt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveMovement_StopMovemennt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveMovement::execStopMovemennt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMovemennt();
	P_NATIVE_END;
}
// End Class UCurveMovement Function StopMovemennt

// Begin Class UCurveMovement
void UCurveMovement::StaticRegisterNativesUCurveMovement()
{
	UClass* Class = UCurveMovement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPercentage", &UCurveMovement::execSetPercentage },
		{ "StartMovemennt", &UCurveMovement::execStartMovemennt },
		{ "StopMovemennt", &UCurveMovement::execStopMovemennt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveMovement);
UClass* Z_Construct_UClass_UCurveMovement_NoRegister()
{
	return UCurveMovement::StaticClass();
}
struct Z_Construct_UClass_UCurveMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CurveMovement.h" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathActor_MetaData[] = {
		{ "Category", "Curve Movement|Path|\xe6\xa0\xb7\xe6\x9b\xb2\xe7\xba\xbf" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Curve Movement|Settings|\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPercentage_MetaData[] = {
		{ "Category", "Curve Movement|Settings|\xe5\xbd\x93\xe5\x89\x8d\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrientToPath_MetaData[] = {
		{ "Category", "Curve Movement|Settings|\xe6\x98\xaf\xe5\x90\xa6\xe9\x9d\xa2\xe5\x90\x91\xe8\xbf\x90\xe5\x8a\xa8\xe6\x96\xb9\xe5\x90\x91" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CurveMovement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPercentage;
	static void NewProp_bOrientToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientToPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveMovement_SetPercentage, "SetPercentage" }, // 2304548331
		{ &Z_Construct_UFunction_UCurveMovement_StartMovemennt, "StartMovemennt" }, // 2748181679
		{ &Z_Construct_UFunction_UCurveMovement_StopMovemennt, "StopMovemennt" }, // 482104248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveMovement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveMovement_Statics::NewProp_PathActor = { "PathActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveMovement, PathActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathActor_MetaData), NewProp_PathActor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveMovement_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveMovement, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveMovement_Statics::NewProp_CurrentPercentage = { "CurrentPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveMovement, CurrentPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPercentage_MetaData), NewProp_CurrentPercentage_MetaData) };
void Z_Construct_UClass_UCurveMovement_Statics::NewProp_bOrientToPath_SetBit(void* Obj)
{
	((UCurveMovement*)Obj)->bOrientToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveMovement_Statics::NewProp_bOrientToPath = { "bOrientToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCurveMovement), &Z_Construct_UClass_UCurveMovement_Statics::NewProp_bOrientToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrientToPath_MetaData), NewProp_bOrientToPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveMovement_Statics::NewProp_TargetSpline = { "TargetSpline", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveMovement, TargetSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpline_MetaData), NewProp_TargetSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveMovement_Statics::NewProp_PathActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveMovement_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveMovement_Statics::NewProp_CurrentPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveMovement_Statics::NewProp_bOrientToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveMovement_Statics::NewProp_TargetSpline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveMovement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveMovement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CurveMovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveMovement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveMovement_Statics::ClassParams = {
	&UCurveMovement::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurveMovement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveMovement_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveMovement_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveMovement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveMovement()
{
	if (!Z_Registration_Info_UClass_UCurveMovement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveMovement.OuterSingleton, Z_Construct_UClass_UCurveMovement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveMovement.OuterSingleton;
}
template<> CURVEMOVEMENTCOMPONENT_API UClass* StaticClass<UCurveMovement>()
{
	return UCurveMovement::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveMovement);
UCurveMovement::~UCurveMovement() {}
// End Class UCurveMovement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveMovement, UCurveMovement::StaticClass, TEXT("UCurveMovement"), &Z_Registration_Info_UClass_UCurveMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveMovement), 3650479951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_1600718643(TEXT("/Script/CurveMovementComponent"),
	Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Lightspeed_Quantum_Plugins_CurveMovementComponent_Source_CurveMovementComponent_Public_CurveMovement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
