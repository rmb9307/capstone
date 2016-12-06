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

// System.Xml.Serialization.XmlElementAttributes
struct XmlElementAttributes_t1758966030;
// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t2146545409;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Serialization_XmlElementAttr2146545409.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void System.Xml.Serialization.XmlElementAttributes::.ctor()
extern "C"  void XmlElementAttributes__ctor_m137185265 (XmlElementAttributes_t1758966030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlElementAttribute System.Xml.Serialization.XmlElementAttributes::get_Item(System.Int32)
extern "C"  XmlElementAttribute_t2146545409 * XmlElementAttributes_get_Item_m280791570 (XmlElementAttributes_t1758966030 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlElementAttributes::Add(System.Xml.Serialization.XmlElementAttribute)
extern "C"  int32_t XmlElementAttributes_Add_m1561453903 (XmlElementAttributes_t1758966030 * __this, XmlElementAttribute_t2146545409 * ___attribute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C"  void XmlElementAttributes_AddKeyHash_m2031660523 (XmlElementAttributes_t1758966030 * __this, StringBuilder_t243639308 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
