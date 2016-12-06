#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyRecording/Frame/Body/Joint
struct  Joint_t419964831  : public Il2CppObject
{
public:
	// System.String BodyRecording/Frame/Body/Joint::Name
	String_t* ___Name_0;
	// UnityEngine.Vector3 BodyRecording/Frame/Body/Joint::Position
	Vector3_t4282066566  ___Position_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Joint_t419964831, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(Joint_t419964831, ___Position_1)); }
	inline Vector3_t4282066566  get_Position_1() const { return ___Position_1; }
	inline Vector3_t4282066566 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector3_t4282066566  value)
	{
		___Position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
