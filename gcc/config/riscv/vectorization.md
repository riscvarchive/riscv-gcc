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

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Initialize from individual elements
;; -------------------------------------------------------------------------
;; Includes:
;; - vslide1up.vx
;; - vfslide1up.vf
;; -------------------------------------------------------------------------

(define_expand "vec_shl_insert_<mode>"
  [(set (match_operand:VI 0 "register_operand")
	(unspec:VI
	  [(match_operand:VI 1 "register_operand")
	   (match_operand:<VSUB> 2 "reg_or_const_int_operand")]
	  UNSPEC_SLIDE1UP))]
  "TARGET_VECTOR"
  {
    emit_insn (gen_vslide1_vx (UNSPEC_SLIDE1UP, <MODE>mode,
        operands[0], const0_rtx, const0_rtx, operands[1], operands[2],
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
    DONE;
  })

(define_expand "vec_shl_insert_<mode>"
  [(set (match_operand:VF 0 "register_operand")
	(unspec:VF
	  [(match_operand:VF 1 "register_operand")
	   (match_operand:<VSUB> 2 "reg_or_const_int_operand")]
	  UNSPEC_SLIDE1UP))]
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
  [(set (match_operand:VB 0 "register_operand")
    (vec_duplicate:VB
      (match_operand 1 "register_operand")))]
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

(define_expand "vec_set<mode>"
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
  [(set (match_operand:VI 0 "register_operand")
	(vec_series:VI
	  (match_operand:<VSUB> 1 "nonmemory_operand")
	  (match_operand:<VSUB> 2 "nonmemory_operand")))]
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
  [(set (match_operand:<VSUB> 0 "register_operand")
	(vec_select:<VSUB>
	  (match_operand:VI 1 "register_operand")
	  (parallel [(match_operand 2 "reg_or_uimm5_operand")])))]
  "TARGET_VECTOR"
{
  if (!CONSTANT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
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
  [(set (match_operand:<VSUB> 0 "register_operand")
	(vec_select:<VSUB>
	  (match_operand:VF 1 "register_operand")
	  (parallel [(match_operand:SI 2 "reg_or_uimm5_operand")])))]
  "TARGET_VECTOR"
{
  if (!CONSTANT_P (operands[2]) && GET_MODE (operands[2]) != Pmode)
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
  "TARGET_VECTOR && can_create_pseudo_p ()"
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
  "TARGET_VECTOR && can_create_pseudo_p ()"
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_GATHER_LOAD);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
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
  riscv_vector_expand_gather_scatter (operands, ENUM_SCATTER_STORE);
  DONE;
})
