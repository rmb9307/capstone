#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2793904297;

#include "System_Xml_System_Xml_Serialization_XmlSerializatio351589598.h"
#include "System_Xml_System_Xml_Serialization_SerializationFo927333841.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct  XmlSerializationWriterInterpreter_t1023554744  : public XmlSerializationWriter_t351589598
{
public:
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializationWriterInterpreter::_typeMap
	XmlMapping_t2793904297 * ____typeMap_8;
	// System.Xml.Serialization.SerializationFormat System.Xml.Serialization.XmlSerializationWriterInterpreter::_format
	int32_t ____format_9;

public:
	inline static int32_t get_offset_of__typeMap_8() { return static_cast<int32_t>(offsetof(XmlSerializationWriterInterpreter_t1023554744, ____typeMap_8)); }
	inline XmlMapping_t2793904297 * get__typeMap_8() const { return ____typeMap_8; }
	inline XmlMapping_t2793904297 ** get_address_of__typeMap_8() { return &____typeMap_8; }
	inline void set__typeMap_8(XmlMapping_t2793904297 * value)
	{
		____typeMap_8 = value;
		Il2CppCodeGenWriteBarrier(&____typeMap_8, value);
	}

	inline static int32_t get_offset_of__format_9() { return static_cast<int32_t>(offsetof(XmlSerializationWriterInterpreter_t1023554744, ____format_9)); }
	inline int32_t get__format_9() const { return ____format_9; }
	inline int32_t* get_address_of__format_9() { return &____format_9; }
	inline void set__format_9(int32_t value)
	{
		____format_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
