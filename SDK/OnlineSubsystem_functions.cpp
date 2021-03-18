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

void FInAppPurchaseProductRequest::AfterRead()
{
}

void FInAppPurchaseProductRequest::BeforeDelete()
{
}

void FInAppPurchaseRestoreInfo::AfterRead()
{
}

void FInAppPurchaseRestoreInfo::BeforeDelete()
{
}

void FInAppPurchaseProductInfo::AfterRead()
{
}

void FInAppPurchaseProductInfo::BeforeDelete()
{
}

void FNamedInterface::AfterRead()
{
	READ_PTR_FULL(InterfaceObject, UObject);
}

void FNamedInterface::BeforeDelete()
{
	DELE_PTR_FULL(InterfaceObject);
}

void FNamedInterfaceDef::AfterRead()
{
}

void FNamedInterfaceDef::BeforeDelete()
{
}

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// ()
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDidBecomeActive               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedMatchInterface::OnMatchReceivedTurn(const struct FString& Match, bool bDidBecomeActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn"));

	UTurnBasedMatchInterface_OnMatchReceivedTurn_Params params;
	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// ()
// Parameters:
// struct FString                 Match                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTurnBasedMatchInterface::OnMatchEnded(const struct FString& Match)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded"));

	UTurnBasedMatchInterface_OnMatchEnded_Params params;
	params.Match = Match;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTurnBasedMatchInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTurnBasedMatchInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNamedInterfaces::AfterRead()
{
	UObject::AfterRead();

}

void UNamedInterfaces::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
