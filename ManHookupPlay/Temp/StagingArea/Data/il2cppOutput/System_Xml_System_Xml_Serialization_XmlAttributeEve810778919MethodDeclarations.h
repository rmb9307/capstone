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

// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_t810778919;
// System.Object
struct Il2CppObject;
// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t1787124380;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_Serialization_XmlAttributeEv1787124380.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.Serialization.XmlAttributeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlAttributeEventHandler__ctor_m3385711658 (XmlAttributeEventHandler_t810778919 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::Invoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs)
extern "C"  void XmlAttributeEventHandler_Invoke_m337257336 (XmlAttributeEventHandler_t810778919 * __this, Il2CppObject * ___sender0, XmlAttributeEventArgs_t1787124380 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Serialization.XmlAttributeEventHandler::BeginInvoke(System.Object,System.Xml.Serialization.XmlAttributeEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlAttributeEventHandler_BeginInvoke_m1319839811 (XmlAttributeEventHandler_t810778919 * __this, Il2CppObject * ___sender0, XmlAttributeEventArgs_t1787124380 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlAttributeEventHandler_EndInvoke_m1492775738 (XmlAttributeEventHandler_t810778919 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
