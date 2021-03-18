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

void FMagicLeapARPinState::AfterRead()
{
}

void FMagicLeapARPinState::BeforeDelete()
{
}

void FMagicLeapARPinQuery::AfterRead()
{
}

void FMagicLeapARPinQuery::BeforeDelete()
{
}

void FMagicLeapARPinObjectIdList::AfterRead()
{
}

void FMagicLeapARPinObjectIdList::BeforeDelete()
{
}

void UMagicLeapARPinSaveGame::AfterRead()
{
	USaveGame::AfterRead();

}

void UMagicLeapARPinSaveGame::BeforeDelete()
{
	USaveGame::BeforeDelete();

}

void UMagicLeapARPinContentBindings::AfterRead()
{
	USaveGame::AfterRead();

}

void UMagicLeapARPinContentBindings::BeforeDelete()
{
	USaveGame::BeforeDelete();

}

// Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
// ()
void UMagicLeapARPinComponent::UnPin()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin"));

	UMagicLeapARPinComponent_UnPin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
// ()
// Parameters:
// class UClass*                  InPinDataClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           OutPinDataValid                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UClass* InPinDataClass, bool* OutPinDataValid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData"));

	UMagicLeapARPinComponent_TryGetPinData_Params params;
	params.InPinDataClass = InPinDataClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPinDataValid != nullptr)
		*OutPinDataValid = params.OutPinDataValid;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID"));

	UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
// ()
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToID"));

	UMagicLeapARPinComponent_PinToID_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
// ()
void UMagicLeapARPinComponent::PinToBestFit()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit"));

	UMagicLeapARPinComponent_PinToBestFit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
// ()
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent"));

	UMagicLeapARPinComponent_PinSceneComponent_Params params;
	params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced"));

	UMagicLeapARPinComponent_PinRestoredOrSynced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
// ()
// Parameters:
// class AActor*                  ActorToPin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor"));

	UMagicLeapARPinComponent_PinActor_Params params;
	params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
// ()
// Parameters:
// bool                           bRestoredOrSynced              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature"));

	UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params;
	params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
// ()
void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature"));

	UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
// ()
// Parameters:
// bool                           bDataRestored                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature"));

	UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params params;
	params.bDataRestored = bDataRestored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::IsPinned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned"));

	UMagicLeapARPinComponent_IsPinned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
// ()
// Parameters:
// struct FMagicLeapARPinState    State                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState"));

	UMagicLeapARPinComponent_GetPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
// ()
// Parameters:
// struct FGuid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID"));

	UMagicLeapARPinComponent_GetPinnedPinID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
// ()
// Parameters:
// class UClass*                  PinDataClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMagicLeapARPinSaveGame* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UClass* PinDataClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData"));

	UMagicLeapARPinComponent_GetPinData_Params params;
	params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
// ()
void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync"));

	UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration"));

	UMagicLeapARPinComponent_AttemptPinDataRestoration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapARPinComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(PinDataClass, UClass);
	READ_PTR_FULL(SearchVolume, USphereComponent);
	READ_PTR_FULL(PinnedSceneComponent, USceneComponent);
	READ_PTR_FULL(PinData, UMagicLeapARPinSaveGame);
}

void UMagicLeapARPinComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(PinDataClass);
	DELE_PTR_FULL(SearchVolume);
	DELE_PTR_FULL(PinnedSceneComponent);
	DELE_PTR_FULL(PinData);
}

// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
// ()
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate"));

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
// ()
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate"));

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
// ()
// Parameters:
// struct FMagicLeapARPinQuery    InGlobalFilter                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter"));

	UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params params;
	params.InGlobalFilter = InGlobalFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
// ()
// Parameters:
// int                            UserIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::SetContentBindingSaveGameUserIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex"));

	UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
// ()
// Parameters:
// struct FMagicLeapARPinQuery    Query                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FGuid>           Pins                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins"));

	UMagicLeapARPinFunctionLibrary_QueryARPins_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
// ()
// Parameters:
// struct FString                 PinIdString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   ARPinId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::ParseStringToARPinId(const struct FString& PinIdString, struct FGuid* ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId"));

	UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params params;
	params.PinIdString = PinIdString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ARPinId != nullptr)
		*ARPinId = params.ARPinId;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid"));

	UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
// ()
// Parameters:
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetNumAvailableARPins(int* count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins"));

	UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (count != nullptr)
		*count = params.count;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
// ()
// Parameters:
// struct FMagicLeapARPinQuery    CurrentGlobalFilter            (Parm, OutParm, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter"));

	UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentGlobalFilter != nullptr)
		*CurrentGlobalFilter = params.CurrentGlobalFilter;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapARPinFunctionLibrary::GetContentBindingSaveGameUserIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex"));

	UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
// ()
// Parameters:
// struct FVector                 SearchPoint                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                   PinId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin"));

	UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
// ()
// Parameters:
// int                            NumRequested                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGuid>           Pins                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins"));

	UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params;
	params.NumRequested = NumRequested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
// ()
// Parameters:
// struct FMagicLeapARPinState    State                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapARPinFunctionLibrary::GetARPinStateToString(const struct FMagicLeapARPinState& State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString"));

	UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
// ()
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMagicLeapARPinState    State                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState"));

	UMagicLeapARPinFunctionLibrary_GetARPinState_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
// ()
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace"));

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
// ()
// Parameters:
// struct FGuid                   PinId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           PinFoundInEnvironment          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation"));

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (position != nullptr)
		*position = params.position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
// ()
// Parameters:
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker"));

	UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
// ()
// Parameters:
// MagicLeapARPin_EMagicLeapPassableWorldError ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker"));

	UMagicLeapARPinFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
// ()
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate"));

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
// ()
// Parameters:
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate"));

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
// ()
// Parameters:
// struct FGuid                   ARPinId                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapARPinFunctionLibrary::ARPinIdToString(const struct FGuid& ARPinId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString"));

	UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params params;
	params.ARPinId = ARPinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMagicLeapARPinFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMagicLeapARPinFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
// ()
void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState"));

	AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMagicLeapARPinInfoActorBase::AfterRead()
{
	AActor::AfterRead();

}

void AMagicLeapARPinInfoActorBase::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
// ()
// Parameters:
// bool                           InVisibilityOverride           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride"));

	AMagicLeapARPinRenderer_SetVisibilityOverride_Params params;
	params.InVisibilityOverride = InVisibilityOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMagicLeapARPinRenderer::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ClassToSpawn, UClass);
}

void AMagicLeapARPinRenderer::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ClassToSpawn);
}

void UMagicLeapARPinSettings::AfterRead()
{
	UObject::AfterRead();

}

void UMagicLeapARPinSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
