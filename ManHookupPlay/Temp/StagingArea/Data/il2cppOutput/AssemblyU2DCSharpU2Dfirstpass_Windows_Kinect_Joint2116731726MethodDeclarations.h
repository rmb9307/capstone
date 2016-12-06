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
// Windows.Kinect.JointOrientation
struct JointOrientation_t2116731726;
struct JointOrientation_t2116731726_marshaled_pinvoke;
struct JointOrientation_t2116731726_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2116731726.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Joint2966433458.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Windows_Kinect_Vector266920927.h"
#include "mscorlib_System_Object4170816371.h"

// Windows.Kinect.JointType Windows.Kinect.JointOrientation::get_JointType()
extern "C"  int32_t JointOrientation_get_JointType_m2499274059 (JointOrientation_t2116731726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.JointOrientation::set_JointType(Windows.Kinect.JointType)
extern "C"  void JointOrientation_set_JointType_m2734744498 (JointOrientation_t2116731726 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Windows.Kinect.Vector4 Windows.Kinect.JointOrientation::get_Orientation()
extern "C"  Vector4_t266920927  JointOrientation_get_Orientation_m2049626026 (JointOrientation_t2116731726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Windows.Kinect.JointOrientation::set_Orientation(Windows.Kinect.Vector4)
extern "C"  void JointOrientation_set_Orientation_m676908561 (JointOrientation_t2116731726 * __this, Vector4_t266920927  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Windows.Kinect.JointOrientation::GetHashCode()
extern "C"  int32_t JointOrientation_GetHashCode_m2406806585 (JointOrientation_t2116731726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.JointOrientation::Equals(System.Object)
extern "C"  bool JointOrientation_Equals_m1780881057 (JointOrientation_t2116731726 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.JointOrientation::Equals(Windows.Kinect.JointOrientation)
extern "C"  bool JointOrientation_Equals_m2510687004 (JointOrientation_t2116731726 * __this, JointOrientation_t2116731726  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.JointOrientation::op_Equality(Windows.Kinect.JointOrientation,Windows.Kinect.JointOrientation)
extern "C"  bool JointOrientation_op_Equality_m225024178 (Il2CppObject * __this /* static, unused */, JointOrientation_t2116731726  ___a0, JointOrientation_t2116731726  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Windows.Kinect.JointOrientation::op_Inequality(Windows.Kinect.JointOrientation,Windows.Kinect.JointOrientation)
extern "C"  bool JointOrientation_op_Inequality_m3999888365 (Il2CppObject * __this /* static, unused */, JointOrientation_t2116731726  ___a0, JointOrientation_t2116731726  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct JointOrientation_t2116731726;
struct JointOrientation_t2116731726_marshaled_pinvoke;

extern "C" void JointOrientation_t2116731726_marshal_pinvoke(const JointOrientation_t2116731726& unmarshaled, JointOrientation_t2116731726_marshaled_pinvoke& marshaled);
extern "C" void JointOrientation_t2116731726_marshal_pinvoke_back(const JointOrientation_t2116731726_marshaled_pinvoke& marshaled, JointOrientation_t2116731726& unmarshaled);
extern "C" void JointOrientation_t2116731726_marshal_pinvoke_cleanup(JointOrientation_t2116731726_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct JointOrientation_t2116731726;
struct JointOrientation_t2116731726_marshaled_com;

extern "C" void JointOrientation_t2116731726_marshal_com(const JointOrientation_t2116731726& unmarshaled, JointOrientation_t2116731726_marshaled_com& marshaled);
extern "C" void JointOrientation_t2116731726_marshal_com_back(const JointOrientation_t2116731726_marshaled_com& marshaled, JointOrientation_t2116731726& unmarshaled);
extern "C" void JointOrientation_t2116731726_marshal_com_cleanup(JointOrientation_t2116731726_marshaled_com& marshaled);
