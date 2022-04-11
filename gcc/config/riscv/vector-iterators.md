;; Machine description for RISCV architecture.
;; Copyright (C) 2022-2022 Free Software Foundation, Inc.
;; Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.
;;
;; This file is part of GCC.
;;
;; GCC is free software; you can redistribute it and/or modify it
;; under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.
;;
;; GCC is distributed in the hope that it will be useful, but
;; WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;; General Public License for more details.
;;
;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

(define_c_enum "unspec" [
  ;; vsetvli.
  UNSPEC_VSETVLI
  ;; RVV instructions.
  UNSPEC_RVV
  ;; read vl.
  UNSPEC_READVL
  ;; reinterpret
  UNSPEC_REINTERPRET
  ;; lmul_ext
  UNSPEC_LMUL_EXT
  ;; lmul_trunc
  UNSPEC_LMUL_TRUNC
  ;; set a vector
  UNSPEC_SET_VECTOR
  ;; get a vector
  UNSPEC_GET_VECTOR
  ;; vec_duplicate
  UNSPEC_VEC_DUPLICATE
  ;; vector select
  UNSPEC_SELECT

  ;; vle/vse/vlse/vsse.
  ;; vluxei/vloxei/vsuxei/vsoxei.
  ;; vleff.
  ;; vlseg/vsseg/vlsegff.
  ;; vlsseg/vssseg.
  ;; vluxseg/vloxseg/vsuxseg/vsoxseg.
  UNSPEC_UNIT_STRIDE_LOAD
  UNSPEC_UNIT_STRIDE_STORE
  UNSPEC_STRIDED_LOAD
  UNSPEC_STRIDED_STORE
  UNSPEC_UNORDER_INDEXED_LOAD
  UNSPEC_ORDER_INDEXED_LOAD
  UNSPEC_UNORDER_INDEXED_STORE
  UNSPEC_ORDER_INDEXED_STORE
  UNSPEC_FAULT_ONLY_FIRST_LOAD

  ;; multiply-add.
  UNSPEC_MACC
  UNSPEC_NMACC
  UNSPEC_MSAC
  UNSPEC_NMSAC
  UNSPEC_MADD
  UNSPEC_NMADD
  UNSPEC_MSUB
  UNSPEC_NMSUB

  ;; unspec double-widening for distinguish.
  UNSPEC_DOUBLE_WIDEN
  ;; unspec merge
  UNSPEC_MERGE
  ;; unspec move
  UNSPEC_MOVE

  ;; saturating op.
  UNSPEC_AADDU
  UNSPEC_AADD
	UNSPEC_ASUBU
  UNSPEC_ASUB
  UNSPEC_SMUL

  ;; scaling shift.
  UNSPEC_SSRL
  UNSPEC_SSRA

  ;; narrowing clip.
  UNSPEC_SIGNED_CLIP
  UNSPEC_UNSIGNED_CLIP

  ;; reciprocal.
  UNSPEC_RSQRT7
  UNSPEC_REC7

  ;; Sign-Injection.
  UNSPEC_NCOPYSIGN
  UNSPEC_XORSIGN

  ;; Classify.
  UNSPEC_FCLASS

  ;; convert.
  UNSPEC_FLOAT_TO_SIGNED_INT
  UNSPEC_FLOAT_TO_UNSIGNED_INT

  ;; rounding.
  UNSPEC_ROD

  ;; reduction operations.
  UNSPEC_REDUC_SUM
  UNSPEC_REDUC_UNORDERED_SUM
  UNSPEC_REDUC_ORDERED_SUM
  UNSPEC_REDUC_MAX
  UNSPEC_REDUC_MAXU
  UNSPEC_REDUC_MIN
  UNSPEC_REDUC_MINU
  UNSPEC_REDUC_AND
  UNSPEC_REDUC_OR
  UNSPEC_REDUC_XOR

  ;; vcpop
  UNSPEC_VCPOP
  ;; find-first-set mask bit.
  UNSPEC_FIRST
  ;; set-before-first mask bit.
  UNSPEC_SBF
  ;; set-including-first mask bit.
  UNSPEC_SIF
  ;; set-only-first mask bit.
  UNSPEC_SOF
  ;; iota
  UNSPEC_IOTA
  ;; id
  UNSPEC_ID
  ;; vfmv.s.x, vmv.s.x
  UNSPEC_VMV_SX

  ;; slide instructins.
  UNSPEC_SLIDEUP
  UNSPEC_SLIDEDOWN
  UNSPEC_SLIDE1UP
  UNSPEC_SLIDE1DOWN

  ;; rgather
  UNSPEC_RGATHER
  ;; rgatherei16
  UNSPEC_RGATHEREI16

  ;; compress
  UNSPEC_COMPRESS

  ;; lowpart of the mode
  UNSPEC_LO
  ;; highpart of the mode
  UNSPEC_HI

  ;; unpack
  UNSPEC_UNPACKSHI
  UNSPEC_UNPACKSLO
  UNSPEC_UNPACKUHI
  UNSPEC_UNPACKULO

  ;; pack
  UNSPEC_PACK

  UNSPEC_VADD UNSPEC_VSUB UNSPEC_VRSUB
  UNSPEC_VAND UNSPEC_VIOX UNSPEC_VXOR
  UNSPEC_VMIN UNSPEC_VMINU UNSPEC_VMAX UNSPEC_VMAXU
  UNSPEC_VMUL UNSPEC_VMULH UNSPEC_VMULHU UNSPEC_VMULHSU
  UNSPEC_VDIV UNSPEC_VDIVU UNSPEC_VREM UNSPEC_VREMU
  UNSPEC_VSADD UNSPEC_VSADDU UNSPEC_VSSUB UNSPEC_VSSUBU
  UNSPEC_VAADD UNSPEC_VAADDU UNSPEC_VASUB UNSPEC_VASUBU
  UNSPEC_VSMUL
  UNSPEC_VADC UNSPEC_VSBC
  UNSPEC_VMADC UNSPEC_VMSBC
  UNSPEC_VMSEQ UNSPEC_VMSNE UNSPEC_VMSLE UNSPEC_VMSLEU UNSPEC_VMSGT UNSPEC_VMSGTU
  UNSPEC_VMSLT UNSPEC_VMSLTU UNSPEC_VMSGE UNSPEC_VMSGEU
  UNSPEC_VMERGE
  UNSPEC_VMV
  UNSPEC_VMVS
])

;; All vector modes supported.
(define_mode_iterator V [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI VNx128QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; All vector modes supported in vrgatherei16.
(define_mode_iterator V16 [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

(define_mode_iterator VI16 [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; vector modes can be set.
(define_mode_iterator VSETI [
  VNx32QI VNx64QI VNx128QI
  VNx16HI VNx32HI VNx64HI
  VNx8SI VNx16SI VNx32SI
  VNx4DI VNx8DI VNx16DI])

(define_mode_iterator VSETF [
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT") (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; vector modes can be get.
(define_mode_iterator VGETI [
  VNx16QI VNx32QI VNx64QI
  VNx8HI VNx16HI VNx32HI
  VNx4SI VNx8SI VNx16SI
  VNx2DI VNx4DI VNx8DI])

(define_mode_iterator VGETF [
  (VNx8HF "TARGET_FP16") (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16")
  (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")])

;; All vector extend modes supported.
(define_mode_iterator VLMULEXT [
  VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI VNx128QI
  VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx4SI VNx8SI VNx16SI VNx32SI
  VNx4DI VNx8DI VNx16DI
  (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; All vector truncate modes supported.
(define_mode_iterator VLMULTRUNC [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI
  VNx2SI VNx4SI VNx8SI VNx16SI
  VNx2DI VNx4DI VNx8DI
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")])

;; vector modes nunits = 2.
(define_mode_iterator V2UNITS [
  VNx2QI
  VNx2HI
  VNx2SI
  VNx2DI
  (VNx2HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT")])

;; vector modes nunits = 4.
(define_mode_iterator V4UNITS [
  VNx4QI
  VNx4HI
  VNx4SI
  VNx4DI
  (VNx4HF "TARGET_FP16")
  (VNx4SF "TARGET_HARD_FLOAT")
  (VNx4DF "TARGET_DOUBLE_FLOAT")])

;; vector modes nunits = 8.
(define_mode_iterator V8UNITS [
  VNx8QI
  VNx8HI
  VNx8SI
  VNx8DI
  (VNx8HF "TARGET_FP16")
  (VNx8SF "TARGET_HARD_FLOAT")
  (VNx8DF "TARGET_DOUBLE_FLOAT")])

;; vector modes nunits = 16.
(define_mode_iterator V16UNITS [
  VNx16QI
  VNx16HI
  VNx16SI
  VNx16DI
  (VNx16HF "TARGET_FP16")
  (VNx16SF "TARGET_HARD_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; vector modes nunits = 32.
(define_mode_iterator V32UNITS [
  VNx32QI
  VNx32HI
  VNx32SI
  (VNx32HF "TARGET_FP16")
  (VNx32SF "TARGET_HARD_FLOAT")])

;; vector modes nunits = 64.
(define_mode_iterator V64UNITS [
  VNx64QI
  VNx64HI
  (VNx64HF "TARGET_FP16")])

;; vector tuple modes nunits = 2.
(define_mode_iterator VT2UNITS [
  VNx2x2QI VNx3x2QI VNx4x2QI VNx5x2QI
  VNx6x2QI VNx7x2QI VNx8x2QI
  VNx2x2HI VNx3x2HI VNx4x2HI VNx5x2HI
  VNx6x2HI VNx7x2HI VNx8x2HI
  VNx2x2SI VNx3x2SI VNx4x2SI VNx5x2SI
  VNx6x2SI VNx7x2SI VNx8x2SI
  VNx2x2DI VNx3x2DI VNx4x2DI VNx5x2DI
  VNx6x2DI VNx7x2DI VNx8x2DI
  (VNx2x2HF "TARGET_FP16") (VNx3x2HF "TARGET_FP16") (VNx4x2HF "TARGET_FP16") (VNx5x2HF "TARGET_FP16")
  (VNx6x2HF "TARGET_FP16") (VNx7x2HF "TARGET_FP16") (VNx8x2HF "TARGET_FP16")
  (VNx2x2SF "TARGET_HARD_FLOAT") (VNx3x2SF "TARGET_HARD_FLOAT") (VNx4x2SF "TARGET_HARD_FLOAT") (VNx5x2SF "TARGET_HARD_FLOAT")
  (VNx6x2SF "TARGET_HARD_FLOAT") (VNx7x2SF "TARGET_HARD_FLOAT") (VNx8x2SF "TARGET_HARD_FLOAT")
  (VNx2x2DF "TARGET_DOUBLE_FLOAT") (VNx3x2DF "TARGET_DOUBLE_FLOAT") (VNx4x2DF "TARGET_DOUBLE_FLOAT") (VNx5x2DF "TARGET_DOUBLE_FLOAT")
  (VNx6x2DF "TARGET_DOUBLE_FLOAT") (VNx7x2DF "TARGET_DOUBLE_FLOAT") (VNx8x2DF "TARGET_DOUBLE_FLOAT")])

(define_mode_iterator VT2UNITSI [
  VNx2x2QI VNx3x2QI VNx4x2QI VNx5x2QI
  VNx6x2QI VNx7x2QI VNx8x2QI
  VNx2x2HI VNx3x2HI VNx4x2HI VNx5x2HI
  VNx6x2HI VNx7x2HI VNx8x2HI
  VNx2x2SI VNx3x2SI VNx4x2SI VNx5x2SI
  VNx6x2SI VNx7x2SI VNx8x2SI
  VNx2x2DI VNx3x2DI VNx4x2DI VNx5x2DI
  VNx6x2DI VNx7x2DI VNx8x2DI])

(define_mode_iterator VT2UNITSF [
  (VNx2x2HF "TARGET_FP16") (VNx3x2HF "TARGET_FP16") (VNx4x2HF "TARGET_FP16") (VNx5x2HF "TARGET_FP16")
  (VNx6x2HF "TARGET_FP16") (VNx7x2HF "TARGET_FP16") (VNx8x2HF "TARGET_FP16")
  (VNx2x2SF "TARGET_HARD_FLOAT") (VNx3x2SF "TARGET_HARD_FLOAT") (VNx4x2SF "TARGET_HARD_FLOAT") (VNx5x2SF "TARGET_HARD_FLOAT")
  (VNx6x2SF "TARGET_HARD_FLOAT") (VNx7x2SF "TARGET_HARD_FLOAT") (VNx8x2SF "TARGET_HARD_FLOAT")
  (VNx2x2DF "TARGET_DOUBLE_FLOAT") (VNx3x2DF "TARGET_DOUBLE_FLOAT") (VNx4x2DF "TARGET_DOUBLE_FLOAT") (VNx5x2DF "TARGET_DOUBLE_FLOAT")
  (VNx6x2DF "TARGET_DOUBLE_FLOAT") (VNx7x2DF "TARGET_DOUBLE_FLOAT") (VNx8x2DF "TARGET_DOUBLE_FLOAT")])

;; vector tuple modes nunits = 4.
(define_mode_iterator VT4UNITS [
  VNx2x4QI VNx3x4QI VNx4x4QI VNx5x4QI
  VNx6x4QI VNx7x4QI VNx8x4QI
  VNx2x4HI VNx3x4HI VNx4x4HI VNx5x4HI
  VNx6x4HI VNx7x4HI VNx8x4HI
  VNx2x4SI VNx3x4SI VNx4x4SI VNx5x4SI
  VNx6x4SI VNx7x4SI VNx8x4SI
  VNx2x4DI VNx3x4DI VNx4x4DI
  (VNx2x4HF "TARGET_FP16") (VNx3x4HF "TARGET_FP16") (VNx4x4HF "TARGET_FP16") (VNx5x4HF "TARGET_FP16")
  (VNx6x4HF "TARGET_FP16") (VNx7x4HF "TARGET_FP16") (VNx8x4HF "TARGET_FP16")
  (VNx2x4SF "TARGET_HARD_FLOAT") (VNx3x4SF "TARGET_HARD_FLOAT") (VNx4x4SF "TARGET_HARD_FLOAT") (VNx5x4SF "TARGET_HARD_FLOAT")
  (VNx6x4SF "TARGET_HARD_FLOAT") (VNx7x4SF "TARGET_HARD_FLOAT") (VNx8x4SF "TARGET_HARD_FLOAT")
  (VNx2x4DF "TARGET_DOUBLE_FLOAT") (VNx3x4DF "TARGET_DOUBLE_FLOAT") (VNx4x4DF "TARGET_DOUBLE_FLOAT")])

(define_mode_iterator VT4UNITSI [
  VNx2x4QI VNx3x4QI VNx4x4QI VNx5x4QI
  VNx6x4QI VNx7x4QI VNx8x4QI
  VNx2x4HI VNx3x4HI VNx4x4HI VNx5x4HI
  VNx6x4HI VNx7x4HI VNx8x4HI
  VNx2x4SI VNx3x4SI VNx4x4SI VNx5x4SI
  VNx6x4SI VNx7x4SI VNx8x4SI
  VNx2x4DI VNx3x4DI VNx4x4DI])

(define_mode_iterator VT4UNITSF [
  (VNx2x4HF "TARGET_FP16") (VNx3x4HF "TARGET_FP16") (VNx4x4HF "TARGET_FP16") (VNx5x4HF "TARGET_FP16")
  (VNx6x4HF "TARGET_FP16") (VNx7x4HF "TARGET_FP16") (VNx8x4HF "TARGET_FP16")
  (VNx2x4SF "TARGET_HARD_FLOAT") (VNx3x4SF "TARGET_HARD_FLOAT") (VNx4x4SF "TARGET_HARD_FLOAT") (VNx5x4SF "TARGET_HARD_FLOAT")
  (VNx6x4SF "TARGET_HARD_FLOAT") (VNx7x4SF "TARGET_HARD_FLOAT") (VNx8x4SF "TARGET_HARD_FLOAT")
  (VNx2x4DF "TARGET_DOUBLE_FLOAT") (VNx3x4DF "TARGET_DOUBLE_FLOAT") (VNx4x4DF "TARGET_DOUBLE_FLOAT")])

;; vector tuple modes nunits = 8.
(define_mode_iterator VT8UNITS [
  VNx2x8QI VNx3x8QI VNx4x8QI VNx5x8QI
  VNx6x8QI VNx7x8QI VNx8x8QI
  VNx2x8HI VNx3x8HI VNx4x8HI VNx5x8HI
  VNx6x8HI VNx7x8HI VNx8x8HI
  VNx2x8SI VNx3x8SI VNx4x8SI
  VNx2x8DI
  (VNx2x8HF "TARGET_FP16") (VNx3x8HF "TARGET_FP16") (VNx4x8HF "TARGET_FP16") (VNx5x8HF "TARGET_FP16")
  (VNx6x8HF "TARGET_FP16") (VNx7x8HF "TARGET_FP16") (VNx8x8HF "TARGET_FP16")
  (VNx2x8SF "TARGET_HARD_FLOAT") (VNx3x8SF "TARGET_HARD_FLOAT") (VNx4x8SF "TARGET_HARD_FLOAT")
  (VNx2x8DF "TARGET_DOUBLE_FLOAT")])

(define_mode_iterator VT8UNITSI [
  VNx2x8QI VNx3x8QI VNx4x8QI VNx5x8QI
  VNx6x8QI VNx7x8QI VNx8x8QI
  VNx2x8HI VNx3x8HI VNx4x8HI VNx5x8HI
  VNx6x8HI VNx7x8HI VNx8x8HI
  VNx2x8SI VNx3x8SI VNx4x8SI
  VNx2x8DI])

(define_mode_iterator VT8UNITSF [
  (VNx2x8HF "TARGET_FP16") (VNx3x8HF "TARGET_FP16") (VNx4x8HF "TARGET_FP16") (VNx5x8HF "TARGET_FP16")
  (VNx6x8HF "TARGET_FP16") (VNx7x8HF "TARGET_FP16") (VNx8x8HF "TARGET_FP16")
  (VNx2x8SF "TARGET_HARD_FLOAT") (VNx3x8SF "TARGET_HARD_FLOAT") (VNx4x8SF "TARGET_HARD_FLOAT")
  (VNx2x8DF "TARGET_DOUBLE_FLOAT")])

;; vector tuple modes nunits = 16.
(define_mode_iterator VT16UNITS [
  VNx2x16QI VNx3x16QI VNx4x16QI VNx5x16QI
  VNx6x16QI VNx7x16QI VNx8x16QI
  VNx2x16HI VNx3x16HI VNx4x16HI
  VNx2x16SI
  (VNx2x16HF "TARGET_FP16") (VNx3x16HF "TARGET_FP16") (VNx4x16HF "TARGET_FP16")
  (VNx2x16SF "TARGET_HARD_FLOAT")])

(define_mode_iterator VT16UNITSI [
  VNx2x16QI VNx3x16QI VNx4x16QI VNx5x16QI
  VNx6x16QI VNx7x16QI VNx8x16QI
  VNx2x16HI VNx3x16HI VNx4x16HI
  VNx2x16SI])

(define_mode_iterator VT16UNITSF [
  (VNx2x16HF "TARGET_FP16") (VNx3x16HF "TARGET_FP16") (VNx4x16HF "TARGET_FP16")
  (VNx2x16SF "TARGET_HARD_FLOAT")])

;; vector tuple modes nunits = 32.
(define_mode_iterator VT32UNITS [
  VNx2x32QI VNx3x32QI VNx4x32QI
  VNx2x32HI
  (VNx2x32HF "TARGET_FP16")])

(define_mode_iterator VT32UNITSI [
  VNx2x32QI VNx3x32QI VNx4x32QI
  VNx2x32HI])

(define_mode_iterator VT32UNITSF [
  (VNx2x32HF "TARGET_FP16")])

;; vector tuple modes nunits = 64.
(define_mode_iterator VT64UNITS [VNx2x64QI])

;; Paritial vector modes supported.
(define_mode_iterator VPARTIAL [
  VNx2QI VNx4QI VNx8QI
  VNx2HI VNx4HI
  VNx2SI
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT")])

;; Full vector modes supported.
(define_mode_iterator VFULL [
  VNx16QI VNx32QI VNx64QI VNx128QI
  VNx8HI VNx16HI VNx32HI VNx64HI
  VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI
  (VNx8HF "TARGET_FP16") (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT") (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; All vector modes supported for integer load/store/alu.
(define_mode_iterator VI [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI VNx128QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; Integer vector mode for extend.
(define_mode_iterator VEXTI [
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; Integer vector mode for extend.
(define_mode_iterator VEXTI2 [
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; Integer vector mode for truncated.
(define_mode_iterator VTRUNCI [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI
  VNx2SI VNx4SI VNx8SI VNx16SI])

;; Integer vector mode for quadruple truncated.
(define_mode_iterator VQTRUNCI [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI
  VNx2HI VNx4HI VNx8HI VNx16HI])

;; Integer vector mode for octuple truncated.
(define_mode_iterator VOTRUNCI [
  VNx2QI VNx4QI VNx8QI VNx16QI])

;; Integer vector mode for quadruple extend.
(define_mode_iterator VQEXTI [
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; Integer vector mode for octuple extend.
(define_mode_iterator VOEXTI [
  VNx2DI VNx4DI VNx8DI VNx16DI])

;; vector index modes nunits = 2.
(define_mode_iterator V2UNITSI [
  VNx2QI
  VNx2HI
  VNx2SI
  VNx2DI])

;; vector index modes nunits = 4.
(define_mode_iterator V4UNITSI [
  VNx4QI
  VNx4HI
  VNx4SI
  VNx4DI])

;; vector index modes nunits = 8.
(define_mode_iterator V8UNITSI [
  VNx8QI
  VNx8HI
  VNx8SI
  VNx8DI])

;; vector index modes nunits = 16.
(define_mode_iterator V16UNITSI [
  VNx16QI
  VNx16HI
  VNx16SI
  VNx16DI])

;; vector index modes nunits = 32.
(define_mode_iterator V32UNITSI [
  VNx32QI
  VNx32HI
  VNx32SI])

;; vector index modes nunits = 64.
(define_mode_iterator V64UNITSI [
  VNx64QI
  VNx64HI])

;; vector index modes nunits = 128.
(define_mode_iterator V128UNITSI [VNx128QI])

;; vector floating modes nunits = 2.
(define_mode_iterator V2UNITSF [
  (VNx2HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT")])

;; vector floating modes nunits = 4.
(define_mode_iterator V4UNITSF [
  (VNx4HF "TARGET_FP16")
  (VNx4SF "TARGET_HARD_FLOAT")
  (VNx4DF "TARGET_DOUBLE_FLOAT")])

;; vector floating modes nunits = 8.
(define_mode_iterator V8UNITSF [
  (VNx8HF "TARGET_FP16")
  (VNx8SF "TARGET_HARD_FLOAT")
  (VNx8DF "TARGET_DOUBLE_FLOAT")])

;; vector floating modes nunits = 16.
(define_mode_iterator V16UNITSF [
  (VNx16HF "TARGET_FP16")
  (VNx16SF "TARGET_HARD_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; vector floating modes nunits = 32.
(define_mode_iterator V32UNITSF [
  (VNx32HF "TARGET_FP16")
  (VNx32SF "TARGET_HARD_FLOAT")])

;; vector floating modes nunits = 64.
(define_mode_iterator V64UNITSF [
  (VNx64HF "TARGET_FP16")])

;; All vector modes supported for integer sew = 64.
(define_mode_iterator V64BITI [VNx2DI VNx4DI VNx8DI VNx16DI])

(define_mode_attr vi_to_v64biti [
  (VNx2QI "vnx2di") (VNx4QI "vnx2di") (VNx8QI "vnx2di") (VNx16QI "vnx2di") (VNx32QI "vnx2di") (VNx64QI "vnx2di") (VNx128QI "vnx2di")
  (VNx2HI "vnx2di") (VNx4HI "vnx2di") (VNx8HI "vnx2di") (VNx16HI "vnx2di") (VNx32HI "vnx2di") (VNx64HI "vnx2di")
  (VNx2SI "vnx2di") (VNx4SI "vnx2di") (VNx8SI "vnx2di") (VNx16SI "vnx2di") (VNx32SI "vnx2di")
  (VNx2DI "vnx2di") (VNx4DI "vnx4di") (VNx8DI "vnx8di") (VNx16DI "vnx16di")])

(define_mode_attr VDI_TO_VSI [
  (VNx2QI "VNx4SI") (VNx4QI "VNx4SI") (VNx8QI "VNx4SI") (VNx16QI "VNx4SI") (VNx32QI "VNx4SI") (VNx64QI "VNx4SI") (VNx128QI "VNx4SI")
  (VNx2HI "VNx4SI") (VNx4HI "VNx4SI") (VNx8HI "VNx4SI") (VNx16HI "VNx4SI") (VNx32HI "VNx4SI") (VNx64HI "VNx4SI")
  (VNx2SI "VNx4SI") (VNx4SI "VNx4SI") (VNx8SI "VNx4SI") (VNx16SI "VNx4SI") (VNx32SI "VNx4SI")
  (VNx2DI "VNx4SI") (VNx4DI "VNx8SI") (VNx8DI "VNx16SI") (VNx16DI "VNx32SI")])

(define_mode_attr VDI_TO_VSI_VM [
  (VNx2QI "VNx4BI") (VNx4QI "VNx4BI") (VNx8QI "VNx4BI") (VNx16QI "VNx4BI")
  (VNx32QI "VNx4BI") (VNx64QI "VNx4BI") (VNx128QI "VNx4BI")
  (VNx2HI "VNx4BI") (VNx4HI "VNx4BI") (VNx8HI "VNx4BI") (VNx16HI "VNx4BI") (VNx32HI "VNx4BI")
  (VNx64HI "VNx64BI")
  (VNx2SI "VNx4BI") (VNx4SI "VNx4BI") (VNx8SI "VNx4BI") (VNx16SI "VNx4BI") (VNx32SI "VNx4BI")
  (VNx2DI "VNx4BI") (VNx4DI "VNx8BI") (VNx8DI "VNx16BI") (VNx16DI "VNx32BI")
])

;; All vector modes supported for integer sew < 64.
(define_mode_iterator VNOT64BITI [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI VNx128QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI VNx64HI
  VNx2SI VNx4SI VNx8SI VNx16SI VNx32SI])

;; All vector modes supported for float load/store/alu.
(define_mode_iterator VF [
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16") (VNx64HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; floating-point use for extend
(define_mode_iterator VEXTF [
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT") (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; floating-point use for quadruple extend
(define_mode_iterator VQEXTF [
  (VNx2DF "TARGET_DOUBLE_FLOAT") (VNx4DF "TARGET_DOUBLE_FLOAT") (VNx8DF "TARGET_DOUBLE_FLOAT") (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; floating-point use for truncate
(define_mode_iterator VTRUNCF [
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16") (VNx16HF "TARGET_FP16") (VNx32HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT")])

;; floating-point use for quadruple truncate
(define_mode_iterator VQTRUNCF [
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16") (VNx16HF "TARGET_FP16")])

;; All vector masking modes.
(define_mode_iterator VB [
  VNx2BI VNx4BI VNx8BI VNx16BI
  VNx32BI VNx64BI VNx128BI])

;; All vector modes supported for widening integer alu.
(define_mode_iterator VWI [
  VNx2QI VNx4QI VNx8QI VNx16QI VNx32QI VNx64QI
  VNx2HI VNx4HI VNx8HI VNx16HI VNx32HI
  VNx2SI VNx4SI VNx8SI VNx16SI])

;; All vector modes supported for widening floating point alu.
(define_mode_iterator VWF [
  (VNx2HF "TARGET_FP16") (VNx4HF "TARGET_FP16") (VNx8HF "TARGET_FP16") (VNx16HF "TARGET_FP16")
  (VNx32HF "TARGET_FP16") (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT") (VNx8SF"TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_DOUBLE_FLOAT")])

;; All vector modes supported for quad-widening integer alu.
(define_mode_iterator VQWI [
  VNx2QI VNx4QI VNx8QI VNx16QI
  VNx32QI VNx2HI VNx4HI VNx8HI
  VNx16HI])

;; All vector modes supported for oct-widening integer alu.
(define_mode_iterator VOWI [
  VNx2QI VNx4QI VNx8QI VNx16QI])

;; All vector tuple modes supported.
(define_mode_iterator VT [
  VNx2x2QI VNx3x2QI VNx4x2QI VNx5x2QI
  VNx6x2QI VNx7x2QI VNx8x2QI
  VNx2x4QI VNx3x4QI VNx4x4QI VNx5x4QI
  VNx6x4QI VNx7x4QI VNx8x4QI
  VNx2x8QI VNx3x8QI VNx4x8QI VNx5x8QI
  VNx6x8QI VNx7x8QI VNx8x8QI
  VNx2x16QI VNx3x16QI VNx4x16QI VNx5x16QI
  VNx6x16QI VNx7x16QI VNx8x16QI
  VNx2x32QI VNx3x32QI VNx4x32QI
  VNx2x64QI
  VNx2x2HI VNx3x2HI VNx4x2HI VNx5x2HI
  VNx6x2HI VNx7x2HI VNx8x2HI
  VNx2x4HI VNx3x4HI VNx4x4HI VNx5x4HI
  VNx6x4HI VNx7x4HI VNx8x4HI
  VNx2x8HI VNx3x8HI VNx4x8HI VNx5x8HI
  VNx6x8HI VNx7x8HI VNx8x8HI
  VNx2x16HI VNx3x16HI VNx4x16HI
  VNx2x32HI
  VNx2x2SI VNx3x2SI VNx4x2SI VNx5x2SI
  VNx6x2SI VNx7x2SI VNx8x2SI
  VNx2x4SI VNx3x4SI VNx4x4SI VNx5x4SI
  VNx6x4SI VNx7x4SI VNx8x4SI
  VNx2x8SI VNx3x8SI VNx4x8SI
  VNx2x16SI
  VNx2x2DI VNx3x2DI VNx4x2DI VNx5x2DI
  VNx6x2DI VNx7x2DI VNx8x2DI
  VNx2x4DI VNx3x4DI VNx4x4DI
  VNx2x8DI
  (VNx2x2HF "TARGET_FP16") (VNx3x2HF "TARGET_FP16") (VNx4x2HF "TARGET_FP16") (VNx5x2HF "TARGET_FP16")
  (VNx6x2HF "TARGET_FP16") (VNx7x2HF "TARGET_FP16") (VNx8x2HF "TARGET_FP16")
  (VNx2x4HF "TARGET_FP16") (VNx3x4HF "TARGET_FP16") (VNx4x4HF "TARGET_FP16") (VNx5x4HF "TARGET_FP16")
  (VNx6x4HF "TARGET_FP16") (VNx7x4HF "TARGET_FP16") (VNx8x4HF "TARGET_FP16")
  (VNx2x8HF "TARGET_FP16") (VNx3x8HF "TARGET_FP16") (VNx4x8HF "TARGET_FP16") (VNx5x8HF "TARGET_FP16")
  (VNx6x8HF "TARGET_FP16") (VNx7x8HF "TARGET_FP16") (VNx8x8HF "TARGET_FP16")
  (VNx2x16HF "TARGET_FP16") (VNx3x16HF "TARGET_FP16") (VNx4x16HF "TARGET_FP16")
  (VNx2x32HF "TARGET_FP16")
  (VNx2x2SF "TARGET_HARD_FLOAT") (VNx3x2SF "TARGET_HARD_FLOAT") (VNx4x2SF "TARGET_HARD_FLOAT") (VNx5x2SF "TARGET_HARD_FLOAT")
  (VNx6x2SF "TARGET_HARD_FLOAT") (VNx7x2SF "TARGET_HARD_FLOAT") (VNx8x2SF "TARGET_HARD_FLOAT")
  (VNx2x4SF "TARGET_HARD_FLOAT") (VNx3x4SF "TARGET_HARD_FLOAT") (VNx4x4SF "TARGET_HARD_FLOAT") (VNx5x4SF "TARGET_HARD_FLOAT")
  (VNx6x4SF "TARGET_HARD_FLOAT") (VNx7x4SF "TARGET_HARD_FLOAT") (VNx8x4SF "TARGET_HARD_FLOAT")
  (VNx2x8SF "TARGET_HARD_FLOAT") (VNx3x8SF "TARGET_HARD_FLOAT") (VNx4x8SF "TARGET_HARD_FLOAT")
  (VNx2x16SF "TARGET_HARD_FLOAT")
  (VNx2x2DF "TARGET_DOUBLE_FLOAT") (VNx3x2DF "TARGET_DOUBLE_FLOAT") (VNx4x2DF "TARGET_DOUBLE_FLOAT") (VNx5x2DF "TARGET_DOUBLE_FLOAT")
  (VNx6x2DF "TARGET_DOUBLE_FLOAT") (VNx7x2DF "TARGET_DOUBLE_FLOAT") (VNx8x2DF "TARGET_DOUBLE_FLOAT")
  (VNx2x4DF "TARGET_DOUBLE_FLOAT") (VNx3x4DF "TARGET_DOUBLE_FLOAT") (VNx4x4DF "TARGET_DOUBLE_FLOAT")
  (VNx2x8DF "TARGET_DOUBLE_FLOAT")])

;; integer tuple mode.
(define_mode_iterator VTI [
  VNx2x2QI VNx3x2QI VNx4x2QI VNx5x2QI
  VNx6x2QI VNx7x2QI VNx8x2QI
  VNx2x4QI VNx3x4QI VNx4x4QI VNx5x4QI
  VNx6x4QI VNx7x4QI VNx8x4QI
  VNx2x8QI VNx3x8QI VNx4x8QI VNx5x8QI
  VNx6x8QI VNx7x8QI VNx8x8QI
  VNx2x16QI VNx3x16QI VNx4x16QI VNx5x16QI
  VNx6x16QI VNx7x16QI VNx8x16QI
  VNx2x32QI VNx3x32QI VNx4x32QI
  VNx2x64QI
  VNx2x2HI VNx3x2HI VNx4x2HI VNx5x2HI
  VNx6x2HI VNx7x2HI VNx8x2HI
  VNx2x4HI VNx3x4HI VNx4x4HI VNx5x4HI
  VNx6x4HI VNx7x4HI VNx8x4HI
  VNx2x8HI VNx3x8HI VNx4x8HI VNx5x8HI
  VNx6x8HI VNx7x8HI VNx8x8HI
  VNx2x16HI VNx3x16HI VNx4x16HI
  VNx2x32HI
  VNx2x2SI VNx3x2SI VNx4x2SI VNx5x2SI
  VNx6x2SI VNx7x2SI VNx8x2SI
  VNx2x4SI VNx3x4SI VNx4x4SI VNx5x4SI
  VNx6x4SI VNx7x4SI VNx8x4SI
  VNx2x8SI VNx3x8SI VNx4x8SI
  VNx2x16SI
  VNx2x2DI VNx3x2DI VNx4x2DI VNx5x2DI
  VNx6x2DI VNx7x2DI VNx8x2DI
  VNx2x4DI VNx3x4DI VNx4x4DI
  VNx2x8DI])

;; floating-point tuple mode.
(define_mode_iterator VTF [
  (VNx2x2HF "TARGET_FP16") (VNx3x2HF "TARGET_FP16") (VNx4x2HF "TARGET_FP16") (VNx5x2HF "TARGET_FP16")
  (VNx6x2HF "TARGET_FP16") (VNx7x2HF "TARGET_FP16") (VNx8x2HF "TARGET_FP16")
  (VNx2x4HF "TARGET_FP16") (VNx3x4HF "TARGET_FP16") (VNx4x4HF "TARGET_FP16") (VNx5x4HF "TARGET_FP16")
  (VNx6x4HF "TARGET_FP16") (VNx7x4HF "TARGET_FP16") (VNx8x4HF "TARGET_FP16")
  (VNx2x8HF "TARGET_FP16") (VNx3x8HF "TARGET_FP16") (VNx4x8HF "TARGET_FP16") (VNx5x8HF "TARGET_FP16")
  (VNx6x8HF "TARGET_FP16") (VNx7x8HF "TARGET_FP16") (VNx8x8HF "TARGET_FP16")
  (VNx2x16HF "TARGET_FP16") (VNx3x16HF "TARGET_FP16") (VNx4x16HF "TARGET_FP16")
  (VNx2x32HF "TARGET_FP16")
  (VNx2x2SF "TARGET_HARD_FLOAT") (VNx3x2SF "TARGET_HARD_FLOAT") (VNx4x2SF "TARGET_HARD_FLOAT") (VNx5x2SF "TARGET_HARD_FLOAT")
  (VNx6x2SF "TARGET_HARD_FLOAT") (VNx7x2SF "TARGET_HARD_FLOAT") (VNx8x2SF "TARGET_HARD_FLOAT")
  (VNx2x4SF "TARGET_HARD_FLOAT") (VNx3x4SF "TARGET_HARD_FLOAT") (VNx4x4SF "TARGET_HARD_FLOAT") (VNx5x4SF "TARGET_HARD_FLOAT")
  (VNx6x4SF "TARGET_HARD_FLOAT") (VNx7x4SF "TARGET_HARD_FLOAT") (VNx8x4SF "TARGET_HARD_FLOAT")
  (VNx2x8SF "TARGET_HARD_FLOAT") (VNx3x8SF "TARGET_HARD_FLOAT") (VNx4x8SF "TARGET_HARD_FLOAT")
  (VNx2x16SF "TARGET_HARD_FLOAT")
  (VNx2x2DF "TARGET_DOUBLE_FLOAT") (VNx3x2DF "TARGET_DOUBLE_FLOAT") (VNx4x2DF "TARGET_DOUBLE_FLOAT") (VNx5x2DF "TARGET_DOUBLE_FLOAT")
  (VNx6x2DF "TARGET_DOUBLE_FLOAT") (VNx7x2DF "TARGET_DOUBLE_FLOAT") (VNx8x2DF "TARGET_DOUBLE_FLOAT")
  (VNx2x4DF "TARGET_DOUBLE_FLOAT") (VNx3x4DF "TARGET_DOUBLE_FLOAT") (VNx4x4DF "TARGET_DOUBLE_FLOAT")
  (VNx2x8DF "TARGET_DOUBLE_FLOAT")])

;; All vector modes supported for widening integer point reduction operation.
(define_mode_iterator VWREDI [
  VNx2QI VNx4QI VNx8QI VNx16QI
  VNx32QI VNx64QI VNx128QI VNx2HI
  VNx4HI VNx8HI VNx16HI VNx32HI
  VNx64HI VNx2SI VNx4SI VNx8SI
  VNx16SI VNx32SI])

;; All vector modes supported for widening floating point reduction operation.
(define_mode_iterator VWREDF [
  (VNx2HF "TARGET_FP16")  (VNx4HF "TARGET_FP16")  (VNx8HF "TARGET_FP16")  (VNx16HF "TARGET_FP16")
  (VNx32HF "TARGET_FP16")  (VNx64HF "TARGET_FP16")  (VNx2SF "TARGET_HARD_FLOAT") (VNx4SF "TARGET_HARD_FLOAT")
  (VNx8SF "TARGET_HARD_FLOAT") (VNx16SF "TARGET_HARD_FLOAT") (VNx32SF "TARGET_HARD_FLOAT")])

;; vector iterator integer and float-point mode interconversion.
(define_mode_iterator VCONVERF [
  (VNx2HF "TARGET_FP16")
  (VNx4HF "TARGET_FP16")
  (VNx8HF "TARGET_FP16")
  (VNx16HF "TARGET_FP16")
  (VNx32HF "TARGET_FP16")
  (VNx64HF "TARGET_FP16")
  (VNx2SF "TARGET_HARD_FLOAT")
  (VNx4SF "TARGET_HARD_FLOAT")
  (VNx8SF "TARGET_HARD_FLOAT")
  (VNx16SF "TARGET_HARD_FLOAT")
  (VNx32SF "TARGET_HARD_FLOAT")
  (VNx2DF "TARGET_DOUBLE_FLOAT")
  (VNx4DF "TARGET_DOUBLE_FLOAT")
  (VNx8DF "TARGET_DOUBLE_FLOAT")
  (VNx16DF "TARGET_DOUBLE_FLOAT")])

;; Map a vector int or float mode to widening vector mode.
(define_mode_attr VW [
  (VNx2QI "VNx2HI") (VNx4QI "VNx4HI") (VNx8QI "VNx8HI") (VNx16QI "VNx16HI") (VNx32QI "VNx32HI") (VNx64QI "VNx64HI")
  (VNx2HI "VNx2SI") (VNx4HI "VNx4SI") (VNx8HI "VNx8SI") (VNx16HI "VNx16SI") (VNx32HI "VNx32SI")
  (VNx2SI "VNx2DI") (VNx4SI "VNx4DI") (VNx8SI "VNx8DI") (VNx16SI "VNx16DI")
  (VNx2HF "VNx2SF") (VNx4HF "VNx4SF") (VNx8HF "VNx8SF") (VNx16HF "VNx16SF") (VNx32HF "VNx32SF")
  (VNx2SF "VNx2DF") (VNx4SF "VNx4DF") (VNx8SF "VNx8DF") (VNx16SF "VNx16DF")])

(define_mode_attr vw [
  (VNx2QI "vnx2hi") (VNx4QI "vnx4hi") (VNx8QI "vnx8hi") (VNx16QI "vnx16hi") (VNx32QI "vnx32hi") (VNx64QI "vnx64hi")
  (VNx2HI "vnx2si") (VNx4HI "vnx4si") (VNx8HI "vnx8si") (VNx16HI "vnx16si") (VNx32HI "vnx32si")
  (VNx2SI "vnx2di") (VNx4SI "vnx4di") (VNx8SI "vnx8di") (VNx16SI "vnx16di")
  (VNx2HF "vnx2sf") (VNx4HF "vnx4sf") (VNx8HF "vnx8sf") (VNx16HF "vnx16sf") (VNx32HF "vnx32sf")
  (VNx2SF "vnx2df") (VNx4SF "vnx4df") (VNx8SF "vnx8df") (VNx16SF "vnx16df")])

;; Map a vector int or float mode to widening vector mode.
(define_mode_attr VWDIFF [
  (VNx2QI "VNx2HF") (VNx4QI "VNx4HF") (VNx8QI "VNx8HF") (VNx16QI "VNx16HF") (VNx32QI "VNx32HF") (VNx64QI "VNx64HF")
  (VNx2HI "VNx2SF") (VNx4HI "VNx4SF") (VNx8HI "VNx8SF") (VNx16HI "VNx16SF") (VNx32HI "VNx32SF")
  (VNx2SI "VNx2DF") (VNx4SI "VNx4DF") (VNx8SI "VNx8DF") (VNx16SI "VNx16DF")
  (VNx2HF "VNx2SI") (VNx4HF "VNx4SI") (VNx8HF "VNx8SI") (VNx16HF "VNx16SI") (VNx32HF "VNx32SI")
  (VNx2SF "VNx2DI") (VNx4SF "VNx4DI") (VNx8SF "VNx8DI") (VNx16SF "VNx16DI")])

(define_mode_attr vwdiff [
  (VNx2QI "vnx2hf") (VNx4QI "vnx4hf") (VNx8QI "vnx8hf") (VNx16QI "vnx16hf") (VNx32QI "vnx32hf") (VNx64QI "vnx64hf")
  (VNx2HI "vnx2sf") (VNx4HI "vnx4sf") (VNx8HI "vnx8sf") (VNx16HI "vnx16sf") (VNx32HI "vnx32sf")
  (VNx2SI "vnx2df") (VNx4SI "vnx4df") (VNx8SI "vnx8df") (VNx16SI "vnx16df")
  (VNx2HF "vnx2si") (VNx4HF "vnx4si") (VNx8HF "vnx8si") (VNx16HF "vnx16si") (VNx32HF "vnx32si")
  (VNx2SF "vnx2di") (VNx4SF "vnx4di") (VNx8SF "vnx8di") (VNx16SF "vnx16di")])

;; Map a vector int or float mode to quadruple widening vector mode.
(define_mode_attr VQWDIFF [
  (VNx2QI "VNx2SF") (VNx4QI "VNx4SF") (VNx8QI "VNx8SF") (VNx16QI "VNx16SF") (VNx32QI "VNx32SF")
  (VNx2HI "VNx2DF") (VNx4HI "VNx4DF") (VNx8HI "VNx8DF") (VNx16HI "VNx16DF")
  (VNx2HF "VNx2DI") (VNx4HF "VNx4DI") (VNx8HF "VNx8DI") (VNx16HF "VNx16DI")])

(define_mode_attr vqwdiff [
  (VNx2QI "vnx2sf") (VNx4QI "vnx4sf") (VNx8QI "vnx8sf") (VNx16QI "vnx16sf") (VNx32QI "vnx32sf")
  (VNx2HI "vnx2df") (VNx4HI "vnx4df") (VNx8HI "vnx8df") (VNx16HI "vnx16df")
  (VNx2HF "vnx2di") (VNx4HF "vnx4di") (VNx8HF "vnx8di") (VNx16HF "vnx16di")])

;; Map a vector int or float mode to octuple widening vector mode.
(define_mode_attr VOWDIFF [
  (VNx2QI "VNx2DF") (VNx4QI "VNx4DF") (VNx8QI "VNx8DF") (VNx16QI "VNx16DF")])

(define_mode_attr vowdiff [
  (VNx2QI "vnx2df") (VNx4QI "vnx4df") (VNx8QI "vnx8df") (VNx16QI "vnx16df")])

;; Map a vector mode to narrow vector mode
(define_mode_attr VN [
  (VNx2HI "VNx2QI") (VNx4HI "VNx4QI") (VNx8HI "VNx8QI") (VNx16HI "VNx16QI") (VNx32HI "VNx32QI") (VNx64HI "VNx64QI")
  (VNx2SI "VNx2HI") (VNx4SI "VNx4HI") (VNx8SI "VNx8HI") (VNx16SI "VNx16HI") (VNx32SI "VNx32HI")
  (VNx2DI "VNx2SI") (VNx4DI "VNx4SI") (VNx8DI "VNx8SI") (VNx16DI "VNx16SI")
  (VNx2SF "VNx2HF") (VNx4SF "VNx4HF") (VNx8SF "VNx8HF") (VNx16SF "VNx16HF") (VNx32SF "VNx32HF")
  (VNx2DF "VNx2SF") (VNx4DF "VNx4SF") (VNx8DF "VNx8SF") (VNx16DF "VNx16SF")])

(define_mode_attr vn [
  (VNx2HI "vnx2qi") (VNx4HI "vnx4qi") (VNx8HI "vnx8qi") (VNx16HI "vnx16qi") (VNx32HI "vnx32qi") (VNx64HI "vnx64qi")
  (VNx2SI "vnx2hi") (VNx4SI "vnx4hi") (VNx8SI "vnx8hi") (VNx16SI "vnx16hi") (VNx32SI "vnx32hi")
  (VNx2DI "vnx2si") (VNx4DI "vnx4si") (VNx8DI "vnx8si") (VNx16DI "vnx16si")
  (VNx2SF "vnx2hf") (VNx4SF "vnx4hf") (VNx8SF "vnx8hf") (VNx16SF "vnx16hf") (VNx32SF "vnx32hf")
  (VNx2DF "vnx2sf") (VNx4DF "vnx4sf") (VNx8DF "vnx8sf") (VNx16DF "vnx16sf")])

;; Map a vector mode to narrow vector mode
(define_mode_attr VNDIFF [
  (VNx2SI "VNx2HF") (VNx4SI "VNx4HF") (VNx8SI "VNx8HF") (VNx16SI "VNx16HF") (VNx32SI "VNx32HF")
  (VNx2DI "VNx2SF") (VNx4DI "VNx4SF") (VNx8DI "VNx8SF") (VNx16DI "VNx16SF")
  (VNx2HF "VNx2QI") (VNx4HF "VNx4QI") (VNx8HF "VNx8QI") (VNx16HF "VNx16QI") (VNx32HF "VNx32QI") (VNx64HF "VNx64QI")
  (VNx2SF "VNx2HI") (VNx4SF "VNx4HI") (VNx8SF "VNx8HI") (VNx16SF "VNx16HI") (VNx32SF "VNx32HI")
  (VNx2DF "VNx2SI") (VNx4DF "VNx4SI") (VNx8DF "VNx8SI") (VNx16DF "VNx16SI")])

(define_mode_attr vndiff [
  (VNx2SI "vnx2hf") (VNx4SI "vnx4hf") (VNx8SI "vnx8hf") (VNx16SI "vnx16hf") (VNx32SI "vnx32hf")
  (VNx2DI "vnx2sf") (VNx4DI "vnx4sf") (VNx8DI "vnx8sf") (VNx16DI "vnx16sf")
  (VNx2HF "vnx2qi") (VNx4HF "vnx4qi") (VNx8HF "vnx8qi") (VNx16HF "vnx16qi") (VNx32HF "vnx32qi") (VNx64HF "vnx64qi")
  (VNx2SF "vnx2hi") (VNx4SF "vnx4hi") (VNx8SF "vnx8hi") (VNx16SF "vnx16hi") (VNx32SF "vnx32hi")
  (VNx2DF "vnx2si") (VNx4DF "vnx4si") (VNx8DF "vnx8si") (VNx16DF "vnx16si")])

;; Map a vector mode to quadruple narrow vector mode
(define_mode_attr VQNDIFF [
  (VNx2DI "VNx2HF") (VNx4DI "VNx4HF") (VNx8DI "VNx8HF") (VNx16DI "VNx16HF")
  (VNx2SF "VNx2QI") (VNx4SF "VNx4QI") (VNx8SF "VNx8QI") (VNx16SF "VNx16QI") (VNx32SF "VNx32QI")
  (VNx2DF "VNx2HI") (VNx4DF "VNx4HI") (VNx8DF "VNx8HI") (VNx16DF "VNx16HI")])

(define_mode_attr vqndiff [
  (VNx2DI "vnx2hf") (VNx4DI "vnx4hf") (VNx8DI "vnx8hf") (VNx16DI "vnx16hf")
  (VNx2SF "vnx2qi") (VNx4SF "vnx4qi") (VNx8SF "vnx8qi") (VNx16SF "vnx16qi") (VNx32SF "vnx32qi")
  (VNx2DF "vnx2hi") (VNx4DF "vnx4hi") (VNx8DF "vnx8hi") (VNx16DF "vnx16hi")])

;; Map a vector mode to octuple narrow vector mode
(define_mode_attr VONDIFF [
  (VNx2DF "VNx2QI") (VNx4DF "VNx4QI") (VNx8DF "VNx8QI") (VNx16DF "VNx16QI")])

(define_mode_attr vondiff [
  (VNx2DF "vnx2qi") (VNx4DF "vnx4qi") (VNx8DF "vnx8qi") (VNx16DF "vnx16qi")])

(define_mode_attr VQN [
  (VNx2SI "VNx2QI") (VNx4SI "VNx4QI") (VNx8SI "VNx8QI") (VNx16SI "VNx16QI") (VNx32SI "VNx32QI")
  (VNx2DI "VNx2HI") (VNx4DI "VNx4HI") (VNx8DI "VNx8HI") (VNx16DI "VNx16HI")
  (VNx2DF "VNx2HF") (VNx4DF "VNx4HF") (VNx8DF "VNx8HF") (VNx16DF "VNx16HF")])

(define_mode_attr vqn [
  (VNx2SI "vnx2qi") (VNx4SI "vnx4qi") (VNx8SI "vnx8qi") (VNx16SI "vnx16qi") (VNx32SI "vnx32qi")
  (VNx2DI "vnx2hi") (VNx4DI "vnx4hi") (VNx8DI "vnx8hi") (VNx16DI "vnx16hi")
  (VNx2DF "vnx2hf") (VNx4DF "vnx4hf") (VNx8DF "vnx8hf") (VNx16DF "vnx16hf")])

(define_mode_attr VON [
  (VNx2DI "VNx2QI") (VNx4DI "VNx4QI") (VNx8DI "VNx8QI") (VNx16DI "VNx16QI")])

(define_mode_attr von [
  (VNx2DI "vnx2qi") (VNx4DI "vnx4qi") (VNx8DI "vnx8qi") (VNx16DI "vnx16qi")])

;; Map a vector int or float mode to quad-widening vector mode.
(define_mode_attr VQW [
  (VNx2QI "VNx2SI") (VNx4QI "VNx4SI") (VNx8QI "VNx8SI") (VNx16QI "VNx16SI")
  (VNx32QI "VNx32SI") (VNx2HI "VNx2DI") (VNx4HI "VNx4DI") (VNx8HI "VNx8DI")
  (VNx16HI "VNx16DI") (VNx2HF "VNx2DF") (VNx4HF "VNx4DF") (VNx8HF "VNx8DF")
  (VNx16HF "VNx16DF")])

(define_mode_attr vqw [
  (VNx2QI "vnx2si") (VNx4QI "vnx4si") (VNx8QI "vnx8si") (VNx16QI "vnx16si")
  (VNx32QI "vnx32si") (VNx2HI "vnx2di") (VNx4HI "vnx4di") (VNx8HI "vnx8di")
  (VNx16HI "vnx16di") (VNx2HF "vnx2df") (VNx4HF "vnx4df") (VNx8HF "vnx8df")
  (VNx16HF "vnx16df")])

;; Map a vector int or float mode to oct-widening vector mode.
(define_mode_attr VOW [
  (VNx2QI "VNx2DI") (VNx4QI "VNx4DI") (VNx8QI "VNx8DI") (VNx16QI "VNx16DI")])

(define_mode_attr vow [
  (VNx2QI "vnx2di") (VNx4QI "vnx4di") (VNx8QI "vnx8di") (VNx16QI "vnx16di")])

;; Map a vector int or float mode to a vector compare mode.
(define_mode_attr VM [
  (VNx2BI "VNx2BI") (VNx4BI "VNx4BI") (VNx8BI "VNx8BI") (VNx16BI "VNx16BI")
  (VNx32BI "VNx32BI") (VNx64BI "VNx64BI") (VNx128BI "VNx128BI")
  (VNx2QI "VNx2BI") (VNx4QI "VNx4BI") (VNx8QI "VNx8BI") (VNx16QI "VNx16BI")
  (VNx32QI "VNx32BI") (VNx64QI "VNx64BI") (VNx128QI "VNx128BI") (VNx2HI "VNx2BI")
  (VNx4HI "VNx4BI") (VNx8HI "VNx8BI") (VNx16HI "VNx16BI") (VNx32HI "VNx32BI")
  (VNx64HI "VNx64BI") (VNx2SI "VNx2BI") (VNx4SI "VNx4BI") (VNx8SI "VNx8BI")
  (VNx16SI "VNx16BI") (VNx32SI "VNx32BI") (VNx2DI "VNx2BI") (VNx4DI "VNx4BI")
  (VNx8DI "VNx8BI") (VNx16DI "VNx16BI") (VNx2HF "VNx2BI") (VNx4HF "VNx4BI")
  (VNx8HF "VNx8BI") (VNx16HF "VNx16BI") (VNx32HF "VNx32BI") (VNx64HF "VNx64BI")
  (VNx2SF "VNx2BI") (VNx4SF "VNx4BI") (VNx8SF "VNx8BI") (VNx16SF "VNx16BI")
  (VNx32SF "VNx32BI") (VNx2DF "VNx2BI") (VNx4DF "VNx4BI") (VNx8DF "VNx8BI")
  (VNx16DF "VNx16BI")
  (VNx2QI "VNx2BI") (VNx4QI "VNx4BI") (VNx8QI "VNx8BI") (VNx16QI "VNx16BI")
  (VNx32QI "VNx32BI") (VNx64QI "VNx64BI") (VNx128QI "VNx128BI") (VNx2HI "VNx2BI")
  (VNx4HI "VNx4BI") (VNx8HI "VNx8BI") (VNx16HI "VNx16BI") (VNx32HI "VNx32BI")
  (VNx64HI "VNx64BI") (VNx2SI "VNx2BI") (VNx4SI "VNx4BI") (VNx8SI "VNx8BI")
  (VNx16SI "VNx16BI") (VNx32SI "VNx32BI") (VNx2DI "VNx2BI") (VNx4DI "VNx4BI")
  (VNx8DI "VNx8BI") (VNx16DI "VNx16BI") (VNx2HF "VNx2BI") (VNx4HF "VNx4BI")
  (VNx8HF "VNx8BI") (VNx16HF "VNx16BI") (VNx32HF "VNx32BI") (VNx64HF "VNx64BI")
  (VNx2SF "VNx2BI") (VNx4SF "VNx4BI") (VNx8SF "VNx8BI") (VNx16SF "VNx16BI")
  (VNx32SF "VNx32BI") (VNx2DF "VNx2BI") (VNx4DF "VNx4BI") (VNx8DF "VNx8BI")
  (VNx16DF "VNx16BI")
  (VNx2x2QI "VNx2BI") (VNx3x2QI "VNx2BI") (VNx4x2QI "VNx2BI") (VNx5x2QI "VNx2BI")
  (VNx6x2QI "VNx2BI") (VNx7x2QI "VNx2BI") (VNx8x2QI "VNx2BI")
  (VNx2x4QI "VNx4BI") (VNx3x4QI "VNx4BI") (VNx4x4QI "VNx4BI") (VNx5x4QI "VNx4BI")
  (VNx6x4QI "VNx4BI") (VNx7x4QI "VNx4BI") (VNx8x4QI "VNx4BI")
  (VNx2x8QI "VNx8BI") (VNx3x8QI "VNx8BI") (VNx4x8QI "VNx8BI") (VNx5x8QI "VNx8BI")
  (VNx6x8QI "VNx8BI") (VNx7x8QI "VNx8BI") (VNx8x8QI "VNx8BI")
  (VNx2x16QI "VNx16BI") (VNx3x16QI "VNx16BI") (VNx4x16QI "VNx16BI") (VNx5x16QI "VNx16BI")
  (VNx6x16QI "VNx16BI") (VNx7x16QI "VNx16BI") (VNx8x16QI "VNx16BI")
  (VNx2x32QI "VNx32BI") (VNx3x32QI "VNx32BI") (VNx4x32QI "VNx32BI")
  (VNx2x64QI "VNx64BI")
  (VNx2x2HI "VNx2BI") (VNx3x2HI "VNx2BI") (VNx4x2HI "VNx2BI") (VNx5x2HI "VNx2BI")
  (VNx6x2HI "VNx2BI") (VNx7x2HI "VNx2BI") (VNx8x2HI "VNx2BI")
  (VNx2x4HI "VNx4BI") (VNx3x4HI "VNx4BI") (VNx4x4HI "VNx4BI") (VNx5x4HI "VNx4BI")
  (VNx6x4HI "VNx4BI") (VNx7x4HI "VNx4BI") (VNx8x4HI "VNx4BI")
  (VNx2x8HI "VNx8BI") (VNx3x8HI "VNx8BI") (VNx4x8HI "VNx8BI") (VNx5x8HI "VNx8BI")
  (VNx6x8HI "VNx8BI") (VNx7x8HI "VNx8BI") (VNx8x8HI "VNx8BI")
  (VNx2x16HI "VNx16BI") (VNx3x16HI "VNx16BI") (VNx4x16HI "VNx16BI")
  (VNx2x32HI "VNx32BI")
  (VNx2x2SI "VNx2BI") (VNx3x2SI "VNx2BI") (VNx4x2SI "VNx2BI") (VNx5x2SI "VNx2BI")
  (VNx6x2SI "VNx2BI") (VNx7x2SI "VNx2BI") (VNx8x2SI "VNx2BI")
  (VNx2x4SI "VNx4BI") (VNx3x4SI "VNx4BI") (VNx4x4SI "VNx4BI") (VNx5x4SI "VNx4BI")
  (VNx6x4SI "VNx4BI") (VNx7x4SI "VNx4BI") (VNx8x4SI "VNx4BI")
  (VNx2x8SI "VNx8BI") (VNx3x8SI "VNx8BI") (VNx4x8SI "VNx8BI")
  (VNx2x16SI "VNx16BI")
  (VNx2x2DI "VNx2BI") (VNx3x2DI "VNx2BI") (VNx4x2DI "VNx2BI") (VNx5x2DI "VNx2BI")
  (VNx6x2DI "VNx2BI") (VNx7x2DI "VNx2BI") (VNx8x2DI "VNx2BI")
  (VNx2x4DI "VNx4BI") (VNx3x4DI "VNx4BI") (VNx4x4DI "VNx4BI")
  (VNx2x8DI "VNx8BI")
  (VNx2x2HF "VNx2BI") (VNx3x2HF "VNx2BI") (VNx4x2HF "VNx2BI") (VNx5x2HF "VNx2BI")
  (VNx6x2HF "VNx2BI") (VNx7x2HF "VNx2BI") (VNx8x2HF "VNx2BI")
  (VNx2x4HF "VNx4BI") (VNx3x4HF "VNx4BI") (VNx4x4HF "VNx4BI") (VNx5x4HF "VNx4BI")
  (VNx6x4HF "VNx4BI") (VNx7x4HF "VNx4BI") (VNx8x4HF "VNx4BI")
  (VNx2x8HF "VNx8BI") (VNx3x8HF "VNx8BI") (VNx4x8HF "VNx8BI") (VNx5x8HF "VNx8BI")
  (VNx6x8HF "VNx8BI") (VNx7x8HF "VNx8BI") (VNx8x8HF "VNx8BI")
  (VNx2x16HF "VNx16BI") (VNx3x16HF "VNx16BI") (VNx4x16HF "VNx16BI")
  (VNx2x32HF "VNx32BI")
  (VNx2x2SF "VNx2BI") (VNx3x2SF "VNx2BI") (VNx4x2SF "VNx2BI") (VNx5x2SF "VNx2BI")
  (VNx6x2SF "VNx2BI") (VNx7x2SF "VNx2BI") (VNx8x2SF "VNx2BI")
  (VNx2x4SF "VNx4BI") (VNx3x4SF "VNx4BI") (VNx4x4SF "VNx4BI") (VNx5x4SF "VNx4BI")
  (VNx6x4SF "VNx4BI") (VNx7x4SF "VNx4BI") (VNx8x4SF "VNx4BI")
  (VNx2x8SF "VNx8BI") (VNx3x8SF "VNx8BI") (VNx4x8SF "VNx8BI")
  (VNx2x16SF "VNx16BI")
  (VNx2x2DF "VNx2BI") (VNx3x2DF "VNx2BI") (VNx4x2DF "VNx2BI") (VNx5x2DF "VNx2BI")
  (VNx6x2DF "VNx2BI") (VNx7x2DF "VNx2BI") (VNx8x2DF "VNx2BI")
  (VNx2x4DF "VNx4BI") (VNx3x4DF "VNx4BI") (VNx4x4DF "VNx4BI")
  (VNx2x8DF "VNx8BI")])

(define_mode_attr vm [
  (VNx2QI "vnx2bi") (VNx4QI "vnx4bi") (VNx8QI "vnx8bi") (VNx16QI "vnx16bi")
  (VNx32QI "vnx32bi") (VNx64QI "vnx64bi") (VNx128QI "vnx128bi") (VNx2HI "vnx2bi")
  (VNx4HI "vnx4bi") (VNx8HI "vnx8bi") (VNx16HI "vnx16bi") (VNx32HI "vnx32bi")
  (VNx64HI "vnx64bi") (VNx2SI "vnx2bi") (VNx4SI "vnx4bi") (VNx8SI "vnx8bi")
  (VNx16SI "vnx16bi") (VNx32SI "vnx32bi") (VNx2DI "vnx2bi") (VNx4DI "vnx4bi")
  (VNx8DI "vnx8bi") (VNx16DI "vnx16bi") (VNx2HF "vnx2bi") (VNx4HF "vnx4bi")
  (VNx8HF "vnx8bi") (VNx16HF "vnx16bi") (VNx32HF "vnx32bi") (VNx64HF "vnx64bi")
  (VNx2SF "vnx2bi") (VNx4SF "vnx4bi") (VNx8SF "vnx8bi") (VNx16SF "vnx16bi")
  (VNx32SF "vnx32bi") (VNx2DF "vnx2bi") (VNx4DF "vnx4bi") (VNx8DF "vnx8bi")
  (VNx16DF "vnx16bi")
  (VNx2QI "vnx2bi") (VNx4QI "vnx4bi") (VNx8QI "vnx8bi") (VNx16QI "vnx16bi")
  (VNx32QI "vnx32bi") (VNx64QI "vnx64bi") (VNx128QI "vnx128bi") (VNx2HI "vnx2bi")
  (VNx4HI "vnx4bi") (VNx8HI "vnx8bi") (VNx16HI "vnx16bi") (VNx32HI "vnx32bi")
  (VNx64HI "vnx64bi") (VNx2SI "vnx2bi") (VNx4SI "vnx4bi") (VNx8SI "vnx8bi")
  (VNx16SI "vnx16bi") (VNx32SI "vnx32bi") (VNx2DI "vnx2bi") (VNx4DI "vnx4bi")
  (VNx8DI "vnx8bi") (VNx16DI "vnx16bi") (VNx2HF "vnx2bi") (VNx4HF "vnx4bi")
  (VNx8HF "vnx8bi") (VNx16HF "vnx16bi") (VNx32HF "vnx32bi") (VNx64HF "vnx64bi")
  (VNx2SF "vnx2bi") (VNx4SF "vnx4bi") (VNx8SF "vnx8bi") (VNx16SF "vnx16bi")
  (VNx32SF "vnx32bi") (VNx2DF "vnx2bi") (VNx4DF "vnx4bi") (VNx8DF "vnx8bi")
  (VNx16DF "vnx16bi")
  (VNx2x2QI "vnx2bi") (VNx3x2QI "vnx2bi") (VNx4x2QI "vnx2bi") (VNx5x2QI "vnx2bi")
  (VNx6x2QI "vnx2bi") (VNx7x2QI "vnx2bi") (VNx8x2QI "vnx2bi")
  (VNx2x4QI "vnx4bi") (VNx3x4QI "vnx4bi") (VNx4x4QI "vnx4bi") (VNx5x4QI "vnx4bi")
  (VNx6x4QI "vnx4bi") (VNx7x4QI "vnx4bi") (VNx8x4QI "vnx4bi")
  (VNx2x8QI "vnx8bi") (VNx3x8QI "vnx8bi") (VNx4x8QI "vnx8bi") (VNx5x8QI "vnx8bi")
  (VNx6x8QI "vnx8bi") (VNx7x8QI "vnx8bi") (VNx8x8QI "vnx8bi")
  (VNx2x16QI "vnx16bi") (VNx3x16QI "vnx16bi") (VNx4x16QI "vnx16bi") (VNx5x16QI "vnx16bi")
  (VNx6x16QI "vnx16bi") (VNx7x16QI "vnx16bi") (VNx8x16QI "vnx16bi")
  (VNx2x32QI "vnx32bi") (VNx3x32QI "vnx32bi") (VNx4x32QI "vnx32bi")
  (VNx2x64QI "vnx64bi")
  (VNx2x2HI "vnx2bi") (VNx3x2HI "vnx2bi") (VNx4x2HI "vnx2bi") (VNx5x2HI "vnx2bi")
  (VNx6x2HI "vnx2bi") (VNx7x2HI "vnx2bi") (VNx8x2HI "vnx2bi")
  (VNx2x4HI "vnx4bi") (VNx3x4HI "vnx4bi") (VNx4x4HI "vnx4bi") (VNx5x4HI "vnx4bi")
  (VNx6x4HI "vnx4bi") (VNx7x4HI "vnx4bi") (VNx8x4HI "vnx4bi")
  (VNx2x8HI "vnx8bi") (VNx3x8HI "vnx8bi") (VNx4x8HI "vnx8bi") (VNx5x8HI "vnx8bi")
  (VNx6x8HI "vnx8bi") (VNx7x8HI "vnx8bi") (VNx8x8HI "vnx8bi")
  (VNx2x16HI "vnx16bi") (VNx3x16HI "vnx16bi") (VNx4x16HI "vnx16bi")
  (VNx2x32HI "vnx32bi")
  (VNx2x2SI "vnx2bi") (VNx3x2SI "vnx2bi") (VNx4x2SI "vnx2bi") (VNx5x2SI "vnx2bi")
  (VNx6x2SI "vnx2bi") (VNx7x2SI "vnx2bi") (VNx8x2SI "vnx2bi")
  (VNx2x4SI "vnx4bi") (VNx3x4SI "vnx4bi") (VNx4x4SI "vnx4bi") (VNx5x4SI "vnx4bi")
  (VNx6x4SI "vnx4bi") (VNx7x4SI "vnx4bi") (VNx8x4SI "vnx4bi")
  (VNx2x8SI "vnx8bi") (VNx3x8SI "vnx8bi") (VNx4x8SI "vnx8bi")
  (VNx2x16SI "vnx16bi")
  (VNx2x2DI "vnx2bi") (VNx3x2DI "vnx2bi") (VNx4x2DI "vnx2bi") (VNx5x2DI "vnx2bi")
  (VNx6x2DI "vnx2bi") (VNx7x2DI "vnx2bi") (VNx8x2DI "vnx2bi")
  (VNx2x4DI "vnx4bi") (VNx3x4DI "vnx4bi") (VNx4x4DI "vnx4bi")
  (VNx2x8DI "vnx8bi")
  (VNx2x2HF "vnx2bi") (VNx3x2HF "vnx2bi") (VNx4x2HF "vnx2bi") (VNx5x2HF "vnx2bi")
  (VNx6x2HF "vnx2bi") (VNx7x2HF "vnx2bi") (VNx8x2HF "vnx2bi")
  (VNx2x4HF "vnx4bi") (VNx3x4HF "vnx4bi") (VNx4x4HF "vnx4bi") (VNx5x4HF "vnx4bi")
  (VNx6x4HF "vnx4bi") (VNx7x4HF "vnx4bi") (VNx8x4HF "vnx4bi")
  (VNx2x8HF "vnx8bi") (VNx3x8HF "vnx8bi") (VNx4x8HF "vnx8bi") (VNx5x8HF "vnx8bi")
  (VNx6x8HF "vnx8bi") (VNx7x8HF "vnx8bi") (VNx8x8HF "vnx8bi")
  (VNx2x16HF "vnx16bi") (VNx3x16HF "vnx16bi") (VNx4x16HF "vnx16bi")
  (VNx2x32HF "vnx32bi")
  (VNx2x2SF "vnx2bi") (VNx3x2SF "vnx2bi") (VNx4x2SF "vnx2bi") (VNx5x2SF "vnx2bi")
  (VNx6x2SF "vnx2bi") (VNx7x2SF "vnx2bi") (VNx8x2SF "vnx2bi")
  (VNx2x4SF "vnx4bi") (VNx3x4SF "vnx4bi") (VNx4x4SF "vnx4bi") (VNx5x4SF "vnx4bi")
  (VNx6x4SF "vnx4bi") (VNx7x4SF "vnx4bi") (VNx8x4SF "vnx4bi")
  (VNx2x8SF "vnx8bi") (VNx3x8SF "vnx8bi") (VNx4x8SF "vnx8bi")
  (VNx2x16SF "vnx16bi")
  (VNx2x2DF "vnx2bi") (VNx3x2DF "vnx2bi") (VNx4x2DF "vnx2bi") (VNx5x2DF "vnx2bi")
  (VNx6x2DF "vnx2bi") (VNx7x2DF "vnx2bi") (VNx8x2DF "vnx2bi")
  (VNx2x4DF "vnx4bi") (VNx3x4DF "vnx4bi") (VNx4x4DF "vnx4bi")
  (VNx2x8DF "vnx8bi")])

;; Map a vector tuple mode to its vector mode.
(define_mode_attr VTSUB [
  (VNx2x2QI "VNx2QI") (VNx3x2QI "VNx2QI") (VNx4x2QI "VNx2QI") (VNx5x2QI "VNx2QI")
  (VNx6x2QI "VNx2QI") (VNx7x2QI "VNx2QI") (VNx8x2QI "VNx2QI")
  (VNx2x4QI "VNx4QI") (VNx3x4QI "VNx4QI") (VNx4x4QI "VNx4QI") (VNx5x4QI "VNx4QI")
  (VNx6x4QI "VNx4QI") (VNx7x4QI "VNx4QI") (VNx8x4QI "VNx4QI")
  (VNx2x8QI "VNx8QI") (VNx3x8QI "VNx8QI") (VNx4x8QI "VNx8QI") (VNx5x8QI "VNx8QI")
  (VNx6x8QI "VNx8QI") (VNx7x8QI "VNx8QI") (VNx8x8QI "VNx8QI")
  (VNx2x16QI "VNx16QI") (VNx3x16QI "VNx16QI") (VNx4x16QI "VNx16QI") (VNx5x16QI "VNx16QI")
  (VNx6x16QI "VNx16QI") (VNx7x16QI "VNx16QI") (VNx8x16QI "VNx16QI")
  (VNx2x32QI "VNx32QI") (VNx3x32QI "VNx32QI") (VNx4x32QI "VNx32QI")
  (VNx2x64QI "VNx64QI")
  (VNx2x2HI "VNx2HI") (VNx3x2HI "VNx2HI") (VNx4x2HI "VNx2HI") (VNx5x2HI "VNx2HI")
  (VNx6x2HI "VNx2HI") (VNx7x2HI "VNx2HI") (VNx8x2HI "VNx2HI")
  (VNx2x4HI "VNx4HI") (VNx3x4HI "VNx4HI") (VNx4x4HI "VNx4HI") (VNx5x4HI "VNx4HI")
  (VNx6x4HI "VNx4HI") (VNx7x4HI "VNx4HI") (VNx8x4HI "VNx4HI")
  (VNx2x8HI "VNx8HI") (VNx3x8HI "VNx8HI") (VNx4x8HI "VNx8HI") (VNx5x8HI "VNx8HI")
  (VNx6x8HI "VNx8HI") (VNx7x8HI "VNx8HI") (VNx8x8HI "VNx8HI")
  (VNx2x16HI "VNx16HI") (VNx3x16HI "VNx16HI") (VNx4x16HI "VNx16HI")
  (VNx2x32HI "VNx32HI")
  (VNx2x2SI "VNx2SI") (VNx3x2SI "VNx2SI") (VNx4x2SI "VNx2SI") (VNx5x2SI "VNx2SI")
  (VNx6x2SI "VNx2SI") (VNx7x2SI "VNx2SI") (VNx8x2SI "VNx2SI")
  (VNx2x4SI "VNx4SI") (VNx3x4SI "VNx4SI") (VNx4x4SI "VNx4SI") (VNx5x4SI "VNx4SI")
  (VNx6x4SI "VNx4SI") (VNx7x4SI "VNx4SI") (VNx8x4SI "VNx4SI")
  (VNx2x8SI "VNx8SI") (VNx3x8SI "VNx8SI") (VNx4x8SI "VNx8SI")
  (VNx2x16SI "VNx16SI")
  (VNx2x2DI "VNx2DI") (VNx3x2DI "VNx2DI") (VNx4x2DI "VNx2DI") (VNx5x2DI "VNx2DI")
  (VNx6x2DI "VNx2DI") (VNx7x2DI "VNx2DI") (VNx8x2DI "VNx2DI")
  (VNx2x4DI "VNx4DI") (VNx3x4DI "VNx4DI") (VNx4x4DI "VNx4DI")
  (VNx2x8DI "VNx8DI")
  (VNx2x2HF "VNx2HF") (VNx3x2HF "VNx2HF") (VNx4x2HF "VNx2HF") (VNx5x2HF "VNx2HF")
  (VNx6x2HF "VNx2HF") (VNx7x2HF "VNx2HF") (VNx8x2HF "VNx2HF")
  (VNx2x4HF "VNx4HF") (VNx3x4HF "VNx4HF") (VNx4x4HF "VNx4HF") (VNx5x4HF "VNx4HF")
  (VNx6x4HF "VNx4HF") (VNx7x4HF "VNx4HF") (VNx8x4HF "VNx4HF")
  (VNx2x8HF "VNx8HF") (VNx3x8HF "VNx8HF") (VNx4x8HF "VNx8HF") (VNx5x8HF "VNx8HF")
  (VNx6x8HF "VNx8HF") (VNx7x8HF "VNx8HF") (VNx8x8HF "VNx8HF")
  (VNx2x16HF "VNx16HF") (VNx3x16HF "VNx16HF") (VNx4x16HF "VNx16HF")
  (VNx2x32HF "VNx32HF")
  (VNx2x2SF "VNx2SF") (VNx3x2SF "VNx2SF") (VNx4x2SF "VNx2SF") (VNx5x2SF "VNx2SF")
  (VNx6x2SF "VNx2SF") (VNx7x2SF "VNx2SF") (VNx8x2SF "VNx2SF")
  (VNx2x4SF "VNx4SF") (VNx3x4SF "VNx4SF") (VNx4x4SF "VNx4SF") (VNx5x4SF "VNx4SF")
  (VNx6x4SF "VNx4SF") (VNx7x4SF "VNx4SF") (VNx8x4SF "VNx4SF")
  (VNx2x8SF "VNx8SF") (VNx3x8SF "VNx8SF") (VNx4x8SF "VNx8SF")
  (VNx2x16SF "VNx16SF")
  (VNx2x2DF "VNx2DF") (VNx3x2DF "VNx2DF") (VNx4x2DF "VNx2DF") (VNx5x2DF "VNx2DF")
  (VNx6x2DF "VNx2DF") (VNx7x2DF "VNx2DF") (VNx8x2DF "VNx2DF")
  (VNx2x4DF "VNx4DF") (VNx3x4DF "VNx4DF") (VNx4x4DF "VNx4DF")
  (VNx2x8DF "VNx8DF")])

;; Map a vectr mode to vector tuple mode.
(define_mode_attr VT2 [
  (VNx2QI "VNx2x2QI") (VNx4QI "VNx2x4QI") (VNx8QI "VNx2x8QI") (VNx16QI "VNx2x16QI") (VNx32QI "VNx2x32QI") (VNx64QI "VNx2x64QI")
  (VNx2HI "VNx2x2HI") (VNx4HI "VNx2x4HI") (VNx8HI "VNx2x8HI") (VNx16HI "VNx2x16HI") (VNx32HI "VNx2x32HI")
  (VNx2SI "VNx2x2SI") (VNx4SI "VNx2x4SI") (VNx8SI "VNx2x8SI") (VNx16SI "VNx2x16SI")
  (VNx2DI "VNx2x2DI") (VNx4DI "VNx2x4DI") (VNx8DI "VNx2x8DI")
  (VNx2HF "VNx2x2HF") (VNx4HF "VNx2x4HF") (VNx8HF "VNx2x8HF") (VNx16HF "VNx2x16HF") (VNx32HF "VNx2x32HF")
  (VNx2SF "VNx2x2SF") (VNx4SF "VNx2x4SF") (VNx8SF "VNx2x8SF") (VNx16SF "VNx2x16SF")
  (VNx2DF "VNx2x2DF") (VNx4DF "VNx2x4DF") (VNx8DF "VNx2x8DF")])

(define_mode_attr VT3 [
  (VNx2QI "VNx3x2QI") (VNx4QI "VNx3x4QI") (VNx8QI "VNx3x8QI") (VNx16QI "VNx3x16QI") (VNx32QI "VNx3x32QI")
  (VNx2HI "VNx3x2HI") (VNx4HI "VNx3x4HI") (VNx8HI "VNx3x8HI") (VNx16HI "VNx3x16HI")
  (VNx2SI "VNx3x2SI") (VNx4SI "VNx3x4SI") (VNx8SI "VNx3x8SI")
  (VNx2DI "VNx3x2DI") (VNx4DI "VNx3x4DI")
  (VNx2HF "VNx3x2HF") (VNx4HF "VNx3x4HF") (VNx8HF "VNx3x8HF") (VNx16HF "VNx3x16HF")
  (VNx2SF "VNx3x2SF") (VNx4SF "VNx3x4SF") (VNx8SF "VNx3x8SF")
  (VNx2DF "VNx3x2DF") (VNx4DF "VNx3x4DF")])

(define_mode_attr VT4 [
  (VNx2QI "VNx4x2QI") (VNx4QI "VNx4x4QI") (VNx8QI "VNx4x8QI") (VNx16QI "VNx4x16QI") (VNx32QI "VNx4x32QI")
  (VNx2HI "VNx4x2HI") (VNx4HI "VNx4x4HI") (VNx8HI "VNx4x8HI") (VNx16HI "VNx4x16HI")
  (VNx2SI "VNx4x2SI") (VNx4SI "VNx4x4SI") (VNx8SI "VNx4x8SI")
  (VNx2DI "VNx4x2DI") (VNx4DI "VNx4x4DI")
  (VNx2HF "VNx4x2HF") (VNx4HF "VNx4x4HF") (VNx8HF "VNx4x8HF") (VNx16HF "VNx4x16HF")
  (VNx2SF "VNx4x2SF") (VNx4SF "VNx4x4SF") (VNx8SF "VNx4x8SF")
  (VNx2DF "VNx4x2DF") (VNx4DF "VNx4x4DF")])

(define_mode_attr VT5 [
  (VNx2QI "VNx5x2QI") (VNx4QI "VNx5x4QI") (VNx8QI "VNx5x8QI") (VNx16QI "VNx5x16QI")
  (VNx2HI "VNx5x2HI") (VNx4HI "VNx5x4HI") (VNx8HI "VNx5x8HI")
  (VNx2SI "VNx5x2SI") (VNx4SI "VNx5x4SI")
  (VNx2DI "VNx5x2DI")
  (VNx2HF "VNx5x2HF") (VNx4HF "VNx5x4HF") (VNx8HF "VNx5x8HF")
  (VNx2SF "VNx5x2SF") (VNx4SF "VNx5x4SF")
  (VNx2DF "VNx5x2DF")])

(define_mode_attr VT6 [
  (VNx2QI "VNx6x2QI") (VNx4QI "VNx6x4QI") (VNx8QI "VNx6x8QI") (VNx16QI "VNx6x16QI")
  (VNx2HI "VNx6x2HI") (VNx4HI "VNx6x4HI") (VNx8HI "VNx6x8HI")
  (VNx2SI "VNx6x2SI") (VNx4SI "VNx6x4SI")
  (VNx2DI "VNx6x2DI")
  (VNx2HF "VNx6x2HF") (VNx4HF "VNx6x4HF") (VNx8HF "VNx6x8HF")
  (VNx2SF "VNx6x2SF") (VNx4SF "VNx6x4SF")
  (VNx2DF "VNx6x2DF")])

(define_mode_attr VT7 [
  (VNx2QI "VNx7x2QI") (VNx4QI "VNx7x4QI") (VNx8QI "VNx7x8QI") (VNx16QI "VNx7x16QI")
  (VNx2HI "VNx7x2HI") (VNx4HI "VNx7x4HI") (VNx8HI "VNx7x8HI")
  (VNx2SI "VNx7x2SI") (VNx4SI "VNx7x4SI")
  (VNx2DI "VNx7x2DI")
  (VNx2HF "VNx7x2HF") (VNx4HF "VNx7x4HF") (VNx8HF "VNx7x8HF")
  (VNx2SF "VNx7x2SF") (VNx4SF "VNx7x4SF")
  (VNx2DF "VNx7x2DF")])

(define_mode_attr VT8 [
  (VNx2QI "VNx8x2QI") (VNx4QI "VNx8x4QI") (VNx8QI "VNx8x8QI") (VNx16QI "VNx8x16QI")
  (VNx2HI "VNx8x2HI") (VNx4HI "VNx8x4HI") (VNx8HI "VNx8x8HI")
  (VNx2SI "VNx8x2SI") (VNx4SI "VNx8x4SI")
  (VNx2DI "VNx8x2DI")
  (VNx2HF "VNx8x2HF") (VNx4HF "VNx8x4HF") (VNx8HF "VNx8x8HF")
  (VNx2SF "VNx8x2SF") (VNx4SF "VNx8x4SF")
  (VNx2DF "VNx8x2DF")])

(define_mode_attr vt2 [
  (VNx2QI "vnx2x2qi") (VNx4QI "vnx2x4qi") (VNx8QI "vnx2x8qi") (VNx16QI "vnx2x16qi") (VNx32QI "vnx2x32qi") (VNx64QI "vnx2x64qi")
  (VNx2HI "vnx2x2hi") (VNx4HI "vnx2x4hi") (VNx8HI "vnx2x8hi") (VNx16HI "vnx2x16hi") (VNx32HI "vnx2x32hi")
  (VNx2SI "vnx2x2si") (VNx4SI "vnx2x4si") (VNx8SI "vnx2x8si") (VNx16SI "vnx2x16si")
  (VNx2DI "vnx2x2di") (VNx4DI "vnx2x4di") (VNx8DI "vnx2x8di")
  (VNx2HF "vnx2x2hf") (VNx4HF "vnx2x4hf") (VNx8HF "vnx2x8hf") (VNx16HF "vnx2x16hf") (VNx32HF "vnx2x32hf")
  (VNx2SF "vnx2x2sf") (VNx4SF "vnx2x4sf") (VNx8SF "vnx2x8sf") (VNx16SF "vnx2x16sf")
  (VNx2DF "vnx2x2df") (VNx4DF "vnx2x4df") (VNx8DF "vnx2x8df")])

(define_mode_attr vt3 [
  (VNx2QI "vnx3x2qi") (VNx4QI "vnx3x4qi") (VNx8QI "vnx3x8qi") (VNx16QI "vnx3x16qi") (VNx32QI "vnx3x32qi")
  (VNx2HI "vnx3x2hi") (VNx4HI "vnx3x4hi") (VNx8HI "vnx3x8hi") (VNx16HI "vnx3x16hi")
  (VNx2SI "vnx3x2si") (VNx4SI "vnx3x4si") (VNx8SI "vnx3x8si")
  (VNx2DI "vnx3x2di") (VNx4DI "vnx3x4di")
  (VNx2HF "vnx3x2hf") (VNx4HF "vnx3x4hf") (VNx8HF "vnx3x8hf") (VNx16HF "vnx3x16hf")
  (VNx2SF "vnx3x2sf") (VNx4SF "vnx3x4sf") (VNx8SF "vnx3x8sf")
  (VNx2DF "vnx3x2df") (VNx4DF "vnx3x4df")])

(define_mode_attr vt4 [
  (VNx2QI "vnx4x2qi") (VNx4QI "vnx4x4qi") (VNx8QI "vnx4x8qi") (VNx16QI "vnx4x16qi") (VNx32QI "vnx4x32qi")
  (VNx2HI "vnx4x2hi") (VNx4HI "vnx4x4hi") (VNx8HI "vnx4x8hi") (VNx16HI "vnx4x16hi")
  (VNx2SI "vnx4x2si") (VNx4SI "vnx4x4si") (VNx8SI "vnx4x8si")
  (VNx2DI "vnx4x2di") (VNx4DI "vnx4x4di")
  (VNx2HF "vnx4x2hf") (VNx4HF "vnx4x4hf") (VNx8HF "vnx4x8hf") (VNx16HF "vnx4x16hf")
  (VNx2SF "vnx4x2sf") (VNx4SF "vnx4x4sf") (VNx8SF "vnx4x8sf")
  (VNx2DF "vnx4x2df") (VNx4DF "vnx4x4df")])

(define_mode_attr vt5 [
  (VNx2QI "vnx5x2qi") (VNx4QI "vnx5x4qi") (VNx8QI "vnx5x8qi") (VNx16QI "vnx5x16qi")
  (VNx2HI "vnx5x2hi") (VNx4HI "vnx5x4hi") (VNx8HI "vnx5x8hi")
  (VNx2SI "vnx5x2si") (VNx4SI "vnx5x4si")
  (VNx2DI "vnx5x2di")
  (VNx2HF "vnx5x2hf") (VNx4HF "vnx5x4hf") (VNx8HF "vnx5x8hf")
  (VNx2SF "vnx5x2sf") (VNx4SF "vnx5x4sf")
  (VNx2DF "vnx5x2df")])

(define_mode_attr vt6 [
  (VNx2QI "vnx6x2qi") (VNx4QI "vnx6x4qi") (VNx8QI "vnx6x8qi") (VNx16QI "vnx6x16qi")
  (VNx2HI "vnx6x2hi") (VNx4HI "vnx6x4hi") (VNx8HI "vnx6x8hi")
  (VNx2SI "vnx6x2si") (VNx4SI "vnx6x4si")
  (VNx2DI "vnx6x2di")
  (VNx2HF "vnx6x2hf") (VNx4HF "vnx6x4hf") (VNx8HF "vnx6x8hf")
  (VNx2SF "vnx6x2sf") (VNx4SF "vnx6x4sf")
  (VNx2DF "vnx6x2df")])

(define_mode_attr vt7 [
  (VNx2QI "vnx7x2qi") (VNx4QI "vnx7x4qi") (VNx8QI "vnx7x8qi") (VNx16QI "vnx7x16qi")
  (VNx2HI "vnx7x2hi") (VNx4HI "vnx7x4hi") (VNx8HI "vnx7x8hi")
  (VNx2SI "vnx7x2si") (VNx4SI "vnx7x4si")
  (VNx2DI "vnx7x2di")
  (VNx2HF "vnx7x2hf") (VNx4HF "vnx7x4hf") (VNx8HF "vnx7x8hf")
  (VNx2SF "vnx7x2sf") (VNx4SF "vnx7x4sf")
  (VNx2DF "vnx7x2df")])

(define_mode_attr vt8 [
  (VNx2QI "vnx8x2qi") (VNx4QI "vnx8x4qi") (VNx8QI "vnx8x8qi") (VNx16QI "vnx8x16qi")
  (VNx2HI "vnx8x2hi") (VNx4HI "vnx8x4hi") (VNx8HI "vnx8x8hi")
  (VNx2SI "vnx8x2si") (VNx4SI "vnx8x4si")
  (VNx2DI "vnx8x2di")
  (VNx2HF "vnx8x2hf") (VNx4HF "vnx8x4hf") (VNx8HF "vnx8x8hf")
  (VNx2SF "vnx8x2sf") (VNx4SF "vnx8x4sf")
  (VNx2DF "vnx8x2df")])

;; Map a vector mode to its element mode.
(define_mode_attr VSUB [
  (VNx2QI "QI") (VNx4QI "QI") (VNx8QI "QI") (VNx16QI "QI")
  (VNx32QI "QI") (VNx64QI "QI") (VNx128QI "QI") (VNx2HI "HI")
  (VNx4HI "HI") (VNx8HI "HI") (VNx16HI "HI") (VNx32HI "HI")
  (VNx64HI "HI") (VNx2SI "SI") (VNx4SI "SI") (VNx8SI "SI")
  (VNx16SI "SI") (VNx32SI "SI") (VNx2DI "DI") (VNx4DI "DI")
  (VNx8DI "DI") (VNx16DI "DI") (VNx2HF "HF") (VNx4HF "HF")
  (VNx8HF "HF") (VNx16HF "HF") (VNx32HF "HF") (VNx64HF "HF")
  (VNx2SF "SF") (VNx4SF "SF") (VNx8SF "SF") (VNx16SF "SF")
  (VNx32SF "SF") (VNx2DF "DF") (VNx4DF "DF") (VNx8DF "DF")
  (VNx16DF "DF")
  (VNx2x2QI "QI") (VNx3x2QI "QI") (VNx4x2QI "QI") (VNx5x2QI "QI")
  (VNx6x2QI "QI") (VNx7x2QI "QI") (VNx8x2QI "QI")
  (VNx2x4QI "QI") (VNx3x4QI "QI") (VNx4x4QI "QI") (VNx5x4QI "QI")
  (VNx6x4QI "QI") (VNx7x4QI "QI") (VNx8x4QI "QI")
  (VNx2x8QI "QI") (VNx3x8QI "QI") (VNx4x8QI "QI") (VNx5x8QI "QI")
  (VNx6x8QI "QI") (VNx7x8QI "QI") (VNx8x8QI "QI")
  (VNx2x16QI "QI") (VNx3x16QI "QI") (VNx4x16QI "QI") (VNx5x16QI "QI")
  (VNx6x16QI "QI") (VNx7x16QI "QI") (VNx8x16QI "QI")
  (VNx2x32QI "QI") (VNx3x32QI "QI") (VNx4x32QI "QI")
  (VNx2x64QI "QI")
  (VNx2x2HI "HI") (VNx3x2HI "HI") (VNx4x2HI "HI") (VNx5x2HI "HI")
  (VNx6x2HI "HI") (VNx7x2HI "HI") (VNx8x2HI "HI")
  (VNx2x4HI "HI") (VNx3x4HI "HI") (VNx4x4HI "HI") (VNx5x4HI "HI")
  (VNx6x4HI "HI") (VNx7x4HI "HI") (VNx8x4HI "HI")
  (VNx2x8HI "HI") (VNx3x8HI "HI") (VNx4x8HI "HI") (VNx5x8HI "HI")
  (VNx6x8HI "HI") (VNx7x8HI "HI") (VNx8x8HI "HI")
  (VNx2x16HI "HI") (VNx3x16HI "HI") (VNx4x16HI "HI")
  (VNx2x32HI "HI")
  (VNx2x2SI "SI") (VNx3x2SI "SI") (VNx4x2SI "SI") (VNx5x2SI "SI")
  (VNx6x2SI "SI") (VNx7x2SI "SI") (VNx8x2SI "SI")
  (VNx2x4SI "SI") (VNx3x4SI "SI") (VNx4x4SI "SI") (VNx5x4SI "SI")
  (VNx6x4SI "SI") (VNx7x4SI "SI") (VNx8x4SI "SI")
  (VNx2x8SI "SI") (VNx3x8SI "SI") (VNx4x8SI "SI")
  (VNx2x16SI "SI")
  (VNx2x2DI "DI") (VNx3x2DI "DI") (VNx4x2DI "DI") (VNx5x2DI "DI")
  (VNx6x2DI "DI") (VNx7x2DI "DI") (VNx8x2DI "DI")
  (VNx2x4DI "DI") (VNx3x4DI "DI") (VNx4x4DI "DI")
  (VNx2x8DI "DI")
  (VNx2x2HF "HF") (VNx3x2HF "HF") (VNx4x2HF "HF") (VNx5x2HF "HF")
  (VNx6x2HF "HF") (VNx7x2HF "HF") (VNx8x2HF "HF")
  (VNx2x4HF "HF") (VNx3x4HF "HF") (VNx4x4HF "HF") (VNx5x4HF "HF")
  (VNx6x4HF "HF") (VNx7x4HF "HF") (VNx8x4HF "HF")
  (VNx2x8HF "HF") (VNx3x8HF "HF") (VNx4x8HF "HF") (VNx5x8HF "HF")
  (VNx6x8HF "HF") (VNx7x8HF "HF") (VNx8x8HF "HF")
  (VNx2x16HF "HF") (VNx3x16HF "HF") (VNx4x16HF "HF")
  (VNx2x32HF "HF")
  (VNx2x2SF "SF") (VNx3x2SF "SF") (VNx4x2SF "SF") (VNx5x2SF "SF")
  (VNx6x2SF "SF") (VNx7x2SF "SF") (VNx8x2SF "SF")
  (VNx2x4SF "SF") (VNx3x4SF "SF") (VNx4x4SF "SF") (VNx5x4SF "SF")
  (VNx6x4SF "SF") (VNx7x4SF "SF") (VNx8x4SF "SF")
  (VNx2x8SF "SF") (VNx3x8SF "SF") (VNx4x8SF "SF")
  (VNx2x16SF "SF")
  (VNx2x2DF "DF") (VNx3x2DF "DF") (VNx4x2DF "DF") (VNx5x2DF "DF")
  (VNx6x2DF "DF") (VNx7x2DF "DF") (VNx8x2DF "DF")
  (VNx2x4DF "DF") (VNx3x4DF "DF") (VNx4x4DF "DF")
  (VNx2x8DF "DF")])

(define_mode_attr VWSUB [
  (VNx2QI "HI") (VNx4QI "HI") (VNx8QI "HI") (VNx16QI "HI")
  (VNx32QI "HI") (VNx64QI "HI") (VNx128QI "HI") (VNx2HI "SI")
  (VNx4HI "SI") (VNx8HI "SI") (VNx16HI "SI") (VNx32HI "SI")
  (VNx64HI "SI") (VNx2SI "DI") (VNx4SI "DI") (VNx8SI "DI")
  (VNx16SI "DI") (VNx32SI "DI") (VNx2HF "SF") (VNx4HF "SF")
  (VNx8HF "SF") (VNx16HF "SF") (VNx32HF "SF") (VNx64HF "SF")
  (VNx2SF "DF") (VNx4SF "DF") (VNx8SF "DF") (VNx16SF "DF")
  (VNx32SF "DF")
  (VNx2x2QI "HI") (VNx3x2QI "HI") (VNx4x2QI "HI") (VNx5x2QI "HI")
  (VNx6x2QI "HI") (VNx7x2QI "HI") (VNx8x2QI "HI")
  (VNx2x4QI "HI") (VNx3x4QI "HI") (VNx4x4QI "HI") (VNx5x4QI "HI")
  (VNx6x4QI "HI") (VNx7x4QI "HI") (VNx8x4QI "HI")
  (VNx2x8QI "HI") (VNx3x8QI "HI") (VNx4x8QI "HI") (VNx5x8QI "HI")
  (VNx6x8QI "HI") (VNx7x8QI "HI") (VNx8x8QI "HI")
  (VNx2x16QI "HI") (VNx3x16QI "HI") (VNx4x16QI "HI") (VNx5x16QI "HI")
  (VNx6x16QI "HI") (VNx7x16QI "HI") (VNx8x16QI "HI")
  (VNx2x32QI "HI") (VNx3x32QI "HI") (VNx4x32QI "HI")
  (VNx2x64QI "HI")
  (VNx2x2HI "SI") (VNx3x2HI "SI") (VNx4x2HI "SI") (VNx5x2HI "SI")
  (VNx6x2HI "SI") (VNx7x2HI "SI") (VNx8x2HI "SI")
  (VNx2x4HI "SI") (VNx3x4HI "SI") (VNx4x4HI "SI") (VNx5x4HI "SI")
  (VNx6x4HI "SI") (VNx7x4HI "SI") (VNx8x4HI "SI")
  (VNx2x8HI "SI") (VNx3x8HI "SI") (VNx4x8HI "SI") (VNx5x8HI "SI")
  (VNx6x8HI "SI") (VNx7x8HI "SI") (VNx8x8HI "SI")
  (VNx2x16HI "SI") (VNx3x16HI "SI") (VNx4x16HI "SI")
  (VNx2x32HI "SI")
  (VNx2x2SI "DI") (VNx3x2SI "DI") (VNx4x2SI "DI") (VNx5x2SI "DI")
  (VNx6x2SI "DI") (VNx7x2SI "DI") (VNx8x2SI "DI")
  (VNx2x4SI "DI") (VNx3x4SI "DI") (VNx4x4SI "DI") (VNx5x4SI "DI")
  (VNx6x4SI "DI") (VNx7x4SI "DI") (VNx8x4SI "DI")
  (VNx2x8SI "DI") (VNx3x8SI "DI") (VNx4x8SI "DI")
  (VNx2x16SI "DI")
  (VNx2x2HF "SF") (VNx3x2HF "SF") (VNx4x2HF "SF") (VNx5x2HF "SF")
  (VNx6x2HF "SF") (VNx7x2HF "SF") (VNx8x2HF "SF")
  (VNx2x4HF "SF") (VNx3x4HF "SF") (VNx4x4HF "SF") (VNx5x4HF "SF")
  (VNx6x4HF "SF") (VNx7x4HF "SF") (VNx8x4HF "SF")
  (VNx2x8HF "SF") (VNx3x8HF "SF") (VNx4x8HF "SF") (VNx5x8HF "SF")
  (VNx6x8HF "SF") (VNx7x8HF "SF") (VNx8x8HF "SF")
  (VNx2x16HF "SF") (VNx3x16HF "SF") (VNx4x16HF "SF")
  (VNx2x32HF "SF")
  (VNx2x2SF "DF") (VNx3x2SF "DF") (VNx4x2SF "DF") (VNx5x2SF "DF")
  (VNx6x2SF "DF") (VNx7x2SF "DF") (VNx8x2SF "DF")
  (VNx2x4SF "DF") (VNx3x4SF "DF") (VNx4x4SF "DF") (VNx5x4SF "DF")
  (VNx6x4SF "DF") (VNx7x4SF "DF") (VNx8x4SF "DF")
  (VNx2x8SF "DF") (VNx3x8SF "DF") (VNx4x8SF "DF")
  (VNx2x16SF "DF")])

(define_mode_attr vsub [
  (VNx2QI "qi") (VNx4QI "qi") (VNx8QI "qi") (VNx16QI "qi")
  (VNx32QI "qi") (VNx64QI "qi") (VNx128QI "qi") (VNx2HI "hi")
  (VNx4HI "hi") (VNx8HI "hi") (VNx16HI "hi") (VNx32HI "hi")
  (VNx64HI "hi") (VNx2SI "si") (VNx4SI "si") (VNx8SI "si")
  (VNx16SI "si") (VNx32SI "si") (VNx2DI "di") (VNx4DI "di")
  (VNx8DI "di") (VNx16DI "di") (VNx2HF "hf") (VNx4HF "hf")
  (VNx8HF "hf") (VNx16HF "hf") (VNx32HF "hf") (VNx64HF "hf")
  (VNx2SF "sf") (VNx4SF "sf") (VNx8SF "sf") (VNx16SF "sf")
  (VNx32SF "sf") (VNx2DF "df") (VNx4DF "df") (VNx8DF "df")
  (VNx16DF "df")
  (VNx2x2QI "qi") (VNx3x2QI "qi") (VNx4x2QI "qi") (VNx5x2QI "qi")
  (VNx6x2QI "qi") (VNx7x2QI "qi") (VNx8x2QI "qi")
  (VNx2x4QI "qi") (VNx3x4QI "qi") (VNx4x4QI "qi") (VNx5x4QI "qi")
  (VNx6x4QI "qi") (VNx7x4QI "qi") (VNx8x4QI "qi")
  (VNx2x8QI "qi") (VNx3x8QI "qi") (VNx4x8QI "qi") (VNx5x8QI "qi")
  (VNx6x8QI "qi") (VNx7x8QI "qi") (VNx8x8QI "qi")
  (VNx2x16QI "qi") (VNx3x16QI "qi") (VNx4x16QI "qi") (VNx5x16QI "qi")
  (VNx6x16QI "qi") (VNx7x16QI "qi") (VNx8x16QI "qi")
  (VNx2x32QI "qi") (VNx3x32QI "qi") (VNx4x32QI "qi")
  (VNx2x64QI "qi")
  (VNx2x2HI "hi") (VNx3x2HI "hi") (VNx4x2HI "hi") (VNx5x2HI "hi")
  (VNx6x2HI "hi") (VNx7x2HI "hi") (VNx8x2HI "hi")
  (VNx2x4HI "hi") (VNx3x4HI "hi") (VNx4x4HI "hi") (VNx5x4HI "hi")
  (VNx6x4HI "hi") (VNx7x4HI "hi") (VNx8x4HI "hi")
  (VNx2x8HI "hi") (VNx3x8HI "hi") (VNx4x8HI "hi") (VNx5x8HI "hi")
  (VNx6x8HI "hi") (VNx7x8HI "hi") (VNx8x8HI "hi")
  (VNx2x16HI "hi") (VNx3x16HI "hi") (VNx4x16HI "hi")
  (VNx2x32HI "hi")
  (VNx2x2SI "si") (VNx3x2SI "si") (VNx4x2SI "si") (VNx5x2SI "si")
  (VNx6x2SI "si") (VNx7x2SI "si") (VNx8x2SI "si")
  (VNx2x4SI "si") (VNx3x4SI "si") (VNx4x4SI "si") (VNx5x4SI "si")
  (VNx6x4SI "si") (VNx7x4SI "si") (VNx8x4SI "si")
  (VNx2x8SI "si") (VNx3x8SI "si") (VNx4x8SI "si")
  (VNx2x16SI "si")
  (VNx2x2DI "di") (VNx3x2DI "di") (VNx4x2DI "di") (VNx5x2DI "di")
  (VNx6x2DI "di") (VNx7x2DI "di") (VNx8x2DI "di")
  (VNx2x4DI "di") (VNx3x4DI "di") (VNx4x4DI "di")
  (VNx2x8DI "di")
  (VNx2x2HF "hf") (VNx3x2HF "hf") (VNx4x2HF "hf") (VNx5x2HF "hf")
  (VNx6x2HF "hf") (VNx7x2HF "hf") (VNx8x2HF "hf")
  (VNx2x4HF "hf") (VNx3x4HF "hf") (VNx4x4HF "hf") (VNx5x4HF "hf")
  (VNx6x4HF "hf") (VNx7x4HF "hf") (VNx8x4HF "hf")
  (VNx2x8HF "hf") (VNx3x8HF "hf") (VNx4x8HF "hf") (VNx5x8HF "hf")
  (VNx6x8HF "hf") (VNx7x8HF "hf") (VNx8x8HF "hf")
  (VNx2x16HF "hf") (VNx3x16HF "hf") (VNx4x16HF "hf")
  (VNx2x32HF "hf")
  (VNx2x2SF "sf") (VNx3x2SF "sf") (VNx4x2SF "sf") (VNx5x2SF "sf")
  (VNx6x2SF "sf") (VNx7x2SF "sf") (VNx8x2SF "sf")
  (VNx2x4SF "sf") (VNx3x4SF "sf") (VNx4x4SF "sf") (VNx5x4SF "sf")
  (VNx6x4SF "sf") (VNx7x4SF "sf") (VNx8x4SF "sf")
  (VNx2x8SF "sf") (VNx3x8SF "sf") (VNx4x8SF "sf")
  (VNx2x16SF "sf")
  (VNx2x2DF "df") (VNx3x2DF "df") (VNx4x2DF "df") (VNx5x2DF "df")
  (VNx6x2DF "df") (VNx7x2DF "df") (VNx8x2DF "df")
  (VNx2x4DF "df") (VNx3x4DF "df") (VNx4x4DF "df")
  (VNx2x8DF "df")])

;; Map same size mode.
(define_mode_attr VMAP [
  (VNx2QI "VNx2QI") (VNx4QI "VNx4QI") (VNx8QI "VNx8QI") (VNx16QI "VNx16QI")
  (VNx32QI "VNx32QI") (VNx64QI "VNx64QI") (VNx128QI "VNx128QI") (VNx2HI "VNx2HI")
  (VNx4HI "VNx4HI") (VNx8HI "VNx8HI") (VNx16HI "VNx16HI") (VNx32HI "VNx32HI")
  (VNx64HI "VNx64HI") (VNx2SI "VNx2SI") (VNx4SI "VNx4SI") (VNx8SI "VNx8SI")
  (VNx16SI "VNx16SI") (VNx32SI "VNx32SI") (VNx2DI "VNx2DI") (VNx4DI "VNx4DI")
  (VNx8DI "VNx8DI") (VNx16DI "VNx16DI") (VNx2HF "VNx2HI") (VNx4HF "VNx4HI")
  (VNx8HF "VNx8HI") (VNx16HF "VNx16HI") (VNx32HF "VNx32HI") (VNx64HF "VNx64HI")
  (VNx2SF "VNx2SI") (VNx4SF "VNx4SI") (VNx8SF "VNx8SI") (VNx16SF "VNx16SI")
  (VNx32SF "VNx32SI") (VNx2DF "VNx2DI") (VNx4DF "VNx4DI") (VNx8DF "VNx8DI")
  (VNx16DF "VNx16DI")])

(define_mode_attr VMAP_HALF [
  (VNx4QI "VNx2QI") (VNx8QI "VNx4QI") (VNx16QI "VNx8QI") (VNx32QI "VNx16QI") (VNx64QI "VNx32QI") (VNx128QI "VNx64QI")
  (VNx4HI "VNx2HI") (VNx8HI "VNx4HI") (VNx16HI "VNx8HI") (VNx32HI "VNx16HI") (VNx64HI "VNx32HI")
  (VNx4SI "VNx2SI") (VNx8SI "VNx4SI") (VNx16SI "VNx8SI") (VNx32SI "VNx16SI")
  (VNx4DI "VNx2DI") (VNx8DI "VNx4DI") (VNx16DI "VNx8DI")
  (VNx4HF "VNx2HI") (VNx8HF "VNx4HI") (VNx16HF "VNx8HI") (VNx32HF "VNx16HI") (VNx64HF "VNx32HI")
  (VNx4SF "VNx2SI") (VNx8SF "VNx4SI") (VNx16SF "VNx8SI") (VNx32SF "VNx16SI")
  (VNx4DF "VNx2DI") (VNx8DF "VNx4DI") (VNx16DF "VNx8DI")])

(define_mode_attr VMAPI16 [
  (VNx2QI "VNx2HI") (VNx4QI "VNx4HI") (VNx8QI "VNx8HI") (VNx16QI "VNx16HI")
  (VNx32QI "VNx32HI") (VNx64QI "VNx64HI") (VNx2HI "VNx2HI")
  (VNx4HI "VNx4HI") (VNx8HI "VNx8HI") (VNx16HI "VNx16HI") (VNx32HI "VNx32HI")
  (VNx64HI "VNx64HI") (VNx2SI "VNx2HI") (VNx4SI "VNx4HI") (VNx8SI "VNx8HI")
  (VNx16SI "VNx16HI") (VNx32SI "VNx32HI") (VNx2DI "VNx2HI") (VNx4DI "VNx4HI")
  (VNx8DI "VNx8HI") (VNx16DI "VNx16HI") (VNx2HF "VNx2HI") (VNx4HF "VNx4HI")
  (VNx8HF "VNx8HI") (VNx16HF "VNx16HI") (VNx32HF "VNx32HI") (VNx64HF "VNx64HI")
  (VNx2SF "VNx2HI") (VNx4SF "VNx4HI") (VNx8SF "VNx8HI") (VNx16SF "VNx16HI")
  (VNx32SF "VNx32HI") (VNx2DF "VNx2HI") (VNx4DF "VNx4HI") (VNx8DF "VNx8HI")
  (VNx16DF "VNx16HI")])

(define_mode_attr vmap [
  (VNx2QI "vnx2qi") (VNx4QI "vnx4qi") (VNx8QI "vnx8qi") (VNx16QI "vnx16qi")
  (VNx32QI "vnx32qi") (VNx64QI "vnx64qi") (VNx128QI "vnx128qi") (VNx2HI "vnx2hi")
  (VNx4HI "vnx4hi") (VNx8HI "vnx8hi") (VNx16HI "vnx16hi") (VNx32HI "vnx32hi")
  (VNx64HI "vnx64hi") (VNx2SI "vnx2si") (VNx4SI "vnx4si") (VNx8SI "vnx8si")
  (VNx16SI "vnx16si") (VNx32SI "vnx32si") (VNx2DI "vnx2di") (VNx4DI "vnx4di")
  (VNx8DI "vnx8di") (VNx16DI "vnx16di") (VNx2HF "vnx2hi") (VNx4HF "vnx4hi")
  (VNx8HF "vnx8hi") (VNx16HF "vnx16hi") (VNx32HF "vnx32hi") (VNx64HF "vnx64hi")
  (VNx2SF "vnx2si") (VNx4SF "vnx4si") (VNx8SF "vnx8si") (VNx16SF "vnx16si")
  (VNx32SF "vnx32si") (VNx2DF "vnx2di") (VNx4DF "vnx4di") (VNx8DF "vnx8di")
  (VNx16DF "vnx16di")])

;; Map widen same size mode.
(define_mode_attr VWMAP [
  (VNx2HF "VNx2SI") (VNx4HF "VNx4SI") (VNx8HF "VNx8SI") (VNx16HF "VNx16SI")
  (VNx32HF "VNx32SI") (VNx2SF "VNx2DI") (VNx4SF "VNx4DI") (VNx8SF "VNx8DI")
  (VNx16SF "VNx16DI")])

(define_mode_attr vwmap [
  (VNx2HF "vnx2si") (VNx4HF "vnx4si") (VNx8HF "vnx8si") (VNx16HF "vnx16si")
  (VNx32HF "vnx32si") (VNx2SF "vnx2di") (VNx4SF "vnx4di") (VNx8SF "vnx8di")
  (VNx16SF "vnx16di")])

;; Map a vector int mode to vector widening float mode.
(define_mode_attr VWFMAP [
  (VNx2QI "VNx2HF") (VNx4QI "VNx4HF") (VNx8QI "VNx8HF") (VNx16QI "VNx16HF")
  (VNx32QI "VNx32HF") (VNx64QI "VNx64HF") (VNx2HI "VNx2SF") (VNx4HI "VNx4SF")
  (VNx8HI "VNx8SF") (VNx16HI "VNx16SF") (VNx32HI "VNx32SF") (VNx2SI "VNx2DF")
  (VNx4SI "VNx4DF") (VNx8SI "VNx8DF") (VNx16SI "VNx16DF")])

(define_mode_attr vwfmap [
  (VNx2QI "vnx2hf") (VNx4QI "vnx4hf") (VNx8QI "vnx8hf") (VNx16QI "vnx16hf")
  (VNx32QI "vnx32hf") (VNx64QI "vnx64hf") (VNx2HI "vnx2sf") (VNx4HI "vnx4sf")
  (VNx8HI "vnx8sf") (VNx16HI "vnx16sf") (VNx32HI "vnx32sf") (VNx2SI "vnx2df")
  (VNx4SI "vnx4df") (VNx8SI "vnx8df") (VNx16SI "vnx16df")])

;; Map a vector tuple mode to its vector mode.
(define_mode_attr vtsub [
  (VNx2x2QI "vnx2qi") (VNx3x2QI "vnx2qi") (VNx4x2QI "vnx2qi") (VNx5x2QI "vnx2qi")
  (VNx6x2QI "vnx2qi") (VNx7x2QI "vnx2qi") (VNx8x2QI "vnx2qi")
  (VNx2x4QI "vnx4qi") (VNx3x4QI "vnx4qi") (VNx4x4QI "vnx4qi") (VNx5x4QI "vnx4qi")
  (VNx6x4QI "vnx4qi") (VNx7x4QI "vnx4qi") (VNx8x4QI "vnx4qi")
  (VNx2x8QI "vnx8qi") (VNx3x8QI "vnx8qi") (VNx4x8QI "vnx8qi") (VNx5x8QI "vnx8qi")
  (VNx6x8QI "vnx8qi") (VNx7x8QI "vnx8qi") (VNx8x8QI "vnx8qi")
  (VNx2x16QI "vnx16qi") (VNx3x16QI "vnx16qi") (VNx4x16QI "vnx16qi") (VNx5x16QI "vnx16qi")
  (VNx6x16QI "vnx16qi") (VNx7x16QI "vnx16qi") (VNx8x16QI "vnx16qi")
  (VNx2x32QI "vnx32qi") (VNx3x32QI "vnx32qi") (VNx4x32QI "vnx32qi")
  (VNx2x64QI "vnx64qi")
  (VNx2x2HI "vnx2hi") (VNx3x2HI "vnx2hi") (VNx4x2HI "vnx2hi") (VNx5x2HI "vnx2hi")
  (VNx6x2HI "vnx2hi") (VNx7x2HI "vnx2hi") (VNx8x2HI "vnx2hi")
  (VNx2x4HI "vnx4hi") (VNx3x4HI "vnx4hi") (VNx4x4HI "vnx4hi") (VNx5x4HI "vnx4hi")
  (VNx6x4HI "vnx4hi") (VNx7x4HI "vnx4hi") (VNx8x4HI "vnx4hi")
  (VNx2x8HI "vnx8hi") (VNx3x8HI "vnx8hi") (VNx4x8HI "vnx8hi") (VNx5x8HI "vnx8hi")
  (VNx6x8HI "vnx8hi") (VNx7x8HI "vnx8hi") (VNx8x8HI "vnx8hi")
  (VNx2x16HI "vnx16hi") (VNx3x16HI "vnx16hi") (VNx4x16HI "vnx16hi")
  (VNx2x32HI "vnx32hi")
  (VNx2x2SI "vnx2si") (VNx3x2SI "vnx2si") (VNx4x2SI "vnx2si") (VNx5x2SI "vnx2si")
  (VNx6x2SI "vnx2si") (VNx7x2SI "vnx2si") (VNx8x2SI "vnx2si")
  (VNx2x4SI "vnx4si") (VNx3x4SI "vnx4si") (VNx4x4SI "vnx4si") (VNx5x4SI "vnx4si")
  (VNx6x4SI "vnx4si") (VNx7x4SI "vnx4si") (VNx8x4SI "vnx4si")
  (VNx2x8SI "vnx8si") (VNx3x8SI "vnx8si") (VNx4x8SI "vnx8si")
  (VNx2x16SI "vnx16si")
  (VNx2x2DI "vnx2di") (VNx3x2DI "vnx2di") (VNx4x2DI "vnx2di") (VNx5x2DI "vnx2di")
  (VNx6x2DI "vnx2di") (VNx7x2DI "vnx2di") (VNx8x2DI "vnx2di")
  (VNx2x4DI "vnx4di") (VNx3x4DI "vnx4di") (VNx4x4DI "vnx4di")
  (VNx2x8DI "vnx8di")
  (VNx2x2HF "vnx2hf") (VNx3x2HF "vnx2hf") (VNx4x2HF "vnx2hf") (VNx5x2HF "vnx2hf")
  (VNx6x2HF "vnx2hf") (VNx7x2HF "vnx2hf") (VNx8x2HF "vnx2hf")
  (VNx2x4HF "vnx4hf") (VNx3x4HF "vnx4hf") (VNx4x4HF "vnx4hf") (VNx5x4HF "vnx4hf")
  (VNx6x4HF "vnx4hf") (VNx7x4HF "vnx4hf") (VNx8x4HF "vnx4hf")
  (VNx2x8HF "vnx8hf") (VNx3x8HF "vnx8hf") (VNx4x8HF "vnx8hf") (VNx5x8HF "vnx8hf")
  (VNx6x8HF "vnx8hf") (VNx7x8HF "vnx8hf") (VNx8x8HF "vnx8hf")
  (VNx2x16HF "vnx16hf") (VNx3x16HF "vnx16hf") (VNx4x16HF "vnx16hf")
  (VNx2x32HF "vnx32hf")
  (VNx2x2SF "vnx2sf") (VNx3x2SF "vnx2sf") (VNx4x2SF "vnx2sf") (VNx5x2SF "vnx2sf")
  (VNx6x2SF "vnx2sf") (VNx7x2SF "vnx2sf") (VNx8x2SF "vnx2sf")
  (VNx2x4SF "vnx4sf") (VNx3x4SF "vnx4sf") (VNx4x4SF "vnx4sf") (VNx5x4SF "vnx4sf")
  (VNx6x4SF "vnx4sf") (VNx7x4SF "vnx4sf") (VNx8x4SF "vnx4sf")
  (VNx2x8SF "vnx8sf") (VNx3x8SF "vnx8sf") (VNx4x8SF "vnx8sf")
  (VNx2x16SF "vnx16sf")
  (VNx2x2DF "vnx2df") (VNx3x2DF "vnx2df") (VNx4x2DF "vnx2df") (VNx5x2DF "vnx2df")
  (VNx6x2DF "vnx2df") (VNx7x2DF "vnx2df") (VNx8x2DF "vnx2df")
  (VNx2x4DF "vnx4df") (VNx3x4DF "vnx4df") (VNx4x4DF "vnx4df")
  (VNx2x8DF "vnx8df")])

;; Map a vector mode to SEW
(define_mode_attr sew [
  (VNx2QI "8") (VNx4QI "8") (VNx8QI "8") (VNx16QI "8")
  (VNx32QI "8") (VNx64QI "8") (VNx128QI "8") (VNx2HI "16")
  (VNx4HI "16") (VNx8HI "16") (VNx16HI "16") (VNx32HI "16")
  (VNx64HI "16") (VNx2SI "32") (VNx4SI "32") (VNx8SI "32")
  (VNx16SI "32") (VNx32SI "32") (VNx2DI "64") (VNx4DI "64")
  (VNx8DI "64") (VNx16DI "64") (VNx2HF "16") (VNx4HF "16")
  (VNx8HF "16") (VNx16HF "16") (VNx32HF "16") (VNx64HF "16")
  (VNx2SF "32") (VNx4SF "32") (VNx8SF "32") (VNx16SF "32")
  (VNx32SF "32") (VNx2DF "64") (VNx4DF "64") (VNx8DF "64")
  (VNx16DF "64")
  (VNx2x2QI "8") (VNx3x2QI "8") (VNx4x2QI "8") (VNx5x2QI "8")
  (VNx6x2QI "8") (VNx7x2QI "8") (VNx8x2QI "8")
  (VNx2x4QI "8") (VNx3x4QI "8") (VNx4x4QI "8") (VNx5x4QI "8")
  (VNx6x4QI "8") (VNx7x4QI "8") (VNx8x4QI "8")
  (VNx2x8QI "8") (VNx3x8QI "8") (VNx4x8QI "8") (VNx5x8QI "8")
  (VNx6x8QI "8") (VNx7x8QI "8") (VNx8x8QI "8")
  (VNx2x16QI "8") (VNx3x16QI "8") (VNx4x16QI "8") (VNx5x16QI "8")
  (VNx6x16QI "8") (VNx7x16QI "8") (VNx8x16QI "8")
  (VNx2x32QI "8") (VNx3x32QI "8") (VNx4x32QI "8")
  (VNx2x64QI "8")
  (VNx2x2HI "16") (VNx3x2HI "16") (VNx4x2HI "16") (VNx5x2HI "16")
  (VNx6x2HI "16") (VNx7x2HI "16") (VNx8x2HI "16")
  (VNx2x4HI "16") (VNx3x4HI "16") (VNx4x4HI "16") (VNx5x4HI "16")
  (VNx6x4HI "16") (VNx7x4HI "16") (VNx8x4HI "16")
  (VNx2x8HI "16") (VNx3x8HI "16") (VNx4x8HI "16") (VNx5x8HI "16")
  (VNx6x8HI "16") (VNx7x8HI "16") (VNx8x8HI "16")
  (VNx2x16HI "16") (VNx3x16HI "16") (VNx4x16HI "16")
  (VNx2x32HI "16")
  (VNx2x2SI "32") (VNx3x2SI "32") (VNx4x2SI "32") (VNx5x2SI "32")
  (VNx6x2SI "32") (VNx7x2SI "32") (VNx8x2SI "32")
  (VNx2x4SI "32") (VNx3x4SI "32") (VNx4x4SI "32") (VNx5x4SI "32")
  (VNx6x4SI "32") (VNx7x4SI "32") (VNx8x4SI "32")
  (VNx2x8SI "32") (VNx3x8SI "32") (VNx4x8SI "32")
  (VNx2x16SI "32")
  (VNx2x2DI "64") (VNx3x2DI "64") (VNx4x2DI "64") (VNx5x2DI "64")
  (VNx6x2DI "64") (VNx7x2DI "64") (VNx8x2DI "64")
  (VNx2x4DI "64") (VNx3x4DI "64") (VNx4x4DI "64")
  (VNx2x8DI "64")
  (VNx2x2HF "16") (VNx3x2HF "16") (VNx4x2HF "16") (VNx5x2HF "16")
  (VNx6x2HF "16") (VNx7x2HF "16") (VNx8x2HF "16")
  (VNx2x4HF "16") (VNx3x4HF "16") (VNx4x4HF "16") (VNx5x4HF "16")
  (VNx6x4HF "16") (VNx7x4HF "16") (VNx8x4HF "16")
  (VNx2x8HF "16") (VNx3x8HF "16") (VNx4x8HF "16") (VNx5x8HF "16")
  (VNx6x8HF "16") (VNx7x8HF "16") (VNx8x8HF "16")
  (VNx2x16HF "16") (VNx3x16HF "16") (VNx4x16HF "16")
  (VNx2x32HF "16")
  (VNx2x2SF "32") (VNx3x2SF "32") (VNx4x2SF "32") (VNx5x2SF "32")
  (VNx6x2SF "32") (VNx7x2SF "32") (VNx8x2SF "32")
  (VNx2x4SF "32") (VNx3x4SF "32") (VNx4x4SF "32") (VNx5x4SF "32")
  (VNx6x4SF "32") (VNx7x4SF "32") (VNx8x4SF "32")
  (VNx2x8SF "32") (VNx3x8SF "32") (VNx4x8SF "32")
  (VNx2x16SF "32")
  (VNx2x2DF "64") (VNx3x2DF "64") (VNx4x2DF "64") (VNx5x2DF "64")
  (VNx6x2DF "64") (VNx7x2DF "64") (VNx8x2DF "64")
  (VNx2x4DF "64") (VNx3x4DF "64") (VNx4x4DF "64")
  (VNx2x8DF "64")])

;; Map a vector mode to its LMUL.
(define_mode_attr lmul [
  (VNx2QI "1") (VNx4QI "1") (VNx8QI "1") (VNx16QI "1")
  (VNx32QI "2") (VNx64QI "4") (VNx128QI "8") (VNx2HI "1")
  (VNx4HI "1") (VNx8HI "1") (VNx16HI "2") (VNx32HI "4")
  (VNx64HI "8") (VNx2SI "1") (VNx4SI "1") (VNx8SI "2")
  (VNx16SI "4") (VNx32SI "8") (VNx2DI "1") (VNx4DI "2")
  (VNx8DI "4") (VNx16DI "8") (VNx2HF "1") (VNx4HF "1")
  (VNx8HF "1") (VNx16HF "2") (VNx32HF "4") (VNx64HF "8")
  (VNx2SF "1") (VNx4SF "1") (VNx8SF "2") (VNx16SF "4")
  (VNx32SF "8") (VNx2DF "1") (VNx4DF "2") (VNx8DF "4")
  (VNx16DF "8")])

;; Map a vector tuple mode to its NF value.
(define_mode_attr nf [
  (VNx2x2QI "2") (VNx3x2QI "3") (VNx4x2QI "4") (VNx5x2QI "5")
  (VNx6x2QI "6") (VNx7x2QI "7") (VNx8x2QI "8")
  (VNx2x4QI "2") (VNx3x4QI "3") (VNx4x4QI "4") (VNx5x4QI "5")
  (VNx6x4QI "6") (VNx7x4QI "7") (VNx8x4QI "8")
  (VNx2x8QI "2") (VNx3x8QI "3") (VNx4x8QI "4") (VNx5x8QI "5")
  (VNx6x8QI "6") (VNx7x8QI "7") (VNx8x8QI "8")
  (VNx2x16QI "2") (VNx3x16QI "3") (VNx4x16QI "4") (VNx5x16QI "5")
  (VNx6x16QI "6") (VNx7x16QI "7") (VNx8x16QI "8")
  (VNx2x32QI "2") (VNx3x32QI "3") (VNx4x32QI "4")
  (VNx2x64QI "2")
  (VNx2x2HI "2") (VNx3x2HI "3") (VNx4x2HI "4") (VNx5x2HI "5")
  (VNx6x2HI "6") (VNx7x2HI "7") (VNx8x2HI "8")
  (VNx2x4HI "2") (VNx3x4HI "3") (VNx4x4HI "4") (VNx5x4HI "5")
  (VNx6x4HI "6") (VNx7x4HI "7") (VNx8x4HI "8")
  (VNx2x8HI "2") (VNx3x8HI "3") (VNx4x8HI "4") (VNx5x8HI "5")
  (VNx6x8HI "6") (VNx7x8HI "7") (VNx8x8HI "8")
  (VNx2x16HI "2") (VNx3x16HI "3") (VNx4x16HI "4")
  (VNx2x32HI "2")
  (VNx2x2SI "2") (VNx3x2SI "3") (VNx4x2SI "4") (VNx5x2SI "5")
  (VNx6x2SI "6") (VNx7x2SI "7") (VNx8x2SI "8")
  (VNx2x4SI "2") (VNx3x4SI "3") (VNx4x4SI "4") (VNx5x4SI "5")
  (VNx6x4SI "6") (VNx7x4SI "7") (VNx8x4SI "8")
  (VNx2x8SI "2") (VNx3x8SI "3") (VNx4x8SI "4")
  (VNx2x16SI "2")
  (VNx2x2DI "2") (VNx3x2DI "3") (VNx4x2DI "4") (VNx5x2DI "5")
  (VNx6x2DI "6") (VNx7x2DI "7") (VNx8x2DI "8")
  (VNx2x4DI "2") (VNx3x4DI "3") (VNx4x4DI "4")
  (VNx2x8DI "2")
  (VNx2x2HF "2") (VNx3x2HF "3") (VNx4x2HF "4") (VNx5x2HF "5")
  (VNx6x2HF "6") (VNx7x2HF "7") (VNx8x2HF "8")
  (VNx2x4HF "2") (VNx3x4HF "3") (VNx4x4HF "4") (VNx5x4HF "5")
  (VNx6x4HF "6") (VNx7x4HF "7") (VNx8x4HF "8")
  (VNx2x8HF "2") (VNx3x8HF "3") (VNx4x8HF "4") (VNx5x8HF "5")
  (VNx6x8HF "6") (VNx7x8HF "7") (VNx8x8HF "8")
  (VNx2x16HF "2") (VNx3x16HF "3") (VNx4x16HF "4")
  (VNx2x32HF "2")
  (VNx2x2SF "2") (VNx3x2SF "3") (VNx4x2SF "4") (VNx5x2SF "5")
  (VNx6x2SF "6") (VNx7x2SF "7") (VNx8x2SF "8")
  (VNx2x4SF "2") (VNx3x4SF "3") (VNx4x4SF "4") (VNx5x4SF "5")
  (VNx6x4SF "6") (VNx7x4SF "7") (VNx8x4SF "8")
  (VNx2x8SF "2") (VNx3x8SF "3") (VNx4x8SF "4")
  (VNx2x16SF "2")
  (VNx2x2DF "2") (VNx3x2DF "3") (VNx4x2DF "4") (VNx5x2DF "5")
  (VNx6x2DF "6") (VNx7x2DF "7") (VNx8x2DF "8")
  (VNx2x4DF "2") (VNx3x4DF "3") (VNx4x4DF "4")
  (VNx2x8DF "2")])

;; All vector modes supported.
(define_mode_attr gather_scatter_operand [
  (VNx2QI "immediate_operand") (VNx4QI "immediate_operand") (VNx8QI "immediate_operand") (VNx16QI "immediate_operand") (VNx32QI "immediate_operand") (VNx64QI "immediate_operand") (VNx128QI "const_1_operand")
  (VNx2HI "immediate_operand") (VNx4HI "immediate_operand") (VNx8HI "immediate_operand") (VNx16HI "immediate_operand") (VNx32HI "immediate_operand") (VNx64HI "const_1_operand")
  (VNx2SI "immediate_operand") (VNx4SI "immediate_operand") (VNx8SI "immediate_operand") (VNx16SI "immediate_operand") (VNx32SI "const_1_operand")
  (VNx2DI "immediate_operand") (VNx4DI "immediate_operand") (VNx8DI "immediate_operand") (VNx16DI "const_1_operand")
  (VNx2HF "immediate_operand") (VNx4HF "immediate_operand") (VNx8HF "immediate_operand")
  (VNx16HF "immediate_operand") (VNx32HF "immediate_operand") (VNx64HF "const_1_operand")
  (VNx2SF "immediate_operand") (VNx4SF "immediate_operand") (VNx8SF "immediate_operand")
  (VNx16SF "immediate_operand") (VNx32SF "const_1_operand")
  (VNx2DF "immediate_operand") (VNx4DF "immediate_operand") (VNx8DF "immediate_operand")
  (VNx16DF "const_1_operand")])

;; Map a vector mode to its LMUL==1 equivalent.
;; This is for reductions which use scalars in vector registers.
(define_mode_attr VLMUL1 [
  (VNx2QI "VNx16QI") (VNx4QI "VNx16QI") (VNx8QI "VNx16QI") (VNx16QI "VNx16QI")
  (VNx32QI "VNx16QI") (VNx64QI "VNx16QI") (VNx128QI "VNx16QI") (VNx2HI "VNx8HI")
  (VNx4HI "VNx8HI") (VNx8HI "VNx8HI") (VNx16HI "VNx8HI") (VNx32HI "VNx8HI")
  (VNx64HI "VNx8HI") (VNx2SI "VNx4SI") (VNx4SI "VNx4SI") (VNx8SI "VNx4SI")
  (VNx16SI "VNx4SI") (VNx32SI "VNx4SI") (VNx2DI "VNx2DI") (VNx4DI "VNx2DI")
  (VNx8DI "VNx2DI") (VNx16DI "VNx2DI") (VNx2HF "VNx8HF") (VNx4HF "VNx8HF")
  (VNx8HF "VNx8HF") (VNx16HF "VNx8HF") (VNx32HF "VNx8HF") (VNx64HF "VNx8HF")
  (VNx2SF "VNx4SF") (VNx4SF "VNx4SF") (VNx8SF "VNx4SF") (VNx16SF "VNx4SF")
  (VNx32SF "VNx4SF") (VNx2DF "VNx2DF") (VNx4DF "VNx2DF") (VNx8DF "VNx2DF")
  (VNx16DF "VNx2DF")])

;; Map a vector mode to its LMUL==1 widen vector type.
;; This is for widening reductions which use scalars in vector registers.
(define_mode_attr VWLMUL1 [
  (VNx2QI "VNx8HI") (VNx4QI "VNx8HI") (VNx8QI "VNx8HI") (VNx16QI "VNx8HI")
  (VNx32QI "VNx8HI") (VNx64QI "VNx8HI") (VNx128QI "VNx8HI") (VNx2HI "VNx4SI")
  (VNx4HI "VNx4SI") (VNx8HI "VNx4SI") (VNx16HI "VNx4SI") (VNx32HI "VNx4SI")
  (VNx64HI "VNx4SI") (VNx2SI "VNx2DI") (VNx4SI "VNx2DI") (VNx8SI "VNx2DI")
  (VNx16SI "VNx2DI") (VNx32SI "VNx2DI") (VNx2HF "VNx4SF") (VNx4HF "VNx4SF")
  (VNx8HF "VNx4SF") (VNx16HF "VNx4SF") (VNx32HF "VNx4SF") (VNx64HF "VNx4SF")
  (VNx2SF "VNx2DF") (VNx4SF "VNx2DF") (VNx8SF "VNx2DF") (VNx16SF "VNx2DF")
  (VNx32SF "VNx2DF")])

;; vector integer and float-point mode interconversion.
(define_mode_attr VCONVERFI [
  (VNx2HF "VNx2HI")
  (VNx4HF "VNx4HI")
  (VNx8HF "VNx8HI")
  (VNx16HF "VNx16HI")
  (VNx32HF "VNx32HI")
  (VNx64HF "VNx64HI")
  (VNx2SF "VNx2SI")
  (VNx4SF "VNx4SI")
  (VNx8SF "VNx8SI")
  (VNx16SF "VNx16SI")
  (VNx32SF "VNx32SI")
  (VNx2DF "VNx2DI")
  (VNx4DF "VNx4DI")
  (VNx8DF "VNx8DI")
  (VNx16DF "VNx16DI")])

;; vector integer same lmul but different sew interconversion.
(define_mode_attr VCONVERI [
  (VNx2HI "VNx4QI")
  (VNx4HI "VNx8QI")
  (VNx8HI "VNx16QI")
  (VNx16HI "VNx32QI")
  (VNx32HI "VNx64QI")
  (VNx64HI "VNx128QI")
  (VNx2SI "VNx8QI")
  (VNx4SI "VNx16QI")
  (VNx8SI "VNx32QI")
  (VNx16SI "VNx64QI")
  (VNx32SI "VNx128QI")
  (VNx2DI "VNx16QI")
  (VNx4DI "VNx32QI")
  (VNx8DI "VNx64QI")
  (VNx16DI "VNx128QI")
  (VNx4QI "VNx2HI")
  (VNx8QI "VNx4HI")
  (VNx16QI "VNx8HI")
  (VNx32QI "VNx16HI")
  (VNx64QI "VNx32HI")
  (VNx128QI "VNx64HI")])

(define_mode_attr VCONVERI2 [
  (VNx2SI "VNx4HI")
  (VNx4SI "VNx8HI")
  (VNx8SI "VNx16HI")
  (VNx16SI "VNx32HI")
  (VNx32SI "VNx64HI")
  (VNx2DI "VNx8HI")
  (VNx4DI "VNx16HI")
  (VNx8DI "VNx32HI")
  (VNx16DI "VNx64HI")
  (VNx8QI "VNx2SI")
  (VNx16QI "VNx4SI")
  (VNx32QI "VNx8SI")
  (VNx64QI "VNx16SI")
  (VNx128QI "VNx32SI")
  (VNx4HI "VNx2SI")
  (VNx8HI "VNx4SI")
  (VNx16HI "VNx8SI")
  (VNx32HI "VNx16SI")
  (VNx64HI "VNx32SI")])

(define_mode_attr VCONVERI3 [
  (VNx2DI "VNx4SI")
  (VNx4DI "VNx8SI")
  (VNx8DI "VNx16SI")
  (VNx16DI "VNx32SI")
  (VNx16QI "VNx2DI")
  (VNx32QI "VNx4DI")
  (VNx64QI "VNx8DI")
  (VNx128QI "VNx16DI")
  (VNx8HI "VNx2DI")
  (VNx16HI "VNx4DI")
  (VNx32HI "VNx8DI")
  (VNx64HI "VNx16DI")
  (VNx4SI "VNx2DI")
  (VNx8SI "VNx4DI")
  (VNx16SI "VNx8DI")
  (VNx32SI "VNx16DI")])

(define_mode_attr vcond_mask_vs_predicate [
  (VNx2QI "reg_or_simm5_operand") (VNx4QI "reg_or_simm5_operand") (VNx8QI "reg_or_simm5_operand") 
  (VNx16QI "reg_or_simm5_operand") (VNx32QI "reg_or_simm5_operand") (VNx64QI "reg_or_simm5_operand") 
  (VNx128QI "reg_or_simm5_operand")
  (VNx2HI "reg_or_simm5_operand") (VNx4HI "reg_or_simm5_operand") (VNx8HI "reg_or_simm5_operand") 
  (VNx16HI "reg_or_simm5_operand") (VNx32HI "reg_or_simm5_operand") (VNx64HI "reg_or_simm5_operand")
  (VNx2SI "reg_or_simm5_operand") (VNx4SI "reg_or_simm5_operand") (VNx8SI "reg_or_simm5_operand") 
  (VNx16SI "reg_or_simm5_operand") (VNx32SI "reg_or_simm5_operand")
  (VNx2DI "reg_or_simm5_operand") (VNx4DI "reg_or_simm5_operand") (VNx8DI "reg_or_simm5_operand") 
  (VNx16DI "reg_or_simm5_operand")
  (VNx2HF "register_operand") (VNx4HF "register_operand") (VNx8HF "register_operand")
  (VNx16HF "register_operand") (VNx32HF "register_operand") (VNx64HF "register_operand")
  (VNx2SF "register_operand") (VNx4SF "register_operand") (VNx8SF "register_operand")
  (VNx16SF "register_operand") (VNx32SF "register_operand")
  (VNx2DF "register_operand") (VNx4DF "register_operand") (VNx8DF "register_operand")
  (VNx16DF "register_operand")])

;; all indexed load/store.
(define_int_iterator INDEXED_LOAD [UNSPEC_UNORDER_INDEXED_LOAD UNSPEC_ORDER_INDEXED_LOAD])
(define_int_iterator INDEXED_STORE [UNSPEC_UNORDER_INDEXED_STORE UNSPEC_ORDER_INDEXED_STORE])

;; integer multiply-add.
(define_int_iterator IMAC [UNSPEC_MACC UNSPEC_NMSAC UNSPEC_MADD UNSPEC_NMSUB])

;; Floating-point multiply-add.
(define_int_iterator FMAC [UNSPEC_MACC UNSPEC_NMACC UNSPEC_MSAC UNSPEC_NMSAC
      UNSPEC_MADD UNSPEC_NMADD UNSPEC_MSUB UNSPEC_NMSUB])

;; Iterator for sign-injection instructions.
(define_int_iterator COPYSIGNS [UNSPEC_COPYSIGN UNSPEC_NCOPYSIGN UNSPEC_XORSIGN])

;; Iterator for all fixed-point instructions.
(define_int_iterator SAT_OP [UNSPEC_AADDU UNSPEC_AADD
				    UNSPEC_ASUBU UNSPEC_ASUB UNSPEC_SMUL])

;; Iterator for vssrl and vssra instructions.
(define_int_iterator SSHIFT [UNSPEC_SSRL UNSPEC_SSRA])

;; Iterator for vnclip and vnclipu instructions.
(define_int_iterator CLIP [UNSPEC_SIGNED_CLIP UNSPEC_UNSIGNED_CLIP])

;; Iterator for reciprocal.
(define_int_iterator RECIPROCAL [UNSPEC_RSQRT7 UNSPEC_REC7])

;; Iterator for convert instructions.
(define_int_iterator FCVT [UNSPEC_FLOAT_TO_SIGNED_INT UNSPEC_FLOAT_TO_UNSIGNED_INT])

;; Iterator for integer reduction operations.
(define_int_iterator REDUC [UNSPEC_REDUC_SUM
          UNSPEC_REDUC_MAX
          UNSPEC_REDUC_MAXU
          UNSPEC_REDUC_MIN
          UNSPEC_REDUC_MINU
          UNSPEC_REDUC_AND
          UNSPEC_REDUC_OR
          UNSPEC_REDUC_XOR])

;; Iterator for integer reduction min/max operations.
(define_int_iterator REDUC_MAXMIN [UNSPEC_REDUC_MAX UNSPEC_REDUC_MAXU UNSPEC_REDUC_MIN UNSPEC_REDUC_MINU])

;; Iterator for floating-point reduction instructions.
(define_int_iterator FREDUC [UNSPEC_REDUC_UNORDERED_SUM UNSPEC_REDUC_ORDERED_SUM UNSPEC_REDUC_MAX UNSPEC_REDUC_MIN])

;; Iterator for floating-point reduction auto-vectorization.
(define_int_iterator FREDUCAUTO [UNSPEC_REDUC_SUM UNSPEC_REDUC_MAX UNSPEC_REDUC_MIN])

;; Iterator for mask bits set instructions.
(define_int_iterator MASK_SET [UNSPEC_SBF UNSPEC_SIF UNSPEC_SOF])

;; Iterator for slide instructions.
(define_int_iterator SLIDE [UNSPEC_SLIDEUP UNSPEC_SLIDEDOWN])
(define_int_iterator SLIDE1 [UNSPEC_SLIDE1UP UNSPEC_SLIDE1DOWN])
(define_int_iterator SLIDE_UP [UNSPEC_SLIDEUP])
(define_int_iterator SLIDE_DOWN [UNSPEC_SLIDEDOWN])
(define_int_iterator SLIDE1_UP [UNSPEC_SLIDE1UP])
(define_int_iterator SLIDE1_DOWN [UNSPEC_SLIDE1DOWN])
(define_int_iterator MUL_HIGHPART [UNSPEC_VMULH UNSPEC_VMULHU])

;; expands used to process  sew64 on TARGET_32BIT

(define_int_iterator VXOP [
  UNSPEC_VADD UNSPEC_VSUB
  UNSPEC_VAND UNSPEC_VIOX UNSPEC_VXOR
  UNSPEC_VMIN UNSPEC_VMINU UNSPEC_VMAX UNSPEC_VMAXU
  UNSPEC_VMUL UNSPEC_VMULH UNSPEC_VMULHU UNSPEC_VMULHSU
  UNSPEC_VDIV UNSPEC_VDIVU UNSPEC_VREM UNSPEC_VREMU
  UNSPEC_VSADD UNSPEC_VSADDU UNSPEC_VSSUB UNSPEC_VSSUBU
  UNSPEC_VAADD UNSPEC_VAADDU UNSPEC_VASUB UNSPEC_VASUBU
  UNSPEC_VSMUL
])

(define_int_iterator VXMOP [
  UNSPEC_VADC UNSPEC_VSBC
])

(define_int_iterator VXMOP_NO_POLICY [
  UNSPEC_VMADC UNSPEC_VMSBC
])


(define_int_iterator MVXOP [
  UNSPEC_VMADC UNSPEC_VMSBC
])

;; mvx
(define_int_iterator MVXMOP [
  UNSPEC_VMSEQ UNSPEC_VMSNE UNSPEC_VMSLE UNSPEC_VMSLEU UNSPEC_VMSGT UNSPEC_VMSGTU
  UNSPEC_VMSLT UNSPEC_VMSLTU UNSPEC_VMSGE UNSPEC_VMSGEU
])

;; mac
(define_int_iterator MACOP [
  UNSPEC_MACC UNSPEC_NMSAC UNSPEC_MADD UNSPEC_NMSUB
])

(define_int_iterator VMERGEOP [
  UNSPEC_VMERGE
])

(define_int_iterator VMVOP [
  UNSPEC_VMV
])

(define_int_iterator VMVSOP [
  UNSPEC_VMVS
])

(define_int_iterator VXROP [
  UNSPEC_VRSUB
])

(define_int_iterator VSLIDE1 [
  UNSPEC_SLIDE1UP UNSPEC_SLIDE1DOWN
])

;; map insn string to order type
(define_int_attr uo
 [(UNSPEC_UNORDER_INDEXED_LOAD "u") (UNSPEC_ORDER_INDEXED_LOAD "o")
  (UNSPEC_UNORDER_INDEXED_STORE "u") (UNSPEC_ORDER_INDEXED_STORE "o")])

(define_int_attr sat_op [(UNSPEC_AADDU "aaddu") (UNSPEC_AADD "aadd")
			 (UNSPEC_ASUBU "asubu") (UNSPEC_ASUB "asub")
			 (UNSPEC_SMUL "smul")])

;; <reduc> expands to the name of the reduction that implements a
;; particular int.
(define_int_attr reduc [(UNSPEC_REDUC_SUM "sum") (UNSPEC_REDUC_UNORDERED_SUM "usum") (UNSPEC_REDUC_ORDERED_SUM "osum")
          (UNSPEC_REDUC_MAX "max") (UNSPEC_REDUC_MAXU "maxu")
          (UNSPEC_REDUC_MIN "min") (UNSPEC_REDUC_MINU "minu")
          (UNSPEC_REDUC_AND "and") (UNSPEC_REDUC_OR "or") (UNSPEC_REDUC_XOR "xor")])

;; Attribute for vssrl and vssra instructions.
(define_int_attr sshift [(UNSPEC_SSRL "ssrl") (UNSPEC_SSRA "ssra")])

;; Attribute for vnclip and vnclipu instructions.
(define_int_attr clip [(UNSPEC_SIGNED_CLIP "clip") (UNSPEC_UNSIGNED_CLIP "clipu")])

;; Attribute for vfrsqrt7 and vfrec7 instructions.
(define_int_attr reciprocal [(UNSPEC_RSQRT7 "rsqrt7") (UNSPEC_REC7 "rec7")])

;; Attributes for sign-injection instructions.
(define_int_attr nx [(UNSPEC_COPYSIGN "") (UNSPEC_NCOPYSIGN "n") (UNSPEC_XORSIGN "x")])

;; Attributes for convert instructions.
(define_int_attr fu [(UNSPEC_FLOAT_TO_SIGNED_INT "") (UNSPEC_FLOAT_TO_UNSIGNED_INT "u")])

;; Attributes for mask set bit.
(define_int_attr smb [(UNSPEC_SBF "sbf") (UNSPEC_SIF "sif") (UNSPEC_SOF "sof")])

;; Attributes for slide instructions.
(define_int_attr ud [(UNSPEC_SLIDEUP "up") (UNSPEC_SLIDEDOWN "down")
                     (UNSPEC_SLIDE1UP "up") (UNSPEC_SLIDE1DOWN "down")])

;; Attributes for saturation operations.
(define_int_attr vsat [(UNSPEC_AADDU "vsarith") (UNSPEC_AADD "vsarith")
				    (UNSPEC_ASUBU "vsarith")  (UNSPEC_ASUB "vsarith")  (UNSPEC_SMUL "vsmul") ])

;; Attributes for integer multiply-add.
(define_int_attr imac [(UNSPEC_MACC "macc") (UNSPEC_NMSAC "nmsac") (UNSPEC_MADD "madd") (UNSPEC_NMSUB "nmsub")])

;; Attributes for Floating-point multiply-add.
(define_int_attr fmac [(UNSPEC_MACC "macc") (UNSPEC_NMACC "nmacc") (UNSPEC_MSAC "msac") (UNSPEC_NMSAC "nmsac")
      (UNSPEC_MADD "madd") (UNSPEC_NMADD "nmadd") (UNSPEC_MSUB "msub") (UNSPEC_NMSUB "nmsub")])

;; Attributes for unpack.
(define_int_attr perm_hilo [(UNSPEC_UNPACKSHI "hi") (UNSPEC_UNPACKUHI "hi")
			    (UNSPEC_UNPACKSLO "lo") (UNSPEC_UNPACKULO "lo")])

;; Attributes for signed and unsigned.
(define_int_attr su
 [(UNSPEC_VMULH "s") (UNSPEC_VMULHU "u")])

;; Attributes for signed and unsigned.
(define_int_attr u
 [(UNSPEC_VMULH "") (UNSPEC_VMULHU "u")])

;; optab for unspec iterator
(define_int_attr optab [(UNSPEC_REDUC_SUM "plus")
          (UNSPEC_REDUC_MAX "smax") (UNSPEC_REDUC_MAXU "umax")
          (UNSPEC_REDUC_MIN "smin") (UNSPEC_REDUC_MINU "umin")
          (UNSPEC_REDUC_AND "and") (UNSPEC_REDUC_OR "ior") (UNSPEC_REDUC_XOR "xor")])

;; add and sub.
(define_code_iterator plus_minus [plus minus])

;; add, sub and mult.
(define_code_iterator plus_minus_mult [plus minus mult])

;; All operation valid for min and max.
(define_code_iterator any_minmax [smin umin smax umax])

;; Saturating add.
(define_code_iterator any_satplus [ss_plus us_plus])

;; Saturating sub.
(define_code_iterator any_satminus [ss_minus us_minus])

;; sub and div.
(define_code_iterator minus_div [minus div])

;; All operation valid for floating-point.
(define_code_iterator any_fop [plus mult smax smin minus div])

;;All operantion valid for floating-point and integer convert.
(define_code_iterator any_fix [fix unsigned_fix])
(define_code_iterator any_float [float unsigned_float])

;; All operation valid for <op>not instruction in mask-register logical.
(define_code_iterator any_logicalnot [and ior])

;; EQ, NE, LE, LEU.
(define_code_iterator eq_ne_le_leu [eq ne le leu])

;; GT, GTU
(define_code_iterator gt_gtu [gt gtu])

;; EQ, NE, LE, LEU, GT, GTU.
(define_code_iterator eq_ne_le_leu_gt_gtu [eq ne le leu gt gtu])

;; LT, LTU.
(define_code_iterator lt_ltu [lt ltu])

;; GE, GEU.
(define_code_iterator ge_geu [ge geu])

;; All operation valid for floating-point comparison.
(define_code_iterator any_fcmp [eq ne lt le gt ge])

;; All operation valid for floating-point no trapping comparison.
(define_code_iterator any_fcmp_no_trapping [unordered ordered unlt unle unge ungt uneq ltgt])

;; All integer comparison except GE.
(define_code_iterator cmp_noltge [eq ne le gt leu gtu])

;; All integer LT,GE.
(define_code_iterator cmp_lt [lt ltu])

;; All integer GE.
(define_code_iterator cmp_ge [ge geu])

;; All integer LT,GE.
(define_code_iterator cmp_ltge [lt ltu ge geu])

;; RVV integer unary operations.
(define_code_iterator int_unary [neg not])

;; RVV floating-point unary operations.
(define_code_iterator fp_unary [neg abs sqrt])

;; RVV integer binary operations.
(define_code_iterator int_binary [and ior xor smin umin smax umax mult div udiv mod umod])

;; RVV integer binary vector-scalar operations.
(define_code_iterator int_binary_vs [plus minus mult and ior xor smin umin smax umax])

(define_code_iterator int_binary_vs_simm5 [plus and ior xor])

(define_code_iterator int_binary_vs_reg [mult smin umin smax umax])

;; RVV floating-point binary operations.
(define_code_iterator fp_binary [plus mult smax smin])

;; RVV floating-point binary vector-scalar operations.
(define_code_iterator fp_binary_vs [plus minus mult smax smin])

;; comparison code.
(define_code_iterator cmp_all [eq ne le gt leu gtu lt ltu ge geu])

;; <sz> expand to the name of the wcvt and wcvtu that implements a
;; particular code.
(define_code_attr sz [(sign_extend "s") (zero_extend "z")])

;; map neg insn for specific code
(define_code_attr neginsn [(ss_minus "sadd") (us_minus "saddu")])

;; map code to type.
(define_code_attr rvv_type [(plus "varith") (minus "varith") 
    (and "vlogical") (ior "vlogical") (xor "vlogical") (mult "vmul")
    (smax "varith") (smin "varith") (umax "varith") (umin "varith") 
    (div "vdiv") (udiv "vdiv") (mod "vdiv") (umod "vdiv")])

;; map code to reverse operand.
(define_code_attr rinsn [(plus "add") (minus "rsub") (mult "mul") 
        (and "and") (ior "or") (xor "xor") 
        (smin "min") (umin "minu") (smax "max") (umax "maxu")])

;; map not insn for not logic.
(define_code_attr ninsn [(and "nand") (ior "nor") (xor "xnor")])

;; map comparison code to the constraint.
(define_code_attr cmp_imm_p_tab [
  (eq "Ws5") (ne "Ws5") (le "Ws5") (gt "Ws5") (leu "Ws5") (gtu "Ws5")
  (lt "Wn5") (ltu "Wn5") (ge "Wn5") (geu "Wn5")
])

(define_int_attr vxoptab [
  (UNSPEC_VADD "add") (UNSPEC_VSUB "sub") (UNSPEC_VRSUB "rsub")
  (UNSPEC_VAND "and") (UNSPEC_VIOX "ior") (UNSPEC_VXOR "xor")
  (UNSPEC_VMIN "smin") (UNSPEC_VMINU "umin") (UNSPEC_VMAX "smax") (UNSPEC_VMAXU "umax")
  (UNSPEC_VMUL "mul") (UNSPEC_VMULH "mulh") (UNSPEC_VMULHU "mulhu") (UNSPEC_VMULHSU "mulhsu")
  (UNSPEC_VDIV "div") (UNSPEC_VDIVU "udiv") (UNSPEC_VREM "mod") (UNSPEC_VREMU "umod")
  (UNSPEC_VSADD "ssadd") (UNSPEC_VSADDU "usadd") (UNSPEC_VSSUB "sssub") (UNSPEC_VSSUBU "ussub")
  (UNSPEC_VAADD "aadd") (UNSPEC_VAADDU "aaddu") (UNSPEC_VASUB "asub") (UNSPEC_VASUBU "asubu")
  (UNSPEC_VSMUL "smul")
  (UNSPEC_VADC "adc") (UNSPEC_VSBC "sbc")
  (UNSPEC_VMADC "madc") (UNSPEC_VMSBC "msbc")
  (UNSPEC_MACC "macc") (UNSPEC_NMSAC "nmsac") (UNSPEC_MADD "madd") (UNSPEC_NMSUB "nmsub")
  (UNSPEC_VMERGE "merge")
  (UNSPEC_VMV "mv")
  (UNSPEC_VMVS "mv")
  (UNSPEC_SLIDE1UP "up") (UNSPEC_SLIDE1DOWN "down")
])

(define_int_attr VXOPTAB [
  (UNSPEC_VADD "UNSPEC_VADD") (UNSPEC_VSUB "UNSPEC_VSUB") (UNSPEC_VRSUB "UNSPEC_VRSUB")
  (UNSPEC_VAND "UNSPEC_VAND") (UNSPEC_VIOX "UNSPEC_VIOX") (UNSPEC_VXOR "UNSPEC_VXOR")
  (UNSPEC_VMIN "UNSPEC_VMIN") (UNSPEC_VMINU "UNSPEC_VMINU") (UNSPEC_VMAX "UNSPEC_VMAX") (UNSPEC_VMAXU "UNSPEC_VMAXU")
  (UNSPEC_VMUL "UNSPEC_VMUL") (UNSPEC_VMULH "UNSPEC_VMULH") (UNSPEC_VMULHU "UNSPEC_VMULHU") (UNSPEC_VMULHSU "UNSPEC_VMULHSU")
  (UNSPEC_VDIV "UNSPEC_VDIV") (UNSPEC_VDIVU "UNSPEC_VDIVU") (UNSPEC_VREM "UNSPEC_VREM") (UNSPEC_VREMU "UNSPEC_VREMU")
  (UNSPEC_VSADD "UNSPEC_VSADD") (UNSPEC_VSADDU "UNSPEC_VSADDU") (UNSPEC_VSSUB "UNSPEC_VSSUB") (UNSPEC_VSSUBU "UNSPEC_VSSUBU")
  (UNSPEC_VAADD "UNSPEC_VAADD") (UNSPEC_VAADDU "UNSPEC_VAADDU") (UNSPEC_VASUB "UNSPEC_VASUB") (UNSPEC_VASUBU "UNSPEC_VASUBU")
  (UNSPEC_VSMUL "UNSPEC_VSMUL")
  (UNSPEC_VADC "UNSPEC_VADC") (UNSPEC_VSBC "UNSPEC_VSBC")
  (UNSPEC_VMADC "UNSPEC_VMADC") (UNSPEC_VMSBC "UNSPEC_VMSBC")
  (UNSPEC_MACC "UNSPEC_MACC") (UNSPEC_NMSAC "UNSPEC_NMSAC") (UNSPEC_MADD "UNSPEC_MADD") (UNSPEC_NMSUB "UNSPEC_NMSUB")
  (UNSPEC_VMERGE "UNSPEC_VMERGE")
  (UNSPEC_VMV "UNSPEC_VMV")
  (UNSPEC_VMVS "UNSPEC_VMVS")
  (UNSPEC_SLIDE1UP "UNSPEC_SLIDE1UP") (UNSPEC_SLIDE1DOWN "UNSPEC_SLIDE1DOWN")
])

(define_int_attr immptab [
  (UNSPEC_VADD "Ws5") (UNSPEC_VSUB "Wn5") (UNSPEC_VRSUB "Ws5")
  (UNSPEC_VAND "Ws5") (UNSPEC_VIOX "Ws5") (UNSPEC_VXOR "Ws5")
  (UNSPEC_VMIN "J") (UNSPEC_VMINU "J") (UNSPEC_VMAX "J") (UNSPEC_VMAXU "J")
  (UNSPEC_VMUL "J") (UNSPEC_VMULH "J") (UNSPEC_VMULHU "J") (UNSPEC_VMULHSU "J")
  (UNSPEC_VDIV "J") (UNSPEC_VDIVU "J") (UNSPEC_VREM "J") (UNSPEC_VREMU "J")
  (UNSPEC_VSADD "Ws5") (UNSPEC_VSADDU "Ws5") (UNSPEC_VSSUB "Wn5") (UNSPEC_VSSUBU "Wn5")
  (UNSPEC_VAADD "J") (UNSPEC_VAADDU "J") (UNSPEC_VASUB "J") (UNSPEC_VASUBU "J")
  (UNSPEC_VSMUL "J")
  (UNSPEC_VADC "Ws5")
  (UNSPEC_VADC "Ws5") (UNSPEC_VSBC "J")
  (UNSPEC_VMADC "Ws5") (UNSPEC_VMSBC "J")
  (UNSPEC_MACC "J") (UNSPEC_NMSAC "J") (UNSPEC_MADD "J") (UNSPEC_NMSUB "J")
  (UNSPEC_VMERGE "Ws5")
  (UNSPEC_VMV "Ws5")
  (UNSPEC_VMVS "J")
  (UNSPEC_SLIDE1UP "J") (UNSPEC_SLIDE1DOWN "J")
])
