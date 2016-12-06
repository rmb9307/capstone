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

// System.Net.WebConnectionStream
struct WebConnectionStream_t1804418604;
// System.Net.WebConnection
struct WebConnection_t1384678412;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3949036893;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebConnection1384678412.h"
#include "System_System_Net_HttpWebRequest3949036893.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection)
extern "C"  void WebConnectionStream__ctor_m1279182072 (WebConnectionStream_t1804418604 * __this, WebConnection_t1384678412 * ___cnc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.ctor(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C"  void WebConnectionStream__ctor_m2579331537 (WebConnectionStream_t1804418604 * __this, WebConnection_t1384678412 * ___cnc0, HttpWebRequest_t3949036893 * ___request1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::.cctor()
extern "C"  void WebConnectionStream__cctor_m1397878419 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::IsNtlmAuth()
extern "C"  bool WebConnectionStream_IsNtlmAuth_m1696095129 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckResponseInBuffer()
extern "C"  void WebConnectionStream_CheckResponseInBuffer_m2876129862 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionStream::get_Connection()
extern "C"  WebConnection_t1384678412 * WebConnectionStream_get_Connection_m2978195726 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_ReadTimeout()
extern "C"  int32_t WebConnectionStream_get_ReadTimeout_m4090731914 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteTimeout()
extern "C"  int32_t WebConnectionStream_get_WriteTimeout_m2650917989 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CompleteRequestWritten()
extern "C"  bool WebConnectionStream_get_CompleteRequestWritten_m817760810 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_SendChunked(System.Boolean)
extern "C"  void WebConnectionStream_set_SendChunked_m761764086 (WebConnectionStream_t1804418604 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBuffer(System.Byte[])
extern "C"  void WebConnectionStream_set_ReadBuffer_m3498879948 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferOffset(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferOffset_m1760629601 (WebConnectionStream_t1804418604 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_ReadBufferSize(System.Int32)
extern "C"  void WebConnectionStream_set_ReadBufferSize_m2254280015 (WebConnectionStream_t1804418604 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebConnectionStream::get_WriteBuffer()
extern "C"  ByteU5BU5D_t4260760469* WebConnectionStream_get_WriteBuffer_m2699123428 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::get_WriteBufferLength()
extern "C"  int32_t WebConnectionStream_get_WriteBufferLength_m47053412 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ForceCompletion()
extern "C"  void WebConnectionStream_ForceCompletion_m2616236063 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckComplete()
extern "C"  void WebConnectionStream_CheckComplete_m212386969 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadAll()
extern "C"  void WebConnectionStream_ReadAll_m950658339 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteCallbackWrapper_m2881691306 (WebConnectionStream_t1804418604 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::ReadCallbackWrapper(System.IAsyncResult)
extern "C"  void WebConnectionStream_ReadCallbackWrapper_m2369472659 (WebConnectionStream_t1804418604 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t WebConnectionStream_Read_m635345913 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_BeginRead_m1757407100 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t1369114871 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnectionStream::EndRead(System.IAsyncResult)
extern "C"  int32_t WebConnectionStream_EndRead_m803616490 (WebConnectionStream_t1804418604 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequestAsyncCB(System.IAsyncResult)
extern "C"  void WebConnectionStream_WriteRequestAsyncCB_m2808602240 (WebConnectionStream_t1804418604 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_BeginWrite_m1117541837 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t1369114871 * ___cb3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::CheckWriteOverflow(System.Int64,System.Int64,System.Int64)
extern "C"  void WebConnectionStream_CheckWriteOverflow_m2000670613 (WebConnectionStream_t1804418604 * __this, int64_t ___contentLength0, int64_t ___totalWritten1, int64_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::EndWrite(System.IAsyncResult)
extern "C"  void WebConnectionStream_EndWrite_m1280201525 (WebConnectionStream_t1804418604 * __this, Il2CppObject * ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void WebConnectionStream_Write_m2245002866 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Flush()
extern "C"  void WebConnectionStream_Flush_m3469727612 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetHeaders(System.Byte[])
extern "C"  void WebConnectionStream_SetHeaders_m859079643 (WebConnectionStream_t1804418604 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_RequestWritten()
extern "C"  bool WebConnectionStream_get_RequestWritten_m2994269905 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnectionStream::WriteRequestAsync(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebConnectionStream_WriteRequestAsync_m1160923980 (WebConnectionStream_t1804418604 * __this, AsyncCallback_t1369114871 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteHeaders()
extern "C"  void WebConnectionStream_WriteHeaders_m3079500177 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::WriteRequest()
extern "C"  void WebConnectionStream_WriteRequest_m3986708058 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::InternalClose()
extern "C"  void WebConnectionStream_InternalClose_m3340523763 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::Close()
extern "C"  void WebConnectionStream_Close_m801672560 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::KillBuffer()
extern "C"  void WebConnectionStream_KillBuffer_m2133152936 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t WebConnectionStream_Seek_m4285092954 (WebConnectionStream_t1804418604 * __this, int64_t ___a0, int32_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::SetLength(System.Int64)
extern "C"  void WebConnectionStream_SetLength_m4170900146 (WebConnectionStream_t1804418604 * __this, int64_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanSeek()
extern "C"  bool WebConnectionStream_get_CanSeek_m1235161633 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanRead()
extern "C"  bool WebConnectionStream_get_CanRead_m1206406591 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnectionStream::get_CanWrite()
extern "C"  bool WebConnectionStream_get_CanWrite_m3561519480 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Length()
extern "C"  int64_t WebConnectionStream_get_Length_m2762373450 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebConnectionStream::get_Position()
extern "C"  int64_t WebConnectionStream_get_Position_m572597773 (WebConnectionStream_t1804418604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionStream::set_Position(System.Int64)
extern "C"  void WebConnectionStream_set_Position_m743042146 (WebConnectionStream_t1804418604 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
