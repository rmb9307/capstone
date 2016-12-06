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

// System.Xml.Serialization.XmlSerializationWriteCallback
struct XmlSerializationWriteCallback_t940916597;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationWriteCallback__ctor_m2179432948 (XmlSerializationWriteCallback_t940916597 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::Invoke(System.Object)
extern "C"  void XmlSerializationWriteCallback_Invoke_m511629574 (XmlSerializationWriteCallback_t940916597 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationWriteCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationWriteCallback_BeginInvoke_m4194149415 (XmlSerializationWriteCallback_t940916597 * __this, Il2CppObject * ___o0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriteCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationWriteCallback_EndInvoke_m2744258052 (XmlSerializationWriteCallback_t940916597 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
