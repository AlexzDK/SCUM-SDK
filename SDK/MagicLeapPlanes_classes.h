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

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0068 (FullSize[0x0260] - InheritedSize[0x01F8])
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>  QueryFlags;                                                // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UBoxComponent*                               SearchVolume;                                              // 0x0208(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinHolePerimeter;                                          // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlaneArea;                                              // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MagicLeapPlanes_EMagicLeapPlaneQueryType           QueryType;                                                 // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_165F[0x3];                                     // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SimilarityThreshold;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BITK[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlanesQueryResult;                                       // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnPersistentPlanesQueryResult;                             // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WJUQ[0x18];                                    // 0x0248(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapPlanes.MagicLeapPlanesComponent"));
		return ptr;
	}



	bool RequestPlanesAsync();
	void AfterRead();
	void BeforeDelete();

};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary"));
		return ptr;
	}



	void ReorderPlaneFlags(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InPriority, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	bool RemovePersistentQuery(const struct FGuid& Handle);
	void RemoveFlagsNotInQuery(TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags> InResultFlags, TArray<MagicLeapPlanes_EMagicLeapPlaneQueryFlags>* OutFlags);
	bool PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate);
	bool PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate);
	bool IsTrackerValid();
	struct FTransform GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult);
	bool DestroyTracker();
	bool CreateTracker();
	struct FGuid AddPersistentQuery(MagicLeapPlanes_EMagicLeapPlaneQueryType PersistentQueryType);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
