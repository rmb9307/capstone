#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1010706190;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t2974990486;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializableMapping
struct  XmlSerializableMapping_t3574994730  : public XmlTypeMapping_t3736569231
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Serialization.XmlSerializableMapping::_schema
	XmlSchema_t1010706190 * ____schema_15;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Serialization.XmlSerializableMapping::_schemaType
	XmlSchemaComplexType_t2974990486 * ____schemaType_16;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializableMapping::_schemaTypeName
	XmlQualifiedName_t2133315502 * ____schemaTypeName_17;

public:
	inline static int32_t get_offset_of__schema_15() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3574994730, ____schema_15)); }
	inline XmlSchema_t1010706190 * get__schema_15() const { return ____schema_15; }
	inline XmlSchema_t1010706190 ** get_address_of__schema_15() { return &____schema_15; }
	inline void set__schema_15(XmlSchema_t1010706190 * value)
	{
		____schema_15 = value;
		Il2CppCodeGenWriteBarrier(&____schema_15, value);
	}

	inline static int32_t get_offset_of__schemaType_16() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3574994730, ____schemaType_16)); }
	inline XmlSchemaComplexType_t2974990486 * get__schemaType_16() const { return ____schemaType_16; }
	inline XmlSchemaComplexType_t2974990486 ** get_address_of__schemaType_16() { return &____schemaType_16; }
	inline void set__schemaType_16(XmlSchemaComplexType_t2974990486 * value)
	{
		____schemaType_16 = value;
		Il2CppCodeGenWriteBarrier(&____schemaType_16, value);
	}

	inline static int32_t get_offset_of__schemaTypeName_17() { return static_cast<int32_t>(offsetof(XmlSerializableMapping_t3574994730, ____schemaTypeName_17)); }
	inline XmlQualifiedName_t2133315502 * get__schemaTypeName_17() const { return ____schemaTypeName_17; }
	inline XmlQualifiedName_t2133315502 ** get_address_of__schemaTypeName_17() { return &____schemaTypeName_17; }
	inline void set__schemaTypeName_17(XmlQualifiedName_t2133315502 * value)
	{
		____schemaTypeName_17 = value;
		Il2CppCodeGenWriteBarrier(&____schemaTypeName_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
