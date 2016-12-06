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

// System.Xml.XmlEntity
struct XmlEntity_t3759900140;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlEntity__ctor_m2872251573 (XmlEntity_t3759900140 * __this, String_t* ___name0, String_t* ___NDATA1, String_t* ___publicId2, String_t* ___systemId3, XmlDocument_t730752740 * ___doc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t901819716 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m640766286 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1732330643 (XmlEntity_t3759900140 * __this, XmlLinkedNode_t901819716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C"  String_t* XmlEntity_get_BaseURI_m3195431374 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C"  String_t* XmlEntity_get_InnerText_m2455182102 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C"  bool XmlEntity_get_IsReadOnly_m1672029536 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C"  String_t* XmlEntity_get_LocalName_m4277739081 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C"  String_t* XmlEntity_get_Name_m2360126298 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C"  int32_t XmlEntity_get_NodeType_m771016028 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C"  String_t* XmlEntity_get_SystemId_m1709840825 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlEntity_CloneNode_m3924773415 (XmlEntity_t3759900140 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlEntity_WriteContentTo_m1582172964 (XmlEntity_t3759900140 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlEntity_WriteTo_m571694565 (XmlEntity_t3759900140 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C"  void XmlEntity_SetEntityContent_m1743264951 (XmlEntity_t3759900140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
