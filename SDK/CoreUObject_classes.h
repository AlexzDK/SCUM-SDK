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

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 67)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Object"));
		return ptr;
	}



	void ExecuteUbergraph(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_PDOE[0xC8];                                    // 0x0028(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderExportObject"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Field"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Struct
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UStruct : public UField, public FStructBaseChain
{
public:
	class UStruct*                                     SuperField;                                                // 0x0040(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      ChildProperties;                                           // 0x0050(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0058(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x005C(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t>                                    Script;                                                    // 0x0060(0x0010) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                              // 0x0070(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                   // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   DestructorLink;                                            // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PostConstructLink;                                         // 0x0088(0x0008) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptObjectReferences;                                    // 0x0090(0x0010) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Struct"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x00A0(0x0004) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                 // 0x00A4(0x0002) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                  // 0x00A6(0x0001) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_JCL70SH8HF[0x01];                                      // 0x00A7(0x0001) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                 // 0x00A8(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           ReturnValueOffset;                                         // 0x00AA(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCId;                                                     // 0x00AC(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t                                           RPCResponseId;                                             // 0x00AE(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00B8(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00C0(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_PVDUD3D61K[0x04];                                      // 0x00C4(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00C8(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Function"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x01B8 (FullSize[0x0298] - InheritedSize[0x00E0])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_L94W[0x1B8];                                   // 0x00E0(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderFunction"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MetaData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_3XII[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MetaData"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_AMUR[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectRedirector"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Property
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_JZ71[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.EnumProperty
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_EX5X[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.EnumProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_UPGN[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ArrayProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_SYL1[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectPropertyBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_RWOT[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.BoolProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.NumericProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_LJ1H[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ByteProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_N9PG[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ClassProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_EX2D[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.DoubleProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.FloatProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt16Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt32Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt64Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.WeakObjectProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.TextProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.PropertyWrapper
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_99I4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.PropertyWrapper"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegatePropertyWrapper"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastInlineDelegatePropertyWrapper"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.IntProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Int8Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Int16Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Int64Property"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_SQJ2[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.InterfaceProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.LazyObjectProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MapProperty
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_KNC7[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MapProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_1E58[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegateProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastInlineDelegateProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastSparseDelegateProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.NameProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.SetProperty
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_SO0R[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.SetProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.SoftObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class USoftObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.SoftObjectProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.SoftClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData_78EZ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.SoftClassProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.StrProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_AFOL[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.StructProperty"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Interface"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.GCObjectReferencer
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_B8JQ[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.GCObjectReferencer"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_4MWH[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.TextBuffer"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ScriptStruct
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_2OS4[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.ScriptStruct"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Package
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_V0AB[0x78];                                    // 0x0028(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Package"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateFunction"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.SparseDelegateFunction
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class USparseDelegateFunction : public UDelegateFunction
{
public:
	unsigned char                                      UnknownData_SIQE[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.SparseDelegateFunction"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Class
// 0x0180 (FullSize[0x0230] - InheritedSize[0x00B0])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_ZLRD[0x180];                                   // 0x00B0(0x0180) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		GetVFunction<UObject*(*)(UClass*)>(this, /*FUNC_INDEX*/)(this);
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Class"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DynamicClass
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData_2H2B[0x80];                                    // 0x0230(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.DynamicClass"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.PackageMap
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_WC8N[0xB8];                                    // 0x0028(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.PackageMap"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Enum
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_7B44[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.Enum"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderClass
// 0x01B8 (FullSize[0x03E8] - InheritedSize[0x0230])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_N9FR[0x1B8];                                   // 0x0230(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderClass"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
