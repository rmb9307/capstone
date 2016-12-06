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

// Windows.Kinect.AudioBeamFrameReader
struct AudioBeamFrameReader_t941559955;
// System.EventHandler`1<Windows.Kinect.AudioBeamFrameArrivedEventArgs>
struct EventHandler_1_t2509568844;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.AudioSource
struct AudioSource_t3964353183;
// Windows.Kinect.AudioBeamFrameReader/_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_t1251527021;
// Windows.Kinect.AudioBeamFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t2248539051;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamFrame>
struct IList_1_t2337810707;
// Windows.Kinect.AudioBeamFrame
struct AudioBeamFrame_t3938130800;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio1251527021.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Audio2248539051.h"

// System.Void Windows.Kinect.AudioBeamFrameReader::.ctor(System.IntPtr)
extern "C"  void AudioBeamFrameReader__ctor_m812841797 (AudioBeamFrameReader_t941559955 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::.cctor()
extern "C"  void AudioBeamFrameReader__cctor_m1071498270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.AudioBeamFrameArrivedEventArgs>)
extern "C"  void AudioBeamFrameReader_add_FrameArrived_m1819658952 (AudioBeamFrameReader_t941559955 * __this, EventHandler_1_t2509568844 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.AudioBeamFrameArrivedEventArgs>)
extern "C"  void AudioBeamFrameReader_remove_FrameArrived_m3932147677 (AudioBeamFrameReader_t941559955 * __this, EventHandler_1_t2509568844 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioBeamFrameReader_add_PropertyChanged_m3425765701 (AudioBeamFrameReader_t941559955 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void AudioBeamFrameReader_remove_PropertyChanged_m33778448 (AudioBeamFrameReader_t941559955 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t AudioBeamFrameReader_Helper_INativeWrapper_get_nativePtr_m4275353333 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Finalize()
extern "C"  void AudioBeamFrameReader_Finalize_m2753151123 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_ReleaseObject_m469926548 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_AddRefObject_m48631669 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Dispose(System.Boolean)
extern "C"  void AudioBeamFrameReader_Dispose_m3152800355 (AudioBeamFrameReader_t941559955 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_get_AudioSource(System.IntPtr)
extern "C"  IntPtr_t AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_get_AudioSource_m3210196257 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeamFrameReader::get_AudioSource()
extern "C"  AudioSource_t3964353183 * AudioBeamFrameReader_get_AudioSource_m4183859718 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_get_IsPaused_m2503097635 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_put_IsPaused_m901596477 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.AudioBeamFrameReader::get_IsPaused()
extern "C"  bool AudioBeamFrameReader_get_IsPaused_m1334231130 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::set_IsPaused(System.Boolean)
extern "C"  void AudioBeamFrameReader_set_IsPaused_m2244104929 (AudioBeamFrameReader_t941559955 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler_m3383311469 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler_m3383311469(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.AudioBeamFrameReader/_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_add_FrameArrived_m3690903412 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_t1251527021 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void AudioBeamFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m43908335 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m43908335(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.AudioBeamFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_add_PropertyChanged_m2747382943 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t2248539051 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_AcquireLatestBeamFrames_Length(System.IntPtr)
extern "C"  int32_t AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_AcquireLatestBeamFrames_Length_m1742261355 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_AcquireLatestBeamFrames(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_AcquireLatestBeamFrames_m1671452053 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Windows.Kinect.AudioBeamFrame> Windows.Kinect.AudioBeamFrameReader::AcquireLatestBeamFrames()
extern "C"  Il2CppObject* AudioBeamFrameReader_AcquireLatestBeamFrames_m3624278822 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Windows_Kinect_AudioBeamFrameReader_Dispose(System.IntPtr)
extern "C"  void AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameReader_Dispose_m1811537759 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::Dispose()
extern "C"  void AudioBeamFrameReader_Dispose_m815071724 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.AudioBeamFrameReader::__EventCleanup()
extern "C"  void AudioBeamFrameReader___EventCleanup_m1413607679 (AudioBeamFrameReader_t941559955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.AudioBeamFrameReader::<get_AudioSource>m__39(System.IntPtr)
extern "C"  AudioSource_t3964353183 * AudioBeamFrameReader_U3Cget_AudioSourceU3Em__39_m2976555855 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioBeamFrame Windows.Kinect.AudioBeamFrameReader::<AcquireLatestBeamFrames>m__3C(System.IntPtr)
extern "C"  AudioBeamFrame_t3938130800 * AudioBeamFrameReader_U3CAcquireLatestBeamFramesU3Em__3C_m3010287576 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
