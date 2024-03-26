/*
 * Copyright (c) 2010-2013 BitTorrent, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __UTP_CALLBACKS_H__
#define __UTP_CALLBACKS_H__

#include "utp.h"
#include "utp_internal.h"

// Generated by running:  grep ^[a-z] utp_callbacks.cpp | sed 's/$/;/'
int utp_call_on_firewall(utp_context *ctx, const struct sockaddr *address, socklen_t address_len);
int utp_call_on_accept(utp_context *ctx, utp_socket *s, const struct sockaddr *address, socklen_t address_len);
void utp_call_on_connect(utp_context *ctx, utp_socket *s);
void utp_call_on_error(utp_context *ctx, utp_socket *s, int error_code);
void utp_call_on_read(utp_context *ctx, utp_socket *s, const byte *buf, size_t len);
void utp_call_on_overhead_statistics(utp_context *ctx, utp_socket *s, int send, size_t len, int type);
void utp_call_on_delay_sample(utp_context *ctx, utp_socket *s, int sample_ms);
void utp_call_on_state_change(utp_context *ctx, utp_socket *s, int state);
uint16 utp_call_get_udp_mtu(utp_context *ctx, utp_socket *s, const struct sockaddr *address, socklen_t address_len);
uint16 utp_call_get_udp_overhead(utp_context *ctx, utp_socket *s, const struct sockaddr *address, socklen_t address_len);
uint64 utp_call_get_milliseconds(utp_context *ctx, utp_socket *s);
uint64 utp_call_get_microseconds(utp_context *ctx, utp_socket *s);
uint32 utp_call_get_random(utp_context *ctx, utp_socket *s);
size_t utp_call_get_read_buffer_size(utp_context *ctx, utp_socket *s);
void utp_call_log(utp_context *ctx, utp_socket *s, const byte *buf);
void utp_call_sendto(utp_context *ctx, utp_socket *s, const byte *buf, size_t len, const struct sockaddr *address, socklen_t address_len, uint32 flags);

#endif // __UTP_CALLBACKS_H__
