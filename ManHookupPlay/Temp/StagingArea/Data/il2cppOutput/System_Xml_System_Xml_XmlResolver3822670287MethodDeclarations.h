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

// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Uri
struct Uri_t1116831938;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlResolver::.ctor()
extern "C"  void XmlResolver__ctor_m2007000382 (XmlResolver_t3822670287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C"  Uri_t1116831938 * XmlResolver_ResolveUri_m1762389849 (XmlResolver_t3822670287 * __this, Uri_t1116831938 * ___baseUri0, String_t* ___relativeUri1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C"  String_t* XmlResolver_EscapeRelativeUriBody_m2055152168 (XmlResolver_t3822670287 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
