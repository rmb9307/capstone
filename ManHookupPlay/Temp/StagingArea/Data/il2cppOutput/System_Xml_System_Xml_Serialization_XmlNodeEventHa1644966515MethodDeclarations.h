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

// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t1644966515;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlNodeEventArgs
struct XmlNodeEventArgs_t489622736;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_Serialization_XmlNodeEventArg489622736.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.Serialization.XmlNodeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeEventHandler__ctor_m3101322098 (XmlNodeEventHandler_t1644966515 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs)
extern "C"  void XmlNodeEventHandler_Invoke_m1420910658 (XmlNodeEventHandler_t1644966515 * __this, Il2CppObject * ___sender0, XmlNodeEventArgs_t489622736 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlNodeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlNodeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeEventHandler_BeginInvoke_m2560741487 (XmlNodeEventHandler_t1644966515 * __this, Il2CppObject * ___sender0, XmlNodeEventArgs_t489622736 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlNodeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeEventHandler_EndInvoke_m1258382978 (XmlNodeEventHandler_t1644966515 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
