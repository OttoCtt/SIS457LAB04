// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Capsula_generated_h
#error "Capsula.generated.h already included, missing '#pragma once' in Capsula.h"
#endif
#define ARCANOID_Capsula_generated_h

#define Arcanoide_Source_Arcanoid_Capsula_h_12_SPARSE_DATA
#define Arcanoide_Source_Arcanoid_Capsula_h_12_RPC_WRAPPERS
#define Arcanoide_Source_Arcanoid_Capsula_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoide_Source_Arcanoid_Capsula_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapsula(); \
	friend struct Z_Construct_UClass_ACapsula_Statics; \
public: \
	DECLARE_CLASS(ACapsula, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ACapsula)


#define Arcanoide_Source_Arcanoid_Capsula_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACapsula(); \
	friend struct Z_Construct_UClass_ACapsula_Statics; \
public: \
	DECLARE_CLASS(ACapsula, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ACapsula)


#define Arcanoide_Source_Arcanoid_Capsula_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapsula(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapsula) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsula); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsula); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsula(ACapsula&&); \
	NO_API ACapsula(const ACapsula&); \
public:


#define Arcanoide_Source_Arcanoid_Capsula_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapsula(ACapsula&&); \
	NO_API ACapsula(const ACapsula&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapsula); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapsula); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapsula)


#define Arcanoide_Source_Arcanoid_Capsula_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsulaMesh() { return STRUCT_OFFSET(ACapsula, CapsulaMesh); } \
	FORCEINLINE static uint32 __PPO__BaseMaterial() { return STRUCT_OFFSET(ACapsula, BaseMaterial); } \
	FORCEINLINE static uint32 __PPO__BlueMaterial() { return STRUCT_OFFSET(ACapsula, BlueMaterial); } \
	FORCEINLINE static uint32 __PPO__OrangeMaterial() { return STRUCT_OFFSET(ACapsula, OrangeMaterial); }


#define Arcanoide_Source_Arcanoid_Capsula_h_9_PROLOG
#define Arcanoide_Source_Arcanoid_Capsula_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoide_Source_Arcanoid_Capsula_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoide_Source_Arcanoid_Capsula_h_12_SPARSE_DATA \
	Arcanoide_Source_Arcanoid_Capsula_h_12_RPC_WRAPPERS \
	Arcanoide_Source_Arcanoid_Capsula_h_12_INCLASS \
	Arcanoide_Source_Arcanoid_Capsula_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoide_Source_Arcanoid_Capsula_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoide_Source_Arcanoid_Capsula_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoide_Source_Arcanoid_Capsula_h_12_SPARSE_DATA \
	Arcanoide_Source_Arcanoid_Capsula_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoide_Source_Arcanoid_Capsula_h_12_INCLASS_NO_PURE_DECLS \
	Arcanoide_Source_Arcanoid_Capsula_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ACapsula>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoide_Source_Arcanoid_Capsula_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
