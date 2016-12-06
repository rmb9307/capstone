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

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct Comparison_1_t2781102804;
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

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3652838252_gshared (Comparison_1_t2781102804 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m3652838252(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t2781102804 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3652838252_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m661253900_gshared (Comparison_1_t2781102804 * __this, KeyValuePair_2_t4064741617  ___x0, KeyValuePair_2_t4064741617  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m661253900(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t2781102804 *, KeyValuePair_2_t4064741617 , KeyValuePair_2_t4064741617 , const MethodInfo*))Comparison_1_Invoke_m661253900_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m4148151893_gshared (Comparison_1_t2781102804 * __this, KeyValuePair_2_t4064741617  ___x0, KeyValuePair_2_t4064741617  ___y1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m4148151893(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t2781102804 *, KeyValuePair_2_t4064741617 , KeyValuePair_2_t4064741617 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m4148151893_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m3369528800_gshared (Comparison_1_t2781102804 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m3369528800(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t2781102804 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m3369528800_gshared)(__this, ___result0, method)
