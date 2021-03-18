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

// Class MIDIDevice.MIDIDeviceController
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UMIDIDeviceController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMidiEvent;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                  // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZDKQ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceName;                                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6IC1[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MIDIDevice.MIDIDeviceController"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MIDIDevice.MIDIDeviceInputController
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UMIDIDeviceInputController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMIDINoteOn;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDINoteOff;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDIPitchBend;                                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDIAftertouch;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDIControlChange;                                       // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDIProgramChange;                                       // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMIDIChannelAftertouch;                                   // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                  // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SSIP[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceName;                                                // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FCJW[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MIDIDevice.MIDIDeviceInputController"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MIDIDevice.MIDIDeviceManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MIDIDevice.MIDIDeviceManager"));
		return ptr;
	}



	void GetMIDIOutputDeviceIDByName(const struct FString& DeviceName, int* DeviceID);
	void GetMIDIInputDeviceIDByName(const struct FString& DeviceName, int* DeviceID);
	void GetDefaultIMIDIOutputDeviceID(int* DeviceID);
	void GetDefaultIMIDIInputDeviceID(int* DeviceID);
	void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
	class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int DeviceID);
	class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int DeviceID, int MIDIBufferSize);
	class UMIDIDeviceController* CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize);
	void AfterRead();
	void BeforeDelete();

};

// Class MIDIDevice.MIDIDeviceOutputController
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UMIDIDeviceOutputController : public UObject
{
public:
	int                                                DeviceID;                                                  // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RLNF[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DeviceName;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXU9[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class MIDIDevice.MIDIDeviceOutputController"));
		return ptr;
	}



	void SendMIDIProgramChange(int Channel, int ProgramNumber);
	void SendMIDIPitchBend(int Channel, int Pitch);
	void SendMIDINoteOn(int Channel, int Note, int Velocity);
	void SendMIDINoteOff(int Channel, int Note, int Velocity);
	void SendMIDINoteAftertouch(int Channel, int Note, float Amount);
	void SendMIDIEvent(MIDIDevice_EMIDIEventType EventType, int Channel, int data1, int data2);
	void SendMIDIControlChange(int Channel, int Type, int Value);
	void SendMIDIChannelAftertouch(int Channel, float Amount);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
