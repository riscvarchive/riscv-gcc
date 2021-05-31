/* Definition of RISC-V target for GNU compiler.
   Copyright (C) 2016-2020 Free Software Foundation, Inc.
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

#define MASK_ZKG (1 << 0)
#define MASK_ZKB (1 << 1)
#define MASK_ZKR (1 << 2)
#define MASK_ZKNE (1 << 3)
#define MASK_ZKND (1 << 4)
#define MASK_ZKNH (1 << 5)
#define MASK_ZKSED (1 << 6)
#define MASK_ZKSH (1 << 7)

#define TARGET_ZKG ((riscv_crypto_subext & MASK_ZKG) != 0)
#define TARGET_ZKB ((riscv_crypto_subext & MASK_ZKB) != 0)
#define TARGET_ZKR ((riscv_crypto_subext & MASK_ZKR) != 0)
#define TARGET_ZKNE ((riscv_crypto_subext & MASK_ZKNE) != 0)
#define TARGET_ZKND ((riscv_crypto_subext & MASK_ZKND) != 0)
#define TARGET_ZKNH ((riscv_crypto_subext & MASK_ZKNH) != 0)
#define TARGET_ZKSED ((riscv_crypto_subext & MASK_ZKSED) != 0)
#define TARGET_ZKSH ((riscv_crypto_subext & MASK_ZKSH) != 0)

/* P extension subset */
#define MASK_ZPN (1 << 0)
#define MASK_ZBPBO (1 << 1)
#define MASK_ZPSF (1 << 2)

#define TARGET_ZPN ((riscv_rvp_subext & MASK_ZPN) != 0)
#define TARGET_ZBPBO ((riscv_rvp_subext & MASK_ZBPBO) != 0)
#define TARGET_ZPSF ((riscv_rvp_subext & MASK_ZPSF) != 0)
#endif /* ! GCC_RISCV_OPTS_H */
