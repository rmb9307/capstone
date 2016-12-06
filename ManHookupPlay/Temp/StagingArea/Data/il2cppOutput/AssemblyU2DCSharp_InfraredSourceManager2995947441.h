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
// Windows.Kinect.InfraredFrameReader
struct InfraredFrameReader_t3299006749;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfraredSourceManager
struct  InfraredSourceManager_t2995947441  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor InfraredSourceManager::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.InfraredFrameReader InfraredSourceManager::_Reader
	InfraredFrameReader_t3299006749 * ____Reader_3;
	// System.UInt16[] InfraredSourceManager::_Data
	UInt16U5BU5D_t801649474* ____Data_4;
	// System.Byte[] InfraredSourceManager::_RawData
	ByteU5BU5D_t4260760469* ____RawData_5;
	// UnityEngine.Texture2D InfraredSourceManager::_Texture
	Texture2D_t3884108195 * ____Texture_6;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(InfraredSourceManager_t2995947441, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(InfraredSourceManager_t2995947441, ____Reader_3)); }
	inline InfraredFrameReader_t3299006749 * get__Reader_3() const { return ____Reader_3; }
	inline InfraredFrameReader_t3299006749 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(InfraredFrameReader_t3299006749 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__Data_4() { return static_cast<int32_t>(offsetof(InfraredSourceManager_t2995947441, ____Data_4)); }
	inline UInt16U5BU5D_t801649474* get__Data_4() const { return ____Data_4; }
	inline UInt16U5BU5D_t801649474** get_address_of__Data_4() { return &____Data_4; }
	inline void set__Data_4(UInt16U5BU5D_t801649474* value)
	{
		____Data_4 = value;
		Il2CppCodeGenWriteBarrier(&____Data_4, value);
	}

	inline static int32_t get_offset_of__RawData_5() { return static_cast<int32_t>(offsetof(InfraredSourceManager_t2995947441, ____RawData_5)); }
	inline ByteU5BU5D_t4260760469* get__RawData_5() const { return ____RawData_5; }
	inline ByteU5BU5D_t4260760469** get_address_of__RawData_5() { return &____RawData_5; }
	inline void set__RawData_5(ByteU5BU5D_t4260760469* value)
	{
		____RawData_5 = value;
		Il2CppCodeGenWriteBarrier(&____RawData_5, value);
	}

	inline static int32_t get_offset_of__Texture_6() { return static_cast<int32_t>(offsetof(InfraredSourceManager_t2995947441, ____Texture_6)); }
	inline Texture2D_t3884108195 * get__Texture_6() const { return ____Texture_6; }
	inline Texture2D_t3884108195 ** get_address_of__Texture_6() { return &____Texture_6; }
	inline void set__Texture_6(Texture2D_t3884108195 * value)
	{
		____Texture_6 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
