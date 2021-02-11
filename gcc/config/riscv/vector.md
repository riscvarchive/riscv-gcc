(include "vector-iterator.md")

;; If operand 1 is a const_vector, then we can't split until after reload,
;; to ensure that the scratch operand has been allocated a reg first.
(define_expand "mov<mode>"
  [(set (match_operand:VMODES 0 "reg_or_mem_operand")
	(unspec:VMODES
	  [(match_operand:VMODES 1 "vector_move_operand")
	   (reg:SI VL_REGNUM)]
	 UNSPEC_USEVL))]
  "TARGET_VECTOR"
{
  /* Need to force register if mem <- !reg.  */
  if (MEM_P (operands[0]) && !REG_P (operands[1]))
    operands[1] = force_reg (<MODE>mode, operands[1]);

  rtx dup_value;

  /* If we have a const vector, then we have to load it's value into the
     scratch reg, and then create a vec_duplicate of it.  */
  if (const_vec_duplicate_p (operands[1], &dup_value))
    {
#if 0
      gcc_assert (can_create_pseudo_p ());
      rtx tmp_reg = gen_reg_rtx (<VSUBMODE>mode);
      emit_move_insn (tmp_reg, dup_value);
      emit_insn (gen_vsetvli_x0_<vlmode>());
      emit_insn (gen_vec_duplicate<mode>_nosetvl (operands[0], tmp_reg));
      DONE;
#else
      gcc_unreachable ();
#endif
    }
})

(define_insn "*mov<mode>"
  [(set (match_operand:VMODES 0 "reg_or_mem_operand"  "=vr,vr,m")
	(unspec:VMODES
	  [(match_operand:VMODES 1 "reg_or_mem_operand"  "vr,m,vr")
	   (reg:SI VL_REGNUM)]
	 UNSPEC_USEVL))]
  "TARGET_VECTOR"
  "@
   vmv<lmul>r.v\t%0,%1
   vl<lmul>r.v\t%0,%1
   vs<lmul>r.v\t%1,%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_code_iterator add_mul [plus mult])

(define_insn "@rvv_<optab><mode>"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
        (if_then_else:VIMODES
          (ne (unspec:VIMODES [(match_operand:VIMODES 3 "register_operand" "vt,vt")] UNSPEC_USEVL) (const_int 0))
          (add_mul:VIMODES
            (match_operand:VIMODES 1 "register_operand" "vr,vr")
            (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi"))
          (match_dup 0)))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%1,%2
   v<insn>.vi\t%0,%1,%v2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])
