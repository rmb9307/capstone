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

// System.Xml.Serialization.XmlReflectionImporter
struct XmlReflectionImporter_t4166253470;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t1006296620;
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t2353874421;
// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t3119699864;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t627693335;
// System.Xml.Serialization.XmlReflectionMember
struct XmlReflectionMember_t3010477734;
// System.Xml.Serialization.XmlTypeMapElementInfoList
struct XmlTypeMapElementInfoList_t4199906087;
// System.Xml.Serialization.XmlTypeMapMemberElement
struct XmlTypeMapMemberElement_t3595053281;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOv1006296620.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu2353874421.h"
#include "System_Xml_System_Xml_Serialization_TypeData1652947702.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributes3119699864.h"
#include "System_Xml_System_Xml_Serialization_XmlReflectionM3010477734.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb3595053281.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem4199906087.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Serialization.XmlReflectionImporter::.ctor(System.Xml.Serialization.XmlAttributeOverrides,System.String)
extern "C"  void XmlReflectionImporter__ctor_m3546538387 (XmlReflectionImporter_t4166253470 * __this, XmlAttributeOverrides_t1006296620 * ___attributeOverrides0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::.cctor()
extern "C"  void XmlReflectionImporter__cctor_m2165927656 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportTypeMapping_m1477374953 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportTypeMapping_m1184272485 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportTypeMapping_m4129187674 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportTypeMapping_m3880975803 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::CreateTypeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_CreateTypeMapping_m2215889550 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultXmlType2, String_t* ___defaultNamespace3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportClassMapping_m4281043886 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportClassMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportClassMapping_m1249078031 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::RegisterDerivedMap(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.XmlTypeMapping)
extern "C"  void XmlReflectionImporter_RegisterDerivedMap_m3264893851 (XmlReflectionImporter_t4166253470 * __this, XmlTypeMapping_t3736569231 * ___map0, XmlTypeMapping_t3736569231 * ___derivedMap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlReflectionImporter::GetTypeNamespace(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  String_t* XmlReflectionImporter_GetTypeNamespace_m2770405118 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Type,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportListMapping_m2090871817 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, XmlAttributes_t3119699864 * ___atts3, int32_t ___nestingLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportListMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String,System.Xml.Serialization.XmlAttributes,System.Int32)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportListMapping_m1868833002 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, XmlAttributes_t3119699864 * ___atts3, int32_t ___nestingLevel4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlNodeMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportXmlNodeMapping_m3126312272 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportPrimitiveMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportPrimitiveMapping_m764540222 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportEnumMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportEnumMapping_m3873708482 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlReflectionImporter::ImportXmlSerializableMapping(System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  XmlTypeMapping_t3736569231 * XmlReflectionImporter_ImportXmlSerializableMapping_m2671709965 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, XmlRootAttribute_t2353874421 * ___root1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportIncludedTypes(System.Type,System.String)
extern "C"  void XmlReflectionImporter_ImportIncludedTypes_m4244823514 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, String_t* ___defaultNamespace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Xml.Serialization.XmlReflectionImporter::GetReflectionMembers(System.Type)
extern "C"  Il2CppObject * XmlReflectionImporter_GetReflectionMembers_m3636222560 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlReflectionImporter::CreateMapMember(System.Type,System.Xml.Serialization.XmlReflectionMember,System.String)
extern "C"  XmlTypeMapMember_t627693335 * XmlReflectionImporter_CreateMapMember_m1348048932 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___declaringType0, XmlReflectionMember_t3010477734 * ___rmember1, String_t* ___defaultNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportElementInfo(System.Type,System.String,System.String,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t4199906087 * XmlReflectionImporter_ImportElementInfo_m2490944109 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___cls0, String_t* ___defaultName1, String_t* ___defaultNamespace2, Type_t * ___defaultType3, XmlTypeMapMemberElement_t3595053281 * ___member4, XmlAttributes_t3119699864 * ___atts5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapElementInfoList System.Xml.Serialization.XmlReflectionImporter::ImportAnyElementInfo(System.String,System.Xml.Serialization.XmlReflectionMember,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes)
extern "C"  XmlTypeMapElementInfoList_t4199906087 * XmlReflectionImporter_ImportAnyElementInfo_m2490486255 (XmlReflectionImporter_t4166253470 * __this, String_t* ___defaultNamespace0, XmlReflectionMember_t3010477734 * ___rmember1, XmlTypeMapMemberElement_t3595053281 * ___member2, XmlAttributes_t3119699864 * ___atts3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::ImportTextElementInfo(System.Xml.Serialization.XmlTypeMapElementInfoList,System.Type,System.Xml.Serialization.XmlTypeMapMemberElement,System.Xml.Serialization.XmlAttributes,System.String)
extern "C"  void XmlReflectionImporter_ImportTextElementInfo_m1591165834 (XmlReflectionImporter_t4166253470 * __this, XmlTypeMapElementInfoList_t4199906087 * ___list0, Type_t * ___defaultType1, XmlTypeMapMemberElement_t3595053281 * ___member2, XmlAttributes_t3119699864 * ___atts3, String_t* ___defaultNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlReflectionImporter::CanBeNull(System.Xml.Serialization.TypeData)
extern "C"  bool XmlReflectionImporter_CanBeNull_m8119077 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlReflectionImporter::IncludeType(System.Type)
extern "C"  void XmlReflectionImporter_IncludeType_m646437332 (XmlReflectionImporter_t4166253470 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlReflectionImporter::GetDefaultValue(System.Xml.Serialization.TypeData,System.Object)
extern "C"  Il2CppObject * XmlReflectionImporter_GetDefaultValue_m917009300 (XmlReflectionImporter_t4166253470 * __this, TypeData_t1652947702 * ___typeData0, Il2CppObject * ___defaultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
