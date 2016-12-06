#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<BodyRecording/Frame/Body>
struct List_1_t3380295636;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyRecording/Frame
struct  Frame_t2738196877  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<BodyRecording/Frame/Body> BodyRecording/Frame::bodies
	List_1_t3380295636 * ___bodies_0;

public:
	inline static int32_t get_offset_of_bodies_0() { return static_cast<int32_t>(offsetof(Frame_t2738196877, ___bodies_0)); }
	inline List_1_t3380295636 * get_bodies_0() const { return ___bodies_0; }
	inline List_1_t3380295636 ** get_address_of_bodies_0() { return &___bodies_0; }
	inline void set_bodies_0(List_1_t3380295636 * value)
	{
		___bodies_0 = value;
		Il2CppCodeGenWriteBarrier(&___bodies_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
