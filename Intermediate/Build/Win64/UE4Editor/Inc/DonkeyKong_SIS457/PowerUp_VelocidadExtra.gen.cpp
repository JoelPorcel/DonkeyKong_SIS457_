// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/PowerUp_VelocidadExtra.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerUp_VelocidadExtra() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APowerUp_VelocidadExtra_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APowerUp_VelocidadExtra();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APowerUp_DoblePuntuacion();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void APowerUp_VelocidadExtra::StaticRegisterNativesAPowerUp_VelocidadExtra()
	{
	}
	UClass* Z_Construct_UClass_APowerUp_VelocidadExtra_NoRegister()
	{
		return APowerUp_VelocidadExtra::StaticClass();
	}
	struct Z_Construct_UClass_APowerUp_VelocidadExtra_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerUp_DoblePuntuacion,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PowerUp_VelocidadExtra.h" },
		{ "ModuleRelativePath", "PowerUp_VelocidadExtra.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerUp_VelocidadExtra>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::ClassParams = {
		&APowerUp_VelocidadExtra::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerUp_VelocidadExtra()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerUp_VelocidadExtra_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerUp_VelocidadExtra, 3349378504);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APowerUp_VelocidadExtra>()
	{
		return APowerUp_VelocidadExtra::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerUp_VelocidadExtra(Z_Construct_UClass_APowerUp_VelocidadExtra, &APowerUp_VelocidadExtra::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APowerUp_VelocidadExtra"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerUp_VelocidadExtra);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
