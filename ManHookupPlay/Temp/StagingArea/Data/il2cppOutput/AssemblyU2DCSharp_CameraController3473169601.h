#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3473169601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CameraController::centerObject
	GameObject_t3674682005 * ___centerObject_2;
	// UnityEngine.Vector3 CameraController::rotateCenter
	Vector3_t4282066566  ___rotateCenter_3;

public:
	inline static int32_t get_offset_of_centerObject_2() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___centerObject_2)); }
	inline GameObject_t3674682005 * get_centerObject_2() const { return ___centerObject_2; }
	inline GameObject_t3674682005 ** get_address_of_centerObject_2() { return &___centerObject_2; }
	inline void set_centerObject_2(GameObject_t3674682005 * value)
	{
		___centerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___centerObject_2, value);
	}

	inline static int32_t get_offset_of_rotateCenter_3() { return static_cast<int32_t>(offsetof(CameraController_t3473169601, ___rotateCenter_3)); }
	inline Vector3_t4282066566  get_rotateCenter_3() const { return ___rotateCenter_3; }
	inline Vector3_t4282066566 * get_address_of_rotateCenter_3() { return &___rotateCenter_3; }
	inline void set_rotateCenter_3(Vector3_t4282066566  value)
	{
		___rotateCenter_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
