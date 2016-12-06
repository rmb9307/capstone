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

// System.Xml.XmlTextWriter
struct XmlTextWriter_t1523325321;
// System.IO.Stream
struct Stream_t1561764144;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "System_Xml_System_Xml_Formatting2909202723.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_System_Xml_WriteState1937244592.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void XmlTextWriter__ctor_m2740959510 (XmlTextWriter_t1523325321 * __this, Stream_t1561764144 * ___stream0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void XmlTextWriter__ctor_m3296703323 (XmlTextWriter_t1523325321 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C"  void XmlTextWriter__cctor_m1637914089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C"  void XmlTextWriter_Initialize_m2936707559 (XmlTextWriter_t1523325321 * __this, TextWriter_t2304124208 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C"  void XmlTextWriter_set_Formatting_m1915241301 (XmlTextWriter_t1523325321 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C"  String_t* XmlTextWriter_get_XmlLang_m893543515 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C"  int32_t XmlTextWriter_get_XmlSpace_m3249708038 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C"  int32_t XmlTextWriter_get_WriteState_m2855027494 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C"  String_t* XmlTextWriter_LookupPrefix_m2564645011 (XmlTextWriter_t1523325321 * __this, String_t* ___namespaceUri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
extern "C"  void XmlTextWriter_Close_m670868314 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Flush()
extern "C"  void XmlTextWriter_Flush_m3338923366 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
extern "C"  void XmlTextWriter_WriteStartDocument_m3207894718 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_WriteStartDocumentCore_m3544081929 (XmlTextWriter_t1523325321 * __this, bool ___outputStd0, bool ___standalone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteDocType_m1234778723 (XmlTextWriter_t1523325321 * __this, String_t* ___name0, String_t* ___pubid1, String_t* ___sysid2, String_t* ___subset3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartElement_m595844223 (XmlTextWriter_t1523325321 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C"  void XmlTextWriter_CloseStartElement_m2001480628 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C"  void XmlTextWriter_CloseStartElementCore_m2336868915 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C"  void XmlTextWriter_WriteEndElement_m2249924866 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C"  void XmlTextWriter_WriteFullEndElement_m235661617 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C"  void XmlTextWriter_WriteEndElementCore_m2470619192 (XmlTextWriter_t1523325321 * __this, bool ___full0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C"  void XmlTextWriter_WriteStartAttribute_m1712946271 (XmlTextWriter_t1523325321 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C"  String_t* XmlTextWriter_DetermineAttributePrefix_m1040595548 (XmlTextWriter_t1523325321 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C"  String_t* XmlTextWriter_MockupPrefix_m683099445 (XmlTextWriter_t1523325321 * __this, String_t* ___ns0, bool ___skipLookup1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C"  void XmlTextWriter_WriteEndAttribute_m826824546 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C"  void XmlTextWriter_WriteComment_m3650474498 (XmlTextWriter_t1523325321 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C"  void XmlTextWriter_WriteProcessingInstruction_m677232418 (XmlTextWriter_t1523325321 * __this, String_t* ___name0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C"  void XmlTextWriter_WriteWhitespace_m843782372 (XmlTextWriter_t1523325321 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C"  void XmlTextWriter_WriteCData_m487163892 (XmlTextWriter_t1523325321 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C"  void XmlTextWriter_WriteString_m1088021712 (XmlTextWriter_t1523325321 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteRaw(System.String)
extern "C"  void XmlTextWriter_WriteRaw_m2419223833 (XmlTextWriter_t1523325321 * __this, String_t* ___raw0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C"  void XmlTextWriter_WriteEntityRef_m2195865233 (XmlTextWriter_t1523325321 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteName(System.String)
extern "C"  void XmlTextWriter_WriteName_m2345279254 (XmlTextWriter_t1523325321 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C"  void XmlTextWriter_WriteIndent_m158808397 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C"  void XmlTextWriter_WriteIndentEndElement_m1791708110 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C"  void XmlTextWriter_WriteIndentAttribute_m1847722417 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C"  bool XmlTextWriter_WriteIndentCore_m322298696 (XmlTextWriter_t1523325321 * __this, int32_t ___nestFix0, bool ___attribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C"  void XmlTextWriter_OutputAutoStartDocument_m1704246543 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateTopLevel_m1568296473 (XmlTextWriter_t1523325321 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C"  void XmlTextWriter_CheckMixedContentState_m3059600651 (XmlTextWriter_t1523325321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C"  void XmlTextWriter_ShiftStateContent_m3748955623 (XmlTextWriter_t1523325321 * __this, String_t* ___occured0, bool ___allowAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedString_m3257491984 (XmlTextWriter_t1523325321 * __this, String_t* ___text0, bool ___isAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C"  void XmlTextWriter_WriteCheckedString_m1807330473 (XmlTextWriter_t1523325321 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C"  void XmlTextWriter_WriteCheckedBuffer_m2286902259 (XmlTextWriter_t1523325321 * __this, CharU5BU5D_t3324145743* ___text0, int32_t ___idx1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C"  void XmlTextWriter_WriteEscapedBuffer_m2258467462 (XmlTextWriter_t1523325321 * __this, CharU5BU5D_t3324145743* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C"  Exception_t3991598821 * XmlTextWriter_ArgumentError_m2457868214 (XmlTextWriter_t1523325321 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C"  Exception_t3991598821 * XmlTextWriter_InvalidOperation_m2571409329 (XmlTextWriter_t1523325321 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C"  Exception_t3991598821 * XmlTextWriter_StateError_m948877834 (XmlTextWriter_t1523325321 * __this, String_t* ___occured0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
