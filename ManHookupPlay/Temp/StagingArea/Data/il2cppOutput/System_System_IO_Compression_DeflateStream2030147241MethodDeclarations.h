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

// System.IO.Compression.DeflateStream
struct DeflateStream_t2030147241;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t2055733333;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_IO_Compression_CompressionMode1453657991.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"
#include "System_System_IO_Compression_DeflateStream_Unmanag2055733333.h"

// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C"  void DeflateStream__ctor_m2170106875 (DeflateStream_t2030147241 * __this, Stream_t1561764144 * ___compressedStream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
extern "C"  void DeflateStream__ctor_m3336782107 (DeflateStream_t2030147241 * __this, Stream_t1561764144 * ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, bool ___gzip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
extern "C"  void DeflateStream_Dispose_m1280984772 (DeflateStream_t2030147241 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedRead_m404803083 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedRead_m404803083(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedRead(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedRead_m709889853 (DeflateStream_t2030147241 * __this, IntPtr_t ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m223973422 (Il2CppObject * __this /* static, unused */, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_DeflateStream_UnmanagedWrite_m223973422(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
// System.Int32 System.IO.Compression.DeflateStream::UnmanagedWrite(System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_UnmanagedWrite_m1575352992 (DeflateStream_t2030147241 * __this, IntPtr_t ___buffer0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_ReadInternal_m2114588690 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t DeflateStream_Read_m2966721871 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___dest0, int32_t ___dest_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_WriteInternal_m2447368191 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DeflateStream_Write_m2199626300 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___src0, int32_t ___src_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::CheckResult(System.Int32,System.String)
extern "C"  void DeflateStream_CheckResult_m2220407616 (Il2CppObject * __this /* static, unused */, int32_t ___result0, String_t* ___where1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::Flush()
extern "C"  void DeflateStream_Flush_m508224242 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginRead_m3772188154 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DeflateStream_BeginWrite_m3446212367 (DeflateStream_t2030147241 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
extern "C"  int32_t DeflateStream_EndRead_m1762250452 (DeflateStream_t2030147241 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
extern "C"  void DeflateStream_EndWrite_m1375453739 (DeflateStream_t2030147241 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t DeflateStream_Seek_m4251260626 (DeflateStream_t2030147241 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
extern "C"  void DeflateStream_SetLength_m1827422760 (DeflateStream_t2030147241 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
extern "C"  bool DeflateStream_get_CanRead_m1107799201 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
extern "C"  bool DeflateStream_get_CanSeek_m1136554243 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
extern "C"  bool DeflateStream_get_CanWrite_m504690390 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
extern "C"  int64_t DeflateStream_get_Length_m2424152530 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
extern "C"  int64_t DeflateStream_get_Position_m1959808149 (DeflateStream_t2030147241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
extern "C"  void DeflateStream_set_Position_m901632300 (DeflateStream_t2030147241 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.Compression.DeflateStream::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStream/UnmanagedReadOrWrite,System.IntPtr)
extern "C"  IntPtr_t DeflateStream_CreateZStream_m2804070747 (Il2CppObject * __this /* static, unused */, int32_t ___compress0, bool ___gzip1, UnmanagedReadOrWrite_t2055733333 * ___feeder2, IntPtr_t ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::CloseZStream(System.IntPtr)
extern "C"  int32_t DeflateStream_CloseZStream_m216284366 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::Flush(System.IntPtr)
extern "C"  int32_t DeflateStream_Flush_m1378424946 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::ReadZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_ReadZStream_m630967223 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, IntPtr_t ___buffer1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream::WriteZStream(System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DeflateStream_WriteZStream_m123938164 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stream0, IntPtr_t ___buffer1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
