;; Machine description for RISC-V vector operations.
;; Copyright (C) 2019 Free Software Foundation, Inc.
;; Contributed by Jim Wilson (jimw@sifive.com).

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

;; All vector modes supported.
(define_mode_iterator VMODES [VNx16QI VNx32QI VNx64QI VNx128QI
			     VNx8HI VNx16HI VNx32HI VNx64HI
			     VNx4SI VNx8SI VNx16SI VNx32SI
			     VNx2DI VNx4DI VNx8DI VNx16DI
			     VNx8HF VNx16HF VNx32HF VNx64HF
			     VNx4SF VNx8SF VNx16SF VNx32SF
			     VNx2DF VNx4DF VNx8DF VNx16DF])

;; All vector modes supported for FP load/store/alu.
(define_mode_iterator VFMODES [VNx8HF VNx16HF VNx32HF VNx64HF
			      VNx4SF VNx8SF VNx16SF VNx32SF
			      VNx2DF VNx4DF VNx8DF VNx16DF])

;; All vector modes supported for integer load/store/alu.
(define_mode_iterator VIMODES [VNx16QI VNx32QI VNx64QI VNx128QI
			      VNx8HI VNx16HI VNx32HI VNx64HI
			      VNx4SI VNx8SI VNx16SI VNx32SI
			      VNx2DI VNx4DI VNx8DI VNx16DI])

;; All vector modes supported for widening alu operations.
;; ??? Complete the list.
(define_mode_iterator VFWMODES [VNx32HF])

;; Map a vector float mode to a vector int mode of the same size.
(define_mode_attr VINTEQUIV
  [(VNx8HF "VNx8HI") (VNx16HF "VNx16HI")
   (VNx32HF "VNx32HI") (VNx64HF "VNx64HI")
   (VNx4SF "VNx4SI") (VNx8SF "VNx8SI")
   (VNx16SF "VNx16SI") (VNx32SF "VNx32SI")
   (VNx2DF "VNx2DI") (VNx4DF "VNx4DI")
   (VNx8DF "VNx8DI") (VNx16DF "VNx16DI")])

;; Map a vector float mode to a vector int mode of the same size, lowercase.
(define_mode_attr vintequiv
  [(VNx8HF "vnx8hi") (VNx16HF "vnx16hi")
   (VNx32HF "vnx32hi") (VNx64HF "vnx64hi")
   (VNx4SF "vnx4si") (VNx8SF "vnx8si")
   (VNx16SF "vnx16si") (VNx32SF "vnx32si")
   (VNx2DF "vnx2di") (VNx4DF "vnx4di")
   (VNx8DF "vnx8di") (VNx16DF "vnx16di")])

;; Map a vector int or float mode to a vector compare mode.
(define_mode_attr VCMPEQUIV
  [(VNx16QI "VNx1BI") (VNx32QI "VNx2BI")
   (VNx64QI "VNx4BI") (VNx128QI "VNx8BI")
   (VNx8HI "VNx1BI") (VNx16HI "VNx2BI")
   (VNx32HI "VNx4BI") (VNx64HI "VNx8BI")
   (VNx4SI "VNx1BI") (VNx8SI "VNx2BI")
   (VNx16SI "VNx4BI") (VNx32SI "VNx8BI")
   (VNx2DI "VNx1BI") (VNx4DI "VNx2BI")
   (VNx8DI "VNx4BI") (VNx16DI "VNx8BI")
   (VNx8HF "VNx1BI") (VNx16HF "VNx2BI")
   (VNx32HF "VNx4BI") (VNx64HF "VNx8BI")
   (VNx4SF "VNx1BI") (VNx8SF "VNx2BI")
   (VNx16SF "VNx4BI") (VNx32SF "VNx8BI")
   (VNx2DF "VNx1BI") (VNx4DF "VNx2BI")
   (VNx8DF "VNx4BI") (VNx16DF "VNx8BI")])

;; Map a vector mode to its wider mode.
;; ??? Complete the list.
(define_mode_attr VWMODE [(VNx32HF "VNx32SF")])

;; Map a vector mode to its element mode.
(define_mode_attr VSUBMODE
  [(VNx16QI "QI") (VNx32QI "QI") (VNx64QI "QI") (VNx128QI "QI")
   (VNx8HI "HI") (VNx16HI "HI") (VNx32HI "HI") (VNx64HI "HI")
   (VNx4SI "SI") (VNx8SI "SI") (VNx16SI "SI") (VNx32SI "SI")
   (VNx2DI "DI") (VNx4DI "DI") (VNx8DI "DI") (VNx16DI "DI")
   (VNx8HF "HF") (VNx16HF "HF") (VNx32HF "HF") (VNx64HF "HF")
   (VNx4SF "SF") (VNx8SF "SF") (VNx16SF "SF") (VNx32SF "SF")
   (VNx2DF "DF") (VNx4DF "DF") (VNx8DF "DF") (VNx16DF "DF")])

;; Map a vector mode to its VSETVLI mode, which for now is always the integer
;; vector mode, as the integer vemode/vmmode is a superset of the float ones.
(define_mode_attr VLMODE
  [(VNx16QI "VNx16QI") (VNx32QI "VNx32QI")
   (VNx64QI "VNx64QI") (VNx128QI "VNx128QI")
   (VNx8HI "VNx8HI") (VNx16HI "VNx16HI")
   (VNx32HI "VNx32HI") (VNx64HI "VNx64HI")
   (VNx4SI "VNx4SI") (VNx8SI "VNx8SI")
   (VNx16SI "VNx16SI") (VNx32SI "VNx32SI")
   (VNx2DI "VNx2DI") (VNx4DI "VNx4DI")
   (VNx8DI "VNx8DI") (VNx16DI "VNx16DI")
   (VNx8HF "VNx8HI") (VNx16HF "VNx16HI")
   (VNx32HF "VNx32HI") (VNx64HF "VNx64HI")
   (VNx4SF "VNx4SI") (VNx8SF "VNx8SI")
   (VNx16SF "VNx16SI") (VNx32SF "VNx32SI")
   (VNx2DF "VNx2DI") (VNx4DF "VNx4DI")
   (VNx8DF "VNx8DI") (VNx16DF "VNx16DI")])

;; Map a vector mode to its SEW value.
(define_mode_attr vemode
  [(VNx16QI "e8") (VNx32QI "e8") (VNx64QI "e8") (VNx128QI "e8")
   (VNx8HI "e16") (VNx16HI "e16") (VNx32HI "e16") (VNx64HI "e16")
   (VNx4SI "e32") (VNx8SI "e32") (VNx16SI "e32") (VNx32SI "e32")
   (VNx2DI "e64") (VNx4DI "e64") (VNx8DI "e64") (VNx16DI "e64")
   (VNx8HF "e16") (VNx16HF "e16") (VNx32HF "e16") (VNx64HF "e16")
   (VNx4SF "e32") (VNx8SF "e32") (VNx16SF "e32") (VNx32SF "e32")
   (VNx2DF "e64") (VNx4DF "e64") (VNx8DF "e64") (VNx16DF "e64")])

;; Map a vector mode to its SEW value, minus the e.
(define_mode_attr vememode
  [(VNx16QI "8") (VNx32QI "8") (VNx64QI "8") (VNx128QI "8")
   (VNx8HI "16") (VNx16HI "16") (VNx32HI "16") (VNx64HI "16")
   (VNx4SI "32") (VNx8SI "32") (VNx16SI "32") (VNx32SI "32")
   (VNx2DI "64") (VNx4DI "64") (VNx8DI "64") (VNx16DI "64")
   (VNx8HF "16") (VNx16HF "16") (VNx32HF "16") (VNx64HF "16")
   (VNx4SF "32") (VNx8SF "32") (VNx16SF "32") (VNx32SF "32")
   (VNx2DF "64") (VNx4DF "64") (VNx8DF "64") (VNx16DF "64")])

;; Map a vector mode to its LMUL value.
(define_mode_attr vmmode
  [(VNx16QI "m1") (VNx32QI "m2") (VNx64QI "m4") (VNx128QI "m8")
   (VNx8HI "m1") (VNx16HI "m2") (VNx32HI "m4") (VNx64HI "m8")
   (VNx4SI "m1") (VNx8SI "m2") (VNx16SI "m4") (VNx32SI "m8")
   (VNx2DI "m1") (VNx4DI "m2") (VNx8DI "m4") (VNx16DI "m8")
   (VNx8HF "m1") (VNx16HF "m2") (VNx32HF "m4") (VNx64HF "m8")
   (VNx4SF "m1") (VNx8SF "m2") (VNx16SF "m4") (VNx32SF "m8")
   (VNx2DF "m1") (VNx4DF "m2") (VNx8DF "m4") (VNx16DF "m8")])

;; Vsetvl instructions.

;; These use VIMODES because only the SEW and LMUL matter.  The int/float
;; distinction does not.  Also, the int modes are a superset of the float
;; modes.

(define_insn "riscv_vsetvl<VIMODES:vememode><VIMODES:vmmode>_<P:mode>"
  [(set (match_operand:P 0 "register_operand" "=r")
	(unspec_volatile:P [(match_operand:P 1 "register_operand" "r")]
			   UNSPECV_VSETVL))
   (set (reg:VIMODES VL_REGNUM) (const_int UNSPECV_VSETVL))
   (set (reg:VIMODES VTYPE_REGNUM) (const_int UNSPECV_VSETVL))]
  "TARGET_VECTOR"
  "vsetvli\t%0,%1,<VIMODES:vemode>,<VIMODES:vmmode>"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "vsetvli_x0_<mode>"
  [(set (reg:VIMODES VTYPE_REGNUM) (const_int UNSPECV_VSETVL))]
  "TARGET_VECTOR"
  "vsetvli\tx0,x0,<vemode>,<vmmode>"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Load/store instructions.

;; Move instructions.

;; ??? We need the m constraints here only if we want load/store to work
;; directly without using an intrinsic.

;; If operand 1 is a const_vector, then we can't split until after reload,
;; to ensure that the scratch operand has been allocated a reg first.
(define_insn_and_split "mov<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "nonimmediate_operand" "=vr,vr, m,vr")
	(match_operand:VIMODES 1 "vector_move_operand"  " vr, m,vr,vc"))
   (clobber (match_scratch:<VSUBMODE> 2 "=X,X,X,r"))]
  "TARGET_VECTOR"
  "#"
  "&& 1 && (reload_completed || GET_CODE (operands[1]) != CONST_VECTOR)"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (match_dup 1))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
{
  /* If we have a const vector, then we have to load it's value into the
     scratch reg, and then create a vec_duplicate of it.  */
  if (const_vec_duplicate_p (operands[1], &operands[3]))
    {
      emit_move_insn (operands[2], operands[3]);
      operands[1] = gen_rtx_VEC_DUPLICATE (GET_MODE (operands[1]),
					   operands[2]);
    }
}
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*mov<mode>_nosetvl"
  [(set (match_operand:VIMODES 0 "nonimmediate_operand" "=vr,vr, m")
	(match_operand:VIMODES 1 "vector_move_operand"  " vr, m,vr"))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vmv.v.v\t%0,%1
   vle.v\t%0,%1
   vse.v\t%1,%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "mov<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "nonimmediate_operand" "=vr,vr, m")
	(match_operand:VFMODES 1 "nonimmediate_operand" " vr, m,vr"))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (match_dup 1))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Identical to VIMODES pattern above.
(define_insn "*mov<mode>_nosetvl"
  [(set (match_operand:VFMODES 0 "nonimmediate_operand" "=vr,vr, m")
	(match_operand:VFMODES 1 "nonimmediate_operand" " vr, m,vr"))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vfmv.v.v\t%0,%1
   vle.v\t%0,%1
   vse.v\t%1,%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Integer ALU instructions.

(define_insn_and_split "add<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(plus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr,vr")
		      (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (plus:VIMODES (match_dup 1) (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])
   
(define_insn "*add<mode>3_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(plus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr,vr")
		      (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vadd.vv\t%0,%1,%2
   vadd.vi\t%0,%1,%v2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "*add<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(plus:VIMODES (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 2 "register_operand" "r"))
		      (match_operand:VIMODES 1 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0)
		   (plus:VIMODES (vec_duplicate:VIMODES (match_dup 2))
				 (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*add<mode>3_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(plus:VIMODES (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 2 "register_operand" "r"))
		      (match_operand:VIMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vadd.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Needs splitter.
(define_insn "sub<mode>3"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		       (match_operand:VIMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vsub.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Floating point ALU instructions.

(define_insn_and_split "add<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(plus:VFMODES (match_operand:VFMODES 1 "register_operand" "vr")
		      (match_operand:VFMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (plus:VFMODES (match_dup 1) (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*add<mode>3_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(plus:VFMODES (match_operand:VFMODES 1 "register_operand" "vr")
		      (match_operand:VFMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfadd.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "*add<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(plus:VFMODES (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 2 "register_operand" "f"))
		      (match_operand:VFMODES 1 "register_operand" "vr")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (plus:VFMODES (vec_duplicate:VFMODES (match_dup 2)) (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*add<mode>3_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(plus:VFMODES (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 2 "register_operand" "f"))
		      (match_operand:VFMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfadd.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Needs splitter.
(define_insn "sub<mode>3"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(minus:VFMODES (match_operand:VFMODES 1 "register_operand" "vr")
		       (match_operand:VFMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfsub.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Integer multiply instructions.

(define_insn_and_split "mul<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		      (match_operand:VIMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (mult:VIMODES (match_dup 1) (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*mul<mode>3_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		      (match_operand:VIMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? The constant is pulled out of the loop before it can be used here.
(define_insn_and_split "*mul<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 1 "register_operand" "r"))
		      (match_operand:VIMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (mult:VIMODES
				  (vec_duplicate:VIMODES (match_dup 1))
				  (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*mul<mode>3_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 1 "register_operand" "r"))
		      (match_operand:VIMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vx\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; FP multiply instructions.

(define_insn_and_split "mul<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(mult:VFMODES (match_operand:VFMODES 1 "register_operand" "vr")
		      (match_operand:VFMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (mult:VFMODES (match_dup 1) (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "mul<mode>3_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(mult:VFMODES (match_operand:VFMODES 1 "register_operand" "vr")
		      (match_operand:VFMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmul.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? The constant is pulled out of the loop before it can be used here.
(define_insn_and_split "*mul<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(mult:VFMODES (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 1 "register_operand" "f"))
		      (match_operand:VFMODES 2 "register_operand" "vr")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (mult:VFMODES
				  (vec_duplicate:VFMODES (match_dup 1))
				  (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*mul<mode>3_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(mult:VFMODES (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 1 "register_operand" "f"))
		      (match_operand:VFMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmul.vf\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; FP widen multiply instructions.

;; ??? Needs splitter.
(define_insn "riscv_vfwmulfloat<vememode><vmmode>"
  [(set (match_operand:<VWMODE> 0 "register_operand" "=vr")
	(mult:<VWMODE> (float_extend:<VWMODE>
			(match_operand:VFWMODES 1 "register_operand" "vr"))
		       (float_extend:<VWMODE>
			(match_operand:VFWMODES 2 "register_operand" "vr"))))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfwmul.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "riscv_vfwmulfloat<vememode><vmmode>_scalar"
  [(set (match_operand:<VWMODE> 0 "register_operand" "=vr")
	(mult:<VWMODE> (float_extend:<VWMODE>
			(match_operand:VFWMODES 1 "register_operand" "vr"))
		       (float_extend:<VWMODE>
			(vec_duplicate:VFWMODES
			 (match_operand:<VSUBMODE> 2 "register_operand" "f")))))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfwmul.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; FP multiply accumulate instructions.

;; ??? Should use fma as this is a merged mult/add.  And fms below.
(define_insn_and_split "fma<mode>4"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr,vr")
	(plus:VFMODES
	 (mult:VFMODES (match_operand:VFMODES 1 "register_operand" "0,vr")
		       (match_operand:VFMODES 2 "register_operand" "vr,vr"))
	 (match_operand:VFMODES 3 "register_operand" "vr,0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (plus:VFMODES
				  (mult:VFMODES (match_dup 1) (match_dup 2))
				  (match_dup 3)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "fma<mode>4_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr,vr")
	(plus:VFMODES
	 (mult:VFMODES (match_operand:VFMODES 1 "register_operand" "0,vr")
		       (match_operand:VFMODES 2 "register_operand" "vr,vr"))
	 (match_operand:VFMODES 3 "register_operand" "vr,0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vfmadd.vv\t%0,%2,%3
   vfmacc.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Needs splitter.
(define_insn "fms<mode>4"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr,vr")
	(minus:VFMODES
	 (mult:VFMODES (match_operand:VFMODES 1 "register_operand" "0,vr")
		       (match_operand:VFMODES 2 "register_operand" "vr,vr"))
	 (match_operand:VFMODES 3 "register_operand" "vr,0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vsetvli\tx0,x0,<vemode>,<vmmode>\;vfmsub.vv\t%0,%2,%3
   vsetvli\tx0,x0,<vemode>,<vmmode>\;vfmsac.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Needs splitter.
;; ??? The constant is pulled out of the loop before it can be used here.
;; ??? Missing scalar form of fms.
(define_insn "*fma<mode>4_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr,vr")
	(plus:VFMODES
	 (mult:VFMODES (vec_duplicate:VFMODES
			(match_operand:<VSUBMODE> 1 "register_operand" "f,f"))
		       (match_operand:VFMODES 2 "register_operand" "0,vr"))
	 (match_operand:VFMODES 3 "register_operand" "vr,0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vsetvli\tx0,x0,<vemode>,<vmmode>\;vfmadd.vf\t%0,%1,%3
   vsetvli\tx0,x0,<vemode>,<vmmode>\;vfmacc.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; FP widen multiply accumulate instructions.

;; ??? Needs splitter.
(define_insn "riscv_vfwmaddfloat<vememode><vmmode>"
  [(set (match_operand:<VWMODE> 0 "register_operand" "=vr")
	(plus:<VWMODE>
	 (mult:<VWMODE> (float_extend:<VWMODE>
			 (match_operand:VFWMODES 1 "register_operand" "vr"))
			(float_extend:<VWMODE>
			 (match_operand:VFWMODES 2 "register_operand" "vr")))
	 (match_operand:<VWMODE> 3 "register_operand" "0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfwmacc.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "riscv_vfwmsubfloat<vememode><vmmode>"
  [(set (match_operand:<VWMODE> 0 "register_operand" "=vr")
	(minus:<VWMODE>
	 (mult:<VWMODE> (float_extend:<VWMODE>
			 (match_operand:VFWMODES 1 "register_operand" "vr"))
			(float_extend:<VWMODE>
			 (match_operand:VFWMODES 2 "register_operand" "vr")))
	 (match_operand:<VWMODE> 3 "register_operand" "0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfwmsac.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? Missing scalar form of vfwmsub.
(define_insn "riscv_vfwmaddfloat<vememode><vmmode>_scalar"
  [(set (match_operand:<VWMODE> 0 "register_operand" "=vr")
	(plus:<VWMODE>
	 (mult:<VWMODE> (float_extend:<VWMODE>
			 (match_operand:VFWMODES 1 "register_operand" "vr"))
			(vec_duplicate:<VWMODE>
			 (float_extend:<VWMODE>
			  (match_operand:<VSUBMODE> 2 "register_operand" "f"))))
	 (match_operand:<VWMODE> 3 "register_operand" "0")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vsetvli\tx0,x0,<vemode>,<vmmode>\;vfwmacc.vf\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Integer merge instructions.

(define_insn_and_split "vec_duplicate<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(vec_duplicate:VIMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "r")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (vec_duplicate:VIMODES (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*vec_duplicate<mode>_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(vec_duplicate:VIMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "r")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmv.v.x\t%0,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; FP merge instructions.

(define_insn_and_split "vec_duplicate<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(vec_duplicate:VFMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "f")))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (vec_duplicate:VFMODES (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "vec_duplicate<mode>_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(vec_duplicate:VFMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "f")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmv.v.f\t%0,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector comparison support.

;; ??? Missing splitters.

(define_insn "vcond<mode><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(if_then_else:VIMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:VIMODES 4 "register_operand" "vr")
			  (match_operand:VIMODES 5 "register_operand" "vr")])
	 (match_operand:VIMODES 1 "register_operand" "vr")
	 (match_operand:VIMODES 2 "register_operand" "vr")))
  (clobber (match_scratch:<VCMPEQUIV> 6 "=vm"))]
 "TARGET_VECTOR"
 "vms%B3.vv\t%6,%4,%5\;vmerge.vvm\t%0,%2,%1,%6"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "vcond<mode><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:VFMODES 4 "register_operand" "vr")
			  (match_operand:VFMODES 5 "register_operand" "vr")])
	 (match_operand:VFMODES 1 "register_operand" "vr")
	 (match_operand:VFMODES 2 "register_operand" "vr")))
  (clobber (match_scratch:<VCMPEQUIV> 6 "=vm"))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vmf%B3.vv\t%6,%4,%5\;vmerge.vvm\t%0,%2,%1,%6"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "vcond<mode><vintequiv>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:<VINTEQUIV> 4 "register_operand" "vr")
			  (match_operand:<VINTEQUIV> 5 "register_operand" "vr")])
	 (match_operand:VFMODES 1 "register_operand" "vr")
	 (match_operand:VFMODES 2 "register_operand" "vr")))
  (clobber (match_scratch:<VCMPEQUIV> 6 "=vm"))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vms%B3.vv\t%6,%4,%5\;vmerge.vvm\t%0,%2,%1,%6"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "vcond<vintequiv><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:<VINTEQUIV> 0 "register_operand" "=vr")
	(if_then_else:<VINTEQUIV>
	 (match_operator 3 "comparison_operator"
	  [(match_operand:VFMODES 4 "register_operand" "vr")
	   (match_operand:VFMODES 5 "register_operand" "vr")])
	 (match_operand:<VINTEQUIV> 1 "register_operand" "vr")
	 (match_operand:<VINTEQUIV> 2 "register_operand" "vr")))
  (clobber (match_scratch:<VCMPEQUIV> 6 "=vm"))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vmf%B3.vv\t%6,%4,%5\;vmerge.vvm\t%0,%2,%1,%6"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])
