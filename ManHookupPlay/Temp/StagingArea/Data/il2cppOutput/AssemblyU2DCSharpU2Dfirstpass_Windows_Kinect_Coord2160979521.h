#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Windows.Kinect.PointF[]
struct PointFU5BU5D_t2614903659;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.CoordinateMappingChangedEventArgs>>>
struct CollectionMap_2_t2184543983;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Kinect.CoordinateMapper
struct  CoordinateMapper_t2160979521  : public Il2CppObject
{
public:
	// Windows.Kinect.PointF[] Windows.Kinect.CoordinateMapper::_DepthFrameToCameraSpaceTable
	PointFU5BU5D_t2614903659* ____DepthFrameToCameraSpaceTable_0;
	// System.IntPtr Windows.Kinect.CoordinateMapper::_pNative
	IntPtr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__DepthFrameToCameraSpaceTable_0() { return static_cast<int32_t>(offsetof(CoordinateMapper_t2160979521, ____DepthFrameToCameraSpaceTable_0)); }
	inline PointFU5BU5D_t2614903659* get__DepthFrameToCameraSpaceTable_0() const { return ____DepthFrameToCameraSpaceTable_0; }
	inline PointFU5BU5D_t2614903659** get_address_of__DepthFrameToCameraSpaceTable_0() { return &____DepthFrameToCameraSpaceTable_0; }
	inline void set__DepthFrameToCameraSpaceTable_0(PointFU5BU5D_t2614903659* value)
	{
		____DepthFrameToCameraSpaceTable_0 = value;
		Il2CppCodeGenWriteBarrier(&____DepthFrameToCameraSpaceTable_0, value);
	}

	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(CoordinateMapper_t2160979521, ____pNative_1)); }
	inline IntPtr_t get__pNative_1() const { return ____pNative_1; }
	inline IntPtr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(IntPtr_t value)
	{
		____pNative_1 = value;
	}
};

struct CoordinateMapper_t2160979521_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.CoordinateMapper::_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle
	GCHandle_t1812538030  ____Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.CoordinateMappingChangedEventArgs>>> Windows.Kinect.CoordinateMapper::Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t2184543983 * ___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3;

public:
	inline static int32_t get_offset_of__Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2() { return static_cast<int32_t>(offsetof(CoordinateMapper_t2160979521_StaticFields, ____Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2)); }
	inline GCHandle_t1812538030  get__Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2() const { return ____Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2; }
	inline GCHandle_t1812538030 * get_address_of__Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2() { return &____Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2; }
	inline void set__Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2(GCHandle_t1812538030  value)
	{
		____Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handle_2 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3() { return static_cast<int32_t>(offsetof(CoordinateMapper_t2160979521_StaticFields, ___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3)); }
	inline CollectionMap_2_t2184543983 * get_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3() const { return ___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3; }
	inline CollectionMap_2_t2184543983 ** get_address_of_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3() { return &___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3; }
	inline void set_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3(CollectionMap_2_t2184543983 * value)
	{
		___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3 = value;
		Il2CppCodeGenWriteBarrier(&___Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_callbacks_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
