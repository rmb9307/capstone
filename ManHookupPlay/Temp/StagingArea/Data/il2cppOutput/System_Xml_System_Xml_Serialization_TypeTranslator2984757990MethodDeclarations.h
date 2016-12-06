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

// System.Xml.Serialization.TypeData
struct TypeData_t1652947702;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
extern "C"  void TypeTranslator__cctor_m1890549556 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
extern "C"  TypeData_t1652947702 * TypeTranslator_GetTypeData_m2692872845 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
extern "C"  TypeData_t1652947702 * TypeTranslator_GetTypeData_m4275513353 (Il2CppObject * __this /* static, unused */, Type_t * ___runtimeType0, String_t* ___xmlDataType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
extern "C"  TypeData_t1652947702 * TypeTranslator_GetPrimitiveTypeData_m2824660061 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
extern "C"  TypeData_t1652947702 * TypeTranslator_GetPrimitiveTypeData_m4210854272 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, bool ___nullable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::FindPrimitiveTypeData(System.String)
extern "C"  TypeData_t1652947702 * TypeTranslator_FindPrimitiveTypeData_m801086334 (Il2CppObject * __this /* static, unused */, String_t* ___typeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
extern "C"  String_t* TypeTranslator_GetArrayName_m359787500 (Il2CppObject * __this /* static, unused */, String_t* ___elemName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
extern "C"  void TypeTranslator_ParseArrayType_m2894191449 (Il2CppObject * __this /* static, unused */, String_t* ___arrayType0, String_t** ___type1, String_t** ___ns2, String_t** ___dimensions3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
