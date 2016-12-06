#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1203257998;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameEntryCache
struct  XmlNameEntryCache_t3943949348  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Xml.XmlNameEntryCache::table
	Hashtable_t1407064410 * ___table_0;
	// System.Xml.XmlNameTable System.Xml.XmlNameEntryCache::nameTable
	XmlNameTable_t1216706026 * ___nameTable_1;
	// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::dummy
	XmlNameEntry_t1203257998 * ___dummy_2;
	// System.Char[] System.Xml.XmlNameEntryCache::cacheBuffer
	CharU5BU5D_t3324145743* ___cacheBuffer_3;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(XmlNameEntryCache_t3943949348, ___table_0)); }
	inline Hashtable_t1407064410 * get_table_0() const { return ___table_0; }
	inline Hashtable_t1407064410 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t1407064410 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlNameEntryCache_t3943949348, ___nameTable_1)); }
	inline XmlNameTable_t1216706026 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t1216706026 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t1216706026 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_1, value);
	}

	inline static int32_t get_offset_of_dummy_2() { return static_cast<int32_t>(offsetof(XmlNameEntryCache_t3943949348, ___dummy_2)); }
	inline XmlNameEntry_t1203257998 * get_dummy_2() const { return ___dummy_2; }
	inline XmlNameEntry_t1203257998 ** get_address_of_dummy_2() { return &___dummy_2; }
	inline void set_dummy_2(XmlNameEntry_t1203257998 * value)
	{
		___dummy_2 = value;
		Il2CppCodeGenWriteBarrier(&___dummy_2, value);
	}

	inline static int32_t get_offset_of_cacheBuffer_3() { return static_cast<int32_t>(offsetof(XmlNameEntryCache_t3943949348, ___cacheBuffer_3)); }
	inline CharU5BU5D_t3324145743* get_cacheBuffer_3() const { return ___cacheBuffer_3; }
	inline CharU5BU5D_t3324145743** get_address_of_cacheBuffer_3() { return &___cacheBuffer_3; }
	inline void set_cacheBuffer_3(CharU5BU5D_t3324145743* value)
	{
		___cacheBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___cacheBuffer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
