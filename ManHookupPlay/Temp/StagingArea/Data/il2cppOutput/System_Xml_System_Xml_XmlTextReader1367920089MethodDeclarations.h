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

// System.Xml.XmlTextReader
struct XmlTextReader_t1367920089;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.String
struct String_t;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t1609187425;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4229224207;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_XmlParserContext1291067127.h"
#include "System_Xml_Mono_Xml2_XmlTextReader1609187425.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_ConformanceLevel233510445.h"
#include "System_Xml_System_Xml_XmlTextReader1367920089.h"
#include "System_Xml_System_Xml_EntityHandling2742017190.h"
#include "System_Xml_System_Xml_WhitespaceHandling2567612992.h"
#include "System_Xml_System_Xml_XmlResolver3822670287.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C"  void XmlTextReader__ctor_m381613755 (XmlTextReader_t1367920089 * __this, TextReader_t2148718976 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2507856133 (XmlTextReader_t1367920089 * __this, TextReader_t2148718976 * ___input0, XmlNameTable_t1216706026 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m842598857 (XmlTextReader_t1367920089 * __this, String_t* ___url0, TextReader_t2148718976 * ___input1, XmlNameTable_t1216706026 * ___nt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m447354008 (XmlTextReader_t1367920089 * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_t1291067127 * ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C"  void XmlTextReader__ctor_m2217028766 (XmlTextReader_t1367920089 * __this, XmlTextReader_t1609187425 * ___entityContainer0, bool ___insideAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m889100115 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C"  XmlReader_t4123196108 * XmlTextReader_get_Current_m2403406005 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m2595174862 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m2087412417 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C"  bool XmlTextReader_get_CanResolveEntity_m3657888160 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m688655370 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m3722273181 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m2127445912 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m3604583258 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m328443516 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m2096402247 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m3573011021 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlTextReader_get_NameTable_m760026331 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m3572615753 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * XmlTextReader_get_ParserContext_m1687547253 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m1470115534 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m1846272056 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t4229224207 * XmlTextReader_get_Settings_m3906361190 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m3368634135 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m1704767574 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m645313284 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m519669391 (XmlTextReader_t1367920089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m3581168275 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m3329006646 (XmlTextReader_t1367920089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m21394147 (XmlTextReader_t1367920089 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t3822670287 * XmlTextReader_get_Resolver_m3306237705 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C"  void XmlTextReader_CopyProperties_m1514394023 (XmlTextReader_t1367920089 * __this, XmlTextReader_t1367920089 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m3876752438 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m4164281560 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m739651384 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m549008905 (XmlTextReader_t1367920089 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m1018541942 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m3261415883 (XmlTextReader_t1367920089 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m1361477835 (XmlTextReader_t1367920089 * __this, XmlResolver_t3822670287 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m1645492832 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m4282239242 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m1114364873 (XmlTextReader_t1367920089 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m2094018629 (XmlTextReader_t1367920089 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m1106482418 (XmlTextReader_t1367920089 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m2579033075 (XmlTextReader_t1367920089 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1483116772 (XmlTextReader_t1367920089 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m455946810 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m442233840 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m3598420775 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m3788181742 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m4117000515 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::ReadString()
extern "C"  String_t* XmlTextReader_ReadString_m834383226 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m1901828417 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C"  void XmlTextReader_CloseEntity_m2239871373 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m3366042767 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C"  TextReader_t2148718976 * XmlTextReader_GetRemainder_m2423594711 (XmlTextReader_t1367920089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
