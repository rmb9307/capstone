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
// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4045888484;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiSourceManager
struct  MultiSourceManager_t3917223545  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor MultiSourceManager::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.MultiSourceFrameReader MultiSourceManager::_Reader
	MultiSourceFrameReader_t4045888484 * ____Reader_3;
	// UnityEngine.Texture2D MultiSourceManager::_ColorTexture
	Texture2D_t3884108195 * ____ColorTexture_4;
	// System.UInt16[] MultiSourceManager::_DepthData
	UInt16U5BU5D_t801649474* ____DepthData_5;
	// System.Byte[] MultiSourceManager::_ColorData
	ByteU5BU5D_t4260760469* ____ColorData_6;
	// System.Int32 MultiSourceManager::<ColorWidth>k__BackingField
	int32_t ___U3CColorWidthU3Ek__BackingField_7;
	// System.Int32 MultiSourceManager::<ColorHeight>k__BackingField
	int32_t ___U3CColorHeightU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ____Reader_3)); }
	inline MultiSourceFrameReader_t4045888484 * get__Reader_3() const { return ____Reader_3; }
	inline MultiSourceFrameReader_t4045888484 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(MultiSourceFrameReader_t4045888484 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__ColorTexture_4() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ____ColorTexture_4)); }
	inline Texture2D_t3884108195 * get__ColorTexture_4() const { return ____ColorTexture_4; }
	inline Texture2D_t3884108195 ** get_address_of__ColorTexture_4() { return &____ColorTexture_4; }
	inline void set__ColorTexture_4(Texture2D_t3884108195 * value)
	{
		____ColorTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&____ColorTexture_4, value);
	}

	inline static int32_t get_offset_of__DepthData_5() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ____DepthData_5)); }
	inline UInt16U5BU5D_t801649474* get__DepthData_5() const { return ____DepthData_5; }
	inline UInt16U5BU5D_t801649474** get_address_of__DepthData_5() { return &____DepthData_5; }
	inline void set__DepthData_5(UInt16U5BU5D_t801649474* value)
	{
		____DepthData_5 = value;
		Il2CppCodeGenWriteBarrier(&____DepthData_5, value);
	}

	inline static int32_t get_offset_of__ColorData_6() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ____ColorData_6)); }
	inline ByteU5BU5D_t4260760469* get__ColorData_6() const { return ____ColorData_6; }
	inline ByteU5BU5D_t4260760469** get_address_of__ColorData_6() { return &____ColorData_6; }
	inline void set__ColorData_6(ByteU5BU5D_t4260760469* value)
	{
		____ColorData_6 = value;
		Il2CppCodeGenWriteBarrier(&____ColorData_6, value);
	}

	inline static int32_t get_offset_of_U3CColorWidthU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ___U3CColorWidthU3Ek__BackingField_7)); }
	inline int32_t get_U3CColorWidthU3Ek__BackingField_7() const { return ___U3CColorWidthU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CColorWidthU3Ek__BackingField_7() { return &___U3CColorWidthU3Ek__BackingField_7; }
	inline void set_U3CColorWidthU3Ek__BackingField_7(int32_t value)
	{
		___U3CColorWidthU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CColorHeightU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MultiSourceManager_t3917223545, ___U3CColorHeightU3Ek__BackingField_8)); }
	inline int32_t get_U3CColorHeightU3Ek__BackingField_8() const { return ___U3CColorHeightU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CColorHeightU3Ek__BackingField_8() { return &___U3CColorHeightU3Ek__BackingField_8; }
	inline void set_U3CColorHeightU3Ek__BackingField_8(int32_t value)
	{
		___U3CColorHeightU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
