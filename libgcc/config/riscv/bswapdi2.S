/* 64-bit byteswap for RISC-V.

   Copyright (C) 2017 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#if __riscv_xlen == 64

.section .text
.globl __bswapdi2

__bswapdi2:
1:  auipc   a4, %pcrel_hi(__bswapdi2_c1)
    ld      a4, %pcrel_lo(1b)(a4)
    slli    a5, a0, 8
    and     a5, a5, a4
    srli    a0, a0, 8
    srli    a4, a4, 8
    and     a0, a0, a4
    or      a5, a5, a0
1:  auipc   a4, %pcrel_hi(__bswapdi2_c2)
    ld      a4, %pcrel_lo(1b)(a4)
    slli    a0, a5, 16
    and     a0, a0, a4
    srli    a5, a5, 16
    srli    a4, a4, 16
    and     a5, a5, a4
    or      a5, a5, a0
    slli    a0, a5, 32
    srli    a5, a5, 32
    or      a0, a0, a5
    ret

.section .rodata
__bswapdi2_c1: .8byte 0xFF00FF00FF00FF00ULL
__bswapdi2_c2: .8byte 0xFFFF0000FFFF0000ULL

#endif
