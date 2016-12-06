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

// System.Net.HttpWebResponse
struct HttpWebResponse_t3793423559;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t2478425814;
// System.Net.CookieContainer
struct CookieContainer_t230274359;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_WebConnectionData2478425814.h"
#include "System_System_Net_CookieContainer230274359.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "System_System_Net_HttpStatusCode2219054529.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C"  void HttpWebResponse__ctor_m704868621 (HttpWebResponse_t3793423559 * __this, Uri_t1116831938 * ___uri0, String_t* ___method1, WebConnectionData_t2478425814 * ___data2, CookieContainer_t230274359 * ___container3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse__ctor_m96379232 (HttpWebResponse_t3793423559 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2809311756 (HttpWebResponse_t3793423559 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C"  void HttpWebResponse_System_IDisposable_Dispose_m705809504 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * HttpWebResponse_get_Headers_m1322100266 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C"  int32_t HttpWebResponse_get_StatusCode_m1024380905 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C"  String_t* HttpWebResponse_get_StatusDescription_m1329734203 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C"  void HttpWebResponse_ReadAll_m1984785448 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C"  Stream_t1561764144 * HttpWebResponse_GetResponseStream_m2118879582 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebResponse_GetObjectData_m2339932349 (HttpWebResponse_t3793423559 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C"  void HttpWebResponse_Close_m3158053301 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C"  void HttpWebResponse_Dispose_m1925005715 (HttpWebResponse_t3793423559 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C"  void HttpWebResponse_CheckDisposed_m2778535370 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C"  void HttpWebResponse_FillCookies_m3918912841 (HttpWebResponse_t3793423559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C"  void HttpWebResponse_SetCookie_m1353788479 (HttpWebResponse_t3793423559 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C"  void HttpWebResponse_SetCookie2_m1214268497 (HttpWebResponse_t3793423559 * __this, String_t* ___cookies_str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C"  DateTime_t4283661327  HttpWebResponse_TryParseCookieExpires_m1708112230 (HttpWebResponse_t3793423559 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
