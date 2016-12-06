#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.DepthFrameReader
struct DepthFrameReader_t1693107765;
// Windows.Kinect.DepthFrameArrivedEventArgs
struct DepthFrameArrivedEventArgs_t1662503260;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.DepthFrameReader/<Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey31
struct  U3CWindows_Kinect_DepthFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey31_t1754958812  : public Il2CppObject
{
public:
	// Windows.Kinect.DepthFrameReader Windows.Kinect.DepthFrameReader/<Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey31::objThis
	DepthFrameReader_t1693107765 * ___objThis_0;
	// Windows.Kinect.DepthFrameArrivedEventArgs Windows.Kinect.DepthFrameReader/<Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey31::args
	DepthFrameArrivedEventArgs_t1662503260 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_DepthFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey31_t1754958812, ___objThis_0)); }
	inline DepthFrameReader_t1693107765 * get_objThis_0() const { return ___objThis_0; }
	inline DepthFrameReader_t1693107765 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(DepthFrameReader_t1693107765 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_DepthFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey31_t1754958812, ___args_1)); }
	inline DepthFrameArrivedEventArgs_t1662503260 * get_args_1() const { return ___args_1; }
	inline DepthFrameArrivedEventArgs_t1662503260 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(DepthFrameArrivedEventArgs_t1662503260 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
