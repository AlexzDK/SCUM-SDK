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

// AnimBlueprintGeneratedClass AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C
// 0x0458 (FullSize[0x0748] - InheritedSize[0x02F0])
class UAnimBP_ImprovisedPistol50cal_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02F8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x0328(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x0370(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x03B8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0400(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x0448(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x04F8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x0520(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x0548(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x0570(0x0158)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x06C8(0x0080)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C"));
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
