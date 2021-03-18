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

// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc
// ()
void ABP_Dropping_01_C::OffsetTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc"));

	ABP_Dropping_01_C_OffsetTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc
// ()
void ABP_Dropping_01_C::OffsetTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc"));

	ABP_Dropping_01_C_OffsetTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// ()
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Dropping_01_C::BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));

	ABP_Dropping_01_C_BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy
// ()
void ABP_Dropping_01_C::AutoDestroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy"));

	ABP_Dropping_01_C_AutoDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay
// ()
void ABP_Dropping_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay"));

	ABP_Dropping_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Dropping_01_C::ExecuteUbergraph_BP_Dropping_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01"));

	ABP_Dropping_01_C_ExecuteUbergraph_BP_Dropping_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Dropping_01_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MyConstraintComp1, UPhysicsConstraintComponent);
	READ_PTR_FULL(MyConstraintComp, UPhysicsConstraintComponent);
	READ_PTR_FULL(Shit_03, UStaticMeshComponent);
	READ_PTR_FULL(Shit_02, UStaticMeshComponent);
	READ_PTR_FULL(Shit_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
	READ_PTR_FULL(OffsetTimeline, UTimelineComponent);
	READ_PTR_FULL(ParticlesToSpawn, UParticleSystem);
	READ_PTR_FULL(DecalToSpawn, UMaterialInterface);
	READ_PTR_FULL(SoundToSpawn, USoundBase);
}

void ABP_Dropping_01_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MyConstraintComp1);
	DELE_PTR_FULL(MyConstraintComp);
	DELE_PTR_FULL(Shit_03);
	DELE_PTR_FULL(Shit_02);
	DELE_PTR_FULL(Shit_01);
	DELE_PTR_FULL(SharedRoot);
	DELE_PTR_FULL(OffsetTimeline);
	DELE_PTR_FULL(ParticlesToSpawn);
	DELE_PTR_FULL(DecalToSpawn);
	DELE_PTR_FULL(SoundToSpawn);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
