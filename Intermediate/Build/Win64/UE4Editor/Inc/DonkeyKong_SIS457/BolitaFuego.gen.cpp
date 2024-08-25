// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/BolitaFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBolitaFuego() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABolitaFuego_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABolitaFuego();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_Aenemigos();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void ABolitaFuego::StaticRegisterNativesABolitaFuego()
	{
	}
	UClass* Z_Construct_UClass_ABolitaFuego_NoRegister()
	{
		return ABolitaFuego::StaticClass();
	}
	struct Z_Construct_UClass_ABolitaFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABolitaFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABolitaFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BolitaFuego.h" },
		{ "ModuleRelativePath", "BolitaFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABolitaFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABolitaFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABolitaFuego_Statics::ClassParams = {
		&ABolitaFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABolitaFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABolitaFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABolitaFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABolitaFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABolitaFuego, 2649422556);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ABolitaFuego>()
	{
		return ABolitaFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABolitaFuego(Z_Construct_UClass_ABolitaFuego, &ABolitaFuego::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ABolitaFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABolitaFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
