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

// Windows.Kinect.Body
struct Body_t3417228682;
// Windows.Kinect.Activity[]
struct ActivityU5BU5D_t1890610126;
// Windows.Kinect.DetectionResult[]
struct DetectionResultU5BU5D_t957213489;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Activity,Windows.Kinect.DetectionResult>
struct Dictionary_2_t2796799640;
// Windows.Kinect.Appearance[]
struct AppearanceU5BU5D_t1505925573;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Appearance,Windows.Kinect.DetectionResult>
struct Dictionary_2_t2412115087;
// Windows.Kinect.Expression[]
struct ExpressionU5BU5D_t1006616641;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult>
struct Dictionary_2_t1912806155;
// Windows.Kinect.JointType[]
struct JointTypeU5BU5D_t293115463;
// Windows.Kinect.JointOrientation[]
struct JointOrientationU5BU5D_t1079537595;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.JointOrientation>
struct Dictionary_2_t3471229903;
// Windows.Kinect.Joint[]
struct JointU5BU5D_t2486692809;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.Joint>
struct Dictionary_2_t3365632601;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Point1536267614.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Frame2478608145.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Detec4139774096.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Track2792420809.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_HandS3483547952.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Tracki554552936.h"

// System.Void Windows.Kinect.Body::.ctor()
extern "C"  void Body__ctor_m4103179864 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::.ctor(System.IntPtr)
extern "C"  void Body__ctor_m609854716 (Body_t3417228682 * __this, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.Body::Helper.INativeWrapper.get_nativePtr()
extern "C"  IntPtr_t Body_Helper_INativeWrapper_get_nativePtr_m1169349662 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::SetIntPtr(System.IntPtr)
extern "C"  void Body_SetIntPtr_m2470699389 (Body_t3417228682 * __this, IntPtr_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.Body::GetIntPtr()
extern "C"  IntPtr_t Body_GetIntPtr_m4264254368 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Windows.Kinect.Body::Windows_Kinect_Body_get_Lean(System.IntPtr)
extern "C"  IntPtr_t Body_Windows_Kinect_Body_get_Lean_m3596970542 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.PointF Windows.Kinect.Body::get_Lean()
extern "C"  PointF_t1536267614  Body_get_Lean_m3466780859 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::Finalize()
extern "C"  void Body_Finalize_m3164590858 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::Windows_Kinect_Body_ReleaseObject(System.IntPtr&)
extern "C"  void Body_Windows_Kinect_Body_ReleaseObject_m2014423796 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::Windows_Kinect_Body_AddRefObject(System.IntPtr&)
extern "C"  void Body_Windows_Kinect_Body_AddRefObject_m237001493 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::Dispose(System.Boolean)
extern "C"  void Body_Dispose_m3278623052 (Body_t3417228682 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Activities(System.IntPtr,Windows.Kinect.Activity[],Windows.Kinect.DetectionResult[],System.Int32)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Activities_m973205022 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, ActivityU5BU5D_t1890610126* ___outKeys1, DetectionResultU5BU5D_t957213489* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Activities_Length(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Activities_Length_m673550009 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Activity,Windows.Kinect.DetectionResult> Windows.Kinect.Body::get_Activities()
extern "C"  Dictionary_2_t2796799640 * Body_get_Activities_m794512067 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Appearance(System.IntPtr,Windows.Kinect.Appearance[],Windows.Kinect.DetectionResult[],System.Int32)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Appearance_m3108687186 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, AppearanceU5BU5D_t1505925573* ___outKeys1, DetectionResultU5BU5D_t957213489* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Appearance_Length(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Appearance_Length_m1037061104 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Appearance,Windows.Kinect.DetectionResult> Windows.Kinect.Body::get_Appearance()
extern "C"  Dictionary_2_t2412115087 * Body_get_Appearance_m1490196175 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameEdges Windows.Kinect.Body::Windows_Kinect_Body_get_ClippedEdges(System.IntPtr)
extern "C"  uint32_t Body_Windows_Kinect_Body_get_ClippedEdges_m1475409909 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.FrameEdges Windows.Kinect.Body::get_ClippedEdges()
extern "C"  uint32_t Body_get_ClippedEdges_m998582559 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DetectionResult Windows.Kinect.Body::Windows_Kinect_Body_get_Engaged(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Engaged_m641233476 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.DetectionResult Windows.Kinect.Body::get_Engaged()
extern "C"  int32_t Body_get_Engaged_m1198987568 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Expressions(System.IntPtr,Windows.Kinect.Expression[],Windows.Kinect.DetectionResult[],System.Int32)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Expressions_m980470659 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, ExpressionU5BU5D_t1006616641* ___outKeys1, DetectionResultU5BU5D_t957213489* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Expressions_Length(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Expressions_Length_m2076418091 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.Expression,Windows.Kinect.DetectionResult> Windows.Kinect.Body::get_Expressions()
extern "C"  Dictionary_2_t1912806155 * Body_get_Expressions_m2369360190 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingConfidence Windows.Kinect.Body::Windows_Kinect_Body_get_HandLeftConfidence(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_HandLeftConfidence_m1223341812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingConfidence Windows.Kinect.Body::get_HandLeftConfidence()
extern "C"  int32_t Body_get_HandLeftConfidence_m1223998400 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.HandState Windows.Kinect.Body::Windows_Kinect_Body_get_HandLeftState(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_HandLeftState_m282452524 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.HandState Windows.Kinect.Body::get_HandLeftState()
extern "C"  int32_t Body_get_HandLeftState_m854976584 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingConfidence Windows.Kinect.Body::Windows_Kinect_Body_get_HandRightConfidence(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_HandRightConfidence_m2856898715 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingConfidence Windows.Kinect.Body::get_HandRightConfidence()
extern "C"  int32_t Body_get_HandRightConfidence_m2517181945 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.HandState Windows.Kinect.Body::Windows_Kinect_Body_get_HandRightState(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_HandRightState_m3683729819 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.HandState Windows.Kinect.Body::get_HandRightState()
extern "C"  int32_t Body_get_HandRightState_m1616460345 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Body::Windows_Kinect_Body_get_IsRestricted(System.IntPtr)
extern "C"  bool Body_Windows_Kinect_Body_get_IsRestricted_m21311414 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Body::get_IsRestricted()
extern "C"  bool Body_get_IsRestricted_m2325560894 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Body::Windows_Kinect_Body_get_IsTracked(System.IntPtr)
extern "C"  bool Body_Windows_Kinect_Body_get_IsTracked_m258304203 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Body::get_IsTracked()
extern "C"  bool Body_get_IsTracked_m1535332681 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_JointOrientations(System.IntPtr,Windows.Kinect.JointType[],Windows.Kinect.JointOrientation[],System.Int32)
extern "C"  int32_t Body_Windows_Kinect_Body_get_JointOrientations_m232738359 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, JointTypeU5BU5D_t293115463* ___outKeys1, JointOrientationU5BU5D_t1079537595* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_JointOrientations_Length(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_JointOrientations_Length_m2334535325 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.JointOrientation> Windows.Kinect.Body::get_JointOrientations()
extern "C"  Dictionary_2_t3471229903 * Body_get_JointOrientations_m4126232466 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Joints(System.IntPtr,Windows.Kinect.JointType[],Windows.Kinect.Joint[],System.Int32)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Joints_m2899553681 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, JointTypeU5BU5D_t293115463* ___outKeys1, JointU5BU5D_t2486692809* ___outValues2, int32_t ___outCollectionSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_Joints_Length(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_Joints_Length_m2533008885 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.Joint> Windows.Kinect.Body::get_Joints()
extern "C"  Dictionary_2_t3365632601 * Body_get_Joints_m1423282058 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingState Windows.Kinect.Body::Windows_Kinect_Body_get_LeanTrackingState(System.IntPtr)
extern "C"  int32_t Body_Windows_Kinect_Body_get_LeanTrackingState_m2757127563 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingState Windows.Kinect.Body::get_LeanTrackingState()
extern "C"  int32_t Body_get_LeanTrackingState_m4007211657 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Windows.Kinect.Body::Windows_Kinect_Body_get_TrackingId(System.IntPtr)
extern "C"  uint64_t Body_Windows_Kinect_Body_get_TrackingId_m3045792777 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pNative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Windows.Kinect.Body::get_TrackingId()
extern "C"  uint64_t Body_get_TrackingId_m2229272331 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::Windows_Kinect_Body_get_JointCount()
extern "C"  int32_t Body_Windows_Kinect_Body_get_JointCount_m648144324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Body::get_JointCount()
extern "C"  int32_t Body_get_JointCount_m205630884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Body::__EventCleanup()
extern "C"  void Body___EventCleanup_m930614838 (Body_t3417228682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
