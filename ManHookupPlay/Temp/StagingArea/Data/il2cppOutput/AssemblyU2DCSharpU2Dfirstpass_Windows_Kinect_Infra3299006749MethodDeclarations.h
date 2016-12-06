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

// Windows.Kinect.InfraredFrameReader
struct InfraredFrameReader_t3299006749;
// System.EventHandler`1<Windows.Kinect.InfraredFrameArrivedEventArgs>
struct EventHandler_1_t2303139670;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.InfraredFrameSource
struct InfraredFrameSource_t3337480309;
// Windows.Kinect.InfraredFrameReader/_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_t1749602281;
// Windows.Kinect.InfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t554092597;
// Windows.Kinect.InfraredFrame
struct InfraredFrame_t4122645370;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Infra1749602281.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Infrar554092597.h"

// System.Void Windows.Kinect.InfraredFrameReader::.ctor(System.IntPtr)
extern "C"  void InfraredFrameReader__ctor_m25029943 (InfraredFrameReader_t3299006749 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::.cctor()
extern "C"  void InfraredFrameReader__cctor_m803115280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::add_FrameArrived(System.EventHandler`1<Windows.Kinect.InfraredFrameArrivedEventArgs>)
extern "C"  void InfraredFrameReader_add_FrameArrived_m268720132 (InfraredFrameReader_t3299006749 * __this, EventHandler_1_t2303139670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::remove_FrameArrived(System.EventHandler`1<Windows.Kinect.InfraredFrameArrivedEventArgs>)
extern "C"  void InfraredFrameReader_remove_FrameArrived_m2178750707 (InfraredFrameReader_t3299006749 * __this, EventHandler_1_t2303139670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void InfraredFrameReader_add_PropertyChanged_m3783343251 (InfraredFrameReader_t3299006749 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void InfraredFrameReader_remove_PropertyChanged_m1107676418 (InfraredFrameReader_t3299006749 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrameReader::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t InfraredFrameReader_Helper_INativeWrapper_get_nativePtr_m405209145 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Finalize()
extern "C"  void InfraredFrameReader_Finalize_m2535135493 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_ReleaseObject(System.IntPtr&)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_ReleaseObject_m2063978488 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_AddRefObject(System.IntPtr&)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_AddRefObject_m1901168017 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Dispose(System.Boolean)
extern "C"  void InfraredFrameReader_Dispose_m1151163185 (InfraredFrameReader_t3299006749 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_get_InfraredFrameSource(System.IntPtr)
extern "C"  IntPtr_t InfraredFrameReader_Windows_Kinect_InfraredFrameReader_get_InfraredFrameSource_m127893607 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.InfraredFrameReader::get_InfraredFrameSource()
extern "C"  InfraredFrameSource_t3337480309 * InfraredFrameReader_get_InfraredFrameSource_m1556284990 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_get_IsPaused(System.IntPtr)
extern "C"  bool InfraredFrameReader_Windows_Kinect_InfraredFrameReader_get_IsPaused_m4168403591 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_put_IsPaused_m2212616793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, bool ___isPaused1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.InfraredFrameReader::get_IsPaused()
extern "C"  bool InfraredFrameReader_get_IsPaused_m677378436 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::set_IsPaused(System.Boolean)
extern "C"  void InfraredFrameReader_set_IsPaused_m1107112659 (InfraredFrameReader_t3299006749 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler_m1621152977 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameReader_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler_m1621152977(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_add_FrameArrived(System.IntPtr,Windows.Kinect.InfraredFrameReader/_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate,System.Boolean)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_add_FrameArrived_m459930316 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_t1749602281 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void InfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m78550205 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m78550205(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.InfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_add_PropertyChanged_m2200302021 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t554092597 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_AcquireLatestFrame(System.IntPtr)
extern "C"  IntPtr_t InfraredFrameReader_Windows_Kinect_InfraredFrameReader_AcquireLatestFrame_m3005097745 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrame Windows.Kinect.InfraredFrameReader::AcquireLatestFrame()
extern "C"  InfraredFrame_t4122645370 * InfraredFrameReader_AcquireLatestFrame_m4280116653 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Windows_Kinect_InfraredFrameReader_Dispose(System.IntPtr)
extern "C"  void InfraredFrameReader_Windows_Kinect_InfraredFrameReader_Dispose_m357505659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::Dispose()
extern "C"  void InfraredFrameReader_Dispose_m1085133626 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.InfraredFrameReader::__EventCleanup()
extern "C"  void InfraredFrameReader___EventCleanup_m4117212145 (InfraredFrameReader_t3299006749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.InfraredFrameReader::<get_InfraredFrameSource>m__70(System.IntPtr)
extern "C"  InfraredFrameSource_t3337480309 * InfraredFrameReader_U3Cget_InfraredFrameSourceU3Em__70_m3765648712 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrame Windows.Kinect.InfraredFrameReader::<AcquireLatestFrame>m__73(System.IntPtr)
extern "C"  InfraredFrame_t4122645370 * InfraredFrameReader_U3CAcquireLatestFrameU3Em__73_m4041013304 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
