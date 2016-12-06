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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>
struct Transform_1_t1907541441;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3192337475_gshared (Transform_1_t1907541441 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3192337475(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1907541441 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3192337475_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::Invoke(TKey,TValue)
extern "C"  IntPtr_t Transform_1_Invoke_m643295577_gshared (Transform_1_t1907541441 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m643295577(__this, ___key0, ___value1, method) ((  IntPtr_t (*) (Transform_1_t1907541441 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m643295577_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1608444088_gshared (Transform_1_t1907541441 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1608444088(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1907541441 *, IntPtr_t, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1608444088_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.IntPtr>::EndInvoke(System.IAsyncResult)
extern "C"  IntPtr_t Transform_1_EndInvoke_m3023672721_gshared (Transform_1_t1907541441 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3023672721(__this, ___result0, method) ((  IntPtr_t (*) (Transform_1_t1907541441 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3023672721_gshared)(__this, ___result0, method)
