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

// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t3012627841;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t6647939;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlAttribute6647939.h"

// System.Void System.Xml.XmlAttributeCollection::.ctor(System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection__ctor_m1342482149 (XmlAttributeCollection_t3012627841 * __this, XmlNode_t856910923 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool XmlAttributeCollection_System_Collections_ICollection_get_IsSynchronized_m2929493172 (XmlAttributeCollection_t3012627841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XmlAttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * XmlAttributeCollection_System_Collections_ICollection_get_SyncRoot_m704344736 (XmlAttributeCollection_t3012627841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void XmlAttributeCollection_System_Collections_ICollection_CopyTo_m3260878716 (XmlAttributeCollection_t3012627841 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttributeCollection::get_IsReadOnly()
extern "C"  bool XmlAttributeCollection_get_IsReadOnly_m898352553 (XmlAttributeCollection_t3012627841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t6647939 * XmlAttributeCollection_get_ItemOf_m2183331915 (XmlAttributeCollection_t3012627841 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.Int32)
extern "C"  XmlAttribute_t6647939 * XmlAttributeCollection_get_ItemOf_m1441171176 (XmlAttributeCollection_t3012627841 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Remove(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t6647939 * XmlAttributeCollection_Remove_m1356329359 (XmlAttributeCollection_t3012627841 * __this, XmlAttribute_t6647939 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::RemoveAll()
extern "C"  void XmlAttributeCollection_RemoveAll_m940419235 (XmlAttributeCollection_t3012627841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::SetNamedItem(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * XmlAttributeCollection_SetNamedItem_m318328533 (XmlAttributeCollection_t3012627841 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttributeCollection::AdjustIdenticalAttributes(System.Xml.XmlAttribute,System.Xml.XmlNode)
extern "C"  void XmlAttributeCollection_AdjustIdenticalAttributes_m4283115759 (XmlAttributeCollection_t3012627841 * __this, XmlAttribute_t6647939 * ___node0, XmlNode_t856910923 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttributeCollection::RemoveIdenticalAttribute(System.Xml.XmlNode)
extern "C"  XmlNode_t856910923 * XmlAttributeCollection_RemoveIdenticalAttribute_m4024013366 (XmlAttributeCollection_t3012627841 * __this, XmlNode_t856910923 * ___existing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
