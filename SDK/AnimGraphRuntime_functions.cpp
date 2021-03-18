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

void FAnimNode_SkeletalControlBase::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_SkeletalControlBase::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_ResetRoot::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ResetRoot::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FSimSpaceSettings::AfterRead()
{
}

void FSimSpaceSettings::BeforeDelete()
{
}

void FAnimNode_RigidBody::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

	READ_PTR_FULL(OverridePhysicsAsset, UPhysicsAsset);
}

void FAnimNode_RigidBody::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

	DELE_PTR_FULL(OverridePhysicsAsset);
}

void FAnimNode_RotateRootBone::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_RotateRootBone::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_RotationMultiplier::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_RotationMultiplier::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_BlendSpacePlayer::AfterRead()
{
	FAnimNode_AssetPlayerBase::AfterRead();

	READ_PTR_FULL(BlendSpace, UBlendSpaceBase);
	READ_PTR_FULL(PreviousBlendSpace, UBlendSpaceBase);
}

void FAnimNode_BlendSpacePlayer::BeforeDelete()
{
	FAnimNode_AssetPlayerBase::BeforeDelete();

	DELE_PTR_FULL(BlendSpace);
	DELE_PTR_FULL(PreviousBlendSpace);
}

void FAnimNode_RotationOffsetBlendSpace::AfterRead()
{
	FAnimNode_BlendSpacePlayer::AfterRead();

}

void FAnimNode_RotationOffsetBlendSpace::BeforeDelete()
{
	FAnimNode_BlendSpacePlayer::BeforeDelete();

}

void FAnimNode_ScaleChainLength::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_ScaleChainLength::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_SequenceEvaluator::AfterRead()
{
	FAnimNode_AssetPlayerBase::AfterRead();

	READ_PTR_FULL(Sequence, UAnimSequenceBase);
}

void FAnimNode_SequenceEvaluator::BeforeDelete()
{
	FAnimNode_AssetPlayerBase::BeforeDelete();

	DELE_PTR_FULL(Sequence);
}

void FAnimNode_Slot::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_Slot::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_SplineIK::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_SplineIK::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FSplineIKCachedBoneData::AfterRead()
{
}

void FSplineIKCachedBoneData::BeforeDelete()
{
}

void FRBFEntry::AfterRead()
{
}

void FRBFEntry::BeforeDelete()
{
}

void FRBFTarget::AfterRead()
{
	FRBFEntry::AfterRead();

}

void FRBFTarget::BeforeDelete()
{
	FRBFEntry::BeforeDelete();

}

void FSocketReference::AfterRead()
{
}

void FSocketReference::BeforeDelete()
{
}

void FConstraint::AfterRead()
{
}

void FConstraint::BeforeDelete()
{
}

void FAnimNode_Constraint::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_Constraint::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_CopyBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_CopyBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_CopyBoneDelta::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_CopyBoneDelta::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_CopyPoseFromMesh::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_CopyPoseFromMesh::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_CurveSource::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_CurveSource::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FBoneSocketTarget::AfterRead()
{
}

void FBoneSocketTarget::BeforeDelete()
{
}

void FAnimNode_Fabrik::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_Fabrik::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_HandIKRetargeting::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_HandIKRetargeting::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_LayeredBoneBlend::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_LayeredBoneBlend::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimLegIKDefinition::AfterRead()
{
}

void FAnimLegIKDefinition::BeforeDelete()
{
}

void FAnimNode_LegIK::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_LegIK::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_AimOffsetLookAt::AfterRead()
{
	FAnimNode_BlendSpacePlayer::AfterRead();

}

void FAnimNode_AimOffsetLookAt::BeforeDelete()
{
	FAnimNode_BlendSpacePlayer::BeforeDelete();

}

void FAnimPhysConstraintSetup::AfterRead()
{
}

void FAnimPhysConstraintSetup::BeforeDelete()
{
}

void FAnimPhysSphericalLimit::AfterRead()
{
}

void FAnimPhysSphericalLimit::BeforeDelete()
{
}

void FAnimPhysPlanarLimit::AfterRead()
{
}

void FAnimPhysPlanarLimit::BeforeDelete()
{
}

void FRotationRetargetingInfo::AfterRead()
{
}

void FRotationRetargetingInfo::BeforeDelete()
{
}

void FAnimNode_AnimDynamics::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_AnimDynamics::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_ApplyAdditive::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_ApplyAdditive::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAngularRangeLimit::AfterRead()
{
}

void FAngularRangeLimit::BeforeDelete()
{
}

void FAnimNode_ApplyLimits::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ApplyLimits::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_PoseHandler::AfterRead()
{
	FAnimNode_AssetPlayerBase::AfterRead();

	READ_PTR_FULL(PoseAsset, UPoseAsset);
}

void FAnimNode_PoseHandler::BeforeDelete()
{
	FAnimNode_AssetPlayerBase::BeforeDelete();

	DELE_PTR_FULL(PoseAsset);
}

void FAnimNode_PoseBlendNode::AfterRead()
{
	FAnimNode_PoseHandler::AfterRead();

	READ_PTR_FULL(CustomCurve, UCurveFloat);
}

void FAnimNode_PoseBlendNode::BeforeDelete()
{
	FAnimNode_PoseHandler::BeforeDelete();

	DELE_PTR_FULL(CustomCurve);
}

void FAnimNode_PoseByName::AfterRead()
{
	FAnimNode_PoseHandler::AfterRead();

}

void FAnimNode_PoseByName::BeforeDelete()
{
	FAnimNode_PoseHandler::BeforeDelete();

}

void FPoseDriverTransform::AfterRead()
{
}

void FPoseDriverTransform::BeforeDelete()
{
}

void FPoseDriverTarget::AfterRead()
{
}

void FPoseDriverTarget::BeforeDelete()
{
}

void FRBFParams::AfterRead()
{
}

void FRBFParams::BeforeDelete()
{
}

void FAnimNode_PoseDriver::AfterRead()
{
	FAnimNode_PoseHandler::AfterRead();

}

void FAnimNode_PoseDriver::BeforeDelete()
{
	FAnimNode_PoseHandler::BeforeDelete();

}

void FAnimNode_PoseSnapshot::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_PoseSnapshot::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FRandomPlayerSequenceEntry::AfterRead()
{
	READ_PTR_FULL(Sequence, UAnimSequence);
}

void FRandomPlayerSequenceEntry::BeforeDelete()
{
	DELE_PTR_FULL(Sequence);
}

void FAnimNode_RandomPlayer::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_RandomPlayer::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_MeshSpaceRefPose::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_MeshSpaceRefPose::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_RefPose::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_RefPose::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimLegIKData::AfterRead()
{
}

void FAnimLegIKData::BeforeDelete()
{
}

void FIKChain::AfterRead()
{
}

void FIKChain::BeforeDelete()
{
}

void FIKChainLink::AfterRead()
{
}

void FIKChainLink::BeforeDelete()
{
}

void FAnimNode_LookAt::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_LookAt::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_MakeDynamicAdditive::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_MakeDynamicAdditive::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_ModifyBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ModifyBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_ModifyCurve::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_ModifyCurve::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_MultiWayBlend::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_MultiWayBlend::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_ObserveBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ObserveBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_SpringBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_SpringBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_StateResult::AfterRead()
{
	FAnimNode_Root::AfterRead();

}

void FAnimNode_StateResult::BeforeDelete()
{
	FAnimNode_Root::BeforeDelete();

}

void FRotationLimit::AfterRead()
{
}

void FRotationLimit::BeforeDelete()
{
}

void FAnimNode_Trail::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_Trail::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FReferenceBoneFrame::AfterRead()
{
}

void FReferenceBoneFrame::BeforeDelete()
{
}

void FAnimNode_TwistCorrectiveNode::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_TwistCorrectiveNode::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_TwoBoneIK::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_TwoBoneIK::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_TwoWayBlend::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_TwoWayBlend::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimSequencerInstanceProxy::AfterRead()
{
	FAnimInstanceProxy::AfterRead();

}

void FAnimSequencerInstanceProxy::BeforeDelete()
{
	FAnimInstanceProxy::BeforeDelete();

}

void FPositionHistory::AfterRead()
{
}

void FPositionHistory::BeforeDelete()
{
}

void FBlendBoneByChannelEntry::AfterRead()
{
}

void FBlendBoneByChannelEntry::BeforeDelete()
{
}

void FAnimNode_BlendBoneByChannel::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_BlendBoneByChannel::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_BlendListBase::AfterRead()
{
	FAnimNode_Base::AfterRead();

	READ_PTR_FULL(CustomBlendCurve, UCurveFloat);
	READ_PTR_FULL(BlendProfile, UBlendProfile);
}

void FAnimNode_BlendListBase::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

	DELE_PTR_FULL(CustomBlendCurve);
	DELE_PTR_FULL(BlendProfile);
}

void FAnimNode_BlendListByBool::AfterRead()
{
	FAnimNode_BlendListBase::AfterRead();

}

void FAnimNode_BlendListByBool::BeforeDelete()
{
	FAnimNode_BlendListBase::BeforeDelete();

}

void FAnimNode_BlendListByEnum::AfterRead()
{
	FAnimNode_BlendListBase::AfterRead();

}

void FAnimNode_BlendListByEnum::BeforeDelete()
{
	FAnimNode_BlendListBase::BeforeDelete();

}

void FAnimNode_BlendListByInt::AfterRead()
{
	FAnimNode_BlendListBase::AfterRead();

}

void FAnimNode_BlendListByInt::BeforeDelete()
{
	FAnimNode_BlendListBase::BeforeDelete();

}

void FAnimNode_BlendSpaceEvaluator::AfterRead()
{
	FAnimNode_BlendSpacePlayer::AfterRead();

}

void FAnimNode_BlendSpaceEvaluator::BeforeDelete()
{
	FAnimNode_BlendSpacePlayer::BeforeDelete();

}

void FAnimNode_BoneDrivenController::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

	READ_PTR_FULL(DrivingCurve, UCurveFloat);
}

void FAnimNode_BoneDrivenController::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

	DELE_PTR_FULL(DrivingCurve);
}

void FAnimNode_CCDIK::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_CCDIK::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void UAnimNotify_PlayMontageNotify::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_PlayMontageNotify::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_PlayMontageNotifyWindow::AfterRead()
{
	UAnimNotifyState::AfterRead();

}

void UAnimNotify_PlayMontageNotifyWindow::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

}

void UAnimSequencerInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimSequencerInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// ()
// Parameters:
// struct FVector                 RootPos                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 JointPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EndPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 JointTarget                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Effector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutJointPos                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OutEndPos                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowStretching               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartStretchRatio              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxStretchScale                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK"));

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;
	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// ()
void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer"));

	UKismetAnimationLibrary_K2_StartProfilingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// ()
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinX                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxX                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinY                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxY                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMinZ                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMaxZ                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap"));

	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeOutMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap"));

	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;
	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// ()
// Parameters:
// struct FTransform              CurrentTransform               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 TargetPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 LookAtVector                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseUpVector                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 UpVector                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ClampConeInDegree              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt"));

	UKismetAnimationLibrary_K2_LookAt_Params params;
	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// ()
// Parameters:
// bool                           bLog                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LogPrefix                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer"));

	UKismetAnimationLibrary_K2_EndProfilingTimer_Params params;
	params.bLog = bLog;
	params.LogPrefix = LogPrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// ()
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameA              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceA                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameB              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceB                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemapRange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMin                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRangeMax                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutRangeMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutRangeMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange"));

	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;
	params.Component = Component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// ()
// Parameters:
// class USkeletalMeshComponent*  Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameFrom           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneNameTo             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets"));

	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;
	params.Component = Component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketOrBoneName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReferenceSocketOrBone          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 OffsetInBoneSpace              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AnimGraphRuntime_EEasingFuncType EasingType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRuntimeFloatCurve      CustomCurve                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<Engine_ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, AnimGraphRuntime_EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets"));

	UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Component = Component;
	params.SocketOrBoneName = SocketOrBoneName;
	params.ReferenceSocketOrBone = ReferenceSocketOrBone;
	params.SocketSpace = SocketSpace;
	params.OffsetInBoneSpace = OffsetInBoneSpace;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;
	params.EasingType = EasingType;
	params.CustomCurve = CustomCurve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;


	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPositionHistory        History                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            NumberOfSamples                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory"));

	UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.position = position;
	params.NumberOfSamples = NumberOfSamples;
	params.VelocityMin = VelocityMin;
	params.VelocityMax = VelocityMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (History != nullptr)
		*History = params.History;


	return params.ReturnValue;
}


void UKismetAnimationLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UKismetAnimationLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// ()
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// ()
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// ()
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPlayMontageCallbackProxy::AfterRead()
{
	UObject::AfterRead();

}

void UPlayMontageCallbackProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USequencerAnimationSupport::AfterRead()
{
	UInterface::AfterRead();

}

void USequencerAnimationSupport::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
