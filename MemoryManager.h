#pragma once

/**
 * @file MemoryManager.h
 *
 * @author CorrM
 */

#include <mutex>
#include <string>
#include "libmem/libmem.h" // https://github.com/rdbo/libmem

#define READ_PTR_FULL(field, fieldType) field = Mem->ReadPtrFully<fieldType>(reinterpret_cast<uintptr_t>(field))
#define DELE_PTR_FULL(field) Mem->DeletePtr(field)

class MemoryManager
{
private:
    std::unordered_map<void*, uintptr_t> _allocToExMap;
    std::unordered_map<uintptr_t, void*> _exToAllocMap;
    std::mutex _allocMutex;

public:
    mem::process_t ProcessEx;

private:
    bool ReadImp(uintptr_t address, void* dst, size_t size) const;
    bool WriteImp(uintptr_t address, void* src, size_t size) const;

    void StorePointer(uintptr_t exAddress, void* allocAddress);
    void RemovePointer(uintptr_t exAddress, void* allocAddress);

    bool ContainsExPtr(uintptr_t exAddress);
    bool ContainsAllocPtr(void* allocAddress);

public:
    bool Init(const std::wstring& processName);
    uintptr_t GetExPointer(void* allocAddress);

    template<typename T>
    T Read(const uintptr_t address)
    {
        T ret{};

        if (address)
            ReadImp(address, reinterpret_cast<void*>(&ret), sizeof(T));

        return ret;
    }

    /// <summary>
    /// Read whole type and call `AfterRead` to init all pointers.
    /// </summary>
    /// <typeparam name="T">Type to read</typeparam>
    /// <param name="address">Address of targeted memory</param>
    /// <returns>Instance of <typeparamref name="T"/></returns>
    template<typename T>
    T* ReadPtrFully(const uintptr_t address)
    {
        // nullptr ?!
        if (!address)
            return nullptr;

        // If found just return the pointer
        if (ContainsExPtr(address))
            return static_cast<T*>(_exToAllocMap[address]);

        // Alloc
        T* ret = new T();

        // Read
        ReadImp(address, reinterpret_cast<void*>(ret), sizeof(T));

        // Store on alloc map (must to store before call `AfterRead`)
        StorePointer(address, reinterpret_cast<void*>(ret));

        // Init pointers
        ret->AfterRead();

        return ret;
    }

    /*template<typename T>
    T* ReadArrFully(const uintptr_t address, const int arrayCount)
    {
        // nullptr ?!
        if (!address)
            return nullptr;

        // If found just return the pointer
        if (ContainsExPtr(address))
            return static_cast<T*>(_exToAllocMap[address]);

        // Alloc
        T* ret = new T[arrayCount];

        // Read
        ReadImp(address, reinterpret_cast<void*>(ret), sizeof(T) * arrayCount);

        // Store on alloc map (must to store before call `AfterRead`)
        StorePointer(address, reinterpret_cast<void*>(ret));

        // Init pointers
        for (int i = 0; i < arrayCount - 1; ++i)
        {
            ret[i].AfterRead();
        }

        return ret;
    }*/

    template<typename T>
    bool Write(const uintptr_t address, const T& value)
    {
        if (!address)
            return false;

        return WriteImp(address, reinterpret_cast<void*>(const_cast<T*>(&value)), sizeof(T));
    }

    template<typename T>
    void DeletePtr(T* allocPtr)
    {
        void* ptr = reinterpret_cast<void*>(allocPtr);

        if (!ContainsAllocPtr(ptr))
            return;

        uintptr_t ex = _allocToExMap[ptr];
        void* alloc = _exToAllocMap[ex];

        RemovePointer(ex, alloc);

        allocPtr->BeforeDelete();
        delete allocPtr;
    }
};
