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

// AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C
// 0x00C0 (FullSize[0x0378] - InheritedSize[0x02B8])
class UABP_Prisoner_Corpse_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_ZGXY[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x02F8(0x0080)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C"));
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Prisoner_Corpse(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
