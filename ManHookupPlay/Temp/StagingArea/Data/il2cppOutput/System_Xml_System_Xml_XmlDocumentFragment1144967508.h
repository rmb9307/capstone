#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;

#include "System_Xml_System_Xml_XmlNode856910923.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocumentFragment
struct  XmlDocumentFragment_t1144967508  : public XmlNode_t856910923
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::lastLinkedChild
	XmlLinkedNode_t901819716 * ___lastLinkedChild_5;

public:
	inline static int32_t get_offset_of_lastLinkedChild_5() { return static_cast<int32_t>(offsetof(XmlDocumentFragment_t1144967508, ___lastLinkedChild_5)); }
	inline XmlLinkedNode_t901819716 * get_lastLinkedChild_5() const { return ___lastLinkedChild_5; }
	inline XmlLinkedNode_t901819716 ** get_address_of_lastLinkedChild_5() { return &___lastLinkedChild_5; }
	inline void set_lastLinkedChild_5(XmlLinkedNode_t901819716 * value)
	{
		___lastLinkedChild_5 = value;
		Il2CppCodeGenWriteBarrier(&___lastLinkedChild_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
