// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/MoveMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveMap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMoveMap();
	MYPROJECT_API UClass* Z_Construct_UClass_AMoveMap_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(AMoveMap::execCreateMoveMap)
	{
		P_GET_OBJECT(AActor,Z_Param_OwnerObject);
		P_GET_OBJECT(UClass,Z_Param_ClassForSpawn);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SpawnLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_X_Size);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMoveMap**)Z_Param__Result=AMoveMap::CreateMoveMap(Z_Param_OwnerObject,Z_Param_ClassForSpawn,Z_Param_Out_SpawnLocation,Z_Param_X_Size,Z_Param_Y_Size);
		P_NATIVE_END;
	}
	void AMoveMap::StaticRegisterNativesAMoveMap()
	{
		UClass* Class = AMoveMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMoveMap", &AMoveMap::execCreateMoveMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics
	{
		struct MoveMap_eventCreateMoveMap_Parms
		{
			AActor* OwnerObject;
			UClass* ClassForSpawn;
			FVector SpawnLocation;
			int32 X_Size;
			int32 Y_Size;
			AMoveMap* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassForSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_X_Size;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Y_Size;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, OwnerObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_ClassForSpawn = { "ClassForSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, ClassForSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_SpawnLocation_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_X_Size = { "X_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, X_Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_Y_Size = { "Y_Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, Y_Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoveMap_eventCreateMoveMap_Parms, ReturnValue), Z_Construct_UClass_AMoveMap_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_OwnerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_ClassForSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_X_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_Y_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveMap.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMoveMap, nullptr, "CreateMoveMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::MoveMap_eventCreateMoveMap_Parms), Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMoveMap_CreateMoveMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMoveMap_CreateMoveMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveMap);
	UClass* Z_Construct_UClass_AMoveMap_NoRegister()
	{
		return AMoveMap::StaticClass();
	}
	struct Z_Construct_UClass_AMoveMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableMoves_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableMoves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMoveMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMoveMap_CreateMoveMap, "CreateMoveMap" }, // 3228236647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveMap.h" },
		{ "ModuleRelativePath", "Public/MoveMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveMap_Statics::NewProp_AvailableMoves_MetaData[] = {
		{ "Category", "MoveMap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoveMap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoveMap_Statics::NewProp_AvailableMoves = { "AvailableMoves", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveMap, AvailableMoves), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoveMap_Statics::NewProp_AvailableMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveMap_Statics::NewProp_AvailableMoves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveMap_Statics::NewProp_AvailableMoves,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMoveMap_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AMoveMap, IInteractionInterface), false },  // 3739653725
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveMap_Statics::ClassParams = {
		&AMoveMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMoveMap_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveMap_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveMap()
	{
		if (!Z_Registration_Info_UClass_AMoveMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveMap.OuterSingleton, Z_Construct_UClass_AMoveMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveMap.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMoveMap>()
	{
		return AMoveMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveMap);
	AMoveMap::~AMoveMap() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MoveMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MoveMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveMap, AMoveMap::StaticClass, TEXT("AMoveMap"), &Z_Registration_Info_UClass_AMoveMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveMap), 3330070114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MoveMap_h_1290169351(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MoveMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_MoveMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
