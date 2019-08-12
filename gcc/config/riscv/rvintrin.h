/*
 *  RISC-V "B" extension proposal intrinsics and emulation
 *
 *  Copyright (C) 2019  Clifford Wolf <clifford@clifford.at>
 *
 *  Permission to use, copy, modify, and/or distribute this software for any
 *  purpose with or without fee is hereby granted, provided that the above
 *  copyright notice and this permission notice appear in all copies.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 *  ----------------------------------------------------------------------
 *
 *  Define RVINTRIN_EMULATE to enable emulation mode.
 *
 *  This header defines C inline functions with "mockup intrinsics" for
 *  RISC-V "B" extension proposal instructions.
 *
 *  _rv_*(...)
 *    RV32/64 intrinsics that operate on the "long" data type
 *
 *  _rv32_*(...)
 *    RV32/64 intrinsics that operate on the "int32_t" data type
 *
 *  _rv64_*(...)
 *    RV64-only intrinsics that operate on the "int64_t" data type
 *
 */

#ifndef RVINTRIN_H
#define RVINTRIN_H

#include <limits.h>
#include <stdint.h>

#if !defined(__riscv_xlen) && !defined(RVINTRIN_EMULATE)
#  warning "Target is not RISC-V. Enabling <rvintrin.h> emulation mode."
#  define RVINTRIN_EMULATE 1
#endif

#ifndef RVINTRIN_EMULATE

#if __riscv_xlen == 32
#  define RVINTRIN_RV32
#endif

#if __riscv_xlen == 64
#  define RVINTRIN_RV64
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_clz (int32_t rs1) { int32_t rd; __asm__ ("clz   %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int32_t _rv32_ctz (int32_t rs1) { int32_t rd; __asm__ ("ctz   %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int32_t _rv32_pcnt(int32_t rs1) { int32_t rd; __asm__ ("pcnt  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_clz (int32_t rs1) { int32_t rd; __asm__ ("clzw  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int32_t _rv32_ctz (int32_t rs1) { int32_t rd; __asm__ ("ctzw  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int32_t _rv32_pcnt(int32_t rs1) { int32_t rd; __asm__ ("pcntw %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }

static inline int64_t _rv64_clz (int64_t rs1) { int64_t rd; __asm__ ("clz   %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_ctz (int64_t rs1) { int64_t rd; __asm__ ("ctz   %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_pcnt(int64_t rs1) { int64_t rd; __asm__ ("pcnt  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_pack(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("pack  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_pack(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("packw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_pack(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("pack  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

static inline int32_t _rv32_min (int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("min  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_minu(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("minu %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_max (int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("max  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_maxu(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("maxu %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

#ifdef RVINTRIN_RV64
static inline int64_t _rv64_min (int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("min  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_minu(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("minu %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_max (int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("max  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_maxu(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("maxu %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_sbset (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbseti %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbset %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbclr (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbclri %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbclr %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbinv (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbinvi %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbinv %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbext (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbexti %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbext %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_sbset (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbsetiw %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbsetw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbclr (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbclriw %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbclrw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbinv (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbinviw %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbinvw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sbext (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbexti  %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & rs2)); else __asm__ ("sbextw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

static inline int64_t _rv64_sbset (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbseti %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 & rs2)); else __asm__ ("sbset %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_sbclr (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbclri %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 & rs2)); else __asm__ ("sbclr %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_sbinv (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbinvi %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 & rs2)); else __asm__ ("sbinv %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_sbext (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sbexti %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 & rs2)); else __asm__ ("sbext %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_sll    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("slli    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(32 &  rs2)); else __asm__ ("sll     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_srl    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("srli    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(32 &  rs2)); else __asm__ ("srl     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sra    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("srai    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(32 &  rs2)); else __asm__ ("sra     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_slo    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sloi    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(32 &  rs2)); else __asm__ ("slo     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sro    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sroi    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(32 &  rs2)); else __asm__ ("sro     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_rol    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("rori    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & -rs2)); else __asm__ ("rol     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_ror    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("rori    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("ror     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_grev   (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("grevi   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("grev    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_shfl   (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("shfli   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(15 &  rs2)); else __asm__ ("shfl    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_unshfl (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("unshfli %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(15 &  rs2)); else __asm__ ("unshfl  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_sll    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("slliw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("sllw    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_srl    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("srliw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("srlw    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sra    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sraiw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("sraw    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_slo    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sloiw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("slow    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_sro    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sroiw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("srow    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_rol    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("roriw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 & -rs2)); else __asm__ ("rolw    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_ror    (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("roriw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("rorw    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_grev   (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("greviw  %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("grevw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_shfl   (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("shfli   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(15 &  rs2)); else __asm__ ("shflw   %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_unshfl (int32_t rs1, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("unshfli %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(15 &  rs2)); else __asm__ ("unshflw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

static inline int64_t _rv64_sll    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("slli    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("sll     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_srl    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("srli    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("srl     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_sra    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("srai    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("sra     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_slo    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sloi    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("slo     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_sro    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("sroi    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("sro     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_rol    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("rori    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 & -rs2)); else __asm__ ("rol     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_ror    (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("rori    %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("ror     %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_grev   (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("grevi   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(63 &  rs2)); else __asm__ ("grev    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_shfl   (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("shfli   %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("shfl    %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_unshfl (int64_t rs1, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("unshfli %0, %1, %2" : "=r"(rd) : "r"(rs1), "i"(31 &  rs2)); else __asm__ ("unshfl  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_bext(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("bext  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_bdep(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("bdep  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_bext(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("bextw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_bdep(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("bdepw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

static inline int64_t _rv64_bext(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("bext  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_bdep(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("bdep  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_clmul (int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmul   %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_clmulh(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmulh  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_clmulr(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmulr  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_clmul (int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmulw  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_clmulh(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmulhw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int32_t _rv32_clmulr(int32_t rs1, int32_t rs2) { int32_t rd; __asm__ ("clmulrw %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

static inline int64_t _rv64_clmul (int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("clmul   %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_clmulh(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("clmulh  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_clmulr(int64_t rs1, int64_t rs2) { int64_t rd; __asm__ ("clmulr  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

static inline long _rv_crc32_b (long rs1) { long rd; __asm__ ("crc32.b  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline long _rv_crc32_h (long rs1) { long rd; __asm__ ("crc32.h  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline long _rv_crc32_w (long rs1) { long rd; __asm__ ("crc32.w  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }

static inline long _rv_crc32c_b(long rs1) { long rd; __asm__ ("crc32c.b %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline long _rv_crc32c_h(long rs1) { long rd; __asm__ ("crc32c.h %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline long _rv_crc32c_w(long rs1) { long rd; __asm__ ("crc32c.w %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }

#ifdef RVINTRIN_RV64
static inline long _rv_crc32_d (long rs1) { long rd; __asm__ ("crc32.d  %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline long _rv_crc32c_d(long rs1) { long rd; __asm__ ("crc32c.d %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int64_t _rv64_bmatflip(int64_t rs1) { long rd; __asm__ ("bmatflip %0, %1" : "=r"(rd) : "r"(rs1)); return rd; }
static inline int64_t _rv64_bmator  (int64_t rs1, int64_t rs2) { long rd; __asm__ ("bmator  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline int64_t _rv64_bmatxor (int64_t rs1, int64_t rs2) { long rd; __asm__ ("bmatxor %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
#endif

static inline long _rv_cmix(long rs2, long rs1, long rs3) { long rd; __asm__ ("cmix %0, %1, %2, %3" : "=r"(rd) : "r"(rs2), "r"(rs1), "r"(rs3)); return rd; }
static inline long _rv_cmov(long rs2, long rs1, long rs3) { long rd; __asm__ ("cmov %0, %1, %2, %3" : "=r"(rd) : "r"(rs2), "r"(rs1), "r"(rs3)); return rd; }

#ifdef RVINTRIN_RV32
static inline int32_t _rv32_fsl(int32_t rs1, int32_t rs3, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsri  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(63 & -rs2)); else __asm__ ("fsl  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }
static inline int32_t _rv32_fsr(int32_t rs1, int32_t rs3, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsri  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(63 &  rs2)); else __asm__ ("fsr  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }
#endif

#ifdef RVINTRIN_RV64
static inline int32_t _rv32_fsl(int32_t rs1, int32_t rs3, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsriw %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(63 & -rs2)); else __asm__ ("fslw %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }
static inline int32_t _rv32_fsr(int32_t rs1, int32_t rs3, int32_t rs2) { int32_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsriw %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(63 &  rs2)); else __asm__ ("fsrw %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }

static inline int64_t _rv64_fsl(int64_t rs1, int64_t rs3, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsri  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(127 & -rs2)); else __asm__ ("fsl %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }
static inline int64_t _rv64_fsr(int64_t rs1, int64_t rs3, int64_t rs2) { int64_t rd; if (__builtin_constant_p(rs2)) __asm__ ("fsri  %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "i"(127 &  rs2)); else __asm__ ("fsr %0, %1, %2, %3" : "=r"(rd) : "r"(rs1), "r"(rs3), "r"(rs2)); return rd; }
#endif

static inline long _rv_andn(long rs1, long rs2) { long rd; __asm__ ("andn %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline long _rv_orn (long rs1, long rs2) { long rd; __asm__ ("orn  %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }
static inline long _rv_xnor(long rs1, long rs2) { long rd; __asm__ ("xnor %0, %1, %2" : "=r"(rd) : "r"(rs1), "r"(rs2)); return rd; }

#else // RVINTRIN_EMULATE

#if UINT_MAX != 0xffffffffU
#  error "<rvintrin.h> emulation mode only supports systems with sizeof(int) = 4."
#endif

#if (ULLONG_MAX == 0xffffffffLLU) || (ULLONG_MAX != 0xffffffffffffffffLLU)
#  error "<rvintrin.h> emulation mode only supports systems with sizeof(long long) = 8."
#endif

#if UINT_MAX == ULONG_MAX
#  define RVINTRIN_RV32
#else
#  define RVINTRIN_RV64
#endif

#ifdef RVINTRIN_NOBUILTINS
static inline int32_t _rv32_clz(int32_t rs1) { for (int i=0; i < 32; i++) { if (1 & (rs1 >> (31-i))) return i; } return 32; }
static inline int64_t _rv64_clz(int64_t rs1) { for (int i=0; i < 64; i++) { if (1 & (rs1 >> (63-i))) return i; } return 64; }

static inline int32_t _rv32_ctz(int32_t rs1) { for (int i=0; i < 32; i++) { if (1 & (rs1 >> i)) return i; } return 32; }
static inline int64_t _rv64_ctz(int64_t rs1) { for (int i=0; i < 64; i++) { if (1 & (rs1 >> i)) return i; } return 64; }

static inline int32_t _rv32_pcnt(int32_t rs1) { int k=0; for (int i=0; i < 32; i++) { if (1 & (rs1 >> i)) k++; } return k; }
static inline int64_t _rv64_pcnt(int64_t rs1) { int k=0; for (int i=0; i < 64; i++) { if (1 & (rs1 >> i)) k++; } return k; }
#else
static inline int32_t _rv32_clz(int32_t rs1) { return rs1 ? __builtin_clz(rs1)   : 32; }
static inline int64_t _rv64_clz(int64_t rs1) { return rs1 ? __builtin_clzll(rs1) : 64; }

static inline int32_t _rv32_ctz(int32_t rs1) { return rs1 ? __builtin_ctz(rs1)   : 32; }
static inline int64_t _rv64_ctz(int64_t rs1) { return rs1 ? __builtin_ctzll(rs1) : 64; }

static inline int32_t _rv32_pcnt(int32_t rs1) { return __builtin_popcount(rs1);   }
static inline int64_t _rv64_pcnt(int64_t rs1) { return __builtin_popcountll(rs1); }
#endif

static inline int32_t _rv32_pack(int32_t rs1, int32_t rs2) { return (rs1 & 0x0000ffff)   | (rs2 << 16); }
static inline int64_t _rv64_pack(int64_t rs1, int64_t rs2) { return (rs1 & 0xffffffffLL) | (rs2 << 32); }

static inline int32_t _rv32_min (int32_t rs1, int32_t rs2) { return rs1 < rs2 ? rs1 : rs2; }
static inline int32_t _rv32_minu(int32_t rs1, int32_t rs2) { return (uint32_t)rs1 < (uint32_t)rs2 ? rs1 : rs2; }
static inline int32_t _rv32_max (int32_t rs1, int32_t rs2) { return rs1 > rs2 ? rs1 : rs2; }
static inline int32_t _rv32_maxu(int32_t rs1, int32_t rs2) { return (uint32_t)rs1 > (uint32_t)rs2 ? rs1 : rs2; }

static inline int64_t _rv64_min (int64_t rs1, int64_t rs2) { return rs1 < rs2 ? rs1 : rs2; }
static inline int64_t _rv64_minu(int64_t rs1, int64_t rs2) { return (uint64_t)rs1 < (uint64_t)rs2 ? rs1 : rs2; }
static inline int64_t _rv64_max (int64_t rs1, int64_t rs2) { return rs1 > rs2 ? rs1 : rs2; }
static inline int64_t _rv64_maxu(int64_t rs1, int64_t rs2) { return (uint64_t)rs1 > (uint64_t)rs2 ? rs1 : rs2; }

static inline int32_t _rv32_sbset (int32_t rs1, int32_t rs2) { return rs1 |  (1   << (rs2 & 31)); }
static inline int32_t _rv32_sbclr (int32_t rs1, int32_t rs2) { return rs1 & ~(1   << (rs2 & 31)); }
static inline int32_t _rv32_sbinv (int32_t rs1, int32_t rs2) { return rs1 ^  (1   << (rs2 & 31)); }
static inline int32_t _rv32_sbext (int32_t rs1, int32_t rs2) { return 1   &  (rs1 >> (rs2 & 31)); }

static inline int64_t _rv64_sbset (int64_t rs1, int64_t rs2) { return rs1 |  (1LL << (rs2 & 63)); }
static inline int64_t _rv64_sbclr (int64_t rs1, int64_t rs2) { return rs1 & ~(1LL << (rs2 & 63)); }
static inline int64_t _rv64_sbinv (int64_t rs1, int64_t rs2) { return rs1 ^  (1LL << (rs2 & 63)); }
static inline int64_t _rv64_sbext (int64_t rs1, int64_t rs2) { return 1LL &  (rs1 >> (rs2 & 63)); }

static inline int32_t _rv32_sll    (int32_t rs1, int32_t rs2) { return rs1 << (rs2 & 31); }
static inline int32_t _rv32_srl    (int32_t rs1, int32_t rs2) { return (uint32_t)rs1 >> (rs2 & 31); }
static inline int32_t _rv32_sra    (int32_t rs1, int32_t rs2) { return rs1 >> (rs2 & 31); }
static inline int32_t _rv32_slo    (int32_t rs1, int32_t rs2) { return ~(~rs1 << (rs2 & 31)); }
static inline int32_t _rv32_sro    (int32_t rs1, int32_t rs2) { return ~(~(uint32_t)rs1 >> (rs2 & 31)); }
static inline int32_t _rv32_rol    (int32_t rs1, int32_t rs2) { return _rv32_sll(rs1, rs2) | _rv32_srl(rs1, -rs2); }
static inline int32_t _rv32_ror    (int32_t rs1, int32_t rs2) { return _rv32_srl(rs1, rs2) | _rv32_sll(rs1, -rs2); }

static inline int32_t _rv32_grev(int32_t rs1, int32_t rs2)
{
	uint32_t x = rs1;
	int shamt = rs2 & 31;
	if (shamt &  1) x = ((x & 0x55555555) <<  1) | ((x & 0xAAAAAAAA) >>  1);
	if (shamt &  2) x = ((x & 0x33333333) <<  2) | ((x & 0xCCCCCCCC) >>  2);
	if (shamt &  4) x = ((x & 0x0F0F0F0F) <<  4) | ((x & 0xF0F0F0F0) >>  4);
	if (shamt &  8) x = ((x & 0x00FF00FF) <<  8) | ((x & 0xFF00FF00) >>  8);
	if (shamt & 16) x = ((x & 0x0000FFFF) << 16) | ((x & 0xFFFF0000) >> 16);
	return x;
}

static inline uint32_t _rvintrin_shuffle32_stage(uint32_t src, uint32_t maskL, uint32_t maskR, int N)
{
	uint32_t x = src & ~(maskL | maskR);
	x |= ((src <<  N) & maskL) | ((src >>  N) & maskR);
	return x;
}

static inline int32_t _rv32_shfl(int32_t rs1, int32_t rs2)
{
	uint32_t x = rs1;
	int shamt = rs2 & 15;

	if (shamt & 8) x = _rvintrin_shuffle32_stage(x, 0x00ff0000, 0x0000ff00, 8);
	if (shamt & 4) x = _rvintrin_shuffle32_stage(x, 0x0f000f00, 0x00f000f0, 4);
	if (shamt & 2) x = _rvintrin_shuffle32_stage(x, 0x30303030, 0x0c0c0c0c, 2);
	if (shamt & 1) x = _rvintrin_shuffle32_stage(x, 0x44444444, 0x22222222, 1);

	return x;
}

static inline int32_t _rv32_unshfl(int32_t rs1, int32_t rs2)
{
	uint32_t x = rs1;
	int shamt = rs2 & 15;

	if (shamt & 1) x = _rvintrin_shuffle32_stage(x, 0x44444444, 0x22222222, 1);
	if (shamt & 2) x = _rvintrin_shuffle32_stage(x, 0x30303030, 0x0c0c0c0c, 2);
	if (shamt & 4) x = _rvintrin_shuffle32_stage(x, 0x0f000f00, 0x00f000f0, 4);
	if (shamt & 8) x = _rvintrin_shuffle32_stage(x, 0x00ff0000, 0x0000ff00, 8);

	return x;
}

static inline int64_t _rv64_sll    (int64_t rs1, int64_t rs2) { return rs1 << (rs2 & 63); }
static inline int64_t _rv64_srl    (int64_t rs1, int64_t rs2) { return (uint64_t)rs1 >> (rs2 & 63); }
static inline int64_t _rv64_sra    (int64_t rs1, int64_t rs2) { return rs1 >> (rs2 & 63); }
static inline int64_t _rv64_slo    (int64_t rs1, int64_t rs2) { return ~(~rs1 << (rs2 & 63)); }
static inline int64_t _rv64_sro    (int64_t rs1, int64_t rs2) { return ~(~(uint64_t)rs1 >> (rs2 & 63)); }
static inline int64_t _rv64_rol    (int64_t rs1, int64_t rs2) { return _rv64_sll(rs1, rs2) | _rv64_srl(rs1, -rs2); }
static inline int64_t _rv64_ror    (int64_t rs1, int64_t rs2) { return _rv64_srl(rs1, rs2) | _rv64_sll(rs1, -rs2); }

static inline int64_t _rv64_grev(int64_t rs1, int64_t rs2)
{
	uint64_t x = rs1;
	int shamt = rs2 & 63;
	if (shamt &  1) x = ((x & 0x5555555555555555LL) <<  1) | ((x & 0xAAAAAAAAAAAAAAAALL) >>  1);
	if (shamt &  2) x = ((x & 0x3333333333333333LL) <<  2) | ((x & 0xCCCCCCCCCCCCCCCCLL) >>  2);
	if (shamt &  4) x = ((x & 0x0F0F0F0F0F0F0F0FLL) <<  4) | ((x & 0xF0F0F0F0F0F0F0F0LL) >>  4);
	if (shamt &  8) x = ((x & 0x00FF00FF00FF00FFLL) <<  8) | ((x & 0xFF00FF00FF00FF00LL) >>  8);
	if (shamt & 16) x = ((x & 0x0000FFFF0000FFFFLL) << 16) | ((x & 0xFFFF0000FFFF0000LL) >> 16);
	if (shamt & 32) x = ((x & 0x00000000FFFFFFFFLL) << 32) | ((x & 0xFFFFFFFF00000000LL) >> 32);
	return x;
}

static inline uint64_t _rvintrin_shuffle64_stage(uint64_t src, uint64_t maskL, uint64_t maskR, int N)
{
	uint64_t x = src & ~(maskL | maskR);
	x |= ((src <<  N) & maskL) | ((src >>  N) & maskR);
	return x;
}

static inline int64_t _rv64_shfl(int64_t rs1, int64_t rs2)
{
	uint64_t x = rs1;
	int shamt = rs2 & 31;
	if (shamt & 16) x = _rvintrin_shuffle64_stage(x, 0x0000ffff00000000LL, 0x00000000ffff0000LL, 16);
	if (shamt &  8) x = _rvintrin_shuffle64_stage(x, 0x00ff000000ff0000LL, 0x0000ff000000ff00LL,  8);
	if (shamt &  4) x = _rvintrin_shuffle64_stage(x, 0x0f000f000f000f00LL, 0x00f000f000f000f0LL,  4);
	if (shamt &  2) x = _rvintrin_shuffle64_stage(x, 0x3030303030303030LL, 0x0c0c0c0c0c0c0c0cLL,  2);
	if (shamt &  1) x = _rvintrin_shuffle64_stage(x, 0x4444444444444444LL, 0x2222222222222222LL,  1);
	return x;
}

static inline int64_t _rv64_unshfl(int64_t rs1, int64_t rs2)
{
	uint64_t x = rs1;
	int shamt = rs2 & 31;
	if (shamt &  1) x = _rvintrin_shuffle64_stage(x, 0x4444444444444444LL, 0x2222222222222222LL,  1);
	if (shamt &  2) x = _rvintrin_shuffle64_stage(x, 0x3030303030303030LL, 0x0c0c0c0c0c0c0c0cLL,  2);
	if (shamt &  4) x = _rvintrin_shuffle64_stage(x, 0x0f000f000f000f00LL, 0x00f000f000f000f0LL,  4);
	if (shamt &  8) x = _rvintrin_shuffle64_stage(x, 0x00ff000000ff0000LL, 0x0000ff000000ff00LL,  8);
	if (shamt & 16) x = _rvintrin_shuffle64_stage(x, 0x0000ffff00000000LL, 0x00000000ffff0000LL, 16);
	return x;
}

static inline int32_t _rv32_bext(int32_t rs1, int32_t rs2)
{
	uint32_t c = 0, i = 0, data = rs1, mask = rs2;
	while (mask) {
		uint32_t b = mask & ~((mask | (mask-1)) + 1);
		c |= (data & b) >> (_rv32_ctz(b) - i);
		i += _rv32_pcnt(b);
		mask -= b;
	}
	return c;
}

static inline int32_t _rv32_bdep(int32_t rs1, int32_t rs2)
{
	uint32_t c = 0, i = 0, data = rs1, mask = rs2;
	while (mask) {
		uint32_t b = mask & ~((mask | (mask-1)) + 1);
		c |= (data << (_rv32_ctz(b) - i)) & b;
		i += _rv32_pcnt(b);
		mask -= b;
	}
	return c;
}

static inline int64_t _rv64_bext(int64_t rs1, int64_t rs2)
{
	uint64_t c = 0, i = 0, data = rs1, mask = rs2;
	while (mask) {
		uint64_t b = mask & ~((mask | (mask-1)) + 1);
		c |= (data & b) >> (_rv64_ctz(b) - i);
		i += _rv64_pcnt(b);
		mask -= b;
	}
	return c;
}

static inline int64_t _rv64_bdep(int64_t rs1, int64_t rs2)
{
	uint64_t c = 0, i = 0, data = rs1, mask = rs2;
	while (mask) {
		uint64_t b = mask & ~((mask | (mask-1)) + 1);
		c |= (data << (_rv64_ctz(b) - i)) & b;
		i += _rv64_pcnt(b);
		mask -= b;
	}
	return c;
}

static inline int32_t _rv32_clmul(int32_t rs1, int32_t rs2)
{
	uint32_t a = rs1, b = rs2, x = 0;
	for (int i = 0; i < 32; i++)
		if ((b >> i) & 1)
			x ^= a << i;
	return x;
}

static inline int32_t _rv32_clmulh(int32_t rs1, int32_t rs2)
{
	uint32_t a = rs1, b = rs2, x = 0;
	for (int i = 1; i < 32; i++)
		if ((b >> i) & 1)
			x ^= a >> (32-i);
	return x;
}

static inline int32_t _rv32_clmulr(int32_t rs1, int32_t rs2)
{
	uint32_t a = rs1, b = rs2, x = 0;
	for (int i = 0; i < 32; i++)
		if ((b >> i) & 1)
			x ^= a >> (31-i);
	return x;
}

static inline int64_t _rv64_clmul(int64_t rs1, int64_t rs2)
{
	uint64_t a = rs1, b = rs2, x = 0;
	for (int i = 0; i < 64; i++)
		if ((b >> i) & 1)
			x ^= a << i;
	return x;
}

static inline int64_t _rv64_clmulh(int64_t rs1, int64_t rs2)
{
	uint64_t a = rs1, b = rs2, x = 0;
	for (int i = 1; i < 64; i++)
		if ((b >> i) & 1)
			x ^= a >> (64-i);
	return x;
}

static inline int64_t _rv64_clmulr(int64_t rs1, int64_t rs2)
{
	uint64_t a = rs1, b = rs2, x = 0;
	for (int i = 0; i < 64; i++)
		if ((b >> i) & 1)
			x ^= a >> (63-i);
	return x;
}

static inline long _rvintrin_crc32(unsigned long x, int nbits)
{
	for (int i = 0; i < nbits; i++)
		x = (x >> 1) ^ (0xEDB88320 & ~((x&1)-1));
	return x;
}

static inline long _rvintrin_crc32c(unsigned long x, int nbits)
{
	for (int i = 0; i < nbits; i++)
		x = (x >> 1) ^ (0x82F63B78 & ~((x&1)-1));
	return x;
}

static inline long _rv_crc32_b(long rs1) { return _rvintrin_crc32(rs1, 8); }
static inline long _rv_crc32_h(long rs1) { return _rvintrin_crc32(rs1, 16); }
static inline long _rv_crc32_w(long rs1) { return _rvintrin_crc32(rs1, 32); }

static inline long _rv_crc32c_b(long rs1) { return _rvintrin_crc32c(rs1, 8); }
static inline long _rv_crc32c_h(long rs1) { return _rvintrin_crc32c(rs1, 16); }
static inline long _rv_crc32c_w(long rs1) { return _rvintrin_crc32c(rs1, 32); }

#ifdef RVINTRIN_RV64
static inline long _rv_crc32_d (long rs1) { return _rvintrin_crc32 (rs1, 64); }
static inline long _rv_crc32c_d(long rs1) { return _rvintrin_crc32c(rs1, 64); }
#endif

static inline int64_t _rv64_bmatflip(int64_t rs1)
{
	uint64_t x = rs1;
	x = _rv64_shfl(x, 31);
	x = _rv64_shfl(x, 31);
	x = _rv64_shfl(x, 31);
	return x;
}

static inline int64_t _rv64_bmatxor(int64_t rs1, int64_t rs2)
{
	// transpose of rs2
	int64_t rs2t = _rv64_bmatflip(rs2);

	uint8_t u[8]; // rows of rs1
	uint8_t v[8]; // cols of rs2

	for (int i = 0; i < 8; i++) {
		u[i] = rs1 >> (i*8);
		v[i] = rs2t >> (i*8);
	}

	uint64_t x = 0;
	for (int i = 0; i < 64; i++) {
		if (_rv64_pcnt(u[i / 8] & v[i % 8]) & 1)
			x |= 1LL << i;
	}

	return x;
}

static inline int64_t _rv64_bmator(int64_t rs1, int64_t rs2)
{
	// transpose of rs2
	int64_t rs2t = _rv64_bmatflip(rs2);

	uint8_t u[8]; // rows of rs1
	uint8_t v[8]; // cols of rs2

	for (int i = 0; i < 8; i++) {
		u[i] = rs1 >> (i*8);
		v[i] = rs2t >> (i*8);
	}

	uint64_t x = 0;
	for (int i = 0; i < 64; i++) {
		if ((u[i / 8] & v[i % 8]) != 0)
			x |= 1LL << i;
	}

	return x;
}

static inline long _rv_cmix(long rs2, long rs1, long rs3)
{
	return (rs1 & rs2) | (rs3 & ~rs2);
}

static inline long _rv_cmov(long rs2, long rs1, long rs3)
{
	return rs2 ? rs1 : rs3;
}

static inline int32_t _rv32_fsl(int32_t rs1, int32_t rs3, int32_t rs2)
{
	int shamt = rs2 & 63;
	uint32_t A = rs1, B = rs3;
	if (shamt >= 32) {
		shamt -= 32;
		A = rs3;
		B = rs1;
	}
	return shamt ? (A << shamt) | (B >> (32-shamt)) : A;
}

static inline int32_t _rv32_fsr(int32_t rs1, int32_t rs3, int32_t rs2)
{
	int shamt = rs2 & 63;
	uint32_t A = rs1, B = rs3;
	if (shamt >= 32) {
		shamt -= 32;
		A = rs3;
		B = rs1;
	}
	return shamt ? (A >> shamt) | (B << (32-shamt)) : A;
}

static inline int64_t _rv64_fsl(int64_t rs1, int64_t rs3, int64_t rs2)
{
	int shamt = rs2 & 127;
	uint64_t A = rs1, B = rs3;
	if (shamt >= 64) {
		shamt -= 64;
		A = rs3;
		B = rs1;
	}
	return shamt ? (A << shamt) | (B >> (64-shamt)) : A;
}

static inline int64_t _rv64_fsr(int64_t rs1, int64_t rs3, int64_t rs2)
{
	int shamt = rs2 & 127;
	uint64_t A = rs1, B = rs3;
	if (shamt >= 64) {
		shamt -= 64;
		A = rs3;
		B = rs1;
	}
	return shamt ? (A >> shamt) | (B << (64-shamt)) : A;
}

static inline long _rv_andn(long rs1, long rs2) { return rs1 & ~rs2; }
static inline long _rv_orn (long rs1, long rs2) { return rs1 | ~rs2; }
static inline long _rv_xnor(long rs1, long rs2) { return rs1 ^ ~rs2; }

#endif // RVINTRIN_EMULATE

#ifdef RVINTRIN_RV32
static inline long _rv_clz  (long rs1) { return _rv32_clz (rs1); }
static inline long _rv_ctz  (long rs1) { return _rv32_ctz (rs1); }
static inline long _rv_pcnt (long rs1) { return _rv32_pcnt(rs1); }

static inline long _rv_pack   (long rs1, long rs2) { return _rv32_pack   (rs1, rs2); }
static inline long _rv_min    (long rs1, long rs2) { return _rv32_min    (rs1, rs2); }
static inline long _rv_minu   (long rs1, long rs2) { return _rv32_minu   (rs1, rs2); }
static inline long _rv_max    (long rs1, long rs2) { return _rv32_max    (rs1, rs2); }
static inline long _rv_maxu   (long rs1, long rs2) { return _rv32_maxu   (rs1, rs2); }
static inline long _rv_sbset  (long rs1, long rs2) { return _rv32_sbset  (rs1, rs2); }
static inline long _rv_sbclr  (long rs1, long rs2) { return _rv32_sbclr  (rs1, rs2); }
static inline long _rv_sbinv  (long rs1, long rs2) { return _rv32_sbinv  (rs1, rs2); }
static inline long _rv_sbext  (long rs1, long rs2) { return _rv32_sbext  (rs1, rs2); }
static inline long _rv_sll    (long rs1, long rs2) { return _rv32_sll    (rs1, rs2); }
static inline long _rv_srl    (long rs1, long rs2) { return _rv32_srl    (rs1, rs2); }
static inline long _rv_sra    (long rs1, long rs2) { return _rv32_sra    (rs1, rs2); }
static inline long _rv_slo    (long rs1, long rs2) { return _rv32_slo    (rs1, rs2); }
static inline long _rv_sro    (long rs1, long rs2) { return _rv32_sro    (rs1, rs2); }
static inline long _rv_rol    (long rs1, long rs2) { return _rv32_rol    (rs1, rs2); }
static inline long _rv_ror    (long rs1, long rs2) { return _rv32_ror    (rs1, rs2); }
static inline long _rv_grev   (long rs1, long rs2) { return _rv32_grev   (rs1, rs2); }
static inline long _rv_shfl   (long rs1, long rs2) { return _rv32_shfl   (rs1, rs2); }
static inline long _rv_unshfl (long rs1, long rs2) { return _rv32_unshfl (rs1, rs2); }
static inline long _rv_bext   (long rs1, long rs2) { return _rv32_bext   (rs1, rs2); }
static inline long _rv_bdep   (long rs1, long rs2) { return _rv32_bdep   (rs1, rs2); }
static inline long _rv_clmul  (long rs1, long rs2) { return _rv32_clmul  (rs1, rs2); }
static inline long _rv_clmulh (long rs1, long rs2) { return _rv32_clmulh (rs1, rs2); }
static inline long _rv_clmulr (long rs1, long rs2) { return _rv32_clmulr (rs1, rs2); }

static inline long _rv_fsl(long rs1, long rs3, long rs2) { return _rv32_fsl(rs1, rs3, rs2); }
static inline long _rv_fsr(long rs1, long rs3, long rs2) { return _rv32_fsr(rs1, rs3, rs2); }
#endif

#ifdef RVINTRIN_RV64
static inline long _rv_clz     (long rs1) { return _rv64_clz     (rs1); }
static inline long _rv_ctz     (long rs1) { return _rv64_ctz     (rs1); }
static inline long _rv_pcnt    (long rs1) { return _rv64_pcnt    (rs1); }
static inline long _rv_bmatflip(long rs1) { return _rv64_bmatflip(rs1); }

static inline long _rv_pack   (long rs1, long rs2) { return _rv64_pack   (rs1, rs2); }
static inline long _rv_min    (long rs1, long rs2) { return _rv64_min    (rs1, rs2); }
static inline long _rv_minu   (long rs1, long rs2) { return _rv64_minu   (rs1, rs2); }
static inline long _rv_max    (long rs1, long rs2) { return _rv64_max    (rs1, rs2); }
static inline long _rv_maxu   (long rs1, long rs2) { return _rv64_maxu   (rs1, rs2); }
static inline long _rv_sbset  (long rs1, long rs2) { return _rv64_sbset  (rs1, rs2); }
static inline long _rv_sbclr  (long rs1, long rs2) { return _rv64_sbclr  (rs1, rs2); }
static inline long _rv_sbinv  (long rs1, long rs2) { return _rv64_sbinv  (rs1, rs2); }
static inline long _rv_sbext  (long rs1, long rs2) { return _rv64_sbext  (rs1, rs2); }
static inline long _rv_sll    (long rs1, long rs2) { return _rv64_sll    (rs1, rs2); }
static inline long _rv_srl    (long rs1, long rs2) { return _rv64_srl    (rs1, rs2); }
static inline long _rv_sra    (long rs1, long rs2) { return _rv64_sra    (rs1, rs2); }
static inline long _rv_slo    (long rs1, long rs2) { return _rv64_slo    (rs1, rs2); }
static inline long _rv_sro    (long rs1, long rs2) { return _rv64_sro    (rs1, rs2); }
static inline long _rv_rol    (long rs1, long rs2) { return _rv64_rol    (rs1, rs2); }
static inline long _rv_ror    (long rs1, long rs2) { return _rv64_ror    (rs1, rs2); }
static inline long _rv_grev   (long rs1, long rs2) { return _rv64_grev   (rs1, rs2); }
static inline long _rv_shfl   (long rs1, long rs2) { return _rv64_shfl   (rs1, rs2); }
static inline long _rv_unshfl (long rs1, long rs2) { return _rv64_unshfl (rs1, rs2); }
static inline long _rv_bext   (long rs1, long rs2) { return _rv64_bext   (rs1, rs2); }
static inline long _rv_bdep   (long rs1, long rs2) { return _rv64_bdep   (rs1, rs2); }
static inline long _rv_clmul  (long rs1, long rs2) { return _rv64_clmul  (rs1, rs2); }
static inline long _rv_clmulh (long rs1, long rs2) { return _rv64_clmulh (rs1, rs2); }
static inline long _rv_clmulr (long rs1, long rs2) { return _rv64_clmulr (rs1, rs2); }
static inline long _rv_bmator (long rs1, long rs2) { return _rv64_bmator (rs1, rs2); }
static inline long _rv_bmatxor(long rs1, long rs2) { return _rv64_bmatxor(rs1, rs2); }

static inline long _rv_fsl(long rs1, long rs3, long rs2) { return _rv64_fsl(rs1, rs3, rs2); }
static inline long _rv_fsr(long rs1, long rs3, long rs2) { return _rv64_fsr(rs1, rs3, rs2); }
#endif

#endif // RVINTRIN_H
