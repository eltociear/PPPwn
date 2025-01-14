/*
 * Copyright (C) 2024 Andy Nguyen
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef __OFFSETS_H__
#define __OFFSETS_H__

#if FIRMWARE == 900 // FW 9.00

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff843ed9f8

#define kdlsym_addr_cc_cpu 0xffffffff843ad360
#define kdlsym_addr_callwheelsize 0xffffffff843af360

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff822ad070

#define kdlsym_addr_Xill 0xffffffff8237d500
#define kdlsym_addr_setidt 0xffffffff82512c40

#define kdlsym_addr_kernel_map 0xffffffff84468d48
#define kdlsym_addr_kmem_alloc 0xffffffff8257be70

#define kdlsym_addr_kproc_create 0xffffffff822969e0
#define kdlsym_addr_kproc_exit 0xffffffff82296c50

#define kdlsym_addr_ksock_create 0xffffffff8261bd20
#define kdlsym_addr_ksock_close 0xffffffff8261bd90
#define kdlsym_addr_ksock_bind 0xffffffff8261bda0
#define kdlsym_addr_ksock_recv 0xffffffff8261c100

#define kdlsym_addr_uart_patch 0xffffffff8372bf60
#define kdlsym_addr_veri_patch 0xffffffff82826874


#elif (FIRMWARE == 903 || FIRMWARE == 904) // FW 9.03/9.04

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0 // Identical to 9.00

#define kdlsym_addr_pppoe_softc_list 0xffffffff843e99f8

#define kdlsym_addr_cc_cpu 0xffffffff843a9360
#define kdlsym_addr_callwheelsize 0xffffffff843ab360

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff822ad070 // Identical to 9.00

#define kdlsym_addr_Xill 0xffffffff8237d4b0
#define kdlsym_addr_setidt 0xffffffff825128e0

#define kdlsym_addr_kernel_map 0xffffffff84464d48
#define kdlsym_addr_kmem_alloc 0xffffffff8257a070

#define kdlsym_addr_kproc_create 0xffffffff822969e0 // Identical to 9.00
#define kdlsym_addr_kproc_exit 0xffffffff82296c50 // Identical to 9.00

#define kdlsym_addr_ksock_create 0xffffffff82619c90
#define kdlsym_addr_ksock_close 0xffffffff82619d00
#define kdlsym_addr_ksock_bind 0xffffffff82619d10
#define kdlsym_addr_ksock_recv 0xffffffff8261a070

#define kdlsym_addr_uart_patch 0xffffffff83727f60
#define kdlsym_addr_veri_patch 0xffffffff82824834


#elif (FIRMWARE == 1000 || FIRMWARE == 1001) // FW 10.00/10.01

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff8446d920

#define kdlsym_addr_cc_cpu 0xffffffff844921b0
#define kdlsym_addr_callwheelsize 0xffffffff844941b0

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff82651780

#define kdlsym_addr_Xill 0xffffffff824d2370
#define kdlsym_addr_setidt 0xffffffff8227b460

#define kdlsym_addr_kernel_map 0xffffffff8447bef8
#define kdlsym_addr_kmem_alloc 0xffffffff8253b040

#define kdlsym_addr_kproc_create 0xffffffff82407d90
#define kdlsym_addr_kproc_exit 0xffffffff82408000

#define kdlsym_addr_ksock_create 0xffffffff82406a10
#define kdlsym_addr_ksock_close 0xffffffff82406a80
#define kdlsym_addr_ksock_bind 0xffffffff82406a90
#define kdlsym_addr_ksock_recv 0xffffffff82406df0

#define kdlsym_addr_uart_patch 0xffffffff83c78a78
#define kdlsym_addr_veri_patch 0xffffffff8281e864


#elif FIRMWARE == 1100 // FW 11.00

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff844e2578

#define kdlsym_addr_cc_cpu 0xffffffff844dde80
#define kdlsym_addr_callwheelsize 0xffffffff844dfe80

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff82404e00

#define kdlsym_addr_Xill 0xffffffff824d2370
#define kdlsym_addr_setidt 0xffffffff8245bdb0

#define kdlsym_addr_kernel_map 0xffffffff843ff130
#define kdlsym_addr_kmem_alloc 0xffffffff82445e10

#define kdlsym_addr_kproc_create 0xffffffff822c3140
#define kdlsym_addr_kproc_exit 0xffffffff822C33b0

#define kdlsym_addr_ksock_create 0xffffffff824a9cc0
#define kdlsym_addr_ksock_close 0xffffffff824a9d30
#define kdlsym_addr_ksock_bind 0xffffffff824a9d40
#define kdlsym_addr_ksock_recv 0xffffffff824aa0a0

#define kdlsym_addr_uart_patch 0xffffffff8372cff8
#define kdlsym_addr_veri_patch 0xffffffff82823f64

#else

#error "Invalid firmware"

#endif

#define kdlsym(sym) (kaslr_offset + kdlsym_addr_##sym)

#endif
