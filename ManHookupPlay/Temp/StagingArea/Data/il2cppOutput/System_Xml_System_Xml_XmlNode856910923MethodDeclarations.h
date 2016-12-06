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

// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3012627841;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t991860617;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1467853467;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C"  void XmlNode__ctor_m3138959590 (XmlNode_t856910923 * __this, XmlDocument_t730752740 * ___ownerDocument0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C"  void XmlNode__cctor_m3750010027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  Il2CppObject * XmlNode_System_ICloneable_Clone_m132385191 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * XmlNode_System_Collections_IEnumerable_GetEnumerator_m2007552963 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C"  XmlAttributeCollection_t3012627841 * XmlNode_get_Attributes_m755677596 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C"  String_t* XmlNode_get_BaseURI_m422552911 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C"  String_t* XmlNode_get_ChildrenBaseURI_m3449017104 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C"  XmlNodeList_t991860617 * XmlNode_get_ChildNodes_m4017826864 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C"  XmlNode_t856910923 * XmlNode_get_FirstChild_m4080652229 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C"  bool XmlNode_get_HasChildNodes_m3749073246 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C"  String_t* XmlNode_get_InnerText_m598702679 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C"  void XmlNode_AppendChildValues_m1946715878 (XmlNode_t856910923 * __this, StringBuilder_t243639308 ** ___builder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C"  bool XmlNode_get_IsReadOnly_m910873471 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C"  XmlNode_t856910923 * XmlNode_get_LastChild_m2601998127 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C"  String_t* XmlNode_get_NamespaceURI_m618461311 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C"  XmlNode_t856910923 * XmlNode_get_NextSibling_m1361451800 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C"  XmlDocument_t730752740 * XmlNode_get_OwnerDocument_m574628624 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlNode_get_ParentNode_m33805637 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C"  String_t* XmlNode_get_Prefix_m723673728 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C"  XmlNode_t856910923 * XmlNode_get_PreviousSibling_m210086804 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C"  String_t* XmlNode_get_Value_m1127798053 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C"  void XmlNode_set_Value_m288584782 (XmlNode_t856910923 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C"  String_t* XmlNode_get_XmlLang_m425773209 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C"  int32_t XmlNode_get_XmlSpace_m953945032 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlNode_set_SchemaInfo_m4198563866 (XmlNode_t856910923 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * XmlNode_AppendChild_m2775439089 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t856910923 * XmlNode_AppendChild_m2281544812 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, bool ___checkNodeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t856910923 * XmlNode_Clone_m2225215247 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  Il2CppObject * XmlNode_GetEnumerator_m1468861310 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * XmlNode_InsertBefore_m1256162142 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, XmlNode_t856910923 * ___refChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C"  bool XmlNode_IsAncestor_m538990404 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C"  XmlNode_t856910923 * XmlNode_InsertBefore_m2377826622 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, XmlNode_t856910923 * ___refChild1, bool ___checkNodeType2, bool ___raiseEvent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlNode_CheckNodeInsertion_m1447703263 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___newChild0, XmlNode_t856910923 * ___refChild1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C"  void XmlNode_RemoveAll_m47387677 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * XmlNode_RemoveChild_m3121887431 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___oldChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C"  void XmlNode_CheckNodeRemoval_m553592100 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t856910923 * XmlNode_RemoveChild_m2811794390 (XmlNode_t856910923 * __this, XmlNode_t856910923 * ___oldChild0, bool ___checkNodeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C"  XmlElement_t280387747 * XmlNode_get_AttributeOwnerElement_m2342700900 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C"  void XmlNode_set_AttributeOwnerElement_m1563997167 (XmlNode_t856910923 * __this, XmlElement_t280387747 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C"  XmlNamespaceManager_t1467853467 * XmlNode_ConstructNamespaceManager_m2096658635 (XmlNode_t856910923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
