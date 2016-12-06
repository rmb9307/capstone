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

// Windows.Kinect.ColorFrame
struct ColorFrame_t4040143346;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t2629151118;
// Windows.Kinect.ColorCameraSettings
struct ColorCameraSettings_t3073888441;
// Windows.Kinect.ColorFrameSource
struct ColorFrameSource_t622873837;
// Windows.Kinect.FrameDescription
struct FrameDescription_t2208175287;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Color2565321271.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Windows.Kinect.ColorFrame::.ctor(System.IntPtr)
extern "C"  void ColorFrame__ctor_m1258162788 (ColorFrame_t4040143346 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t ColorFrame_Helper_INativeWrapper_get_nativePtr_m2889299958 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_CopyRawFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_CopyRawFrameDataToIntPtr_m625162380 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::CopyRawFrameDataToIntPtr(System.IntPtr,System.UInt32)
extern "C"  void ColorFrame_CopyRawFrameDataToIntPtr_m615566710 (ColorFrame_t4040143346 * __this, IntPtr_t ___frameData0, uint32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_CopyConvertedFrameDataToIntPtr(System.IntPtr,System.IntPtr,System.UInt32,Windows.Kinect.ColorImageFormat)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_CopyConvertedFrameDataToIntPtr_m2133596982 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, uint32_t ___frameDataSize2, int32_t ___colorFormat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::CopyConvertedFrameDataToIntPtr(System.IntPtr,System.UInt32,Windows.Kinect.ColorImageFormat)
extern "C"  void ColorFrame_CopyConvertedFrameDataToIntPtr_m227438496 (ColorFrame_t4040143346 * __this, IntPtr_t ___frameData0, uint32_t ___size1, int32_t ___colorFormat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_LockRawImageBuffer(System.IntPtr)
extern "C"  IntPtr_t ColorFrame_Windows_Kinect_ColorFrame_LockRawImageBuffer_m1164984063 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.ColorFrame::LockRawImageBuffer()
extern "C"  KinectBuffer_t2629151118 * ColorFrame_LockRawImageBuffer_m3076457890 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Finalize()
extern "C"  void ColorFrame_Finalize_m1108892274 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_ReleaseObject(System.IntPtr&)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_ReleaseObject_m2554681140 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_AddRefObject(System.IntPtr&)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_AddRefObject_m4272301781 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Dispose(System.Boolean)
extern "C"  void ColorFrame_Dispose_m2556465892 (ColorFrame_t4040143346 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_get_ColorCameraSettings(System.IntPtr)
extern "C"  IntPtr_t ColorFrame_Windows_Kinect_ColorFrame_get_ColorCameraSettings_m2001602727 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorCameraSettings Windows.Kinect.ColorFrame::get_ColorCameraSettings()
extern "C"  ColorCameraSettings_t3073888441 * ColorFrame_get_ColorCameraSettings_m3071746887 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_get_ColorFrameSource(System.IntPtr)
extern "C"  IntPtr_t ColorFrame_Windows_Kinect_ColorFrame_get_ColorFrameSource_m1199140463 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.ColorFrame::get_ColorFrameSource()
extern "C"  ColorFrameSource_t622873837 * ColorFrame_get_ColorFrameSource_m1268322833 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_get_FrameDescription(System.IntPtr)
extern "C"  IntPtr_t ColorFrame_Windows_Kinect_ColorFrame_get_FrameDescription_m3756906853 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrame::get_FrameDescription()
extern "C"  FrameDescription_t2208175287 * ColorFrame_get_FrameDescription_m3605500069 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorImageFormat Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_get_RawColorImageFormat(System.IntPtr)
extern "C"  int32_t ColorFrame_Windows_Kinect_ColorFrame_get_RawColorImageFormat_m1019179209 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorImageFormat Windows.Kinect.ColorFrame::get_RawColorImageFormat()
extern "C"  int32_t ColorFrame_get_RawColorImageFormat_m4024981667 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t ColorFrame_Windows_Kinect_ColorFrame_get_RelativeTime_m2995427645 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Windows.Kinect.ColorFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  ColorFrame_get_RelativeTime_m2079629625 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_CopyRawFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_CopyRawFrameDataToArray_m4155415173 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::CopyRawFrameDataToArray(System.Byte[])
extern "C"  void ColorFrame_CopyRawFrameDataToArray_m1357806337 (ColorFrame_t4040143346 * __this, ByteU5BU5D_t4260760469* ___frameData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_CopyConvertedFrameDataToArray(System.IntPtr,System.IntPtr,System.Int32,Windows.Kinect.ColorImageFormat)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_CopyConvertedFrameDataToArray_m1398270895 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___frameData1, int32_t ___frameDataSize2, int32_t ___colorFormat3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::CopyConvertedFrameDataToArray(System.Byte[],Windows.Kinect.ColorImageFormat)
extern "C"  void ColorFrame_CopyConvertedFrameDataToArray_m2262638231 (ColorFrame_t4040143346 * __this, ByteU5BU5D_t4260760469* ___frameData0, int32_t ___colorFormat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_CreateFrameDescription(System.IntPtr,Windows.Kinect.ColorImageFormat)
extern "C"  IntPtr_t ColorFrame_Windows_Kinect_ColorFrame_CreateFrameDescription_m2313457522 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, int32_t ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrame::CreateFrameDescription(Windows.Kinect.ColorImageFormat)
extern "C"  FrameDescription_t2208175287 * ColorFrame_CreateFrameDescription_m3936214606 (ColorFrame_t4040143346 * __this, int32_t ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Windows_Kinect_ColorFrame_Dispose(System.IntPtr)
extern "C"  void ColorFrame_Windows_Kinect_ColorFrame_Dispose_m3791060671 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::Dispose()
extern "C"  void ColorFrame_Dispose_m1870409773 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.ColorFrame::__EventCleanup()
extern "C"  void ColorFrame___EventCleanup_m2847369118 (ColorFrame_t4040143346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorCameraSettings Windows.Kinect.ColorFrame::<get_ColorCameraSettings>m__5(System.IntPtr)
extern "C"  ColorCameraSettings_t3073888441 * ColorFrame_U3Cget_ColorCameraSettingsU3Em__5_m2202832495 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorFrameSource Windows.Kinect.ColorFrame::<get_ColorFrameSource>m__6(System.IntPtr)
extern "C"  ColorFrameSource_t622873837 * ColorFrame_U3Cget_ColorFrameSourceU3Em__6_m2436426324 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrame::<get_FrameDescription>m__7(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * ColorFrame_U3Cget_FrameDescriptionU3Em__7_m1679531379 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.KinectBuffer Windows.Kinect.ColorFrame::<LockRawImageBuffer>m__8(System.IntPtr)
extern "C"  KinectBuffer_t2629151118 * ColorFrame_U3CLockRawImageBufferU3Em__8_m3424278465 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameDescription Windows.Kinect.ColorFrame::<CreateFrameDescription>m__9(System.IntPtr)
extern "C"  FrameDescription_t2208175287 * ColorFrame_U3CCreateFrameDescriptionU3Em__9_m1821018372 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
