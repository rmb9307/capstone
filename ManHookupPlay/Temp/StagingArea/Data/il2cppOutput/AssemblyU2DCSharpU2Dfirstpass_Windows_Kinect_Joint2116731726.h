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
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Vector266920927.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.JointOrientation
struct  JointOrientation_t2116731726 
{
public:
	// Windows.Kinect.JointType Windows.Kinect.JointOrientation::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	// Windows.Kinect.Vector4 Windows.Kinect.JointOrientation::<Orientation>k__BackingField
	Vector4_t266920927  ___U3COrientationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JointOrientation_t2116731726, ___U3CJointTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_0() const { return ___U3CJointTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_0() { return &___U3CJointTypeU3Ek__BackingField_0; }
	inline void set_U3CJointTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3COrientationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JointOrientation_t2116731726, ___U3COrientationU3Ek__BackingField_1)); }
	inline Vector4_t266920927  get_U3COrientationU3Ek__BackingField_1() const { return ___U3COrientationU3Ek__BackingField_1; }
	inline Vector4_t266920927 * get_address_of_U3COrientationU3Ek__BackingField_1() { return &___U3COrientationU3Ek__BackingField_1; }
	inline void set_U3COrientationU3Ek__BackingField_1(Vector4_t266920927  value)
	{
		___U3COrientationU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Windows.Kinect.JointOrientation
struct JointOrientation_t2116731726_marshaled_pinvoke
{
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	Vector4_t266920927_marshaled_pinvoke ___U3COrientationU3Ek__BackingField_1;
};
// Native definition for marshalling of: Windows.Kinect.JointOrientation
struct JointOrientation_t2116731726_marshaled_com
{
	int32_t ___U3CJointTypeU3Ek__BackingField_0;
	Vector4_t266920927_marshaled_com ___U3COrientationU3Ek__BackingField_1;
};
