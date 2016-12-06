#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BodyRecording/Frame/Body/Joint[]
struct JointU5BU5D_t2823979782;
// System.Func`2<System.Int32,BodyRecording/Frame/Body/Joint>
struct Func_2_t2850871120;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyRecording/Frame/Body
struct  Body_t2012110084  : public Il2CppObject
{
public:
	// BodyRecording/Frame/Body/Joint[] BodyRecording/Frame/Body::Joints
	JointU5BU5D_t2823979782* ___Joints_0;
	// System.UInt64 BodyRecording/Frame/Body::TrackingId
	uint64_t ___TrackingId_1;

public:
	inline static int32_t get_offset_of_Joints_0() { return static_cast<int32_t>(offsetof(Body_t2012110084, ___Joints_0)); }
	inline JointU5BU5D_t2823979782* get_Joints_0() const { return ___Joints_0; }
	inline JointU5BU5D_t2823979782** get_address_of_Joints_0() { return &___Joints_0; }
	inline void set_Joints_0(JointU5BU5D_t2823979782* value)
	{
		___Joints_0 = value;
		Il2CppCodeGenWriteBarrier(&___Joints_0, value);
	}

	inline static int32_t get_offset_of_TrackingId_1() { return static_cast<int32_t>(offsetof(Body_t2012110084, ___TrackingId_1)); }
	inline uint64_t get_TrackingId_1() const { return ___TrackingId_1; }
	inline uint64_t* get_address_of_TrackingId_1() { return &___TrackingId_1; }
	inline void set_TrackingId_1(uint64_t value)
	{
		___TrackingId_1 = value;
	}
};

struct Body_t2012110084_StaticFields
{
public:
	// System.Func`2<System.Int32,BodyRecording/Frame/Body/Joint> BodyRecording/Frame/Body::<>f__am$cache2
	Func_2_t2850871120 * ___U3CU3Ef__amU24cache2_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(Body_t2012110084_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t2850871120 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t2850871120 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t2850871120 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
