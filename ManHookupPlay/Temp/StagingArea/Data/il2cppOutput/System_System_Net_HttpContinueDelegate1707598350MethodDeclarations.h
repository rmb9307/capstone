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

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t1707598350;
// System.Object
struct Il2CppObject;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Net_WebHeaderCollection1958609721.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HttpContinueDelegate__ctor_m2092117820 (HttpContinueDelegate_t1707598350 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C"  void HttpContinueDelegate_Invoke_m1655092752 (HttpContinueDelegate_t1707598350 * __this, int32_t ___StatusCode0, WebHeaderCollection_t1958609721 * ___httpHeaders1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HttpContinueDelegate_BeginInvoke_m2329366165 (HttpContinueDelegate_t1707598350 * __this, int32_t ___StatusCode0, WebHeaderCollection_t1958609721 * ___httpHeaders1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HttpContinueDelegate_EndInvoke_m697802572 (HttpContinueDelegate_t1707598350 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
