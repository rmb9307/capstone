#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t1023554744;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo
struct  CallbackInfo_t1978946440  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlSerializationWriterInterpreter System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::_swi
	XmlSerializationWriterInterpreter_t1023554744 * ____swi_0;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::_typeMap
	XmlTypeMapping_t3736569231 * ____typeMap_1;

public:
	inline static int32_t get_offset_of__swi_0() { return static_cast<int32_t>(offsetof(CallbackInfo_t1978946440, ____swi_0)); }
	inline XmlSerializationWriterInterpreter_t1023554744 * get__swi_0() const { return ____swi_0; }
	inline XmlSerializationWriterInterpreter_t1023554744 ** get_address_of__swi_0() { return &____swi_0; }
	inline void set__swi_0(XmlSerializationWriterInterpreter_t1023554744 * value)
	{
		____swi_0 = value;
		Il2CppCodeGenWriteBarrier(&____swi_0, value);
	}

	inline static int32_t get_offset_of__typeMap_1() { return static_cast<int32_t>(offsetof(CallbackInfo_t1978946440, ____typeMap_1)); }
	inline XmlTypeMapping_t3736569231 * get__typeMap_1() const { return ____typeMap_1; }
	inline XmlTypeMapping_t3736569231 ** get_address_of__typeMap_1() { return &____typeMap_1; }
	inline void set__typeMap_1(XmlTypeMapping_t3736569231 * value)
	{
		____typeMap_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeMap_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
