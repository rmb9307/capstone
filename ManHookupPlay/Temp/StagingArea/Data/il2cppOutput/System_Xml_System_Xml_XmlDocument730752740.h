#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.String
struct String_t;
// System.Xml.XmlImplementation
struct XmlImplementation_t3716119739;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3943949348;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3074502249;

#include "System_Xml_System_Xml_XmlNode856910923.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t730752740  : public XmlNode_t856910923
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t1216706026 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t3716119739 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t3822670287 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1407064410 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t3943949348 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t901819716 * ___lastLinkedChild_15;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	Il2CppObject * ___schemaInfo_16;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_17;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t3074502249 * ___NodeChanged_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t3074502249 * ___NodeChanging_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t3074502249 * ___NodeInserted_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t3074502249 * ___NodeInserting_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t3074502249 * ___NodeRemoved_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t3074502249 * ___NodeRemoving_23;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___nameTable_8)); }
	inline XmlNameTable_t1216706026 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t1216706026 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t1216706026 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_8, value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier(&___baseURI_9, value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___implementation_10)); }
	inline XmlImplementation_t3716119739 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t3716119739 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t3716119739 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier(&___implementation_10, value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___resolver_12)); }
	inline XmlResolver_t3822670287 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t3822670287 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t3822670287 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_12, value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___idTable_13)); }
	inline Hashtable_t1407064410 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1407064410 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1407064410 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier(&___idTable_13, value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___nameCache_14)); }
	inline XmlNameEntryCache_t3943949348 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t3943949348 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t3943949348 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier(&___nameCache_14, value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t901819716 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t901819716 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t901819716 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_15, value);
	}

	inline static int32_t get_offset_of_schemaInfo_16() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___schemaInfo_16)); }
	inline Il2CppObject * get_schemaInfo_16() const { return ___schemaInfo_16; }
	inline Il2CppObject ** get_address_of_schemaInfo_16() { return &___schemaInfo_16; }
	inline void set_schemaInfo_16(Il2CppObject * value)
	{
		___schemaInfo_16 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_16, value);
	}

	inline static int32_t get_offset_of_loadMode_17() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___loadMode_17)); }
	inline bool get_loadMode_17() const { return ___loadMode_17; }
	inline bool* get_address_of_loadMode_17() { return &___loadMode_17; }
	inline void set_loadMode_17(bool value)
	{
		___loadMode_17 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_18() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeChanged_18)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeChanged_18() const { return ___NodeChanged_18; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeChanged_18() { return &___NodeChanged_18; }
	inline void set_NodeChanged_18(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeChanged_18 = value;
		Il2CppCodeGenWriteBarrier(&___NodeChanged_18, value);
	}

	inline static int32_t get_offset_of_NodeChanging_19() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeChanging_19)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeChanging_19() const { return ___NodeChanging_19; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeChanging_19() { return &___NodeChanging_19; }
	inline void set_NodeChanging_19(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeChanging_19 = value;
		Il2CppCodeGenWriteBarrier(&___NodeChanging_19, value);
	}

	inline static int32_t get_offset_of_NodeInserted_20() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeInserted_20)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeInserted_20() const { return ___NodeInserted_20; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeInserted_20() { return &___NodeInserted_20; }
	inline void set_NodeInserted_20(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeInserted_20 = value;
		Il2CppCodeGenWriteBarrier(&___NodeInserted_20, value);
	}

	inline static int32_t get_offset_of_NodeInserting_21() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeInserting_21)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeInserting_21() const { return ___NodeInserting_21; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeInserting_21() { return &___NodeInserting_21; }
	inline void set_NodeInserting_21(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeInserting_21 = value;
		Il2CppCodeGenWriteBarrier(&___NodeInserting_21, value);
	}

	inline static int32_t get_offset_of_NodeRemoved_22() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeRemoved_22)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeRemoved_22() const { return ___NodeRemoved_22; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeRemoved_22() { return &___NodeRemoved_22; }
	inline void set_NodeRemoved_22(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeRemoved_22 = value;
		Il2CppCodeGenWriteBarrier(&___NodeRemoved_22, value);
	}

	inline static int32_t get_offset_of_NodeRemoving_23() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740, ___NodeRemoving_23)); }
	inline XmlNodeChangedEventHandler_t3074502249 * get_NodeRemoving_23() const { return ___NodeRemoving_23; }
	inline XmlNodeChangedEventHandler_t3074502249 ** get_address_of_NodeRemoving_23() { return &___NodeRemoving_23; }
	inline void set_NodeRemoving_23(XmlNodeChangedEventHandler_t3074502249 * value)
	{
		___NodeRemoving_23 = value;
		Il2CppCodeGenWriteBarrier(&___NodeRemoving_23, value);
	}
};

struct XmlDocument_t730752740_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3339007067* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t730752740_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3339007067* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3339007067** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3339007067* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier(&___optimal_create_types_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
