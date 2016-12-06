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

// System.Net.FileWebRequest/FileWebStream
struct FileWebStream_t902488976;
// System.Net.FileWebRequest
struct FileWebRequest_t1151586641;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FileWebRequest1151586641.h"
#include "mscorlib_System_IO_FileMode3233790127.h"
#include "mscorlib_System_IO_FileAccess1610034992.h"
#include "mscorlib_System_IO_FileShare783541953.h"

// System.Void System.Net.FileWebRequest/FileWebStream::.ctor(System.Net.FileWebRequest,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  void FileWebStream__ctor_m3702192034 (FileWebStream_t902488976 * __this, FileWebRequest_t1151586641 * ___webRequest0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest/FileWebStream::Close()
extern "C"  void FileWebStream_Close_m3452177360 (FileWebStream_t902488976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
