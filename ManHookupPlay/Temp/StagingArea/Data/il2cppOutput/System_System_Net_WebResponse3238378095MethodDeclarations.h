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

// System.Net.WebResponse
struct WebResponse_t3238378095;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.Exception
struct Exception_t3991598821;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C"  void WebResponse__ctor_m3965513847 (WebResponse_t3238378095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse__ctor_m2042933560 (WebResponse_t3238378095 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C"  void WebResponse_System_IDisposable_Dispose_m931962760 (WebResponse_t3238378095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2977596212 (WebResponse_t3238378095 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * WebResponse_get_Headers_m4124635138 (WebResponse_t3238378095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C"  Exception_t3991598821 * WebResponse_GetMustImplement_m1484151200 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C"  void WebResponse_Close_m1381406093 (WebResponse_t3238378095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C"  Stream_t1561764144 * WebResponse_GetResponseStream_m1640513078 (WebResponse_t3238378095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebResponse_GetObjectData_m3049078933 (WebResponse_t3238378095 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
