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

// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
// ()
void AMagicLeapARPinInfoActor_C::UpdatePinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState"));

	AMagicLeapARPinInfoActor_C_UpdatePinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
// ()
void AMagicLeapARPinInfoActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript"));

	AMagicLeapARPinInfoActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
// ()
void AMagicLeapARPinInfoActor_C::OnUpdateARPinState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState"));

	AMagicLeapARPinInfoActor_C_OnUpdateARPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
// ()
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMagicLeapARPinInfoActor_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick"));

	AMagicLeapARPinInfoActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMagicLeapARPinInfoActor_C::ExecuteUbergraph_MagicLeapARPinInfoActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor"));

	AMagicLeapARPinInfoActor_C_ExecuteUbergraph_MagicLeapARPinInfoActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMagicLeapARPinInfoActor_C::AfterRead()
{
	AMagicLeapARPinInfoActorBase::AfterRead();

	READ_PTR_FULL(Right, UStaticMeshComponent);
	READ_PTR_FULL(Forward, UStaticMeshComponent);
	READ_PTR_FULL(Up, UStaticMeshComponent);
	READ_PTR_FULL(ValidRadiusVisualizer, USphereComponent);
	READ_PTR_FULL(AxisRoot, USceneComponent);
	READ_PTR_FULL(VisualizerRoot, USceneComponent);
	READ_PTR_FULL(TypeValue, UTextRenderComponent);
	READ_PTR_FULL(TransErrValue, UTextRenderComponent);
	READ_PTR_FULL(RotErrValue, UTextRenderComponent);
	READ_PTR_FULL(ConfidenceValue, UTextRenderComponent);
	READ_PTR_FULL(TransErrLabel, UTextRenderComponent);
	READ_PTR_FULL(RotErrLabel, UTextRenderComponent);
	READ_PTR_FULL(ConfidenceLabel, UTextRenderComponent);
	READ_PTR_FULL(PinIDValue, UTextRenderComponent);
	READ_PTR_FULL(InfoRoot, USceneComponent);
	READ_PTR_FULL(Root, USceneComponent);
}

void AMagicLeapARPinInfoActor_C::BeforeDelete()
{
	AMagicLeapARPinInfoActorBase::BeforeDelete();

	DELE_PTR_FULL(Right);
	DELE_PTR_FULL(Forward);
	DELE_PTR_FULL(Up);
	DELE_PTR_FULL(ValidRadiusVisualizer);
	DELE_PTR_FULL(AxisRoot);
	DELE_PTR_FULL(VisualizerRoot);
	DELE_PTR_FULL(TypeValue);
	DELE_PTR_FULL(TransErrValue);
	DELE_PTR_FULL(RotErrValue);
	DELE_PTR_FULL(ConfidenceValue);
	DELE_PTR_FULL(TransErrLabel);
	DELE_PTR_FULL(RotErrLabel);
	DELE_PTR_FULL(ConfidenceLabel);
	DELE_PTR_FULL(PinIDValue);
	DELE_PTR_FULL(InfoRoot);
	DELE_PTR_FULL(Root);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
