#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// BodyRecording/Frame/Body
struct Body_t2012110084;
// BodyRecording/Frame
struct Frame_t2738196877;
// BodyRecording/Frame/Body/Joint
struct Joint_t419964831;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_BodyRecording_Frame_Body2012110084.h"
#include "AssemblyU2DCSharp_BodyRecording_Frame2738196877.h"
#include "AssemblyU2DCSharp_BodyRecording_Frame_Body_Joint419964831.h"

#pragma once
// BodyRecording/Frame/Body[]
struct BodyU5BU5D_t3048086125  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Body_t2012110084 * m_Items[1];

public:
	inline Body_t2012110084 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Body_t2012110084 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Body_t2012110084 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BodyRecording/Frame[]
struct FrameU5BU5D_t346078624  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Frame_t2738196877 * m_Items[1];

public:
	inline Frame_t2738196877 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Frame_t2738196877 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Frame_t2738196877 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BodyRecording/Frame/Body/Joint[]
struct JointU5BU5D_t2823979782  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Joint_t419964831 * m_Items[1];

public:
	inline Joint_t419964831 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Joint_t419964831 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Joint_t419964831 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
