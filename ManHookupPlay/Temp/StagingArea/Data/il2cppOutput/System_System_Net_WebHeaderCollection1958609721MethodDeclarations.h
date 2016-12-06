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

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Object
struct Il2CppObject;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m40272365 (WebHeaderCollection_t1958609721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m3165611438 (WebHeaderCollection_t1958609721 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C"  void WebHeaderCollection__ctor_m2599998628 (WebHeaderCollection_t1958609721 * __this, bool ___internallyCreated0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m766347104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m3098703614 (WebHeaderCollection_t1958609721 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String)
extern "C"  void WebHeaderCollection_Add_m375449750 (WebHeaderCollection_t1958609721 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m4256453202 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutValidate_m1282121770 (WebHeaderCollection_t1958609721 * __this, String_t* ___headerName0, String_t* ___headerValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern "C"  StringU5BU5D_t4054002952* WebHeaderCollection_GetValues_m3929772416 (WebHeaderCollection_t1958609721 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C"  bool WebHeaderCollection_IsRestricted_m2143660688 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m829584441 (WebHeaderCollection_t1958609721 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern "C"  void WebHeaderCollection_Remove_m958692135 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C"  void WebHeaderCollection_Set_m2966180401 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m3267340486 (WebHeaderCollection_t1958609721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m3829341963 (WebHeaderCollection_t1958609721 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m955643201 (WebHeaderCollection_t1958609721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t1246329035 * WebHeaderCollection_get_Keys_m2328892712 (WebHeaderCollection_t1958609721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m249241391 (WebHeaderCollection_t1958609721 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.String)
extern "C"  String_t* WebHeaderCollection_Get_m3888214244 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m721597780 (WebHeaderCollection_t1958609721 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Il2CppObject * WebHeaderCollection_GetEnumerator_m671727323 (WebHeaderCollection_t1958609721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String)
extern "C"  void WebHeaderCollection_SetInternal_m805656120 (WebHeaderCollection_t1958609721 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern "C"  void WebHeaderCollection_SetInternal_m2976857204 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveAndAdd(System.String,System.String)
extern "C"  void WebHeaderCollection_RemoveAndAdd_m205461369 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
extern "C"  void WebHeaderCollection_RemoveInternal_m2085139626 (WebHeaderCollection_t1958609721 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsMultiValue(System.String)
extern "C"  bool WebHeaderCollection_IsMultiValue_m762987923 (Il2CppObject * __this /* static, unused */, String_t* ___headerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m3476411603 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m671697555 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
