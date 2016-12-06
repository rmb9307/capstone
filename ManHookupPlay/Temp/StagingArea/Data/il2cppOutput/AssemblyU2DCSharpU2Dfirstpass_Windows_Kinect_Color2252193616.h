#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.ColorFrameSource
struct ColorFrameSource_t622873837;
// Windows.Kinect.FrameCapturedEventArgs
struct FrameCapturedEventArgs_t2391731988;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.ColorFrameSource/<Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler>c__AnonStorey2D
struct  U3CWindows_Kinect_FrameCapturedEventArgs_Delegate_HandlerU3Ec__AnonStorey2D_t2252193616  : public Il2CppObject
{
public:
	// Windows.Kinect.ColorFrameSource Windows.Kinect.ColorFrameSource/<Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler>c__AnonStorey2D::objThis
	ColorFrameSource_t622873837 * ___objThis_0;
	// Windows.Kinect.FrameCapturedEventArgs Windows.Kinect.ColorFrameSource/<Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler>c__AnonStorey2D::args
	FrameCapturedEventArgs_t2391731988 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_FrameCapturedEventArgs_Delegate_HandlerU3Ec__AnonStorey2D_t2252193616, ___objThis_0)); }
	inline ColorFrameSource_t622873837 * get_objThis_0() const { return ___objThis_0; }
	inline ColorFrameSource_t622873837 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(ColorFrameSource_t622873837 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_FrameCapturedEventArgs_Delegate_HandlerU3Ec__AnonStorey2D_t2252193616, ___args_1)); }
	inline FrameCapturedEventArgs_t2391731988 * get_args_1() const { return ___args_1; }
	inline FrameCapturedEventArgs_t2391731988 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(FrameCapturedEventArgs_t2391731988 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
