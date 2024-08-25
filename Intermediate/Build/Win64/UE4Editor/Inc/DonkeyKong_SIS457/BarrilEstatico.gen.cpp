// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/BarrilEstatico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrilEstatico() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarrilEstatico_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarrilEstatico();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarril();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void ABarrilEstatico::StaticRegisterNativesABarrilEstatico()
	{
	}
	UClass* Z_Construct_UClass_ABarrilEstatico_NoRegister()
	{
		return ABarrilEstatico::StaticClass();
	}
	struct Z_Construct_UClass_ABarrilEstatico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrilEstatico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarril,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrilEstatico_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BarrilEstatico.h" },
		{ "ModuleRelativePath", "BarrilEstatico.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrilEstatico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrilEstatico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrilEstatico_Statics::ClassParams = {
		&ABarrilEstatico::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrilEstatico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrilEstatico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrilEstatico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrilEstatico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrilEstatico, 2408221558);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ABarrilEstatico>()
	{
		return ABarrilEstatico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrilEstatico(Z_Construct_UClass_ABarrilEstatico, &ABarrilEstatico::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ABarrilEstatico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrilEstatico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
