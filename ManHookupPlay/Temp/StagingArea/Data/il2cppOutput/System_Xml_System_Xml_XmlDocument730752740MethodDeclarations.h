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

// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.XmlImplementation
struct XmlImplementation_t3716119739;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t901819716;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t280387747;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t838630462;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3943949348;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlAttribute
struct XmlAttribute_t6647939;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t68050113;
// System.Xml.XmlComment
struct XmlComment_t2893623302;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t1144967508;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t2288721231;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t2161892066;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t707263863;
// System.Xml.XmlText
struct XmlText_t857080694;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t4130926598;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t1240444833;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlImplementation3716119739.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_XmlLinkedNode901819716.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_XmlAttribute6647939.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m467220425 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C"  void XmlDocument__ctor_m629872438 (XmlDocument_t730752740 * __this, XmlImplementation_t3716119739 * ___imp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m1234628775 (XmlDocument_t730752740 * __this, XmlNameTable_t1216706026 * ___nt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C"  void XmlDocument__ctor_m2367420544 (XmlDocument_t730752740 * __this, XmlImplementation_t3716119739 * ___impl0, XmlNameTable_t1216706026 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C"  void XmlDocument__cctor_m1116835076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t901819716 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m2484323862 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m1766041627 (XmlDocument_t730752740 * __this, XmlLinkedNode_t901819716 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C"  String_t* XmlDocument_get_BaseURI_m2484198934 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C"  XmlElement_t280387747 * XmlDocument_get_DocumentElement_m2125605639 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C"  XmlDocumentType_t838630462 * XmlDocument_get_DocumentType_m3053838196 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C"  bool XmlDocument_get_IsReadOnly_m1661998808 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C"  String_t* XmlDocument_get_LocalName_m3683164305 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C"  String_t* XmlDocument_get_Name_m4042710034 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C"  XmlNameEntryCache_t3943949348 * XmlDocument_get_NameCache_m803787936 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlDocument_get_NameTable_m4115788656 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C"  int32_t XmlDocument_get_NodeType_m2013184468 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C"  XmlDocument_t730752740 * XmlDocument_get_OwnerDocument_m2156946327 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C"  bool XmlDocument_get_PreserveWhitespace_m3263510741 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C"  XmlResolver_t3822670287 * XmlDocument_get_Resolver_m3689419796 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C"  String_t* XmlDocument_get_XmlLang_m2487419232 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C"  int32_t XmlDocument_get_XmlSpace_m2822725217 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C"  XmlNode_t856910923 * XmlDocument_get_ParentNode_m2530596254 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlDocument_set_SchemaInfo_m1833755507 (XmlDocument_t730752740 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C"  void XmlDocument_AddIdenticalAttribute_m1995420520 (XmlDocument_t730752740 * __this, XmlAttribute_t6647939 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlDocument_CloneNode_m1087324463 (XmlDocument_t730752740 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C"  XmlAttribute_t6647939 * XmlDocument_CreateAttribute_m4110510259 (XmlDocument_t730752740 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C"  XmlAttribute_t6647939 * XmlDocument_CreateAttribute_m1651205547 (XmlDocument_t730752740 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  XmlAttribute_t6647939 * XmlDocument_CreateAttribute_m3939720907 (XmlDocument_t730752740 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, bool ___atomizedNames3, bool ___checkNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C"  XmlCDataSection_t68050113 * XmlDocument_CreateCDataSection_m1753360379 (XmlDocument_t730752740 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C"  XmlComment_t2893623302 * XmlDocument_CreateComment_m1687987885 (XmlDocument_t730752740 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C"  XmlDocumentFragment_t1144967508 * XmlDocument_CreateDocumentFragment_m1451172871 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C"  XmlDocumentType_t838630462 * XmlDocument_CreateDocumentType_m2158130191 (XmlDocument_t730752740 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C"  XmlDocumentType_t838630462 * XmlDocument_CreateDocumentType_m4119480019 (XmlDocument_t730752740 * __this, DTDObjectModel_t3593115196 * ___dtd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C"  XmlElement_t280387747 * XmlDocument_CreateElement_m1870044395 (XmlDocument_t730752740 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C"  XmlElement_t280387747 * XmlDocument_CreateElement_m4112835378 (XmlDocument_t730752740 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceURI2, bool ___nameAtomized3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C"  XmlEntityReference_t2288721231 * XmlDocument_CreateEntityReference_m4085193371 (XmlDocument_t730752740 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C"  XmlProcessingInstruction_t2161892066 * XmlDocument_CreateProcessingInstruction_m1557261361 (XmlDocument_t730752740 * __this, String_t* ___target0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C"  XmlSignificantWhitespace_t707263863 * XmlDocument_CreateSignificantWhitespace_m842262219 (XmlDocument_t730752740 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C"  XmlText_t857080694 * XmlDocument_CreateTextNode_m1905564857 (XmlDocument_t730752740 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C"  XmlWhitespace_t4130926598 * XmlDocument_CreateWhitespace_m3724727131 (XmlDocument_t730752740 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C"  XmlDeclaration_t1240444833 * XmlDocument_CreateXmlDeclaration_m1494345414 (XmlDocument_t730752740 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C"  XmlAttribute_t6647939 * XmlDocument_GetIdenticalAttribute_m2385588022 (XmlDocument_t730752740 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C"  XmlNode_t856910923 * XmlDocument_ImportNode_m873297840 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, bool ___deep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanged_m3336474724 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___parent1, String_t* ___oldValue2, String_t* ___newValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C"  void XmlDocument_onNodeChanging_m1929815861 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___parent1, String_t* ___oldValue2, String_t* ___newValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserted_m1032282674 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___newParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeInserting_m2600318647 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___newParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoved_m3590403008 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___oldParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C"  void XmlDocument_onNodeRemoving_m297670377 (XmlDocument_t730752740 * __this, XmlNode_t856910923 * ___node0, XmlNode_t856910923 * ___oldParent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C"  void XmlDocument_ParseName_m632676893 (XmlDocument_t730752740 * __this, String_t* ___name0, String_t** ___prefix1, String_t** ___localName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C"  XmlAttribute_t6647939 * XmlDocument_ReadAttributeNode_m4102855027 (XmlDocument_t730752740 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C"  void XmlDocument_ReadAttributeNodeValue_m2731376881 (XmlDocument_t730752740 * __this, XmlReader_t4123196108 * ___reader0, XmlAttribute_t6647939 * ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C"  XmlNode_t856910923 * XmlDocument_ReadNode_m1929665725 (XmlDocument_t730752740 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C"  XmlNode_t856910923 * XmlDocument_ReadNodeCore_m1324316476 (XmlDocument_t730752740 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C"  String_t* XmlDocument_MakeReaderErrorMessage_m666557070 (XmlDocument_t730752740 * __this, String_t* ___message0, XmlReader_t4123196108 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C"  void XmlDocument_RemoveIdenticalAttribute_m942731036 (XmlDocument_t730752740 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteContentTo(System.Xml.XmlWriter)
extern "C"  void XmlDocument_WriteContentTo_m3437851292 (XmlDocument_t730752740 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::WriteTo(System.Xml.XmlWriter)
extern "C"  void XmlDocument_WriteTo_m3448302957 (XmlDocument_t730752740 * __this, XmlWriter_t4278601340 * ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C"  void XmlDocument_AddDefaultNameTableKeys_m1442151358 (XmlDocument_t730752740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C"  void XmlDocument_CheckIdTableUpdate_m827207136 (XmlDocument_t730752740 * __this, XmlAttribute_t6647939 * ___attr0, String_t* ___oldValue1, String_t* ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
