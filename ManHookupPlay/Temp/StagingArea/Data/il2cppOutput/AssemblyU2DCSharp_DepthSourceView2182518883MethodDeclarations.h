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

// DepthSourceView
struct DepthSourceView_t2182518883;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;

#include "codegen/il2cpp-codegen.h"

// System.Void DepthSourceView::.ctor()
extern "C"  void DepthSourceView__ctor_m1549987432 (DepthSourceView_t2182518883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::Start()
extern "C"  void DepthSourceView_Start_m497125224 (DepthSourceView_t2182518883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::CreateMesh(System.Int32,System.Int32)
extern "C"  void DepthSourceView_CreateMesh_m812314209 (DepthSourceView_t2182518883 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::OnGUI()
extern "C"  void DepthSourceView_OnGUI_m1045386082 (DepthSourceView_t2182518883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::Update()
extern "C"  void DepthSourceView_Update_m2531832229 (DepthSourceView_t2182518883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::RefreshData(System.UInt16[],System.Int32,System.Int32)
extern "C"  void DepthSourceView_RefreshData_m2351098791 (DepthSourceView_t2182518883 * __this, UInt16U5BU5D_t801649474* ___depthData0, int32_t ___colorWidth1, int32_t ___colorHeight2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double DepthSourceView::GetAvg(System.UInt16[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  double DepthSourceView_GetAvg_m2194593533 (DepthSourceView_t2182518883 * __this, UInt16U5BU5D_t801649474* ___depthData0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DepthSourceView::OnApplicationQuit()
extern "C"  void DepthSourceView_OnApplicationQuit_m2075197414 (DepthSourceView_t2182518883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
