#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.InfraredFrameReader
struct InfraredFrameReader_t3299006749;
// Windows.Kinect.InfraredFrameArrivedEventArgs
struct InfraredFrameArrivedEventArgs_t2158189124;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.InfraredFrameReader/<Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey39
struct  U3CWindows_Kinect_InfraredFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey39_t796603974  : public Il2CppObject
{
public:
	// Windows.Kinect.InfraredFrameReader Windows.Kinect.InfraredFrameReader/<Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey39::objThis
	InfraredFrameReader_t3299006749 * ___objThis_0;
	// Windows.Kinect.InfraredFrameArrivedEventArgs Windows.Kinect.InfraredFrameReader/<Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey39::args
	InfraredFrameArrivedEventArgs_t2158189124 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_InfraredFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey39_t796603974, ___objThis_0)); }
	inline InfraredFrameReader_t3299006749 * get_objThis_0() const { return ___objThis_0; }
	inline InfraredFrameReader_t3299006749 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(InfraredFrameReader_t3299006749 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_InfraredFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey39_t796603974, ___args_1)); }
	inline InfraredFrameArrivedEventArgs_t2158189124 * get_args_1() const { return ___args_1; }
	inline InfraredFrameArrivedEventArgs_t2158189124 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(InfraredFrameArrivedEventArgs_t2158189124 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
