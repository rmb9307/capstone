#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchema
struct  XmlSchema_t1010706190  : public XmlSchemaObject_t3280570797
{
public:
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_3;

public:
	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(XmlSchema_t1010706190, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
