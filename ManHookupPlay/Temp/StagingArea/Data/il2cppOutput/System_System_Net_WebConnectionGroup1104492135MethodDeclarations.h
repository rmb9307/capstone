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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1104492135;
// System.Net.ServicePoint
struct ServicePoint_t4193060341;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1384678412;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3949036893;
// System.Collections.Queue
struct Queue_t1759945451;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint4193060341.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_HttpWebRequest3949036893.h"
#include "System_System_Net_WebConnection1384678412.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C"  void WebConnectionGroup__ctor_m1503299254 (WebConnectionGroup_t1104492135 * __this, ServicePoint_t4193060341 * ___sPoint0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t1384678412 * WebConnectionGroup_GetConnection_m3061212227 (WebConnectionGroup_t1104492135 * __this, HttpWebRequest_t3949036893 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionGroup_PrepareSharingNtlm_m4279924202 (Il2CppObject * __this /* static, unused */, WebConnection_t1384678412 * ___cnc0, HttpWebRequest_t3949036893 * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C"  WebConnection_t1384678412 * WebConnectionGroup_CreateOrReuseConnection_m1829131780 (WebConnectionGroup_t1104492135 * __this, HttpWebRequest_t3949036893 * ___request0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C"  Queue_t1759945451 * WebConnectionGroup_get_Queue_m318446937 (WebConnectionGroup_t1104492135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
