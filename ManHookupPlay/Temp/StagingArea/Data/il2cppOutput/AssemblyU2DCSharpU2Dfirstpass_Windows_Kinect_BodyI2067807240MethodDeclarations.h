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

// Windows.Kinect.BodyIndexFrameReader
struct BodyIndexFrameReader_t2067807240;
// System.EventHandler`1<Windows.Kinect.BodyIndexFrameArrivedEventArgs>
struct EventHandler_1_t2583828609;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.BodyIndexFrameSource
struct BodyIndexFrameSource_t2106280800;
// Windows.Kinect.BodyIndexFrameReader/_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_t1276969037;
// Windows.Kinect.BodyIndexFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t2313718048;
// Windows.Kinect.BodyIndexFrame
struct BodyIndexFrame_t992690853;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyI1276969037.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyI2313718048.h"

// System.Void Windows.Kinect.BodyIndexFrameReader::.ctor(System.IntPtr)
extern "C"  void BodyIndexFrameReader__ctor_m842854650 (BodyIndexFrameReader_t2067807240 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::.cctor()
extern "C"  void BodyIndexFrameReader__cctor_m1145758035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.BodyIndexFrameArrivedEventArgs>)
extern "C"  void BodyIndexFrameReader_add_FrameArrived_m2161484594 (BodyIndexFrameReader_t2067807240 * __this, EventHandler_1_t2583828609 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.BodyIndexFrameArrivedEventArgs>)
extern "C"  void BodyIndexFrameReader_remove_FrameArrived_m4142788413 (BodyIndexFrameReader_t2067807240 * __this, EventHandler_1_t2583828609 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyIndexFrameReader_add_PropertyChanged_m2684362672 (BodyIndexFrameReader_t2067807240 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyIndexFrameReader_remove_PropertyChanged_m1912944837 (BodyIndexFrameReader_t2067807240 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyIndexFrameReader_Helper_INativeWrapper_get_nativePtr_m1085817312 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Finalize()
extern "C"  void BodyIndexFrameReader_Finalize_m1102341256 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_ReleaseObject_m4098965428 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_AddRefObject_m1966812757 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Dispose(System.Boolean)
extern "C"  void BodyIndexFrameReader_Dispose_m3912506510 (BodyIndexFrameReader_t2067807240 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_get_BodyIndexFrameSource(System.IntPtr)
extern "C"  IntPtr_t BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_get_BodyIndexFrameSource_m3704912028 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.BodyIndexFrameReader::get_BodyIndexFrameSource()
extern "C"  BodyIndexFrameSource_t2106280800 * BodyIndexFrameReader_get_BodyIndexFrameSource_m3854596621 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_get_IsPaused_m1179501123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_put_IsPaused_m3317881885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyIndexFrameReader::get_IsPaused()
extern "C"  bool BodyIndexFrameReader_get_IsPaused_m2526306767 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::set_IsPaused(System.Boolean)
extern "C"  void BodyIndexFrameReader_set_IsPaused_m19514262 (BodyIndexFrameReader_t2067807240 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler_m3220689293 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler_m3220689293(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.BodyIndexFrameReader/_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_add_FrameArrived_m1808024884 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_t1276969037 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyIndexFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m520168602 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m520168602(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.BodyIndexFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_add_PropertyChanged_m656858420 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t2313718048 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_AcquireLatestFrame_m701648781 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrame Windows.Kinect.BodyIndexFrameReader::AcquireLatestFrame()
extern "C"  BodyIndexFrame_t992690853 * BodyIndexFrameReader_AcquireLatestFrame_m4259641601 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Windows_Kinect_BodyIndexFrameReader_Dispose(System.IntPtr)
extern "C"  void BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameReader_Dispose_m281519679 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::Dispose()
extern "C"  void BodyIndexFrameReader_Dispose_m3117124439 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyIndexFrameReader::__EventCleanup()
extern "C"  void BodyIndexFrameReader___EventCleanup_m242026804 (BodyIndexFrameReader_t2067807240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.BodyIndexFrameReader::<get_BodyIndexFrameSource>m__4E(System.IntPtr)
extern "C"  BodyIndexFrameSource_t2106280800 * BodyIndexFrameReader_U3Cget_BodyIndexFrameSourceU3Em__4E_m695517697 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrame Windows.Kinect.BodyIndexFrameReader::<AcquireLatestFrame>m__51(System.IntPtr)
extern "C"  BodyIndexFrame_t992690853 * BodyIndexFrameReader_U3CAcquireLatestFrameU3Em__51_m1490428364 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
