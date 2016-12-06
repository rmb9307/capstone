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

// Windows.Kinect.InfraredFrame
struct InfraredFrame_t4122645370;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t2629151118;
// Windows.Kinect.FrameDescription
struct FrameDescription_t2208175287;
// Windows.Kinect.InfraredFrameSource
struct InfraredFrameSource_t3337480309;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.InfraredFrame::.ctor(System.IntPtr)
extern "C"  void InfraredFrame__ctor_m4038798036 (InfraredFrame_t4122645370 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t InfraredFrame_Helper_INativeWrapper_get_nativePtr_m4192767100 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_CopyFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  void InfraredFrame_Windows_Kinect_InfraredFrame_CopyFrameDataToIntPtr_m2182056198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::CopyFrameDataToIntPtr(System.IntPtr,System.UInt32)
extern "C"  void InfraredFrame_CopyFrameDataToIntPtr_m357731822 (InfraredFrame_t4122645370 * __this, IntPtr_t ___frameData0, uint32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_LockImageBuffer(System.IntPtr)
extern "C"  IntPtr_t InfraredFrame_Windows_Kinect_InfraredFrame_LockImageBuffer_m1933625499 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.InfraredFrame::LockImageBuffer()
extern "C"  KinectBuffer_t2629151118 * InfraredFrame_LockImageBuffer_m1923149438 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Finalize()
extern "C"  void InfraredFrame_Finalize_m3644737250 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_ReleaseObject(System.IntPtr&)
extern "C"  void InfraredFrame_Windows_Kinect_InfraredFrame_ReleaseObject_m673926642 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_AddRefObject(System.IntPtr&)
extern "C"  void InfraredFrame_Windows_Kinect_InfraredFrame_AddRefObject_m1994874967 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Dispose(System.Boolean)
extern "C"  void InfraredFrame_Dispose_m3426901108 (InfraredFrame_t4122645370 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_get_FrameDescription(System.IntPtr)
extern "C"  IntPtr_t InfraredFrame_Windows_Kinect_InfraredFrame_get_FrameDescription_m32808419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.InfraredFrame::get_FrameDescription()
extern "C"  FrameDescription_t2208175287 * InfraredFrame_get_FrameDescription_m784355331 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_get_InfraredFrameSource(System.IntPtr)
extern "C"  IntPtr_t InfraredFrame_Windows_Kinect_InfraredFrame_get_InfraredFrameSource_m3094479917 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.InfraredFrame::get_InfraredFrameSource()
extern "C"  InfraredFrameSource_t3337480309 * InfraredFrame_get_InfraredFrameSource_m2812023425 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t InfraredFrame_Windows_Kinect_InfraredFrame_get_RelativeTime_m54903611 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.InfraredFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  InfraredFrame_get_RelativeTime_m643085571 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_CopyFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void InfraredFrame_Windows_Kinect_InfraredFrame_CopyFrameDataToArray_m443072895 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::CopyFrameDataToArray(System.UInt16[])
extern "C"  void InfraredFrame_CopyFrameDataToArray_m505474514 (InfraredFrame_t4122645370 * __this, UInt16U5BU5D_t801649474* ___frameData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Windows_Kinect_InfraredFrame_Dispose(System.IntPtr)
extern "C"  void InfraredFrame_Windows_Kinect_InfraredFrame_Dispose_m200933825 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::Dispose()
extern "C"  void InfraredFrame_Dispose_m3199137213 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrame::__EventCleanup()
extern "C"  void InfraredFrame___EventCleanup_m4101390350 (InfraredFrame_t4122645370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.InfraredFrame::<get_FrameDescription>m__10(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * InfraredFrame_U3Cget_FrameDescriptionU3Em__10_m3847016091 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.InfraredFrame::<get_InfraredFrameSource>m__11(System.IntPtr)
extern "C"  InfraredFrameSource_t3337480309 * InfraredFrame_U3Cget_InfraredFrameSourceU3Em__11_m3119330276 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.InfraredFrame::<LockImageBuffer>m__12(System.IntPtr)
extern "C"  KinectBuffer_t2629151118 * InfraredFrame_U3CLockImageBufferU3Em__12_m45125468 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
