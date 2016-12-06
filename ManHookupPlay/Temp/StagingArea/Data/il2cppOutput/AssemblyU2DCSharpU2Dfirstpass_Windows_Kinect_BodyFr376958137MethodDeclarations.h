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

// Windows.Kinect.BodyFrame
struct BodyFrame_t376958137;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.Body>
struct IList_1_t1816908589;
// Windows.Kinect.BodyFrameSource
struct BodyFrameSource_t3039630964;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Vector266920927.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.BodyFrame::.ctor(System.IntPtr)
extern "C"  void BodyFrame__ctor_m1328870611 (BodyFrame_t376958137 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyFrame_Helper_INativeWrapper_get_nativePtr_m33459677 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_GetAndRefreshBodyData(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  void BodyFrame_Windows_Kinect_BodyFrame_GetAndRefreshBodyData_m4029376623 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___bodies1, int32_t ___bodiesSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::GetAndRefreshBodyData(System.Collections.Generic.IList`1<Windows.Kinect.Body>)
extern "C"  void BodyFrame_GetAndRefreshBodyData_m355049819 (BodyFrame_t376958137 * __this, Il2CppObject* ___bodies0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Finalize()
extern "C"  void BodyFrame_Finalize_m2490217377 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_ReleaseObject(System.IntPtr&)
extern "C"  void BodyFrame_Windows_Kinect_BodyFrame_ReleaseObject_m1310282416 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_AddRefObject(System.IntPtr&)
extern "C"  void BodyFrame_Windows_Kinect_BodyFrame_AddRefObject_m2431044569 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Dispose(System.Boolean)
extern "C"  void BodyFrame_Dispose_m184278549 (BodyFrame_t376958137 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_get_BodyCount(System.IntPtr)
extern "C"  int32_t BodyFrame_Windows_Kinect_BodyFrame_get_BodyCount_m3647215464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.BodyFrame::get_BodyCount()
extern "C"  int32_t BodyFrame_get_BodyCount_m1637412077 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_get_BodyFrameSource(System.IntPtr)
extern "C"  IntPtr_t BodyFrame_Windows_Kinect_BodyFrame_get_BodyFrameSource_m653920080 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.BodyFrame::get_BodyFrameSource()
extern "C"  BodyFrameSource_t3039630964 * BodyFrame_get_BodyFrameSource_m2274674592 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_get_FloorClipPlane(System.IntPtr)
extern "C"  IntPtr_t BodyFrame_Windows_Kinect_BodyFrame_get_FloorClipPlane_m3364191824 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.Vector4 Windows.Kinect.BodyFrame::get_FloorClipPlane()
extern "C"  Vector4_t266920927  BodyFrame_get_FloorClipPlane_m3509016861 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t BodyFrame_Windows_Kinect_BodyFrame_get_RelativeTime_m3527096185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.BodyFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  BodyFrame_get_RelativeTime_m3056900418 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Windows_Kinect_BodyFrame_Dispose(System.IntPtr)
extern "C"  void BodyFrame_Windows_Kinect_BodyFrame_Dispose_m3335042755 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::Dispose()
extern "C"  void BodyFrame_Dispose_m529495326 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrame::__EventCleanup()
extern "C"  void BodyFrame___EventCleanup_m3911901581 (BodyFrame_t376958137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.BodyFrame::<get_BodyFrameSource>m__4(System.IntPtr)
extern "C"  BodyFrameSource_t3039630964 * BodyFrame_U3Cget_BodyFrameSourceU3Em__4_m905442989 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
