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

// Windows.Kinect.DepthFrameReader
struct DepthFrameReader_t1693107765;
// System.EventHandler`1<Windows.Kinect.DepthFrameArrivedEventArgs>
struct EventHandler_1_t1807453806;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.DepthFrameSource
struct DepthFrameSource_t1731581325;
// Windows.Kinect.DepthFrameReader/_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_t194535725;
// Windows.Kinect.DepthFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t3485934925;
// Windows.Kinect.DepthFrame
struct DepthFrame_t2975871634;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_DepthF194535725.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Depth3485934925.h"

// System.Void Windows.Kinect.DepthFrameReader::.ctor(System.IntPtr)
extern "C"  void DepthFrameReader__ctor_m2115907943 (DepthFrameReader_t1693107765 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::.cctor()
extern "C"  void DepthFrameReader__cctor_m2837421376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.DepthFrameArrivedEventArgs>)
extern "C"  void DepthFrameReader_add_FrameArrived_m3199617804 (DepthFrameReader_t1693107765 * __this, EventHandler_1_t1807453806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.DepthFrameArrivedEventArgs>)
extern "C"  void DepthFrameReader_remove_FrameArrived_m546011677 (DepthFrameReader_t1693107765 * __this, EventHandler_1_t1807453806 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void DepthFrameReader_add_PropertyChanged_m171730531 (DepthFrameReader_t1693107765 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void DepthFrameReader_remove_PropertyChanged_m778866994 (DepthFrameReader_t1693107765 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t DepthFrameReader_Helper_INativeWrapper_get_nativePtr_m4063865747 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Finalize()
extern "C"  void DepthFrameReader_Finalize_m3293174069 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_ReleaseObject_m3541659348 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_AddRefObject_m1394645813 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Dispose(System.Boolean)
extern "C"  void DepthFrameReader_Dispose_m586967297 (DepthFrameReader_t1693107765 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_get_DepthFrameSource(System.IntPtr)
extern "C"  IntPtr_t DepthFrameReader_Windows_Kinect_DepthFrameReader_get_DepthFrameSource_m3577473519 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.DepthFrameReader::get_DepthFrameSource()
extern "C"  DepthFrameSource_t1731581325 * DepthFrameReader_get_DepthFrameSource_m4241366612 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool DepthFrameReader_Windows_Kinect_DepthFrameReader_get_IsPaused_m3937310051 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_put_IsPaused_m532168957 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.DepthFrameReader::get_IsPaused()
extern "C"  bool DepthFrameReader_get_IsPaused_m3160132092 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::set_IsPaused(System.Boolean)
extern "C"  void DepthFrameReader_set_IsPaused_m418268931 (DepthFrameReader_t1693107765 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler_m1089820845 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameReader_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler_m1089820845(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.DepthFrameReader/_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_add_FrameArrived_m3151171060 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_t194535725 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void DepthFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m3947268749 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m3947268749(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.DepthFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_add_PropertyChanged_m445550209 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t3485934925 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t DepthFrameReader_Windows_Kinect_DepthFrameReader_AcquireLatestFrame_m2477388717 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrame Windows.Kinect.DepthFrameReader::AcquireLatestFrame()
extern "C"  DepthFrame_t2975871634 * DepthFrameReader_AcquireLatestFrame_m1036174747 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Windows_Kinect_DepthFrameReader_Dispose(System.IntPtr)
extern "C"  void DepthFrameReader_Windows_Kinect_DepthFrameReader_Dispose_m4009245471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::Dispose()
extern "C"  void DepthFrameReader_Dispose_m4019080458 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.DepthFrameReader::__EventCleanup()
extern "C"  void DepthFrameReader___EventCleanup_m2679212065 (DepthFrameReader_t1693107765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.DepthFrameReader::<get_DepthFrameSource>m__65(System.IntPtr)
extern "C"  DepthFrameSource_t1731581325 * DepthFrameReader_U3Cget_DepthFrameSourceU3Em__65_m3351534176 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrame Windows.Kinect.DepthFrameReader::<AcquireLatestFrame>m__68(System.IntPtr)
extern "C"  DepthFrame_t2975871634 * DepthFrameReader_U3CAcquireLatestFrameU3Em__68_m4219505792 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
