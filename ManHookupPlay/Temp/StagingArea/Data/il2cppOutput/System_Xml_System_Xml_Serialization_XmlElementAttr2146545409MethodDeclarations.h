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

// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t2146545409;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm4089761650.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String)
extern "C"  void XmlElementAttribute__ctor_m2091415648 (XmlElementAttribute_t2146545409 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::.ctor(System.String,System.Type)
extern "C"  void XmlElementAttribute__ctor_m138835859 (XmlElementAttribute_t2146545409 * __this, String_t* ___elementName0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_DataType()
extern "C"  String_t* XmlElementAttribute_get_DataType_m2093922770 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_ElementName()
extern "C"  String_t* XmlElementAttribute_get_ElementName_m194355195 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlElementAttribute::get_Form()
extern "C"  int32_t XmlElementAttribute_get_Form_m1415635677 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlElementAttribute::get_Namespace()
extern "C"  String_t* XmlElementAttribute_get_Namespace_m3612299631 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlElementAttribute::get_IsNullable()
extern "C"  bool XmlElementAttribute_get_IsNullable_m2090133534 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.XmlElementAttribute::get_Type()
extern "C"  Type_t * XmlElementAttribute_get_Type_m4054639999 (XmlElementAttribute_t2146545409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::set_Type(System.Type)
extern "C"  void XmlElementAttribute_set_Type_m3857562624 (XmlElementAttribute_t2146545409 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttribute::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlElementAttribute_AddKeyHash_m3283382300 (XmlElementAttribute_t2146545409 * __this, StringBuilder_t243639308 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
