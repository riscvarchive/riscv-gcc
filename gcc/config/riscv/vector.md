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

;; All vector modes supported for widening integer alu.
(define_mode_iterator VWIMODES [VNx16QI VNx32QI VNx64QI
				VNx8HI VNx16HI VNx32HI
				VNx4SI VNx8SI VNx16SI])

;; All vector modes supported for widening floating point alu.
(define_mode_iterator VWFMODES [VNx8HF VNx16HF VNx32HF
				VNx4SF VNx8SF VNx16SF])

;; All vector masking modes.
(define_mode_iterator VMASKMODES [VNx2BI VNx4BI VNx8BI VNx16BI
				  VNx32BI VNx64BI VNx128BI])

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

;; Map a vector int or float mode to widening vector mode.
(define_mode_attr VWMODES
  [(VNx16QI "VNx16HI") (VNx32QI "VNx32HI") (VNx64QI "VNx64HI")
   (VNx8HI "VNx8SI")   (VNx16HI "VNx16SI") (VNx32HI "VNx32SI")
   (VNx4SI "VNx4DI")   (VNx8SI "VNx8DI")   (VNx16SI "VNx16DI")
   (VNx8HF "VNx8SF")   (VNx16HF "VNx16SF") (VNx32HF "VNx32SF")
   (VNx4SF "VNx4DF")   (VNx8SF "VNx8DF")   (VNx16SF "VNx16DF")])

;; Map a vector int or float mode to a vector compare mode.
(define_mode_attr VCMPEQUIV
  [(VNx16QI "VNx16BI") (VNx32QI "VNx32BI") (VNx64QI "VNx64BI") (VNx128QI "VNx128BI")
   (VNx8HI "VNx8BI")   (VNx16HI "VNx16BI") (VNx32HI "VNx32BI") (VNx64HI "VNx64BI")
   (VNx4SI "VNx4BI")   (VNx8SI "VNx8BI")   (VNx16SI "VNx16BI") (VNx32SI "VNx32BI")
   (VNx2DI "VNx2BI")   (VNx4DI "VNx4BI")   (VNx8DI "VNx8BI")   (VNx16DI "VNx16BI")
   (VNx8HF "VNx8BI")   (VNx16HF "VNx16BI") (VNx32HF "VNx32BI") (VNx64HF "VNx64BI")
   (VNx4SF "VNx4BI")   (VNx8SF "VNx8BI")   (VNx16SF "VNx16BI") (VNx32SF "VNx32BI")
   (VNx2DF "VNx2BI")   (VNx4DF "VNx4BI")   (VNx8DF "VNx8BI")   (VNx16DF "VNx16BI")])

(define_mode_attr vmaskmode
  [(VNx16QI "vnx16bi") (VNx32QI "vnx32bi") (VNx64QI "vnx64bi") (VNx128QI "vnx128bi")
   (VNx8HI "vnx8bi")   (VNx16HI "vnx16bi") (VNx32HI "vnx32bi") (VNx64HI "vnx64bi")
   (VNx4SI "vnx4bi")   (VNx8SI "vnx8bi")   (VNx16SI "vnx16bi") (VNx32SI "vnx32bi")
   (VNx2DI "vnx2bi")   (VNx4DI "vnx4bi")   (VNx8DI "vnx8bi")   (VNx16DI "vnx16bi")
   (VNx8HF "vnx8bi")   (VNx16HF "vnx16bi") (VNx32HF "vnx32bi") (VNx64HF "vnx64bi")
   (VNx4SF "vnx4bi")   (VNx8SF "vnx8bi")   (VNx16SF "vnx16bi") (VNx32SF "vnx32bi")
   (VNx2DF "vnx2bi")   (VNx4DF "vnx4bi")   (VNx8DF "vnx8bi")   (VNx16DF "vnx16bi")])

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

(define_mode_attr vlmode
  [(VNx16QI "vnx16qi") (VNx32QI "vnx32qi")
   (VNx64QI "vnx64qi") (VNx128QI "vnx128qi")
   (VNx8HI  "vnx8hi")  (VNx16HI "vnx16hi")
   (VNx32HI "vnx32hi") (VNx64HI "vnx64hi")
   (VNx4SI  "vnx4si")  (VNx8SI "vnx8si")
   (VNx16SI "vnx16si") (VNx32SI "vnx32si")
   (VNx2DI  "vnx2di")  (VNx4DI "vnx4di")
   (VNx8DI  "vnx8di")  (VNx16DI "vnx16di")
   (VNx8HF  "vnx8hi")  (VNx16HF "vnx16hi")
   (VNx32HF "vnx32hi") (VNx64HF "vnx64hi")
   (VNx4SF  "vnx4si")  (VNx8SF "vnx8si")
   (VNx16SF "vnx16si") (VNx32SF "vnx32si")
   (VNx2DF  "vnx2di")  (VNx4DF "vnx4di")
   (VNx8DF  "vnx8di")  (VNx16DF "vnx16di")])

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

;; Map a vector mode to its LMUL==1 equivalent.
;; This is for reductions which use scalars in vector registers.
(define_mode_attr V1MODES [(VNx16QI "VNx16QI") (VNx32QI "VNx16QI")
			   (VNx64QI "VNx16QI") (VNx128QI "VNx16QI")
			   (VNx8HI "VNx8HI") (VNx16HI "VNx8HI")
			   (VNx32HI "VNx8HI") (VNx64HI "VNx8HI")
			   (VNx4SI "VNx4SI") (VNx8SI "VNx4SI")
			   (VNx16SI "VNx4SI") (VNx32SI "VNx4SI")
			   (VNx2DI "VNx2DI") (VNx4DI "VNx2DI")
			   (VNx8DI "VNx2DI") (VNx16DI "VNx2DI")
			   (VNx8HF "VNx8HF") (VNx16HF "VNx8HF")
			   (VNx32HF "VNx8HF") (VNx64HF "VNx8HF")
			   (VNx4SF "VNx4SF") (VNx8SF "VNx4SF")
			   (VNx16SF "VNx4SF") (VNx32SF "VNx4SF")
			   (VNx2DF "VNx2DF") (VNx4DF "VNx2DF")
			   (VNx8DF "VNx2DF") (VNx16DF "VNx2DF")])

(define_mode_attr VW1MODES [ (VNx16QI "VNx8HI")  (VNx32QI "VNx8HI")
			     (VNx64QI "VNx8HI") (VNx128QI "VNx8HI")
			     (VNx8HI  "VNx4SI") (VNx16HI  "VNx4SI")
			    (VNx32HI  "VNx4SI") (VNx64HI  "VNx4SI")
			     (VNx4SI  "VNx2DI")  (VNx8SI  "VNx2DI")
			    (VNx16SI  "VNx2DI") (VNx32SI  "VNx2DI")
			     (VNx8HF  "VNx4SF") (VNx16HF  "VNx4SF")
			    (VNx32HF  "VNx4SF") (VNx64HF  "VNx4SF")
			     (VNx4SF  "VNx2DF")  (VNx8SF  "VNx2DF")
			    (VNx16SF  "VNx2DF") (VNx32SF  "VNx2DF")])

;; Operations valid for integer reductions.
(define_code_iterator any_reduc [plus umax smax umin smin and ior xor])

;; Operations valid for floating-point reductions.
(define_code_iterator any_freduc [plus smax smin])

;; Commutative operation valid for floating-point.
(define_code_iterator any_fcomop [plus mult smax smin])

;; Non-commutative operation valid for floating-point.
(define_code_iterator any_fnoncomop [minus div])

;; All operation valid for floating-point.
(define_code_iterator any_fop [plus mult smax smin minus div])

;; All operation valid for <op>not instruction in mask-register logical.
(define_code_iterator any_opnot [and ior])

;; <reduc> expands to the name of the reduction that implements a
;; particular code.
(define_code_attr reduc [(plus "sum") (umax "maxu") (smax "max") (umin "minu")
			 (smin "min") (and "and") (ior "or") (xor "xor")])

;; <invmaskop> expand to the name of the insn that inversed binary bit-wise
;; operation for mask type.
(define_code_attr invmaskop [(and "nand") (ior "nor") (xor "xnor")])

;; Iterator and attributes for widening floating-point reduction instructions.
(define_int_iterator WFREDUC_REDUC [UNSPEC_REDUC UNSPEC_ORDERED_REDUC])

;; <o> expands to an empty string when doing a unordered operation and
;; "o" when doing an ordered operation.
(define_int_attr o [(UNSPEC_REDUC "") (UNSPEC_ORDERED_REDUC "o")])

;; Iterator and attributes for misc mask instructions.
(define_int_iterator MISC_MASK_OP [UNSPEC_SBF UNSPEC_SIF UNSPEC_SOF])

(define_int_attr misc_maskop [(UNSPEC_SBF "sbf") (UNSPEC_SIF "sif")
			      (UNSPEC_SOF "sof")])

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

;; Vector Unit-Stride Instructions

(define_expand "vle<VMODES:mode>_<P:mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VMODES 0 "register_operand")
		   (mem:VMODES (match_operand:P 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_expand "vle<VMODES:mode>_<P:mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VMODES 0 "register_operand")
		   (if_then_else:VMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (mem:VMODES
		       (match_operand:P 3 "register_operand"))
		     (match_operand:VMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vle<VMODES:mode>_mask_nosetvl"
  [(set (match_operand:VMODES 0 "register_operand" "=vr")
	(if_then_else:VMODES
	  (match_operand:<VCMPEQUIV> 2 "register_operand" "vm")
	  (match_operand:VMODES 1 "memory_operand" "m")
	  (match_operand:VMODES 3 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vle.v\t%0,%1,%2.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vse<VMODES:mode>_<P:mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (mem:VMODES (match_operand:P 0 "register_operand"))
		   (match_operand:VMODES 1 "register_operand"))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_expand "vse<VMODES:mode>_<P:mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (mem:VMODES (match_operand:P 2 "register_operand"))
		   (unspec:VMODES
		     [(match_operand:<VCMPEQUIV> 0 "register_operand")
		      (match_operand:VMODES 1 "register_operand")
		      (mem:VMODES (match_dup 2))]
		     UNSPEC_MASKED_STORE))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vse<VMODES:mode>_mask_nosetvl"
  [(set (match_operand:VMODES 0 "memory_operand" "=m")
	(unspec:VMODES
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (match_operand:VMODES 2 "register_operand" "vr")
	   (match_dup 0)]
	  UNSPEC_MASKED_STORE))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vse.v\t%2,%0,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector Strided Instructions

(define_expand "vlse<VMODES:mode>_<P:mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VMODES 0 "register_operand")
		   (unspec:VMODES
		     [(match_operand:P 1 "register_operand")
		      (match_operand:P 2 "register_operand")
		      (mem:BLK (scratch))]
		     UNSPEC_STRIDED_LOAD))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vlse<VMODES:mode>_<P:mode>_nosetvl"
  [(set (match_operand:VMODES 0 "register_operand" "=vr")
	(unspec:VMODES
	  [(match_operand:P 1 "register_operand" "r")
	   (match_operand:P 2 "register_operand" "r")
	   (mem:BLK (scratch))]
	  UNSPEC_STRIDED_LOAD))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vlse.v\t%0,(%1),%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vlse<VMODES:mode>_<P:mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VMODES 0 "register_operand")
		   (if_then_else:VMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (unspec:VMODES
		       [(match_operand:P 3 "register_operand")
		        (match_operand:P 4 "register_operand")
		        (mem:BLK (scratch))]
		       UNSPEC_STRIDED_LOAD)
		     (match_operand:VMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vlse<VMODES:mode>_<P:mode>_mask_nosetvl"
  [(set (match_operand:VMODES 0 "register_operand" "=vr")
	(if_then_else:VMODES
	  (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	  (unspec:VMODES
	    [(match_operand:P 1 "register_operand" "r")
	     (match_operand:P 2 "register_operand" "r")
	     (mem:BLK (scratch))]
	    UNSPEC_STRIDED_LOAD)
	  (match_operand:VMODES 4 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vlse.v\t%0,(%1),%2,%3.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vsse<VMODES:mode>_<P:mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (mem:BLK (scratch))
		   (unspec:BLK
		     [(match_operand:VMODES 0 "register_operand")
		      (match_operand:P 1 "register_operand")
		      (match_operand:P 2 "register_operand")]
		     UNSPEC_STRIDED_STORE))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vsse<VMODES:mode>_<P:mode>_nosetvl"
  [(set (mem:BLK (scratch))
	(unspec:BLK
	  [(match_operand:VMODES 0 "register_operand" "=vr")
	   (match_operand:P 1 "register_operand" "r")
	   (match_operand:P 2 "register_operand" "r")]
	  UNSPEC_STRIDED_STORE))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vsse.v\t%0,(%1),%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vsse<VMODES:mode>_<P:mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (mem:BLK (scratch))
		   (unspec:BLK
		     [(match_operand:<VCMPEQUIV> 0 "register_operand")
		      (match_operand:VMODES 1 "register_operand")
		      (match_operand:P 2 "register_operand")
		      (match_operand:P 3 "register_operand")]
		     UNSPEC_STRIDED_STORE))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*vsse<VMODES:mode>_<P:mode>_mask_nosetvl"
  [(set (mem:BLK (scratch))
	(unspec:BLK
	  [(match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	   (match_operand:VMODES 0 "register_operand" "=vr")
	   (match_operand:P 1 "register_operand" "r")
	   (match_operand:P 2 "register_operand" "r")]
	  UNSPEC_STRIDED_STORE))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vsse.v\t%0,(%1),%2,%3.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Move instructions.

;; ??? We need the m constraints here only if we want load/store to work
;; directly without using an intrinsic.

;; If operand 1 is a const_vector, then we can't split until after reload,
;; to ensure that the scratch operand has been allocated a reg first.
(define_insn_and_split "mov<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "nonimmediate_operand" "=vr,vr,vr, m,vr")
	(match_operand:VIMODES 1 "vector_move_operand"  " vr,vi, m,vr,vc"))
   (clobber (match_scratch:<VSUBMODE> 2 "=X,X,X,X,r"))]
  "TARGET_VECTOR"
  "#"
  "&& 1 && (reload_completed || GET_CODE (operands[1]) != CONST_VECTOR)"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (match_dup 1))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
{
  /* If we have a const vector, then we have to load it's value into the
     scratch reg, and then create a vec_duplicate of it.  */
  if (!satisfies_constraint_vi (operands[1]) &&
      const_vec_duplicate_p (operands[1], &operands[3]))
    {
      emit_move_insn (operands[2], operands[3]);
      operands[1] = gen_rtx_VEC_DUPLICATE (GET_MODE (operands[1]),
					   operands[2]);
    }
}
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*mov<mode>_nosetvl"
  [(set (match_operand:VIMODES 0 "nonimmediate_operand" "=vr,vr,vr, m")
	(match_operand:VIMODES 1 "vector_move_operand"  " vr,vi, m,vr"))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vmv.v.v\t%0,%1
   vmv.v.i\t%0,%1
   vle.v\t%0,%1
   vse.v\t%1,%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? We don't yet support vector float modes with constant immediate
;; inputs.
(define_insn_and_split "mov<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "nonimmediate_operand" "=vr,vr,vr, m,vr")
	(match_operand:VFMODES 1 "vector_move_operand"  " vr,vi, m,vr,vc"))
   (clobber (match_scratch:<VSUBMODE> 2 "=X,X,X,X,r"))]
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
  [(set (match_operand:VFMODES 0 "nonimmediate_operand" "=vr,vr, m")
	(match_operand:VFMODES 1 "nonimmediate_operand" " vr, m,vr"))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vmv.v.v\t%0,%1
   vle.v\t%0,%1
   vse.v\t%1,%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; move pattern for vector masking type.
;; XXX: we should support load/store for masking type.
(define_insn "mov<mode>"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr,vr,vr")
	(match_operand:VMASKMODES 1 "vector_move_operand" " vr,v0,v1"))]
  "TARGET_VECTOR"
  "@
   vmcpy.m\t%0,%1
   vmclr.m\t%0
   vmset.m\t%0"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Integer ALU instructions.

(define_expand "add<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (plus:VIMODES
		     (match_operand:VIMODES 1 "register_operand")
		     (match_operand:VIMODES 2 "vector_arith_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

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

(define_expand "add<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (plus:VIMODES
		     (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 2 "register_operand"))
		     (match_operand:VIMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

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

(define_expand "add<mode>3_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (if_then_else:VIMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (plus:VIMODES (match_operand:VIMODES 3 "register_operand")
				   (match_operand:VIMODES 4 "vector_arith_operand"))
		     (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "add<mode>3_mask_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(if_then_else:VIMODES
	  (match_operand:<VCMPEQUIV> 1 "register_operand" "vm,vm")
	  (plus:VIMODES (match_operand:VIMODES 3 "register_operand" "vr,vr")
			(match_operand:VIMODES 4 "vector_arith_operand" "vr,vi"))
	  (match_operand:VIMODES 2 "register_operand" "0,0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vadd.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "add<mode>3_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (if_then_else:VIMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (plus:VIMODES
		       (vec_duplicate:VIMODES
			 (match_operand:<VSUBMODE> 4 "register_operand"))
		       (match_operand:VIMODES 3 "register_operand"))
		     (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "add<mode>3_scalar_mask_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(if_then_else:VIMODES
          (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	    (plus:VIMODES (vec_duplicate:VIMODES
			    (match_operand:<VSUBMODE> 4 "register_operand" "r"))
			  (match_operand:VIMODES 3 "register_operand" "vr"))
	  (match_operand:VIMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vadd.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "sub<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(minus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr,vr")
		       (match_operand:VIMODES 2 "neg_vector_arith_operand" "vr,vj")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0) (minus:VIMODES (match_dup 1) (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*sub<mode>3_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(minus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr,vr")
		       (match_operand:VIMODES 2 "neg_vector_arith_operand" "vr,vj")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vsub.vv\t%0,%1,%2
   vadd.vi\t%0,%1,%V2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; ??? No constant immediate subtract, should be converted to an add, but
;; this is not happening.  Maybe add it to this pattern?

(define_insn_and_split "sub<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		       (vec_duplicate:VIMODES
			(match_operand:<VSUBMODE> 2 "register_operand" "r"))))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0)
		   (minus:VIMODES (match_dup 1)
				  (vec_duplicate:VIMODES (match_dup 2))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*sub<mode>3_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		       (vec_duplicate:VIMODES
			(match_operand:<VSUBMODE> 2 "register_operand" "r"))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vsub.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "rsub<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (match_operand:VIMODES 2 "const_vector_int_operand" "vi")
		       (match_operand:VIMODES 1 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0)
		   (minus:VIMODES (match_dup 2)
				  (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*rsub<mode>3_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (match_operand:VIMODES 2 "const_vector_int_operand" "vi")
		       (match_operand:VIMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vrsub.vi\t%0,%1,%v2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn_and_split "rsub<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (vec_duplicate:VIMODES
			(match_operand:<VSUBMODE> 2 "register_operand" "r"))
		       (match_operand:VIMODES 1 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_dup 0)
		   (minus:VIMODES (vec_duplicate:VIMODES (match_dup 2))
				  (match_dup 1)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  ""
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_insn "*rsub<mode>3_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES (vec_duplicate:VIMODES
			(match_operand:<VSUBMODE> 2 "register_operand" "r"))
		       (match_operand:VIMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vrsub.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector Integer Add-with-Carry / Subtract-with-Borrow Instructions

(define_expand "adc<mode>4"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (plus:VIMODES
		     (plus:VIMODES
		       (match_operand:VIMODES 1 "register_operand")
		       (match_operand:VIMODES 2 "vector_arith_operand"))
		     (if_then_else:VIMODES
		       (match_operand:<VCMPEQUIV> 3 "register_operand")
		       (vec_duplicate:VIMODES (const_int 1))
		       (vec_duplicate:VIMODES (const_int 0)))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*adc<mode>4_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr,vr")
	(plus:VIMODES
	  (plus:VIMODES
	    (match_operand:VIMODES 1 "register_operand" "vr,vr")
	    (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi"))
	  (if_then_else:VIMODES
	    (match_operand:<VCMPEQUIV> 3 "register_operand" "vm,vm")
	    (vec_duplicate:VIMODES (const_int 1))
	    (vec_duplicate:VIMODES (const_int 0)))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vadc.vvm\t%0,%1,%2,%3
   vadc.vim\t%0,%1,%v2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "adc<mode>4_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (plus:VIMODES
		     (plus:VIMODES
		       (vec_duplicate:VIMODES
		         (match_operand:<VSUBMODE> 2 "register_operand"))
		       (match_operand:VIMODES 1 "register_operand"))
		     (if_then_else:VIMODES
		       (match_operand:<VCMPEQUIV> 3 "register_operand")
		       (vec_duplicate:VIMODES (const_int 1))
		       (vec_duplicate:VIMODES (const_int 0)))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*adc<mode>4_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(plus:VIMODES
	  (plus:VIMODES
	    (vec_duplicate:VIMODES
	      (match_operand:<VSUBMODE> 2 "register_operand" "r"))
	    (match_operand:VIMODES 1 "register_operand" "vr"))
	  (if_then_else:VIMODES
	    (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	    (vec_duplicate:VIMODES (const_int 1))
	    (vec_duplicate:VIMODES (const_int 0)))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vadc.vxm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "madc<mode>4m"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(plus:VIMODES
		        (plus:VIMODES
			  (match_operand:VIMODES 1 "register_operand")
			  (match_operand:VIMODES 2 "vector_arith_operand"))
		        (if_then_else:VIMODES
			  (match_operand:<VCMPEQUIV> 3 "register_operand")
			  (vec_duplicate:VIMODES (const_int 1))
			  (vec_duplicate:VIMODES (const_int 0))))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*madc<mode>4m_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr,vr")
	(unspec:<VCMPEQUIV>
	  [(plus:VIMODES
	     (plus:VIMODES
	       (match_operand:VIMODES 1 "register_operand" "vr,vr")
	       (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi"))
	     (if_then_else:VIMODES
	       (match_operand:<VCMPEQUIV> 3 "register_operand" "vm,vm")
	       (vec_duplicate:VIMODES (const_int 1))
	       (vec_duplicate:VIMODES (const_int 0))))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vmadc.vvm\t%0,%1,%2,%3
   vmadc.vim\t%0,%1,%v2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "madc<mode>4m_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(plus:VIMODES
		        (plus:VIMODES
			  (vec_duplicate:VIMODES
			    (match_operand:<VSUBMODE> 2 "register_operand"))
			  (match_operand:VIMODES 1 "register_operand"))
		        (if_then_else:VIMODES
			  (match_operand:<VCMPEQUIV> 3 "register_operand")
			  (vec_duplicate:VIMODES (const_int 1))
			  (vec_duplicate:VIMODES (const_int 0))))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*madc<mode>4m_scalar_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(plus:VIMODES
	     (plus:VIMODES
	       (vec_duplicate:VIMODES
		 (match_operand:<VSUBMODE> 2 "register_operand" "r"))
	       (match_operand:VIMODES 1 "register_operand" "vr"))
	     (if_then_else:VIMODES
	       (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	       (vec_duplicate:VIMODES (const_int 1))
	       (vec_duplicate:VIMODES (const_int 0))))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmadc.vxm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "madc<mode>4"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(plus:VIMODES
			(match_operand:VIMODES 1 "register_operand")
			(match_operand:VIMODES 2 "vector_arith_operand"))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*madc<mode>4_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr,vr")
	(unspec:<VCMPEQUIV>
	  [(plus:VIMODES
	     (match_operand:VIMODES 1 "register_operand" "vr,vr")
	     (match_operand:VIMODES 2 "vector_arith_operand" "vr,vi"))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "@
   vmadc.vv\t%0,%1,%2
   vmadc.vi\t%0,%1,%v2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "madc<mode>4_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(plus:VIMODES
			(vec_duplicate:VIMODES
			  (match_operand:<VSUBMODE> 2 "register_operand"))
			(match_operand:VIMODES 1 "register_operand"))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*madc<mode>4_scalar_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(plus:VIMODES
	     (vec_duplicate:VIMODES
	       (match_operand:<VSUBMODE> 2 "register_operand" "r"))
	     (match_operand:VIMODES 1 "register_operand" "vr"))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmadc.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "sbc<mode>4"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (minus:VIMODES
		     (minus:VIMODES
		       (match_operand:VIMODES 1 "register_operand")
		       (match_operand:VIMODES 2 "vector_arith_operand"))
		     (if_then_else:VIMODES
		       (match_operand:<VCMPEQUIV> 3 "register_operand")
		       (vec_duplicate:VIMODES (const_int 1))
		       (vec_duplicate:VIMODES (const_int 0)))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*sbc<mode>4_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES
	  (minus:VIMODES
	    (match_operand:VIMODES 1 "register_operand" "vr")
	    (match_operand:VIMODES 2 "register_operand" "vr"))
	  (if_then_else:VIMODES
	    (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	    (vec_duplicate:VIMODES (const_int 1))
	    (vec_duplicate:VIMODES (const_int 0)))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vsbc.vvm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "sbc<mode>4_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (minus:VIMODES
		     (minus:VIMODES
		       (match_operand:VIMODES 1 "register_operand")
		       (vec_duplicate:VIMODES
		         (match_operand:<VSUBMODE> 2 "register_operand")))
		     (if_then_else:VIMODES
		       (match_operand:<VCMPEQUIV> 3 "register_operand")
		       (vec_duplicate:VIMODES (const_int 1))
		       (vec_duplicate:VIMODES (const_int 0)))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*sbc<mode>4_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(minus:VIMODES
	  (minus:VIMODES
	    (match_operand:VIMODES 1 "register_operand" "vr")
	    (vec_duplicate:VIMODES
	      (match_operand:<VSUBMODE> 2 "register_operand" "r")))
	  (if_then_else:VIMODES
	    (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	    (vec_duplicate:VIMODES (const_int 1))
	    (vec_duplicate:VIMODES (const_int 0)))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vsbc.vxm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "msbc<mode>4m"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(minus:VIMODES
		        (minus:VIMODES
			  (match_operand:VIMODES 1 "register_operand")
			  (match_operand:VIMODES 2 "vector_arith_operand"))
		        (if_then_else:VIMODES
			  (match_operand:<VCMPEQUIV> 3 "register_operand")
			  (vec_duplicate:VIMODES (const_int 1))
			  (vec_duplicate:VIMODES (const_int 0))))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*msbc<mode>4m_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(minus:VIMODES
	     (minus:VIMODES
	       (match_operand:VIMODES 1 "register_operand" "vr")
	       (match_operand:VIMODES 2 "register_operand" "vr"))
	     (if_then_else:VIMODES
	       (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	       (vec_duplicate:VIMODES (const_int 1))
	       (vec_duplicate:VIMODES (const_int 0))))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmsbc.vvm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "msbc<mode>4m_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(minus:VIMODES
		        (minus:VIMODES
			  (match_operand:VIMODES 1 "register_operand")
			  (vec_duplicate:VIMODES
			    (match_operand:<VSUBMODE> 2 "register_operand")))
		        (if_then_else:VIMODES
			  (match_operand:<VCMPEQUIV> 3 "register_operand")
			  (vec_duplicate:VIMODES (const_int 1))
			  (vec_duplicate:VIMODES (const_int 0))))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*msbc<mode>4m_scalar_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(minus:VIMODES
	     (minus:VIMODES
	       (match_operand:VIMODES 1 "register_operand" "vr")
	       (vec_duplicate:VIMODES
		 (match_operand:<VSUBMODE> 2 "register_operand" "r")))
	     (if_then_else:VIMODES
	       (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	       (vec_duplicate:VIMODES (const_int 1))
	       (vec_duplicate:VIMODES (const_int 0))))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmsbc.vxm\t%0,%1,%2,%3"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "msbc<mode>4"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(minus:VIMODES
			(match_operand:VIMODES 1 "register_operand")
			(match_operand:VIMODES 2 "register_operand"))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*madc<mode>4_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(minus:VIMODES
	     (match_operand:VIMODES 1 "register_operand" "vr")
	     (match_operand:VIMODES 2 "register_operand" "vr"))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmsbc.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "msbc<mode>4_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (unspec:<VCMPEQUIV>
		     [(minus:VIMODES
			(match_operand:VIMODES 1 "register_operand")
			(vec_duplicate:VIMODES
			  (match_operand:<VSUBMODE> 2 "register_operand")))]
		     UNSPEC_OVERFLOW))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*msbc<mode>4_scalar_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=vr")
	(unspec:<VCMPEQUIV>
	  [(minus:VIMODES
	     (match_operand:VIMODES 1 "register_operand" "vr")
	     (vec_duplicate:VIMODES
	       (match_operand:<VSUBMODE> 2 "register_operand" "r")))]
	  UNSPEC_OVERFLOW))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmsbc.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])


;; Floating point ALU instructions (add/sub/rsub/mul/div/rdiv).

(define_expand "<optab><mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (any_fop:VFMODES
		     (match_operand:VFMODES 1 "register_operand")
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*<optab><mode>3_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(any_fop:VFMODES
	  (match_operand:VFMODES 1 "register_operand" "vr")
	  (match_operand:VFMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "<optab><mode>3_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (any_fop:VFMODES
		       (match_operand:VFMODES 3 "register_operand")
		       (match_operand:VFMODES 4 "register_operand"))
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "<optab><mode>3_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	  (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	  (any_fop:VFMODES
	    (match_operand:VFMODES 3 "register_operand" "vr")
	    (match_operand:VFMODES 4 "register_operand" "vr"))
	  (match_operand:VFMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "<optab><mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (any_fcomop:VFMODES
		     (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 2 "register_operand"))
		     (match_operand:VFMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*<optab><mode>3_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(any_fcomop:VFMODES
	  (vec_duplicate:VFMODES
	    (match_operand:<VSUBMODE> 2 "register_operand" "f"))
	  (match_operand:VFMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "<optab><mode>3_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (any_fcomop:VFMODES
		       (vec_duplicate:VFMODES
			 (match_operand:<VSUBMODE> 4 "register_operand"))
		       (match_operand:VFMODES 3 "register_operand"))
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "<optab><mode>3_scalar_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
          (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	    (any_fcomop:VFMODES
	      (vec_duplicate:VFMODES
		(match_operand:<VSUBMODE> 4 "register_operand" "f"))
	      (match_operand:VFMODES 3 "register_operand" "vr"))
	  (match_operand:VFMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "<optab><mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (any_fnoncomop:VFMODES
		     (match_operand:VFMODES 1 "register_operand")
		     (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 2 "register_operand"))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*<optab><mode>3_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(any_fnoncomop:VFMODES
	  (match_operand:VFMODES 1 "register_operand" "vr")
	  (vec_duplicate:VFMODES
	    (match_operand:<VSUBMODE> 2 "register_operand" "f"))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "<optab><mode>3_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (any_fnoncomop:VFMODES
		       (match_operand:VFMODES 3 "register_operand")
		       (vec_duplicate:VFMODES
			 (match_operand:<VSUBMODE> 4 "register_operand")))
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "<optab><mode>3_scalar_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
          (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	    (any_fnoncomop:VFMODES
	      (match_operand:VFMODES 3 "register_operand" "vr")
	      (vec_duplicate:VFMODES
		(match_operand:<VSUBMODE> 4 "register_operand" "f")))
	  (match_operand:VFMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vf<optab>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "r<optab><mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (any_fnoncomop:VFMODES
		     (vec_duplicate:VFMODES
		       (match_operand:<VSUBMODE> 2 "register_operand"))
		   (match_operand:VFMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*r<optab><mode>3_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(any_fnoncomop:VFMODES
	  (vec_duplicate:VFMODES
	    (match_operand:<VSUBMODE> 2 "register_operand" "f"))
	  (match_operand:VFMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfr<optab>.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "r<optab><mode>3_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (any_fnoncomop:VFMODES
		       (vec_duplicate:VFMODES
			 (match_operand:<VSUBMODE> 4 "register_operand"))
		       (match_operand:VFMODES 3 "register_operand"))
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*r<optab><mode>3_scalar_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
          (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	    (any_fnoncomop:VFMODES
	      (vec_duplicate:VFMODES
		(match_operand:<VSUBMODE> 4 "register_operand" "f"))
	      (match_operand:VFMODES 3 "register_operand" "vr"))
	  (match_operand:VFMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfr<optab>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector Floating-Point Square-Root Instruction
(define_expand "sqrt<mode>2"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (sqrt:VFMODES
		     (match_operand:VFMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*sqrt<mode>2_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(sqrt:VFMODES
	  (match_operand:VFMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfsqrt.v\t%0,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "sqrt<mode>2_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (sqrt:VFMODES
		       (match_operand:VFMODES 3 "register_operand"))
		     (match_operand:VFMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*sqrt<mode>2_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	  (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	  (sqrt:VFMODES
	    (match_operand:VFMODES 3 "register_operand" "vr"))
	  (match_operand:VFMODES 2 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfsqrt.v\t%0,%3,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector Widening Integer Add/Subtract

(define_expand "wadd<u><mode>_vv"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VWMODES> 0 "register_operand")
		(plus:<VWMODES>
		  (any_extend:<VWMODES>
		    (match_operand:VWIMODES 1 "register_operand"))
		  (any_extend:<VWMODES>
		    (match_operand:VWIMODES 2 "register_operand"))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*wadd<u><mode>_vv_nosetvl"
  [(set (match_operand:<VWMODES> 0 "register_operand" "=vr")
	(plus:<VWMODES>
	  (any_extend:<VWMODES>
	    (match_operand:VWIMODES 1 "register_operand" "vr"))
	  (any_extend:<VWMODES>
	    (match_operand:VWIMODES 2 "register_operand" "vr"))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vwadd<u>.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "wadd<u><mode>_wv"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VWMODES> 0 "register_operand")
		(plus:<VWMODES>
		  (match_operand:<VWMODES> 1 "register_operand")
		  (any_extend:<VWMODES>
		    (match_operand:VWIMODES 2 "register_operand"))))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*wadd<u><mode>_wv_nosetvl"
  [(set (match_operand:<VWMODES> 0 "register_operand" "=vr")
	(plus:<VWMODES>
	  (match_operand:<VWMODES> 1 "register_operand" "vr")
	  (any_extend:<VWMODES>
	    (match_operand:VWIMODES 2 "register_operand" "vr"))))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vwadd<u>.wv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Integer multiply instructions.

(define_expand "mul<mode>3"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (mult:VIMODES
		     (match_operand:VIMODES 1 "register_operand")
		     (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*mul<mode>3_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (match_operand:VIMODES 1 "register_operand" "vr")
		      (match_operand:VIMODES 2 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vv\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "mul<mode>3_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (mult:VIMODES
		     (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 2 "register_operand"))
		     (match_operand:VIMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*mul<mode>3_scalar_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(mult:VIMODES (vec_duplicate:VIMODES
		       (match_operand:<VSUBMODE> 2 "register_operand" "r"))
		      (match_operand:VIMODES 1 "register_operand" "vr")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vx\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "mul<mode>3_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (if_then_else:VIMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (mult:VIMODES (match_operand:VIMODES 3 "register_operand")
				   (match_operand:VIMODES 4 "register_operand"))
		     (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "mul<mode>3_mask_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(if_then_else:VIMODES
	  (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	  (mult:VIMODES (match_operand:VIMODES 3 "register_operand" "vr")
			(match_operand:VIMODES 4 "register_operand" "vr"))
	  (match_operand:VIMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "mul<mode>3_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (if_then_else:VIMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (mult:VIMODES
		       (vec_duplicate:VIMODES
			 (match_operand:<VSUBMODE> 4 "register_operand"))
		       (match_operand:VIMODES 3 "register_operand"))
		     (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "mul<mode>3_scalar_mask_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(if_then_else:VIMODES
          (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	    (mult:VIMODES (vec_duplicate:VIMODES
			    (match_operand:<VSUBMODE> 4 "register_operand" "r"))
			  (match_operand:VIMODES 3 "register_operand" "vr"))
	  (match_operand:VIMODES 2 "register_operand" "0")))
    (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vmul.vx\t%0,%3,%4,%1.t"
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

(define_expand "vfmacc<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (plus:VFMODES
		     (mult:VFMODES
		       (match_operand:VFMODES 2 "register_operand")
		       (match_operand:VFMODES 3 "register_operand"))
		   (match_operand:VFMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_expand "vfmacc<mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (plus:VFMODES
		       (mult:VFMODES
			 (match_operand:VFMODES 3 "register_operand")
			 (match_operand:VFMODES 4 "register_operand"))
		       (match_operand:VFMODES 2 "register_operand"))
		     (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*vfmacc<mode>_mask_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
		     (plus:VFMODES
		       (mult:VFMODES
			 (match_operand:VFMODES 3 "register_operand" "vr")
			 (match_operand:VFMODES 4 "register_operand" "vr"))
		       (match_operand:VFMODES 2 "register_operand" "0"))
		     (match_dup 2)))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmacc.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vfmacc<mode>_scalar"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (plus:VFMODES
		     (mult:VFMODES
		       (vec_duplicate:VFMODES
			 (match_operand:<VSUBMODE> 2 "register_operand"))
		       (match_operand:VFMODES 3 "register_operand"))
		   (match_operand:VFMODES 1 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*vfmacc<mode>_scalar_nosetvl"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(plus:VFMODES
	  (mult:VFMODES
	    (vec_duplicate:VFMODES
	      (match_operand:<VSUBMODE> 1 "register_operand" "f"))
	    (match_operand:VFMODES 2 "register_operand" "vr"))
	  (match_operand:VFMODES 3 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmacc.vf\t%0,%1,%2"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "vfmacc<mode>_scalar_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VFMODES 0 "register_operand")
		   (if_then_else:VFMODES
		     (match_operand:<VCMPEQUIV> 1 "register_operand")
		     (plus:VFMODES
		       (mult:VFMODES
			 (vec_duplicate:VFMODES
			   (match_operand:<VSUBMODE> 3 "register_operand"))
			 (match_operand:VFMODES 4 "register_operand"))
		       (match_operand:VFMODES 2 "register_operand"))
		     (match_dup 2)))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*vfmacc<mode>_scalar_mask"
  [(set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	  (match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	  (plus:VFMODES
	    (mult:VFMODES
	      (vec_duplicate:VFMODES
		(match_operand:<VSUBMODE> 3 "register_operand" "f"))
	      (match_operand:VFMODES 4 "register_operand" "vr"))
	    (match_operand:VFMODES 2 "register_operand" "0"))
	  (match_dup 2)))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "vfmacc.vf\t%0,%3,%4,%1.t"
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
   (set (match_operand:VFMODES 0 "register_operand" "=vr,*vr")
	(vec_duplicate:VFMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "f,r")))]
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
  [(set (match_operand:VFMODES 0 "register_operand" "=vr,*vr")
	(vec_duplicate:VFMODES
	 (match_operand:<VSUBMODE> 1 "register_operand" "f,r")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
  "@
   vfmv.v.f\t%0,%1
   vmv.v.x\t%0,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Vector comparison support.

;; XXX: Must expand unsupported comparison type.
;; Std pattern vec_cmpu and vec_cmpeq might need implement,
;; but we don't implement auto-vec yet, so may not meaningful yet?
(define_expand "vec_cmp<mode><vmaskmode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (match_operator:<VCMPEQUIV> 1 "comparison_operator"
		     [(match_operand:VIMODES 2 "register_operand")
		      (match_operand:VIMODES 3 "register_operand")]))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "vec_cmp<mode><vmaskmode>_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=&vr")
	(match_operator:<VCMPEQUIV> 1 "comparison_operator"
			 [(match_operand:VIMODES 2 "register_operand" "vr")
			  (match_operand:VIMODES 3 "register_operand" "vr")]))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "vms%B1.vv\t%0,%2,%3"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "vec_cmp<mode><vmaskmode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (if_then_else:<VCMPEQUIV>
		     (match_operand:<VCMPEQUIV> 5 "register_operand")
		     (match_operator:<VCMPEQUIV> 1 "comparison_operator"
		       [(match_operand:VIMODES 2 "register_operand")
			(match_operand:VIMODES 3 "register_operand")])
		     (match_operand:<VCMPEQUIV> 4 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "vec_cmp<mode><vmaskmode>_mask_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=&vr")
	(if_then_else:<VCMPEQUIV>
	  (match_operand:<VCMPEQUIV> 5 "register_operand" "vm")
	  (match_operator:<VCMPEQUIV> 1 "comparison_operator"
	    [(match_operand:VIMODES 2 "register_operand" "vr")
	     (match_operand:VIMODES 3 "register_operand" "vr")])
	  (match_operand:<VCMPEQUIV> 4 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "vms%B1.vv\t%0,%2,%3,%5.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "vec_cmp<mode><vmaskmode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (match_operator:<VCMPEQUIV> 1 "comparison_operator"
		     [(match_operand:VFMODES 2 "register_operand")
		      (match_operand:VFMODES 3 "register_operand")]))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "vec_cmp<mode><vmaskmode>_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=&vr")
	(match_operator:<VCMPEQUIV> 1 "comparison_operator"
			 [(match_operand:VFMODES 2 "register_operand" "vr")
			  (match_operand:VFMODES 3 "register_operand" "vr")]))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vmf%B1.vv\t%0,%2,%3"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "vec_cmp<mode><vmaskmode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		   (if_then_else:<VCMPEQUIV>
		     (match_operand:<VCMPEQUIV> 5 "register_operand")
		     (match_operator:<VCMPEQUIV> 1 "comparison_operator"
		       [(match_operand:VFMODES 2 "register_operand")
			(match_operand:VFMODES 3 "register_operand")])
		     (match_operand:<VCMPEQUIV> 4 "register_operand")))
	       (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "vec_cmp<mode><vmaskmode>_mask_nosetvl"
  [(set (match_operand:<VCMPEQUIV> 0 "register_operand" "=&vr")
	(if_then_else:<VCMPEQUIV>
	  (match_operand:<VCMPEQUIV> 5 "register_operand" "vm")
	  (match_operator:<VCMPEQUIV> 1 "comparison_operator"
	    [(match_operand:VFMODES 2 "register_operand" "vr")
	     (match_operand:VFMODES 3 "register_operand" "vr")])
	  (match_operand:<VCMPEQUIV> 4 "register_operand" "0")))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vmf%B1.vv\t%0,%2,%3,%5.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "mov<mode>cc"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VIMODES 0 "register_operand" "=vr")
	(if_then_else:VIMODES
	  (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	  (match_operand:VIMODES 1 "register_operand" "vr")
	  (match_operand:VIMODES 2 "register_operand" "vr")))]
 "TARGET_VECTOR"
 "vmerge.vvm\t%0,%2,%1,%3"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "mov<mode>cc"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (set (match_operand:VFMODES 0 "register_operand" "=vr")
	(if_then_else:VFMODES
	  (match_operand:<VCMPEQUIV> 3 "register_operand" "vm")
	  (match_operand:VFMODES 1 "register_operand" "vr")
	  (match_operand:VFMODES 2 "register_operand" "vr")))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
 "vmerge.vvm\t%0,%2,%1,%3"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

;; ??? Missing splitters.

(define_expand "vcond<mode><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VIMODES 0 "register_operand")
	(if_then_else:VIMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:VIMODES 4 "register_operand")
			  (match_operand:VIMODES 5 "register_operand")])
	 (match_operand:VIMODES 1 "register_operand")
	 (match_operand:VIMODES 2 "register_operand")))]
 "TARGET_VECTOR"
{
  rtx tmp = gen_reg_rtx (<VCMPEQUIV>mode);
  emit_insn (gen_vec_cmp<mode><vmaskmode> (tmp, operands[3],
					   operands[4], operands[5]));
  emit_insn (gen_mov<mode>cc (operands[0], operands[1], operands[2], tmp));
  DONE;
})

(define_expand "vcond<mode><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VFMODES 0 "register_operand")
	(if_then_else:VFMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:VFMODES 4 "register_operand")
			  (match_operand:VFMODES 5 "register_operand")])
	 (match_operand:VFMODES 1 "register_operand")
	 (match_operand:VFMODES 2 "register_operand")))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
  rtx tmp = gen_reg_rtx (<VCMPEQUIV>mode);
  emit_insn (gen_vec_cmp<mode><vmaskmode> (tmp, operands[3],
					   operands[4], operands[5]));
  emit_insn (gen_mov<mode>cc (operands[0], operands[1], operands[2], tmp));
  DONE;
})

(define_expand "vcond<mode><vintequiv>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:VFMODES 0 "register_operand")
	(if_then_else:VFMODES
	 (match_operator 3 "comparison_operator"
			 [(match_operand:<VINTEQUIV> 4 "register_operand")
			  (match_operand:<VINTEQUIV> 5 "register_operand")])
	 (match_operand:VFMODES 1 "register_operand")
	 (match_operand:VFMODES 2 "register_operand")))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
  rtx tmp = gen_reg_rtx (<VCMPEQUIV>mode);
  emit_insn (gen_vec_cmp<vintequiv><vmaskmode> (tmp, operands[3],
					   operands[4], operands[5]));
  emit_insn (gen_mov<mode>cc (operands[0], operands[1], operands[2], tmp));
  DONE;
})

(define_expand "vcond<vintequiv><mode>"
 [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
  (set (match_operand:<VINTEQUIV> 0 "register_operand")
	(if_then_else:<VINTEQUIV>
	 (match_operator 3 "comparison_operator"
	  [(match_operand:VFMODES 4 "register_operand")
	   (match_operand:VFMODES 5 "register_operand")])
	 (match_operand:<VINTEQUIV> 1 "register_operand")
	 (match_operand:<VINTEQUIV> 2 "register_operand")))]
 "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
  rtx tmp = gen_reg_rtx (<VCMPEQUIV>mode);
  emit_insn (gen_vec_cmp<mode><vmaskmode> (tmp, operands[3],
					   operands[4], operands[5]));
  emit_insn (gen_mov<vintequiv>cc (operands[0], operands[1], operands[2], tmp));
  DONE;
})

;; Vector mask operations

(define_expand "clr<mode>"
  [(set (match_operand:VMASKMODES 0 "register_operand")
	(match_dup 1))]
  "TARGET_VECTOR"
{
  /* Using gen function instead of write (const_vector [(const_int 0)]) because,
     emit-rtl.c:gen_rtx_CONST_VECTOR will check the number of elements is same
     as NUNIT of mode.  */
  operands[1] = gen_const_vec_duplicate (<MODE>mode, const0_rtx);
})

(define_expand "set<mode>"
  [(set (match_operand:VMASKMODES 0 "register_operand")
	(match_dup 1))]
  "TARGET_VECTOR"
{
  /* Using gen function instead of write (const_vector [(const_int 0)]) because,
     emit-rtl.c:gen_rtx_CONST_VECTOR will check the number of elements is same
     as NUNIT of mode.  */
  operands[1] = gen_const_vec_duplicate (<MODE>mode, const1_rtx);
})

(define_insn "not<mode>"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(not:VMASKMODES (match_operand:VMASKMODES 1 "register_operand" "vr")))]
  "TARGET_VECTOR"
  "vmnot.m\t%0,%1"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

;; Vector Mask-Register Logical Instructions

(define_insn "<optab><mode>3"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(any_bitwise:VMASKMODES
	  (match_operand:VMASKMODES 1 "register_operand" "vr")
	  (match_operand:VMASKMODES 2 "register_operand" "vr")))]
 "TARGET_VECTOR"
 "vm<insn>.mm\t%0,%1,%2"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "<invmaskop><mode>3"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(not:VMASKMODES
	  (any_bitwise:VMASKMODES
	    (match_operand:VMASKMODES 1 "register_operand" "vr")
	    (match_operand:VMASKMODES 2 "register_operand" "vr"))))]
 "TARGET_VECTOR"
 "vm<invmaskop>.mm\t%0,%1,%2"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "<insn>not<mode>3"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(any_opnot:VMASKMODES
	  (match_operand:VMASKMODES 1 "register_operand" "vr")
	  (not:VMASKMODES
	    (match_operand:VMASKMODES 2 "register_operand" "vr"))))]
 "TARGET_VECTOR"
 "vm<insn>not.mm\t%0,%1,%2"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

;; Adapter for built-in function.
(define_expand "or<mode>3"
  [(set (match_operand:VMASKMODES 0 "register_operand")
	(ior:VMASKMODES
	  (match_operand:VMASKMODES 1 "register_operand")
	  (match_operand:VMASKMODES 2 "register_operand")))]
 "TARGET_VECTOR"
{
})

;; Misc Vector Mask-Register Operations
(define_insn "popc<VMASKMODES:mode>2_<P:mode>"
  [(set (match_operand:P 0 "register_operand" "=r")
	(popcount:P
	  (match_operand:VMASKMODES 1 "register_operand" "vr")))]
 "TARGET_VECTOR"
 "vpopc.m\t%0,%1"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "popc<VMASKMODES:mode>2_<P:mode>_mask"
  [(set (match_operand:P 0 "register_operand" "=r")
	(popcount:P
	  (and:VMASKMODES
	     (match_operand:VMASKMODES 1 "register_operand" "vm")
	     (match_operand:VMASKMODES 2 "register_operand" "vr"))))]
 "TARGET_VECTOR"
 "vpopc.m\t%0,%2,%1.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "first<VMASKMODES:mode>2_<P:mode>"
  [(set (match_operand:P 0 "register_operand" "=r")
	(unspec:P
	  [(match_operand:VMASKMODES 1 "register_operand" "vr")]
	  UNSPEC_FIRST))]
 "TARGET_VECTOR"
 "vfirst.m\t%0,%1"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "first<VMASKMODES:mode>2_<P:mode>_mask"
  [(set (match_operand:P 0 "register_operand" "=r")
	(unspec:P
	  [(match_operand:VMASKMODES 1 "register_operand" "vm")
	   (match_operand:VMASKMODES 2 "register_operand" "vr")]
	  UNSPEC_FIRST))]
 "TARGET_VECTOR"
 "vfirst.m\t%0,%2,%1.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "iota<mode>2"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (unspec:VIMODES
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")]
		     UNSPEC_IOTA))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "*iota<mode>2_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=&vr")
	(unspec:VIMODES
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vr")]
	  UNSPEC_IOTA))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "viota.m\t%0,%1"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "iota<mode>2_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (unspec:VIMODES
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")
		      (match_operand:<VCMPEQUIV> 2 "register_operand")]
		     UNSPEC_FIRST))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "*iota<mode>2_mask_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=&vr")
	(unspec:VIMODES
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (match_operand:<VCMPEQUIV> 2 "register_operand" "vr")]
	  UNSPEC_FIRST))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "viota.m\t%0,%2,%1.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "vid<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (unspec:VIMODES [(const_int 0)] UNSPEC_VID))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "*vid<mode>_nosetvl"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(unspec:VIMODES [(const_int 0)] UNSPEC_VID))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "vid.v\t%0"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_expand "vid<mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:VIMODES 0 "register_operand")
		   (unspec:VIMODES
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")
		      (match_operand:VIMODES 2 "register_operand")]
		     UNSPEC_VID))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
 "TARGET_VECTOR"
{
})

(define_insn "*vid<mode>_mask"
  [(set (match_operand:VIMODES 0 "register_operand" "=vr")
	(unspec:VIMODES
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (match_operand:VIMODES 2 "register_operand" "0")]
	  UNSPEC_VID))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
 "TARGET_VECTOR"
 "vid.v\t%0,%1.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "<misc_maskop><mode>"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(unspec:VMASKMODES
	  [(match_operand:VMASKMODES 1 "register_operand" "vr")]
	  MISC_MASK_OP))]
 "TARGET_VECTOR"
 "vm<misc_maskop>.m\t%0,%1"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

(define_insn "<misc_maskop><mode>_mask"
  [(set (match_operand:VMASKMODES 0 "register_operand" "=vr")
	(if_then_else:VMASKMODES
	  (match_operand:VMASKMODES 1 "register_operand" "vm")
	  (unspec:VMASKMODES
	    [(match_operand:VMASKMODES 3 "register_operand" "vr")]
	    MISC_MASK_OP)
	  (match_operand:VMASKMODES 2 "register_operand" "0")))]
 "TARGET_VECTOR"
 "vm<misc_maskop>.m\t%0,%3,%1.t"
 [(set_attr "type" "vector")
  (set_attr "mode" "none")])

;; Adaptor for built-in functions

;; compare functions

(define_expand "slt<u><mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		(any_lt:<VCMPEQUIV>
		  (match_operand:VIMODES 1 "register_operand")
		  (match_operand:VIMODES 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_expand "slt<u><mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VCMPEQUIV> 0 "register_operand")
		(if_then_else:<VCMPEQUIV>
		  (match_operand:<VCMPEQUIV> 1 "register_operand")
		  (any_lt:<VCMPEQUIV>
		    (match_operand:VIMODES 3 "register_operand")
		    (match_operand:VIMODES 4 "register_operand"))
		  (match_operand:<VCMPEQUIV> 2 "register_operand")))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

;; Integer Reduction instructions.

(define_expand "reduc_<reduc><mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		   (unspec:<V1MODES>
		    [(any_reduc:VIMODES
		      (vec_duplicate:VIMODES
		       (match_operand:<V1MODES> 1 "register_operand"))
		      (match_operand:VIMODES 2 "register_operand"))]
		    UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
}) 

(define_insn "*reduc_<reduc><mode>_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	 [(any_reduc:VIMODES
	   (vec_duplicate:VIMODES
	    (match_operand:<V1MODES> 1 "register_operand" "vr"))
	   (match_operand:VIMODES 2 "register_operand" "vr"))]
	 UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vred<reduc>.vs\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "reduc_<reduc><mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		   (unspec:<V1MODES>
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")
		       (any_reduc:VIMODES
		       (vec_duplicate:VIMODES
			(match_operand:<V1MODES> 2 "register_operand"))
		       (match_operand:VIMODES 3 "register_operand"))]
		     UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*reduc_<reduc><mode>_mask_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (any_reduc:VIMODES
	   (vec_duplicate:VIMODES
	     (match_operand:<V1MODES> 2 "register_operand" "vr"))
	   (match_operand:VIMODES 3 "register_operand" "vr"))]
	  UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vred<reduc>.vs\t%0,%3,%2,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Widening Integer Reduction Instructions

(define_expand "wreduc_sum<u><mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VW1MODES> 0 "register_operand")
		   (unspec:<VW1MODES>
		    [(plus:<VWMODES>
		       (vec_duplicate:<VWMODES>
			 (match_operand:<VW1MODES> 1 "register_operand"))
		       (any_extend:<VWMODES>
			 (match_operand:VWIMODES 2 "register_operand")))]
		    UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*wreduc_sum<u><mode>_nosetvl"
  [(set (match_operand:<VW1MODES> 0 "register_operand" "=vr")
	(unspec:<VW1MODES>
	 [(plus:<VWMODES>
	    (vec_duplicate:<VWMODES>
	      (match_operand:<VW1MODES> 1 "register_operand" "vr"))
	    (any_extend:<VWMODES>
	      (match_operand:VWIMODES 2 "register_operand" "vr")))]
	 UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vwredsum<u>.vs\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "wreduc_sum<u><mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VW1MODES> 0 "register_operand")
		    (unspec:<VW1MODES>
		      [(match_operand:<VCMPEQUIV> 1 "register_operand")
		       (plus:<VWMODES>
			 (vec_duplicate:<VWMODES>
			   (match_operand:<VW1MODES> 2 "register_operand"))
			 (any_extend:<VWMODES>
			   (match_operand:VWIMODES 3 "register_operand")))]
		     UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*wreduc_sum<u><mode>_mask_nosetvl"
  [(set (match_operand:<VW1MODES> 0 "register_operand" "=vr")
	(unspec:<VW1MODES>
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (plus:<VWMODES>
	     (vec_duplicate:<VWMODES>
	       (match_operand:<VW1MODES> 2 "register_operand" "vr"))
	     (any_extend:<VWMODES>
	       (match_operand:VWIMODES 3 "register_operand" "vr")))]
	  UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vwredsum<u>.vs\t%0,%3,%2,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Floating Point Reduction instructions.

(define_expand "reduc_<reduc><mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		   (unspec:<V1MODES>
		    [(any_freduc:VFMODES
		      (vec_duplicate:VFMODES
		       (match_operand:<V1MODES> 1 "register_operand"))
		      (match_operand:VFMODES 2 "register_operand"))]
		    UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*reduc_<reduc><mode>_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	 [(any_freduc:VFMODES
	   (vec_duplicate:VFMODES
	    (match_operand:<V1MODES> 1 "register_operand" "vr"))
	   (match_operand:VFMODES 2 "register_operand" "vr"))]
	 UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfred<reduc>.vs\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "reduc_<reduc><mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		    (unspec:<V1MODES>
		      [(match_operand:<VCMPEQUIV> 1 "register_operand")
		       (any_reduc:VFMODES
			 (vec_duplicate:VFMODES
			   (match_operand:<V1MODES> 2 "register_operand"))
			 (match_operand:VFMODES 3 "register_operand"))]
		     UNSPEC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*reduc_<reduc><mode>_mask_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (any_reduc:VFMODES
	     (vec_duplicate:VFMODES
	       (match_operand:<V1MODES> 2 "register_operand" "vr"))
	     (match_operand:VFMODES 3 "register_operand" "vr"))]
	  UNSPEC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfred<reduc>.vs\t%0,%3,%2,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "reduc_osum<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		   (unspec:<V1MODES>
		    [(plus:VFMODES
		      (vec_duplicate:VFMODES
		       (match_operand:<V1MODES> 1 "register_operand"))
		      (match_operand:VFMODES 2 "register_operand"))]
		    UNSPEC_ORDERED_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*reduc_osum<mode>_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	 [(plus:VFMODES
	   (vec_duplicate:VFMODES
	    (match_operand:<V1MODES> 1 "register_operand" "vr"))
	   (match_operand:VFMODES 2 "register_operand" "vr"))]
	 UNSPEC_ORDERED_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfredosum.vs\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "reduc_osum<mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<V1MODES> 0 "register_operand")
		   (unspec:<V1MODES>
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")
		      (plus:VFMODES
			(vec_duplicate:VFMODES
			  (match_operand:<V1MODES> 2 "register_operand"))
			(match_operand:VFMODES 3 "register_operand"))]
		     UNSPEC_ORDERED_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*reduc_osum<mode>_mask_nosetvl"
  [(set (match_operand:<V1MODES> 0 "register_operand" "=vr")
	(unspec:<V1MODES>
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (plus:VFMODES
	     (vec_duplicate:VFMODES
	       (match_operand:<V1MODES> 2 "register_operand" "vr"))
	     (match_operand:VFMODES 3 "register_operand" "vr"))]
	  UNSPEC_ORDERED_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfredosum.vs\t%0,%3,%2,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

;; Widening Floating-Point Reduction Instructions

(define_expand "wreduc_<o>sum<mode>"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VW1MODES> 0 "register_operand")
		   (unspec:<VW1MODES>
		     [(plus:<VWMODES>
			(vec_duplicate:<VWMODES>
			  (match_operand:<VW1MODES> 1 "register_operand"))
			(float_extend:<VWMODES>
			  (match_operand:VWFMODES 2 "register_operand")))]
		    WFREDUC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR && TARGET_HARD_FLOAT"
{
})

(define_insn "*wreduc_<o>sum<mode>_nosetvl"
  [(set (match_operand:<VW1MODES> 0 "register_operand" "=vr")
	(unspec:<VW1MODES>
	  [(plus:<VWMODES>
	    (vec_duplicate:<VWMODES>
	      (match_operand:<VW1MODES> 1 "register_operand" "vr"))
	    (float_extend:<VWMODES>
	      (match_operand:VWFMODES 2 "register_operand" "vr")))]
	 WFREDUC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfwred<o>sum.vs\t%0,%2,%1"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "wreduc_<o>sum<mode>_mask"
  [(set (reg:<VLMODE> VTYPE_REGNUM) (const_int UNSPECV_VSETVL))
   (parallel [(set (match_operand:<VW1MODES> 0 "register_operand")
		   (unspec:<VW1MODES>
		     [(match_operand:<VCMPEQUIV> 1 "register_operand")
		      (plus:<VWMODES>
			(vec_duplicate:<VWMODES>
			  (match_operand:<VW1MODES> 2 "register_operand"))
			(float_extend:<VWMODES>
			  (match_operand:VWFMODES 3 "register_operand")))]
		     WFREDUC_REDUC))
	      (use (reg:<VLMODE> VTYPE_REGNUM))])]
  "TARGET_VECTOR"
{
})

(define_insn "*wreduc_<o>sum<mode>_mask_nosetvl"
  [(set (match_operand:<VW1MODES> 0 "register_operand" "=vr")
	(unspec:<VW1MODES>
	  [(match_operand:<VCMPEQUIV> 1 "register_operand" "vm")
	   (plus:<VWMODES>
	     (vec_duplicate:<VWMODES>
	       (match_operand:<VW1MODES> 2 "register_operand" "vr"))
	     (float_extend:<VWMODES>
	       (match_operand:VWFMODES 3 "register_operand" "vr")))]
	    WFREDUC_REDUC))
   (use (reg:<VLMODE> VTYPE_REGNUM))]
  "TARGET_VECTOR"
  "vfwred<o>sum.vs\t%0,%3,%2,%1.t"
  [(set_attr "type" "vector")
   (set_attr "mode" "none")])

(define_expand "reinterpret_<mode><vintequiv>"
  [(set (match_operand:VFMODES 0 "register_operand")
	(subreg:VFMODES (match_operand:<VINTEQUIV> 1 "register_operand") 0))]
  "TARGET_VECTOR"
{
  emit_insn (gen_mov<mode> (operands[0],
	     simplify_gen_subreg (<MODE>mode, operands[1],
				  <VINTEQUIV>mode, 0)));
  DONE;
})

(define_expand "reinterpret_<vintequiv><mode>"
  [(set (match_operand:<VINTEQUIV> 0 "register_operand")
	(subreg:<VINTEQUIV> (match_operand:VFMODES 1 "register_operand") 0))]
  "TARGET_VECTOR"
{
  emit_insn (gen_mov<vintequiv> (operands[0],
	     simplify_gen_subreg (<VINTEQUIV>mode, operands[1],
				  <MODE>mode, 0)));
  DONE;
})

(define_expand "read_vlenb"
  [(match_operand 0 "register_operand")]
  "TARGET_VECTOR"
{
  rtx imm = gen_int_mode (UNITS_PER_V_REG, Pmode);
    emit_move_insn (operands[0], imm);
  DONE;
})

