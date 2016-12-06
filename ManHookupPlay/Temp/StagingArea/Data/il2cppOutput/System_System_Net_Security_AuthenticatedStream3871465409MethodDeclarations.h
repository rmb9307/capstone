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

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t3871465409;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"

// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void AuthenticatedStream__ctor_m486529261 (AuthenticatedStream_t3871465409 * __this, Stream_t1561764144 * ___innerStream0, bool ___leaveInnerStreamOpen1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern "C"  Stream_t1561764144 * AuthenticatedStream_get_InnerStream_m2346942170 (AuthenticatedStream_t3871465409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.AuthenticatedStream::get_LeaveInnerStreamOpen()
extern "C"  bool AuthenticatedStream_get_LeaveInnerStreamOpen_m2037871303 (AuthenticatedStream_t3871465409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern "C"  void AuthenticatedStream_Dispose_m1285944557 (AuthenticatedStream_t3871465409 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
