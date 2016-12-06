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

// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame
struct VisualGestureBuilderFrame_t136980197;
// System.IntPtr[]
struct IntPtrU5BU5D_t3228729122;
// System.Collections.Generic.Dictionary`2<Microsoft.Kinect.VisualGestureBuilder.Gesture,Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult>
struct Dictionary_2_t1720930109;
// System.Collections.Generic.Dictionary`2<Microsoft.Kinect.VisualGestureBuilder.Gesture,Microsoft.Kinect.VisualGestureBuilder.DiscreteGestureResult>
struct Dictionary_2_t2062672531;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource
struct VisualGestureBuilderFrameSource_t2485041632;
// Microsoft.Kinect.VisualGestureBuilder.Gesture
struct Gesture_t3791679507;
// Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult
struct ContinuousGestureResult_t58064577;
// Microsoft.Kinect.VisualGestureBuilder.DiscreteGestureResult
struct DiscreteGestureResult_t399806999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::.ctor(System.IntPtr)
extern "C"  void VisualGestureBuilderFrame__ctor_m653802692 (VisualGestureBuilderFrame_t136980197 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t VisualGestureBuilderFrame_Helper_INativeWrapper_get_nativePtr_m591270358 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Finalize()
extern "C"  void VisualGestureBuilderFrame_Finalize_m1633420498 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_ReleaseObject(System.IntPtr&)
extern "C"  void VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_ReleaseObject_m3447373603 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_AddRefObject(System.IntPtr&)
extern "C"  void VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_AddRefObject_m2084340998 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Dispose(System.Boolean)
extern "C"  void VisualGestureBuilderFrame_Dispose_m2567750788 (VisualGestureBuilderFrame_t136980197 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_ContinuousGestureResults(System.IntPtr,System.IntPtr[],System.IntPtr[],System.Int32)
extern "C"  int32_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_ContinuousGestureResults_m1736924823 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outKeys1, IntPtrU5BU5D_t3228729122* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_ContinuousGestureResults_Length(System.IntPtr)
extern "C"  int32_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_ContinuousGestureResults_Length_m3119015321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Microsoft.Kinect.VisualGestureBuilder.Gesture,Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult> Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_ContinuousGestureResults()
extern "C"  Dictionary_2_t1720930109 * VisualGestureBuilderFrame_get_ContinuousGestureResults_m2493538315 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_DiscreteGestureResults(System.IntPtr,System.IntPtr[],System.IntPtr[],System.Int32)
extern "C"  int32_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_DiscreteGestureResults_m248946113 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, IntPtrU5BU5D_t3228729122* ___outKeys1, IntPtrU5BU5D_t3228729122* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_DiscreteGestureResults_Length(System.IntPtr)
extern "C"  int32_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_DiscreteGestureResults_Length_m4180538435 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Microsoft.Kinect.VisualGestureBuilder.Gesture,Microsoft.Kinect.VisualGestureBuilder.DiscreteGestureResult> Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_DiscreteGestureResults()
extern "C"  Dictionary_2_t2062672531 * VisualGestureBuilderFrame_get_DiscreteGestureResults_m727314975 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_IsTrackingIdValid(System.IntPtr)
extern "C"  bool VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_IsTrackingIdValid_m1748036092 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_IsTrackingIdValid()
extern "C"  bool VisualGestureBuilderFrame_get_IsTrackingIdValid_m926015041 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_RelativeTime(System.IntPtr)
extern "C"  int64_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_RelativeTime_m3219345132 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_RelativeTime()
extern "C"  TimeSpan_t413522987  VisualGestureBuilderFrame_get_RelativeTime_m1086990681 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_TrackingId(System.IntPtr)
extern "C"  uint64_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_TrackingId_m712719416 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_TrackingId()
extern "C"  uint64_t VisualGestureBuilderFrame_get_TrackingId_m136639699 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_VisualGestureBuilderFrameSource(System.IntPtr)
extern "C"  IntPtr_t VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_get_VisualGestureBuilderFrameSource_m846612301 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::get_VisualGestureBuilderFrameSource()
extern "C"  VisualGestureBuilderFrameSource_t2485041632 * VisualGestureBuilderFrame_get_VisualGestureBuilderFrameSource_m2241785260 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_Dispose(System.IntPtr)
extern "C"  void VisualGestureBuilderFrame_Microsoft_Kinect_VisualGestureBuilder_VisualGestureBuilderFrame_Dispose_m4000847280 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::Dispose()
extern "C"  void VisualGestureBuilderFrame_Dispose_m501856717 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::__EventCleanup()
extern "C"  void VisualGestureBuilderFrame___EventCleanup_m3295267326 (VisualGestureBuilderFrame_t136980197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.Gesture Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::<get_ContinuousGestureResults>m__2B(System.IntPtr)
extern "C"  Gesture_t3791679507 * VisualGestureBuilderFrame_U3Cget_ContinuousGestureResultsU3Em__2B_m2239247656 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.ContinuousGestureResult Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::<get_ContinuousGestureResults>m__2C(System.IntPtr)
extern "C"  ContinuousGestureResult_t58064577 * VisualGestureBuilderFrame_U3Cget_ContinuousGestureResultsU3Em__2C_m934102197 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.Gesture Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::<get_DiscreteGestureResults>m__2D(System.IntPtr)
extern "C"  Gesture_t3791679507 * VisualGestureBuilderFrame_U3Cget_DiscreteGestureResultsU3Em__2D_m302201020 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.DiscreteGestureResult Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::<get_DiscreteGestureResults>m__2E(System.IntPtr)
extern "C"  DiscreteGestureResult_t399806999 * VisualGestureBuilderFrame_U3Cget_DiscreteGestureResultsU3Em__2E_m516294623 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrameSource Microsoft.Kinect.VisualGestureBuilder.VisualGestureBuilderFrame::<get_VisualGestureBuilderFrameSource>m__2F(System.IntPtr)
extern "C"  VisualGestureBuilderFrameSource_t2485041632 * VisualGestureBuilderFrame_U3Cget_VisualGestureBuilderFrameSourceU3Em__2F_m3498890013 (Il2CppObject * __this /* static, unused */, IntPtr_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
