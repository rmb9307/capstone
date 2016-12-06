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

// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t87515240;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.String
struct String_t;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t2992004394;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_Mono_Xml_DTDNotationDeclaration2992004394.h"

// System.Void Mono.Xml.DTDNotationDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDNotationDeclarationCollection__ctor_m2712775197 (DTDNotationDeclarationCollection_t87515240 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDNotationDeclarationCollection::Add(System.String,Mono.Xml.DTDNotationDeclaration)
extern "C"  void DTDNotationDeclarationCollection_Add_m754289612 (DTDNotationDeclarationCollection_t87515240 * __this, String_t* ___name0, DTDNotationDeclaration_t2992004394 * ___decl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
