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

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameplayTaskOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTaskOwnerInterface"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTaskResource
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             AutoResourceID;                                            // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MFKH[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bManuallySetID : 1;                                        // 0x0030(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJMG[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTaskResource"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_S1ZA[0xC];                                     // 0x00B0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      UnknownData_P42A : 1;                                      // 0x00BC(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bIsNetDirty : 1;                                           // 0x00BC(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTFI[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       SimulatedTasks;                                            // 0x00C0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                         // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZESW[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayTask*>                       TickingTasks;                                              // 0x00F0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       KnownTasks;                                                // 0x0100(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                  // 0x0110(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTasksComponent"));
		return ptr;
	}



	void OnRep_SimulatedTasks();
	GameplayTasks_EGameplayTaskRunResult K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTask
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData_WTAV[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       InstanceName;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WIXN[0x2];                                     // 0x0038(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	GameplayTasks_ETaskResourceOverlapPolicy           ResourceOverlapPolicy;                                     // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F6OC[0x25];                                    // 0x003B(0x0025) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayTask*                               ChildTask;                                                 // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask"));
		return ptr;
	}



	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WSO6[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ClassToSpawn;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_SpawnActor"));
		return ptr;
	}



	class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OX4[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_TimeLimitedExecution"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQTV[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_WaitDelay"));
		return ptr;
	}



	class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class GameplayTasks.GameplayTask_ClaimResource"));
		return ptr;
	}



	class UGameplayTask_ClaimResource* ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
