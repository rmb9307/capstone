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

// System.Net.FtpWebRequest
struct FtpWebRequest_t3084461655;
// System.Uri
struct Uri_t1116831938;
// System.Exception
struct Exception_t3991598821;
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
// System.Net.FtpStatus
struct FtpStatus_t1259919022;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IO.Stream
struct Stream_t1561764144;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1111884825;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "System_System_Net_FtpWebRequest_RequestState430963524.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_FtpStatus1259919022.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "System_System_Security_Cryptography_X509Certificat1111884825.h"
#include "System_System_Net_Security_SslPolicyErrors3099591579.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m3137933378 (FtpWebRequest_t3084461655 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m2914795070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C"  Exception_t3991598821 * FtpWebRequest_GetMustImplement_m1436910600 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C"  int64_t FtpWebRequest_get_ContentLength_m3510047858 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C"  Il2CppObject * FtpWebRequest_get_Credentials_m3110452944 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C"  void FtpWebRequest_set_Credentials_m133801859 (FtpWebRequest_t3084461655 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C"  bool FtpWebRequest_get_EnableSsl_m3398943863 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * FtpWebRequest_get_Headers_m1485893850 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C"  String_t* FtpWebRequest_get_Method_m2046966946 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C"  Il2CppObject * FtpWebRequest_get_Proxy_m942600838 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C"  int32_t FtpWebRequest_get_ReadWriteTimeout_m3540049670 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C"  Uri_t1116831938 * FtpWebRequest_get_RequestUri_m2356179533 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C"  ServicePoint_t4193060341 * FtpWebRequest_get_ServicePoint_m1902344865 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C"  String_t* FtpWebRequest_get_DataType_m2074737925 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C"  int32_t FtpWebRequest_get_State_m1818655718 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C"  void FtpWebRequest_set_State_m1873142957 (FtpWebRequest_t3084461655 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C"  void FtpWebRequest_Abort_m728953757 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpWebRequest_BeginGetResponse_m4107018323 (FtpWebRequest_t3084461655 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C"  WebResponse_t3238378095 * FtpWebRequest_EndGetResponse_m2534638616 (FtpWebRequest_t3084461655 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C"  WebResponse_t3238378095 * FtpWebRequest_GetResponse_m3573508010 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C"  ServicePoint_t4193060341 * FtpWebRequest_GetServicePoint_m483585814 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C"  void FtpWebRequest_ResolveHost_m2575242273 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C"  void FtpWebRequest_ProcessRequest_m1634672693 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C"  void FtpWebRequest_SetType_m2494411049 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C"  String_t* FtpWebRequest_GetRemoteFolderPath_m2340338028 (FtpWebRequest_t3084461655 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C"  void FtpWebRequest_CWDAndSetFileName_m1594277826 (FtpWebRequest_t3084461655 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C"  void FtpWebRequest_ProcessMethod_m141324445 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C"  void FtpWebRequest_CloseControlConnection_m2759704408 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C"  void FtpWebRequest_CloseDataConnection_m1443100077 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C"  void FtpWebRequest_CloseConnection_m874562275 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C"  void FtpWebRequest_ProcessSimpleMethod_m2514275375 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C"  void FtpWebRequest_UploadData_m3924710304 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C"  void FtpWebRequest_DownloadData_m3903854567 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C"  void FtpWebRequest_CheckRequestStarted_m486165255 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C"  void FtpWebRequest_OpenControlConnection_m875311902 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C"  String_t* FtpWebRequest_GetInitialPath_m2140946823 (Il2CppObject * __this /* static, unused */, FtpStatus_t1259919022 * ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C"  Socket_t2157335841 * FtpWebRequest_SetupPassiveConnection_m4028813507 (FtpWebRequest_t3084461655 * __this, String_t* ___statusDescription0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C"  Exception_t3991598821 * FtpWebRequest_CreateExceptionFromResponse_m3067811096 (FtpWebRequest_t3084461655 * __this, FtpStatus_t1259919022 * ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C"  void FtpWebRequest_SetTransferCompleted_m2900587251 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C"  void FtpWebRequest_OperationCompleted_m1627023545 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C"  void FtpWebRequest_SetCompleteWithError_m2243416684 (FtpWebRequest_t3084461655 * __this, Exception_t3991598821 * ___exc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C"  Socket_t2157335841 * FtpWebRequest_InitDataConnection_m2932897423 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C"  void FtpWebRequest_OpenDataConnection_m1100056487 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C"  void FtpWebRequest_Authenticate_m4136436138 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C"  FtpStatus_t1259919022 * FtpWebRequest_SendCommand_m4255745575 (FtpWebRequest_t3084461655 * __this, String_t* ___command0, StringU5BU5D_t4054002952* ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C"  FtpStatus_t1259919022 * FtpWebRequest_SendCommand_m1304781218 (FtpWebRequest_t3084461655 * __this, bool ___waitResponse0, String_t* ___command1, StringU5BU5D_t4054002952* ___parameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C"  FtpStatus_t1259919022 * FtpWebRequest_ServiceNotAvailable_m797374525 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C"  FtpStatus_t1259919022 * FtpWebRequest_GetResponseStatus_m1396642043 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C"  void FtpWebRequest_InitiateSecureConnection_m3249464690 (FtpWebRequest_t3084461655 * __this, Stream_t1561764144 ** ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C"  bool FtpWebRequest_ChangeToSSLSocket_m485421130 (FtpWebRequest_t3084461655 * __this, Stream_t1561764144 ** ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C"  bool FtpWebRequest_InFinalState_m2632872555 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C"  bool FtpWebRequest_InProgress_m4217774877 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C"  void FtpWebRequest_CheckIfAborted_m1919386719 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C"  void FtpWebRequest_CheckFinalState_m1058126992 (FtpWebRequest_t3084461655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m1388175350 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t3076817455 * ___certificate1, X509Chain_t1111884825 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
