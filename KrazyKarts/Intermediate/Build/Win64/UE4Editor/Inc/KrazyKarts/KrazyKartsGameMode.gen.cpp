// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KrazyKartsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsGameMode() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_AKrazyKartsGameMode_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_AKrazyKartsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void AKrazyKartsGameMode::StaticRegisterNativesAKrazyKartsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKrazyKartsGameMode_NoRegister()
	{
		return AKrazyKartsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AKrazyKartsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "KrazyKartsGameMode.h" },
				{ "ModuleRelativePath", "KrazyKartsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AKrazyKartsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AKrazyKartsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKrazyKartsGameMode, 3230917125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKrazyKartsGameMode(Z_Construct_UClass_AKrazyKartsGameMode, &AKrazyKartsGameMode::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("AKrazyKartsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKrazyKartsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
