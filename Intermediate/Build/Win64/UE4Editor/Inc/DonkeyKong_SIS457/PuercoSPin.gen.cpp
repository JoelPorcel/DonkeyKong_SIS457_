// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/PuercoSPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuercoSPin() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APuercoSPin_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APuercoSPin();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_Aenemigos();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void APuercoSPin::StaticRegisterNativesAPuercoSPin()
	{
	}
	UClass* Z_Construct_UClass_APuercoSPin_NoRegister()
	{
		return APuercoSPin::StaticClass();
	}
	struct Z_Construct_UClass_APuercoSPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuercoSPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuercoSPin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuercoSPin.h" },
		{ "ModuleRelativePath", "PuercoSPin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuercoSPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuercoSPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuercoSPin_Statics::ClassParams = {
		&APuercoSPin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuercoSPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuercoSPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuercoSPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuercoSPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuercoSPin, 4009194616);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APuercoSPin>()
	{
		return APuercoSPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuercoSPin(Z_Construct_UClass_APuercoSPin, &APuercoSPin::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APuercoSPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuercoSPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
