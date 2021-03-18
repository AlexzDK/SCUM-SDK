// Name: S, Version: N

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FPIELoginSettingsInternal::AfterRead()
{
}

void FPIELoginSettingsInternal::BeforeDelete()
{
}

void FPlayerReservation::AfterRead()
{
}

void FPlayerReservation::BeforeDelete()
{
}

void FPartyReservation::AfterRead()
{
}

void FPartyReservation::BeforeDelete()
{
}

void FSpectatorReservation::AfterRead()
{
}

void FSpectatorReservation::BeforeDelete()
{
}

void FBlueprintSessionResult::AfterRead()
{
}

void FBlueprintSessionResult::BeforeDelete()
{
}

void FInAppPurchaseReceiptInfo2::AfterRead()
{
}

void FInAppPurchaseReceiptInfo2::BeforeDelete()
{
}

void FOnlineProxyStoreOffer::AfterRead()
{
}

void FOnlineProxyStoreOffer::BeforeDelete()
{
}

void FInAppPurchaseRestoreInfo2::AfterRead()
{
}

void FInAppPurchaseRestoreInfo2::BeforeDelete()
{
}

void FInAppPurchaseReceiptInfo::AfterRead()
{
}

void FInAppPurchaseReceiptInfo::BeforeDelete()
{
}

void FInAppPurchaseProductInfo2::AfterRead()
{
}

void FInAppPurchaseProductInfo2::BeforeDelete()
{
}

void FInAppPurchaseProductRequest2::AfterRead()
{
}

void FInAppPurchaseProductRequest2::BeforeDelete()
{
}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery"));

	UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseQueryCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseQueryCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseQueryCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseQueryCallbackProxy2* UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery"));

	UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params params;
	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseQueryCallbackProxy2::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseQueryCallbackProxy2::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// ()
// Parameters:
// TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore"));

	UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseRestoreCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseRestoreCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
// ()
// Parameters:
// TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseRestoreCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseRestoreCallbackProxy2* UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore"));

	UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params params;
	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseRestoreCallbackProxy2::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseRestoreCallbackProxy2::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession"));

	UJoinSessionCallbackProxy_JoinSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UJoinSessionCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UJoinSessionCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StatValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger"));

	ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULeaderboardBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULeaderboardBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush"));

	ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params;
	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULeaderboardFlushCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void ULeaderboardFlushCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery"));

	ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params;
	params.PlayerController = PlayerController;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULeaderboardQueryCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void ULeaderboardQueryCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutCallbackProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout"));

	ULogoutCallbackProxy_Logout_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULogoutCallbackProxy::AfterRead()
{
	UBlueprintAsyncActionBase::AfterRead();

}

void ULogoutCallbackProxy::BeforeDelete()
{
	UBlueprintAsyncActionBase::BeforeDelete();

}

void AOnlineBeacon::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NetDriver, UNetDriver);
}

void AOnlineBeacon::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NetDriver);
}

void AOnlineBeaconHost::AfterRead()
{
	AOnlineBeacon::AfterRead();

}

void AOnlineBeaconHost::BeforeDelete()
{
	AOnlineBeacon::BeforeDelete();

}

void AOnlineBeaconHostObject::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ClientBeaconActorClass, UClass);
}

void AOnlineBeaconHostObject::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ClientBeaconActorClass);
}

void UOnlineEngineInterfaceImpl::AfterRead()
{
	UOnlineEngineInterface::AfterRead();

}

void UOnlineEngineInterfaceImpl::BeforeDelete()
{
	UOnlineEngineInterface::BeforeDelete();

}

void UOnlinePIESettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UOnlinePIESettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UOnlineSessionClient::AfterRead()
{
	UOnlineSession::AfterRead();

}

void UOnlineSessionClient::BeforeDelete()
{
	UOnlineSession::BeforeDelete();

}

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// ()
void AOnlineBeaconClient::ClientOnConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected"));

	AOnlineBeaconClient_ClientOnConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AOnlineBeaconClient::AfterRead()
{
	AOnlineBeacon::AfterRead();

	READ_PTR_FULL(BeaconOwner, AOnlineBeaconHostObject);
	READ_PTR_FULL(BeaconConnection, UNetConnection);
}

void AOnlineBeaconClient::BeforeDelete()
{
	AOnlineBeacon::BeforeDelete();

	DELE_PTR_FULL(BeaconOwner);
	DELE_PTR_FULL(BeaconConnection);
}

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// ()
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APartyBeaconClient::ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest"));

	APartyBeaconClient_ServerUpdateReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// ()
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       Reservation                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APartyBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest"));

	APartyBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
// ()
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void APartyBeaconClient::ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest"));

	APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params params;
	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// ()
// Parameters:
// struct FUniqueNetIdRepl        PartyLeader                    (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest"));

	APartyBeaconClient_ServerCancelReservationRequest_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// ()
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates"));

	APartyBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// ()
void APartyBeaconClient::ClientSendReservationFull()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull"));

	APartyBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// ()
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse"));

	APartyBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// ()
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse"));

	APartyBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void APartyBeaconClient::AfterRead()
{
	AOnlineBeaconClient::AfterRead();

}

void APartyBeaconClient::BeforeDelete()
{
	AOnlineBeaconClient::BeforeDelete();

}

void APartyBeaconHost::AfterRead()
{
	AOnlineBeaconHostObject::AfterRead();

	READ_PTR_FULL(State, UPartyBeaconState);
}

void APartyBeaconHost::BeforeDelete()
{
	AOnlineBeaconHostObject::BeforeDelete();

	DELE_PTR_FULL(State);
}

void UPartyBeaconState::AfterRead()
{
	UObject::AfterRead();

}

void UPartyBeaconState::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch"));

	UQuitMatchCallbackProxy_QuitMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UQuitMatchCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UQuitMatchCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI"));

	UShowLoginUICallbackProxy_ShowExternalLoginUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UShowLoginUICallbackProxy::AfterRead()
{
	UBlueprintAsyncActionBase::AfterRead();

}

void UShowLoginUICallbackProxy::BeforeDelete()
{
	UBlueprintAsyncActionBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
// ()
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSpectatorReservation   Reservation                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ASpectatorBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest"));

	ASpectatorBeaconClient_ServerReservationRequest_Params params;
	params.SessionId = SessionId;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
// ()
// Parameters:
// struct FUniqueNetIdRepl        Spectator                      (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpectatorBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest"));

	ASpectatorBeaconClient_ServerCancelReservationRequest_Params params;
	params.Spectator = Spectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
// ()
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpectatorBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates"));

	ASpectatorBeaconClient_ClientSendReservationUpdates_Params params;
	params.NumRemainingReservations = NumRemainingReservations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
// ()
void ASpectatorBeaconClient::ClientSendReservationFull()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull"));

	ASpectatorBeaconClient_ClientSendReservationFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
// ()
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpectatorBeaconClient::ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse"));

	ASpectatorBeaconClient_ClientReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
// ()
// Parameters:
// TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpectatorBeaconClient::ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse"));

	ASpectatorBeaconClient_ClientCancelReservationResponse_Params params;
	params.ReservationResponse = ReservationResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ASpectatorBeaconClient::AfterRead()
{
	AOnlineBeaconClient::AfterRead();

}

void ASpectatorBeaconClient::BeforeDelete()
{
	AOnlineBeaconClient::BeforeDelete();

}

void ASpectatorBeaconHost::AfterRead()
{
	AOnlineBeaconHostObject::AfterRead();

	READ_PTR_FULL(State, USpectatorBeaconState);
}

void ASpectatorBeaconHost::BeforeDelete()
{
	AOnlineBeaconHostObject::BeforeDelete();

	DELE_PTR_FULL(State);
}

void USpectatorBeaconState::AfterRead()
{
	UObject::AfterRead();

}

void USpectatorBeaconState::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// ()
void ATestBeaconClient::ServerPong()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong"));

	ATestBeaconClient_ServerPong_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// ()
void ATestBeaconClient::ClientPing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing"));

	ATestBeaconClient_ClientPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ATestBeaconClient::AfterRead()
{
	AOnlineBeaconClient::AfterRead();

}

void ATestBeaconClient::BeforeDelete()
{
	AOnlineBeaconClient::BeforeDelete();

}

void ATestBeaconHost::AfterRead()
{
	AOnlineBeaconHostObject::AfterRead();

}

void ATestBeaconHost::BeforeDelete()
{
	AOnlineBeaconHostObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject"));

	UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PlayerDisplayName              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName"));

	UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex"));

	UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;

}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn"));

	UTurnBasedBlueprintLibrary_GetIsMyTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;

}


void UTurnBasedBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTurnBasedBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVoipListenerSynthComponent::IsIdling()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling"));

	UVoipListenerSynthComponent_IsIdling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVoipListenerSynthComponent::AfterRead()
{
	USynthComponent::AfterRead();

}

void UVoipListenerSynthComponent::BeforeDelete()
{
	USynthComponent::BeforeDelete();

}

void UIpConnection::AfterRead()
{
	UNetConnection::AfterRead();

}

void UIpConnection::BeforeDelete()
{
	UNetConnection::BeforeDelete();

}

void UIpNetDriver::AfterRead()
{
	UNetDriver::AfterRead();

}

void UIpNetDriver::BeforeDelete()
{
	UNetDriver::BeforeDelete();

}

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress"));

	UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (progress != nullptr)
		*progress = params.progress;

}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementID                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Title                          (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   LockedDescription              (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   UnlockedDescription            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription"));

	UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;

}


void UAchievementBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAchievementBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements"));

	UAchievementQueryCallbackProxy_CacheAchievements_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions"));

	UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAchievementQueryCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UAchievementQueryCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UserTag                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float progress, int UserTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress"));

	UAchievementWriteCallbackProxy_WriteAchievementProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.progress = progress;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAchievementWriteCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UAchievementWriteCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService"));

	UConnectionCallbackProxy_ConnectToService_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UConnectionCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UConnectionCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession"));

	UCreateSessionCallbackProxy_CreateSession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCreateSessionCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UCreateSessionCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession"));

	UDestroySessionCallbackProxy_DestroySession_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDestroySessionCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UDestroySessionCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndMatchCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch"));

	UEndMatchCallbackProxy_EndMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchID = MatchID;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEndMatchCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UEndMatchCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MatchID                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// class UEndTurnCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn"));

	UEndTurnCallbackProxy_EndTurn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UEndTurnCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UEndTurnCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// ()
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName"));

	UFindSessionsCallbackProxy_GetServerName_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// ()
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs"));

	UFindSessionsCallbackProxy_GetPingInMs_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// ()
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers"));

	UFindSessionsCallbackProxy_GetMaxPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// ()
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers"));

	UFindSessionsCallbackProxy_GetCurrentPlayers_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions"));

	UFindSessionsCallbackProxy_FindSessions_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFindSessionsCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UFindSessionsCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch"));

	UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFindTurnBasedMatchCallbackProxy::AfterRead()
{
	UOnlineBlueprintCallProxyBase::AfterRead();

}

void UFindTurnBasedMatchCallbackProxy::BeforeDelete()
{
	UOnlineBlueprintCallProxyBase::BeforeDelete();

}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase"));

	UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params;
	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases"));

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned"));

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
// ()
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInAppPurchaseProductRequest2 ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UInAppPurchaseCallbackProxy2* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInAppPurchaseCallbackProxy2* UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase"));

	UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params params;
	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInAppPurchaseCallbackProxy2::AfterRead()
{
	UObject::AfterRead();

}

void UInAppPurchaseCallbackProxy2::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
