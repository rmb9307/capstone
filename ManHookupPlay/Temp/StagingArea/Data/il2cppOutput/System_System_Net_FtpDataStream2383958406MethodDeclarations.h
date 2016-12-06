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

// System.Net.FtpDataStream
struct FtpDataStream_t2383958406;
// System.Net.FtpWebRequest
struct FtpWebRequest_t3084461655;
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
#include "System_System_Net_FtpWebRequest3084461655.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.FtpDataStream::.ctor(System.Net.FtpWebRequest,System.IO.Stream,System.Boolean)
extern "C"  void FtpDataStream__ctor_m1292366195 (FtpDataStream_t2383958406 * __this, FtpWebRequest_t3084461655 * ___request0, Stream_t1561764144 * ___stream1, bool ___isRead2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::System.IDisposable.Dispose()
extern "C"  void FtpDataStream_System_IDisposable_Dispose_m1477901983 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanRead()
extern "C"  bool FtpDataStream_get_CanRead_m4232145253 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanWrite()
extern "C"  bool FtpDataStream_get_CanWrite_m2870137490 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpDataStream::get_CanSeek()
extern "C"  bool FtpDataStream_get_CanSeek_m4260900295 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Length()
extern "C"  int64_t FtpDataStream_get_Length_m1564877092 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::get_Position()
extern "C"  int64_t FtpDataStream_get_Position_m829833063 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::set_Position(System.Int64)
extern "C"  void FtpDataStream_set_Position_m2281268732 (FtpDataStream_t2383958406 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Close()
extern "C"  void FtpDataStream_Close_m2523731478 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Flush()
extern "C"  void FtpDataStream_Flush_m896819234 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpDataStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t FtpDataStream_Seek_m1228510272 (FtpDataStream_t2383958406 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::SetLength(System.Int64)
extern "C"  void FtpDataStream_SetLength_m592797528 (FtpDataStream_t2383958406 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_ReadInternal_m2823798498 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpDataStream_BeginRead_m2271171234 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t1369114871 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::EndRead(System.IAsyncResult)
extern "C"  int32_t FtpDataStream_EndRead_m3674314244 (FtpDataStream_t2383958406 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t FtpDataStream_Read_m3453883423 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_WriteInternal_m1319050447 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpDataStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FtpDataStream_BeginWrite_m4159328103 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t1369114871 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::EndWrite(System.IAsyncResult)
extern "C"  void FtpDataStream_EndWrite_m3582344027 (FtpDataStream_t2383958406 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void FtpDataStream_Write_m336375564 (FtpDataStream_t2383958406 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Finalize()
extern "C"  void FtpDataStream_Finalize_m1344737122 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::Dispose(System.Boolean)
extern "C"  void FtpDataStream_Dispose_m46359540 (FtpDataStream_t2383958406 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream::CheckDisposed()
extern "C"  void FtpDataStream_CheckDisposed_m4269287723 (FtpDataStream_t2383958406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
