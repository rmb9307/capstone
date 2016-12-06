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

// System.Net.WebException
struct WebException_t2331648373;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Exception
struct Exception_t3991598821;
// System.Net.WebResponse
struct WebResponse_t3238378095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Exception3991598821.h"
#include "System_System_Net_WebExceptionStatus2952522055.h"
#include "System_System_Net_WebResponse3238378095.h"

// System.Void System.Net.WebException::.ctor()
extern "C"  void WebException__ctor_m350863519 (WebException_t2331648373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
extern "C"  void WebException__ctor_m1678776515 (WebException_t2331648373 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException__ctor_m1447032160 (WebException_t2331648373 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern "C"  void WebException__ctor_m3103124179 (WebException_t2331648373 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern "C"  void WebException__ctor_m2973981746 (WebException_t2331648373 * __this, String_t* ___message0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
extern "C"  void WebException__ctor_m1782198850 (WebException_t2331648373 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, int32_t ___status2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern "C"  void WebException__ctor_m3379283423 (WebException_t2331648373 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, int32_t ___status2, WebResponse_t3238378095 * ___response3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m871947788 (WebException_t2331648373 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
extern "C"  int32_t WebException_get_Status_m2264404714 (WebException_t2331648373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebException_GetObjectData_m1063640253 (WebException_t2331648373 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
