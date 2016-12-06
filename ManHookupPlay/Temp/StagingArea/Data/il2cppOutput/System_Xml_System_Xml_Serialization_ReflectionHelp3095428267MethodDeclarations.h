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

// System.Xml.Serialization.ReflectionHelper
struct ReflectionHelper_t3095428267;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3736569231;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping3736569231.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Xml.Serialization.ReflectionHelper::.ctor()
extern "C"  void ReflectionHelper__ctor_m3125697524 (ReflectionHelper_t3095428267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::.cctor()
extern "C"  void ReflectionHelper__cctor_m1925246521 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterSchemaType(System.Xml.Serialization.XmlTypeMapping,System.String,System.String)
extern "C"  void ReflectionHelper_RegisterSchemaType_m2450491211 (ReflectionHelper_t3095428267 * __this, XmlTypeMapping_t3736569231 * ___map0, String_t* ___xmlType1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredSchemaType(System.String,System.String)
extern "C"  XmlTypeMapping_t3736569231 * ReflectionHelper_GetRegisteredSchemaType_m1200109303 (ReflectionHelper_t3095428267 * __this, String_t* ___xmlType0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::RegisterClrType(System.Xml.Serialization.XmlTypeMapping,System.Type,System.String)
extern "C"  void ReflectionHelper_RegisterClrType_m131744798 (ReflectionHelper_t3095428267 * __this, XmlTypeMapping_t3736569231 * ___map0, Type_t * ___type1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.ReflectionHelper::GetRegisteredClrType(System.Type,System.String)
extern "C"  XmlTypeMapping_t3736569231 * ReflectionHelper_GetRegisteredClrType_m3155313564 (ReflectionHelper_t3095428267 * __this, Type_t * ___type0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.ReflectionHelper::CheckSerializableType(System.Type,System.Boolean)
extern "C"  void ReflectionHelper_CheckSerializableType_m1100022263 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, bool ___allowPrivateConstructors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
