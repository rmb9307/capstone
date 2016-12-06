#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.InfraredFrameArrivedEventArgs>>>
struct Dictionary_2_t3666469762;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.InfraredFrameArrivedEventArgs>>>
struct  ThreadSafeDictionary_2_t1618214233  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Helper.ThreadSafeDictionary`2::_impl
	Dictionary_2_t3666469762 * ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t1618214233, ____impl_0)); }
	inline Dictionary_2_t3666469762 * get__impl_0() const { return ____impl_0; }
	inline Dictionary_2_t3666469762 ** get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(Dictionary_2_t3666469762 * value)
	{
		____impl_0 = value;
		Il2CppCodeGenWriteBarrier(&____impl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
