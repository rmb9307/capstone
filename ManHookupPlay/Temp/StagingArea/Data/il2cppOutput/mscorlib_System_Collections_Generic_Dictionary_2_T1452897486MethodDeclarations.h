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

// System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,Windows.Kinect.JointType>
struct Transform_1_t1452897486;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2011134424.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,Windows.Kinect.JointType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3478487476_gshared (Transform_1_t1452897486 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3478487476(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1452897486 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3478487476_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,Windows.Kinect.JointType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1721128260_gshared (Transform_1_t1452897486 * __this, int32_t ___key0, Joint_t2011134424  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1721128260(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t1452897486 *, int32_t, Joint_t2011134424 , const MethodInfo*))Transform_1_Invoke_m1721128260_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,Windows.Kinect.JointType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2469490671_gshared (Transform_1_t1452897486 * __this, int32_t ___key0, Joint_t2011134424  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2469490671(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1452897486 *, int32_t, Joint_t2011134424 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2469490671_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Windows.Kinect.JointType,Windows.Kinect.Joint,Windows.Kinect.JointType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3513587910_gshared (Transform_1_t1452897486 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3513587910(__this, ___result0, method) ((  int32_t (*) (Transform_1_t1452897486 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3513587910_gshared)(__this, ___result0, method)
