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

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t4165960911;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t506469079;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>[]
struct KeyValuePair_2U5BU5D_t1304897580;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>>
struct IEnumerator_1_t1681639370;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>
struct KeyCollection_t1497753066;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,System.Object>
struct ValueCollection_t2866566624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24064741617.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1188317007.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2574392191_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2574392191(__this, method) ((  void (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2__ctor_m2574392191_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m981188726_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m981188726(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m981188726_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m967805520_gshared (Dictionary_2_t4165960911 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m967805520(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t4165960911 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m967805520_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2994096045_gshared (Dictionary_2_t4165960911 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2994096045(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t4165960911 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2994096045_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m859717696_gshared (Dictionary_2_t4165960911 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m859717696(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4165960911 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m859717696_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2104722729_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2104722729(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2104722729_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m224198158_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m224198158(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m224198158_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2542415747_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2542415747(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2542415747_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1169773644_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1169773644(__this, ___key0, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1169773644_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2069616161_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2069616161(__this, method) ((  bool (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2069616161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1621876813_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1621876813(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1621876813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1796715301_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1796715301(__this, method) ((  bool (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1796715301_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2909104866_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2_t4064741617  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2909104866(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t4165960911 *, KeyValuePair_2_t4064741617 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2909104866_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m709096864_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2_t4064741617  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m709096864(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4165960911 *, KeyValuePair_2_t4064741617 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m709096864_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3894814278_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2U5BU5D_t1304897580* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3894814278(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4165960911 *, KeyValuePair_2U5BU5D_t1304897580*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3894814278_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m194184389_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2_t4064741617  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m194184389(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4165960911 *, KeyValuePair_2_t4064741617 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m194184389_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2301221541_gshared (Dictionary_2_t4165960911 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2301221541(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2301221541_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2938951648_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2938951648(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2938951648_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1726557405_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1726557405(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1726557405_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m218971000_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m218971000(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m218971000_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m343051111_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m343051111(__this, method) ((  int32_t (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_get_Count_m343051111_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m3507411876_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3507411876(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, IntPtr_t, const MethodInfo*))Dictionary_2_get_Item_m3507411876_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3254044415_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3254044415(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4165960911 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3254044415_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m827030263_gshared (Dictionary_2_t4165960911 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m827030263(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t4165960911 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m827030263_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2793442720_gshared (Dictionary_2_t4165960911 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2793442720(__this, ___size0, method) ((  void (*) (Dictionary_2_t4165960911 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2793442720_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m346755484_gshared (Dictionary_2_t4165960911 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m346755484(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m346755484_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4064741617  Dictionary_2_make_pair_m19306728_gshared (Il2CppObject * __this /* static, unused */, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m19306728(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t4064741617  (*) (Il2CppObject * /* static, unused */, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m19306728_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::pick_key(TKey,TValue)
extern "C"  IntPtr_t Dictionary_2_pick_key_m240279054_gshared (Il2CppObject * __this /* static, unused */, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m240279054(__this /* static, unused */, ___key0, ___value1, method) ((  IntPtr_t (*) (Il2CppObject * /* static, unused */, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m240279054_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3914982734_gshared (Il2CppObject * __this /* static, unused */, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3914982734(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3914982734_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1577872051_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2U5BU5D_t1304897580* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1577872051(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4165960911 *, KeyValuePair_2U5BU5D_t1304897580*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1577872051_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m2554543257_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m2554543257(__this, method) ((  void (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_Resize_m2554543257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1110611990_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m1110611990(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4165960911 *, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m1110611990_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m4275492778_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m4275492778(__this, method) ((  void (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_Clear_m4275492778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m797573136_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m797573136(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4165960911 *, IntPtr_t, const MethodInfo*))Dictionary_2_ContainsKey_m797573136_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1338428432_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1338428432(__this, ___value0, method) ((  bool (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m1338428432_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3260762013_gshared (Dictionary_2_t4165960911 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3260762013(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4165960911 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m3260762013_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m4251345639_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m4251345639(__this, ___sender0, method) ((  void (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m4251345639_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m360345312_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m360345312(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4165960911 *, IntPtr_t, const MethodInfo*))Dictionary_2_Remove_m360345312_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1499285609_gshared (Dictionary_2_t4165960911 * __this, IntPtr_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1499285609(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t4165960911 *, IntPtr_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m1499285609_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Keys()
extern "C"  KeyCollection_t1497753066 * Dictionary_2_get_Keys_m2873020726_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2873020726(__this, method) ((  KeyCollection_t1497753066 * (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_get_Keys_m2873020726_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Values()
extern "C"  ValueCollection_t2866566624 * Dictionary_2_get_Values_m275227702_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m275227702(__this, method) ((  ValueCollection_t2866566624 * (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_get_Values_m275227702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ToTKey(System.Object)
extern "C"  IntPtr_t Dictionary_2_ToTKey_m3985105257_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3985105257(__this, ___key0, method) ((  IntPtr_t (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3985105257_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m2227296873_gshared (Dictionary_2_t4165960911 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2227296873(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t4165960911 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2227296873_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3568606403_gshared (Dictionary_2_t4165960911 * __this, KeyValuePair_2_t4064741617  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3568606403(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t4165960911 *, KeyValuePair_2_t4064741617 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3568606403_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1188317007  Dictionary_2_GetEnumerator_m3589629060_gshared (Dictionary_2_t4165960911 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3589629060(__this, method) ((  Enumerator_t1188317007  (*) (Dictionary_2_t4165960911 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3589629060_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m3242387411_gshared (Il2CppObject * __this /* static, unused */, IntPtr_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3242387411(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, IntPtr_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3242387411_gshared)(__this /* static, unused */, ___key0, ___value1, method)
