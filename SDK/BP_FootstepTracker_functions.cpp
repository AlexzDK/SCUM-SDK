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

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture
// ()
// Parameters:
// class UCanvasRenderTarget2D*   RenderTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               DrawSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AccuracyDivider                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FootstepTracker_C::DrawToTexture(class UCanvasRenderTarget2D* RenderTarget, const struct FVector2D& DrawSize, class UMaterialInstanceDynamic* Material, float Rotation, float AccuracyDivider, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture"));

	ABP_FootstepTracker_C_DrawToTexture_Params params;
	params.RenderTarget = RenderTarget;
	params.DrawSize = DrawSize;
	params.Material = Material;
	params.Rotation = Rotation;
	params.AccuracyDivider = AccuracyDivider;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom
// ()
void ABP_FootstepTracker_C::Blitzkrieg_Boom()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom"));

	ABP_FootstepTracker_C_Blitzkrieg_Boom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick
// ()
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FootstepTracker_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick"));

	ABP_FootstepTracker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep
// ()
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Flip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          footstepNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FootstepTracker_C::DrawFootstep(const struct FVector& Location, bool Flip, float Rotation, float footstepNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep"));

	ABP_FootstepTracker_C_DrawFootstep_Params params;
	params.Location = Location;
	params.Flip = Flip;
	params.Rotation = Rotation;
	params.footstepNumber = footstepNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay
// ()
void ABP_FootstepTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay"));

	ABP_FootstepTracker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FootstepTracker_C::ExecuteUbergraph_BP_FootstepTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker"));

	ABP_FootstepTracker_C_ExecuteUbergraph_BP_FootstepTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FootstepTracker_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(FoliagePositionMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(FoliageOffsetMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(FootstepsPositionMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(FootstepsOffsetMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(Character, ACharacter);
	READ_PTR_FULL(FoliageInfluenceMaterial, UMaterialInstanceDynamic);
}

void ABP_FootstepTracker_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(FoliagePositionMaterial);
	DELE_PTR_FULL(FoliageOffsetMaterial);
	DELE_PTR_FULL(FootstepsPositionMaterial);
	DELE_PTR_FULL(FootstepsOffsetMaterial);
	DELE_PTR_FULL(Character);
	DELE_PTR_FULL(FoliageInfluenceMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
