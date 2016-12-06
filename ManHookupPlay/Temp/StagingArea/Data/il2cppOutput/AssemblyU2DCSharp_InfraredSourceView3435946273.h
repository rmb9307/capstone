#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// InfraredSourceManager
struct InfraredSourceManager_t2995947441;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InfraredSourceView
struct  InfraredSourceView_t3435946273  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject InfraredSourceView::InfraredSourceManager
	GameObject_t3674682005 * ___InfraredSourceManager_2;
	// InfraredSourceManager InfraredSourceView::_InfraredManager
	InfraredSourceManager_t2995947441 * ____InfraredManager_3;

public:
	inline static int32_t get_offset_of_InfraredSourceManager_2() { return static_cast<int32_t>(offsetof(InfraredSourceView_t3435946273, ___InfraredSourceManager_2)); }
	inline GameObject_t3674682005 * get_InfraredSourceManager_2() const { return ___InfraredSourceManager_2; }
	inline GameObject_t3674682005 ** get_address_of_InfraredSourceManager_2() { return &___InfraredSourceManager_2; }
	inline void set_InfraredSourceManager_2(GameObject_t3674682005 * value)
	{
		___InfraredSourceManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___InfraredSourceManager_2, value);
	}

	inline static int32_t get_offset_of__InfraredManager_3() { return static_cast<int32_t>(offsetof(InfraredSourceView_t3435946273, ____InfraredManager_3)); }
	inline InfraredSourceManager_t2995947441 * get__InfraredManager_3() const { return ____InfraredManager_3; }
	inline InfraredSourceManager_t2995947441 ** get_address_of__InfraredManager_3() { return &____InfraredManager_3; }
	inline void set__InfraredManager_3(InfraredSourceManager_t2995947441 * value)
	{
		____InfraredManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____InfraredManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
