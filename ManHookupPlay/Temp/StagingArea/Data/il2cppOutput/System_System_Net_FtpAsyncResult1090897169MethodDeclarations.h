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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t1090897169;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.Exception
struct Exception_t3991598821;
// System.Net.FtpWebResponse
struct FtpWebResponse_t2761394957;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_System_Net_FtpWebResponse2761394957.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void FtpAsyncResult__ctor_m996159919 (FtpAsyncResult_t1090897169 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * FtpAsyncResult_get_AsyncState_m2681175690 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * FtpAsyncResult_get_AsyncWaitHandle_m3104266194 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C"  bool FtpAsyncResult_get_IsCompleted_m2040148559 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C"  bool FtpAsyncResult_get_GotException_m2919804343 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C"  Exception_t3991598821 * FtpAsyncResult_get_Exception_m2991776342 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C"  FtpWebResponse_t2761394957 * FtpAsyncResult_get_Response_m3336946139 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C"  void FtpAsyncResult_set_Stream_m3014354805 (FtpAsyncResult_t1090897169 * __this, Stream_t1561764144 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C"  bool FtpAsyncResult_WaitUntilComplete_m1609274803 (FtpAsyncResult_t1090897169 * __this, int32_t ___timeout0, bool ___exitContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m2460255838 (FtpAsyncResult_t1090897169 * __this, bool ___synch0, Exception_t3991598821 * ___exc1, FtpWebResponse_t2761394957 * ___response2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C"  void FtpAsyncResult_SetCompleted_m1997870026 (FtpAsyncResult_t1090897169 * __this, bool ___synch0, FtpWebResponse_t2761394957 * ___response1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C"  void FtpAsyncResult_SetCompleted_m3064165237 (FtpAsyncResult_t1090897169 * __this, bool ___synch0, Exception_t3991598821 * ___exc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C"  void FtpAsyncResult_DoCallback_m2621895697 (FtpAsyncResult_t1090897169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
