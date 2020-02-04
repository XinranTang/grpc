/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_PROTOCOL_PROTO_UPB_H_
#define ENVOY_API_V2_CORE_PROTOCOL_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_core_TcpProtocolOptions;
struct envoy_api_v2_core_HttpProtocolOptions;
struct envoy_api_v2_core_Http1ProtocolOptions;
struct envoy_api_v2_core_Http2ProtocolOptions;
struct envoy_api_v2_core_GrpcProtocolOptions;
typedef struct envoy_api_v2_core_TcpProtocolOptions envoy_api_v2_core_TcpProtocolOptions;
typedef struct envoy_api_v2_core_HttpProtocolOptions envoy_api_v2_core_HttpProtocolOptions;
typedef struct envoy_api_v2_core_Http1ProtocolOptions envoy_api_v2_core_Http1ProtocolOptions;
typedef struct envoy_api_v2_core_Http2ProtocolOptions envoy_api_v2_core_Http2ProtocolOptions;
typedef struct envoy_api_v2_core_GrpcProtocolOptions envoy_api_v2_core_GrpcProtocolOptions;
extern const upb_msglayout envoy_api_v2_core_TcpProtocolOptions_msginit;
extern const upb_msglayout envoy_api_v2_core_HttpProtocolOptions_msginit;
extern const upb_msglayout envoy_api_v2_core_Http1ProtocolOptions_msginit;
extern const upb_msglayout envoy_api_v2_core_Http2ProtocolOptions_msginit;
extern const upb_msglayout envoy_api_v2_core_GrpcProtocolOptions_msginit;
struct google_protobuf_BoolValue;
struct google_protobuf_Duration;
struct google_protobuf_UInt32Value;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_Duration_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.api.v2.core.TcpProtocolOptions */

UPB_INLINE envoy_api_v2_core_TcpProtocolOptions *envoy_api_v2_core_TcpProtocolOptions_new(upb_arena *arena) {
  return (envoy_api_v2_core_TcpProtocolOptions *)_upb_msg_new(&envoy_api_v2_core_TcpProtocolOptions_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_TcpProtocolOptions *envoy_api_v2_core_TcpProtocolOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_TcpProtocolOptions *ret = envoy_api_v2_core_TcpProtocolOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_TcpProtocolOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_TcpProtocolOptions_serialize(const envoy_api_v2_core_TcpProtocolOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_TcpProtocolOptions_msginit, arena, len);
}



/* envoy.api.v2.core.HttpProtocolOptions */

UPB_INLINE envoy_api_v2_core_HttpProtocolOptions *envoy_api_v2_core_HttpProtocolOptions_new(upb_arena *arena) {
  return (envoy_api_v2_core_HttpProtocolOptions *)_upb_msg_new(&envoy_api_v2_core_HttpProtocolOptions_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_HttpProtocolOptions *envoy_api_v2_core_HttpProtocolOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_HttpProtocolOptions *ret = envoy_api_v2_core_HttpProtocolOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_HttpProtocolOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_HttpProtocolOptions_serialize(const envoy_api_v2_core_HttpProtocolOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_HttpProtocolOptions_msginit, arena, len);
}

UPB_INLINE const struct google_protobuf_Duration* envoy_api_v2_core_HttpProtocolOptions_idle_timeout(const envoy_api_v2_core_HttpProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_Duration*, UPB_SIZE(0, 0)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_HttpProtocolOptions_max_headers_count(const envoy_api_v2_core_HttpProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(4, 8)); }

UPB_INLINE void envoy_api_v2_core_HttpProtocolOptions_set_idle_timeout(envoy_api_v2_core_HttpProtocolOptions *msg, struct google_protobuf_Duration* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_Duration*, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_api_v2_core_HttpProtocolOptions_mutable_idle_timeout(envoy_api_v2_core_HttpProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_api_v2_core_HttpProtocolOptions_idle_timeout(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_HttpProtocolOptions_set_idle_timeout(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_HttpProtocolOptions_set_max_headers_count(envoy_api_v2_core_HttpProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(4, 8)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_HttpProtocolOptions_mutable_max_headers_count(envoy_api_v2_core_HttpProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_HttpProtocolOptions_max_headers_count(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_HttpProtocolOptions_set_max_headers_count(msg, sub);
  }
  return sub;
}

/* envoy.api.v2.core.Http1ProtocolOptions */

UPB_INLINE envoy_api_v2_core_Http1ProtocolOptions *envoy_api_v2_core_Http1ProtocolOptions_new(upb_arena *arena) {
  return (envoy_api_v2_core_Http1ProtocolOptions *)_upb_msg_new(&envoy_api_v2_core_Http1ProtocolOptions_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Http1ProtocolOptions *envoy_api_v2_core_Http1ProtocolOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_Http1ProtocolOptions *ret = envoy_api_v2_core_Http1ProtocolOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_Http1ProtocolOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Http1ProtocolOptions_serialize(const envoy_api_v2_core_Http1ProtocolOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Http1ProtocolOptions_msginit, arena, len);
}

UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_core_Http1ProtocolOptions_allow_absolute_url(const envoy_api_v2_core_Http1ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_BoolValue*, UPB_SIZE(12, 24)); }
UPB_INLINE bool envoy_api_v2_core_Http1ProtocolOptions_accept_http_10(const envoy_api_v2_core_Http1ProtocolOptions *msg) { return UPB_FIELD_AT(msg, bool, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_core_Http1ProtocolOptions_default_host_for_http_10(const envoy_api_v2_core_Http1ProtocolOptions *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(4, 8)); }

UPB_INLINE void envoy_api_v2_core_Http1ProtocolOptions_set_allow_absolute_url(envoy_api_v2_core_Http1ProtocolOptions *msg, struct google_protobuf_BoolValue* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_BoolValue*, UPB_SIZE(12, 24)) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_core_Http1ProtocolOptions_mutable_allow_absolute_url(envoy_api_v2_core_Http1ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_core_Http1ProtocolOptions_allow_absolute_url(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)_upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http1ProtocolOptions_set_allow_absolute_url(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http1ProtocolOptions_set_accept_http_10(envoy_api_v2_core_Http1ProtocolOptions *msg, bool value) {
  UPB_FIELD_AT(msg, bool, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_Http1ProtocolOptions_set_default_host_for_http_10(envoy_api_v2_core_Http1ProtocolOptions *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(4, 8)) = value;
}

/* envoy.api.v2.core.Http2ProtocolOptions */

UPB_INLINE envoy_api_v2_core_Http2ProtocolOptions *envoy_api_v2_core_Http2ProtocolOptions_new(upb_arena *arena) {
  return (envoy_api_v2_core_Http2ProtocolOptions *)_upb_msg_new(&envoy_api_v2_core_Http2ProtocolOptions_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Http2ProtocolOptions *envoy_api_v2_core_Http2ProtocolOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_Http2ProtocolOptions *ret = envoy_api_v2_core_Http2ProtocolOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_Http2ProtocolOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Http2ProtocolOptions_serialize(const envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Http2ProtocolOptions_msginit, arena, len);
}

UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_hpack_table_size(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(4, 8)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_concurrent_streams(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(8, 16)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_initial_stream_window_size(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(12, 24)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_initial_connection_window_size(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(16, 32)); }
UPB_INLINE bool envoy_api_v2_core_Http2ProtocolOptions_allow_connect(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, bool, UPB_SIZE(0, 0)); }
UPB_INLINE bool envoy_api_v2_core_Http2ProtocolOptions_allow_metadata(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, bool, UPB_SIZE(1, 1)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_outbound_frames(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(20, 40)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_outbound_control_frames(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(24, 48)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_consecutive_inbound_frames_with_empty_payload(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(28, 56)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_inbound_priority_frames_per_stream(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(32, 64)); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_max_inbound_window_update_frames_per_data_frame_sent(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_UInt32Value*, UPB_SIZE(36, 72)); }
UPB_INLINE bool envoy_api_v2_core_Http2ProtocolOptions_stream_error_on_invalid_http_messaging(const envoy_api_v2_core_Http2ProtocolOptions *msg) { return UPB_FIELD_AT(msg, bool, UPB_SIZE(2, 2)); }

UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_hpack_table_size(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(4, 8)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_hpack_table_size(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_hpack_table_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_hpack_table_size(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_concurrent_streams(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_concurrent_streams(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_concurrent_streams(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_concurrent_streams(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_initial_stream_window_size(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(12, 24)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_initial_stream_window_size(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_initial_stream_window_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_initial_stream_window_size(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_initial_connection_window_size(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(16, 32)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_initial_connection_window_size(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_initial_connection_window_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_initial_connection_window_size(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_allow_connect(envoy_api_v2_core_Http2ProtocolOptions *msg, bool value) {
  UPB_FIELD_AT(msg, bool, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_allow_metadata(envoy_api_v2_core_Http2ProtocolOptions *msg, bool value) {
  UPB_FIELD_AT(msg, bool, UPB_SIZE(1, 1)) = value;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_outbound_frames(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(20, 40)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_outbound_frames(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_outbound_frames(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_outbound_frames(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_outbound_control_frames(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(24, 48)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_outbound_control_frames(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_outbound_control_frames(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_outbound_control_frames(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_consecutive_inbound_frames_with_empty_payload(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(28, 56)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_consecutive_inbound_frames_with_empty_payload(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_consecutive_inbound_frames_with_empty_payload(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_consecutive_inbound_frames_with_empty_payload(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_inbound_priority_frames_per_stream(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(32, 64)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_inbound_priority_frames_per_stream(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_inbound_priority_frames_per_stream(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_inbound_priority_frames_per_stream(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_max_inbound_window_update_frames_per_data_frame_sent(envoy_api_v2_core_Http2ProtocolOptions *msg, struct google_protobuf_UInt32Value* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_UInt32Value*, UPB_SIZE(36, 72)) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_api_v2_core_Http2ProtocolOptions_mutable_max_inbound_window_update_frames_per_data_frame_sent(envoy_api_v2_core_Http2ProtocolOptions *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_api_v2_core_Http2ProtocolOptions_max_inbound_window_update_frames_per_data_frame_sent(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Http2ProtocolOptions_set_max_inbound_window_update_frames_per_data_frame_sent(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Http2ProtocolOptions_set_stream_error_on_invalid_http_messaging(envoy_api_v2_core_Http2ProtocolOptions *msg, bool value) {
  UPB_FIELD_AT(msg, bool, UPB_SIZE(2, 2)) = value;
}

/* envoy.api.v2.core.GrpcProtocolOptions */

UPB_INLINE envoy_api_v2_core_GrpcProtocolOptions *envoy_api_v2_core_GrpcProtocolOptions_new(upb_arena *arena) {
  return (envoy_api_v2_core_GrpcProtocolOptions *)_upb_msg_new(&envoy_api_v2_core_GrpcProtocolOptions_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_GrpcProtocolOptions *envoy_api_v2_core_GrpcProtocolOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_api_v2_core_GrpcProtocolOptions *ret = envoy_api_v2_core_GrpcProtocolOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_api_v2_core_GrpcProtocolOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_GrpcProtocolOptions_serialize(const envoy_api_v2_core_GrpcProtocolOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_GrpcProtocolOptions_msginit, arena, len);
}

UPB_INLINE const envoy_api_v2_core_Http2ProtocolOptions* envoy_api_v2_core_GrpcProtocolOptions_http2_protocol_options(const envoy_api_v2_core_GrpcProtocolOptions *msg) { return UPB_FIELD_AT(msg, const envoy_api_v2_core_Http2ProtocolOptions*, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_api_v2_core_GrpcProtocolOptions_set_http2_protocol_options(envoy_api_v2_core_GrpcProtocolOptions *msg, envoy_api_v2_core_Http2ProtocolOptions* value) {
  UPB_FIELD_AT(msg, envoy_api_v2_core_Http2ProtocolOptions*, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE struct envoy_api_v2_core_Http2ProtocolOptions* envoy_api_v2_core_GrpcProtocolOptions_mutable_http2_protocol_options(envoy_api_v2_core_GrpcProtocolOptions *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Http2ProtocolOptions* sub = (struct envoy_api_v2_core_Http2ProtocolOptions*)envoy_api_v2_core_GrpcProtocolOptions_http2_protocol_options(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Http2ProtocolOptions*)_upb_msg_new(&envoy_api_v2_core_Http2ProtocolOptions_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_GrpcProtocolOptions_set_http2_protocol_options(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_PROTOCOL_PROTO_UPB_H_ */
