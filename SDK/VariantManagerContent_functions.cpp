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

void FCapturedPropSegment::AfterRead()
{
}

void FCapturedPropSegment::BeforeDelete()
{
}

void FVariantDependency::AfterRead()
{
}

void FVariantDependency::BeforeDelete()
{
}

void FFunctionCaller::AfterRead()
{
}

void FFunctionCaller::BeforeDelete()
{
}

// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// ()
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariantSet* ULevelVariantSets::GetVariantSetByName(const struct FString& VariantSetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName"));

	ULevelVariantSets_GetVariantSetByName_Params params;
	params.VariantSetName = VariantSetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// ()
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariantSet* ULevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetVariantSet"));

	ULevelVariantSets_GetVariantSet_Params params;
	params.VariantSetIndex = VariantSetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULevelVariantSets::GetNumVariantSets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets"));

	ULevelVariantSets_GetNumVariantSets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelVariantSets::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DirectorClass, UBlueprintGeneratedClass);
}

void ULevelVariantSets::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DirectorClass);
}

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// ()
// Parameters:
// struct FString                 VariantSetName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 VariantName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ALevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName"));

	ALevelVariantSetsActor_SwitchOnVariantByName_Params params;
	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// ()
// Parameters:
// int                            VariantSetIndex                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex"));

	ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params;
	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// ()
// Parameters:
// class ULevelVariantSets*       InVariantSets                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets"));

	ALevelVariantSetsActor_SetLevelVariantSets_Params params;
	params.InVariantSets = InVariantSets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// ()
// Parameters:
// bool                           bLoad                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelVariantSets*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets"));

	ALevelVariantSetsActor_GetLevelVariantSets_Params params;
	params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ALevelVariantSetsActor::AfterRead()
{
	AActor::AfterRead();

}

void ALevelVariantSetsActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ULevelVariantSetsFunctionDirector::AfterRead()
{
	UObject::AfterRead();

}

void ULevelVariantSetsFunctionDirector::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function VariantManagerContent.PropertyValue.HasRecordedData
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPropertyValue::HasRecordedData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.HasRecordedData"));

	UPropertyValue_HasRecordedData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UPropertyValue::GetPropertyTooltip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.GetPropertyTooltip"));

	UPropertyValue_GetPropertyTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UPropertyValue::GetFullDisplayString()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.PropertyValue.GetFullDisplayString"));

	UPropertyValue_GetFullDisplayString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UPropertyValue::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(LeafPropertyClass, UClass);
}

void UPropertyValue::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(LeafPropertyClass);
}

void UPropertyValueTransform::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueTransform::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

void UPropertyValueVisibility::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueVisibility::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// ()
// Parameters:
// class UTexture2D*              NewThumbnail                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture"));

	UVariantSet_SetThumbnailFromTexture_Params params;
	params.NewThumbnail = NewThumbnail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariantSet::SetThumbnailFromFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromFile"));

	UVariantSet_SetThumbnailFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
// ()
void UVariantSet::SetThumbnailFromEditorViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport"));

	UVariantSet_SetThumbnailFromEditorViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              CameraTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          FOVDegrees                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinZ                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera"));

	UVariantSet_SetThumbnailFromCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.VariantSet.SetDisplayText
// ()
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetDisplayText"));

	UVariantSet_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.VariantSet.GetVariantByName
// ()
// Parameters:
// struct FString                 VariantName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariant*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariant* UVariantSet::GetVariantByName(const struct FString& VariantName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetVariantByName"));

	UVariantSet_GetVariantByName_Params params;
	params.VariantName = VariantName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetVariant
// ()
// Parameters:
// int                            VariantIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVariant*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariant* UVariantSet::GetVariant(int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetVariant"));

	UVariantSet_GetVariant_Params params;
	params.VariantIndex = VariantIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetThumbnail
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVariantSet::GetThumbnail()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetThumbnail"));

	UVariantSet_GetThumbnail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetParent
// ()
// Parameters:
// class ULevelVariantSets*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelVariantSets* UVariantSet::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetParent"));

	UVariantSet_GetParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetNumVariants
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariantSet::GetNumVariants()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetNumVariants"));

	UVariantSet_GetNumVariants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetDisplayText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UVariantSet::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetDisplayText"));

	UVariantSet_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UVariantSet::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Thumbnail, UTexture2D);
}

void UVariantSet::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Thumbnail);
}

void UPropertyValueColor::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueColor::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

void UPropertyValueMaterial::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueMaterial::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

void UPropertyValueOption::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueOption::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

void UPropertyValueSoftObject::AfterRead()
{
	UPropertyValue::AfterRead();

}

void UPropertyValueSoftObject::BeforeDelete()
{
	UPropertyValue::BeforeDelete();

}

// Function VariantManagerContent.SwitchActor.SelectOption
// ()
// Parameters:
// int                            OptionIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASwitchActor::SelectOption(int OptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.SelectOption"));

	ASwitchActor_SelectOption_Params params;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ASwitchActor::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.GetSelectedOption"));

	ASwitchActor_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.SwitchActor.GetOptions
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> ASwitchActor::GetOptions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.SwitchActor.GetOptions"));

	ASwitchActor_GetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ASwitchActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void ASwitchActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
}

// Function VariantManagerContent.Variant.SwitchOn
// ()
void UVariant::SwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SwitchOn"));

	UVariant_SwitchOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// ()
// Parameters:
// class UTexture2D*              NewThumbnail                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromTexture"));

	UVariant_SetThumbnailFromTexture_Params params;
	params.NewThumbnail = NewThumbnail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetThumbnailFromFile
// ()
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariant::SetThumbnailFromFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromFile"));

	UVariant_SetThumbnailFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
// ()
void UVariant::SetThumbnailFromEditorViewport()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport"));

	UVariant_SetThumbnailFromEditorViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              CameraTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          FOVDegrees                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinZ                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetThumbnailFromCamera"));

	UVariant_SetThumbnailFromCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CameraTransform = CameraTransform;
	params.FOVDegrees = FOVDegrees;
	params.MinZ = MinZ;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetDisplayText
// ()
// Parameters:
// struct FText                   NewDisplayText                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetDisplayText"));

	UVariant_SetDisplayText_Params params;
	params.NewDisplayText = NewDisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.SetDependency
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDependency      Dependency                     (Parm, OutParm, NativeAccessSpecifierPublic)
void UVariant::SetDependency(int Index, struct FVariantDependency* Dependency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetDependency"));

	UVariant_SetDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dependency != nullptr)
		*Dependency = params.Dependency;

}


// Function VariantManagerContent.Variant.IsActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVariant::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.IsActive"));

	UVariant_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetThumbnail
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UVariant::GetThumbnail()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetThumbnail"));

	UVariant_GetThumbnail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetParent
// ()
// Parameters:
// class UVariantSet*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVariantSet* UVariant::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetParent"));

	UVariant_GetParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumDependencies
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariant::GetNumDependencies()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetNumDependencies"));

	UVariant_GetNumDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetNumActors
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariant::GetNumActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetNumActors"));

	UVariant_GetNumActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDisplayText
// ()
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UVariant::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDisplayText"));

	UVariant_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependents
// ()
// Parameters:
// class ULevelVariantSets*       LevelVariantSets               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyEnabledDependencies       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVariant*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UVariant*> UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDependents"));

	UVariant_GetDependents_Params params;
	params.LevelVariantSets = LevelVariantSets;
	params.bOnlyEnabledDependencies = bOnlyEnabledDependencies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDependency
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVariantDependency      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FVariantDependency UVariant::GetDependency(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDependency"));

	UVariant_GetDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetActor
// ()
// Parameters:
// int                            ActorIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UVariant::GetActor(int ActorIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetActor"));

	UVariant_GetActor_Params params;
	params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.DeleteDependency
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVariant::DeleteDependency(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.DeleteDependency"));

	UVariant_DeleteDependency_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VariantManagerContent.Variant.AddDependency
// ()
// Parameters:
// struct FVariantDependency      Dependency                     (Parm, OutParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UVariant::AddDependency(struct FVariantDependency* Dependency)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.AddDependency"));

	UVariant_AddDependency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dependency != nullptr)
		*Dependency = params.Dependency;


	return params.ReturnValue;
}


void UVariant::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Thumbnail, UTexture2D);
}

void UVariant::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Thumbnail);
}

void UVariantObjectBinding::AfterRead()
{
	UObject::AfterRead();

}

void UVariantObjectBinding::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
