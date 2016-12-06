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

// cowboyMove
struct cowboyMove_t270083026;
// BodyRecording/Frame/Body
struct Body_t2012110084;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2011134424.h"
#include "AssemblyU2DCSharp_BodyRecording_Frame_Body2012110084.h"

// System.Void cowboyMove::.ctor()
extern "C"  void cowboyMove__ctor_m109617417 (cowboyMove_t270083026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cowboyMove::Start()
extern "C"  void cowboyMove_Start_m3351722505 (cowboyMove_t270083026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cowboyMove::FixedUpdate()
extern "C"  void cowboyMove_FixedUpdate_m2112738244 (cowboyMove_t270083026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cowboyMove::OnApplicationQuit()
extern "C"  void cowboyMove_OnApplicationQuit_m826460423 (cowboyMove_t270083026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 cowboyMove::GetVector3FromJoint(Windows.Kinect.Joint)
extern "C"  Vector3_t4282066566  cowboyMove_GetVector3FromJoint_m1728349318 (Il2CppObject * __this /* static, unused */, Joint_t2011134424  ___joint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cowboyMove::moveModelWithRecord(BodyRecording/Frame/Body)
extern "C"  void cowboyMove_moveModelWithRecord_m381537586 (cowboyMove_t270083026 * __this, Body_t2012110084 * ___body0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
