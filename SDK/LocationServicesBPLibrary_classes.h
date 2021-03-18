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

// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class LocationServicesBPLibrary.LocationServicesImpl"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocationServices : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class LocationServicesBPLibrary.LocationServices"));
		return ptr;
	}



	bool StopLocationServices();
	bool StartLocationServices();
	bool IsLocationAccuracyAvailable(LocationServicesBPLibrary_ELocationAccuracy Accuracy);
	bool InitLocationServices(LocationServicesBPLibrary_ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	class ULocationServicesImpl* GetLocationServicesImpl();
	struct FLocationServicesData GetLastKnownLocation();
	bool AreLocationServicesEnabled();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
