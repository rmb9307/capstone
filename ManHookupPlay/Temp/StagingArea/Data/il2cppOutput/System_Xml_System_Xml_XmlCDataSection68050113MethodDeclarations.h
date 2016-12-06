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

// System.Xml.XmlCDataSection
struct XmlCDataSection_t68050113;
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

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C"  void XmlCDataSection__ctor_m2813634932 (XmlCDataSection_t68050113 * __this, String_t* ___data0, XmlDocument_t730752740 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C"  String_t* XmlCDataSection_get_LocalName_m1335883988 (XmlCDataSection_t68050113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C"  String_t* XmlCDataSection_get_Name_m1407460847 (XmlCDataSection_t68050113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C"  int32_t XmlCDataSection_get_NodeType_m174249137 (XmlCDataSection_t68050113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlCDataSection_get_ParentNode_m2712209467 (XmlCDataSection_t68050113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlCDataSection_CloneNode_m3699289906 (XmlCDataSection_t68050113 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlCDataSection_WriteContentTo_m1236188089 (XmlCDataSection_t68050113 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlCDataSection_WriteTo_m2361719536 (XmlCDataSection_t68050113 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
