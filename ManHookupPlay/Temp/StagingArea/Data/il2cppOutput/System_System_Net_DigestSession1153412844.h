#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t532578791;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t3747762954;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DigestSession
struct  DigestSession_t1153412844  : public Il2CppObject
{
public:
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t4283661327  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t532578791 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t3747762954 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;

public:
	inline static int32_t get_offset_of_lastUse_1() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844, ___lastUse_1)); }
	inline DateTime_t4283661327  get_lastUse_1() const { return ___lastUse_1; }
	inline DateTime_t4283661327 * get_address_of_lastUse_1() { return &___lastUse_1; }
	inline void set_lastUse_1(DateTime_t4283661327  value)
	{
		___lastUse_1 = value;
	}

	inline static int32_t get_offset_of__nc_2() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844, ____nc_2)); }
	inline int32_t get__nc_2() const { return ____nc_2; }
	inline int32_t* get_address_of__nc_2() { return &____nc_2; }
	inline void set__nc_2(int32_t value)
	{
		____nc_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844, ___hash_3)); }
	inline HashAlgorithm_t532578791 * get_hash_3() const { return ___hash_3; }
	inline HashAlgorithm_t532578791 ** get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(HashAlgorithm_t532578791 * value)
	{
		___hash_3 = value;
		Il2CppCodeGenWriteBarrier(&___hash_3, value);
	}

	inline static int32_t get_offset_of_parser_4() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844, ___parser_4)); }
	inline DigestHeaderParser_t3747762954 * get_parser_4() const { return ___parser_4; }
	inline DigestHeaderParser_t3747762954 ** get_address_of_parser_4() { return &___parser_4; }
	inline void set_parser_4(DigestHeaderParser_t3747762954 * value)
	{
		___parser_4 = value;
		Il2CppCodeGenWriteBarrier(&___parser_4, value);
	}

	inline static int32_t get_offset_of__cnonce_5() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844, ____cnonce_5)); }
	inline String_t* get__cnonce_5() const { return ____cnonce_5; }
	inline String_t** get_address_of__cnonce_5() { return &____cnonce_5; }
	inline void set__cnonce_5(String_t* value)
	{
		____cnonce_5 = value;
		Il2CppCodeGenWriteBarrier(&____cnonce_5, value);
	}
};

struct DigestSession_t1153412844_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t1757673517 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(DigestSession_t1153412844_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t1757673517 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t1757673517 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t1757673517 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier(&___rng_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
