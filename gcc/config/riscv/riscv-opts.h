/* Definition of RISC-V target for GNU compiler.
   Copyright (C) 2016-2019 Free Software Foundation, Inc.
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

/* Define subset flag positions. Alphabetical order is important.
   I've left the "OPTION_MASK_" prefixes in the hope that these
   can be moved to riscv.opt at some point. */

/* Flags for the general extension subsets. */
#define OPTION_MASK_ZAM (1 << 0)
#define OPTION_MASK_ZIFENCEI (1 << 1)
#define OPTION_MASK_ZTSO (1 << 2)

/* Flags for the Bitmanip extension subsets. */
#define OPTION_MASK_ZBB (1 << 0)
#define OPTION_MASK_ZBC (1 << 1)
#define OPTION_MASK_ZBE (1 << 2)
#define OPTION_MASK_ZBF (1 << 3)
#define OPTION_MASK_ZBM (1 << 4)
#define OPTION_MASK_ZBP (1 << 5)
#define OPTION_MASK_ZBR (1 << 6)
#define OPTION_MASK_ZBS (1 << 7)
#define OPTION_MASK_ZBT (1 << 8)

/* Flag predicates for the general extension subsets. */
#define TARGET_ZAM ((riscv_subset_flags & OPTION_MASK_ZAM) != 0)
#define TARGET_ZAM_P(riscv_subset_flags) (((riscv_subset_flags) & OPTION_MASK_ZAM) != 0)

#define TARGET_ZIFENCEI ((riscv_subset_flags & OPTION_MASK_ZIFENCEI) != 0)
#define TARGET_ZIFENCEI_P(riscv_subset_flags) (((riscv_subset_flags) & OPTION_MASK_ZIFENCEI) != 0)

#define TARGET_ZTSO ((riscv_subset_flags & OPTION_MASK_ZTSO) != 0)
#define TARGET_ZTSO_P(riscv_subset_flags) (((riscv_subset_flags) & OPTION_MASK_ZTSO) != 0)

/* Flag predicates for the bitmanip extension subsets. */
#define TARGET_ZBB ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBB) != 0)
#define TARGET_ZBB_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBB) != 0)
#define TARGET_ZBC ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBC) != 0)
#define TARGET_ZBC_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBC) != 0)
#define TARGET_ZBE ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBE) != 0)
#define TARGET_ZBE_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBE) != 0)
#define TARGET_ZBF ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBF) != 0)
#define TARGET_ZBF_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBF) != 0)
#define TARGET_ZBM ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBM) != 0)
#define TARGET_ZBM_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBM) != 0)
#define TARGET_ZBP ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBP) != 0)
#define TARGET_ZBP_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBP) != 0)
#define TARGET_ZBR ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBR) != 0)
#define TARGET_ZBR_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBR) != 0)
#define TARGET_ZBS ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBS) != 0)
#define TARGET_ZBS_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBS) != 0)
#define TARGET_ZBT ((riscv_bitmanip_subset_flags & OPTION_MASK_ZBT) != 0)
#define TARGET_ZBT_P(riscv_bitmanip_subset_flags) (((riscv_bitmanip_subset_flags) & OPTION_MASK_ZBT) != 0)

#endif /* ! GCC_RISCV_OPTS_H */
