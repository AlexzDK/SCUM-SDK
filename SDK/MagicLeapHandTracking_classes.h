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

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary"));
		return ptr;
	}



	void SetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence);
	bool SetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	bool IsHoldingControl(InputCore_EControllerHand Hand);
	float GetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture);
	bool GetMotionSourceForHandKeypoint(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, struct FName* OutMotionSource);
	bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
	bool GetHandThumbTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* secondary);
	bool GetHandKeypointForMotionSource(const struct FName& MotionSource, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint* OutKeyPoint);
	bool GetHandIndexFingerTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
	bool GetHandCenterNormalized(InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized);
	bool GetHandCenter(InputCore_EControllerHand Hand, struct FTransform* HandCenter);
	bool GetGestureKeypointTransform(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
	bool GetGestureKeypoints(InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints);
	bool GetCurrentGestureConfidence(InputCore_EControllerHand Hand, float* Confidence);
	bool GetCurrentGesture(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture);
	bool GetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
