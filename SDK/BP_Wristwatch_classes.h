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

// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class ABP_Wristwatch_C : public AWristwatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C"));
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetDisplayBrightness(float Value);
	void ExecuteUbergraph_BP_Wristwatch(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
