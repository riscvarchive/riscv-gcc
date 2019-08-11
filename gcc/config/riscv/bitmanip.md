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

(define_code_attr bitmanip_optab [(smin "smin")
				  (smax "smax")
				  (umin "umin")
				  (umax "umax")])

(define_code_attr bitmanip_insn [(smin "min")
				 (smax "max")
				 (umin "minu")
				 (umax "maxu")])

(define_insn "clzsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(clz:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "clzw\t%0,%1" : "clz\t%0,%1"; }
  [(set_attr "type" "bitmanip")])

(define_insn "clzdi2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(clz:DI (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "clz\t%0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "ctzsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(ctz:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "ctzw\t%0,%1" : "ctz\t%0,%1"; }
  [(set_attr "type" "bitmanip")])

(define_insn "ctzdi2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(ctz:DI (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "ctz\t%0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "popcountsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(popcount:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "pcntw\t%0,%1" : "pcnt\t%0,%1"; }
  [(set_attr "type" "bitmanip")])

(define_insn "popcountdi2"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(popcount:DI (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "pcnt\t%0,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*<optab>_not<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(bitmanip_bitwise:X (not:X (match_operand:X 1 "register_operand" "r"))
			    (match_operand:X 2 "register_operand" "r")))]
  "TARGET_BITMANIP"
  "<insn>n\t%0,%2,%1"
  [(set_attr "type" "bitmanip")])

(define_insn "*xor_not<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
	(not:X (xor:X (match_operand:X 1 "register_operand" "r")
		      (match_operand:X 2 "register_operand" "r"))))]
  "TARGET_BITMANIP"
  "xnor\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])
 
;;; ??? pack

;; ??? assembler doesn't support zext.h
(define_insn "*zero_extendhi<GPR:mode>2_bitmanip"
  [(set (match_operand:GPR 0 "register_operand" "=r,r")
	(zero_extend:GPR (match_operand:HI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_BITMANIP"
{
  if (which_alternative == 0)
   return TARGET_64BIT ? "packw\t%0,%1,x0" : "pack\t%0,%1,x0";
  else
   return "lhu\t%0,%1";
}
  [(set_attr "type" "bitmanip,load")])

;; ??? assembler doesn't support zext.w
(define_insn "*zero_extendsidi2_bitmanip"
  [(set (match_operand:DI 0 "register_operand" "=r,r")
	(zero_extend:DI (match_operand:SI 1 "nonimmediate_operand" "r,m")))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "@
   pack\t%0,%1,x0
   lwu\t%0,%1"
  [(set_attr "type" "bitmanip,load")])

(define_insn "<bitmanip_optab><mode>3"
  [(set (match_operand:X 0 "register_operand" "=r")
	(any_minmax:X (match_operand:X 1 "register_operand" "r")
		      (match_operand:X 2 "register_operand" "r")))]
  "TARGET_BITMANIP"
  "<bitmanip_insn>\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;;; ??? sb*

;;; ??? s[lr]o*

(define_insn "rotrsi3"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(rotatert:SI (match_operand:SI 1 "register_operand" "r")
		     (match_operand:SI 2 "arith_operand" "rI")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "ror%i2w\t%0,%1,%2" : "ror%i2\t%0,%1,%2"; }
  [(set_attr "type" "bitmanip")])

(define_insn "rotrdi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(rotatert:DI (match_operand:DI 1 "register_operand" "r")
		     (match_operand:DI 2 "arith_operand" "rI")))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "ror%i2\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "rotlsi3"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(rotate:SI (match_operand:SI 1 "register_operand" "r")
		   (match_operand:SI 2 "register_operand" "r")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "rolw\t%0,%1,%2" : "rol\t%0,%1,%2"; }
  [(set_attr "type" "bitmanip")])

(define_insn "rotldi3"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(rotate:DI (match_operand:DI 1 "register_operand" "r")
		   (match_operand:DI 2 "register_operand" "r")))]
  "TARGET_BITMANIP"
  "rol\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;;; ??? grev

;;; ??? assembler doesn't accept rev8
(define_insn "bswapsi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(bswap:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_BITMANIP"
  { return TARGET_64BIT ? "greviw\t%0,%1,0x18" : "grevi\t%0,%1,0x18"; }
  [(set_attr "type" "bitmanip")])

;;; ??? assembler doesn't accept rev8
(define_insn "bswapdi2"
  [(set (match_operand:SI 0 "register_operand" "=r")
	(bswap:SI (match_operand:SI 1 "register_operand" "r")))]
  "TARGET_64BIT && TARGET_BITMANIP"
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
  "TARGET_BITMANIP"
  "cmix\t%0,%2,%1,%3"
  [(set_attr "type" "bitmanip")])

;;; ??? cmov

;;; ??? fs[lr]

(define_insn "*addwu"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(zero_extend:DI (plus:SI (match_operand:SI 1 "register_operand" "r")
				 (match_operand:SI 2 "arith_operand" "rI"))))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "add%i2wu\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*subwu"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(zero_extend:DI (minus:SI (match_operand:SI 1 "register_operand" "r")
				  (match_operand:SI 2 "register_operand" "r"))))]
  "TARGET_64BIT && TARGET_BITMANIP"
  "subwu\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*addu.w"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(plus:DI (zero_extend:DI
		  (subreg:SI (match_operand:DI 2 "register_operand" "r") 0))
		 (match_operand:DI 1 "register_operand" "r")))]
  "TARGET_BITMANIP"
  "addu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

(define_insn "*subu.w"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(minus:DI (match_operand:DI 1 "register_operand" "r")
		  (zero_extend:DI
		   (subreg:SI (match_operand:DI 2 "register_operand" "r") 0))))]
  "TARGET_BITMANIP"
  "subu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;; GCC canonicalizes this to (i << 10) & 0x3fffffffc00, and then we need 3
;; instructions to load the constant, but we should be able to do it in 2.
;; Without a constant loading fix, this is a 5 instruction sequence which
;; is too many to combine.  With a constant loading fix we might be able to
;; match in combine.

(define_insn "*slliuw"
  [(set (match_operand:DI 0 "register_operand" "=r")
	(ashift:DI (zero_extend:DI
		    (subreg:SI (match_operand:DI 1 "register_operand" "r") 0))
		   (match_operand:QI 2 "immediate_operand" "I")))]
  "TARGET_BITMANIP"
  "slliu.w\t%0,%1,%2"
  [(set_attr "type" "bitmanip")])

;; ??? bfxp
