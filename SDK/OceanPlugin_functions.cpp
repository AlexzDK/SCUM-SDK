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

void FForceTriangle::AfterRead()
{
}

void FForceTriangle::BeforeDelete()
{
}

void FWaveParameter::AfterRead()
{
}

void FWaveParameter::BeforeDelete()
{
}

void FWaveSetParameters::AfterRead()
{
}

void FWaveSetParameters::BeforeDelete()
{
}

void FTimeDate::AfterRead()
{
}

void FTimeDate::BeforeDelete()
{
}

void FBuoyancyVertex::AfterRead()
{
}

void FBuoyancyVertex::BeforeDelete()
{
}

void FStructBoneOverride::AfterRead()
{
}

void FStructBoneOverride::BeforeDelete()
{
}

void UBuoyantMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

	READ_PTR_FULL(OceanManager, AOceanManager);
	READ_PTR_FULL(WaterHeightmap, UWaterHeightmapComponent);
}

void UBuoyantMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

	DELE_PTR_FULL(OceanManager);
	DELE_PTR_FULL(WaterHeightmap);
}

// Function OceanPlugin.CustomVehicleController.GetIsDriving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACustomVehicleController::GetIsDriving()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.GetIsDriving"));

	ACustomVehicleController_GetIsDriving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// ()
void ACustomVehicleController::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.ExitVehicle"));

	ACustomVehicleController_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// ()
// Parameters:
// class APawn*                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.EnterVehicle"));

	ACustomVehicleController_EnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// ()
void ACustomVehicleController::EnableBuoyancy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.EnableBuoyancy"));

	ACustomVehicleController_EnableBuoyancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// ()
void ACustomVehicleController::DrawBuoyancyPoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints"));

	ACustomVehicleController_DrawBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ACustomVehicleController::AfterRead()
{
	APlayerController::AfterRead();

	READ_PTR_FULL(PlayerPawn, APawn);
}

void ACustomVehicleController::BeforeDelete()
{
	APlayerController::BeforeDelete();

	DELE_PTR_FULL(PlayerPawn);
}

void AFishManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(playerType, UClass);
}

void AFishManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(playerType);
}

// Function OceanPlugin.FlockFish.OnEndOverlap
// ()
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.FlockFish.OnEndOverlap"));

	AFlockFish_OnEndOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// ()
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.FlockFish.OnBeginOverlap"));

	AFlockFish_OnBeginOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AFlockFish::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(FishInteractionSphere, USphereComponent);
	READ_PTR_FULL(neighborType, UClass);
	READ_PTR_FULL(playerType, UClass);
}

void AFlockFish::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(FishInteractionSphere);
	DELE_PTR_FULL(neighborType);
	DELE_PTR_FULL(playerType);
}

void UInfiniteSystemComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UInfiniteSystemComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

// Function OceanPlugin.OceanManager.MySetNetworkOffset
// ()
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AOceanManager::MySetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.MySetNetworkOffset"));

	AOceanManager_MySetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// ()
// Parameters:
// class UTexture2D*              Tex2D                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap"));

	AOceanManager_LoadLandscapeHeightmap_Params params;
	params.Tex2D = Tex2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// ()
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.GetWaveHeightValue"));

	AOceanManager_GetWaveHeightValue_Params params;
	params.Location = Location;
	params.World = World;
	params.HeightOnly = HeightOnly;
	params.TwoIterations = TwoIterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// ()
// Parameters:
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.GetHeightmapPixel"));

	AOceanManager_GetHeightmapPixel_Params params;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AOceanManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Landscape, ALandscape);
	READ_PTR_FULL(HeightmapTexture, UTexture2D);
}

void AOceanManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Landscape);
	DELE_PTR_FULL(HeightmapTexture);
}

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATimeManager::SetCurrentLocalTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.SetCurrentLocalTime"));

	ATimeManager_SetCurrentLocalTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.TimeManager.IsLeapYear
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATimeManager::IsLeapYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.IsLeapYear"));

	ATimeManager_IsLeapYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// ()
// Parameters:
// struct FTimeDate               Time                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.InitializeCalendar"));

	ATimeManager_InitializeCalendar_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.TimeManager.IncrementTime
// ()
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.IncrementTime"));

	ATimeManager_IncrementTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.TimeManager.GetYearPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATimeManager::GetYearPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetYearPhase"));

	ATimeManager_GetYearPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATimeManager::GetElapsedDayInMinutes()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes"));

	ATimeManager_GetElapsedDayInMinutes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATimeManager::GetDaysInYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDaysInYear"));

	ATimeManager_GetDaysInYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// ()
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDaysInMonth"));

	ATimeManager_GetDaysInMonth_Params params;
	params.Year = Year;
	params.Month = Month;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATimeManager::GetDayPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDayPhase"));

	ATimeManager_GetDayPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// ()
// Parameters:
// struct FTimeDate               Time                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDayOfYear"));

	ATimeManager_GetDayOfYear_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator ATimeManager::CalculateSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateSunAngle"));

	ATimeManager_CalculateSunAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ATimeManager::CalculateMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateMoonPhase"));

	ATimeManager_CalculateMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator ATimeManager::CalculateMoonAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateMoonAngle"));

	ATimeManager_CalculateMoonAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ATimeManager::AfterRead()
{
	AActor::AfterRead();

}

void ATimeManager::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UWaterHeightmapComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(OceanManager, AOceanManager);
}

void UWaterHeightmapComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(OceanManager);
}

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 C                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea"));

	UAdvancedBuoyancyComponent_TriangleArea_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// ()
// Parameters:
// struct FBuoyancyVertex         H                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBuoyancyVertex         M                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBuoyancyVertex         L                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 InArrow                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle"));

	UAdvancedBuoyancyComponent_SplitTriangle_Params params;
	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// ()
// Parameters:
// float                          NewDensity                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity"));

	UAdvancedBuoyancyComponent_SetMeshDensity_Params params;
	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// ()
// Parameters:
// struct FVector                 position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& position, bool bJustGetHeightAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid"));

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params params;
	params.position = position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// ()
void UAdvancedBuoyancyComponent::GetOcean()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean"));

	UAdvancedBuoyancyComponent_GetOcean_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// ()
// Parameters:
// struct FForceTriangle          TriForce                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FColor                  DebugColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff"));

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params params;
	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// ()
// Parameters:
// struct FVector                 SlamForce                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TriCenter                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce"));

	UAdvancedBuoyancyComponent_ApplySlamForce_Params params;
	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// ()
// Parameters:
// struct FForceTriangle          TriForce                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce"));

	UAdvancedBuoyancyComponent_ApplyForce_Params params;
	params.TriForce = TriForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAdvancedBuoyancyComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(TheOcean, AOceanManager);
	READ_PTR_FULL(BuoyantMesh, UStaticMeshComponent);
}

void UAdvancedBuoyancyComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(TheOcean);
	DELE_PTR_FULL(BuoyantMesh);
}

void UBuoyancyComponent::AfterRead()
{
	UMovementComponent::AfterRead();

	READ_PTR_FULL(OceanManager, AOceanManager);
}

void UBuoyancyComponent::BeforeDelete()
{
	UMovementComponent::BeforeDelete();

	DELE_PTR_FULL(OceanManager);
}

void UBuoyancyForceComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(OceanManager, AOceanManager);
}

void UBuoyancyForceComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(OceanManager);
}

void ABuoyantDestructible::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BuoyantDestructibleComponent, UBuoyantDestructibleComponent);
}

void ABuoyantDestructible::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BuoyantDestructibleComponent);
}

void UBuoyantDestructibleComponent::AfterRead()
{
	UDestructibleComponent::AfterRead();

	READ_PTR_FULL(OceanManager, AOceanManager);
}

void UBuoyantDestructibleComponent::BeforeDelete()
{
	UDestructibleComponent::BeforeDelete();

	DELE_PTR_FULL(OceanManager);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
