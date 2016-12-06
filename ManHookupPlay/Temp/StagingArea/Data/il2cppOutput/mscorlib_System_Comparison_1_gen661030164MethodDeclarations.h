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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t661030164;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944668977.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m449166892_gshared (Comparison_1_t661030164 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m449166892(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t661030164 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m449166892_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2456628300_gshared (Comparison_1_t661030164 * __this, KeyValuePair_2_t1944668977  ___x0, KeyValuePair_2_t1944668977  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m2456628300(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t661030164 *, KeyValuePair_2_t1944668977 , KeyValuePair_2_t1944668977 , const MethodInfo*))Comparison_1_Invoke_m2456628300_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m898417557_gshared (Comparison_1_t661030164 * __this, KeyValuePair_2_t1944668977  ___x0, KeyValuePair_2_t1944668977  ___y1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m898417557(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t661030164 *, KeyValuePair_2_t1944668977 , KeyValuePair_2_t1944668977 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m898417557_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2038311072_gshared (Comparison_1_t661030164 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2038311072(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t661030164 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2038311072_gshared)(__this, ___result0, method)
