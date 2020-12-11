;; Machine description for RISC-V Bit Manipulation operations.
;; Copyright (C) 2019 Free Software Foundation, Inc.

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

(define_code_iterator bitmanip_bitwise [and ior])

(define_code_iterator any_minmax [smin smax umin umax])

(define_code_iterator clz_ctz_pcnt [clz ctz popcount])

(define_code_attr bitmanip_optab [(smin "smin")
				  (smax "smax")
				  (umin "umin")
				  (umax "umax")
				  (clz "clz")
				  (ctz "ctz")
				  (popcount "popcount")])

(define_code_attr bitmanip_insn [(smin "min")
				 (smax "max")
				 (umin "minu")
				 (umax "maxu")
				 (clz "clz")
				 (ctz "ctz")
				 (popcount "pcnt")])

(define_mode_attr shiftm1 [(SI "const31_operand") (DI "const63_operand")])

(define_insn "<bitmanip_optab>si2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(clz_ctz_pcnt:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_ZBB"
  { return TARGET_64BIT ? "<bitmanip_insn>w\t%0,%1" : "<bitmanip_insn>\t%0,%1"; }
  [(set_attr "type" "bitmanip")])

;; TODO: In theory zero_extend should be OK to combine too, since the output
;;       range is 0 ~ 32, zero_extend or sign_extend will get same result.
(define_insn "*<bitmanip_optab>disi2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	  (clz_ctz_pcnt:SI (match_operand:SI 1 "register_operand" "r"))))]
  "TARGET_64BIT && TARGET_ZBB"
  "<bitmanip_insn>w\t%0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "<bitmanip_optab>di2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(clz_ctz_pcnt:DI (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_ZBB"
  "<bitmanip_insn>\t%0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*<optab>_not<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(bitmanip_bitwise:X (not:X (match_operand:X 1 "register_operand" "r"))
			    (match_operand:X 2 "register_operand" "r")))]
  "TARGET_ZBB || TARGET_ZBP"
  "<insn>n\t%0,%2,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*xor_not<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(not:X (xor:X (match_operand:X 1 "register_operand" "r")
		      (match_operand:X 2 "register_operand" "r"))))]
  "TARGET_ZBB || TARGET_ZBP"
  "xnor\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])
 
;;; ??? pack

(define_insn "*zero_extendhi<GPR:mode>2_bitmanip"
  [(set (match_operand:GPR 0 "register_operand" "=r,r")
	(zero_extend:GPR (match_operand:HI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_ZBB || TARGET_ZBP"
  "@
   zext.h\t%0,%1
   lhu\t%0,%1"
  [(set_attr "type" "bitmanip,load")])

(define_insn "*zero_extendsidi2_bitmanip"
  [(set (match_operand:DI 0 "register_operand" "=r,r")
	(zero_extend:DI (match_operand:SI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBP)"
  "@
   zext.w\t%0,%1,x0
   lwu\t%0,%1"
  [(set_attr "type" "bitmanip,load")])

(define_insn "<bitmanip_optab><mode>3"
  [(set (match_operand:X 0 "register_operand" "=r")
	(any_minmax:X (match_operand:X 1 "register_operand" "r")
		      (match_operand:X 2 "register_operand" "r")))]
  "TARGET_ZBB"
  "<bitmanip_insn>\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbset<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(ior:X (ashift:X (const_int 1)
			 (match_operand:QI 2 "register_operand" "r"))
	       (match_operand:X 1 "register_operand" "r")))]
  "TARGET_ZBS"
  "sbset\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbset<mode>_mask"
  [(set (match_operand:X 0 "register_operand" "=r")
	(ior:X (ashift:X (const_int 1)
			 (subreg:QI
			  (and:X (match_operand:X 2 "register_operand" "r")
				 (match_operand 3 "<X:shiftm1>" "i")) 0))
	       (match_operand:X 1 "register_operand" "r")))]
  "TARGET_ZBS"
  "sbset\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbset<mode>_1"
  [(set (match_operand:X 0 "register_operand" "=r")
	(ashift:X (const_int 1)
		  (match_operand:QI 1 "register_operand" "r")))]
  "TARGET_ZBS"
  "sbset\t%0,x0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbset<mode>_1_mask"
  [(set (match_operand:X 0 "register_operand" "=r")
	(ashift:X (const_int 1)
		  (subreg:QI
		   (and:X (match_operand:X 1 "register_operand" "r")
			  (match_operand 2 "<X:shiftm1>" "i")) 0)))]
  "TARGET_ZBS"
  "sbset\t%0,x0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbseti<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(ior:X (match_operand:X 1 "register_operand" "r")
	       (match_operand 2 "single_bit_mask_operand" "i")))]
  "TARGET_ZBS"
  "sbseti\t%0,%1,%S2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbsetw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	 (subreg:SI
	  (ior:DI (subreg:DI
		   (ashift:SI (const_int 1)
			      (match_operand:QI 2 "register_operand" "r")) 0)
		  (match_operand:DI 1 "register_operand" "r")) 0)))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbsetw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbsetw_mask"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	 (subreg:SI
	  (ior:DI (subreg:DI
		   (ashift:SI
		    (const_int 1)
		    (subreg:QI
		     (and:DI (match_operand:DI 2 "register_operand" "r")
			     (match_operand 3 "const31_operand" "i")) 0)) 0)
		  (match_operand:DI 1 "register_operand" "r")) 0)))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbsetw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbsetiw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(ior:DI (sign_extend:DI (match_operand:SI 1 "register_operand" "r"))
		(match_operand 2 "single_bit_mask_operand" "i")))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbsetiw\t%0,%1,%S2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbclr<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(and:X (rotate:X (const_int -2)
			 (match_operand:QI 2 "register_operand" "r"))
	       (match_operand:X 1 "register_operand" "r")))]
  "TARGET_ZBS"
  "sbclr\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbclri<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(and:X (match_operand:X 1 "register_operand" "r")
	       (match_operand 2 "not_single_bit_mask_operand" "i")))]
  "TARGET_ZBS"
  "sbclri\t%0,%1,%T2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbclrw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	 (subreg:SI
	  (and:DI
	   (not:DI (subreg:DI
		    (ashift:SI (const_int 1)
			       (match_operand:QI 2 "register_operand" "r")) 0))
	   (match_operand:DI 1 "register_operand" "r")) 0)))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbclrw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbclriw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(and:DI (sign_extend:DI (match_operand:SI 1 "register_operand" "r"))
		(match_operand 2 "not_single_bit_mask_operand" "i")))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbclriw\t%0,%1,%T2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbinv<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(xor:X (ashift:X (const_int 1)
			 (match_operand:QI 2 "register_operand" "r"))
	       (match_operand:X 1 "register_operand" "r")))]
  "TARGET_ZBS"
  "sbinv\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbinvi<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(xor:X (match_operand:X 1 "register_operand" "r")
	       (match_operand 2 "single_bit_mask_operand" "i")))]
  "TARGET_ZBS"
  "sbinvi\t%0,%1,%S2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbinvw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI
	 (subreg:SI
	  (xor:DI (subreg:DI
		   (ashift:SI (const_int 1)
			      (match_operand:QI 2 "register_operand" "r")) 0)
		  (match_operand:DI 1 "register_operand" "r")) 0)))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbinvw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbinviw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(xor:DI (sign_extend:DI (match_operand:SI 1 "register_operand" "r"))
		(match_operand 2 "single_bit_mask_operand" "i")))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbinviw\t%0,%1,%S2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbext<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(zero_extract:X (match_operand:X 1 "register_operand" "r")
			(const_int 1)
			(zero_extend:X
			 (match_operand:QI 2 "register_operand" "r"))))]
  "TARGET_ZBS"
  "sbext\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbexti"
  [(set (match_operand:X 0 "register_operand" "=r")
	(zero_extract:X (match_operand:X 1 "register_operand" "r")
			(const_int 1)
			(match_operand 2 "immediate_operand" "i")))]
  "TARGET_ZBS"
  "sbexti\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*sbextw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(and:DI
	 (subreg:DI
	  (lshiftrt:SI (match_operand:SI 1 "register_operand" "r")
		       (match_operand:QI 2 "register_operand" "r")) 0)
	 (const_int 1)))]
  "TARGET_64BIT && TARGET_ZBS"
  "sbextw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;;; ??? s[lr]o*

(define_insn "rotrsi3"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(rotatert:SI (match_operand:SI 1 "register_operand" "r")
		     (match_operand:QI 2 "arith_operand" "rI")))]
  "TARGET_ZBB || TARGET_ZBP"
  { return TARGET_64BIT ? "ror%i2w\t%0,%1,%2" : "ror%i2\t%0,%1,%2"; }
  [(set_attr "type" "bitmanip")])

(define_insn "rotrdi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(rotatert:DI (match_operand:DI 1 "register_operand" "r")
		     (match_operand:QI 2 "arith_operand" "rI")))]
  "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBP)"
  "ror%i2\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_expand "riscv_rolw"
  [(match_operand:SI 0 "register_operand" "=r")
   (match_operand:SI 1 "register_operand" "r")
   (match_operand:SI 2 "register_operand" "r")]
  "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBP)"
{
  emit_insn (gen_rotlsi3 (operands[0], operands[1], operands[2]));
  DONE;
})

(define_insn "rotlsi3"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(rotate:SI (match_operand:SI 1 "register_operand" "r")
		   (match_operand:QI 2 "register_operand" "r")))]
  "TARGET_ZBB || TARGET_ZBP"
  { return TARGET_64BIT ? "rolw\t%0,%1,%2" : "rol\t%0,%1,%2"; }
  [(set_attr "type" "bitmanip")])

(define_insn "rotldi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(rotate:DI (match_operand:DI 1 "register_operand" "r")
		   (match_operand:QI 2 "register_operand" "r")))]
  "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBP)"
  "rol\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "rotlsi3_sext"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(sign_extend:DI (rotate:SI (match_operand:SI 1 "register_operand" "r")
				   (match_operand:QI 2 "register_operand" "r"))))]
  "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBP)"
  "rolw\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;;; ??? grev

;;; ??? assembler doesn't accept rev8
(define_insn "bswapsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(bswap:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_ZBP"
  { return TARGET_64BIT ? "greviw\t%0,%1,0x18" : "grevi\t%0,%1,0x18"; }
  [(set_attr "type" "bitmanip")])

;;; ??? assembler doesn't accept rev8
(define_insn "bswapdi2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(bswap:DI (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_ZBP"
  "grevi\t%0,%1,0x38"
  [(set_attr "type" "bitmanip")])

;;; ??? shfl/unshfl

;;; ??? bext/bdep

;;; ??? clmul

;;; ??? crc

;;; ??? bmat

(define_insn "*cmix"
  [(set (match_operand:X 0 "register_operand" "=r")
	(xor:X (and:X (xor:X (match_operand:X 1 "register_operand" "r")
			     (match_operand:X 3 "register_operand" "r"))
		      (match_operand:X 2 "register_operand" "r"))
	       (match_dup 3)))]
  "TARGET_ZBT"
  "cmix\t%0,%2,%1,%3"
  [(set_attr "type" "bitmanip")])

;;; ??? cmov

;;; ??? fs[lr]

(define_insn "*shNadd"
  [(set (match_operand:X 0 "register_operand" "=r")
	(plus:X (ashift:X (match_operand:X 1 "register_operand" "r")
			  (match_operand:QI 2 "immediate_operand" "I"))
		(match_operand:X 3 "register_operand" "r")))]
  "TARGET_ZBA
   && (INTVAL (operands[2]) >= 1) && (INTVAL (operands[2]) <= 3)"
  "sh%2add\t%0,%1,%3"
  [(set_attr "type" "bitmanip")])

(define_insn "*shNadduw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(plus:DI
	 (and:DI (ashift:DI (match_operand:DI 1 "register_operand" "r")
			    (match_operand:QI 2 "immediate_operand" "I"))
		 (match_operand 3 "immediate_operand" ""))
	 (match_operand:DI 4 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_ZBA
   && (INTVAL (operands[2]) >= 1) && (INTVAL (operands[2]) <= 3)
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff"
  "sh%2addu.w\t%0,%1,%4"
  [(set_attr "type" "bitmanip")])

(define_insn "*addwu"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(zero_extend:DI (plus:SI (match_operand:SI 1 "register_operand" "r")
				 (match_operand:SI 2 "arith_operand" "rI"))))]
  "TARGET_64BIT && TARGET_ZBB"
  "add%i2wu\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*subwu"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(zero_extend:DI (minus:SI (match_operand:SI 1 "register_operand" "r")
				  (match_operand:SI 2 "register_operand" "r"))))]
  "TARGET_64BIT && TARGET_ZBA"
  "subwu\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*addu.w"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(plus:DI (zero_extend:DI
		  (subreg:SI (match_operand:DI 2 "register_operand" "r") 0))
		 (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_ZBA"
  "addu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*subu.w"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(minus:DI (match_operand:DI 1 "register_operand" "r")
		  (zero_extend:DI
		   (subreg:SI (match_operand:DI 2 "register_operand" "r") 0))))]
  "TARGET_64BIT && TARGET_ZBB"
  "subu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*slliuw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(and:DI (ashift:DI (match_operand:DI 1 "register_operand" "r")
			   (match_operand:QI 2 "immediate_operand" "I"))
		(match_operand 3 "immediate_operand" "")))]
  "TARGET_64BIT && TARGET_ZBA
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff"
  "slliu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;; ??? bfxp
