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

// Windows.Kinect.AudioBeamFrame
struct AudioBeamFrame_t3938130800;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamSubFrame>
struct IList_1_t2699111747;
// Windows.Kinect.AudioBeam
struct AudioBeam_t3629711475;
// Windows.Kinect.AudioSource
struct AudioSource_t3964353183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.AudioBeamFrame::.ctor(System.IntPtr)
extern "C"  void AudioBeamFrame__ctor_m2279562082 (AudioBeamFrame_t3938130800 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioBeamFrame_Helper_INativeWrapper_get_nativePtr_m132448312 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Dispose(System.Boolean)
extern "C"  void AudioBeamFrame_Dispose_m1219541286 (AudioBeamFrame_t3938130800 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_Dispose(System.IntPtr)
extern "C"  void AudioBeamFrame_Windows_Kinect_AudioBeamFrame_Dispose_m3106774783 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Dispose()
extern "C"  void AudioBeamFrame_Dispose_m3162739183 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_SubFrames(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_SubFrames_m1294254208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_SubFrames_Length(System.IntPtr)
extern "C"  int32_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_SubFrames_Length_m436746646 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamSubFrame> Windows.Kinect.AudioBeamFrame::get_SubFrames()
extern "C"  Il2CppObject* AudioBeamFrame_get_SubFrames_m922791228 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Finalize()
extern "C"  void AudioBeamFrame_Finalize_m2516398320 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_ReleaseObject(System.IntPtr&)
extern "C"  void AudioBeamFrame_Windows_Kinect_AudioBeamFrame_ReleaseObject_m212201204 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_AddRefObject(System.IntPtr&)
extern "C"  void AudioBeamFrame_Windows_Kinect_AudioBeamFrame_AddRefObject_m871601941 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_AudioBeam(System.IntPtr)
extern "C"  IntPtr_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_AudioBeam_m3631560045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeam Windows.Kinect.AudioBeamFrame::get_AudioBeam()
extern "C"  AudioBeam_t3629711475 * AudioBeamFrame_get_AudioBeam_m3181133705 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_AudioSource(System.IntPtr)
extern "C"  IntPtr_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_AudioSource_m4160560449 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeamFrame::get_AudioSource()
extern "C"  AudioSource_t3964353183 * AudioBeamFrame_get_AudioSource_m2547273673 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_Duration(System.IntPtr)
extern "C"  int64_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_Duration_m1139974210 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeamFrame::get_Duration()
extern "C"  TimeSpan_t413522987  AudioBeamFrame_get_Duration_m856497618 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeamFrame::Windows_Kinect_AudioBeamFrame_get_RelativeTimeStart(System.IntPtr)
extern "C"  int64_t AudioBeamFrame_Windows_Kinect_AudioBeamFrame_get_RelativeTimeStart_m4231638439 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeamFrame::get_RelativeTimeStart()
extern "C"  TimeSpan_t413522987  AudioBeamFrame_get_RelativeTimeStart_m2902030157 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrame::__EventCleanup()
extern "C"  void AudioBeamFrame___EventCleanup_m24438684 (AudioBeamFrame_t3938130800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeam Windows.Kinect.AudioBeamFrame::<get_AudioBeam>m__2(System.IntPtr)
extern "C"  AudioBeam_t3629711475 * AudioBeamFrame_U3Cget_AudioBeamU3Em__2_m26798724 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeamFrame::<get_AudioSource>m__3(System.IntPtr)
extern "C"  AudioSource_t3964353183 * AudioBeamFrame_U3Cget_AudioSourceU3Em__3_m1066108923 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
