#include "pch.h"
#include "MemoryManager.h"

MemoryManager* Mm = new MemoryManager();

bool MemoryManager::ReadImp(const uintptr_t address, void* dst, const size_t size) const
{
	return mem::ex::read(ProcessEx, reinterpret_cast<void*>(address), dst, size);
}

bool MemoryManager::WriteImp(const uintptr_t address, void* src, const size_t size) const
{
	return mem::ex::write(ProcessEx, reinterpret_cast<void*>(address), src, size);
}

void MemoryManager::StorePointer(const uintptr_t exAddress, void* allocAddress)
{
	const std::lock_guard<std::mutex> lock(_allocMutex);

	_allocToExMap[allocAddress] = exAddress;
	_exToAllocMap[exAddress] = allocAddress;
}

void MemoryManager::RemovePointer(const uintptr_t exAddress, void* allocAddress)
{
	const std::lock_guard<std::mutex> lock(_allocMutex);

	_exToAllocMap.erase(exAddress);
	_allocToExMap.erase(allocAddress);
}

bool MemoryManager::ContainsExPtr(const uintptr_t exAddress)
{
	return _exToAllocMap.find(exAddress) != _exToAllocMap.end();
}

bool MemoryManager::ContainsAllocPtr(void* allocAddress)
{
	return _allocToExMap.find(allocAddress) != _allocToExMap.end();
}

bool MemoryManager::Init(const std::wstring& processName)
{
	if (ProcessEx.handle != INVALID_HANDLE_VALUE)
		return false;

	mem::pid_t pidEx = mem::ex::get_pid(processName);
	if (!pidEx)
		return false;

	ProcessEx = mem::ex::get_process(pidEx);
	return true;
}

uintptr_t MemoryManager::GetExPointer(void* allocAddress)
{
	if (!ContainsAllocPtr(allocAddress))
		return 0;

	return _allocToExMap[allocAddress];
}