/* Definition of RISC-V target for GNU compiler.
   Copyright (C) 2016-2022 Free Software Foundation, Inc.
   Contributed by Andrew Waterman (andrew@sifive.com).

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_OPTS_H
#define GCC_RISCV_OPTS_H

enum riscv_abi_type {
  ABI_ILP32,
  ABI_ILP32E,
  ABI_ILP32F,
  ABI_ILP32D,
  ABI_LP64,
  ABI_LP64F,
  ABI_LP64D
};
extern enum riscv_abi_type riscv_abi;

enum riscv_code_model {
  CM_MEDLOW,
  CM_MEDANY,
  CM_PIC
};
extern enum riscv_code_model riscv_cmodel;

enum riscv_isa_spec_class {
  ISA_SPEC_CLASS_NONE,

  ISA_SPEC_CLASS_2P2,
  ISA_SPEC_CLASS_20190608,
  ISA_SPEC_CLASS_20191213
};

extern enum riscv_isa_spec_class riscv_isa_spec;

/* Keep this list in sync with define_attr "tune" in riscv.md.  */
enum riscv_microarchitecture_type {
  generic,
  sifive_7
};
extern enum riscv_microarchitecture_type riscv_microarchitecture;

enum riscv_align_data {
  riscv_align_data_type_xlen,
  riscv_align_data_type_natural
};

/* Where to get the canary for the stack protector.  */
enum stack_protector_guard {
  SSP_TLS,			/* per-thread canary in TLS block */
  SSP_GLOBAL			/* global canary */
};

/* RVV vector register sizes.  */
enum riscv_vector_bits_enum
{
  RVV_SCALABLE,
  RVV_NOT_IMPLEMENTED = RVV_SCALABLE,
  RVV_64 = 64,
  RVV_128 = 128,
  RVV_256 = 256,
  RVV_512 = 512,
  RVV_1024 = 1024,
  RVV_2048 = 2048,
  RVV_4096 = 4096,
  RVV_8192 = 8192,
  RVV_16384 = 16384,
  RVV_32768 = 32768,
  RVV_65536 = 65536
};

/* vectorization factor.  */
enum riscv_vector_lmul_enum
{
  RVV_LMUL1 = 1,
  RVV_LMUL2 = 2,
  RVV_LMUL4 = 4,
  RVV_LMUL8 = 8
};

enum vlmul_field_enum
{
  VLMUL_FIELD_000, /* LMUL = 1 */
  VLMUL_FIELD_001, /* LMUL = 2 */
  VLMUL_FIELD_010, /* LMUL = 4 */
  VLMUL_FIELD_011, /* LMUL = 8 */
  VLMUL_FIELD_100, /* RESERVED */
  VLMUL_FIELD_101, /* LMUL = 1/8 */
  VLMUL_FIELD_110, /* LMUL = 1/4 */
  VLMUL_FIELD_111, /* LMUL = 1/2 */
  MAX_VLMUL_FIELD
};

enum vsew_field_enum
{
  VSEW_FIELD_000, /* SEW = 8 */
  VSEW_FIELD_001, /* SEW = 16 */
  VSEW_FIELD_010, /* SEW = 32 */
  VSEW_FIELD_011, /* SEW = 64 */
  VSEW_FIELD_100, /* SEW = 128 */
  VSEW_FIELD_101, /* SEW = 256 */
  VSEW_FIELD_110, /* SEW = 512 */
  VSEW_FIELD_111  /* SEW = 1024 */
};

#define MASK_ZICSR    (1 << 0)
#define MASK_ZIFENCEI (1 << 1)

#define TARGET_ZICSR    ((riscv_zi_subext & MASK_ZICSR) != 0)
#define TARGET_ZIFENCEI ((riscv_zi_subext & MASK_ZIFENCEI) != 0)

#define TARGET_FP16 TARGET_ZFH

#define MASK_ZBA      (1 << 0)
#define MASK_ZBB      (1 << 1)
#define MASK_ZBC      (1 << 2)
#define MASK_ZBS      (1 << 3)

#define TARGET_ZBA    ((riscv_zb_subext & MASK_ZBA) != 0)
#define TARGET_ZBB    ((riscv_zb_subext & MASK_ZBB) != 0)
#define TARGET_ZBC    ((riscv_zb_subext & MASK_ZBC) != 0)
#define TARGET_ZBS    ((riscv_zb_subext & MASK_ZBS) != 0)

#define MASK_ZBKB     (1 << 0)
#define MASK_ZBKC     (1 << 1)
#define MASK_ZBKX     (1 << 2)
#define MASK_ZKNE     (1 << 3)
#define MASK_ZKND     (1 << 4)
#define MASK_ZKNH     (1 << 5)
#define MASK_ZKR      (1 << 6)
#define MASK_ZKSED    (1 << 7)
#define MASK_ZKSH     (1 << 8)
#define MASK_ZKT      (1 << 9)

#define TARGET_ZBKB   ((riscv_zk_subext & MASK_ZBKB) != 0)
#define TARGET_ZBKC   ((riscv_zk_subext & MASK_ZBKC) != 0)
#define TARGET_ZBKX   ((riscv_zk_subext & MASK_ZBKX) != 0)
#define TARGET_ZKNE   ((riscv_zk_subext & MASK_ZKNE) != 0)
#define TARGET_ZKND   ((riscv_zk_subext & MASK_ZKND) != 0)
#define TARGET_ZKNH   ((riscv_zk_subext & MASK_ZKNH) != 0)
#define TARGET_ZKR    ((riscv_zk_subext & MASK_ZKR) != 0)
#define TARGET_ZKSED  ((riscv_zk_subext & MASK_ZKSED) != 0)
#define TARGET_ZKSH   ((riscv_zk_subext & MASK_ZKSH) != 0)
#define TARGET_ZKT    ((riscv_zk_subext & MASK_ZKT) != 0)

#define MASK_VECTOR_ELEN_32    (1 << 0)
#define MASK_VECTOR_ELEN_64    (1 << 1)
#define MASK_VECTOR_ELEN_FP_32 (1 << 2)
#define MASK_VECTOR_ELEN_FP_64 (1 << 3)

#define TARGET_VECTOR_ELEN_32 \
  ((riscv_vector_elen_flags & MASK_VECTOR_ELEN_32) != 0)
#define TARGET_VECTOR_ELEN_64 \
  ((riscv_vector_elen_flags & MASK_VECTOR_ELEN_64) != 0)
#define TARGET_VECTOR_ELEN_FP_32 \
  ((riscv_vector_elen_flags & MASK_VECTOR_ELEN_FP_32) != 0)
#define TARGET_VECTOR_ELEN_FP_64 \
  ((riscv_vector_elen_flags & MASK_VECTOR_ELEN_FP_64) != 0)

#define MASK_ZVL32B    (1 <<  0)
#define MASK_ZVL64B    (1 <<  1)
#define MASK_ZVL128B   (1 <<  2)
#define MASK_ZVL256B   (1 <<  3)
#define MASK_ZVL512B   (1 <<  4)
#define MASK_ZVL1024B  (1 <<  5)
#define MASK_ZVL2048B  (1 <<  6)
#define MASK_ZVL4096B  (1 <<  7)
#define MASK_ZVL8192B  (1 <<  8)
#define MASK_ZVL16384B (1 <<  9)
#define MASK_ZVL32768B (1 << 10)
#define MASK_ZVL65536B (1 << 11)

#define TARGET_ZVL32B    ((riscv_zvl_flags & MASK_ZVL32B) != 0)
#define TARGET_ZVL64B    ((riscv_zvl_flags & MASK_ZVL64B) != 0)
#define TARGET_ZVL128B   ((riscv_zvl_flags & MASK_ZVL128B) != 0)
#define TARGET_ZVL256B   ((riscv_zvl_flags & MASK_ZVL256B) != 0)
#define TARGET_ZVL512B   ((riscv_zvl_flags & MASK_ZVL512B) != 0)
#define TARGET_ZVL1024B  ((riscv_zvl_flags & MASK_ZVL1024B) != 0)
#define TARGET_ZVL2048B  ((riscv_zvl_flags & MASK_ZVL2048B) != 0)
#define TARGET_ZVL4096B  ((riscv_zvl_flags & MASK_ZVL4096B) != 0)
#define TARGET_ZVL8192B  ((riscv_zvl_flags & MASK_ZVL8192B) != 0)
#define TARGET_ZVL16384B ((riscv_zvl_flags & MASK_ZVL16384B) != 0)
#define TARGET_ZVL32768B ((riscv_zvl_flags & MASK_ZVL32768B) != 0)
#define TARGET_ZVL65536B ((riscv_zvl_flags & MASK_ZVL65536B) != 0)

/* Bit of riscv_zvl_flags will set contintuly, N-1 bit will set if N-bit is
   set, e.g. MASK_ZVL64B has set then MASK_ZVL32B is set, so we can use
   popcount to caclulate the minimal VLEN.  */
#define TARGET_MIN_VLEN \
  ((riscv_zvl_flags == 0) \
   ? 0 \
   : 32 << (__builtin_popcount (riscv_zvl_flags) - 1))

#endif /* ! GCC_RISCV_OPTS_H */
