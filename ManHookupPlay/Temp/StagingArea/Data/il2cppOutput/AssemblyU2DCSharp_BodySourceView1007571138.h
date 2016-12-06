#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.GameObject>
struct Dictionary_2_t2615026932;
// BodySourceManager
struct BodySourceManager_t3701434480;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.JointType>
struct Dictionary_2_t25964339;
// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,System.Single>
struct Dictionary_2_t1351449853;
// BodyRecording/Frame
struct Frame_t2738196877;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t2116068307;
// BodyRecording
struct BodyRecording_t646269519;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_BodySourceView_Mode3995784944.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodySourceView
struct  BodySourceView_t1007571138  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material BodySourceView::BoneMaterial
	Material_t3870600107 * ___BoneMaterial_2;
	// UnityEngine.GameObject BodySourceView::BodySourceManager
	GameObject_t3674682005 * ___BodySourceManager_3;
	// UnityEngine.UI.Dropdown BodySourceView::ModeDropdown
	Dropdown_t4201779933 * ___ModeDropdown_4;
	// UnityEngine.UI.Dropdown BodySourceView::SceneDropdown
	Dropdown_t4201779933 * ___SceneDropdown_5;
	// UnityEngine.UI.Dropdown BodySourceView::ActionDropdown
	Dropdown_t4201779933 * ___ActionDropdown_6;
	// UnityEngine.GameObject BodySourceView::YogaStudio
	GameObject_t3674682005 * ___YogaStudio_7;
	// UnityEngine.GameObject BodySourceView::BasketballCourt
	GameObject_t3674682005 * ___BasketballCourt_8;
	// UnityEngine.GameObject BodySourceView::Gym
	GameObject_t3674682005 * ___Gym_9;
	// UnityEngine.UI.Dropdown BodySourceView::ModelDropdown
	Dropdown_t4201779933 * ___ModelDropdown_10;
	// UnityEngine.GameObject BodySourceView::Female
	GameObject_t3674682005 * ___Female_11;
	// UnityEngine.GameObject BodySourceView::Ogre
	GameObject_t3674682005 * ___Ogre_12;
	// UnityEngine.GameObject BodySourceView::Male
	GameObject_t3674682005 * ___Male_13;
	// UnityEngine.GameObject[] BodySourceView::bubbles
	GameObjectU5BU5D_t2662109048* ___bubbles_14;
	// System.Boolean BodySourceView::bubbleBoyShowing
	bool ___bubbleBoyShowing_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,UnityEngine.GameObject> BodySourceView::_Bodies
	Dictionary_2_t2615026932 * ____Bodies_16;
	// BodySourceManager BodySourceView::_BodyManager
	BodySourceManager_t3701434480 * ____BodyManager_17;
	// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,Windows.Kinect.JointType> BodySourceView::_BoneMap
	Dictionary_2_t25964339 * ____BoneMap_18;
	// System.Collections.Generic.Dictionary`2<Windows.Kinect.JointType,System.Single> BodySourceView::jointSizes
	Dictionary_2_t1351449853 * ___jointSizes_19;
	// BodySourceView/Mode BodySourceView::mode
	int32_t ___mode_20;
	// System.Boolean BodySourceView::actuallyRecord
	bool ___actuallyRecord_21;
	// System.Int32 BodySourceView::frameNo
	int32_t ___frameNo_22;
	// System.Int32 BodySourceView::tick
	int32_t ___tick_23;
	// BodyRecording/Frame BodySourceView::frame
	Frame_t2738196877 * ___frame_24;
	// System.Xml.Serialization.XmlSerializer BodySourceView::serializer
	XmlSerializer_t2116068307 * ___serializer_25;
	// BodyRecording BodySourceView::xmlRecording
	BodyRecording_t646269519 * ___xmlRecording_26;
	// BodyRecording BodySourceView::loadedRecording
	BodyRecording_t646269519 * ___loadedRecording_27;

public:
	inline static int32_t get_offset_of_BoneMaterial_2() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___BoneMaterial_2)); }
	inline Material_t3870600107 * get_BoneMaterial_2() const { return ___BoneMaterial_2; }
	inline Material_t3870600107 ** get_address_of_BoneMaterial_2() { return &___BoneMaterial_2; }
	inline void set_BoneMaterial_2(Material_t3870600107 * value)
	{
		___BoneMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___BoneMaterial_2, value);
	}

	inline static int32_t get_offset_of_BodySourceManager_3() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___BodySourceManager_3)); }
	inline GameObject_t3674682005 * get_BodySourceManager_3() const { return ___BodySourceManager_3; }
	inline GameObject_t3674682005 ** get_address_of_BodySourceManager_3() { return &___BodySourceManager_3; }
	inline void set_BodySourceManager_3(GameObject_t3674682005 * value)
	{
		___BodySourceManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___BodySourceManager_3, value);
	}

	inline static int32_t get_offset_of_ModeDropdown_4() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___ModeDropdown_4)); }
	inline Dropdown_t4201779933 * get_ModeDropdown_4() const { return ___ModeDropdown_4; }
	inline Dropdown_t4201779933 ** get_address_of_ModeDropdown_4() { return &___ModeDropdown_4; }
	inline void set_ModeDropdown_4(Dropdown_t4201779933 * value)
	{
		___ModeDropdown_4 = value;
		Il2CppCodeGenWriteBarrier(&___ModeDropdown_4, value);
	}

	inline static int32_t get_offset_of_SceneDropdown_5() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___SceneDropdown_5)); }
	inline Dropdown_t4201779933 * get_SceneDropdown_5() const { return ___SceneDropdown_5; }
	inline Dropdown_t4201779933 ** get_address_of_SceneDropdown_5() { return &___SceneDropdown_5; }
	inline void set_SceneDropdown_5(Dropdown_t4201779933 * value)
	{
		___SceneDropdown_5 = value;
		Il2CppCodeGenWriteBarrier(&___SceneDropdown_5, value);
	}

	inline static int32_t get_offset_of_ActionDropdown_6() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___ActionDropdown_6)); }
	inline Dropdown_t4201779933 * get_ActionDropdown_6() const { return ___ActionDropdown_6; }
	inline Dropdown_t4201779933 ** get_address_of_ActionDropdown_6() { return &___ActionDropdown_6; }
	inline void set_ActionDropdown_6(Dropdown_t4201779933 * value)
	{
		___ActionDropdown_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDropdown_6, value);
	}

	inline static int32_t get_offset_of_YogaStudio_7() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___YogaStudio_7)); }
	inline GameObject_t3674682005 * get_YogaStudio_7() const { return ___YogaStudio_7; }
	inline GameObject_t3674682005 ** get_address_of_YogaStudio_7() { return &___YogaStudio_7; }
	inline void set_YogaStudio_7(GameObject_t3674682005 * value)
	{
		___YogaStudio_7 = value;
		Il2CppCodeGenWriteBarrier(&___YogaStudio_7, value);
	}

	inline static int32_t get_offset_of_BasketballCourt_8() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___BasketballCourt_8)); }
	inline GameObject_t3674682005 * get_BasketballCourt_8() const { return ___BasketballCourt_8; }
	inline GameObject_t3674682005 ** get_address_of_BasketballCourt_8() { return &___BasketballCourt_8; }
	inline void set_BasketballCourt_8(GameObject_t3674682005 * value)
	{
		___BasketballCourt_8 = value;
		Il2CppCodeGenWriteBarrier(&___BasketballCourt_8, value);
	}

	inline static int32_t get_offset_of_Gym_9() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___Gym_9)); }
	inline GameObject_t3674682005 * get_Gym_9() const { return ___Gym_9; }
	inline GameObject_t3674682005 ** get_address_of_Gym_9() { return &___Gym_9; }
	inline void set_Gym_9(GameObject_t3674682005 * value)
	{
		___Gym_9 = value;
		Il2CppCodeGenWriteBarrier(&___Gym_9, value);
	}

	inline static int32_t get_offset_of_ModelDropdown_10() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___ModelDropdown_10)); }
	inline Dropdown_t4201779933 * get_ModelDropdown_10() const { return ___ModelDropdown_10; }
	inline Dropdown_t4201779933 ** get_address_of_ModelDropdown_10() { return &___ModelDropdown_10; }
	inline void set_ModelDropdown_10(Dropdown_t4201779933 * value)
	{
		___ModelDropdown_10 = value;
		Il2CppCodeGenWriteBarrier(&___ModelDropdown_10, value);
	}

	inline static int32_t get_offset_of_Female_11() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___Female_11)); }
	inline GameObject_t3674682005 * get_Female_11() const { return ___Female_11; }
	inline GameObject_t3674682005 ** get_address_of_Female_11() { return &___Female_11; }
	inline void set_Female_11(GameObject_t3674682005 * value)
	{
		___Female_11 = value;
		Il2CppCodeGenWriteBarrier(&___Female_11, value);
	}

	inline static int32_t get_offset_of_Ogre_12() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___Ogre_12)); }
	inline GameObject_t3674682005 * get_Ogre_12() const { return ___Ogre_12; }
	inline GameObject_t3674682005 ** get_address_of_Ogre_12() { return &___Ogre_12; }
	inline void set_Ogre_12(GameObject_t3674682005 * value)
	{
		___Ogre_12 = value;
		Il2CppCodeGenWriteBarrier(&___Ogre_12, value);
	}

	inline static int32_t get_offset_of_Male_13() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___Male_13)); }
	inline GameObject_t3674682005 * get_Male_13() const { return ___Male_13; }
	inline GameObject_t3674682005 ** get_address_of_Male_13() { return &___Male_13; }
	inline void set_Male_13(GameObject_t3674682005 * value)
	{
		___Male_13 = value;
		Il2CppCodeGenWriteBarrier(&___Male_13, value);
	}

	inline static int32_t get_offset_of_bubbles_14() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___bubbles_14)); }
	inline GameObjectU5BU5D_t2662109048* get_bubbles_14() const { return ___bubbles_14; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_bubbles_14() { return &___bubbles_14; }
	inline void set_bubbles_14(GameObjectU5BU5D_t2662109048* value)
	{
		___bubbles_14 = value;
		Il2CppCodeGenWriteBarrier(&___bubbles_14, value);
	}

	inline static int32_t get_offset_of_bubbleBoyShowing_15() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___bubbleBoyShowing_15)); }
	inline bool get_bubbleBoyShowing_15() const { return ___bubbleBoyShowing_15; }
	inline bool* get_address_of_bubbleBoyShowing_15() { return &___bubbleBoyShowing_15; }
	inline void set_bubbleBoyShowing_15(bool value)
	{
		___bubbleBoyShowing_15 = value;
	}

	inline static int32_t get_offset_of__Bodies_16() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ____Bodies_16)); }
	inline Dictionary_2_t2615026932 * get__Bodies_16() const { return ____Bodies_16; }
	inline Dictionary_2_t2615026932 ** get_address_of__Bodies_16() { return &____Bodies_16; }
	inline void set__Bodies_16(Dictionary_2_t2615026932 * value)
	{
		____Bodies_16 = value;
		Il2CppCodeGenWriteBarrier(&____Bodies_16, value);
	}

	inline static int32_t get_offset_of__BodyManager_17() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ____BodyManager_17)); }
	inline BodySourceManager_t3701434480 * get__BodyManager_17() const { return ____BodyManager_17; }
	inline BodySourceManager_t3701434480 ** get_address_of__BodyManager_17() { return &____BodyManager_17; }
	inline void set__BodyManager_17(BodySourceManager_t3701434480 * value)
	{
		____BodyManager_17 = value;
		Il2CppCodeGenWriteBarrier(&____BodyManager_17, value);
	}

	inline static int32_t get_offset_of__BoneMap_18() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ____BoneMap_18)); }
	inline Dictionary_2_t25964339 * get__BoneMap_18() const { return ____BoneMap_18; }
	inline Dictionary_2_t25964339 ** get_address_of__BoneMap_18() { return &____BoneMap_18; }
	inline void set__BoneMap_18(Dictionary_2_t25964339 * value)
	{
		____BoneMap_18 = value;
		Il2CppCodeGenWriteBarrier(&____BoneMap_18, value);
	}

	inline static int32_t get_offset_of_jointSizes_19() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___jointSizes_19)); }
	inline Dictionary_2_t1351449853 * get_jointSizes_19() const { return ___jointSizes_19; }
	inline Dictionary_2_t1351449853 ** get_address_of_jointSizes_19() { return &___jointSizes_19; }
	inline void set_jointSizes_19(Dictionary_2_t1351449853 * value)
	{
		___jointSizes_19 = value;
		Il2CppCodeGenWriteBarrier(&___jointSizes_19, value);
	}

	inline static int32_t get_offset_of_mode_20() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___mode_20)); }
	inline int32_t get_mode_20() const { return ___mode_20; }
	inline int32_t* get_address_of_mode_20() { return &___mode_20; }
	inline void set_mode_20(int32_t value)
	{
		___mode_20 = value;
	}

	inline static int32_t get_offset_of_actuallyRecord_21() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___actuallyRecord_21)); }
	inline bool get_actuallyRecord_21() const { return ___actuallyRecord_21; }
	inline bool* get_address_of_actuallyRecord_21() { return &___actuallyRecord_21; }
	inline void set_actuallyRecord_21(bool value)
	{
		___actuallyRecord_21 = value;
	}

	inline static int32_t get_offset_of_frameNo_22() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___frameNo_22)); }
	inline int32_t get_frameNo_22() const { return ___frameNo_22; }
	inline int32_t* get_address_of_frameNo_22() { return &___frameNo_22; }
	inline void set_frameNo_22(int32_t value)
	{
		___frameNo_22 = value;
	}

	inline static int32_t get_offset_of_tick_23() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___tick_23)); }
	inline int32_t get_tick_23() const { return ___tick_23; }
	inline int32_t* get_address_of_tick_23() { return &___tick_23; }
	inline void set_tick_23(int32_t value)
	{
		___tick_23 = value;
	}

	inline static int32_t get_offset_of_frame_24() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___frame_24)); }
	inline Frame_t2738196877 * get_frame_24() const { return ___frame_24; }
	inline Frame_t2738196877 ** get_address_of_frame_24() { return &___frame_24; }
	inline void set_frame_24(Frame_t2738196877 * value)
	{
		___frame_24 = value;
		Il2CppCodeGenWriteBarrier(&___frame_24, value);
	}

	inline static int32_t get_offset_of_serializer_25() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___serializer_25)); }
	inline XmlSerializer_t2116068307 * get_serializer_25() const { return ___serializer_25; }
	inline XmlSerializer_t2116068307 ** get_address_of_serializer_25() { return &___serializer_25; }
	inline void set_serializer_25(XmlSerializer_t2116068307 * value)
	{
		___serializer_25 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_25, value);
	}

	inline static int32_t get_offset_of_xmlRecording_26() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___xmlRecording_26)); }
	inline BodyRecording_t646269519 * get_xmlRecording_26() const { return ___xmlRecording_26; }
	inline BodyRecording_t646269519 ** get_address_of_xmlRecording_26() { return &___xmlRecording_26; }
	inline void set_xmlRecording_26(BodyRecording_t646269519 * value)
	{
		___xmlRecording_26 = value;
		Il2CppCodeGenWriteBarrier(&___xmlRecording_26, value);
	}

	inline static int32_t get_offset_of_loadedRecording_27() { return static_cast<int32_t>(offsetof(BodySourceView_t1007571138, ___loadedRecording_27)); }
	inline BodyRecording_t646269519 * get_loadedRecording_27() const { return ___loadedRecording_27; }
	inline BodyRecording_t646269519 ** get_address_of_loadedRecording_27() { return &___loadedRecording_27; }
	inline void set_loadedRecording_27(BodyRecording_t646269519 * value)
	{
		___loadedRecording_27 = value;
		Il2CppCodeGenWriteBarrier(&___loadedRecording_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
