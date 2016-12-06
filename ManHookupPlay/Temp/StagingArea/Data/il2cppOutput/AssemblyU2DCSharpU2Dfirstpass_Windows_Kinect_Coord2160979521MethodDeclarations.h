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

// Windows.Kinect.CoordinateMapper
struct CoordinateMapper_t2160979521;
// System.EventHandler`1<Windows.Kinect.CoordinateMappingChangedEventArgs>
struct EventHandler_1_t2793833081;
// Windows.Kinect.PointF[]
struct PointFU5BU5D_t2614903659;
// Windows.Kinect.CoordinateMapper/_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate
struct _Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_t3921697154;
// Windows.Kinect.CameraSpacePoint[]
struct CameraSpacePointU5BU5D_t1592276526;
// Windows.Kinect.DepthSpacePoint[]
struct DepthSpacePointU5BU5D_t1661612378;
// Windows.Kinect.ColorSpacePoint[]
struct ColorSpacePointU5BU5D_t4282576442;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Camer2483690875.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Coord3921697154.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Camer1874961815.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Depth1409851611.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Color3175202171.h"

// System.Void Windows.Kinect.CoordinateMapper::.ctor(System.IntPtr)
extern "C"  void CoordinateMapper__ctor_m2013694067 (CoordinateMapper_t2160979521 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::.cctor()
extern "C"  void CoordinateMapper__cctor_m1005135436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::add_CoordinateMappingChanged(System.EventHandler`1<Windows.Kinect.CoordinateMappingChangedEventArgs>)
extern "C"  void CoordinateMapper_add_CoordinateMappingChanged_m1566978829 (CoordinateMapper_t2160979521 * __this, EventHandler_1_t2793833081 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::remove_CoordinateMappingChanged(System.EventHandler`1<Windows.Kinect.CoordinateMappingChangedEventArgs>)
extern "C"  void CoordinateMapper_remove_CoordinateMappingChanged_m2974177012 (CoordinateMapper_t2160979521 * __this, EventHandler_1_t2793833081 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t CoordinateMapper_Helper_INativeWrapper_get_nativePtr_m3489713671 (CoordinateMapper_t2160979521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_GetDepthCameraIntrinsics(System.IntPtr)
extern "C"  IntPtr_t CoordinateMapper_Windows_Kinect_CoordinateMapper_GetDepthCameraIntrinsics_m1314594525 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.CameraIntrinsics Windows.Kinect.CoordinateMapper::GetDepthCameraIntrinsics()
extern "C"  CameraIntrinsics_t2483690875  CoordinateMapper_GetDepthCameraIntrinsics_m3561946528 (CoordinateMapper_t2160979521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_GetDepthFrameToCameraSpaceTable(System.IntPtr,System.IntPtr,System.UInt32)
extern "C"  int32_t CoordinateMapper_Windows_Kinect_CoordinateMapper_GetDepthFrameToCameraSpaceTable_m1988852130 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___outCollection1, uint32_t ___outCollectionSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.PointF[] Windows.Kinect.CoordinateMapper::GetDepthFrameToCameraSpaceTable()
extern "C"  PointFU5BU5D_t2614903659* CoordinateMapper_GetDepthFrameToCameraSpaceTable_m3009939621 (CoordinateMapper_t2160979521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapColorFrameToDepthSpace(System.IntPtr,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapColorFrameToDepthSpace_m844615582 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, uint32_t ___depthFrameDataSize2, IntPtr_t ___depthSpacePoints3, uint32_t ___depthSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapColorFrameToDepthSpaceUsingIntPtr(System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_MapColorFrameToDepthSpaceUsingIntPtr_m2034404200 (CoordinateMapper_t2160979521 * __this, IntPtr_t ___depthFrameData0, uint32_t ___depthFrameSize1, IntPtr_t ___depthSpacePoints2, uint32_t ___depthSpacePointsSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapColorFrameToCameraSpace(System.IntPtr,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapColorFrameToCameraSpace_m1781394220 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, uint32_t ___depthFrameDataSize2, IntPtr_t ___cameraSpacePoints3, uint32_t ___cameraSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapColorFrameToCameraSpaceUsingIntPtr(System.IntPtr,System.Int32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_MapColorFrameToCameraSpaceUsingIntPtr_m2394588519 (CoordinateMapper_t2160979521 * __this, IntPtr_t ___depthFrameData0, int32_t ___depthFrameSize1, IntPtr_t ___cameraSpacePoints2, uint32_t ___cameraSpacePointsSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthFrameToColorSpace(System.IntPtr,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthFrameToColorSpace_m1879162782 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, uint32_t ___depthFrameDataSize2, IntPtr_t ___colorSpacePoints3, uint32_t ___colorSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthFrameToColorSpaceUsingIntPtr(System.IntPtr,System.Int32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_MapDepthFrameToColorSpaceUsingIntPtr_m1783280999 (CoordinateMapper_t2160979521 * __this, IntPtr_t ___depthFrameData0, int32_t ___depthFrameSize1, IntPtr_t ___colorSpacePoints2, uint32_t ___colorSpacePointsSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthFrameToCameraSpace(System.IntPtr,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthFrameToCameraSpace_m3980581836 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, uint32_t ___depthFrameDataSize2, IntPtr_t ___cameraSpacePoints3, uint32_t ___cameraSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthFrameToCameraSpaceUsingIntPtr(System.IntPtr,System.Int32,System.IntPtr,System.UInt32)
extern "C"  void CoordinateMapper_MapDepthFrameToCameraSpaceUsingIntPtr_m2787165703 (CoordinateMapper_t2160979521 * __this, IntPtr_t ___depthFrameData0, int32_t ___depthFrameSize1, IntPtr_t ___cameraSpacePoints2, uint32_t ___cameraSpacePointsSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Finalize()
extern "C"  void CoordinateMapper_Finalize_m3402977089 (CoordinateMapper_t2160979521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_ReleaseObject(System.IntPtr&)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_ReleaseObject_m2731802708 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_AddRefObject(System.IntPtr&)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_AddRefObject_m1091426741 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Dispose(System.Boolean)
extern "C"  void CoordinateMapper_Dispose_m665200245 (CoordinateMapper_t2160979521 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler_m3400691696 (Il2CppObject * __this /* static, unused */, IntPtr_t ___result0, IntPtr_t ___pNative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void CDECL ReversePInvokeWrapper_CoordinateMapper_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler_m3400691696(intptr_t ___args0, intptr_t ___pNative1);
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_add_CoordinateMappingChanged(System.IntPtr,Windows.Kinect.CoordinateMapper/_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate,System.Boolean)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_add_CoordinateMappingChanged_m1219166501 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, _Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_t3921697154 * ___eventCallback1, bool ___unsubscribe2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapCameraPointToDepthSpace(System.IntPtr,Windows.Kinect.CameraSpacePoint)
extern "C"  IntPtr_t CoordinateMapper_Windows_Kinect_CoordinateMapper_MapCameraPointToDepthSpace_m3708191984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, CameraSpacePoint_t1874961815  ___cameraPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DepthSpacePoint Windows.Kinect.CoordinateMapper::MapCameraPointToDepthSpace(Windows.Kinect.CameraSpacePoint)
extern "C"  DepthSpacePoint_t1409851611  CoordinateMapper_MapCameraPointToDepthSpace_m434847403 (CoordinateMapper_t2160979521 * __this, CameraSpacePoint_t1874961815  ___cameraPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapCameraPointToColorSpace(System.IntPtr,Windows.Kinect.CameraSpacePoint)
extern "C"  IntPtr_t CoordinateMapper_Windows_Kinect_CoordinateMapper_MapCameraPointToColorSpace_m536992144 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, CameraSpacePoint_t1874961815  ___cameraPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorSpacePoint Windows.Kinect.CoordinateMapper::MapCameraPointToColorSpace(Windows.Kinect.CameraSpacePoint)
extern "C"  ColorSpacePoint_t3175202171  CoordinateMapper_MapCameraPointToColorSpace_m96326315 (CoordinateMapper_t2160979521 * __this, CameraSpacePoint_t1874961815  ___cameraPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthPointToCameraSpace(System.IntPtr,Windows.Kinect.DepthSpacePoint,System.UInt16)
extern "C"  IntPtr_t CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthPointToCameraSpace_m2311120452 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, DepthSpacePoint_t1409851611  ___depthPoint1, uint16_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.CameraSpacePoint Windows.Kinect.CoordinateMapper::MapDepthPointToCameraSpace(Windows.Kinect.DepthSpacePoint,System.UInt16)
extern "C"  CameraSpacePoint_t1874961815  CoordinateMapper_MapDepthPointToCameraSpace_m1450032567 (CoordinateMapper_t2160979521 * __this, DepthSpacePoint_t1409851611  ___depthPoint0, uint16_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthPointToColorSpace(System.IntPtr,Windows.Kinect.DepthSpacePoint,System.UInt16)
extern "C"  IntPtr_t CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthPointToColorSpace_m402695778 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, DepthSpacePoint_t1409851611  ___depthPoint1, uint16_t ___depth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.ColorSpacePoint Windows.Kinect.CoordinateMapper::MapDepthPointToColorSpace(Windows.Kinect.DepthSpacePoint,System.UInt16)
extern "C"  ColorSpacePoint_t3175202171  CoordinateMapper_MapDepthPointToColorSpace_m2022010841 (CoordinateMapper_t2160979521 * __this, DepthSpacePoint_t1409851611  ___depthPoint0, uint16_t ___depth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapCameraPointsToDepthSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapCameraPointsToDepthSpace_m1950276700 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___cameraPoints1, int32_t ___cameraPointsSize2, IntPtr_t ___depthPoints3, int32_t ___depthPointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapCameraPointsToDepthSpace(Windows.Kinect.CameraSpacePoint[],Windows.Kinect.DepthSpacePoint[])
extern "C"  void CoordinateMapper_MapCameraPointsToDepthSpace_m2235242065 (CoordinateMapper_t2160979521 * __this, CameraSpacePointU5BU5D_t1592276526* ___cameraPoints0, DepthSpacePointU5BU5D_t1661612378* ___depthPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapCameraPointsToColorSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapCameraPointsToColorSpace_m507705596 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___cameraPoints1, int32_t ___cameraPointsSize2, IntPtr_t ___colorPoints3, int32_t ___colorPointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapCameraPointsToColorSpace(Windows.Kinect.CameraSpacePoint[],Windows.Kinect.ColorSpacePoint[])
extern "C"  void CoordinateMapper_MapCameraPointsToColorSpace_m1595606289 (CoordinateMapper_t2160979521 * __this, CameraSpacePointU5BU5D_t1592276526* ___cameraPoints0, ColorSpacePointU5BU5D_t4282576442* ___colorPoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthPointsToCameraSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthPointsToCameraSpace_m2285551175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthPoints1, int32_t ___depthPointsSize2, IntPtr_t ___depths3, int32_t ___depthsSize4, IntPtr_t ___cameraPoints5, int32_t ___cameraPointsSize6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthPointsToCameraSpace(Windows.Kinect.DepthSpacePoint[],System.UInt16[],Windows.Kinect.CameraSpacePoint[])
extern "C"  void CoordinateMapper_MapDepthPointsToCameraSpace_m2831346803 (CoordinateMapper_t2160979521 * __this, DepthSpacePointU5BU5D_t1661612378* ___depthPoints0, UInt16U5BU5D_t801649474* ___depths1, CameraSpacePointU5BU5D_t1592276526* ___cameraPoints2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthPointsToColorSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthPointsToColorSpace_m1035018793 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthPoints1, int32_t ___depthPointsSize2, IntPtr_t ___depths3, int32_t ___depthsSize4, IntPtr_t ___colorPoints5, int32_t ___colorPointsSize6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthPointsToColorSpace(Windows.Kinect.DepthSpacePoint[],System.UInt16[],Windows.Kinect.ColorSpacePoint[])
extern "C"  void CoordinateMapper_MapDepthPointsToColorSpace_m1881867183 (CoordinateMapper_t2160979521 * __this, DepthSpacePointU5BU5D_t1661612378* ___depthPoints0, UInt16U5BU5D_t801649474* ___depths1, ColorSpacePointU5BU5D_t4282576442* ___colorPoints2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthFrameToCameraSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthFrameToCameraSpace_m3499931816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, int32_t ___depthFrameDataSize2, IntPtr_t ___cameraSpacePoints3, int32_t ___cameraSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthFrameToCameraSpace(System.UInt16[],Windows.Kinect.CameraSpacePoint[])
extern "C"  void CoordinateMapper_MapDepthFrameToCameraSpace_m1343268269 (CoordinateMapper_t2160979521 * __this, UInt16U5BU5D_t801649474* ___depthFrameData0, CameraSpacePointU5BU5D_t1592276526* ___cameraSpacePoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapDepthFrameToColorSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapDepthFrameToColorSpace_m1191602426 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, int32_t ___depthFrameDataSize2, IntPtr_t ___colorSpacePoints3, int32_t ___colorSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapDepthFrameToColorSpace(System.UInt16[],Windows.Kinect.ColorSpacePoint[])
extern "C"  void CoordinateMapper_MapDepthFrameToColorSpace_m3790852037 (CoordinateMapper_t2160979521 * __this, UInt16U5BU5D_t801649474* ___depthFrameData0, ColorSpacePointU5BU5D_t4282576442* ___colorSpacePoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapColorFrameToDepthSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapColorFrameToDepthSpace_m3349182714 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, int32_t ___depthFrameDataSize2, IntPtr_t ___depthSpacePoints3, int32_t ___depthSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapColorFrameToDepthSpace(System.UInt16[],Windows.Kinect.DepthSpacePoint[])
extern "C"  void CoordinateMapper_MapColorFrameToDepthSpace_m382312549 (CoordinateMapper_t2160979521 * __this, UInt16U5BU5D_t801649474* ___depthFrameData0, DepthSpacePointU5BU5D_t1661612378* ___depthSpacePoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMapper_MapColorFrameToCameraSpace(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  void CoordinateMapper_Windows_Kinect_CoordinateMapper_MapColorFrameToCameraSpace_m4190380040 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtr_t ___depthFrameData1, int32_t ___depthFrameDataSize2, IntPtr_t ___cameraSpacePoints3, int32_t ___cameraSpacePointsSize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::MapColorFrameToCameraSpace(System.UInt16[],Windows.Kinect.CameraSpacePoint[])
extern "C"  void CoordinateMapper_MapColorFrameToCameraSpace_m3151308045 (CoordinateMapper_t2160979521 * __this, UInt16U5BU5D_t801649474* ___depthFrameData0, CameraSpacePointU5BU5D_t1592276526* ___cameraSpacePoints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.CoordinateMapper::__EventCleanup()
extern "C"  void CoordinateMapper___EventCleanup_m3960948013 (CoordinateMapper_t2160979521 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
