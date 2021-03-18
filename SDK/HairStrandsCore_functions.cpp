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

void FHairDecimationSettings::AfterRead()
{
}

void FHairDecimationSettings::BeforeDelete()
{
}

void FHairInterpolationSettings::AfterRead()
{
}

void FHairInterpolationSettings::BeforeDelete()
{
}

void FHairGroupsInterpolation::AfterRead()
{
}

void FHairGroupsInterpolation::BeforeDelete()
{
}

void FHairGroupCardsTextures::AfterRead()
{
	READ_PTR_FULL(DepthTexture, UTexture2D);
	READ_PTR_FULL(CoverageTexture, UTexture2D);
	READ_PTR_FULL(TangentTexture, UTexture2D);
	READ_PTR_FULL(AttributeTexture, UTexture2D);
	READ_PTR_FULL(AuxilaryDataTexture, UTexture2D);
}

void FHairGroupCardsTextures::BeforeDelete()
{
	DELE_PTR_FULL(DepthTexture);
	DELE_PTR_FULL(CoverageTexture);
	DELE_PTR_FULL(TangentTexture);
	DELE_PTR_FULL(AttributeTexture);
	DELE_PTR_FULL(AuxilaryDataTexture);
}

void FHairGroupsMeshesSourceDescription::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
	READ_PTR_FULL(ImportedMesh, UStaticMesh);
}

void FHairGroupsMeshesSourceDescription::BeforeDelete()
{
	DELE_PTR_FULL(Material);
	DELE_PTR_FULL(ImportedMesh);
}

void FHairBendConstraint::AfterRead()
{
}

void FHairBendConstraint::BeforeDelete()
{
}

void FHairStretchConstraint::AfterRead()
{
}

void FHairStretchConstraint::BeforeDelete()
{
}

void FHairCollisionConstraint::AfterRead()
{
}

void FHairCollisionConstraint::BeforeDelete()
{
}

void FHairMaterialConstraints::AfterRead()
{
}

void FHairMaterialConstraints::BeforeDelete()
{
}

void FHairStrandsParameters::AfterRead()
{
}

void FHairStrandsParameters::BeforeDelete()
{
}

void FHairSolverSettings::AfterRead()
{
}

void FHairSolverSettings::BeforeDelete()
{
}

void FHairExternalForces::AfterRead()
{
}

void FHairExternalForces::BeforeDelete()
{
}

void FHairGroupsPhysics::AfterRead()
{
}

void FHairGroupsPhysics::BeforeDelete()
{
}

void FHairCardsClusterSettings::AfterRead()
{
}

void FHairCardsClusterSettings::BeforeDelete()
{
}

void FHairCardsGeometrySettings::AfterRead()
{
}

void FHairCardsGeometrySettings::BeforeDelete()
{
}

void FHairCardsTextureSettings::AfterRead()
{
}

void FHairCardsTextureSettings::BeforeDelete()
{
}

void FHairGroupsProceduralCards::AfterRead()
{
}

void FHairGroupsProceduralCards::BeforeDelete()
{
}

void FHairLODSettings::AfterRead()
{
}

void FHairLODSettings::BeforeDelete()
{
}

void FHairGroupsLOD::AfterRead()
{
}

void FHairGroupsLOD::BeforeDelete()
{
}

void FHairShadowSettings::AfterRead()
{
}

void FHairShadowSettings::BeforeDelete()
{
}

void FHairGeometrySettings::AfterRead()
{
}

void FHairGeometrySettings::BeforeDelete()
{
}

void FGoomBindingGroupInfo::AfterRead()
{
}

void FGoomBindingGroupInfo::BeforeDelete()
{
}

void FHairGroupDesc::AfterRead()
{
}

void FHairGroupDesc::BeforeDelete()
{
}

void FGroomHairGroupPreview::AfterRead()
{
}

void FGroomHairGroupPreview::BeforeDelete()
{
}

void FGroomBuildSettings::AfterRead()
{
}

void FGroomBuildSettings::BeforeDelete()
{
}

void FGroomConversionSettings::AfterRead()
{
}

void FGroomConversionSettings::BeforeDelete()
{
}

void FHairGroupInfo::AfterRead()
{
}

void FHairGroupInfo::BeforeDelete()
{
}

void FHairGroupsMaterial::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FHairGroupsMaterial::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FHairGroupCardsInfo::AfterRead()
{
}

void FHairGroupCardsInfo::BeforeDelete()
{
}

void FHairGroupsCardsSourceDescription::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
	READ_PTR_FULL(ProceduralMesh, UStaticMesh);
	READ_PTR_FULL(ImportedMesh, UStaticMesh);
}

void FHairGroupsCardsSourceDescription::BeforeDelete()
{
	DELE_PTR_FULL(Material);
	DELE_PTR_FULL(ProceduralMesh);
	DELE_PTR_FULL(ImportedMesh);
}

void FHairGroupInfoWithVisibility::AfterRead()
{
	FHairGroupInfo::AfterRead();

}

void FHairGroupInfoWithVisibility::BeforeDelete()
{
	FHairGroupInfo::BeforeDelete();

}

void FHairAdvancedRenderingSettings::AfterRead()
{
}

void FHairAdvancedRenderingSettings::BeforeDelete()
{
}

void FHairGroupsRendering::AfterRead()
{
	READ_PTR_FULL(Material, UMaterialInterface);
}

void FHairGroupsRendering::BeforeDelete()
{
	DELE_PTR_FULL(Material);
}

void FFollicleMaskOptions::AfterRead()
{
	READ_PTR_FULL(Groom, UGroomAsset);
}

void FFollicleMaskOptions::BeforeDelete()
{
	DELE_PTR_FULL(Groom);
}

void UNiagaraDataInterfaceVelocityGrid::AfterRead()
{
	UNiagaraDataInterfaceRWBase::AfterRead();

}

void UNiagaraDataInterfaceVelocityGrid::BeforeDelete()
{
	UNiagaraDataInterfaceRWBase::BeforeDelete();

}

void UNiagaraDataInterfacePressureGrid::AfterRead()
{
	UNiagaraDataInterfaceVelocityGrid::AfterRead();

}

void UNiagaraDataInterfacePressureGrid::BeforeDelete()
{
	UNiagaraDataInterfaceVelocityGrid::BeforeDelete();

}

void AGroomActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GroomComponent, UGroomComponent);
}

void AGroomActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GroomComponent);
}

void UGroomAsset::AfterRead()
{
	UObject::AfterRead();

}

void UGroomAsset::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGroomAssetImportData::AfterRead()
{
	UAssetImportData::AfterRead();

	READ_PTR_FULL(ImportOptions, UGroomImportOptions);
}

void UGroomAssetImportData::BeforeDelete()
{
	UAssetImportData::BeforeDelete();

	DELE_PTR_FULL(ImportOptions);
}

void UGroomBindingAsset::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Groom, UGroomAsset);
	READ_PTR_FULL(SourceSkeletalMesh, USkeletalMesh);
	READ_PTR_FULL(TargetSkeletalMesh, USkeletalMesh);
}

void UGroomBindingAsset::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Groom);
	DELE_PTR_FULL(SourceSkeletalMesh);
	DELE_PTR_FULL(TargetSkeletalMesh);
}

// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
// ()
// Parameters:
// struct FString                 InDesiredPackagePath           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomAsset*             InGroomAsset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSkeletalMesh                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InNumInterpolationPoints       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSourceSkeletalMeshForTransfer (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InMatchingSection              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const struct FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath"));

	UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params params;
	params.InDesiredPackagePath = InDesiredPackagePath;
	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
// ()
// Parameters:
// class UGroomAsset*             InGroomAsset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSkeletalMesh                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InNumInterpolationPoints       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*           InSourceSkeletalMeshForTransfer (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InMatchingSection              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGroomBindingAsset*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset"));

	UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params params;
	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGroomBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UGroomBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function HairStrandsCore.GroomComponent.SetGroomAsset
// ()
// Parameters:
// class UGroomAsset*             Asset                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomComponent.SetGroomAsset"));

	UGroomComponent_SetGroomAsset_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HairStrandsCore.GroomComponent.SetBindingAsset
// ()
// Parameters:
// class UGroomBindingAsset*      InBinding                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function HairStrandsCore.GroomComponent.SetBindingAsset"));

	UGroomComponent_SetBindingAsset_Params params;
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGroomComponent::AfterRead()
{
	UMeshComponent::AfterRead();

	READ_PTR_FULL(GroomAsset, UGroomAsset);
	READ_PTR_FULL(SourceSkeletalMesh, USkeletalMesh);
	READ_PTR_FULL(BindingAsset, UGroomBindingAsset);
	READ_PTR_FULL(PhysicsAsset, UPhysicsAsset);
	READ_PTR_FULL(Strands_DebugMaterial, UMaterialInterface);
	READ_PTR_FULL(Strands_DefaultMaterial, UMaterialInterface);
	READ_PTR_FULL(Cards_DefaultMaterial, UMaterialInterface);
	READ_PTR_FULL(Meshes_DefaultMaterial, UMaterialInterface);
	READ_PTR_FULL(AngularSpringsSystem, UNiagaraSystem);
	READ_PTR_FULL(CosseratRodsSystem, UNiagaraSystem);
}

void UGroomComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

	DELE_PTR_FULL(GroomAsset);
	DELE_PTR_FULL(SourceSkeletalMesh);
	DELE_PTR_FULL(BindingAsset);
	DELE_PTR_FULL(PhysicsAsset);
	DELE_PTR_FULL(Strands_DebugMaterial);
	DELE_PTR_FULL(Strands_DefaultMaterial);
	DELE_PTR_FULL(Cards_DefaultMaterial);
	DELE_PTR_FULL(Meshes_DefaultMaterial);
	DELE_PTR_FULL(AngularSpringsSystem);
	DELE_PTR_FULL(CosseratRodsSystem);
}

void UGroomCreateBindingOptions::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SourceSkeletalMesh, USkeletalMesh);
	READ_PTR_FULL(TargetSkeletalMesh, USkeletalMesh);
}

void UGroomCreateBindingOptions::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SourceSkeletalMesh);
	DELE_PTR_FULL(TargetSkeletalMesh);
}

void UGroomCreateFollicleMaskOptions::AfterRead()
{
	UObject::AfterRead();

}

void UGroomCreateFollicleMaskOptions::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGroomCreateStrandsTexturesOptions::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMesh);
	READ_PTR_FULL(SkeletalMesh, USkeletalMesh);
}

void UGroomCreateStrandsTexturesOptions::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(SkeletalMesh);
}

void UGroomImportOptions::AfterRead()
{
	UObject::AfterRead();

}

void UGroomImportOptions::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGroomHairGroupsPreview::AfterRead()
{
	UObject::AfterRead();

}

void UGroomHairGroupsPreview::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraDataInterfaceHairStrands::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(DefaultSource, UGroomAsset);
	READ_PTR_FULL(SourceActor, AActor);
}

void UNiagaraDataInterfaceHairStrands::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultSource);
	DELE_PTR_FULL(SourceActor);
}

void UNiagaraDataInterfacePhysicsAsset::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(DefaultSource, UPhysicsAsset);
	READ_PTR_FULL(SourceActor, AActor);
}

void UNiagaraDataInterfacePhysicsAsset::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultSource);
	DELE_PTR_FULL(SourceActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
