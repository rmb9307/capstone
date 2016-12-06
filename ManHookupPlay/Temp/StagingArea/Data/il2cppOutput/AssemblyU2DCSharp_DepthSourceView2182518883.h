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
// Windows.Kinect.KinectSensor
struct KinectSensor_t3101321480;
// Windows.Kinect.CoordinateMapper
struct CoordinateMapper_t2160979521;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// MultiSourceManager
struct MultiSourceManager_t3917223545;
// ColorSourceManager
struct ColorSourceManager_t2270236815;
// DepthSourceManager
struct DepthSourceManager_t2586243375;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_DepthViewMode3223648683.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DepthSourceView
struct  DepthSourceView_t2182518883  : public MonoBehaviour_t667441552
{
public:
	// DepthViewMode DepthSourceView::ViewMode
	int32_t ___ViewMode_5;
	// UnityEngine.GameObject DepthSourceView::ColorSourceManager
	GameObject_t3674682005 * ___ColorSourceManager_6;
	// UnityEngine.GameObject DepthSourceView::DepthSourceManager
	GameObject_t3674682005 * ___DepthSourceManager_7;
	// UnityEngine.GameObject DepthSourceView::MultiSourceManager
	GameObject_t3674682005 * ___MultiSourceManager_8;
	// Windows.Kinect.KinectSensor DepthSourceView::_Sensor
	KinectSensor_t3101321480 * ____Sensor_9;
	// Windows.Kinect.CoordinateMapper DepthSourceView::_Mapper
	CoordinateMapper_t2160979521 * ____Mapper_10;
	// UnityEngine.Mesh DepthSourceView::_Mesh
	Mesh_t4241756145 * ____Mesh_11;
	// UnityEngine.Vector3[] DepthSourceView::_Vertices
	Vector3U5BU5D_t215400611* ____Vertices_12;
	// UnityEngine.Vector2[] DepthSourceView::_UV
	Vector2U5BU5D_t4024180168* ____UV_13;
	// System.Int32[] DepthSourceView::_Triangles
	Int32U5BU5D_t3230847821* ____Triangles_14;
	// MultiSourceManager DepthSourceView::_MultiManager
	MultiSourceManager_t3917223545 * ____MultiManager_15;
	// ColorSourceManager DepthSourceView::_ColorManager
	ColorSourceManager_t2270236815 * ____ColorManager_16;
	// DepthSourceManager DepthSourceView::_DepthManager
	DepthSourceManager_t2586243375 * ____DepthManager_17;

public:
	inline static int32_t get_offset_of_ViewMode_5() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ___ViewMode_5)); }
	inline int32_t get_ViewMode_5() const { return ___ViewMode_5; }
	inline int32_t* get_address_of_ViewMode_5() { return &___ViewMode_5; }
	inline void set_ViewMode_5(int32_t value)
	{
		___ViewMode_5 = value;
	}

	inline static int32_t get_offset_of_ColorSourceManager_6() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ___ColorSourceManager_6)); }
	inline GameObject_t3674682005 * get_ColorSourceManager_6() const { return ___ColorSourceManager_6; }
	inline GameObject_t3674682005 ** get_address_of_ColorSourceManager_6() { return &___ColorSourceManager_6; }
	inline void set_ColorSourceManager_6(GameObject_t3674682005 * value)
	{
		___ColorSourceManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___ColorSourceManager_6, value);
	}

	inline static int32_t get_offset_of_DepthSourceManager_7() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ___DepthSourceManager_7)); }
	inline GameObject_t3674682005 * get_DepthSourceManager_7() const { return ___DepthSourceManager_7; }
	inline GameObject_t3674682005 ** get_address_of_DepthSourceManager_7() { return &___DepthSourceManager_7; }
	inline void set_DepthSourceManager_7(GameObject_t3674682005 * value)
	{
		___DepthSourceManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___DepthSourceManager_7, value);
	}

	inline static int32_t get_offset_of_MultiSourceManager_8() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ___MultiSourceManager_8)); }
	inline GameObject_t3674682005 * get_MultiSourceManager_8() const { return ___MultiSourceManager_8; }
	inline GameObject_t3674682005 ** get_address_of_MultiSourceManager_8() { return &___MultiSourceManager_8; }
	inline void set_MultiSourceManager_8(GameObject_t3674682005 * value)
	{
		___MultiSourceManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___MultiSourceManager_8, value);
	}

	inline static int32_t get_offset_of__Sensor_9() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____Sensor_9)); }
	inline KinectSensor_t3101321480 * get__Sensor_9() const { return ____Sensor_9; }
	inline KinectSensor_t3101321480 ** get_address_of__Sensor_9() { return &____Sensor_9; }
	inline void set__Sensor_9(KinectSensor_t3101321480 * value)
	{
		____Sensor_9 = value;
		Il2CppCodeGenWriteBarrier(&____Sensor_9, value);
	}

	inline static int32_t get_offset_of__Mapper_10() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____Mapper_10)); }
	inline CoordinateMapper_t2160979521 * get__Mapper_10() const { return ____Mapper_10; }
	inline CoordinateMapper_t2160979521 ** get_address_of__Mapper_10() { return &____Mapper_10; }
	inline void set__Mapper_10(CoordinateMapper_t2160979521 * value)
	{
		____Mapper_10 = value;
		Il2CppCodeGenWriteBarrier(&____Mapper_10, value);
	}

	inline static int32_t get_offset_of__Mesh_11() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____Mesh_11)); }
	inline Mesh_t4241756145 * get__Mesh_11() const { return ____Mesh_11; }
	inline Mesh_t4241756145 ** get_address_of__Mesh_11() { return &____Mesh_11; }
	inline void set__Mesh_11(Mesh_t4241756145 * value)
	{
		____Mesh_11 = value;
		Il2CppCodeGenWriteBarrier(&____Mesh_11, value);
	}

	inline static int32_t get_offset_of__Vertices_12() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____Vertices_12)); }
	inline Vector3U5BU5D_t215400611* get__Vertices_12() const { return ____Vertices_12; }
	inline Vector3U5BU5D_t215400611** get_address_of__Vertices_12() { return &____Vertices_12; }
	inline void set__Vertices_12(Vector3U5BU5D_t215400611* value)
	{
		____Vertices_12 = value;
		Il2CppCodeGenWriteBarrier(&____Vertices_12, value);
	}

	inline static int32_t get_offset_of__UV_13() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____UV_13)); }
	inline Vector2U5BU5D_t4024180168* get__UV_13() const { return ____UV_13; }
	inline Vector2U5BU5D_t4024180168** get_address_of__UV_13() { return &____UV_13; }
	inline void set__UV_13(Vector2U5BU5D_t4024180168* value)
	{
		____UV_13 = value;
		Il2CppCodeGenWriteBarrier(&____UV_13, value);
	}

	inline static int32_t get_offset_of__Triangles_14() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____Triangles_14)); }
	inline Int32U5BU5D_t3230847821* get__Triangles_14() const { return ____Triangles_14; }
	inline Int32U5BU5D_t3230847821** get_address_of__Triangles_14() { return &____Triangles_14; }
	inline void set__Triangles_14(Int32U5BU5D_t3230847821* value)
	{
		____Triangles_14 = value;
		Il2CppCodeGenWriteBarrier(&____Triangles_14, value);
	}

	inline static int32_t get_offset_of__MultiManager_15() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____MultiManager_15)); }
	inline MultiSourceManager_t3917223545 * get__MultiManager_15() const { return ____MultiManager_15; }
	inline MultiSourceManager_t3917223545 ** get_address_of__MultiManager_15() { return &____MultiManager_15; }
	inline void set__MultiManager_15(MultiSourceManager_t3917223545 * value)
	{
		____MultiManager_15 = value;
		Il2CppCodeGenWriteBarrier(&____MultiManager_15, value);
	}

	inline static int32_t get_offset_of__ColorManager_16() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____ColorManager_16)); }
	inline ColorSourceManager_t2270236815 * get__ColorManager_16() const { return ____ColorManager_16; }
	inline ColorSourceManager_t2270236815 ** get_address_of__ColorManager_16() { return &____ColorManager_16; }
	inline void set__ColorManager_16(ColorSourceManager_t2270236815 * value)
	{
		____ColorManager_16 = value;
		Il2CppCodeGenWriteBarrier(&____ColorManager_16, value);
	}

	inline static int32_t get_offset_of__DepthManager_17() { return static_cast<int32_t>(offsetof(DepthSourceView_t2182518883, ____DepthManager_17)); }
	inline DepthSourceManager_t2586243375 * get__DepthManager_17() const { return ____DepthManager_17; }
	inline DepthSourceManager_t2586243375 ** get_address_of__DepthManager_17() { return &____DepthManager_17; }
	inline void set__DepthManager_17(DepthSourceManager_t2586243375 * value)
	{
		____DepthManager_17 = value;
		Il2CppCodeGenWriteBarrier(&____DepthManager_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
