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

// System.Net.FileWebResponse
struct FileWebResponse_t2971811667;
// System.Uri
struct Uri_t1116831938;
// System.IO.FileStream
struct FileStream_t2141505868;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.IO.Stream
struct Stream_t1561764144;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_IO_FileStream2141505868.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C"  void FileWebResponse__ctor_m4203086907 (FileWebResponse_t2971811667 * __this, Uri_t1116831938 * ___responseUri0, FileStream_t2141505868 * ___fileStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse__ctor_m2377823828 (FileWebResponse_t2971811667 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1417232536 (FileWebResponse_t2971811667 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C"  void FileWebResponse_System_IDisposable_Dispose_m423821804 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * FileWebResponse_get_Headers_m2315356702 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileWebResponse_GetObjectData_m22702513 (FileWebResponse_t2971811667 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C"  Stream_t1561764144 * FileWebResponse_GetResponseStream_m3644434002 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C"  void FileWebResponse_Finalize_m2775464943 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C"  void FileWebResponse_Close_m3579247785 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C"  void FileWebResponse_Dispose_m1051444359 (FileWebResponse_t2971811667 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C"  void FileWebResponse_CheckDisposed_m3815230654 (FileWebResponse_t2971811667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
