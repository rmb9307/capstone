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

// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4045888484;
// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>
struct EventHandler_1_t3243775325;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t2912741517;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t968229116;
// Windows.Kinect.MultiSourceFrame
struct MultiSourceFrame_t1970173825;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Frame3838077401.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Multi2912741517.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_MultiS968229116.h"

// System.Void Windows.Kinect.MultiSourceFrameReader::.ctor(System.IntPtr)
extern "C"  void MultiSourceFrameReader__ctor_m4243620054 (MultiSourceFrameReader_t4045888484 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::.cctor()
extern "C"  void MultiSourceFrameReader__cctor_m3134348079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::add_MultiSourceFrameArrived(System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>)
extern "C"  void MultiSourceFrameReader_add_MultiSourceFrameArrived_m3963493208 (MultiSourceFrameReader_t4045888484 * __this, EventHandler_1_t3243775325 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::remove_MultiSourceFrameArrived(System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>)
extern "C"  void MultiSourceFrameReader_remove_MultiSourceFrameArrived_m1854786917 (MultiSourceFrameReader_t4045888484 * __this, EventHandler_1_t3243775325 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void MultiSourceFrameReader_add_PropertyChanged_m1747901780 (MultiSourceFrameReader_t4045888484 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void MultiSourceFrameReader_remove_PropertyChanged_m3914066081 (MultiSourceFrameReader_t4045888484 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t MultiSourceFrameReader_Helper_INativeWrapper_get_nativePtr_m2455383108 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Finalize()
extern "C"  void MultiSourceFrameReader_Finalize_m876926820 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_ReleaseObject_m1821983092 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AddRefObject_m923530389 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Dispose(System.Boolean)
extern "C"  void MultiSourceFrameReader_Dispose_m2131111730 (MultiSourceFrameReader_t4045888484 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameSourceTypes Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes(System.IntPtr)
extern "C"  uint32_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes_m2745430419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameSourceTypes Windows.Kinect.MultiSourceFrameReader::get_FrameSourceTypes()
extern "C"  uint32_t MultiSourceFrameReader_get_FrameSourceTypes_m3709132635 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_IsPaused_m1930036739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_put_IsPaused_m1184608861 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.MultiSourceFrameReader::get_IsPaused()
extern "C"  bool MultiSourceFrameReader_get_IsPaused_m499015083 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::set_IsPaused(System.Boolean)
extern "C"  void MultiSourceFrameReader_set_IsPaused_m229488498 (MultiSourceFrameReader_t4045888484 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_KinectSensor(System.IntPtr)
extern "C"  IntPtr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_KinectSensor_m2965037876 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.MultiSourceFrameReader::get_KinectSensor()
extern "C"  KinectSensor_t3101321480 * MultiSourceFrameReader_get_KinectSensor_m3072585657 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m1008542541 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m1008542541(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(System.IntPtr,Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_m1393283734 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t2912741517 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2524383550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2524383550(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m3345905360 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t968229116 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame_m3653586637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReader::AcquireLatestFrame()
extern "C"  MultiSourceFrame_t1970173825 * MultiSourceFrameReader_AcquireLatestFrame_m3427165113 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_Dispose(System.IntPtr)
extern "C"  void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_Dispose_m2537167999 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::Dispose()
extern "C"  void MultiSourceFrameReader_Dispose_m338906363 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.MultiSourceFrameReader::__EventCleanup()
extern "C"  void MultiSourceFrameReader___EventCleanup_m3510298384 (MultiSourceFrameReader_t4045888484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.MultiSourceFrameReader::<get_KinectSensor>m__8C(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * MultiSourceFrameReader_U3Cget_KinectSensorU3Em__8C_m1515052451 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReader::<AcquireLatestFrame>m__8F(System.IntPtr)
extern "C"  MultiSourceFrame_t1970173825 * MultiSourceFrameReader_U3CAcquireLatestFrameU3Em__8F_m54775250 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
