#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t597808448;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t982414386;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t775490247;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t618917313;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1467853467;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t400926360;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t4120438118;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Xml.NameTable
struct NameTable_t2699772693;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t1440432317;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_WhitespaceHandling2567612992.h"
#include "System_Xml_System_Xml_EntityHandling2742017190.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml2.XmlTextReader
struct  XmlTextReader_t1609187425  : public XmlReader_t4123196108
{
public:
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t597808448 * ___cursorToken_3;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t597808448 * ___currentToken_4;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t982414386 * ___currentAttributeToken_5;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t597808448 * ___currentAttributeValueToken_6;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t775490247* ___attributeTokens_7;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t618917313* ___attributeValueTokens_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_9;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_10;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_11;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t1291067127 * ___parserContext_12;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t1216706026 * ___nameTable_13;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t1467853467 * ___nsmgr_14;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_15;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_16;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_17;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_18;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_19;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_20;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t400926360* ___elementNames_21;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_22;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_23;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_24;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_25;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_26;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t243639308 * ___valueBuffer_27;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t2148718976 * ___reader_28;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t3324145743* ___peekChars_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_30;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_31;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_32;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_33;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_34;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_36;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_37;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_39;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_40;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_41;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_42;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t4120438118 * ___binaryCharGetter_43;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_44;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_45;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t3822670287 * ___resolver_46;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_47;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_48;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_49;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_50;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_51;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t2699772693 * ___whitespacePool_52;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t3324145743* ___whitespaceCache_53;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t1440432317 * ___stateStack_54;

public:
	inline static int32_t get_offset_of_cursorToken_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___cursorToken_3)); }
	inline XmlTokenInfo_t597808448 * get_cursorToken_3() const { return ___cursorToken_3; }
	inline XmlTokenInfo_t597808448 ** get_address_of_cursorToken_3() { return &___cursorToken_3; }
	inline void set_cursorToken_3(XmlTokenInfo_t597808448 * value)
	{
		___cursorToken_3 = value;
		Il2CppCodeGenWriteBarrier(&___cursorToken_3, value);
	}

	inline static int32_t get_offset_of_currentToken_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentToken_4)); }
	inline XmlTokenInfo_t597808448 * get_currentToken_4() const { return ___currentToken_4; }
	inline XmlTokenInfo_t597808448 ** get_address_of_currentToken_4() { return &___currentToken_4; }
	inline void set_currentToken_4(XmlTokenInfo_t597808448 * value)
	{
		___currentToken_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentToken_4, value);
	}

	inline static int32_t get_offset_of_currentAttributeToken_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentAttributeToken_5)); }
	inline XmlAttributeTokenInfo_t982414386 * get_currentAttributeToken_5() const { return ___currentAttributeToken_5; }
	inline XmlAttributeTokenInfo_t982414386 ** get_address_of_currentAttributeToken_5() { return &___currentAttributeToken_5; }
	inline void set_currentAttributeToken_5(XmlAttributeTokenInfo_t982414386 * value)
	{
		___currentAttributeToken_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttributeToken_5, value);
	}

	inline static int32_t get_offset_of_currentAttributeValueToken_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentAttributeValueToken_6)); }
	inline XmlTokenInfo_t597808448 * get_currentAttributeValueToken_6() const { return ___currentAttributeValueToken_6; }
	inline XmlTokenInfo_t597808448 ** get_address_of_currentAttributeValueToken_6() { return &___currentAttributeValueToken_6; }
	inline void set_currentAttributeValueToken_6(XmlTokenInfo_t597808448 * value)
	{
		___currentAttributeValueToken_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttributeValueToken_6, value);
	}

	inline static int32_t get_offset_of_attributeTokens_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___attributeTokens_7)); }
	inline XmlAttributeTokenInfoU5BU5D_t775490247* get_attributeTokens_7() const { return ___attributeTokens_7; }
	inline XmlAttributeTokenInfoU5BU5D_t775490247** get_address_of_attributeTokens_7() { return &___attributeTokens_7; }
	inline void set_attributeTokens_7(XmlAttributeTokenInfoU5BU5D_t775490247* value)
	{
		___attributeTokens_7 = value;
		Il2CppCodeGenWriteBarrier(&___attributeTokens_7, value);
	}

	inline static int32_t get_offset_of_attributeValueTokens_8() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___attributeValueTokens_8)); }
	inline XmlTokenInfoU5BU5D_t618917313* get_attributeValueTokens_8() const { return ___attributeValueTokens_8; }
	inline XmlTokenInfoU5BU5D_t618917313** get_address_of_attributeValueTokens_8() { return &___attributeValueTokens_8; }
	inline void set_attributeValueTokens_8(XmlTokenInfoU5BU5D_t618917313* value)
	{
		___attributeValueTokens_8 = value;
		Il2CppCodeGenWriteBarrier(&___attributeValueTokens_8, value);
	}

	inline static int32_t get_offset_of_currentAttribute_9() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentAttribute_9)); }
	inline int32_t get_currentAttribute_9() const { return ___currentAttribute_9; }
	inline int32_t* get_address_of_currentAttribute_9() { return &___currentAttribute_9; }
	inline void set_currentAttribute_9(int32_t value)
	{
		___currentAttribute_9 = value;
	}

	inline static int32_t get_offset_of_currentAttributeValue_10() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentAttributeValue_10)); }
	inline int32_t get_currentAttributeValue_10() const { return ___currentAttributeValue_10; }
	inline int32_t* get_address_of_currentAttributeValue_10() { return &___currentAttributeValue_10; }
	inline void set_currentAttributeValue_10(int32_t value)
	{
		___currentAttributeValue_10 = value;
	}

	inline static int32_t get_offset_of_attributeCount_11() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___attributeCount_11)); }
	inline int32_t get_attributeCount_11() const { return ___attributeCount_11; }
	inline int32_t* get_address_of_attributeCount_11() { return &___attributeCount_11; }
	inline void set_attributeCount_11(int32_t value)
	{
		___attributeCount_11 = value;
	}

	inline static int32_t get_offset_of_parserContext_12() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___parserContext_12)); }
	inline XmlParserContext_t1291067127 * get_parserContext_12() const { return ___parserContext_12; }
	inline XmlParserContext_t1291067127 ** get_address_of_parserContext_12() { return &___parserContext_12; }
	inline void set_parserContext_12(XmlParserContext_t1291067127 * value)
	{
		___parserContext_12 = value;
		Il2CppCodeGenWriteBarrier(&___parserContext_12, value);
	}

	inline static int32_t get_offset_of_nameTable_13() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___nameTable_13)); }
	inline XmlNameTable_t1216706026 * get_nameTable_13() const { return ___nameTable_13; }
	inline XmlNameTable_t1216706026 ** get_address_of_nameTable_13() { return &___nameTable_13; }
	inline void set_nameTable_13(XmlNameTable_t1216706026 * value)
	{
		___nameTable_13 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_13, value);
	}

	inline static int32_t get_offset_of_nsmgr_14() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___nsmgr_14)); }
	inline XmlNamespaceManager_t1467853467 * get_nsmgr_14() const { return ___nsmgr_14; }
	inline XmlNamespaceManager_t1467853467 ** get_address_of_nsmgr_14() { return &___nsmgr_14; }
	inline void set_nsmgr_14(XmlNamespaceManager_t1467853467 * value)
	{
		___nsmgr_14 = value;
		Il2CppCodeGenWriteBarrier(&___nsmgr_14, value);
	}

	inline static int32_t get_offset_of_readState_15() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___readState_15)); }
	inline int32_t get_readState_15() const { return ___readState_15; }
	inline int32_t* get_address_of_readState_15() { return &___readState_15; }
	inline void set_readState_15(int32_t value)
	{
		___readState_15 = value;
	}

	inline static int32_t get_offset_of_disallowReset_16() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___disallowReset_16)); }
	inline bool get_disallowReset_16() const { return ___disallowReset_16; }
	inline bool* get_address_of_disallowReset_16() { return &___disallowReset_16; }
	inline void set_disallowReset_16(bool value)
	{
		___disallowReset_16 = value;
	}

	inline static int32_t get_offset_of_depth_17() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___depth_17)); }
	inline int32_t get_depth_17() const { return ___depth_17; }
	inline int32_t* get_address_of_depth_17() { return &___depth_17; }
	inline void set_depth_17(int32_t value)
	{
		___depth_17 = value;
	}

	inline static int32_t get_offset_of_elementDepth_18() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___elementDepth_18)); }
	inline int32_t get_elementDepth_18() const { return ___elementDepth_18; }
	inline int32_t* get_address_of_elementDepth_18() { return &___elementDepth_18; }
	inline void set_elementDepth_18(int32_t value)
	{
		___elementDepth_18 = value;
	}

	inline static int32_t get_offset_of_depthUp_19() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___depthUp_19)); }
	inline bool get_depthUp_19() const { return ___depthUp_19; }
	inline bool* get_address_of_depthUp_19() { return &___depthUp_19; }
	inline void set_depthUp_19(bool value)
	{
		___depthUp_19 = value;
	}

	inline static int32_t get_offset_of_popScope_20() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___popScope_20)); }
	inline bool get_popScope_20() const { return ___popScope_20; }
	inline bool* get_address_of_popScope_20() { return &___popScope_20; }
	inline void set_popScope_20(bool value)
	{
		___popScope_20 = value;
	}

	inline static int32_t get_offset_of_elementNames_21() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___elementNames_21)); }
	inline TagNameU5BU5D_t400926360* get_elementNames_21() const { return ___elementNames_21; }
	inline TagNameU5BU5D_t400926360** get_address_of_elementNames_21() { return &___elementNames_21; }
	inline void set_elementNames_21(TagNameU5BU5D_t400926360* value)
	{
		___elementNames_21 = value;
		Il2CppCodeGenWriteBarrier(&___elementNames_21, value);
	}

	inline static int32_t get_offset_of_elementNameStackPos_22() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___elementNameStackPos_22)); }
	inline int32_t get_elementNameStackPos_22() const { return ___elementNameStackPos_22; }
	inline int32_t* get_address_of_elementNameStackPos_22() { return &___elementNameStackPos_22; }
	inline void set_elementNameStackPos_22(int32_t value)
	{
		___elementNameStackPos_22 = value;
	}

	inline static int32_t get_offset_of_allowMultipleRoot_23() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___allowMultipleRoot_23)); }
	inline bool get_allowMultipleRoot_23() const { return ___allowMultipleRoot_23; }
	inline bool* get_address_of_allowMultipleRoot_23() { return &___allowMultipleRoot_23; }
	inline void set_allowMultipleRoot_23(bool value)
	{
		___allowMultipleRoot_23 = value;
	}

	inline static int32_t get_offset_of_isStandalone_24() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___isStandalone_24)); }
	inline bool get_isStandalone_24() const { return ___isStandalone_24; }
	inline bool* get_address_of_isStandalone_24() { return &___isStandalone_24; }
	inline void set_isStandalone_24(bool value)
	{
		___isStandalone_24 = value;
	}

	inline static int32_t get_offset_of_returnEntityReference_25() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___returnEntityReference_25)); }
	inline bool get_returnEntityReference_25() const { return ___returnEntityReference_25; }
	inline bool* get_address_of_returnEntityReference_25() { return &___returnEntityReference_25; }
	inline void set_returnEntityReference_25(bool value)
	{
		___returnEntityReference_25 = value;
	}

	inline static int32_t get_offset_of_entityReferenceName_26() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___entityReferenceName_26)); }
	inline String_t* get_entityReferenceName_26() const { return ___entityReferenceName_26; }
	inline String_t** get_address_of_entityReferenceName_26() { return &___entityReferenceName_26; }
	inline void set_entityReferenceName_26(String_t* value)
	{
		___entityReferenceName_26 = value;
		Il2CppCodeGenWriteBarrier(&___entityReferenceName_26, value);
	}

	inline static int32_t get_offset_of_valueBuffer_27() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___valueBuffer_27)); }
	inline StringBuilder_t243639308 * get_valueBuffer_27() const { return ___valueBuffer_27; }
	inline StringBuilder_t243639308 ** get_address_of_valueBuffer_27() { return &___valueBuffer_27; }
	inline void set_valueBuffer_27(StringBuilder_t243639308 * value)
	{
		___valueBuffer_27 = value;
		Il2CppCodeGenWriteBarrier(&___valueBuffer_27, value);
	}

	inline static int32_t get_offset_of_reader_28() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___reader_28)); }
	inline TextReader_t2148718976 * get_reader_28() const { return ___reader_28; }
	inline TextReader_t2148718976 ** get_address_of_reader_28() { return &___reader_28; }
	inline void set_reader_28(TextReader_t2148718976 * value)
	{
		___reader_28 = value;
		Il2CppCodeGenWriteBarrier(&___reader_28, value);
	}

	inline static int32_t get_offset_of_peekChars_29() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___peekChars_29)); }
	inline CharU5BU5D_t3324145743* get_peekChars_29() const { return ___peekChars_29; }
	inline CharU5BU5D_t3324145743** get_address_of_peekChars_29() { return &___peekChars_29; }
	inline void set_peekChars_29(CharU5BU5D_t3324145743* value)
	{
		___peekChars_29 = value;
		Il2CppCodeGenWriteBarrier(&___peekChars_29, value);
	}

	inline static int32_t get_offset_of_peekCharsIndex_30() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___peekCharsIndex_30)); }
	inline int32_t get_peekCharsIndex_30() const { return ___peekCharsIndex_30; }
	inline int32_t* get_address_of_peekCharsIndex_30() { return &___peekCharsIndex_30; }
	inline void set_peekCharsIndex_30(int32_t value)
	{
		___peekCharsIndex_30 = value;
	}

	inline static int32_t get_offset_of_peekCharsLength_31() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___peekCharsLength_31)); }
	inline int32_t get_peekCharsLength_31() const { return ___peekCharsLength_31; }
	inline int32_t* get_address_of_peekCharsLength_31() { return &___peekCharsLength_31; }
	inline void set_peekCharsLength_31(int32_t value)
	{
		___peekCharsLength_31 = value;
	}

	inline static int32_t get_offset_of_curNodePeekIndex_32() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___curNodePeekIndex_32)); }
	inline int32_t get_curNodePeekIndex_32() const { return ___curNodePeekIndex_32; }
	inline int32_t* get_address_of_curNodePeekIndex_32() { return &___curNodePeekIndex_32; }
	inline void set_curNodePeekIndex_32(int32_t value)
	{
		___curNodePeekIndex_32 = value;
	}

	inline static int32_t get_offset_of_preserveCurrentTag_33() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___preserveCurrentTag_33)); }
	inline bool get_preserveCurrentTag_33() const { return ___preserveCurrentTag_33; }
	inline bool* get_address_of_preserveCurrentTag_33() { return &___preserveCurrentTag_33; }
	inline void set_preserveCurrentTag_33(bool value)
	{
		___preserveCurrentTag_33 = value;
	}

	inline static int32_t get_offset_of_line_34() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___line_34)); }
	inline int32_t get_line_34() const { return ___line_34; }
	inline int32_t* get_address_of_line_34() { return &___line_34; }
	inline void set_line_34(int32_t value)
	{
		___line_34 = value;
	}

	inline static int32_t get_offset_of_column_35() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___column_35)); }
	inline int32_t get_column_35() const { return ___column_35; }
	inline int32_t* get_address_of_column_35() { return &___column_35; }
	inline void set_column_35(int32_t value)
	{
		___column_35 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLineNumber_36() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentLinkedNodeLineNumber_36)); }
	inline int32_t get_currentLinkedNodeLineNumber_36() const { return ___currentLinkedNodeLineNumber_36; }
	inline int32_t* get_address_of_currentLinkedNodeLineNumber_36() { return &___currentLinkedNodeLineNumber_36; }
	inline void set_currentLinkedNodeLineNumber_36(int32_t value)
	{
		___currentLinkedNodeLineNumber_36 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLinePosition_37() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentLinkedNodeLinePosition_37)); }
	inline int32_t get_currentLinkedNodeLinePosition_37() const { return ___currentLinkedNodeLinePosition_37; }
	inline int32_t* get_address_of_currentLinkedNodeLinePosition_37() { return &___currentLinkedNodeLinePosition_37; }
	inline void set_currentLinkedNodeLinePosition_37(int32_t value)
	{
		___currentLinkedNodeLinePosition_37 = value;
	}

	inline static int32_t get_offset_of_useProceedingLineInfo_38() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___useProceedingLineInfo_38)); }
	inline bool get_useProceedingLineInfo_38() const { return ___useProceedingLineInfo_38; }
	inline bool* get_address_of_useProceedingLineInfo_38() { return &___useProceedingLineInfo_38; }
	inline void set_useProceedingLineInfo_38(bool value)
	{
		___useProceedingLineInfo_38 = value;
	}

	inline static int32_t get_offset_of_startNodeType_39() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___startNodeType_39)); }
	inline int32_t get_startNodeType_39() const { return ___startNodeType_39; }
	inline int32_t* get_address_of_startNodeType_39() { return &___startNodeType_39; }
	inline void set_startNodeType_39(int32_t value)
	{
		___startNodeType_39 = value;
	}

	inline static int32_t get_offset_of_currentState_40() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___currentState_40)); }
	inline int32_t get_currentState_40() const { return ___currentState_40; }
	inline int32_t* get_address_of_currentState_40() { return &___currentState_40; }
	inline void set_currentState_40(int32_t value)
	{
		___currentState_40 = value;
	}

	inline static int32_t get_offset_of_nestLevel_41() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___nestLevel_41)); }
	inline int32_t get_nestLevel_41() const { return ___nestLevel_41; }
	inline int32_t* get_address_of_nestLevel_41() { return &___nestLevel_41; }
	inline void set_nestLevel_41(int32_t value)
	{
		___nestLevel_41 = value;
	}

	inline static int32_t get_offset_of_readCharsInProgress_42() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___readCharsInProgress_42)); }
	inline bool get_readCharsInProgress_42() const { return ___readCharsInProgress_42; }
	inline bool* get_address_of_readCharsInProgress_42() { return &___readCharsInProgress_42; }
	inline void set_readCharsInProgress_42(bool value)
	{
		___readCharsInProgress_42 = value;
	}

	inline static int32_t get_offset_of_binaryCharGetter_43() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___binaryCharGetter_43)); }
	inline CharGetter_t4120438118 * get_binaryCharGetter_43() const { return ___binaryCharGetter_43; }
	inline CharGetter_t4120438118 ** get_address_of_binaryCharGetter_43() { return &___binaryCharGetter_43; }
	inline void set_binaryCharGetter_43(CharGetter_t4120438118 * value)
	{
		___binaryCharGetter_43 = value;
		Il2CppCodeGenWriteBarrier(&___binaryCharGetter_43, value);
	}

	inline static int32_t get_offset_of_namespaces_44() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___namespaces_44)); }
	inline bool get_namespaces_44() const { return ___namespaces_44; }
	inline bool* get_address_of_namespaces_44() { return &___namespaces_44; }
	inline void set_namespaces_44(bool value)
	{
		___namespaces_44 = value;
	}

	inline static int32_t get_offset_of_whitespaceHandling_45() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___whitespaceHandling_45)); }
	inline int32_t get_whitespaceHandling_45() const { return ___whitespaceHandling_45; }
	inline int32_t* get_address_of_whitespaceHandling_45() { return &___whitespaceHandling_45; }
	inline void set_whitespaceHandling_45(int32_t value)
	{
		___whitespaceHandling_45 = value;
	}

	inline static int32_t get_offset_of_resolver_46() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___resolver_46)); }
	inline XmlResolver_t3822670287 * get_resolver_46() const { return ___resolver_46; }
	inline XmlResolver_t3822670287 ** get_address_of_resolver_46() { return &___resolver_46; }
	inline void set_resolver_46(XmlResolver_t3822670287 * value)
	{
		___resolver_46 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_46, value);
	}

	inline static int32_t get_offset_of_normalization_47() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___normalization_47)); }
	inline bool get_normalization_47() const { return ___normalization_47; }
	inline bool* get_address_of_normalization_47() { return &___normalization_47; }
	inline void set_normalization_47(bool value)
	{
		___normalization_47 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_48() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___checkCharacters_48)); }
	inline bool get_checkCharacters_48() const { return ___checkCharacters_48; }
	inline bool* get_address_of_checkCharacters_48() { return &___checkCharacters_48; }
	inline void set_checkCharacters_48(bool value)
	{
		___checkCharacters_48 = value;
	}

	inline static int32_t get_offset_of_prohibitDtd_49() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___prohibitDtd_49)); }
	inline bool get_prohibitDtd_49() const { return ___prohibitDtd_49; }
	inline bool* get_address_of_prohibitDtd_49() { return &___prohibitDtd_49; }
	inline void set_prohibitDtd_49(bool value)
	{
		___prohibitDtd_49 = value;
	}

	inline static int32_t get_offset_of_closeInput_50() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___closeInput_50)); }
	inline bool get_closeInput_50() const { return ___closeInput_50; }
	inline bool* get_address_of_closeInput_50() { return &___closeInput_50; }
	inline void set_closeInput_50(bool value)
	{
		___closeInput_50 = value;
	}

	inline static int32_t get_offset_of_entityHandling_51() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___entityHandling_51)); }
	inline int32_t get_entityHandling_51() const { return ___entityHandling_51; }
	inline int32_t* get_address_of_entityHandling_51() { return &___entityHandling_51; }
	inline void set_entityHandling_51(int32_t value)
	{
		___entityHandling_51 = value;
	}

	inline static int32_t get_offset_of_whitespacePool_52() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___whitespacePool_52)); }
	inline NameTable_t2699772693 * get_whitespacePool_52() const { return ___whitespacePool_52; }
	inline NameTable_t2699772693 ** get_address_of_whitespacePool_52() { return &___whitespacePool_52; }
	inline void set_whitespacePool_52(NameTable_t2699772693 * value)
	{
		___whitespacePool_52 = value;
		Il2CppCodeGenWriteBarrier(&___whitespacePool_52, value);
	}

	inline static int32_t get_offset_of_whitespaceCache_53() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___whitespaceCache_53)); }
	inline CharU5BU5D_t3324145743* get_whitespaceCache_53() const { return ___whitespaceCache_53; }
	inline CharU5BU5D_t3324145743** get_address_of_whitespaceCache_53() { return &___whitespaceCache_53; }
	inline void set_whitespaceCache_53(CharU5BU5D_t3324145743* value)
	{
		___whitespaceCache_53 = value;
		Il2CppCodeGenWriteBarrier(&___whitespaceCache_53, value);
	}

	inline static int32_t get_offset_of_stateStack_54() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425, ___stateStack_54)); }
	inline DtdInputStateStack_t1440432317 * get_stateStack_54() const { return ___stateStack_54; }
	inline DtdInputStateStack_t1440432317 ** get_address_of_stateStack_54() { return &___stateStack_54; }
	inline void set_stateStack_54(DtdInputStateStack_t1440432317 * value)
	{
		___stateStack_54 = value;
		Il2CppCodeGenWriteBarrier(&___stateStack_54, value);
	}
};

struct XmlTextReader_t1609187425_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map51
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map51_55;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map52
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map52_56;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map51_55() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425_StaticFields, ___U3CU3Ef__switchU24map51_55)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map51_55() const { return ___U3CU3Ef__switchU24map51_55; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map51_55() { return &___U3CU3Ef__switchU24map51_55; }
	inline void set_U3CU3Ef__switchU24map51_55(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map51_55 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map51_55, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map52_56() { return static_cast<int32_t>(offsetof(XmlTextReader_t1609187425_StaticFields, ___U3CU3Ef__switchU24map52_56)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map52_56() const { return ___U3CU3Ef__switchU24map52_56; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map52_56() { return &___U3CU3Ef__switchU24map52_56; }
	inline void set_U3CU3Ef__switchU24map52_56(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map52_56 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map52_56, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
