#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<BodyRecording/Frame>
struct List_1_t4106382429;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyRecording
struct  BodyRecording_t646269519  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<BodyRecording/Frame> BodyRecording::frames
	List_1_t4106382429 * ___frames_0;

public:
	inline static int32_t get_offset_of_frames_0() { return static_cast<int32_t>(offsetof(BodyRecording_t646269519, ___frames_0)); }
	inline List_1_t4106382429 * get_frames_0() const { return ___frames_0; }
	inline List_1_t4106382429 ** get_address_of_frames_0() { return &___frames_0; }
	inline void set_frames_0(List_1_t4106382429 * value)
	{
		___frames_0 = value;
		Il2CppCodeGenWriteBarrier(&___frames_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
