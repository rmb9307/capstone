#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Camer1874961815.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Tracki554552936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.Joint
struct  Joint_t2011134424 
{
public:
	// Windows.Kinect.JointType Windows.Kinect.Joint::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	// Windows.Kinect.CameraSpacePoint Windows.Kinect.Joint::<Position>k__BackingField
	CameraSpacePoint_t1874961815  ___U3CPositionU3Ek__BackingField_1;
	// Windows.Kinect.TrackingState Windows.Kinect.Joint::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Joint_t2011134424, ___U3CJointTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_0() const { return ___U3CJointTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_0() { return &___U3CJointTypeU3Ek__BackingField_0; }
	inline void set_U3CJointTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Joint_t2011134424, ___U3CPositionU3Ek__BackingField_1)); }
	inline CameraSpacePoint_t1874961815  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline CameraSpacePoint_t1874961815 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(CameraSpacePoint_t1874961815  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Joint_t2011134424, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Windows.Kinect.Joint
struct Joint_t2011134424_marshaled_pinvoke
{
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	CameraSpacePoint_t1874961815_marshaled_pinvoke ___U3CPositionU3Ek__BackingField_1;
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
};
// Native definition for marshalling of: Windows.Kinect.Joint
struct Joint_t2011134424_marshaled_com
{
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	CameraSpacePoint_t1874961815_marshaled_com ___U3CPositionU3Ek__BackingField_1;
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
};
