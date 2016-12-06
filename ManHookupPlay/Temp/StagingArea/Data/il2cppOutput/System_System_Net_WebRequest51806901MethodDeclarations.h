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

// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.Net.IWebProxy
struct IWebProxy_t354717117;
// System.Uri
struct Uri_t1116831938;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t3238378095;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t2966431418;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C"  void WebRequest__ctor_m3908406559 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest__ctor_m2268070368 (WebRequest_t51806901 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C"  void WebRequest__cctor_m419422830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3499262348 (WebRequest_t51806901 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C"  void WebRequest_AddDynamicPrefix_m4259958729 (Il2CppObject * __this /* static, unused */, String_t* ___protocol0, String_t* ___implementor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C"  Exception_t3991598821 * WebRequest_GetMustImplement_m2345556858 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C"  int64_t WebRequest_get_ContentLength_m282902724 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C"  Il2CppObject * WebRequest_get_Credentials_m632231296 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void WebRequest_set_Credentials_m1948289971 (WebRequest_t51806901 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * WebRequest_get_Headers_m2569908874 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C"  String_t* WebRequest_get_Method_m1855994732 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C"  Il2CppObject * WebRequest_get_Proxy_m1263414958 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C"  Uri_t1116831938 * WebRequest_get_RequestUri_m3887362073 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_get_DefaultWebProxy_m645383963 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C"  Il2CppObject * WebRequest_GetDefaultWebProxy_m3231963326 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C"  void WebRequest_Abort_m3557951853 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebRequest_BeginGetResponse_m1262614523 (WebRequest_t51806901 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C"  WebRequest_t51806901 * WebRequest_Create_m1795071884 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___requestUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t3238378095 * WebRequest_EndGetResponse_m1707925532 (WebRequest_t51806901 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C"  WebResponse_t3238378095 * WebRequest_GetResponse_m461741742 (WebRequest_t51806901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebRequest_GetObjectData_m3619776829 (WebRequest_t51806901 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C"  Il2CppObject * WebRequest_GetCreator_m1370740790 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C"  void WebRequest_AddPrefix_m2923345701 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
