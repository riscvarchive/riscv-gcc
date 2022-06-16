;; Machine description for RISC-V vector operations.
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

;; This file describes the RISC-V instructions from the standard 'V' Vector
;; extension, version 1.0.
;;
;; This file include :
;;
;; - Intrinsic (Be consistent with https://github.com/riscv/rvv-intrinsic-doc)
;; - Auto-vectorization (vector-auto.md)
;; - Vector Optimization (vector-opt.md)
;;
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

  if (GET_CODE (operands[1]) == CONST_VECTOR &&
      riscv_vector_expand_const_vector (operands[0], operands[1]))
    DONE;
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
              (clobber (scratch:SI))
              (clobber (reg:SI VL_REGNUM))
              (clobber (reg:SI VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);

  if (GET_CODE (operands[1]) == CONST_VECTOR &&
      riscv_vector_expand_const_vector (operands[0], operands[1]))
    DONE;
})

;; Partial vector load/store/move.
(define_insn_and_split "*mov<mode>"
  [(set (match_operand:VPARTIAL 0 "reg_or_mem_operand" "=vr,m,vr")
        (match_operand:VPARTIAL 1 "reg_or_mem_operand" "m,vr,vr"))
        (clobber (match_scratch:SI 2 "=&r,&r,X"))
        (clobber (reg:SI VL_REGNUM))
        (clobber (reg:SI VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vle<sew>.v\t%0,%1
   vse<sew>.v\t%1,%0
   #"
  "&& (!reload_completed || (REG_P (operands[0])
   && REG_P (operands[1])))"
  [(const_int 0)]
  {
    /* Need to force register if mem <- !reg.  */
    if (MEM_P (operands[0]) && !REG_P (operands[1]))
      operands[1] = force_reg (<MODE>mode, operands[1]);
      
    if (MEM_P (operands[0]))
      {
        emit_insn (gen_vse (<MODE>mode, const0_rtx, XEXP (operands[0], 0),
                            operands[1], gen_rtx_REG (Pmode, X0_REGNUM),
                            riscv_vector_gen_policy ()));
        DONE;
      }
    if (MEM_P (operands[1]))
      {
        emit_insn (gen_vle (<MODE>mode, operands[0], const0_rtx, const0_rtx,
                            XEXP (operands[1], 0), gen_rtx_REG (Pmode, X0_REGNUM),
                            riscv_vector_gen_policy ()));
        DONE;
      }

    emit_insn (gen_rtx_SET (operands[0], operands[1]));
    DONE;
  }
  [(set_attr "type" "vle,vse,vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn_and_split "@mov<mode>_internal"
  [(parallel [
    (set (match_operand:VPARTIAL 0 "reg_or_mem_operand" "=vr,m,vr")
      (match_operand:VPARTIAL 1 "reg_or_mem_operand" "m,vr,vr"))
    (set (match_operand:SI 2 "register_operand" "=&r,&r,&r")
      (reg:SI X0_REGNUM))
    (clobber (reg:SI VL_REGNUM))
    (clobber (reg:SI VTYPE_REGNUM))])]
  "TARGET_VECTOR && reload_completed"
  "@
   vle<sew>.v\t%0,%1
   vse<sew>.v\t%1,%0
   #"
  "&& REG_P (operands[0])
   && REG_P (operands[1])"
  [(const_int 0)]
  {
    emit_insn (gen_rtx_SET (operands[0], operands[1]));
    DONE;
  }
  [(set_attr "type" "vle,vse,vcopy")
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
	      (clobber (scratch:SI))
        (clobber (reg:SI VL_REGNUM))
        (clobber (reg:SI VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);
  
  if (GET_CODE (operands[1]) == CONST_VECTOR 
    && riscv_vector_expand_const_mask (operands[0], operands[1]))
    DONE;
})

;; mask load/store/move.
(define_insn_and_split "*mov<mode>"
  [(set (match_operand:VB 0 "reg_or_mem_operand" "=vr,m,vr")
        (match_operand:VB 1 "reg_or_mem_operand" "m,vr,vr"))
        (clobber (match_scratch:SI 2 "=&r,&r,X"))
        (clobber (reg:SI VL_REGNUM))
        (clobber (reg:SI VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vlm.v\t%0,%1
   vsm.v\t%1,%0
   #"
  "&& (!reload_completed || (REG_P (operands[0])
   && REG_P (operands[1])))"
  [(const_int 0)]
  {
    /* Need to force register if mem <- !reg.  */
    if (MEM_P (operands[0]) && !REG_P (operands[1]))
      operands[1] = force_reg (<MODE>mode, operands[1]);
      
    if (MEM_P (operands[0]))
      {
        emit_insn (gen_vsm (<MODE>mode, XEXP (operands[0], 0), operands[1],
                            gen_rtx_REG (Pmode, X0_REGNUM),
                            riscv_vector_gen_policy ()));
        DONE;
      }
    if (MEM_P (operands[1]))
      {
        emit_insn (gen_vlm (<MODE>mode, operands[0], XEXP (operands[1], 0),
                            gen_rtx_REG (Pmode, X0_REGNUM),
                            riscv_vector_gen_policy ()));
        DONE;
      }

    emit_insn (gen_rtx_SET (operands[0], operands[1]));
    DONE;
  }
  [(set_attr "type" "vle,vse,vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn "*mov<mode>_reg"
  [(set (match_operand:VB 0 "register_operand" "=vr")
        (match_operand:VB 1 "register_operand" "vr"))]
  "TARGET_VECTOR"
  "vmv1r.v\t%0,%1"
  [(set_attr "type" "vcopy")
   (set_attr "mode" "<MODE>")])

(define_insn_and_split "mov<mode>"
  [(set (match_operand:VTI 0 "reg_or_mem_operand" "=vr,vr, m,vr")
        (match_operand:VTI 1 "vector_move_operand"  " vr, m,vr,vc"))
   (clobber (match_scratch:<VSUB> 2 "=X,&r,&r,&r"))
   (clobber (match_scratch:<VSUB> 3 "=X,&r,&r,X"))
   (clobber (match_scratch:SI 4 "=X,&r,&r,X"))
   (clobber (reg:SI VL_REGNUM))
   (clobber (reg:SI VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "#"
  "&& (reload_completed || (REG_P (operands[0])
   && REG_P (operands[1])))"
  [(const_int 0)]
  {
    if (!reload_completed)
      {
        gcc_assert (REG_P (operands[0]) && REG_P (operands[1]));
        emit_insn (gen_rtx_SET (operands[0], operands[1]));
        DONE;
      }
    riscv_vector_expand_tuple (<VTSUB>mode, operands);
    DONE;
  }
  [(set_attr "type" "vcopy,vle,vse,vmove")
   (set_attr "mode" "<VTSUB>")])

(define_insn_and_split "mov<mode>"
  [(set (match_operand:VTF 0 "reg_or_mem_operand" "=vr,vr, m,vr")
        (match_operand:VTF 1 "vector_move_operand"  " vr, m,vr,vc"))
   (clobber (match_scratch:SI 2 "=X,&r,&r,&r"))
   (clobber (match_scratch:SI 3 "=X,&r,&r,X"))
   (clobber (match_scratch:SI 4 "=X,&r,&r,X"))
   (clobber (match_scratch:<VSUB> 5 "=X,X,X,f"))
   (clobber (reg:SI VL_REGNUM))
   (clobber (reg:SI VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "#"
  "&& (reload_completed || (REG_P (operands[0])
   && REG_P (operands[1])))"
  [(const_int 0)]
  {
    if (!reload_completed)
      {
        gcc_assert (REG_P (operands[0]) && REG_P (operands[1]));
        emit_insn (gen_rtx_SET (operands[0], operands[1]));
        DONE;
      }
    riscv_vector_expand_tuple (<VTSUB>mode, operands);
    DONE;
  }
  [(set_attr "type" "vcopy,vle,vse,vmove")
   (set_attr "mode" "<VTSUB>")])

(define_insn_and_split "*mov<mode>"
  [(set (match_operand:VT 0 "register_operand" "=vr")
        (match_operand:VT 1 "register_operand" "vr"))]
  "TARGET_VECTOR"
  "#"
  "&& reload_completed"
  [(const_int 0)]
  {
    riscv_vector_expand_tuple (<VTSUB>mode, operands);
    DONE;
  }
  [(set_attr "type" "vcopy")
   (set_attr "mode" "<VTSUB>")])
   
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

;; This pattern means the value of operands[0] is unpredictable.
;; We don't want to use clobber to match undefine pattern.
;; Because it has bad performance.
(define_insn "vundefined<mode>"
  [(set (match_operand:V 0 "register_operand" "=vr")
        (const_int 0))]
  "TARGET_VECTOR"
  "")
   
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

(include "vector-auto.md")
(include "vector-opt.md")

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
    [(set (match_operand:X 0 "register_operand" "=r")
      (unspec:X
        [(match_operand:X 1 "csr_operand" "rK")] UNSPEC_VSETVLI))
     (set (reg:SI VL_REGNUM)
       (unspec:SI
        [(match_dup 1)] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec:SI
        [(match_operand 2 "const_int_operand" "i")] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  {
    char buf[64];
    gcc_assert (CONST_INT_P (operands[2]));
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

(define_insn "vsetvl_zero_zero"
  [(set (reg:SI VTYPE_REGNUM)
    (unspec:SI
      [(match_operand 0 "const_int_operand" "i")] UNSPEC_VSETVLI))]
  "TARGET_VECTOR"
  {
    char buf[64];
    gcc_assert (CONST_INT_P (operands[0]));
    const char *insn = "vsetvli\tzero,zero";
    unsigned int vsew = riscv_parse_vsew_field (INTVAL (operands[0]));
    unsigned int vlmul = riscv_parse_vlmul_field (INTVAL (operands[0]));
    unsigned int vta = riscv_parse_vta_field (INTVAL (operands[0]));
    unsigned int vma = riscv_parse_vma_field (INTVAL (operands[0]));
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

(define_insn "@vsetvl_zero_<mode>"
  [(parallel
    [(set (reg:SI VL_REGNUM)
       (unspec:SI
        [(match_operand:X 0 "csr_operand" "rK")] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec:SI
        [(match_operand 1 "const_int_operand" "i")] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  {
    char buf[64];
    gcc_assert (CONST_INT_P (operands[1]));
    const char *insn = satisfies_constraint_K (operands[0]) ? "vsetivli\tzero,%0"
        : "vsetvli\tzero,%0";
    unsigned int vsew = riscv_parse_vsew_field (INTVAL (operands[1]));
    unsigned int vlmul = riscv_parse_vlmul_field (INTVAL (operands[1]));
    unsigned int vta = riscv_parse_vta_field (INTVAL (operands[1]));
    unsigned int vma = riscv_parse_vma_field (INTVAL (operands[1]));
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

;; -------------------------------------------------------------------------------
;; ---- 7. Vector Loads and Stores
;; -------------------------------------------------------------------------------
;; Includes:
;; - 7.4. Vector Unit-Stride Instructions
;; - 7.5. Vector Strided Instructions
;; - 7.6. Vector Indexed Instructions
;; - 7.7. Unit-stride Fault-Only-First Instructions
;; - 7.8. Vector Load/Store Segment Instructions
;;  -  7.8.1. Vector Unit-Stride Segment Loads and Stores
;;  -  7.8.2. Vector Strided Segment Loads and Stores
;;  -  7.8.3. Vector Indexed Segment Loads and Stores
;; -------------------------------------------------------------------------------

;; Vector Unit-Stride Loads.
(define_insn "@vle<mode>"
  [(set (match_operand:V 0 "register_operand"                 "=vd,vd,  vr,vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,   J,J")
          (unspec:V
            [(match_operand 3 "pmode_register_operand"        "r,r,     r,r")
            (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
         (match_operand:V 2 "vector_reg_or_const0_operand"    "0,J,     0,J")] UNSPEC_SELECT)
      (match_operand 4 "p_reg_or_const_csr_operand"           "rK,rK,   rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vle<sew>.v\t%0,(%3),%1.t
   vle<sew>.v\t%0,(%3),%1.t
   vle<sew>.v\t%0,(%3)
   vle<sew>.v\t%0,(%3)"
  [(set_attr "type" "vle")
   (set_attr "mode" "<MODE>")])

;; Vector Unit-Stride Stores.
(define_insn "@vse<mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V
        [(match_operand:<VM> 0 "vector_reg_or_const0_operand" "vm,J")
         (unspec:BLK
           [(match_operand 1 "pmode_register_operand"         "r,r")
            (match_operand:V 2 "register_operand"             "vr,vr")
            (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_STORE)
         (match_dup 1)] UNSPEC_SELECT)
      (match_operand 3 "p_reg_or_const_csr_operand"           "rK,rK")
      (match_operand 4 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vse<sew>.v\t%2,(%1),%0.t
   vse<sew>.v\t%2,(%1)"
  [(set_attr "type" "vse")
   (set_attr "mode" "<MODE>")])

;; Vector Unit-stride mask Loads.
(define_insn "@vlm<mode>"
  [(set (match_operand:VB 0 "register_operand"    "=vr")
  (unspec:VB
    [(unspec:VB
      [(match_operand 1 "pmode_register_operand"  "r")
       (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
    (match_operand 2 "p_reg_or_const_csr_operand" "rK")
    (match_operand 3 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vlm.v\t%0,(%1)"
  [(set_attr "type" "vle")
   (set_attr "mode" "<MODE>")])

;; Vector Unit-stride mask Stores.
(define_insn "@vsm<mode>"
  [(set (mem:BLK (scratch))
  (unspec:BLK
    [(unspec:BLK
      [(match_operand 0 "pmode_register_operand"  "r")
       (match_operand:VB 1 "register_operand"     "vr")
       (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_STORE)
    (match_operand 2 "p_reg_or_const_csr_operand" "rK")
    (match_operand 3 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vsm.v\t%1,(%0)"
  [(set_attr "type" "vse")
   (set_attr "mode" "<MODE>")])

;; Vector Strided Loads.

;; This special pattern, we add policy operand because
;; we need it in the expansion.
(define_insn "@vlse<mode>"
  [(set (match_operand:V 0 "register_operand"                 "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:V
           [(match_operand 3 "pmode_register_operand"         "r,r,r,r,r,r,r,r")
           (match_operand 4 "p_reg_or_0_operand"              "r,J,r,J,r,J,r,J")
           (mem:BLK (scratch))] UNSPEC_STRIDED_LOAD)
         (match_operand:V 2 "vector_reg_or_const0_operand"    "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vlse<sew>.v\t%0,(%3),%4,%1.t
   vlse<sew>.v\t%0,(%3),zero,%1.t
   vlse<sew>.v\t%0,(%3),%4,%1.t
   vlse<sew>.v\t%0,(%3),zero,%1.t
   vlse<sew>.v\t%0,(%3),%4
   vlse<sew>.v\t%0,(%3),zero
   vlse<sew>.v\t%0,(%3),%4
   vlse<sew>.v\t%0,(%3),zero"
  [(set_attr "type" "vlse")
   (set_attr "mode" "<MODE>")])

;; Vector Strided Stores.
(define_insn "@vsse<mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V
        [(match_operand:<VM> 0 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:BLK
          [(match_operand 1 "pmode_register_operand"          "r,r,r,r")
           (match_operand 2 "p_reg_or_0_operand"              "r,J,r,J")
           (match_operand:V 3 "register_operand"              "vr,vr,vr,vr")] UNSPEC_STRIDED_STORE)
         (match_dup 1)] UNSPEC_SELECT)
      (match_operand 4 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsse<sew>.v\t%3,(%1),%2,%0.t
   vsse<sew>.v\t%3,(%1),zero,%0.t
   vsse<sew>.v\t%3,(%1),%2
   vsse<sew>.v\t%3,(%1),zero"
  [(set_attr "type" "vsse")
   (set_attr "mode" "<MODE>")])

;; Vector Unordered and Ordered Indexed Loads.
;; The following patterns are the patterns will be matched after
;; reload. We split them to 2,4,8,16,32,64,128 to reduce patterns
;; in CODE_FOR_xxxxx, thus reduce compilation time.

;; pattern of indexed loads for nunits = 2.
(define_insn "@vl<uo>xei<V2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:V2UNITS 0 "register_operand"                     "=&vr,&vr,&vr,&vr")
    (unspec:V2UNITS
      [(unspec:V2UNITS
        [(match_operand:<V2UNITS:VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
         (match_operand:V2UNITS 2 "vector_reg_or_const0_operand"        "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V2UNITSI 4 "register_operand"                   "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                     "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V2UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V2UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V2UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V2UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V2UNITS:MODE>")])

;; pattern of indexed loads for nunits = 4.
(define_insn "@vl<uo>xei<V4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:V4UNITS 0 "register_operand"                   "=&vr,&vr,&vr,&vr")
    (unspec:V4UNITS
      [(unspec:V4UNITS
        [(match_operand:<V4UNITS:VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (match_operand:V4UNITS 2 "vector_reg_or_const0_operand"      "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                    "r,r,r,r")
         (match_operand:V4UNITSI 4 "register_operand"                 "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                   "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V4UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V4UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V4UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V4UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V4UNITS:MODE>")])

;; pattern of indexed loads for nunits = 8.
(define_insn "@vl<uo>xei<V8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:V8UNITS 0 "register_operand"                   "=&vr,&vr,&vr,&vr")
    (unspec:V8UNITS
      [(unspec:V8UNITS
        [(match_operand:<V8UNITS:VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (match_operand:V8UNITS 2 "vector_reg_or_const0_operand"      "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                    "r,r,r,r")
         (match_operand:V8UNITSI 4 "register_operand"                 "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                   "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V8UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V8UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V8UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V8UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V8UNITS:MODE>")])

;; pattern of indexed loads for nunits = 16.
(define_insn "@vl<uo>xei<V16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:V16UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:V16UNITS
      [(unspec:V16UNITS
        [(match_operand:<V16UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:V16UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V16UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                     "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V16UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V16UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V16UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V16UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V16UNITS:MODE>")])

;; pattern of indexed loads for nunits = 32.
(define_insn "@vl<uo>xei<V32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:V32UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:V32UNITS
      [(unspec:V32UNITS
        [(match_operand:<V32UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:V32UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V32UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                     "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V32UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V32UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V32UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V32UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V32UNITS:MODE>")])

;; pattern of indexed loads for nunits = 64.
(define_insn "@vl<uo>xei<V64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:V64UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:V64UNITS
      [(unspec:V64UNITS
        [(match_operand:<V64UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:V64UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V64UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                     "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V64UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V64UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V64UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V64UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V64UNITS:MODE>")])

;; pattern of indexed loads for nunits = 128.
(define_insn "@vl<uo>xei<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (match_operand:V128UNITSI 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:V128UNITSI
      [(unspec:V128UNITSI
        [(match_operand:<V128UNITSI:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:V128UNITSI 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                        "r,r,r,r")
         (match_operand:V128UNITSI 4 "register_operand"                   "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
      (match_operand 5 "p_reg_or_const_csr_operand"                       "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xei<V128UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V128UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xei<V128UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xei<V128UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xei")
   (set_attr "mode" "<V128UNITSI:MODE>")])

;; Vector Unordered and Ordered Indexed Stores.

;; pattern of indexed stores for nunits = 2.
(define_insn "@vs<uo>xei<V2UNITS:mode><V2UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V2UNITS
         [(match_operand:<V2UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V2UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:V2UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V2UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V2UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V2UNITS:MODE>")])

;; pattern of indexed stores for nunits = 4.
(define_insn "@vs<uo>xei<V4UNITS:mode><V4UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V4UNITS
         [(match_operand:<V4UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V4UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:V4UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V4UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V4UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V4UNITS:MODE>")])

;; pattern of indexed stores for nunits = 8.
(define_insn "@vs<uo>xei<V8UNITS:mode><V8UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V8UNITS
         [(match_operand:<V8UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V8UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:V8UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V8UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V8UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V8UNITS:MODE>")])

;; pattern of indexed stores for nunits = 16.
(define_insn "@vs<uo>xei<V16UNITS:mode><V16UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V16UNITS
         [(match_operand:<V16UNITS:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V16UNITSI 2 "register_operand"                 "vr,vr")
          (match_operand:V16UNITS 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V16UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V16UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V16UNITS:MODE>")])

;; pattern of indexed stores for nunits = 32.
(define_insn "@vs<uo>xei<V32UNITS:mode><V32UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V32UNITS
         [(match_operand:<V32UNITS:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V32UNITSI 2 "register_operand"                 "vr,vr")
          (match_operand:V32UNITS 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V32UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V32UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V32UNITS:MODE>")])

;; pattern of indexed stores for nunits = 64.
(define_insn "@vs<uo>xei<V64UNITS:mode><V64UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V64UNITS
         [(match_operand:<V64UNITS:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V64UNITSI 2 "register_operand"                 "vr,vr")
          (match_operand:V64UNITS 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V64UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V64UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V64UNITS:MODE>")])

;; pattern of indexed stores for nunits = 128.
(define_insn "@vs<uo>xei<V128UNITSI:mode><V128UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:V128UNITSI
         [(match_operand:<V128UNITSI:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                       "r,r")
          (match_operand:V128UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:V128UNITSI 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
    (match_operand 4 "p_reg_or_const_csr_operand"                         "rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xei<V128UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xei<V128UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xei")
   (set_attr "mode" "<V128UNITSI:MODE>")])

;; Unit-stride Fault-Only-First Loads.
(define_insn "@vle<mode>ff"
  [(set (match_operand:V 0 "register_operand"               "=vd,vd,vr,vr")
   (unspec:V
    [(unspec:V
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:V
         [(match_operand 3 "pmode_register_operand"         "r,r,r,r")
           (mem:BLK (scratch))] UNSPEC_FAULT_ONLY_FIRST_LOAD)
       (match_operand:V 2 "vector_reg_or_const0_operand"    "0,J,0,J")] UNSPEC_SELECT)
    (match_operand 4 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
  (clobber (reg:SI VL_REGNUM))]
  "TARGET_VECTOR"
  "@
   vle<sew>ff.v\t%0,(%3),%1.t
   vle<sew>ff.v\t%0,(%3),%1.t
   vle<sew>ff.v\t%0,(%3)
   vle<sew>ff.v\t%0,(%3)"
  [(set_attr "type" "vleff")
   (set_attr "mode" "<MODE>")])

;; Vector Unit-Stride Segment Loads.
(define_insn "@vlseg<mode>"
  [(set (match_operand:VT 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VT
      [(unspec:VT
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VT
           [(match_operand 3 "pmode_register_operand"         "r,r,r,r")
           (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
         (match_operand:VT 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
    (match_operand 4 "p_reg_or_const_csr_operand"             "rK,rK,rK,rK")
    (match_operand 5 "const_int_operand")
    (reg:SI VL_REGNUM)
    (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vlseg<nf>e<sew>.v\t%0,(%3),%1.t
   vlseg<nf>e<sew>.v\t%0,(%3),%1.t
   vlseg<nf>e<sew>.v\t%0,(%3)
   vlseg<nf>e<sew>.v\t%0,(%3)"
  [(set_attr "type" "vlseg")
   (set_attr "mode" "<MODE>")])

;; Vector Unit-Stride Segment Stores.
(define_insn "@vsseg<mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT
        [(match_operand:<VM> 0 "vector_reg_or_const0_operand" "vm,J")
         (unspec:BLK
           [(match_operand 1 "pmode_register_operand"         "r,r")
           (match_operand:VT 2 "register_operand"             "vr,vr")
           (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_STORE)
         (match_dup 1)] UNSPEC_SELECT)
      (match_operand 3 "p_reg_or_const_csr_operand"           "rK,rK")
      (match_operand 4 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsseg<nf>e<sew>.v\t%2,(%1),%0.t
   vsseg<nf>e<sew>.v\t%2,(%1)"
  [(set_attr "type" "vsseg")
   (set_attr "mode" "<MODE>")])

;; Unit-stride Fault-Only-First Segment Loads
(define_insn "@vlseg<mode>ff"
  [(set (match_operand:VT 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VT
      [(unspec:VT
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VT
           [(match_operand 3 "pmode_register_operand"         "r,r,r,r")
           (mem:BLK (scratch))] UNSPEC_FAULT_ONLY_FIRST_LOAD)
         (match_operand:VT 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
      (match_operand 4 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
    (clobber (reg:SI VL_REGNUM))]
  "TARGET_VECTOR"
  "@
   vlseg<nf>e<sew>ff.v\t%0,(%3),%1.t
   vlseg<nf>e<sew>ff.v\t%0,(%3),%1.t
   vlseg<nf>e<sew>ff.v\t%0,(%3)
   vlseg<nf>e<sew>ff.v\t%0,(%3)"
  [(set_attr "type" "vlsegff")
   (set_attr "mode" "<MODE>")])

;; Vector Strided Segment Loads.
(define_insn "@vlsseg<mode>"
  [(set (match_operand:VT 0 "register_operand"                "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:VT
      [(unspec:VT
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:VT
           [(match_operand 3 "pmode_register_operand"         "r,r,r,r,r,r,r,r")
           (match_operand 4 "p_reg_or_0_operand"              "r,J,r,J,r,J,r,J")
           (mem:BLK (scratch))] UNSPEC_STRIDED_LOAD)
         (match_operand:VT 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vlsseg<nf>e<sew>.v\t%0,(%3),%4,%1.t
   vlsseg<nf>e<sew>.v\t%0,(%3),zero,%1.t
   vlsseg<nf>e<sew>.v\t%0,(%3),%4,%1.t
   vlsseg<nf>e<sew>.v\t%0,(%3),zero,%1.t
   vlsseg<nf>e<sew>.v\t%0,(%3),%4
   vlsseg<nf>e<sew>.v\t%0,(%3),zero
   vlsseg<nf>e<sew>.v\t%0,(%3),%4
   vlsseg<nf>e<sew>.v\t%0,(%3),zero"
  [(set_attr "type" "vlsseg")
   (set_attr "mode" "<MODE>")])

;; Vector Strided Segment Stores.
(define_insn "@vssseg<mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT
        [(match_operand:<VM> 0 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:BLK
           [(match_operand 1 "pmode_register_operand"         "r,r,r,r")
             (match_operand 2 "p_reg_or_0_operand"            "r,J,r,J")
             (match_operand:VT 3 "register_operand"           "vr,vr,vr,vr")] UNSPEC_STRIDED_STORE)
         (match_dup 1)] UNSPEC_SELECT)
      (match_operand 4 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vssseg<nf>e<sew>.v\t%3,(%1),%2,%0.t
   vssseg<nf>e<sew>.v\t%3,(%1),zero,%0.t
   vssseg<nf>e<sew>.v\t%3,(%1),%2
   vssseg<nf>e<sew>.v\t%3,(%1),zero"
  [(set_attr "type" "vssseg")
   (set_attr "mode" "<MODE>")])

;; Vector Unordered and Ordered Indexed Segment Loads.
;; pattern of segments indexed loads for nunits = 2.
(define_insn "@vl<uo>xsegei<VT2UNITS:mode><V2UNITSI:mode>"
  [(set (match_operand:VT2UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:VT2UNITS
      [(unspec:VT2UNITS
        [(match_operand:<VT2UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:VT2UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V2UNITSI 4 "register_operand"                   "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT2UNITS:MODE>")])

;; pattern of segments indexed loads for nunits = 4.
(define_insn "@vl<uo>xsegei<VT4UNITS:mode><V4UNITSI:mode>"
  [(set (match_operand:VT4UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:VT4UNITS
      [(unspec:VT4UNITS
        [(match_operand:<VT4UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:VT4UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V4UNITSI 4 "register_operand"                   "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT4UNITS:MODE>")])

;; pattern of segments indexed loads for nunits = 8.
(define_insn "@vl<uo>xsegei<VT8UNITS:mode><V8UNITSI:mode>"
  [(set (match_operand:VT8UNITS 0 "register_operand"                    "=&vr,&vr,&vr,&vr")
    (unspec:VT8UNITS
      [(unspec:VT8UNITS
        [(match_operand:<VT8UNITS:VM> 1 "vector_reg_or_const0_operand"  "vm,vm,J,J")
         (match_operand:VT8UNITS 2 "vector_reg_or_const0_operand"       "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V8UNITSI 4 "register_operand"                   "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT8UNITS:MODE>")])

;; pattern of segments indexed loads for nunits = 16.
(define_insn "@vl<uo>xsegei<VT16UNITS:mode><V16UNITSI:mode>"
  [(set (match_operand:VT16UNITS 0 "register_operand"                   "=&vr,&vr,&vr,&vr")
    (unspec:VT16UNITS
      [(unspec:VT16UNITS
        [(match_operand:<VT16UNITS:VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (match_operand:VT16UNITS 2 "vector_reg_or_const0_operand"      "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V16UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT16UNITS:MODE>")])

;; pattern of segments indexed loads for nunits = 32.
(define_insn "@vl<uo>xsegei<VT32UNITS:mode><V32UNITSI:mode>"
  [(set (match_operand:VT32UNITS 0 "register_operand"                   "=&vr,&vr,&vr,&vr")
    (unspec:VT32UNITS
      [(unspec:VT32UNITS
        [(match_operand:<VT32UNITS:VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (match_operand:VT32UNITS 2 "vector_reg_or_const0_operand"      "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V32UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT32UNITS:MODE>")])

;; pattern of segments indexed loads for nunits = 64.
(define_insn "@vl<uo>xsegei<VT64UNITS:mode><V64UNITSI:mode>"
  [(set (match_operand:VT64UNITS 0 "register_operand"                   "=&vr,&vr,&vr,&vr")
    (unspec:VT64UNITS
      [(unspec:VT64UNITS
        [(match_operand:<VT64UNITS:VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (match_operand:VT64UNITS 2 "vector_reg_or_const0_operand"      "0,J,0,J")
         (match_operand 3 "pmode_register_operand"                      "r,r,r,r")
         (match_operand:V64UNITSI 4 "register_operand"                  "vr,vr,vr,vr")
         (mem:BLK (scratch))] INDEXED_LOAD)
       (match_operand 5 "p_reg_or_const_csr_operand"                    "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vl<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%0,(%3),%4,%1.t
   vl<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%0,(%3),%4
   vl<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%0,(%3),%4"
  [(set_attr "type" "vl<uo>xsegei")
   (set_attr "mode" "<VT64UNITS:MODE>")])

;; Vector Unordered and Ordered Indexed Segment Stores.
;; pattern of segments indexed stores for nunits = 2.
(define_insn "@vs<uo>xsegei<VT2UNITS:mode><V2UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT2UNITS
         [(match_operand:<VT2UNITS:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V2UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:VT2UNITS 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                     "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V2UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT2UNITS:MODE>")])

;; pattern of segments indexed stores for nunits = 4.
(define_insn "@vs<uo>xsegei<VT4UNITS:mode><V4UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT4UNITS
         [(match_operand:<VT4UNITS:VM> 0 "vector_reg_or_const0_operand" "vm,J")
          (match_operand 1 "pmode_register_operand"                     "r,r")
          (match_operand:V4UNITSI 2 "register_operand"                  "vr,vr")
          (match_operand:VT4UNITS 3 "register_operand"                  "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                     "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V4UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT4UNITS:MODE>")])

;; pattern of segments indexed stores for nunits = 8.
(define_insn "@vs<uo>xsegei<VT8UNITS:mode><V8UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT8UNITS
         [(match_operand:<VT8UNITS:VM> 0 "vector_reg_or_const0_operand"   "vm,J")
          (match_operand 1 "pmode_register_operand"                       "r,r")
          (match_operand:V8UNITSI 2 "register_operand"                    "vr,vr")
          (match_operand:VT8UNITS 3 "register_operand"                    "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V8UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT8UNITS:MODE>")])

;; pattern of segments indexed stores for nunits = 16.
(define_insn "@vs<uo>xsegei<VT16UNITS:mode><V16UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT16UNITS
         [(match_operand:<VT16UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                       "r,r")
          (match_operand:V16UNITSI 2 "register_operand"                   "vr,vr")
          (match_operand:VT16UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V16UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT16UNITS:MODE>")])

;; pattern of segments indexed stores for nunits = 32.
(define_insn "@vs<uo>xsegei<VT32UNITS:mode><V32UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT32UNITS
         [(match_operand:<VT32UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                       "r,r")
          (match_operand:V32UNITSI 2 "register_operand"                   "vr,vr")
          (match_operand:VT32UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V32UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT32UNITS:MODE>")])

;; pattern of segments indexed stores for nunits = 64.
(define_insn "@vs<uo>xsegei<VT64UNITS:mode><V64UNITSI:mode>"
  [(set (mem:BLK (scratch))
    (unspec:BLK
      [(unspec:VT64UNITS
         [(match_operand:<VT64UNITS:VM> 0 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand 1 "pmode_register_operand"                       "r,r")
          (match_operand:V64UNITSI 2 "register_operand"                   "vr,vr")
          (match_operand:VT64UNITS 3 "register_operand"                   "vr,vr")] INDEXED_STORE)
      (match_operand 4 "p_reg_or_const_csr_operand"                       "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vs<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%3,(%1),%2,%0.t
   vs<uo>xseg<nf>ei<V64UNITSI:sew>.v\t%3,(%1),%2"
  [(set_attr "type" "vs<uo>xsegei")
   (set_attr "mode" "<VT64UNITS:MODE>")])

;; -------------------------------------------------------------------------------
;; ---- expands for some insns, to support sew64 on TARGET_32BIT
;; -------------------------------------------------------------------------------
(define_expand "@v<vxoptab><mode>_vx"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:<VM> 1 "vector_reg_or_const0_operand")
    (match_operand:VI 2 "vector_reg_or_const0_operand")
    (match_operand:VI 3 "register_operand")
    (match_operand:<VSUB> 4 "reg_or_const_int_operand")
    (match_operand 5 "p_reg_or_const_csr_operand")
    (match_operand 6 "const_int_operand")
   ] VXOP)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vx_internal,
      gen_v<vxoptab><vi_to_v64biti>_vx_32bit,
      gen_v<vxoptab><mode>_vv,
      satisfies_constraint_<immptab>,
      4, false
    );
    DONE;
  }
)

;; vrsub
(define_expand "@v<vxoptab><mode>_vx"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:<VM> 1 "vector_reg_or_const0_operand")
    (match_operand:VI 2 "vector_reg_or_const0_operand")
    (match_operand:VI 3 "register_operand")
    (match_operand:<VSUB> 4 "reg_or_const_int_operand")
    (match_operand 5 "p_reg_or_const_csr_operand")
    (match_operand 6 "const_int_operand")
   ] VXROP)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vx_internal,
      gen_v<vxoptab><vi_to_v64biti>_vx_32bit,
      gen_vsub<mode>_vv,
      satisfies_constraint_<immptab>,
      4, true
    );
    DONE;
  }
)

;; mvx no mask
(define_expand "@v<vxoptab><mode>_vx"
  [(unspec [
    (match_operand:<VM> 0 "register_operand")
    (match_operand:VI 1 "register_operand")
    (match_operand:<VSUB> 2 "reg_or_const_int_operand")
    (match_operand 3 "p_reg_or_const_csr_operand")
    (match_operand 4 "const_int_operand")
   ] MVXOP)]
  "TARGET_VECTOR"
  {
    emit_op5 (
      0,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vx_internal,
      gen_v<vxoptab><vi_to_v64biti>_vx_32bit,
      gen_v<vxoptab><mode>_vv,
      satisfies_constraint_<immptab>,
      2, false
    );
    DONE;
  }
)

;; vxm no tail policy
(define_expand "@v<vxoptab><mode>_vxm"
  [(unspec [
    (match_operand:<VM> 0 "register_operand")
    (match_operand:VI 1 "register_operand")
    (match_operand:<VSUB> 2 "reg_or_const_int_operand")
    (match_operand:<VM> 3 "register_operand")
    (match_operand 4 "p_reg_or_const_csr_operand")
    (match_operand 5 "const_int_operand")
   ] VXMOP_NO_POLICY)]
  "TARGET_VECTOR"
  {
    emit_op6 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vxm_internal,
      gen_v<vxoptab><vi_to_v64biti>_vxm_32bit,
      gen_v<vxoptab><mode>_vvm,
      satisfies_constraint_<immptab>,
      2, false
    );
    DONE;
  }
)

;; compare
(define_expand "@vms<optab><mode>_vx"
  [(match_operand:<VM> 0 "register_operand")
   (match_operand:<VM> 1 "vector_reg_or_const0_operand")
   (match_operand:<VM> 2 "vector_reg_or_const0_operand")
   (cmp_all:<VM> (match_operand:VI 3 "register_operand")
    (vec_duplicate:VI (match_operand:<VSUB> 4 "reg_or_const_int_operand")))
   (match_operand 5 "p_reg_or_const_csr_operand")
   (match_operand 6 "const_int_operand")
  ]
  "TARGET_VECTOR"
  {
    emit_op7 (
      0,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_vms<optab><mode>_vx_internal,
      gen_vms<optab><vi_to_v64biti>_vx_32bit,
      gen_vms<optab><mode>_vv,
      satisfies_constraint_<cmp_imm_p_tab>,
      4, false
    );
    DONE;
  }
)

;; vxm
(define_expand "@v<vxoptab><mode>_vxm"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:VI 1 "vector_reg_or_const0_operand")
    (match_operand:VI 2 "register_operand")
    (match_operand:<VSUB> 3 "reg_or_const_int_operand")
    (match_operand:<VM> 4 "register_operand")
    (match_operand 5 "p_reg_or_const_csr_operand")
    (match_operand 6 "const_int_operand")
   ] VXMOP)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vxm_internal,
      gen_v<vxoptab><vi_to_v64biti>_vxm_32bit,
      gen_v<vxoptab><mode>_vvm,
      satisfies_constraint_<immptab>,
      3, false
    );
    DONE;
  }
)

;; mac
(define_expand "@v<vxoptab><mode>_vx"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:<VM> 1 "vector_reg_or_const0_operand")
    (match_operand:VI 2 "register_operand")
    (match_operand:<VSUB> 3 "reg_or_const_int_operand")
    (match_operand:VI 4 "register_operand")
    (match_operand 5 "p_reg_or_const_csr_operand")
    (match_operand 6 "const_int_operand")
   ] MACOP)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vx_internal,
      gen_v<vxoptab><vi_to_v64biti>_vx_32bit,
      gen_v<vxoptab><mode>_vv,
      satisfies_constraint_<immptab>,
      3, false
    );
    DONE;
  }
)

;; vmerge
(define_expand "@v<vxoptab><mode>_vxm"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:<VM> 1 "register_operand")
    (match_operand:VI 2 "vector_reg_or_const0_operand")
    (match_operand:VI 3 "register_operand")
    (match_operand:<VSUB> 4 "reg_or_const_int_operand")
    (match_operand 5 "p_reg_or_const_csr_operand")
    (match_operand 6 "const_int_operand")
   ] VMERGEOP)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_vxm_internal,
      gen_v<vxoptab><vi_to_v64biti>_vxm_32bit,
      gen_v<vxoptab><mode>_vvm,
      satisfies_constraint_<immptab>,
      4, false
    );
    DONE;
  }
)

;; vmv.s.x
(define_expand "@v<vxoptab><mode>_s_x"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:VI 1 "vector_reg_or_const0_operand")
    (match_operand:<VSUB> 2 "reg_or_const_int_operand")
    (match_operand 3 "p_reg_or_const_csr_operand")
    (match_operand 4 "const_int_operand")
   ] VMVSOP)]
  "TARGET_VECTOR"
  {
    emit_op5 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_v<vxoptab><mode>_s_x_internal,
      gen_v<vxoptab><vi_to_v64biti>_s_x_32bit,
      NULL,
      satisfies_constraint_<immptab>,
      2, false
    );
    DONE;
  }
)

;; vslide1
(define_expand "@vslide1<vxoptab><mode>_vx"
  [(unspec [
    (match_operand:VI 0 "register_operand")
    (match_operand:<VM> 1 "vector_reg_or_const0_operand")
    (match_operand:VI 2 "vector_reg_or_const0_operand")
    (match_operand:VI 3 "register_operand")
    (match_operand:<VSUB> 4 "reg_or_const_int_operand")
    (match_operand 5 "reg_or_const_int_operand")
    (match_operand 6 "const_int_operand")
   ] VSLIDE1)]
  "TARGET_VECTOR"
  {
    emit_op7 (
      <VXOPTAB>,
      <MODE>mode, <VDI_TO_VSI>mode, <VDI_TO_VSI_VM>mode,
      <VSUB>mode,
      operands,
      gen_vslide1<vxoptab><mode>_vx_internal,
      gen_vslide1<vxoptab><vi_to_v64biti>_vx_32bit,
      NULL,
      satisfies_constraint_<immptab>,
      4, false
    );
    DONE;
  }
)

;; helper expand to double the vl operand
(define_expand "vmv_vlx2_help"
  [
    (set (match_operand:SI 0 "register_operand")
      (ashift:SI (match_operand:SI 1 "register_operand")
        (const_int 1)))
    (set (match_operand:SI 2 "register_operand")
      (ltu:SI (match_dup 0) (match_dup 1)))
    (set (match_dup 2)
      (minus:SI (reg:SI X0_REGNUM) (match_dup 2)))
    (set (match_dup 0)
      (ior:SI (match_dup 0) (match_dup 2)))
  ]
  "TARGET_VECTOR"
  ""
)

;; -------------------------------------------------------------------------------
;; ---- 11. Vector Integer Arithmetic Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 11.1 Vector Single-Width Integer Add and Subtract
;; - 11.2 Vector Widening Integer Add/Subtract
;; - 11.3 Vector Integer Extension
;; - 11.4 Vector Integer Add-with-Carry/Subtract-with-Borrow Instructions
;; - 11.5 Vector Bitwise Logical Instructions
;; - 11.6 Vector Single-Width Bit Shift Instructions
;; - 11.7 Vector Narrowing Integer Right Shift Instructions
;; - 11.8 Vector Integer Comparision Instructions
;; - 11.9 Vector Integer Min/Max Instructions
;; - 11.10 Vector Single-Width Integer Multiply Instructions
;; - 11.11 Vector Integer Divide Instructions
;; - 11.12 Vector Widening Integer Multiply Instructions
;; - 11.13 Vector Single-Width Integer Multiply-Add Instructions
;; - 11.14 Vector Widening Integer Multiply-Add Instructions
;; - 11.15 Vector Integer Merge Instructions
;; - 11.16 Vector Integer Move Instructions
;; -------------------------------------------------------------------------------

;; Vector-Vector Integer Add: vadd.vv.
;; optimize the const vector that all elments are
;; 5-bit signed immediate by using vadd.vi.
(define_insn "@vadd<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,  vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,   J,J,J,J")
       (plus:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,   vr,vr,vr,vr")
         (match_operand:VI 4 "vector_arith_operand"         "vr,vr,vi,vi,   vr,vr,vi,vi"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J,       0,J,0,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,   rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadd.vv\t%0,%3,%4,%1.t
   vadd.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%v4,%1.t
   vadd.vi\t%0,%3,%v4,%1.t
   vadd.vv\t%0,%3,%4
   vadd.vv\t%0,%3,%4
   vadd.vi\t%0,%3,%v4
   vadd.vi\t%0,%3,%v4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Integer subtract:vsub.vv
;; Since RVV doesn't have vsub.vi.
;; Optimize this case using vadd.vi for const vector
;; that all elements are 5-bit signed immediate neg value.
(define_insn "@vsub<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (minus:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand:VI 4 "vector_neg_arith_operand"     "vr,vj,vr,vj,vr,vj,vr,vj"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsub.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%V4,%1.t
   vsub.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%V4,%1.t
   vsub.vv\t%0,%3,%4
   vadd.vi\t%0,%3,%V4
   vsub.vv\t%0,%3,%4
   vadd.vi\t%0,%3,%V4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-scalar Integer add: vadd.vx
;; Optimize the const vector that all elements
;; are 5-bit signed immediate value with
;; vadd.vi.
(define_insn "@vadd<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,  vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,   J,J,J,J")
       (plus:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,   vr,vr,vr,vr")
         (vec_duplicate:VI
           (match_operand:<VSUB> 4 "reg_or_simm5_operand"   "r,r,Ws5,Ws5,   r,r,Ws5,Ws5")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J,       0,J,0,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,   rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadd.vx\t%0,%3,%4,%1.t
   vadd.vx\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%4,%1.t
   vadd.vx\t%0,%3,%4
   vadd.vx\t%0,%3,%4
   vadd.vi\t%0,%3,%4
   vadd.vi\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vadd<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (plus:V64BITI
         (match_operand:V64BITI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
         (vec_duplicate:V64BITI
           (sign_extend:<VSUB>
             (match_operand:SI 4 "reg_or_simm5_operand"         "r,Ws5,r,Ws5,r,Ws5,r,Ws5"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadd.vx\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%4,%1.t
   vadd.vx\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%4,%1.t
   vadd.vx\t%0,%3,%4
   vadd.vi\t%0,%3,%4
   vadd.vx\t%0,%3,%4
   vadd.vi\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-scalar Integer sub: vsub.vx
;; Since RVV doesn't have vsub.vi
;; Optimize the const vector that all elements
;; are 5-bit signed immediate neg value with
;; vadd.vi.
(define_insn "@vsub<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,vm,vm,J,J,J,J")
       (minus:VI
        (match_operand:VI 3 "register_operand"                "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 4 "reg_or_neg_simm5_operand"  "r,Wn5,r,Wn5,r,Wn5,r,Wn5")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"     "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    const char *tail = satisfies_constraint_J (operands[1]) ? "" : ",%1.t";
    char buf[64] = {0};
    if (satisfies_constraint_Wn5 (operands[4]))
      {
        const char *insn = "vadd.vi\t%0,%3";
        snprintf (buf, sizeof (buf), "%s,%d%s", insn, (int)(-INTVAL (operands[4])), tail);
      }
    else
      {
        const char *insn = "vsub.vx\t%0,%3,%4";
        snprintf (buf, sizeof (buf), "%s%s", insn, tail);
      }
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vsub<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (minus:V64BITI
        (match_operand:V64BITI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB>
           (match_operand:SI 4 "reg_or_neg_simm5_operand"       "r,Wn5,r,Wn5,r,Wn5,r,Wn5"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    const char *tail = satisfies_constraint_J (operands[1]) ? "" : ",%1.t";
    char buf[64] = {0};
    if (satisfies_constraint_Wn5 (operands[4]))
      {
        const char *insn = "vadd.vi\t%0,%3";
        snprintf (buf, sizeof (buf), "%s,%d%s", insn, (int)(-INTVAL (operands[4])), tail);
      }
    else
      {
        const char *insn = "vsub.vx\t%0,%3,%4";
        snprintf (buf, sizeof (buf), "%s%s", insn, tail);
      }
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar and Vector-immediate
;; Integer Reverse Sub.
(define_insn "@vrsub<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (minus:VI
        (vec_duplicate:VI
         (match_operand:<VSUB> 4 "reg_or_simm5_operand"     "r,Ws5,r,Ws5,r,Ws5,r,Ws5"))
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vrsub.vx\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%4,%1.t
   vrsub.vx\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%4,%1.t
   vrsub.vx\t%0,%3,%4
   vrsub.vi\t%0,%3,%4
   vrsub.vx\t%0,%3,%4
   vrsub.vi\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vrsub<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (minus:V64BITI
        (vec_duplicate:V64BITI
         (sign_extend:<VSUB>
          (match_operand:SI 4 "reg_or_simm5_operand"            "r,Ws5,r,Ws5,r,Ws5,r,Ws5")))
        (match_operand:V64BITI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr"))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vrsub.vx\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%4,%1.t
   vrsub.vx\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%4,%1.t
   vrsub.vx\t%0,%3,%4
   vrsub.vi\t%0,%3,%4
   vrsub.vx\t%0,%3,%4
   vrsub.vi\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; pseudo-instruction vneg.v vd,vs = vrsub.vx vd,vs,x0.
(define_insn "@vneg<mode>_v"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (neg:VI
          (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr"))
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
       (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
       (match_operand 5 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vneg.v\t%0,%3,%1.t
   vneg.v\t%0,%3,%1.t
   vneg.v\t%0,%3
   vneg.v\t%0,%3"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Signed/Unsigned Integer Add/Subtract.
(define_insn "@vw<plus_minus:optab><u><vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (any_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr"))
        (any_extend:<VW>
          (match_operand:VWI 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vw<insn><u>.vv\t%0,%3,%4,%1.t
   vw<insn><u>.vv\t%0,%3,%4,%1.t
   vw<insn><u>.vv\t%0,%3,%4
   vw<insn><u>.vv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Signed/Unsigned Integer Add/Subtract.
(define_insn "@vw<plus_minus:optab><u><vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (plus_minus:<VW>
        (any_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr"))
        (any_extend:<VW>
          (vec_duplicate:VWI
            (match_operand:<VSUB> 4 "reg_or_0_operand"      "r,J,r,J,r,J,r,J"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vw<insn><u>.vx\t%0,%3,%4,%1.t
   vw<insn><u>.vx\t%0,%3,zero,%1.t
   vw<insn><u>.vx\t%0,%3,%4,%1.t
   vw<insn><u>.vx\t%0,%3,zero,%1.t
   vw<insn><u>.vx\t%0,%3,%4
   vw<insn><u>.vx\t%0,%3,zero
   vw<insn><u>.vx\t%0,%3,%4
   vw<insn><u>.vx\t%0,%3,zero"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Signed/Unsigned Integer Add/Subtract.
(define_insn "@vw<plus_minus:optab><u><vw>_wv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (match_operand:<VW> 3 "register_operand"            "vr,vr,vr,vr")
        (any_extend:<VW>
          (match_operand:VWI 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vw<insn><u>.wv\t%0,%3,%4,%1.t
   vw<insn><u>.wv\t%0,%3,%4,%1.t
   vw<insn><u>.wv\t%0,%3,%4
   vw<insn><u>.wv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Signed/Unsigned Integer Add/Subtract.
(define_insn "@vw<plus_minus:optab><u><vw>_wx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (plus_minus:<VW>
        (match_operand:<VW> 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
        (any_extend:<VW>
          (unspec:VWI
             [(match_operand:<VSUB> 4 "reg_or_0_operand"    "r,J,r,J,r,J,r,J")
            ] UNSPEC_VEC_DUPLICATE)))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vw<insn><u>.wx\t%0,%3,%4,%1.t
   vw<insn><u>.wx\t%0,%3,zero,%1.t
   vw<insn><u>.wx\t%0,%3,%4,%1.t
   vw<insn><u>.wx\t%0,%3,zero,%1.t
   vw<insn><u>.wx\t%0,%3,%4
   vw<insn><u>.wx\t%0,%3,zero
   vw<insn><u>.wx\t%0,%3,%4
   vw<insn><u>.wx\t%0,%3,zero"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; pseudo-instruction vwcvt.x.x.v vd,vs,vm = vwadd.vx vd,vs,x0,vm.
(define_insn "@vwcvt<u><vw>_x_x_v"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:<VW>
         [(any_extend:<VW>
           (match_operand:VWI 3 "register_operand"          "vr,vr,vr,vr"))] UNSPEC_DOUBLE_WIDEN)
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwcvt<u>.x.x.v\t%0,%3,%1.t
   vwcvt<u>.x.x.v\t%0,%3,%1.t
   vwcvt<u>.x.x.v\t%0,%3
   vwcvt<u>.x.x.v\t%0,%3"
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<MODE>")])

;; Vector Double-Widening Sign-extend and Zero-extend.
(define_insn "@v<sz>ext<vw>_vf2"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_extend:<VW>
        (match_operand:VWI 3 "register_operand"             "vr,vr,vr,vr"))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sz>ext.vf2\t%0,%3,%1.t
   v<sz>ext.vf2\t%0,%3,%1.t
   v<sz>ext.vf2\t%0,%3
   v<sz>ext.vf2\t%0,%3"
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VW>")])

;; Vector Quad-Widening Sign-extend and Zero-extend.
(define_insn "@v<sz>ext<vqw>_vf4"
  [(set (match_operand:<VQW> 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:<VQW>
    [(unspec:<VQW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
       (any_extend:<VQW>
        (match_operand:VQWI 3 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:<VQW> 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sz>ext.vf4\t%0,%3,%1.t
   v<sz>ext.vf4\t%0,%3,%1.t
   v<sz>ext.vf4\t%0,%3
   v<sz>ext.vf4\t%0,%3"
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VQW>")])

;; Vector Oct-Widening Sign-extend and Zero-extend.
(define_insn "@v<sz>ext<vow>_vf8"
  [(set (match_operand:<VOW> 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:<VOW>
    [(unspec:<VOW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
       (any_extend:<VOW>
        (match_operand:VOWI 3 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:<VOW> 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sz>ext.vf8\t%0,%3,%1.t
   v<sz>ext.vf8\t%0,%3,%1.t
   v<sz>ext.vf8\t%0,%3
   v<sz>ext.vf8\t%0,%3"
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VOW>")])

;; Vector Integer Add-with-Carry/Subtract-with-Borrow Instructions
;; For vadc and vsbc, the instruction encoding is reserved if the destination
;; vector register is v0.
;; Vector-Vector Produce sum with carry.
(define_insn "@vadc<mode>_vvm"
  [(set (match_operand:VI 0 "register_operand"          "=vd,vd,vd,vd")
  (unspec:VI
    [(match_operand:VI 1 "vector_reg_or_const0_operand" "0,0,J,J")
     (plus:VI
       (plus:VI
         (match_operand:VI 2 "register_operand"         "vr,vr,vr,vr")
         (match_operand:VI 3 "vector_arith_operand"     "vr,vi,vr,vi"))
       (if_then_else:VI
         (match_operand:<VM> 4 "register_operand"       "vm,vm,vm,vm")
         (vec_duplicate:VI (const_int 1))
         (vec_duplicate:VI (const_int 0))))
     (match_operand 5 "p_reg_or_const_csr_operand"      "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadc.vvm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%v3,%4
   vadc.vvm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%v3,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Produce difference with borrow.
(define_insn "@vsbc<mode>_vvm"
  [(set (match_operand:VI 0 "register_operand"          "=vd,vd")
  (unspec:VI
    [(match_operand:VI 1 "vector_reg_or_const0_operand" "0,J")
     (minus:VI
       (minus:VI
         (match_operand:VI 2 "register_operand"         "vr,vr")
         (match_operand:VI 3 "register_operand"         "vr,vr"))
       (if_then_else:VI
         (match_operand:<VM> 4 "register_operand"       "vm,vm")
         (vec_duplicate:VI (const_int 1))
         (vec_duplicate:VI (const_int 0))))
     (match_operand 5 "p_reg_or_const_csr_operand"      "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vsbc.vvm\t%0,%2,%3,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Produce sum with carry.
(define_insn "@vadc<mode>_vxm_internal"
  [(set (match_operand:VI 0 "register_operand"            "=vd,vd,vd,vd")
  (unspec:VI
    [(match_operand:VI 1 "vector_reg_or_const0_operand"   "0,0,J,J")
      (plus:VI
       (plus:VI
         (match_operand:VI 2 "register_operand"           "vr,vr,vr,vr")
         (vec_duplicate:VI
           (match_operand:<VSUB> 3 "reg_or_simm5_operand" "r,Ws5,r,Ws5")))
       (if_then_else:VI
         (match_operand:<VM> 4 "register_operand"         "vm,vm,vm,vm")
         (vec_duplicate:VI (const_int 1))
         (vec_duplicate:VI (const_int 0))))
     (match_operand 5 "p_reg_or_const_csr_operand"        "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadc.vxm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%3,%4
   vadc.vxm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%3,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

(define_insn "@vadc<mode>_vxm_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"           "=vd,vd,vd,vd")
  (unspec:V64BITI
    [(match_operand:V64BITI 1 "vector_reg_or_const0_operand"  "0,0,J,J")
      (plus:V64BITI
       (plus:V64BITI
         (match_operand:V64BITI 2 "register_operand"          "vr,vr,vr,vr")
         (vec_duplicate:V64BITI
           (sign_extend:<VSUB>
            (match_operand:SI 3 "reg_or_simm5_operand"        "r,Ws5,r,Ws5"))))
       (if_then_else:V64BITI
         (match_operand:<VM> 4 "register_operand"             "vm,vm,vm,vm")
         (vec_duplicate:V64BITI (const_int 1))
         (vec_duplicate:V64BITI (const_int 0))))
     (match_operand:SI 5 "csr_operand"                        "rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vadc.vxm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%3,%4
   vadc.vxm\t%0,%2,%3,%4
   vadc.vim\t%0,%2,%3,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Scalar difference with borrow.
(define_insn "@vsbc<mode>_vxm_internal"
  [(set (match_operand:VI 0 "register_operand"          "=vd,vd,vd,vd")
  (unspec:VI
    [(match_operand:VI 1 "vector_reg_or_const0_operand" "0,0,J,J")
     (minus:VI
       (minus:VI
         (match_operand:VI 2 "register_operand"         "vr,vr,vr,vr")
         (vec_duplicate:VI
           (match_operand:<VSUB> 3 "reg_or_0_operand"   "r,J,r,J")))
       (if_then_else:VI
         (match_operand:<VM> 4 "register_operand"       "vm,vm,vm,vm")
         (vec_duplicate:VI (const_int 1))
         (vec_duplicate:VI (const_int 0))))
     (match_operand 5 "p_reg_or_const_csr_operand"      "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsbc.vxm\t%0,%2,%3,%4
   vsbc.vxm\t%0,%2,zero,%4
   vsbc.vxm\t%0,%2,%3,%4
   vsbc.vxm\t%0,%2,zero,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

(define_insn "@vsbc<mode>_vxm_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                   "=vd,vd,vd,vd")
  (unspec:V64BITI
    [(match_operand:V64BITI 1 "vector_reg_or_const0_operand"          "0,0,J,J")
     (minus:V64BITI
       (minus:V64BITI
         (match_operand:V64BITI 2 "register_operand"                  "vr,vr,vr,vr")
         (vec_duplicate:V64BITI
           (sign_extend:<VSUB> (match_operand:SI 3 "reg_or_0_operand" "r,J,r,J"))))
       (if_then_else:V64BITI
         (match_operand:<VM> 4 "register_operand"                     "vm,vm,vm,vm")
         (vec_duplicate:V64BITI (const_int 1))
         (vec_duplicate:V64BITI (const_int 0))))
     (match_operand:SI 5 "csr_operand"                                "rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsbc.vxm \t%0,%2,%3,%4
   vsbc.vxm \t%0,%2,zero,%4
   vsbc.vxm \t%0,%2,%3,%4
   vsbc.vxm \t%0,%2,zero,%4"
  [(set_attr "type" "vadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Produce carry out in mask register format.
(define_insn "@vmadc<mode>_vvm"
  [(set (match_operand:<VM> 0 "register_operand"    "=&vr,&vr")
  (unspec:<VM>
    [(plus:VI
      (plus:VI
        (match_operand:VI 1 "register_operand"      "vr,vr")
        (match_operand:VI 2 "vector_arith_operand"  "vr,vi"))
      (if_then_else:VI
        (match_operand:<VM> 3 "register_operand"    "vm,vm")
        (vec_duplicate:VI (const_int 1))
        (vec_duplicate:VI (const_int 0))))
     (match_operand 4 "p_reg_or_const_csr_operand"  "rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vvm\t%0,%1,%2,%3
   vmadc.vim\t%0,%1,%v2,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Produce borrow out in mask register format.
(define_insn "@vmsbc<mode>_vvm"
  [(set (match_operand:<VM> 0 "register_operand"  "=&vr")
  (unspec:<VM>
    [(minus:VI
      (minus:VI
        (match_operand:VI 1 "register_operand"      "vr")
        (match_operand:VI 2 "register_operand"      "vr"))
      (if_then_else:VI
        (match_operand:<VM> 3 "register_operand"    "vm")
        (vec_duplicate:VI (const_int 1))
        (vec_duplicate:VI (const_int 0))))
     (match_operand 4 "p_reg_or_const_csr_operand"  "rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vmsbc.vvm\t%0,%1,%2,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Produce carry out in mask register format.
(define_insn "@vmadc<mode>_vxm_internal"
  [(set (match_operand:<VM> 0 "register_operand"          "=&vr,&vr")
  (unspec:<VM>
    [(plus:VI
      (plus:VI
        (match_operand:VI 1 "register_operand"            "vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_simm5_operand"  "r,Ws5")))
      (if_then_else:VI
        (match_operand:<VM> 3 "register_operand"          "vm,vm")
        (vec_duplicate:VI (const_int 1))
        (vec_duplicate:VI (const_int 0))))
     (match_operand 4 "p_reg_or_const_csr_operand"        "rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vxm\t%0,%1,%2,%3
   vmadc.vim\t%0,%1,%2,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmadc<mode>_vxm_32bit"
  [(set (match_operand:<VM> 0 "register_operand"        "=&vr,&vr")
  (unspec:<VM>
    [(plus:V64BITI
      (plus:V64BITI
        (match_operand:V64BITI 1 "register_operand"     "vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB>
            (match_operand:SI 2 "reg_or_simm5_operand"  "r,Ws5"))))
      (if_then_else:V64BITI
        (match_operand:<VM> 3 "register_operand"        "vm,vm")
        (vec_duplicate:V64BITI (const_int 1))
        (vec_duplicate:V64BITI (const_int 0))))
     (match_operand:SI 4 "csr_operand"                  "rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vxm\t%0,%1,%2,%3
   vmadc.vim\t%0,%1,%2,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Produce borrow out in mask register format.
(define_insn "@vmsbc<mode>_vxm_internal"
  [(set (match_operand:<VM> 0 "register_operand"      "=&vr,&vr")
  (unspec:<VM>
    [(minus:VI
      (minus:VI
        (match_operand:VI 1 "register_operand"        "vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_0_operand"  "r,J")))
      (if_then_else:VI
        (match_operand:<VM> 3 "register_operand"      "vm,vm")
        (vec_duplicate:VI (const_int 1))
        (vec_duplicate:VI (const_int 0))))
     (match_operand 4 "p_reg_or_const_csr_operand"    "rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmsbc.vxm\t%0,%1,%2,%3
   vmsbc.vxm\t%0,%1,zero,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmsbc<mode>_vxm_32bit"
  [(set (match_operand:<VM> 0 "register_operand"    "=&vr,&vr")
  (unspec:<VM>
    [(minus:V64BITI
      (minus:V64BITI
        (match_operand:V64BITI 1 "register_operand" "vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB>
            (match_operand:SI 2 "reg_or_0_operand"  "r,J"))))
      (if_then_else:V64BITI
        (match_operand:<VM> 3 "register_operand"    "vm,vm")
        (vec_duplicate:V64BITI (const_int 1))
        (vec_duplicate:V64BITI (const_int 0))))
     (match_operand:SI 4 "csr_operand"              "rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmsbc.vxm\t%0,%1,%2,%3
   vmsbc.vxm\t%0,%1,zero,%3"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Produce carry out in mask register format.
(define_insn "@vmadc<mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand"    "=&vr,&vr")
    (unspec:<VM>
      [(plus:VI
        (match_operand:VI 1 "register_operand"      "vr,vr")
        (match_operand:VI 2 "vector_arith_operand"  "vr,vi"))
      (match_operand 3 "p_reg_or_const_csr_operand" "rK,rK")
      (match_operand 4 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vv\t%0,%1,%2
   vmadc.vi\t%0,%1,%v2"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Produce borrow out in mask register format.
(define_insn "@vmsbc<mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand"    "=&vr")
  (unspec:<VM>
    [(minus:VI
      (match_operand:VI 1 "register_operand"        "vr")
      (match_operand:VI 2 "register_operand"        "vr"))
     (match_operand 3 "p_reg_or_const_csr_operand"  "rK")
     (match_operand 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vmsbc.vv\t%0,%1,%2"
  [(set_attr "type" "vmadc")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Produce carry out in mask register format.
(define_insn "@vmadc<mode>_vx_internal"
  [(set (match_operand:<VM> 0 "register_operand"          "=&vr,&vr")
    (unspec:<VM>
      [(plus:VI
        (match_operand:VI 1 "register_operand"            "vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_simm5_operand"  "r,Ws5")))
       (match_operand 3 "p_reg_or_const_csr_operand"      "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vx\t%0,%1,%2
   vmadc.vi\t%0,%1,%2"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmadc<mode>_vx_32bit"
  [(set (match_operand:<VM> 0 "register_operand"        "=&vr,&vr")
    (unspec:<VM>
      [(plus:V64BITI
        (match_operand:V64BITI 1 "register_operand"     "vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB>
            (match_operand:SI 2 "reg_or_simm5_operand"  "r,Ws5"))))
       (match_operand:SI 3 "csr_operand"                "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmadc.vx \t%0,%1,%2
   vmadc.vi \t%0,%1,%2"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Produce borrow out in mask register format.
(define_insn "@vmsbc<mode>_vx_internal"
  [(set (match_operand:<VM> 0 "register_operand"      "=&vr,&vr")
    (unspec:<VM>
      [(minus:VI
        (match_operand:VI 1 "register_operand"        "vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 2 "reg_or_0_operand"  "r,J")))
       (match_operand 3 "p_reg_or_const_csr_operand"  "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmsbc.vx\t%0,%1,%2
   vmsbc.vx\t%0,%1,zero"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmsbc<mode>_vx_32bit"
  [(set (match_operand:<VM> 0 "register_operand"    "=&vr,&vr")
    (unspec:<VM>
      [(minus:V64BITI
        (match_operand:V64BITI 1 "register_operand" "vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB>
            (match_operand:SI 2 "reg_or_0_operand"  "r,J"))))
       (match_operand:SI 3 "csr_operand"            "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmsbc.vx \t%0,%1,%2
   vmsbc.vx \t%0,%1,zero"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Bitwise logical operations.
(define_insn "@v<optab><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_bitwise:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand:VI 4 "vector_arith_operand"         "vr,vi,vr,vi,vr,vi,vr,vi"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Bitwise logical operations.
(define_insn "@v<optab><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_bitwise:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 4 "reg_or_simm5_operand"    "r,Ws5,r,Ws5,r,Ws5,r,Ws5")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vlogical")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<optab><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                       "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"               "vm,vm,vm,vm,J,J,J,J")
       (any_bitwise:V64BITI
        (match_operand:V64BITI 3 "register_operand"                       "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_simm5_operand"  "r,Ws5,r,Ws5,r,Ws5,r,Ws5"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"            "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                                    "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vlogical")
   (set_attr "mode" "<MODE>")])

;; pseudo-instruction vnot.v vd,vs = vxor.vi vd,vs,-1.
(define_insn "@vnot<mode>_v"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (not:VI
          (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr"))
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
       (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
       (match_operand 5 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vnot.v\t%0,%3,%1.t
   vnot.v\t%0,%3,%1.t
   vnot.v\t%0,%3
   vnot.v\t%0,%3"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Bit shift operations.
(define_insn "@v<optab><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_shift:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand:VI 4 "vector_arith_operand"         "vr,vk,vr,vk,vr,vk,vr,vk"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Bit shift operations.
(define_insn "@v<optab><mode>_vx"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_shift:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (match_operand 4 "p_reg_or_uimm5_operand"           "r,K,r,K,r,K,r,K"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vshift")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Narrowing Integer Right Shift Instructions.
(define_insn "@vn<optab><mode>_wv"
  [(set (match_operand:VWI 0 "register_operand"             "=vd,vd,&vd,vd,&vd,   vd,vd,&vd,vd,&vd,   vr,vr,&vr,vr,&vr,   vr,vr,&vr,vr,&vr")
  (unspec:VWI
    [(unspec:VWI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,vm,      vm,vm,vm,vm,vm,     J,J,J,J,J,          J,J,J,J,J")
       (truncate:VWI
         (any_shiftrt:<VW>
           (match_operand:<VW> 3 "register_operand"         "0,vr,vr,0,vr,        0,vr,vr,0,vr,       0,vr,vr,0,vr,       0,vr,vr,0,vr")
           (match_operand:VWI 4 "vector_shift_operand"      "vr,0,vr,vk,vk,       vr,0,vr,vk,vk,      vr,0,vr,vk,vk,      vr,0,vr,vk,vk")))
       (match_operand:VWI 2 "vector_reg_or_const0_operand"  "0,0,0,0,0,           J,J,J,J,J,          0,0,0,0,0,          J,J,J,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,      rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%v4,%1.t
   vn<insn>.wi\t%0,%3,%v4,%1.t
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wv\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%v4,%1.t
   vn<insn>.wi\t%0,%3,%v4,%1.t
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%v4
   vn<insn>.wi\t%0,%3,%v4
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wv\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%v4
   vn<insn>.wi\t%0,%3,%v4"
  [(set_attr "type" "vshift")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Narrowing Integer Right Shift Instructions.
(define_insn "@vn<optab><mode>_wx"
  [(set (match_operand:VWI 0 "register_operand"             "=vd,&vd,vd,&vd,  vd,&vd,vd,&vd,  vr,&vr,vr,&vr,  vr,&vr,vr,&vr")
  (unspec:VWI
    [(unspec:VWI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,     vm,vm,vm,vm,    J,J,J,J,        J,J,J,J")
        (truncate:VWI
        (any_shiftrt:<VW>
          (match_operand:<VW> 3 "register_operand"          "0,vr,0,vr,       0,vr,0,vr,      0,vr,0,vr,      0,vr,0,vr")
          (match_operand 4 "p_reg_or_uimm5_operand"         "r,r,K,K,         r,r,K,K,        r,r,K,K,        r,r,K,K")))
       (match_operand:VWI 2 "vector_reg_or_const0_operand"  "0,0,0,0,         J,J,J,J,        0,0,0,0,        J,J,J,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,     rK,rK,rK,rK,    rK,rK,rK,rK,    rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vn<insn>.wx\t%0,%3,%4,%1.t
   vn<insn>.wx\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%4,%1.t
   vn<insn>.wx\t%0,%3,%4,%1.t
   vn<insn>.wx\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%4,%1.t
   vn<insn>.wi\t%0,%3,%4,%1.t
   vn<insn>.wx\t%0,%3,%4
   vn<insn>.wx\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%4
   vn<insn>.wx\t%0,%3,%4
   vn<insn>.wx\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%4
   vn<insn>.wi\t%0,%3,%4"
  [(set_attr "type" "vshift")
   (set_attr "mode" "<MODE>")])

;; pseudo-instruction vncvt.x.x.w vd,vs,vm = vnsrl.wx vd,vs,x0,vm.
(define_insn "@vncvt<mode>_x_x_w"
  [(set (match_operand:VWI 0 "register_operand"               "=vd,&vd,   vd,&vd,   vr,&vr,   vr,&vr")
  (unspec:VWI
    [(unspec:VWI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,     vm,vm,    J,J,      J,J")
       (truncate:VWI
        (match_operand:<VW> 3 "register_operand"              "0,vr,      0,vr,     0,vr,     0,vr"))
       (match_operand:VWI 2 "vector_reg_or_const0_operand"    "0,0,       J,J,      0,0,      J,J")
      ] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,     rK,rK,    rK,rK,    rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vncvt.x.x.w\t%0,%3,%1.t
   vncvt.x.x.w\t%0,%3,%1.t
   vncvt.x.x.w\t%0,%3,%1.t
   vncvt.x.x.w\t%0,%3,%1.t
   vncvt.x.x.w\t%0,%3
   vncvt.x.x.w\t%0,%3
   vncvt.x.x.w\t%0,%3
   vncvt.x.x.w\t%0,%3"
  [(set_attr "type" "vshift")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Integer Comparision Instructions.
(define_insn "@vms<optab><mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand"              "=vr,vr,vm,&vr,vr,vm,&vr,   vr,vr,vm,&vr,vr,vm,&vr,   vr,vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,0,vm,vm,0,vm,        vm,vm,0,vm,vm,0,vm,       J,J,J,J,J")
         (cmp_noltge:<VM>
           (match_operand:VI 3 "register_operand"             "0,vr,vr,vr,0,vr,vr,        0,vr,vr,vr,0,vr,vr,       0,vr,vr,0,vr")
           (match_operand:VI 4 "vector_arith_operand"         "vr,0,vr,vr,vi,vi,vi,       vr,0,vr,vr,vi,vi,vi,      vr,0,vr,vi,vi"))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand" "0,0,0,0,0,0,0,             J,J,J,J,J,J,J,            J,J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,      rK,rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%v4
   vms<insn>.vi\t%0,%3,%v4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_insn "@vms<optab><mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand"                "=vr,vr,vm,&vr,vr,vm,&vr,   vr,vr,vm,&vr,vr,vm,&vr,   vr,vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,0,vm,vm,0,vm,        vm,vm,0,vm,vm,0,vm,       J,J,J,J,J")
         (cmp_ltge:<VM>
           (match_operand:VI 3 "register_operand"               "0,vr,vr,vr,0,vr,vr,        0,vr,vr,vr,0,vr,vr,       0,vr,vr,0,vr")
           (match_operand:VI 4 "vector_neg_arith_operand"       "vr,0,vr,vr,vj,vj,vj,       vr,0,vr,vr,vj,vj,vj,      vr,0,vr,vj,vj"))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"   "0,0,0,0,0,0,0,             J,J,J,J,J,J,J,            J,J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK,rK,rK,rK,      rK,rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vv\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vi\t%0,%3,%v4,%1.t
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vv\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%v4
   vms<insn>.vi\t%0,%3,%v4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Integer Comparision Instructions.
(define_insn "@vms<optab><mode>_vx_internal"
  [(set (match_operand:<VM> 0 "register_operand"                "=vr,vm,&vr,vr,vm,&vr,  vr,vm,&vr,vr,vm,&vr,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,0,vm,vm,0,vm,       vm,0,vm,vm,0,vm,      J,J,J,J")
         (cmp_noltge:<VM>
           (match_operand:VI 3 "register_operand"               "0,vr,vr,0,vr,vr,       0,vr,vr,0,vr,vr,      0,vr,0,vr")
           (vec_duplicate:VI
             (match_operand:<VSUB> 4 "reg_or_simm5_operand"     "r,r,r,Ws5,Ws5,Ws5,     r,r,r,Ws5,Ws5,Ws5,    r,r,Ws5,Ws5")))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"   "0,0,0,0,0,0,           J,J,J,J,J,J,          J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,rK,    rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_insn "@vms<optab><mode>_vx_32bit"
  [(set (match_operand:<VM> 0 "register_operand"                            "=vr,vm,&vr,vr,vm,&vr,  vr,vm,&vr,vr,vm,&vr,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"               "vm,0,vm,vm,0,vm,       vm,0,vm,vm,0,vm,      J,J,J,J")
         (cmp_noltge:<VM>
           (match_operand:V64BITI 3 "register_operand"                      "0,vr,vr,0,vr,vr,       0,vr,vr,0,vr,vr,      0,vr,0,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_simm5_operand" "r,r,r,Ws5,Ws5,Ws5,     r,r,r,Ws5,Ws5,Ws5,    r,r,Ws5,Ws5"))))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"               "0,0,0,0,0,0,           J,J,J,J,J,J,          J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand:SI 5 "csr_operand"                                    "rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,rK,    rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_insn "@vms<optab><mode>_vx_internal"
  [(set (match_operand:<VM> 0 "register_operand"                  "=vr,vm,&vr,vr,vm,&vr,  vr,vm,&vr,vr,vm,&vr,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,0,vm,vm,0,vm,       vm,0,vm,vm,0,vm,      J,J,J,J")
         (cmp_lt:<VM>
           (match_operand:VI 3 "register_operand"                 "0,vr,vr,0,vr,vr,       0,vr,vr,0,vr,vr,      0,vr,0,vr")
           (vec_duplicate:VI
             (match_operand:<VSUB> 4 "reg_or_neg_simm5_operand"   "r,r,r,Wn5,Wn5,Wn5,     r,r,r,Wn5,Wn5,Wn5,    r,r,Wn5,Wn5")))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"     "0,0,0,0,0,0,           J,J,J,J,J,J,          J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"              "rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,rK,    rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_insn "@vms<optab><mode>_vx_32bit"
  [(set (match_operand:<VM> 0 "register_operand"                                "=vr,vm,&vr,vr,vm,&vr,  vr,vm,&vr,vr,vm,&vr,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"                   "vm,0,vm,vm,0,vm,       vm,0,vm,vm,0,vm,      J,J,J,J")
         (cmp_lt:<VM>
           (match_operand:V64BITI 3 "register_operand"                          "0,vr,vr,0,vr,vr,       0,vr,vr,0,vr,vr,      0,vr,0,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_neg_simm5_operand" "r,r,r,Wn5,Wn5,Wn5,     r,r,r,Wn5,Wn5,Wn5,    r,r,Wn5,Wn5"))))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"                   "0,0,0,0,0,0,           J,J,J,J,J,J,          J,J,J,J")
        ] UNSPEC_SELECT)
       (match_operand:SI 5 "csr_operand"                                        "rK,rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,rK,    rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_expand "@vms<optab><mode>_vx_internal"
  [(parallel
    [(set (match_operand:<VM> 0 "register_operand")
      (unspec:<VM>
        [(unspec:<VM>
          [(match_operand:<VM> 1 "vector_reg_or_const0_operand")
           (cmp_ge:<VM>
             (match_operand:VI 3 "register_operand")
             (vec_duplicate:VI
               (match_operand:<VSUB> 4 "reg_or_neg_simm5_operand")))
           (match_operand:<VM> 2 "vector_reg_or_const0_operand")] UNSPEC_SELECT)
          (match_operand 5 "p_reg_or_const_csr_operand")
          (match_operand 6 "const_int_operand")
          (reg:SI VL_REGNUM)
          (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
     (clobber (scratch:<VM>))])]
  "TARGET_VECTOR"
  {
  })

(define_expand "@vms<optab><mode>_vx_32bit"
  [(parallel
    [(set (match_operand:<VM> 0 "register_operand")
      (unspec:<VM>
        [(unspec:<VM>
          [(match_operand:<VM> 1 "vector_reg_or_const0_operand")
           (cmp_ge:<VM>
             (match_operand:V64BITI 3 "register_operand")
             (vec_duplicate:V64BITI
               (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_neg_simm5_operand"))))
           (match_operand:<VM> 2 "vector_reg_or_const0_operand")] UNSPEC_SELECT)
          (match_operand:SI 5 "csr_operand")
          (match_operand 6 "const_int_operand")
          (reg:SI VL_REGNUM)
          (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
     (clobber (scratch:<VM>))])]
  "TARGET_VECTOR"
  {
  })

;; When destination EEW is smaller than this source EEW, destination register and source register overlap in the
;; lowest-numbered part of the source register grop according to vector spec(at 5.2. Vector Operands). All
;; insructions are: integer and floating-point compare instructions, narrowing integer right shift instructions,
;;   narrowing fixed-point clip instructions.
;; So change case 1 to case 2 to allow the overlap case, and let overlap case has high priority.
;;    case 1:                   case 2:
;;    match_operand 0 &vr       match_operand 0 vr, ?&vr
;;    match_operand 3 vr        match_operand 3 0,  vr
(define_insn "*vms<optab><mode>_vx"
  [(set (match_operand:<VM> 0 "register_operand"                "=vm, vd,&vd,vd,&vd,  &vd,vd,vd,&vd,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "0,   vm,vm,vm,vm,    vm,vm,vm,vm,    J,J,J,J")
         (cmp_ge:<VM>
           (match_operand:VI 3 "register_operand"               "vr,  0,vr,0,vr,      vr,0,0,vr,      0,vr,0,vr")
           (vec_duplicate:VI
             (match_operand:<VSUB> 4 "reg_or_neg_simm5_operand" "r,   r,r,Wn5,Wn5,    r,r,Wn5,Wn5,    r,r,Wn5,Wn5")))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"   "0,   0,0,0,0,        J,J,J,J,        J,J,J,J")
        ] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"             "rK,  rK,rK,rK,rK,    rK,rK,rK,rK,    rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
   (clobber (match_scratch:<VM> 7                               "=&vr,X,X,X,X,        X,X,X,X,        X,X,X,X"))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t,%7
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

(define_insn "*vms<optab><mode>_vx_32bit"
  [(set (match_operand:<VM> 0 "register_operand"                                "=vm, vd,&vd,vd,&vd,  &vd,vd,vd,&vd,  vr,&vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"                   "0,   vm,vm,vm,vm,    vm,vm,vm,vm,    J,J,J,J")
         (cmp_ge:<VM>
           (match_operand:V64BITI 3 "register_operand"                          "vr,  0,vr,0,vr,      vr,0,0,vr,      0,vr,0,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_neg_simm5_operand" "r,   r,r,Wn5,Wn5,    r,r,Wn5,Wn5,    r,r,Wn5,Wn5"))))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand"                   "0,   0,0,0,0,        J,J,J,J,        J,J,J,J")
        ] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"                             "rK,  rK,rK,rK,rK,    rK,rK,rK,rK,    rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
   (clobber (match_scratch:<VM> 7                                               "=&vr,X,X,X,X,        X,X,X,X,        X,X,X,X"))]
  "TARGET_VECTOR"
  "@
   vms<insn>.vx\t%0,%3,%4,%1.t,%7
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vi\t%0,%3,%4,%1.t
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vx\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4
   vms<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Integer Signed/Unsigned Minimum/Maximum.
(define_insn "@v<optab><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_minmax:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr")
         (match_operand:VI 4 "register_operand"             "vr,vr,vr,vr"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")
      ] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vv\t%0,%3,%4
   v<insn>.vv\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Signed/Unsigned min/max.
(define_insn "@v<optab><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_minmax:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 4 "reg_or_0_operand"        "r,J,r,J,r,J,r,J")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<optab><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                   "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"           "vm,vm,vm,vm,J,J,J,J")
       (any_minmax:V64BITI
        (match_operand:V64BITI 3 "register_operand"                   "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_0_operand"  "r,J,r,J,r,J,r,J"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"        "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                                "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Signed multiply, returning low bits of product.
(define_insn "@vmul<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (mult:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr")
         (match_operand:VI 4 "register_operand"             "vr,vr,vr,vr"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmul.vv\t%0,%3,%4,%1.t
   vmul.vv\t%0,%3,%4,%1.t
   vmul.vv\t%0,%3,%4
   vmul.vv\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Signed multiply, returning low bits of product.
(define_insn "@vmul<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (mult:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
          (match_operand:<VSUB> 4 "reg_or_0_operand"        "r,J,r,J,r,J,r,J")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmul.vx\t%0,%3,%4,%1.t
   vmul.vx\t%0,%3,zero,%1.t
   vmul.vx\t%0,%3,%4,%1.t
   vmul.vx\t%0,%3,zero,%1.t
   vmul.vx\t%0,%3,%4
   vmul.vx\t%0,%3,zero
   vmul.vx\t%0,%3,%4
   vmul.vx\t%0,%3,zero"
  [(set_attr "type" "vmul")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmul<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                   "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"           "vm,vm,vm,vm,J,J,J,J")
       (mult:V64BITI
        (match_operand:V64BITI 3 "register_operand"                   "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:V64BITI
          (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_0_operand"  "r,J,r,J,r,J,r,J"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"        "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                                "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmul.vx\t%0,%3,%4,%1.t
   vmul.vx\t%0,%3,zero,%1.t
   vmul.vx\t%0,%3,%4,%1.t
   vmul.vx\t%0,%3,zero,%1.t
   vmul.vx\t%0,%3,%4
   vmul.vx\t%0,%3,zero
   vmul.vx\t%0,%3,%4
   vmul.vx\t%0,%3,zero"
  [(set_attr "type" "vmul")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Signed/Unsigned highpart multiply, returning high bits of product.
(define_insn "@vmulh<u><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VI
        [(match_operand:VI 3 "register_operand"             "vr,vr,vr,vr")
         (match_operand:VI 4 "register_operand"             "vr,vr,vr,vr")]
         MUL_HIGHPART)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulh<u>.vv\t%0,%3,%4,%1.t
   vmulh<u>.vv\t%0,%3,%4,%1.t
   vmulh<u>.vv\t%0,%3,%4
   vmulh<u>.vv\t%0,%3,%4"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Signed/Unsigned multiply, returning high bits of product.
(define_insn "@vmulh<u><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (unspec:VI
  	     [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
  	      (match_operand:<VSUB> 4 "reg_or_0_operand"        "r,J,r,J,r,J,r,J")]
         MUL_HIGHPART)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulh<u>.vx\t%0,%3,%4,%1.t
   vmulh<u>.vx\t%0,%3,zero,%1.t
   vmulh<u>.vx\t%0,%3,%4,%1.t
   vmulh<u>.vx\t%0,%3,zero,%1.t
   vmulh<u>.vx\t%0,%3,%4
   vmulh<u>.vx\t%0,%3,zero
   vmulh<u>.vx\t%0,%3,%4
   vmulh<u>.vx\t%0,%3,zero"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmulh<u><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (unspec:V64BITI
  	     [(match_operand:V64BITI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr")
  	      (match_operand:SI 4 "reg_or_0_operand"                "r,J,r,J,r,J,r,J")]
         MUL_HIGHPART)
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulh<u>.vx\t%0,%3,%4,%1.t
   vmulh<u>.vx\t%0,%3,zero,%1.t
   vmulh<u>.vx\t%0,%3,%4,%1.t
   vmulh<u>.vx\t%0,%3,zero,%1.t
   vmulh<u>.vx\t%0,%3,%4
   vmulh<u>.vx\t%0,%3,zero
   vmulh<u>.vx\t%0,%3,%4
   vmulh<u>.vx\t%0,%3,zero"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Signed(vs2)-Unsigned multiply, returning high bits of product.
(define_insn "@vmulhsu<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VI
  	       [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr")
  	        (match_operand:VI 4 "register_operand"            "vr,vr,vr,vr")] UNSPEC_VMULHSU)
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulhsu.vv\t%0,%3,%4,%1.t
   vmulhsu.vv\t%0,%3,%4,%1.t
   vmulhsu.vv\t%0,%3,%4
   vmulhsu.vv\t%0,%3,%4"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Signed(vs2)-Unsigned multiply, returning high bits of product.
(define_insn "@vmulhsu<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (unspec:VI
  	     [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
  	      (match_operand:<VSUB> 4 "reg_or_0_operand"        "r,J,r,J,r,J,r,J")]
         UNSPEC_VMULHSU)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulhsu.vx\t%0,%3,%4,%1.t
   vmulhsu.vx\t%0,%3,zero,%1.t
   vmulhsu.vx\t%0,%3,%4,%1.t
   vmulhsu.vx\t%0,%3,zero,%1.t
   vmulhsu.vx\t%0,%3,%4
   vmulhsu.vx\t%0,%3,zero
   vmulhsu.vx\t%0,%3,%4
   vmulhsu.vx\t%0,%3,zero"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmulhsu<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (unspec:V64BITI
  	     [(match_operand:V64BITI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr")
  	      (match_operand:SI 4 "reg_or_0_operand"                "r,J,r,J,r,J,r,J")]
         UNSPEC_VMULHSU)
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmulhsu.vx\t%0,%3,%4,%1.t
   vmulhsu.vx\t%0,%3,zero,%1.t
   vmulhsu.vx\t%0,%3,%4,%1.t
   vmulhsu.vx\t%0,%3,zero,%1.t
   vmulhsu.vx\t%0,%3,%4
   vmulhsu.vx\t%0,%3,zero
   vmulhsu.vx\t%0,%3,%4
   vmulhsu.vx\t%0,%3,zero"
  [(set_attr "type" "vmulh")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Signed/Unsigned divide/remainder.
(define_insn "@v<optab><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_div:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr")
         (match_operand:VI 4 "register_operand"             "vr,vr,vr,vr"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vv\t%0,%3,%4
   v<insn>.vv\t%0,%3,%4"
  [(set_attr "type" "vdiv")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Signed/Unsigned divide/remainder.
(define_insn "@v<optab><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
     [(match_operand:<VM> 1 "vector_reg_or_const0_operand"  "vm,vm,vm,vm,J,J,J,J")
      (any_div:VI
       (match_operand:VI 3 "register_operand"               "vr,vr,vr,vr,vr,vr,vr,vr")
       (vec_duplicate:VI
         (match_operand:<VSUB> 4 "reg_or_0_operand"         "r,J,r,J,r,J,r,J")))
      (match_operand:VI 2 "vector_reg_or_const0_operand"    "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero"
  [(set_attr "type" "vdiv")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<optab><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                 "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
     [(match_operand:<VM> 1 "vector_reg_or_const0_operand"          "vm,vm,vm,vm,J,J,J,J")
      (any_div:V64BITI
       (match_operand:V64BITI 3 "register_operand"                  "vr,vr,vr,vr,vr,vr,vr,vr")
       (vec_duplicate:V64BITI
         (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_0_operand" "r,J,r,J,r,J,r,J"))))
      (match_operand:V64BITI 2 "vector_reg_or_const0_operand"       "0,0,J,J,0,0,J,J")
      ] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                              "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,zero,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero
   v<insn>.vx\t%0,%3,%4
   v<insn>.vx\t%0,%3,zero"
  [(set_attr "type" "vdiv")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Signed/Unsigned Integer multiply.
(define_insn "@vwmul<u><vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr"))
        (any_extend:<VW>
          (match_operand:VWI 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmul<u>.vv\t%0,%3,%4,%1.t
   vwmul<u>.vv\t%0,%3,%4,%1.t
   vwmul<u>.vv\t%0,%3,%4
   vwmul<u>.vv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Signed/Unsigned Integer multiply.
(define_insn "@vwmul<u><vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (mult:<VW>
        (any_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr"))
        (any_extend:<VW>
          (vec_duplicate:VWI
            (match_operand:<VSUB> 4 "reg_or_0_operand"      "r,J,r,J,r,J,r,J"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmul<u>.vx\t%0,%3,%4,%1.t
   vwmul<u>.vx\t%0,%3,zero,%1.t
   vwmul<u>.vx\t%0,%3,%4,%1.t
   vwmul<u>.vx\t%0,%3,zero,%1.t
   vwmul<u>.vx\t%0,%3,%4
   vwmul<u>.vx\t%0,%3,zero
   vwmul<u>.vx\t%0,%3,%4
   vwmul<u>.vx\t%0,%3,zero"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Signed-Unsigned Integer multiply.
(define_insn "@vwmulsu<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (mult:<VW>
        (sign_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr"))
        (zero_extend:<VW>
          (match_operand:VWI 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmulsu.vv\t%0,%3,%4,%1.t
   vwmulsu.vv\t%0,%3,%4,%1.t
   vwmulsu.vv\t%0,%3,%4
   vwmulsu.vv\t%0,%3,%4"
  [(set_attr "type" "vwmul")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Signed-Unsigned Integer multiply.
(define_insn "@vwmulsu<vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (mult:<VW>
        (sign_extend:<VW>
          (match_operand:VWI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr"))
        (zero_extend:<VW>
          (vec_duplicate:VWI
           (match_operand:<VSUB> 4 "reg_or_0_operand"       "r,J,r,J,r,J,r,J"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmulsu.vx\t%0,%3,%4,%1.t
   vwmulsu.vx\t%0,%3,zero,%1.t
   vwmulsu.vx\t%0,%3,%4,%1.t
   vwmulsu.vx\t%0,%3,zero,%1.t
   vwmulsu.vx\t%0,%3,%4
   vwmulsu.vx\t%0,%3,zero
   vwmulsu.vx\t%0,%3,%4
   vwmulsu.vx\t%0,%3,zero"
  [(set_attr "type" "vwmul")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Single-Width Integer Multiply-Add Instructions.
(define_insn "@v<imac><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (unspec:VI
         [(match_operand:VI 2 "register_operand"            "0,0")
          (match_operand:VI 3 "register_operand"            "vr,vr")
          (match_operand:VI 4 "register_operand"            "vr,vr")] IMAC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<imac>.vv\t%0,%3,%4,%1.t
   v<imac>.vv\t%0,%3,%4"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Integer Multiply-Add Instructions.
(define_insn "@v<imac><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VI
         [(match_operand:VI 2 "register_operand"            "0,0,0,0")
          (vec_duplicate:VI
             (match_operand:<VSUB> 3 "reg_or_0_operand"     "r,J,r,J"))
          (match_operand:VI 4 "register_operand"            "vr,vr,vr,vr")] IMAC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<imac>.vx\t%0,%3,%4,%1.t
   v<imac>.vx\t%0,zero,%4,%1.t
   v<imac>.vx\t%0,%3,%4
   v<imac>.vx\t%0,zero,%4"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<imac><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                     "=vd,vd,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"             "vm,vm,J,J")
       (unspec:V64BITI
         [(match_operand:V64BITI 2 "register_operand"                   "0,0,0,0")
          (vec_duplicate:V64BITI
             (sign_extend:<VSUB> (match_operand:SI 3 "reg_or_0_operand" "r,J,r,J")))
          (match_operand:V64BITI 4 "register_operand"                   "vr,vr,vr,vr")] IMAC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                                  "rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<imac>.vx\t%0,%3,%4,%1.t
   v<imac>.vx\t%0,zero,%4,%1.t
   v<imac>.vx\t%0,%3,%4
   v<imac>.vx\t%0,zero,%4"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening signed-integer multiply-add, overwrite addend.
;; Vector-Vector Widening unsigned-integer multiply-add, overwrite addend.
(define_insn "@vwmacc<u><vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (plus:<VW>
         (mult:<VW>
           (any_extend:<VW>
             (match_operand:VWI 3 "register_operand"        "vr,vr"))
           (any_extend:<VW>
             (match_operand:VWI 4 "register_operand"        "vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmacc<u>.vv\t%0,%3,%4,%1.t
   vwmacc<u>.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening signed-integer multiply-add, overwrite addend.
;; Vector-Scalar Widening unsigned-integer multiply-add, overwrite addend.
(define_insn "@vwmacc<u><vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus:<VW>
         (mult:<VW>
           (any_extend:<VW>
             (vec_duplicate:VWI
               (match_operand:<VSUB> 3 "reg_or_0_operand"   "r,J,r,J")))
           (any_extend:<VW>
             (match_operand:VWI 4 "register_operand"        "vr,vr,vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0,0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmacc<u>.vx\t%0,%3,%4,%1.t
   vwmacc<u>.vx\t%0,zero,%4,%1.t
   vwmacc<u>.vx\t%0,%3,%4
   vwmacc<u>.vx\t%0,zero,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening signed-unsigned-integer multiply-add, overwrite addend.
(define_insn "@vwmaccsu<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (plus:<VW>
         (mult:<VW>
           (sign_extend:<VW>
             (match_operand:VWI 3 "register_operand"        "vr,vr"))
           (zero_extend:<VW>
             (match_operand:VWI 4 "register_operand"        "vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmaccsu.vv\t%0,%3,%4,%1.t
   vwmaccsu.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening signed-unsigned-integer multiply-add, overwrite addend.
(define_insn "@vwmaccsu<vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus:<VW>
         (mult:<VW>
           (sign_extend:<VW>
             (vec_duplicate:VWI
               (match_operand:<VSUB> 3 "reg_or_0_operand"   "r,J,r,J")))
           (zero_extend:<VW>
             (match_operand:VWI 4 "register_operand"        "vr,vr,vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0,0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmaccsu.vx\t%0,%3,%4,%1.t
   vwmaccsu.vx\t%0,zero,%4,%1.t
   vwmaccsu.vx\t%0,%3,%4
   vwmaccsu.vx\t%0,zero,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening unsigned-signed-integer multiply-add, overwrite addend.
(define_insn "@vwmaccus<vw>_vx"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus:<VW>
         (mult:<VW>
           (zero_extend:<VW>
             (vec_duplicate:VWI
               (match_operand:<VSUB> 3 "reg_or_0_operand"   "r,J,r,J")))
           (sign_extend:<VW>
             (match_operand:VWI 4 "register_operand"        "vr,vr,vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0,0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwmaccus.vx\t%0,%3,%4,%1.t
   vwmaccus.vx\t%0,zero,%4,%1.t
   vwmaccus.vx\t%0,%3,%4
   vwmaccus.vx\t%0,zero,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector integer and float merge.
(define_insn "@vmerge<mode>_vvm"
  [(set (match_operand:V 0 "register_operand"             "=vd,vd,vd,vd")
    (unspec:V
      [(match_operand:V 2 "vector_reg_or_const0_operand"  "0,0,J,J")
       (unspec:V
        [(match_operand:<VM> 1 "register_operand"         "vm,vm,vm,vm")
         (match_operand:V 3 "register_operand"            "vr,vr,vr,vr")
         (match_operand:V 4 "vector_arith_operand"        "vr,vi,vr,vi")] UNSPEC_MERGE)
       (match_operand 5 "p_reg_or_const_csr_operand"      "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmerge.vvm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%v4,%1
  vmerge.vvm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%v4,%1"
 [(set_attr "type" "vmerge")
  (set_attr "mode" "<MODE>")])

;; Vector-Scalar integer merge.
(define_insn "@vmerge<mode>_vxm_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd")
    (unspec:VI
      [(match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J")
        (unspec:VI
          [(match_operand:<VM> 1 "register_operand"         "vm,vm,vm,vm")
           (match_operand:VI 3 "register_operand"           "vr,vr,vr,vr")
           (vec_duplicate:VI
             (match_operand:<VSUB> 4 "reg_or_simm5_operand" "r,Ws5,r,Ws5"))] UNSPEC_MERGE)
       (match_operand 5 "p_reg_or_const_csr_operand"        "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmerge.vxm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%4,%1
  vmerge.vxm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%4,%1"
 [(set_attr "type" "vmerge")
  (set_attr "mode" "<MODE>")])

(define_insn "@vmerge<mode>_vxm_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd")
    (unspec:V64BITI
      [(match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J")
        (unspec:V64BITI
          [(match_operand:<VM> 1 "register_operand"             "vm,vm,vm,vm")
           (match_operand:V64BITI 3 "register_operand"          "vr,vr,vr,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB>
              (match_operand:SI 4 "reg_or_simm5_operand"        "r,Ws5,r,Ws5")))] UNSPEC_MERGE)
       (match_operand:SI 5 "csr_operand"                        "rK,rK,rK,rK")
       (match_operand:SI 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmerge.vxm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%4,%1
  vmerge.vxm\t%0,%3,%4,%1
  vmerge.vim\t%0,%3,%4,%1"
 [(set_attr "type" "vmerge")
  (set_attr "mode" "<MODE>")])

;; Vector-Vector Integer/Float Move.
(define_insn "@vmv<mode>_v_v"
  [(set (match_operand:V 0 "register_operand"             "=vr,vr")
    (unspec:V
      [(match_operand:V 1 "vector_reg_or_const0_operand"  "0,J")
       (unspec:V
        [(match_operand:V 2 "register_operand"            "vr,vr")] UNSPEC_MOVE)
       (match_operand 3 "p_reg_or_const_csr_operand"      "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vmv.v.v\t%0,%2"
 [(set_attr "type" "vmove")
  (set_attr "mode" "<MODE>")])

;; Vector-Scalar Integer Move.
(define_expand "@vmv<mode>_v_x"
  [(match_operand:VI 0 "register_operand")
   (match_operand:VI 1 "vector_reg_or_const0_operand")
   (match_operand:<VSUB> 2 "general_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")
   (match_operand 4 "const_int_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_splat_vector (operands);
  DONE;
})

(define_insn "@vmv<mode>_v_x_internal"
  [(set (match_operand:VI 0 "register_operand"          "=vr,vr,vr,vr")
  (unspec:VI
    [(match_operand:VI 1 "vector_reg_or_const0_operand" "0,0,J,J")
     (vec_duplicate:VI
        (match_operand:<VSUB> 2 "reg_or_simm5_operand"  "r,Ws5,r,Ws5"))
     (match_operand 3 "p_reg_or_const_csr_operand"      "rK,rK,rK,rK")
     (match_operand 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmv.v.x\t%0,%2
  vmv.v.i\t%0,%2
  vmv.v.x\t%0,%2
  vmv.v.i\t%0,%2"
 [(set_attr "type" "vmove")
  (set_attr "mode" "<MODE>")])

(define_insn "@vmv<mode>_v_x_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                     "=vr,vr,vr,vr")
  (unspec:V64BITI
    [(match_operand:V64BITI 1 "vector_reg_or_const0_operand"            "0,0,J,J")
     (vec_duplicate:V64BITI
        (sign_extend:<VSUB> (match_operand:SI 2 "reg_or_simm5_operand"  "r,Ws5,r,Ws5")))
     (match_operand:SI 3 "csr_operand"                                  "rK,rK,rK,rK")
     (match_operand:SI 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmv.v.x\t%0,%2
  vmv.v.i\t%0,%2
  vmv.v.x\t%0,%2
  vmv.v.i\t%0,%2"
 [(set_attr "type" "vmove")
  (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------------
;; ---- 12. Vector Fixed-Point Arithmetic Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 12.1 Vector Single-Width Saturating Add and Subtract
;; - 12.2 Vector Single-Width Aaveraging Add and Subtract
;; - 12.3 Vector Single-Width Fractional Multiply with Rounding and Saturation
;; - 12.5 Vector Single-Width Scaling Shift Instructions
;; - 12.6 Vector Narrowing Fixed-Point Clip Instructions
;; -------------------------------------------------------------------------------

;; Vector-Vector Single-Width Saturating Add.
(define_insn "@v<optab><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_satplus:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand:VI 4 "vector_arith_operand"         "vr,vi,vr,vi,vr,vi,vr,vi"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4
   v<insn>.vv\t%0,%3,%4
   v<insn>.vi\t%0,%3,%v4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Single-Width Saturating Sub.
(define_insn "@vsssub<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (ss_minus:VI
         (match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand:VI 4 "vector_neg_arith_operand"     "vr,vj,vr,vj,vr,vj,vr,vj"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vssub.vv\t%0,%3,%4,%1.t
   vsadd.vi\t%0,%3,%V4,%1.t
   vssub.vv\t%0,%3,%4,%1.t
   vsadd.vi\t%0,%3,%V4,%1.t
   vssub.vv\t%0,%3,%4
   vsadd.vi\t%0,%3,%V4
   vssub.vv\t%0,%3,%4
   vsadd.vi\t%0,%3,%V4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])
   
(define_insn "@vussub<mode>_vv"
  [(set (match_operand:VI 0 "register_operand"   "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (us_minus:VI
         (match_operand:VI 3 "register_operand"     "vr,vr,vr,vr")
         (match_operand:VI 4 "register_operand"     "vr,vr,vr,vr"))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vssubu.vv\t%0,%3,%4,%1.t
   vssubu.vv\t%0,%3,%4,%1.t
   vssubu.vv\t%0,%3,%4
   vssubu.vv\t%0,%3,%4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Saturating Add.
(define_insn "@v<optab><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (any_satplus:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
         (match_operand:<VSUB> 4 "reg_or_simm5_operand"     "r,Ws5,r,Ws5,r,Ws5,r,Ws5")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<optab><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (any_satplus:V64BITI
        (match_operand:V64BITI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:V64BITI
         (sign_extend:<VSUB>
          (match_operand:SI 4 "reg_or_simm5_operand"            "r,Ws5,r,Ws5,r,Ws5,r,Ws5"))))
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4
   v<insn>.vx\t%0,%3,%4
   v<insn>.vi\t%0,%3,%4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Saturating Sub.
(define_insn "@vsssub<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (ss_minus:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
        (vec_duplicate:VI
         (match_operand:<VSUB> 4 "reg_or_neg_simm5_operand" "r,Wn5,r,Wn5,r,Wn5,r,Wn5")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    const char *tail = satisfies_constraint_J (operands[1]) ? "" : ",%1.t";
    char buf[64] = {0};
    if (satisfies_constraint_Wn5 (operands[4]))
      {
        const char *insn = "vsadd.vi\t%0,%3";
        snprintf (buf, sizeof (buf), "%s,%d%s", insn, (int)(-INTVAL (operands[4])), tail);
      }
    else
      {
        const char *insn = "vssub.vx\t%0,%3,%4";
        snprintf (buf, sizeof (buf), "%s%s", insn, tail);
      }
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vussub<mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (us_minus:VI
        (match_operand:VI 3 "register_operand"              "vr,vr,vr,vr")
        (vec_duplicate:VI
         (match_operand:<VSUB> 4 "register_operand" "r,r,r,r")))
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vssubu.vx\t%0,%3,%4,%1.t
   vssubu.vx\t%0,%3,%4,%1.t
   vssubu.vx\t%0,%3,%4
   vssubu.vx\t%0,%3,%4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vsssub<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"               "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:V64BITI
      [(unspec:V64BITI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
         (ss_minus:V64BITI
           (match_operand:V64BITI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB>
              (match_operand:SI 4 "reg_or_neg_simm5_operand"      "r,Wn5,r,Wn5,r,Wn5,r,Wn5"))))
         (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
        (match_operand:SI 5 "csr_operand"                         "rK,rK,rK,rK,rK,rK,rK,rK")
        (match_operand:SI 6 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    const char *tail = satisfies_constraint_J (operands[1]) ? "" : ",%1.t";
    char buf[64] = {0};
    if (satisfies_constraint_Wn5 (operands[4]))
      {
        const char *insn = "vsadd.vi\t%0,%3";
        snprintf (buf, sizeof (buf), "%s,%d%s", insn, (int)(-INTVAL (operands[4])), tail);
      }
    else
      {
        const char *insn = "vssub.vx\t%0,%3,%4";
        snprintf (buf, sizeof (buf), "%s%s", insn, tail);
      }
    output_asm_insn (buf, operands);
    return "";
  }
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

(define_insn "@vussub<mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"               "=vd,vd,vr,vr")
    (unspec:V64BITI
      [(unspec:V64BITI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,J,J")
         (us_minus:V64BITI
           (match_operand:V64BITI 3 "register_operand"            "vr,vr,vr,vr")
           (vec_duplicate:V64BITI
             (sign_extend:<VSUB>
              (match_operand:SI 4 "register_operand"      "r,r,r,r"))))
         (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
        (match_operand:SI 5 "csr_operand"                         "rK,rK,rK,rK")
        (match_operand:SI 6 "const_int_operand")
        (reg:SI VL_REGNUM)
        (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vssubu.vx\t%0,%3,%4,%1.t
   vssubu.vx\t%0,%3,%4,%1.t
   vssubu.vx\t%0,%3,%4
   vssubu.vx\t%0,%3,%4"
  [(set_attr "type" "vsarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Single-Width Averaging Add and Subtract.
;; Vector-Vector Single-Width Fractional Multiply with Rounding and Saturation.
(define_insn "@v<sat_op><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VI
         [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr")
          (match_operand:VI 4 "register_operand"            "vr,vr,vr,vr")] SAT_OP)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sat_op>.vv\t%0,%3,%4,%1.t
   v<sat_op>.vv\t%0,%3,%4,%1.t
   v<sat_op>.vv\t%0,%3,%4
   v<sat_op>.vv\t%0,%3,%4"
  [(set_attr "type" "<vsat>")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Averaging Add and Subtract.
;; Vector-Scalar Single-Width Fractional Multiply with Rounding and Saturation.
(define_insn "@v<sat_op><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (unspec:VI
         [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
          (vec_duplicate:VI
           (match_operand:<VSUB> 4 "reg_or_0_operand"       "r,J,r,J,r,J,r,J"))] SAT_OP)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sat_op>.vx\t%0,%3,%4,%1.t
   v<sat_op>.vx\t%0,%3,zero,%1.t
   v<sat_op>.vx\t%0,%3,%4,%1.t
   v<sat_op>.vx\t%0,%3,zero,%1.t
   v<sat_op>.vx\t%0,%3,%4
   v<sat_op>.vx\t%0,%3,zero
   v<sat_op>.vx\t%0,%3,%4
   v<sat_op>.vx\t%0,%3,zero"
  [(set_attr "type" "<vsat>")
   (set_attr "mode" "<MODE>")])

(define_insn "@v<sat_op><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,vm,vm,J,J,J,J")
       (unspec:V64BITI
         [(match_operand:V64BITI 3 "register_operand"           "vr,vr,vr,vr,vr,vr,vr,vr")
          (vec_duplicate:V64BITI
           (sign_extend:<VSUB>
            (match_operand:SI 4 "reg_or_0_operand"              "r,J,r,J,r,J,r,J")))] SAT_OP)
       (match_operand:V64BITI 2 "vector_reg_or_const0_operand"  "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand:SI 5 "csr_operand"                          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand:SI 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sat_op>.vx\t%0,%3,%4,%1.t
   v<sat_op>.vx\t%0,%3,zero,%1.t
   v<sat_op>.vx\t%0,%3,%4,%1.t
   v<sat_op>.vx\t%0,%3,zero,%1.t
   v<sat_op>.vx\t%0,%3,%4
   v<sat_op>.vx\t%0,%3,zero
   v<sat_op>.vx\t%0,%3,%4
   v<sat_op>.vx\t%0,%3,zero"
  [(set_attr "type" "<vsat>")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Single-Width Scaling Shift Instructions.
(define_insn "@v<sshift><mode>_vv"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (unspec:VI
         [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
          (match_operand:VI 4 "vector_shift_operand"        "vr,vk,vr,vk,vr,vk,vr,vk")] SSHIFT)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sshift>.vv\t%0,%3,%4,%1.t
   v<sshift>.vi\t%0,%3,%v4,%1.t
   v<sshift>.vv\t%0,%3,%4,%1.t
   v<sshift>.vi\t%0,%3,%v4,%1.t
   v<sshift>.vv\t%0,%3,%4
   v<sshift>.vi\t%0,%3,%v4
   v<sshift>.vv\t%0,%3,%4
   v<sshift>.vi\t%0,%3,%v4"
  [(set_attr "type" "vscaleshift")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Scaling Shift Instructions.
(define_insn "@v<sshift><mode>_vx"
  [(set (match_operand:VI 0 "register_operand"              "=vd,vd,vd,vd,vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
       (unspec:VI
        [(match_operand:VI 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
         (match_operand 4 "p_reg_or_uimm5_operand"          "r,K,r,K,r,K,r,K")] SSHIFT)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sshift>.vx\t%0,%3,%4,%1.t
   v<sshift>.vi\t%0,%3,%4,%1.t
   v<sshift>.vx\t%0,%3,%4,%1.t
   v<sshift>.vi\t%0,%3,%4,%1.t
   v<sshift>.vx\t%0,%3,%4
   v<sshift>.vi\t%0,%3,%4
   v<sshift>.vx\t%0,%3,%4
   v<sshift>.vi\t%0,%3,%4"
  [(set_attr "type" "vscaleshift")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector signed/unsigned clip.
(define_insn "@vn<clip><mode>_wv"
  [(set (match_operand:VWI 0 "register_operand"               "=vd,vd,&vd,vd,&vd,   vd,vd,&vd,vd,&vd,   vr,vr,&vr,vr,&vr,   vr,vr,&vr,vr,&vr")
    (unspec:VWI
      [(unspec:VWI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,vm,      vm,vm,vm,vm,vm,     J,J,J,J,J,          J,J,J,J,J")
        (unspec:VWI
          [(match_operand:<VW> 3 "register_operand"           "0,vr,vr,0,vr,        0,vr,vr,0,vr,       0,vr,vr,0,vr,       0,vr,vr,0,vr")
            (match_operand:VWI 4 "vector_shift_operand"       "vr,0,vr,vk,vk,       vr,0,vr,vk,vk,      vr,0,vr,vk,vk,      vr,0,vr,vk,vk")] CLIP)
        (match_operand:VWI 2 "vector_reg_or_const0_operand"   "0,0,0,0,0,           J,J,J,J,J,          0,0,0,0,0,          J,J,J,J,J")
      ] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,      rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK,     rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%v4,%1.t
   vn<clip>.wi\t%0,%3,%v4,%1.t
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wv\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%v4,%1.t
   vn<clip>.wi\t%0,%3,%v4,%1.t
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%v4
   vn<clip>.wi\t%0,%3,%v4
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wv\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%v4
   vn<clip>.wi\t%0,%3,%v4"
  [(set_attr "type" "vclip")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar signed/unsigned clip.
(define_insn "@vn<clip><mode>_wx"
  [(set (match_operand:VWI 0 "register_operand"               "=vd,&vd,vd,&vd,  vd,&vd,vd,&vd,  vr,&vr,vr,&vr,  vr,?&vr,vr,&vr")
    (unspec:VWI
      [(unspec:VWI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,     vm,vm,vm,vm,    J,J,J,J,        J,J,J,J")
        (unspec:VWI
          [(match_operand:<VW> 3 "register_operand"           "0,vr,0,vr,       0,vr,0,vr,      0,vr,0,vr,      0,vr,0,vr")
            (match_operand 4 "p_reg_or_uimm5_operand"         "r,r,K,K,         r,r,K,K,        r,r,K,K,        r,r,K,K")] CLIP)
        (match_operand:VWI 2 "vector_reg_or_const0_operand"   "0,0,0,0,         J,J,J,J,        0,0,0,0,        J,J,J,J")
      ] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,     rK,rK,rK,rK,    rK,rK,rK,rK,    rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vn<clip>.wx\t%0,%3,%4,%1.t
   vn<clip>.wx\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%4,%1.t
   vn<clip>.wx\t%0,%3,%4,%1.t
   vn<clip>.wx\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%4,%1.t
   vn<clip>.wi\t%0,%3,%4,%1.t
   vn<clip>.wx\t%0,%3,%4
   vn<clip>.wx\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%4
   vn<clip>.wx\t%0,%3,%4
   vn<clip>.wx\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%4
   vn<clip>.wi\t%0,%3,%4"
  [(set_attr "type" "vclip")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------------
;; ---- 13. Vector Floating-Point Arithmetic Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 13.2 Vector Single-Width Floating-Point Add/Subtract Instructions
;; - 13.3 Vector Widening Floating-Point Add/Subtract Instrucions
;; - 13.4 Vector Single-Width Floating-Point Multiply/Divide Instrucions
;; - 13.5 Vector Widening Floating-Point Multiply
;; - 13.6 Vector Single-Width Floating-Point Fused Multiply-Add Instrucions
;; - 13.7 Vector Widening Floating-Point Fused Multiply-Add Instrucions
;; - 13.8 Vector Floating-Point Square-Root Instrucion
;; - 13.9 Vector Floating-Point Reciprocal Square-Root Estimate Instrucion
;; - 13.10 Vector Floating-Point Reciprocal Estimate Instruction
;; - 13.11 Vector Floating-Point MIN/MAX Instrucions
;; - 13.12 Vector Floating-Point Sign-Injection Instrucions
;; - 13.13 Vector Floating-Point Compare Instrucions
;; - 13.14 Vector Floating-Point Classify Instruction
;; - 13.15 Vector Floating-Point Merge Instruction
;; - 13.16 Vector Floating-Point Move Instruction
;; - 13.17 Single-Width Floating-Point/Integer Type-Convert Instructions
;; - 13.18 Widening Floating-Point/Integer Type-Convert Instructions
;; - 13.19 Narrowing Floating-Point/Integer Type-Convert Instructions
;; -------------------------------------------------------------------------------

;; Vector-Vector Single-Width Floating-Point Add/Subtract Instructions.
;; Vector-Vector Single-Width Floating-Point Multiply/Divide Instrucions.
;; Vector-Vector Single-Width Floating-Point MIN/MAX Instrucions.
(define_insn "@vf<optab><mode>_vv"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_fop:VF
        (match_operand:VF 3 "register_operand"              "vr,vr,vr,vr")
        (match_operand:VF 4 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<insn>.vv\t%0,%3,%4,%1.t
   vf<insn>.vv\t%0,%3,%4,%1.t
   vf<insn>.vv\t%0,%3,%4
   vf<insn>.vv\t%0,%3,%4"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Floating-Point Add/Subtract Instructions.
;; Vector-Scalar Single-Width Floating-Point Multiply/Divide Instrucions.
;; Vector-Scalar Single-Width Floating-Point MIN/MAX Instrucions.
(define_insn "@vf<optab><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_fop:VF
        (match_operand:VF 3 "register_operand"              "vr,vr,vr,vr")
        (vec_duplicate:VF
         (match_operand:<VSUB> 4 "register_operand"         "f,f,f,f")))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<insn>.vf\t%0,%3,%4,%1.t
   vf<insn>.vf\t%0,%3,%4,%1.t
   vf<insn>.vf\t%0,%3,%4
   vf<insn>.vf\t%0,%3,%4"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

;; Floating-Point Reverse Sub/Div.
(define_insn "@vfr<optab><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (minus_div:VF
        (vec_duplicate:VF
         (match_operand:<VSUB> 4 "register_operand"         "f,f,f,f"))
        (match_operand:VF 3 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfr<insn>.vf\t%0,%3,%4,%1.t
   vfr<insn>.vf\t%0,%3,%4,%1.t
   vfr<insn>.vf\t%0,%3,%4
   vfr<insn>.vf\t%0,%3,%4"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Float Add/Subtract.
(define_insn "@vfw<plus_minus:optab><vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (float_extend:<VW>
          (match_operand:VWF 3 "register_operand"           "vr,vr,vr,vr"))
        (float_extend:<VW>
          (match_operand:VWF 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfw<insn>.vv\t%0,%3,%4,%1.t
   vfw<insn>.vv\t%0,%3,%4,%1.t
   vfw<insn>.vv\t%0,%3,%4
   vfw<insn>.vv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Float Add/Subtract.
(define_insn "@vfw<plus_minus:optab><vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (float_extend:<VW>
          (match_operand:VWF 3 "register_operand"           "vr,vr,vr,vr"))
        (float_extend:<VW>
          (vec_duplicate:VWF
           (match_operand:<VSUB> 4 "register_operand"       "f,f,f,f"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfw<insn>.vf\t%0,%3,%4,%1.t
   vfw<insn>.vf\t%0,%3,%4,%1.t
   vfw<insn>.vf\t%0,%3,%4
   vfw<insn>.vf\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Float Add/Subtract.
(define_insn "@vfw<plus_minus:optab><vw>_wv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (match_operand:<VW> 3 "register_operand"            "vr,vr,vr,vr")
        (float_extend:<VW>
          (match_operand:VWF 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfw<insn>.wv\t%0,%3,%4,%1.t
   vfw<insn>.wv\t%0,%3,%4,%1.t
   vfw<insn>.wv\t%0,%3,%4
   vfw<insn>.wv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Float Add/Subtract.
(define_insn "@vfw<plus_minus:optab><vw>_wf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (plus_minus:<VW>
        (match_operand:<VW> 3 "register_operand"            "vr,vr,vr,vr")
        (float_extend:<VW>
          (vec_duplicate:VWF
           (match_operand:<VSUB> 4 "register_operand"       "f,f,f,f"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfw<insn>.wf\t%0,%3,%4,%1.t
   vfw<insn>.wf\t%0,%3,%4,%1.t
   vfw<insn>.wf\t%0,%3,%4
   vfw<insn>.wf\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening Float multiply.
(define_insn "@vfwmul<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 3 "register_operand"           "vr,vr,vr,vr"))
        (float_extend:<VW>
          (match_operand:VWF 4 "register_operand"           "vr,vr,vr,vr")))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmul.vv\t%0,%3,%4,%1.t
   vfwmul.vv\t%0,%3,%4,%1.t
   vfwmul.vv\t%0,%3,%4
   vfwmul.vv\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening Float multiply.
(define_insn "@vfwmul<vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (mult:<VW>
        (float_extend:<VW>
          (match_operand:VWF 3 "register_operand"           "vr,vr,vr,vr"))
        (float_extend:<VW>
          (vec_duplicate:VWF
           (match_operand:<VSUB> 4 "register_operand"       "f,f,f,f"))))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmul.vf\t%0,%3,%4,%1.t
   vfwmul.vf\t%0,%3,%4,%1.t
   vfwmul.vf\t%0,%3,%4
   vfwmul.vf\t%0,%3,%4"
  [(set_attr "type" "vwarith")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Single-Width Floating-Point Fused Multiply-Add Instrucions.
(define_insn "@vf<fmac><mode>_vv"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (unspec:VF
         [(match_operand:VF 2 "register_operand"            "0,0")
          (match_operand:VF 3 "register_operand"            "vr,vr")
          (match_operand:VF 4 "register_operand"            "vr,vr")] FMAC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<fmac>.vv\t%0,%3,%4,%1.t
   vf<fmac>.vv\t%0,%3,%4"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Single-Width Floating-Point Fused Multiply-Add Instrucions.
(define_insn "@vf<fmac><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (unspec:VF
         [(match_operand:VF 2 "register_operand"            "0,0")
          (vec_duplicate:VF
            (match_operand:<VSUB> 3 "register_operand"      "f,f"))
          (match_operand:VF 4 "register_operand"            "vr,vr")] FMAC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<fmac>.vf\t%0,%3,%4,%1.t
   vf<fmac>.vf\t%0,%3,%4"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening multiply-accumulate, overwrite addend.
;; Vector-Vector Widening multiply-subtract-accumulate, overwrite addend.
(define_insn "@vfwmacc<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (plus:<VW>
         (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 3 "register_operand"         "vr,vr"))
          (float_extend:<VW>
            (match_operand:VWF 4 "register_operand"         "vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmacc.vv\t%0,%3,%4,%1.t
   vfwmacc.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfwmsac<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (minus:<VW>
         (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 3 "register_operand"         "vr,vr"))
          (float_extend:<VW>
            (match_operand:VWF 4 "register_operand"         "vr,vr")))
         (match_operand:<VW> 2 "register_operand"           "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmsac.vv\t%0,%3,%4,%1.t
   vfwmsac.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening multiply-accumulate, overwrite addend.
;; Vector-Scalar Widening multiply-subtract-accumulate, overwrite addend.
(define_insn "@vfwmacc<vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (plus:<VW>
         (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 4 "register_operand"         "vr,vr"))
          (float_extend:<VW>
            (vec_duplicate:VWF
             (match_operand:<VSUB> 3 "register_operand"     "f,f"))))
       (match_operand:<VW> 2 "register_operand"             "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmacc.vf\t%0,%3,%4,%1.t
   vfwmacc.vf\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfwmsac<vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (minus:<VW>
         (mult:<VW>
          (float_extend:<VW>
            (match_operand:VWF 4 "register_operand"         "vr,vr"))
          (float_extend:<VW>
            (vec_duplicate:VWF
             (match_operand:<VSUB> 3 "register_operand"     "f,f"))))
       (match_operand:<VW> 2 "register_operand"             "0,0"))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwmsac.vf\t%0,%3,%4,%1.t
   vfwmsac.vf\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Widening negate-(multiply-accumulate), overwrite addend.
;; Vector-Vector Widening negate-(multiply-subtract-accumulate), overwrite addend.
(define_insn "@vfwnmacc<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (neg:<VW>
         (plus:<VW>
           (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 4 "register_operand"       "vr,vr"))
            (float_extend:<VW>
              (match_operand:VWF 3 "register_operand"       "vr,vr")))
           (match_operand:<VW> 2 "register_operand"         "0,0")))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwnmacc.vv\t%0,%3,%4,%1.t
   vfwnmacc.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfwnmsac<vw>_vv"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (neg:<VW>
         (minus:<VW>
           (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 4 "register_operand"       "vr,vr"))
            (float_extend:<VW>
              (match_operand:VWF 3 "register_operand"       "vr,vr")))
           (match_operand:<VW> 2 "register_operand"         "0,0")))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwnmsac.vv\t%0,%3,%4,%1.t
   vfwnmsac.vv\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Widening negate-(multiply-accumulate), overwrite addend.
;; Vector-Scalar Widening negate-(multiply-subtract-accumulate), overwrite addend.
(define_insn "@vfwnmacc<vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (neg:<VW>
         (plus:<VW>
           (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 4 "register_operand"       "vr,vr"))
            (float_extend:<VW>
              (vec_duplicate:VWF
               (match_operand:<VSUB> 3 "register_operand"   "f,f"))))
       (match_operand:<VW> 2 "register_operand"             "0,0")))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwnmacc.vf\t%0,%3,%4,%1.t
   vfwnmacc.vf\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfwnmsac<vw>_vf"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,J")
       (neg:<VW>
         (minus:<VW>
           (mult:<VW>
            (float_extend:<VW>
              (match_operand:VWF 4 "register_operand"       "vr,vr"))
            (float_extend:<VW>
              (vec_duplicate:VWF
               (match_operand:<VSUB> 3 "register_operand"   "f,f"))))
       (match_operand:<VW> 2 "register_operand"             "0,0")))
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwnmsac.vf\t%0,%3,%4,%1.t
   vfwnmsac.vf\t%0,%3,%4"
  [(set_attr "type" "vwmadd")
   (set_attr "mode" "<MODE>")])

;; Floating-Point square root.
(define_insn "@vfsqrt<mode>_v"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (sqrt:VF
         (match_operand:VF 3 "register_operand"             "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfsqrt.v\t%0,%3,%1.t
   vfsqrt.v\t%0,%3,%1.t
   vfsqrt.v\t%0,%3
   vfsqrt.v\t%0,%3"
  [(set_attr "type" "vfsqrt")
   (set_attr "mode" "<MODE>")])

;; Floating-Point Reciprocal Square-Root Estimate.
;; Floating-Point Reciprocal Estimate.
(define_insn "@vf<reciprocal><mode>_v"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VF
         [(match_operand:VF 3 "register_operand"            "vr,vr,vr,vr")] RECIPROCAL)
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<reciprocal>.v\t%0,%3,%1.t
   vf<reciprocal>.v\t%0,%3,%1.t
   vf<reciprocal>.v\t%0,%3
   vf<reciprocal>.v\t%0,%3"
  [(set_attr "type" "vdiv")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Floating-Point Sign-Injection.
(define_insn "@vfsgnj<nx><mode>_vv"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VF
         [(match_operand:VF 3 "register_operand"            "vr,vr,vr,vr")
          (match_operand:VF 4 "register_operand"            "vr,vr,vr,vr")] COPYSIGNS)
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfsgnj<nx>.vv\t%0,%3,%4,%1.t
   vfsgnj<nx>.vv\t%0,%3,%4,%1.t
   vfsgnj<nx>.vv\t%0,%3,%4
   vfsgnj<nx>.vv\t%0,%3,%4"
  [(set_attr "type" "vfsgnj")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Floating-Point Sign-Injection.
(define_insn "@vfsgnj<nx><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VF
         [(match_operand:VF 3 "register_operand"            "vr,vr,vr,vr")
          (vec_duplicate:VF
           (match_operand:<VSUB> 4 "register_operand"       "f,f,f,f"))] COPYSIGNS)
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfsgnj<nx>.vf\t%0,%3,%4,%1.t
   vfsgnj<nx>.vf\t%0,%3,%4,%1.t
   vfsgnj<nx>.vf\t%0,%3,%4
   vfsgnj<nx>.vf\t%0,%3,%4"
  [(set_attr "type" "vfsgnj")
   (set_attr "mode" "<MODE>")])

;; vfneg.v vd,vs = vfsgnjn.vv vd,vs,vs.
(define_insn "@vfneg<mode>_v"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (neg:VF
        (match_operand:VF 3 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfneg.v\t%0,%3,%1.t
   vfneg.v\t%0,%3,%1.t
   vfneg.v\t%0,%3
   vfneg.v\t%0,%3"
  [(set_attr "type" "vfsgnj")
   (set_attr "mode" "<MODE>")])

;; vfabs.v vd,vs = vfsgnjn.vv vd,vs,vs.
(define_insn "@vfabs<mode>_v"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (abs:VF
        (match_operand:VF 3 "register_operand"              "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfabs.v\t%0,%3,%1.t
   vfabs.v\t%0,%3,%1.t
   vfabs.v\t%0,%3
   vfabs.v\t%0,%3"
  [(set_attr "type" "vfsgnj")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Floating-Point Compare Instrucions.
(define_insn "@vmf<optab><mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand"              "=vr,vr,vm,&vr,  vr,vr,vm,&vr,  vr,vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,0,vm,     vm,vm,0,vm,    J,J,J")
         (any_fcmp:<VM>
          (match_operand:VF 3 "register_operand"              "0,vr,vr,vr,     0,vr,vr,vr,    0,vr,vr")
          (match_operand:VF 4 "register_operand"              "vr,0,vr,vr,     vr,0,vr,vr,    vr,0,vr"))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand" "0,0,0,0,        J,J,J,J,       J,J,J")] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,    rK,rK,rK,rK,   rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4,%1.t
   vmf<insn>.vv\t%0,%3,%4
   vmf<insn>.vv\t%0,%3,%4
   vmf<insn>.vv\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Floating-Point Compare Instrucions.
(define_insn "@vmf<optab><mode>_vf"
  [(set (match_operand:<VM> 0 "register_operand"              "=vr,vm,&vr,   vr,vm,&vr,   vr,&vr")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,0,vm,      vm,0,vm,     J,J")
         (any_fcmp:<VM>
          (match_operand:VF 3 "register_operand"              "0,vr,vr,      0,vr,vr,     0,vr")
          (vec_duplicate:VF
           (match_operand:<VSUB> 4 "register_operand"         "f,f,f,        f,f,f,       f,f")))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand" "0,0,0,        J,J,J,       J,J")] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,     rK,rK,rK,    rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4,%1.t
   vmf<insn>.vf\t%0,%3,%4
   vmf<insn>.vf\t%0,%3,%4"
  [(set_attr "type" "vcmp")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector Floating-Point Comparison with no trapping.
;; These are used by auto-vectorization.
(define_expand "@vmf<optab><mode>_vv"
  [(set (match_operand:<VM> 0 "register_operand")
    (unspec:<VM>
      [(unspec:<VM>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand")
         (any_fcmp_no_trapping:<VM>
          (match_operand:VF 3 "register_operand")
          (match_operand:VF 4 "register_operand"))
         (match_operand:<VM> 2 "vector_reg_or_const0_operand")] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand")
       (match_operand 6 "const_int_operand")] UNSPEC_RVV))]
  "TARGET_VECTOR"
{
  rtx mask = gen_reg_rtx (<VM>mode);
  if (strcmp ("<optab>", "ltgt") == 0)
    {
      emit_insn (gen_vmf_vv (GT, <MODE>mode, operands[0],
                 operands[1], operands[2], operands[3], operands[4],
                 operands[5], operands[6]));
      emit_insn (gen_vmf_vv (GT, <MODE>mode, mask,
                 operands[1], operands[2], operands[4], operands[3],
                 operands[5], operands[6]));
      emit_insn (gen_vm_mm (IOR, <VM>mode, operands[0], operands[0], mask,
                 operands[5], operands[6]));
    }
  else
    {
      /* Example of implementing isgreater()
         vmfeq.vv v0, va, va ;; Only set where A is not NaN.
         vmfeq.vv v1, vb, vb ;; Only set where B is not NaN.
         vmand.mm v0, v0, v1 ;; Only set where A and B are ordered,
         vmfgt.vv v0, va, vb, v0.t ;; so only set flags on ordered values. */
      emit_insn (gen_vmf_vv (EQ, <MODE>mode, operands[0],
                 operands[1], operands[2], operands[3], operands[3],
                 operands[5], operands[6]));
      emit_insn (gen_vmf_vv (EQ, <MODE>mode, mask,
                 operands[1], operands[2], operands[4], operands[4],
                 operands[5], operands[6]));
      emit_insn (gen_vm_mm (AND, <VM>mode, operands[0], operands[0], mask,
                 operands[5], operands[6]));
      
      rtx all_ones = gen_reg_rtx (<VM>mode);            
      emit_insn (gen_vmset<vm>_m (all_ones, operands[5],
                                  riscv_vector_gen_policy ()));

      if (strcmp ("<optab>", "ordered") != 0)
        {
          if (strcmp ("<optab>", "unordered") == 0)
            emit_insn (gen_vmnot_m (<VM>mode, operands[0], operands[0], operands[5], operands[6]));
          else
            {
              enum rtx_code code = strcmp ("<optab>", "unlt") == 0 ? LT :
                    strcmp ("<optab>", "unle") == 0 ? LE : 
                    strcmp ("<optab>", "unge") == 0 ? GE :
                    strcmp ("<optab>", "ungt") == 0 ? GT : EQ; 
              emit_insn (gen_vmf_vv (code, <MODE>mode, operands[0],
                    operands[0], all_ones, operands[3], operands[4],
                    operands[5], operands[6]));
            }
        }
    }
  DONE;
})

;; Floating-Point Classify Instruction.
(define_insn "@vfclass<vmap>_v"
  [(set (match_operand:<VMAP> 0 "register_operand"              "=vd,vd,vr,vr")
    (unspec:<VMAP>
      [(unspec:<VMAP>
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
         (unspec:<VMAP>
          [(match_operand:VF 3 "register_operand"               "vr,vr,vr,vr")] UNSPEC_FCLASS)
         (match_operand:<VMAP> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
       (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK")
       (match_operand 5 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfclass.v\t%0,%3,%1.t
   vfclass.v\t%0,%3,%1.t
   vfclass.v\t%0,%3
   vfclass.v\t%0,%3"
  [(set_attr "type" "vfclass")
   (set_attr "mode" "<MODE>")])

;; Vector-Scalar Floating-Point merge.
(define_insn "@vfmerge<mode>_vfm"
  [(set (match_operand:VF 0 "register_operand"          "=vd,vd")
  (unspec:VF
    [(match_operand:VF 2 "vector_reg_or_const0_operand" "0,J")
      (unspec:VF
      [(match_operand:<VM> 1 "register_operand"         "vm,vm")
       (match_operand:VF 3 "register_operand"           "vr,vr")
       (vec_duplicate:VF
        (match_operand:<VSUB> 4 "register_operand"      "f,f"))] UNSPEC_MERGE)
     (match_operand 5 "p_reg_or_const_csr_operand"      "rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vfmerge.vfm\t%0,%3,%4,%1
  vfmerge.vfm\t%0,%3,%4,%1"
 [(set_attr "type" "vmerge")
  (set_attr "mode" "<MODE>")])

;; Vector-Scalar Floating-Point Move.
(define_expand "@vfmv<mode>_v_f"
  [(match_operand:VF 0 "register_operand")
   (match_operand:VF 1 "vector_reg_or_const0_operand")
   (match_operand:<VSUB> 2 "general_operand")
   (match_operand 3 "p_reg_or_const_csr_operand")
   (match_operand 4 "const_int_operand")]
  "TARGET_VECTOR"
{
  riscv_vector_expand_splat_vector (operands);
  DONE;
})

(define_insn "@vfmv<mode>_v_f_internal"
  [(set (match_operand:VF 0 "register_operand"          "=vr,vr,vr,vr")
  (unspec:VF
    [(match_operand:VF 1 "vector_reg_or_const0_operand" "0,J,0,J")
     (vec_duplicate:VF
       (match_operand:<VSUB> 2 "reg_or_0_operand"       "G,G,f,f"))
     (match_operand 3 "p_reg_or_const_csr_operand"      "rK,rK,rK,rK")
     (match_operand 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vmv.v.i\t%0,0
  vmv.v.i\t%0,0
  vfmv.v.f\t%0,%2
  vfmv.v.f\t%0,%2"
 [(set_attr "type" "vmove")
  (set_attr "mode" "<MODE>")])

;; Convert float to unsigned integer.
;; Convert float to signed integer.
(define_insn "@vfcvt<vmap>_x<fu>_f_v"
  [(set (match_operand:<VMAP> 0 "register_operand"            "=vd,vd,vr,vr")
  (unspec:<VMAP>
    [(unspec:<VMAP>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
       (unspec:<VMAP>
         [(match_operand:VF 3 "register_operand"              "vr,vr,vr,vr")] FCVT)
       (match_operand:<VMAP> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfcvt.x<fu>.f.v\t%0,%3,%1.t
   vfcvt.x<fu>.f.v\t%0,%3,%1.t
   vfcvt.x<fu>.f.v\t%0,%3
   vfcvt.x<fu>.f.v\t%0,%3"
  [(set_attr "type" "vfcvt")
   (set_attr "mode" "<MODE>")])

;; Convert float to unsigned integer, truncating.
;; Convert float to signed integer, truncating.
(define_insn "@vfcvt<vmap>_rtz_x<u>_f_v"
  [(set (match_operand:<VMAP> 0 "register_operand"            "=vd,vd,vr,vr")
  (unspec:<VMAP>
    [(unspec:<VMAP>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"   "vm,vm,J,J")
       (any_fix:<VMAP>
         (match_operand:VF 3 "register_operand"               "vr,vr,vr,vr"))
       (match_operand:<VMAP> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"            "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfcvt.rtz.x<u>.f.v\t%0,%3,%1.t
   vfcvt.rtz.x<u>.f.v\t%0,%3,%1.t
   vfcvt.rtz.x<u>.f.v\t%0,%3
   vfcvt.rtz.x<u>.f.v\t%0,%3"
  [(set_attr "type" "vfcvt")
   (set_attr "mode" "<MODE>")])

;; Convert unsigned integer to float.
;; Convert signed integer to float.
(define_insn "@vfcvt<mode>_f_x<u>_v"
  [(set (match_operand:VF 0 "register_operand"              "=vd,vd,vr,vr")
  (unspec:VF
    [(unspec:VF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_float:VF
         (match_operand:<VMAP> 3 "register_operand"         "vr,vr,vr,vr"))
       (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfcvt.f.x<u>.v\t%0,%3,%1.t
   vfcvt.f.x<u>.v\t%0,%3,%1.t
   vfcvt.f.x<u>.v\t%0,%3
   vfcvt.f.x<u>.v\t%0,%3"
  [(set_attr "type" "vfcvt")
   (set_attr "mode" "<MODE>")])

;; Convert float to double-width unsigned integer.
;; Convert float to double-width signed integer.
(define_insn "@vfwcvt<vwmap>_x<fu>_f_v"
  [(set (match_operand:<VWMAP> 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:<VWMAP>
    [(unspec:<VWMAP>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,J,J")
       (unspec:<VWMAP>
         [(match_operand:VWF 3 "register_operand"               "vr,vr,vr,vr")] FCVT)
       (match_operand:<VWMAP> 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"              "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwcvt.x<fu>.f.v\t%0,%3,%1.t
   vfwcvt.x<fu>.f.v\t%0,%3,%1.t
   vfwcvt.x<fu>.f.v\t%0,%3
   vfwcvt.x<fu>.f.v\t%0,%3"
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; Convert float to double-width unsigned integer, truncating.
;; Convert float to double-width signed integer, truncating.
(define_insn "@vfwcvt<vwmap>_rtz_x<u>_f_v"
  [(set (match_operand:<VWMAP> 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:<VWMAP>
    [(unspec:<VWMAP>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,J,J")
       (any_fix:<VWMAP>
         (match_operand:VWF 3 "register_operand"                "vr,vr,vr,vr"))
       (match_operand:<VWMAP> 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"              "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwcvt.rtz.x<u>.f.v\t%0,%3,%1.t
   vfwcvt.rtz.x<u>.f.v\t%0,%3,%1.t
   vfwcvt.rtz.x<u>.f.v\t%0,%3
   vfwcvt.rtz.x<u>.f.v\t%0,%3"
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; Convert unsigned integer to double-width float.
;; Convert signed integer to double-width float.
(define_insn "@vfwcvt<vwfmap>_f_x<u>_v"
  [(set (match_operand:<VWFMAP> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VWFMAP>
    [(unspec:<VWFMAP>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"     "vm,vm,J,J")
       (any_float:<VWFMAP>
         (match_operand:VWI 3 "register_operand"                "vr,vr,vr,vr"))
       (match_operand:<VWFMAP> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"              "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwcvt.f.x<u>.v\t%0,%3,%1.t
   vfwcvt.f.x<u>.v\t%0,%3,%1.t
   vfwcvt.f.x<u>.v\t%0,%3
   vfwcvt.f.x<u>.v\t%0,%3"
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; Convert single-width float to double-width float
(define_insn "@vfwcvt<vw>_f_f_v"
  [(set (match_operand:<VW> 0 "register_operand"            "=&vr,&vr,&vr,&vr")
  (unspec:<VW>
    [(unspec:<VW>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (float_extend:<VW>
         (match_operand:VWF 3 "register_operand"            "vr,vr,vr,vr"))
       (match_operand:<VW> 2 "vector_reg_or_const0_operand" "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwcvt.f.f.v\t%0,%3,%1.t
   vfwcvt.f.f.v\t%0,%3,%1.t
   vfwcvt.f.f.v\t%0,%3
   vfwcvt.f.f.v\t%0,%3"
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; Convert double-width float to unsigned integer.
;; Convert double-width float to signed integer.
(define_insn "@vfncvt<mode>_x<fu>_f_w"
  [(set (match_operand:VWI 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:VWI
    [(unspec:VWI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VWI
         [(match_operand:<VWFMAP> 3 "register_operand"      "vr,vr,vr,vr")] FCVT)
       (match_operand:VWI 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfncvt.x<fu>.f.w\t%0,%3,%1.t
   vfncvt.x<fu>.f.w\t%0,%3,%1.t
   vfncvt.x<fu>.f.w\t%0,%3
   vfncvt.x<fu>.f.w\t%0,%3"
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; Convert double-width float to unsigned integer, truncating.
;; Convert double-width float to signed integer, truncating.
(define_insn "@vfncvt<mode>_rtz_x<u>_f_w"
  [(set (match_operand:VWI 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:VWI
    [(unspec:VWI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_fix:VWI
         (match_operand:<VWFMAP> 3 "register_operand"       "vr,vr,vr,vr"))
       (match_operand:VWI 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfncvt.rtz.x<u>.f.w\t%0,%3,%1.t
   vfncvt.rtz.x<u>.f.w\t%0,%3,%1.t
   vfncvt.rtz.x<u>.f.w\t%0,%3
   vfncvt.rtz.x<u>.f.w\t%0,%3"
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; Convert double-width unsigned integer to float.
;; Convert double-width signed integer to float.
(define_insn "@vfncvt<mode>_f_x<u>_w"
  [(set (match_operand:VWF 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:VWF
    [(unspec:VWF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (any_float:VWF
         (match_operand:<VWMAP> 3 "register_operand"        "vr,vr,vr,vr"))
       (match_operand:VWF 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfncvt.f.x<u>.w\t%0,%3,%1.t
   vfncvt.f.x<u>.w\t%0,%3,%1.t
   vfncvt.f.x<u>.w\t%0,%3
   vfncvt.f.x<u>.w\t%0,%3"
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; Convert double-width float to single-width float.
(define_insn "@vfncvt<mode>_f_f_w"
  [(set (match_operand:VWF 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:VWF
    [(unspec:VWF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (float_truncate:VWF
         (match_operand:<VW> 3 "register_operand"           "vr,vr,vr,vr"))
       (match_operand:VWF 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfncvt.f.f.w\t%0,%3,%1.t
   vfncvt.f.f.w\t%0,%3,%1.t
   vfncvt.f.f.w\t%0,%3
   vfncvt.f.f.w\t%0,%3"
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; Convert double-width float to single-width float, rounding towards odd.
(define_insn "@vfncvt<mode>_rod_f_f_w"
  [(set (match_operand:VWF 0 "register_operand"             "=&vr,&vr,&vr,&vr")
  (unspec:VWF
    [(unspec:VWF
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VWF
         [(float_extend:VWF
           (match_operand:<VW> 3 "register_operand"         "vr,vr,vr,vr"))] UNSPEC_ROD)
       (match_operand:VWF 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfncvt.rod.f.f.w\t%0,%3,%1.t
   vfncvt.rod.f.f.w\t%0,%3,%1.t
   vfncvt.rod.f.f.w\t%0,%3
   vfncvt.rod.f.f.w\t%0,%3"
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------------
;; ---- 14. Vector Reduction Operations
;; -------------------------------------------------------------------------------
;; Includes:
;; - 14.1 Vector Single-Width Integer Reduction Instructions
;; - 14.2 Vector Widening Integer Reduction Instructions
;; - 14.3 Vector Single-Width Floating-Point Reduction
;; - 14.4 Vector Widening Floating-Point Reduction Instructions
;; -------------------------------------------------------------------------------

;; Integer simple-reductions.
(define_insn "@vred<reduc><mode>_vs"
  [(set (match_operand:<VLMUL1> 0 "register_operand"                "=vr,vr,vr,vr")
  (unspec:<VLMUL1>
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,J,J")
       (unspec:<VLMUL1>
         [(match_operand:<VLMUL1> 2 "vector_reg_or_const0_operand"  "0,J,0,J")
          (match_operand:VI 3 "register_operand"                    "vr,vr,vr,vr")
          (match_operand:<VLMUL1> 4 "register_operand"              "vr,vr,vr,vr")] REDUC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"                  "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vred<reduc>.vs\t%0,%3,%4,%1.t
   vred<reduc>.vs\t%0,%3,%4,%1.t
   vred<reduc>.vs\t%0,%3,%4
   vred<reduc>.vs\t%0,%3,%4"
  [(set_attr "type" "vreduc")
   (set_attr "mode" "<MODE>")])

;; Signed/Unsigned sum reduction into double-width accumulator.
(define_insn "@vwredsum<u><mode>_vs"
  [(set (match_operand:<VWLMUL1> 0 "register_operand"               "=&vr,&vr,&vr,&vr")
  (unspec:<VWLMUL1>
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,J,J")
       (unspec:<VWLMUL1>
         [(match_operand:<VWLMUL1> 2 "vector_reg_or_const0_operand" "0,J,0,J")
          (any_extend:<VWLMUL1>
           (match_operand:VWREDI 3 "register_operand"               "vr,vr,vr,vr"))
          (match_operand:<VWLMUL1> 4 "register_operand"             "vr,vr,vr,vr")] UNSPEC_REDUC_SUM)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"                  "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vwredsum<u>.vs\t%0,%3,%4,%1.t
   vwredsum<u>.vs\t%0,%3,%4,%1.t
   vwredsum<u>.vs\t%0,%3,%4
   vwredsum<u>.vs\t%0,%3,%4"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<MODE>")])

;; Floating-Point simple-reductions.
(define_insn "@vfred<reduc><mode>_vs"
  [(set (match_operand:<VLMUL1> 0 "register_operand"                "=vr,vr,vr,vr")
  (unspec:<VLMUL1>
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,J,J")
       (unspec:<VLMUL1>
         [(match_operand:<VLMUL1> 2 "vector_reg_or_const0_operand"  "0,J,0,J")
          (match_operand:VF 3 "register_operand"                    "vr,vr,vr,vr")
          (match_operand:<VLMUL1> 4 "register_operand"              "vr,vr,vr,vr")] FREDUC)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"                  "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfred<reduc>.vs\t%0,%3,%4,%1.t
   vfred<reduc>.vs\t%0,%3,%4,%1.t
   vfred<reduc>.vs\t%0,%3,%4
   vfred<reduc>.vs\t%0,%3,%4"
  [(set_attr "type" "vreduc")
   (set_attr "mode" "<MODE>")])

;; unordered sum reduction into double-width accumulator.
(define_insn "@vfwredusum<mode>_vs"
  [(set (match_operand:<VWLMUL1> 0 "register_operand"               "=&vr,&vr,&vr,&vr")
  (unspec:<VWLMUL1>
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,J,J")
       (unspec:<VWLMUL1>
         [(match_operand:<VWLMUL1> 2 "vector_reg_or_const0_operand" "0,J,0,J")
          (float_extend:<VWLMUL1>
           (match_operand:VWREDF 3 "register_operand"               "vr,vr,vr,vr"))
          (match_operand:<VWLMUL1> 4 "register_operand"             "vr,vr,vr,vr")] UNSPEC_REDUC_UNORDERED_SUM)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"                  "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwredusum.vs\t%0,%3,%4,%1.t
   vfwredusum.vs\t%0,%3,%4,%1.t
   vfwredusum.vs\t%0,%3,%4
   vfwredusum.vs\t%0,%3,%4"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<MODE>")])

;; ordered sum reduction into double-width accumulator.
(define_insn "@vfwredosum<mode>_vs"
  [(set (match_operand:<VWLMUL1> 0 "register_operand"               "=&vr,&vr,&vr,&vr")
  (unspec:<VWLMUL1>
    [(unspec:<VM>
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,J,J")
       (unspec:<VWLMUL1>
         [(match_operand:<VWLMUL1> 2 "vector_reg_or_const0_operand" "0,J,0,J")
          (float_extend:<VWLMUL1>
           (match_operand:VWREDF 3 "register_operand"               "vr,vr,vr,vr"))
          (match_operand:<VWLMUL1> 4 "register_operand"             "vr,vr,vr,vr")] UNSPEC_REDUC_ORDERED_SUM)
       (match_dup 2)] UNSPEC_SELECT)
     (match_operand 5 "p_reg_or_const_csr_operand"                  "rK,rK,rK,rK")
     (match_operand 6 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfwredosum.vs\t%0,%3,%4,%1.t
   vfwredosum.vs\t%0,%3,%4,%1.t
   vfwredosum.vs\t%0,%3,%4
   vfwredosum.vs\t%0,%3,%4"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------------
;; ---- 15. Vector Mask Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 15.1 Vector Mask-Register Logical Instructions
;; - 15.2 Vector mask population count vpopc
;; - 15.3 vfirst find-first-set mask bit
;; - 15.4 vmsbf.m set-before-first mask bit
;; - 15.5 vmsif.m set-including-fisrt mask bit
;; - 15.6 vmsof.m set-only-first mask bit
;; - 15.8 Vector Iota Instruction
;; - 15.9 Vector Element Index Instructions
;; -------------------------------------------------------------------------------

;; Vector Mask-Register Logical Instructions.
(define_insn "@vm<optab><mode>_mm"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(any_bitwise:VB
        (match_operand:VB 1 "register_operand"        "vr")
        (match_operand:VB 2 "register_operand"        "vr"))
       (match_operand 3 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vm<insn>.mm\t%0,%1,%2"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

(define_insn "@vmn<optab><mode>_mm"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(not:VB
        (any_bitwise:VB
          (match_operand:VB 1 "register_operand"      "vr")
          (match_operand:VB 2 "register_operand"      "vr")))
       (match_operand 3 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vm<ninsn>.mm\t%0,%1,%2"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

(define_insn "@vm<optab>not<mode>_mm"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(any_logicalnot:VB
        (match_operand:VB 1 "register_operand"        "vr")
        (not:VB
          (match_operand:VB 2 "register_operand"      "vr")))
       (match_operand 3 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vm<insn>n.mm\t%0,%1,%2"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

;; vmmv.m vd,vs -> vmand.mm vd,vs,vs # Copy mask register
(define_insn "@vmmv<mode>_m"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(match_operand:VB 1 "register_operand"         "vr")
       (match_operand 2 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 3 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vmmv.m\t%0,%1"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

;; vmclr.m vd -> vmxor.mm vd,vd,vd # Clear mask register
(define_insn "@vmclr<mode>_m"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(vec_duplicate:VB (const_int 0))
       (match_operand 1 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 2 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vmclr.m\t%0"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

;; vmset.m vd -> vmxnor.mm vd,vd,vd # Set mask register
(define_insn "@vmset<mode>_m"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(vec_duplicate:VB (const_int 1))
       (match_operand 1 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 2 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vmset.m\t%0"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

;; vmnot.m vd,vs -> vmnand.mm vd,vs,vs # Invert bits
(define_insn "@vmnot<mode>_m"
  [(set (match_operand:VB 0 "register_operand"        "=vr")
    (unspec:VB
      [(not:VB
        (match_operand:VB 1 "register_operand"        "vr"))
       (match_operand 2 "p_reg_or_const_csr_operand"  "rK")
       (match_operand 3 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "vmnot.m\t%0,%1"
 [(set_attr "type" "vmask")
  (set_attr "mode" "<MODE>")])

;; Vector mask population count vpopc
(define_insn "@vcpop<VB:mode>_<X:mode>_m"
  [(set (match_operand:X 0 "register_operand"                 "=r,r")
    (unspec:X
      [(unspec:VB
         [(match_operand:VB 1 "vector_reg_or_const0_operand"  "vm,J")
          (match_operand:VB 2 "register_operand"              "vr,vr")
          ] UNSPEC_VCPOP)
       (match_operand 3 "p_reg_or_const_csr_operand"          "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vcpop.m\t%0,%2,%1.t
  vcpop.m\t%0,%2"
 [(set_attr "type" "vcpop")
  (set_attr "mode" "<VB:MODE>")])

;; vfirst find-first-set mask bit
(define_insn "@vfirst<VB:mode>_<X:mode>_m"
  [(set (match_operand:X 0 "register_operand"               "=r,r")
    (unspec:X
      [(unspec:VB
        [(match_operand:VB 1 "vector_reg_or_const0_operand" "vm,J")
         (match_operand:VB 2 "register_operand"             "vr,vr")] UNSPEC_FIRST)
       (match_operand 3 "p_reg_or_const_csr_operand"        "rK,rK")
       (match_operand 4 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vfirst.m\t%0,%2,%1.t
  vfirst.m\t%0,%2"
 [(set_attr "type" "vmsetbit")
  (set_attr "mode" "<VB:MODE>")])

;; vmsbf.m set-before-first mask bit.
;; vmsif.m set-including-fisrt mask bit.
;; vmsof.m set-only-first mask bit.
(define_insn "@vm<smb><mode>_m"
  [(set (match_operand:VB 0 "register_operand"              "=&vr,&vr,&vr")
    (unspec:VB
      [(unspec:VB
        [(match_operand:VB 1 "vector_reg_or_const0_operand" "vm,vm,J")
         (unspec:VB
           [(match_operand:VB 3 "register_operand"          "vr,vr,vr")] MASK_SET)
         (match_operand:VB 2 "vector_reg_or_const0_operand" "0,J,J")] UNSPEC_SELECT)
       (match_operand 4 "p_reg_or_const_csr_operand"        "rK,rK,rK")
       (match_operand 5 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  vm<smb>.m\t%0,%3,%1.t
  vm<smb>.m\t%0,%3,%1.t
  vm<smb>.m\t%0,%3"
 [(set_attr "type" "vmsetbit")
  (set_attr "mode" "<MODE>")])

;; Vector Iota Instruction.
(define_insn "@viota<mode>_m"
  [(set (match_operand:VI 0 "register_operand"              "=&vr,&vr,&vr,&vr")
  (unspec:VI
    [(unspec:VI
      [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
       (unspec:VI
         [(match_operand:<VM> 3 "register_operand"          "vr,vr,vr,vr")] UNSPEC_IOTA)
       (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
     (match_operand 4 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
     (match_operand 5 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
 "TARGET_VECTOR"
 "@
  viota.m\t%0,%3,%1.t
  viota.m\t%0,%3,%1.t
  viota.m\t%0,%3
  viota.m\t%0,%3"
 [(set_attr "type" "viota")
  (set_attr "mode" "<MODE>")])

;; Vector Element Index Instructions.
(define_insn "@vid<mode>_v"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VI
     [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VI
           [(match_operand 3 "p_reg_or_const_csr_operand"     "rK,rK,rK,rK")
            (match_operand 4 "const_int_operand")] UNSPEC_ID)
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vid.v\t%0,%1.t
   vid.v\t%0,%1.t
   vid.v\t%0
   vid.v\t%0"
  [(set_attr "type" "vid")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------------
;; ---- 16. Vector Permutation Instructions
;; -------------------------------------------------------------------------------
;; Includes:
;; - 16.1 Integer Scalar Move Instructions
;; - 16.2 Floating-Point Scalar Move Instructions
;; - 16.3 Vector slide Instructins
;; - 16.4 Vector Register Gather Instructions
;; - 16.5 Vector Compress Instructions
;; -------------------------------------------------------------------------------

;; Integer Scalar Move Instructions.
(define_insn "@vmv<mode>_x_s"
  [(set (match_operand:<VSUB> 0 "register_operand" "=r")
    (unspec:<VSUB>
      [(vec_select:<VSUB>
        (match_operand:VNOT64BITI 1 "register_operand" "vr")
        (parallel [(const_int 0)]))
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vmv.x.s\t%0,%1"
  [(set_attr "type" "vmv_x_s")
   (set_attr "mode" "<MODE>")])

(define_expand "@vmv<mode>_x_s"
  [(set (match_operand:<VSUB> 0 "register_operand")
    (unspec:<VSUB>
      [(vec_select:<VSUB>
         (match_operand:V64BITI 1 "register_operand")
         (parallel [(const_int 0)]))
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  {
    if (!TARGET_64BIT)
      {
        rtx vector = gen_reg_rtx (<MODE>mode);
        rtx shift = gen_reg_rtx (Pmode);
        shift = force_reg (Pmode, GEN_INT (32));

        rtx lo = gen_lowpart (Pmode, operands[0]);
        rtx hi = gen_highpart (Pmode, operands[0]);
        emit_insn (gen_vlshr<mode>_vx (vector,
              const0_rtx, const0_rtx, operands[1],
              shift, GEN_INT(1), riscv_vector_gen_policy ()));
        emit_insn (gen_vmv<mode>_x_s_lo (lo, operands[1]));
        emit_insn (gen_vmv<mode>_x_s_hi (hi, vector));
        DONE;
      }

    emit_insn (gen_vmv<mode>_x_s_di_internal (operands[0], operands[1]));
    DONE;
  })

(define_insn "vmv<mode>_x_s_di_internal"
  [(set (match_operand:<VSUB> 0 "register_operand" "=r")
    (unspec:<VSUB>
      [(vec_select:<VSUB>
         (match_operand:V64BITI 1 "register_operand" "vr")
         (parallel [(const_int 0)]))
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vmv.x.s\t%0,%1"
  [(set_attr "type" "vmv_x_s")
   (set_attr "mode" "<MODE>")])

(define_insn "vmv<mode>_x_s_lo"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec:SI
      [(vec_select:DI
        (match_operand:V64BITI 1 "register_operand" "vr")
        (parallel [(const_int 0)]))
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_LO))]
  "TARGET_VECTOR"
  "vmv.x.s\t%0,%1"
  [(set_attr "type" "vmv_x_s")
   (set_attr "mode" "<MODE>")])

(define_insn "vmv<mode>_x_s_hi"
  [(set (match_operand:SI 0 "register_operand" "=r")
    (unspec:SI
      [(vec_select:DI
        (match_operand:V64BITI 1 "register_operand" "vr")
        (parallel [(const_int 0)]))
      (reg:SI VTYPE_REGNUM)] UNSPEC_HI))]
  "TARGET_VECTOR"
  "vmv.x.s\t%0,%1"
  [(set_attr "type" "vmv_x_s")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmv<mode>_s_x_internal"
  [(set (match_operand:VI 0 "register_operand"            "=vr,vr,vr,vr")
  (unspec:VI
    [(unspec:VI
      [(vec_duplicate:VI
         (match_operand:<VSUB> 2 "reg_or_0_operand"       "r,J,r,J"))
       (match_operand:VI 1 "vector_reg_or_const0_operand" "0,0,J,J")
       (const_int 1)] UNSPEC_VMV_SX)
     (match_operand 3 "p_reg_or_const_csr_operand"        "rK,rK,rK,rK")
     (match_operand 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmv.s.x\t%0,%2
   vmv.s.x\t%0,zero
   vmv.s.x\t%0,%2
   vmv.s.x\t%0,zero"
  [(set_attr "type" "vmv_s_x")
   (set_attr "mode" "<MODE>")])

(define_insn "@vmv<mode>_s_x_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"             "=vr,vr,vr,vr")
  (unspec:V64BITI
    [(unspec:V64BITI
      [(vec_duplicate:V64BITI
         (sign_extend:<VSUB>
          (match_operand:SI 2 "reg_or_0_operand"                "r,J,r,J")))
       (match_operand:V64BITI 1 "vector_reg_or_const0_operand"  "0,0,J,J")
       (const_int 1)] UNSPEC_VMV_SX)
     (match_operand:SI 3 "csr_operand"                          "rK,rK,rK,rK")
     (match_operand:SI 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vmv.s.x\t%0,%2
   vmv.s.x\t%0,zero
   vmv.s.x\t%0,%2
   vmv.s.x\t%0,zero"
  [(set_attr "type" "vmv_s_x")
   (set_attr "mode" "<MODE>")])

;; This pattern is used by auto-vectorization to
;; initiate a vector whose value of element 0 is
;; zero. We dont't want to use subreg to generate
;; transformation between floating-point and integer.
(define_insn "@vmv<mode>_s_x_internal"
  [(set (match_operand:VF 0 "register_operand"      "=vr")
  (unspec:VF
    [(unspec:VF
      [(const_int 0)
       (const_int 1)] UNSPEC_VMV_SX)
     (match_operand 1 "p_reg_or_const_csr_operand"  "rK")
     (match_operand 2 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vmv.s.x\t%0,zero"
  [(set_attr "type" "vmv_s_x")
   (set_attr "mode" "<MODE>")])

;; Floating-Point Scalar Move Instructions.
(define_insn "@vfmv<mode>_f_s"
  [(set (match_operand:<VSUB> 0 "register_operand" "=f")
    (unspec:<VSUB>
      [(vec_select:<VSUB>
        (match_operand:VF 1 "register_operand" "vr")
        (parallel [(const_int 0)]))
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vfmv.f.s\t%0,%1"
  [(set_attr "type" "vfmv_f_s")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfmv<mode>_s_f"
  [(set (match_operand:VF 0 "register_operand"            "=vr,vr")
  (unspec:VF
    [(unspec:VF
      [(vec_duplicate:VF
         (match_operand:<VSUB> 2 "register_operand"       "f,f"))
       (match_operand:VF 1 "vector_reg_or_const0_operand" "0,J")
       (const_int 1)] UNSPEC_VMV_SX)
     (match_operand 3 "p_reg_or_const_csr_operand"        "rK,rK")
     (match_operand 4 "const_int_operand")
     (reg:SI VL_REGNUM)
     (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vfmv.s.f\t%0,%2"
  [(set_attr "type" "vfmv_s_f")
   (set_attr "mode" "<MODE>")])

;; Vector Slideup/Slidedown Instructions.
(define_insn "@vslide<ud><mode>_vx"
  [(set (match_operand:V 0 "register_operand"                 "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:V
           [(match_operand:V 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")
           (match_operand:V 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
           (match_operand 4 "p_reg_or_uimm5_operand"          "r,K,r,K,r,K,r,K")] SLIDE_UP)
         (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide<ud>.vx\t%0,%3,%4,%1.t
   vslide<ud>.vi\t%0,%3,%4,%1.t
   vslide<ud>.vx\t%0,%3,%4,%1.t
   vslide<ud>.vi\t%0,%3,%4,%1.t
   vslide<ud>.vx\t%0,%3,%4
   vslide<ud>.vi\t%0,%3,%4
   vslide<ud>.vx\t%0,%3,%4
   vslide<ud>.vi\t%0,%3,%4"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

(define_insn "@vslide<ud><mode>_vx"
  [(set (match_operand:V 0 "register_operand"                 "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:V
           [(match_operand:V 2 "vector_reg_or_const0_operand" "0,0,J,J,0,0,J,J")
           (match_operand:V 3 "register_operand"              "vr,vr,vr,vr,vr,vr,vr,vr")
           (match_operand 4 "p_reg_or_uimm5_operand"          "r,K,r,K,r,K,r,K")] SLIDE_DOWN)
         (match_dup 2)] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK,rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide<ud>.vx\t%0,%3,%4,%1.t
   vslide<ud>.vi\t%0,%3,%4,%1.t
   vslide<ud>.vx\t%0,%3,%4,%1.t
   vslide<ud>.vi\t%0,%3,%4,%1.t
   vslide<ud>.vx\t%0,%3,%4
   vslide<ud>.vi\t%0,%3,%4
   vslide<ud>.vx\t%0,%3,%4
   vslide<ud>.vi\t%0,%3,%4"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

;; Vector Integer Slide1up/Slide1down Instructions.
(define_insn "@vslide1<ud><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"                "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
    (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:VI
           [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
           (match_operand:<VSUB> 4 "reg_or_0_operand"         "r,J,r,J,r,J,r,J")] SLIDE1_UP)
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

(define_insn "@vslide1<ud><mode>_vx_internal"
  [(set (match_operand:VI 0 "register_operand"                "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:VI
           [(match_operand:VI 3 "register_operand"            "vr,vr,vr,vr,vr,vr,vr,vr")
           (match_operand:<VSUB> 4 "reg_or_0_operand"         "r,J,r,J,r,J,r,J")] SLIDE1_DOWN)
         (match_operand:VI 2 "vector_reg_or_const0_operand"   "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

(define_insn "@vslide1<ud><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                   "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
    (unspec:V64BITI
      [(unspec:V64BITI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,vm,vm,J,J,J,J")
         (unspec:V64BITI
           [(match_operand:V64BITI 3 "register_operand"               "vr,vr,vr,vr,vr,vr,vr,vr")
           (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_0_operand" "r,J,r,J,r,J,r,J"))] SLIDE1_UP)
         (match_operand:V64BITI 2 "vector_reg_or_const0_operand"      "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand:SI 5 "csr_operand"                               "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand:SI 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

(define_insn "@vslide1<ud><mode>_vx_32bit"
  [(set (match_operand:V64BITI 0 "register_operand"                   "=vd,vd,vd,vd,vr,vr,vr,vr")
    (unspec:V64BITI
      [(unspec:V64BITI
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand"         "vm,vm,vm,vm,J,J,J,J")
         (unspec:V64BITI
           [(match_operand:V64BITI 3 "register_operand"               "vr,vr,vr,vr,vr,vr,vr,vr")
           (sign_extend:<VSUB> (match_operand:SI 4 "reg_or_0_operand" "r,J,r,J,r,J,r,J"))] SLIDE1_DOWN)
         (match_operand:V64BITI 2 "vector_reg_or_const0_operand"      "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand:SI 5 "csr_operand"                               "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand:SI 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4,%1.t
   vslide1<ud>.vx\t%0,%3,zero,%1.t
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero
   vslide1<ud>.vx\t%0,%3,%4
   vslide1<ud>.vx\t%0,%3,zero"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

;; Vector Floating-Point Slide1up/Slide1down Instructions.
(define_insn "@vfslide1<ud><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"                "=vd,vd,vr,vr")
    (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VF
           [(match_operand:VF 3 "register_operand"            "vr,vr,vr,vr")
           (match_operand:<VSUB> 4 "register_operand"         "f,f,f,f")] SLIDE1_DOWN)
         (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfslide1<ud>.vf\t%0,%3,%4,%1.t
   vfslide1<ud>.vf\t%0,%3,%4,%1.t
   vfslide1<ud>.vf\t%0,%3,%4
   vfslide1<ud>.vf\t%0,%3,%4"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

(define_insn "@vfslide1<ud><mode>_vf"
  [(set (match_operand:VF 0 "register_operand"                "=&vr,&vr,&vr,&vr")
    (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:VF
           [(match_operand:VF 3 "register_operand"            "vr,vr,vr,vr")
           (match_operand:<VSUB> 4 "register_operand"         "f,f,f,f")] SLIDE1_UP)
         (match_operand:VF 2 "vector_reg_or_const0_operand"   "0,J,0,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vfslide1<ud>.vf\t%0,%3,%4,%1.t
   vfslide1<ud>.vf\t%0,%3,%4,%1.t
   vfslide1<ud>.vf\t%0,%3,%4
   vfslide1<ud>.vf\t%0,%3,%4"
  [(set_attr "type" "vslide")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector vrgater instruction.
(define_insn "@vrgather<mode>_vv"
  [(set (match_operand:V 0 "register_operand"                 "=&vr,&vr,&vr,&vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:V
           [(match_operand:V 3 "register_operand"             "vr,vr,vr,vr")
            (match_operand:<VMAP> 4 "register_operand"        "vr,vr,vr,vr")] UNSPEC_RGATHER)
         (match_operand:V 2 "vector_reg_or_const0_operand"    "0,J,0,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vrgather.vv\t%0,%3,%4,%1.t
   vrgather.vv\t%0,%3,%4,%1.t
   vrgather.vv\t%0,%3,%4
   vrgather.vv\t%0,%3,%4"
  [(set_attr "type" "vgather")
   (set_attr "mode" "<MODE>")])

;; Vector-Vector vrgaterei16 instruction.
(define_insn "@vrgatherei16<V16:mode>_vv"
  [(set (match_operand:V16 0 "register_operand"               "=&vr,&vr,&vr,&vr")
    (unspec:V16
      [(unspec:V16
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,J,J")
         (unspec:V16
           [(match_operand:V16 3 "register_operand"           "vr,vr,vr,vr")
            (match_operand:<VMAPI16> 4 "register_operand"     "vr,vr,vr,vr")] UNSPEC_RGATHEREI16)
         (match_operand:V16 2 "vector_reg_or_const0_operand"  "0,J,0,J")] UNSPEC_SELECT)
       (match_operand 5 "p_reg_or_const_csr_operand"          "rK,rK,rK,rK")
       (match_operand 6 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vrgatherei16.vv\t%0,%3,%4,%1.t
   vrgatherei16.vv\t%0,%3,%4,%1.t
   vrgatherei16.vv\t%0,%3,%4
   vrgatherei16.vv\t%0,%3,%4"
  [(set_attr "type" "vgather")
   (set_attr "mode" "<V16:MODE>")])

;; Vector-Scalar vrgater instruction.
(define_insn "@vrgather<mode>_vx"
  [(set (match_operand:V 0 "register_operand"                 "=&vr,&vr,&vr,&vr,&vr,&vr,&vr,&vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "vector_reg_or_const0_operand" "vm,vm,vm,vm,J,J,J,J")
         (unspec:V
           [(match_operand:V 3 "register_operand"             "vr,vr,vr,vr,vr,vr,vr,vr")
           (match_operand 4 "p_reg_or_uimm5_operand"          "r,K,r,K,r,K,r,K")] UNSPEC_RGATHER)
         (match_operand:V 2 "vector_reg_or_const0_operand"    "0,0,J,J,0,0,J,J")] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand"           "rK,rK,rK,rK,rK,rK,rK,rK")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vrgather.vx\t%0,%3,%4,%1.t
   vrgather.vi\t%0,%3,%4,%1.t
   vrgather.vx\t%0,%3,%4,%1.t
   vrgather.vi\t%0,%3,%4,%1.t
   vrgather.vx\t%0,%3,%4
   vrgather.vi\t%0,%3,%4
   vrgather.vx\t%0,%3,%4
   vrgather.vi\t%0,%3,%4"
  [(set_attr "type" "vgather")
   (set_attr "mode" "<MODE>")])

;; Vector Compress Instruction.
(define_insn "@vcompress<mode>_vm"
  [(set (match_operand:V 0 "register_operand"               "=&vr,&vr")
    (unspec:V
      [(unspec:V
        [(match_operand:<VM> 1 "register_operand"           "vm,vm")
         (match_operand:V 2 "vector_reg_or_const0_operand"  "0,J")
         (match_operand:V 3 "register_operand"              "vr,vr")] UNSPEC_COMPRESS)
      (match_operand 4 "p_reg_or_const_csr_operand"         "rK,rK")
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "vcompress.vm\t%0,%3,%1"
  [(set_attr "type" "vcompress")
   (set_attr "mode" "<MODE>")])
