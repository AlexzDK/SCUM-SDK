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

// Function BP_Prisoner.BP_Prisoner_C.UpdateHair
// ()
void ABP_Prisoner_C::UpdateHair()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.UpdateHair"));

	ABP_Prisoner_C_UpdateHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange
// ()
// Parameters:
// float                          SearchDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Prisoner_C*>  OtherPlayers                   (Parm, OutParm)
void ABP_Prisoner_C::FindOtherPlayersInRange(float SearchDistance, TArray<class ABP_Prisoner_C*>* OtherPlayers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange"));

	ABP_Prisoner_C_FindOtherPlayersInRange_Params params;
	params.SearchDistance = SearchDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OtherPlayers != nullptr)
		*OtherPlayers = params.OtherPlayers;

}


// Function BP_Prisoner.BP_Prisoner_C.DebugPrint
// ()
// Parameters:
// struct FString                 MessageString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 ValueString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prisoner_C::DebugPrint(const struct FString& MessageString, const struct FString& ValueString, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.DebugPrint"));

	ABP_Prisoner_C_DebugPrint_Params params;
	params.MessageString = MessageString;
	params.ValueString = ValueString;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove
// ()
// Parameters:
// float                          TraceDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          IKOffset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prisoner_C::IKFootTraceToRemove(float TraceDistance, const struct FName& Socket, float* IKOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove"));

	ABP_Prisoner_C_IKFootTraceToRemove_Params params;
	params.TraceDistance = TraceDistance;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IKOffset != nullptr)
		*IKOffset = params.IKOffset;

}


// Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript
// ()
void ABP_Prisoner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript"));

	ABP_Prisoner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.ReceiveTick
// ()
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prisoner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.ReceiveTick"));

	ABP_Prisoner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName
// ()
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_Prisoner_C::InitTextMeshFromName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName"));

	ABP_Prisoner_C_InitTextMeshFromName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.DrawFootstep
// ()
// Parameters:
// bool                           Flip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Prisoner_C::DrawFootstep(bool Flip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.DrawFootstep"));

	ABP_Prisoner_C_DrawFootstep_Params params;
	params.Flip = Flip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.UpdateHairVisuals
// ()
void ABP_Prisoner_C::UpdateHairVisuals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.UpdateHairVisuals"));

	ABP_Prisoner_C_UpdateHairVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prisoner_C::ExecuteUbergraph_BP_Prisoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner"));

	ABP_Prisoner_C_ExecuteUbergraph_BP_Prisoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Prisoner_C::AfterRead()
{
	APrisoner::AfterRead();

	READ_PTR_FULL(Waist, USkeletalMeshComponent);
	READ_PTR_FULL(FPV_MountedLeaningStanceAimingDownTheSights, UPrisonerFirstPersonVehicleAimingSubviewComponent);
	READ_PTR_FULL(FPV_MountedDefaultStanceAimingDownTheSights, UPrisonerFirstPersonVehicleAimingSubviewComponent);
	READ_PTR_FULL(FPV_MountedLeaningStanceAiming, UPrisonerFirstPersonVehicleAimingSubviewComponent);
	READ_PTR_FULL(FPV_MountedDefaultStanceAiming, UPrisonerFirstPersonVehicleAimingSubviewComponent);
	READ_PTR_FULL(FPViewsMouintedAiming, USceneComponent);
	READ_PTR_FULL(TPV_Throwing, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(FPV_Lying, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_Mounted, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FacialHairMesh, USkeletalMeshComponent);
	READ_PTR_FULL(TPV_Swimming, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(HairMesh, USkeletalMeshComponent);
	READ_PTR_FULL(RightBreastCensor, UStaticMeshComponent);
	READ_PTR_FULL(LeftBreastCensor, UStaticMeshComponent);
	READ_PTR_FULL(DangerDetectionSphere, USphereComponent);
	READ_PTR_FULL(PenisCensor, UStaticMeshComponent);
	READ_PTR_FULL(GenitalsCensor, UStaticMeshComponent);
	READ_PTR_FULL(Neck, USkeletalMeshComponent);
	READ_PTR_FULL(Penis, USkeletalMeshComponent);
	READ_PTR_FULL(VoiceAudio, UVoiceAudioComponent);
	READ_PTR_FULL(VoiceChat, UVoiceChatComponent);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleFoot_R, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleFoot_L, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleHead, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleLeg_R, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleLeg_L, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleHand_R, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(MeleeAttackCollisionCapsuleHand_L, UMeleeAttackCollisionCapsule);
	READ_PTR_FULL(BulletFlyBySoundCollision, USphereComponent);
	READ_PTR_FULL(VisionEffectsComponent, UVisionEffectsComponent);
	READ_PTR_FULL(LeavesComponent, UParticleSystemComponent);
	READ_PTR_FULL(Eyewear, UStaticMeshComponent);
	READ_PTR_FULL(UpperHead, UStaticMeshComponent);
	READ_PTR_FULL(LowerHead, UStaticMeshComponent);
	READ_PTR_FULL(Chip, UStaticMeshComponent);
	READ_PTR_FULL(LowerMouth, UStaticMeshComponent);
	READ_PTR_FULL(UpperMouth, UStaticMeshComponent);
	READ_PTR_FULL(REye, UStaticMeshComponent);
	READ_PTR_FULL(LEye, UStaticMeshComponent);
	READ_PTR_FULL(UpperHeadSkeletal, USkeletalMeshComponent);
	READ_PTR_FULL(BodyArmor, USkeletalMeshComponent);
	READ_PTR_FULL(Backpack, USkeletalMeshComponent);
	READ_PTR_FULL(Feet, USkeletalMeshComponent);
	READ_PTR_FULL(Legs, USkeletalMeshComponent);
	READ_PTR_FULL(head, USkeletalMeshComponent);
	READ_PTR_FULL(Hands, USkeletalMeshComponent);
	READ_PTR_FULL(Arms, USkeletalMeshComponent);
	READ_PTR_FULL(Torso, USkeletalMeshComponent);
	READ_PTR_FULL(TPV_Defecating, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(FPV_ClimbingWindow, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(TPV_ClimbingWindow, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_Diving, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPViews, USceneComponent);
	READ_PTR_FULL(TPV_NarrowLadder, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_Ragdoll, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(NameWidget, UWidgetComponent);
	READ_PTR_FULL(TPV_StandingMelee, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(FPV_StandingMelee, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_ProneAimingDownTheSights, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_CrouchingAimingDownTheSights, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_StandingAimingDownTheSights, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_ProneAiming, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_CrouchingAiming, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_StandingAiming, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPViewsAiming, USceneComponent);
	READ_PTR_FULL(TPV_ProneAiming, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_CrouchingAiming, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_StandingAiming, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(FPV_Prone, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_Crouching, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPV_Standing, UPrisonerFirstPersonSubviewComponent);
	READ_PTR_FULL(FPViews, USceneComponent);
	READ_PTR_FULL(TPV_Standing, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_Prone, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(TPV_Crouching, UPrisonerThirdPersonSubviewComponent);
	READ_PTR_FULL(FirstPersonView, UPrisonerFirstPersonViewComponent);
	READ_PTR_FULL(ThirdPersonView, UPrisonerThirdPersonViewComponent);
	READ_PTR_FULL(ShortHairCurve, UCurveFloat);
	READ_PTR_FULL(FootstepTracker, ABP_FootstepTracker_C);
	READ_PTR_FULL(BodyToMove, UPrimitiveComponent);
	READ_PTR_FULL(MediumHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(MediumHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(LongHairCurve, UCurveFloat);
	READ_PTR_FULL(LongHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(LongHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(ShortFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(MediumFacialHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurve, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurvePDO, UCurveFloat);
	READ_PTR_FULL(LongFacialHairCurveTopOpacity, UCurveFloat);
	READ_PTR_FULL(AfroMediumHairCurve, UCurveFloat);
}

void ABP_Prisoner_C::BeforeDelete()
{
	APrisoner::BeforeDelete();

	DELE_PTR_FULL(Waist);
	DELE_PTR_FULL(FPV_MountedLeaningStanceAimingDownTheSights);
	DELE_PTR_FULL(FPV_MountedDefaultStanceAimingDownTheSights);
	DELE_PTR_FULL(FPV_MountedLeaningStanceAiming);
	DELE_PTR_FULL(FPV_MountedDefaultStanceAiming);
	DELE_PTR_FULL(FPViewsMouintedAiming);
	DELE_PTR_FULL(TPV_Throwing);
	DELE_PTR_FULL(FPV_Lying);
	DELE_PTR_FULL(FPV_Mounted);
	DELE_PTR_FULL(FacialHairMesh);
	DELE_PTR_FULL(TPV_Swimming);
	DELE_PTR_FULL(HairMesh);
	DELE_PTR_FULL(RightBreastCensor);
	DELE_PTR_FULL(LeftBreastCensor);
	DELE_PTR_FULL(DangerDetectionSphere);
	DELE_PTR_FULL(PenisCensor);
	DELE_PTR_FULL(GenitalsCensor);
	DELE_PTR_FULL(Neck);
	DELE_PTR_FULL(Penis);
	DELE_PTR_FULL(VoiceAudio);
	DELE_PTR_FULL(VoiceChat);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleFoot_R);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleFoot_L);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleHead);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleLeg_R);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleLeg_L);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleHand_R);
	DELE_PTR_FULL(MeleeAttackCollisionCapsuleHand_L);
	DELE_PTR_FULL(BulletFlyBySoundCollision);
	DELE_PTR_FULL(VisionEffectsComponent);
	DELE_PTR_FULL(LeavesComponent);
	DELE_PTR_FULL(Eyewear);
	DELE_PTR_FULL(UpperHead);
	DELE_PTR_FULL(LowerHead);
	DELE_PTR_FULL(Chip);
	DELE_PTR_FULL(LowerMouth);
	DELE_PTR_FULL(UpperMouth);
	DELE_PTR_FULL(REye);
	DELE_PTR_FULL(LEye);
	DELE_PTR_FULL(UpperHeadSkeletal);
	DELE_PTR_FULL(BodyArmor);
	DELE_PTR_FULL(Backpack);
	DELE_PTR_FULL(Feet);
	DELE_PTR_FULL(Legs);
	DELE_PTR_FULL(head);
	DELE_PTR_FULL(Hands);
	DELE_PTR_FULL(Arms);
	DELE_PTR_FULL(Torso);
	DELE_PTR_FULL(TPV_Defecating);
	DELE_PTR_FULL(FPV_ClimbingWindow);
	DELE_PTR_FULL(TPV_ClimbingWindow);
	DELE_PTR_FULL(TPV_Diving);
	DELE_PTR_FULL(TPViews);
	DELE_PTR_FULL(TPV_NarrowLadder);
	DELE_PTR_FULL(TPV_Ragdoll);
	DELE_PTR_FULL(NameWidget);
	DELE_PTR_FULL(TPV_StandingMelee);
	DELE_PTR_FULL(FPV_StandingMelee);
	DELE_PTR_FULL(FPV_ProneAimingDownTheSights);
	DELE_PTR_FULL(FPV_CrouchingAimingDownTheSights);
	DELE_PTR_FULL(FPV_StandingAimingDownTheSights);
	DELE_PTR_FULL(FPV_ProneAiming);
	DELE_PTR_FULL(FPV_CrouchingAiming);
	DELE_PTR_FULL(FPV_StandingAiming);
	DELE_PTR_FULL(FPViewsAiming);
	DELE_PTR_FULL(TPV_ProneAiming);
	DELE_PTR_FULL(TPV_CrouchingAiming);
	DELE_PTR_FULL(TPV_StandingAiming);
	DELE_PTR_FULL(FPV_Prone);
	DELE_PTR_FULL(FPV_Crouching);
	DELE_PTR_FULL(FPV_Standing);
	DELE_PTR_FULL(FPViews);
	DELE_PTR_FULL(TPV_Standing);
	DELE_PTR_FULL(TPV_Prone);
	DELE_PTR_FULL(TPV_Crouching);
	DELE_PTR_FULL(FirstPersonView);
	DELE_PTR_FULL(ThirdPersonView);
	DELE_PTR_FULL(ShortHairCurve);
	DELE_PTR_FULL(FootstepTracker);
	DELE_PTR_FULL(BodyToMove);
	DELE_PTR_FULL(MediumHairCurve);
	DELE_PTR_FULL(MediumHairCurvePDO);
	DELE_PTR_FULL(MediumHairCurveTopOpacity);
	DELE_PTR_FULL(LongHairCurve);
	DELE_PTR_FULL(LongHairCurvePDO);
	DELE_PTR_FULL(LongHairCurveTopOpacity);
	DELE_PTR_FULL(ShortFacialHairCurve);
	DELE_PTR_FULL(MediumFacialHairCurve);
	DELE_PTR_FULL(MediumFacialHairCurvePDO);
	DELE_PTR_FULL(MediumFacialHairCurveTopOpacity);
	DELE_PTR_FULL(LongFacialHairCurve);
	DELE_PTR_FULL(LongFacialHairCurvePDO);
	DELE_PTR_FULL(LongFacialHairCurveTopOpacity);
	DELE_PTR_FULL(AfroMediumHairCurve);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
