; include file generated by lib2inc V2.4

crypto_box PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_box_afternm PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_box_beforenm PROTO STDCALL :QWORD,:QWORD,:QWORD
crypto_box_keypair PROTO STDCALL :QWORD,:QWORD
crypto_box_open PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_box_open_afternm PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_core_hsalsa20 PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
crypto_core_salsa20 PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
crypto_hash PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
crypto_hashblocks PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
crypto_onetimeauth PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_onetimeauth_verify PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_scalarmult PROTO STDCALL :QWORD,:QWORD,:QWORD
crypto_scalarmult_base PROTO STDCALL :QWORD,:QWORD
crypto_secretbox PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_secretbox_open PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_sign PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_sign_keypair PROTO STDCALL :QWORD,:QWORD
crypto_sign_open PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_stream PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_stream_salsa20 PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_stream_salsa20_xor PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_stream_xor PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
crypto_verify_16 PROTO STDCALL :QWORD,:QWORD
crypto_verify_32 PROTO STDCALL :QWORD,:QWORD
fprintf PROTO C :VARARG
hProvider PROTO C :VARARG
randombytes PROTO STDCALL :QWORD,:QWORD,:QWORD
randombytes_close PROTO STDCALL 
sodium_init PROTO STDCALL 
sprintf PROTO C :VARARG
sprintf_s PROTO C :VARARG
zmq_atomic_counter_dec PROTO STDCALL :QWORD
zmq_atomic_counter_destroy PROTO STDCALL :QWORD
zmq_atomic_counter_inc PROTO STDCALL :QWORD
zmq_atomic_counter_new PROTO STDCALL 
zmq_atomic_counter_set PROTO STDCALL :QWORD,:QWORD
zmq_atomic_counter_value PROTO STDCALL :QWORD
zmq_bind PROTO STDCALL :QWORD,:QWORD
zmq_close PROTO STDCALL :QWORD
zmq_connect PROTO STDCALL :QWORD,:QWORD
zmq_ctx_destroy PROTO STDCALL :QWORD
zmq_ctx_get PROTO STDCALL :QWORD,:QWORD
zmq_ctx_new PROTO STDCALL 
zmq_ctx_set PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_ctx_shutdown PROTO STDCALL :QWORD
zmq_ctx_term PROTO STDCALL :QWORD
zmq_curve_keypair PROTO STDCALL :QWORD,:QWORD
zmq_curve_public PROTO STDCALL :QWORD,:QWORD
zmq_device PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_disconnect PROTO STDCALL :QWORD,:QWORD
zmq_errno PROTO STDCALL 
zmq_getsockopt PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_has PROTO STDCALL :QWORD
zmq_init PROTO STDCALL :QWORD
zmq_msg_close PROTO STDCALL :QWORD
zmq_msg_copy PROTO STDCALL :QWORD,:QWORD
zmq_msg_data PROTO STDCALL :QWORD
zmq_msg_get PROTO STDCALL :QWORD,:QWORD
zmq_msg_gets PROTO STDCALL :QWORD,:QWORD
zmq_msg_init PROTO STDCALL :QWORD
zmq_msg_init_data PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
zmq_msg_init_size PROTO STDCALL :QWORD,:QWORD
zmq_msg_more PROTO STDCALL :QWORD
zmq_msg_move PROTO STDCALL :QWORD,:QWORD
zmq_msg_recv PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_msg_send PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_msg_set PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_msg_size PROTO STDCALL :QWORD
zmq_poll PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_proxy PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_proxy_steerable PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_recv PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_recviov PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_recvmsg PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_send PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_send_const PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_sendiov PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_sendmsg PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_setsockopt PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_sleep PROTO STDCALL :QWORD
zmq_socket PROTO STDCALL :QWORD,:QWORD
zmq_socket_monitor PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_stopwatch_start PROTO STDCALL 
zmq_stopwatch_stop PROTO STDCALL :QWORD
zmq_strerror PROTO STDCALL :QWORD
zmq_term PROTO STDCALL :QWORD
zmq_threadclose PROTO STDCALL :QWORD
zmq_threadstart PROTO STDCALL :QWORD,:QWORD
zmq_timers_add PROTO STDCALL :QWORD,:QWORD,:QWORD,:QWORD
zmq_timers_cancel PROTO STDCALL :QWORD,:QWORD
zmq_timers_destroy PROTO STDCALL :QWORD
zmq_timers_execute PROTO STDCALL :QWORD
zmq_timers_new PROTO STDCALL 
zmq_timers_reset PROTO STDCALL :QWORD,:QWORD
zmq_timers_set_interval PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_timers_timeout PROTO STDCALL :QWORD
zmq_unbind PROTO STDCALL :QWORD,:QWORD
zmq_version PROTO STDCALL :QWORD,:QWORD,:QWORD
zmq_z85_decode PROTO STDCALL :QWORD,:QWORD
zmq_z85_encode PROTO STDCALL :QWORD,:QWORD,:QWORD
