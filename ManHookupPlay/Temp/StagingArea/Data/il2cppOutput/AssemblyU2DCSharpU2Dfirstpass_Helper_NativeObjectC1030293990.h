#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>>
struct Dictionary_2_t2300046522;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.NativeObjectCache
struct  NativeObjectCache_t1030293990  : public Il2CppObject
{
public:

public:
};

struct NativeObjectCache_t1030293990_StaticFields
{
public:
	// System.Object Helper.NativeObjectCache::_lock
	Il2CppObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>> Helper.NativeObjectCache::_objectCache
	Dictionary_2_t2300046522 * ____objectCache_1;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(NativeObjectCache_t1030293990_StaticFields, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__objectCache_1() { return static_cast<int32_t>(offsetof(NativeObjectCache_t1030293990_StaticFields, ____objectCache_1)); }
	inline Dictionary_2_t2300046522 * get__objectCache_1() const { return ____objectCache_1; }
	inline Dictionary_2_t2300046522 ** get_address_of__objectCache_1() { return &____objectCache_1; }
	inline void set__objectCache_1(Dictionary_2_t2300046522 * value)
	{
		____objectCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____objectCache_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
