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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Net.IPHostEntry
struct IPHostEntry_t737820957;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2243593610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m3697903137 (Il2CppObject * __this /* static, unused */, String_t* ___host0, String_t** ___h_name1, StringU5BU5D_t4054002952** ___h_aliases2, StringU5BU5D_t4054002952** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t737820957 * Dns_hostent_to_IPHostEntry_m818428846 (Il2CppObject * __this /* static, unused */, String_t* ___h_name0, StringU5BU5D_t4054002952* ___h_aliases1, StringU5BU5D_t4054002952* ___h_addrlist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t737820957 * Dns_GetHostByName_m840368461 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
