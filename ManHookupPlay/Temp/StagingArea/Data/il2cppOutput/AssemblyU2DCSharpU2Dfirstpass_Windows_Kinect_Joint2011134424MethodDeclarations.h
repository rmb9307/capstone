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

// System.Object
struct Il2CppObject;
// Windows.Kinect.Joint
struct Joint_t2011134424;
struct Joint_t2011134424_marshaled_pinvoke;
struct Joint_t2011134424_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2011134424.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Camer1874961815.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Tracki554552936.h"
#include "mscorlib_System_Object4170816371.h"

// Windows.Kinect.JointType Windows.Kinect.Joint::get_JointType()
extern "C"  int32_t Joint_get_JointType_m1710438557 (Joint_t2011134424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Joint::set_JointType(Windows.Kinect.JointType)
extern "C"  void Joint_set_JointType_m1366402432 (Joint_t2011134424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.CameraSpacePoint Windows.Kinect.Joint::get_Position()
extern "C"  CameraSpacePoint_t1874961815  Joint_get_Position_m617734619 (Joint_t2011134424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Joint::set_Position(Windows.Kinect.CameraSpacePoint)
extern "C"  void Joint_set_Position_m3598039838 (Joint_t2011134424 * __this, CameraSpacePoint_t1874961815  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.TrackingState Windows.Kinect.Joint::get_TrackingState()
extern "C"  int32_t Joint_get_TrackingState_m2104578313 (Joint_t2011134424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.Joint::set_TrackingState(Windows.Kinect.TrackingState)
extern "C"  void Joint_set_TrackingState_m2438910784 (Joint_t2011134424 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.Joint::GetHashCode()
extern "C"  int32_t Joint_GetHashCode_m1750256219 (Joint_t2011134424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Joint::Equals(System.Object)
extern "C"  bool Joint_Equals_m1870247991 (Joint_t2011134424 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Joint::Equals(Windows.Kinect.Joint)
extern "C"  bool Joint_Equals_m3611549456 (Joint_t2011134424 * __this, Joint_t2011134424  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Joint::op_Equality(Windows.Kinect.Joint,Windows.Kinect.Joint)
extern "C"  bool Joint_op_Equality_m2084424554 (Il2CppObject * __this /* static, unused */, Joint_t2011134424  ___a0, Joint_t2011134424  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.Joint::op_Inequality(Windows.Kinect.Joint,Windows.Kinect.Joint)
extern "C"  bool Joint_op_Inequality_m1155801701 (Il2CppObject * __this /* static, unused */, Joint_t2011134424  ___a0, Joint_t2011134424  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Joint_t2011134424;
struct Joint_t2011134424_marshaled_pinvoke;

extern "C" void Joint_t2011134424_marshal_pinvoke(const Joint_t2011134424& unmarshaled, Joint_t2011134424_marshaled_pinvoke& marshaled);
extern "C" void Joint_t2011134424_marshal_pinvoke_back(const Joint_t2011134424_marshaled_pinvoke& marshaled, Joint_t2011134424& unmarshaled);
extern "C" void Joint_t2011134424_marshal_pinvoke_cleanup(Joint_t2011134424_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Joint_t2011134424;
struct Joint_t2011134424_marshaled_com;

extern "C" void Joint_t2011134424_marshal_com(const Joint_t2011134424& unmarshaled, Joint_t2011134424_marshaled_com& marshaled);
extern "C" void Joint_t2011134424_marshal_com_back(const Joint_t2011134424_marshaled_com& marshaled, Joint_t2011134424& unmarshaled);
extern "C" void Joint_t2011134424_marshal_com_cleanup(Joint_t2011134424_marshaled_com& marshaled);
