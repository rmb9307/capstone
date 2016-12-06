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

// System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,Windows.Kinect.Joint>>
struct Transform_1_t1750877335;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23264413307.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2011134424.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,Windows.Kinect.Joint>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4225288352_gshared (Transform_1_t1750877335 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4225288352(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1750877335 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4225288352_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,Windows.Kinect.Joint>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3264413307  Transform_1_Invoke_m1423090648_gshared (Transform_1_t1750877335 * __this, int32_t ___key0, Joint_t2011134424  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1423090648(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3264413307  (*) (Transform_1_t1750877335 *, int32_t, Joint_t2011134424 , const MethodInfo*))Transform_1_Invoke_m1423090648_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,Windows.Kinect.Joint>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m772500099_gshared (Transform_1_t1750877335 * __this, int32_t ___key0, Joint_t2011134424  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m772500099(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1750877335 *, int32_t, Joint_t2011134424 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m772500099_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,System.Collections.Generic.KeyValuePair`2<Windows.Kinect.JointType,Windows.Kinect.Joint>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3264413307  Transform_1_EndInvoke_m2026350002_gshared (Transform_1_t1750877335 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2026350002(__this, ___result0, method) ((  KeyValuePair_2_t3264413307  (*) (Transform_1_t1750877335 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2026350002_gshared)(__this, ___result0, method)
