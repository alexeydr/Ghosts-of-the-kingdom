// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMoveMap;
class UObject;
#ifdef MYPROJECT_MoveMap_generated_h
#error "MoveMap.generated.h already included, missing '#pragma once' in MoveMap.h"
#endif
#define MYPROJECT_MoveMap_generated_h

#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateMoveMap);


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateMoveMap);


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_ACCESSORS
#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoveMap(); \
	friend struct Z_Construct_UClass_AMoveMap_Statics; \
public: \
	DECLARE_CLASS(AMoveMap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMoveMap) \
	virtual UObject* _getUObject() const override { return const_cast<AMoveMap*>(this); }


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMoveMap(); \
	friend struct Z_Construct_UClass_AMoveMap_Statics; \
public: \
	DECLARE_CLASS(AMoveMap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMoveMap) \
	virtual UObject* _getUObject() const override { return const_cast<AMoveMap*>(this); }


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoveMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoveMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveMap(AMoveMap&&); \
	NO_API AMoveMap(const AMoveMap&); \
public: \
	NO_API virtual ~AMoveMap();


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoveMap(AMoveMap&&); \
	NO_API AMoveMap(const AMoveMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoveMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoveMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoveMap) \
	NO_API virtual ~AMoveMap();


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_12_PROLOG
#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_INCLASS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_MoveMap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_ACCESSORS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_MoveMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMoveMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_MoveMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
