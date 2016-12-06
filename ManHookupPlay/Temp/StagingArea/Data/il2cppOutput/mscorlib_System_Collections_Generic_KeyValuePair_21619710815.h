#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Microsoft.Kinect.VisualGestureBuilder.Gesture
struct Gesture_t3791679507;
// Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult
struct ContinuousGestureResult_t58064577;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Microsoft.Kinect.VisualGestureBuilder.Gesture,Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult>
struct  KeyValuePair_2_t1619710815 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Gesture_t3791679507 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ContinuousGestureResult_t58064577 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1619710815, ___key_0)); }
	inline Gesture_t3791679507 * get_key_0() const { return ___key_0; }
	inline Gesture_t3791679507 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Gesture_t3791679507 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1619710815, ___value_1)); }
	inline ContinuousGestureResult_t58064577 * get_value_1() const { return ___value_1; }
	inline ContinuousGestureResult_t58064577 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ContinuousGestureResult_t58064577 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
