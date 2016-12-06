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

// System.IO.Compression.GZipStream
struct GZipStream_t183418746;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_IO_Compression_CompressionMode1453657991.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
extern "C"  void GZipStream__ctor_m2136427100 (GZipStream_t183418746 * __this, Stream_t1561764144 * ___compressedStream0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
extern "C"  void GZipStream__ctor_m1301775777 (GZipStream_t183418746 * __this, Stream_t1561764144 * ___compressedStream0, int32_t ___mode1, bool ___leaveOpen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
extern "C"  void GZipStream_Dispose_m1233763813 (GZipStream_t183418746 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t GZipStream_Read_m295052112 (GZipStream_t183418746 * __this, ByteU5BU5D_t4260760469* ___dest0, int32_t ___dest_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void GZipStream_Write_m1453962747 (GZipStream_t183418746 * __this, ByteU5BU5D_t4260760469* ___src0, int32_t ___src_offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::Flush()
extern "C"  void GZipStream_Flush_m1315355667 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t GZipStream_Seek_m2685013297 (GZipStream_t183418746 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
extern "C"  void GZipStream_SetLength_m1780201801 (GZipStream_t183418746 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginRead_m2476912851 (GZipStream_t183418746 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GZipStream_BeginWrite_m1947383638 (GZipStream_t183418746 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
extern "C"  int32_t GZipStream_EndRead_m2882247347 (GZipStream_t183418746 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
extern "C"  void GZipStream_EndWrite_m1193516172 (GZipStream_t183418746 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
extern "C"  bool GZipStream_get_CanRead_m1595474582 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
extern "C"  bool GZipStream_get_CanSeek_m1624229624 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
extern "C"  bool GZipStream_get_CanWrite_m2737725313 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Length()
extern "C"  int64_t GZipStream_get_Length_m449516243 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.Compression.GZipStream::get_Position()
extern "C"  int64_t GZipStream_get_Position_m2709881174 (GZipStream_t183418746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
extern "C"  void GZipStream_set_Position_m2891315819 (GZipStream_t183418746 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
