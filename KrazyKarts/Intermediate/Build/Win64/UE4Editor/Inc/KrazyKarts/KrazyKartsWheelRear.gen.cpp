// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "KrazyKartsWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrazyKartsWheelRear() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelRear_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UKrazyKartsWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
// End Cross Module References
	void UKrazyKartsWheelRear::StaticRegisterNativesUKrazyKartsWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelRear_NoRegister()
	{
		return UKrazyKartsWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UKrazyKartsWheelRear()
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
				{ "IncludePath", "KrazyKartsWheelRear.h" },
				{ "ModuleRelativePath", "KrazyKartsWheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UKrazyKartsWheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UKrazyKartsWheelRear::StaticClass,
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
	IMPLEMENT_CLASS(UKrazyKartsWheelRear, 472808816);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKrazyKartsWheelRear(Z_Construct_UClass_UKrazyKartsWheelRear, &UKrazyKartsWheelRear::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UKrazyKartsWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKrazyKartsWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
