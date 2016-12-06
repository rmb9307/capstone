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

// System.Net.CookieContainer
struct CookieContainer_t230274359;
// System.Net.Cookie
struct Cookie_t2033273982;
// System.String
struct String_t;
// System.Uri
struct Uri_t1116831938;
// System.Net.CookieCollection
struct CookieCollection_t2536410684;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Cookie2033273982.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Uri1116831938.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C"  void CookieContainer__ctor_m1858224687 (CookieContainer_t230274359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C"  void CookieContainer_AddCookie_m1415598700 (CookieContainer_t230274359 * __this, Cookie_t2033273982 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C"  int32_t CookieContainer_CountDomain_m338866930 (CookieContainer_t230274359 * __this, String_t* ___domain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C"  void CookieContainer_RemoveOldest_m3761972714 (CookieContainer_t230274359 * __this, String_t* ___domain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C"  void CookieContainer_CheckExpiration_m4053631076 (CookieContainer_t230274359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Cook_m2529807560 (CookieContainer_t230274359 * __this, Uri_t1116831938 * ___uri0, Cookie_t2033273982 * ___cookie1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C"  void CookieContainer_Add_m2554413433 (CookieContainer_t230274359 * __this, Uri_t1116831938 * ___uri0, Cookie_t2033273982 * ___cookie1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C"  String_t* CookieContainer_GetCookieHeader_m710965252 (CookieContainer_t230274359 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C"  bool CookieContainer_CheckDomain_m1437975458 (Il2CppObject * __this /* static, unused */, String_t* ___domain0, String_t* ___host1, bool ___exact2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C"  CookieCollection_t2536410684 * CookieContainer_GetCookies_m68052290 (CookieContainer_t230274359 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C"  bool CookieContainer_IsNullOrEmpty_m1462660146 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
