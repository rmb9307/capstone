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

// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1204852177;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.String
struct String_t;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3691706913;
// System.Collections.IList
struct IList_t1751339649;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDAttributeDefinition3691706913.h"

// System.Void Mono.Xml.DTDAttListDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttListDeclaration__ctor_m1247135746 (DTDAttListDeclaration_t1204852177 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttListDeclaration::get_Name()
extern "C"  String_t* DTDAttListDeclaration_get_Name_m3744810115 (DTDAttListDeclaration_t1204852177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::set_Name(System.String)
extern "C"  void DTDAttListDeclaration_set_Name_m1965188718 (DTDAttListDeclaration_t1204852177 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.Int32)
extern "C"  DTDAttributeDefinition_t3691706913 * DTDAttListDeclaration_get_Item_m3277382479 (DTDAttListDeclaration_t1204852177 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::get_Item(System.String)
extern "C"  DTDAttributeDefinition_t3691706913 * DTDAttListDeclaration_get_Item_m3271307460 (DTDAttListDeclaration_t1204852177 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.Int32)
extern "C"  DTDAttributeDefinition_t3691706913 * DTDAttListDeclaration_Get_m1876834279 (DTDAttListDeclaration_t1204852177 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition Mono.Xml.DTDAttListDeclaration::Get(System.String)
extern "C"  DTDAttributeDefinition_t3691706913 * DTDAttListDeclaration_Get_m2803986220 (DTDAttListDeclaration_t1204852177 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Mono.Xml.DTDAttListDeclaration::get_Definitions()
extern "C"  Il2CppObject * DTDAttListDeclaration_get_Definitions_m1730561771 (DTDAttListDeclaration_t1204852177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclaration::Add(Mono.Xml.DTDAttributeDefinition)
extern "C"  void DTDAttListDeclaration_Add_m3535383838 (DTDAttListDeclaration_t1204852177 * __this, DTDAttributeDefinition_t3691706913 * ___def0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
