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

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
struct AReplicationGraphDebugActor_ServerStopDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
struct AReplicationGraphDebugActor_ServerStartDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PeriodFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
struct AReplicationGraphDebugActor_ServerPrintCullDistances_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
	struct FString                                     str;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
struct AReplicationGraphDebugActor_ServerCellInfo_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
	struct FVector                                     CellLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CellExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
