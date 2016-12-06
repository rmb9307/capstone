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

// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t3074502249;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t1377283246;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_XmlNodeChangedEventArgs1377283246.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.XmlNodeChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void XmlNodeChangedEventHandler__ctor_m3922299970 (XmlNodeChangedEventHandler_t3074502249 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::Invoke(System.Object,System.Xml.XmlNodeChangedEventArgs)
extern "C"  void XmlNodeChangedEventHandler_Invoke_m2262309928 (XmlNodeChangedEventHandler_t3074502249 * __this, Il2CppObject * ___sender0, XmlNodeChangedEventArgs_t1377283246 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.XmlNodeChangedEventHandler::BeginInvoke(System.Object,System.Xml.XmlNodeChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * XmlNodeChangedEventHandler_BeginInvoke_m411216963 (XmlNodeChangedEventHandler_t3074502249 * __this, Il2CppObject * ___sender0, XmlNodeChangedEventArgs_t1377283246 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void XmlNodeChangedEventHandler_EndInvoke_m1606512466 (XmlNodeChangedEventHandler_t3074502249 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
