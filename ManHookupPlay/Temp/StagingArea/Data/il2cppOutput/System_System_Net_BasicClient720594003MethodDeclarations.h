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

// System.Net.BasicClient
struct BasicClient_t720594003;
// System.Net.Authorization
struct Authorization_t3486603059;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Net.ICredentials
struct ICredentials_t2177637613;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_WebRequest51806901.h"

// System.Void System.Net.BasicClient::.ctor()
extern "C"  void BasicClient__ctor_m1780885267 (BasicClient_t720594003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * BasicClient_Authenticate_m2149911920 (BasicClient_t720594003 * __this, String_t* ___challenge0, WebRequest_t51806901 * ___webRequest1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C"  ByteU5BU5D_t4260760469* BasicClient_GetBytes_m4147000082 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * BasicClient_InternalAuthenticate_m4172385463 (Il2CppObject * __this /* static, unused */, WebRequest_t51806901 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * BasicClient_PreAuthenticate_m3596333917 (BasicClient_t720594003 * __this, WebRequest_t51806901 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C"  String_t* BasicClient_get_AuthenticationType_m3361356495 (BasicClient_t720594003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
