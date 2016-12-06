#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Serialization.EnumMap/EnumMapMember[]
struct EnumMapMemberU5BU5D_t1820521728;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Int64[]
struct Int64U5BU5D_t2174042770;

#include "System_Xml_System_Xml_Serialization_ObjectMap1653814887.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.EnumMap
struct  EnumMap_t851226725  : public ObjectMap_t1653814887
{
public:
	// System.Xml.Serialization.EnumMap/EnumMapMember[] System.Xml.Serialization.EnumMap::_members
	EnumMapMemberU5BU5D_t1820521728* ____members_0;
	// System.Boolean System.Xml.Serialization.EnumMap::_isFlags
	bool ____isFlags_1;
	// System.String[] System.Xml.Serialization.EnumMap::_enumNames
	StringU5BU5D_t4054002952* ____enumNames_2;
	// System.String[] System.Xml.Serialization.EnumMap::_xmlNames
	StringU5BU5D_t4054002952* ____xmlNames_3;
	// System.Int64[] System.Xml.Serialization.EnumMap::_values
	Int64U5BU5D_t2174042770* ____values_4;

public:
	inline static int32_t get_offset_of__members_0() { return static_cast<int32_t>(offsetof(EnumMap_t851226725, ____members_0)); }
	inline EnumMapMemberU5BU5D_t1820521728* get__members_0() const { return ____members_0; }
	inline EnumMapMemberU5BU5D_t1820521728** get_address_of__members_0() { return &____members_0; }
	inline void set__members_0(EnumMapMemberU5BU5D_t1820521728* value)
	{
		____members_0 = value;
		Il2CppCodeGenWriteBarrier(&____members_0, value);
	}

	inline static int32_t get_offset_of__isFlags_1() { return static_cast<int32_t>(offsetof(EnumMap_t851226725, ____isFlags_1)); }
	inline bool get__isFlags_1() const { return ____isFlags_1; }
	inline bool* get_address_of__isFlags_1() { return &____isFlags_1; }
	inline void set__isFlags_1(bool value)
	{
		____isFlags_1 = value;
	}

	inline static int32_t get_offset_of__enumNames_2() { return static_cast<int32_t>(offsetof(EnumMap_t851226725, ____enumNames_2)); }
	inline StringU5BU5D_t4054002952* get__enumNames_2() const { return ____enumNames_2; }
	inline StringU5BU5D_t4054002952** get_address_of__enumNames_2() { return &____enumNames_2; }
	inline void set__enumNames_2(StringU5BU5D_t4054002952* value)
	{
		____enumNames_2 = value;
		Il2CppCodeGenWriteBarrier(&____enumNames_2, value);
	}

	inline static int32_t get_offset_of__xmlNames_3() { return static_cast<int32_t>(offsetof(EnumMap_t851226725, ____xmlNames_3)); }
	inline StringU5BU5D_t4054002952* get__xmlNames_3() const { return ____xmlNames_3; }
	inline StringU5BU5D_t4054002952** get_address_of__xmlNames_3() { return &____xmlNames_3; }
	inline void set__xmlNames_3(StringU5BU5D_t4054002952* value)
	{
		____xmlNames_3 = value;
		Il2CppCodeGenWriteBarrier(&____xmlNames_3, value);
	}

	inline static int32_t get_offset_of__values_4() { return static_cast<int32_t>(offsetof(EnumMap_t851226725, ____values_4)); }
	inline Int64U5BU5D_t2174042770* get__values_4() const { return ____values_4; }
	inline Int64U5BU5D_t2174042770** get_address_of__values_4() { return &____values_4; }
	inline void set__values_4(Int64U5BU5D_t2174042770* value)
	{
		____values_4 = value;
		Il2CppCodeGenWriteBarrier(&____values_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
