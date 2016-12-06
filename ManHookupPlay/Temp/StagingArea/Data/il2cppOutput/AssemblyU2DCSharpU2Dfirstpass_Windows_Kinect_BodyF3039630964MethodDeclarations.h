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

// Windows.Kinect.BodyFrameSource
struct BodyFrameSource_t3039630964;
// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>
struct EventHandler_1_t2536682534;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.BodyFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate
struct _Windows_Kinect_FrameCapturedEventArgs_Delegate_t292765108;
// Windows.Kinect.BodyFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t3070647180;
// Windows.Kinect.BodyFrameReader
struct BodyFrameReader_t3001157404;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyFr292765108.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyF3070647180.h"

// System.Void Windows.Kinect.BodyFrameSource::.ctor(System.IntPtr)
extern "C"  void BodyFrameSource__ctor_m673478990 (BodyFrameSource_t3039630964 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::.cctor()
extern "C"  void BodyFrameSource__cctor_m765282215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::add_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void BodyFrameSource_add_FrameCaptured_m2651834880 (BodyFrameSource_t3039630964 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::remove_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void BodyFrameSource_remove_FrameCaptured_m1027661437 (BodyFrameSource_t3039630964 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyFrameSource_add_PropertyChanged_m1396848604 (BodyFrameSource_t3039630964 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyFrameSource_remove_PropertyChanged_m3934265625 (BodyFrameSource_t3039630964 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameSource::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyFrameSource_Helper_INativeWrapper_get_nativePtr_m737251970 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Finalize()
extern "C"  void BodyFrameSource_Finalize_m537298396 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_ReleaseObject(System.IntPtr&)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_ReleaseObject_m3804866342 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_AddRefObject(System.IntPtr&)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_AddRefObject_m3342799011 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Dispose(System.Boolean)
extern "C"  void BodyFrameSource_Dispose_m333824954 (BodyFrameSource_t3039630964 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_get_BodyCount(System.IntPtr)
extern "C"  int32_t BodyFrameSource_Windows_Kinect_BodyFrameSource_get_BodyCount_m4062297394 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.BodyFrameSource::get_BodyCount()
extern "C"  int32_t BodyFrameSource_get_BodyCount_m3933046802 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_get_IsActive(System.IntPtr)
extern "C"  bool BodyFrameSource_Windows_Kinect_BodyFrameSource_get_IsActive_m3607666781 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyFrameSource::get_IsActive()
extern "C"  bool BodyFrameSource_get_IsActive_m2539364531 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_get_KinectSensor(System.IntPtr)
extern "C"  IntPtr_t BodyFrameSource_Windows_Kinect_BodyFrameSource_get_KinectSensor_m2653308198 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.BodyFrameSource::get_KinectSensor()
extern "C"  KinectSensor_t3101321480 * BodyFrameSource_get_KinectSensor_m2695575005 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m643741854 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m643741854(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_add_FrameCaptured(System.IntPtr,Windows.Kinect.BodyFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_add_FrameCaptured_m3704299338 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_FrameCapturedEventArgs_Delegate_t292765108 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m169730502 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m169730502(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_add_PropertyChanged(System.IntPtr,Windows.Kinect.BodyFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_add_PropertyChanged_m733699886 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t3070647180 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_OpenReader(System.IntPtr)
extern "C"  IntPtr_t BodyFrameSource_Windows_Kinect_BodyFrameSource_OpenReader_m8558178 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameReader Windows.Kinect.BodyFrameSource::OpenReader()
extern "C"  BodyFrameReader_t3001157404 * BodyFrameSource_OpenReader_m1203869215 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_OverrideHandTracking(System.IntPtr,System.UInt64)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_OverrideHandTracking_m292407997 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, uint64_t ___trackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::OverrideHandTracking(System.UInt64)
extern "C"  void BodyFrameSource_OverrideHandTracking_m799477515 (BodyFrameSource_t3039630964 * __this, uint64_t ___trackingId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::Windows_Kinect_BodyFrameSource_OverrideHandTracking_1(System.IntPtr,System.UInt64,System.UInt64)
extern "C"  void BodyFrameSource_Windows_Kinect_BodyFrameSource_OverrideHandTracking_1_m597903744 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, uint64_t ___oldTrackingId1, uint64_t ___newTrackingId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::OverrideHandTracking(System.UInt64,System.UInt64)
extern "C"  void BodyFrameSource_OverrideHandTracking_m666854784 (BodyFrameSource_t3039630964 * __this, uint64_t ___oldTrackingId0, uint64_t ___newTrackingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameSource::__EventCleanup()
extern "C"  void BodyFrameSource___EventCleanup_m1886247816 (BodyFrameSource_t3039630964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.BodyFrameSource::<get_KinectSensor>m__49(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * BodyFrameSource_U3Cget_KinectSensorU3Em__49_m3231614733 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameReader Windows.Kinect.BodyFrameSource::<OpenReader>m__4C(System.IntPtr)
extern "C"  BodyFrameReader_t3001157404 * BodyFrameSource_U3COpenReaderU3Em__4C_m3338237693 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
