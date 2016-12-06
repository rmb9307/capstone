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

// System.Xml.Serialization.EnumMap
struct EnumMap_t851226725;
// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t1820521728;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Int64[]
struct Int64U5BU5D_t2174042770;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Serialization.EnumMap::.ctor(System.Xml.Serialization.EnumMap/EnumMapMember[],System.Boolean)
extern "C"  void EnumMap__ctor_m1389877646 (EnumMap_t851226725 * __this, EnumMapMemberU5BU5D_t1820521728* ___members0, bool ___isFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.EnumMap::get_IsFlags()
extern "C"  bool EnumMap_get_IsFlags_m2407749736 (EnumMap_t851226725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_EnumNames()
extern "C"  StringU5BU5D_t4054002952* EnumMap_get_EnumNames_m2965856409 (EnumMap_t851226725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.EnumMap::get_XmlNames()
extern "C"  StringU5BU5D_t4054002952* EnumMap_get_XmlNames_m554155393 (EnumMap_t851226725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] System.Xml.Serialization.EnumMap::get_Values()
extern "C"  Int64U5BU5D_t2174042770* EnumMap_get_Values_m2390395762 (EnumMap_t851226725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetXmlName(System.String,System.Object)
extern "C"  String_t* EnumMap_GetXmlName_m407677947 (EnumMap_t851226725 * __this, String_t* ___typeName0, Il2CppObject * ___enumValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.EnumMap::GetEnumName(System.String,System.String)
extern "C"  String_t* EnumMap_GetEnumName_m2804311267 (EnumMap_t851226725 * __this, String_t* ___typeName0, String_t* ___xmlName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
