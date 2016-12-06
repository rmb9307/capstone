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

// System.Xml.Serialization.ClassMap
struct ClassMap_t3022169526;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t627693335;
// System.Xml.Serialization.XmlTypeMapMemberExpandable
struct XmlTypeMapMemberExpandable_t458065643;
// System.Xml.Serialization.XmlTypeMapMemberAttribute
struct XmlTypeMapMemberAttribute_t3347168961;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4004344809;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t1507945319;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute
struct XmlTypeMapMemberAnyAttribute_t3386144711;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces
struct XmlTypeMapMemberNamespaces_t82003567;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe627693335.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe458065643.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.Serialization.ClassMap::.ctor()
extern "C"  void ClassMap__ctor_m3728665929 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::AddMember(System.Xml.Serialization.XmlTypeMapMember)
extern "C"  void ClassMap_AddMember_m1875253975 (ClassMap_t3022169526 * __this, XmlTypeMapMember_t627693335 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::RegisterFlatList(System.Xml.Serialization.XmlTypeMapMemberExpandable)
extern "C"  void ClassMap_RegisterFlatList_m688271440 (ClassMap_t3022169526 * __this, XmlTypeMapMemberExpandable_t458065643 * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAttribute System.Xml.Serialization.ClassMap::GetAttribute(System.String,System.String)
extern "C"  XmlTypeMapMemberAttribute_t3347168961 * ClassMap_GetAttribute_m3196217067 (ClassMap_t3022169526 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.String,System.String)
extern "C"  XmlTypeMapElementInfo_t4004344809 * ClassMap_GetElement_m3737748067 (ClassMap_t3022169526 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfo System.Xml.Serialization.ClassMap::GetElement(System.Int32)
extern "C"  XmlTypeMapElementInfo_t4004344809 * ClassMap_GetElement_m4004624716 (ClassMap_t3022169526 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.ClassMap::BuildKey(System.String,System.String)
extern "C"  String_t* ClassMap_BuildKey_m733643573 (ClassMap_t3022169526 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement System.Xml.Serialization.ClassMap::get_DefaultAnyElementMember()
extern "C"  XmlTypeMapMemberAnyElement_t1507945319 * ClassMap_get_DefaultAnyElementMember_m3724699635 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberAnyAttribute System.Xml.Serialization.ClassMap::get_DefaultAnyAttributeMember()
extern "C"  XmlTypeMapMemberAnyAttribute_t3386144711 * ClassMap_get_DefaultAnyAttributeMember_m2749385715 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMemberNamespaces System.Xml.Serialization.ClassMap::get_NamespaceDeclarations()
extern "C"  XmlTypeMapMemberNamespaces_t82003567 * ClassMap_get_NamespaceDeclarations_m3505324052 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_AttributeMembers()
extern "C"  Il2CppObject * ClassMap_get_AttributeMembers_m3649534527 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.ClassMap::get_ElementMembers()
extern "C"  Il2CppObject * ClassMap_get_ElementMembers_m1176036895 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_AllMembers()
extern "C"  ArrayList_t3948406897 * ClassMap_get_AllMembers_m2801991306 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_FlatLists()
extern "C"  ArrayList_t3948406897 * ClassMap_get_FlatLists_m836694060 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.ClassMap::get_ListMembers()
extern "C"  ArrayList_t3948406897 * ClassMap_get_ListMembers_m3321229227 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_XmlTextCollector()
extern "C"  XmlTypeMapMember_t627693335 * ClassMap_get_XmlTextCollector_m2750672627 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.ClassMap::get_ReturnMember()
extern "C"  XmlTypeMapMember_t627693335 * ClassMap_get_ReturnMember_m2751635476 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.ClassMap::get_SimpleContentBaseType()
extern "C"  XmlQualifiedName_t2133315502 * ClassMap_get_SimpleContentBaseType_m4024408541 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ClassMap::SetCanBeSimpleType(System.Boolean)
extern "C"  void ClassMap_SetCanBeSimpleType_m4038087023 (ClassMap_t3022169526 * __this, bool ___can0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.ClassMap::get_HasSimpleContent()
extern "C"  bool ClassMap_get_HasSimpleContent_m3703916553 (ClassMap_t3022169526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
