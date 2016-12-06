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

// System.Net.FileWebRequest
struct FileWebRequest_t1151586641;
// System.Uri
struct Uri_t1116831938;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t354717117;
// System.Exception
struct Exception_t3991598821;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t3238378095;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern "C"  void FileWebRequest__ctor_m1190066806 (FileWebRequest_t1151586641 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest__ctor_m2417420612 (FileWebRequest_t1151586641 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3587475368 (FileWebRequest_t1151586641 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
extern "C"  int64_t FileWebRequest_get_ContentLength_m3959517096 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
extern "C"  Il2CppObject * FileWebRequest_get_Credentials_m3151607268 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FileWebRequest_set_Credentials_m2271052495 (FileWebRequest_t1151586641 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * FileWebRequest_get_Headers_m3065734382 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
extern "C"  String_t* FileWebRequest_get_Method_m2005929480 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
extern "C"  Il2CppObject * FileWebRequest_get_Proxy_m469077010 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
extern "C"  Uri_t1116831938 * FileWebRequest_get_RequestUri_m3313865781 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
extern "C"  Exception_t3991598821 * FileWebRequest_GetMustImplement_m391298838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
extern "C"  void FileWebRequest_Abort_m303714001 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileWebRequest_BeginGetResponse_m1046890263 (FileWebRequest_t1151586641 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t3238378095 * FileWebRequest_EndGetResponse_m1769167488 (FileWebRequest_t1151586641 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
extern "C"  WebResponse_t3238378095 * FileWebRequest_GetResponse_m3466591250 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
extern "C"  WebResponse_t3238378095 * FileWebRequest_GetResponseInternal_m3074376367 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebRequest_GetObjectData_m1166847137 (FileWebRequest_t1151586641 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
extern "C"  void FileWebRequest_Close_m2365028249 (FileWebRequest_t1151586641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
