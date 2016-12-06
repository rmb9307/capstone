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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cowboyMove
struct  cowboyMove_t270083026  : public MonoBehaviour_t667441552
{
public:
	// Windows.Kinect.KinectSensor cowboyMove::_Sensor
	KinectSensor_t3101321480 * ____Sensor_2;
	// Windows.Kinect.BodyFrameReader cowboyMove::_Reader
	BodyFrameReader_t3001157404 * ____Reader_3;
	// Windows.Kinect.Body[] cowboyMove::_Data
	BodyU5BU5D_t3628617999* ____Data_4;
	// UnityEngine.GameObject cowboyMove::cowboyLeftHand
	GameObject_t3674682005 * ___cowboyLeftHand_5;
	// UnityEngine.GameObject cowboyMove::cowboyRightHand
	GameObject_t3674682005 * ___cowboyRightHand_6;
	// UnityEngine.GameObject cowboyMove::cowboyLeftForearm
	GameObject_t3674682005 * ___cowboyLeftForearm_7;
	// UnityEngine.GameObject cowboyMove::cowboyRightForearm
	GameObject_t3674682005 * ___cowboyRightForearm_8;
	// UnityEngine.GameObject cowboyMove::cowboyLeftUpperarm
	GameObject_t3674682005 * ___cowboyLeftUpperarm_9;
	// UnityEngine.GameObject cowboyMove::cowboyRightUpperarm
	GameObject_t3674682005 * ___cowboyRightUpperarm_10;
	// UnityEngine.GameObject cowboyMove::cowboyLeftShoulder
	GameObject_t3674682005 * ___cowboyLeftShoulder_11;
	// UnityEngine.GameObject cowboyMove::cowboyRightShoulder
	GameObject_t3674682005 * ___cowboyRightShoulder_12;
	// UnityEngine.GameObject cowboyMove::cowboyLeftThigh
	GameObject_t3674682005 * ___cowboyLeftThigh_13;
	// UnityEngine.GameObject cowboyMove::cowboyRightThigh
	GameObject_t3674682005 * ___cowboyRightThigh_14;
	// UnityEngine.GameObject cowboyMove::cowboyLeftCalf
	GameObject_t3674682005 * ___cowboyLeftCalf_15;
	// UnityEngine.GameObject cowboyMove::cowboyRightCalf
	GameObject_t3674682005 * ___cowboyRightCalf_16;
	// UnityEngine.GameObject cowboyMove::cowboyLeftHeel
	GameObject_t3674682005 * ___cowboyLeftHeel_17;
	// UnityEngine.GameObject cowboyMove::cowboyRightHeel
	GameObject_t3674682005 * ___cowboyRightHeel_18;
	// UnityEngine.GameObject cowboyMove::cowboyPelvis
	GameObject_t3674682005 * ___cowboyPelvis_19;
	// UnityEngine.GameObject cowboyMove::cowboySpine
	GameObject_t3674682005 * ___cowboySpine_20;
	// UnityEngine.GameObject cowboyMove::cowboyChest
	GameObject_t3674682005 * ___cowboyChest_21;
	// UnityEngine.GameObject cowboyMove::cowboyNeck
	GameObject_t3674682005 * ___cowboyNeck_22;

public:
	inline static int32_t get_offset_of__Sensor_2() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ____Sensor_2)); }
	inline KinectSensor_t3101321480 * get__Sensor_2() const { return ____Sensor_2; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_2() { return &____Sensor_2; }
	inline void set__Sensor_2(KinectSensor_t3101321480 * value)
	{
		____Sensor_2 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_2, value);
	}

	inline static int32_t get_offset_of__Reader_3() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ____Reader_3)); }
	inline BodyFrameReader_t3001157404 * get__Reader_3() const { return ____Reader_3; }
	inline BodyFrameReader_t3001157404 ** get_address_of__Reader_3() { return &____Reader_3; }
	inline void set__Reader_3(BodyFrameReader_t3001157404 * value)
	{
		____Reader_3 = value;
		Il2CppCodeGenWriteBarrier(&____Reader_3, value);
	}

	inline static int32_t get_offset_of__Data_4() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ____Data_4)); }
	inline BodyU5BU5D_t3628617999* get__Data_4() const { return ____Data_4; }
	inline BodyU5BU5D_t3628617999** get_address_of__Data_4() { return &____Data_4; }
	inline void set__Data_4(BodyU5BU5D_t3628617999* value)
	{
		____Data_4 = value;
		Il2CppCodeGenWriteBarrier(&____Data_4, value);
	}

	inline static int32_t get_offset_of_cowboyLeftHand_5() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftHand_5)); }
	inline GameObject_t3674682005 * get_cowboyLeftHand_5() const { return ___cowboyLeftHand_5; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftHand_5() { return &___cowboyLeftHand_5; }
	inline void set_cowboyLeftHand_5(GameObject_t3674682005 * value)
	{
		___cowboyLeftHand_5 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftHand_5, value);
	}

	inline static int32_t get_offset_of_cowboyRightHand_6() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightHand_6)); }
	inline GameObject_t3674682005 * get_cowboyRightHand_6() const { return ___cowboyRightHand_6; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightHand_6() { return &___cowboyRightHand_6; }
	inline void set_cowboyRightHand_6(GameObject_t3674682005 * value)
	{
		___cowboyRightHand_6 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightHand_6, value);
	}

	inline static int32_t get_offset_of_cowboyLeftForearm_7() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftForearm_7)); }
	inline GameObject_t3674682005 * get_cowboyLeftForearm_7() const { return ___cowboyLeftForearm_7; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftForearm_7() { return &___cowboyLeftForearm_7; }
	inline void set_cowboyLeftForearm_7(GameObject_t3674682005 * value)
	{
		___cowboyLeftForearm_7 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftForearm_7, value);
	}

	inline static int32_t get_offset_of_cowboyRightForearm_8() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightForearm_8)); }
	inline GameObject_t3674682005 * get_cowboyRightForearm_8() const { return ___cowboyRightForearm_8; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightForearm_8() { return &___cowboyRightForearm_8; }
	inline void set_cowboyRightForearm_8(GameObject_t3674682005 * value)
	{
		___cowboyRightForearm_8 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightForearm_8, value);
	}

	inline static int32_t get_offset_of_cowboyLeftUpperarm_9() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftUpperarm_9)); }
	inline GameObject_t3674682005 * get_cowboyLeftUpperarm_9() const { return ___cowboyLeftUpperarm_9; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftUpperarm_9() { return &___cowboyLeftUpperarm_9; }
	inline void set_cowboyLeftUpperarm_9(GameObject_t3674682005 * value)
	{
		___cowboyLeftUpperarm_9 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftUpperarm_9, value);
	}

	inline static int32_t get_offset_of_cowboyRightUpperarm_10() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightUpperarm_10)); }
	inline GameObject_t3674682005 * get_cowboyRightUpperarm_10() const { return ___cowboyRightUpperarm_10; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightUpperarm_10() { return &___cowboyRightUpperarm_10; }
	inline void set_cowboyRightUpperarm_10(GameObject_t3674682005 * value)
	{
		___cowboyRightUpperarm_10 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightUpperarm_10, value);
	}

	inline static int32_t get_offset_of_cowboyLeftShoulder_11() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftShoulder_11)); }
	inline GameObject_t3674682005 * get_cowboyLeftShoulder_11() const { return ___cowboyLeftShoulder_11; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftShoulder_11() { return &___cowboyLeftShoulder_11; }
	inline void set_cowboyLeftShoulder_11(GameObject_t3674682005 * value)
	{
		___cowboyLeftShoulder_11 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftShoulder_11, value);
	}

	inline static int32_t get_offset_of_cowboyRightShoulder_12() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightShoulder_12)); }
	inline GameObject_t3674682005 * get_cowboyRightShoulder_12() const { return ___cowboyRightShoulder_12; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightShoulder_12() { return &___cowboyRightShoulder_12; }
	inline void set_cowboyRightShoulder_12(GameObject_t3674682005 * value)
	{
		___cowboyRightShoulder_12 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightShoulder_12, value);
	}

	inline static int32_t get_offset_of_cowboyLeftThigh_13() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftThigh_13)); }
	inline GameObject_t3674682005 * get_cowboyLeftThigh_13() const { return ___cowboyLeftThigh_13; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftThigh_13() { return &___cowboyLeftThigh_13; }
	inline void set_cowboyLeftThigh_13(GameObject_t3674682005 * value)
	{
		___cowboyLeftThigh_13 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftThigh_13, value);
	}

	inline static int32_t get_offset_of_cowboyRightThigh_14() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightThigh_14)); }
	inline GameObject_t3674682005 * get_cowboyRightThigh_14() const { return ___cowboyRightThigh_14; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightThigh_14() { return &___cowboyRightThigh_14; }
	inline void set_cowboyRightThigh_14(GameObject_t3674682005 * value)
	{
		___cowboyRightThigh_14 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightThigh_14, value);
	}

	inline static int32_t get_offset_of_cowboyLeftCalf_15() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftCalf_15)); }
	inline GameObject_t3674682005 * get_cowboyLeftCalf_15() const { return ___cowboyLeftCalf_15; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftCalf_15() { return &___cowboyLeftCalf_15; }
	inline void set_cowboyLeftCalf_15(GameObject_t3674682005 * value)
	{
		___cowboyLeftCalf_15 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftCalf_15, value);
	}

	inline static int32_t get_offset_of_cowboyRightCalf_16() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightCalf_16)); }
	inline GameObject_t3674682005 * get_cowboyRightCalf_16() const { return ___cowboyRightCalf_16; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightCalf_16() { return &___cowboyRightCalf_16; }
	inline void set_cowboyRightCalf_16(GameObject_t3674682005 * value)
	{
		___cowboyRightCalf_16 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightCalf_16, value);
	}

	inline static int32_t get_offset_of_cowboyLeftHeel_17() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyLeftHeel_17)); }
	inline GameObject_t3674682005 * get_cowboyLeftHeel_17() const { return ___cowboyLeftHeel_17; }
	inline GameObject_t3674682005 ** get_address_of_cowboyLeftHeel_17() { return &___cowboyLeftHeel_17; }
	inline void set_cowboyLeftHeel_17(GameObject_t3674682005 * value)
	{
		___cowboyLeftHeel_17 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyLeftHeel_17, value);
	}

	inline static int32_t get_offset_of_cowboyRightHeel_18() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyRightHeel_18)); }
	inline GameObject_t3674682005 * get_cowboyRightHeel_18() const { return ___cowboyRightHeel_18; }
	inline GameObject_t3674682005 ** get_address_of_cowboyRightHeel_18() { return &___cowboyRightHeel_18; }
	inline void set_cowboyRightHeel_18(GameObject_t3674682005 * value)
	{
		___cowboyRightHeel_18 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyRightHeel_18, value);
	}

	inline static int32_t get_offset_of_cowboyPelvis_19() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyPelvis_19)); }
	inline GameObject_t3674682005 * get_cowboyPelvis_19() const { return ___cowboyPelvis_19; }
	inline GameObject_t3674682005 ** get_address_of_cowboyPelvis_19() { return &___cowboyPelvis_19; }
	inline void set_cowboyPelvis_19(GameObject_t3674682005 * value)
	{
		___cowboyPelvis_19 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyPelvis_19, value);
	}

	inline static int32_t get_offset_of_cowboySpine_20() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboySpine_20)); }
	inline GameObject_t3674682005 * get_cowboySpine_20() const { return ___cowboySpine_20; }
	inline GameObject_t3674682005 ** get_address_of_cowboySpine_20() { return &___cowboySpine_20; }
	inline void set_cowboySpine_20(GameObject_t3674682005 * value)
	{
		___cowboySpine_20 = value;
		Il2CppCodeGenWriteBarrier(&___cowboySpine_20, value);
	}

	inline static int32_t get_offset_of_cowboyChest_21() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyChest_21)); }
	inline GameObject_t3674682005 * get_cowboyChest_21() const { return ___cowboyChest_21; }
	inline GameObject_t3674682005 ** get_address_of_cowboyChest_21() { return &___cowboyChest_21; }
	inline void set_cowboyChest_21(GameObject_t3674682005 * value)
	{
		___cowboyChest_21 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyChest_21, value);
	}

	inline static int32_t get_offset_of_cowboyNeck_22() { return static_cast<int32_t>(offsetof(cowboyMove_t270083026, ___cowboyNeck_22)); }
	inline GameObject_t3674682005 * get_cowboyNeck_22() const { return ___cowboyNeck_22; }
	inline GameObject_t3674682005 ** get_address_of_cowboyNeck_22() { return &___cowboyNeck_22; }
	inline void set_cowboyNeck_22(GameObject_t3674682005 * value)
	{
		___cowboyNeck_22 = value;
		Il2CppCodeGenWriteBarrier(&___cowboyNeck_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
