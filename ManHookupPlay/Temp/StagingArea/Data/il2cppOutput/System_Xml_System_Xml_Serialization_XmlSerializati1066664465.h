#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t683913222;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializationReader/Fixup
struct  Fixup_t1066664465  : public Il2CppObject
{
public:
	// System.Object System.Xml.Serialization.XmlSerializationReader/Fixup::source
	Il2CppObject * ___source_0;
	// System.String[] System.Xml.Serialization.XmlSerializationReader/Fixup::ids
	StringU5BU5D_t4054002952* ___ids_1;
	// System.Xml.Serialization.XmlSerializationFixupCallback System.Xml.Serialization.XmlSerializationReader/Fixup::callback
	XmlSerializationFixupCallback_t683913222 * ___callback_2;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(Fixup_t1066664465, ___source_0)); }
	inline Il2CppObject * get_source_0() const { return ___source_0; }
	inline Il2CppObject ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(Il2CppObject * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier(&___source_0, value);
	}

	inline static int32_t get_offset_of_ids_1() { return static_cast<int32_t>(offsetof(Fixup_t1066664465, ___ids_1)); }
	inline StringU5BU5D_t4054002952* get_ids_1() const { return ___ids_1; }
	inline StringU5BU5D_t4054002952** get_address_of_ids_1() { return &___ids_1; }
	inline void set_ids_1(StringU5BU5D_t4054002952* value)
	{
		___ids_1 = value;
		Il2CppCodeGenWriteBarrier(&___ids_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Fixup_t1066664465, ___callback_2)); }
	inline XmlSerializationFixupCallback_t683913222 * get_callback_2() const { return ___callback_2; }
	inline XmlSerializationFixupCallback_t683913222 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(XmlSerializationFixupCallback_t683913222 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
