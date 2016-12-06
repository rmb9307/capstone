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

// Windows.Kinect.AudioBeam
struct AudioBeam_t3629711475;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.AudioSource
struct AudioSource_t3964353183;
// Windows.Kinect.AudioBeam/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t2137828235;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio2510002742.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio2137828235.h"

// System.Void Windows.Kinect.AudioBeam::.ctor(System.IntPtr)
extern "C"  void AudioBeam__ctor_m2562662669 (AudioBeam_t3629711475 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::.cctor()
extern "C"  void AudioBeam__cctor_m4213069286 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioBeam_add_PropertyChanged_m1582184573 (AudioBeam_t3629711475 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioBeam_remove_PropertyChanged_m1950175448 (AudioBeam_t3629711475 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeam::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioBeam_Helper_INativeWrapper_get_nativePtr_m1503599843 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Finalize()
extern "C"  void AudioBeam_Finalize_m2440888411 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_ReleaseObject(System.IntPtr&)
extern "C"  void AudioBeam_Windows_Kinect_AudioBeam_ReleaseObject_m3176350372 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_AddRefObject(System.IntPtr&)
extern "C"  void AudioBeam_Windows_Kinect_AudioBeam_AddRefObject_m1937050981 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Dispose(System.Boolean)
extern "C"  void AudioBeam_Dispose_m4048326555 (AudioBeam_t3629711475 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamMode Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_get_AudioBeamMode(System.IntPtr)
extern "C"  int32_t AudioBeam_Windows_Kinect_AudioBeam_get_AudioBeamMode_m1898834069 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_put_AudioBeamMode(System.IntPtr,Windows.Kinect.AudioBeamMode)
extern "C"  void AudioBeam_Windows_Kinect_AudioBeam_put_AudioBeamMode_m3625453797 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, int32_t ___audioBeamMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamMode Windows.Kinect.AudioBeam::get_AudioBeamMode()
extern "C"  int32_t AudioBeam_get_AudioBeamMode_m3633347306 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::set_AudioBeamMode(Windows.Kinect.AudioBeamMode)
extern "C"  void AudioBeam_set_AudioBeamMode_m380680517 (AudioBeam_t3629711475 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_get_AudioSource(System.IntPtr)
extern "C"  IntPtr_t AudioBeam_Windows_Kinect_AudioBeam_get_AudioSource_m1209350481 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeam::get_AudioSource()
extern "C"  AudioSource_t3964353183 * AudioBeam_get_AudioSource_m1618919740 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_get_BeamAngle(System.IntPtr)
extern "C"  float AudioBeam_Windows_Kinect_AudioBeam_get_BeamAngle_m1408466855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_put_BeamAngle(System.IntPtr,System.Single)
extern "C"  void AudioBeam_Windows_Kinect_AudioBeam_put_BeamAngle_m1675656895 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, float ___beamAngle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeam::get_BeamAngle()
extern "C"  float AudioBeam_get_BeamAngle_m1699607924 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::set_BeamAngle(System.Single)
extern "C"  void AudioBeam_set_BeamAngle_m2139297887 (AudioBeam_t3629711475 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_get_BeamAngleConfidence(System.IntPtr)
extern "C"  float AudioBeam_Windows_Kinect_AudioBeam_get_BeamAngleConfidence_m648579773 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Windows.Kinect.AudioBeam::get_BeamAngleConfidence()
extern "C"  float AudioBeam_get_BeamAngleConfidence_m3367598558 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_get_RelativeTime(System.IntPtr)
extern "C"  int64_t AudioBeam_Windows_Kinect_AudioBeam_get_RelativeTime_m1522072173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioBeam::get_RelativeTime()
extern "C"  TimeSpan_t413522987  AudioBeam_get_RelativeTime_m1055951868 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void AudioBeam_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2183937575 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_AudioBeam_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2183937575(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.AudioBeam::Windows_Kinect_AudioBeam_add_PropertyChanged(System.IntPtr,Windows.Kinect.AudioBeam/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void AudioBeam_Windows_Kinect_AudioBeam_add_PropertyChanged_m1785800943 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t2137828235 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeam::__EventCleanup()
extern "C"  void AudioBeam___EventCleanup_m1742224071 (AudioBeam_t3629711475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeam::<get_AudioSource>m__36(System.IntPtr)
extern "C"  AudioSource_t3964353183 * AudioBeam_U3Cget_AudioSourceU3Em__36_m3872485864 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
