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

// System.Xml.XmlException
struct XmlException_t1475188278;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t2849465358;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.XmlException::.ctor()
extern "C"  void XmlException__ctor_m1502310195 (XmlException_t1475188278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
extern "C"  void XmlException__ctor_m1015471719 (XmlException_t1475188278 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException__ctor_m122822132 (XmlException_t1475188278 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C"  void XmlException__ctor_m3226581679 (XmlException_t1475188278 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C"  void XmlException__ctor_m3778248785 (XmlException_t1475188278 * __this, Il2CppObject * ___li0, String_t* ___sourceUri1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
extern "C"  void XmlException__ctor_m3852801013 (XmlException_t1475188278 * __this, Il2CppObject * ___li0, Exception_t3991598821 * ___innerException1, String_t* ___sourceUri2, String_t* ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
extern "C"  void XmlException__ctor_m1096610055 (XmlException_t1475188278 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, int32_t ___lineNumber2, int32_t ___linePosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Int32,System.Int32,System.Object,System.String,System.Exception)
extern "C"  void XmlException__ctor_m2245560573 (XmlException_t1475188278 * __this, String_t* ___message0, int32_t ___lineNumber1, int32_t ___linePosition2, Il2CppObject * ___sourceObject3, String_t* ___sourceUri4, Exception_t3991598821 * ___innerException5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Object)
extern "C"  String_t* XmlException_GetMessage_m4141488397 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___sourceUri1, int32_t ___lineNumber2, int32_t ___linePosition3, Il2CppObject * ___sourceObj4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
extern "C"  String_t* XmlException_get_Message_m1432935250 (XmlException_t1475188278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XmlException_GetObjectData_m660615505 (XmlException_t1475188278 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
