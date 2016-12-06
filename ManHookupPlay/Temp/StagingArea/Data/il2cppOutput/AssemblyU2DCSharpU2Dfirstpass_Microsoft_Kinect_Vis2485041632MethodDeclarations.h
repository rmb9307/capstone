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

// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource
struct VisualGestureBuilderFrameSource_t2485041632;
// System.EventHandler`1<Microsoft.Kinect.VisualGestureBuilder.TrackingIdLostEventArgs>
struct EventHandler_1_t1438152349;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Microsoft.Kinect.VisualGestureBuilder.Gesture
struct Gesture_t3791679507;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.IList`1<Microsoft.Kinect.VisualGestureBuilder.Gesture>
struct IList_1_t2191359414;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource/_Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate
struct _Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate_t2713499482;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t77678437;
// Microsoft.Kinect.VisualGestureBuilder.Gesture[]
struct GestureU5BU5D_t601482818;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameReader
struct VisualGestureBuilderFrameReader_t2446568072;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Kinec3101321480.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Microsoft_Kinect_Vis3791679507.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Microsoft_Kinect_Vis2713499482.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Microsoft_Kinect_Visua77678437.h"

// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::.ctor(System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource__ctor_m2295613567 (VisualGestureBuilderFrameSource_t2485041632 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::.cctor()
extern "C"  void VisualGestureBuilderFrameSource__cctor_m1269667928 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::add_TrackingIdLost(System.EventHandler`1<Microsoft.Kinect.VisualGestureBuilder.TrackingIdLostEventArgs>)
extern "C"  void VisualGestureBuilderFrameSource_add_TrackingIdLost_m868941430 (VisualGestureBuilderFrameSource_t2485041632 * __this, EventHandler_1_t1438152349 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::remove_TrackingIdLost(System.EventHandler`1<Microsoft.Kinect.VisualGestureBuilder.TrackingIdLostEventArgs>)
extern "C"  void VisualGestureBuilderFrameSource_remove_TrackingIdLost_m1622764951 (VisualGestureBuilderFrameSource_t2485041632 * __this, EventHandler_1_t1438152349 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void VisualGestureBuilderFrameSource_add_PropertyChanged_m489170507 (VisualGestureBuilderFrameSource_t2485041632 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void VisualGestureBuilderFrameSource_remove_PropertyChanged_m115206218 (VisualGestureBuilderFrameSource_t2485041632 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t VisualGestureBuilderFrameSource_Helper_INativeWrapper_get_nativePtr_m1714583483 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_ctor(System.IntPtr,System.UInt64)
extern "C"  IntPtr_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_ctor_m116459789 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sensorPtr0, uint64_t ___initialTrackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Create(Windows.Kinect.KinectSensor,System.UInt64)
extern "C"  VisualGestureBuilderFrameSource_t2485041632 * VisualGestureBuilderFrameSource_Create_m1922355728 (Il2CppObject * __this /* static, unused */, KinectSensor_t3101321480 * ___sensor0, uint64_t ___initialTrackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_GetIsEnabled(System.IntPtr,System.IntPtr)
extern "C"  bool VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_GetIsEnabled_m667408096 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___gesturePtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::GetIsEnabled(Microsoft.Kinect.VisualGestureBuilder.Gesture)
extern "C"  bool VisualGestureBuilderFrameSource_GetIsEnabled_m1218142409 (VisualGestureBuilderFrameSource_t2485041632 * __this, Gesture_t3791679507 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Finalize()
extern "C"  void VisualGestureBuilderFrameSource_Finalize_m4215631437 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_ReleaseObject(System.IntPtr&)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_ReleaseObject_m4120281795 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddRefObject(System.IntPtr&)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddRefObject_m2244595046 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Dispose(System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_Dispose_m2667961065 (VisualGestureBuilderFrameSource_t2485041632 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_TrackingId(System.IntPtr)
extern "C"  uint64_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_TrackingId_m3149821400 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_put_TrackingId(System.IntPtr,System.UInt64)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_put_TrackingId_m788121514 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, uint64_t ___trackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_TrackingId()
extern "C"  uint64_t VisualGestureBuilderFrameSource_get_TrackingId_m3948829454 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::set_TrackingId(System.UInt64)
extern "C"  void VisualGestureBuilderFrameSource_set_TrackingId_m389785501 (VisualGestureBuilderFrameSource_t2485041632 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_HorizontalMirror(System.IntPtr)
extern "C"  bool VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_HorizontalMirror_m1903002279 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_put_HorizontalMirror(System.IntPtr,System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_put_HorizontalMirror_m1482294841 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___horizontalMirror1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_HorizontalMirror()
extern "C"  bool VisualGestureBuilderFrameSource_get_HorizontalMirror_m4041397343 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::set_HorizontalMirror(System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_set_HorizontalMirror_m2180145958 (VisualGestureBuilderFrameSource_t2485041632 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_Gestures(System.IntPtr,System.IntPtr[],System.Int32)
extern "C"  int32_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_Gestures_m2230793105 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outCollection1, int32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_Gestures_Length(System.IntPtr)
extern "C"  int32_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_Gestures_Length_m3947515751 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Microsoft.Kinect.VisualGestureBuilder.Gesture> Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_Gestures()
extern "C"  Il2CppObject* VisualGestureBuilderFrameSource_get_Gestures_m2980548875 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_IsActive(System.IntPtr)
extern "C"  bool VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_IsActive_m2502172218 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_IsActive()
extern "C"  bool VisualGestureBuilderFrameSource_get_IsActive_m3085932524 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_IsTrackingIdValid(System.IntPtr)
extern "C"  bool VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_IsTrackingIdValid_m2928483420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_IsTrackingIdValid()
extern "C"  bool VisualGestureBuilderFrameSource_get_IsTrackingIdValid_m2482786214 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_KinectSensor(System.IntPtr)
extern "C"  IntPtr_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_get_KinectSensor_m803923139 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::get_KinectSensor()
extern "C"  KinectSensor_t3101321480 * VisualGestureBuilderFrameSource_get_KinectSensor_m1165354402 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate_Handler_m2689104288 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate_Handler_m2689104288(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_add_TrackingIdLost(System.IntPtr,Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource/_Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate,System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_add_TrackingIdLost_m2766013768 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Microsoft_Kinect_VisualGestureBuilder_TrackingIdLostEventArgs_Delegate_t2713499482 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m4064407669 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_VisualGestureBuilderFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m4064407669(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_add_PropertyChanged(System.IntPtr,Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_add_PropertyChanged_m2596701640 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t77678437 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddGesture(System.IntPtr,System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddGesture_m457632573 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___gesture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::AddGesture(Microsoft.Kinect.VisualGestureBuilder.Gesture)
extern "C"  void VisualGestureBuilderFrameSource_AddGesture_m1212679782 (VisualGestureBuilderFrameSource_t2485041632 * __this, Gesture_t3791679507 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddGestures(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_AddGestures_m2877837029 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___gestures1, int32_t ___gesturesSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::AddGestures(Microsoft.Kinect.VisualGestureBuilder.Gesture[])
extern "C"  void VisualGestureBuilderFrameSource_AddGestures_m2838337501 (VisualGestureBuilderFrameSource_t2485041632 * __this, GestureU5BU5D_t601482818* ___gestures0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_RemoveGesture(System.IntPtr,System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_RemoveGesture_m3454320216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___gesture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::RemoveGesture(Microsoft.Kinect.VisualGestureBuilder.Gesture)
extern "C"  void VisualGestureBuilderFrameSource_RemoveGesture_m213043621 (VisualGestureBuilderFrameSource_t2485041632 * __this, Gesture_t3791679507 * ___gesture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_SetIsEnabled(System.IntPtr,System.IntPtr,System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_SetIsEnabled_m805093165 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___gesture1, bool ___isEnabled2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::SetIsEnabled(Microsoft.Kinect.VisualGestureBuilder.Gesture,System.Boolean)
extern "C"  void VisualGestureBuilderFrameSource_SetIsEnabled_m3462555428 (VisualGestureBuilderFrameSource_t2485041632 * __this, Gesture_t3791679507 * ___gesture0, bool ___isEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_OpenReader(System.IntPtr)
extern "C"  IntPtr_t VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_OpenReader_m1806331839 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameReader Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::OpenReader()
extern "C"  VisualGestureBuilderFrameReader_t2446568072 * VisualGestureBuilderFrameSource_OpenReader_m151523859 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_Dispose(System.IntPtr)
extern "C"  void VisualGestureBuilderFrameSource_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrameSource_Dispose_m1547380240 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::Dispose()
extern "C"  void VisualGestureBuilderFrameSource_Dispose_m2663363826 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::__EventCleanup()
extern "C"  void VisualGestureBuilderFrameSource___EventCleanup_m1686039353 (VisualGestureBuilderFrameSource_t2485041632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.Gesture Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::<get_Gestures>m__25(System.IntPtr)
extern "C"  Gesture_t3791679507 * VisualGestureBuilderFrameSource_U3Cget_GesturesU3Em__25_m4029874082 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::<get_KinectSensor>m__26(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * VisualGestureBuilderFrameSource_U3Cget_KinectSensorU3Em__26_m401034419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::<Create>m__27(System.IntPtr)
extern "C"  VisualGestureBuilderFrameSource_t2485041632 * VisualGestureBuilderFrameSource_U3CCreateU3Em__27_m2556653668 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameReader Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource::<OpenReader>m__2A(System.IntPtr)
extern "C"  VisualGestureBuilderFrameReader_t2446568072 * VisualGestureBuilderFrameSource_U3COpenReaderU3Em__2A_m1149696305 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
