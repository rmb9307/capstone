#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t142497835;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Guid2862754429.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t3280570797  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t142497835 * ___namespaces_0;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t3948406897 * ___unhandledAttributeList_1;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t2862754429  ___CompilationId_2;

public:
	inline static int32_t get_offset_of_namespaces_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t3280570797, ___namespaces_0)); }
	inline XmlSerializerNamespaces_t142497835 * get_namespaces_0() const { return ___namespaces_0; }
	inline XmlSerializerNamespaces_t142497835 ** get_address_of_namespaces_0() { return &___namespaces_0; }
	inline void set_namespaces_0(XmlSerializerNamespaces_t142497835 * value)
	{
		___namespaces_0 = value;
		Il2CppCodeGenWriteBarrier(&___namespaces_0, value);
	}

	inline static int32_t get_offset_of_unhandledAttributeList_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t3280570797, ___unhandledAttributeList_1)); }
	inline ArrayList_t3948406897 * get_unhandledAttributeList_1() const { return ___unhandledAttributeList_1; }
	inline ArrayList_t3948406897 ** get_address_of_unhandledAttributeList_1() { return &___unhandledAttributeList_1; }
	inline void set_unhandledAttributeList_1(ArrayList_t3948406897 * value)
	{
		___unhandledAttributeList_1 = value;
		Il2CppCodeGenWriteBarrier(&___unhandledAttributeList_1, value);
	}

	inline static int32_t get_offset_of_CompilationId_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t3280570797, ___CompilationId_2)); }
	inline Guid_t2862754429  get_CompilationId_2() const { return ___CompilationId_2; }
	inline Guid_t2862754429 * get_address_of_CompilationId_2() { return &___CompilationId_2; }
	inline void set_CompilationId_2(Guid_t2862754429  value)
	{
		___CompilationId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
