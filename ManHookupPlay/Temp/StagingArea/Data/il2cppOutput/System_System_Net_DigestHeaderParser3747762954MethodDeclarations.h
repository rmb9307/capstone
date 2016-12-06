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

// System.Net.DigestHeaderParser
struct DigestHeaderParser_t3747762954;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.DigestHeaderParser::.ctor(System.String)
extern "C"  void DigestHeaderParser__ctor_m2093966808 (DigestHeaderParser_t3747762954 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::.cctor()
extern "C"  void DigestHeaderParser__cctor_m1169466243 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Realm()
extern "C"  String_t* DigestHeaderParser_get_Realm_m2537411729 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Opaque()
extern "C"  String_t* DigestHeaderParser_get_Opaque_m1594409025 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Nonce()
extern "C"  String_t* DigestHeaderParser_get_Nonce_m3580385777 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Algorithm()
extern "C"  String_t* DigestHeaderParser_get_Algorithm_m1543204337 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_QOP()
extern "C"  String_t* DigestHeaderParser_get_QOP_m2289308564 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::Parse()
extern "C"  bool DigestHeaderParser_Parse_m1894726801 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::SkipWhitespace()
extern "C"  void DigestHeaderParser_SkipWhitespace_m780187062 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::GetKey()
extern "C"  String_t* DigestHeaderParser_GetKey_m3307245952 (DigestHeaderParser_t3747762954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
extern "C"  bool DigestHeaderParser_GetKeywordAndValue_m2110698101 (DigestHeaderParser_t3747762954 * __this, String_t** ___key0, String_t** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
