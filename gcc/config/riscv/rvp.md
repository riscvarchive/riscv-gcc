;; Machine description for P extension.
;; Copyright (C) 2021 Free Software Foundation, Inc.

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

;; A list of the modes that are up to one word long vector.
(define_mode_iterator VECI [(V4QI "!TARGET_64BIT") (V2HI "!TARGET_64BIT")
                            (V8QI "TARGET_64BIT") (V4HI "TARGET_64BIT")
			                      (V2SI "TARGET_64BIT")])
(define_mode_iterator VQIHI [(V4QI "!TARGET_64BIT") (V2HI "!TARGET_64BIT")
                             (V8QI "TARGET_64BIT")  (V4HI "TARGET_64BIT")])
(define_mode_iterator VSHI [(V2HI "!TARGET_64BIT") (V2SI "TARGET_64BIT")])
(define_mode_iterator VHI  [(V2HI "!TARGET_64BIT") (V4HI "TARGET_64BIT")])
(define_mode_iterator VQI [(V4QI "!TARGET_64BIT") (V8QI "TARGET_64BIT")])
(define_mode_iterator VD_SI [(SI "!TARGET_64BIT") (V2SI "TARGET_64BIT")])

;; <bits> for specific bit number in 'simd' type instruction
(define_mode_attr bits [(V8QI "8") (V4QI "8") (QI "8") (V4HI "16") (V2HI "16")
			            (HI "16") (V2SI "32") (DI "64")])

(define_mode_attr VNHALF [(V2SI "SI") (V2HI "HI")])
(define_mode_attr VSH_EXT [(V2SI "DI") (V2HI "HI")])
(define_mode_attr VEXT [(V4QI "V4HI") (V2HI "V2SI") (V8QI "V8HI") (V4HI "V4SI")
			(V2SI "V2DI")])

;; clz, clrs
(define_code_iterator unop [clrsb clz])

;; add/sub iterator
(define_code_iterator all_plus [plus ss_plus us_plus])
(define_code_iterator all_minus [minus ss_minus us_minus])
(define_code_iterator saturation_plus [ss_plus us_plus])
(define_code_iterator saturation_minus [ss_minus us_minus])
(define_code_iterator plus_minus [plus minus])

(define_code_attr opcode [(plus "add")
   (minus "sub")
   (smax "smax")
   (umax "umax")
   (smin "smin")
   (umin "umin")])

;; <uk> expands to (un)signed (saturating) arithmetic operations
(define_code_attr uk
  [(plus "") (ss_plus "k") (us_plus "uk")
   (minus "") (ss_minus "k") (us_minus "uk")])

;; <rvp_optab> expands to the name of the optab for a particular code.
(define_code_attr rvp_optab [(clrsb "clrsb")
       (clz "clz")])

;; <rvp_insn> expands to the name of the insn that implements a particular code.
(define_code_attr rvp_insn [(clrsb "clrs")
			(clz "clz")])

;; kabs
(define_insn "kabsw"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(unspec:SI [(match_operand:SI 1 "register_operand" "r")] UNSPEC_KABS))]
  "TARGET_ZPN"
  "kabsw\t%0, %1"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

(define_insn "kabs<mode>2"
  [(set (match_operand:VECI 0 "register_operand"              "=r")
	(ss_abs:VECI (match_operand:VECI 1 "register_operand" " r")))]
  "TARGET_ZPN"
  "kabs<bits>\t%0, %1"
  [(set_attr "type"   "simd")
   (set_attr "mode" "<MODE>")])

;; sub/adddi spn
(define_insn "*subdi3_rvp"
  [(set (match_operand:DI 0 "register_operand"               "=r")
	(minus:DI (match_operand:DI 1 "register_operand" " r")
		 (match_operand:DI 2 "arith_operand"   " r")))]
  "TARGET_ZPSF && !TARGET_64BIT"
{
  HOST_WIDE_INT tmp;
  if (CONST_INT_P (operands[2]))
    {
      tmp = INTVAL (operands[2]);
      operands[2] = gen_reg_rtx (DImode);
      riscv_move_integer (operands[2], operands[2], tmp,
              DImode, FALSE);
    }
  return "sub64 %0, %1, %2";
}
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

(define_insn "*adddi3_rvp"
  [(set (match_operand:DI 0 "register_operand"               "=r")
	(plus:DI (match_operand:DI 1 "register_operand" " r")
		 (match_operand:DI 2 "arith_operand"   " r")))]
  "TARGET_ZPSF && !TARGET_64BIT"
{
  HOST_WIDE_INT tmp;
  if (CONST_INT_P (operands[2]))
    {
      tmp = INTVAL (operands[2]);
      operands[2] = gen_reg_rtx (DImode);
      riscv_move_integer (operands[2], operands[2], tmp,
              DImode, FALSE);
    }
  return "add64 %0, %1, %2";
}
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

;; k|(uk)|? add
(define_insn "<uk>add<mode>3"
  [(set (match_operand:VECI 0 "register_operand"                "=r")
	(all_plus:VECI (match_operand:VECI 1 "register_operand" " r")
		       (match_operand:VECI 2 "register_operand" " r")))]
  "TARGET_ZPN"
  "<uk>add<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; rv64
(define_insn "rvp_<uk>adddi3"
  [(set (match_operand:DI 0 "register_operand"              "=r")
	(saturation_plus:DI (match_operand:DI 1 "register_operand" " r")
		     (match_operand:DI 2 "register_operand" " r")))]
  "TARGET_ZPSF"
  "<uk>add64 %0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

;; k|(uk)|? sub
(define_insn "<uk>sub<mode>3"
  [(set (match_operand:VECI 0 "register_operand"                  "=r")
	(all_minus:VECI (match_operand:VECI 1 "register_operand" " r")
			(match_operand:VECI 2 "register_operand" " r")))]
  "TARGET_ZPN"
  "<uk>sub<bits> %0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; rv64
(define_insn "rvp_<uk>subdi3"
  [(set (match_operand:DI 0 "register_operand"               "=r")
	(saturation_minus:DI (match_operand:DI 1 "register_operand" " r")
		      (match_operand:DI 2 "register_operand" " r")))]
  "TARGET_ZPSF"
  "<uk>sub64 %0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

;; uk|k add|sub w|h
(define_int_attr karth_insn
  [(UNSPEC_KADDW  "kaddw")
   (UNSPEC_UKADDW "ukaddw")
   (UNSPEC_KSUBW  "ksubw")
   (UNSPEC_UKSUBW "uksubw")
   (UNSPEC_KADDH  "kaddh")
   (UNSPEC_UKADDH "ukaddh")
   (UNSPEC_KSUBH  "ksubh")
   (UNSPEC_UKSUBH "uksubh")])

(define_int_iterator UNSPEC_KARTH [
   UNSPEC_KADDW
   UNSPEC_UKADDW
   UNSPEC_KSUBW
   UNSPEC_UKSUBW
   UNSPEC_KADDH
   UNSPEC_UKADDH
   UNSPEC_KSUBH
   UNSPEC_UKSUBH])

(define_insn "<karth_insn>"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		    (match_operand:SI 2 "register_operand" "r")] UNSPEC_KARTH))]
  "TARGET_ZPN"
  "<karth_insn>\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

;; ave
(define_insn "ave"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(truncate:SI
	  (ashiftrt:DI
	    (plus:DI
	      (plus:DI
		(sign_extend:DI (match_operand:SI 1 "register_operand" "r"))
		(sign_extend:DI (match_operand:SI 2 "register_operand" "r")))
	      (const_int 1))
	  (const_int 1))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "ave\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

(define_insn "avedi"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(truncate:DI
	  (ashiftrt:TI
	    (plus:TI
	      (plus:TI
		(sign_extend:TI (match_operand:DI 1 "register_operand" "r"))
		(sign_extend:TI (match_operand:DI 2 "register_operand" "r")))
	      (const_int 1))
	  (const_int 1))))]
  "TARGET_ZPN && TARGET_64BIT"
  "ave\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "DI")])

;; bitrev
(define_insn "bitrevsi"
  [(set (match_operand:SI 0 "register_operand"             "=r,   r")
	(unspec:SI [(match_operand:SI 1 "register_operand" " r,   r")
		    (match_operand:SI 2 "rimm5u_operand"   " r, u05")]
		   UNSPEC_BITREV))]
  "TARGET_ZPN && !TARGET_64BIT && !TARGET_ZBPBO"
  "@
   bitrev\t%0, %1, %2
   bitrevi\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "SI")])

(define_insn "bitrevdi"
  [(set (match_operand:DI 0 "register_operand"             "=r,   r")
	(unspec:DI [(match_operand:DI 1 "register_operand" " r,   r")
		    (match_operand:SI 2 "rimm6u_operand"   " r, u06")]
		   UNSPEC_BITREV))]
  "TARGET_ZPN && TARGET_64BIT && !TARGET_ZBPBO"
  "@
   bitrev\t%0, %1, %2
   bitrevi\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "SI")])

;; cmix
(define_insn "cmix<X:mode>"
  [(set (match_operand:X 0 "register_operand"       "=r")
	  (ior:X
	    (and:X
	      (match_operand:X 1 "register_operand" " r")
	      (match_operand:X 3 "register_operand" " r"))
	    (and:X
	      (match_operand:X 2 "register_operand" " r")
	      (not:X (match_dup 3)))))]
  "TARGET_ZBPBO"
  "cmix\t%0, %3, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "<MODE>")])

;; clrov
(define_insn "clrov<X:mode>"
  [(unspec_volatile:X [(const_int 0)] UNSPEC_CLROV)]
  "TARGET_ZPN"
  "csrrci zero, vxsat, 1"
  [(set_attr "mode" "<MODE>")])

;; clrs, clz
(define_insn "<rvp_optab><mode>2"
  [(set (match_operand:VECI 0 "register_operand" "=r")
        (unop:VECI (match_operand:VECI 1 "register_operand" "r")))]
  "TARGET_ZPN"
  "<rvp_insn><bits>\t%0, %1"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; clrs32, clz32
(define_insn "clrsbsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (clrsb:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_ZPN && !TARGET_64BIT"
  "clrs32\t%0, %1"
  [(set_attr "type" "simd")
   (set_attr "mode" "SI")])

(define_insn "clzsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (clz:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_ZPN && !TARGET_64BIT"
  { return TARGET_ZBPBO ? "clz\t%0, %1" : "clz32\t%0, %1"; }
  [(set_attr "type" "simd")
   (set_attr "mode" "SI")])

;; simd integer compare equal
(define_insn "cmpeq<mode>"
  [(set (match_operand:VQIHI 0 "register_operand"                          "=r")
	(unspec:VQIHI [(eq:VQIHI (match_operand:VQIHI 1 "register_operand" " r")
				 (match_operand:VQIHI 2 "register_operand" " r"))]
		       UNSPEC_VEC_COMPARE))]
  "TARGET_ZPN"
  "cmpeq<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; cras, crsa
(define_expand "cras<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_cras<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "cras<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 1)]))))
	  (vec_duplicate:VSHI
	    (plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 1)]))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "cras<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "cras16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_cras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "cras16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (minus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
				     (parallel [(const_int 0)]))
		      (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
				     (parallel [(const_int 1)])))
	    (plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
		     (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
		      (vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (plus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
		      (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "cras16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "crsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_crsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "crsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 1)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 0)]))))
	  (vec_duplicate:VSHI
	    (plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 1)]))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "crsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "crsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_crsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "crsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (plus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
				    (parallel [(const_int 0)]))
		     (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
				    (parallel [(const_int 1)])))
	    (minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
		      (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
		     (vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (minus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
		       (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "crsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; kcras, kcrsa
(define_expand "kcras<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kcras<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kcras<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (ss_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 1)]))))
	  (vec_duplicate:VSHI
	    (ss_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 1)]))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "kcras<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "kcras16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kcras16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (ss_minus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
					(parallel [(const_int 0)]))
			 (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
					(parallel [(const_int 1)])))
	    (ss_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (ss_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (ss_plus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kcras16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "kcrsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kcrsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kcrsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (ss_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 1)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 0)]))))
	  (vec_duplicate:VSHI
	    (ss_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 1)]))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "kcrsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "kcrsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kcrsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (ss_plus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
				       (parallel [(const_int 0)]))
			(vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
				       (parallel [(const_int 1)])))
	    (ss_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (ss_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (ss_minus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			  (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kcrsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; ukcras ukcrsa
(define_expand "ukcras<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_ukcras<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "ukcras<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (us_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 1)]))))
	  (vec_duplicate:VSHI
	    (us_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 1)]))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "ukcras<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "ukcras16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_ukcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "ukcras16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (us_minus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
					(parallel [(const_int 0)]))
			 (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
					(parallel [(const_int 1)])))
	    (us_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (us_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (us_plus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "ukcras16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "ukcrsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_ukcrsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "ukcrsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (us_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 1)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 0)]))))
	  (vec_duplicate:VSHI
	    (us_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 1)]))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "ukcrsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "ukcrsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_ukcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "ukcrsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (us_plus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
				       (parallel [(const_int 0)]))
			(vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
				       (parallel [(const_int 1)])))
	    (us_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
	  (vec_concat:V2HI
	    (us_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 3)])))
	    (us_minus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			  (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "ukcrsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; rcras rcrsa
(define_expand "rcras<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_rcras<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rcras<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(minus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 0)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 0)])))
		  (sign_extend:SI
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "rcras<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "rcras16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_rcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rcras16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 1)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "rcras16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "rcrsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_rcrsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rcrsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
	        (minus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 1)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 0)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "rcrsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "rcrsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_rcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rcrsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 1)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "rcrsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; urcras urcrsa
(define_expand "urcras<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_urcras<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "urcras<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (lshiftrt:<VSH_EXT>
		(minus:<VSH_EXT>
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 0)])))
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (lshiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 0)])))
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "urcras<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "urcras16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_urcras16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "urcras16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (lshiftrt:SI
		(minus:SI
		  (zero_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (zero_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 1)]))))
		(const_int 1)))
	    (truncate:HI
	      (lshiftrt:SI
		(plus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (lshiftrt:SI
		(minus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1)))
	    (truncate:HI
	      (lshiftrt:SI
		(plus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "urcras16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "urcrsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_urcrsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "urcrsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (lshiftrt:<VSH_EXT>
	        (minus:<VSH_EXT>
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 1)])))
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (lshiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 0)])))
		  (zero_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "urcrsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "urcrsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_urcrsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "urcrsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (lshiftrt:SI
		(plus:SI
		  (zero_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (zero_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 1)]))))
		(const_int 1)))
	    (truncate:HI
	      (lshiftrt:SI
		(minus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (lshiftrt:SI
		(plus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1)))
	    (truncate:HI
	      (lshiftrt:SI
		(minus:SI
		  (zero_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (zero_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "urcrsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; insb
(define_expand "insb"
  [(match_operand:V4QI 0 "register_operand" "")
   (match_operand:V4QI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:SI 3 "const_int_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  if (INTVAL (operands[3]) > 3 || INTVAL (operands[3]) < 0)
    gcc_unreachable ();

  rtx src = gen_reg_rtx (QImode);

  convert_move (src, operands[2], false);

  HOST_WIDE_INT selector_index;
  selector_index = INTVAL (operands[3]);
  rtx selector = gen_int_mode (1 << selector_index, SImode);
  emit_insn (gen_vec_setv4qi_internal (operands[0], src,
				       operands[1], selector));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_setv4qi_internal"
  [(set (match_operand:V4QI 0 "register_operand"    "=   r,    r,    r,    r")
	(vec_merge:V4QI
	  (vec_duplicate:V4QI
	    (match_operand:QI 1 "register_operand"  "    r,    r,    r,    r"))
	  (match_operand:V4QI 2 "register_operand"  "    0,    0,    0,    0")
	  (match_operand:SI 3 "imm_1_2_4_8_operand" " C01, C02, C04, C08")))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
   insb\t%0, %1, 0
   insb\t%0, %1, 1
   insb\t%0, %1, 2
   insb\t%0, %1, 3"
  [(set_attr "type" "dsp")
   (set_attr "mode" "V4QI")])

(define_expand "insb64"
  [(match_operand:V8QI 0 "register_operand" "")
   (match_operand:V8QI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:SI 3 "const_insb64_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  if (INTVAL (operands[3]) > 7 || INTVAL (operands[3]) < 0)
    gcc_unreachable ();

  rtx src = gen_reg_rtx (QImode);

  convert_move (src, operands[2], false);

  HOST_WIDE_INT selector_index;
  selector_index = INTVAL (operands[3]);
  rtx selector = gen_int_mode (1 << selector_index, SImode);
  emit_insn (gen_vec_setv8qi_internal (operands[0], src,
				       operands[1], selector));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_setv8qi_internal"
  [(set (match_operand:V8QI 0 "register_operand"    "=r")
	(vec_merge:V8QI
	  (vec_duplicate:V8QI
	    (match_operand:QI 1 "register_operand"  "r"))
	  (match_operand:V8QI 2 "register_operand"  "0")
	  (match_operand:SI 3 "pwr_7_operand" " D07")))]
  "TARGET_ZPN && TARGET_64BIT"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  return "insb\t%0, %1, %3";
}
  [(set_attr "type" "dsp")
   (set_attr "mode" "V8QI")])

;; KDMBB, KDMBT, KDMTT
(define_expand "kdmbb"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (0)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "kdmbt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "kdmtt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdm_internal (operands[0], operands[1], operands[2],
				GEN_INT (1), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "kdm_internal"
  [(set (match_operand:SI 0 "register_operand"                      "=   r,   r,   r,   r")
	(ashift:SI
	  (mult:SI
	    (sign_extend:SI
	  (vec_select:HI
		(match_operand:V2HI 1 "register_operand"          "   r,   r,   r,   r")
		(parallel [(match_operand:SI 3 "imm_0_1_operand"  " C00, C00, C01, C01")])))
	    (sign_extend:SI
	  (vec_select:HI
		(match_operand:V2HI 2 "register_operand"          "   r,   r,   r,   r")
		(parallel [(match_operand:SI 4 "imm_0_1_operand"  " C00, C01, C01, C00")]))))
	(const_int 1)))]
  "TARGET_ZPN"
  "@
   kdmbb\t%0, %1, %2
   kdmbt\t%0, %1, %2
   kdmtt\t%0, %1, %2
   kdmbt\t%0, %2, %1"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

;; KDMABB, KDMABT, KDMATT
(define_expand "kdmabb"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (0), GEN_INT (0), operands[1]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "kdmabt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (0), GEN_INT (1), operands[1]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "kdmatt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kdma_internal (operands[0], operands[2], operands[3],
				GEN_INT (1), GEN_INT (1), operands[1]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "kdma_internal"
  [(set (match_operand:SI 0 "register_operand"                      "=   r,   r,   r,   r")
	(ss_plus:SI
	  (ashift:SI
	    (mult:SI
	      (sign_extend:SI
		(vec_select:HI
		  (match_operand:V2HI 1 "register_operand"          "   r,   r,   r,   r")
		  (parallel [(match_operand:SI 3 "imm_0_1_operand"  " C00, C00, C01, C01")])))
	      (sign_extend:SI
		(vec_select:HI
		  (match_operand:V2HI 2 "register_operand"          "   r,   r,   r,   r")
		  (parallel [(match_operand:SI 4 "imm_0_1_operand"  " C00, C01, C01, C00")]))))
	    (const_int 1))
	  (match_operand:SI 5 "register_operand"                    "   0,   0,   0,   0")))]
  "TARGET_ZPN"
  "@
   kdmabb\t%0, %1, %2
   kdmabt\t%0, %1, %2
   kdmatt\t%0, %1, %2
   kdmabt\t%0, %2, %1"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

;; KHMBB, KHMBT, KHMTT
(define_expand "khmbbsi"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (0)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "khmbtsi"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (0), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "khmttsi"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:V2HI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_khmsi_internal (operands[0], operands[1], operands[2],
				GEN_INT (1), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "khmsi_internal"
  [(set (match_operand:SI 0 "register_operand"                      "=   r,   r,   r,   r")
    (sign_extend:SI
      (ss_truncate:QI
	    (ashiftrt:SI
	      (mult:SI
	        (sign_extend:SI
	          (vec_select:HI
		        (match_operand:V2HI 1 "register_operand"          "   r,   r,   r,   r")
		        (parallel [(match_operand:SI 3 "imm_0_1_operand"  " C00, C00, C01, C01")])))
	        (sign_extend:SI
	          (vec_select:HI
		        (match_operand:V2HI 2 "register_operand"          "   r,   r,   r,   r")
		        (parallel [(match_operand:SI 4 "imm_0_1_operand"  " C00, C01, C01, C00")]))))
	    (const_int 15)))))]
  "TARGET_ZPN"
  "@
   khmbb\t%0, %1, %2
   khmbt\t%0, %1, %2
   khmtt\t%0, %1, %2
   khmbt\t%0, %2, %1"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

;; KMABB, KMABT, KMATT
(define_expand "kmabb"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (0), GEN_INT (0),
			       operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmabt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (0), GEN_INT (1),
			       operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmatt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kma_internal (operands[0], operands[2], operands[3],
			       GEN_INT (1), GEN_INT (1),
			       operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kma_internal"
  [(set (match_operand:SI 0 "register_operand"                   "=   r,   r,   r,   r")
	(ss_plus:SI
	  (mult:SI
	    (sign_extend:SI
	      (vec_select:HI
		(match_operand:V2HI 1 "register_operand"         "   r,   r,   r,   r")
	        (parallel [(match_operand:SI 3 "imm_0_1_operand" " C00, C00, C01, C01")])))
	    (sign_extend:SI
	      (vec_select:HI
	        (match_operand:V2HI 2 "register_operand"         "   r,   r,   r,   r")
	        (parallel [(match_operand:SI 4 "imm_0_1_operand" " C00, C01, C01, C00")]))))
	  (match_operand:SI 5 "register_operand"                 "   0,   0,   0,   0")))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
  kmabb\t%0, %1, %2
	kmabt\t%0, %1, %2
	kmatt\t%0, %1, %2
	kmabt\t%0, %2, %1"
  [(set_attr "type" "simd")
   (set_attr "mode" "SI")])

(define_expand "kmabb64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (2), GEN_INT (0),
				 GEN_INT (2), operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmabt64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), GEN_INT (2), GEN_INT (1),
				 GEN_INT (3), operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmatt64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kma64_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), GEN_INT (3), GEN_INT (1),
				 GEN_INT (3), operands[1]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kma64_internal"
  [(set (match_operand:V2SI 0 "register_operand"                 "=   r,   r,   r,   r")
	(ss_plus:V2SI
	  (mult:V2SI
	    (sign_extend:V2SI
	      (vec_select:V2HI
		(match_operand:V4HI 1 "register_operand"         "   r,   r,   r,   r")
	        (parallel [(match_operand:SI 3 "imm_0_1_operand" " C00, C00, C01, C01")
			   (match_operand:SI 4 "imm_2_3_operand" " C02, C02, C03, C03")])))
	    (sign_extend:V2SI
	      (vec_select:V2HI
	        (match_operand:V4HI 2 "register_operand"         "   r,   r,   r,   r")
	        (parallel [(match_operand:SI 5 "imm_0_1_operand" " C00, C01, C01, C00")
			   (match_operand:SI 6 "imm_2_3_operand" " C02, C03, C03, C02")]))))
	  (match_operand:V2SI 7 "register_operand"               "   0,   0,   0,   0")))]
  "TARGET_ZPN && TARGET_64BIT"
  "@
  kmabb\t%0, %1, %2
  kmabt\t%0, %1, %2
  kmatt\t%0, %1, %2
  kmabt\t%0, %2, %1"
  [(set_attr "type" "simd")
   (set_attr "mode" "V2SI")])

;; KHM8, KHMX8, KHM16, KHMX16
(define_insn "khm8<mode>"
  [(set (match_operand:VQI 0 "register_operand"              "=r")
	(unspec:VQI [(match_operand:VQI 1 "register_operand" " r")
		     (match_operand:VQI 2 "register_operand" " r")]
		     UNSPEC_KHM))]
  "TARGET_ZPN"
  "khm8\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "khmx8<mode>"
  [(set (match_operand:VQI 0 "register_operand"              "=r")
	(unspec:VQI [(match_operand:VQI 1 "register_operand" " r")
		     (match_operand:VQI 2 "register_operand" " r")]
		     UNSPEC_KHMX))]
  "TARGET_ZPN"
  "khmx8\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "khm16<mode>"
  [(set (match_operand:VHI 0 "register_operand"              "=r")
	(unspec:VHI [(match_operand:VHI 1 "register_operand" " r")
		     (match_operand:VHI 2 "register_operand" " r")]
		     UNSPEC_KHM))]
  "TARGET_ZPN"
  "khm16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "khmx16<mode>"
  [(set (match_operand:VHI 0 "register_operand"              "=r")
	(unspec:VHI [(match_operand:VHI 1 "register_operand" " r")
		     (match_operand:VHI 2 "register_operand" " r")]
		     UNSPEC_KHMX))]
  "TARGET_ZPN"
  "khmx16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; KMADA, KMAXDA
(define_insn "kmada"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_plus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_plus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 1)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 0)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmada\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmada64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_plus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 0) (const_int 2)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmada\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmaxda"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_plus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_plus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 0)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 1)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmaxda\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmaxda64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_plus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 0) (const_int 2)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 1) (const_int 3)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmaxda\t%0, %2, %3"
  [(set_attr "type" "simd")])

;; KMADS, KMADRS, KMAXDS
(define_insn "kmads"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_plus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_minus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 1)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 0)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmads\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmads64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_minus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 0) (const_int 2)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmads\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmadrs"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_plus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_minus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 0)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 1)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmadrs\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmadrs64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_minus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 0) (const_int 2)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 1) (const_int 3)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmadrs\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmaxds"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_plus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_minus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 0)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 1)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmaxds\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmaxds64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_minus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 0) (const_int 2)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 1) (const_int 3)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmaxds\t%0, %2, %3"
  [(set_attr "type" "simd")])

;; KMAR64
(define_insn "kmar64"
  [(set (match_operand:DI 0 "register_operand"       "=r")
	(ss_plus:DI
	  (match_operand:DI 1 "register_operand"     " 0")
	  (mult:DI
	    (sign_extend:DI
	      (match_operand:SI 2 "register_operand" " r"))
	    (sign_extend:DI
	      (match_operand:SI 3 "register_operand" " r")))))]
  "TARGET_ZPSF && !TARGET_64BIT"
  "kmar64\t%0, %2, %3"
  [(set_attr "type"   "dsp64")
   (set_attr "mode"   "DI")])

(define_insn "vkmar64"
  [(set (match_operand:DI 0 "register_operand"             "=r")
	(ss_plus:DI (match_operand:DI 1 "register_operand"    " 0")
	  (plus:DI
	    (mult:DI
	      (sign_extend:DI
		(vec_select:SI
		  (match_operand:V2SI 2 "register_operand" " r")
		  (parallel [(const_int 0)])))
	      (sign_extend:DI
		(vec_select:SI
		  (match_operand:V2SI 3 "register_operand" " r")
		  (parallel [(const_int 0)]))))
	    (mult:DI
	      (sign_extend:DI
		(vec_select:SI (match_dup 2) (parallel [(const_int 1)])))
	      (sign_extend:DI
		(vec_select:SI (match_dup 3) (parallel [(const_int 1)])))))))]
  "TARGET_ZPSF && TARGET_64BIT"
  "kmar64\t%0, %2, %3"
  [(set_attr "type"   "dsp64")
   (set_attr "mode" "DI")])

;; KMDA, KMXDA
(define_insn "kmda"
  [(set (match_operand:SI 0 "register_operand"                         "=r")
	(ss_plus:SI
	  (mult:SI
	    (sign_extend:SI (vec_select:HI
			      (match_operand:V2HI 1 "register_operand" "r")
			      (parallel [(const_int 1)])))
	    (sign_extend:SI (vec_select:HI
			      (match_operand:V2HI 2 "register_operand" "r")
			      (parallel [(const_int 1)]))))
	  (mult:SI
	    (sign_extend:SI (vec_select:HI
			      (match_dup 1)
			      (parallel [(const_int 0)])))
	    (sign_extend:SI (vec_select:HI
			      (match_dup 2)
			      (parallel [(const_int 0)]))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmda\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kmxda"
  [(set (match_operand:SI 0 "register_operand"                        "=r")
	(ss_plus:SI
	  (mult:SI
	    (sign_extend:SI (vec_select:HI
			      (match_operand:V2HI 1 "register_operand" "r")
			      (parallel [(const_int 1)])))
	    (sign_extend:SI (vec_select:HI
			      (match_operand:V2HI 2 "register_operand" "r")
			      (parallel [(const_int 0)]))))
	  (mult:SI
	    (sign_extend:SI (vec_select:HI
			      (match_dup 1)
			      (parallel [(const_int 0)])))
	    (sign_extend:SI (vec_select:HI
			      (match_dup 2)
			      (parallel [(const_int 1)]))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmxda\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kmxda64"
  [(set (match_operand:V2SI 0 "register_operand"                      "=r")
	(ss_plus:V2SI
	  (mult:V2SI
	    (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 1 "register_operand" "r")
				(parallel [(const_int 1) (const_int 3)])))
	    (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" "r")
				(parallel [(const_int 0) (const_int 2)]))))
	  (mult:V2SI
	    (sign_extend:V2SI (vec_select:V2HI
				(match_dup 1)
				(parallel [(const_int 0) (const_int 2)])))
	    (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 1) (const_int 3)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmxda\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kmda64"
  [(set (match_operand:V2SI 0 "register_operand"                      "=r")
	(ss_plus:V2SI
	  (mult:V2SI
	    (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 1 "register_operand" "r")
				(parallel [(const_int 1) (const_int 3)])))
	    (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" "r")
				(parallel [(const_int 1) (const_int 3)]))))
	  (mult:V2SI
	    (sign_extend:V2SI (vec_select:V2HI
				(match_dup 1)
				(parallel [(const_int 0) (const_int 2)])))
	    (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmda\t%0, %1, %2"
  [(set_attr "type" "simd")])

;; KMMAC, KMMAC.u
(define_insn "kmmac"
  [(set (match_operand:SI 0 "register_operand"                         "=r")
	(ss_plus:SI (match_operand:SI 1 "register_operand"             " 0")
	  (truncate:SI
	    (lshiftrt:DI
	      (mult:DI
		(sign_extend:DI (match_operand:SI 2 "register_operand" " r"))
		(sign_extend:DI (match_operand:SI 3 "register_operand" " r")))
	      (const_int 32)))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmmac\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmac_64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_plus:V2SI (match_operand:V2SI 1 "register_operand"             " 0")
	  (truncate:V2SI
	    (lshiftrt:V2DI
	      (mult:V2DI
		(sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r"))
		(sign_extend:V2DI (match_operand:V2SI 3 "register_operand" " r")))
	      (const_int 32)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmmac\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmac_round"
  [(set (match_operand:SI 0 "register_operand"                                     "=r")
	(ss_plus:SI (match_operand:SI 1 "register_operand"                         " 0")
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI [(mult:DI
			    (sign_extend:DI (match_operand:SI 2 "register_operand" " r"))
			    (sign_extend:DI (match_operand:SI 3 "register_operand" " r")))]
			 UNSPEC_ROUND)
	      (const_int 32)))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmmac.u\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmac64_round"
  [(set (match_operand:V2SI 0 "register_operand"                                     "=r")
	(ss_plus:V2SI (match_operand:V2SI 1 "register_operand"                       " 0")
	  (truncate:V2SI
	    (lshiftrt:V2DI
	      (unspec:V2DI [(mult:V2DI
			    (sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r"))
			    (sign_extend:V2DI (match_operand:V2SI 3 "register_operand" " r")))]
			 UNSPEC_ROUND)
	      (const_int 32)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmmac.u\t%0, %2, %3"
  [(set_attr "type" "simd")])

;; KMMAWB, KMMAWB.u, KMMAWB2, KMMAWB2.u, KMMAWT2, KMMAWT2.u
(define_insn "kmmaw_internal"
  [(set (match_operand:SI 0 "register_operand"                         "=  r,   r,   r,   r")
	(ss_plus:SI
	  (match_operand:SI 4 "register_operand"                       "   0,   0,   0,   0")
	  (truncate:SI
	    (lshiftrt:DI
	      (mult:DI
		(sign_extend:DI (match_operand:SI 1 "register_operand" "   r,   r,   r,   r"))
		  (sign_extend:DI
		    (vec_select:HI
		      (match_operand:V2HI 2 "register_operand"         "   r,   r,   r,   r")
		      (parallel [(match_operand:SI 3 "imm_0_1_operand" " C00, C01, C00, C01")]))))
	      (match_operand:SI 5 "imm_15_16_operand"                  " C16, C16, C15, C15" )))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
  kmmawb\t%0, %1, %2
  kmmawt\t%0, %1, %2
  kmmawb2\t%0, %1, %2
  kmmawt2\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmawb"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), operands[1], GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), operands[1], GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawb2"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (0), operands[1], GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt2"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_internal (operands[0], operands[2], operands[3],
				 GEN_INT (1), operands[1], GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmaw_round_internal"
  [(set (match_operand:SI 0 "register_operand"                            "=  r,   r,   r,   r")
	(ss_plus:SI
	  (match_operand:SI 4 "register_operand"                          "   0,   0,   0,   0")
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI
		[(mult:DI
		   (sign_extend:DI (match_operand:SI 1 "register_operand" "   r,   r,   r,   r"))
		   (sign_extend:DI
		     (vec_select:HI
		       (match_operand:V2HI 2 "register_operand"           "   r,   r,   r,   r")
		       (parallel [(match_operand:SI 3 "imm_0_1_operand"   " C00, C01, C00, C01")]))))]
		UNSPEC_ROUND)
	      (match_operand:SI 5 "imm_15_16_operand"                     " C16, C16, C15, C15")))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
  kmmawb.u\t%0, %1, %2
  kmmawt.u\t%0, %1, %2
  kmmawb2.u\t%0, %1, %2
  kmmawt2.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmawb_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (0), operands[1], GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (1), operands[1], GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawb2_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (0), operands[1], GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt2_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmaw_round_internal (operands[0], operands[2], operands[3],
				       GEN_INT (1), operands[1], GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmaw64_internal"
[(set (match_operand:V2SI 0 "register_operand" "=r, r, r, r")
      (ss_plus:V2SI
	(match_operand:V2SI 5 "register_operand" "0, 0, 0, 0")
	(vec_concat:V2SI
	  (truncate:SI
	    (lshiftrt:DI
	      (mult:DI
		(sign_extend:DI
		  (vec_select:SI
		    (match_operand:V2SI 1 "register_operand" "r, r, r, r")
		      (parallel [(const_int 0)])))
		(sign_extend:DI
		  (vec_select:HI
		    (match_operand:V4HI 2 "register_operand"           "  r,   r,   r,   r")
		      (parallel [(match_operand:SI 3 "imm_0_1_operand" "C00, C01, C00, C01")]))))
	      (match_operand:SI 6 "imm_15_16_operand"                  "C16, C16, C15, C15")))
	  (truncate:SI
	    (lshiftrt:DI
	      (mult:DI
		(sign_extend:DI
		  (vec_select:SI
		    (match_dup 1)
		      (parallel [(const_int 1)])))
		(sign_extend:DI
		  (vec_select:HI
		    (match_dup 2)
		      (parallel [(match_operand:SI 4 "imm_2_3_operand" "C02, C03, C02, C03")]))))
	      (match_dup 6))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "@
  kmmawb\t%0, %1, %2
  kmmawt\t%0, %1, %2
  kmmawb2\t%0, %1, %2
  kmmawt2\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmawb64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (0), GEN_INT (2), operands[1],
				   GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (1), GEN_INT (3), operands[1],
				   GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawb2_64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (0), GEN_INT (2), operands[1],
				   GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt2_64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_internal (operands[0], operands[2], operands[3],
				   GEN_INT (1), GEN_INT (3), operands[1],
				   GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmaw64_round_internal"
[(set (match_operand:V2SI 0 "register_operand"                           "=r,    r,   r,   r")
      (ss_plus:V2SI
	(match_operand:V2SI 5 "register_operand"                         "  0,   0,   0,   0")
	(vec_concat:V2SI
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI
		[(mult:DI
		  (sign_extend:DI
		    (vec_select:SI
		      (match_operand:V2SI 1 "register_operand"           "  r,   r,   r,   r")
			(parallel [(const_int 0)])))
		  (sign_extend:DI
		    (vec_select:HI
		      (match_operand:V4HI 2 "register_operand"           "  r,   r,   r,   r")
			(parallel [(match_operand:SI 3 "imm_0_1_operand" "C00, C01, C00, C01")]))))]
		UNSPEC_ROUND)
	      (const_int 16)))
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI
		[(mult:DI
		  (sign_extend:DI
		    (vec_select:SI
		      (match_dup 1)
			(parallel [(const_int 1)])))
		  (sign_extend:DI
		    (vec_select:HI
		      (match_dup 2)
			(parallel [(match_operand:SI 4 "imm_2_3_operand" "C02, C03, C02, C03")]))))]
		  UNSPEC_ROUND)
	      (match_operand:SI 6 "imm_15_16_operand"                    "C16, C16, C15, C15"))))))]
"TARGET_ZPN && TARGET_64BIT"
  "@
  kmmawb.u\t%0, %1, %2
  kmmawt.u\t%0, %1, %2
  kmmawb2.u\t%0, %1, %2
  kmmawt2.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmawb64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (0), GEN_INT (2), operands[1],
					 GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (1), GEN_INT (3), operands[1],
					 GEN_INT (16)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawb2_64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (0), GEN_INT (2), operands[1],
					 GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmawt2_64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V2SI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmaw64_round_internal (operands[0], operands[2], operands[3],
					 GEN_INT (1), GEN_INT (3), operands[1],
					 GEN_INT (15)));
  DONE;
}
[(set_attr "type" "simd")])

;; KMMSB, KMMSB.u
(define_insn "kmmsb"
  [(set (match_operand:SI 0 "register_operand"                         "=r")
	(ss_minus:SI (match_operand:SI 1 "register_operand"            " 0")
	  (truncate:SI
	    (lshiftrt:DI
	      (mult:DI
		(sign_extend:DI (match_operand:SI 2 "register_operand" " r"))
		(sign_extend:DI (match_operand:SI 3 "register_operand" " r")))
	      (const_int 32)))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmmsb\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmsb_64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_minus:V2SI (match_operand:V2SI 1 "register_operand"             " 0")
	  (truncate:V2SI
	    (lshiftrt:V2DI
	      (mult:V2DI
		(sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r"))
		(sign_extend:V2DI (match_operand:V2SI 3 "register_operand" " r")))
	      (const_int 32)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmmsb\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmsb_round"
  [(set (match_operand:SI 0 "register_operand"                                     "=r")
	(ss_minus:SI (match_operand:SI 1 "register_operand"                        " 0")
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI [(mult:DI
			    (sign_extend:DI (match_operand:SI 2 "register_operand" " r"))
			    (sign_extend:DI (match_operand:SI 3 "register_operand" " r")))]
			 UNSPEC_ROUND)
	      (const_int 32)))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmmsb.u\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmmsb64_round"
  [(set (match_operand:V2SI 0 "register_operand"                                     "=r")
	(ss_minus:V2SI (match_operand:V2SI 1 "register_operand"                       " 0")
	  (truncate:V2SI
	    (lshiftrt:V2DI
	      (unspec:V2DI [(mult:V2DI
			    (sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r"))
			    (sign_extend:V2DI (match_operand:V2SI 3 "register_operand" " r")))]
			 UNSPEC_ROUND)
	      (const_int 32)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmmsb.u\t%0, %2, %3"
  [(set_attr "type" "simd")])

;; KMMWB2, KMMWB2.u, KMMWT2, KMMWT2.u
(define_insn "kmmw2_round_internal"
  [(set (match_operand:SI 0 "register_operand"                          "=   r,    r")
	(truncate:SI
	  (lshiftrt:DI
	    (unspec:DI
	      [(ss_mult:DI
		 (sign_extend:DI (match_operand:SI 1 "register_operand" "    r,    r"))
		 (sign_extend:DI
		   (vec_select:HI
		     (match_operand:V2HI 2 "register_operand"           "    r,    r")
		     (parallel [(match_operand:SI 3 "imm_0_1_operand"   "  C00,  C01")]))))]
	      UNSPEC_KMMWU)
	    (const_int 15))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
   kmmwb2.u\t%0, %1, %2
   kmmwt2.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmwb2_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmw2_round_internal (operands[0], operands[1],
				       operands[2], GEN_INT (0)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmwt2_round"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmw2_round_internal (operands[0], operands[1],
				       operands[2], GEN_INT (1)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmw64_round"
  [(set (match_operand:V2SI 0 "register_operand"                       "=r,    r")
	(vec_concat:V2SI
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI
		[(mult:DI
		  (sign_extend:DI
		    (vec_select:SI
		      (match_operand:V2SI 1 "register_operand"           "  r,   r")
		      (parallel [(const_int 0)])))
		  (sign_extend:DI
		    (vec_select:HI
		      (match_operand:V4HI 2 "register_operand"           "  r,   r")
		      (parallel [(match_operand:SI 3 "imm_0_1_operand"   "C00, C01")]))))]
		UNSPEC_KMMWU)
	      (const_int 15)))
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI
		[(mult:DI
		  (sign_extend:DI
		    (vec_select:SI
		      (match_dup 1)
		      (parallel [(const_int 1)])))
		  (sign_extend:DI
		    (vec_select:HI
		      (match_dup 2)
		      (parallel [(match_operand:SI 4 "imm_2_3_operand"   "C02, C03")]))))]
		UNSPEC_KMMWU)
	      (const_int 15)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "@
   kmmwb2.u\t%0, %1, %2
   kmmwt2.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_expand "kmmwb64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmw64_round (operands[0], operands[1], operands[2],
			       GEN_INT (0), GEN_INT (2)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmwt64_round"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmw64_round (operands[0], operands[1], operands[2],
			       GEN_INT (1), GEN_INT (3)));
  DONE;
}
[(set_attr "type" "simd")])

;; KMSDA, KMSXDA
(define_insn "kmsda"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_minus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_minus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 1)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 0)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmsda\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmsda64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_minus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_minus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 0) (const_int 2)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmsda\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmsxda"
  [(set (match_operand:SI 0 "register_operand"                           "=r")
	(ss_minus:SI
	  (match_operand:SI 1 "register_operand"                         " 0")
	  (ss_minus:SI
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 2 "register_operand" " r")
				(parallel [(const_int 1)])))
	      (sign_extend:SI (vec_select:HI
				(match_operand:V2HI 3 "register_operand" " r")
				(parallel [(const_int 0)]))))
	    (mult:SI
	      (sign_extend:SI (vec_select:HI
				(match_dup 2)
				(parallel [(const_int 0)])))
	      (sign_extend:SI (vec_select:HI
				(match_dup 3)
				(parallel [(const_int 1)])))))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmsxda\t%0, %2, %3"
  [(set_attr "type" "simd")])

(define_insn "kmsxda64"
  [(set (match_operand:V2SI 0 "register_operand"                         "=r")
	(ss_minus:V2SI
	  (match_operand:V2SI 1 "register_operand"                       " 0")
	  (ss_minus:V2SI
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 2 "register_operand" " r")
				(parallel [(const_int 1) (const_int 3)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_operand:V4HI 3 "register_operand" " r")
				(parallel [(const_int 0) (const_int 2)]))))
	    (mult:V2SI
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 2)
				(parallel [(const_int 0) (const_int 2)])))
	      (sign_extend:V2SI (vec_select:V2HI
				(match_dup 3)
				(parallel [(const_int 1) (const_int 3)])))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmsxda\t%0, %2, %3"
  [(set_attr "type" "simd")])

;; KMSR64
(define_insn "kmsr64"
  [(set (match_operand:DI 0 "register_operand"       "=r")
	(ss_minus:DI
	  (match_operand:DI 1 "register_operand"     " 0")
	  (mult:DI
	    (sign_extend:DI
	      (match_operand:SI 2 "register_operand" " r"))
	    (sign_extend:DI
	      (match_operand:SI 3 "register_operand" " r")))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kmsr64\t%0, %2, %3"
  [(set_attr "type"   "dsp64")
   (set_attr "mode"   "DI")])

(define_insn "vkmsr64"
  [(set (match_operand:DI 0 "register_operand"             "=r")
	(ss_minus:DI
	  (minus:DI
	  (match_operand:DI 1 "register_operand"    " 0")
	    (mult:DI
	      (sign_extend:DI
		(vec_select:SI
		  (match_operand:V2SI 2 "register_operand" " r")
		  (parallel [(const_int 0)])))
	      (sign_extend:DI
		(vec_select:SI
		  (match_operand:V2SI 3 "register_operand" " r")
		  (parallel [(const_int 0)])))))
	    (mult:DI
	      (sign_extend:DI
		(vec_select:SI (match_dup 2) (parallel [(const_int 1)])))
	      (sign_extend:DI
		(vec_select:SI (match_dup 3) (parallel [(const_int 1)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kmsr64\t%0, %2, %3"
  [(set_attr "type"  "dsp64")
   (set_attr "mode"  "DI")])

(define_expand "kmmwb64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmw64 (operands[0], operands[1], operands[2],
			  GEN_INT (0), GEN_INT (2)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmwt64"
  [(match_operand:V2SI 0 "register_operand" "")
   (match_operand:V2SI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kmmw64 (operands[0], operands[1], operands[2],
			 GEN_INT (1), GEN_INT (3)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmw64"
  [(set (match_operand:V2SI 0 "register_operand"                       "=r,    r")
	(vec_concat:V2SI
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI [(mult:DI
		(sign_extend:DI
		  (vec_select:SI
		    (match_operand:V2SI 1 "register_operand"           "  r,   r")
		      (parallel [(const_int 0)])))
		(sign_extend:DI
		  (vec_select:HI
		    (match_operand:V4HI 2 "register_operand"           "  r,   r")
		      (parallel [(match_operand:SI 3 "imm_0_1_operand"   "C00, C01")]))))]
	      UNSPEC_KMMW)
	      (const_int 15)))
	  (truncate:SI
	    (lshiftrt:DI
	      (unspec:DI [(mult:DI
		(sign_extend:DI
		  (vec_select:SI
		    (match_dup 1)
		      (parallel [(const_int 1)])))
		(sign_extend:DI
		  (vec_select:HI
		    (match_dup 2)
		      (parallel [(match_operand:SI 4 "imm_2_3_operand"   "C02, C03")]))))]
	      UNSPEC_KMMW)
	      (const_int 15)))))]
  "TARGET_ZPN && TARGET_64BIT"
  "@
   kmmwb2\t%0, %1, %2
   kmmwt2\t%0, %1, %2"
[(set_attr "type" "simd")])

(define_expand "kmmwb2"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmw2_internal (operands[0], operands[1], operands[2], GEN_INT (0)));
  DONE;
}
[(set_attr "type" "simd")])

(define_expand "kmmwt2"
  [(match_operand:SI 0 "register_operand" "")
   (match_operand:SI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")]
  "TARGET_ZPN && !TARGET_64BIT"
{
  emit_insn (gen_kmmw2_internal (operands[0], operands[1], operands[2], GEN_INT (1)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kmmw2_internal"
  [(set (match_operand:SI 0 "register_operand"                       "=   r,    r")
	(truncate:SI
	  (lshiftrt:DI
	    (unspec:DI [(mult:DI
	      (sign_extend:DI (match_operand:SI 1 "register_operand" "    r,    r"))
	      (sign_extend:DI
		(vec_select:HI
		  (match_operand:V2HI 2 "register_operand"           "    r,    r")
		  (parallel [(match_operand:SI 3 "imm_0_1_operand"   "  C00,  C01")]))))]
	    UNSPEC_KMMW)
	    (const_int 15))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "@
   kmmwb2\t%0, %1, %2
   kmmwt2\t%0, %1, %2"
  [(set_attr "type" "simd")])

;; KSLLW
(define_insn "ksll"
  [(set (match_operand:SI 0 "register_operand"               "=   r, r")
	(ss_ashift:SI (match_operand:SI 1 "register_operand" "    r, r")
		      (match_operand:SI 2 "rimm5u_operand"   " Iu05, r")))]
  "TARGET_ZPN"
  "@
   kslliw\t%0, %1, %2
   ksllw\t%0, %1, %2"
  [(set_attr "type"  "dsp")
   (set_attr "mode"  "SI")])

;; KSLL8
(define_insn "kslli8<VQI:mode><X:mode>"
  [(set (match_operand:VQI 0 "register_operand"                "=  r, r")
	(ss_ashift:VQI (match_operand:VQI 1 "register_operand" "   r, r")
		       (match_operand:X 2   "rimm3u_operand"   " u03, r")))]
  "TARGET_ZPN"
  "@
   kslli8\t%0, %1, %2
   ksll8\t%0, %1, %2"
  [(set_attr "type"  "simd, simd")
   (set_attr "mode"  "<VQI:MODE>, <VQI:MODE>")])

;; KSLL16
(define_insn "kslli16<mode>"
  [(set (match_operand:VHI 0 "register_operand"                "=  r, r")
	(ss_ashift:VHI (match_operand:VHI 1 "register_operand" "   r, r")
		       (match_operand:SI 2  "rimm4u_operand"   " u04, r")))]
  "TARGET_ZPN"
  "@
   kslli16\t%0, %1, %2
   ksll16\t%0, %1, %2"
  [(set_attr "type"  "simd, simd")
   (set_attr "mode"  "<MODE>, <MODE>")])

;; KSLL32, KSLLI32
(define_insn "ksll32"
  [(set (match_operand:V2SI 0 "register_operand"                 "=  r, r")
	(ss_ashift:V2SI (match_operand:V2SI 1 "register_operand" "   r, r")
			(match_operand:SI 2   "rimm5u_operand"   " u05, r")))]
  "TARGET_ZPN && TARGET_64BIT"
  "@
   kslli32\t%0, %1, %2
   ksll32\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V2SI")])

;; KSLRA 8|16|32
(define_expand "kslra<VECI:mode>"
  [(match_operand:VECI 0 "register_operand" "")
   (match_operand:VECI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")]
   "TARGET_ZPN"
{
  unsigned int extract_bits;
  switch (<VECI:bits>)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslra<VECI:mode>_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kslra<VECI:mode>_internal"
  [(set (match_operand:VECI 0 "register_operand"                  "=r")
	(if_then_else:VECI
	  (lt:SI
		(sign_extract:SI
			(match_operand:SI 2 "register_operand" " r")
			(match_operand:SI 3 "imm3u_operand"  " I")
			(const_int 0))
		(const_int 0))
	  (ashiftrt:VECI (match_operand:VECI 1 "register_operand" " r")
			 (neg:SI (sign_extract:SI (match_dup 2) (match_dup 3) (const_int 0))))
	  (ss_ashift:VECI (match_dup 1)
			  (sign_extract:SI (match_dup 2) (match_dup 3) (const_int 0)))))]
  "TARGET_ZPN"
  "kslra<VECI:bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<VECI:MODE>")])

;; kslra32.u kslrav2sidi_round
(define_expand "kslra<VECI:mode>_round"
  [(match_operand:VECI 0 "register_operand" "")
   (match_operand:VECI 1 "register_operand" "")
   (match_operand:SI 2 "register_operand" "")]
   "TARGET_ZPN"
{
  unsigned int extract_bits;
  switch (<VECI:bits>)
  {
    case 8: extract_bits = 4; break;
    case 16: extract_bits = 5; break;
    case 32: extract_bits = 6; break;
    default: gcc_unreachable();
  }
  emit_insn (gen_kslra<VECI:mode>_round_internal (operands[0],
    operands[1], operands[2], GEN_INT (extract_bits)));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kslra<VECI:mode>_round_internal"
  [(set (match_operand:VECI 0 "register_operand"                  "=r")
	(if_then_else:VECI
	  (lt:SI
		(sign_extract:SI
			(match_operand:SI 2 "register_operand" " r")
			(match_operand:SI 3 "imm3u_operand"  " I")
			(const_int 0))
		(const_int 0))
	  (unspec:VECI [(ashiftrt:VECI (match_operand:VECI 1 "register_operand" " r")
				       (neg:SI (sign_extract:SI (match_dup 2) (match_dup 3) (const_int 0))))]
		        UNSPEC_ROUND)
	  (ss_ashift:VECI (match_dup 1)
			  (sign_extract:SI (match_dup 2) (match_dup 3) (const_int 0)))))]
  "TARGET_ZPN"
  "kslra<VECI:bits>.u\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<VECI:MODE>")])

;; kslraw
(define_insn "kslraw"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		    (match_operand:SI 2 "register_operand" "r")] UNSPEC_KSLRAW))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kslraw\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

(define_insn "kslraw64"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	  (unspec:SI [(match_operand:SI 1 "register_operand" "r")
		      (match_operand:SI 2 "register_operand" "r")] UNSPEC_KSLRAW)))]
  "TARGET_ZPN && TARGET_64BIT"
  "kslraw\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "DI")])

(define_insn "kslrawu"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(unspec:SI [(match_operand:SI 1 "register_operand" "r")
		    (match_operand:SI 2 "register_operand" "r")] UNSPEC_KSLRAWU))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kslraw.u\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

(define_insn "kslrawu64"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	  (unspec:SI [(match_operand:SI 1 "register_operand" "r")
		      (match_operand:SI 2 "register_operand" "r")] UNSPEC_KSLRAWU)))]
  "TARGET_ZPN && TARGET_64BIT"
  "kslraw.u\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "DI")])

;; KSTAS16|32, KSTSA16|32
(define_expand "kstas<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kstas<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kstas<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (ss_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 0)]))))
	  (vec_duplicate:VSHI
	    (ss_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 1)]))
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 1)]))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "kstas<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

;; rv64 kstas16
(define_expand "kstas16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kstas16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (ss_minus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
					(parallel [(const_int 0)]))
			 (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
					(parallel [(const_int 0)])))
	    (ss_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 1)]))))
	  (vec_concat:V2HI
	    (ss_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 2)])))
	    (ss_plus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kstas16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "kstsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_kstsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kstsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"         "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (ss_minus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_operand:VSHI 1 "register_operand" " r")
		(parallel [(const_int 0)]))
	      (vec_select:<VNHALF>
		(match_operand:VSHI 2 "register_operand" " r")
		(parallel [(const_int 0)]))))
	  (vec_duplicate:VSHI
	    (ss_plus:<VNHALF>
	      (vec_select:<VNHALF>
		(match_dup 1)
		(parallel [(const_int 1)]))
	      (vec_select:<VNHALF>
		(match_dup 2)
		(parallel [(const_int 1)]))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "kstsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "kstsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_kstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "kstsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (ss_plus:HI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
				       (parallel [(const_int 0)]))
			(vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
				       (parallel [(const_int 0)])))
	    (ss_minus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 1)]))
			 (vec_select:HI (match_dup 2) (parallel [(const_int 1)]))))
	  (vec_concat:V2HI
	    (ss_plus:HI (vec_select:HI (match_dup 1) (parallel [(const_int 2)]))
			(vec_select:HI (match_dup 2) (parallel [(const_int 2)])))
	    (ss_minus:HI  (vec_select:HI (match_dup 1) (parallel [(const_int 3)]))
			  (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kstsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; KWMMUL[.u]
(define_insn "kwmmul"
  [(set (match_operand:SI 0 "register_operand"                       "=r")
	(truncate:SI
	  (lshiftrt:DI
	    (ss_mult:DI
	      (mult:DI (sign_extend:DI (match_operand:SI 1 "register_operand" " r")) (const_int 2))
	      (mult:DI (sign_extend:DI (match_operand:SI 2 "register_operand" " r")) (const_int 2)))
	    (const_int 32))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kwmmul\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kwmmul_64"
  [(set (match_operand:V2SI 0 "register_operand"                       "=r")
	(truncate:V2SI
	  (lshiftrt:V2DI
	    (ss_mult:V2DI
	      (mult:V2DI (sign_extend:V2DI (match_operand:V2SI 1 "register_operand" " r")) (const_int 2))
	      (mult:V2DI (sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r")) (const_int 2)))
	    (const_int 32))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kwmmul\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kwmmul_round"
  [(set (match_operand:SI 0 "register_operand"                       "=r")
	(truncate:SI
	  (lshiftrt:DI
	    (unspec:DI [
	      (ss_mult:DI
		(mult:DI (sign_extend:DI (match_operand:SI 1 "register_operand" " r")) (const_int 2))
		(mult:DI (sign_extend:DI (match_operand:SI 2 "register_operand" " r")) (const_int 2)))]
	      UNSPEC_ROUND)
	    (const_int 32))))]
  "TARGET_ZPN && !TARGET_64BIT"
  "kwmmul.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

(define_insn "kwmmul64_round"
  [(set (match_operand:V2SI 0 "register_operand"                       "=r")
	(truncate:V2SI
	  (lshiftrt:V2DI
	    (unspec:V2DI [
	      (ss_mult:V2DI
		(mult:V2DI (sign_extend:V2DI (match_operand:V2SI 1 "register_operand" " r")) (const_int 2))
		(mult:V2DI (sign_extend:V2DI (match_operand:V2SI 2 "register_operand" " r")) (const_int 2)))]
	      UNSPEC_ROUND)
	    (const_int 32))))]
  "TARGET_ZPN && TARGET_64BIT"
  "kwmmul.u\t%0, %1, %2"
  [(set_attr "type" "simd")])

;; MADDR32, MSUBR32
(define_insn "maddr32"
  [(set (match_operand:SI 0 "register_operand"                   "=r")
	(plus:SI (mult:SI (match_operand:SI 1 "register_operand" " r")
			  (match_operand:SI 2 "register_operand" " r"))
		 (match_operand:SI 3 "register_operand"          " 0")))]
  "TARGET_ZPN"
  "maddr32\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "SI")])

(define_insn "msubr32"
  [(set (match_operand:SI 0 "register_operand"                    "=r")
	(minus:SI (match_operand:SI 3 "register_operand"          " 0")
		  (mult:SI (match_operand:SI 1 "register_operand" " r")
			   (match_operand:SI 2 "register_operand" " r"))))]
  "TARGET_ZPN"
  "msubr32\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "SI")])

;; MULR64, MULSR64
(define_insn "rvp_umulsidi3"
  [(set (match_operand:DI 0 "register_operand"                          "=r")
	(mult:DI (zero_extend:DI (match_operand:SI 1 "register_operand" " r"))
		 (zero_extend:DI (match_operand:SI 2 "register_operand" " r"))))]
  "TARGET_ZPSF"
  "mulr64\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "DI")])

(define_insn "rvp_mulsidi3"
  [(set (match_operand:DI 0 "register_operand"                          "=r")
	(mult:DI (sign_extend:DI (match_operand:SI 1 "register_operand" " r"))
		 (sign_extend:DI (match_operand:SI 2 "register_operand" " r"))))]
  "TARGET_ZPSF"
  "mulsr64\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode"   "DI")])

;; MAX, MIN
(define_insn "smaxsi3"
  [(set (match_operand:SI 0 "register_operand"          "=r")
	(smax:SI (match_operand:SI 1 "register_operand" " r")
		 (match_operand:SI 2 "register_operand" " r")))]
  "TARGET_ZBPBO"
  "max\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

(define_insn "sminsi3"
  [(set (match_operand:SI 0 "register_operand"          "=r")
	(smin:SI (match_operand:SI 1 "register_operand" " r")
		 (match_operand:SI 2 "register_operand" " r")))]
  "TARGET_ZBPBO"
  "min\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "SI")])

;; PBSAD, PBSADA
(define_insn "pbsad<mode>"
  [(set (match_operand:GPR 0 "register_operand" "=r")
	(unspec:GPR [(match_operand:GPR 1 "register_operand" "r")
		     (match_operand:GPR 2 "register_operand" "r")] UNSPEC_PBSAD))]
  "TARGET_ZPN"
  "pbsad\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "<MODE>")])

(define_insn "pbsada<mode>"
  [(set (match_operand:GPR 0 "register_operand" "=r")
	(unspec:GPR [(match_operand:GPR 1 "register_operand" "0")
		     (match_operand:GPR 2 "register_operand" "r")
		     (match_operand:GPR 3 "register_operand" "r")] UNSPEC_PBSADA))]
  "TARGET_ZPN"
  "pbsada\t%0, %2, %3"
  [(set_attr "type" "dsp")
   (set_attr "mode" "<MODE>")])

;; PKBB[16|32], PKBT[16|32], PKTT[16|32], PKTB[16|32]
(define_insn "vec_merge<mode>"
  [(set (match_operand:VSHI 0 "register_operand"               "= r,   r,   r,   r,   r,   r,   r,   r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (vec_select:<VNHALF>
	      (match_operand:VSHI 1 "register_operand"         "  r,   r,   r,   r,   r,   r,   r,   r")
	      (parallel [(match_operand:SI 4 "imm_0_1_operand" "C00, C00, C01, C01, C00, C00, C01, C01")])))
	  (vec_duplicate:VSHI
	    (vec_select:<VNHALF>
	      (match_operand:VSHI 2 "register_operand"         "  r,   r,   r,   r,   r,   r,   r,   r")
	      (parallel [(match_operand:SI 5 "imm_0_1_operand" "C00, C01, C01, C00, C00, C01, C01, C00")])))
	  (match_operand:SI 3 "imm_1_2_operand"                "C01, C01, C01, C01, C02, C02, C02, C02")))]
  "TARGET_ZPN"
  {
    const char *pats[] = {
		TARGET_ZBPBO ? "pack\t%0, %2, %1" : "pkbb<bits>\t%0, %2, %1",
        "pktb<bits>\t%0, %2, %1",
        TARGET_ZBPBO ? "packu\t%0, %2, %1" : "pktt<bits>\t%0, %2, %1",
        "pkbt<bits>\t%0, %2, %1",
        TARGET_ZBPBO ? "pack\t%0, %1, %2" : "pkbb<bits>\t%0, %1, %2",
        "pkbt<bits>\t%0, %1, %2",
        TARGET_ZBPBO ? "packu\t%0, %1, %2" : "pktt<bits>\t%0, %1, %2",
        "pktb<bits>\t%0, %1, %2" };
    return pats[which_alternative];
  }
  [(set_attr "type" "dsp")
   (set_attr "mode"  "<MODE>")])

(define_expand "pkbb<mode>"
  [(match_operand:VSHI 0 "register_operand")
   (match_operand:VSHI 1 "register_operand")
   (match_operand:VSHI 2 "register_operand")]
  "TARGET_ZPN"
{
  emit_insn (gen_vec_merge<mode> (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (0)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "pkbt<mode>"
  [(match_operand:VSHI 0 "register_operand")
   (match_operand:VSHI 1 "register_operand")
   (match_operand:VSHI 2 "register_operand")]
  "TARGET_ZPN"
{
  emit_insn (gen_vec_merge<mode> (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (0), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "pktt<mode>"
  [(match_operand:VSHI 0 "register_operand")
   (match_operand:VSHI 1 "register_operand")
   (match_operand:VSHI 2 "register_operand")]
  "TARGET_ZPN"
{
  emit_insn (gen_vec_merge<mode> (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp")])

(define_expand "pktb<mode>"
  [(match_operand:VSHI 0 "register_operand")
   (match_operand:VSHI 1 "register_operand")
   (match_operand:VSHI 2 "register_operand")]
  "TARGET_ZPN"
{
  emit_insn (gen_vec_merge<mode> (operands[0], operands[1], operands[2],
				  GEN_INT (2), GEN_INT (1), GEN_INT (0)));
  DONE;
}
[(set_attr "type" "dsp")])

;; pkbb16 rv64p
(define_expand "pkbb64"
  [(match_operand:V4HI 0 "register_operand")
   (match_operand:V4HI 1 "register_operand")
   (match_operand:V4HI 2 "register_operand")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_vec_pkbb64 (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_pkbb64"
  [(set (match_operand:V4HI 0 "register_operand" "=r")
	(vec_select:V4HI
	 (vec_concat:V8HI (match_operand:V4HI 1 "register_operand" "r")
			  (match_operand:V4HI 2 "register_operand" "r"))
	 (parallel [(const_int 0) (const_int 4)
		    (const_int 2) (const_int 6)])))]
  "TARGET_ZPN && TARGET_64BIT"
  "pkbb16\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "V4HI")])

(define_expand "pkbt64"
  [(match_operand:V4HI 0 "register_operand")
   (match_operand:V4HI 1 "register_operand")
   (match_operand:V4HI 2 "register_operand")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_vec_pkbt64 (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_pkbt64"
  [(set (match_operand:V4HI 0 "register_operand" "=r")
	(vec_select:V4HI
	 (vec_concat:V8HI (match_operand:V4HI 1 "register_operand" "r")
			  (match_operand:V4HI 2 "register_operand" "r"))
	 (parallel [(const_int 0) (const_int 5)
		    (const_int 2) (const_int 7)])))]
  "TARGET_ZPN && TARGET_64BIT"
  "pkbt16\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "V4HI")])

(define_expand "pktt64"
  [(match_operand:V4HI 0 "register_operand")
   (match_operand:V4HI 1 "register_operand")
   (match_operand:V4HI 2 "register_operand")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_vec_pktt64 (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_pktt64"
  [(set (match_operand:V4HI 0 "register_operand" "=r")
	(vec_select:V4HI
	 (vec_concat:V8HI (match_operand:V4HI 1 "register_operand" "r")
			  (match_operand:V4HI 2 "register_operand" "r"))
	 (parallel [(const_int 1) (const_int 5)
		    (const_int 3) (const_int 7)])))]
  "TARGET_ZPN && TARGET_64BIT"
  "pktt16\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "V4HI")])

(define_expand "pktb64"
  [(match_operand:V4HI 0 "register_operand")
   (match_operand:V4HI 1 "register_operand")
   (match_operand:V4HI 2 "register_operand")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_vec_pktb64 (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "dsp")])

(define_insn "vec_pktb64"
  [(set (match_operand:V4HI 0 "register_operand" "=r")
	(vec_select:V4HI
	 (vec_concat:V8HI (match_operand:V4HI 1 "register_operand" "r")
			  (match_operand:V4HI 2 "register_operand" "r"))
	 (parallel [(const_int 1) (const_int 4)
		    (const_int 3) (const_int 6)])))]
  "TARGET_ZPN && TARGET_64BIT"
  "pktb16\t%0, %1, %2"
  [(set_attr "type" "dsp")
   (set_attr "mode" "V4HI")])

;; [U]RADD[8|16|32|64|W], [U]RSUB[8|16|32|64|W]
(define_insn "radd<mode>3"
  [(set (match_operand:VECI 0 "register_operand" "=r")
	(truncate:VECI
	  (ashiftrt:<VEXT>
	    (plus:<VEXT> (sign_extend:<VEXT> (match_operand:VECI 1 "register_operand" " r"))
			 (sign_extend:<VEXT> (match_operand:VECI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "radd<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; radd64
(define_insn "radddi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(truncate:DI
	  (ashiftrt:TI
	    (plus:TI (sign_extend:TI (match_operand:DI 1 "register_operand" " r"))
		     (sign_extend:TI (match_operand:DI 2 "register_operand" " r")))
	  (const_int 1))))]
  "TARGET_ZPSF"
  "radd64\t%0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

(define_insn "uradd<mode>3"
  [(set (match_operand:VECI 0 "register_operand" "=r")
	(truncate:VECI
	  (lshiftrt:<VEXT>
	    (plus:<VEXT> (zero_extend:<VEXT> (match_operand:VECI 1 "register_operand" " r"))
			 (zero_extend:<VEXT> (match_operand:VECI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "uradd<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; uradd64
(define_insn "uradddi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(truncate:DI
	  (lshiftrt:TI
	    (plus:TI (zero_extend:TI (match_operand:DI 1 "register_operand" " r"))
		     (zero_extend:TI (match_operand:DI 2 "register_operand" " r")))
	  (const_int 1))))]
  "TARGET_ZPSF"
  "uradd64\t%0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

(define_insn "rsub<mode>3"
  [(set (match_operand:VECI 0 "register_operand"                                   "=r")
	(truncate:VECI
	  (ashiftrt:<VEXT>
	    (minus:<VEXT> (sign_extend:<VEXT> (match_operand:VECI 1 "register_operand" " r"))
			  (sign_extend:<VEXT> (match_operand:VECI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "rsub<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "ursub<mode>3"
  [(set (match_operand:VECI 0 "register_operand"                                   "=r")
	(truncate:VECI
	  (ashiftrt:<VEXT>
	    (minus:<VEXT> (zero_extend:<VEXT> (match_operand:VECI 1 "register_operand" " r"))
			  (zero_extend:<VEXT> (match_operand:VECI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "ursub<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; rsub64
(define_insn "rsubdi3"
  [(set (match_operand:DI 0 "register_operand"                   "=r")
	(truncate:DI
	  (ashiftrt:TI
	    (minus:TI (sign_extend:TI (match_operand:DI 1 "register_operand" " r"))
		      (sign_extend:TI (match_operand:DI 2 "register_operand" " r")))
	  (const_int 1))))]
  "TARGET_ZPSF"
  "rsub64\t%0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

;; ursub64
(define_insn "ursubdi3"
  [(set (match_operand:DI 0 "register_operand"                   "=r")
	(truncate:DI
	  (lshiftrt:TI
	    (minus:TI (zero_extend:TI (match_operand:DI 1 "register_operand" " r"))
		      (zero_extend:TI (match_operand:DI 2 "register_operand" " r")))
	  (const_int 1))))]
  "TARGET_ZPSF"
  "ursub64\t%0, %1, %2"
  [(set_attr "type" "dsp64")
   (set_attr "mode" "DI")])

;; raddw and rsubw.
(define_insn "r<opcode>si3"
  [(set (match_operand:SI 0 "register_operand"                       "=r")
	(truncate:SI
	  (ashiftrt:DI
	    (plus_minus:DI
	      (sign_extend:DI (match_operand:SI 1 "register_operand" " r"))
	      (sign_extend:DI (match_operand:SI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "r<opcode>w\t%0, %1, %2"
  [(set_attr "type" "dsp")])

;; uraddw and ursubw.
(define_insn "ur<opcode>si3"
  [(set (match_operand:SI 0 "register_operand"                       "=r")
	(truncate:SI
	  (lshiftrt:DI
	    (plus_minus:DI
	      (zero_extend:DI (match_operand:SI 1 "register_operand" " r"))
	      (zero_extend:DI (match_operand:SI 2 "register_operand" " r")))
	    (const_int 1))))]
  "TARGET_ZPN"
  "ur<opcode>w\t%0, %1, %2"
  [(set_attr "type" "dsp")])

;; RDOV
(define_insn "rdov<X:mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(unspec_volatile:X [(const_int 0)] UNSPEC_RDOV))]
  "TARGET_ZPN"
  "csrr \t%0, vxsat, zero"
  [(set_attr "type" "dsp")
   (set_attr "mode" "<MODE>")])

;; RSTAS[16|32], RSTSA[16|32]
(define_expand "rstas<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_rstas<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rstas<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(minus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 0)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 1)])))
		  (sign_extend:SI
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 1)))]
  "TARGET_ZPN"
  "rstas<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "rstas16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_rstas16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rstas16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 0)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 1)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "rstas16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

(define_expand "rstsa<mode>"
  [(match_operand:VSHI 0 "register_operand" "")
   (match_operand:VSHI 1 "register_operand" "")
   (match_operand:VSHI 2 "register_operand" "")]
  "TARGET_ZPN"
{
  emit_insn (gen_rstsa<mode>_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rstsa<mode>_le"
  [(set (match_operand:VSHI 0 "register_operand"           "=r")
	(vec_merge:VSHI
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
	        (minus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 1 "register_operand" " r")
		      (parallel [(const_int 0)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_operand:VSHI 2 "register_operand" " r")
		      (parallel [(const_int 0)]))))
		(const_int 1))))
	  (vec_duplicate:VSHI
	    (truncate:<VNHALF>
	      (ashiftrt:<VSH_EXT>
		(plus:<VSH_EXT>
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 1)
		      (parallel [(const_int 1)])))
		  (sign_extend:<VSH_EXT>
		    (vec_select:<VNHALF>
		      (match_dup 2)
		      (parallel [(const_int 1)]))))
		(const_int 1))))
	  (const_int 2)))]
  "TARGET_ZPN"
  "rstsa<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")]
)

(define_expand "rstsa16_64"
  [(match_operand:V4HI 0 "register_operand" "")
   (match_operand:V4HI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")]
  "TARGET_ZPN && TARGET_64BIT"
{
  emit_insn (gen_rstsa16_64_le (operands[0], operands[1], operands[2]));
  DONE;
}
[(set_attr "type" "simd")])

(define_insn "rstsa16_64_le"
  [(set (match_operand:V4HI 0 "register_operand"         "=r")
	(vec_concat:V4HI
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 1 "register_operand" " r")
						 (parallel [(const_int 0)])))
		  (sign_extend:SI (vec_select:HI (match_operand:V4HI 2 "register_operand" " r")
						  (parallel [(const_int 0)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 1)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 1)]))))
		(const_int 1))))
	  (vec_concat:V2HI
	    (truncate:HI
	      (ashiftrt:SI
		(plus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 2)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 2)]))))
		(const_int 1)))
	    (truncate:HI
	      (ashiftrt:SI
		(minus:SI
		  (sign_extend:SI (vec_select:HI (match_dup 1) (parallel [(const_int 3)])))
		  (sign_extend:SI (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))
		(const_int 1))))))]
  "TARGET_ZPN && TARGET_64BIT"
  "rstsa16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "V4HI")])

;; SCLIP8, SCLIP16
(define_insn "sclip8<mode>"
  [(set (match_operand:VQI 0 "register_operand"              "=  r")
	(unspec:VQI [(match_operand:VQI 1 "register_operand" "   r")
		      (match_operand:SI 2 "imm3u_operand"    " u03")]
		     UNSPEC_CLIPS))]
  "TARGET_ZPN"
  "sclip8\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "sclip16<mode>"
  [(set (match_operand:VHI 0 "register_operand"              "=   r")
	(unspec:VHI [(match_operand:VHI 1 "register_operand" "    r")
		     (match_operand:SI 2 "imm4u_operand"     " u04")]
		     UNSPEC_CLIPS))]
  "TARGET_ZPN"
  "sclip16\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

(define_insn "sclip32<VD_SI:mode><X:mode>"
  [(set (match_operand:VD_SI 0 "register_operand" "=r")
	(unspec:VD_SI [(match_operand:VD_SI 1 "register_operand" "r")
		       (match_operand:X 2 "immediate_operand" "i")] UNSPEC_CLIPS_OV))]
  "TARGET_ZPN"
  "sclip32\t%0, %1, %2"
  [(set_attr "type"   "dsp")
   (set_attr "mode" "<VD_SI:MODE>")])

;; SCMPLE8, SCMPLE16
(define_insn "scmple<mode>"
  [(set (match_operand:VQIHI 0 "register_operand"                          "=r")
	(unspec:VQIHI [(le:VQIHI (match_operand:VQIHI 1 "register_operand" " r")
				 (match_operand:VQIHI 2 "register_operand" " r"))]
		       UNSPEC_VEC_COMPARE))]
  "TARGET_ZPN"
  "scmple<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; SCMPLT8, SCMPLT16
(define_insn "scmplt<mode>"
  [(set (match_operand:VQIHI 0 "register_operand"                          "=r")
	(unspec:VQIHI [(lt:VQIHI (match_operand:VQIHI 1 "register_operand" " r")
				 (match_operand:VQIHI 2 "register_operand" " r"))]
		       UNSPEC_VEC_COMPARE))]
  "TARGET_ZPN"
  "scmplt<bits>\t%0, %1, %2"
  [(set_attr "type" "simd")
   (set_attr "mode" "<MODE>")])

;; SMAL
(define_insn "smal"
  [(set (match_operand:DI 0 "register_operand"             "=r")
	(plus:DI (match_operand:DI 1 "register_operand"    " r")
	  (sign_extend:DI
	    (mult:SI
	      (sign_extend:SI
		(vec_select:HI
		  (match_operand:V2HI 2 "register_operand" " r")
		  (parallel [(const_int 0)])))
	      (sign_extend:SI
		(vec_select:HI
		  (match_dup 2)
		  (parallel [(const_int 1)])))))))]
  "TARGET_ZPSF && !TARGET_64BIT"
  "smal\t%0, %1, %2"
  [(set_attr "type" "psimd")
   (set_attr "mode" "DI")])

(define_insn "smal_64"
  [(set (match_operand:DI 0 "register_operand"             "=r")
	(plus:DI (match_operand:DI 1 "register_operand"    " r")
	  (plus:DI
	    (sign_extend:DI
	      (mult:SI
		(sign_extend:SI
		  (vec_select:HI
		    (match_operand:V4HI 2 "register_operand" " r")
		    (parallel [(const_int 0)])))
		(sign_extend:SI
		  (vec_select:HI (match_dup 2) (parallel [(const_int 1)])))))
	    (sign_extend:DI
	      (mult:SI
		(sign_extend:SI
		  (vec_select:HI (match_dup 2) (parallel [(const_int 2)])))
		(sign_extend:SI
		  (vec_select:HI (match_dup 2) (parallel [(const_int 3)]))))))))]
  "TARGET_ZPSF && TARGET_64BIT"
  "smal\t%0, %1, %2"
  [(set_attr "type" "psimd")
   (set_attr "mode" "DI")])

;; SMALBB, SMALBT, SMALTT
(define_expand "smalbb"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPSF && !TARGET_64BIT"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (0), GEN_INT (0)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_expand "smalbt"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPSF && !TARGET_64BIT"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (0), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_expand "smaltt"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V2HI 2 "register_operand" "")
   (match_operand:V2HI 3 "register_operand" "")]
  "TARGET_ZPSF && !TARGET_64BIT"
{
  emit_insn (gen_smaddhidi (operands[0], operands[2],
			    operands[3], operands[1],
			    GEN_INT (1), GEN_INT (1)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_insn "smaddhidi"
  [(set (match_operand:DI 0 "register_operand"                   "=  r,   r,   r,   r")
	(plus:DI
	  (match_operand:DI 3 "register_operand"                 "   0,   0,   0,   0")
	  (mult:DI
	    (sign_extend:DI
	      (vec_select:HI
		(match_operand:V2HI 1 "register_operand"         "   r,   r,   r,   r")
		(parallel [(match_operand:SI 4 "imm_0_1_operand" " C00, C00, C01, C01")])))
	    (sign_extend:DI
	      (vec_select:HI
		(match_operand:V2HI 2 "register_operand"         "   r,   r,   r,   r")
		(parallel [(match_operand:SI 5 "imm_0_1_operand" " C00, C01, C01, C00")]))))))]
  "TARGET_ZPSF && !TARGET_64BIT"
  "@
   smalbb\t%0, %1, %2
   smalbt\t%0, %1, %2
   smaltt\t%0, %1, %2
   smalbt\t%0, %2, %1"
[(set_attr "type" "dsp64")])

;; 64 Bit
(define_expand "smalbb64"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPSF && TARGET_64BIT"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (0), GEN_INT (0),
			      GEN_INT (2), GEN_INT (2)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_expand "smalbt64"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPSF && TARGET_64BIT"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (0), GEN_INT (1),
			      GEN_INT (2), GEN_INT (3)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_expand "smaltt64"
  [(match_operand:DI 0 "register_operand" "")
   (match_operand:DI 1 "register_operand" "")
   (match_operand:V4HI 2 "register_operand" "")
   (match_operand:V4HI 3 "register_operand" "")]
  "TARGET_ZPSF && TARGET_64BIT"
{
  emit_insn (gen_smaddhidi64 (operands[0], operands[2],
			      operands[3], operands[1],
			      GEN_INT (1), GEN_INT (1),
			      GEN_INT (3), GEN_INT (3)));
  DONE;
}
[(set_attr "type" "dsp64")])

(define_insn "smaddhidi64"
  [(set (match_operand:DI 0 "register_operand"                   "=  r,   r,   r,   r")
	(plus:DI
	  (match_operand:DI 3 "register_operand"                 "   0,   0,   0,   0")
	  (plus:DI
	    (mult:DI
	      (sign_extend:DI
		(vec_select:HI
		  (match_operand:V4HI 1 "register_operand"         "   r,   r,   r,   r")
		  (parallel [(match_operand:SI 4 "imm_0_1_operand" " C00, C00, C01, C01")])))
	      (sign_extend:DI
		(vec_select:HI
		  (match_operand:V4HI 2 "register_operand"         "   r,   r,   r,   r")
		  (parallel [(match_operand:SI 5 "imm_0_1_operand" " C00, C01, C01, C00")]))))
	    (mult:DI
	      (sign_extend:DI
		(vec_select:HI
		  (match_dup 1)
		  (parallel [(match_operand:SI 6 "imm_2_3_operand" " C02, C02, C03, C03")])))
	      (sign_extend:DI
		(vec_select:HI
		  (match_dup 2)
		  (parallel [(match_operand:SI 7 "imm_2_3_operand" " C02, C03, C03, C02")])))))))]
  "TARGET_ZPSF && TARGET_64BIT"
  "@
   smalbb\t%0, %1, %2
   smalbt\t%0, %1, %2
   smaltt\t%0, %1, %2
   smalbt\t%0, %2, %1"
  [(set_attr "type" "dsp64")])
