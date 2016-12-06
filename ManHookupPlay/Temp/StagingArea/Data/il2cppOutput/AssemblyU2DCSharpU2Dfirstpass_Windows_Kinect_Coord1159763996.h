#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.CoordinateMapper
struct CoordinateMapper_t2160979521;
// Windows.Kinect.CoordinateMappingChangedEventArgs
struct CoordinateMappingChangedEventArgs_t2648882535;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.CoordinateMapper/<Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler>c__AnonStorey5
struct  U3CWindows_Kinect_CoordinateMappingChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey5_t1159763996  : public Il2CppObject
{
public:
	// Windows.Kinect.CoordinateMapper Windows.Kinect.CoordinateMapper/<Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler>c__AnonStorey5::objThis
	CoordinateMapper_t2160979521 * ___objThis_0;
	// Windows.Kinect.CoordinateMappingChangedEventArgs Windows.Kinect.CoordinateMapper/<Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler>c__AnonStorey5::args
	CoordinateMappingChangedEventArgs_t2648882535 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_CoordinateMappingChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey5_t1159763996, ___objThis_0)); }
	inline CoordinateMapper_t2160979521 * get_objThis_0() const { return ___objThis_0; }
	inline CoordinateMapper_t2160979521 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(CoordinateMapper_t2160979521 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier(&___objThis_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CWindows_Kinect_CoordinateMappingChangedEventArgs_Delegate_HandlerU3Ec__AnonStorey5_t1159763996, ___args_1)); }
	inline CoordinateMappingChangedEventArgs_t2648882535 * get_args_1() const { return ___args_1; }
	inline CoordinateMappingChangedEventArgs_t2648882535 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(CoordinateMappingChangedEventArgs_t2648882535 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
