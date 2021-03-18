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

void USteamAuthComponentModuleInterface::AfterRead()
{
	UHandlerComponentFactory::AfterRead();

}

void USteamAuthComponentModuleInterface::BeforeDelete()
{
	UHandlerComponentFactory::BeforeDelete();

}

void USteamNetDriver::AfterRead()
{
	UIpNetDriver::AfterRead();

}

void USteamNetDriver::BeforeDelete()
{
	UIpNetDriver::BeforeDelete();

}

void USteamNetConnection::AfterRead()
{
	UIpConnection::AfterRead();

}

void USteamNetConnection::BeforeDelete()
{
	UIpConnection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
