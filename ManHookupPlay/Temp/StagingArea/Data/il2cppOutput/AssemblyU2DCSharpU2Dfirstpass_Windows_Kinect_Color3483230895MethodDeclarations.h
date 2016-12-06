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

// Windows.Kinect.ColorFrameReference
struct ColorFrameReference_t3483230895;
// Windows.Kinect.ColorFrame
struct ColorFrame_t4040143346;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.ColorFrameReference::.ctor(System.IntPtr)
extern "C"  void ColorFrameReference__ctor_m3706035529 (ColorFrameReference_t3483230895 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameReference::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t ColorFrameReference_Helper_INativeWrapper_get_nativePtr_m3042391655 (ColorFrameReference_t3483230895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReference::Finalize()
extern "C"  void ColorFrameReference_Finalize_m2743752599 (ColorFrameReference_t3483230895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReference::Windows_Kinect_ColorFrameReference_ReleaseObject(System.IntPtr&)
extern "C"  void ColorFrameReference_Windows_Kinect_ColorFrameReference_ReleaseObject_m2054859548 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReference::Windows_Kinect_ColorFrameReference_AddRefObject(System.IntPtr&)
extern "C"  void ColorFrameReference_Windows_Kinect_ColorFrameReference_AddRefObject_m1208137197 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReference::Dispose(System.Boolean)
extern "C"  void ColorFrameReference_Dispose_m2883574239 (ColorFrameReference_t3483230895 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.ColorFrameReference::Windows_Kinect_ColorFrameReference_get_RelativeTime(System.IntPtr)
extern "C"  int64_t ColorFrameReference_Windows_Kinect_ColorFrameReference_get_RelativeTime_m426582885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.ColorFrameReference::get_RelativeTime()
extern "C"  TimeSpan_t413522987  ColorFrameReference_get_RelativeTime_m2663669496 (ColorFrameReference_t3483230895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameReference::Windows_Kinect_ColorFrameReference_AcquireFrame(System.IntPtr)
extern "C"  IntPtr_t ColorFrameReference_Windows_Kinect_ColorFrameReference_AcquireFrame_m4123710478 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrame Windows.Kinect.ColorFrameReference::AcquireFrame()
extern "C"  ColorFrame_t4040143346 * ColorFrameReference_AcquireFrame_m3413195644 (ColorFrameReference_t3483230895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReference::__EventCleanup()
extern "C"  void ColorFrameReference___EventCleanup_m2688431363 (ColorFrameReference_t3483230895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrame Windows.Kinect.ColorFrameReference::<AcquireFrame>m__5D(System.IntPtr)
extern "C"  ColorFrame_t4040143346 * ColorFrameReference_U3CAcquireFrameU3Em__5D_m2528808806 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
