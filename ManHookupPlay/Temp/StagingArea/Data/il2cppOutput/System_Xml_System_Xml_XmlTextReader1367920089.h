#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlTextReader
struct XmlTextReader_t1367920089;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1609187425;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3105792481;

#include "System_Xml_System_Xml_XmlReader4123196108.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t1367920089  : public XmlReader_t4123196108
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t1367920089 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t1609187425 * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t3105792481 * ___entityNameStack_7;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t1367920089, ___entity_3)); }
	inline XmlTextReader_t1367920089 * get_entity_3() const { return ___entity_3; }
	inline XmlTextReader_t1367920089 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(XmlTextReader_t1367920089 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier(&___entity_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t1367920089, ___source_4)); }
	inline XmlTextReader_t1609187425 * get_source_4() const { return ___source_4; }
	inline XmlTextReader_t1609187425 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlTextReader_t1609187425 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t1367920089, ___entityInsideAttribute_5)); }
	inline bool get_entityInsideAttribute_5() const { return ___entityInsideAttribute_5; }
	inline bool* get_address_of_entityInsideAttribute_5() { return &___entityInsideAttribute_5; }
	inline void set_entityInsideAttribute_5(bool value)
	{
		___entityInsideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t1367920089, ___insideAttribute_6)); }
	inline bool get_insideAttribute_6() const { return ___insideAttribute_6; }
	inline bool* get_address_of_insideAttribute_6() { return &___insideAttribute_6; }
	inline void set_insideAttribute_6(bool value)
	{
		___insideAttribute_6 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t1367920089, ___entityNameStack_7)); }
	inline Stack_1_t3105792481 * get_entityNameStack_7() const { return ___entityNameStack_7; }
	inline Stack_1_t3105792481 ** get_address_of_entityNameStack_7() { return &___entityNameStack_7; }
	inline void set_entityNameStack_7(Stack_1_t3105792481 * value)
	{
		___entityNameStack_7 = value;
		Il2CppCodeGenWriteBarrier(&___entityNameStack_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
