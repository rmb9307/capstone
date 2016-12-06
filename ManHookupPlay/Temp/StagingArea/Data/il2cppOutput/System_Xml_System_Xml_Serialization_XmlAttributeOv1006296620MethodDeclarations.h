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

// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t1006296620;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t3119699864;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeMember
struct TypeMember_t989061734;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void System.Xml.Serialization.XmlAttributeOverrides::.ctor()
extern "C"  void XmlAttributeOverrides__ctor_m3813648023 (XmlAttributeOverrides_t1006296620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type)
extern "C"  XmlAttributes_t3119699864 * XmlAttributeOverrides_get_Item_m4109820025 (XmlAttributeOverrides_t1006296620 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type,System.String)
extern "C"  XmlAttributes_t3119699864 * XmlAttributeOverrides_get_Item_m2493333749 (XmlAttributeOverrides_t1006296620 * __this, Type_t * ___type0, String_t* ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeMember System.Xml.Serialization.XmlAttributeOverrides::GetKey(System.Type,System.String)
extern "C"  TypeMember_t989061734 * XmlAttributeOverrides_GetKey_m903911828 (XmlAttributeOverrides_t1006296620 * __this, Type_t * ___type0, String_t* ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeOverrides::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlAttributeOverrides_AddKeyHash_m3040110097 (XmlAttributeOverrides_t1006296620 * __this, StringBuilder_t243639308 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
