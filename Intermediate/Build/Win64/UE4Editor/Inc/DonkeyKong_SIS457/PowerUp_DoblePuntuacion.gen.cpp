// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/PowerUp_DoblePuntuacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp_DoblePuntuacion() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APowerUp_DoblePuntuacion_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APowerUp_DoblePuntuacion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void APowerUp_DoblePuntuacion::StaticRegisterNativesAPowerUp_DoblePuntuacion()
	{
	}
	UClass* Z_Construct_UClass_APowerUp_DoblePuntuacion_NoRegister()
	{
		return APowerUp_DoblePuntuacion::StaticClass();
	}
	struct Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerUp_DoblePuntuacion.h" },
		{ "ModuleRelativePath", "PowerUp_DoblePuntuacion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp_DoblePuntuacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::ClassParams = {
		&APowerUp_DoblePuntuacion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUp_DoblePuntuacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUp_DoblePuntuacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUp_DoblePuntuacion, 2256281074);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APowerUp_DoblePuntuacion>()
	{
		return APowerUp_DoblePuntuacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUp_DoblePuntuacion(Z_Construct_UClass_APowerUp_DoblePuntuacion, &APowerUp_DoblePuntuacion::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APowerUp_DoblePuntuacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp_DoblePuntuacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
