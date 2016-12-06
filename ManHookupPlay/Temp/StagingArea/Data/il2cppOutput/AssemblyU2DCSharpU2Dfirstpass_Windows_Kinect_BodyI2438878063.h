#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameReference>
struct Func_2_t2875377378;

#include "mscorlib_System_EventArgs2540831021.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.BodyIndexFrameArrivedEventArgs
struct  BodyIndexFrameArrivedEventArgs_t2438878063  : public EventArgs_t2540831021
{
public:
	// System.IntPtr Windows.Kinect.BodyIndexFrameArrivedEventArgs::_pNative
	IntPtr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(BodyIndexFrameArrivedEventArgs_t2438878063, ____pNative_1)); }
	inline IntPtr_t get__pNative_1() const { return ____pNative_1; }
	inline IntPtr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(IntPtr_t value)
	{
		____pNative_1 = value;
	}
};

struct BodyIndexFrameArrivedEventArgs_t2438878063_StaticFields
{
public:
	// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameReference> Windows.Kinect.BodyIndexFrameArrivedEventArgs::<>f__am$cache1
	Func_2_t2875377378 * ___U3CU3Ef__amU24cache1_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_2() { return static_cast<int32_t>(offsetof(BodyIndexFrameArrivedEventArgs_t2438878063_StaticFields, ___U3CU3Ef__amU24cache1_2)); }
	inline Func_2_t2875377378 * get_U3CU3Ef__amU24cache1_2() const { return ___U3CU3Ef__amU24cache1_2; }
	inline Func_2_t2875377378 ** get_address_of_U3CU3Ef__amU24cache1_2() { return &___U3CU3Ef__amU24cache1_2; }
	inline void set_U3CU3Ef__amU24cache1_2(Func_2_t2875377378 * value)
	{
		___U3CU3Ef__amU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
