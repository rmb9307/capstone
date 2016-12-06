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

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t2116068307;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t1006296620;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t2353874421;
// System.String
struct String_t;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t1787124380;
// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t2164317948;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t489622736;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3433009072;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t196184366;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t351589598;
// System.Object
struct Il2CppObject;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.IO.Stream
struct Stream_t1561764144;
// System.Xml.XmlWriter
struct XmlWriter_t4278601340;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t142497835;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t2793904297;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeOv1006296620.h"
#include "System_Xml_System_Xml_Serialization_XmlRootAttribu2353874421.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEv1787124380.h"
#include "System_Xml_System_Xml_Serialization_XmlElementEven2164317948.h"
#include "System_Xml_System_Xml_Serialization_XmlNodeEventArg489622736.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedOb3433009072.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializatio196184366.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializatio351589598.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_Xml_System_Xml_XmlWriter4278601340.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializerNa142497835.h"
#include "System_Xml_System_Xml_Serialization_XmlMapping2793904297.h"

// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type)
extern "C"  void XmlSerializer__ctor_m1894928041 (XmlSerializer_t2116068307 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Xml.Serialization.XmlAttributeOverrides,System.Type[],System.Xml.Serialization.XmlRootAttribute,System.String)
extern "C"  void XmlSerializer__ctor_m30055153 (XmlSerializer_t2116068307 * __this, Type_t * ___type0, XmlAttributeOverrides_t1006296620 * ___overrides1, TypeU5BU5D_t3339007067* ___extraTypes2, XmlRootAttribute_t2353874421 * ___root3, String_t* ___defaultNamespace4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::.cctor()
extern "C"  void XmlSerializer__cctor_m1855149789 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlSerializer_OnUnknownAttribute_m1782989351 (XmlSerializer_t2116068307 * __this, XmlAttributeEventArgs_t1787124380 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs)
extern "C"  void XmlSerializer_OnUnknownElement_m4145612583 (XmlSerializer_t2116068307 * __this, XmlElementEventArgs_t2164317948 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs)
extern "C"  void XmlSerializer_OnUnknownNode_m2478101989 (XmlSerializer_t2116068307 * __this, XmlNodeEventArgs_t489622736 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void XmlSerializer_OnUnreferencedObject_m668557074 (XmlSerializer_t2116068307 * __this, UnreferencedObjectEventArgs_t3433009072 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader()
extern "C"  XmlSerializationReader_t196184366 * XmlSerializer_CreateReader_m2180376534 (XmlSerializer_t2116068307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter()
extern "C"  XmlSerializationWriter_t351589598 * XmlSerializer_CreateWriter_m2391954902 (XmlSerializer_t2116068307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m2138373791 (XmlSerializer_t2116068307 * __this, TextReader_t2148718976 * ___textReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m1814899668 (XmlSerializer_t2116068307 * __this, XmlReader_t4123196108 * ___xmlReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.Serialization.XmlSerializationReader)
extern "C"  Il2CppObject * XmlSerializer_Deserialize_m549963018 (XmlSerializer_t2116068307 * __this, XmlSerializationReader_t196184366 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Object,System.Xml.Serialization.XmlSerializationWriter)
extern "C"  void XmlSerializer_Serialize_m2929681138 (XmlSerializer_t2116068307 * __this, Il2CppObject * ___o0, XmlSerializationWriter_t351589598 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.Stream,System.Object)
extern "C"  void XmlSerializer_Serialize_m3060491507 (XmlSerializer_t2116068307 * __this, Stream_t1561764144 * ___stream0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object,System.Xml.Serialization.XmlSerializerNamespaces)
extern "C"  void XmlSerializer_Serialize_m2870476721 (XmlSerializer_t2116068307 * __this, XmlWriter_t4278601340 * ___writer0, Il2CppObject * ___o1, XmlSerializerNamespaces_t142497835 * ___namespaces2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer::CreateWriter(System.Xml.Serialization.XmlMapping)
extern "C"  XmlSerializationWriter_t351589598 * XmlSerializer_CreateWriter_m1885226417 (XmlSerializer_t2116068307 * __this, XmlMapping_t2793904297 * ___typeMapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer::CreateReader(System.Xml.Serialization.XmlMapping)
extern "C"  XmlSerializationReader_t196184366 * XmlSerializer_CreateReader_m2017555377 (XmlSerializer_t2116068307 * __this, XmlMapping_t2793904297 * ___typeMapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializer::CheckGeneratedTypes(System.Xml.Serialization.XmlMapping)
extern "C"  void XmlSerializer_CheckGeneratedTypes_m3759268679 (XmlSerializer_t2116068307 * __this, XmlMapping_t2793904297 * ___typeMapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
