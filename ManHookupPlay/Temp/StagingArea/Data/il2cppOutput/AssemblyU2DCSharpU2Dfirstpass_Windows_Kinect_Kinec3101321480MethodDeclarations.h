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

// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>
struct EventHandler_1_t525793090;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t485618906;
// Windows.Kinect.AudioSource
struct AudioSource_t3964353183;
// Windows.Kinect.BodyFrameSource
struct BodyFrameSource_t3039630964;
// Windows.Kinect.BodyIndexFrameSource
struct BodyIndexFrameSource_t2106280800;
// Windows.Kinect.ColorFrameSource
struct ColorFrameSource_t622873837;
// Windows.Kinect.CoordinateMapper
struct CoordinateMapper_t2160979521;
// Windows.Kinect.DepthFrameSource
struct DepthFrameSource_t1731581325;
// Windows.Kinect.InfraredFrameSource
struct InfraredFrameSource_t3337480309;
// Windows.Kinect.LongExposureInfraredFrameSource
struct LongExposureInfraredFrameSource_t1058346834;
// System.String
struct String_t;
// Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate
struct _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t4014188018;
// Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t2610214432;
// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4045888484;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Kinect313620164.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Kinec4014188018.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Kinec2610214432.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Frame3838077401.h"

// System.Void Windows.Kinect.KinectSensor::.ctor(System.IntPtr)
extern "C"  void KinectSensor__ctor_m757000698 (KinectSensor_t3101321480 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::.cctor()
extern "C"  void KinectSensor__cctor_m3482999379 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::add_IsAvailableChanged(System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>)
extern "C"  void KinectSensor_add_IsAvailableChanged_m1838867000 (KinectSensor_t3101321480 * __this, EventHandler_1_t525793090 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::remove_IsAvailableChanged(System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>)
extern "C"  void KinectSensor_remove_IsAvailableChanged_m1760258125 (KinectSensor_t3101321480 * __this, EventHandler_1_t525793090 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void KinectSensor_add_PropertyChanged_m3142633136 (KinectSensor_t3101321480 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
extern "C"  void KinectSensor_remove_PropertyChanged_m547303877 (KinectSensor_t3101321480 * __this, EventHandler_1_t485618906 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t KinectSensor_Helper_INativeWrapper_get_nativePtr_m3375853024 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Dispose(System.Boolean)
extern "C"  void KinectSensor_Dispose_m1742963598 (KinectSensor_t3101321480 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Finalize()
extern "C"  void KinectSensor_Finalize_m923377032 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_ReleaseObject(System.IntPtr&)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_ReleaseObject_m147667636 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_AddRefObject(System.IntPtr&)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_AddRefObject_m869520213 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_AudioSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_AudioSource_m457389825 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.KinectSensor::get_AudioSource()
extern "C"  AudioSource_t3964353183 * KinectSensor_get_AudioSource_m97982577 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_BodyFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_BodyFrameSource_m898864524 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.KinectSensor::get_BodyFrameSource()
extern "C"  BodyFrameSource_t3039630964 * KinectSensor_get_BodyFrameSource_m3447117457 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_BodyIndexFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_BodyIndexFrameSource_m3090169244 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.KinectSensor::get_BodyIndexFrameSource()
extern "C"  BodyIndexFrameSource_t2106280800 * KinectSensor_get_BodyIndexFrameSource_m903902477 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_ColorFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_ColorFrameSource_m3664703343 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.KinectSensor::get_ColorFrameSource()
extern "C"  ColorFrameSource_t622873837 * KinectSensor_get_ColorFrameSource_m2099684455 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_CoordinateMapper(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_CoordinateMapper_m3481795483 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.CoordinateMapper Windows.Kinect.KinectSensor::get_CoordinateMapper()
extern "C"  CoordinateMapper_t2160979521 * KinectSensor_get_CoordinateMapper_m3020070927 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_DepthFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_DepthFrameSource_m79893199 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.KinectSensor::get_DepthFrameSource()
extern "C"  DepthFrameSource_t1731581325 * KinectSensor_get_DepthFrameSource_m3566009767 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_InfraredFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_InfraredFrameSource_m3463766123 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.KinectSensor::get_InfraredFrameSource()
extern "C"  InfraredFrameSource_t3337480309 * KinectSensor_get_InfraredFrameSource_m3430219057 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_IsAvailable(System.IntPtr)
extern "C"  bool KinectSensor_Windows_Kinect_KinectSensor_get_IsAvailable_m2250390284 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.KinectSensor::get_IsAvailable()
extern "C"  bool KinectSensor_get_IsAvailable_m2075973994 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_IsOpen(System.IntPtr)
extern "C"  bool KinectSensor_Windows_Kinect_KinectSensor_get_IsOpen_m1129120807 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.KinectSensor::get_IsOpen()
extern "C"  bool KinectSensor_get_IsOpen_m1642167531 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectCapabilities Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_KinectCapabilities(System.IntPtr)
extern "C"  uint32_t KinectSensor_Windows_Kinect_KinectSensor_get_KinectCapabilities_m3012692861 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectCapabilities Windows.Kinect.KinectSensor::get_KinectCapabilities()
extern "C"  uint32_t KinectSensor_get_KinectCapabilities_m2080902101 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_LongExposureInfraredFrameSource(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_LongExposureInfraredFrameSource_m1180104942 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.KinectSensor::get_LongExposureInfraredFrameSource()
extern "C"  LongExposureInfraredFrameSource_t1058346834 * KinectSensor_get_LongExposureInfraredFrameSource_m89666129 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_get_UniqueKinectId(System.IntPtr)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_get_UniqueKinectId_m2213354274 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Windows.Kinect.KinectSensor::get_UniqueKinectId()
extern "C"  String_t* KinectSensor_get_UniqueKinectId_m820804514 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void KinectSensor_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler_m3139624064 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_KinectSensor_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler_m3139624064(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_add_IsAvailableChanged(System.IntPtr,Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate,System.Boolean)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_add_IsAvailableChanged_m876016574 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t4014188018 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void KinectSensor_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2831420314 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_KinectSensor_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m2831420314(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_add_PropertyChanged(System.IntPtr,Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_add_PropertyChanged_m1626793268 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_t2610214432 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_GetDefault()
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_GetDefault_m4275833090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.KinectSensor::GetDefault()
extern "C"  KinectSensor_t3101321480 * KinectSensor_GetDefault_m1893050815 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_Open(System.IntPtr)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_Open_m845240062 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Open()
extern "C"  void KinectSensor_Open_m3615189300 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_Close(System.IntPtr)
extern "C"  void KinectSensor_Windows_Kinect_KinectSensor_Close_m3934493958 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::Close()
extern "C"  void KinectSensor_Close_m2531502512 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.KinectSensor::Windows_Kinect_KinectSensor_OpenMultiSourceFrameReader(System.IntPtr,Windows.Kinect.FrameSourceTypes)
extern "C"  IntPtr_t KinectSensor_Windows_Kinect_KinectSensor_OpenMultiSourceFrameReader_m3290403829 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, uint32_t ___enabledFrameSourceTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.KinectSensor::OpenMultiSourceFrameReader(Windows.Kinect.FrameSourceTypes)
extern "C"  MultiSourceFrameReader_t4045888484 * KinectSensor_OpenMultiSourceFrameReader_m2930396078 (KinectSensor_t3101321480 * __this, uint32_t ___enabledFrameSourceTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.KinectSensor::__EventCleanup()
extern "C"  void KinectSensor___EventCleanup_m859013684 (KinectSensor_t3101321480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.AudioSource Windows.Kinect.KinectSensor::<get_AudioSource>m__13(System.IntPtr)
extern "C"  AudioSource_t3964353183 * KinectSensor_U3Cget_AudioSourceU3Em__13_m3241789182 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyFrameSource Windows.Kinect.KinectSensor::<get_BodyFrameSource>m__14(System.IntPtr)
extern "C"  BodyFrameSource_t3039630964 * KinectSensor_U3Cget_BodyFrameSourceU3Em__14_m3328276019 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.BodyIndexFrameSource Windows.Kinect.KinectSensor::<get_BodyIndexFrameSource>m__15(System.IntPtr)
extern "C"  BodyIndexFrameSource_t2106280800 * KinectSensor_U3Cget_BodyIndexFrameSourceU3Em__15_m565036302 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.KinectSensor::<get_ColorFrameSource>m__16(System.IntPtr)
extern "C"  ColorFrameSource_t622873837 * KinectSensor_U3Cget_ColorFrameSourceU3Em__16_m2603865613 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.CoordinateMapper Windows.Kinect.KinectSensor::<get_CoordinateMapper>m__17(System.IntPtr)
extern "C"  CoordinateMapper_t2160979521 * KinectSensor_U3Cget_CoordinateMapperU3Em__17_m2689883244 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthFrameSource Windows.Kinect.KinectSensor::<get_DepthFrameSource>m__18(System.IntPtr)
extern "C"  DepthFrameSource_t1731581325 * KinectSensor_U3Cget_DepthFrameSourceU3Em__18_m3109656011 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.InfraredFrameSource Windows.Kinect.KinectSensor::<get_InfraredFrameSource>m__19(System.IntPtr)
extern "C"  InfraredFrameSource_t3337480309 * KinectSensor_U3Cget_InfraredFrameSourceU3Em__19_m2296698252 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.KinectSensor::<get_LongExposureInfraredFrameSource>m__1A(System.IntPtr)
extern "C"  LongExposureInfraredFrameSource_t1058346834 * KinectSensor_U3Cget_LongExposureInfraredFrameSourceU3Em__1A_m3250814410 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectSensor Windows.Kinect.KinectSensor::<GetDefault>m__1D(System.IntPtr)
extern "C"  KinectSensor_t3101321480 * KinectSensor_U3CGetDefaultU3Em__1D_m2710319869 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.KinectSensor::<OpenMultiSourceFrameReader>m__1E(System.IntPtr)
extern "C"  MultiSourceFrameReader_t4045888484 * KinectSensor_U3COpenMultiSourceFrameReaderU3Em__1E_m4188263997 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
