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

void FProceduralFoliageInstance::AfterRead()
{
	READ_PTR_FULL(Type, UFoliageType);
}

void FProceduralFoliageInstance::BeforeDelete()
{
	DELE_PTR_FULL(Type);
}

void FFoliageVertexColorChannelMask::AfterRead()
{
}

void FFoliageVertexColorChannelMask::BeforeDelete()
{
}

void FFoliageTypeObject::AfterRead()
{
	READ_PTR_FULL(FoliageTypeObject, UObject);
	READ_PTR_FULL(TypeInstance, UFoliageType);
	READ_PTR_FULL(Type, UClass);
}

void FFoliageTypeObject::BeforeDelete()
{
	DELE_PTR_FULL(FoliageTypeObject);
	DELE_PTR_FULL(TypeInstance);
	DELE_PTR_FULL(Type);
}

void UInteractiveFoliageComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UInteractiveFoliageComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void AProceduralFoliageBlockingVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(ProceduralFoliageVolume, AProceduralFoliageVolume);
}

void AProceduralFoliageBlockingVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(ProceduralFoliageVolume);
}

void UProceduralFoliageComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(FoliageSpawner, UProceduralFoliageSpawner);
	READ_PTR_FULL(SpawningVolume, AVolume);
}

void UProceduralFoliageComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(FoliageSpawner);
	DELE_PTR_FULL(SpawningVolume);
}

// Function Foliage.ProceduralFoliageSpawner.Simulate
// ()
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.ProceduralFoliageSpawner.Simulate"));

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UProceduralFoliageSpawner::AfterRead()
{
	UObject::AfterRead();

}

void UProceduralFoliageSpawner::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFoliageInstancedStaticMeshComponent::AfterRead()
{
	UHierarchicalInstancedStaticMeshComponent::AfterRead();

}

void UFoliageInstancedStaticMeshComponent::BeforeDelete()
{
	UHierarchicalInstancedStaticMeshComponent::BeforeDelete();

}

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 CenterPosition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount"));

	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                    Box                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount"));

	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UFoliageStatistics::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UFoliageStatistics::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UProceduralFoliageTile::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(FoliageSpawner, UProceduralFoliageSpawner);
}

void UProceduralFoliageTile::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(FoliageSpawner);
}

void AProceduralFoliageVolume::AfterRead()
{
	AVolume::AfterRead();

	READ_PTR_FULL(ProceduralComponent, UProceduralFoliageComponent);
}

void AProceduralFoliageVolume::BeforeDelete()
{
	AVolume::BeforeDelete();

	DELE_PTR_FULL(ProceduralComponent);
}

void UFoliageType::AfterRead()
{
	UObject::AfterRead();

}

void UFoliageType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFoliageType_Actor::AfterRead()
{
	UFoliageType::AfterRead();

	READ_PTR_FULL(ActorClass, UClass);
}

void UFoliageType_Actor::BeforeDelete()
{
	UFoliageType::BeforeDelete();

	DELE_PTR_FULL(ActorClass);
}

void UFoliageType_InstancedStaticMesh::AfterRead()
{
	UFoliageType::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMesh);
	READ_PTR_FULL(ComponentClass, UClass);
}

void UFoliageType_InstancedStaticMesh::BeforeDelete()
{
	UFoliageType::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(ComponentClass);
}

void AInstancedFoliageActor::AfterRead()
{
	AActor::AfterRead();

}

void AInstancedFoliageActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// ()
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.InteractiveFoliageActor.CapsuleTouched"));

	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AInteractiveFoliageActor::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(CapsuleComponent, UCapsuleComponent);
}

void AInteractiveFoliageActor::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(CapsuleComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
