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

// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1144967508;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlDocumentFragment::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlDocumentFragment__ctor_m699232189 (XmlDocumentFragment_t1144967508 * __this, XmlDocument_t730752740 * ___doc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t901819716 * XmlDocumentFragment_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m3022121126 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlDocumentFragment_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m2559268267 (XmlDocumentFragment_t1144967508 * __this, XmlLinkedNode_t901819716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_LocalName()
extern "C"  String_t* XmlDocumentFragment_get_LocalName_m35198241 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentFragment::get_Name()
extern "C"  String_t* XmlDocumentFragment_get_Name_m653512066 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentFragment::get_NodeType()
extern "C"  int32_t XmlDocumentFragment_get_NodeType_m418101828 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocumentFragment::get_OwnerDocument()
extern "C"  XmlDocument_t730752740 * XmlDocumentFragment_get_OwnerDocument_m3120988711 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlDocumentFragment_get_ParentNode_m1372436494 (XmlDocumentFragment_t1144967508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentFragment::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlDocumentFragment_CloneNode_m2713132223 (XmlDocumentFragment_t1144967508 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentFragment_WriteContentTo_m130894604 (XmlDocumentFragment_t1144967508 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentFragment::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentFragment_WriteTo_m3694572285 (XmlDocumentFragment_t1144967508 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
