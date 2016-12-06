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

// System.Xml.XmlComment
struct XmlComment_t2893623302;
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

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlComment__ctor_m1844436811 (XmlComment_t2893623302 * __this, String_t* ___comment0, XmlDocument_t730752740 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C"  String_t* XmlComment_get_LocalName_m2806662673 (XmlComment_t2893623302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C"  String_t* XmlComment_get_Name_m2300823186 (XmlComment_t2893623302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C"  int32_t XmlComment_get_NodeType_m3520936914 (XmlComment_t2893623302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlComment_CloneNode_m1339497829 (XmlComment_t2893623302 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlComment_WriteContentTo_m2834323906 (XmlComment_t2893623302 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlComment_WriteTo_m2136679687 (XmlComment_t2893623302 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
