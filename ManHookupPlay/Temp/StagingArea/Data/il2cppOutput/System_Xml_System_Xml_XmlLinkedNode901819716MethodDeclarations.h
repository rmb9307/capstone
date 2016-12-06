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

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlNode
struct XmlNode_t856910923;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlLinkedNode__ctor_m3309127501 (XmlLinkedNode_t901819716 * __this, XmlDocument_t730752740 * ___doc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C"  bool XmlLinkedNode_get_IsRooted_m3473732567 (XmlLinkedNode_t901819716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C"  XmlNode_t856910923 * XmlLinkedNode_get_NextSibling_m596801151 (XmlLinkedNode_t901819716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t901819716 * XmlLinkedNode_get_NextLinkedSibling_m979414879 (XmlLinkedNode_t901819716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C"  void XmlLinkedNode_set_NextLinkedSibling_m3046998628 (XmlLinkedNode_t901819716 * __this, XmlLinkedNode_t901819716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C"  XmlNode_t856910923 * XmlLinkedNode_get_PreviousSibling_m3505912699 (XmlLinkedNode_t901819716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
