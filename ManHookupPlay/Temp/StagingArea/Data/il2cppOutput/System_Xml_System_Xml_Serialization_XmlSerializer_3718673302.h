#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Xml.Serialization.XmlSerializer/GenerationBatch
struct GenerationBatch_t2938102024;
// System.Xml.Serialization.XmlSerializerImplementation
struct XmlSerializerImplementation_t270572261;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Serialization.XmlSerializer/SerializerData
struct  SerializerData_t3718673302  : public Il2CppObject
{
public:
	// System.Int32 System.Xml.Serialization.XmlSerializer/SerializerData::UsageCount
	int32_t ___UsageCount_0;
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::ReaderType
	Type_t * ___ReaderType_1;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::ReaderMethod
	MethodInfo_t * ___ReaderMethod_2;
	// System.Type System.Xml.Serialization.XmlSerializer/SerializerData::WriterType
	Type_t * ___WriterType_3;
	// System.Reflection.MethodInfo System.Xml.Serialization.XmlSerializer/SerializerData::WriterMethod
	MethodInfo_t * ___WriterMethod_4;
	// System.Xml.Serialization.XmlSerializer/GenerationBatch System.Xml.Serialization.XmlSerializer/SerializerData::Batch
	GenerationBatch_t2938102024 * ___Batch_5;
	// System.Xml.Serialization.XmlSerializerImplementation System.Xml.Serialization.XmlSerializer/SerializerData::Implementation
	XmlSerializerImplementation_t270572261 * ___Implementation_6;

public:
	inline static int32_t get_offset_of_UsageCount_0() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___UsageCount_0)); }
	inline int32_t get_UsageCount_0() const { return ___UsageCount_0; }
	inline int32_t* get_address_of_UsageCount_0() { return &___UsageCount_0; }
	inline void set_UsageCount_0(int32_t value)
	{
		___UsageCount_0 = value;
	}

	inline static int32_t get_offset_of_ReaderType_1() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___ReaderType_1)); }
	inline Type_t * get_ReaderType_1() const { return ___ReaderType_1; }
	inline Type_t ** get_address_of_ReaderType_1() { return &___ReaderType_1; }
	inline void set_ReaderType_1(Type_t * value)
	{
		___ReaderType_1 = value;
		Il2CppCodeGenWriteBarrier(&___ReaderType_1, value);
	}

	inline static int32_t get_offset_of_ReaderMethod_2() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___ReaderMethod_2)); }
	inline MethodInfo_t * get_ReaderMethod_2() const { return ___ReaderMethod_2; }
	inline MethodInfo_t ** get_address_of_ReaderMethod_2() { return &___ReaderMethod_2; }
	inline void set_ReaderMethod_2(MethodInfo_t * value)
	{
		___ReaderMethod_2 = value;
		Il2CppCodeGenWriteBarrier(&___ReaderMethod_2, value);
	}

	inline static int32_t get_offset_of_WriterType_3() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___WriterType_3)); }
	inline Type_t * get_WriterType_3() const { return ___WriterType_3; }
	inline Type_t ** get_address_of_WriterType_3() { return &___WriterType_3; }
	inline void set_WriterType_3(Type_t * value)
	{
		___WriterType_3 = value;
		Il2CppCodeGenWriteBarrier(&___WriterType_3, value);
	}

	inline static int32_t get_offset_of_WriterMethod_4() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___WriterMethod_4)); }
	inline MethodInfo_t * get_WriterMethod_4() const { return ___WriterMethod_4; }
	inline MethodInfo_t ** get_address_of_WriterMethod_4() { return &___WriterMethod_4; }
	inline void set_WriterMethod_4(MethodInfo_t * value)
	{
		___WriterMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___WriterMethod_4, value);
	}

	inline static int32_t get_offset_of_Batch_5() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___Batch_5)); }
	inline GenerationBatch_t2938102024 * get_Batch_5() const { return ___Batch_5; }
	inline GenerationBatch_t2938102024 ** get_address_of_Batch_5() { return &___Batch_5; }
	inline void set_Batch_5(GenerationBatch_t2938102024 * value)
	{
		___Batch_5 = value;
		Il2CppCodeGenWriteBarrier(&___Batch_5, value);
	}

	inline static int32_t get_offset_of_Implementation_6() { return static_cast<int32_t>(offsetof(SerializerData_t3718673302, ___Implementation_6)); }
	inline XmlSerializerImplementation_t270572261 * get_Implementation_6() const { return ___Implementation_6; }
	inline XmlSerializerImplementation_t270572261 ** get_address_of_Implementation_6() { return &___Implementation_6; }
	inline void set_Implementation_6(XmlSerializerImplementation_t270572261 * value)
	{
		___Implementation_6 = value;
		Il2CppCodeGenWriteBarrier(&___Implementation_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
