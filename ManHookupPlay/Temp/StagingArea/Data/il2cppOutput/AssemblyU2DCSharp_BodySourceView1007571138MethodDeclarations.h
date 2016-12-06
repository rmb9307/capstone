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

// BodySourceView
struct BodySourceView_t1007571138;
// BodyRecording/Frame/Body
struct Body_t2012110084;
// Windows.Kinect.Body
struct Body_t3417228682;
// BodyRecording
struct BodyRecording_t646269519;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Body3417228682.h"
#include "AssemblyU2DCSharp_BodyRecording_Frame_Body2012110084.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2011134424.h"

// System.Void BodySourceView::.ctor()
extern "C"  void BodySourceView__ctor_m3972609561 (BodySourceView_t1007571138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::Update()
extern "C"  void BodySourceView_Update_m323706900 (BodySourceView_t1007571138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::NewFrame()
extern "C"  void BodySourceView_NewFrame_m2129467256 (BodySourceView_t1007571138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyRecording/Frame/Body BodySourceView::AddBodyToFrame(Windows.Kinect.Body)
extern "C"  Body_t2012110084 * BodySourceView_AddBodyToFrame_m365543648 (BodySourceView_t1007571138 * __this, Body_t3417228682 * ___body0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::WriteFrame()
extern "C"  void BodySourceView_WriteFrame_m3269548505 (BodySourceView_t1007571138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyRecording BodySourceView::LoadRecording()
extern "C"  BodyRecording_t646269519 * BodySourceView_LoadRecording_m2034361662 (BodySourceView_t1007571138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject BodySourceView::CreateBodyObject(System.UInt64)
extern "C"  GameObject_t3674682005 * BodySourceView_CreateBodyObject_m2194130622 (BodySourceView_t1007571138 * __this, uint64_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::RefreshBodyRecordedData(BodyRecording/Frame/Body,UnityEngine.GameObject)
extern "C"  void BodySourceView_RefreshBodyRecordedData_m685087636 (BodySourceView_t1007571138 * __this, Body_t2012110084 * ___body0, GameObject_t3674682005 * ___bodyObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::RefreshBodyObject(Windows.Kinect.Body,UnityEngine.GameObject)
extern "C"  void BodySourceView_RefreshBodyObject_m1485984830 (BodySourceView_t1007571138 * __this, Body_t3417228682 * ___body0, GameObject_t3674682005 * ___bodyObject1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BodySourceView::GetVector3FromJoint(Windows.Kinect.Joint)
extern "C"  Vector3_t4282066566  BodySourceView_GetVector3FromJoint_m465633942 (Il2CppObject * __this /* static, unused */, Joint_t2011134424  ___joint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::toggleBubbles(System.Boolean)
extern "C"  void BodySourceView_toggleBubbles_m4055510017 (BodySourceView_t1007571138 * __this, bool ___showBubbles0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodySourceView::<Update>m__0(System.Int32)
extern "C"  void BodySourceView_U3CUpdateU3Em__0_m285872824 (BodySourceView_t1007571138 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
