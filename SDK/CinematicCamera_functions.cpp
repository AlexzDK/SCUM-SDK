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

void FCameraTrackingFocusSettings::AfterRead()
{
}

void FCameraTrackingFocusSettings::BeforeDelete()
{
}

void FCameraLensSettings::AfterRead()
{
}

void FCameraLensSettings::BeforeDelete()
{
}

void FNamedLensPreset::AfterRead()
{
}

void FNamedLensPreset::BeforeDelete()
{
}

void FCameraFilmbackSettings::AfterRead()
{
}

void FCameraFilmbackSettings::BeforeDelete()
{
}

void FCameraFocusSettings::AfterRead()
{
}

void FCameraFocusSettings::BeforeDelete()
{
}

void FNamedFilmbackPreset::AfterRead()
{
}

void FNamedFilmbackPreset::BeforeDelete()
{
}

void FCameraLookatTrackingSettings::AfterRead()
{
}

void FCameraLookatTrackingSettings::BeforeDelete()
{
}

void ACameraRig_Crane::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TransformComponent, USceneComponent);
	READ_PTR_FULL(CraneYawControl, USceneComponent);
	READ_PTR_FULL(CranePitchControl, USceneComponent);
	READ_PTR_FULL(CraneCameraMount, USceneComponent);
}

void ACameraRig_Crane::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TransformComponent);
	DELE_PTR_FULL(CraneYawControl);
	DELE_PTR_FULL(CranePitchControl);
	DELE_PTR_FULL(CraneCameraMount);
}

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// ()
// Parameters:
// class USplineComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent"));

	ACameraRig_Rail_GetRailSplineComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ACameraRig_Rail::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TransformComponent, USceneComponent);
	READ_PTR_FULL(RailSplineComponent, USplineComponent);
	READ_PTR_FULL(RailCameraMount, USceneComponent);
}

void ACameraRig_Rail::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TransformComponent);
	DELE_PTR_FULL(RailSplineComponent);
	DELE_PTR_FULL(RailCameraMount);
}

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// ()
// Parameters:
// class UCineCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraActor.GetCineCameraComponent"));

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ACineCameraActor::AfterRead()
{
	ACameraActor::AfterRead();

}

void ACineCameraActor::BeforeDelete()
{
	ACameraActor::BeforeDelete();

}

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// ()
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetLensPresetByName"));

	UCineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// ()
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName"));

	UCineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// ()
// Parameters:
// float                          InFocalLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength"));

	UCineCameraComponent_SetCurrentFocalLength_Params params;
	params.InFocalLength = InFocalLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView"));

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// ()
// Parameters:
// TArray<struct FNamedLensPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy"));

	UCineCameraComponent_GetLensPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetLensPresetName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetLensPresetName"));

	UCineCameraComponent_GetLensPresetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView"));

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// ()
// Parameters:
// TArray<struct FNamedFilmbackPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy"));

	UCineCameraComponent_GetFilmbackPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName"));

	UCineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetDefaultFilmbackPresetName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName"));

	UCineCameraComponent_GetDefaultFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCineCameraComponent::AfterRead()
{
	UCameraComponent::AfterRead();

}

void UCineCameraComponent::BeforeDelete()
{
	UCameraComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
