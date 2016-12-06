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

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Mono_Security_X509_OSX509Certificates_SecTr1670280072.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
extern "C"  void OSX509Certificates__cctor_m1038795726 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecCertificateCreateWithData_m2116804160 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, IntPtr_t ___nsdataRef1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
extern "C"  int32_t OSX509Certificates_SecTrustCreateWithCertificates_m1080605110 (Il2CppObject * __this /* static, unused */, IntPtr_t ___certOrCertArray0, IntPtr_t ___policies1, IntPtr_t* ___sectrustref2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_SecPolicyCreateSSL_m1415076668 (Il2CppObject * __this /* static, unused */, int32_t ___server0, IntPtr_t ___cfStringHostname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
extern "C"  int32_t OSX509Certificates_SecTrustEvaluate_m82762637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___secTrustRef0, int32_t* ___secTrustResultTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFDataCreate_m4203990262 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, uint8_t* ___bytes1, IntPtr_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
extern "C"  void OSX509Certificates_CFRelease_m3975846355 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t OSX509Certificates_CFArrayCreate_m2706647866 (Il2CppObject * __this /* static, unused */, IntPtr_t ___allocator0, IntPtr_t ___values1, IntPtr_t ___numValues2, IntPtr_t ___callbacks3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
extern "C"  IntPtr_t OSX509Certificates_MakeCFData_m2635409790 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
extern "C"  IntPtr_t OSX509Certificates_FromIntPtrs_m2898371990 (Il2CppObject * __this /* static, unused */, IntPtrU5BU5D_t3228729122* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates_TrustEvaluateSsl_m1836821439 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t4135795358 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
extern "C"  int32_t OSX509Certificates__TrustEvaluateSsl_m2238821220 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t4135795358 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
