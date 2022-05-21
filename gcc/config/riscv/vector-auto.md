;; Machine description for RISC-V vector auto-vectorization operations.
;; Copyright (C) 2022-2022 Free Software Foundation, Inc.
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
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VSUB> 1 "reg_or_simm5_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_v_v_x (UNSPEC_VMV, <MODE>mode, 
      operands[0], const0_rtx, operands[1],
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

;; vector floating-point modes vec_duplicate.
(define_expand "@vec_duplicate<mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VSUB> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfmv_v_f (<MODE>mode, operands[0], const0_rtx, 
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Initialize from individual elements
;; -------------------------------------------------------------------------
;; Includes:
;; - vslide1up.vx
;; - vfslide1up.vf
;; -------------------------------------------------------------------------

(define_expand "vec_shl_insert_<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand:<VSUB> 2 "reg_or_const_int_operand")]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vslide1_vx (UNSPEC_SLIDE1UP, <MODE>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "vec_shl_insert_<mode>"
  [(match_operand:VF 0 "register_operand")
	 (match_operand:VF 1 "register_operand")
	 (match_operand:<VSUB> 2 "reg_or_const_int_operand")]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vfslide1_vf (UNSPEC_SLIDE1UP, <MODE>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    DONE;
  })

;; -------------------------------------------------------------------------
;; ---- [PRED] Duplicate element
;; -------------------------------------------------------------------------
;; The patterns in this section are synthetic.
;; -------------------------------------------------------------------------

(define_expand "vec_duplicate<mode>"
  [(match_operand:VB 0 "register_operand")
   (match_operand 1 "register_operand")]
  "TARGET_VECTOR"
{
  machine_mode mode;
  gcc_assert (riscv_vector_data_mode (as_a <scalar_int_mode> GET_MODE (operands[1]), GET_MODE_NUNITS (<MODE>mode)).exists (&mode));
  rtx duptmp = gen_reg_rtx (mode);
  emit_insn (gen_vec_duplicate (mode, duptmp, operands[1]));
  emit_insn (gen_vms_vx (NE, mode, operands[0], const0_rtx, const0_rtx, duptmp, const0_rtx,
                         gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Initialize from individual elements
;; -------------------------------------------------------------------------
;; This is the pattern initialize the vector
;; -------------------------------------------------------------------------

(define_expand "vec_init<mode><vsub>"
  [(match_operand:V 0 "register_operand")
   (match_operand 1 "")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_vector_init (operands[0], operands[1]);
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Insert a vector element
;; -------------------------------------------------------------------------
;; Includes:
;; - vslideup.vx
;; - vslideup.vi
;; - vmv.s.x
;; - vfmv.s.f
;; -------------------------------------------------------------------------

(define_expand "@vec_set<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VSUB> 1 "register_operand")
   (match_operand 2 "immediate_operand")]
  "TARGET_VECTOR"
{
  if (satisfies_constraint_J (operands[2]))
    {
      emit_insn (gen_v_s_x (UNSPEC_VMVS, <MODE>mode,
          operands[0], operands[0], operands[1],
          GEN_INT (1), riscv_vector_gen_policy (RVV_POLICY_TU)));
    }
  else
    {
      rtx insertvl;
      if (satisfies_constraint_K (GEN_INT (INTVAL (operands[2]) + 1)))
        insertvl = GEN_INT (INTVAL (operands[2]) + 1);
      else
        {
          insertvl = gen_reg_rtx (Pmode);
          emit_insn (gen_rtx_SET (insertvl, GEN_INT (INTVAL (operands[2]) + 1)));
        }

      rtx val_in_vec = gen_reg_rtx (<MODE>mode);
      emit_insn (gen_v_s_x (UNSPEC_VMVS, <MODE>mode,
          val_in_vec, const0_rtx, operands[1],
          insertvl, riscv_vector_gen_policy ()));

      if (!satisfies_constraint_K (operands[2]))
        operands[2] = force_reg (Pmode, operands[2]);

      emit_insn (gen_vslide_vx (UNSPEC_SLIDEUP,
          <MODE>mode, operands[0], const0_rtx, operands[0],
          val_in_vec, operands[2], insertvl,
          riscv_vector_gen_policy (RVV_POLICY_TU)));
    }
  DONE;
})

(define_expand "vec_set<mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VSUB> 1 "register_operand")
   (match_operand 2 "immediate_operand")]
  "TARGET_VECTOR"
{
  if (satisfies_constraint_J (operands[2]))
    {
      emit_insn (gen_vfmv_s_f (<MODE>mode,
          operands[0], operands[0], operands[1],
          GEN_INT (1), riscv_vector_gen_policy (RVV_POLICY_TU)));
    }
  else
    {
      rtx insertvl;
      if (satisfies_constraint_K (GEN_INT (INTVAL (operands[2]) + 1)))
        insertvl = GEN_INT (INTVAL (operands[2]) + 1);
      else
        {
          insertvl = gen_reg_rtx (Pmode);
          emit_insn (gen_rtx_SET (insertvl, GEN_INT (INTVAL (operands[2]) + 1)));
        }

      rtx val_in_vec = gen_reg_rtx (<MODE>mode);
      emit_insn (gen_vfmv_s_f (<MODE>mode,
          val_in_vec, const0_rtx, operands[1],
          insertvl, riscv_vector_gen_policy (RVV_POLICY_TU)));

      if (!satisfies_constraint_K (operands[2]))
        operands[2] = force_reg (Pmode, operands[2]);

      emit_insn (gen_vslide_vx (UNSPEC_SLIDEUP,
          <MODE>mode, operands[0], const0_rtx, operands[0],
          val_in_vec, operands[2], insertvl,
          riscv_vector_gen_policy (RVV_POLICY_TU)));
    }
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] Linear series
;; -------------------------------------------------------------------------
;; Includes:
;; - vid.v
;; - vmul.vx
;; - vadd.vx
;; -------------------------------------------------------------------------

(define_expand "@vec_series<mode>"
  [(match_operand:VI 0 "register_operand")
	 (match_operand:<VSUB> 1 "nonmemory_operand")
	 (match_operand:<VSUB> 2 "nonmemory_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vid_v (<MODE>mode,
      operands[0], const0_rtx, const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  if (INTVAL (operands[2]) != 1)
    emit_insn (gen_vmul<mode>_vx (operands[0], const0_rtx, const0_rtx,
        operands[0], operands[2], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

  if (!satisfies_constraint_J (operands[1]))
    emit_insn (gen_vadd<mode>_vx (operands[0], const0_rtx, const0_rtx,
        operands[0], operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

  DONE;
})

;; =========================================================================
;; == Vector decomposition
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Extract index
;; -------------------------------------------------------------------------
;; Includes:
;; - vslidedown.vx
;; - vmv.x.s
;; - vfmv.f.s
;; -------------------------------------------------------------------------

(define_expand "@vec_extract<mode><vsub>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand 2 "reg_or_uimm5_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);

  if (satisfies_constraint_J (operands[2]))
    emit_insn (gen_vmv<mode>_x_s (operands[0], operands[1]));
  else
    {
      rtx slided_reg = gen_reg_rtx (<MODE>mode);
      emit_insn (gen_vslide_vx (UNSPEC_SLIDEDOWN,
          <MODE>mode, slided_reg, const0_rtx, const0_rtx,
          operands[1], force_reg (Pmode, operands[2]),
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
      emit_insn (gen_vmv<mode>_x_s (operands[0], slided_reg));
    }
  DONE;
})

(define_expand "@vec_extract<mode><vsub>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VF 1 "register_operand")
   (match_operand:SI 2 "reg_or_uimm5_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);

  if (satisfies_constraint_J (operands[2]))
    emit_insn (gen_vfmv<mode>_f_s (operands[0], operands[1]));
  else
    {
      rtx slided_reg = gen_reg_rtx (<MODE>mode);
      emit_insn (gen_vslide_vx (UNSPEC_SLIDEDOWN,
          <MODE>mode, slided_reg, const0_rtx, const0_rtx,
          operands[1], operands[2],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
      emit_insn (gen_vfmv<mode>_f_s (operands[0], slided_reg));
    }
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Extract active element
;; -------------------------------------------------------------------------
;; Includes:
;; - vcompress.vm
;; - vcpop.m
;; - vslidedown.vx
;; - vmv.x.s
;; - vfmv.f.s
;; -------------------------------------------------------------------------

(define_expand "extract_last_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:V 2 "register_operand")]
  "TARGET_VECTOR"
  {
    /* step1: Pack all active elements specified by
       operands[1] into contiguous elements. */
    rtx pack = gen_reg_rtx (<MODE>mode);
    emit_insn (gen_vcompress_vm (<MODE>mode,
        pack, operands[1], const0_rtx, operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

    /* step2: Calculate index of the last element in packed vector. */
    rtx index = gen_reg_rtx (Pmode);
    emit_insn (gen_vcpop_m (<VM>mode, Pmode, index, const0_rtx,
        operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    emit_insn (gen_rtx_SET (index, gen_rtx_PLUS (Pmode, index, GEN_INT (-1))));

    /* step3: Extract the element. */
    emit_insn (gen_vec_extract<mode><vsub> (operands[0], pack, index));
    DONE;
  })

(define_expand "fold_extract_last_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:<VSUB> 1 "register_operand")
   (match_operand:<VM> 2 "register_operand")
   (match_operand:V 3 "register_operand")]
  "TARGET_VECTOR"
  {
    rtx dst = operands[0];
    rtx default_value = operands[1];
    rtx anchor = gen_reg_rtx (Pmode);
    rtx vect = operands[3];
    rtx else_label = gen_label_rtx ();
    rtx end_label = gen_label_rtx ();

    /* Calculate the number of 1-bit in mask. */
    emit_insn (gen_vcpop_m (<VM>mode, Pmode, anchor, const0_rtx,
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

    riscv_expand_conditional_branch (else_label, EQ, anchor, const0_rtx);
    emit_insn (gen_extract_last_<mode> (dst, operands[2], vect));
    emit_jump_insn (gen_jump (end_label));
    emit_barrier ();
    emit_label (else_label);
    emit_move_insn (dst, default_value);
    emit_label (end_label);
    DONE;
  })

;; =========================================================================
;; == Loads
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal contiguous loads
;; -------------------------------------------------------------------------
;; Includes contiguous forms of:
;; - vle8.v
;; - vle16.v
;; - vle32.v
;; - vle64.v
;; -------------------------------------------------------------------------

;; we change tree-vect-stmts.c to make len_load has higher priority.
(define_expand "len_load_<mode>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "memory_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")
   (match_operand 3 "const_0_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[1], 0)));
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vle (<MODE>mode, operands[0], const0_rtx, const0_rtx,
        XEXP (operands[1], 0), operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "maskload<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "memory_operand")
   (match_operand:<VM> 2 "register_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[1], 0)));
  emit_insn (gen_vle (<MODE>mode, operands[0], operands[2], const0_rtx,
        XEXP (operands[1], 0), gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_maskload<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "memory_operand")
   (match_operand:<VM> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[1], 0)));
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);

  emit_insn (gen_vle (<MODE>mode, operands[0], operands[2], const0_rtx,
        XEXP (operands[1], 0), operands[3],
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal lanes loads
;; -------------------------------------------------------------------------
;; Includes lanes forms of:
;; - vlseg2e8.v
;; - vlseg3e8.v
;; - vlseg4e8.v
;; - vlseg5e8.v
;; - vlseg6e8.v
;; - vlseg7e8.v
;; - vlseg8e8.v
;; - vlseg2e16.v
;; - vlseg3e16.v
;; - vlseg4e16.v
;; - vlseg5e16.v
;; - vlseg6e16.v
;; - vlseg7e16.v
;; - vlseg8e16.v
;; - vlseg2e32.v
;; - vlseg3e32.v
;; - vlseg4e32.v
;; - vlseg5e32.v
;; - vlseg6e32.v
;; - vlseg7e32.v
;; - vlseg8e32.v
;; - vlseg2e64.v
;; - vlseg3e64.v
;; - vlseg4e64.v
;; - vlseg5e64.v
;; - vlseg6e64.v
;; - vlseg7e64.v
;; - vlseg8e64.v
;; -------------------------------------------------------------------------


(define_expand "vec_load_lanes<mode><vtsub>"
  [(match_operand:VT 0 "register_operand")
	 (match_operand:VT 1 "memory_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vlseg (<MODE>mode,
      operands[0], const0_rtx, const0_rtx, XEXP (operands[1], 0),
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_mask_load_lanes<mode><vtsub>"
  [(match_operand:VT 0 "register_operand")
	 (match_operand:VT 1 "memory_operand")
   (match_operand:<VM> 2 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vlseg (<MODE>mode,
      operands[0], operands[2], operands[0],
      XEXP (operands[1], 0),
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal gather loads
;; -------------------------------------------------------------------------
;; Includes gather forms of:
;; - vluxei8.v
;; - vluxei16.v
;; - vluxei32.v
;; - vluxei64.v
;; -------------------------------------------------------------------------

(define_expand "gather_load<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand:V2UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V2UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V2UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand:V4UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V4UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V4UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand:V8UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V8UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V8UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand:V16UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V16UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V16UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand:V32UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V32UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V32UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand:V64UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V64UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V64UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "gather_load<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand:V128UNITSI 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V128UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand:V2UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V2UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V2UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand:V4UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V4UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V4UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand:V8UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V8UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V8UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand:V16UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V16UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V16UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand:V32UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V32UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V32UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand:V64UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V64UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V64UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "len_gather_load<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand:V128UNITSI 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V128UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand:V2UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V2UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V2UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:<V2UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand:V4UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V4UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V4UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:<V4UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand:V8UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V8UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V8UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:<V8UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand:V16UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V16UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V16UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:<V16UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand:V32UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V32UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V32UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:<V32UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand:V64UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V64UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V64UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:<V64UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "mask_gather_load<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand:V128UNITSI 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V128UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:<V128UNITSI:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand:V2UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V2UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V2UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:<V2UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand:V4UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V4UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V4UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:<V4UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand:V8UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V8UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V8UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:<V8UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand:V16UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V16UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V16UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:<V16UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand:V32UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V32UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V32UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:<V32UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand:V64UNITS 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V64UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V64UNITS:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:<V64UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

(define_expand "len_mask_gather_load<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand:V128UNITSI 0 "register_operand")
   (match_operand 1 "register_operand")
   (match_operand:V128UNITSI 2 "vector_gather_scatter_offset_operand")
   (match_operand 3 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 4 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:<V128UNITSI:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_GATHER_LOAD);
  DONE;
})

;; =========================================================================
;; == Stores
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal contiguous Stores
;; -------------------------------------------------------------------------
;; Includes contiguous forms of:
;; - vse8.v
;; - vse16.v
;; - vse32.v
;; - vse64.v
;; -------------------------------------------------------------------------

;; we change tree-vect-stmts.c to make len_store has higher priority.
(define_expand "len_store_<mode>"
  [(match_operand:V 0 "memory_operand")
   (match_operand:V 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")
   (match_operand 3 "const_0_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[0], 0)));
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vse (<MODE>mode, const0_rtx, XEXP (operands[0], 0), operands[1], operands[2],
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "maskstore<mode><vm>"
  [(match_operand:V 0 "memory_operand")
   (match_operand:V 1 "register_operand")
   (match_operand:<VM> 2 "register_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[0], 0)));
  emit_insn (gen_vse (<MODE>mode, operands[2], XEXP (operands[0], 0),
        operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_maskstore<mode><vm>"
  [(match_operand:V 0 "memory_operand")
   (match_operand:V 1 "register_operand")
   (match_operand:<VM> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  gcc_assert (REG_P (XEXP (operands[0], 0)));
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vse (<MODE>mode, operands[2], XEXP (operands[0], 0),
        operands[1], operands[3], riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal lanes Stores
;; -------------------------------------------------------------------------
;; Includes lanes forms of:
;; - vsseg2e8.v
;; - vsseg3e8.v
;; - vsseg4e8.v
;; - vsseg5e8.v
;; - vsseg6e8.v
;; - vsseg7e8.v
;; - vsseg8e8.v
;; - vsseg2e16.v
;; - vsseg3e16.v
;; - vsseg4e16.v
;; - vsseg5e16.v
;; - vsseg6e16.v
;; - vsseg7e16.v
;; - vsseg8e16.v
;; - vsseg2e32.v
;; - vsseg3e32.v
;; - vsseg4e32.v
;; - vsseg5e32.v
;; - vsseg6e32.v
;; - vsseg7e32.v
;; - vsseg8e32.v
;; - vsseg2e64.v
;; - vsseg3e64.v
;; - vsseg4e64.v
;; - vsseg5e64.v
;; - vsseg6e64.v
;; - vsseg7e64.v
;; - vsseg8e64.v
;; -------------------------------------------------------------------------

(define_expand "vec_store_lanes<mode><vtsub>"
  [(match_operand:VT 0 "memory_operand")
	 (match_operand:VT 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vsseg (<MODE>mode, const0_rtx,
      XEXP (operands[0], 0), operands[1],
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_mask_store_lanes<mode><vtsub>"
  [(match_operand:VT 0 "memory_operand")
	 (match_operand:VT 1 "register_operand")
   (match_operand:<VM> 2 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vsseg (<MODE>mode,
      operands[2], XEXP (operands[0], 0),
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Normal scatter Stores
;; -------------------------------------------------------------------------
;; Includes scatter forms of:
;; - vsuxei8.v
;; - vsuxei16.v
;; - vsuxei32.v
;; - vsuxei64.v
;; -------------------------------------------------------------------------

(define_expand "scatter_store<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V2UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V2UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:V2UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V4UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V4UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:V4UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V8UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V8UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:V8UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V16UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V16UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:V16UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V32UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V32UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:V32UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V64UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V64UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:V64UNITS 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "scatter_store<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V128UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:V128UNITSI 4 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V2UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V2UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:V2UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V4UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V4UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:V4UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V8UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V8UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:V8UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V16UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V16UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:V16UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V32UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V32UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:V32UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V64UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V64UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:V64UNITS 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "len_scatter_store<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V128UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:V128UNITSI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V2UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V2UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:V2UNITS 4 "register_operand")
   (match_operand:<V2UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V4UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V4UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:V4UNITS 4 "register_operand")
   (match_operand:<V4UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V8UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V8UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:V8UNITS 4 "register_operand")
   (match_operand:<V8UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V16UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V16UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:V16UNITS 4 "register_operand")
   (match_operand:<V16UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V32UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V32UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:V32UNITS 4 "register_operand")
   (match_operand:<V32UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V64UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V64UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:V64UNITS 4 "register_operand")
   (match_operand:<V64UNITS:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "mask_scatter_store<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V128UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:V128UNITSI 4 "register_operand")
   (match_operand:<V128UNITSI:VM> 5 "register_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V2UNITS:mode><V2UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V2UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V2UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V2UNITS:sew>")
   (match_operand:V2UNITS 4 "register_operand")
   (match_operand:<V2UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V4UNITS:mode><V4UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V4UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V4UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V4UNITS:sew>")
   (match_operand:V4UNITS 4 "register_operand")
   (match_operand:<V4UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V8UNITS:mode><V8UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V8UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V8UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V8UNITS:sew>")
   (match_operand:V8UNITS 4 "register_operand")
   (match_operand:<V8UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V16UNITS:mode><V16UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V16UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V16UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V16UNITS:sew>")
   (match_operand:V16UNITS 4 "register_operand")
   (match_operand:<V16UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V32UNITS:mode><V32UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V32UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V32UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V32UNITS:sew>")
   (match_operand:V32UNITS 4 "register_operand")
   (match_operand:<V32UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V64UNITS:mode><V64UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V64UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V64UNITS:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V64UNITS:sew>")
   (match_operand:V64UNITS 4 "register_operand")
   (match_operand:<V64UNITS:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

(define_expand "len_mask_scatter_store<V128UNITSI:mode><V128UNITSI:mode>"
  [(match_operand 0 "register_operand")
   (match_operand:V128UNITSI 1 "vector_gather_scatter_offset_operand")
   (match_operand 2 "<V128UNITSI:gather_scatter_operand>")
   (match_operand 3 "vector_gather_scatter_scale_operand_<V128UNITSI:sew>")
   (match_operand:V128UNITSI 4 "register_operand")
   (match_operand:<V128UNITSI:VM> 5 "register_operand")
   (match_operand 6 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_gather_scatter (operands, RVV_LEN_MASK_SCATTER_STORE);
  DONE;
})

;; =========================================================================
;; == Unary arithmetic
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT] General unary arithmetic corresponding to rtx codes
;; -------------------------------------------------------------------------
;; Includes:
;; - vneg.v
;; - vnot.v
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>2"
  [(set (match_operand:VI 0 "register_operand")
	  (int_unary:VI
	    (match_operand:VI 1 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_v<insn>_v (<MODE>mode, operands[0],
      const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "abs<mode>2"
  [(match_operand:VI 0 "register_operand")
	 (match_operand:VI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx mask = gen_reg_rtx (<VM>mode);
  emit_insn (gen_vms_vx (LT, <MODE>mode, mask, const0_rtx, const0_rtx,
      operands[1], const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vneg_v (<MODE>mode, operands[0], mask, operands[1],
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "cond_neg<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vneg_v (<MODE>mode, operands[0],
      operands[1], operands[3], operands[2],
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_cond_neg<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vneg_v (<MODE>mode, operands[0],
      operands[1], operands[3], operands[2],
      operands[4], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_<optab><mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
	    [(int_unary:VI
	      (match_operand:VI 1 "register_operand"))
       (match_operand 2 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_v<insn>_v (<MODE>mode, operands[0],
      const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] General unary arithmetic corresponding to rtx codes
;; -------------------------------------------------------------------------
;; Includes:
;; - vfneg.v
;; - vfabs.v
;; - vfsqrt.v
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>2"
  [(set (match_operand:VF 0 "register_operand")
	  (fp_unary:VF
	    (match_operand:VF 1 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vf<optab>_v (<MODE>mode, operands[0],
      const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "cond_neg<mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VF 2 "register_operand")
   (match_operand:VF 3 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfneg_v (<MODE>mode, operands[0],
      operands[1], operands[3], operands[2],
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_cond_neg<mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VF 2 "register_operand")
   (match_operand:VF 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfneg_v (<MODE>mode, operands[0],
      operands[1], operands[3], operands[2],
      operands[4], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_neg<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
	    [(neg:VF
	      (match_operand:VF 1 "register_operand"))
       (match_operand 2 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfneg_v (<MODE>mode, operands[0], const0_rtx, const0_rtx,
      operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [BOOL] Inverse
;; -------------------------------------------------------------------------
;; Includes:
;; - vmnot.m
;; -------------------------------------------------------------------------

(define_expand "one_cmpl<mode>2"
  [(match_operand:VB 0 "register_operand")
	 (match_operand:VB 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vmnot_m (<MODE>mode,
      operands[0], operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_one_cmpl<mode>"
  [(match_operand:VB 0 "register_operand")
   (match_operand:VB 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);

  emit_insn (gen_vmnot_m (<MODE>mode,
      operands[0], operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT<-INT] Sign and zero extension
;; -------------------------------------------------------------------------
;; Includes:
;; - vsext.vf2
;; - vzext.vf2
;; - vsext.vf4
;; - vzext.vf4
;; - vsext.vf8
;; - vzext.vf8
;; -------------------------------------------------------------------------

(define_expand "extend<vn><mode>2"
  [(match_operand:VEXTI 0 "register_operand")
	 (match_operand:<VN> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf2 (SIGN_EXTEND, <VN>mode,
        operands[0], const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "zero_extend<vn><mode>2"
  [(match_operand:VEXTI 0 "register_operand")
	 (match_operand:<VN> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf2 (ZERO_EXTEND, <VN>mode,
        operands[0], const0_rtx, const0_rtx,
        operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "extend<vqn><mode>2"
  [(match_operand:VQEXTI 0 "register_operand")
	 (match_operand:<VQN> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf4 (SIGN_EXTEND, <VQN>mode,
        operands[0], const0_rtx, const0_rtx,
        operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "zero_extend<vqn><mode>2"
  [(match_operand:VQEXTI 0 "register_operand")
	 (match_operand:<VQN> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf4 (ZERO_EXTEND, <VQN>mode,
        operands[0], const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "extend<von><mode>2"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VON> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf8 (SIGN_EXTEND, <VON>mode,
        operands[0], const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "zero_extend<von><mode>2"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VON> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vext_vf8 (ZERO_EXTEND, <VON>mode,
        operands[0], const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_extend<vn><mode>"
  [(match_operand:VEXTI 0 "register_operand")
	 (match_operand:<VN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf2 (SIGN_EXTEND, <VN>mode,
        operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_zero_extend<vn><mode>"
  [(match_operand:VEXTI 0 "register_operand")
	 (match_operand:<VN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf2 (ZERO_EXTEND, <VN>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_extend<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
	 (match_operand:<VQN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf4 (SIGN_EXTEND, <VQN>mode,
        operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_zero_extend<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
	 (match_operand:<VQN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf4 (ZERO_EXTEND, <VQN>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_extend<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VON> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf8 (SIGN_EXTEND, <VON>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_zero_extend<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VON> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vext_vf8 (ZERO_EXTEND, <VON>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP<-FP] Extension
;; -------------------------------------------------------------------------
;; Includes:
;; - vfwcvt.f.f.v
;; -------------------------------------------------------------------------

(define_expand "extend<vn><mode>2"
  [(match_operand:VEXTF 0 "register_operand")
	 (match_operand:<VN> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode, operands[0], const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "extend<vqn><mode>2"
  [(match_operand:VQEXTF 0 "register_operand")
	 (match_operand:<VQN> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, middle_reg, const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode, operands[0], const0_rtx, const0_rtx,
      middle_reg, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_extend<vn><mode>"
  [(match_operand:VEXTF 0 "register_operand")
   (match_operand:<VN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_extend<vqn><mode>"
  [(match_operand:VQEXTF 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Extension
;; -------------------------------------------------------------------------
;; Includes:
;; - vfwcvt.f.xu.w
;; - vfwcvt.f.x.w
;; -------------------------------------------------------------------------

(define_expand "float<vndiff><mode>2"
  [(match_operand:VF 0 "register_operand")
	 (match_operand:<VNDIFF> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwcvt_f_x_v (<VNDIFF>mode, FLOAT,
      operands[0], const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "floatuns<vndiff><mode>2"
  [(match_operand:VF 0 "register_operand")
	 (match_operand:<VNDIFF> 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwcvt_f_x_v (<VNDIFF>mode, UNSIGNED_FLOAT,
      operands[0], const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "float<vqndiff><mode>2"
  [(match_operand:VEXTF 0 "register_operand")
	 (match_operand:<VQNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VQNDIFF>mode, FLOAT,
      middle_reg, const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "floatuns<vqndiff><mode>2"
  [(match_operand:VEXTF 0 "register_operand")
	 (match_operand:<VQNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VQNDIFF>mode, UNSIGNED_FLOAT,
      middle_reg, const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "float<vondiff><mode>2"
  [(match_operand:VQEXTF 0 "register_operand")
	 (match_operand:<VONDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode)) &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  rtx middle_reg1 = gen_reg_rtx (<VQN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VONDIFF>mode, FLOAT,
      middle_reg1, const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode,
      middle_reg2, const0_rtx, const0_rtx, middle_reg1, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg2, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "floatuns<vondiff><mode>2"
  [(match_operand:VQEXTF 0 "register_operand")
	 (match_operand:<VONDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode)) &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  rtx middle_reg1 = gen_reg_rtx (<VQN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VONDIFF>mode, UNSIGNED_FLOAT,
      middle_reg1, const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode,
      middle_reg2, const0_rtx, const0_rtx, middle_reg1, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg2, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_float<vndiff><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfwcvt_f_x_v (<VNDIFF>mode, FLOAT,
      operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_floatuns<vndiff><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfwcvt_f_x_v (<VNDIFF>mode, UNSIGNED_FLOAT,
      operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_float<vqndiff><mode>"
  [(match_operand:VEXTF 0 "register_operand")
   (match_operand:<VQNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VQNDIFF>mode, FLOAT,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_floatuns<vqndiff><mode>"
  [(match_operand:VEXTF 0 "register_operand")
   (match_operand:<VQNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VQNDIFF>mode, UNSIGNED_FLOAT,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_float<vondiff><mode>"
  [(match_operand:VQEXTF 0 "register_operand")
   (match_operand:<VONDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode)) &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg1 = gen_reg_rtx (<VQN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VONDIFF>mode, FLOAT,
      middle_reg1, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode,
      middle_reg2, const0_rtx, const0_rtx, middle_reg1, operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg2, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_floatuns<vondiff><mode>"
  [(match_operand:VQEXTF 0 "register_operand")
   (match_operand:<VONDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode)) &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg1 = gen_reg_rtx (<VQN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_x_v (<VONDIFF>mode, UNSIGNED_FLOAT,
      middle_reg1, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode,
      middle_reg2, const0_rtx, const0_rtx, middle_reg1, operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg2, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Extension
;; -------------------------------------------------------------------------
;; Includes:
;; - vfwcvt.rtz.xu.f.w
;; - vfwcvt.rtz.x.f.w
;; -------------------------------------------------------------------------

(define_expand "fix_trunc<vndiff><mode>2"
  [(match_operand:VEXTI2 0 "register_operand")
	 (match_operand:<VNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VNDIFF>mode))"
{
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VNDIFF>mode, FIX,
      operands[0], const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fixuns_trunc<vndiff><mode>2"
  [(match_operand:VEXTI2 0 "register_operand")
	 (match_operand:<VNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VNDIFF>mode))"
{
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VNDIFF>mode, UNSIGNED_FIX,
      operands[0], const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fix_trunc<vqndiff><mode>2"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VQNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQNDIFF>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VQNDIFF>mode, FIX,
      middle_reg, const0_rtx, const0_rtx, operands[1], 
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vext_vf2 (SIGN_EXTEND, <VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, 
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fixuns_trunc<vqndiff><mode>2"
  [(match_operand:VOEXTI 0 "register_operand")
	 (match_operand:<VQNDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQNDIFF>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VQNDIFF>mode, UNSIGNED_FIX,
      middle_reg, const0_rtx, const0_rtx, operands[1], 
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vext_vf2 (ZERO_EXTEND, <VN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, 
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fix_trunc<vndiff><mode>"
  [(match_operand:VEXTI2 0 "register_operand")
   (match_operand:<VNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VNDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VNDIFF>mode, FIX,
      operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fixuns_trunc<vndiff><mode>"
  [(match_operand:VEXTI2 0 "register_operand")
   (match_operand:<VNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VNDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VNDIFF>mode, UNSIGNED_FIX,
      operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fix_trunc<vqndiff><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VQNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQNDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VQNDIFF>mode, FIX,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vext_vf2 (SIGN_EXTEND, <VN>mode,
      operands[0], const0_rtx, const0_rtx,
      middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fixuns_trunc<vqndiff><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VQNDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQNDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_rtz_x_f_v (<VQNDIFF>mode, UNSIGNED_FIX,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vext_vf2 (ZERO_EXTEND, <VN>mode,
      operands[0], const0_rtx, const0_rtx,
      middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT<-INT] Truncation
;; -------------------------------------------------------------------------
;; Includes:
;; - vncvt.x.x.w
;; -------------------------------------------------------------------------

(define_expand "trunc<mode><vn>2"
  [(match_operand:<VN> 0 "register_operand")
	 (match_operand:VEXTI 1 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vncvt_x_x_w (<VN>mode, operands[0],
             const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "trunc<mode><vqn>2"
  [(match_operand:<VQN> 0 "register_operand")
	 (match_operand:VQEXTI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vncvt_x_x_w (<VN>mode, middle_reg, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VQN>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "trunc<mode><von>2"
  [(match_operand:<VON> 0 "register_operand")
	 (match_operand:VOEXTI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx middle_reg1 = gen_reg_rtx (<VN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VQN>mode);
  emit_insn (gen_vncvt_x_x_w (<VN>mode, middle_reg1, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VQN>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VON>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_trunc<mode><vn>"
  [(match_operand:<VN> 0 "register_operand")
   (match_operand:VEXTI 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vncvt_x_x_w (<VN>mode, operands[0], const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_trunc<mode><vqn>"
  [(match_operand:<VQN> 0 "register_operand")
   (match_operand:VQEXTI 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vncvt_x_x_w (<VN>mode, middle_reg, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VQN>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_trunc<mode><von>"
  [(match_operand:<VON> 0 "register_operand")
   (match_operand:VOEXTI 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg1 = gen_reg_rtx (<VN>mode);
  rtx middle_reg2 = gen_reg_rtx (<VQN>mode);
  emit_insn (gen_vncvt_x_x_w (<VN>mode, middle_reg1, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VQN>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VON>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP<-FP] Truncation
;; -------------------------------------------------------------------------
;; Includes:
;; - vfncvt.f.f.w
;; -------------------------------------------------------------------------

(define_expand "trunc<mode><vn>2"
  [(match_operand:<VN> 0 "register_operand")
	 (match_operand:VEXTF 1 "register_operand")]
  "TARGET_VECTOR && 
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  emit_insn (gen_vfncvt_f_f_w (<VN>mode, operands[0], const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "trunc<mode><vqn>2"
  [(match_operand:<VQN> 0 "register_operand")
	 (match_operand:VQEXTF 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfncvt_f_f_w (<VN>mode,
      middle_reg, const0_rtx, const0_rtx, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<VQN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_trunc<mode><vn>"
  [(match_operand:<VN> 0 "register_operand")
   (match_operand:VEXTF 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfncvt_f_f_w (<VN>mode, operands[0], const0_rtx, const0_rtx,
             operands[1], operands[2],
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_trunc<mode><vqn>"
  [(match_operand:<VQN> 0 "register_operand")
   (match_operand:VQEXTF 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQN>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfncvt_f_f_w (<VN>mode,
      middle_reg, const0_rtx, const0_rtx, operands[1], operands[2],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<VQN>mode,
      operands[0], const0_rtx, const0_rtx, middle_reg, operands[2],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Truncation
;; -------------------------------------------------------------------------
;; Includes:
;; - vfncvt.rtz.xu.f.w
;; - vfncvt.rtz.x.f.w
;; -------------------------------------------------------------------------

(define_expand "fix_trunc<vwdiff><mode>2"
  [(match_operand:VTRUNCI 0 "register_operand")
	 (match_operand:<VWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VWDIFF>mode))"
{
  emit_insn (gen_vfncvt_rtz_x_f_w (<MODE>mode, FIX, operands[0],
             const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fixuns_trunc<vwdiff><mode>2"
  [(match_operand:VTRUNCI 0 "register_operand")
	 (match_operand:<VWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VWDIFF>mode))"
{
  emit_insn (gen_vfncvt_rtz_x_f_w (<MODE>mode, UNSIGNED_FIX, operands[0],
             const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fix_trunc<vqwdiff><mode>2"
  [(match_operand:VQTRUNCI 0 "register_operand")
	 (match_operand:<VQWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQWDIFF>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VW>mode, FIX, middle_reg, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
             riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fixuns_trunc<vqwdiff><mode>2"
  [(match_operand:VQTRUNCI 0 "register_operand")
	 (match_operand:<VQWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQWDIFF>mode))"
{
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VW>mode, UNSIGNED_FIX, middle_reg, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fix_trunc<vowdiff><mode>2"
  [(match_operand:VOTRUNCI 0 "register_operand")
	 (match_operand:<VOWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VOWDIFF>mode))"
{
  rtx middle_reg1 = gen_reg_rtx (<VQW>mode);
  rtx middle_reg2 = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VQW>mode, FIX, middle_reg1, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VW>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "fixuns_trunc<vowdiff><mode>2"
  [(match_operand:VOTRUNCI 0 "register_operand")
	 (match_operand:<VOWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VOWDIFF>mode))"
{
  rtx middle_reg1 = gen_reg_rtx (<VQW>mode);
  rtx middle_reg2 = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VQW>mode, UNSIGNED_FIX, middle_reg1, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VW>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fix_trunc<vwdiff><mode>"
  [(match_operand:VTRUNCI 0 "register_operand")
   (match_operand:<VWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfncvt_rtz_x_f_w (<MODE>mode, FIX, operands[0], const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fixuns_trunc<vwdiff><mode>"
  [(match_operand:VTRUNCI 0 "register_operand")
   (match_operand:<VWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfncvt_rtz_x_f_w (<MODE>mode, UNSIGNED_FIX, operands[0],
             const0_rtx, const0_rtx,
             operands[1], operands[2],
             riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fix_trunc<vqwdiff><mode>"
  [(match_operand:VQTRUNCI 0 "register_operand")
   (match_operand:<VQWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR && 
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VW>mode, FIX, middle_reg, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fixuns_trunc<vqwdiff><mode>"
  [(match_operand:VQTRUNCI 0 "register_operand")
   (match_operand:<VQWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VQWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VW>mode, UNSIGNED_FIX, middle_reg, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fix_trunc<vowdiff><mode>"
  [(match_operand:VOTRUNCI 0 "register_operand")
   (match_operand:<VOWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VOWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg1 = gen_reg_rtx (<VQW>mode);
  rtx middle_reg2 = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VQW>mode, FIX, middle_reg1, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VW>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_fixuns_trunc<vowdiff><mode>"
  [(match_operand:VOTRUNCI 0 "register_operand")
   (match_operand:<VOWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (GET_MODE_INNER (<VOWDIFF>mode))"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg1 = gen_reg_rtx (<VQW>mode);
  rtx middle_reg2 = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_rtz_x_f_w (<VQW>mode, UNSIGNED_FIX, middle_reg1, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<VW>mode, middle_reg2, const0_rtx, const0_rtx,
             middle_reg1, operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg2, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Truncation
;; -------------------------------------------------------------------------
;; Includes:
;; - vfncvt.f.xu.w
;; - vfncvt.f.x.w
;; -------------------------------------------------------------------------

(define_expand "float<vwdiff><mode>2"
  [(match_operand:VTRUNCF 0 "register_operand")
	 (match_operand:<VWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  emit_insn (gen_vfncvt_f_x_w (<MODE>mode, FLOAT, operands[0], const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "floatuns<vwdiff><mode>2"
  [(match_operand:VTRUNCF 0 "register_operand")
	 (match_operand:<VWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  emit_insn (gen_vfncvt_f_x_w (<MODE>mode, UNSIGNED_FLOAT, operands[0],const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "float<vqwdiff><mode>2"
  [(match_operand:VQTRUNCF 0 "register_operand")
	 (match_operand:<VQWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_f_x_w (<VW>mode, FLOAT, middle_reg, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "floatuns<vqwdiff><mode>2"
  [(match_operand:VQTRUNCF 0 "register_operand")
	 (match_operand:<VQWDIFF> 1 "register_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_f_x_w (<VW>mode, UNSIGNED_FLOAT, middle_reg, const0_rtx, const0_rtx,
             operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_float<vwdiff><mode>"
  [(match_operand:VTRUNCF 0 "register_operand")
   (match_operand:<VWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfncvt_f_x_w (<MODE>mode, FLOAT, operands[0], const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_floatuns<vwdiff><mode>"
  [(match_operand:VTRUNCF 0 "register_operand")
   (match_operand:<VWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfncvt_f_x_w (<MODE>mode, UNSIGNED_FLOAT, operands[0], const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_float<vqwdiff><mode>"
  [(match_operand:VQTRUNCF 0 "register_operand")
   (match_operand:<VQWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_f_x_w (<VW>mode, FLOAT, middle_reg, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_floatuns<vqwdiff><mode>"
  [(match_operand:VQTRUNCF 0 "register_operand")
   (match_operand:<VQWDIFF> 1 "register_operand")
   (match_operand 2 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VWDIFF>mode)"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  rtx middle_reg = gen_reg_rtx (<VW>mode);
  emit_insn (gen_vfncvt_f_x_w (<VW>mode, UNSIGNED_FLOAT, middle_reg, const0_rtx, const0_rtx,
             operands[1], operands[2], riscv_vector_gen_policy ()));
  emit_insn (gen_vfncvt_f_f_w (<MODE>mode, operands[0], const0_rtx, const0_rtx,
             middle_reg, operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; =========================================================================
;; == Binary arithmetic
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT] General binary arithmetic corresponding to rtx codes
;; -------------------------------------------------------------------------
;; Includes:
;; - vand.vv
;; - vand.vx
;; - vand.vi
;; - vor.vv
;; - vor.vx
;; - vor.vi
;; - vxor.vv
;; - vxor.vx
;; - vxor.vi
;; - vminu.vv
;; - vminu.vx
;; - vmin.vv
;; - vmin.vx
;; - vmaxu.vv
;; - vmaxu.vx
;; - vmax.vv
;; - vmax.vx
;; - vmul.vv
;; - vmul.vx
;; - vdivu.vv
;; - vdivu.vx
;; - vdiv.vv
;; - vdiv.vx
;; - vremu.vv
;; - vremu.vx
;; - vrem.vv
;; - vrem.vx
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>3"
  [(match_operand:VI 0 "register_operand")
   (int_binary:VI
    (match_operand:VI 1 "register_operand")
    (match_operand:VI 2 "vector_reg_or_const_dup_operand"))]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_v<optab><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy ()));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[2], &x));
      emit_insn (gen_v<optab><mode>_vx (operands[0],
        const0_rtx, const0_rtx, operands[1],
        x, gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "cond_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (int_binary:VI
    (match_operand:VI 2 "register_operand")
    (match_operand:VI 3 "vector_reg_or_const_dup_operand"))
   (match_operand:VI 4 "register_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[3], <MODE>mode))
    emit_insn (gen_v<optab><mode>_vv (operands[0], operands[1], operands[4],
            operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy (RVV_POLICY_MU)));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[3], &x));
      emit_insn (gen_v<optab><mode>_vx (operands[0], operands[1], operands[4],
            operands[2], x, gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy (RVV_POLICY_MU)));
    }
  DONE;
})

(define_expand "len_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (int_binary:VI
    (match_operand:VI 1 "register_operand")
    (match_operand:VI 2 "vector_reg_or_const_dup_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_v<optab><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], operands[3], riscv_vector_gen_policy ()));
  else
    {
      rtx x;
       gcc_assert (const_vec_duplicate_p(operands[2], &x));
       emit_insn (gen_v<optab><mode>_vx (operands[0],
            const0_rtx, const0_rtx, operands[1],
            x, operands[3], riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "len_cond_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (int_binary:VI
    (match_operand:VI 2 "register_operand")
    (match_operand:VI 3 "register_operand"))
   (match_operand:VI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_v<optab><mode>_vv (operands[0],
            operands[1], operands[4], operands[2],
            operands[3], operands[5], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] Addition
;; -------------------------------------------------------------------------
;; Includes:
;; - vadd.vv
;; - vadd.vx
;; - vadd.vi
;; -------------------------------------------------------------------------

(define_expand "add<mode>3"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand:VI 2 "vector_reg_or_const_dup_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_vadd_vv (<MODE>mode, operands[0],
        const0_rtx, const0_rtx, operands[1], operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[2], &x));
      emit_insn (gen_v_vx (UNSPEC_VADD, <MODE>mode,
        operands[0], const0_rtx, const0_rtx,
        operands[1], x, gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "cond_add<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "vector_reg_or_const_dup_operand")
   (match_operand:VI 4 "register_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[3], <MODE>mode))
    emit_insn (gen_vadd_vv (<MODE>mode,
        operands[0], operands[1], operands[4],
        operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[3], &x));
      emit_insn (gen_v_vx (UNSPEC_VADD, <MODE>mode,
          operands[0], operands[1], operands[4],
          operands[2], x, gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy (RVV_POLICY_MU)));
    }
  DONE;
})

(define_expand "len_add<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand:VI 2 "vector_reg_or_const_dup_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_vadd_vv (<MODE>mode, operands[0],
        const0_rtx, const0_rtx, operands[1], operands[2],
        operands[3], riscv_vector_gen_policy ()));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[2], &x));
      emit_insn (gen_v_vx (UNSPEC_VADD, <MODE>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], x, operands[3],
        riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "len_cond_add<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "register_operand")
   (match_operand:VI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_vadd_vv (<MODE>mode,
        operands[0], operands[1], operands[4],
        operands[2], operands[3], operands[5],
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] Subtraction
;; -------------------------------------------------------------------------
;; Includes:
;; - vsub.vv
;; - vsub.vx
;; - vadd.vi
;; - vrsub.vx
;; - vrsub.vi
;; -------------------------------------------------------------------------

(define_expand "sub<mode>3"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand:VI 2 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vsub_vv (<MODE>mode, operands[0],
      const0_rtx, const0_rtx, operands[1], operands[2],
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "cond_sub<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "register_operand")
   (match_operand:VI 4 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vsub_vv (<MODE>mode,
        operands[0], operands[1], operands[4],
        operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_sub<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vsub_vv (<MODE>mode, operands[0], const0_rtx, const0_rtx,
      operands[1], operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_cond_sub<mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (match_operand:VI 2 "register_operand")
   (match_operand:VI 3 "register_operand")
   (match_operand:VI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_vsub_vv (<MODE>mode,
        operands[0], operands[1], operands[4],
        operands[2], operands[3], operands[5],
        riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] Shifts
;; -------------------------------------------------------------------------
;; Includes:
;; - vsll.vv
;; - vsll.vx
;; - vsll.vi
;; - vsrl.vv
;; - vsrl.vx
;; - vsrl.vi
;; - vsra.vv
;; - vsra.vx
;; - vsra.vi
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>3"
  [(match_operand:VI 0 "register_operand")
	(any_shift:VI
	  (match_operand:VI 1 "register_operand")
	  (match_operand:<VSUB> 2 "reg_or_uimm5_operand"))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]))
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_v<optab><mode>_vx (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "v<optab><mode>3"
  [(match_operand:VI 0 "register_operand")
	 (any_shift:VI
	   (match_operand:VI 1 "register_operand")
	   (match_operand:VI 2 "register_operand"))]
  "TARGET_VECTOR"
{
  emit_insn (gen_v<optab><mode>_vv (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "cond_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (any_shift:VI
    (match_operand:VI 2 "register_operand")
    (match_operand:VI 3 "vector_reg_or_const_dup_operand"))
   (match_operand:VI 4 "register_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[3], <MODE>mode))
    emit_insn (gen_v<optab><mode>_vv (operands[0], operands[1],
            operands[4], operands[2], operands[3],
            gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy (RVV_POLICY_MU)));
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[3], &x));
      if (!satisfies_constraint_K (x))
        x = force_reg (Pmode, x);

      emit_insn (gen_v<optab><mode>_vx (operands[0], operands[1], operands[4],
          operands[2], x, gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy (RVV_POLICY_MU)));
    }
  DONE;
})

(define_expand "len_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (any_shift:VI
    (match_operand:VI 1 "register_operand")
    (match_operand:<VSUB> 2 "reg_or_uimm5_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_v<optab><mode>_vx (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], operands[3],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_v<optab><mode>3"
  [(match_operand:VI 0 "register_operand")
   (any_shift:VI
    (match_operand:VI 1 "register_operand")
    (match_operand:VI 2 "register_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_v<optab><mode>_vv (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], operands[3],
        riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_cond_<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (any_shift:VI
    (match_operand:VI 2 "register_operand")
    (match_operand:<VSUB> 3 "reg_or_uimm5_operand"))
   (match_operand:VI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_v<optab><mode>_vx (operands[0], operands[1], operands[4],
          operands[2], operands[3], operands[5], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_cond_v<optab><mode>"
  [(match_operand:VI 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (any_shift:VI
    (match_operand:VI 2 "register_operand")
    (match_operand:VI 3 "register_operand"))
   (match_operand:VI 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_v<optab><mode>_vv (operands[0], operands[1],
            operands[4], operands[2], operands[3],
            operands[5], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] Highpart multiplication
;; -------------------------------------------------------------------------
;; Includes:
;; - vmulh.vv
;; - vmulh.vx
;; - vmulhu.vv
;; - vmulhu.vx
;; -------------------------------------------------------------------------

(define_expand "<su>mul<mode>3_highpart"
  [(set (match_operand:VI 0 "register_operand")
	  (unspec:VI
	    [(match_operand:VI 1 "register_operand")
	     (match_operand:VI 2 "vector_reg_or_const_dup_operand")]
      MUL_HIGHPART))]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    {
      emit_insn (gen_vmulh<u><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy ()));
    }
  else
    {
      rtx x;
      gcc_assert (const_vec_duplicate_p(operands[2], &x));
      emit_insn (gen_vmulh<u><mode>_vx (
        operands[0], const0_rtx, const0_rtx,
        operands[1], x, gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    }
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] General binary arithmetic corresponding to rtx codes
;; -------------------------------------------------------------------------
;; Includes:
;; - vfadd.vv
;; - vfadd.vf
;; - vfmul.vv
;; - vfmul.vf
;; - vfmin.vv
;; - vfmin.vf
;; - vfmax.vv
;; - vfmax.vf
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>3"
  [(match_operand:VF 0 "register_operand")
   (fp_binary:VF
    (match_operand:VF 1 "register_operand")
    (match_operand:VF 2 "vector_reg_or_const_dup_operand"))]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_vf<optab><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy ()));
  else
    {
      rtx f;
      gcc_assert (const_vec_duplicate_p(operands[2], &f));
      emit_insn (gen_vf<optab><mode>_vf (operands[0],
            const0_rtx, const0_rtx, operands[1],
            force_reg (<VSUB>mode, f), gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "cond_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (fp_binary:VF
    (match_operand:VF 2 "register_operand")
    (match_operand:VF 3 "vector_reg_or_const_dup_operand"))
   (match_operand:VF 4 "register_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[3], <MODE>mode))
    emit_insn (gen_vf<optab><mode>_vv (operands[0], operands[1],
            operands[4], operands[2], operands[3],
            gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy (RVV_POLICY_MU)));
  else
    {
      rtx f;
      gcc_assert (const_vec_duplicate_p(operands[3], &f));
      emit_insn (gen_vf<optab><mode>_vf (operands[0], operands[1], operands[4],
          operands[2], force_reg (<VSUB>mode, f), gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy (RVV_POLICY_MU)));
    }
  DONE;
})

(define_expand "len_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (fp_binary:VF
    (match_operand:VF 1 "register_operand")
    (match_operand:VF 2 "vector_reg_or_const_dup_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  if (register_operand (operands[2], <MODE>mode))
    emit_insn (gen_vf<optab><mode>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1], operands[2], operands[3],
      riscv_vector_gen_policy ()));
  else
    {
      rtx f;
      gcc_assert (const_vec_duplicate_p(operands[2], &f));
      emit_insn (gen_vf<optab><mode>_vf (operands[0],
          const0_rtx, const0_rtx, operands[1],
          force_reg (<VSUB>mode, f), operands[3],
          riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "len_cond_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (fp_binary:VF
    (match_operand:VF 2 "register_operand")
    (match_operand:VF 3 "register_operand"))
   (match_operand:VF 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_vf<optab><mode>_vv (operands[0],
      operands[1], operands[4], operands[2], operands[3], operands[5],
      riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] Subtraction & Division
;; -------------------------------------------------------------------------
;; Includes:
;; - vfsub.vv
;; - vfsub.vf
;; - vfrsub.vf
;; - vfdiv.vv
;; - vfdiv.vf
;; - vfrdiv.vf
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>3"
  [(match_operand:VF 0 "register_operand")
   (minus_div:VF
    (match_operand:VF 1 "register_operand")
    (match_operand:VF 2 "register_operand"))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vf<optab><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "cond_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (minus_div:VF
    (match_operand:VF 2 "register_operand")
    (match_operand:VF 3 "register_operand"))
   (match_operand:VF 4 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vf<optab><mode>_vv (operands[0], operands[1],
            operands[4], operands[2], operands[3],
            gen_rtx_REG (Pmode, X0_REGNUM),
            riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

(define_expand "len_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (minus_div:VF
    (match_operand:VF 1 "register_operand")
    (match_operand:VF 2 "register_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vf<optab><mode>_vv (operands[0],
            const0_rtx, const0_rtx, operands[1],
            operands[2], operands[3],
            riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_cond_<optab><mode>"
  [(match_operand:VF 0 "register_operand")
   (match_operand:<VM> 1 "register_operand")
   (minus_div:VF
    (match_operand:VF 2 "register_operand")
    (match_operand:VF 3 "register_operand"))
   (match_operand:VF 4 "register_operand")
   (match_operand 5 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[5]) && GET_MODE (operands[5]) != Pmode)
    operands[5] = gen_lowpart (Pmode, operands[5]);
  emit_insn (gen_vf<optab><mode>_vv (operands[0], operands[1],
            operands[4], operands[2], operands[3],
            operands[5], riscv_vector_gen_policy (RVV_POLICY_MU)));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] Sign-injection
;; -------------------------------------------------------------------------
;; Includes:
;; - vfsgnj.vv
;; - vfsgnjx.vv
;; -------------------------------------------------------------------------

(define_expand "copysign<mode>3"
  [(match_operand:VF 0 "register_operand")
   (match_operand:VF 1 "register_operand")
   (match_operand:VF 2 "vector_reg_or_const_dup_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    {
      emit_insn (gen_vfsgnj_vv (UNSPEC_COPYSIGN,
          <MODE>mode, operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  else
    {
      rtx f;
      gcc_assert (const_vec_duplicate_p(operands[2], &f));
      emit_insn (gen_vfsgnj_vf (UNSPEC_COPYSIGN,
          <MODE>mode, operands[0], const0_rtx, const0_rtx, operands[1],
          force_reg (<VSUB>mode, f), gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "xorsign<mode>3"
  [(match_operand:VF 0 "register_operand")
   (match_operand:VF 1 "register_operand")
   (match_operand:VF 2 "vector_reg_or_const_dup_operand")]
  "TARGET_VECTOR"
{
  if (register_operand (operands[2], <MODE>mode))
    {
      emit_insn (gen_vfsgnj_vv (UNSPEC_XORSIGN,
          <MODE>mode, operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  else
    {
      rtx f;
      gcc_assert (const_vec_duplicate_p(operands[2], &f));
      emit_insn (gen_vfsgnj_vf (UNSPEC_XORSIGN,
          <MODE>mode, operands[0], operands[1], const0_rtx, const0_rtx,
          force_reg (<VSUB>mode, f), gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [BOOL] Binary logical operations
;; -------------------------------------------------------------------------
;; Includes:
;; - vmand.mm
;; - vmxor.mm
;; - vmor.mm
;; -------------------------------------------------------------------------

(define_expand "<optab><mode>3"
  [(match_operand:VB 0 "register_operand")
   (any_bitwise:VB
    (match_operand:VB 1 "register_operand")
    (match_operand:VB 2 "register_operand"))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vm<optab><mode>_mm (operands[0],
        operands[1], operands[2], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_<optab><mode>"
  [(match_operand:VB 0 "register_operand")
   (any_bitwise:VB
    (match_operand:VB 1 "register_operand")
    (match_operand:VB 2 "register_operand"))
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);

  emit_insn (gen_vm<optab><mode>_mm (operands[0],
        operands[1], operands[2], operands[3], riscv_vector_gen_policy ()));
  DONE;
})

;; =========================================================================
;; == Ternary arithmetic
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT] Multiply-Add
;; -------------------------------------------------------------------------
;; Includes:
;; - vmacc.vv
;; - vmadd.vv
;; - vnmsac.vv
;; - vnmsub.vv
;; -------------------------------------------------------------------------

(define_expand "fma<mode>4"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand")
            (match_operand:VI 2 "register_operand"))
          (match_operand:VI 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnma<mode>4"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand"))
          (match_operand:VI 2 "register_operand"))
        (match_operand:VI 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fma<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand")
            (match_operand:VI 2 "register_operand"))
          (match_operand:VI 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnma<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand"))
          (match_operand:VI 2 "register_operand"))
        (match_operand:VI 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_insn "*len_fma<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand" "%0, vr,vr")
            (match_operand:VI 2 "register_operand" "vr,vr,vr"))
          (match_operand:VI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadd.vv\t%0,%2,%3
   vmacc.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vmacc.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnma<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand" "%0,vr,vr"))
          (match_operand:VI 2 "register_operand" "vr,vr,vr"))
        (match_operand:VI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnmsub.vv\t%0,%2,%3
   vnmsac.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vnmsac.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fma<mode>"
  [(set (match_operand:VI 0 "register_operand")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand")
        (plus:VI
          (mult:VI
            (match_operand:VI 2 "register_operand")
            (match_operand:VI 3 "register_operand"))
          (match_operand:VI 4 "register_operand"))
        (match_operand:VI 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_expand "len_cond_fma<mode>"
  [(set (match_operand:V 0 "register_operand")
	  (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "register_operand")
        (plus:V
          (mult:V
            (match_operand:V 2 "register_operand")
            (match_operand:V 3 "register_operand"))
          (match_operand:V 4 "register_operand"))
        (match_operand:V 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[7] = riscv_vector_gen_policy (RVV_POLICY_MU);
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fma<mode>_2"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
          (plus:VI
            (mult:VI
              (match_operand:VI 2 "register_operand" "%0,vr")
              (match_operand:VI 3 "register_operand" "vr,vr"))
            (match_operand:VI 4 "register_operand" "vr,vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadd.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vmadd.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fma<mode>_4"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VI
	        (mult:VI
	          (match_operand:VI 2 "register_operand" "vr,vr")
	          (match_operand:VI 3 "register_operand" "vr,vr"))
	        (match_operand:VI 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmacc.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vmacc.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fma<mode>_any"
  [(set (match_operand:VI 0 "register_operand" "=&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm")
        (plus:VI
	        (mult:VI
	          (match_operand:VI 2 "register_operand" "vr")
	          (match_operand:VI 3 "register_operand" "vr"))
	        (match_operand:VI 4 "register_operand" "vr"))
        (match_operand:VI 5 "register_operand" "vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnma<mode>"
  [(set (match_operand:VI 0 "register_operand")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand")
        (plus:VI
          (mult:VI
            (neg:VI
              (match_operand:VI 2 "register_operand"))
            (match_operand:VI 3 "register_operand"))
          (match_operand:VI 4 "register_operand"))
        (match_operand:VI 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_expand "len_cond_fnma<mode>"
  [(set (match_operand:V 0 "register_operand")
	  (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "register_operand")
        (plus:V
          (mult:V
            (neg:V
              (match_operand:V 2 "register_operand"))
            (match_operand:V 3 "register_operand"))
          (match_operand:V 4 "register_operand"))
        (match_operand:V 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[7] = riscv_vector_gen_policy (RVV_POLICY_MU);
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fnma<mode>_2"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VI
	        (mult:VI
            (neg:VI
              (match_operand:VI 2 "register_operand" "%0,vr"))
	          (match_operand:VI 3 "register_operand" "vr,vr"))
	        (match_operand:VI 4 "register_operand" "vr,vr"))
        (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnmsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vnmsub.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnma<mode>_4"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VI
	        (mult:VI
	          (neg:VI
              (match_operand:VI 2 "register_operand" "vr,vr"))
	          (match_operand:VI 3 "register_operand" "vr,vr"))
	        (match_operand:VI 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnmsac.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vnmsac.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnma<mode>_any"
  [(set (match_operand:VI 0 "register_operand" "=&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm")
        (plus:VI
	        (mult:VI
            (neg:VI
	            (match_operand:VI 2 "register_operand" "vr"))
	          (match_operand:VI 3 "register_operand" "vr"))
	        (match_operand:VI 4 "register_operand" "vr"))
        (match_operand:VI 5 "register_operand" "vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [FP] Multiply-Add
;; -------------------------------------------------------------------------
;; Includes:
;; - vfmacc.vv
;; - vfmadd.vv
;; - vfnmsac.vv
;; - vfnmsub.vv
;; -------------------------------------------------------------------------

(define_expand "fma<mode>4"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand")
            (match_operand:VF 2 "register_operand"))
          (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fms<mode>4"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand")
          (match_operand:VF 2 "register_operand"))
        (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnma<mode>4"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand"))
            (match_operand:VF 2 "register_operand"))
          (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnms<mode>4"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand"))
          (match_operand:VF 2 "register_operand"))
        (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fma<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand")
            (match_operand:VF 2 "register_operand"))
          (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fms<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand")
          (match_operand:VF 2 "register_operand"))
        (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnma<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand"))
            (match_operand:VF 2 "register_operand"))
          (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand"))
          (match_operand:VF 2 "register_operand"))
        (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_insn "*len_fma<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand" "%0,vr,vr")
            (match_operand:VF 2 "register_operand" "vr,vr,vr"))
          (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmadd.vv\t%0,%2,%3
   vfmacc.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfmacc.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand" "%0,vr,vr")
          (match_operand:VF 2 "register_operand" "vr,vr,vr"))
        (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmsub.vv\t%0,%2,%3
   vfmsac.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfmsac.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnma<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand" "%0,vr,vr"))
            (match_operand:VF 2 "register_operand" "vr,vr,vr"))
          (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmsub.vv\t%0,%2,%3
   vfnmsac.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfnmsac.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand" "%0,vr,vr"))
          (match_operand:VF 2 "register_operand" "vr,vr,vr"))
        (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmadd.vv\t%0,%2,%3
   vfnmacc.vv\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfnmacc.vv\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fma<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (plus:VF
          (mult:VF
            (match_operand:VF 2 "register_operand")
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fma<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "%0,vr")
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmadd.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmadd.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fma<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr,vr")
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmacc.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmacc.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fma<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm")
        (plus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr")
	          (match_operand:VF 3 "register_operand" "vr"))
	        (match_operand:VF 4 "register_operand" "vr"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
               operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fms<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (minus:VF
          (mult:VF
            (match_operand:VF 2 "register_operand")
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_expand "len_cond_fms<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (minus:VF
          (mult:VF
            (match_operand:VF 2 "register_operand")
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[7] = riscv_vector_gen_policy (RVV_POLICY_MU);
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fms<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (minus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "%0,vr")
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmsub.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fms<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (minus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr,vr")
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmsac.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmsac.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fms<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm")
        (minus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr")
	          (match_operand:VF 3 "register_operand" "vr"))
	        (match_operand:VF 4 "register_operand" "vr"))
        (match_operand:VF 5 "register_operand" "vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnma<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 2 "register_operand"))
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fnma<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
	        (mult:VF
            (neg:VF
              (match_operand:VF 2 "register_operand" "%0,vr"))
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmsub.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnma<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
	        (mult:VF
	          (neg:VF
              (match_operand:VF 2 "register_operand" "vr,vr"))
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmsac.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmsac.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnma<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm")
          (plus:VF
            (mult:VF
              (neg:VF
                (match_operand:VF 2 "register_operand" "vr"))
              (match_operand:VF 3 "register_operand" "vr"))
            (match_operand:VF 4 "register_operand" "vr"))
          (match_operand:VF 5 "register_operand" "vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (minus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 2 "register_operand"))
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_dup 6)
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[6] = gen_rtx_REG (Pmode, X0_REGNUM);
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_expand "len_cond_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (minus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 2 "register_operand"))
            (match_operand:VF 3 "register_operand"))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_dup 7)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  operands[7] = riscv_vector_gen_policy ();
  if (rtx_equal_p (operands[3], operands[5]))
    std::swap (operands[2], operands[3]);
})

(define_insn "*cond_fnms<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (minus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 2 "register_operand" "%0,vr"))
            (match_operand:VF 3 "register_operand" "vr,vr"))
          (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmadd.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmadd.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnms<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (minus:VF
	        (mult:VF
	          (neg:VF
              (match_operand:VF 2 "register_operand" "vr,vr"))
	          (match_operand:VF 3 "register_operand" "vr,vr"))
	        (match_operand:VF 4 "register_operand" "0,vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmacc.vv\t%0,%2,%3,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmacc.vv\t%0,%2,%3,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnms<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm")
        (minus:VF
	        (mult:VF
            (neg:VF
	            (match_operand:VF 2 "register_operand" "vr"))
	          (match_operand:VF 3 "register_operand" "vr"))
	        (match_operand:VF 4 "register_operand" "vr"))
        (match_operand:VF 5 "register_operand" "vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[3], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; =========================================================================
;; == Reductions
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT] Tree reductions
;; -------------------------------------------------------------------------
;; Includes:
;; - vredsum.vs
;; - vredmaxu.vs
;; - vredmax.vs
;; - vredminu.vs
;; - vredmin.vs
;; - vredand.vs
;; - vredor.vs
;; - vredxor.vs
;; -------------------------------------------------------------------------

(define_expand "reduc_plus_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_v_s_x (UNSPEC_VMVS, <VLMUL1>mode, accum, 
             const0_rtx, GEN_INT (0), zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vredsum<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vmv_x_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_<optab>_scal_<mode>"
  [(set (match_operand:<VSUB> 0 "register_operand")
    (unspec:<VSUB>
      [(match_operand:VI 1 "register_operand")] REDUC_MAXMIN))]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  rtx x = gen_reg_rtx (<VSUB>mode);
  emit_insn (gen_vmv_x_s (<MODE>mode, x, operands[1]));
  emit_insn (gen_v_s_x (UNSPEC_VMVS, <VLMUL1>mode, accum, 
             const0_rtx, x, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vred<reduc><mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vmv_x_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_and_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_v_v_x (UNSPEC_VMV, <VLMUL1>mode, 
      accum, const0_rtx, GEN_INT (-1),
      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vredand<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vmv_x_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_ior_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_v_s_x (UNSPEC_VMVS, <VLMUL1>mode, accum, 
             const0_rtx, GEN_INT (0), zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vredor<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vmv_x_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_xor_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VI 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_v_s_x (UNSPEC_VMVS, <VLMUL1>mode, accum, 
             const0_rtx, GEN_INT (0), zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vredxor<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vmv_x_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] Tree reductions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfredusum.vs
;; - vfredmax.vs
;; - vfredmin.vs
;; -------------------------------------------------------------------------

(define_expand "reduc_plus_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VF 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_vmv_s_x_internal (<VLMUL1>mode, accum, zero, 
        riscv_vector_gen_policy ()));
  emit_insn (gen_vfredusum<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_smin_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VF 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  rtx f = gen_reg_rtx (<VSUB>mode);
  emit_insn (gen_vfmv_f_s (<MODE>mode, f, operands[1]));
  emit_insn (gen_vfmv_s_f (<VLMUL1>mode, accum, 
             const0_rtx, f, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfredmin<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "reduc_smax_scal_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:VF 1 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  rtx f = gen_reg_rtx (<VSUB>mode);
  emit_insn (gen_vfmv_f_s (<MODE>mode, f, operands[1]));
  emit_insn (gen_vfmv_s_f (<VLMUL1>mode, accum, 
             const0_rtx, f, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfredmax<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[1], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP] Left-to-right reductions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfredosum.vs
;; -------------------------------------------------------------------------

(define_expand "fold_left_plus_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
   (match_operand:<VSUB> 1 "register_operand")
   (match_operand:VF 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_vfmv_s_f (<VLMUL1>mode, accum, 
             const0_rtx, operands[1], zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfredosum<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[2], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "mask_fold_left_plus_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
	 (match_operand:<VSUB> 1 "register_operand")
	 (match_operand:VF 2 "register_operand")
   (match_operand:<VM> 3 "register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
  emit_insn (gen_vfmv_s_f (<VLMUL1>mode, accum, 
             const0_rtx, operands[1], zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfredosum<mode>_vs (accum, operands[3], const0_rtx,
        operands[2], accum, zero, riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

(define_expand "len_fold_left_plus_<mode>"
  [(match_operand:<VSUB> 0 "register_operand")
	 (match_operand:<VSUB> 1 "register_operand")
	 (match_operand:VF 2 "register_operand")
   (match_operand 3 "pmode_register_operand")]
  "TARGET_VECTOR"
{
  rtx accum = gen_reg_rtx (<VLMUL1>mode);
  emit_insn (gen_vfmv_s_f (<VLMUL1>mode, accum, 
             const0_rtx, operands[1], operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vfredosum<mode>_vs (accum, const0_rtx, const0_rtx,
        operands[2], accum, operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vfmv_f_s (<VLMUL1>mode, operands[0], accum));
  DONE;
})

;; =========================================================================
;; == Comparisons and selects
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Select based on masks
;; -------------------------------------------------------------------------
;; Includes merging patterns for:
;; - vmerge.vv
;; - vmerge.vx
;; - vfmerge.vf
;; -------------------------------------------------------------------------

(define_expand "@vcond_mask_<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "nonmemory_operand")
   (match_operand:V 2 "register_operand")
   (match_operand:<VM> 3 "register_operand")]
  "TARGET_VECTOR"
{
  rtx x;

  if (const_vec_duplicate_p (operands[1], &x))
    {
      if (FLOAT_MODE_P (<MODE>mode))
        {
          emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
              operands[3], const0_rtx, operands[2], force_reg (<VSUB>mode, x),
              gen_rtx_REG (Pmode, X0_REGNUM),
              riscv_vector_gen_policy ()));
        }
      else
        {
          emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
              operands[3], const0_rtx, operands[2], x,
              gen_rtx_REG (Pmode, X0_REGNUM),
              riscv_vector_gen_policy ()));
        }
    }
  else
    {
      operands[1] = force_reg (<MODE>mode, operands[1]);
      emit_insn (gen_vmerge_vvm (<MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "@len_vcond_mask_<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "nonmemory_operand")
   (match_operand:V 2 "register_operand")
   (match_operand:<VM> 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  rtx x;
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  if (const_vec_duplicate_p (operands[1], &x))
    {
      if (FLOAT_MODE_P (<MODE>mode))
        {
          emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
              operands[3], const0_rtx, operands[2], force_reg (<VSUB>mode, x),
              operands[4], riscv_vector_gen_policy ()));
        }
      else
        {
          emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
              operands[3], const0_rtx, operands[2], x,
              operands[4], riscv_vector_gen_policy ()));
        }
    }
  else
    {
      operands[1] = force_reg (<MODE>mode, operands[1]);
      emit_insn (gen_vmerge_vvm (<MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          operands[4], riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "@vcond_mask_vs<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:<VSUB> 1 "<vcond_mask_vs_predicate>")
   (match_operand:V 2 "register_operand")
   (match_operand:<VM> 3 "register_operand")]
  "TARGET_VECTOR"
{
  if (FLOAT_MODE_P (<MODE>mode))
    {
      emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  else
    {
      emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    }
  DONE;
})

(define_expand "@len_vcond_mask_vs<mode><vm>"
  [(match_operand:V 0 "register_operand")
   (match_operand:<VSUB> 1 "<vcond_mask_vs_predicate>")
   (match_operand:V 2 "register_operand")
   (match_operand:<VM> 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  if (FLOAT_MODE_P (<MODE>mode))
    {
      emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          operands[4], riscv_vector_gen_policy ()));
    }
  else
    {
      emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
          operands[3], const0_rtx, operands[2], operands[1],
          operands[4], riscv_vector_gen_policy ()));
    }
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Compare and select
;; -------------------------------------------------------------------------
;; The patterns in this section are synthetic.
;; -------------------------------------------------------------------------

;; Integer (signed) vcond.  Don't enforce an immediate range here, since it
;; depends on the comparison; leave it to riscv_expand_vcond instead.
(define_expand "vcond<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSI 4 "register_operand")
	     (match_operand:V2UNITSI 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSI 4 "register_operand")
	       (match_operand:V2UNITSI 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSI 4 "register_operand")
	     (match_operand:V4UNITSI 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSI 4 "register_operand")
	       (match_operand:V4UNITSI 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSI 4 "register_operand")
	     (match_operand:V8UNITSI 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSI 4 "register_operand")
	       (match_operand:V8UNITSI 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSI 4 "register_operand")
	     (match_operand:V16UNITSI 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSI 4 "register_operand")
	       (match_operand:V16UNITSI 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSI 4 "register_operand")
	     (match_operand:V32UNITSI 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSI 4 "register_operand")
	       (match_operand:V32UNITSI 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSI 4 "register_operand")
	     (match_operand:V64UNITSI 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSI 4 "register_operand")
	       (match_operand:V64UNITSI 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
	(if_then_else:V128UNITSI
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V128UNITSI 4 "register_operand")
	     (match_operand:V128UNITSI 5 "nonmemory_operand")])
	  (match_operand:V128UNITSI 1 "nonmemory_operand")
	  (match_operand:V128UNITSI 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
  (unspec:V128UNITSI
	  [(if_then_else:V128UNITSI
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V128UNITSI 4 "register_operand")
	       (match_operand:V128UNITSI 5 "nonmemory_operand")])
	    (match_operand:V128UNITSI 1 "nonmemory_operand")
	    (match_operand:V128UNITSI 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, true);
  DONE;
})

;; Integer vcondu.  Don't enforce an immediate range here, since it
;; depends on the comparison; leave it to riscv_expand_vcond instead.
(define_expand "vcondu<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSI 4 "register_operand")
	     (match_operand:V2UNITSI 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSI 4 "register_operand")
	       (match_operand:V2UNITSI 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSI 4 "register_operand")
	     (match_operand:V4UNITSI 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSI 4 "register_operand")
	       (match_operand:V4UNITSI 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSI 4 "register_operand")
	     (match_operand:V8UNITSI 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSI 4 "register_operand")
	       (match_operand:V8UNITSI 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSI 4 "register_operand")
	     (match_operand:V16UNITSI 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSI 4 "register_operand")
	       (match_operand:V16UNITSI 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSI 4 "register_operand")
	     (match_operand:V32UNITSI 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSI 4 "register_operand")
	       (match_operand:V32UNITSI 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSI 4 "register_operand")
	     (match_operand:V64UNITSI 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSI 4 "register_operand")
	       (match_operand:V64UNITSI 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
	(if_then_else:V128UNITSI
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V128UNITSI 4 "register_operand")
	     (match_operand:V128UNITSI 5 "nonmemory_operand")])
	  (match_operand:V128UNITSI 1 "nonmemory_operand")
	  (match_operand:V128UNITSI 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
  (unspec:V128UNITSI
	  [(if_then_else:V128UNITSI
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V128UNITSI 4 "register_operand")
	       (match_operand:V128UNITSI 5 "nonmemory_operand")])
	    (match_operand:V128UNITSI 1 "nonmemory_operand")
	    (match_operand:V128UNITSI 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, true);
  DONE;
})

;; Floating-point vcond.  All comparisons except FCMUO allow a zero operand;
;; riscv_expand_vcond handles the case of an FCMUO with zero.
(define_expand "vcond<V2UNITS:mode><V2UNITSF:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSF 4 "register_operand")
	     (match_operand:V2UNITSF 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSF:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V2UNITS:mode><V2UNITSF:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSF 4 "register_operand")
	       (match_operand:V2UNITSF 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSF:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V4UNITS:mode><V4UNITSF:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSF 4 "register_operand")
	     (match_operand:V4UNITSF 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSF:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V4UNITS:mode><V4UNITSF:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSF 4 "register_operand")
	       (match_operand:V4UNITSF 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSF:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V8UNITS:mode><V8UNITSF:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSF 4 "register_operand")
	     (match_operand:V8UNITSF 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSF:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V8UNITS:mode><V8UNITSF:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSF 4 "register_operand")
	       (match_operand:V8UNITSF 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSF:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V16UNITS:mode><V16UNITSF:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSF 4 "register_operand")
	     (match_operand:V16UNITSF 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSF:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V16UNITS:mode><V16UNITSF:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSF 4 "register_operand")
	       (match_operand:V16UNITSF 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSF:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V32UNITS:mode><V32UNITSF:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSF 4 "register_operand")
	     (match_operand:V32UNITSF 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSF:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V32UNITS:mode><V32UNITSF:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSF 4 "register_operand")
	       (match_operand:V32UNITSF 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSF:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond<V64UNITS:mode><V64UNITSF:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSF 4 "register_operand")
	     (match_operand:V64UNITSF 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSF:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond<V64UNITS:mode><V64UNITSF:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSF 4 "register_operand")
	       (match_operand:V64UNITSF 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSF:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSI 4 "register_operand")
	     (match_operand:<V2UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSI 4 "register_operand")
	       (match_operand:<V2UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSI 4 "register_operand")
	     (match_operand:<V4UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSI 4 "register_operand")
	       (match_operand:<V4UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSI 4 "register_operand")
	     (match_operand:<V8UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSI 4 "register_operand")
	       (match_operand:<V8UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSI 4 "register_operand")
	     (match_operand:<V16UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSI 4 "register_operand")
	       (match_operand:<V16UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSI 4 "register_operand")
	     (match_operand:<V32UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSI 4 "register_operand")
	       (match_operand:<V32UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSI 4 "register_operand")
	     (match_operand:<V64UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSI 4 "register_operand")
	       (match_operand:<V64UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
	(if_then_else:V128UNITSI
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V128UNITSI 4 "register_operand")
	     (match_operand:<V128UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V128UNITSI 1 "nonmemory_operand")
	  (match_operand:V128UNITSI 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
  (unspec:V128UNITSI
	  [(if_then_else:V128UNITSI
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V128UNITSI 4 "register_operand")
	       (match_operand:<V128UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V128UNITSI 1 "nonmemory_operand")
	    (match_operand:V128UNITSI 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, true);
  DONE;
})

;; Integer vcondu.  Don't enforce an immediate range here, since it
;; depends on the comparison; leave it to riscv_expand_vcond instead.
(define_expand "vcondu_vs<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSI 4 "register_operand")
	     (match_operand:<V2UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSI 4 "register_operand")
	       (match_operand:<V2UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSI:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSI 4 "register_operand")
	     (match_operand:<V4UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSI 4 "register_operand")
	       (match_operand:<V4UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSI:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSI 4 "register_operand")
	     (match_operand:<V8UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSI 4 "register_operand")
	       (match_operand:<V8UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSI:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSI 4 "register_operand")
	     (match_operand:<V16UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSI 4 "register_operand")
	       (match_operand:<V16UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSI:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSI 4 "register_operand")
	     (match_operand:<V32UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSI 4 "register_operand")
	       (match_operand:<V32UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSI:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSI 4 "register_operand")
	     (match_operand:<V64UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSI 4 "register_operand")
	       (match_operand:<V64UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSI:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcondu_vs<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
	(if_then_else:V128UNITSI
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V128UNITSI 4 "register_operand")
	     (match_operand:<V128UNITSI:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V128UNITSI 1 "nonmemory_operand")
	  (match_operand:V128UNITSI 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcondu_vs<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand")
  (unspec:V128UNITSI
	  [(if_then_else:V128UNITSI
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V128UNITSI 4 "register_operand")
	       (match_operand:<V128UNITSI:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V128UNITSI 1 "nonmemory_operand")
	    (match_operand:V128UNITSI 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<MODE>mode, <MODE>mode, <VM>mode, operands, true);
  DONE;
})

;; Floating-point vcond.  All comparisons except FCMUO allow a zero operand;
;; riscv_expand_vcond handles the case of an FCMUO with zero.
(define_expand "vcond_vs<V2UNITS:mode><V2UNITSF:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
	(if_then_else:V2UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V2UNITSF 4 "register_operand")
	     (match_operand:<V2UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V2UNITS 1 "nonmemory_operand")
	  (match_operand:V2UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSF:MODE>mode, <V2UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V2UNITS:mode><V2UNITSF:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand")
  (unspec:V2UNITS
	  [(if_then_else:V2UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V2UNITSF 4 "register_operand")
	       (match_operand:<V2UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V2UNITS 1 "nonmemory_operand")
	    (match_operand:V2UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V2UNITS:MODE>mode, <V2UNITSF:MODE>mode, <V2UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V4UNITS:mode><V4UNITSF:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
	(if_then_else:V4UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V4UNITSF 4 "register_operand")
	     (match_operand:<V4UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V4UNITS 1 "nonmemory_operand")
	  (match_operand:V4UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSF:MODE>mode, <V4UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V4UNITS:mode><V4UNITSF:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand")
  (unspec:V4UNITS
	  [(if_then_else:V4UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V4UNITSF 4 "register_operand")
	       (match_operand:<V4UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V4UNITS 1 "nonmemory_operand")
	    (match_operand:V4UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V4UNITS:MODE>mode, <V4UNITSF:MODE>mode, <V4UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V8UNITS:mode><V8UNITSF:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
	(if_then_else:V8UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V8UNITSF 4 "register_operand")
	     (match_operand:<V8UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V8UNITS 1 "nonmemory_operand")
	  (match_operand:V8UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSF:MODE>mode, <V8UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V8UNITS:mode><V8UNITSF:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand")
  (unspec:V8UNITS
	  [(if_then_else:V8UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V8UNITSF 4 "register_operand")
	       (match_operand:<V8UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V8UNITS 1 "nonmemory_operand")
	    (match_operand:V8UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V8UNITS:MODE>mode, <V8UNITSF:MODE>mode, <V8UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V16UNITS:mode><V16UNITSF:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
	(if_then_else:V16UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V16UNITSF 4 "register_operand")
	     (match_operand:<V16UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V16UNITS 1 "nonmemory_operand")
	  (match_operand:V16UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSF:MODE>mode, <V16UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V16UNITS:mode><V16UNITSF:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand")
  (unspec:V16UNITS
	  [(if_then_else:V16UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V16UNITSF 4 "register_operand")
	       (match_operand:<V16UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V16UNITS 1 "nonmemory_operand")
	    (match_operand:V16UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V16UNITS:MODE>mode, <V16UNITSF:MODE>mode, <V16UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V32UNITS:mode><V32UNITSF:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
	(if_then_else:V32UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V32UNITSF 4 "register_operand")
	     (match_operand:<V32UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V32UNITS 1 "nonmemory_operand")
	  (match_operand:V32UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSF:MODE>mode, <V32UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V32UNITS:mode><V32UNITSF:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand")
  (unspec:V32UNITS
	  [(if_then_else:V32UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V32UNITSF 4 "register_operand")
	       (match_operand:<V32UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V32UNITS 1 "nonmemory_operand")
	    (match_operand:V32UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V32UNITS:MODE>mode, <V32UNITSF:MODE>mode, <V32UNITS:VM>mode, operands, true);
  DONE;
})

(define_expand "vcond_vs<V64UNITS:mode><V64UNITSF:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
	(if_then_else:V64UNITS
	  (match_operator 3 "comparison_operator"
	    [(match_operand:V64UNITSF 4 "register_operand")
	     (match_operand:<V64UNITSF:VSUB> 5 "nonmemory_operand")])
	  (match_operand:V64UNITS 1 "nonmemory_operand")
	  (match_operand:V64UNITS 2 "nonmemory_operand")))]
  "TARGET_VECTOR"
{
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSF:MODE>mode, <V64UNITS:VM>mode, operands, false);
  DONE;
})

(define_expand "len_vcond_vs<V64UNITS:mode><V64UNITSF:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand")
  (unspec:V64UNITS
	  [(if_then_else:V64UNITS
	    (match_operator 3 "comparison_operator"
	      [(match_operand:V64UNITSF 4 "register_operand")
	       (match_operand:<V64UNITSF:VSUB> 5 "nonmemory_operand")])
	    (match_operand:V64UNITS 1 "nonmemory_operand")
	    (match_operand:V64UNITS 2 "nonmemory_operand"))
     (match_operand 6 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[6]) && GET_MODE (operands[6]) != Pmode)
    operands[6] = gen_lowpart (Pmode, operands[6]);
  riscv_expand_vcond (<V64UNITS:MODE>mode, <V64UNITSF:MODE>mode, <V64UNITS:VM>mode, operands, true);
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Comparisons
;; -------------------------------------------------------------------------
;; Includes:
;; - vmseq
;; - vmsge
;; - vmsgt
;; - vmsle
;; - vmslt
;; - vmsne
;; -------------------------------------------------------------------------

;; Signed integer comparisons.  Don't enforce an immediate range here, since
;; it depends on the comparison; leave it to riscv_expand_vec_cmp_int
;; instead.
(define_expand "vec_cmp<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	  (match_operator:<VM> 1 "comparison_operator"
	    [(match_operand:VI 2 "register_operand")
	     (match_operand:VI 3 "nonmemory_operand")]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmp<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VI 2 "register_operand")
	       (match_operand:VI 3 "nonmemory_operand")])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; Unsigned integer comparisons.  Don't enforce an immediate range here, since
;; it depends on the comparison; leave it to riscv_expand_vec_cmp_int
;; instead.
(define_expand "vec_cmpu<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	(match_operator:<VM> 1 "comparison_operator"
	  [(match_operand:VI 2 "register_operand")
	   (match_operand:VI 3 "nonmemory_operand")]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmpu<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VI 2 "register_operand")
	       (match_operand:VI 3 "nonmemory_operand")])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; Floating-point comparisons.  All comparisons except FCMUO allow a zero
;; operand; riscv_expand_vec_cmp_float handles the case of an FCMUO
;; with zero.
(define_expand "vec_cmp<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	(match_operator:<VM> 1 "comparison_operator"
	  [(match_operand:VF 2 "register_operand")
	   (match_operand:VF 3 "nonmemory_operand")]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_float (operands[0], GET_CODE (operands[1]),
			      operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmp<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VF 2 "register_operand")
	       (match_operand:VF 3 "nonmemory_operand")])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_float (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; Signed integer comparisons.  Don't enforce an immediate range here, since
;; it depends on the comparison; leave it to riscv_expand_vec_cmp_int
;; instead.
(define_expand "vec_cmp_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	  (match_operator:<VM> 1 "comparison_operator"
	    [(match_operand:VI 2 "register_operand")
	     (vec_duplicate:VI
        (match_operand:<VSUB> 3 "nonmemory_operand"))]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmp_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VI 2 "register_operand")
	       (vec_duplicate:VI
          (match_operand:<VSUB> 3 "nonmemory_operand"))])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; Unsigned integer comparisons.  Don't enforce an immediate range here, since
;; it depends on the comparison; leave it to riscv_expand_vec_cmp_int
;; instead.
(define_expand "vec_cmpu_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	(match_operator:<VM> 1 "comparison_operator"
	  [(match_operand:VI 2 "register_operand")
	   (vec_duplicate:VI
      (match_operand:<VSUB> 3 "nonmemory_operand"))]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmpu_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VI 2 "register_operand")
	       (vec_duplicate:VI
          (match_operand:<VSUB> 3 "nonmemory_operand"))])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_int (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; Floating-point comparisons.  All comparisons except FCMUO allow a zero
;; operand; riscv_expand_vec_cmp_float handles the case of an FCMUO
;; with zero.
(define_expand "vec_cmp_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
	(match_operator:<VM> 1 "comparison_operator"
	  [(match_operand:VF 2 "register_operand")
	   (vec_duplicate:VF
      (match_operand:<VSUB> 3 "register_operand"))]))]
  "TARGET_VECTOR"
{
  riscv_expand_vec_cmp_float (operands[0], GET_CODE (operands[1]),
			      operands[2], operands[3], gen_rtx_REG (Pmode, X0_REGNUM));
  DONE;
})

(define_expand "len_vec_cmp_vs<mode><vm>"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
	    [(match_operator:<VM> 1 "comparison_operator"
	      [(match_operand:VF 2 "register_operand")
	       (vec_duplicate:VF
          (match_operand:<VSUB> 3 "register_operand"))])
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);

  riscv_expand_vec_cmp_float (operands[0], GET_CODE (operands[1]),
				    operands[2], operands[3], operands[4]);
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT] While_len
;; -------------------------------------------------------------------------
;; Includes:
;; - vsetvli/vsetivl/vsetvl instructions
;; -------------------------------------------------------------------------

;; New standard pattern for RVV. operands[0] is the loop len will
;; be used. This pattern expect the result of the counter not to
;; overflow after added by operands[0] generated by this pattern.
(define_expand "while_len<mode><mode>"
  [(match_operand:X 0 "register_operand")
   (match_operand:X 1 "p_reg_or_const_csr_operand")
   (match_operand 2 "const_int_operand")
   (match_operand 3 "")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_while_len (operands);
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [BOOL] while_ult
;; -------------------------------------------------------------------------
;; Includes:
;; - vid.v
;; - vadd.vx/vadd.vi
;; - vmsltu.vx/vmsltu.vi
;; -------------------------------------------------------------------------

(define_expand "while_ult<P:mode><VB:mode>"
  [(match_operand:VB 0 "register_operand")
   (match_operand:P 1 "nonmemory_operand")
   (match_operand:P 2 "nonmemory_operand")]
  "TARGET_VECTOR"
  {
    machine_mode data_mode; 
    gcc_assert (riscv_vector_data_mode (Pmode, GET_MODE_NUNITS (<VB:MODE>mode))
           .exists (&data_mode));
    
    rtx index = gen_reg_rtx (data_mode);
    emit_insn (gen_vid_v (data_mode,
      index, const0_rtx, const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    
    if (!rtx_equal_p (operands[1], CONST0_RTX (Pmode)))
      emit_insn (gen_v_vx (UNSPEC_VADD, data_mode, index, const0_rtx,
                           const0_rtx, index, operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
                           riscv_vector_gen_policy ()));
    
    emit_insn (gen_vms_vx (LTU, data_mode, operands[0], const0_rtx, const0_rtx, index,
                           operands[2], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    DONE;
  })

;; -------------------------------------------------------------------------
;; ---- [BOOL] Test bits
;; -------------------------------------------------------------------------
;; Includes:
;; -------------------------------------------------------------------------

;; Branch based on predicate equality or inequality.
(define_expand "cbranch<mode>4"
  [(set (pc)
	(if_then_else
	  (match_operator 0 "vector_equality_operator"
	    [(match_operand:VB 1 "register_operand")
	     (match_operand:VB 2 "vector_reg_or_const_vector_0_operand")])
	  (label_ref (match_operand 3 ""))
	  (pc)))]
  "TARGET_VECTOR"
  {
    rtx mask = gen_reg_rtx (<MODE>mode);
    rtx count = gen_reg_rtx (Pmode);
    if (GET_CODE (operands[2]) == CONST_VECTOR)
      mask = operands[1];
    else
      emit_insn (gen_vm_mm (XOR, <MODE>mode, mask, operands[1], operands[2],
                 gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    emit_insn (gen_vcpop_m (<MODE>mode, Pmode, count, const0_rtx,
        mask, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));            
    operands[1] = count;
    operands[2] = const0_rtx;
  }
)

;; =========================================================================
;; == Conversions
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Conversions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfcvt.rtz.xu.f.v
;; - vfcvt.rtz.x.f.v
;; -------------------------------------------------------------------------

(define_expand "<optab><mode><vmap>2"
  [(set (match_operand:<VMAP> 0 "register_operand")
    (any_fix:<VMAP>
      (match_operand:VF 1 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfcvt<vmap>_rtz_x<u>_f_v (operands[0], const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_<optab><mode><vmap>"
  [(set (match_operand:<VMAP> 0 "register_operand")
    (unspec:<VMAP>
      [(any_fix:<VMAP>
        (match_operand:VF 1 "register_operand"))
       (match_operand 2 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfcvt<vmap>_rtz_x<u>_f_v (operands[0], const0_rtx, const0_rtx, operands[1],
        operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Conversions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfcvt.f.xu.v
;; - vfcvt.f.x.v
;; -------------------------------------------------------------------------

(define_expand "<optab><vmap><mode>2"
  [(set (match_operand:VF 0 "register_operand")
    (any_float:VF
      (match_operand:<VMAP> 1 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfcvt<mode>_f_x<u>_v (operands[0], const0_rtx, const0_rtx,
        operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_<optab><vmap><mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(any_float:VF
        (match_operand:<VMAP> 1 "register_operand"))
       (match_operand 2 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
    operands[2] = gen_lowpart (Pmode, operands[2]);
  emit_insn (gen_vfcvt<mode>_f_x<u>_v (operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2], riscv_vector_gen_policy ()));
  DONE;
})

;; =========================================================================
;; == Permutes
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] General permutes
;; -------------------------------------------------------------------------
;; Includes:
;; - vgather.vv
;; - vgather.vx
;; - vgather.vi
;; - vmsgtu.vx
;; - vmsgtu.vi
;; - vadd.vi
;; - vsub.vx
;; -------------------------------------------------------------------------

(define_expand "vec_perm<mode>"
  [(match_operand:V 0 "register_operand")
   (match_operand:V 1 "register_operand")
   (match_operand:V 2 "register_operand")
   (match_operand:<VMAP> 3 "vector_perm_operand")]
  "TARGET_VECTOR && GET_MODE_NUNITS (<MODE>mode).is_constant ()"
{
  riscv_vector_expand_vec_perm (operands[0], operands[1],
			   operands[2], operands[3]);
  DONE;
})

;; =========================================================================
;; == Mixed arithmetic
;; =========================================================================

;; -------------------------------------------------------------------------
;; ---- [INT,FP] General binary mixed arithmetic
;; -------------------------------------------------------------------------
;; Includes:
;; - vwadd.vv
;; - vwaddu.vv
;; - vfwadd.vv
;; - vwsub.vv
;; - vwsubu.vv
;; - vfwsub.vv
;; - vwadd.vx
;; - vwaddu.vx
;; - vfwadd.vf
;; - vwsub.vx
;; - vwsubu.vx
;; - vfwsub.vf
;; - vwmul.vv
;; - vwmulu.vv
;; - vwmulsu.vv
;; - vfwmul.vv
;; - vwadd.wv
;; - vwaddu.wv
;; - vfwadd.wv
;; - vwsub.wv
;; - vwsubu.wv
;; - vfwsub.wv
;; - vwadd.wx
;; - vwaddu.wx
;; - vfwadd.wf
;; - vwsub.wx
;; - vwsubu.wx
;; - vfwsub.wf
;; - vwmul.vx
;; - vwmulu.vx
;; - vwmulsu.vx
;; - vfwmul.vf
;; -------------------------------------------------------------------------

(define_expand "vec_convert_v<su><plus_minus_mult:optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus_mult:<VW>
      (any_extend:<VW>
        (match_operand:VWI 1 "register_operand"))
      (any_extend:<VW>
        (match_operand:VWI 2 "register_operand"))))]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VW>mode)"
{
  emit_insn (gen_vw<plus_minus_mult:optab><u><vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_v<su><plus_minus_mult:optab>v<vqn><mode>"
  [(set (match_operand:VQEXTI 0 "register_operand")
    (plus_minus_mult:VQEXTI
      (any_extend:VQEXTI
        (match_operand:<VQN> 1 "register_operand"))
      (any_extend:VQEXTI
        (match_operand:<VQN> 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1,
      wide2, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_v<su><plus_minus_mult:optab>v<von><mode>"
  [(set (match_operand:VOEXTI 0 "register_operand")
    (plus_minus_mult:VOEXTI
      (any_extend:VOEXTI
        (match_operand:<VON> 1 "register_operand"))
      (any_extend:VOEXTI
        (match_operand:<VON> 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));   
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_<su><plus_minus_mult:optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus_mult:<VW>
      (any_extend:<VW>
        (match_operand:VWI 1 "register_operand"))
      (any_extend:<VW>
        (vec_duplicate:VWI
          (match_operand:<VSUB> 2 "register_operand")))))]
  "TARGET_VECTOR &&
   riscv_vector_check_supported_mode_p (<VW>mode)"
{
  emit_insn (gen_vw<plus_minus_mult:optab><u><vw>_vx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_<su><plus_minus_mult:optab>v<vqn><mode>"
  [(set (match_operand:VQEXTI 0 "register_operand")
    (plus_minus_mult:VQEXTI
      (any_extend:VQEXTI
        (match_operand:<VQN> 1 "register_operand"))
      (any_extend:VQEXTI
        (vec_duplicate:<VQN>
          (match_operand:<VQNSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_<any_extend:optab><vqnsub><vnsub>2 (wide2, operands[2]));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2,
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_<su><plus_minus_mult:optab>v<von><mode>"
  [(set (match_operand:VOEXTI 0 "register_operand")
    (plus_minus_mult:VOEXTI
      (any_extend:VOEXTI
        (match_operand:<VON> 1 "register_operand"))
      (any_extend:VOEXTI
        (vec_duplicate:<VON>
          (match_operand:<VONSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_<any_extend:optab><vonsub><vnsub>2 (wide2, operands[2]));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2,
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsumulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:VWI 2 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmulsu<vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsumulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQN> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vsext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_vzext<vn>_vf2 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsumulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VON> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vsext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_vzext<vn>_vf4 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ())); 
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1,
      wide2, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sumulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmulsu<vw>_vx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sumulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQNSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vsext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_zero_extend<vqnsub><vnsub>2 (wide2, operands[2]));
  emit_insn (gen_vwmulsu<mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sumulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VONSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vsext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2, gen_rtx_ZERO_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vwmulsu<mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_usmulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx reg = gen_reg_rtx (<MODE>mode);
  emit_insn (gen_vmv<mode>_v_x (reg, const0_rtx, operands[2],
                                gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<vw>_vv (operands[0],
      const0_rtx, const0_rtx, reg,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_usmulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQNSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  rtx wide2sub = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vzext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2sub, gen_rtx_SIGN_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vmv<vn>_v_x (wide2, const0_rtx, wide2sub,
                              gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide2,
      wide1, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_usmulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VONSUB> 2 "register_operand")]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  rtx wide2sub = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vzext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2sub, gen_rtx_SIGN_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vmv<vn>_v_x (wide2, const0_rtx, wide2sub,
                              gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide2,
      wide1, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vs<optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus_mult:<VW>
      (float_extend:<VW>
        (match_operand:VWF 1 "register_operand"))
      (float_extend:<VW>
        (match_operand:VWF 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfw<plus_minus_mult:optab><vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vs<optab>v<vqn><mode>"
  [(set (match_operand:VQEXTF 0 "register_operand")
    (plus_minus_mult:VQEXTF
      (float_extend:VQEXTF
        (match_operand:<VQN> 1 "register_operand"))
      (float_extend:VQEXTF
        (match_operand:<VQN> 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide1, const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide2, const0_rtx, const0_rtx,
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfw<optab><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_s<optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus_mult:<VW>
      (float_extend:<VW>
        (match_operand:VWF 1 "register_operand"))
      (float_extend:<VW>
        (vec_duplicate:VWF
          (match_operand:<VSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfw<optab><vw>_vf (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_s<optab>v<vqn><mode>"
  [(set (match_operand:VQEXTF 0 "register_operand")
    (plus_minus_mult:VQEXTF
      (float_extend:VQEXTF
        (match_operand:<VQN> 1 "register_operand"))
      (float_extend:VQEXTF
        (vec_duplicate:<VQN>
          (match_operand:<VQNSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide1, const0_rtx, const0_rtx,
      operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2, gen_rtx_FLOAT_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vfw<optab><mode>_vf (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_v<su><plus_minus:optab>w<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus:<VW>
      (match_operand:<VW> 1 "register_operand")
      (any_extend:<VW>
        (match_operand:VWI 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vw<plus_minus:optab><u><vw>_wv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vs<optab>w<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus:<VW>
      (match_operand:<VW> 1 "register_operand")
      (float_extend:<VW>
        (match_operand:VWF 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfw<optab><vw>_wv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vs<optab>w<vqn><mode>"
  [(set (match_operand:VQEXTF 0 "register_operand")
    (plus_minus:VQEXTF
      (match_operand:VQEXTF 1 "register_operand")
      (float_extend:VQEXTF
        (match_operand:<VQN> 2 "register_operand"))))]
  "TARGET_VECTOR"
{
  rtx wide = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide, const0_rtx, const0_rtx,
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfw<optab><mode>_wv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      wide, gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_<su><plus_minus:optab>w<vsub><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus:<VW>
      (match_operand:<VW> 1 "register_operand")
      (any_extend:<VW>
        (vec_duplicate:VWI
          (match_operand:<VSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vw<plus_minus:optab><u><vw>_wx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_s<optab>w<vsub><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus_minus:<VW>
      (match_operand:<VW> 1 "register_operand")
      (float_extend:<VW>
        (vec_duplicate:VWF
          (match_operand:<VSUB> 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfw<optab><vw>_wf (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_v<su><plus_minus_mult:optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus_mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 1 "register_operand"))
        (any_extend:<VW>
          (match_operand:VWI 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vw<plus_minus_mult:optab><u><vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_v<su><plus_minus_mult:optab>v<vqn><mode>"
  [(set (match_operand:VQEXTI 0 "register_operand")
    (unspec:VQEXTI
      [(plus_minus_mult:VQEXTI
        (any_extend:VQEXTI
          (match_operand:<VQN> 1 "register_operand"))
        (any_extend:VQEXTI
          (match_operand:<VQN> 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_v<su><plus_minus_mult:optab>v<von><mode>"
  [(set (match_operand:VOEXTI 0 "register_operand")
    (unspec:VOEXTI
      [(plus_minus_mult:VOEXTI
        (any_extend:VOEXTI
          (match_operand:<VON> 1 "register_operand"))
        (any_extend:VOEXTI
          (match_operand:<VON> 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_<su><plus_minus_mult:optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus_mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 1 "register_operand"))
        (any_extend:<VW>
          (vec_duplicate:VWI
            (match_operand:<VSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vw<plus_minus_mult:optab><u><vw>_vx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_<su><plus_minus_mult:optab>v<vqn><mode>"
  [(set (match_operand:VQEXTI 0 "register_operand")
    (unspec:VQEXTI
      [(plus_minus_mult:VQEXTI
        (any_extend:VQEXTI
          (match_operand:<VQN> 1 "register_operand"))
        (any_extend:VQEXTI
          (vec_duplicate:<VQN>
            (match_operand:<VQNSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_v<sz>ext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_<any_extend:optab><vqnsub><vnsub>2 (wide2, operands[2]));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2,
      operands[3], riscv_vector_gen_policy ())); 
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_<su><plus_minus_mult:optab>v<von><mode>"
  [(set (match_operand:VOEXTI 0 "register_operand")
    (unspec:VOEXTI
      [(plus_minus_mult:VOEXTI
        (any_extend:VOEXTI
          (match_operand:<VON> 1 "register_operand"))
        (any_extend:VOEXTI
          (vec_duplicate:<VON>
            (match_operand:<VONSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_v<sz>ext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_<any_extend:optab><vqnsub><vnsub>2 (wide2, operands[2]));
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2,
      operands[3], riscv_vector_gen_policy ())); 
  emit_insn (gen_vw<plus_minus_mult:optab><u><mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsumulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:VWI 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vwmulsu<vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsumulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQN> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vsext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vzext<vn>_vf2 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1,
      wide2, operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsumulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VON> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vsext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vzext<vn>_vf4 (wide2, 
        const0_rtx, const0_rtx, operands[2],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1,
      wide2, operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sumulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vwmulsu<vw>_vx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sumulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQNSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vsext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_zero_extend<vqnsub><vnsub>2 (wide2, operands[2]));
  
  emit_insn (gen_vwmulsu<mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1,
      wide2, operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sumulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VONSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vsext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2, gen_rtx_ZERO_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vwmulsu<mode>_vx (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_usmulv<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  rtx reg = gen_reg_rtx (<MODE>mode);
  emit_insn (gen_vmv<mode>_v_x (reg, const0_rtx, operands[2],
                                operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<vw>_vv (operands[0],
      const0_rtx, const0_rtx, reg,
      operands[1], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_usmulv<vqn><mode>"
  [(match_operand:VQEXTI 0 "register_operand")
   (match_operand:<VQN> 1 "register_operand")
   (match_operand:<VQNSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  rtx wide2sub = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vzext<vn>_vf2 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2sub, gen_rtx_SIGN_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vmv<vn>_v_x (wide2, const0_rtx, wide2sub,
                              operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide2,
      wide1, operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_usmulv<von><mode>"
  [(match_operand:VOEXTI 0 "register_operand")
   (match_operand:<VON> 1 "register_operand")
   (match_operand:<VONSUB> 2 "register_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
    
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  rtx wide2sub = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vzext<vn>_vf4 (wide1, 
        const0_rtx, const0_rtx, operands[1],
        operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2sub, gen_rtx_SIGN_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vmv<vn>_v_x (wide2, const0_rtx, wide2sub,
                              operands[3], riscv_vector_gen_policy ()));
  emit_insn (gen_vwmulsu<mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide2,
      wide1, operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vs<optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus_mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (match_operand:VWF 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vfw<plus_minus_mult:optab><vw>_vv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vs<optab>v<vqn><mode>"
  [(set (match_operand:VQEXTF 0 "register_operand")
    (unspec:VQEXTF
      [(plus_minus_mult:VQEXTF
        (float_extend:VQEXTF
          (match_operand:<VQN> 1 "register_operand"))
        (float_extend:VQEXTF
          (match_operand:<VQN> 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VN>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide1, const0_rtx, const0_rtx,
      operands[1], operands[3],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide2, const0_rtx, const0_rtx,
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  emit_insn (gen_vfw<optab><mode>_vv (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_s<optab>v<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus_mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (vec_duplicate:VWF
            (match_operand:<VSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vfw<plus_minus_mult:optab><vw>_vf (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_s<optab>v<vqn><mode>"
  [(set (match_operand:VQEXTF 0 "register_operand")
    (unspec:VQEXTF
      [(plus_minus_mult:VQEXTF
        (float_extend:VQEXTF
          (match_operand:<VQN> 1 "register_operand"))
        (float_extend:VQEXTF
          (vec_duplicate:<VQN>
            (match_operand:<VQNSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  rtx wide1 = gen_reg_rtx (<VN>mode);
  rtx wide2 = gen_reg_rtx (<VNSUB>mode);
  emit_insn (gen_vfwcvt_f_f_v (<VQN>mode, wide1, const0_rtx, const0_rtx,
      operands[1], operands[3],
      riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (wide2, gen_rtx_FLOAT_EXTEND (<VNSUB>mode, operands[2])));
  emit_insn (gen_vfw<optab><mode>_vf (operands[0],
      const0_rtx, const0_rtx, wide1, wide2, 
      operands[3], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_v<su><plus_minus:optab>w<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus:<VW>
        (match_operand:<VW> 1 "register_operand")
        (any_extend:<VW>
          (match_operand:VWI 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vw<plus_minus:optab><u><vw>_wv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vs<plus_minus:optab>w<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus:<VW>
        (match_operand:<VW> 1 "register_operand")
        (float_extend:<VW>
          (match_operand:VWF 2 "register_operand")))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vfw<plus_minus:optab><vw>_wv (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_<su><plus_minus:optab>w<vsub><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus:<VW>
        (match_operand:<VW> 1 "register_operand")
        (any_extend:<VW>
          (vec_duplicate:VWI
            (match_operand:<VSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vw<plus_minus:optab><u><vw>_wx (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_s<plus_minus:optab>w<vsub><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus_minus:<VW>
        (match_operand:<VW> 1 "register_operand")
        (float_extend:<VW>
          (vec_duplicate:VWF
            (match_operand:<VSUB> 2 "register_operand"))))
       (match_operand 3 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[3]) && GET_MODE (operands[3]) != Pmode)
    operands[3] = gen_lowpart (Pmode, operands[3]);
  emit_insn (gen_vfw<plus_minus:optab><vw>_wf (operands[0],
      const0_rtx, const0_rtx, operands[1],
      operands[2], operands[3],
      riscv_vector_gen_policy ()));
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] General ternary mixed arithmetic
;; -------------------------------------------------------------------------
;; Includes:
;; - vwmacc.vv
;; - vwmaccu.vv
;; - vwmaccus.vv
;; - vwmacc.vx
;; - vwmaccu.vx
;; - vwmaccus.vx
;; - vfwmacc.vv
;; - vfwmacc.vf
;; - vfwnmacc.vv
;; - vfwnmacc.vf
;; - vfwmsac.vv
;; - vfwmsac.vf
;; - vfwnmsac.vv
;; - vfwnmsac.vf
;; -------------------------------------------------------------------------

(define_expand "vec_convert_v<su>fmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus:<VW>
      (mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 1 "register_operand"))
        (any_extend:<VW>
          (match_operand:VWI 2 "register_operand")))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmacc<u><vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsfmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus:<VW>
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (match_operand:VWF 2 "register_operand")))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwmacc<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsufmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:VWI 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmaccsu<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_v<su>fmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus:<VW>
        (mult:<VW>
          (any_extend:<VW>
            (match_operand:VWI 1 "register_operand"))
          (any_extend:<VW>
            (match_operand:VWI 2 "register_operand")))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vwmacc<u><vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsfmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (match_operand:VWF 2 "register_operand")))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwmacc<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsufmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:VWI 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vwmaccsu<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_<su>fmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus:<VW>
      (mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 1 "register_operand"))
        (any_extend:<VW>
          (vec_duplicate:VWI
            (match_operand:<VSUB> 2 "register_operand"))))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmacc<u><vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sfmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (plus:<VW>
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (vec_duplicate:VWF
            (match_operand:<VSUB> 2 "register_operand"))))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwmacc<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_usfmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmaccsu<vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sufmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")]
  "TARGET_VECTOR"
{
  emit_insn (gen_vwmaccus<vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_<su>fmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus:<VW>
        (mult:<VW>
          (any_extend:<VW>
            (match_operand:VWI 1 "register_operand"))
          (any_extend:<VW>
            (vec_duplicate:VWI
              (match_operand:<VSUB> 2 "register_operand"))))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vwmacc<u><vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sfmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(plus:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (vec_duplicate:VWF
              (match_operand:<VSUB> 2 "register_operand"))))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwmacc<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_usfmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vwmaccsu<vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sufmav<mode><vw>"
  [(match_operand:<VW> 0 "register_operand")
   (match_operand:VWI 1 "register_operand")
   (match_operand:<VSUB> 2 "register_operand")
   (match_operand:<VW> 3 "register_operand")
   (match_operand 4 "p_reg_or_const_csr_operand")]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vwmaccus<vw>_vx (
             operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsfmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (match_operand:VWF 2 "register_operand")))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwmsac<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsfmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (match_operand:VWF 2 "register_operand")))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwmsac<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sfmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (vec_duplicate:VWF
            (match_operand:<VSUB> 2 "register_operand"))))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwmsac<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sfmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (vec_duplicate:VWF
              (match_operand:<VSUB> 2 "register_operand"))))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwmsac<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsfnmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (match_operand:<VW> 3 "register_operand")
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (match_operand:VWF 2 "register_operand")))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwnmsac<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsfnmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (match_operand:<VW> 3 "register_operand")
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (match_operand:VWF 2 "register_operand"))))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwnmsac<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sfnmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (match_operand:<VW> 3 "register_operand")
      (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 1 "register_operand"))
        (float_extend:<VW>
          (vec_duplicate:VWF
            (match_operand:<VSUB> 2 "register_operand"))))))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwnmsac<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sfnmav<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (match_operand:<VW> 3 "register_operand")
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (vec_duplicate:VWF
              (match_operand:<VSUB> 2 "register_operand")))))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwnmsac<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_vsfnmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (neg:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (match_operand:VWF 2 "register_operand"))))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwnmacc<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_vsfnmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (neg:<VW>
          (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 1 "register_operand"))
            (float_extend:<VW>
              (match_operand:VWF 2 "register_operand"))))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwnmacc<vw>_vv (operands[0], const0_rtx, operands[3], operands[1], operands[2],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "vec_convert_sfnmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (minus:<VW>
      (neg:<VW>
        (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 1 "register_operand"))
          (float_extend:<VW>
            (vec_duplicate:VWF
              (match_operand:<VSUB> 2 "register_operand")))))
      (match_operand:<VW> 3 "register_operand")))]
  "TARGET_VECTOR"
{
  emit_insn (gen_vfwnmacc<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  DONE;
})

(define_expand "len_vec_convert_sfnmsv<mode><vw>"
  [(set (match_operand:<VW> 0 "register_operand")
    (unspec:<VW>
      [(minus:<VW>
        (neg:<VW>
          (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 1 "register_operand"))
            (float_extend:<VW>
              (vec_duplicate:VWF
                (match_operand:<VSUB> 2 "register_operand")))))
        (match_operand:<VW> 3 "register_operand"))
       (match_operand 4 "p_reg_or_const_csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  if (!CONST_SCALAR_INT_P (operands[4]) && GET_MODE (operands[4]) != Pmode)
    operands[4] = gen_lowpart (Pmode, operands[4]);
  emit_insn (gen_vfwnmacc<vw>_vf (operands[0], const0_rtx, operands[3], operands[2], operands[1],
             operands[4], riscv_vector_gen_policy ()));
  DONE;
})

;; =========================================================================
;; == Vector-Scalar operations
;; =========================================================================

(define_expand "<optab>_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (int_binary:VI
      (match_operand:VI 1 "register_operand")
      (vec_duplicate:VI
        (match_operand:<VSUB> 2 "reg_or_const_int_operand"))))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_v<optab><mode>_vx (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "add_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (plus:VI
      (match_operand:VI 1 "register_operand")
      (vec_duplicate:VI
        (match_operand:<VSUB> 2 "reg_or_const_int_operand"))))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_v_vx (UNSPEC_VADD, <MODE>mode,
          operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "sub_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (minus:VI
      (match_operand:VI 1 "register_operand")
      (vec_duplicate:VI
        (match_operand:<VSUB> 2 "reg_or_const_int_operand"))))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_v_vx (UNSPEC_VSUB, <MODE>mode,
          operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "sub_sv<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (minus:VI
      (vec_duplicate:VI
        (match_operand:<VSUB> 2 "reg_or_const_int_operand"))
      (match_operand:VI 1 "register_operand")))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_v_vx (UNSPEC_VRSUB, <MODE>mode,
          operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2],
          gen_rtx_REG (Pmode, X0_REGNUM),
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "<optab>_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (fp_binary:VF
      (match_operand:VF 1 "register_operand")
      (vec_duplicate:VF
        (match_operand:<VSUB> 2 "register_operand"))))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vf<optab><mode>_vf (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "<optab>_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (minus_div:VF
      (match_operand:VF 1 "register_operand")
      (vec_duplicate:VF
        (match_operand:<VSUB> 2 "register_operand"))))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vf<optab><mode>_vf (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "<optab>_sv<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (minus_div:VF
      (vec_duplicate:VF
        (match_operand:<VSUB> 2 "register_operand"))
      (match_operand:VF 1 "register_operand")))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vfr<optab><mode>_vf (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "fma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand")
            (vec_duplicate:VI
              (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
          (match_operand:VI 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!TARGET_64BIT && <VSUB>mode == DImode && !imm32_p (operands[2]))
      {
        rtx reg = gen_reg_rtx (<MODE>mode);
        emit_insn (gen_v_v_x (UNSPEC_VMV, <MODE>mode, reg, const0_rtx, operands[2],
                   gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        emit_insn (gen_fma<mode>4 (operands[0], operands[1], reg, operands[3]));
        DONE;
      }
    operands[2] = force_reg (<VSUB>mode, operands[2]);
    if (!TARGET_64BIT && <VSUB>mode == DImode)
      operands[2] = gen_rtx_SIGN_EXTEND (<VSUB>mode, gen_lowpart (Pmode, operands[2]));
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand"))
          (vec_duplicate:VI
            (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
        (match_operand:VI 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!TARGET_64BIT && <VSUB>mode == DImode && !imm32_p (operands[2]))
      {
        rtx reg = gen_reg_rtx (<MODE>mode);
        emit_insn (gen_v_v_x (UNSPEC_VMV, <MODE>mode, reg, const0_rtx, operands[2],
                   gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        emit_insn (gen_fnma<mode>4 (operands[0], operands[1], reg, operands[3]));
        DONE;
      }
    operands[2] = force_reg (<VSUB>mode, operands[2]);
    if (!TARGET_64BIT && <VSUB>mode == DImode)
      operands[2] = gen_rtx_SIGN_EXTEND (<VSUB>mode, gen_lowpart (Pmode, operands[2]));
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand")
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand")))
          (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand")
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand")))
        (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand"))
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand")))
          (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "fnms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand"))
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand")))
        (match_operand:VF 3 "register_operand"))
        (match_dup 4)
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[4] = gen_rtx_REG (Pmode, X0_REGNUM);
    operands[5] = riscv_vector_gen_policy ();
  })

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Len_*
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define_expand "len_<optab>_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(int_binary:VI
        (match_operand:VI 1 "register_operand")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_v<optab><mode>_vx (operands[0],
        const0_rtx, const0_rtx, operands[1],
        operands[2], operands[3],
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_add_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
        (match_operand:VI 1 "register_operand")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_v_vx (UNSPEC_VADD, <MODE>mode,
          operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2], operands[3],
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_sub_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(minus:VI
        (match_operand:VI 1 "register_operand")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_v_vx (UNSPEC_VSUB, <MODE>mode,
          operands[0], const0_rtx, const0_rtx,
          operands[1], operands[2], operands[3],
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_sub_sv<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(minus:VI
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_const_int_operand"))
        (match_operand:VI 1 "register_operand"))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_v_vx (UNSPEC_VRSUB, <MODE>mode,
          operands[0], const0_rtx, const0_rtx, operands[1],
          operands[2], operands[3],
          riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_<optab>_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(fp_binary:VF
        (match_operand:VF 1 "register_operand")
        (vec_duplicate:VF
          (match_operand:<VSUB> 2 "register_operand")))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_vf<optab><mode>_vf (operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2], operands[3],
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_<optab>_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus_div:VF
        (match_operand:VF 1 "register_operand")
        (vec_duplicate:VF
          (match_operand:<VSUB> 2 "register_operand")))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_vf<optab><mode>_vf (operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2], operands[3],
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_<optab>_sv<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus_div:VF
        (vec_duplicate:VF
          (match_operand:<VSUB> 2 "register_operand"))
        (match_operand:VF 1 "register_operand"))
       (match_operand 3 "csr_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!CONST_SCALAR_INT_P (operands[3]))
      operands[3] = gen_lowpart (Pmode, operands[3]);
    emit_insn (gen_vfr<optab><mode>_vf (operands[0], const0_rtx, const0_rtx,
        operands[1], operands[2], operands[3],
        riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "len_fma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand")
            (vec_duplicate:VI
              (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
          (match_operand:VI 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!TARGET_64BIT && <VSUB>mode == DImode && !imm32_p (operands[2]))
      {
        rtx reg = gen_reg_rtx (<MODE>mode);
        emit_insn (gen_v_v_x (UNSPEC_VMV, <MODE>mode, reg, const0_rtx, operands[2],
                   gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        emit_insn (gen_len_fma<mode> (operands[0], operands[1], reg, operands[3], operands[4]));
        DONE;
      }
    operands[2] = force_reg (<VSUB>mode, operands[2]);
    if (!TARGET_64BIT && <VSUB>mode == DImode)
      operands[2] = gen_rtx_SIGN_EXTEND (<VSUB>mode, gen_lowpart (Pmode, operands[2]));
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand"))
          (vec_duplicate:VI
            (match_operand:<VSUB> 2 "reg_or_const_int_operand")))
        (match_operand:VI 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!TARGET_64BIT && <VSUB>mode == DImode && !imm32_p (operands[2]))
      {
        rtx reg = gen_reg_rtx (<MODE>mode);
        emit_insn (gen_v_v_x (UNSPEC_VMV, <MODE>mode, reg, const0_rtx, operands[2],
                   gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        emit_insn (gen_len_fnma<mode> (operands[0], operands[1], reg, operands[3], operands[4]));
        DONE;
      }
    operands[2] = force_reg (<VSUB>mode, operands[2]);
    if (!TARGET_64BIT && <VSUB>mode == DImode)
      operands[2] = gen_rtx_SIGN_EXTEND (<VSUB>mode, gen_lowpart (Pmode, operands[2]));
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand")
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand")))
          (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand")
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand")))
        (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand"))
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand")))
          (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_expand "len_fnms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand"))
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand")))
        (match_operand:VF 3 "register_operand"))
        (match_operand 4 "p_reg_or_const_csr_operand")
        (match_dup 5)
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    operands[5] = riscv_vector_gen_policy ();
  })

(define_insn "*len_fma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VI
      [(plus:VI
          (mult:VI
            (match_operand:VI 1 "register_operand" "%0,vr,vr")
            (vec_duplicate:VI
              (match_operand:<VSUB> 2 "register_operand" "r,r,r")))
          (match_operand:VI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadd.vx\t%0,%2,%3
   vmacc.vx\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vmacc.vx\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fma_vs<mode>_rv32"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:V64BITI
      [(plus:V64BITI
          (mult:V64BITI
            (match_operand:V64BITI 1 "register_operand" "%0,vr,vr")
            (vec_duplicate:V64BITI
              (sign_extend:DI
                (match_operand:SI 2 "register_operand" "r,r,r"))))
          (match_operand:V64BITI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadd.vx\t%0,%2,%3
   vmacc.vx\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vmacc.vx\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VI
      [(plus:VI
        (mult:VI
          (neg:VI
            (match_operand:VI 1 "register_operand" "%0,vr,vr"))
          (vec_duplicate:VI
            (match_operand:<VSUB> 2 "register_operand" "r,r,r")))
        (match_operand:VI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnmsub.vx\t%0,%2,%3
   vnmsac.vx\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vnmsac.vx\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnma_vs<mode>_rv32"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,vr,?&vr")
    (unspec:V64BITI
      [(plus:V64BITI
        (mult:V64BITI
          (neg:V64BITI
            (match_operand:V64BITI 1 "register_operand" "%0,vr,vr"))
          (vec_duplicate:V64BITI
            (sign_extend:DI
              (match_operand:SI 2 "register_operand" "r,r,r"))))
        (match_operand:V64BITI 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnmsub.vx\t%0,%2,%3
   vnmsac.vx\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vnmsac.vx\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (match_operand:VF 1 "register_operand" "%0,vr,vr")
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand" "f,f,f")))
          (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmadd.vf\t%0,%2,%3
   vfmacc.vf\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfmacc.vf\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (match_operand:VF 1 "register_operand" "%0,vr,vr")
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand" "f,f,f")))
        (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfmsub.vf\t%0,%2,%3
   vfmsac.vf\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfmsac.vf\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(plus:VF
          (mult:VF
            (neg:VF
              (match_operand:VF 1 "register_operand" "%0,vr,vr"))
            (vec_duplicate:VF
              (match_operand:<VSUB> 2 "register_operand" "f,f,f")))
          (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmsub.vf\t%0,%2,%3
   vfnmsac.vf\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfnmsac.vf\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*len_fnms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr,?&vr")
    (unspec:VF
      [(minus:VF
        (mult:VF
          (neg:VF
            (match_operand:VF 1 "register_operand" "%0,vr,vr"))
          (vec_duplicate:VF
            (match_operand:<VSUB> 2 "register_operand" "f,f,f")))
        (match_operand:VF 3 "register_operand" "vr,0,vr"))
        (match_operand 4 "p_reg_or_const_csr_operand" "rK,rK,rK")
        (match_operand 5 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfnmadd.vf\t%0,%2,%3
   vfnmacc.vf\t%0,%2,%1
   vmv<lmul>r.v\t%0,%3\;vfnmacc.vf\t%0,%2,%1"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])