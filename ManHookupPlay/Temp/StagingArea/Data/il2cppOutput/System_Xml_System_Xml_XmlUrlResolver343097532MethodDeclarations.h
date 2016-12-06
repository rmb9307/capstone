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

// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t343097532;
// System.Object
struct Il2CppObject;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m2727795693 (XmlUrlResolver_t343097532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C"  Il2CppObject * XmlUrlResolver_GetEntity_m203780859 (XmlUrlResolver_t343097532 * __this, Uri_t1116831938 * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t1116831938 * XmlUrlResolver_ResolveUri_m569585666 (XmlUrlResolver_t343097532 * __this, Uri_t1116831938 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C"  String_t* XmlUrlResolver_UnescapeRelativeUriBody_m764219404 (XmlUrlResolver_t343097532 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
