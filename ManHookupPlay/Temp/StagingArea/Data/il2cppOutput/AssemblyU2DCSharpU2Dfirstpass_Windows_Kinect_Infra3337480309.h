#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>>>
struct CollectionMap_2_t1927393436;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct CollectionMap_2_t4171297104;
// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription>
struct Func_2_t341995581;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>
struct Func_2_t1235141774;
// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameReader>
struct Func_2_t1432827043;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.InfraredFrameSource
struct  InfraredFrameSource_t3337480309  : public Il2CppObject
{
public:
	// System.IntPtr Windows.Kinect.InfraredFrameSource::_pNative
	IntPtr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309, ____pNative_0)); }
	inline IntPtr_t get__pNative_0() const { return ____pNative_0; }
	inline IntPtr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(IntPtr_t value)
	{
		____pNative_0 = value;
	}
};

struct InfraredFrameSource_t3337480309_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.InfraredFrameSource::_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle
	GCHandle_t1812538030  ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>>> Windows.Kinect.InfraredFrameSource::Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks
	CollectionMap_2_t1927393436 * ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.InfraredFrameSource::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t1812538030  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.InfraredFrameSource::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t4171297104 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;
	// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription> Windows.Kinect.InfraredFrameSource::<>f__am$cache5
	Func_2_t341995581 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor> Windows.Kinect.InfraredFrameSource::<>f__am$cache6
	Func_2_t1235141774 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameReader> Windows.Kinect.InfraredFrameSource::<>f__am$cache7
	Func_2_t1432827043 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t1812538030  get__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t1812538030 * get_address_of__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1(GCHandle_t1812538030  value)
	{
		____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t1927393436 * get_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t1927393436 ** get_address_of_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2(CollectionMap_2_t1927393436 * value)
	{
		___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2, value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t1812538030  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t1812538030 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t1812538030  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t4171297104 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t4171297104 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t4171297104 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t341995581 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t341995581 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t341995581 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t1235141774 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t1235141774 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t1235141774 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(InfraredFrameSource_t3337480309_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t1432827043 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t1432827043 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t1432827043 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
