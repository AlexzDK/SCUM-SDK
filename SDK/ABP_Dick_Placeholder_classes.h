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

// AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C
// 0x0949 (FullSize[0x0C01] - InheritedSize[0x02B8])
class UABP_Dick_Placeholder_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_DY2Y[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x02F8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0398(0x0020)
	unsigned char                                      UnknownData_Z673[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik;                                      // 0x03C0(0x0190)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_2;                               // 0x0550(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0560(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose;                                 // 0x0580(0x0010)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody;                                   // 0x0590(0x0650)
	bool                                               EnabledIK;                                                 // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1TC8[0x3];                                     // 0x0BE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _targetIK;                                                 // 0x0BE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPenisInHands;                                            // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YIR9[0x3];                                     // 0x0BF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _handsIK;                                                  // 0x0BF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInRange;                                                 // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C"));
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_Dick_Placeholder(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
