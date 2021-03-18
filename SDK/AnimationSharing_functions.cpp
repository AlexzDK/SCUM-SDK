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

void FAnimationSharingScalability::AfterRead()
{
}

void FAnimationSharingScalability::BeforeDelete()
{
}

void FAnimationSetup::AfterRead()
{
	READ_PTR_FULL(AnimSequence, UAnimSequence);
	READ_PTR_FULL(AnimBlueprint, UClass);
}

void FAnimationSetup::BeforeDelete()
{
	DELE_PTR_FULL(AnimSequence);
	DELE_PTR_FULL(AnimBlueprint);
}

void FAnimationStateEntry::AfterRead()
{
}

void FAnimationStateEntry::BeforeDelete()
{
}

void FPerSkeletonAnimationSharingSetup::AfterRead()
{
	READ_PTR_FULL(Skeleton, USkeleton);
	READ_PTR_FULL(SkeletalMesh, USkeletalMesh);
	READ_PTR_FULL(BlendAnimBlueprint, UClass);
	READ_PTR_FULL(AdditiveAnimBlueprint, UClass);
	READ_PTR_FULL(StateProcessorClass, UClass);
}

void FPerSkeletonAnimationSharingSetup::BeforeDelete()
{
	DELE_PTR_FULL(Skeleton);
	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(BlendAnimBlueprint);
	DELE_PTR_FULL(AdditiveAnimBlueprint);
	DELE_PTR_FULL(StateProcessorClass);
}

void FTickAnimationSharingFunction::AfterRead()
{
	FTickFunction::AfterRead();

}

void FTickAnimationSharingFunction::BeforeDelete()
{
	FTickFunction::BeforeDelete();

}

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// ()
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors"));

	UAnimSharingStateInstance_GetInstancedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;

}


void UAnimSharingStateInstance::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(AnimationToPlay, UAnimSequence);
	READ_PTR_FULL(Instance, UAnimSharingInstance);
}

void UAnimSharingStateInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(AnimationToPlay);
	DELE_PTR_FULL(Instance);
}

void UAnimSharingTransitionInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimSharingTransitionInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

void UAnimSharingAdditiveInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimSharingAdditiveInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

void UAnimSharingInstance::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(StateProcessor, UAnimationSharingStateProcessor);
	READ_PTR_FULL(StateEnum, UEnum);
	READ_PTR_FULL(SharingActor, AActor);
}

void UAnimSharingInstance::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(StateProcessor);
	DELE_PTR_FULL(StateEnum);
	DELE_PTR_FULL(SharingActor);
}

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// ()
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*               SharingSkeleton                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP"));

	UAnimationSharingManager_RegisterActorWithSkeletonBP_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager"));

	UAnimationSharingManager_GetAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimationSharingSetup*  Setup                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager"));

	UAnimationSharingManager_CreateAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::AnimationSharingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled"));

	UAnimationSharingManager_AnimationSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimationSharingManager::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationSharingManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnimationSharingSetup::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationSharingSetup::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// ()
// Parameters:
// int                            OutState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  OnDemandState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldProcess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingStateProcessor::ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState"));

	UAnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;

}


// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// ()
// Parameters:
// class UEnum*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum"));

	UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimationSharingStateProcessor::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationSharingStateProcessor::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
