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

// System.Xml.XmlNotation
struct XmlNotation_t1447424459;
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

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlNotation__ctor_m3846391158 (XmlNotation_t1447424459 * __this, String_t* ___localName0, String_t* ___prefix1, String_t* ___publicId2, String_t* ___systemId3, XmlDocument_t730752740 * ___doc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C"  bool XmlNotation_get_IsReadOnly_m1534547455 (XmlNotation_t1447424459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C"  String_t* XmlNotation_get_LocalName_m2570674314 (XmlNotation_t1447424459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C"  String_t* XmlNotation_get_Name_m2599044217 (XmlNotation_t1447424459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C"  int32_t XmlNotation_get_NodeType_m2947129019 (XmlNotation_t1447424459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlNotation_CloneNode_m374283752 (XmlNotation_t1447424459 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlNotation_WriteContentTo_m461936707 (XmlNotation_t1447424459 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlNotation_WriteTo_m4058629542 (XmlNotation_t1447424459 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
