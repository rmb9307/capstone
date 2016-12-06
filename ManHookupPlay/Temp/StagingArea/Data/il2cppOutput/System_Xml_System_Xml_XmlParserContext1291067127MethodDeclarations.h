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

// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1467853467;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_XmlNamespaceManager1467853467.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"

// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.Xml.XmlSpace)
extern "C"  void XmlParserContext__ctor_m857121144 (XmlParserContext_t1291067127 * __this, XmlNameTable_t1216706026 * ___nt0, XmlNamespaceManager_t1467853467 * ___nsMgr1, String_t* ___xmlLang2, int32_t ___xmlSpace3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,System.String,System.String,System.String,System.String,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m4064652205 (XmlParserContext_t1291067127 * __this, XmlNameTable_t1216706026 * ___nt0, XmlNamespaceManager_t1467853467 * ___nsMgr1, String_t* ___docTypeName2, String_t* ___pubId3, String_t* ___sysId4, String_t* ___internalSubset5, String_t* ___baseURI6, String_t* ___xmlLang7, int32_t ___xmlSpace8, Encoding_t2012439129 * ___enc9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::.ctor(System.Xml.XmlNameTable,System.Xml.XmlNamespaceManager,Mono.Xml.DTDObjectModel,System.String,System.String,System.Xml.XmlSpace,System.Text.Encoding)
extern "C"  void XmlParserContext__ctor_m167099241 (XmlParserContext_t1291067127 * __this, XmlNameTable_t1216706026 * ___nt0, XmlNamespaceManager_t1467853467 * ___nsMgr1, DTDObjectModel_t3593115196 * ___dtd2, String_t* ___baseURI3, String_t* ___xmlLang4, int32_t ___xmlSpace5, Encoding_t2012439129 * ___enc6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_BaseURI()
extern "C"  String_t* XmlParserContext_get_BaseURI_m1880993733 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_BaseURI(System.String)
extern "C"  void XmlParserContext_set_BaseURI_m663391444 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_DocTypeName(System.String)
extern "C"  void XmlParserContext_set_DocTypeName_m3407771698 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C"  DTDObjectModel_t3593115196 * XmlParserContext_get_Dtd_m613804278 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Dtd(Mono.Xml.DTDObjectModel)
extern "C"  void XmlParserContext_set_Dtd_m3742115955 (XmlParserContext_t1291067127 * __this, DTDObjectModel_t3593115196 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_Encoding(System.Text.Encoding)
extern "C"  void XmlParserContext_set_Encoding_m493475469 (XmlParserContext_t1291067127 * __this, Encoding_t2012439129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_InternalSubset()
extern "C"  String_t* XmlParserContext_get_InternalSubset_m2001938359 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_InternalSubset(System.String)
extern "C"  void XmlParserContext_set_InternalSubset_m455417684 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t1467853467 * XmlParserContext_get_NamespaceManager_m3379582127 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlParserContext::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlParserContext_get_NameTable_m844308283 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_PublicId(System.String)
extern "C"  void XmlParserContext_set_PublicId_m2325575695 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_SystemId(System.String)
extern "C"  void XmlParserContext_set_SystemId_m227114249 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlParserContext::get_XmlLang()
extern "C"  String_t* XmlParserContext_get_XmlLang_m1884214031 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlLang(System.String)
extern "C"  void XmlParserContext_set_XmlLang_m1537642954 (XmlParserContext_t1291067127 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlParserContext::get_XmlSpace()
extern "C"  int32_t XmlParserContext_get_XmlSpace_m4263973404 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::set_XmlSpace(System.Xml.XmlSpace)
extern "C"  void XmlParserContext_set_XmlSpace_m3019056463 (XmlParserContext_t1291067127 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PushScope()
extern "C"  void XmlParserContext_PushScope_m2997966602 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserContext::PopScope()
extern "C"  void XmlParserContext_PopScope_m706589621 (XmlParserContext_t1291067127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
