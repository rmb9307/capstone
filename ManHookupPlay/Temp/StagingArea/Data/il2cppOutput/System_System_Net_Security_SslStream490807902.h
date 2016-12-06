#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t657895919;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2431285719;

#include "System_System_Net_Security_AuthenticatedStream3871465409.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t490807902  : public AuthenticatedStream_t3871465409
{
public:
	// Mono.Security.Protocol.Tls.SslStreamBase System.Net.Security.SslStream::ssl_stream
	SslStreamBase_t657895919 * ___ssl_stream_3;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Security.SslStream::validation_callback
	RemoteCertificateValidationCallback_t1894914657 * ___validation_callback_4;
	// System.Net.Security.LocalCertificateSelectionCallback System.Net.Security.SslStream::selection_callback
	LocalCertificateSelectionCallback_t2431285719 * ___selection_callback_5;

public:
	inline static int32_t get_offset_of_ssl_stream_3() { return static_cast<int32_t>(offsetof(SslStream_t490807902, ___ssl_stream_3)); }
	inline SslStreamBase_t657895919 * get_ssl_stream_3() const { return ___ssl_stream_3; }
	inline SslStreamBase_t657895919 ** get_address_of_ssl_stream_3() { return &___ssl_stream_3; }
	inline void set_ssl_stream_3(SslStreamBase_t657895919 * value)
	{
		___ssl_stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___ssl_stream_3, value);
	}

	inline static int32_t get_offset_of_validation_callback_4() { return static_cast<int32_t>(offsetof(SslStream_t490807902, ___validation_callback_4)); }
	inline RemoteCertificateValidationCallback_t1894914657 * get_validation_callback_4() const { return ___validation_callback_4; }
	inline RemoteCertificateValidationCallback_t1894914657 ** get_address_of_validation_callback_4() { return &___validation_callback_4; }
	inline void set_validation_callback_4(RemoteCertificateValidationCallback_t1894914657 * value)
	{
		___validation_callback_4 = value;
		Il2CppCodeGenWriteBarrier(&___validation_callback_4, value);
	}

	inline static int32_t get_offset_of_selection_callback_5() { return static_cast<int32_t>(offsetof(SslStream_t490807902, ___selection_callback_5)); }
	inline LocalCertificateSelectionCallback_t2431285719 * get_selection_callback_5() const { return ___selection_callback_5; }
	inline LocalCertificateSelectionCallback_t2431285719 ** get_address_of_selection_callback_5() { return &___selection_callback_5; }
	inline void set_selection_callback_5(LocalCertificateSelectionCallback_t2431285719 * value)
	{
		___selection_callback_5 = value;
		Il2CppCodeGenWriteBarrier(&___selection_callback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
