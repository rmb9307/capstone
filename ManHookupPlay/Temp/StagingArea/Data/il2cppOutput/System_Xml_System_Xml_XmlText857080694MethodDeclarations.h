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

// System.Xml.XmlText
struct XmlText_t857080694;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlText__ctor_m3630163679 (XmlText_t857080694 * __this, String_t* ___strData0, XmlDocument_t730752740 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_LocalName()
extern "C"  String_t* XmlText_get_LocalName_m1701888447 (XmlText_t857080694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Name()
extern "C"  String_t* XmlText_get_Name_m407778852 (XmlText_t857080694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C"  int32_t XmlText_get_NodeType_m1553072998 (XmlText_t857080694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Value()
extern "C"  String_t* XmlText_get_Value_m2560916442 (XmlText_t857080694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C"  void XmlText_set_Value_m2754943929 (XmlText_t857080694 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlText_get_ParentNode_m3503101872 (XmlText_t857080694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlText_CloneNode_m1762407261 (XmlText_t857080694 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlText_WriteContentTo_m878768302 (XmlText_t857080694 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlText_WriteTo_m1126645659 (XmlText_t857080694 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
