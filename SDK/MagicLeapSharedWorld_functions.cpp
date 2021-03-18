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

void FMagicLeapSharedWorldPinData::AfterRead()
{
}

void FMagicLeapSharedWorldPinData::BeforeDelete()
{
}

void FMagicLeapSharedWorldLocalData::AfterRead()
{
}

void FMagicLeapSharedWorldLocalData::BeforeDelete()
{
}

void FMagicLeapSharedWorldAlignmentTransforms::AfterRead()
{
}

void FMagicLeapSharedWorldAlignmentTransforms::BeforeDelete()
{
}

void FMagicLeapSharedWorldSharedData::AfterRead()
{
}

void FMagicLeapSharedWorldSharedData::BeforeDelete()
{
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
// ()
// Parameters:
// struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData"));

	AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params params;
	params.LocalWorldReplicationData = LocalWorldReplicationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
// ()
// Parameters:
// struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms"));

	AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params params;
	params.InAlignmentTransforms = InAlignmentTransforms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne"));

	AMagicLeapSharedWorldPlayerController_IsChosenOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
// ()
// Parameters:
// bool                           bChosenOne                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne"));

	AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params params;
	params.bChosenOne = bChosenOne;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
// ()
void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData"));

	AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer"));

	AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AMagicLeapSharedWorldPlayerController::AfterRead()
{
	APlayerController::AfterRead();

}

void AMagicLeapSharedWorldPlayerController::BeforeDelete()
{
	APlayerController::BeforeDelete();

}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients"));

	AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
// ()
void AMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne"));

	AMagicLeapSharedWorldGameMode_SelectChosenOne_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
// ()
void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature"));

	AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
// ()
// Parameters:
// struct FMagicLeapSharedWorldSharedData NewSharedWorldData             (Parm, OutParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData"));

	AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = params.NewSharedWorldData;

}


void AMagicLeapSharedWorldGameMode::AfterRead()
{
	AGameMode::AfterRead();

	READ_PTR_FULL(ChosenOne, AMagicLeapSharedWorldPlayerController);
}

void AMagicLeapSharedWorldGameMode::BeforeDelete()
{
	AGameMode::BeforeDelete();

	DELE_PTR_FULL(ChosenOne);
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
// ()
void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData"));

	AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
// ()
void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms"));

	AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
// ()
void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature"));

	AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform"));

	AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AMagicLeapSharedWorldGameState::AfterRead()
{
	AGameState::AfterRead();

}

void AMagicLeapSharedWorldGameState::BeforeDelete()
{
	AGameState::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
