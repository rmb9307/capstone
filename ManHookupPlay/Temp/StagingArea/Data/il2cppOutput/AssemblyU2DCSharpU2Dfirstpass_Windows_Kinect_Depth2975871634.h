﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameSource>
struct Func_2_t4160368915;
// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription>
struct Func_2_t341995581;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectBuffer>
struct Func_2_t762971412;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.DepthFrame
struct  DepthFrame_t2975871634  : public Il2CppObject
{
public:
	// System.IntPtr Windows.Kinect.DepthFrame::_pNative
	IntPtr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(DepthFrame_t2975871634, ____pNative_0)); }
	inline IntPtr_t get__pNative_0() const { return ____pNative_0; }
	inline IntPtr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(IntPtr_t value)
	{
		____pNative_0 = value;
	}
};

struct DepthFrame_t2975871634_StaticFields
{
public:
	// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameSource> Windows.Kinect.DepthFrame::<>f__am$cache1
	Func_2_t4160368915 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription> Windows.Kinect.DepthFrame::<>f__am$cache2
	Func_2_t341995581 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectBuffer> Windows.Kinect.DepthFrame::<>f__am$cache3
	Func_2_t762971412 * ___U3CU3Ef__amU24cache3_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(DepthFrame_t2975871634_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t4160368915 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t4160368915 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t4160368915 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(DepthFrame_t2975871634_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t341995581 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t341995581 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t341995581 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(DepthFrame_t2975871634_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t762971412 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t762971412 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t762971412 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
