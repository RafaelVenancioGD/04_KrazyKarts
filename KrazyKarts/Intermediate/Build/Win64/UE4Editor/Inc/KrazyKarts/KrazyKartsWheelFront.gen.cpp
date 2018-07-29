// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KrazyKartsWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsWheelFront() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelFront_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void UKrazyKartsWheelFront::StaticRegisterNativesUKrazyKartsWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelFront_NoRegister()
	{
		return UKrazyKartsWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "KrazyKartsWheelFront.h" },
				{ "ModuleRelativePath", "KrazyKartsWheelFront.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKrazyKartsWheelFront>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKrazyKartsWheelFront::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UKrazyKartsWheelFront, 4246539453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKrazyKartsWheelFront(Z_Construct_UClass_UKrazyKartsWheelFront, &UKrazyKartsWheelFront::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UKrazyKartsWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKrazyKartsWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
