#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlInputStream
struct XmlInputStream_t2962968081;
// System.Xml.XmlException
struct XmlException_t1475188278;

#include "System_Xml_System_Xml_NonBlockingStreamReader2673413431.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t837919148  : public NonBlockingStreamReader_t2673413431
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2962968081 * ___input_12;

public:
	inline static int32_t get_offset_of_input_12() { return static_cast<int32_t>(offsetof(XmlStreamReader_t837919148, ___input_12)); }
	inline XmlInputStream_t2962968081 * get_input_12() const { return ___input_12; }
	inline XmlInputStream_t2962968081 ** get_address_of_input_12() { return &___input_12; }
	inline void set_input_12(XmlInputStream_t2962968081 * value)
	{
		___input_12 = value;
		Il2CppCodeGenWriteBarrier(&___input_12, value);
	}
};

struct XmlStreamReader_t837919148_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t1475188278 * ___invalidDataException_13;

public:
	inline static int32_t get_offset_of_invalidDataException_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t837919148_StaticFields, ___invalidDataException_13)); }
	inline XmlException_t1475188278 * get_invalidDataException_13() const { return ___invalidDataException_13; }
	inline XmlException_t1475188278 ** get_address_of_invalidDataException_13() { return &___invalidDataException_13; }
	inline void set_invalidDataException_13(XmlException_t1475188278 * value)
	{
		___invalidDataException_13 = value;
		Il2CppCodeGenWriteBarrier(&___invalidDataException_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
