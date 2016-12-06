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

// Windows.Kinect.BodyFrameReference
struct BodyFrameReference_t263051208;
// Windows.Kinect.BodyFrame
struct BodyFrame_t376958137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.BodyFrameReference::.ctor(System.IntPtr)
extern "C"  void BodyFrameReference__ctor_m1118699450 (BodyFrameReference_t263051208 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameReference::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyFrameReference_Helper_INativeWrapper_get_nativePtr_m3225719904 (BodyFrameReference_t263051208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReference::Finalize()
extern "C"  void BodyFrameReference_Finalize_m2191844168 (BodyFrameReference_t263051208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReference::Windows_Kinect_BodyFrameReference_ReleaseObject(System.IntPtr&)
extern "C"  void BodyFrameReference_Windows_Kinect_BodyFrameReference_ReleaseObject_m2109281908 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReference::Windows_Kinect_BodyFrameReference_AddRefObject(System.IntPtr&)
extern "C"  void BodyFrameReference_Windows_Kinect_BodyFrameReference_AddRefObject_m1209892757 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReference::Dispose(System.Boolean)
extern "C"  void BodyFrameReference_Dispose_m1037538766 (BodyFrameReference_t263051208 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.BodyFrameReference::Windows_Kinect_BodyFrameReference_get_RelativeTime(System.IntPtr)
extern "C"  int64_t BodyFrameReference_Windows_Kinect_BodyFrameReference_get_RelativeTime_m2509421181 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.BodyFrameReference::get_RelativeTime()
extern "C"  TimeSpan_t413522987  BodyFrameReference_get_RelativeTime_m932208911 (BodyFrameReference_t263051208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameReference::Windows_Kinect_BodyFrameReference_AcquireFrame(System.IntPtr)
extern "C"  IntPtr_t BodyFrameReference_Windows_Kinect_BodyFrameReference_AcquireFrame_m3971645094 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrame Windows.Kinect.BodyFrameReference::AcquireFrame()
extern "C"  BodyFrame_t376958137 * BodyFrameReference_AcquireFrame_m657510666 (BodyFrameReference_t263051208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReference::__EventCleanup()
extern "C"  void BodyFrameReference___EventCleanup_m3644028916 (BodyFrameReference_t263051208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrame Windows.Kinect.BodyFrameReference::<AcquireFrame>m__48(System.IntPtr)
extern "C"  BodyFrame_t376958137 * BodyFrameReference_U3CAcquireFrameU3Em__48_m3174403455 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
