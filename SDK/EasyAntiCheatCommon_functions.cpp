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

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// ()
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage"));

	UEasyAntiCheatNetComponent_ServerMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// ()
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage"));

	UEasyAntiCheatNetComponent_ClientMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEasyAntiCheatNetComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UEasyAntiCheatNetComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
