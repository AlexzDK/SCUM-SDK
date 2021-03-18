#pragma once

// Name: S, Version: N


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARSessionFunctionLibrary"));
		return ptr;
	}



	void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARFrameFunctionLibrary"));
		return ptr;
	}



	bool LuminARLineTrace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
	MagicLeapAR_ELuminARTrackingState GetTrackingState();
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminARLightEstimate
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class ULuminARLightEstimate : public UARBasicLightEstimate
{
public:
	TArray<float>                                      AmbientIntensityNits;                                      // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARLightEstimate"));
		return ptr;
	}



	TArray<float> GetAmbientIntensityNits();
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminARCandidateImage
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class ULuminARCandidateImage : public UARCandidateImage
{
public:
	bool                                               bUseUnreliablePose;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bImageIsStationary;                                        // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	MagicLeapImageTracker_EMagicLeapImageTargetOrientation AxisOrientation;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OH2N[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARCandidateImage"));
		return ptr;
	}



	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
	MagicLeapImageTracker_EMagicLeapImageTargetOrientation GetAxisOrientation();
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARImageTrackingFunctionLibrary"));
		return ptr;
	}



	class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, MagicLeapImageTracker_EMagicLeapImageTargetOrientation InAxisOrientation);
	class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminAROrigin
// 0x00C0 (FullSize[0x02E0] - InheritedSize[0x0220])
class ALuminAROrigin : public AAROriginActor
{
public:
	class UMRMeshComponent*                            MRMeshComponent;                                           // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          PlaneSurfaceMaterial;                                      // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          WireframeMaterial;                                         // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VNA8[0xA8];                                    // 0x0238(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminAROrigin"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapAR.LuminARSessionConfig
// 0x0090 (FullSize[0x01A0] - InheritedSize[0x0110])
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	struct FMagicLeapPlanesQuery                       PlanesQuery;                                               // 0x0110(0x0060) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                MaxPlaneQueryResults;                                      // 0x0170(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlaneArea;                                              // 0x0174(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bArbitraryOrientationPlaneDetection;                       // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_525B[0x3];                                     // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PlaneSearchExtents;                                        // 0x017C(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  PlaneQueryFlags;                                           // 0x0188(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	bool                                               bDiscardZeroExtentPlanes;                                  // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDefaultUseUnreliablePose;                                 // 0x0199(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SFA[0x6];                                     // 0x019A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapAR.LuminARSessionConfig"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
