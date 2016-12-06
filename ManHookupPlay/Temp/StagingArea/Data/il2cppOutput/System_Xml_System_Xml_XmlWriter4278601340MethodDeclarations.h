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

// System.Xml.XmlWriter
struct XmlWriter_t4278601340;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t233403071;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4123196108;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C"  void XmlWriter__ctor_m2911908785 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C"  void XmlWriter_System_IDisposable_Dispose_m3193799822 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C"  XmlWriterSettings_t233403071 * XmlWriter_get_Settings_m4235714649 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C"  String_t* XmlWriter_get_XmlLang_m4143028872 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C"  int32_t XmlWriter_get_XmlSpace_m767449337 (XmlWriter_t4278601340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C"  void XmlWriter_Dispose_m1200530597 (XmlWriter_t4278601340 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteAttribute_m1597931729 (XmlWriter_t4278601340 * __this, XmlReader_t4123196108 * ___reader0, bool ___defattr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1129629501 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m3920494777 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m1630990645 (XmlWriter_t4278601340 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteElementString_m4068882329 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteName(System.String)
extern "C"  void XmlWriter_WriteName_m1909117257 (XmlWriter_t4278601340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNameInternal(System.String)
extern "C"  void XmlWriter_WriteNameInternal_m1565509836 (XmlWriter_t4278601340 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C"  void XmlWriter_WriteNode_m817874929 (XmlWriter_t4278601340 * __this, XmlReader_t4123196108 * ___reader0, bool ___defattr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
extern "C"  void XmlWriter_WriteStartElement_m2273103734 (XmlWriter_t4278601340 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
