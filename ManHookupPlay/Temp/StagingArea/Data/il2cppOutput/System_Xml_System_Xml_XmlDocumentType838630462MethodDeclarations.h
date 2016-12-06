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

// System.Xml.XmlDocumentType
struct XmlDocumentType_t838630462;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t977482698;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlDocument730752740.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m978796707 (XmlDocumentType_t838630462 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, XmlDocument_t730752740 * ___doc4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C"  void XmlDocumentType__ctor_m1497903455 (XmlDocumentType_t838630462 * __this, DTDObjectModel_t3593115196 * ___dtd0, XmlDocument_t730752740 * ___doc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C"  void XmlDocumentType_ImportFromDTD_m3660752114 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C"  DTDObjectModel_t3593115196 * XmlDocumentType_get_DTD_m1586388925 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C"  XmlNamedNodeMap_t977482698 * XmlDocumentType_get_Entities_m3166112270 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C"  String_t* XmlDocumentType_get_InternalSubset_m1333229984 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C"  bool XmlDocumentType_get_IsReadOnly_m1626547890 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C"  String_t* XmlDocumentType_get_LocalName_m2702123767 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C"  String_t* XmlDocumentType_get_Name_m1620439532 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C"  int32_t XmlDocumentType_get_NodeType_m2435078702 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C"  String_t* XmlDocumentType_get_PublicId_m1258052229 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C"  String_t* XmlDocumentType_get_SystemId_m4291413835 (XmlDocumentType_t838630462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlDocumentType_CloneNode_m1338362261 (XmlDocumentType_t838630462 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentType_WriteContentTo_m3632682358 (XmlDocumentType_t838630462 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDocumentType_WriteTo_m2019699667 (XmlDocumentType_t838630462 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
