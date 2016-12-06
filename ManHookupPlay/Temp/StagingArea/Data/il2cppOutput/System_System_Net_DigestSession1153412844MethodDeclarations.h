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

// System.Net.DigestSession
struct DigestSession_t1153412844;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3949036893;
// System.Net.Authorization
struct Authorization_t3486603059;
// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Net.ICredentials
struct ICredentials_t2177637613;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_HttpWebRequest3949036893.h"
#include "System_System_Net_WebRequest51806901.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C"  void DigestSession__ctor_m151504474 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C"  void DigestSession__cctor_m4214542483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C"  String_t* DigestSession_get_Algorithm_m4256264891 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C"  String_t* DigestSession_get_Realm_m2390347355 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C"  String_t* DigestSession_get_Nonce_m3433321403 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C"  String_t* DigestSession_get_Opaque_m1330380727 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C"  String_t* DigestSession_get_QOP_m421001182 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C"  String_t* DigestSession_get_CNonce_m2178640418 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C"  bool DigestSession_Parse_m2526605709 (DigestSession_t1153412844 * __this, String_t* ___challenge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C"  String_t* DigestSession_HashToHexString_m3897483626 (DigestSession_t1153412844 * __this, String_t* ___toBeHashed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C"  String_t* DigestSession_HA1_m3870903473 (DigestSession_t1153412844 * __this, String_t* ___username0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C"  String_t* DigestSession_HA2_m1731891633 (DigestSession_t1153412844 * __this, HttpWebRequest_t3949036893 * ___webRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C"  String_t* DigestSession_Response_m3528911305 (DigestSession_t1153412844 * __this, String_t* ___username0, String_t* ___password1, HttpWebRequest_t3949036893 * ___webRequest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * DigestSession_Authenticate_m3265953531 (DigestSession_t1153412844 * __this, WebRequest_t51806901 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C"  DateTime_t4283661327  DigestSession_get_LastUse_m349648871 (DigestSession_t1153412844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
