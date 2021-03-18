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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Prisoner.BP_Prisoner_C.UpdateHair
struct ABP_Prisoner_C_UpdateHair_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange
struct ABP_Prisoner_C_FindOtherPlayersInRange_Params
{
	float                                              SearchDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Prisoner_C*>                      OtherPlayers;                                              // (Parm, OutParm)
};

// Function BP_Prisoner.BP_Prisoner_C.DebugPrint
struct ABP_Prisoner_C_DebugPrint_Params
{
	struct FString                                     MessageString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ValueString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove
struct ABP_Prisoner_C_IKFootTraceToRemove_Params
{
	float                                              TraceDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKOffset;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript
struct ABP_Prisoner_C_UserConstructionScript_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.ReceiveTick
struct ABP_Prisoner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName
struct ABP_Prisoner_C_InitTextMeshFromName_Params
{
	struct FString                                     Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Prisoner.BP_Prisoner_C.DrawFootstep
struct ABP_Prisoner_C_DrawFootstep_Params
{
	bool                                               Flip;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Prisoner.BP_Prisoner_C.UpdateHairVisuals
struct ABP_Prisoner_C_UpdateHairVisuals_Params
{
};

// Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner
struct ABP_Prisoner_C_ExecuteUbergraph_BP_Prisoner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
