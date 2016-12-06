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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct DefaultComparer_t2512518284;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24064741617.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1526546761_gshared (DefaultComparer_t2512518284 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1526546761(__this, method) ((  void (*) (DefaultComparer_t2512518284 *, const MethodInfo*))DefaultComparer__ctor_m1526546761_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m11087498_gshared (DefaultComparer_t2512518284 * __this, KeyValuePair_2_t4064741617  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11087498(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2512518284 *, KeyValuePair_2_t4064741617 , const MethodInfo*))DefaultComparer_GetHashCode_m11087498_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1866582878_gshared (DefaultComparer_t2512518284 * __this, KeyValuePair_2_t4064741617  ___x0, KeyValuePair_2_t4064741617  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m1866582878(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2512518284 *, KeyValuePair_2_t4064741617 , KeyValuePair_2_t4064741617 , const MethodInfo*))DefaultComparer_Equals_m1866582878_gshared)(__this, ___x0, ___y1, method)
