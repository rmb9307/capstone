#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t1675009921;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3993110696;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t856910923  : public Il2CppObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t730752740 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t856910923 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t3993110696 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t856910923, ___ownerDocument_1)); }
	inline XmlDocument_t730752740 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t730752740 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t730752740 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier(&___ownerDocument_1, value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t856910923, ___parentNode_2)); }
	inline XmlNode_t856910923 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t856910923 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t856910923 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentNode_2, value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t856910923, ___childNodes_3)); }
	inline XmlNodeListChildren_t3993110696 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t3993110696 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t3993110696 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier(&___childNodes_3, value);
	}
};

struct XmlNode_t856910923_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t1675009921 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map44_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t856910923_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t1675009921 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t1675009921 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t1675009921 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier(&___emptyList_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t856910923_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map44_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
