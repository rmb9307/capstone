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
// Windows.Kinect.DepthFrameReader
struct DepthFrameReader_t1693107765;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DepthSourceManager
struct  DepthSourceManager_t2586243375  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor DepthSourceManager::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.DepthFrameReader DepthSourceManager::_Reader
	DepthFrameReader_t1693107765 * ____Reader_3;
	// System.UInt16[] DepthSourceManager::_Data
	UInt16U5BU5D_t801649474* ____Data_4;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(DepthSourceManager_t2586243375, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(DepthSourceManager_t2586243375, ____Reader_3)); }
	inline DepthFrameReader_t1693107765 * get__Reader_3() const { return ____Reader_3; }
	inline DepthFrameReader_t1693107765 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(DepthFrameReader_t1693107765 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__Data_4() { return static_cast<int32_t>(offsetof(DepthSourceManager_t2586243375, ____Data_4)); }
	inline UInt16U5BU5D_t801649474* get__Data_4() const { return ____Data_4; }
	inline UInt16U5BU5D_t801649474** get_address_of__Data_4() { return &____Data_4; }
	inline void set__Data_4(UInt16U5BU5D_t801649474* value)
	{
		____Data_4 = value;
		Il2CppCodeGenWriteBarrier(&____Data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
