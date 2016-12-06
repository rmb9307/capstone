#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4045888484;
// Windows.Kinect.MultiSourceFrameArrivedEventArgs
struct MultiSourceFrameArrivedEventArgs_t3098824779;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.MultiSourceFrameReader/<Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey49
struct  U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey49_t2844789155  : public Il2CppObject
{
public:
	// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.MultiSourceFrameReader/<Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey49::objThis
	MultiSourceFrameReader_t4045888484 * ___objThis_0;
	// Windows.Kinect.MultiSourceFrameArrivedEventArgs Windows.Kinect.MultiSourceFrameReader/<Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey49::args
	MultiSourceFrameArrivedEventArgs_t3098824779 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey49_t2844789155, ___objThis_0)); }
	inline MultiSourceFrameReader_t4045888484 * get_objThis_0() const { return ___objThis_0; }
	inline MultiSourceFrameReader_t4045888484 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(MultiSourceFrameReader_t4045888484 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey49_t2844789155, ___args_1)); }
	inline MultiSourceFrameArrivedEventArgs_t3098824779 * get_args_1() const { return ___args_1; }
	inline MultiSourceFrameArrivedEventArgs_t3098824779 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(MultiSourceFrameArrivedEventArgs_t3098824779 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
