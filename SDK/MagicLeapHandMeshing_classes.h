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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent"));
		return ptr;
	}



	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary"));
		return ptr;
	}



	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool DestroyClient();
	bool CreateClient();
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
