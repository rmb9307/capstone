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

// System.Xml.Serialization.ListMap
struct ListMap_t2624000936;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t4199906087;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4004344809;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem4199906087.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Serialization.ListMap::.ctor()
extern "C"  void ListMap__ctor_m3996758043 (ListMap_t2624000936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ChoiceMember(System.String)
extern "C"  void ListMap_set_ChoiceMember_m1475177601 (ListMap_t2624000936 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.ListMap::get_ItemInfo()
extern "C"  XmlTypeMapElementInfoList_t4199906087 * ListMap_get_ItemInfo_m2242411739 (ListMap_t2624000936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::set_ItemInfo(System.Xml.Serialization.XmlTypeMapElementInfoList)
extern "C"  void ListMap_set_ItemInfo_m1163337726 (ListMap_t2624000936 * __this, XmlTypeMapElementInfoList_t4199906087 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.Object,System.Int32,System.Object)
extern "C"  XmlTypeMapElementInfo_t4004344809 * ListMap_FindElement_m2886457511 (ListMap_t2624000936 * __this, Il2CppObject * ___ob0, int32_t ___index1, Il2CppObject * ___memberValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindElement(System.String,System.String)
extern "C"  XmlTypeMapElementInfo_t4004344809 * ListMap_FindElement_m1213748392 (ListMap_t2624000936 * __this, String_t* ___elementName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ListMap::FindTextElement()
extern "C"  XmlTypeMapElementInfo_t4004344809 * ListMap_FindTextElement_m1603103273 (ListMap_t2624000936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ListMap::GetArrayType(System.Int32,System.String&,System.String&)
extern "C"  void ListMap_GetArrayType_m2889209111 (ListMap_t2624000936 * __this, int32_t ___itemCount0, String_t** ___localName1, String_t** ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ListMap::Equals(System.Object)
extern "C"  bool ListMap_Equals_m2333461444 (ListMap_t2624000936 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.ListMap::GetHashCode()
extern "C"  int32_t ListMap_GetHashCode_m70947944 (ListMap_t2624000936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
