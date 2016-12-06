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

// System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.Expression,Windows.Kinect.DetectionResult,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>>
struct Transform_1_t4142858639;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21811586861.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Expres978162880.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Detec4139774096.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.Expression,Windows.Kinect.DetectionResult,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3124419986_gshared (Transform_1_t4142858639 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3124419986(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4142858639 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3124419986_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.Expression,Windows.Kinect.DetectionResult,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1811586861  Transform_1_Invoke_m1559045798_gshared (Transform_1_t4142858639 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1559045798(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1811586861  (*) (Transform_1_t4142858639 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1559045798_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.Expression,Windows.Kinect.DetectionResult,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3140742865_gshared (Transform_1_t4142858639 * __this, int32_t ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3140742865(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4142858639 *, int32_t, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3140742865_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.Expression,Windows.Kinect.DetectionResult,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1811586861  Transform_1_EndInvoke_m2740647460_gshared (Transform_1_t4142858639 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2740647460(__this, ___result0, method) ((  KeyValuePair_2_t1811586861  (*) (Transform_1_t4142858639 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2740647460_gshared)(__this, ___result0, method)
