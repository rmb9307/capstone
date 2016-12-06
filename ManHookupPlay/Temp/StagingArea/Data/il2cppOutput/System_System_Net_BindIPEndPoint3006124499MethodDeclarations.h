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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t3006124499;
// System.Object
struct Il2CppObject;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Net.ServicePoint
struct ServicePoint_t4193060341;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Net_ServicePoint4193060341.h"
#include "System_System_Net_IPEndPoint2123960758.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C"  void BindIPEndPoint__ctor_m218773313 (BindIPEndPoint_t3006124499 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C"  IPEndPoint_t2123960758 * BindIPEndPoint_Invoke_m554750276 (BindIPEndPoint_t3006124499 * __this, ServicePoint_t4193060341 * ___servicePoint0, IPEndPoint_t2123960758 * ___remoteEndPoint1, int32_t ___retryCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BindIPEndPoint_BeginInvoke_m3404421758 (BindIPEndPoint_t3006124499 * __this, ServicePoint_t4193060341 * ___servicePoint0, IPEndPoint_t2123960758 * ___remoteEndPoint1, int32_t ___retryCount2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C"  IPEndPoint_t2123960758 * BindIPEndPoint_EndInvoke_m2887424362 (BindIPEndPoint_t3006124499 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
