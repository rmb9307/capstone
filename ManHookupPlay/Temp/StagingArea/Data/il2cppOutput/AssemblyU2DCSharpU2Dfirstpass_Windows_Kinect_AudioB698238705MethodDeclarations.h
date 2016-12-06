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

// Windows.Kinect.AudioBeamFrameReference
struct AudioBeamFrameReference_t698238705;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamFrame>
struct IList_1_t2337810707;
// Windows.Kinect.AudioBeamFrame
struct AudioBeamFrame_t3938130800;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.AudioBeamFrameReference::.ctor(System.IntPtr)
extern "C"  void AudioBeamFrameReference__ctor_m3780938251 (AudioBeamFrameReference_t698238705 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrameReference::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioBeamFrameReference_Helper_INativeWrapper_get_nativePtr_m2274990181 (AudioBeamFrameReference_t698238705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReference::Finalize()
extern "C"  void AudioBeamFrameReference_Finalize_m282848985 (AudioBeamFrameReference_t698238705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReference::Windows_Kinect_AudioBeamFrameReference_ReleaseObject(System.IntPtr&)
extern "C"  void AudioBeamFrameReference_Windows_Kinect_AudioBeamFrameReference_ReleaseObject_m3720746144 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReference::Windows_Kinect_AudioBeamFrameReference_AddRefObject(System.IntPtr&)
extern "C"  void AudioBeamFrameReference_Windows_Kinect_AudioBeamFrameReference_AddRefObject_m4171369449 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReference::Dispose(System.Boolean)
extern "C"  void AudioBeamFrameReference_Dispose_m927571421 (AudioBeamFrameReference_t698238705 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeamFrameReference::Windows_Kinect_AudioBeamFrameReference_get_RelativeTime(System.IntPtr)
extern "C"  int64_t AudioBeamFrameReference_Windows_Kinect_AudioBeamFrameReference_get_RelativeTime_m1869092073 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeamFrameReference::get_RelativeTime()
extern "C"  TimeSpan_t413522987  AudioBeamFrameReference_get_RelativeTime_m711200186 (AudioBeamFrameReference_t698238705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrameReference::Windows_Kinect_AudioBeamFrameReference_AcquireBeamFrames_Length(System.IntPtr)
extern "C"  int32_t AudioBeamFrameReference_Windows_Kinect_AudioBeamFrameReference_AcquireBeamFrames_Length_m3259884560 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrameReference::Windows_Kinect_AudioBeamFrameReference_AcquireBeamFrames(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t AudioBeamFrameReference_Windows_Kinect_AudioBeamFrameReference_AcquireBeamFrames_m2400318330 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamFrame> Windows.Kinect.AudioBeamFrameReference::AcquireBeamFrames()
extern "C"  Il2CppObject* AudioBeamFrameReference_AcquireBeamFrames_m2359849803 (AudioBeamFrameReference_t698238705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReference::__EventCleanup()
extern "C"  void AudioBeamFrameReference___EventCleanup_m2099106501 (AudioBeamFrameReference_t698238705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamFrame Windows.Kinect.AudioBeamFrameReference::<AcquireBeamFrames>m__3D(System.IntPtr)
extern "C"  AudioBeamFrame_t3938130800 * AudioBeamFrameReference_U3CAcquireBeamFramesU3Em__3D_m56793436 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
