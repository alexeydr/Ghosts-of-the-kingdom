// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicGridActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FBusyTile;
struct FCachedMapData;
#ifdef MYPROJECT_BasicGridActor_generated_h
#error "BasicGridActor.generated.h already included, missing '#pragma once' in BasicGridActor.h"
#endif
#define MYPROJECT_BasicGridActor_generated_h

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapObject_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMapObject>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_RPC_WRAPPERS
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapLegend(); \
	friend struct Z_Construct_UClass_UMapLegend_Statics; \
public: \
	DECLARE_CLASS(UMapLegend, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMapLegend)


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMapLegend(); \
	friend struct Z_Construct_UClass_UMapLegend_Statics; \
public: \
	DECLARE_CLASS(UMapLegend, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMapLegend)


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapLegend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapLegend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapLegend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapLegend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapLegend(UMapLegend&&); \
	NO_API UMapLegend(const UMapLegend&); \
public: \
	NO_API virtual ~UMapLegend();


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapLegend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapLegend(UMapLegend&&); \
	NO_API UMapLegend(const UMapLegend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapLegend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapLegend); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapLegend) \
	NO_API virtual ~UMapLegend();


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_31_PROLOG
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_INCLASS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UMapLegend>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapRow_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMapRow>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapData_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMapData>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedMapInfo_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FCachedMapInfo>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedMapData_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FCachedMapData>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBusyTile_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FBusyTile>();

#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateMap); \
	DECLARE_FUNCTION(execIsAvailableTile); \
	DECLARE_FUNCTION(execMoveActorOnTail); \
	DECLARE_FUNCTION(execGetWorldTailLocation); \
	DECLARE_FUNCTION(execGetTailByLocation); \
	DECLARE_FUNCTION(execGetActorTiles);


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateMap); \
	DECLARE_FUNCTION(execIsAvailableTile); \
	DECLARE_FUNCTION(execMoveActorOnTail); \
	DECLARE_FUNCTION(execGetWorldTailLocation); \
	DECLARE_FUNCTION(execGetTailByLocation); \
	DECLARE_FUNCTION(execGetActorTiles);


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicGridActor(); \
	friend struct Z_Construct_UClass_ABasicGridActor_Statics; \
public: \
	DECLARE_CLASS(ABasicGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABasicGridActor)


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_INCLASS \
private: \
	static void StaticRegisterNativesABasicGridActor(); \
	friend struct Z_Construct_UClass_ABasicGridActor_Statics; \
public: \
	DECLARE_CLASS(ABasicGridActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABasicGridActor)


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicGridActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicGridActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicGridActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicGridActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicGridActor(ABasicGridActor&&); \
	NO_API ABasicGridActor(const ABasicGridActor&); \
public: \
	NO_API virtual ~ABasicGridActor();


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicGridActor(ABasicGridActor&&); \
	NO_API ABasicGridActor(const ABasicGridActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicGridActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicGridActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicGridActor) \
	NO_API virtual ~ABasicGridActor();


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_130_PROLOG
#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_INCLASS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_BasicGridActor_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABasicGridActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_BasicGridActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
