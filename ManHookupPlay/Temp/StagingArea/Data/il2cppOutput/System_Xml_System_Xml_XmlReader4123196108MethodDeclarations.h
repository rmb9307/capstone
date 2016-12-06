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

// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t870027186;
// System.String
struct String_t;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4229224207;
// System.Xml.XmlException
struct XmlException_t1475188278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C"  void XmlReader__ctor_m2228312417 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C"  void XmlReader_System_IDisposable_Dispose_m2040909022 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C"  XmlReaderBinarySupport_t870027186 * XmlReader_get_Binary_m2949076662 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C"  bool XmlReader_get_CanResolveEntity_m176347283 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C"  bool XmlReader_get_HasAttributes_m2708838623 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C"  bool XmlReader_get_IsDefault_m2141189125 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C"  String_t* XmlReader_get_Item_m3299302272 (XmlReader_t4123196108 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Name()
extern "C"  String_t* XmlReader_get_Name_m1902891066 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlReader_get_SchemaInfo_m2040468280 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C"  XmlReaderSettings_t4229224207 * XmlReader_get_Settings_m1880490585 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C"  int32_t XmlReader_get_XmlSpace_m3517476169 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C"  void XmlReader_Dispose_m2125359701 (XmlReader_t4123196108 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsStartElement()
extern "C"  bool XmlReader_IsStartElement_m4062927 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsStartElement(System.String,System.String)
extern "C"  bool XmlReader_IsStartElement_m2210894735 (XmlReader_t4123196108 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C"  void XmlReader_MoveToAttribute_m2304680352 (XmlReader_t4123196108 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C"  bool XmlReader_IsContent_m3433421353 (XmlReader_t4123196108 * __this, int32_t ___nodeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C"  int32_t XmlReader_MoveToContent_m992177624 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadElementString()
extern "C"  String_t* XmlReader_ReadElementString_m3442472627 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C"  void XmlReader_ReadEndElement_m3906913114 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C"  String_t* XmlReader_ReadOuterXml_m3945151928 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C"  void XmlReader_ReadStartElement_m3791794611 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C"  String_t* XmlReader_ReadString_m3848699309 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Skip()
extern "C"  void XmlReader_Skip_m722576770 (XmlReader_t4123196108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C"  XmlException_t1475188278 * XmlReader_XmlError_m2943861129 (XmlReader_t4123196108 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
