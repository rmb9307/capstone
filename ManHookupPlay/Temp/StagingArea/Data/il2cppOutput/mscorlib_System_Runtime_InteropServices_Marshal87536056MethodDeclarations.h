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

// System.Array
struct Il2CppArray;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C"  void Marshal__cctor_m156400721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_copy_to_unmanaged_m1909563134 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C"  void Marshal_copy_from_unmanaged_m1711077603 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, int32_t ___startIndex1, Il2CppArray * ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C"  void Marshal_Copy_m2999277726 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___source0, int32_t ___startIndex1, IntPtr_t ___destination2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1690250234 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, ByteU5BU5D_t4260760469* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1390445676 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source0, CharU5BU5D_t3324145743* ___destination1, int32_t ___startIndex2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
extern "C"  void Marshal_FreeCoTaskMem_m425830818 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C"  void Marshal_FreeHGlobal_m1353395547 (Il2CppObject * __this /* static, unused */, IntPtr_t ___hglobal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m701978199 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringUni_m1806311251 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C"  Il2CppObject * Marshal_PtrToStructure_m4218753760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, Type_t * ___structureType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C"  uint8_t Marshal_ReadByte_m3705434677 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C"  void Marshal_WriteByte_m4239949353 (Il2CppObject * __this /* static, unused */, IntPtr_t ___ptr0, int32_t ___ofs1, uint8_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
extern "C"  Exception_t3991598821 * Marshal_GetExceptionForHR_m165612394 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32,System.IntPtr)
extern "C"  Exception_t3991598821 * Marshal_GetExceptionForHR_m1868068728 (Il2CppObject * __this /* static, unused */, int32_t ___errorCode0, IntPtr_t ___errorInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
