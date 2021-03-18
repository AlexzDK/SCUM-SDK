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

void FChaosPhysicsCollisionInfo::AfterRead()
{
	READ_PTR_FULL(Component, UPrimitiveComponent);
	READ_PTR_FULL(OtherComponent, UPrimitiveComponent);
}

void FChaosPhysicsCollisionInfo::BeforeDelete()
{
	DELE_PTR_FULL(Component);
	DELE_PTR_FULL(OtherComponent);
}

void FChaosDebugSubstepControl::AfterRead()
{
}

void FChaosDebugSubstepControl::BeforeDelete()
{
}

void FChaosBreakEvent::AfterRead()
{
	READ_PTR_FULL(Component, UPrimitiveComponent);
}

void FChaosBreakEvent::BeforeDelete()
{
	DELE_PTR_FULL(Component);
}

void FChaosHandlerSet::AfterRead()
{
}

void FChaosHandlerSet::BeforeDelete()
{
}

void FBreakEventCallbackWrapper::AfterRead()
{
}

void FBreakEventCallbackWrapper::BeforeDelete()
{
}

void UChaosSolver::AfterRead()
{
	UObject::AfterRead();

}

void UChaosSolver::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// ()
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AChaosSolverActor::SetSolverActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive"));

	AChaosSolverActor_SetSolverActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// ()
void AChaosSolverActor::SetAsCurrentWorldSolver()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver"));

	AChaosSolverActor_SetAsCurrentWorldSolver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AChaosSolverActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpriteComponent, UBillboardComponent);
	READ_PTR_FULL(GameplayEventDispatcherComponent, UChaosGameplayEventDispatcher);
}

void AChaosSolverActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpriteComponent);
	DELE_PTR_FULL(GameplayEventDispatcherComponent);
}

void UChaosSolverSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UChaosSolverSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UChaosDebugDrawComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UChaosDebugDrawComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UChaosEventListenerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UChaosEventListenerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UChaosGameplayEventDispatcher::AfterRead()
{
	UChaosEventListenerComponent::AfterRead();

}

void UChaosGameplayEventDispatcher::BeforeDelete()
{
	UChaosEventListenerComponent::BeforeDelete();

}

void UChaosNotifyHandlerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UChaosNotifyHandlerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo PhysicsCollision               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult"));

	UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params params;
	params.PhysicsCollision = PhysicsCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UChaosSolverEngineBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UChaosSolverEngineBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
