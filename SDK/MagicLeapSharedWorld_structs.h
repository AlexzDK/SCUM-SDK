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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
// 0x0024
struct FMagicLeapSharedWorldPinData
{
	struct FGuid                                       PinId;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                        PinState;                                                  // 0x0010(0x0014) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
// 0x0010
struct FMagicLeapSharedWorldLocalData
{
	TArray<struct FMagicLeapSharedWorldPinData>        LocalPins;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
// 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{
	TArray<struct FTransform>                          AlignmentTransforms;                                       // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
// 0x0010
struct FMagicLeapSharedWorldSharedData
{
	TArray<struct FGuid>                               PinIDs;                                                    // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
