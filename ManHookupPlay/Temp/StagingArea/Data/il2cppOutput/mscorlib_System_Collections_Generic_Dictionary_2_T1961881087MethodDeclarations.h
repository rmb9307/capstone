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

// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct Transform_1_t1961881087;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24064741617.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1088028956_gshared (Transform_1_t1961881087 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1088028956(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1961881087 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1088028956_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4064741617  Transform_1_Invoke_m3557968348_gshared (Transform_1_t1961881087 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3557968348(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4064741617  (*) (Transform_1_t1961881087 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3557968348_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3520751495_gshared (Transform_1_t1961881087 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3520751495(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1961881087 *, IntPtr_t, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3520751495_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.Object,System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4064741617  Transform_1_EndInvoke_m2620052782_gshared (Transform_1_t1961881087 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2620052782(__this, ___result0, method) ((  KeyValuePair_2_t4064741617  (*) (Transform_1_t1961881087 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2620052782_gshared)(__this, ___result0, method)
