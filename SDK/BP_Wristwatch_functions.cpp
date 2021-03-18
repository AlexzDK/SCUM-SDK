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

// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
// ()
void ABP_Wristwatch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay"));

	ABP_Wristwatch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick
// ()
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wristwatch_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wristwatch.BP_Wristwatch_C.ReceiveTick"));

	ABP_Wristwatch_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
// ()
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wristwatch_C::SetDisplayBrightness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness"));

	ABP_Wristwatch_C_SetDisplayBrightness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Wristwatch_C::ExecuteUbergraph_BP_Wristwatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch"));

	ABP_Wristwatch_C_ExecuteUbergraph_BP_Wristwatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Wristwatch_C::AfterRead()
{
	AWristwatch::AfterRead();

}

void ABP_Wristwatch_C::BeforeDelete()
{
	AWristwatch::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
