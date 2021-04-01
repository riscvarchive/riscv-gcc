;; Machine description for K extension.
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


(define_c_enum "unspec" [
  ;; Crypto extension unspecs.
  UNSPEC_AES_DS
  UNSPEC_AES_DSM
  UNSPEC_AES_ES
  UNSPEC_AES_ESM
  UNSPEC_AES_K
  UNSPEC_SHA_256_SIG0
  UNSPEC_SHA_256_SIG1
  UNSPEC_SHA_256_SUM0
  UNSPEC_SHA_256_SUM1
  UNSPEC_SHA_512_SIG0
  UNSPEC_SHA_512_SIG1
  UNSPEC_SHA_512_SUM0
  UNSPEC_SHA_512_SUM1
  UNSPEC_SM3_P0
  UNSPEC_SM3_P1
  UNSPEC_SM4_ED
  UNSPEC_SM4_KS
  UNSPEC_POLLENTROPY
  UNSPEC_GETNOISE
])


;; Zkne&Zknd - AES (RV32)

(define_insn "riscv_aes32dsi"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "immediate_operand" "")]
                   UNSPEC_AES_DS))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsi\t%0,%1,%2")

(define_insn "riscv_aes32dsmi"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "immediate_operand" "")]
                   UNSPEC_AES_DSM))]
  "TARGET_ZKND && !TARGET_64BIT"
  "aes32dsmi\t%0,%1,%2")

(define_insn "riscv_aes32esi"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "immediate_operand" "")]
                   UNSPEC_AES_ES))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esi\t%0,%1,%2")

(define_insn "riscv_aes32esmi"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "immediate_operand" "")]
                   UNSPEC_AES_ESM))]
  "TARGET_ZKNE && !TARGET_64BIT"
  "aes32esmi\t%0,%1,%2")


;; Zkne&Zknd - AES (RV64)

(define_insn "riscv_aes64ds"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "register_operand" "r")]
                   UNSPEC_AES_DS))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64ds\t%0,%1,%2")

(define_insn "riscv_aes64dsm"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "register_operand" "r")]
                   UNSPEC_AES_DSM))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64dsm\t%0,%1,%2")

(define_insn "riscv_aes64es"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "register_operand" "r")]
                   UNSPEC_AES_ES))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64es\t%0,%1,%2")

(define_insn "riscv_aes64esm"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "register_operand" "r")]
                   UNSPEC_AES_ESM))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64esm\t%0,%1,%2")

(define_insn "riscv_aes64im"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")]
                   UNSPEC_AES_K))]
  "TARGET_ZKND && TARGET_64BIT"
  "aes64im\t%0,%1")

(define_insn "riscv_aes64ks1i"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "immediate_operand" "")]
                   UNSPEC_AES_K))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64ks1i\t%0,%1,%2")

(define_insn "riscv_aes64ks2"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")
                   (match_operand:DI 2 "register_operand" "r")]
                   UNSPEC_AES_K))]
  "TARGET_ZKNE && TARGET_64BIT"
  "aes64ks2\t%0,%1,%2")


;; Zknh - SHA256

(define_insn "riscv_sha256sig0_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SHA_256_SIG0))]
  "TARGET_ZKNH"
  "sha256sig0\t%0,%1")

(define_insn "riscv_sha256sig1_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SHA_256_SIG1))]
  "TARGET_ZKNH"
  "sha256sig1\t%0,%1")

(define_insn "riscv_sha256sum0_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SHA_256_SUM0))]
  "TARGET_ZKNH"
  "sha256sum0\t%0,%1")

(define_insn "riscv_sha256sum1_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SHA_256_SUM1))]
  "TARGET_ZKNH"
  "sha256sum1\t%0,%1")


;; Zknh - SHA512 (RV32)

(define_insn "riscv_sha512sig0h"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG0))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig0h\t%0,%1,%2")

(define_insn "riscv_sha512sig0l"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG0))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig0l\t%0,%1,%2")

(define_insn "riscv_sha512sig1h"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG1))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig1h\t%0,%1,%2")

(define_insn "riscv_sha512sig1l"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG1))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sig1l\t%0,%1,%2")

(define_insn "riscv_sha512sum0r"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SUM0))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sum0r\t%0,%1,%2")

(define_insn "riscv_sha512sum1r"
  [(set (match_operand:SI 0 "register_operand" "=r")
        (unspec:SI [(match_operand:SI 1 "register_operand" "r")
                   (match_operand:SI 2 "register_operand" "r")]
                   UNSPEC_SHA_512_SUM0))]
  "TARGET_ZKNH && !TARGET_64BIT"
  "sha512sum1r\t%0,%1,%2")


;; Zknh - SHA512 (RV64)

(define_insn "riscv_sha512sig0"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG0))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sig0\t%0,%1")

(define_insn "riscv_sha512sig1"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")]
                   UNSPEC_SHA_512_SIG1))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sig1\t%0,%1")

(define_insn "riscv_sha512sum0"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")]
                   UNSPEC_SHA_512_SUM0))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sum0\t%0,%1")

(define_insn "riscv_sha512sum1"
  [(set (match_operand:DI 0 "register_operand" "=r")
        (unspec:DI [(match_operand:DI 1 "register_operand" "r")]
                   UNSPEC_SHA_512_SUM1))]
  "TARGET_ZKNH && TARGET_64BIT"
  "sha512sum1\t%0,%1")


;; Zksh - SM3

(define_insn "riscv_sm3p0_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SM3_P0))]
  "TARGET_ZKSH"
  "sm3p0\t%0,%1")

(define_insn "riscv_sm3p1_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")]
                  UNSPEC_SM3_P1))]
  "TARGET_ZKSH"
  "sm3p1\t%0,%1")


;; Zksed - SM4

(define_insn "riscv_sm4ed_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")
                  (match_operand:SI 2 "immediate_operand" "")]
                  UNSPEC_SM4_ED))]
  "TARGET_ZKSED"
  "sm4ed\t%0,%1,%2")

(define_insn "riscv_sm4ks_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(match_operand:X 1 "register_operand" "r")
                  (match_operand:SI 2 "immediate_operand" "")]
                  UNSPEC_SM4_KS))]
  "TARGET_ZKSED"
  "sm4ks\t%0,%1,%2")


;; Zkr - Entropy Source

(define_insn "riscv_pollentropy_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(const_int 0)] UNSPEC_POLLENTROPY))]
  "TARGET_ZKR"
  "pollentropy\t%0")

(define_insn "riscv_getnoise_<mode>"
  [(set (match_operand:X 0 "register_operand" "=r")
        (unspec:X [(const_int 0)] UNSPEC_GETNOISE))]
  "TARGET_ZKR"
  "getnoise\t%0")
