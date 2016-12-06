#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlMemberMapping[]
struct XmlMemberMappingU5BU5D_t2897002614;

#include "System_Xml_System_Xml_Serialization_XmlMapping2793904297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlMembersMapping
struct  XmlMembersMapping_t3183693366  : public XmlMapping_t2793904297
{
public:
	// System.Boolean System.Xml.Serialization.XmlMembersMapping::_hasWrapperElement
	bool ____hasWrapperElement_7;
	// System.Xml.Serialization.XmlMemberMapping[] System.Xml.Serialization.XmlMembersMapping::_mapping
	XmlMemberMappingU5BU5D_t2897002614* ____mapping_8;

public:
	inline static int32_t get_offset_of__hasWrapperElement_7() { return static_cast<int32_t>(offsetof(XmlMembersMapping_t3183693366, ____hasWrapperElement_7)); }
	inline bool get__hasWrapperElement_7() const { return ____hasWrapperElement_7; }
	inline bool* get_address_of__hasWrapperElement_7() { return &____hasWrapperElement_7; }
	inline void set__hasWrapperElement_7(bool value)
	{
		____hasWrapperElement_7 = value;
	}

	inline static int32_t get_offset_of__mapping_8() { return static_cast<int32_t>(offsetof(XmlMembersMapping_t3183693366, ____mapping_8)); }
	inline XmlMemberMappingU5BU5D_t2897002614* get__mapping_8() const { return ____mapping_8; }
	inline XmlMemberMappingU5BU5D_t2897002614** get_address_of__mapping_8() { return &____mapping_8; }
	inline void set__mapping_8(XmlMemberMappingU5BU5D_t2897002614* value)
	{
		____mapping_8 = value;
		Il2CppCodeGenWriteBarrier(&____mapping_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
