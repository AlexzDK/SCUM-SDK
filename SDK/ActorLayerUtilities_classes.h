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

// Class ActorLayerUtilities.LayersBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class ActorLayerUtilities.LayersBlueprintLibrary"));
		return ptr;
	}



	void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
	TArray<class AActor*> GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
	void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
