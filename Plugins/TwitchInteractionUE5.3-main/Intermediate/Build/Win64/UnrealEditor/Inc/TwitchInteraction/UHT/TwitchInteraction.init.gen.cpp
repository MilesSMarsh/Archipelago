// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitchInteraction_init() {}
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature();
	TWITCHINTERACTION_API UFunction* Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TwitchInteraction;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TwitchInteraction()
	{
		if (!Z_Registration_Info_UPackage__Script_TwitchInteraction.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_BitsBadgeEventReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_BitsEventReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_MessageReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_OnCommandReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_RedeemEventReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_SubscribeEventReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_TokenReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_UserInfoReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TwitchInteraction_ValidateTokenReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TwitchInteraction",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEDB36886,
				0x57DDADA6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TwitchInteraction.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TwitchInteraction.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TwitchInteraction(Z_Construct_UPackage__Script_TwitchInteraction, TEXT("/Script/TwitchInteraction"), Z_Registration_Info_UPackage__Script_TwitchInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEDB36886, 0x57DDADA6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
