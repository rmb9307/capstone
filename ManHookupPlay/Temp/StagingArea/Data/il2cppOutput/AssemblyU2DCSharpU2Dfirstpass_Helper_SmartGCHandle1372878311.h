#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Helper.SmartGCHandle
struct  SmartGCHandle_t1372878311  : public Il2CppObject
{
public:
	// System.Runtime.InteropServices.GCHandle Helper.SmartGCHandle::handle
	GCHandle_t1812538030  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SmartGCHandle_t1372878311, ___handle_0)); }
	inline GCHandle_t1812538030  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t1812538030 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t1812538030  value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
