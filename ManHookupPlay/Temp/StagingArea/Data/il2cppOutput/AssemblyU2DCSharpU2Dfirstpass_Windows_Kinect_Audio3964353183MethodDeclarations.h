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

// Windows.Kinect.AudioSource
struct AudioSource_t3964353183;
// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>
struct EventHandler_1_t2536682534;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeam>
struct IList_1_t2029391382;
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.AudioSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate
struct _Windows_Kinect_FrameCapturedEventArgs_Delegate_t2589343711;
// Windows.Kinect.AudioSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t1072258487;
// Windows.Kinect.AudioBeamFrameReader
struct AudioBeamFrameReader_t941559955;
// Windows.Kinect.AudioBeam
struct AudioBeam_t3629711475;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Kinec3879280293.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio2589343711.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio1072258487.h"

// System.Void Windows.Kinect.AudioSource::.ctor(System.IntPtr)
extern "C"  void AudioSource__ctor_m3748549945 (AudioSource_t3964353183 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::.cctor()
extern "C"  void AudioSource__cctor_m1362717714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::add_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void AudioSource_add_FrameCaptured_m1235009333 (AudioSource_t3964353183 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::remove_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void AudioSource_remove_FrameCaptured_m3316375848 (AudioSource_t3964353183 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioSource_add_PropertyChanged_m1332130769 (AudioSource_t3964353183 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioSource_remove_PropertyChanged_m70591748 (AudioSource_t3964353183 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioSource::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioSource_Helper_INativeWrapper_get_nativePtr_m1750251383 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Finalize()
extern "C"  void AudioSource_Finalize_m3442162567 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_ReleaseObject(System.IntPtr&)
extern "C"  void AudioSource_Windows_Kinect_AudioSource_ReleaseObject_m3456726780 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_AddRefObject(System.IntPtr&)
extern "C"  void AudioSource_Windows_Kinect_AudioSource_AddRefObject_m1669000717 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Dispose(System.Boolean)
extern "C"  void AudioSource_Dispose_m2415188975 (AudioSource_t3964353183 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_AudioBeams(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t AudioSource_Windows_Kinect_AudioSource_get_AudioBeams_m746202076 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_AudioBeams_Length(System.IntPtr)
extern "C"  int32_t AudioSource_Windows_Kinect_AudioSource_get_AudioBeams_Length_m3659958770 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeam> Windows.Kinect.AudioSource::get_AudioBeams()
extern "C"  Il2CppObject* AudioSource_get_AudioBeams_m2394007106 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_IsActive(System.IntPtr)
extern "C"  bool AudioSource_Windows_Kinect_AudioSource_get_IsActive_m4225812915 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.AudioSource::get_IsActive()
extern "C"  bool AudioSource_get_IsActive_m771634910 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_KinectSensor(System.IntPtr)
extern "C"  IntPtr_t AudioSource_Windows_Kinect_AudioSource_get_KinectSensor_m231537788 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.AudioSource::get_KinectSensor()
extern "C"  KinectSensor_t3101321480 * AudioSource_get_KinectSensor_m2348759944 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_MaxSubFrameCount(System.IntPtr)
extern "C"  uint32_t AudioSource_Windows_Kinect_AudioSource_get_MaxSubFrameCount_m4033208452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioSource::get_MaxSubFrameCount()
extern "C"  uint32_t AudioSource_get_MaxSubFrameCount_m2104340043 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_SubFrameDuration(System.IntPtr)
extern "C"  int64_t AudioSource_Windows_Kinect_AudioSource_get_SubFrameDuration_m3693341373 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.AudioSource::get_SubFrameDuration()
extern "C"  TimeSpan_t413522987  AudioSource_get_SubFrameDuration_m3351810800 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_SubFrameLengthInBytes(System.IntPtr)
extern "C"  uint32_t AudioSource_Windows_Kinect_AudioSource_get_SubFrameLengthInBytes_m3888334129 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Windows.Kinect.AudioSource::get_SubFrameLengthInBytes()
extern "C"  uint32_t AudioSource_get_SubFrameLengthInBytes_m4106442856 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectAudioCalibrationState Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_get_AudioCalibrationState(System.IntPtr)
extern "C"  int32_t AudioSource_Windows_Kinect_AudioSource_get_AudioCalibrationState_m706905847 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectAudioCalibrationState Windows.Kinect.AudioSource::get_AudioCalibrationState()
extern "C"  int32_t AudioSource_get_AudioCalibrationState_m2526996866 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void AudioSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m2874411859 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_AudioSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m2874411859(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_add_FrameCaptured(System.IntPtr,Windows.Kinect.AudioSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate,System.Boolean)
extern "C"  void AudioSource_Windows_Kinect_AudioSource_add_FrameCaptured_m1094591583 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_FrameCapturedEventArgs_Delegate_t2589343711 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void AudioSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2400400507 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_AudioSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2400400507(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_add_PropertyChanged(System.IntPtr,Windows.Kinect.AudioSource/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void AudioSource_Windows_Kinect_AudioSource_add_PropertyChanged_m3457349571 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t1072258487 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioSource::Windows_Kinect_AudioSource_OpenReader(System.IntPtr)
extern "C"  IntPtr_t AudioSource_Windows_Kinect_AudioSource_OpenReader_m67307064 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamFrameReader Windows.Kinect.AudioSource::OpenReader()
extern "C"  AudioBeamFrameReader_t941559955 * AudioSource_OpenReader_m492654113 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioSource::__EventCleanup()
extern "C"  void AudioSource___EventCleanup_m3493881075 (AudioSource_t3964353183 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeam Windows.Kinect.AudioSource::<get_AudioBeams>m__3E(System.IntPtr)
extern "C"  AudioBeam_t3629711475 * AudioSource_U3Cget_AudioBeamsU3Em__3E_m4053456740 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.AudioSource::<get_KinectSensor>m__3F(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * AudioSource_U3Cget_KinectSensorU3Em__3F_m1151889290 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamFrameReader Windows.Kinect.AudioSource::<OpenReader>m__42(System.IntPtr)
extern "C"  AudioBeamFrameReader_t941559955 * AudioSource_U3COpenReaderU3Em__42_m3490405936 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
