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
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2793904297;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t3718673302;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t810778919;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_t2149916871;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t1644966515;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t2014987155;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializer
struct  XmlSerializer_t2116068307  : public Il2CppObject
{
public:
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_7;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t2793904297 * ___typeMapping_8;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t3718673302 * ___serializerData_9;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_t810778919 * ___onUnknownAttribute_11;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_t2149916871 * ___onUnknownElement_12;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t1644966515 * ___onUnknownNode_13;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t2014987155 * ___onUnreferencedObject_14;

public:
	inline static int32_t get_offset_of_customSerializer_7() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___customSerializer_7)); }
	inline bool get_customSerializer_7() const { return ___customSerializer_7; }
	inline bool* get_address_of_customSerializer_7() { return &___customSerializer_7; }
	inline void set_customSerializer_7(bool value)
	{
		___customSerializer_7 = value;
	}

	inline static int32_t get_offset_of_typeMapping_8() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___typeMapping_8)); }
	inline XmlMapping_t2793904297 * get_typeMapping_8() const { return ___typeMapping_8; }
	inline XmlMapping_t2793904297 ** get_address_of_typeMapping_8() { return &___typeMapping_8; }
	inline void set_typeMapping_8(XmlMapping_t2793904297 * value)
	{
		___typeMapping_8 = value;
		Il2CppCodeGenWriteBarrier(&___typeMapping_8, value);
	}

	inline static int32_t get_offset_of_serializerData_9() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___serializerData_9)); }
	inline SerializerData_t3718673302 * get_serializerData_9() const { return ___serializerData_9; }
	inline SerializerData_t3718673302 ** get_address_of_serializerData_9() { return &___serializerData_9; }
	inline void set_serializerData_9(SerializerData_t3718673302 * value)
	{
		___serializerData_9 = value;
		Il2CppCodeGenWriteBarrier(&___serializerData_9, value);
	}

	inline static int32_t get_offset_of_onUnknownAttribute_11() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___onUnknownAttribute_11)); }
	inline XmlAttributeEventHandler_t810778919 * get_onUnknownAttribute_11() const { return ___onUnknownAttribute_11; }
	inline XmlAttributeEventHandler_t810778919 ** get_address_of_onUnknownAttribute_11() { return &___onUnknownAttribute_11; }
	inline void set_onUnknownAttribute_11(XmlAttributeEventHandler_t810778919 * value)
	{
		___onUnknownAttribute_11 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownAttribute_11, value);
	}

	inline static int32_t get_offset_of_onUnknownElement_12() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___onUnknownElement_12)); }
	inline XmlElementEventHandler_t2149916871 * get_onUnknownElement_12() const { return ___onUnknownElement_12; }
	inline XmlElementEventHandler_t2149916871 ** get_address_of_onUnknownElement_12() { return &___onUnknownElement_12; }
	inline void set_onUnknownElement_12(XmlElementEventHandler_t2149916871 * value)
	{
		___onUnknownElement_12 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownElement_12, value);
	}

	inline static int32_t get_offset_of_onUnknownNode_13() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___onUnknownNode_13)); }
	inline XmlNodeEventHandler_t1644966515 * get_onUnknownNode_13() const { return ___onUnknownNode_13; }
	inline XmlNodeEventHandler_t1644966515 ** get_address_of_onUnknownNode_13() { return &___onUnknownNode_13; }
	inline void set_onUnknownNode_13(XmlNodeEventHandler_t1644966515 * value)
	{
		___onUnknownNode_13 = value;
		Il2CppCodeGenWriteBarrier(&___onUnknownNode_13, value);
	}

	inline static int32_t get_offset_of_onUnreferencedObject_14() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307, ___onUnreferencedObject_14)); }
	inline UnreferencedObjectEventHandler_t2014987155 * get_onUnreferencedObject_14() const { return ___onUnreferencedObject_14; }
	inline UnreferencedObjectEventHandler_t2014987155 ** get_address_of_onUnreferencedObject_14() { return &___onUnreferencedObject_14; }
	inline void set_onUnreferencedObject_14(UnreferencedObjectEventHandler_t2014987155 * value)
	{
		___onUnreferencedObject_14 = value;
		Il2CppCodeGenWriteBarrier(&___onUnreferencedObject_14, value);
	}
};

struct XmlSerializer_t2116068307_StaticFields
{
public:
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_3;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_4;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_5;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_6;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_t1407064410 * ___serializerTypes_10;

public:
	inline static int32_t get_offset_of_generationThreshold_3() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307_StaticFields, ___generationThreshold_3)); }
	inline int32_t get_generationThreshold_3() const { return ___generationThreshold_3; }
	inline int32_t* get_address_of_generationThreshold_3() { return &___generationThreshold_3; }
	inline void set_generationThreshold_3(int32_t value)
	{
		___generationThreshold_3 = value;
	}

	inline static int32_t get_offset_of_backgroundGeneration_4() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307_StaticFields, ___backgroundGeneration_4)); }
	inline bool get_backgroundGeneration_4() const { return ___backgroundGeneration_4; }
	inline bool* get_address_of_backgroundGeneration_4() { return &___backgroundGeneration_4; }
	inline void set_backgroundGeneration_4(bool value)
	{
		___backgroundGeneration_4 = value;
	}

	inline static int32_t get_offset_of_deleteTempFiles_5() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307_StaticFields, ___deleteTempFiles_5)); }
	inline bool get_deleteTempFiles_5() const { return ___deleteTempFiles_5; }
	inline bool* get_address_of_deleteTempFiles_5() { return &___deleteTempFiles_5; }
	inline void set_deleteTempFiles_5(bool value)
	{
		___deleteTempFiles_5 = value;
	}

	inline static int32_t get_offset_of_generatorFallback_6() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307_StaticFields, ___generatorFallback_6)); }
	inline bool get_generatorFallback_6() const { return ___generatorFallback_6; }
	inline bool* get_address_of_generatorFallback_6() { return &___generatorFallback_6; }
	inline void set_generatorFallback_6(bool value)
	{
		___generatorFallback_6 = value;
	}

	inline static int32_t get_offset_of_serializerTypes_10() { return static_cast<int32_t>(offsetof(XmlSerializer_t2116068307_StaticFields, ___serializerTypes_10)); }
	inline Hashtable_t1407064410 * get_serializerTypes_10() const { return ___serializerTypes_10; }
	inline Hashtable_t1407064410 ** get_address_of_serializerTypes_10() { return &___serializerTypes_10; }
	inline void set_serializerTypes_10(Hashtable_t1407064410 * value)
	{
		___serializerTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&___serializerTypes_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
