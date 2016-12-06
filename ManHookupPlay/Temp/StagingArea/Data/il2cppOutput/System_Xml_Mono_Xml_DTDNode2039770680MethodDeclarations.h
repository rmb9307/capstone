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

// Mono.Xml.DTDNode
struct DTDNode_t2039770680;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.Xml.XmlException
struct XmlException_t1475188278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"

// System.Void Mono.Xml.DTDNode::.ctor()
extern "C"  void DTDNode__ctor_m2554517745 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDNode::get_BaseURI()
extern "C"  String_t* DTDNode_get_BaseURI_m1049621246 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_BaseURI(System.String)
extern "C"  void DTDNode_set_BaseURI_m1446023701 (DTDNode_t2039770680 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDNode::get_IsInternalSubset()
extern "C"  bool DTDNode_get_IsInternalSubset_m3131993229 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::set_IsInternalSubset(System.Boolean)
extern "C"  void DTDNode_set_IsInternalSubset_m3109582768 (DTDNode_t2039770680 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LineNumber()
extern "C"  int32_t DTDNode_get_LineNumber_m4112711291 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDNode::get_LinePosition()
extern "C"  int32_t DTDNode_get_LinePosition_m2720230427 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNode::SetRoot(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNode_SetRoot_m970259879 (DTDNode_t2039770680 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::get_Root()
extern "C"  DTDObjectModel_t3593115196 * DTDNode_get_Root_m1036806329 (DTDNode_t2039770680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml.DTDNode::NotWFError(System.String)
extern "C"  XmlException_t1475188278 * DTDNode_NotWFError_m2314023332 (DTDNode_t2039770680 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
