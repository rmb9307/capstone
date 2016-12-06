#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t924017833;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.Exception
struct Exception_t3991598821;
// System.Net.HttpWebResponse
struct HttpWebResponse_t3793423559;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebAsyncResult
struct  WebAsyncResult_t3680222175  : public Il2CppObject
{
public:
	// System.Threading.ManualResetEvent System.Net.WebAsyncResult::handle
	ManualResetEvent_t924017833 * ___handle_0;
	// System.Boolean System.Net.WebAsyncResult::synch
	bool ___synch_1;
	// System.Boolean System.Net.WebAsyncResult::isCompleted
	bool ___isCompleted_2;
	// System.AsyncCallback System.Net.WebAsyncResult::cb
	AsyncCallback_t1369114871 * ___cb_3;
	// System.Object System.Net.WebAsyncResult::state
	Il2CppObject * ___state_4;
	// System.Int32 System.Net.WebAsyncResult::nbytes
	int32_t ___nbytes_5;
	// System.IAsyncResult System.Net.WebAsyncResult::innerAsyncResult
	Il2CppObject * ___innerAsyncResult_6;
	// System.Boolean System.Net.WebAsyncResult::callbackDone
	bool ___callbackDone_7;
	// System.Exception System.Net.WebAsyncResult::exc
	Exception_t3991598821 * ___exc_8;
	// System.Net.HttpWebResponse System.Net.WebAsyncResult::response
	HttpWebResponse_t3793423559 * ___response_9;
	// System.IO.Stream System.Net.WebAsyncResult::writeStream
	Stream_t1561764144 * ___writeStream_10;
	// System.Byte[] System.Net.WebAsyncResult::buffer
	ByteU5BU5D_t4260760469* ___buffer_11;
	// System.Int32 System.Net.WebAsyncResult::offset
	int32_t ___offset_12;
	// System.Int32 System.Net.WebAsyncResult::size
	int32_t ___size_13;
	// System.Object System.Net.WebAsyncResult::locker
	Il2CppObject * ___locker_14;
	// System.Boolean System.Net.WebAsyncResult::EndCalled
	bool ___EndCalled_15;
	// System.Boolean System.Net.WebAsyncResult::AsyncWriteAll
	bool ___AsyncWriteAll_16;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___handle_0)); }
	inline ManualResetEvent_t924017833 * get_handle_0() const { return ___handle_0; }
	inline ManualResetEvent_t924017833 ** get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(ManualResetEvent_t924017833 * value)
	{
		___handle_0 = value;
		Il2CppCodeGenWriteBarrier(&___handle_0, value);
	}

	inline static int32_t get_offset_of_synch_1() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___synch_1)); }
	inline bool get_synch_1() const { return ___synch_1; }
	inline bool* get_address_of_synch_1() { return &___synch_1; }
	inline void set_synch_1(bool value)
	{
		___synch_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___cb_3)); }
	inline AsyncCallback_t1369114871 * get_cb_3() const { return ___cb_3; }
	inline AsyncCallback_t1369114871 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(AsyncCallback_t1369114871 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier(&___cb_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___state_4)); }
	inline Il2CppObject * get_state_4() const { return ___state_4; }
	inline Il2CppObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(Il2CppObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_nbytes_5() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___nbytes_5)); }
	inline int32_t get_nbytes_5() const { return ___nbytes_5; }
	inline int32_t* get_address_of_nbytes_5() { return &___nbytes_5; }
	inline void set_nbytes_5(int32_t value)
	{
		___nbytes_5 = value;
	}

	inline static int32_t get_offset_of_innerAsyncResult_6() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___innerAsyncResult_6)); }
	inline Il2CppObject * get_innerAsyncResult_6() const { return ___innerAsyncResult_6; }
	inline Il2CppObject ** get_address_of_innerAsyncResult_6() { return &___innerAsyncResult_6; }
	inline void set_innerAsyncResult_6(Il2CppObject * value)
	{
		___innerAsyncResult_6 = value;
		Il2CppCodeGenWriteBarrier(&___innerAsyncResult_6, value);
	}

	inline static int32_t get_offset_of_callbackDone_7() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___callbackDone_7)); }
	inline bool get_callbackDone_7() const { return ___callbackDone_7; }
	inline bool* get_address_of_callbackDone_7() { return &___callbackDone_7; }
	inline void set_callbackDone_7(bool value)
	{
		___callbackDone_7 = value;
	}

	inline static int32_t get_offset_of_exc_8() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___exc_8)); }
	inline Exception_t3991598821 * get_exc_8() const { return ___exc_8; }
	inline Exception_t3991598821 ** get_address_of_exc_8() { return &___exc_8; }
	inline void set_exc_8(Exception_t3991598821 * value)
	{
		___exc_8 = value;
		Il2CppCodeGenWriteBarrier(&___exc_8, value);
	}

	inline static int32_t get_offset_of_response_9() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___response_9)); }
	inline HttpWebResponse_t3793423559 * get_response_9() const { return ___response_9; }
	inline HttpWebResponse_t3793423559 ** get_address_of_response_9() { return &___response_9; }
	inline void set_response_9(HttpWebResponse_t3793423559 * value)
	{
		___response_9 = value;
		Il2CppCodeGenWriteBarrier(&___response_9, value);
	}

	inline static int32_t get_offset_of_writeStream_10() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___writeStream_10)); }
	inline Stream_t1561764144 * get_writeStream_10() const { return ___writeStream_10; }
	inline Stream_t1561764144 ** get_address_of_writeStream_10() { return &___writeStream_10; }
	inline void set_writeStream_10(Stream_t1561764144 * value)
	{
		___writeStream_10 = value;
		Il2CppCodeGenWriteBarrier(&___writeStream_10, value);
	}

	inline static int32_t get_offset_of_buffer_11() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___buffer_11)); }
	inline ByteU5BU5D_t4260760469* get_buffer_11() const { return ___buffer_11; }
	inline ByteU5BU5D_t4260760469** get_address_of_buffer_11() { return &___buffer_11; }
	inline void set_buffer_11(ByteU5BU5D_t4260760469* value)
	{
		___buffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_11, value);
	}

	inline static int32_t get_offset_of_offset_12() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___offset_12)); }
	inline int32_t get_offset_12() const { return ___offset_12; }
	inline int32_t* get_address_of_offset_12() { return &___offset_12; }
	inline void set_offset_12(int32_t value)
	{
		___offset_12 = value;
	}

	inline static int32_t get_offset_of_size_13() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___size_13)); }
	inline int32_t get_size_13() const { return ___size_13; }
	inline int32_t* get_address_of_size_13() { return &___size_13; }
	inline void set_size_13(int32_t value)
	{
		___size_13 = value;
	}

	inline static int32_t get_offset_of_locker_14() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___locker_14)); }
	inline Il2CppObject * get_locker_14() const { return ___locker_14; }
	inline Il2CppObject ** get_address_of_locker_14() { return &___locker_14; }
	inline void set_locker_14(Il2CppObject * value)
	{
		___locker_14 = value;
		Il2CppCodeGenWriteBarrier(&___locker_14, value);
	}

	inline static int32_t get_offset_of_EndCalled_15() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___EndCalled_15)); }
	inline bool get_EndCalled_15() const { return ___EndCalled_15; }
	inline bool* get_address_of_EndCalled_15() { return &___EndCalled_15; }
	inline void set_EndCalled_15(bool value)
	{
		___EndCalled_15 = value;
	}

	inline static int32_t get_offset_of_AsyncWriteAll_16() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3680222175, ___AsyncWriteAll_16)); }
	inline bool get_AsyncWriteAll_16() const { return ___AsyncWriteAll_16; }
	inline bool* get_address_of_AsyncWriteAll_16() { return &___AsyncWriteAll_16; }
	inline void set_AsyncWriteAll_16(bool value)
	{
		___AsyncWriteAll_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
