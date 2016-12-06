#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Globalization.CompareInfo
struct CompareInfo_t1485490525;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/StringUtil
struct  StringUtil_t614327009  : public Il2CppObject
{
public:

public:
};

struct StringUtil_t614327009_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter/StringUtil::cul
	CultureInfo_t1065375142 * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter/StringUtil::cmp
	CompareInfo_t1485490525 * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t614327009_StaticFields, ___cul_0)); }
	inline CultureInfo_t1065375142 * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t1065375142 ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t1065375142 * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier(&___cul_0, value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t614327009_StaticFields, ___cmp_1)); }
	inline CompareInfo_t1485490525 * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t1485490525 ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t1485490525 * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier(&___cmp_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
