#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3943949348;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.String
struct String_t;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1203257998;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlNameEntryCache::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNameEntryCache__ctor_m718589799 (XmlNameEntryCache_t3943949348 * __this, XmlNameTable_t1216706026 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNameEntryCache::GetAtomizedPrefixedName(System.String,System.String)
extern "C"  String_t* XmlNameEntryCache_GetAtomizedPrefixedName_m1842421543 (XmlNameEntryCache_t3943949348 * __this, String_t* ___prefix0, String_t* ___local1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::Add(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlNameEntry_t1203257998 * XmlNameEntryCache_Add_m1016483486 (XmlNameEntryCache_t3943949348 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, bool ___atomic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntry System.Xml.XmlNameEntryCache::GetInternal(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlNameEntry_t1203257998 * XmlNameEntryCache_GetInternal_m3901773488 (XmlNameEntryCache_t3943949348 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, bool ___atomic3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
