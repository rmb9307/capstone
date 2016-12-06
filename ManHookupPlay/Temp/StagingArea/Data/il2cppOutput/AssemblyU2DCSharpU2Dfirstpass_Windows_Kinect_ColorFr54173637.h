#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.ColorFrameReader
struct ColorFrameReader_t584400277;
// Windows.Kinect.ColorFrameArrivedEventArgs
struct ColorFrameArrivedEventArgs_t1767671996;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.ColorFrameReader/<Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey29
struct  U3CWindows_Kinect_ColorFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey29_t54173637  : public Il2CppObject
{
public:
	// Windows.Kinect.ColorFrameReader Windows.Kinect.ColorFrameReader/<Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey29::objThis
	ColorFrameReader_t584400277 * ___objThis_0;
	// Windows.Kinect.ColorFrameArrivedEventArgs Windows.Kinect.ColorFrameReader/<Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey29::args
	ColorFrameArrivedEventArgs_t1767671996 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_ColorFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey29_t54173637, ___objThis_0)); }
	inline ColorFrameReader_t584400277 * get_objThis_0() const { return ___objThis_0; }
	inline ColorFrameReader_t584400277 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(ColorFrameReader_t584400277 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_ColorFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey29_t54173637, ___args_1)); }
	inline ColorFrameArrivedEventArgs_t1767671996 * get_args_1() const { return ___args_1; }
	inline ColorFrameArrivedEventArgs_t1767671996 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ColorFrameArrivedEventArgs_t1767671996 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
