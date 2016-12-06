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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2431285719;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalCertificateSelectionCallback__ctor_m1247669215 (LocalCertificateSelectionCallback_t2431285719 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t3076817455 * LocalCertificateSelectionCallback_Invoke_m2092911830 (LocalCertificateSelectionCallback_t2431285719 * __this, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t3220522733 * ___localCertificates2, X509Certificate_t3076817455 * ___remoteCertificate3, StringU5BU5D_t4054002952* ___acceptableIssuers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LocalCertificateSelectionCallback_BeginInvoke_m3113613092 (LocalCertificateSelectionCallback_t2431285719 * __this, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t3220522733 * ___localCertificates2, X509Certificate_t3076817455 * ___remoteCertificate3, StringU5BU5D_t4054002952* ___acceptableIssuers4, AsyncCallback_t1369114871 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t3076817455 * LocalCertificateSelectionCallback_EndInvoke_m660893172 (LocalCertificateSelectionCallback_t2431285719 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
