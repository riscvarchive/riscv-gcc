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

;; This file describes the RISC-V instructions from the standard 'V' Vector
;; extension, version 0.10.
;; This version is still experimental as the 'V' extension hasn't been
;; ratified yet.
;;
;; This file include :
;;
;; - Intrinsic (Be consistent with https://github.com/riscv/rvv-intrinsic-doc/blob/master/rvv-intrinsic-api.md)
;; - Auto-vectorization (vectorization.md)

;; -------------------------------------------------------------------------------
;; ---- CSR Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - csr read vl instructions
;; -------------------------------------------------------------------------------

;; vl read instruction
(define_insn "@readvl_<X:mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
    (unspec:X
      [(match_operand 1 "vector_any_register_operand" "vr")] UNSPEC_READVL))]
  "TARGET_VECTOR"
  "csrr\t%0,vl"
  [(set_attr "type" "csr")
   (set_attr "mode" "<X:MODE>")])

;; -------------------------------------------------------------------------
;; ---- Moves Operations
;; -------------------------------------------------------------------------
;; Includes:
;; - Full vector load/store/move
;; - Partial vector load/store/move
;; - All vector misalign move
;; - Mask clr/set/load/store/move
;; - Tuple vector load/store/move
;; -------------------------------------------------------------------------

;; Move Pattern for all vector modes.
(define_expand "mov<mode>"
  [(set (match_operand:VFULL 0 "reg_or_mem_operand")
        (match_operand:VFULL 1 "vector_move_operand"))]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);

  rtx x, base, step;

  if (const_vec_duplicate_p (operands[1], &x))
    {
      if (FLOAT_MODE_P (<MODE>mode))
        emit_insn (gen_vec_duplicate<mode> (operands[0], force_reg (<VSUB>mode, x)));
      else
        emit_insn (gen_vec_duplicate<mode> (operands[0], x));
      DONE;
    }

  if (GET_CODE (operands[1]) == CONST_VECTOR
    && const_vec_series_p (operands[1], &base, &step))
    {
      riscv_vector_expand_series_const_vector (operands[0], operands[1]);
      DONE;
    }

  if (GET_CODE (operands[1]) == CONST_VECTOR)
    {
      if (GET_MODE_SIZE (<MODE>mode).is_constant ())
        {
          operands[1] = force_const_mem (GET_MODE (operands[1]), operands[1]);
          rtx base = gen_reg_rtx (Pmode);
          riscv_emit_move (base, XEXP (operands[1], 0));
          operands[1] = replace_equiv_address (operands[1], base, false);
          riscv_emit_move (operands[0], operands[1]);
          DONE;
        }

      if (CONST_VECTOR_DUPLICATE_P (operands[1]))
        {
          unsigned int n_elts = CONST_VECTOR_NPATTERNS (operands[1]);
          emit_insn (gen_vid_v (<MODE>mode,
              operands[0], const0_rtx, const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          emit_insn (gen_v_vx (UNSPEC_VAND, <MODE>mode, operands[0], const0_rtx, const0_rtx,
              operands[0], GEN_INT (n_elts - 1), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          emit_insn (gen_vec_duplicate (<MODE>mode, operands[0], CONST_VECTOR_ELT (operands[1], 0)));

          for (unsigned int i = 1; i < n_elts; i++)
            {
              rtx mask = gen_reg_rtx (<VM>mode);
              emit_insn (gen_vms_vx (EQ, <MODE>mode, mask, const0_rtx, const0_rtx,
                operands[0], GEN_INT (i), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

              if (FLOAT_MODE_P (<MODE>mode))
                emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
                    mask, const0_rtx, operands[0], force_reg (<VSUB>mode, CONST_VECTOR_ELT (operands[1], 1)),
                    gen_rtx_REG (Pmode, X0_REGNUM),
                    riscv_vector_gen_policy ()));
              else
                emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
                    mask, operands[0], CONST_VECTOR_ELT (operands[1], 1),
                    gen_rtx_REG (Pmode, X0_REGNUM),
                    riscv_vector_gen_policy ()));
            }
          DONE;
        }
    }
})

;; Full vector load/store/move.
(define_insn "*mov<mode>"
  [(set (match_operand:VFULL 0 "reg_or_mem_operand" "=vr,m,vr")
        (match_operand:VFULL 1 "reg_or_mem_operand" "m,vr,vr"))]
  "TARGET_VECTOR"
  "@
   vl<lmul>re<sew>.v\t%0,%1
   vs<lmul>r.v\t%1,%0
   vmv<lmul>r.v\t%0,%1"
  [(set_attr "type" "vload,vstore,vcopy")
   (set_attr "mode" "<MODE>")])

(define_expand "mov<mode>"
  [(parallel [(set (match_operand:VPARTIAL 0 "reg_or_mem_operand")
                   (match_operand:VPARTIAL 1 "vector_move_operand"))
              (clobber (scratch:SI))])]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);

  rtx x, base, step;

  if (const_vec_duplicate_p (operands[1], &x))
    {
      if (FLOAT_MODE_P (<MODE>mode))
        emit_insn (gen_vec_duplicate<mode> (operands[0], force_reg (<VSUB>mode, x)));
      else
        emit_insn (gen_vec_duplicate<mode> (operands[0], x));
      DONE;
    }

  if (GET_CODE (operands[1]) == CONST_VECTOR
    && const_vec_series_p (operands[1], &base, &step))
    {
      riscv_vector_expand_series_const_vector (operands[0], operands[1]);
      DONE;
    }

  if (GET_CODE (operands[1]) == CONST_VECTOR)
    {
      if (GET_MODE_SIZE (<MODE>mode).is_constant ())
        {
          operands[1] = force_const_mem (GET_MODE (operands[1]), operands[1]);
          rtx base = gen_reg_rtx (Pmode);
          riscv_emit_move (base, XEXP (operands[1], 0));
          operands[1] = replace_equiv_address (operands[1], base, false);
          riscv_emit_move (operands[0], operands[1]);
          DONE;
        }

      if (CONST_VECTOR_DUPLICATE_P (operands[1]))
        {
          unsigned int n_elts = CONST_VECTOR_NPATTERNS (operands[1]);
          emit_insn (gen_vid_v (<MODE>mode,
              operands[0], const0_rtx, const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          emit_insn (gen_v_vx (UNSPEC_VAND, <MODE>mode, operands[0], const0_rtx, const0_rtx,
              operands[0], GEN_INT (n_elts - 1), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          emit_insn (gen_vec_duplicate (<MODE>mode, operands[0], CONST_VECTOR_ELT (operands[1], 0)));

          for (unsigned int i = 1; i < n_elts; i++)
            {
              rtx mask = gen_reg_rtx (<VM>mode);
              emit_insn (gen_vms_vx (EQ, <MODE>mode, mask, const0_rtx, const0_rtx,
                operands[0], GEN_INT (i), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));

              if (FLOAT_MODE_P (<MODE>mode))
                emit_insn (gen_vfmerge_vfm (<MODE>mode, operands[0],
                    mask, const0_rtx, operands[0], force_reg (<VSUB>mode, CONST_VECTOR_ELT (operands[1], 1)),
                    gen_rtx_REG (Pmode, X0_REGNUM),
                    riscv_vector_gen_policy ()));
              else
                emit_insn (gen_v_vxm (UNSPEC_VMERGE, <MODE>mode, operands[0],
                    mask, operands[0], CONST_VECTOR_ELT (operands[1], 1),
                    gen_rtx_REG (Pmode, X0_REGNUM),
                    riscv_vector_gen_policy ()));
            }
          DONE;
        }
    }

    if (MEM_P (operands[0]) && !lra_in_progress && !reload_completed)
      {
	emit_insn (gen_vse (<MODE>mode, const0_rtx, XEXP (operands[0], 0),
	           operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        DONE;
      }
   if (MEM_P (operands[1]) && !lra_in_progress && !reload_completed)
      {
	emit_insn (gen_vle (<MODE>mode, operands[0], const0_rtx, const0_rtx,
	           XEXP (operands[1], 0), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        DONE;
      }
})

;; Partial vector load/store/move.
(define_insn "*mov<mode>"
  [(set (match_operand:VPARTIAL 0 "reg_or_mem_operand" "=vr,m,vr")
        (match_operand:VPARTIAL 1 "reg_or_mem_operand" "m,vr,vr"))
        (clobber (match_scratch:SI 2 "=&r,&r,X"))]
  "TARGET_VECTOR"
  "@
   vle<sew>.v\t%0,%1
   vse<sew>.v\t%1,%0
   vmv1r.v\t%0,%1"
  [(set_attr "type" "vle_reload,vse_reload,vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn "@mov<mode>_internal"
  [(set (match_operand:VPARTIAL 0 "reg_or_mem_operand" "=vr,m,vr")
        (unspec:VPARTIAL
	  [(match_operand:VPARTIAL 1 "reg_or_mem_operand" "m,vr,vr")
	   (match_operand:SI 2 "register_operand" "r,r,r")] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vle<sew>.v\t%0,%1
   vse<sew>.v\t%1,%0
   vmv1r.v\t%0,%1"
  [(set_attr "type" "vle_reload,vse_reload,vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn "*mov<mode>_reg"
  [(set (match_operand:VPARTIAL 0 "register_operand" "=vr")
        (match_operand:VPARTIAL 1 "register_operand" "vr"))]
  "TARGET_VECTOR"
  "vmv1r.v\t%0,%1"
  [(set_attr "type" "vcopy")
   (set_attr "mode" "<MODE>")])

;; Move pattern for mask modes.
(define_expand "mov<mode>"
  [(parallel [(set (match_operand:VB 0 "reg_or_mem_operand")
                   (match_operand:VB 1 "vector_move_operand"))
	      (clobber (scratch:SI))])]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);

  rtx ele;
  if (const_vec_duplicate_p (operands[1], &ele))
    {
      gcc_assert (CONST_INT_P (ele));
      rtx zero = gen_rtx_REG (Pmode, X0_REGNUM);
      switch (INTVAL (ele))
  {
  case 0:
    emit_insn (gen_vmclr<mode>_m (operands[0], zero, riscv_vector_gen_policy ()));
    break;
  case 1:
    emit_insn (gen_vmset<mode>_m (operands[0], zero, riscv_vector_gen_policy ()));
    break;
  default:
    gcc_unreachable ();
  }
      DONE;
    }
  if (MEM_P (operands[0]) && !lra_in_progress && !reload_completed)
    {
      emit_insn (gen_vsm (<MODE>mode, XEXP (operands[0], 0),
	         operands[1], gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
      DONE;
    }
  if (MEM_P (operands[1]) && !lra_in_progress && !reload_completed)
    {
      emit_insn (gen_vlm (<MODE>mode, operands[0],
	         XEXP (operands[1], 0), gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
      DONE;
    }
})

;; mask load/store/move.
(define_insn "*mov<mode>"
  [(set (match_operand:VB 0 "reg_or_mem_operand" "=vr,m,vr")
        (match_operand:VB 1 "reg_or_mem_operand" "m,vr,vr"))
        (clobber (match_scratch:SI 2 "=&r,&r,X"))]
  "TARGET_VECTOR"
  "@
   vlm.v\t%0,%1
   vsm.v\t%1,%0
   vmv1r.v\t%0,%1"
  [(set_attr "type" "vle_reload,vse_reload,vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn "*mov<mode>_reg"
  [(set (match_operand:VB 0 "register_operand" "=vr")
        (match_operand:VB 1 "register_operand" "vr"))]
  "TARGET_VECTOR"
  "vmv1r.v\t%0,%1"
  [(set_attr "type" "vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn_and_split "mov<mode>"
  [(set (match_operand:VT 0 "nonimmediate_operand" "=vr,vr, m,vr")
        (match_operand:VT 1 "vector_move_operand"  " vr, m,vr,vc"))
   (clobber (match_scratch:<VSUB> 2 "=X,&r,&r,&r"))
   (clobber (match_scratch:<VSUB> 3 "=X,&r,&r,X"))
   (clobber (match_scratch:SI 4 "=X,&r,&r,X"))
   (use (reg:SI VL_REGNUM))
   (use (reg:SI VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "#"
  "&& reload_completed"
  [(const_int 0)]
{
  int i;
  if (!GET_MODE_SIZE (<VTSUB>mode).is_constant ()
    && !(REG_P (operands[0]) && REG_P (operands[1]))
    && !(REG_P (operands[0]) && CONST_VECTOR_P (operands[1])))
    {
      PUT_MODE (operands[2], Pmode);
      emit_insn (gen_rtx_SET (operands[2], gen_int_mode (
	poly_int64 (BYTES_PER_RISCV_VECTOR.coeffs[0],
	BYTES_PER_RISCV_VECTOR.coeffs[1]), Pmode)));

      if (known_lt (GET_MODE_SIZE (<VTSUB>mode), BYTES_PER_RISCV_VECTOR))
        {
	  unsigned int factor = BYTES_PER_RISCV_VECTOR.coeffs[0] / GET_MODE_SIZE (<VTSUB>mode).coeffs[0];
	  emit_insn (gen_rtx_SET (operands[2], gen_rtx_LSHIFTRT (Pmode, operands[2], GEN_INT (exact_log2 (factor)))));
	}
      if (known_gt (GET_MODE_SIZE (<VTSUB>mode), BYTES_PER_RISCV_VECTOR))
        {
	  unsigned int factor = GET_MODE_SIZE (<VTSUB>mode).coeffs[0] / BYTES_PER_RISCV_VECTOR.coeffs[0];
	  emit_insn (gen_rtx_SET (operands[2], gen_rtx_ASHIFTRT (Pmode, operands[2], GEN_INT (exact_log2 (factor)))));
	}
    }

  if (REG_P (operands[0]) && REG_P (operands[1]))
    {
      for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
        {
          poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
          rtx dst_subreg = simplify_gen_subreg (<VTSUB>mode, operands[0],
                  <MODE>mode, offset);
          rtx src_subreg = simplify_gen_subreg (<VTSUB>mode, operands[1],
                  <MODE>mode, offset);
          emit_insn (gen_rtx_SET (dst_subreg, src_subreg));
        }
    }
  else if (REG_P (operands[0]) && MEM_P (operands[1]))
    {
      if (GET_MODE_SIZE (<MODE>mode).is_constant ())
        {
          for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
            {
              poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
              rtx dst_subreg = simplify_gen_subreg (<VTSUB>mode, operands[0],
                      <MODE>mode, offset);
              emit_insn (gen_rtx_SET (operands[2],
                  gen_rtx_PLUS (Pmode, XEXP (operands[1], 0), GEN_INT (offset.to_constant ()))));
              emit_move_insn (dst_subreg, gen_rtx_MEM (<VTSUB>mode, operands[2]));
            }
        }
      else
        {
          PUT_MODE (operands[3], Pmode);
          emit_move_insn (operands[3], XEXP (operands[1], 0));

          for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
	    {
	      poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
	      rtx dst = simplify_gen_subreg (<VTSUB>mode, operands[0],
					     <MODE>mode, offset);
	      if (i != 0)
	        emit_insn (gen_add3_insn (operands[3], operands[3], operands[2]));
	      rtx src = gen_rtx_MEM (<VTSUB>mode, operands[3]);

	      if (known_lt (GET_MODE_SIZE (<VTSUB>mode), BYTES_PER_RISCV_VECTOR))
	        emit_insn (gen_mov_internal (<VTSUB>mode, dst, src, operands[4]));
	      else
	        emit_move_insn (dst, src);
	    }
        }
    }
  else if (REG_P (operands[0]) && GET_CODE (operands[1]) == CONST_VECTOR)
    {
      rtx val;
      if (!const_vec_duplicate_p (operands[1], &val))
        gcc_unreachable ();

      if (!satisfies_constraint_Ws5 (val))
        emit_move_insn (operands[2], val);

      for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
        {
          poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
          rtx dst_subreg = simplify_gen_subreg (<VTSUB>mode, operands[0],
                  <MODE>mode, offset);
          if (satisfies_constraint_Ws5 (val))
            emit_insn (gen_vec_duplicate<vtsub> (dst_subreg, val));
          else
            emit_insn (gen_vec_duplicate<vtsub> (dst_subreg, operands[2]));
        }
    }
  else if (MEM_P (operands[0]) && REG_P (operands[1]))
    {
      if (GET_MODE_SIZE (<MODE>mode).is_constant ())
        {
          for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
            {
              poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
              rtx src_subreg = simplify_gen_subreg (<VTSUB>mode, operands[1],
                      <MODE>mode, offset);
              emit_insn (gen_rtx_SET (operands[2],
                  gen_rtx_PLUS (Pmode, XEXP (operands[0], 0), GEN_INT (offset.to_constant ()))));
              emit_move_insn (gen_rtx_MEM (<VTSUB>mode, operands[2]), src_subreg);
            }
        }
      else
        {
          PUT_MODE (operands[3], Pmode);
          emit_move_insn (operands[3], XEXP (operands[0], 0));

          for (i = 0; i < riscv_classify_nf (<MODE>mode); ++i)
	    {
	      poly_int64 offset = i * GET_MODE_SIZE (<VTSUB>mode);
	      rtx src = simplify_gen_subreg (<VTSUB>mode, operands[1],
					     <MODE>mode, offset);
	      if (i != 0)
	        emit_insn (gen_add3_insn (operands[3], operands[3], operands[2]));
	      rtx dst = gen_rtx_MEM (<VTSUB>mode, operands[3]);
	      if (known_lt (GET_MODE_SIZE (<VTSUB>mode), BYTES_PER_RISCV_VECTOR))
	        emit_insn (gen_mov_internal (<VTSUB>mode, dst, src, operands[4]));
	      else
	        emit_move_insn (dst, src);
	    }
        }
    }
  else
    gcc_unreachable ();
  DONE;
}
[(set_attr "type" "vcopy,vle,vse,vmove")
 (set_attr "mode" "<MODE>")])

;; Misalign move patterns for all vector modes.
(define_expand "movmisalign<mode>"
  [(set (match_operand:V 0 "nonimmediate_operand")
        (match_operand:V 1 "general_operand"))]
  "TARGET_VECTOR"
{
  /* Equivalent to a normal move for our purpooses.  */
  emit_move_insn (operands[0], operands[1]);
  DONE;
})

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Vector Transformation
;; -------------------------------------------------------------------------
;; Includes:
;; - Reinterpret between different vector modes
;; - Vector LMUL extension
;; - Vector LMUL truncation
;; - insert a vector to a vector group
;; - get a vector from a vector group
;; -------------------------------------------------------------------------

;; Reinterpret operand 1 in operand 0's mode, without changing its contents.
;; This is equivalent to a subreg on little-endian targets but not for
;; big-endian; see the comment at the head of the file for details.
(define_expand "@vreinterpret<mode>"
  [(set (match_operand:V 0 "register_operand")
    (unspec:V
      [(match_operand 1 "vector_any_register_operand")] UNSPEC_REINTERPRET))]
  "TARGET_VECTOR"
{
  machine_mode src_mode = GET_MODE (operands[1]);
  if (targetm.can_change_mode_class (<MODE>mode, src_mode, FP_REGS))
    {
      emit_move_insn (operands[0], gen_lowpart (<MODE>mode, operands[1]));
      DONE;
    }
})

;; Vector LMUL extension
(define_expand "@vlmul_ext<mode>"
  [(set (match_operand:VLMULEXT 0 "register_operand")
    (unspec:VLMULEXT
      [(match_operand 1 "vector_any_register_operand")] UNSPEC_LMUL_EXT))]
  "TARGET_VECTOR"
{
})

(define_insn_and_split "*vlmul_ext<VLMULEXT:mode><V:mode>"
  [(set (match_operand:VLMULEXT 0 "register_operand" "=vr, ?&vr")
    (unspec:VLMULEXT
      [(match_operand:V 1 "register_operand" "0, vr")] UNSPEC_LMUL_EXT))]
  "TARGET_VECTOR"
  "#"
  "&& reload_completed"
  [(const_int 0)]
  {
    rtx subreg = simplify_gen_subreg (<V:MODE>mode, operands[0], <VLMULEXT:MODE>mode, 0);
    riscv_emit_move (subreg, operands[1]);
    DONE;
  })

;; Vector LMUL truncation
(define_expand "@vlmul_trunc<mode>"
  [(set (match_operand:VLMULTRUNC 0 "register_operand")
    (unspec:VLMULTRUNC
      [(match_operand 1 "vector_any_register_operand")] UNSPEC_LMUL_TRUNC))]
  "TARGET_VECTOR"
{
  rtx subreg = simplify_gen_subreg (<MODE>mode, operands[1], GET_MODE (operands[1]), 0);
  riscv_emit_move (operands[0], subreg);
  DONE;
})

;; insert a vector to a vector group
(define_expand "@vset<mode>"
  [(set (match_operand:VSETI 0 "register_operand")
    (unspec:VSETI
      [(match_operand:VSETI 1 "register_operand" "0")
       (match_operand 2 "const_int_operand")
       (match_operand 3 "vector_any_register_operand")] UNSPEC_SET_VECTOR))]
  "TARGET_VECTOR"
{
  unsigned int nvecs = exact_div (GET_MODE_SIZE (GET_MODE (operands[0])),
        GET_MODE_SIZE (GET_MODE (operands[3]))).to_constant ();
  poly_int64 offset = (INTVAL (operands[2]) & (nvecs - 1))
        * GET_MODE_SIZE (GET_MODE (operands[3]));
  rtx subreg = simplify_gen_subreg (GET_MODE (operands[3]), operands[1], GET_MODE (operands[1]), offset);
  riscv_emit_move (subreg, operands[3]);
  riscv_emit_move (operands[0], operands[1]);
  DONE;
})

(define_expand "@vset<mode>"
  [(set (match_operand:VSETF 0 "register_operand")
    (unspec:VSETF
      [(match_operand:VSETF 1 "register_operand" "0")
       (match_operand 2 "const_int_operand")
       (match_operand 3 "vector_any_register_operand")] UNSPEC_SET_VECTOR))]
  "TARGET_VECTOR"
{
  unsigned int nvecs = exact_div (GET_MODE_SIZE (GET_MODE (operands[0])),
        GET_MODE_SIZE (GET_MODE (operands[3]))).to_constant ();
  poly_int64 offset = (INTVAL (operands[2]) & (nvecs - 1))
        * GET_MODE_SIZE (GET_MODE (operands[3]));
  rtx subreg = simplify_gen_subreg (GET_MODE (operands[3]), operands[1], GET_MODE (operands[1]), offset);
  riscv_emit_move (subreg, operands[3]);
  riscv_emit_move (operands[0], operands[1]);
  DONE;
})

;; get a vector from a vector group
(define_expand "@vget<mode>"
  [(set (match_operand:VGETI 0 "register_operand")
    (unspec:VGETI
      [(match_operand 1 "vector_any_register_operand")
       (match_operand 2 "const_int_operand")] UNSPEC_GET_VECTOR))]
  "TARGET_VECTOR"
{
  unsigned int nvecs = exact_div (GET_MODE_SIZE (GET_MODE (operands[1])),
        GET_MODE_SIZE (GET_MODE (operands[0]))).to_constant ();
  poly_int64 offset = (INTVAL (operands[2]) & (nvecs - 1))
        * GET_MODE_SIZE (GET_MODE (operands[0]));
  rtx subreg = simplify_gen_subreg (GET_MODE (operands[0]), operands[1], GET_MODE (operands[1]), offset);
  riscv_emit_move (operands[0], subreg);
  DONE;
})

(define_expand "@vget<mode>"
  [(set (match_operand:VGETF 0 "register_operand")
    (unspec:VGETF
      [(match_operand 1 "vector_any_register_operand")
       (match_operand 2 "const_int_operand")] UNSPEC_GET_VECTOR))]
  "TARGET_VECTOR"
{
  unsigned int nvecs = exact_div (GET_MODE_SIZE (GET_MODE (operands[1])),
        GET_MODE_SIZE (GET_MODE (operands[0]))).to_constant ();
  poly_int64 offset = (INTVAL (operands[2]) & (nvecs - 1))
        * GET_MODE_SIZE (GET_MODE (operands[0]));
  rtx subreg = simplify_gen_subreg (GET_MODE (operands[0]), operands[1], GET_MODE (operands[1]), offset);
  riscv_emit_move (operands[0], subreg);
  DONE;
})

(include "vectorization.md")

;; =========================================================================
;; == Intrinsics
;; =========================================================================

;; -------------------------------------------------------------------------------
;; ---- 6. Configuration-Setting Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 6.1 vsetvli/vsetivl/vsetvl instructions
;; -------------------------------------------------------------------------------

;; we dont't define vsetvli as unspec_volatile,
;; because we want this instruction can be scheduling
;; in the future.
;; This means these instructions will be deleted when
;; there is no instructions using vl or vtype in the following.
;; rd  | rs1 | AVL value | Effect on vl
;; -   | !x0 | x[rs1]    | Normal stripmining
;; !x0 | x0  | ~0        | Set vl to VLMAX
(define_insn "@vsetvl_<mode>"
  [(parallel
    [(set (match_operand:X 0 "register_operand" "=r,r")
      (unspec:X
        [(match_operand:X 1 "csr_operand" "K,r")] UNSPEC_VSETVLI))
     (set (reg:SI VL_REGNUM)
       (unspec:SI
        [(match_dup 1)] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec:SI
        [(match_operand 2 "const_int_operand")] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  {
    char buf[64];
    gcc_assert (CONSTANT_P (operands[2]));
    const char *insn = satisfies_constraint_K (operands[1]) ? "vsetivli\t%0,%1"
        : "vsetvli\t%0,%1";
    unsigned int vsew = riscv_parse_vsew_field (INTVAL (operands[2]));
    unsigned int vlmul = riscv_parse_vlmul_field (INTVAL (operands[2]));
    unsigned int vta = riscv_parse_vta_field (INTVAL (operands[2]));
    unsigned int vma = riscv_parse_vma_field (INTVAL (operands[2]));
    const char *sew = vsew == 0 ? "e8"  : vsew == 1 ? "e16"
          : vsew == 2 ? "e32" : "e64";
    const char *lmul = vlmul == 0 ? "m1" : vlmul == 1 ? "m2"
          : vlmul == 2 ? "m4" : vlmul == 3 ? "m8"
          : vlmul == 5 ? "mf8" : vlmul == 6 ? "mf4" : "mf2";
    const char *ta = vta == 0 ? "tu" : "ta";
    const char *ma = vma == 0 ? "mu" : "ma";
    snprintf (buf, sizeof (buf), "%s,%s,%s,%s,%s", insn, sew, lmul, ta, ma);
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "vsetvl")
   (set_attr "mode" "none")])

(define_insn "@vsetvl_<mode>_volatile"
  [(parallel
    [(set (match_operand:X 0 "register_operand" "=r,r")
      (unspec_volatile:X
        [(match_operand:X 1 "csr_operand" "K,r")] UNSPEC_VSETVLI))
     (set (reg:SI VL_REGNUM)
       (unspec_volatile:SI
        [(match_dup 1)] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec_volatile:SI
        [(match_operand 2 "const_int_operand")] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  {
    char buf[64];
    gcc_assert (CONSTANT_P (operands[2]));
    const char *insn = satisfies_constraint_K (operands[1]) ? "vsetivli\t%0,%1"
        : "vsetvli\t%0,%1";
    unsigned int vsew = riscv_parse_vsew_field (INTVAL (operands[2]));
    unsigned int vlmul = riscv_parse_vlmul_field (INTVAL (operands[2]));
    unsigned int vta = riscv_parse_vta_field (INTVAL (operands[2]));
    unsigned int vma = riscv_parse_vma_field (INTVAL (operands[2]));
    const char *sew = vsew == 0 ? "e8"  : vsew == 1 ? "e16"
          : vsew == 2 ? "e32" : "e64";
    const char *lmul = vlmul == 0 ? "m1" : vlmul == 1 ? "m2"
          : vlmul == 2 ? "m4" : vlmul == 3 ? "m8"
          : vlmul == 5 ? "mf8" : vlmul == 6 ? "mf4" : "mf2";
    const char *ta = vta == 0 ? "tu" : "ta";
    const char *ma = vma == 0 ? "mu" : "ma";
    snprintf (buf, sizeof (buf), "%s,%s,%s,%s,%s", insn, sew, lmul, ta, ma);
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "vsetvl")
   (set_attr "mode" "none")])
;; Vector Unit-stride mask Loads.
(define_insn "@vlm<VB:mode>"
  [(set (match_operand:VB 0 "register_operand" "=vr")
  (unspec:VB
    [(unspec:VB
      [(match_operand 1 "pmode_register_operand" "r")
       (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
    (match_operand 2 "p_reg_or_const_csr_operand")
    (match_operand 3 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vlm.v\t%0,(%1)"
  [(set_attr "type" "vle")
   (set_attr "mode" "<VB:MODE>")])

;; Vector Unit-stride mask Stores.
(define_insn "@vsm<VB:mode>"
  [(set (mem:BLK (scratch))
  (unspec:BLK
    [(unspec:BLK
      [(match_operand 0 "pmode_register_operand" "r")
       (match_operand:VB 1 "register_operand" "vr")
       (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_STORE)
    (match_operand 2 "p_reg_or_const_csr_operand")
    (match_operand 3 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vsm.v\t%1,(%0)"
  [(set_attr "type" "vse")
   (set_attr "mode" "<VB:MODE>")])

