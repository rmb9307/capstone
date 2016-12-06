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

// System.Net.CookieCollection
struct CookieCollection_t2536410684;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t432953889;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Net.Cookie
struct Cookie_t2033273982;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_System_Net_Cookie2033273982.h"

// System.Void System.Net.CookieCollection::.ctor()
extern "C"  void CookieCollection__ctor_m1008437304 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C"  void CookieCollection__cctor_m714689141 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C"  Il2CppObject* CookieCollection_get_List_m772022205 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C"  int32_t CookieCollection_get_Count_m2566970476 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C"  bool CookieCollection_get_IsSynchronized_m928796317 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C"  Il2CppObject * CookieCollection_get_SyncRoot_m821524061 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CookieCollection_CopyTo_m1816730389 (CookieCollection_t2536410684 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C"  Il2CppObject * CookieCollection_GetEnumerator_m3631747258 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C"  void CookieCollection_Add_m3899574407 (CookieCollection_t2536410684 * __this, Cookie_t2033273982 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C"  void CookieCollection_Sort_m4012327978 (CookieCollection_t2536410684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C"  int32_t CookieCollection_SearchCookie_m3863162774 (CookieCollection_t2536410684 * __this, Cookie_t2033273982 * ___cookie0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C"  Cookie_t2033273982 * CookieCollection_get_Item_m2587555162 (CookieCollection_t2536410684 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
