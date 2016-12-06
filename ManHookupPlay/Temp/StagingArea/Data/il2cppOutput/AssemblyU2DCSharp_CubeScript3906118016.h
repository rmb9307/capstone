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
// Windows.Kinect.BodyFrameReader
struct BodyFrameReader_t3001157404;
// Windows.Kinect.Body[]
struct BodyU5BU5D_t3628617999;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeScript
struct  CubeScript_t3906118016  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor CubeScript::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.BodyFrameReader CubeScript::_Reader
	BodyFrameReader_t3001157404 * ____Reader_3;
	// Windows.Kinect.Body[] CubeScript::_Data
	BodyU5BU5D_t3628617999* ____Data_4;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(CubeScript_t3906118016, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(CubeScript_t3906118016, ____Reader_3)); }
	inline BodyFrameReader_t3001157404 * get__Reader_3() const { return ____Reader_3; }
	inline BodyFrameReader_t3001157404 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(BodyFrameReader_t3001157404 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__Data_4() { return static_cast<int32_t>(offsetof(CubeScript_t3906118016, ____Data_4)); }
	inline BodyU5BU5D_t3628617999* get__Data_4() const { return ____Data_4; }
	inline BodyU5BU5D_t3628617999** get_address_of__Data_4() { return &____Data_4; }
	inline void set__Data_4(BodyU5BU5D_t3628617999* value)
	{
		____Data_4 = value;
		Il2CppCodeGenWriteBarrier(&____Data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
