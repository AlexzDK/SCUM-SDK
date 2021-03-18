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

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// ()
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotify_AkEvent_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify"));

	UAnimNotify_AkEvent_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimNotify_AkEvent_C::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(Event, UAkAudioEvent);
}

void UAnimNotify_AkEvent_C::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(Event);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
