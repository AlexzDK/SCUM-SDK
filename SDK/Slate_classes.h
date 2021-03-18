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

// Class Slate.SlateSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                                // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGDV[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.SlateSettings"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (FullSize[0x0318] - InheritedSize[0x0030])
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                              // 0x0030(0x02E8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.SpinBoxWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.TextBlockWidgetStyle
// 0x0270 (FullSize[0x02A0] - InheritedSize[0x0030])
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                            // 0x0030(0x0270) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.TextBlockWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ToolMenuBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UToolMenuBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ToolMenuBase"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.EditableTextBoxWidgetStyle
// 0x07F8 (FullSize[0x0828] - InheritedSize[0x0030])
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0030(0x07F8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.EditableTextBoxWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.EditableTextWidgetStyle
// 0x0220 (FullSize[0x0250] - InheritedSize[0x0030])
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                         // 0x0030(0x0220) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.EditableTextWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ProgressWidgetStyle
// 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0030(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ProgressWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (FullSize[0x0500] - InheritedSize[0x0030])
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0030(0x04D0) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ScrollBarWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (FullSize[0x0258] - InheritedSize[0x0030])
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                            // 0x0030(0x0228) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ScrollBoxWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ButtonWidgetStyle
// 0x0278 (FullSize[0x02A8] - InheritedSize[0x0030])
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                               // 0x0030(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ButtonWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.CheckBoxWidgetStyle
// 0x0580 (FullSize[0x05B0] - InheritedSize[0x0030])
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                             // 0x0030(0x0580) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.CheckBoxWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ComboBoxWidgetStyle
// 0x03F0 (FullSize[0x0420] - InheritedSize[0x0030])
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                             // 0x0030(0x03F0) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ComboBoxWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Slate.ComboButtonWidgetStyle
// 0x03B8 (FullSize[0x03E8] - InheritedSize[0x0030])
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0030(0x03B8) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass(_xor_("Class Slate.ComboButtonWidgetStyle"));
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
