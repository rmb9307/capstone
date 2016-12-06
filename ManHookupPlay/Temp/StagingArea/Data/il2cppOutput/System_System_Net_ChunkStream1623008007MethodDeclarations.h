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

// System.Net.ChunkStream
struct ChunkStream_t1623008007;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebHeaderCollection1958609721.h"
#include "System_System_Net_ChunkStream_State3599614847.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m3019842669 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, WebHeaderCollection_t1958609721 * ___headers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C"  void ChunkStream__ctor_m2952009328 (ChunkStream_t1623008007 * __this, WebHeaderCollection_t1958609721 * ___headers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C"  void ChunkStream_ResetBuffer_m2311008684 (ChunkStream_t1623008007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  void ChunkStream_WriteAndReadBack_m1174558148 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t* ___read3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_Read_m154741438 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkStream_ReadFromChunks_m1120476462 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkStream_Write_m3815252045 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ChunkStream_InternalWrite_m1638992728 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C"  bool ChunkStream_get_WantMore_m3792639849 (ChunkStream_t1623008007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C"  int32_t ChunkStream_get_ChunkLeft_m642792824 (ChunkStream_t1623008007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadBody_m977300054 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_GetChunkSize_m2303198550 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C"  String_t* ChunkStream_RemoveChunkExtension_m615575460 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadCRLF_m2102328829 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C"  int32_t ChunkStream_ReadTrailer_m3634517875 (ChunkStream_t1623008007 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C"  void ChunkStream_ThrowProtocolViolation_m4007216022 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
