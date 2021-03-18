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

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapController.MagicLeapControllerFunctionLibrary"));
		return ptr;
	}



	bool SetMotionSourceForHand(InputCore_EControllerHand Hand, const struct FName& MotionSource);
	bool SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode);
	bool PlayLEDPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayLEDEffect(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayHapticPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
	bool PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity);
	int MaxSupportedMagicLeapControllers();
	bool IsMLControllerConnected(const struct FName& MotionSource);
	void InvertControllerMapping();
	struct FName GetMotionSourceForHand(InputCore_EControllerHand Hand);
	MagicLeapController_EMagicLeapControllerType GetMLControllerType(InputCore_EControllerHand Hand);
	InputCore_EControllerHand GetHandForMotionSource(const struct FName& MotionSource);
	MagicLeapController_EMagicLeapControllerType GetControllerType(const struct FName& MotionSource);
	MagicLeapController_EMagicLeapControllerTrackingMode GetControllerTrackingMode();
	bool GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand);
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_BILL[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTouchpadGestureStart;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureContinue;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTouchpadGestureEnd;                                      // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZNQ[0x58];                                    // 0x00E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapController.MagicLeapTouchpadGesturesComponent"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
