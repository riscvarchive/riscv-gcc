;; Machine description for RISC-V vector operations.
;; Copyright (C) 2011-2021 Free Software Foundation, Inc.
;; Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

;; =========================================================================
;; == Vector creation
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Vector Creation
;; -------------------------------------------------------------------------
;; Includes:
;; - Duplicate element to a vector
;; - Initialize from individual elements
;; -------------------------------------------------------------------------

;; vector integer modes vec_duplicate.
(define_expand "@vec_duplicate<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (vec_duplicate:VI
      (match_operand:<VSUB> 1 "reg_or_const_int_operand")))]
  "TARGET_VECTOR"
{
  /* To save insn-codes, we use the intrinsics api to generate
     vmv instructions. It needs dest and vlen operand.
     For vec_duplicate standard pattern in GCC, vlen = vlmax,
     dest = undefined value, Tail agnostic policy = ta.  */
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  if (satisfies_constraint_Ws5 (operands[1]))
    emit_insn (gen_vmv<mode>_v_x (operands[0], const0_rtx, operands[1],
      zero, riscv_vector_gen_policy ()));
  else
    emit_insn (gen_vmv<mode>_v_x (operands[0], const0_rtx, force_reg (<VSUB>mode, operands[1]),
      zero, riscv_vector_gen_policy ()));

  DONE;
})

;; vector floating-point modes vec_duplicate.
(define_expand "@vec_duplicate<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (vec_duplicate:VF
      (match_operand:<VSUB> 1 "register_operand")))]
  "TARGET_VECTOR"
{
  /* To save insn-codes, we use the intrinsics api to generate
     vfmv instructions. It needs dest and vlen operand.
     For vec_duplicate standard pattern in GCC, vlen = vlmax,
     dest = undefined value, Tail agnostic policy = ta.  */

  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_vfmv<mode>_v_f (operands[0], const0_rtx, operands[1], zero,
      riscv_vector_gen_policy ()));
  DONE;
})
