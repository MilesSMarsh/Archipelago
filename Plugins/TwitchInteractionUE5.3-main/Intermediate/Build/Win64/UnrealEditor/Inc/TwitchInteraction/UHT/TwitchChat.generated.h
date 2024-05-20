// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwitchChat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTwitchIrcMessage;
#ifdef TWITCHINTERACTION_TwitchChat_generated_h
#error "TwitchChat.generated.h already included, missing '#pragma once' in TwitchChat.h"
#endif
#define TWITCHINTERACTION_TwitchChat_generated_h

#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTwitchIrcMessage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TWITCHINTERACTION_API UScriptStruct* StaticStruct<struct FTwitchIrcMessage>();

#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_60_DELEGATE \
TWITCHINTERACTION_API void FOnCommandReceived_DelegateWrapper(const FScriptDelegate& OnCommandReceived, const FString& commandName, TArray<FString> const& commandOptions, const FString& senderUsername);


#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_61_DELEGATE \
TWITCHINTERACTION_API void FMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& MessageReceived, FTwitchIrcMessage const& message);


#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_SPARSE_DATA
#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterCommand); \
	DECLARE_FUNCTION(execRegisterCommand); \
	DECLARE_FUNCTION(execSetupCommandCharacters); \
	DECLARE_FUNCTION(execAuthenticateTwitchChat); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execSetUserInfo);


#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_ACCESSORS
#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwitchChat(); \
	friend struct Z_Construct_UClass_UTwitchChat_Statics; \
public: \
	DECLARE_CLASS(UTwitchChat, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchInteraction"), NO_API) \
	DECLARE_SERIALIZER(UTwitchChat)


#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitchChat(UTwitchChat&&); \
	NO_API UTwitchChat(const UTwitchChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitchChat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitchChat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwitchChat) \
	NO_API virtual ~UTwitchChat();


#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_63_PROLOG
#define FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_SPARSE_DATA \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_ACCESSORS \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_INCLASS_NO_PURE_DECLS \
	FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHINTERACTION_API UClass* StaticClass<class UTwitchChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samue_OneDrive_Desktop_Archipelagottt_Plugins_TwitchInteractionUE5_3_main_Source_TwitchInteraction_Public_TwitchChat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
