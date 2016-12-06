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

// Helper.SmartGCHandle
struct SmartGCHandle_t1372878311;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Helper_SmartGCHandle1372878311.h"

// System.Void Helper.SmartGCHandle::.ctor(System.Runtime.InteropServices.GCHandle)
extern "C"  void SmartGCHandle__ctor_m3726570916 (SmartGCHandle_t1372878311 * __this, GCHandle_t1812538030  ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.SmartGCHandle::Finalize()
extern "C"  void SmartGCHandle_Finalize_m110196704 (SmartGCHandle_t1372878311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Helper.SmartGCHandle::AddrOfPinnedObject()
extern "C"  IntPtr_t SmartGCHandle_AddrOfPinnedObject_m1748405110 (SmartGCHandle_t1372878311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.SmartGCHandle::Dispose()
extern "C"  void SmartGCHandle_Dispose_m1976741119 (SmartGCHandle_t1372878311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.SmartGCHandle::Dispose(System.Boolean)
extern "C"  void SmartGCHandle_Dispose_m3450550326 (SmartGCHandle_t1372878311 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle Helper.SmartGCHandle::op_Implicit(Helper.SmartGCHandle)
extern "C"  GCHandle_t1812538030  SmartGCHandle_op_Implicit_m84921711 (Il2CppObject * __this /* static, unused */, SmartGCHandle_t1372878311 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
