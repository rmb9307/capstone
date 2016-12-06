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

// Windows.Kinect.BodyFrameReader
struct BodyFrameReader_t3001157404;
// System.EventHandler`1<Windows.Kinect.BodyFrameArrivedEventArgs>
struct EventHandler_1_t2013272725;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.BodyFrameSource
struct BodyFrameSource_t3039630964;
// Windows.Kinect.BodyFrameReader/_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_t1240551979;
// Windows.Kinect.BodyFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t2942852148;
// Windows.Kinect.BodyFrame
struct BodyFrame_t376958137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyF1240551979.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_BodyF2942852148.h"

// System.Void Windows.Kinect.BodyFrameReader::.ctor(System.IntPtr)
extern "C"  void BodyFrameReader__ctor_m1460796406 (BodyFrameReader_t3001157404 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::.cctor()
extern "C"  void BodyFrameReader__cctor_m3086714447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.BodyFrameArrivedEventArgs>)
extern "C"  void BodyFrameReader_add_FrameArrived_m1268975908 (BodyFrameReader_t3001157404 * __this, EventHandler_1_t2013272725 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.BodyFrameArrivedEventArgs>)
extern "C"  void BodyFrameReader_remove_FrameArrived_m2223650481 (BodyFrameReader_t3001157404 * __this, EventHandler_1_t2013272725 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyFrameReader_add_PropertyChanged_m958215732 (BodyFrameReader_t3001157404 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void BodyFrameReader_remove_PropertyChanged_m1912890305 (BodyFrameReader_t3001157404 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t BodyFrameReader_Helper_INativeWrapper_get_nativePtr_m691320026 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Finalize()
extern "C"  void BodyFrameReader_Finalize_m2345646724 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_ReleaseObject_m2128460918 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_AddRefObject_m1487606099 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Dispose(System.Boolean)
extern "C"  void BodyFrameReader_Dispose_m490561554 (BodyFrameReader_t3001157404 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_get_BodyFrameSource(System.IntPtr)
extern "C"  IntPtr_t BodyFrameReader_Windows_Kinect_BodyFrameReader_get_BodyFrameSource_m3293782218 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.BodyFrameReader::get_BodyFrameSource()
extern "C"  BodyFrameSource_t3039630964 * BodyFrameReader_get_BodyFrameSource_m4286691805 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool BodyFrameReader_Windows_Kinect_BodyFrameReader_get_IsPaused_m687348357 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_put_IsPaused_m1450355355 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.BodyFrameReader::get_IsPaused()
extern "C"  bool BodyFrameReader_get_IsPaused_m2336846211 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::set_IsPaused(System.Boolean)
extern "C"  void BodyFrameReader_set_IsPaused_m548541074 (BodyFrameReader_t3001157404 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_Handler_m2802843599 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameReader_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_Handler_m2802843599(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.BodyFrameReader/_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_add_FrameArrived_m2366118608 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_t1240551979 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void BodyFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m3845302814 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m3845302814(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.BodyFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_add_PropertyChanged_m851900550 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t2942852148 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t BodyFrameReader_Windows_Kinect_BodyFrameReader_AcquireLatestFrame_m3091786127 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrame Windows.Kinect.BodyFrameReader::AcquireLatestFrame()
extern "C"  BodyFrame_t376958137 * BodyFrameReader_AcquireLatestFrame_m1492812813 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Windows_Kinect_BodyFrameReader_Dispose(System.IntPtr)
extern "C"  void BodyFrameReader_Windows_Kinect_BodyFrameReader_Dispose_m2997166013 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::Dispose()
extern "C"  void BodyFrameReader_Dispose_m3157231067 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.BodyFrameReader::__EventCleanup()
extern "C"  void BodyFrameReader___EventCleanup_m2627138096 (BodyFrameReader_t3001157404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.BodyFrameReader::<get_BodyFrameSource>m__44(System.IntPtr)
extern "C"  BodyFrameSource_t3039630964 * BodyFrameReader_U3Cget_BodyFrameSourceU3Em__44_m3766703490 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrame Windows.Kinect.BodyFrameReader::<AcquireLatestFrame>m__47(System.IntPtr)
extern "C"  BodyFrame_t376958137 * BodyFrameReader_U3CAcquireLatestFrameU3Em__47_m4104455185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
