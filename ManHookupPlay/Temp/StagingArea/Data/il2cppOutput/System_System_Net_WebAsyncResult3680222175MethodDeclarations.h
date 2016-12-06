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

// System.Net.WebAsyncResult
struct WebAsyncResult_t3680222175;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3949036893;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Exception
struct Exception_t3991598821;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.HttpWebResponse
struct HttpWebResponse_t3793423559;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.IAsyncResult
struct IAsyncResult_t2754620036;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_HttpWebRequest3949036893.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_Net_HttpWebResponse3793423559.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m1701398049 (WebAsyncResult_t3680222175 * __this, AsyncCallback_t1369114871 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C"  void WebAsyncResult__ctor_m3971274728 (WebAsyncResult_t3680222175 * __this, HttpWebRequest_t3949036893 * ___request0, AsyncCallback_t1369114871 * ___cb1, Il2CppObject * ___state2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C"  void WebAsyncResult__ctor_m3917357508 (WebAsyncResult_t3680222175 * __this, AsyncCallback_t1369114871 * ___cb0, Il2CppObject * ___state1, ByteU5BU5D_t4260760469* ___buffer2, int32_t ___offset3, int32_t ___size4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void WebAsyncResult_SetCompleted_m3561553639 (WebAsyncResult_t3680222175 * __this, bool ___synch0, Exception_t3991598821 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C"  void WebAsyncResult_Reset_m1140937314 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C"  void WebAsyncResult_SetCompleted_m2960316168 (WebAsyncResult_t3680222175 * __this, bool ___synch0, int32_t ___nbytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C"  void WebAsyncResult_SetCompleted_m3009393870 (WebAsyncResult_t3680222175 * __this, bool ___synch0, Stream_t1561764144 * ___writeStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C"  void WebAsyncResult_SetCompleted_m400315642 (WebAsyncResult_t3680222175 * __this, bool ___synch0, HttpWebResponse_t3793423559 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C"  void WebAsyncResult_DoCallback_m612756063 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C"  void WebAsyncResult_WaitUntilComplete_m2752681109 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool WebAsyncResult_WaitUntilComplete_m4143413377 (WebAsyncResult_t3680222175 * __this, int32_t ___timeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * WebAsyncResult_get_AsyncState_m1743691224 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * WebAsyncResult_get_AsyncWaitHandle_m2543688004 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C"  bool WebAsyncResult_get_IsCompleted_m3042901185 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C"  bool WebAsyncResult_get_GotException_m3940364677 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C"  Exception_t3991598821 * WebAsyncResult_get_Exception_m3377176904 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C"  int32_t WebAsyncResult_get_NBytes_m1499555429 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C"  void WebAsyncResult_set_NBytes_m1001309402 (WebAsyncResult_t3680222175 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C"  Il2CppObject * WebAsyncResult_get_InnerAsyncResult_m3256692535 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C"  void WebAsyncResult_set_InnerAsyncResult_m2944274132 (WebAsyncResult_t3680222175 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C"  HttpWebResponse_t3793423559 * WebAsyncResult_get_Response_m3433104279 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t4260760469* WebAsyncResult_get_Buffer_m1120906510 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C"  int32_t WebAsyncResult_get_Offset_m287883483 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C"  int32_t WebAsyncResult_get_Size_m788557449 (WebAsyncResult_t3680222175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
