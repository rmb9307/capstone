#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1712509031;
// Helper.EventPump
struct EventPump_t1332806428;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.EventPump
struct  EventPump_t1332806428  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.Queue`1<System.Action> Helper.EventPump::m_Queue
	Queue_1_t1712509031 * ___m_Queue_3;

public:
	inline static int32_t get_offset_of_m_Queue_3() { return static_cast<int32_t>(offsetof(EventPump_t1332806428, ___m_Queue_3)); }
	inline Queue_1_t1712509031 * get_m_Queue_3() const { return ___m_Queue_3; }
	inline Queue_1_t1712509031 ** get_address_of_m_Queue_3() { return &___m_Queue_3; }
	inline void set_m_Queue_3(Queue_1_t1712509031 * value)
	{
		___m_Queue_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Queue_3, value);
	}
};

struct EventPump_t1332806428_StaticFields
{
public:
	// System.Object Helper.EventPump::s_Lock
	Il2CppObject * ___s_Lock_2;
	// Helper.EventPump Helper.EventPump::<Instance>k__BackingField
	EventPump_t1332806428 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_s_Lock_2() { return static_cast<int32_t>(offsetof(EventPump_t1332806428_StaticFields, ___s_Lock_2)); }
	inline Il2CppObject * get_s_Lock_2() const { return ___s_Lock_2; }
	inline Il2CppObject ** get_address_of_s_Lock_2() { return &___s_Lock_2; }
	inline void set_s_Lock_2(Il2CppObject * value)
	{
		___s_Lock_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Lock_2, value);
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventPump_t1332806428_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline EventPump_t1332806428 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline EventPump_t1332806428 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(EventPump_t1332806428 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInstanceU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
