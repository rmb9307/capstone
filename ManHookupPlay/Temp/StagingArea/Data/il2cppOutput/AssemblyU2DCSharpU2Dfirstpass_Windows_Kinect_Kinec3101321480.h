#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>>
struct CollectionMap_2_t4211471288;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct CollectionMap_2_t4171297104;
// System.Func`2<System.IntPtr,Windows.Kinect.AudioSource>
struct Func_2_t2098173477;
// System.Func`2<System.IntPtr,Windows.Kinect.BodyFrameSource>
struct Func_2_t1173451258;
// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameSource>
struct Func_2_t240101094;
// System.Func`2<System.IntPtr,Windows.Kinect.ColorFrameSource>
struct Func_2_t3051661427;
// System.Func`2<System.IntPtr,Windows.Kinect.CoordinateMapper>
struct Func_2_t294799815;
// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameSource>
struct Func_2_t4160368915;
// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameSource>
struct Func_2_t1471300603;
// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameSource>
struct Func_2_t3487134424;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>
struct Func_2_t1235141774;
// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReader>
struct Func_2_t2179708778;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.KinectSensor
struct  KinectSensor_t3101321480  : public Il2CppObject
{
public:
	// System.IntPtr Windows.Kinect.KinectSensor::_pNative
	IntPtr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480, ____pNative_0)); }
	inline IntPtr_t get__pNative_0() const { return ____pNative_0; }
	inline IntPtr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(IntPtr_t value)
	{
		____pNative_0 = value;
	}
};

struct KinectSensor_t3101321480_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle
	GCHandle_t1812538030  ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t4211471288 * ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t1812538030  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t4171297104 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;
	// System.Func`2<System.IntPtr,Windows.Kinect.AudioSource> Windows.Kinect.KinectSensor::<>f__am$cache5
	Func_2_t2098173477 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<System.IntPtr,Windows.Kinect.BodyFrameSource> Windows.Kinect.KinectSensor::<>f__am$cache6
	Func_2_t1173451258 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameSource> Windows.Kinect.KinectSensor::<>f__am$cache7
	Func_2_t240101094 * ___U3CU3Ef__amU24cache7_7;
	// System.Func`2<System.IntPtr,Windows.Kinect.ColorFrameSource> Windows.Kinect.KinectSensor::<>f__am$cache8
	Func_2_t3051661427 * ___U3CU3Ef__amU24cache8_8;
	// System.Func`2<System.IntPtr,Windows.Kinect.CoordinateMapper> Windows.Kinect.KinectSensor::<>f__am$cache9
	Func_2_t294799815 * ___U3CU3Ef__amU24cache9_9;
	// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameSource> Windows.Kinect.KinectSensor::<>f__am$cacheA
	Func_2_t4160368915 * ___U3CU3Ef__amU24cacheA_10;
	// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameSource> Windows.Kinect.KinectSensor::<>f__am$cacheB
	Func_2_t1471300603 * ___U3CU3Ef__amU24cacheB_11;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameSource> Windows.Kinect.KinectSensor::<>f__am$cacheC
	Func_2_t3487134424 * ___U3CU3Ef__amU24cacheC_12;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor> Windows.Kinect.KinectSensor::<>f__am$cacheD
	Func_2_t1235141774 * ___U3CU3Ef__amU24cacheD_13;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReader> Windows.Kinect.KinectSensor::<>f__am$cacheE
	Func_2_t2179708778 * ___U3CU3Ef__amU24cacheE_14;

public:
	inline static int32_t get_offset_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t1812538030  get__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t1812538030 * get_address_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1(GCHandle_t1812538030  value)
	{
		____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t4211471288 * get_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t4211471288 ** get_address_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2(CollectionMap_2_t4211471288 * value)
	{
		___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2, value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t1812538030  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t1812538030 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t1812538030  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t4171297104 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t4171297104 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t4171297104 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t2098173477 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t2098173477 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t2098173477 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t1173451258 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t1173451258 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t1173451258 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t240101094 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t240101094 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t240101094 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_8() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cache8_8)); }
	inline Func_2_t3051661427 * get_U3CU3Ef__amU24cache8_8() const { return ___U3CU3Ef__amU24cache8_8; }
	inline Func_2_t3051661427 ** get_address_of_U3CU3Ef__amU24cache8_8() { return &___U3CU3Ef__amU24cache8_8; }
	inline void set_U3CU3Ef__amU24cache8_8(Func_2_t3051661427 * value)
	{
		___U3CU3Ef__amU24cache8_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_9() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cache9_9)); }
	inline Func_2_t294799815 * get_U3CU3Ef__amU24cache9_9() const { return ___U3CU3Ef__amU24cache9_9; }
	inline Func_2_t294799815 ** get_address_of_U3CU3Ef__amU24cache9_9() { return &___U3CU3Ef__amU24cache9_9; }
	inline void set_U3CU3Ef__amU24cache9_9(Func_2_t294799815 * value)
	{
		___U3CU3Ef__amU24cache9_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_10() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cacheA_10)); }
	inline Func_2_t4160368915 * get_U3CU3Ef__amU24cacheA_10() const { return ___U3CU3Ef__amU24cacheA_10; }
	inline Func_2_t4160368915 ** get_address_of_U3CU3Ef__amU24cacheA_10() { return &___U3CU3Ef__amU24cacheA_10; }
	inline void set_U3CU3Ef__amU24cacheA_10(Func_2_t4160368915 * value)
	{
		___U3CU3Ef__amU24cacheA_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Func_2_t1471300603 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Func_2_t1471300603 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Func_2_t1471300603 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_12() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cacheC_12)); }
	inline Func_2_t3487134424 * get_U3CU3Ef__amU24cacheC_12() const { return ___U3CU3Ef__amU24cacheC_12; }
	inline Func_2_t3487134424 ** get_address_of_U3CU3Ef__amU24cacheC_12() { return &___U3CU3Ef__amU24cacheC_12; }
	inline void set_U3CU3Ef__amU24cacheC_12(Func_2_t3487134424 * value)
	{
		___U3CU3Ef__amU24cacheC_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_13() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cacheD_13)); }
	inline Func_2_t1235141774 * get_U3CU3Ef__amU24cacheD_13() const { return ___U3CU3Ef__amU24cacheD_13; }
	inline Func_2_t1235141774 ** get_address_of_U3CU3Ef__amU24cacheD_13() { return &___U3CU3Ef__amU24cacheD_13; }
	inline void set_U3CU3Ef__amU24cacheD_13(Func_2_t1235141774 * value)
	{
		___U3CU3Ef__amU24cacheD_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_14() { return static_cast<int32_t>(offsetof(KinectSensor_t3101321480_StaticFields, ___U3CU3Ef__amU24cacheE_14)); }
	inline Func_2_t2179708778 * get_U3CU3Ef__amU24cacheE_14() const { return ___U3CU3Ef__amU24cacheE_14; }
	inline Func_2_t2179708778 ** get_address_of_U3CU3Ef__amU24cacheE_14() { return &___U3CU3Ef__amU24cacheE_14; }
	inline void set_U3CU3Ef__amU24cacheE_14(Func_2_t2179708778 * value)
	{
		___U3CU3Ef__amU24cacheE_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
