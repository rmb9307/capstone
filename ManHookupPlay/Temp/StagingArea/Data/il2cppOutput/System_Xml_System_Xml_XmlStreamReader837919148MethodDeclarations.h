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

// System.Xml.XmlStreamReader
struct XmlStreamReader_t837919148;
// System.Xml.XmlInputStream
struct XmlInputStream_t2962968081;
// System.IO.Stream
struct Stream_t1561764144;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlInputStream2962968081.h"
#include "mscorlib_System_IO_Stream1561764144.h"

// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C"  void XmlStreamReader__ctor_m519253800 (XmlStreamReader_t837919148 * __this, XmlInputStream_t2962968081 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C"  void XmlStreamReader__ctor_m2508489112 (XmlStreamReader_t837919148 * __this, Stream_t1561764144 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C"  void XmlStreamReader__cctor_m2944077516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Close()
extern "C"  void XmlStreamReader_Close_m1682833943 (XmlStreamReader_t837919148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlStreamReader_Read_m1091060832 (XmlStreamReader_t837919148 * __this, CharU5BU5D_t3324145743* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C"  void XmlStreamReader_Dispose_m4193660405 (XmlStreamReader_t837919148 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
