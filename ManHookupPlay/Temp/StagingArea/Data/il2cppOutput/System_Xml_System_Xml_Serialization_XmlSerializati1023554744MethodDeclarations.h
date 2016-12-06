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

// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t1023554744;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2793904297;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;
// System.String
struct String_t;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t3183693366;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Xml.Serialization.ClassMap
struct ClassMap_t3022169526;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t627693335;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4004344809;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Serialization.ListMap
struct ListMap_t2624000936;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Xml.Serialization.XmlTypeMapMemberAnyElement
struct XmlTypeMapMemberAnyElement_t1507945319;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping2793904297.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Serialization_XmlMembersMapp3183693366.h"
#include "System_Xml_System_Xml_Serialization_ClassMap3022169526.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe627693335.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem4004344809.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Serialization_TypeData1652947702.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_Serialization_ListMap2624000936.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMemb1507945319.h"

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializationWriterInterpreter__ctor_m2777107676 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlMapping_t2793904297 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::InitCallbacks()
extern "C"  void XmlSerializationWriterInterpreter_InitCallbacks_m1072713159 (XmlSerializationWriterInterpreter_t1023554744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteRoot(System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteRoot_m2582998282 (XmlSerializationWriterInterpreter_t1023554744 * __this, Il2CppObject * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObject(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteObject_m246499773 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, String_t* ___element2, String_t* ___namesp3, bool ___isNullable4, bool ___needType5, bool ___writeWrappingElem6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMessage(System.Xml.Serialization.XmlMembersMapping,System.Object[])
extern "C"  void XmlSerializationWriterInterpreter_WriteMessage_m3375648597 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlMembersMapping_t3183693366 * ___membersMap0, ObjectU5BU5D_t1108656482* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElement_m2323175056 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, String_t* ___element2, String_t* ___namesp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementAttributes(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElementAttributes_m3076054849 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteObjectElementElements(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteObjectElementElements_m2232415777 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteMembers_m195660520 (XmlSerializationWriterInterpreter_t1023554744 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteAttributeMembers_m486567386 (XmlSerializationWriterInterpreter_t1023554744 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteElementMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WriteElementMembers_m2438908730 (XmlSerializationWriterInterpreter_t1023554744 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationWriterInterpreter_GetMemberValue_m2777931525 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapMember_t627693335 * ___member0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationWriterInterpreter::MemberHasValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  bool XmlSerializationWriterInterpreter_MemberHasValue_m1854916872 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapMember_t627693335 * ___member0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteMemberElement(System.Xml.Serialization.XmlTypeMapElementInfo,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteMemberElement_m884687583 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapElementInfo_t4004344809 * ___elem0, Il2CppObject * ___memberValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationWriterInterpreter::ImplicitConvert(System.Object,System.Type)
extern "C"  Il2CppObject * XmlSerializationWriterInterpreter_ImplicitConvert_m2748108773 (XmlSerializationWriterInterpreter_t1023554744 * __this, Il2CppObject * ___obj0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(System.Object,System.String,System.String,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveValueLiteral_m3733720316 (XmlSerializationWriterInterpreter_t1023554744 * __this, Il2CppObject * ___memberValue0, String_t* ___name1, String_t* ___ns2, XmlTypeMapping_t3736569231 * ___mappedType3, TypeData_t1652947702 * ___typeData4, bool ___wrapped5, bool ___isNullable6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(System.Object,System.String,System.String,System.Xml.XmlQualifiedName,System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveValueEncoded_m588607427 (XmlSerializationWriterInterpreter_t1023554744 * __this, Il2CppObject * ___memberValue0, String_t* ___name1, String_t* ___ns2, XmlQualifiedName_t2133315502 * ___xsiType3, XmlTypeMapping_t3736569231 * ___mappedType4, TypeData_t1652947702 * ___typeData5, bool ___wrapped6, bool ___isNullable7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteListElement_m1737646319 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, String_t* ___element2, String_t* ___namesp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteListContent(System.Object,System.Xml.Serialization.TypeData,System.Xml.Serialization.ListMap,System.Object,System.Text.StringBuilder)
extern "C"  void XmlSerializationWriterInterpreter_WriteListContent_m4184880763 (XmlSerializationWriterInterpreter_t1023554744 * __this, Il2CppObject * ___container0, TypeData_t1652947702 * ___listType1, ListMap_t2624000936 * ___map2, Il2CppObject * ___ob3, StringBuilder_t243639308 * ___targetString4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlSerializationWriterInterpreter::GetListCount(System.Xml.Serialization.TypeData,System.Object)
extern "C"  int32_t XmlSerializationWriterInterpreter_GetListCount_m1323969298 (XmlSerializationWriterInterpreter_t1023554744 * __this, TypeData_t1652947702 * ___listType0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteAnyElementContent(System.Xml.Serialization.XmlTypeMapMemberAnyElement,System.Object)
extern "C"  void XmlSerializationWriterInterpreter_WriteAnyElementContent_m4045039636 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapMemberAnyElement_t1507945319 * ___member0, Il2CppObject * ___memberValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WritePrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WritePrimitiveElement_m191590282 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, String_t* ___element2, String_t* ___namesp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter::WriteEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Object,System.String,System.String)
extern "C"  void XmlSerializationWriterInterpreter_WriteEnumElement_m3368888210 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, String_t* ___element2, String_t* ___namesp3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetStringValue(System.Xml.Serialization.XmlTypeMapping,System.Xml.Serialization.TypeData,System.Object)
extern "C"  String_t* XmlSerializationWriterInterpreter_GetStringValue_m4202024733 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, TypeData_t1652947702 * ___type1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationWriterInterpreter::GetEnumXmlValue(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  String_t* XmlSerializationWriterInterpreter_GetEnumXmlValue_m4038408248 (XmlSerializationWriterInterpreter_t1023554744 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
