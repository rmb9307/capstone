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

// Windows.Kinect.DepthFrame
struct DepthFrame_t2975871634;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t2629151118;
// Windows.Kinect.DepthFrameSource
struct DepthFrameSource_t1731581325;
// Windows.Kinect.FrameDescription
struct FrameDescription_t2208175287;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.DepthFrame::.ctor(System.IntPtr)
extern "C"  void DepthFrame__ctor_m1798198020 (DepthFrame_t2975871634 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t DepthFrame_Helper_INativeWrapper_get_nativePtr_m3570221910 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_CopyFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  void DepthFrame_Windows_Kinect_DepthFrame_CopyFrameDataToIntPtr_m4061940868 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::CopyFrameDataToIntPtr(System.IntPtr,System.UInt32)
extern "C"  void DepthFrame_CopyFrameDataToIntPtr_m1333084702 (DepthFrame_t2975871634 * __this, IntPtr_t ___frameData0, uint32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_LockImageBuffer(System.IntPtr)
extern "C"  IntPtr_t DepthFrame_Windows_Kinect_DepthFrame_LockImageBuffer_m1032112089 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.DepthFrame::LockImageBuffer()
extern "C"  KinectBuffer_t2629151118 * DepthFrame_LockImageBuffer_m176276654 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Finalize()
extern "C"  void DepthFrame_Finalize_m1070394130 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_ReleaseObject(System.IntPtr&)
extern "C"  void DepthFrame_Windows_Kinect_DepthFrame_ReleaseObject_m1403056948 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_AddRefObject(System.IntPtr&)
extern "C"  void DepthFrame_Windows_Kinect_DepthFrame_AddRefObject_m3680963285 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Dispose(System.Boolean)
extern "C"  void DepthFrame_Dispose_m1798571588 (DepthFrame_t2975871634 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_get_DepthFrameSource(System.IntPtr)
extern "C"  IntPtr_t DepthFrame_Windows_Kinect_DepthFrame_get_DepthFrameSource_m1225010639 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.DepthFrame::get_DepthFrameSource()
extern "C"  DepthFrameSource_t1731581325 * DepthFrame_get_DepthFrameSource_m2235937777 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_get_DepthMaxReliableDistance(System.IntPtr)
extern "C"  uint16_t DepthFrame_Windows_Kinect_DepthFrame_get_DepthMaxReliableDistance_m434532884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Windows.Kinect.DepthFrame::get_DepthMaxReliableDistance()
extern "C"  uint16_t DepthFrame_get_DepthMaxReliableDistance_m870874408 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_get_DepthMinReliableDistance(System.IntPtr)
extern "C"  uint16_t DepthFrame_Windows_Kinect_DepthFrame_get_DepthMinReliableDistance_m3066155878 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Windows.Kinect.DepthFrame::get_DepthMinReliableDistance()
extern "C"  uint16_t DepthFrame_get_DepthMinReliableDistance_m1750032022 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_get_FrameDescription(System.IntPtr)
extern "C"  IntPtr_t DepthFrame_Windows_Kinect_DepthFrame_get_FrameDescription_m3072619877 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.DepthFrame::get_FrameDescription()
extern "C"  FrameDescription_t2208175287 * DepthFrame_get_FrameDescription_m2888315205 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t DepthFrame_Windows_Kinect_DepthFrame_get_RelativeTime_m91174205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.DepthFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  DepthFrame_get_RelativeTime_m2933821913 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_CopyFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void DepthFrame_Windows_Kinect_DepthFrame_CopyFrameDataToArray_m757877885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::CopyFrameDataToArray(System.UInt16[])
extern "C"  void DepthFrame_CopyFrameDataToArray_m515713954 (DepthFrame_t2975871634 * __this, UInt16U5BU5D_t801649474* ___frameData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Windows_Kinect_DepthFrame_Dispose(System.IntPtr)
extern "C"  void DepthFrame_Windows_Kinect_DepthFrame_Dispose_m171107007 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::Dispose()
extern "C"  void DepthFrame_Dispose_m1453525901 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrame::__EventCleanup()
extern "C"  void DepthFrame___EventCleanup_m564461630 (DepthFrame_t2975871634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.DepthFrame::<get_DepthFrameSource>m__A(System.IntPtr)
extern "C"  DepthFrameSource_t1731581325 * DepthFrame_U3Cget_DepthFrameSourceU3Em__A_m43360841 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.DepthFrame::<get_FrameDescription>m__B(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * DepthFrame_U3Cget_FrameDescriptionU3Em__B_m2738979176 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.DepthFrame::<LockImageBuffer>m__C(System.IntPtr)
extern "C"  KinectBuffer_t2629151118 * DepthFrame_U3CLockImageBufferU3Em__C_m2233271862 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
