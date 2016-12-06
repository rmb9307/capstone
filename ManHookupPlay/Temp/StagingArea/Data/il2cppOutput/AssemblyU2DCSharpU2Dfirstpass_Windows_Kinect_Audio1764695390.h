#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.AudioBeamFrameReader
struct AudioBeamFrameReader_t941559955;
// Windows.Kinect.AudioBeamFrameArrivedEventArgs
struct AudioBeamFrameArrivedEventArgs_t2364618298;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.AudioBeamFrameReader/<Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey11
struct  U3CWindows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey11_t1764695390  : public Il2CppObject
{
public:
	// Windows.Kinect.AudioBeamFrameReader Windows.Kinect.AudioBeamFrameReader/<Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey11::objThis
	AudioBeamFrameReader_t941559955 * ___objThis_0;
	// Windows.Kinect.AudioBeamFrameArrivedEventArgs Windows.Kinect.AudioBeamFrameReader/<Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler>c__AnonStorey11::args
	AudioBeamFrameArrivedEventArgs_t2364618298 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey11_t1764695390, ___objThis_0)); }
	inline AudioBeamFrameReader_t941559955 * get_objThis_0() const { return ___objThis_0; }
	inline AudioBeamFrameReader_t941559955 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(AudioBeamFrameReader_t941559955 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_HandlerU3Ec__AnonStorey11_t1764695390, ___args_1)); }
	inline AudioBeamFrameArrivedEventArgs_t2364618298 * get_args_1() const { return ___args_1; }
	inline AudioBeamFrameArrivedEventArgs_t2364618298 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(AudioBeamFrameArrivedEventArgs_t2364618298 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
