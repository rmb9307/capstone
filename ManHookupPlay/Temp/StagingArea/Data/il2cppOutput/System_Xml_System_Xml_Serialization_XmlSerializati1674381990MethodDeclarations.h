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

// System.Xml.Serialization.XmlSerializationReadCallback
struct XmlSerializationReadCallback_t1674381990;
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

// System.Void System.Xml.Serialization.XmlSerializationReadCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlSerializationReadCallback__ctor_m676352297 (XmlSerializationReadCallback_t1674381990 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::Invoke()
extern "C"  Il2CppObject * XmlSerializationReadCallback_Invoke_m1006302446 (XmlSerializationReadCallback_t1674381990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlSerializationReadCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlSerializationReadCallback_BeginInvoke_m2019470952 (XmlSerializationReadCallback_t1674381990 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReadCallback::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * XmlSerializationReadCallback_EndInvoke_m624710564 (XmlSerializationReadCallback_t1674381990 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
