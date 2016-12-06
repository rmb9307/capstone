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

// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t3329514151;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t3913042473;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDEntityDeclaration3913042473.h"

// System.Void Mono.Xml.DTDEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDEntityDeclarationCollection__ctor_m460986588 (DTDEntityDeclarationCollection_t3329514151 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration Mono.Xml.DTDEntityDeclarationCollection::get_Item(System.String)
extern "C"  DTDEntityDeclaration_t3913042473 * DTDEntityDeclarationCollection_get_Item_m2370831310 (DTDEntityDeclarationCollection_t3329514151 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDEntityDeclaration)
extern "C"  void DTDEntityDeclarationCollection_Add_m889264620 (DTDEntityDeclarationCollection_t3329514151 * __this, String_t* ___name0, DTDEntityDeclaration_t3913042473 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
