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

// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3012627841;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlAttribute
struct XmlAttribute_t6647939;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlAttribute6647939.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C"  void XmlElement__ctor_m1054306151 (XmlElement_t280387747 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, XmlDocument_t730752740 * ___doc3, bool ___atomizedNames4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t901819716 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m737144701 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m2196767736 (XmlElement_t280387747 * __this, XmlLinkedNode_t901819716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C"  XmlAttributeCollection_t3012627841 * XmlElement_get_Attributes_m925376964 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_HasAttributes()
extern "C"  bool XmlElement_get_HasAttributes_m2492649460 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C"  String_t* XmlElement_get_InnerText_m535347169 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C"  bool XmlElement_get_IsEmpty_m1811931046 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C"  void XmlElement_set_IsEmpty_m3658279841 (XmlElement_t280387747 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C"  String_t* XmlElement_get_LocalName_m2357904148 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C"  String_t* XmlElement_get_Name_m1366553519 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C"  String_t* XmlElement_get_NamespaceURI_m2980073141 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C"  XmlNode_t856910923 * XmlElement_get_NextSibling_m114548824 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C"  int32_t XmlElement_get_NodeType_m1843892847 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C"  XmlDocument_t730752740 * XmlElement_get_OwnerDocument_m3486800766 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C"  String_t* XmlElement_get_Prefix_m165157174 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlElement_get_ParentNode_m686319621 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlElement_set_SchemaInfo_m260485366 (XmlElement_t280387747 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlElement_CloneNode_m252539560 (XmlElement_t280387747 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C"  void XmlElement_RemoveAll_m891345345 (XmlElement_t280387747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C"  void XmlElement_SetAttribute_m3688654406 (XmlElement_t280387747 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t6647939 * XmlElement_SetAttributeNode_m2917993461 (XmlElement_t280387747 * __this, XmlAttribute_t6647939 * ___newAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlElement_WriteContentTo_m1801530527 (XmlElement_t280387747 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlElement_WriteTo_m1695490250 (XmlElement_t280387747 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
