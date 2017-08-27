// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BATTERYCOLLECTOR_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define BATTERYCOLLECTOR_SpawnVolume_generated_h

#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume(); \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume(); \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public:


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume)


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__whatToSpawn() { return STRUCT_OFFSET(ASpawnVolume, whatToSpawn); } \
	FORCEINLINE static uint32 __PPO__spawnDelayRangeLow() { return STRUCT_OFFSET(ASpawnVolume, spawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__spawnDelayRangeHigh() { return STRUCT_OFFSET(ASpawnVolume, spawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__whereToSpawn() { return STRUCT_OFFSET(ASpawnVolume, whereToSpawn); }


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_15_PROLOG
#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_INCLASS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
