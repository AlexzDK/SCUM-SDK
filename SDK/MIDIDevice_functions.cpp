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

void FMIDIDeviceInfo::AfterRead()
{
}

void FMIDIDeviceInfo::BeforeDelete()
{
}

void FFoundMIDIDevice::AfterRead()
{
}

void FFoundMIDIDevice::BeforeDelete()
{
}

void UMIDIDeviceController::AfterRead()
{
	UObject::AfterRead();

}

void UMIDIDeviceController::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMIDIDeviceInputController::AfterRead()
{
	UObject::AfterRead();

}

void UMIDIDeviceInputController::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
// ()
// Parameters:
// struct FString                 DeviceName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(const struct FString& DeviceName, int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName"));

	UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params params;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
// ()
// Parameters:
// struct FString                 DeviceName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::GetMIDIInputDeviceIDByName(const struct FString& DeviceName, int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName"));

	UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params params;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID
// ()
// Parameters:
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::GetDefaultIMIDIOutputDeviceID(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID"));

	UMIDIDeviceManager_GetDefaultIMIDIOutputDeviceID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID
// ()
// Parameters:
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::GetDefaultIMIDIInputDeviceID(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID"));

	UMIDIDeviceManager_GetDefaultIMIDIInputDeviceID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// ()
// Parameters:
// TArray<struct FFoundMIDIDevice> OutMIDIDevices                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices"));

	UMIDIDeviceManager_FindMIDIDevices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = params.OutMIDIDevices;

}


// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
// ()
// Parameters:
// TArray<struct FMIDIDeviceInfo> OutMIDIInputDevices            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FMIDIDeviceInfo> OutMIDIOutputDevices           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMIDIDeviceManager::FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo"));

	UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMIDIInputDevices != nullptr)
		*OutMIDIInputDevices = params.OutMIDIInputDevices;
	if (OutMIDIOutputDevices != nullptr)
		*OutMIDIOutputDevices = params.OutMIDIOutputDevices;

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
// ()
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceOutputController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMIDIDeviceOutputController* UMIDIDeviceManager::CreateMIDIDeviceOutputController(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController"));

	UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
// ()
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MIDIBufferSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceInputController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMIDIDeviceInputController* UMIDIDeviceManager::CreateMIDIDeviceInputController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController"));

	UMIDIDeviceManager_CreateMIDIDeviceInputController_Params params;
	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// ()
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MIDIBufferSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController"));

	UMIDIDeviceManager_CreateMIDIDeviceController_Params params;
	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMIDIDeviceManager::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMIDIDeviceManager::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ProgramNumber                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDIProgramChange(int Channel, int ProgramNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange"));

	UMIDIDeviceOutputController_SendMIDIProgramChange_Params params;
	params.Channel = Channel;
	params.ProgramNumber = ProgramNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDIPitchBend(int Channel, int Pitch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend"));

	UMIDIDeviceOutputController_SendMIDIPitchBend_Params params;
	params.Channel = Channel;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDINoteOn(int Channel, int Note, int Velocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn"));

	UMIDIDeviceOutputController_SendMIDINoteOn_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDINoteOff(int Channel, int Note, int Velocity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff"));

	UMIDIDeviceOutputController_SendMIDINoteOff_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int Channel, int Note, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch"));

	UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
// ()
// Parameters:
// MIDIDevice_EMIDIEventType      EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            data1                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            data2                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDIEvent(MIDIDevice_EMIDIEventType EventType, int Channel, int data1, int data2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent"));

	UMIDIDeviceOutputController_SendMIDIEvent_Params params;
	params.EventType = EventType;
	params.Channel = Channel;
	params.data1 = data1;
	params.data2 = data2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDIControlChange(int Channel, int Type, int Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange"));

	UMIDIDeviceOutputController_SendMIDIControlChange_Params params;
	params.Channel = Channel;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
// ()
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int Channel, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch"));

	UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params params;
	params.Channel = Channel;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMIDIDeviceOutputController::AfterRead()
{
	UObject::AfterRead();

}

void UMIDIDeviceOutputController::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
