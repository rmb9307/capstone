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

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t1217441384;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2793904297;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;
// System.Xml.Serialization.XmlMembersMapping
struct XmlMembersMapping_t3183693366;
// System.Xml.Serialization.ClassMap
struct ClassMap_t3022169526;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t627693335;
// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t4004344809;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping2793904297.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"
#include "System_Xml_System_Xml_Serialization_XmlMembersMapp3183693366.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Serialization_ClassMap3022169526.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapMembe627693335.h"
#include "System_Xml_System_Xml_Serialization_TypeData1652947702.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapElem4004344809.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.ctor(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializationReaderInterpreter__ctor_m1586101900 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlMapping_t2793904297 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::.cctor()
extern "C"  void XmlSerializationReaderInterpreter__cctor_m42176562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitCallbacks()
extern "C"  void XmlSerializationReaderInterpreter_InitCallbacks_m441346583 (XmlSerializationReaderInterpreter_t1217441384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::InitIDs()
extern "C"  void XmlSerializationReaderInterpreter_InitIDs_m2735550369 (XmlSerializationReaderInterpreter_t1217441384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot()
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadRoot_m120589334 (XmlSerializationReaderInterpreter_t1217441384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEncodedObject(System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadEncodedObject_m368094182 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMessage(System.Xml.Serialization.XmlMembersMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadMessage_m3644585757 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlMembersMapping_t3183693366 * ___typeMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadRoot(System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadRoot_m208594379 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___rootMap0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObject(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadObject_m4289503918 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, bool ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstance(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadClassInstance_m2508680070 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, bool ___checkType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadClassInstanceMembers(System.Xml.Serialization.XmlTypeMapping,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ReadClassInstanceMembers_m341843236 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, Il2CppObject * ___ob1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadAttributeMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_ReadAttributeMembers_m771506417 (XmlSerializationReaderInterpreter_t1217441384 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_ReadMembers_m3531833708 (XmlSerializationReaderInterpreter_t1217441384 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, bool ___readByOrder3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetListMembersDefaults(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetListMembersDefaults_m2216929449 (XmlSerializationReaderInterpreter_t1217441384 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FixupMembers(System.Xml.Serialization.ClassMap,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_FixupMembers_m1308266983 (XmlSerializationReaderInterpreter_t1217441384 * __this, ClassMap_t3022169526 * ___map0, Il2CppObject * ___obfixup1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownAttribute(System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ProcessUnknownAttribute_m1017083930 (XmlSerializationReaderInterpreter_t1217441384 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::ProcessUnknownElement(System.Object)
extern "C"  void XmlSerializationReaderInterpreter_ProcessUnknownElement_m2581126266 (XmlSerializationReaderInterpreter_t1217441384 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter::IsReadOnly(System.Xml.Serialization.XmlTypeMapMember,System.Xml.Serialization.TypeData,System.Object,System.Boolean)
extern "C"  bool XmlSerializationReaderInterpreter_IsReadOnly_m1984941087 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapMember_t627693335 * ___member0, TypeData_t1652947702 * ___memType1, Il2CppObject * ___ob2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetMemberValue_m4123924326 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapMember_t627693335 * ___member0, Il2CppObject * ___ob1, Il2CppObject * ___value2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::SetMemberValueFromAttr(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_SetMemberValueFromAttr_m2685661441 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapMember_t627693335 * ___member0, Il2CppObject * ___ob1, Il2CppObject * ___value2, bool ___isValueList3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetMemberValue(System.Xml.Serialization.XmlTypeMapMember,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetMemberValue_m3633760437 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapMember_t627693335 * ___member0, Il2CppObject * ___ob1, bool ___isValueList2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadObjectElement(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadObjectElement_m3057182400 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapElementInfo_t4004344809 * ___elem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveValue(System.Xml.Serialization.XmlTypeMapElementInfo)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadPrimitiveValue_m1460079763 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapElementInfo_t4004344809 * ___elem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetValueFromXmlString(System.String,System.Xml.Serialization.TypeData,System.Xml.Serialization.XmlTypeMapping)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetValueFromXmlString_m1130414250 (XmlSerializationReaderInterpreter_t1217441384 * __this, String_t* ___value0, TypeData_t1652947702 * ___typeData1, XmlTypeMapping_t3736569231 * ___typeMap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean,System.Object,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadListElement_m2231524935 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, Il2CppObject * ___list2, bool ___canCreateInstance3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadListString(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadListString_m3080279290 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, String_t* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::AddListValue(System.Xml.Serialization.TypeData,System.Object&,System.Int32,System.Object,System.Boolean)
extern "C"  void XmlSerializationReaderInterpreter_AddListValue_m452481463 (XmlSerializationReaderInterpreter_t1217441384 * __this, TypeData_t1652947702 * ___listType0, Il2CppObject ** ___list1, int32_t ___index2, Il2CppObject * ___value3, bool ___canCreateInstance4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateInstance(System.Type)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_CreateInstance_m893565418 (XmlSerializationReaderInterpreter_t1217441384 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::CreateList(System.Type)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_CreateList_m986025985 (XmlSerializationReaderInterpreter_t1217441384 * __this, Type_t * ___listType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::InitializeList(System.Xml.Serialization.TypeData)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_InitializeList_m546932942 (XmlSerializationReaderInterpreter_t1217441384 * __this, TypeData_t1652947702 * ___listType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::FillList(System.Object,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_FillList_m2781762456 (XmlSerializationReaderInterpreter_t1217441384 * __this, Il2CppObject * ___list0, Il2CppObject * ___items1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter::CopyEnumerableList(System.Object,System.Object)
extern "C"  void XmlSerializationReaderInterpreter_CopyEnumerableList_m1241431358 (XmlSerializationReaderInterpreter_t1217441384 * __this, Il2CppObject * ___source0, Il2CppObject * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNodeElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlNodeElement_m2666956979 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlNode(System.Xml.Serialization.TypeData,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlNode_m304139082 (XmlSerializationReaderInterpreter_t1217441384 * __this, TypeData_t1652947702 * ___type0, bool ___wrapped1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadPrimitiveElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadPrimitiveElement_m3056638981 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadEnumElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadEnumElement_m642699493 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::GetEnumValue(System.Xml.Serialization.XmlTypeMapping,System.String)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_GetEnumValue_m4089369701 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter::ReadXmlSerializableElement(System.Xml.Serialization.XmlTypeMapping,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReaderInterpreter_ReadXmlSerializableElement_m148149782 (XmlSerializationReaderInterpreter_t1217441384 * __this, XmlTypeMapping_t3736569231 * ___typeMap0, bool ___isNullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
