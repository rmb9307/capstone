#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Helper.EventPump
struct EventPump_t1332806428;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Helper_EventPump1332806428.h"
#include "System_Core_System_Action3771233898.h"

// System.Void Helper.EventPump::.ctor()
extern "C"  void EventPump__ctor_m3532508589 (EventPump_t1332806428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::.cctor()
extern "C"  void EventPump__cctor_m1651487648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Helper.EventPump Helper.EventPump::get_Instance()
extern "C"  EventPump_t1332806428 * EventPump_get_Instance_m944743384 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::set_Instance(Helper.EventPump)
extern "C"  void EventPump_set_Instance_m2570131879 (Il2CppObject * __this /* static, unused */, EventPump_t1332806428 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::EnsureInitialized()
extern "C"  void EventPump_EnsureInitialized_m1381891585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::Update()
extern "C"  void EventPump_Update_m3860445952 (EventPump_t1332806428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::OnApplicationQuit()
extern "C"  void EventPump_OnApplicationQuit_m1859526571 (EventPump_t1332806428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Helper.EventPump::Enqueue(System.Action)
extern "C"  void EventPump_Enqueue_m2042171402 (EventPump_t1332806428 * __this, Action_t3771233898 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
