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

// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Type
struct Type_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Serialization_TypeData1652947702.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"

// System.Void System.Xml.Serialization.XmlTypeMapping::.ctor(System.String,System.String,System.Xml.Serialization.TypeData,System.String,System.String)
extern "C"  void XmlTypeMapping__ctor_m1515273402 (XmlTypeMapping_t3736569231 * __this, String_t* ___elementName0, String_t* ___ns1, TypeData_t1652947702 * ___typeData2, String_t* ___xmlType3, String_t* ___xmlTypeNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_TypeFullName()
extern "C"  String_t* XmlTypeMapping_get_TypeFullName_m420567886 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::get_TypeData()
extern "C"  TypeData_t1652947702 * XmlTypeMapping_get_TypeData_m3898113510 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlType()
extern "C"  String_t* XmlTypeMapping_get_XmlType_m1769290969 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlType(System.String)
extern "C"  void XmlTypeMapping_set_XmlType_m4239717312 (XmlTypeMapping_t3736569231 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapping::get_XmlTypeNamespace()
extern "C"  String_t* XmlTypeMapping_get_XmlTypeNamespace_m3791467172 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_XmlTypeNamespace(System.String)
extern "C"  void XmlTypeMapping_set_XmlTypeNamespace_m1375523783 (XmlTypeMapping_t3736569231 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::get_DerivedTypes()
extern "C"  ArrayList_t3948406897 * XmlTypeMapping_get_DerivedTypes_m1594465991 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_MultiReferenceType()
extern "C"  bool XmlTypeMapping_get_MultiReferenceType_m2426892065 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::get_BaseMap()
extern "C"  XmlTypeMapping_t3736569231 * XmlTypeMapping_get_BaseMap_m1656586130 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_BaseMap(System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlTypeMapping_set_BaseMap_m1571702341 (XmlTypeMapping_t3736569231 * __this, XmlTypeMapping_t3736569231 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IncludeInSchema(System.Boolean)
extern "C"  void XmlTypeMapping_set_IncludeInSchema_m3085381238 (XmlTypeMapping_t3736569231 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapping::get_IsNullable()
extern "C"  bool XmlTypeMapping_get_IsNullable_m276935072 (XmlTypeMapping_t3736569231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::set_IsNullable(System.Boolean)
extern "C"  void XmlTypeMapping_set_IsNullable_m1376214419 (XmlTypeMapping_t3736569231 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealTypeMap(System.Type)
extern "C"  XmlTypeMapping_t3736569231 * XmlTypeMapping_GetRealTypeMap_m1065224057 (XmlTypeMapping_t3736569231 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::GetRealElementMap(System.String,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlTypeMapping_GetRealElementMap_m2295230554 (XmlTypeMapping_t3736569231 * __this, String_t* ___name0, String_t* ___ens1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapping::UpdateRoot(System.Xml.XmlQualifiedName)
extern "C"  void XmlTypeMapping_UpdateRoot_m2535486701 (XmlTypeMapping_t3736569231 * __this, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
