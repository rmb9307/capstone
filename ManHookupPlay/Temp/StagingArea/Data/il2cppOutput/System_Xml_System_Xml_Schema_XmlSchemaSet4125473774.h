#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t1577913490;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Guid2862754429.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaSet
struct  XmlSchemaSet_t4125473774  : public Il2CppObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaSet::nameTable
	XmlNameTable_t1216706026 * ___nameTable_0;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaSet::xmlResolver
	XmlResolver_t3822670287 * ___xmlResolver_1;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaSet::schemas
	ArrayList_t3948406897 * ___schemas_2;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.XmlSchemaSet::settings
	XmlSchemaCompilationSettings_t1577913490 * ___settings_3;
	// System.Guid System.Xml.Schema.XmlSchemaSet::CompilationId
	Guid_t2862754429  ___CompilationId_4;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t4125473774, ___nameTable_0)); }
	inline XmlNameTable_t1216706026 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t1216706026 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t1216706026 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_0, value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t4125473774, ___xmlResolver_1)); }
	inline XmlResolver_t3822670287 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t3822670287 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t3822670287 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier(&___xmlResolver_1, value);
	}

	inline static int32_t get_offset_of_schemas_2() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t4125473774, ___schemas_2)); }
	inline ArrayList_t3948406897 * get_schemas_2() const { return ___schemas_2; }
	inline ArrayList_t3948406897 ** get_address_of_schemas_2() { return &___schemas_2; }
	inline void set_schemas_2(ArrayList_t3948406897 * value)
	{
		___schemas_2 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_2, value);
	}

	inline static int32_t get_offset_of_settings_3() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t4125473774, ___settings_3)); }
	inline XmlSchemaCompilationSettings_t1577913490 * get_settings_3() const { return ___settings_3; }
	inline XmlSchemaCompilationSettings_t1577913490 ** get_address_of_settings_3() { return &___settings_3; }
	inline void set_settings_3(XmlSchemaCompilationSettings_t1577913490 * value)
	{
		___settings_3 = value;
		Il2CppCodeGenWriteBarrier(&___settings_3, value);
	}

	inline static int32_t get_offset_of_CompilationId_4() { return static_cast<int32_t>(offsetof(XmlSchemaSet_t4125473774, ___CompilationId_4)); }
	inline Guid_t2862754429  get_CompilationId_4() const { return ___CompilationId_4; }
	inline Guid_t2862754429 * get_address_of_CompilationId_4() { return &___CompilationId_4; }
	inline void set_CompilationId_4(Guid_t2862754429  value)
	{
		___CompilationId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
