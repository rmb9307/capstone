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

// Windows.Kinect.BodyIndexFrame
struct BodyIndexFrame_t992690853;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t2629151118;
// Windows.Kinect.BodyIndexFrameSource
struct BodyIndexFrameSource_t2106280800;
// Windows.Kinect.FrameDescription
struct FrameDescription_t2208175287;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.BodyIndexFrame::.ctor(System.IntPtr)
extern "C"  void BodyIndexFrame__ctor_m3471637719 (BodyIndexFrame_t992690853 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyIndexFrame_Helper_INativeWrapper_get_nativePtr_m2992232291 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_CopyFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  void BodyIndexFrame_Windows_Kinect_BodyIndexFrame_CopyFrameDataToIntPtr_m4155870052 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::CopyFrameDataToIntPtr(System.IntPtr,System.UInt32)
extern "C"  void BodyIndexFrame_CopyFrameDataToIntPtr_m4207098033 (BodyIndexFrame_t992690853 * __this, IntPtr_t ___frameData0, uint32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_LockImageBuffer(System.IntPtr)
extern "C"  IntPtr_t BodyIndexFrame_Windows_Kinect_BodyIndexFrame_LockImageBuffer_m1704534969 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.BodyIndexFrame::LockImageBuffer()
extern "C"  KinectBuffer_t2629151118 * BodyIndexFrame_LockImageBuffer_m984910779 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Finalize()
extern "C"  void BodyIndexFrame_Finalize_m361443493 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_ReleaseObject(System.IntPtr&)
extern "C"  void BodyIndexFrame_Windows_Kinect_BodyIndexFrame_ReleaseObject_m2101846100 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_AddRefObject(System.IntPtr&)
extern "C"  void BodyIndexFrame_Windows_Kinect_BodyIndexFrame_AddRefObject_m2040936885 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Dispose(System.Boolean)
extern "C"  void BodyIndexFrame_Dispose_m3555239825 (BodyIndexFrame_t992690853 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_get_BodyIndexFrameSource(System.IntPtr)
extern "C"  IntPtr_t BodyIndexFrame_Windows_Kinect_BodyIndexFrame_get_BodyIndexFrameSource_m4199602364 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.BodyIndexFrame::get_BodyIndexFrameSource()
extern "C"  BodyIndexFrameSource_t2106280800 * BodyIndexFrame_get_BodyIndexFrameSource_m405392810 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_get_FrameDescription(System.IntPtr)
extern "C"  IntPtr_t BodyIndexFrame_Windows_Kinect_BodyIndexFrame_get_FrameDescription_m1120830853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.BodyIndexFrame::get_FrameDescription()
extern "C"  FrameDescription_t2208175287 * BodyIndexFrame_get_FrameDescription_m655060440 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t BodyIndexFrame_Windows_Kinect_BodyIndexFrame_get_RelativeTime_m980890461 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.BodyIndexFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  BodyIndexFrame_get_RelativeTime_m3085724396 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_CopyFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void BodyIndexFrame_Windows_Kinect_BodyIndexFrame_CopyFrameDataToArray_m1808253789 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::CopyFrameDataToArray(System.Byte[])
extern "C"  void BodyIndexFrame_CopyFrameDataToArray_m2301124902 (BodyIndexFrame_t992690853 * __this, ByteU5BU5D_t4260760469* ___frameData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Windows_Kinect_BodyIndexFrame_Dispose(System.IntPtr)
extern "C"  void BodyIndexFrame_Windows_Kinect_BodyIndexFrame_Dispose_m1471592863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::Dispose()
extern "C"  void BodyIndexFrame_Dispose_m1846298522 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrame::__EventCleanup()
extern "C"  void BodyIndexFrame___EventCleanup_m2668596113 (BodyIndexFrame_t992690853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.BodyIndexFrame::<get_BodyIndexFrameSource>m__D(System.IntPtr)
extern "C"  BodyIndexFrameSource_t2106280800 * BodyIndexFrame_U3Cget_BodyIndexFrameSourceU3Em__D_m3875894739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.BodyIndexFrame::<get_FrameDescription>m__E(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * BodyIndexFrame_U3Cget_FrameDescriptionU3Em__E_m2489350034 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.BodyIndexFrame::<LockImageBuffer>m__F(System.IntPtr)
extern "C"  KinectBuffer_t2629151118 * BodyIndexFrame_U3CLockImageBufferU3Em__F_m1765563302 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
