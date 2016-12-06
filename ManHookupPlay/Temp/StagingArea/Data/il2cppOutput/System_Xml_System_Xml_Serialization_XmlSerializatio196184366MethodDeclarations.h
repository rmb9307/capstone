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

// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t196184366;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t2116068307;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Xml.XmlDocument
struct XmlDocument_t730752740;
// System.Xml.Serialization.XmlSerializationReader/CollectionFixup
struct CollectionFixup_t3656138963;
// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t1066664465;
// System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup
struct CollectionItemFixup_t3423100928;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t1674381990;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t3991598821;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Array
struct Il2CppArray;
// System.Xml.XmlAttribute
struct XmlAttribute_t6647939;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo
struct WriteCallbackInfo_t3402191667;
// System.Xml.Serialization.IXmlSerializable
struct IXmlSerializable_t1062890495;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlElement
struct XmlElement_t280387747;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializer2116068307.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3656138963.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati1066664465.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati3423100928.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "System_Xml_System_Xml_Serialization_XmlSerializati1674381990.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_Xml_System_Xml_XmlAttribute6647939.h"
#include "System_Xml_System_Xml_XmlElement280387747.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"

// System.Void System.Xml.Serialization.XmlSerializationReader::.ctor()
extern "C"  void XmlSerializationReader__ctor_m3070874705 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::Initialize(System.Xml.XmlReader,System.Xml.Serialization.XmlSerializer)
extern "C"  void XmlSerializationReader_Initialize_m1765380850 (XmlSerializationReader_t196184366 * __this, XmlReader_t4123196108 * ___reader0, XmlSerializer_t2116068307 * ___eventSource1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Serialization.XmlSerializationReader::EnsureArrayList(System.Collections.ArrayList)
extern "C"  ArrayList_t3948406897 * XmlSerializationReader_EnsureArrayList_m2619649467 (XmlSerializationReader_t196184366 * __this, ArrayList_t3948406897 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Xml.Serialization.XmlSerializationReader::EnsureHashtable(System.Collections.Hashtable)
extern "C"  Hashtable_t1407064410 * XmlSerializationReader_EnsureHashtable_m237487890 (XmlSerializationReader_t196184366 * __this, Hashtable_t1407064410 * ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::get_Document()
extern "C"  XmlDocument_t730752740 * XmlSerializationReader_get_Document_m483267938 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Serialization.XmlSerializationReader::get_Reader()
extern "C"  XmlReader_t4123196108 * XmlSerializationReader_get_Reader_m330992306 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionFixup)
extern "C"  void XmlSerializationReader_AddFixup_m2940395357 (XmlSerializationReader_t196184366 * __this, CollectionFixup_t3656138963 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/Fixup)
extern "C"  void XmlSerializationReader_AddFixup_m3636976287 (XmlSerializationReader_t196184366 * __this, Fixup_t1066664465 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddFixup(System.Xml.Serialization.XmlSerializationReader/CollectionItemFixup)
extern "C"  void XmlSerializationReader_AddFixup_m617708112 (XmlSerializationReader_t196184366 * __this, CollectionItemFixup_t3423100928 * ___fixup0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddReadCallback(System.String,System.String,System.Type,System.Xml.Serialization.XmlSerializationReadCallback)
extern "C"  void XmlSerializationReader_AddReadCallback_m511534794 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, String_t* ___ns1, Type_t * ___type2, XmlSerializationReadCallback_t1674381990 * ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::AddTarget(System.String,System.Object)
extern "C"  void XmlSerializationReader_AddTarget_m1979745839 (XmlSerializationReader_t196184366 * __this, String_t* ___id0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::CurrentTag()
extern "C"  String_t* XmlSerializationReader_CurrentTag_m4137523889 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateReadOnlyCollectionException(System.String)
extern "C"  Exception_t3991598821 * XmlSerializationReader_CreateReadOnlyCollectionException_m494995583 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownConstantException(System.String,System.Type)
extern "C"  Exception_t3991598821 * XmlSerializationReader_CreateUnknownConstantException_m262637350 (XmlSerializationReader_t196184366 * __this, String_t* ___value0, Type_t * ___enumType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownNodeException()
extern "C"  Exception_t3991598821 * XmlSerializationReader_CreateUnknownNodeException_m2252572497 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Serialization.XmlSerializationReader::CreateUnknownTypeException(System.Xml.XmlQualifiedName)
extern "C"  Exception_t3991598821 * XmlSerializationReader_CreateUnknownTypeException_m3019837971 (XmlSerializationReader_t196184366 * __this, XmlQualifiedName_t2133315502 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::EnsureArrayIndex(System.Array,System.Int32,System.Type)
extern "C"  Il2CppArray * XmlSerializationReader_EnsureArrayIndex_m1200206641 (XmlSerializationReader_t196184366 * __this, Il2CppArray * ___a0, int32_t ___index1, Type_t * ___elementType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::GetNullAttr()
extern "C"  bool XmlSerializationReader_GetNullAttr_m2906457349 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::GetTarget(System.String)
extern "C"  Il2CppObject * XmlSerializationReader_GetTarget_m2963915255 (XmlSerializationReader_t196184366 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::TargetReady(System.String)
extern "C"  bool XmlSerializationReader_TargetReady_m1277422745 (XmlSerializationReader_t196184366 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::GetXsiType()
extern "C"  XmlQualifiedName_t2133315502 * XmlSerializationReader_GetXsiType_m305667192 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::IsXmlnsAttribute(System.String)
extern "C"  bool XmlSerializationReader_IsXmlnsAttribute_m2409816365 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ParseWsdlArrayType(System.Xml.XmlAttribute)
extern "C"  void XmlSerializationReader_ParseWsdlArrayType_m82075816 (XmlSerializationReader_t196184366 * __this, XmlAttribute_t6647939 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadElementQualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSerializationReader_ReadElementQualifiedName_m646822247 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadEndElement()
extern "C"  void XmlSerializationReader_ReadEndElement_m3127481962 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadNull()
extern "C"  bool XmlSerializationReader_ReadNull_m1989574600 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ReadNullableQualifiedName()
extern "C"  XmlQualifiedName_t2133315502 * XmlSerializationReader_ReadNullableQualifiedName_m4264043212 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadNullableString()
extern "C"  String_t* XmlSerializationReader_ReadNullableString_m2696644760 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement()
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m2806902705 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationReader/WriteCallbackInfo System.Xml.Serialization.XmlSerializationReader::GetCallbackInfo(System.Xml.XmlQualifiedName)
extern "C"  WriteCallbackInfo_t3402191667 * XmlSerializationReader_GetCallbackInfo_m2661582612 (XmlSerializationReader_t196184366 * __this, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencedElement(System.String,System.String)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencedElement_m2060068205 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.XmlSerializationReader::ReadList(System.Object&)
extern "C"  bool XmlSerializationReader_ReadList_m1199345559 (XmlSerializationReader_t196184366 * __this, Il2CppObject ** ___resultList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::ReadReferencedElements()
extern "C"  void XmlSerializationReader_ReadReferencedElements_m1322468249 (XmlSerializationReader_t196184366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m3478666258 (XmlSerializationReader_t196184366 * __this, String_t** ___fixupReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m1454141082 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, String_t* ___ns1, String_t** ___fixupReference2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadReferencingElement(System.String,System.String,System.Boolean,System.String&)
extern "C"  Il2CppObject * XmlSerializationReader_ReadReferencingElement_m908438825 (XmlSerializationReader_t196184366 * __this, String_t* ___name0, String_t* ___ns1, bool ___elementCanBeType2, String_t** ___fixupReference3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.IXmlSerializable System.Xml.Serialization.XmlSerializationReader::ReadSerializable(System.Xml.Serialization.IXmlSerializable)
extern "C"  Il2CppObject * XmlSerializationReader_ReadSerializable_m3446020923 (XmlSerializationReader_t196184366 * __this, Il2CppObject * ___serializable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlSerializationReader::ReadString(System.String)
extern "C"  String_t* XmlSerializationReader_ReadString_m3136532811 (XmlSerializationReader_t196184366 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m827243227 (XmlSerializationReader_t196184366 * __this, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader::ReadTypedPrimitive(System.Xml.XmlQualifiedName,System.Boolean)
extern "C"  Il2CppObject * XmlSerializationReader_ReadTypedPrimitive_m1194272578 (XmlSerializationReader_t196184366 * __this, XmlQualifiedName_t2133315502 * ___qname0, bool ___reportUnknown1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.Serialization.XmlSerializationReader::ReadXmlNode(System.Boolean)
extern "C"  XmlNode_t856910923 * XmlSerializationReader_ReadXmlNode_m2066466327 (XmlSerializationReader_t196184366 * __this, bool ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.Serialization.XmlSerializationReader::ReadXmlDocument(System.Boolean)
extern "C"  XmlDocument_t730752740 * XmlSerializationReader_ReadXmlDocument_m365015991 (XmlSerializationReader_t196184366 * __this, bool ___wrapped0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Xml.Serialization.XmlSerializationReader::ShrinkArray(System.Array,System.Int32,System.Type,System.Boolean)
extern "C"  Il2CppArray * XmlSerializationReader_ShrinkArray_m1340798607 (XmlSerializationReader_t196184366 * __this, Il2CppArray * ___a0, int32_t ___length1, Type_t * ___elementType2, bool ___isNullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializationReader::ToXmlQualifiedName(System.String)
extern "C"  XmlQualifiedName_t2133315502 * XmlSerializationReader_ToXmlQualifiedName_m574550865 (XmlSerializationReader_t196184366 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownAttribute(System.Object,System.Xml.XmlAttribute,System.String)
extern "C"  void XmlSerializationReader_UnknownAttribute_m531743740 (XmlSerializationReader_t196184366 * __this, Il2CppObject * ___o0, XmlAttribute_t6647939 * ___attr1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownElement(System.Object,System.Xml.XmlElement,System.String)
extern "C"  void XmlSerializationReader_UnknownElement_m2212366844 (XmlSerializationReader_t196184366 * __this, Il2CppObject * ___o0, XmlElement_t280387747 * ___elem1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object)
extern "C"  void XmlSerializationReader_UnknownNode_m3502370841 (XmlSerializationReader_t196184366 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnknownNode(System.Object,System.String)
extern "C"  void XmlSerializationReader_UnknownNode_m1971615893 (XmlSerializationReader_t196184366 * __this, Il2CppObject * ___o0, String_t* ___qnames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::OnUnknownNode(System.Xml.XmlNode,System.Object,System.String)
extern "C"  void XmlSerializationReader_OnUnknownNode_m974550115 (XmlSerializationReader_t196184366 * __this, XmlNode_t856910923 * ___node0, Il2CppObject * ___o1, String_t* ___qnames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReader::UnreferencedObject(System.String,System.Object)
extern "C"  void XmlSerializationReader_UnreferencedObject_m605135116 (XmlSerializationReader_t196184366 * __this, String_t* ___id0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
