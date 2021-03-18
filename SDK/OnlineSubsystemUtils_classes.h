#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VPD[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy"));
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7ABU[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2"));
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O6U6[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy"));
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6SUR[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2"));
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIKU[0x130];                                   // 0x0050(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.JoinSessionCallbackProxy"));
		return ptr;
	}



	class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary"));
		return ptr;
	}



	bool WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U54R[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy"));
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUL7[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy"));
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SEU[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.LogoutCallbackProxy"));
		return ptr;
	}



	class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData_S8XE[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BeaconConnectionTimeout;                                   // 0x022C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                                  NetDriver;                                                 // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_91PA[0x18];                                    // 0x0238(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineBeacon"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (FullSize[0x0308] - InheritedSize[0x0250])
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x0250(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TRFM[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0258(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KMF8[0xA0];                                    // 0x0268(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineBeaconHost"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x0220(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0238(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineBeaconHostObject"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                                // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N0E6[0xF8];                                    // 0x0030(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8U29[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlinePIESettings"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_TYTC[0x1B0];                                   // 0x0028(0x01B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x01D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHandlingDisconnect;                                       // 0x01D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V180[0x6];                                     // 0x01DA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineSessionClient"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0060 (FullSize[0x02B0] - InheritedSize[0x0250])
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                              BeaconConnection;                                          // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EBeaconConnectionState        ConnectionState;                                           // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_65MI[0x4F];                                    // 0x0261(0x004F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.OnlineBeaconClient"));
		return ptr;
	}



	void ClientOnConnected();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_7Y0C[0x30];                                    // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02E0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                           PendingReservation;                                        // 0x02F0(0x0050) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EClientRequestType            RequestType;                                               // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x0342(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TGUS[0x2D];                                    // 0x0343(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.PartyBeaconClient"));
		return ptr;
	}



	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerRemoveMemberFromReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                     // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LD1W[0x60];                                    // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02B0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TKOV[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02B4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02B8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9NIU[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.PartyBeaconHost"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTeams;                                                  // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumPlayersPerTeam;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TeamAssignmentMethod;                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReservedHostTeamNum;                                       // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ForceTeamNum;                                              // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableRemovalRequests;                                    // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LA02[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x0058(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VZ4S[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.PartyBeaconState"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DFOZ[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.QuitMatchCallbackProxy"));
		return ptr;
	}



	class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FN0C[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy"));
		return ptr;
	}



	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00E8 (FullSize[0x0398] - InheritedSize[0x02B0])
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_52LH[0x30];                                    // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02E0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpectatorReservation                       PendingReservation;                                        // 0x02F0(0x0078) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_ESpectatorClientRequestType   RequestType;                                               // 0x0368(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0369(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x036A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GW1C[0x2D];                                    // 0x036B(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.SpectatorBeaconClient"));
		return ptr;
	}



	void ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       State;                                                     // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0P98[0x60];                                    // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02B0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9D6N[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02B4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02B8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5244[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.SpectatorBeaconHost"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5106[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpectatorReservation>               Reservations;                                              // 0x0040(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZNHB[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.SpectatorBeaconState"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.TestBeaconClient"));
		return ptr;
	}



	void ServerPong();
	void ClientPing();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.TestBeaconHost"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary"));
		return ptr;
	}



	void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0060 (FullSize[0x0720] - InheritedSize[0x06C0])
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData_HOVC[0x60];                                    // 0x06C0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.VoipListenerSynthComponent"));
		return ptr;
	}



	bool IsIdling();
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.IpConnection
// 0x00A0 (FullSize[0x1B90] - InheritedSize[0x1AF0])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_CUO6[0x50];                                    // 0x1AF0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SocketErrorDisconnectDelay;                                // 0x1B40(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6GAI[0x4C];                                    // 0x1B44(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.IpConnection"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0070 (FullSize[0x07B8] - InheritedSize[0x0748])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0748(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9SC[0x3];                                     // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x074C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JIYD[0xC];                                     // 0x0750(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                     // 0x075C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                        // 0x0760(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                     // 0x0764(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                        // 0x0768(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CR3P[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MaxSecondsInReceive;                                       // 0x0770(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NbPacketsBetweenReceiveTimeTest;                           // 0x0778(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ResolutionConnectionTimeout;                               // 0x077C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6T97[0x38];                                    // 0x0780(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.IpNetDriver"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.AchievementBlueprintLibrary"));
		return ptr;
	}



	void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* progress);
	void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QDDA[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy"));
		return ptr;
	}



	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FNDH[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy"));
		return ptr;
	}



	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float progress, int UserTag);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVSH[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.ConnectionCallbackProxy"));
		return ptr;
	}



	class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CFUG[0x48];                                    // 0x0050(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.CreateSessionCallbackProxy"));
		return ptr;
	}



	class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YAYM[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.DestroySessionCallbackProxy"));
		return ptr;
	}



	class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6VYG[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.EndMatchCallbackProxy"));
		return ptr;
	}



	class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHGG[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.EndTurnCallbackProxy"));
		return ptr;
	}



	class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNMC[0x40];                                    // 0x0050(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.FindSessionsCallbackProxy"));
		return ptr;
	}



	struct FString GetServerName(const struct FBlueprintSessionResult& Result);
	int GetPingInMs(const struct FBlueprintSessionResult& Result);
	int GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZ8H[0x38];                                    // 0x0050(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy"));
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7DO[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy"));
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
	void AfterRead();
	void BeforeDelete();

};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OK0P[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2"));
		return ptr;
	}



	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
