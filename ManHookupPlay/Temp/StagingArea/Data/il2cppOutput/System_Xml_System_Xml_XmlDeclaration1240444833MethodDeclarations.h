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

// System.Xml.XmlDeclaration
struct XmlDeclaration_t1240444833;
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

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDeclaration__ctor_m2252524824 (XmlDeclaration_t1240444833 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, XmlDocument_t730752740 * ___doc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C"  String_t* XmlDeclaration_get_Encoding_m1176639093 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C"  void XmlDeclaration_set_Encoding_m63929174 (XmlDeclaration_t1240444833 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C"  String_t* XmlDeclaration_get_InnerText_m3794011171 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C"  String_t* XmlDeclaration_get_LocalName_m1321600854 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C"  String_t* XmlDeclaration_get_Name_m2196475437 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C"  int32_t XmlDeclaration_get_NodeType_m2969226861 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C"  String_t* XmlDeclaration_get_Standalone_m136847527 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C"  void XmlDeclaration_set_Standalone_m3609889828 (XmlDeclaration_t1240444833 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C"  String_t* XmlDeclaration_get_Value_m2175935729 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C"  void XmlDeclaration_set_Value_m2565088680 (XmlDeclaration_t1240444833 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C"  String_t* XmlDeclaration_get_Version_m3080109784 (XmlDeclaration_t1240444833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlDeclaration_CloneNode_m361680618 (XmlDeclaration_t1240444833 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDeclaration_WriteContentTo_m3793587229 (XmlDeclaration_t1240444833 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDeclaration_WriteTo_m3612087052 (XmlDeclaration_t1240444833 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C"  int32_t XmlDeclaration_SkipWhitespace_m4132483755 (XmlDeclaration_t1240444833 * __this, String_t* ___input0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C"  void XmlDeclaration_ParseInput_m4000959855 (XmlDeclaration_t1240444833 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
