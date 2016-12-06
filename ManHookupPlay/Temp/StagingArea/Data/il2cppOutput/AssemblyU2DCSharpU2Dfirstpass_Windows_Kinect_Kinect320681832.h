#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.IsAvailableChangedEventArgs
struct IsAvailableChangedEventArgs_t380842544;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.KinectSensor/<Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler>c__AnonStorey1
struct  U3CWindows_Kinect_IsAvailableChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey1_t320681832  : public Il2CppObject
{
public:
	// Windows.Kinect.KinectSensor Windows.Kinect.KinectSensor/<Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler>c__AnonStorey1::objThis
	KinectSensor_t3101321480 * ___objThis_0;
	// Windows.Kinect.IsAvailableChangedEventArgs Windows.Kinect.KinectSensor/<Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler>c__AnonStorey1::args
	IsAvailableChangedEventArgs_t380842544 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_IsAvailableChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey1_t320681832, ___objThis_0)); }
	inline KinectSensor_t3101321480 * get_objThis_0() const { return ___objThis_0; }
	inline KinectSensor_t3101321480 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(KinectSensor_t3101321480 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_IsAvailableChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey1_t320681832, ___args_1)); }
	inline IsAvailableChangedEventArgs_t380842544 * get_args_1() const { return ___args_1; }
	inline IsAvailableChangedEventArgs_t380842544 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(IsAvailableChangedEventArgs_t380842544 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
