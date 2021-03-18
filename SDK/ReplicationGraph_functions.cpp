// Name: S, Version: N

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FConnectionAlwaysRelevantNodePair::AfterRead()
{
	READ_PTR_FULL(NetConnection, UNetConnection);
	READ_PTR_FULL(Node, UReplicationGraphNode_AlwaysRelevant_ForConnection);
}

void FConnectionAlwaysRelevantNodePair::BeforeDelete()
{
	DELE_PTR_FULL(NetConnection);
	DELE_PTR_FULL(Node);
}

void FLastLocationGatherInfo::AfterRead()
{
	READ_PTR_FULL(Connection, UNetConnection);
}

void FLastLocationGatherInfo::BeforeDelete()
{
	DELE_PTR_FULL(Connection);
}

void FAlwaysRelevantActorInfo::AfterRead()
{
	READ_PTR_FULL(Connection, UNetConnection);
	READ_PTR_FULL(LastViewer, AActor);
	READ_PTR_FULL(LastViewTarget, AActor);
}

void FAlwaysRelevantActorInfo::BeforeDelete()
{
	DELE_PTR_FULL(Connection);
	DELE_PTR_FULL(LastViewer);
	DELE_PTR_FULL(LastViewTarget);
}

void FTearOffActorInfo::AfterRead()
{
	READ_PTR_FULL(Actor, AActor);
}

void FTearOffActorInfo::BeforeDelete()
{
	DELE_PTR_FULL(Actor);
}

void FClassReplicationInfo::AfterRead()
{
}

void FClassReplicationInfo::BeforeDelete()
{
}

void UReplicationGraphNode::AfterRead()
{
	UObject::AfterRead();

}

void UReplicationGraphNode::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UReplicationGraphNode_ActorList::AfterRead()
{
	UReplicationGraphNode::AfterRead();

}

void UReplicationGraphNode_ActorList::BeforeDelete()
{
	UReplicationGraphNode::BeforeDelete();

}

void UReplicationGraphNode_DormancyNode::AfterRead()
{
	UReplicationGraphNode_ActorList::AfterRead();

}

void UReplicationGraphNode_DormancyNode::BeforeDelete()
{
	UReplicationGraphNode_ActorList::BeforeDelete();

}

void UReplicationGraphNode_GridCell::AfterRead()
{
	UReplicationGraphNode_ActorList::AfterRead();

	READ_PTR_FULL(DynamicNode, UReplicationGraphNode);
	READ_PTR_FULL(DormancyNode, UReplicationGraphNode_DormancyNode);
}

void UReplicationGraphNode_GridCell::BeforeDelete()
{
	UReplicationGraphNode_ActorList::BeforeDelete();

	DELE_PTR_FULL(DynamicNode);
	DELE_PTR_FULL(DormancyNode);
}

void UReplicationGraphNode_GridSpatialization2D::AfterRead()
{
	UReplicationGraphNode::AfterRead();

}

void UReplicationGraphNode_GridSpatialization2D::BeforeDelete()
{
	UReplicationGraphNode::BeforeDelete();

}

void UReplicationGraphNode_AlwaysRelevant::AfterRead()
{
	UReplicationGraphNode::AfterRead();

	READ_PTR_FULL(ChildNode, UReplicationGraphNode);
}

void UReplicationGraphNode_AlwaysRelevant::BeforeDelete()
{
	UReplicationGraphNode::BeforeDelete();

	DELE_PTR_FULL(ChildNode);
}

void UReplicationGraphNode_ActorListFrequencyBuckets::AfterRead()
{
	UReplicationGraphNode::AfterRead();

}

void UReplicationGraphNode_ActorListFrequencyBuckets::BeforeDelete()
{
	UReplicationGraphNode::BeforeDelete();

}

void UReplicationGraphNode_DynamicSpatialFrequency::AfterRead()
{
	UReplicationGraphNode_ActorList::AfterRead();

}

void UReplicationGraphNode_DynamicSpatialFrequency::BeforeDelete()
{
	UReplicationGraphNode_ActorList::BeforeDelete();

}

void UReplicationGraphNode_ConnectionDormancyNode::AfterRead()
{
	UReplicationGraphNode_ActorList::AfterRead();

}

void UReplicationGraphNode_ConnectionDormancyNode::BeforeDelete()
{
	UReplicationGraphNode_ActorList::BeforeDelete();

}

void UReplicationGraphNode_AlwaysRelevant_ForConnection::AfterRead()
{
	UReplicationGraphNode_ActorList::AfterRead();

}

void UReplicationGraphNode_AlwaysRelevant_ForConnection::BeforeDelete()
{
	UReplicationGraphNode_ActorList::BeforeDelete();

}

void UReplicationGraphNode_TearOff_ForConnection::AfterRead()
{
	UReplicationGraphNode::AfterRead();

}

void UReplicationGraphNode_TearOff_ForConnection::BeforeDelete()
{
	UReplicationGraphNode::BeforeDelete();

}

void UNetReplicationGraphConnection::AfterRead()
{
	UReplicationConnectionDriver::AfterRead();

	READ_PTR_FULL(NetConnection, UNetConnection);
	READ_PTR_FULL(DebugActor, AReplicationGraphDebugActor);
	READ_PTR_FULL(TearOffNode, UReplicationGraphNode_TearOff_ForConnection);
}

void UNetReplicationGraphConnection::BeforeDelete()
{
	UReplicationConnectionDriver::BeforeDelete();

	DELE_PTR_FULL(NetConnection);
	DELE_PTR_FULL(DebugActor);
	DELE_PTR_FULL(TearOffNode);
}

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// ()
void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging"));

	AReplicationGraphDebugActor_ServerStopDebugging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// ()
void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging"));

	AReplicationGraphDebugActor_ServerStartDebugging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PeriodFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass"));

	AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params params;
	params.Class = Class;
	params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// ()
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CullDistance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass"));

	AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params;
	params.Class = Class;
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint"));

	AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// ()
void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances"));

	AReplicationGraphDebugActor_ServerPrintCullDistances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// ()
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const struct FString& str)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo"));

	AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params;
	params.str = str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// ()
void AReplicationGraphDebugActor::ServerCellInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo"));

	AReplicationGraphDebugActor_ServerCellInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// ()
// Parameters:
// struct FVector                 CellLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 CellExtent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo"));

	AReplicationGraphDebugActor_ClientCellInfo_Params params;
	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AReplicationGraphDebugActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ReplicationGraph, UReplicationGraph);
	READ_PTR_FULL(ConnectionManager, UNetReplicationGraphConnection);
}

void AReplicationGraphDebugActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ReplicationGraph);
	DELE_PTR_FULL(ConnectionManager);
}

void UReplicationGraph::AfterRead()
{
	UReplicationDriver::AfterRead();

	READ_PTR_FULL(ReplicationConnectionManagerClass, UClass);
	READ_PTR_FULL(NetDriver, UNetDriver);
}

void UReplicationGraph::BeforeDelete()
{
	UReplicationDriver::BeforeDelete();

	DELE_PTR_FULL(ReplicationConnectionManagerClass);
	DELE_PTR_FULL(NetDriver);
}

void UBasicReplicationGraph::AfterRead()
{
	UReplicationGraph::AfterRead();

	READ_PTR_FULL(GridNode, UReplicationGraphNode_GridSpatialization2D);
	READ_PTR_FULL(AlwaysRelevantNode, UReplicationGraphNode_ActorList);
}

void UBasicReplicationGraph::BeforeDelete()
{
	UReplicationGraph::BeforeDelete();

	DELE_PTR_FULL(GridNode);
	DELE_PTR_FULL(AlwaysRelevantNode);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
