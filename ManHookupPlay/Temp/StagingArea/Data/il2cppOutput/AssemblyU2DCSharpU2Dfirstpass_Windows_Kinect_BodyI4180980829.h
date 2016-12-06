#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.BodyIndexFrameReader
struct BodyIndexFrameReader_t2067807240;
// Windows.Kinect.BodyIndexFrameArrivedEventArgs
struct BodyIndexFrameArrivedEventArgs_t2438878063;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.BodyIndexFrameReader/<Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey21
struct  U3CWindows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey21_t4180980829  : public Il2CppObject
{
public:
	// Windows.Kinect.BodyIndexFrameReader Windows.Kinect.BodyIndexFrameReader/<Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey21::objThis
	BodyIndexFrameReader_t2067807240 * ___objThis_0;
	// Windows.Kinect.BodyIndexFrameArrivedEventArgs Windows.Kinect.BodyIndexFrameReader/<Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey21::args
	BodyIndexFrameArrivedEventArgs_t2438878063 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey21_t4180980829, ___objThis_0)); }
	inline BodyIndexFrameReader_t2067807240 * get_objThis_0() const { return ___objThis_0; }
	inline BodyIndexFrameReader_t2067807240 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(BodyIndexFrameReader_t2067807240 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey21_t4180980829, ___args_1)); }
	inline BodyIndexFrameArrivedEventArgs_t2438878063 * get_args_1() const { return ___args_1; }
	inline BodyIndexFrameArrivedEventArgs_t2438878063 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(BodyIndexFrameArrivedEventArgs_t2438878063 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
