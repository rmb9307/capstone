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

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3111161298;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t815702480;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t2376844221;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t626839757;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t442953453;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t1811767011;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23009942004.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En133517394.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2636744568_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2636744568(__this, method) ((  void (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2__ctor_m2636744568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2264551919_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2264551919(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2264551919_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m605014217_gshared (Dictionary_2_t3111161298 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m605014217(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3111161298 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m605014217_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2210374356_gshared (Dictionary_2_t3111161298 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2210374356(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t3111161298 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2210374356_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3654034617_gshared (Dictionary_2_t3111161298 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3654034617(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3111161298 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m3654034617_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3097242640_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3097242640(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3097242640_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m4268229813_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m4268229813(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m4268229813_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1996577916_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1996577916(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1996577916_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3168569587_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3168569587(__this, ___key0, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3168569587_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2688282778_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2688282778(__this, method) ((  bool (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2688282778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3429599622_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3429599622(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3429599622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m347149406_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m347149406(__this, method) ((  bool (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m347149406_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1488773129_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2_t3009942004  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1488773129(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3111161298 *, KeyValuePair_2_t3009942004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1488773129_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3873087705_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2_t3009942004  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3873087705(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3111161298 *, KeyValuePair_2_t3009942004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3873087705_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1063206829_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2U5BU5D_t2376844221* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1063206829(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3111161298 *, KeyValuePair_2U5BU5D_t2376844221*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1063206829_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1109207614_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2_t3009942004  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1109207614(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3111161298 *, KeyValuePair_2_t3009942004 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1109207614_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2560117964_gshared (Dictionary_2_t3111161298 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2560117964(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2560117964_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3143783879_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3143783879(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3143783879_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2926723204_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2926723204(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2926723204_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m423803231_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m423803231(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m423803231_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1446073056_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1446073056(__this, method) ((  int32_t (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_get_Count_m1446073056_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2839393675_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2839393675(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m2839393675_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2503953208_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2503953208(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3111161298 *, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m2503953208_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2741411568_gshared (Dictionary_2_t3111161298 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2741411568(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3111161298 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2741411568_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3541136071_gshared (Dictionary_2_t3111161298 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3541136071(__this, ___size0, method) ((  void (*) (Dictionary_2_t3111161298 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3541136071_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4222903939_gshared (Dictionary_2_t3111161298 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4222903939(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4222903939_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3009942004  Dictionary_2_make_pair_m2536283087_gshared (Il2CppObject * __this /* static, unused */, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2536283087(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3009942004  (*) (Il2CppObject * /* static, unused */, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2536283087_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C"  uint64_t Dictionary_2_pick_key_m3785155143_gshared (Il2CppObject * __this /* static, unused */, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m3785155143(__this /* static, unused */, ___key0, ___value1, method) ((  uint64_t (*) (Il2CppObject * /* static, unused */, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m3785155143_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m336871239_gshared (Il2CppObject * __this /* static, unused */, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m336871239(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m336871239_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2112942060_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2U5BU5D_t2376844221* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2112942060(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3111161298 *, KeyValuePair_2U5BU5D_t2376844221*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2112942060_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m192499648_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m192499648(__this, method) ((  void (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_Resize_m192499648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3390215229_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3390215229(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3111161298 *, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3390215229_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m42877859_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m42877859(__this, method) ((  void (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_Clear_m42877859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2745796809_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2745796809(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3111161298 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m2745796809_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m588337225_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m588337225(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m588337225_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2468193046_gshared (Dictionary_2_t3111161298 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2468193046(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3111161298 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m2468193046_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1739534606_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1739534606(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1739534606_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m194287239_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m194287239(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3111161298 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m194287239_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3202943010_gshared (Dictionary_2_t3111161298 * __this, uint64_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3202943010(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3111161298 *, uint64_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3202943010_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C"  KeyCollection_t442953453 * Dictionary_2_get_Keys_m691844765_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m691844765(__this, method) ((  KeyCollection_t442953453 * (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_get_Keys_m691844765_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C"  ValueCollection_t1811767011 * Dictionary_2_get_Values_m109169629_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m109169629(__this, method) ((  ValueCollection_t1811767011 * (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_get_Values_m109169629_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C"  uint64_t Dictionary_2_ToTKey_m3235014050_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3235014050(__this, ___key0, method) ((  uint64_t (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3235014050_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m2944152674_gshared (Dictionary_2_t3111161298 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2944152674(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t3111161298 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2944152674_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3724414058_gshared (Dictionary_2_t3111161298 * __this, KeyValuePair_2_t3009942004  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3724414058(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3111161298 *, KeyValuePair_2_t3009942004 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3724414058_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C"  Enumerator_t133517394  Dictionary_2_GetEnumerator_m60934013_gshared (Dictionary_2_t3111161298 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m60934013(__this, method) ((  Enumerator_t133517394  (*) (Dictionary_2_t3111161298 *, const MethodInfo*))Dictionary_2_GetEnumerator_m60934013_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m651077516_gshared (Il2CppObject * __this /* static, unused */, uint64_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m651077516(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, uint64_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m651077516_gshared)(__this /* static, unused */, ___key0, ___value1, method)
