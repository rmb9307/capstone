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

// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t627693335;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Serialization_TypeData1652947702.h"

// System.Void System.Xml.Serialization.XmlTypeMapMember::.ctor()
extern "C"  void XmlTypeMapMember__ctor_m2756049672 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlTypeMapMember::get_Name()
extern "C"  String_t* XmlTypeMapMember_get_Name_m466877389 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Name(System.String)
extern "C"  void XmlTypeMapMember_set_Name_m1877731198 (XmlTypeMapMember_t627693335 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::get_DefaultValue()
extern "C"  Il2CppObject * XmlTypeMapMember_get_DefaultValue_m399150432 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_DefaultValue(System.Object)
extern "C"  void XmlTypeMapMember_set_DefaultValue_m2585305675 (XmlTypeMapMember_t627693335 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::IsReadOnly(System.Type)
extern "C"  bool XmlTypeMapMember_IsReadOnly_m3382064857 (XmlTypeMapMember_t627693335 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::GetValue(System.Object,System.String)
extern "C"  Il2CppObject * XmlTypeMapMember_GetValue_m1922396398 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ob0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlTypeMapMember::GetValue(System.Object)
extern "C"  Il2CppObject * XmlTypeMapMember_GetValue_m1259309106 (XmlTypeMapMember_t627693335 * __this, Il2CppObject * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.Object)
extern "C"  void XmlTypeMapMember_SetValue_m1279268951 (XmlTypeMapMember_t627693335 * __this, Il2CppObject * ___ob0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValue(System.Object,System.String,System.Object)
extern "C"  void XmlTypeMapMember_SetValue_m331432915 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ob0, String_t* ___name1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::InitMember(System.Type)
extern "C"  void XmlTypeMapMember_InitMember_m4087126387 (XmlTypeMapMember_t627693335 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapMember::get_TypeData()
extern "C"  TypeData_t1652947702 * XmlTypeMapMember_get_TypeData_m3428473262 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_TypeData(System.Xml.Serialization.TypeData)
extern "C"  void XmlTypeMapMember_set_TypeData_m2333518141 (XmlTypeMapMember_t627693335 * __this, TypeData_t1652947702 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_Index()
extern "C"  int32_t XmlTypeMapMember_get_Index_m1785150577 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_Index(System.Int32)
extern "C"  void XmlTypeMapMember_set_Index_m920860652 (XmlTypeMapMember_t627693335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlTypeMapMember::get_GlobalIndex()
extern "C"  int32_t XmlTypeMapMember_get_GlobalIndex_m1359983822 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_GlobalIndex(System.Int32)
extern "C"  void XmlTypeMapMember_set_GlobalIndex_m527115593 (XmlTypeMapMember_t627693335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsOptionalValueType()
extern "C"  bool XmlTypeMapMember_get_IsOptionalValueType_m3882268486 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsOptionalValueType(System.Boolean)
extern "C"  void XmlTypeMapMember_set_IsOptionalValueType_m439540033 (XmlTypeMapMember_t627693335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::get_IsReturnValue()
extern "C"  bool XmlTypeMapMember_get_IsReturnValue_m41810588 (XmlTypeMapMember_t627693335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::set_IsReturnValue(System.Boolean)
extern "C"  void XmlTypeMapMember_set_IsReturnValue_m866328855 (XmlTypeMapMember_t627693335 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::CheckOptionalValueType(System.Type)
extern "C"  void XmlTypeMapMember_CheckOptionalValueType_m1568711098 (XmlTypeMapMember_t627693335 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlTypeMapMember::GetValueSpecified(System.Object)
extern "C"  bool XmlTypeMapMember_GetValueSpecified_m1148679889 (XmlTypeMapMember_t627693335 * __this, Il2CppObject * ___ob0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlTypeMapMember::SetValueSpecified(System.Object,System.Boolean)
extern "C"  void XmlTypeMapMember_SetValueSpecified_m1043962768 (XmlTypeMapMember_t627693335 * __this, Il2CppObject * ___ob0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
