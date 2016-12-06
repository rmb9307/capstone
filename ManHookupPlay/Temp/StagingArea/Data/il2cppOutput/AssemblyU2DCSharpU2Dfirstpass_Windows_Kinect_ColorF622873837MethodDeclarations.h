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

// Windows.Kinect.ColorFrameSource
struct ColorFrameSource_t622873837;
// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>
struct EventHandler_1_t2536682534;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.FrameDescription
struct FrameDescription_t2208175287;
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.ColorFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate
struct _Windows_Kinect_FrameCapturedEventArgs_Delegate_t2112634413;
// Windows.Kinect.ColorFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t595549189;
// Windows.Kinect.ColorFrameReader
struct ColorFrameReader_t584400277;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Color2112634413.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_ColorF595549189.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Color2565321271.h"

// System.Void Windows.Kinect.ColorFrameSource::.ctor(System.IntPtr)
extern "C"  void ColorFrameSource__ctor_m1114725919 (ColorFrameSource_t622873837 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::.cctor()
extern "C"  void ColorFrameSource__cctor_m621157880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::add_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void ColorFrameSource_add_FrameCaptured_m4001197711 (ColorFrameSource_t622873837 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::remove_FrameCaptured(System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>)
extern "C"  void ColorFrameSource_remove_FrameCaptured_m3296836494 (ColorFrameSource_t622873837 * __this, EventHandler_1_t2536682534 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void ColorFrameSource_add_PropertyChanged_m1054405803 (ColorFrameSource_t622873837 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void ColorFrameSource_remove_PropertyChanged_m2768109034 (ColorFrameSource_t622873837 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameSource::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t ColorFrameSource_Helper_INativeWrapper_get_nativePtr_m1509852635 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Finalize()
extern "C"  void ColorFrameSource_Finalize_m3767733229 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_ReleaseObject(System.IntPtr&)
extern "C"  void ColorFrameSource_Windows_Kinect_ColorFrameSource_ReleaseObject_m2476533204 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_AddRefObject(System.IntPtr&)
extern "C"  void ColorFrameSource_Windows_Kinect_ColorFrameSource_AddRefObject_m1221739573 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Dispose(System.Boolean)
extern "C"  void ColorFrameSource_Dispose_m2921161033 (ColorFrameSource_t622873837 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_get_FrameDescription(System.IntPtr)
extern "C"  IntPtr_t ColorFrameSource_Windows_Kinect_ColorFrameSource_get_FrameDescription_m1529505925 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrameSource::get_FrameDescription()
extern "C"  FrameDescription_t2208175287 * ColorFrameSource_get_FrameDescription_m4182168288 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_get_IsActive(System.IntPtr)
extern "C"  bool ColorFrameSource_Windows_Kinect_ColorFrameSource_get_IsActive_m3882711947 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.ColorFrameSource::get_IsActive()
extern "C"  bool ColorFrameSource_get_IsActive_m2822615180 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_get_KinectSensor(System.IntPtr)
extern "C"  IntPtr_t ColorFrameSource_Windows_Kinect_ColorFrameSource_get_KinectSensor_m2563045140 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.ColorFrameSource::get_KinectSensor()
extern "C"  KinectSensor_t3101321480 * ColorFrameSource_get_KinectSensor_m2700847810 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void ColorFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m2268691885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m2268691885(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_add_FrameCaptured(System.IntPtr,Windows.Kinect.ColorFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate,System.Boolean)
extern "C"  void ColorFrameSource_Windows_Kinect_ColorFrameSource_add_FrameCaptured_m461865581 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_FrameCapturedEventArgs_Delegate_t2112634413 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void ColorFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m1794680533 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m1794680533(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_add_PropertyChanged(System.IntPtr,Windows.Kinect.ColorFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void ColorFrameSource_Windows_Kinect_ColorFrameSource_add_PropertyChanged_m1884179513 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t595549189 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_OpenReader(System.IntPtr)
extern "C"  IntPtr_t ColorFrameSource_Windows_Kinect_ColorFrameSource_OpenReader_m1020318416 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameReader Windows.Kinect.ColorFrameSource::OpenReader()
extern "C"  ColorFrameReader_t584400277 * ColorFrameSource_OpenReader_m3698219091 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameSource::Windows_Kinect_ColorFrameSource_CreateFrameDescription(System.IntPtr,Windows.Kinect.ColorImageFormat)
extern "C"  IntPtr_t ColorFrameSource_Windows_Kinect_ColorFrameSource_CreateFrameDescription_m609572498 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, int32_t ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrameSource::CreateFrameDescription(Windows.Kinect.ColorImageFormat)
extern "C"  FrameDescription_t2208175287 * ColorFrameSource_CreateFrameDescription_m385945459 (ColorFrameSource_t622873837 * __this, int32_t ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameSource::__EventCleanup()
extern "C"  void ColorFrameSource___EventCleanup_m2655506649 (ColorFrameSource_t622873837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrameSource::<get_FrameDescription>m__5E(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * ColorFrameSource_U3Cget_FrameDescriptionU3Em__5E_m2166942791 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.ColorFrameSource::<get_KinectSensor>m__5F(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * ColorFrameSource_U3Cget_KinectSensorU3Em__5F_m3524442566 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameReader Windows.Kinect.ColorFrameSource::<OpenReader>m__62(System.IntPtr)
extern "C"  ColorFrameReader_t584400277 * ColorFrameSource_U3COpenReaderU3Em__62_m1835472740 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrameSource::<CreateFrameDescription>m__63(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * ColorFrameSource_U3CCreateFrameDescriptionU3Em__63_m709965927 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
