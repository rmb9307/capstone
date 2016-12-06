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

// System.Comparison`1<System.UInt64>
struct Comparison_1_t3035996559;
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

// System.Void System.Comparison`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1730160794_gshared (Comparison_1_t3035996559 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m1730160794(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t3035996559 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1730160794_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<System.UInt64>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2003668454_gshared (Comparison_1_t3035996559 * __this, uint64_t ___x0, uint64_t ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m2003668454(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t3035996559 *, uint64_t, uint64_t, const MethodInfo*))Comparison_1_Invoke_m2003668454_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<System.UInt64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m461449567_gshared (Comparison_1_t3035996559 * __this, uint64_t ___x0, uint64_t ___y1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m461449567(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t3035996559 *, uint64_t, uint64_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m461449567_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m504569030_gshared (Comparison_1_t3035996559 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m504569030(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t3035996559 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m504569030_gshared)(__this, ___result0, method)
