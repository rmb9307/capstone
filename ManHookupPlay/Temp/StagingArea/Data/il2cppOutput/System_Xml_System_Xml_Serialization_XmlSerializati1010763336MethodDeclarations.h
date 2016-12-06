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

// System.Xml.Serialization.XmlSerializationCollectionFixupCallback
struct XmlSerializationCollectionFixupCallback_t1010763336;
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

// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationCollectionFixupCallback__ctor_m2039963079 (XmlSerializationCollectionFixupCallback_t1010763336 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::Invoke(System.Object,System.Object)
extern "C"  void XmlSerializationCollectionFixupCallback_Invoke_m506822625 (XmlSerializationCollectionFixupCallback_t1010763336 * __this, Il2CppObject * ___collection0, Il2CppObject * ___collectionItems1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationCollectionFixupCallback::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationCollectionFixupCallback_BeginInvoke_m3414870118 (XmlSerializationCollectionFixupCallback_t1010763336 * __this, Il2CppObject * ___collection0, Il2CppObject * ___collectionItems1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationCollectionFixupCallback::EndInvoke(System.IAsyncResult)
extern "C"  void XmlSerializationCollectionFixupCallback_EndInvoke_m2975255383 (XmlSerializationCollectionFixupCallback_t1010763336 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
