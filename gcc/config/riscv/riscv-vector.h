/* Definition of RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_VECTOR_H
#define GCC_RISCV_VECTOR_H

/* vec_perm support.  */

struct expand_vec_perm_d
{
  rtx target, op0, op1;
  vec_perm_indices perm;
  machine_mode vmode;
  bool one_vector_p;
  bool testing_p;
};

bool riscv_partial_tuple_vector_mode_p (machine_mode);
poly_uint64 riscv_vector_natural_size (machine_mode);
unsigned int
riscv_offset_temporaries (bool, poly_int64);
void
riscv_report_vector_required (void);
void riscv_vector_expand_poly_move (machine_mode, rtx, rtx, rtx);
bool
riscv_vector_expand_vectorize_vec_perm_const (machine_mode, rtx, rtx, rtx,
                                              const vec_perm_indices &);
opt_machine_mode
riscv_vector_array_mode (machine_mode, unsigned HOST_WIDE_INT);
machine_mode
riscv_vector_preferred_simd_mode (scalar_mode, unsigned);
opt_machine_mode
riscv_vector_vectorize_related_mode (machine_mode, scalar_mode, poly_uint64,
                                     unsigned);
void
riscv_vector_autovectorize_vector_modes (vector_modes *, unsigned, bool);
opt_machine_mode riscv_vector_get_mask_mode (machine_mode);
#endif // GCC_RISCV_VECTOR_H