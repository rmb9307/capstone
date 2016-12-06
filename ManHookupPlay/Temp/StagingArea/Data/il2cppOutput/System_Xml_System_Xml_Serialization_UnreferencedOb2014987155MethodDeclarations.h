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

// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t2014987155;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.UnreferencedObjectEventArgs
struct UnreferencedObjectEventArgs_t3433009072;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_Serialization_UnreferencedOb3433009072.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnreferencedObjectEventHandler__ctor_m2002732822 (UnreferencedObjectEventHandler_t2014987155 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::Invoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs)
extern "C"  void UnreferencedObjectEventHandler_Invoke_m3070837264 (UnreferencedObjectEventHandler_t2014987155 * __this, Il2CppObject * ___sender0, UnreferencedObjectEventArgs_t3433009072 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.UnreferencedObjectEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.UnreferencedObjectEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnreferencedObjectEventHandler_BeginInvoke_m1015067715 (UnreferencedObjectEventHandler_t2014987155 * __this, Il2CppObject * ___sender0, UnreferencedObjectEventArgs_t3433009072 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.UnreferencedObjectEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnreferencedObjectEventHandler_EndInvoke_m3647845414 (UnreferencedObjectEventHandler_t2014987155 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
