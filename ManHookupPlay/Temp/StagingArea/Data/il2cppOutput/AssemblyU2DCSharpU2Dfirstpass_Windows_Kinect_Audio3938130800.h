#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.AudioBeamSubFrame[]
struct AudioBeamSubFrameU5BU5D_t3096071649;
// System.Func`2<System.IntPtr,Windows.Kinect.AudioBeam>
struct Func_2_t1763531769;
// System.Func`2<System.IntPtr,Windows.Kinect.AudioSource>
struct Func_2_t2098173477;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.AudioBeamFrame
struct  AudioBeamFrame_t3938130800  : public Il2CppObject
{
public:
	// Windows.Kinect.AudioBeamSubFrame[] Windows.Kinect.AudioBeamFrame::_subFrames
	AudioBeamSubFrameU5BU5D_t3096071649* ____subFrames_0;
	// System.IntPtr Windows.Kinect.AudioBeamFrame::_pNative
	IntPtr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__subFrames_0() { return static_cast<int32_t>(offsetof(AudioBeamFrame_t3938130800, ____subFrames_0)); }
	inline AudioBeamSubFrameU5BU5D_t3096071649* get__subFrames_0() const { return ____subFrames_0; }
	inline AudioBeamSubFrameU5BU5D_t3096071649** get_address_of__subFrames_0() { return &____subFrames_0; }
	inline void set__subFrames_0(AudioBeamSubFrameU5BU5D_t3096071649* value)
	{
		____subFrames_0 = value;
		Il2CppCodeGenWriteBarrier(&____subFrames_0, value);
	}

	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(AudioBeamFrame_t3938130800, ____pNative_1)); }
	inline IntPtr_t get__pNative_1() const { return ____pNative_1; }
	inline IntPtr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(IntPtr_t value)
	{
		____pNative_1 = value;
	}
};

struct AudioBeamFrame_t3938130800_StaticFields
{
public:
	// System.Func`2<System.IntPtr,Windows.Kinect.AudioBeam> Windows.Kinect.AudioBeamFrame::<>f__am$cache2
	Func_2_t1763531769 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<System.IntPtr,Windows.Kinect.AudioSource> Windows.Kinect.AudioBeamFrame::<>f__am$cache3
	Func_2_t2098173477 * ___U3CU3Ef__amU24cache3_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(AudioBeamFrame_t3938130800_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t1763531769 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t1763531769 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t1763531769 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(AudioBeamFrame_t3938130800_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t2098173477 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t2098173477 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t2098173477 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
