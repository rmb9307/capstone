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
// ColorSourceManager
struct ColorSourceManager_t2270236815;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSourceView
struct  ColorSourceView_t3947869443  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ColorSourceView::ColorSourceManager
	GameObject_t3674682005 * ___ColorSourceManager_2;
	// ColorSourceManager ColorSourceView::_ColorManager
	ColorSourceManager_t2270236815 * ____ColorManager_3;

public:
	inline static int32_t get_offset_of_ColorSourceManager_2() { return static_cast<int32_t>(offsetof(ColorSourceView_t3947869443, ___ColorSourceManager_2)); }
	inline GameObject_t3674682005 * get_ColorSourceManager_2() const { return ___ColorSourceManager_2; }
	inline GameObject_t3674682005 ** get_address_of_ColorSourceManager_2() { return &___ColorSourceManager_2; }
	inline void set_ColorSourceManager_2(GameObject_t3674682005 * value)
	{
		___ColorSourceManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___ColorSourceManager_2, value);
	}

	inline static int32_t get_offset_of__ColorManager_3() { return static_cast<int32_t>(offsetof(ColorSourceView_t3947869443, ____ColorManager_3)); }
	inline ColorSourceManager_t2270236815 * get__ColorManager_3() const { return ____ColorManager_3; }
	inline ColorSourceManager_t2270236815 ** get_address_of__ColorManager_3() { return &____ColorManager_3; }
	inline void set__ColorManager_3(ColorSourceManager_t2270236815 * value)
	{
		____ColorManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____ColorManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
