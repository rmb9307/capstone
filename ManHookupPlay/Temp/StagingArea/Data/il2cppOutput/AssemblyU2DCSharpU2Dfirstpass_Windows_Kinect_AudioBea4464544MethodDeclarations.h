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

// Windows.Kinect.AudioBeamSubFrame
struct AudioBeamSubFrame_t4464544;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t2629151118;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBodyCorrelation>
struct IList_1_t1138229077;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Windows.Kinect.AudioBodyCorrelation
struct AudioBodyCorrelation_t2738549170;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio2510002742.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.AudioBeamSubFrame::.ctor(System.IntPtr)
extern "C"  void AudioBeamSubFrame__ctor_m3514629242 (AudioBeamSubFrame_t4464544 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamSubFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioBeamSubFrame_Helper_INativeWrapper_get_nativePtr_m2564410902 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_CopyFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  void AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_CopyFrameDataToIntPtr_m1563342650 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::CopyFrameDataToIntPtr(System.IntPtr,System.UInt32)
extern "C"  void AudioBeamSubFrame_CopyFrameDataToIntPtr_m2294446356 (AudioBeamSubFrame_t4464544 * __this, IntPtr_t ___frameData0, uint32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_LockAudioBuffer(System.IntPtr)
extern "C"  IntPtr_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_LockAudioBuffer_m1521901876 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.AudioBeamSubFrame::LockAudioBuffer()
extern "C"  KinectBuffer_t2629151118 * AudioBeamSubFrame_LockAudioBuffer_m4200091155 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Finalize()
extern "C"  void AudioBeamSubFrame_Finalize_m3554988040 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_ReleaseObject(System.IntPtr&)
extern "C"  void AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_ReleaseObject_m133045310 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_AddRefObject(System.IntPtr&)
extern "C"  void AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_AddRefObject_m2947258507 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Dispose(System.Boolean)
extern "C"  void AudioBeamSubFrame_Dispose_m120480014 (AudioBeamSubFrame_t4464544 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamMode Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_AudioBeamMode(System.IntPtr)
extern "C"  int32_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_AudioBeamMode_m2207409339 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamMode Windows.Kinect.AudioBeamSubFrame::get_AudioBeamMode()
extern "C"  int32_t AudioBeamSubFrame_get_AudioBeamMode_m1120237533 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_AudioBodyCorrelations(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_AudioBodyCorrelations_m3969473197 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_AudioBodyCorrelations_Length(System.IntPtr)
extern "C"  int32_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_AudioBodyCorrelations_Length_m664974211 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBodyCorrelation> Windows.Kinect.AudioBeamSubFrame::get_AudioBodyCorrelations()
extern "C"  Il2CppObject* AudioBeamSubFrame_get_AudioBodyCorrelations_m1424606223 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_BeamAngle(System.IntPtr)
extern "C"  float AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_BeamAngle_m3392283341 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeamSubFrame::get_BeamAngle()
extern "C"  float AudioBeamSubFrame_get_BeamAngle_m2411263463 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_BeamAngleConfidence(System.IntPtr)
extern "C"  float AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_BeamAngleConfidence_m522843747 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeamSubFrame::get_BeamAngleConfidence()
extern "C"  float AudioBeamSubFrame_get_BeamAngleConfidence_m203474577 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_Duration(System.IntPtr)
extern "C"  int64_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_Duration_m3894289100 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeamSubFrame::get_Duration()
extern "C"  TimeSpan_t413522987  AudioBeamSubFrame_get_Duration_m4216653892 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_FrameLengthInBytes(System.IntPtr)
extern "C"  uint32_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_FrameLengthInBytes_m992442833 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioBeamSubFrame::get_FrameLengthInBytes()
extern "C"  uint32_t AudioBeamSubFrame_get_FrameLengthInBytes_m2907147681 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_get_RelativeTime_m833587079 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeamSubFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  AudioBeamSubFrame_get_RelativeTime_m1257525673 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_CopyFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_CopyFrameDataToArray_m1881533619 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::CopyFrameDataToArray(System.Byte[])
extern "C"  void AudioBeamSubFrame_CopyFrameDataToArray_m580568867 (AudioBeamSubFrame_t4464544 * __this, ByteU5BU5D_t4260760469* ___frameData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Windows_Kinect_AudioBeamSubFrame_Dispose(System.IntPtr)
extern "C"  void AudioBeamSubFrame_Windows_Kinect_AudioBeamSubFrame_Dispose_m1502179573 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::Dispose()
extern "C"  void AudioBeamSubFrame_Dispose_m840937431 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamSubFrame::__EventCleanup()
extern "C"  void AudioBeamSubFrame___EventCleanup_m3934180532 (AudioBeamSubFrame_t4464544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBodyCorrelation Windows.Kinect.AudioBeamSubFrame::<get_AudioBodyCorrelations>m__0(System.IntPtr)
extern "C"  AudioBodyCorrelation_t2738549170 * AudioBeamSubFrame_U3Cget_AudioBodyCorrelationsU3Em__0_m3329964043 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.AudioBeamSubFrame::<LockAudioBuffer>m__1(System.IntPtr)
extern "C"  KinectBuffer_t2629151118 * AudioBeamSubFrame_U3CLockAudioBufferU3Em__1_m1646198041 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
