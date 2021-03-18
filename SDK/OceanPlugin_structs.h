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
// Enums
//---------------------------------------------------------------------------

// Enum OceanPlugin.EFollowMethod
enum class OceanPlugin_EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	FollowCamera                   = 1,
	FollowPawn                     = 2,
	Stationary                     = 3,
	EFollowMethod_MAX              = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanPlugin.ForceTriangle
// 0x006C
struct FForceTriangle
{
	unsigned char                                      UnknownData_VIYY[0x6C];                                    // 0x0000(0x006C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amplitude;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Steepness;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                    // 0x0000(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave02;                                                    // 0x0014(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave03;                                                    // 0x0028(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave04;                                                    // 0x003C(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave05;                                                    // 0x0050(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave06;                                                    // 0x0064(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave07;                                                    // 0x0078(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveParameter                              Wave08;                                                    // 0x008C(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanPlugin.TimeDate
// 0x001C
struct FTimeDate
{
	int                                                Millisecond;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Second;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Minute;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Hour;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Day;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Month;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Year;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanPlugin.BuoyancyVertex
// 0x0010
struct FBuoyancyVertex
{
	unsigned char                                      UnknownData_WCCK[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Density;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TestRadius;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
