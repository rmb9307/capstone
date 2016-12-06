#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlImplementation
struct  XmlImplementation_t3716119739  : public Il2CppObject
{
public:
	// System.Xml.XmlNameTable System.Xml.XmlImplementation::InternalNameTable
	XmlNameTable_t1216706026 * ___InternalNameTable_0;

public:
	inline static int32_t get_offset_of_InternalNameTable_0() { return static_cast<int32_t>(offsetof(XmlImplementation_t3716119739, ___InternalNameTable_0)); }
	inline XmlNameTable_t1216706026 * get_InternalNameTable_0() const { return ___InternalNameTable_0; }
	inline XmlNameTable_t1216706026 ** get_address_of_InternalNameTable_0() { return &___InternalNameTable_0; }
	inline void set_InternalNameTable_0(XmlNameTable_t1216706026 * value)
	{
		___InternalNameTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___InternalNameTable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
