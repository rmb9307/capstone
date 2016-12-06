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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode1510908735.h"
#include "mscorlib_System_Globalization_DateTimeStyles1282965087.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_Guid2862754429.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C"  void XmlConvert__cctor_m3007094654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::TryDecoding(System.String)
extern "C"  String_t* XmlConvert_TryDecoding_m3801509100 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::DecodeName(System.String)
extern "C"  String_t* XmlConvert_DecodeName_m3628614327 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C"  String_t* XmlConvert_EncodeLocalName_m3492384786 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C"  bool XmlConvert_IsInvalid_m313614306 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, bool ___firstOnlyLetter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C"  String_t* XmlConvert_EncodeName_m3700952590 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___nmtoken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C"  String_t* XmlConvert_EncodeName_m948344207 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C"  bool XmlConvert_ToBoolean_m3758854944 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToBinHexString(System.Byte[])
extern "C"  String_t* XmlConvert_ToBinHexString_m1853917911 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlConvert::WriteBinHex(System.Byte[],System.Int32,System.Int32,System.IO.TextWriter)
extern "C"  void XmlConvert_WriteBinHex_m3713148692 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___index1, int32_t ___count2, TextWriter_t2304124208 * ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C"  uint8_t XmlConvert_ToByte_m1845524822 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.Xml.XmlDateTimeSerializationMode)
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m4285748037 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m1713731850 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m2432599501 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C"  Decimal_t1954350631  XmlConvert_ToDecimal_m3464816128 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C"  double XmlConvert_ToDouble_m1758308804 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C"  float XmlConvert_TryParseStringFloatConstants_m1229477373 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool XmlConvert_TryParseStringConstant_m3828131620 (Il2CppObject * __this /* static, unused */, String_t* ___format0, String_t* ___s1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Xml.XmlConvert::ToGuid(System.String)
extern "C"  Guid_t2862754429  XmlConvert_ToGuid_m1476180436 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C"  int16_t XmlConvert_ToInt16_m674493152 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C"  int32_t XmlConvert_ToInt32_m3773620768 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C"  int64_t XmlConvert_ToInt64_m778201600 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C"  int8_t XmlConvert_ToSByte_m29345728 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C"  float XmlConvert_ToSingle_m34142998 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Guid)
extern "C"  String_t* XmlConvert_ToString_m3780951244 (Il2CppObject * __this /* static, unused */, Guid_t2862754429  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
extern "C"  String_t* XmlConvert_ToString_m1296446159 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int16)
extern "C"  String_t* XmlConvert_ToString_m1296444361 (Il2CppObject * __this /* static, unused */, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Byte)
extern "C"  String_t* XmlConvert_ToString_m3776463405 (Il2CppObject * __this /* static, unused */, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
extern "C"  String_t* XmlConvert_ToString_m1296449104 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
extern "C"  String_t* XmlConvert_ToString_m1828047733 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.SByte)
extern "C"  String_t* XmlConvert_ToString_m1542315746 (Il2CppObject * __this /* static, unused */, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
extern "C"  String_t* XmlConvert_ToString_m387516780 (Il2CppObject * __this /* static, unused */, Decimal_t1954350631  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
extern "C"  String_t* XmlConvert_ToString_m2532355773 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Double)
extern "C"  String_t* XmlConvert_ToString_m1423584644 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Single)
extern "C"  String_t* XmlConvert_ToString_m1673147373 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
extern "C"  String_t* XmlConvert_ToString_m2532352828 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
extern "C"  String_t* XmlConvert_ToString_m2532351030 (Il2CppObject * __this /* static, unused */, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
extern "C"  String_t* XmlConvert_ToString_m1667111055 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___value0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C"  uint16_t XmlConvert_ToUInt16_m1167065128 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C"  uint32_t XmlConvert_ToUInt32_m2021978420 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C"  uint64_t XmlConvert_ToUInt64_m2681755830 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C"  String_t* XmlConvert_VerifyName_m2269770316 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C"  ByteU5BU5D_t4260760469* XmlConvert_FromBinHexString_m923478344 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t XmlConvert_FromBinHexString_m1597652700 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___chars0, int32_t ___offset1, int32_t ___charLength2, ByteU5BU5D_t4260760469* ___buffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
