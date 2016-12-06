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

// System.Net.HttpWebRequest
struct HttpWebRequest_t3949036893;
// System.Uri
struct Uri_t1116831938;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t354717117;
// System.Net.ServicePoint
struct ServicePoint_t4193060341;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Net.WebResponse
struct WebResponse_t3238378095;
// System.Net.WebAsyncResult
struct WebAsyncResult_t3680222175;
// System.Exception
struct Exception_t3991598821;
// System.Net.WebConnectionStream
struct WebConnectionStream_t1804418604;
// System.Net.WebConnectionData
struct WebConnectionData_t2478425814;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "System_System_Net_DecompressionMethods3697240007.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_WebHeaderCollection1958609721.h"
#include "System_System_Net_WebAsyncResult3680222175.h"
#include "System_System_Net_HttpStatusCode2219054529.h"
#include "System_System_Net_WebExceptionStatus2952522055.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_System_Net_WebConnectionStream1804418604.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_WebConnectionData2478425814.h"
#include "System_System_Net_WebResponse3238378095.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C"  void HttpWebRequest__ctor_m3412251370 (HttpWebRequest_t3949036893 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest__ctor_m1235446968 (HttpWebRequest_t3949036893 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C"  void HttpWebRequest__cctor_m2196070038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2246907828 (HttpWebRequest_t3949036893 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C"  Uri_t1116831938 * HttpWebRequest_get_Address_m3157794738 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C"  int32_t HttpWebRequest_get_AutomaticDecompression_m2503915258 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C"  bool HttpWebRequest_get_InternalAllowBuffering_m1304022486 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C"  X509CertificateCollection_t3220522733 * HttpWebRequest_get_ClientCertificates_m937340960 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C"  int64_t HttpWebRequest_get_ContentLength_m585169692 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C"  void HttpWebRequest_set_InternalContentLength_m856181900 (HttpWebRequest_t3949036893 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C"  Il2CppObject * HttpWebRequest_get_Credentials_m1078824536 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void HttpWebRequest_set_Credentials_m852191195 (HttpWebRequest_t3949036893 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * HttpWebRequest_get_Headers_m1094031202 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C"  bool HttpWebRequest_get_KeepAlive_m1231113482 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t HttpWebRequest_get_ReadWriteTimeout_m3135707902 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C"  String_t* HttpWebRequest_get_Method_m2357968148 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C"  Il2CppObject * HttpWebRequest_get_Proxy_m2558643078 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C"  Uri_t1116831938 * HttpWebRequest_get_RequestUri_m2277170497 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C"  bool HttpWebRequest_get_SendChunked_m2844571814 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t4193060341 * HttpWebRequest_get_ServicePoint_m146133801 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C"  String_t* HttpWebRequest_get_TransferEncoding_m4082338001 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C"  bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m3363503189 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C"  bool HttpWebRequest_get_ExpectContinue_m3807522816 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C"  void HttpWebRequest_set_ExpectContinue_m372676545 (HttpWebRequest_t3949036893 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C"  Uri_t1116831938 * HttpWebRequest_get_AuthUri_m3734849122 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C"  bool HttpWebRequest_get_ProxyQuery_m4268410842 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t4193060341 * HttpWebRequest_GetServicePoint_m2366596494 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C"  void HttpWebRequest_CheckIfForceWrite_m3239743150 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpWebRequest_BeginGetResponse_m2437478947 (HttpWebRequest_t3949036893 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t3238378095 * HttpWebRequest_EndGetResponse_m3402989044 (HttpWebRequest_t3949036893 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C"  WebResponse_t3238378095 * HttpWebRequest_GetResponse_m1494888070 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C"  bool HttpWebRequest_get_FinishedReading_m884104508 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C"  void HttpWebRequest_set_FinishedReading_m1315164329 (HttpWebRequest_t3949036893 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C"  bool HttpWebRequest_get_Aborted_m2228829969 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C"  void HttpWebRequest_Abort_m3338168389 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpWebRequest_GetObjectData_m3873995797 (HttpWebRequest_t3949036893 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpWebRequest_DoContinueDelegate_m1174339138 (HttpWebRequest_t3949036893 * __this, int32_t ___statusCode0, WebHeaderCollection_t1958609721 * ___headers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_Redirect_m67901887 (HttpWebRequest_t3949036893 * __this, WebAsyncResult_t3680222175 * ___result0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C"  String_t* HttpWebRequest_GetHeaders_m306062586 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C"  void HttpWebRequest_DoPreAuthenticate_m1395833058 (HttpWebRequest_t3949036893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C"  void HttpWebRequest_SetWriteStreamError_m4044682561 (HttpWebRequest_t3949036893 * __this, int32_t ___status0, Exception_t3991598821 * ___exc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C"  void HttpWebRequest_SendRequestHeaders_m1174520259 (HttpWebRequest_t3949036893 * __this, bool ___propagate_error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C"  void HttpWebRequest_SetWriteStream_m3202818152 (HttpWebRequest_t3949036893 * __this, WebConnectionStream_t1804418604 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C"  void HttpWebRequest_SetResponseError_m1093010447 (HttpWebRequest_t3949036893 * __this, int32_t ___status0, Exception_t3991598821 * ___e1, String_t* ___where2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_CheckSendError_m181530809 (HttpWebRequest_t3949036893 * __this, WebConnectionData_t2478425814 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C"  void HttpWebRequest_HandleNtlmAuth_m418121433 (HttpWebRequest_t3949036893 * __this, WebAsyncResult_t3680222175 * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C"  void HttpWebRequest_SetResponseData_m2474314870 (HttpWebRequest_t3949036893 * __this, WebConnectionData_t2478425814 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C"  bool HttpWebRequest_CheckAuthorization_m3745404856 (HttpWebRequest_t3949036893 * __this, WebResponse_t3238378095 * ___response0, int32_t ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C"  bool HttpWebRequest_CheckFinalStatus_m52272070 (HttpWebRequest_t3949036893 * __this, WebAsyncResult_t3680222175 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
