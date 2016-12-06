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

// Windows.Kinect.ColorFrameReader
struct ColorFrameReader_t584400277;
// System.EventHandler`1<Windows.Kinect.ColorFrameArrivedEventArgs>
struct EventHandler_1_t1912622542;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.ColorFrameSource
struct ColorFrameSource_t622873837;
// Windows.Kinect.ColorFrameReader/_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_t4097078573;
// Windows.Kinect.ColorFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t467754157;
// Windows.Kinect.ColorFrame
struct ColorFrame_t4040143346;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Color4097078573.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_ColorF467754157.h"

// System.Void Windows.Kinect.ColorFrameReader::.ctor(System.IntPtr)
extern "C"  void ColorFrameReader__ctor_m1902043335 (ColorFrameReader_t584400277 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::.cctor()
extern "C"  void ColorFrameReader__cctor_m2942590112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.ColorFrameArrivedEventArgs>)
extern "C"  void ColorFrameReader_add_FrameArrived_m2067970508 (ColorFrameReader_t584400277 * __this, EventHandler_1_t1912622542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.ColorFrameArrivedEventArgs>)
extern "C"  void ColorFrameReader_remove_FrameArrived_m1832787485 (ColorFrameReader_t584400277 * __this, EventHandler_1_t1912622542 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void ColorFrameReader_add_PropertyChanged_m615772931 (ColorFrameReader_t584400277 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void ColorFrameReader_remove_PropertyChanged_m746733714 (ColorFrameReader_t584400277 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t ColorFrameReader_Helper_INativeWrapper_get_nativePtr_m1463920691 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Finalize()
extern "C"  void ColorFrameReader_Finalize_m1281114261 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_ReleaseObject_m2447956692 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_AddRefObject_m112439093 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Dispose(System.Boolean)
extern "C"  void ColorFrameReader_Dispose_m3077897633 (ColorFrameReader_t584400277 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_get_ColorFrameSource(System.IntPtr)
extern "C"  IntPtr_t ColorFrameReader_Windows_Kinect_ColorFrameReader_get_ColorFrameSource_m4084609679 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.ColorFrameReader::get_ColorFrameSource()
extern "C"  ColorFrameSource_t622873837 * ColorFrameReader_get_ColorFrameSource_m4016532596 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool ColorFrameReader_Windows_Kinect_ColorFrameReader_get_IsPaused_m2926117219 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_put_IsPaused_m3126351101 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.ColorFrameReader::get_IsPaused()
extern "C"  bool ColorFrameReader_get_IsPaused_m2620096860 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::set_IsPaused(System.Boolean)
extern "C"  void ColorFrameReader_set_IsPaused_m767137379 (ColorFrameReader_t584400277 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler_m1041613997 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameReader_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler_m1041613997(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.ColorFrameReader/_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_add_FrameArrived_m2278241780 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_t4097078573 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void ColorFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m1175285549 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m1175285549(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.ColorFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_add_PropertyChanged_m1077375457 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t467754157 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t ColorFrameReader_Windows_Kinect_ColorFrameReader_AcquireLatestFrame_m1155751853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrame Windows.Kinect.ColorFrameReader::AcquireLatestFrame()
extern "C"  ColorFrame_t4040143346 * ColorFrameReader_AcquireLatestFrame_m2099096667 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Windows_Kinect_ColorFrameReader_Dispose(System.IntPtr)
extern "C"  void ColorFrameReader_Windows_Kinect_ColorFrameReader_Dispose_m1131040543 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::Dispose()
extern "C"  void ColorFrameReader_Dispose_m2984343978 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrameReader::__EventCleanup()
extern "C"  void ColorFrameReader___EventCleanup_m3396396929 (ColorFrameReader_t584400277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.ColorFrameReader::<get_ColorFrameSource>m__59(System.IntPtr)
extern "C"  ColorFrameSource_t622873837 * ColorFrameReader_U3Cget_ColorFrameSourceU3Em__59_m2019698491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrame Windows.Kinect.ColorFrameReader::<AcquireLatestFrame>m__5C(System.IntPtr)
extern "C"  ColorFrame_t4040143346 * ColorFrameReader_U3CAcquireLatestFrameU3Em__5C_m1237269972 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
