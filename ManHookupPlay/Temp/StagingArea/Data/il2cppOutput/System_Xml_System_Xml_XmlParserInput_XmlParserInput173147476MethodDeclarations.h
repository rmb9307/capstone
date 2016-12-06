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

// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t173147476;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C"  void XmlParserInputSource__ctor_m956893193 (XmlParserInputSource_t173147476 * __this, TextReader_t2148718976 * ___reader0, String_t* ___baseUri1, bool ___pe2, int32_t ___line3, int32_t ___column4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C"  int32_t XmlParserInputSource_get_LineNumber_m2215817051 (XmlParserInputSource_t173147476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C"  int32_t XmlParserInputSource_get_LinePosition_m870999291 (XmlParserInputSource_t173147476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C"  void XmlParserInputSource_Close_m1137723815 (XmlParserInputSource_t173147476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C"  int32_t XmlParserInputSource_Read_m3980937483 (XmlParserInputSource_t173147476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
