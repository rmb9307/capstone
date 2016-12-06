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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C"  void NameValueCollection__ctor_m2553202389 (NameValueCollection_t2791941106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameValueCollection__ctor_m3193274006 (NameValueCollection_t2791941106 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C"  String_t* NameValueCollection_get_Item_m3428939380 (NameValueCollection_t2791941106 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C"  void NameValueCollection_set_Item_m2275159743 (NameValueCollection_t2791941106 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C"  void NameValueCollection_Add_m1609818730 (NameValueCollection_t2791941106 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C"  String_t* NameValueCollection_Get_m2840953239 (NameValueCollection_t2791941106 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C"  String_t* NameValueCollection_Get_m2626902908 (NameValueCollection_t2791941106 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C"  String_t* NameValueCollection_AsSingleString_m3181933374 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C"  String_t* NameValueCollection_GetKey_m4077148652 (NameValueCollection_t2791941106 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t4054002952* NameValueCollection_GetValues_m3701559064 (NameValueCollection_t2791941106 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C"  StringU5BU5D_t4054002952* NameValueCollection_AsStringArray_m1125265865 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C"  void NameValueCollection_Remove_m3355314703 (NameValueCollection_t2791941106 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C"  void NameValueCollection_Set_m319545929 (NameValueCollection_t2791941106 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C"  void NameValueCollection_InvalidateCachedArrays_m3569021030 (NameValueCollection_t2791941106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
