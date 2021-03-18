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

void FAutoCompleteCommand::AfterRead()
{
}

void FAutoCompleteCommand::BeforeDelete()
{
}

void FGameModeName::AfterRead()
{
}

void FGameModeName::BeforeDelete()
{
}

void UGameSessionSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameSessionSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGeneralEngineSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGeneralEngineSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGeneralProjectSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGeneralProjectSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UHudSettings::AfterRead()
{
	UObject::AfterRead();

}

void UHudSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UConsoleSettings::AfterRead()
{
	UObject::AfterRead();

}

void UConsoleSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// ()
// Parameters:
// bool                           bSkipFirstPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1"));

	UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params;
	params.bSkipFirstPlayer = bSkipFirstPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1"));

	UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// ()
// Parameters:
// class UGameMapsSettings*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.GetGameMapsSettings"));

	UGameMapsSettings_GetGameMapsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameMapsSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameMapsSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameNetworkManagerSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameNetworkManagerSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
