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

// System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,System.Object,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,System.Object>>
struct Transform_1_t2532522955;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21129127958.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,System.Object,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2273395954_gshared (Transform_1_t2532522955 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2273395954(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2532522955 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2273395954_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,System.Object,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1129127958  Transform_1_Invoke_m1404367430_gshared (Transform_1_t2532522955 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1404367430(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1129127958  (*) (Transform_1_t2532522955 *, int32_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1404367430_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,System.Object,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1052378481_gshared (Transform_1_t2532522955 * __this, int32_t ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1052378481(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2532522955 *, int32_t, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1052378481_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,System.Object,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1129127958  Transform_1_EndInvoke_m660448900_gshared (Transform_1_t2532522955 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m660448900(__this, ___result0, method) ((  KeyValuePair_2_t1129127958  (*) (Transform_1_t2532522955 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m660448900_gshared)(__this, ___result0, method)
