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
// Windows.Kinect.ColorFrameReader
struct ColorFrameReader_t584400277;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSourceManager
struct  ColorSourceManager_t2270236815  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor ColorSourceManager::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.ColorFrameReader ColorSourceManager::_Reader
	ColorFrameReader_t584400277 * ____Reader_3;
	// UnityEngine.Texture2D ColorSourceManager::_Texture
	Texture2D_t3884108195 * ____Texture_4;
	// System.Byte[] ColorSourceManager::_Data
	ByteU5BU5D_t4260760469* ____Data_5;
	// System.Int32 ColorSourceManager::<ColorWidth>k__BackingField
	int32_t ___U3CColorWidthU3Ek__BackingField_6;
	// System.Int32 ColorSourceManager::<ColorHeight>k__BackingField
	int32_t ___U3CColorHeightU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ____Reader_3)); }
	inline ColorFrameReader_t584400277 * get__Reader_3() const { return ____Reader_3; }
	inline ColorFrameReader_t584400277 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(ColorFrameReader_t584400277 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__Texture_4() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ____Texture_4)); }
	inline Texture2D_t3884108195 * get__Texture_4() const { return ____Texture_4; }
	inline Texture2D_t3884108195 ** get_address_of__Texture_4() { return &____Texture_4; }
	inline void set__Texture_4(Texture2D_t3884108195 * value)
	{
		____Texture_4 = value;
		Il2CppCodeGenWriteBarrier(&____Texture_4, value);
	}

	inline static int32_t get_offset_of__Data_5() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ____Data_5)); }
	inline ByteU5BU5D_t4260760469* get__Data_5() const { return ____Data_5; }
	inline ByteU5BU5D_t4260760469** get_address_of__Data_5() { return &____Data_5; }
	inline void set__Data_5(ByteU5BU5D_t4260760469* value)
	{
		____Data_5 = value;
		Il2CppCodeGenWriteBarrier(&____Data_5, value);
	}

	inline static int32_t get_offset_of_U3CColorWidthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ___U3CColorWidthU3Ek__BackingField_6)); }
	inline int32_t get_U3CColorWidthU3Ek__BackingField_6() const { return ___U3CColorWidthU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CColorWidthU3Ek__BackingField_6() { return &___U3CColorWidthU3Ek__BackingField_6; }
	inline void set_U3CColorWidthU3Ek__BackingField_6(int32_t value)
	{
		___U3CColorWidthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CColorHeightU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ColorSourceManager_t2270236815, ___U3CColorHeightU3Ek__BackingField_7)); }
	inline int32_t get_U3CColorHeightU3Ek__BackingField_7() const { return ___U3CColorHeightU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CColorHeightU3Ek__BackingField_7() { return &___U3CColorHeightU3Ek__BackingField_7; }
	inline void set_U3CColorHeightU3Ek__BackingField_7(int32_t value)
	{
		___U3CColorHeightU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
