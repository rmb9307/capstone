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

// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1467853467;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C"  void XmlNamespaceManager__ctor_m1896995422 (XmlNamespaceManager_t1467853467 * __this, XmlNameTable_t1216706026 * ___nameTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::InitData()
extern "C"  void XmlNamespaceManager_InitData_m1296972012 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowDecls()
extern "C"  void XmlNamespaceManager_GrowDecls_m3137163462 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::GrowScopes()
extern "C"  void XmlNamespaceManager_GrowScopes_m1707029604 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace()
extern "C"  String_t* XmlNamespaceManager_get_DefaultNamespace_m514922136 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlNamespaceManager_get_NameTable_m814846873 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_AddNamespace_m2643999474 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_AddNamespace_m3536885323 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, String_t* ___uri1, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::IsValidDeclaration(System.String,System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_IsValidDeclaration_m2680273244 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, String_t* ___uri1, bool ___throwException2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNamespaceManager::GetEnumerator()
extern "C"  Il2CppObject * XmlNamespaceManager_GetEnumerator_m3069853230 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m1234724084 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupNamespace_m1482352649 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, bool ___atomizedNames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::CompareString(System.String,System.String,System.Boolean)
extern "C"  bool XmlNamespaceManager_CompareString_m3836974429 (XmlNamespaceManager_t1467853467 * __this, String_t* ___s10, String_t* ___s21, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixExclusive_m307859866 (XmlNamespaceManager_t1467853467 * __this, String_t* ___uri0, bool ___atomizedName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNamespaceManager::LookupPrefixCore(System.String,System.Boolean,System.Boolean)
extern "C"  String_t* XmlNamespaceManager_LookupPrefixCore_m1181901506 (XmlNamespaceManager_t1467853467 * __this, String_t* ___uri0, bool ___atomizedName1, bool ___excludeOverriden2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::IsOverriden(System.Int32)
extern "C"  bool XmlNamespaceManager_IsOverriden_m2085253169 (XmlNamespaceManager_t1467853467 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNamespaceManager::PopScope()
extern "C"  bool XmlNamespaceManager_PopScope_m3387996253 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::PushScope()
extern "C"  void XmlNamespaceManager_PushScope_m629311082 (XmlNamespaceManager_t1467853467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m609388951 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, String_t* ___uri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String,System.Boolean)
extern "C"  void XmlNamespaceManager_RemoveNamespace_m2507442438 (XmlNamespaceManager_t1467853467 * __this, String_t* ___prefix0, String_t* ___uri1, bool ___atomizedNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
