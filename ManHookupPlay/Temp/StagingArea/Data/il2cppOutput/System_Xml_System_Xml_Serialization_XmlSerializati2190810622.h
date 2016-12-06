#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t1217441384;
// System.Xml.Serialization.ClassMap
struct ClassMap_t3022169526;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo
struct  FixupCallbackInfo_t2190810622  : public Il2CppObject
{
public:
	// System.Xml.Serialization.XmlSerializationReaderInterpreter System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo::_sri
	XmlSerializationReaderInterpreter_t1217441384 * ____sri_0;
	// System.Xml.Serialization.ClassMap System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo::_map
	ClassMap_t3022169526 * ____map_1;
	// System.Boolean System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo::_isValueList
	bool ____isValueList_2;

public:
	inline static int32_t get_offset_of__sri_0() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_t2190810622, ____sri_0)); }
	inline XmlSerializationReaderInterpreter_t1217441384 * get__sri_0() const { return ____sri_0; }
	inline XmlSerializationReaderInterpreter_t1217441384 ** get_address_of__sri_0() { return &____sri_0; }
	inline void set__sri_0(XmlSerializationReaderInterpreter_t1217441384 * value)
	{
		____sri_0 = value;
		Il2CppCodeGenWriteBarrier(&____sri_0, value);
	}

	inline static int32_t get_offset_of__map_1() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_t2190810622, ____map_1)); }
	inline ClassMap_t3022169526 * get__map_1() const { return ____map_1; }
	inline ClassMap_t3022169526 ** get_address_of__map_1() { return &____map_1; }
	inline void set__map_1(ClassMap_t3022169526 * value)
	{
		____map_1 = value;
		Il2CppCodeGenWriteBarrier(&____map_1, value);
	}

	inline static int32_t get_offset_of__isValueList_2() { return static_cast<int32_t>(offsetof(FixupCallbackInfo_t2190810622, ____isValueList_2)); }
	inline bool get__isValueList_2() const { return ____isValueList_2; }
	inline bool* get_address_of__isValueList_2() { return &____isValueList_2; }
	inline void set__isValueList_2(bool value)
	{
		____isValueList_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
