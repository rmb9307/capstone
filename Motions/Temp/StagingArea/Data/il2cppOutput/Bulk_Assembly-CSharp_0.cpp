#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraController
struct CameraController_t3473169601;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController3473169601.h"
#include "AssemblyU2DCSharp_CameraController3473169601MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Single4291918972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1305907962 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m253045754 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t CameraController_LateUpdate_m786793369_MetadataUsageId;
extern "C"  void CameraController_LateUpdate_m786793369 (CameraController_t3473169601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CameraController_LateUpdate_m786793369_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_1, L_2, L_3, (20.0f), /*hidden argument*/NULL);
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = Vector3_get_up_m4046647141(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_5, L_6, L_7, (-20.0f), /*hidden argument*/NULL);
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)273), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_9, L_10, L_11, (20.0f), /*hidden argument*/NULL);
	}

IL_007b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_12 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)274), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a4;
		}
	}
	{
		Transform_t1659122786 * L_13 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_14 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = Vector3_get_forward_m1039372701(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_RotateAround_m2745906802(L_13, L_14, L_15, (-20.0f), /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
