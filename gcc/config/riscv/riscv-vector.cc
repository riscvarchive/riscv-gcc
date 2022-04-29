/* Subroutines used for code generation for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */
   
#define IN_TARGET_CODE 1
#define INCLUDE_STRING
#define VSET_TOLERATE 2
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "backend.h"
#include "rtl.h"
#include "regs.h"
#include "insn-config.h"
#include "insn-attr.h"
#include "recog.h"
#include "output.h"
#include "alias.h"
#include "tree.h"
#include "stringpool.h"
#include "attribs.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "function.h"
#include "explow.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "reload.h"
#include "tm_p.h"
#include "target.h"
#include "basic-block.h"
#include "expr.h"
#include "optabs.h"
#include "bitmap.h"
#include "df.h"
#include "diagnostic.h"
#include "builtins.h"
#include "predict.h"
#include "tree-pass.h"
#include "opts.h"
#include "langhooks.h"
#include "rtl-iter.h"
#include "gimple.h"
#include "cfghooks.h"
#include "cfgloop.h"
#include "fold-const.h"
#include "gimple-iterator.h"
#include "tree-vectorizer.h"
#include "tree-ssa-loop-niter.h"
#include "rtx-vector-builder.h"
#include "fractional-cost.h"
#include "riscv-vector-builtins.h"
#include "riscv-vector.h"
/* This file should be included last.  */
#include "target-def.h"
#include "riscv-vector-cost.h"

/* Helper functions for RVV */

unsigned int
get_vtype_for_mode (machine_mode mode)
{
  /* ???? In RVV intrinsics docs, for vsetvl and vsetvlmax intrinsics,
     the tail and mask policy are set default to be ta,mu. Whether we
     should have other combinations of policy and add ta or ma operand
     to vsetvl and vsetvlmax intrinsics needs community confirm. */
  switch (mode)
    {
    case VNx2QImode:
    case VNx2BImode:
      return 0x45;

    case VNx4QImode:
    case VNx4BImode:
      return 0x46;

    case VNx8QImode:
    case VNx8BImode:
      return 0x47;

    case VNx16QImode:
    case VNx16BImode:
      return 0x40;

    case VNx32QImode:
    case VNx32BImode:
      return 0x41;

    case VNx64QImode:
    case VNx64BImode:
      return 0x42;

    case VNx128QImode:
    case VNx128BImode:
      return 0x43;

    case VNx2HImode:
    case VNx2HFmode:
      return 0x4e;

    case VNx4HImode:
    case VNx4HFmode:
      return 0x4f;

    case VNx8HImode:
    case VNx8HFmode:
      return 0x48;

    case VNx16HImode:
    case VNx16HFmode:
      return 0x49;

    case VNx32HImode:
    case VNx32HFmode:
      return 0x4a;

    case VNx64HImode:
    case VNx64HFmode:
      return 0x4b;

    case VNx2SImode:
    case VNx2SFmode:
      return 0x57;

    case VNx4SImode:
    case VNx4SFmode:
      return 0x50;

    case VNx8SImode:
    case VNx8SFmode:
      return 0x51;

    case VNx16SImode:
    case VNx16SFmode:
      return 0x52;

    case VNx32SImode:
    case VNx32SFmode:
      return 0x53;

    case VNx2DImode:
    case VNx2DFmode:
      return 0x58;

    case VNx4DImode:
    case VNx4DFmode:
      return 0x59;

    case VNx8DImode:
    case VNx8DFmode:
      return 0x5a;

    case VNx16DImode:
      return 0x5b;

    default:
      break;
    }

  gcc_unreachable ();
}

rtx
riscv_vector_gen_policy (unsigned int rvv_policy)
{
  if (rvv_policy == RVV_POLICY_MU)
    return riscv_vector::gen_mu_policy ();
  else if (rvv_policy == RVV_POLICY_TU)
    return riscv_vector::gen_tu_policy ();
  else
    return riscv_vector::gen_any_policy ();
}

bool
riscv_vector_mask_mode_p (machine_mode mode)
{
  return (mode == VNx2BImode || mode == VNx4BImode || mode == VNx8BImode ||
          mode == VNx16BImode || mode == VNx32BImode || mode == VNx64BImode ||
          mode == VNx128BImode);
}

bool
riscv_tuple_mode_p (machine_mode mode)
{
#define VECTOR_DATA_MODE_P_TUPLE8(MODE)                                        \
  (mode == VNx2x##MODE##mode) || (mode == VNx3x##MODE##mode) ||                \
      (mode == VNx4x##MODE##mode) || (mode == VNx5x##MODE##mode) ||            \
      (mode == VNx6x##MODE##mode) || (mode == VNx7x##MODE##mode) ||            \
      (mode == VNx8x##MODE##mode)
#define VECTOR_DATA_MODE_P_TUPLE4(MODE)                                        \
  (mode == VNx2x##MODE##mode) || (mode == VNx3x##MODE##mode) ||                \
      (mode == VNx4x##MODE##mode)
#define VECTOR_DATA_MODE_P_TUPLE2(MODE) (mode == VNx2x##MODE##mode)

  return (
      VECTOR_DATA_MODE_P_TUPLE8 (8QI) || VECTOR_DATA_MODE_P_TUPLE8 (4HI) ||
      VECTOR_DATA_MODE_P_TUPLE8 (2SI) || VECTOR_DATA_MODE_P_TUPLE8 (4HF) ||
      VECTOR_DATA_MODE_P_TUPLE8 (2SF) || VECTOR_DATA_MODE_P_TUPLE8 (4QI) ||
      VECTOR_DATA_MODE_P_TUPLE8 (2HI) || VECTOR_DATA_MODE_P_TUPLE8 (2HF) ||
      VECTOR_DATA_MODE_P_TUPLE8 (2QI) || VECTOR_DATA_MODE_P_TUPLE8 (16QI) ||
      VECTOR_DATA_MODE_P_TUPLE8 (8HI) || VECTOR_DATA_MODE_P_TUPLE8 (4SI) ||
      VECTOR_DATA_MODE_P_TUPLE8 (2DI) || VECTOR_DATA_MODE_P_TUPLE8 (8HF) ||
      VECTOR_DATA_MODE_P_TUPLE8 (4SF) || VECTOR_DATA_MODE_P_TUPLE8 (2DF) ||
      VECTOR_DATA_MODE_P_TUPLE4 (32QI) || VECTOR_DATA_MODE_P_TUPLE4 (16HI) ||
      VECTOR_DATA_MODE_P_TUPLE4 (8SI) || VECTOR_DATA_MODE_P_TUPLE4 (4DI) ||
      VECTOR_DATA_MODE_P_TUPLE4 (16HF) || VECTOR_DATA_MODE_P_TUPLE4 (8SF) ||
      VECTOR_DATA_MODE_P_TUPLE4 (4DF) || VECTOR_DATA_MODE_P_TUPLE2 (64QI) ||
      VECTOR_DATA_MODE_P_TUPLE2 (32HI) || VECTOR_DATA_MODE_P_TUPLE2 (16SI) ||
      VECTOR_DATA_MODE_P_TUPLE2 (8DI) || VECTOR_DATA_MODE_P_TUPLE2 (32HF) ||
      VECTOR_DATA_MODE_P_TUPLE2 (16SF) || VECTOR_DATA_MODE_P_TUPLE2 (8DF));
}

bool
riscv_vector_data_mode_p (machine_mode mode)
{
  return (mode == VNx2QImode || mode == VNx4QImode || mode == VNx8QImode ||
          mode == VNx16QImode || mode == VNx32QImode || mode == VNx64QImode ||
          mode == VNx128QImode || mode == VNx2HImode || mode == VNx4HImode ||
          mode == VNx8HImode || mode == VNx16HImode || mode == VNx32HImode ||
          mode == VNx64HImode || mode == VNx2SImode || mode == VNx4SImode ||
          mode == VNx8SImode || mode == VNx16SImode || mode == VNx32SImode ||
          mode == VNx2DImode || mode == VNx4DImode || mode == VNx8DImode ||
          mode == VNx16DImode || mode == VNx2HFmode || mode == VNx4HFmode ||
          mode == VNx8HFmode || mode == VNx16HFmode || mode == VNx32HFmode ||
          mode == VNx64HFmode || mode == VNx2SFmode || mode == VNx4SFmode ||
          mode == VNx8SFmode || mode == VNx16SFmode || mode == VNx32SFmode ||
          mode == VNx2DFmode || mode == VNx4DFmode || mode == VNx8DFmode ||
          mode == VNx16DFmode || riscv_tuple_mode_p (mode));
}

bool
riscv_vector_mode_p (machine_mode mode)
{
  return riscv_vector_mask_mode_p (mode) || riscv_vector_data_mode_p (mode);
}

bool
riscv_partial_tuple_vector_mode_p (machine_mode mode)
{
  switch (mode)
    {
    case VNx2x8QImode:
    case VNx3x8QImode:
    case VNx4x8QImode:
    case VNx5x8QImode:
    case VNx6x8QImode:
    case VNx7x8QImode:
    case VNx8x8QImode:

    case VNx2x4QImode:
    case VNx3x4QImode:
    case VNx4x4QImode:
    case VNx5x4QImode:
    case VNx6x4QImode:
    case VNx7x4QImode:
    case VNx8x4QImode:

    case VNx2x2QImode:
    case VNx3x2QImode:
    case VNx4x2QImode:
    case VNx5x2QImode:
    case VNx6x2QImode:
    case VNx7x2QImode:
    case VNx8x2QImode:

    case VNx2x4HImode:
    case VNx3x4HImode:
    case VNx4x4HImode:
    case VNx5x4HImode:
    case VNx6x4HImode:
    case VNx7x4HImode:
    case VNx8x4HImode:

    case VNx2x2HImode:
    case VNx3x2HImode:
    case VNx4x2HImode:
    case VNx5x2HImode:
    case VNx6x2HImode:
    case VNx7x2HImode:
    case VNx8x2HImode:

    case VNx2x2SImode:
    case VNx3x2SImode:
    case VNx4x2SImode:
    case VNx5x2SImode:
    case VNx6x2SImode:
    case VNx7x2SImode:
    case VNx8x2SImode:

    case VNx2x4HFmode:
    case VNx3x4HFmode:
    case VNx4x4HFmode:
    case VNx5x4HFmode:
    case VNx6x4HFmode:
    case VNx7x4HFmode:
    case VNx8x4HFmode:

    case VNx2x2HFmode:
    case VNx3x2HFmode:
    case VNx4x2HFmode:
    case VNx5x2HFmode:
    case VNx6x2HFmode:
    case VNx7x2HFmode:
    case VNx8x2HFmode:

    case VNx2x2SFmode:
    case VNx3x2SFmode:
    case VNx4x2SFmode:
    case VNx5x2SFmode:
    case VNx6x2SFmode:
    case VNx7x2SFmode:
    case VNx8x2SFmode:
      return true;
    default:
      return false;
    }
}

poly_uint64
riscv_vector_natural_size (machine_mode mode)
{
  switch (mode)
    {
    case VNx2x8QImode:
    case VNx3x8QImode:
    case VNx4x8QImode:
    case VNx5x8QImode:
    case VNx6x8QImode:
    case VNx7x8QImode:
    case VNx8x8QImode:
      return GET_MODE_SIZE (VNx8QImode);

    case VNx2x4QImode:
    case VNx3x4QImode:
    case VNx4x4QImode:
    case VNx5x4QImode:
    case VNx6x4QImode:
    case VNx7x4QImode:
    case VNx8x4QImode:
      return GET_MODE_SIZE (VNx4QImode);

    case VNx2x2QImode:
    case VNx3x2QImode:
    case VNx4x2QImode:
    case VNx5x2QImode:
    case VNx6x2QImode:
    case VNx7x2QImode:
    case VNx8x2QImode:
      return GET_MODE_SIZE (VNx2QImode);

    case VNx2x4HImode:
    case VNx3x4HImode:
    case VNx4x4HImode:
    case VNx5x4HImode:
    case VNx6x4HImode:
    case VNx7x4HImode:
    case VNx8x4HImode:
      return GET_MODE_SIZE (VNx4HImode);

    case VNx2x2HImode:
    case VNx3x2HImode:
    case VNx4x2HImode:
    case VNx5x2HImode:
    case VNx6x2HImode:
    case VNx7x2HImode:
    case VNx8x2HImode:
      return GET_MODE_SIZE (VNx2HImode);

    case VNx2x2SImode:
    case VNx3x2SImode:
    case VNx4x2SImode:
    case VNx5x2SImode:
    case VNx6x2SImode:
    case VNx7x2SImode:
    case VNx8x2SImode:
      return GET_MODE_SIZE (VNx2SImode);

    case VNx2x4HFmode:
    case VNx3x4HFmode:
    case VNx4x4HFmode:
    case VNx5x4HFmode:
    case VNx6x4HFmode:
    case VNx7x4HFmode:
    case VNx8x4HFmode:
      return GET_MODE_SIZE (VNx4HFmode);

    case VNx2x2HFmode:
    case VNx3x2HFmode:
    case VNx4x2HFmode:
    case VNx5x2HFmode:
    case VNx6x2HFmode:
    case VNx7x2HFmode:
    case VNx8x2HFmode:
      return GET_MODE_SIZE (VNx2HFmode);

    case VNx2x2SFmode:
    case VNx3x2SFmode:
    case VNx4x2SFmode:
    case VNx5x2SFmode:
    case VNx6x2SFmode:
    case VNx7x2SFmode:
    case VNx8x2SFmode:
      return GET_MODE_SIZE (VNx2SFmode);

    default:
      break;
    }

  return BYTES_PER_RISCV_VECTOR;
}

bool
riscv_const_poly_int_p (rtx x)
{
  poly_int64 value = rtx_to_poly_int64 (x);

  HOST_WIDE_INT factor = value.coeffs[0];
  return (value.coeffs[1] == factor && factor == UNITS_PER_V_REG.coeffs[0]);
}

unsigned int
riscv_parse_vlmul_field (unsigned int vtype)
{
  return vtype & 0x7;
}

unsigned int
riscv_parse_vsew_field (unsigned int vtype)
{
  return (vtype >> 3) & 0x7;
}

bool
riscv_parse_vta_field (unsigned int vtype)
{
  return (vtype & 0x40) != 0;
}

bool
riscv_parse_vma_field (unsigned int vtype)
{
  return (vtype & 0x80) != 0;
}

unsigned int
riscv_classify_vlmul_field (machine_mode mode)
{
  /* Make the decision based on the mode's enum value rather than its
     properties, so that we keep the correct classification regardless
     of -mriscv-vector-bits.  */
  switch (mode)
    {
#define CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8(MODE)                                \
  case E_VNx##MODE##mode:                                                      \
  case E_VNx2x##MODE##mode:                                                    \
  case E_VNx3x##MODE##mode:                                                    \
  case E_VNx4x##MODE##mode:                                                    \
  case E_VNx5x##MODE##mode:                                                    \
  case E_VNx6x##MODE##mode:                                                    \
  case E_VNx7x##MODE##mode:                                                    \
  case E_VNx8x##MODE##mode:
#define CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4(MODE)                                \
  case E_VNx##MODE##mode:                                                      \
  case E_VNx2x##MODE##mode:                                                    \
  case E_VNx3x##MODE##mode:                                                    \
  case E_VNx4x##MODE##mode:
#define CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2(MODE)                                \
  case E_VNx##MODE##mode:                                                      \
  case E_VNx2x##MODE##mode:
      /* Partial RVV LMUL = 1/2 vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (8QI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (4HI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2SI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (4HF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2SF)

    case E_VNx8BImode:
      return VLMUL_FIELD_111;
      /* Partial RVV LMUL = 1/4 vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (4QI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2HI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2HF)

    case E_VNx4BImode:
      return VLMUL_FIELD_110;
      /* Partial RVV LMUL = 1/8 vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2QI)

    case E_VNx2BImode:
      return VLMUL_FIELD_101;
      /* x1 RVV vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (16QI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (8HI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (4SI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2DI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (8HF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (4SF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE8 (2DF)

    case E_VNx16BImode:
      return VLMUL_FIELD_000;
      /* x2 RVV vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (32QI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (16HI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (8SI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (4DI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (16HF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (8SF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE4 (4DF)

    case E_VNx32BImode:
      return VLMUL_FIELD_001;
      /* x4 RVV vectors.  */
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (64QI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (32HI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (16SI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (8DI)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (32HF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (16SF)
      CLASSIFY_VLMUL_VECTOR_MODE_TUPLE2 (8DF)

    case E_VNx64BImode:
      return VLMUL_FIELD_010;

    /* x8 RVV vectors.  */
    case E_VNx128QImode:
    case E_VNx64HImode:
    case E_VNx32SImode:
    case E_VNx16DImode:
    case E_VNx64HFmode:
    case E_VNx32SFmode:
    case E_VNx16DFmode:
    case E_VNx128BImode:
      return VLMUL_FIELD_011;

    default:
      break;
    }

  /* we don't care about VLMUL for Mask */
  return VLMUL_FIELD_000;
}

/* lmul = real_lmul * 8
   guarantee integer
   e.g.
     1  => 1/8
     2  => 1/4
     4  => 1/2
     8  => 1
     16 => 2
     32 => 4
     64 => 8
 */
unsigned int
riscv_get_lmulx8 (machine_mode mode)
{
  unsigned int vlmul = riscv_classify_vlmul_field (mode);
  switch (vlmul)
    {
      case VLMUL_FIELD_000:
        return 8;
      case VLMUL_FIELD_001:
        return 16;
      case VLMUL_FIELD_010:
        return 32;
      case VLMUL_FIELD_011:
        return 64;
      case VLMUL_FIELD_101:
        return 1;
      case VLMUL_FIELD_110:
        return 2;
      case VLMUL_FIELD_111:
        return 4;
      default:
        gcc_unreachable ();
    }
}

unsigned int
riscv_classify_vsew_field (machine_mode mode)
{
  switch (GET_MODE_INNER (mode))
    {
    case E_QImode:
      return VSEW_FIELD_000;

    case E_HImode:
    case E_HFmode:
      return VSEW_FIELD_001;

    case E_SImode:
    case E_SFmode:
      return VSEW_FIELD_010;

    case E_DImode:
    case E_DFmode:
      return VSEW_FIELD_011;

    case E_TImode:
      return VSEW_FIELD_100;

    default:
      break;
    }

  /* we don't care about VSEW for Mask */
  return VSEW_FIELD_000;
}

unsigned int
riscv_classify_vtype_field (machine_mode mode)
{
  unsigned int vlmul = riscv_classify_vlmul_field (mode);
  unsigned int vsew = riscv_classify_vsew_field (mode);
  unsigned int vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;
  return vtype;
}

machine_mode
riscv_translate_attr_mode (rtx_insn *insn)
{
  gcc_assert (recog_memoized (insn) >= 0);

  switch (get_attr_mode (insn))
    {
#define TRANSLATE_VECTOR_MODE_TUPLE8(MODE)                                     \
  case MODE_VNX##MODE:                                                         \
    return VNx##MODE##mode;                                                    \
  case MODE_VNX2X##MODE:                                                       \
    return VNx2x##MODE##mode;                                                  \
  case MODE_VNX3X##MODE:                                                       \
    return VNx3x##MODE##mode;                                                  \
  case MODE_VNX4X##MODE:                                                       \
    return VNx4x##MODE##mode;                                                  \
  case MODE_VNX5X##MODE:                                                       \
    return VNx5x##MODE##mode;                                                  \
  case MODE_VNX6X##MODE:                                                       \
    return VNx6x##MODE##mode;                                                  \
  case MODE_VNX7X##MODE:                                                       \
    return VNx7x##MODE##mode;                                                  \
  case MODE_VNX8X##MODE:                                                       \
    return VNx8x##MODE##mode;
#define TRANSLATE_VECTOR_MODE_TUPLE4(MODE)                                     \
  case MODE_VNX##MODE:                                                         \
    return VNx##MODE##mode;                                                    \
  case MODE_VNX2X##MODE:                                                       \
    return VNx2x##MODE##mode;                                                  \
  case MODE_VNX3X##MODE:                                                       \
    return VNx3x##MODE##mode;                                                  \
  case MODE_VNX4X##MODE:                                                       \
    return VNx4x##MODE##mode;
#define TRANSLATE_VECTOR_MODE_TUPLE2(MODE)                                     \
  case MODE_VNX##MODE:                                                         \
    return VNx##MODE##mode;                                                    \
  case MODE_VNX2X##MODE:                                                       \
    return VNx2x##MODE##mode;
#define TRANSLATE_VECTOR_MODE(MODE)                                            \
  case MODE_VNX##MODE:                                                         \
    return VNx##MODE##mode;
      TRANSLATE_VECTOR_MODE_TUPLE8 (8QI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (4HI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2SI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (4HF)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2SF)
      TRANSLATE_VECTOR_MODE (8BI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (4QI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2HI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2HF)
      TRANSLATE_VECTOR_MODE (4BI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2QI)
      TRANSLATE_VECTOR_MODE (2BI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (16QI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (8HI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (4SI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2DI)
      TRANSLATE_VECTOR_MODE_TUPLE8 (8HF)
      TRANSLATE_VECTOR_MODE_TUPLE8 (4SF)
      TRANSLATE_VECTOR_MODE_TUPLE8 (2DF)
      TRANSLATE_VECTOR_MODE (16BI)
      TRANSLATE_VECTOR_MODE_TUPLE4 (32QI)
      TRANSLATE_VECTOR_MODE_TUPLE4 (16HI)
      TRANSLATE_VECTOR_MODE_TUPLE4 (8SI)
      TRANSLATE_VECTOR_MODE_TUPLE4 (4DI)
      TRANSLATE_VECTOR_MODE_TUPLE4 (16HF)
      TRANSLATE_VECTOR_MODE_TUPLE4 (8SF)
      TRANSLATE_VECTOR_MODE_TUPLE4 (4DF)
      TRANSLATE_VECTOR_MODE (32BI)
      TRANSLATE_VECTOR_MODE_TUPLE2 (64QI)
      TRANSLATE_VECTOR_MODE_TUPLE2 (32HI)
      TRANSLATE_VECTOR_MODE_TUPLE2 (16SI)
      TRANSLATE_VECTOR_MODE_TUPLE2 (8DI)
      TRANSLATE_VECTOR_MODE_TUPLE2 (32HF)
      TRANSLATE_VECTOR_MODE_TUPLE2 (16SF)
      TRANSLATE_VECTOR_MODE_TUPLE2 (8DF)
      TRANSLATE_VECTOR_MODE (64BI)
      TRANSLATE_VECTOR_MODE (128QI)
      TRANSLATE_VECTOR_MODE (64HI)
      TRANSLATE_VECTOR_MODE (32SI)
      TRANSLATE_VECTOR_MODE (16DI)
      TRANSLATE_VECTOR_MODE (64HF)
      TRANSLATE_VECTOR_MODE (32SF)
      TRANSLATE_VECTOR_MODE (16DF)
      TRANSLATE_VECTOR_MODE (128BI)

    default:
      break;
    }

  return VOIDmode;
}

int
riscv_classify_nf (machine_mode mode)
{
#define CLASSIFY_TUPLE8(MODE)                                                  \
  case VNx2x##MODE##mode:                                                      \
    return 2;                                                                  \
  case VNx3x##MODE##mode:                                                      \
    return 3;                                                                  \
  case VNx4x##MODE##mode:                                                      \
    return 4;                                                                  \
  case VNx5x##MODE##mode:                                                      \
    return 5;                                                                  \
  case VNx6x##MODE##mode:                                                      \
    return 6;                                                                  \
  case VNx7x##MODE##mode:                                                      \
    return 7;                                                                  \
  case VNx8x##MODE##mode:                                                      \
    return 8;
#define CLASSIFY_TUPLE4(MODE)                                                  \
  case VNx2x##MODE##mode:                                                      \
    return 2;                                                                  \
  case VNx3x##MODE##mode:                                                      \
    return 3;                                                                  \
  case VNx4x##MODE##mode:                                                      \
    return 4;
#define CLASSIFY_TUPLE2(MODE)                                                  \
  case VNx2x##MODE##mode:                                                      \
    return 2;
  switch (mode)
    {
      CLASSIFY_TUPLE8 (2QI)
      CLASSIFY_TUPLE8 (4QI)
      CLASSIFY_TUPLE8 (8QI)
      CLASSIFY_TUPLE8 (16QI)
      CLASSIFY_TUPLE4 (32QI)
      CLASSIFY_TUPLE2 (64QI)
      CLASSIFY_TUPLE8 (2HI)
      CLASSIFY_TUPLE8 (4HI)
      CLASSIFY_TUPLE8 (8HI)
      CLASSIFY_TUPLE4 (16HI)
      CLASSIFY_TUPLE2 (32HI)
      CLASSIFY_TUPLE8 (2SI)
      CLASSIFY_TUPLE8 (4SI)
      CLASSIFY_TUPLE4 (8SI)
      CLASSIFY_TUPLE2 (16SI)
      CLASSIFY_TUPLE8 (2DI)
      CLASSIFY_TUPLE4 (4DI)
      CLASSIFY_TUPLE2 (8DI)
      CLASSIFY_TUPLE8 (2HF)
      CLASSIFY_TUPLE8 (4HF)
      CLASSIFY_TUPLE8 (8HF)
      CLASSIFY_TUPLE4 (16HF)
      CLASSIFY_TUPLE2 (32HF)
      CLASSIFY_TUPLE8 (2SF)
      CLASSIFY_TUPLE8 (4SF)
      CLASSIFY_TUPLE4 (8SF)
      CLASSIFY_TUPLE2 (16SF)
      CLASSIFY_TUPLE8 (2DF)
      CLASSIFY_TUPLE4 (4DF)
      CLASSIFY_TUPLE2 (8DF)
    default:
      break;
    }

  return 1;
}

int
riscv_vlmul_regsize (machine_mode mode)
{
  if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
    return 1;
  switch (riscv_classify_vlmul_field (mode))
    {
    case VLMUL_FIELD_001:
      return 2;
    case VLMUL_FIELD_010:
      return 4;
    case VLMUL_FIELD_011:
      return 8;
    case VLMUL_FIELD_100:
      gcc_unreachable ();
    default:
      return 1;
    }
}

/* Return the RVV vector mode that has NUNITS elements of mode INNER_MODE.  */

opt_machine_mode
riscv_vector_tuple_mode (machine_mode mode, unsigned HOST_WIDE_INT nvecs)
{
  switch (mode)
    {
#define TUPLE_MODE_TUPLE8(MODE)                                                \
  case VNx##MODE##mode:                                                        \
    if (nvecs == 2)                                                            \
      return VNx2x##MODE##mode;                                                \
    if (nvecs == 3)                                                            \
      return VNx3x##MODE##mode;                                                \
    if (nvecs == 4)                                                            \
      return VNx4x##MODE##mode;                                                \
    if (nvecs == 5)                                                            \
      return VNx5x##MODE##mode;                                                \
    if (nvecs == 6)                                                            \
      return VNx6x##MODE##mode;                                                \
    if (nvecs == 7)                                                            \
      return VNx7x##MODE##mode;                                                \
    if (nvecs == 8)                                                            \
      return VNx8x##MODE##mode;                                                \
    break;
#define TUPLE_MODE_TUPLE4(MODE)                                                \
  case VNx##MODE##mode:                                                        \
    if (nvecs == 2)                                                            \
      return VNx2x##MODE##mode;                                                \
    if (nvecs == 3)                                                            \
      return VNx3x##MODE##mode;                                                \
    if (nvecs == 4)                                                            \
      return VNx4x##MODE##mode;                                                \
    break;
#define TUPLE_MODE_TUPLE2(MODE)                                                \
  case VNx##MODE##mode:                                                        \
    if (nvecs == 2)                                                            \
      return VNx2x##MODE##mode;                                                \
    break;
      TUPLE_MODE_TUPLE8 (8QI)
      TUPLE_MODE_TUPLE8 (4HI)
      TUPLE_MODE_TUPLE8 (2SI)
      TUPLE_MODE_TUPLE8 (4HF)
      TUPLE_MODE_TUPLE8 (2SF)
      TUPLE_MODE_TUPLE8 (4QI)
      TUPLE_MODE_TUPLE8 (2HI)
      TUPLE_MODE_TUPLE8 (2HF)
      TUPLE_MODE_TUPLE8 (2QI)
      TUPLE_MODE_TUPLE8 (16QI)
      TUPLE_MODE_TUPLE8 (8HI)
      TUPLE_MODE_TUPLE8 (4SI)
      TUPLE_MODE_TUPLE8 (2DI)
      TUPLE_MODE_TUPLE8 (8HF)
      TUPLE_MODE_TUPLE8 (4SF)
      TUPLE_MODE_TUPLE8 (2DF)
      TUPLE_MODE_TUPLE4 (32QI)
      TUPLE_MODE_TUPLE4 (16HI)
      TUPLE_MODE_TUPLE4 (8SI)
      TUPLE_MODE_TUPLE4 (4DI)
      TUPLE_MODE_TUPLE4 (16HF)
      TUPLE_MODE_TUPLE4 (8SF)
      TUPLE_MODE_TUPLE4 (4DF)
      TUPLE_MODE_TUPLE2 (64QI)
      TUPLE_MODE_TUPLE2 (32HI)
      TUPLE_MODE_TUPLE2 (16SI)
      TUPLE_MODE_TUPLE2 (8DI)
      TUPLE_MODE_TUPLE2 (32HF)
      TUPLE_MODE_TUPLE2 (16SF)
      TUPLE_MODE_TUPLE2 (8DF)

    default:
      break;
    }

  return opt_machine_mode ();
}

/* Return true if X is a const_vector with all duplicate elements, which is in
   the range between MINVAL and MAXVAL.  */

bool
riscv_const_vec_all_same_in_range_p (rtx x, HOST_WIDE_INT minval,
                                     HOST_WIDE_INT maxval)
{
  rtx elt;
  return (const_vec_duplicate_p (x, &elt) && CONST_INT_P (elt) &&
          IN_RANGE (INTVAL (elt), minval, maxval));
}

/* Return true if VEC is a constant in which every element is in the range
   [MINVAL, MAXVAL].  The elements do not need to have the same value.  */

static bool
riscv_const_vec_all_in_range_p (rtx vec, HOST_WIDE_INT minval,
                                HOST_WIDE_INT maxval)
{
  if (!CONST_VECTOR_P (vec) ||
      GET_MODE_CLASS (GET_MODE (vec)) != MODE_VECTOR_INT)
    return false;

  unsigned int nunits;
  if (!CONST_VECTOR_STEPPED_P (vec))
    nunits = const_vector_encoded_nelts (vec);
  else if (!CONST_VECTOR_NUNITS (vec).is_constant (&nunits))
    return false;

  for (unsigned int i = 0; i < nunits; i++)
    {
      rtx vec_elem = CONST_VECTOR_ELT (vec, i);
      if (!CONST_INT_P (vec_elem) ||
          !IN_RANGE (INTVAL (vec_elem), minval, maxval))
        return false;
    }
  return true;
}

/* Return the number of temporary registers that riscv_add_offset_1
   would need to add OFFSET to a register.  */

static unsigned int
riscv_add_offset_1_temporaries (HOST_WIDE_INT offset)
{
  return SMALL_OPERAND (offset) ? 0 : 1;
}

/* Return the number of temporary registers that riscv_add_offset
   would need to move OFFSET into a register or add OFFSET to a register;
   ADD_P is true if we want the latter rather than the former.  */

unsigned int
riscv_offset_temporaries (bool add_p, poly_int64 offset)
{
  /* This follows the same structure as riscv_add_offset.  */
  if (add_p && riscv_const_poly_int_p (gen_int_mode (offset, Pmode)))
    return 0;

  unsigned int count = 0;
  HOST_WIDE_INT factor = offset.coeffs[1];
  HOST_WIDE_INT constant = offset.coeffs[0] - factor;
  poly_int64 poly_offset (factor, factor);
  if (add_p && riscv_const_poly_int_p (gen_int_mode (offset, Pmode)))
    /* Need one register for the csrr vlenb result.  */
    count += 1;
  else if (factor != 0)
    {
      factor = abs (factor);
      if (!riscv_const_poly_int_p (gen_int_mode (poly_offset, Pmode)))
        /* Need one register for the CNT result and one for the multiplication
           factor.  If necessary, the second temporary can be reused for the
           constant part of the offset.  */
        return 2;
      /* Need one register for the CNT result (which might then
         be shifted).  */
      count += 1;
    }
  return count + riscv_add_offset_1_temporaries (constant);
}

/* Report when we try to do something that requires vector when vector is disabled.
   This is an error of last resort and isn't very high-quality.  It usually
   involves attempts to measure the vector length in some way.  */
void
riscv_report_vector_required (void)
{
  static bool reported_p = false;

  /* Avoid reporting a slew of messages for a single oversight.  */
  if (reported_p)
    return;

  error ("this operation requires the RVV ISA extension");
  inform (input_location, "you can enable RVV using the command-line"
          " option %<-march%>, or by using the %<target%>"
          " attribute or pragma");
  reported_p = true;
}

/* Note: clobber register holds the vlenb or 1/2 vlenb or 1/4 vlenb or 1/8 vlenb value. */
/* Expand move for quotient.  */
static void
riscv_expand_quotient (int quotient, machine_mode mode, rtx clobber_vlenb, rtx dest)
{
  if (quotient == 0)
    {
      riscv_emit_move(dest, GEN_INT(0));
      return;
    }

  bool is_neg = quotient < 0;
  quotient = abs(quotient);
  int log2 = exact_log2 (quotient);
  int vlenb = BYTES_PER_RISCV_VECTOR.coeffs[1];

  if (GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
    emit_insn (gen_rtx_SET (clobber_vlenb, gen_int_mode (poly_int64 (vlenb, vlenb), mode)));
  else
    {
      riscv_emit_move (gen_highpart (Pmode, clobber_vlenb), GEN_INT (0));
      emit_insn (gen_rtx_SET (gen_lowpart (Pmode, clobber_vlenb), gen_int_mode (poly_int64 (vlenb, vlenb), Pmode)));
    }

  if (log2 == 0)
    {
      if (is_neg)
        {
          if (GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
            emit_insn (gen_rtx_SET (dest, gen_rtx_NEG (mode, clobber_vlenb)));
          else
            {
              /* We should use SImode to simulate DImode negation. */
              /* prologue and epilogue can not go through this condition. */
              gcc_assert (can_create_pseudo_p ());
              rtx reg = gen_reg_rtx (Pmode);
              riscv_emit_move(dest, clobber_vlenb);
              emit_insn (gen_rtx_SET (reg,
                  gen_rtx_NE (Pmode, gen_lowpart (Pmode, dest), const0_rtx)));
              emit_insn (gen_rtx_SET (gen_highpart (Pmode, dest),
                  gen_rtx_NEG (Pmode, gen_highpart (Pmode, dest))));
              emit_insn (gen_rtx_SET (gen_lowpart (Pmode, dest),
                  gen_rtx_NEG (Pmode, gen_lowpart (Pmode, dest))));
              emit_insn (gen_rtx_SET (gen_highpart (Pmode, dest),
                  gen_rtx_MINUS (Pmode, gen_highpart (Pmode, dest), reg)));
            }
        }
      else
        riscv_emit_move(dest, clobber_vlenb);
    }
  else if (log2 != -1
    && GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
    {
      gcc_assert (IN_RANGE (log2, 0, 31));

      if (is_neg)
        {
          emit_insn (gen_rtx_SET (dest, gen_rtx_NEG (mode, clobber_vlenb)));
          emit_insn (gen_rtx_SET (dest, gen_rtx_ASHIFT (mode, dest, GEN_INT (log2))));
        }
      else
        emit_insn (gen_rtx_SET (dest, gen_rtx_ASHIFT (mode, clobber_vlenb, GEN_INT (log2))));
    }
  else if (exact_log2 (quotient + 1) != -1
    && GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
    {
      gcc_assert (IN_RANGE (exact_log2 (quotient + 1), 0, 31));
      emit_insn (gen_rtx_SET (
                   dest,
                   gen_rtx_ASHIFT (mode, clobber_vlenb, GEN_INT (exact_log2 (quotient + 1)))));

      if (is_neg)
        emit_insn (gen_rtx_SET (dest, gen_rtx_MINUS (mode, clobber_vlenb, dest)));
      else
        emit_insn (gen_rtx_SET (dest, gen_rtx_MINUS (mode, dest, clobber_vlenb)));
    }
  else if (exact_log2 (quotient - 1) != -1
    && GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
    {
      gcc_assert (IN_RANGE (exact_log2 (quotient - 1), 0, 31));
      emit_insn (gen_rtx_SET (
                   dest, gen_rtx_ASHIFT (mode, clobber_vlenb,
                                         GEN_INT (exact_log2 (quotient - 1)))));

      if (is_neg)
        {
          emit_insn (gen_rtx_SET (dest, gen_rtx_NEG (mode, dest)));
          emit_insn (gen_rtx_SET (dest, gen_rtx_MINUS (mode, dest, clobber_vlenb)));
        }
      else
        emit_insn (gen_rtx_SET (dest, gen_rtx_PLUS (mode, dest, clobber_vlenb)));
    }
  else
    {
      gcc_assert (TARGET_MUL
                  && "M-extension must be enabled to calculate the poly_int "
                  "size/offset.");

      if (is_neg)
        riscv_emit_move (dest, GEN_INT (-quotient));
      else
        riscv_emit_move (dest, GEN_INT (quotient));

      if (GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
        emit_insn (gen_rtx_SET (dest, gen_rtx_MULT (mode, dest, clobber_vlenb)));
      else
        {
          /* We should use SImode to simulate DImode multiplication. */
          /* prologue and epilogue can not go through this condition. */
          gcc_assert (can_create_pseudo_p ());
          rtx reg = gen_reg_rtx (Pmode);
          emit_insn (gen_umulsi3_highpart (reg, gen_lowpart (Pmode, dest),
              gen_lowpart (Pmode, clobber_vlenb)));
          emit_insn (gen_rtx_SET (gen_highpart (Pmode, clobber_vlenb),
              gen_rtx_MULT (Pmode, gen_highpart (Pmode, clobber_vlenb),
                  gen_lowpart (Pmode, dest))));
          emit_insn (gen_rtx_SET (gen_highpart (Pmode, dest),
              gen_rtx_MULT (Pmode, gen_highpart (Pmode, dest),
                  gen_lowpart (Pmode, clobber_vlenb))));
          emit_insn (gen_rtx_SET (gen_lowpart (Pmode, dest),
              gen_rtx_MULT (Pmode, gen_lowpart (Pmode, dest),
                  gen_lowpart (Pmode, clobber_vlenb))));
          emit_insn (gen_rtx_SET (gen_highpart (Pmode, dest),
              gen_rtx_PLUS (Pmode, gen_highpart (Pmode, dest),
                  gen_highpart (Pmode, clobber_vlenb))));
          emit_insn (gen_rtx_SET (gen_highpart (Pmode, dest),
              gen_rtx_PLUS (Pmode, gen_highpart (Pmode, dest), reg)));
        }
    }
}

/* Analyze src and emit const_poly_int mov sequence.  */

void
riscv_vector_expand_poly_move (machine_mode mode, rtx dest, rtx clobber,
                               rtx src)
{
  poly_int64 value = rtx_to_poly_int64 (src);
  int offset = value.coeffs[0];
  int factor = value.coeffs[1];
  int vlenb = BYTES_PER_RISCV_VECTOR.coeffs[1];
  int div_factor = 0;
  
  if (BYTES_PER_RISCV_VECTOR.is_constant ())
    {
      gcc_assert (value.is_constant ());
      riscv_emit_move (dest, GEN_INT (value.to_constant ()));
      return;
    }
  else if ((factor % vlenb) == 0)
    riscv_expand_quotient (factor / vlenb, mode, clobber, dest);
  else if ((factor % (vlenb / 2)) == 0)
    {
      riscv_expand_quotient (factor / (vlenb / 2), mode, clobber, dest);
      div_factor = 2;
    }
  else if ((factor % (vlenb / 4)) == 0)
    {
      riscv_expand_quotient (factor / (vlenb / 4), mode, clobber, dest);
      div_factor = 4;
    }
  else if ((factor % (vlenb / 8)) == 0)
    {
      riscv_expand_quotient (factor / (vlenb / 8), mode, clobber, dest);
      div_factor = 8;
    }
  else if ((factor % (vlenb / 16)) == 0)
    {
      riscv_expand_quotient (factor / (vlenb / 16), mode, clobber, dest);
      div_factor = 16;
    }
  else
    gcc_unreachable ();

  if (div_factor != 0)
    {
      if (GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
        emit_insn (gen_rtx_SET (
            dest,
            gen_rtx_ASHIFTRT (mode, dest, GEN_INT (exact_log2 (div_factor)))));
      else
        {
          /* We should use SImode to simulate DImode shift. */
          /* prologue and epilogue can not go through this condition. */
          gcc_assert (can_create_pseudo_p ());
          rtx reg = gen_reg_rtx (Pmode);
          emit_insn (gen_rtx_SET (
              reg, gen_rtx_ASHIFT (Pmode, gen_highpart (Pmode, dest),
                                   GEN_INT (GET_MODE_BITSIZE (Pmode) -
                                            exact_log2 (div_factor)))));
          emit_insn (gen_rtx_SET (
              gen_lowpart (Pmode, dest),
              gen_rtx_LSHIFTRT (Pmode, gen_lowpart (Pmode, dest),
                                GEN_INT (exact_log2 (div_factor)))));
          emit_insn (gen_rtx_SET (
              gen_lowpart (Pmode, dest),
              gen_rtx_IOR (Pmode, reg, gen_lowpart (Pmode, dest))));
          emit_insn (gen_rtx_SET (
              gen_highpart (Pmode, dest),
              gen_rtx_ASHIFTRT (Pmode, gen_highpart (Pmode, dest),
                                GEN_INT (exact_log2 (div_factor)))));
        }
    }

  HOST_WIDE_INT constant = offset - factor;

  if (constant == 0)
    return;
  else if (SMALL_OPERAND (constant))
    {
      if (GET_MODE_SIZE (mode).to_constant () <= GET_MODE_SIZE (Pmode))
        emit_insn (
            gen_rtx_SET (dest, gen_rtx_PLUS (mode, dest, GEN_INT (constant))));
      else
        {
          /* We should use SImode to simulate DImode addition. */
          /* prologue and epilogue can not go through this condition. */
          gcc_assert (can_create_pseudo_p ());
          rtx reg = gen_reg_rtx (Pmode);
          emit_insn (
              gen_rtx_SET (reg, gen_rtx_PLUS (Pmode, gen_lowpart (Pmode, dest),
                                              GEN_INT (constant))));
          emit_insn (gen_rtx_SET (
              gen_lowpart (Pmode, dest),
              gen_rtx_LTU (Pmode, reg, gen_lowpart (Pmode, dest))));
          emit_insn (
              gen_rtx_SET (gen_highpart (Pmode, dest),
                           gen_rtx_PLUS (Pmode, gen_lowpart (Pmode, dest),
                                         gen_highpart (Pmode, dest))));
          riscv_emit_move (gen_lowpart (Pmode, dest), reg);
        }
    }
  else
    emit_insn (gen_rtx_SET (dest, riscv_add_offset (clobber, dest, constant)));
}

/* Adjust frame of vector for prologue && epilogue. */
void
riscv_vector_adjust_frame (rtx target, poly_int64 offset)
{
  rtx clobber = RISCV_PROLOGUE_TEMP (Pmode);
  rtx space = RISCV_PROLOGUE_TEMP2 (Pmode);
  rtx insn, dwarf, adjust_frame_rtx;

  riscv_vector_expand_poly_move (Pmode, space, clobber, gen_int_mode (offset, Pmode));

  insn = gen_add3_insn (target,
                        target,
                        space);

  insn = emit_insn (insn);

  RTX_FRAME_RELATED_P (insn) = 1;

  adjust_frame_rtx =
    gen_rtx_SET (target,
                 plus_constant (Pmode, target, offset));

  dwarf = alloc_reg_note (REG_FRAME_RELATED_EXPR,
                          copy_rtx (adjust_frame_rtx), NULL_RTX);

  REG_NOTES (insn) = dwarf;
}

/* Subroutine of riscv_expand_block_move function using
   RVV instructions. */

bool
riscv_vector_expand_block_move (rtx *operands)
{
/*
  memcpy:
      mv a3, a0 # Copy destination
  loop:
    vsetvli t0, a2, e8, m8, ta, ma   # Vectors of 8b
    vle8.v v0, (a1)               # Load bytes
      add a1, a1, t0              # Bump pointer
      sub a2, a2, t0              # Decrement count
    vse8.v v0, (a3)               # Store bytes
      add a3, a3, t0              # Bump pointer
      bnez a2, loop               # Any more?
      ret                         # Return
*/
  if (!TARGET_VECTOR || !TARGET_RVV)
    return false;
  machine_mode cur_mode = targetm.vectorize.preferred_simd_mode (QImode);
  bool size_p = optimize_function_for_size_p (cfun);
  rtx src, dst;
  rtx end = gen_reg_rtx (Pmode);
  rtx cnt = gen_reg_rtx (Pmode);
  rtx vec = gen_reg_rtx (cur_mode);
  /* FIXME: we consider the num of bytes to be memcpy is
     worthwhile as 16 bytes, but it is under disscussion. */
  unsigned int worthwhile_bytes = 16;

  /* A memcpy libcall in the worst case takes 3 instructions to prepare the
     arguments + 1 for the call.  When RVV should take 7 instructions and
     we're optimizing for size a libcall my be preferable.  */
  if (size_p)
    return false;

  if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < worthwhile_bytes)
    return false;

  if (CONST_POLY_INT_P (operands[2]))
    {
      if (GET_MODE (operands[2]) != Pmode)
        {
          poly_int64 value = rtx_to_poly_int64 (operands[2]);
          emit_insn (gen_rtx_SET (end, gen_int_mode (poly_int64 (value.coeffs[0], value.coeffs[1]), Pmode)));
        }
      else
        emit_insn (gen_rtx_SET (end, operands[2]));
    }
  else
    {
      if (GET_MODE (operands[2]) != Pmode)
        riscv_emit_move (end, gen_lowpart (Pmode, operands[2]));
      else
        riscv_emit_move (end, operands[2]);
    }

  /* Move the address into scratch registers.  */
  dst = copy_addr_to_reg (XEXP (operands[0], 0));
  src = copy_addr_to_reg (XEXP (operands[1], 0));

  unsigned int vlmul = riscv_classify_vlmul_field (cur_mode);
  unsigned int vsew = riscv_classify_vsew_field (cur_mode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;

  rtx label = gen_label_rtx ();
  emit_label (label);
  emit_insn (gen_vsetvl (Pmode, cnt, end, GEN_INT (vtype)));
  emit_insn (gen_vle (cur_mode, vec, const0_rtx, const0_rtx, src, end,
                      riscv_vector_gen_policy ()));
  emit_insn (gen_vse (cur_mode, const0_rtx, dst, vec, end, riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (src, gen_rtx_PLUS (Pmode, src, cnt)));
  emit_insn (gen_rtx_SET (dst, gen_rtx_PLUS (Pmode, dst, cnt)));
  emit_insn (gen_rtx_SET (end, gen_rtx_MINUS (Pmode, end, cnt)));

  /* Emit the loop condition.  */
  rtx test = gen_rtx_NE (VOIDmode, end, const0_rtx);
  emit_jump_insn (gen_cbranch4 (Pmode, test, end, const0_rtx, label));
  emit_insn (gen_nop ());
  return true;
}

bool
riscv_vector_expand_strlen (rtx *operands)
{
/*
  strlen:
      mv a3, a0             # Save start
  loop:
      vsetvli a1, x0, e8, m8, ta, ma  # Vector of bytes of maximum length
      vle8ff.v v8, (a3)      # Load bytes
      csrr a1, vl           # Get bytes read
      vmseq.vi v0, v8, 0    # Set v0[i] where v8[i] = 0
      vfirst.m a2, v0       # Find first set bit
      add a3, a3, a1        # Bump pointer
      bltz a2, loop         # Not found?

      add a0, a0, a1        # Sum start + bump
      add a3, a3, a2        # Add index
      sub a0, a3, a0        # Subtract start address+bump

      ret
*/
  if (!TARGET_VECTOR || !TARGET_RVV)
    return false;
  if (optimize < 1 || operands[2] != const0_rtx)
    return false;

  machine_mode cur_mode = targetm.vectorize.preferred_simd_mode (QImode);
  machine_mode mask_mode;
  gcc_assert (targetm.vectorize.get_mask_mode (cur_mode).exists (&mask_mode));
  rtx src;
  rtx cnt = gen_reg_rtx (Pmode);
  rtx end = gen_reg_rtx (Pmode);
  rtx save = operands[0];
  rtx vec = gen_reg_rtx (cur_mode);
  rtx mask = gen_reg_rtx (mask_mode);

  /* Move the address into scratch registers.  */
  src = copy_addr_to_reg (XEXP (operands[1], 0));
  riscv_emit_move (save, src);

  unsigned int vlmul = riscv_classify_vlmul_field (cur_mode);
  unsigned int vsew = riscv_classify_vsew_field (cur_mode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;

  rtx label = gen_label_rtx ();
  emit_label (label);
  emit_insn (gen_vsetvl (Pmode, cnt, gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (vtype)));
  emit_insn (gen_vleff (cur_mode, vec, const0_rtx, const0_rtx, save, gen_rtx_REG (Pmode, X0_REGNUM),
                        GEN_INT (DO_NOT_UPDATE_VL_VTYPE)));
  emit_insn (gen_readvl (Pmode, cnt, vec));
  emit_insn (gen_vms_vx (EQ, cur_mode, mask, const0_rtx, const0_rtx, vec, const0_rtx,
                         gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_any_policy ()));
  emit_insn (gen_vfirst_m (mask_mode, Pmode, end, const0_rtx, mask, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (save, gen_rtx_PLUS (Pmode, save, cnt)));

  /* Emit the loop condition.  */
  rtx test = gen_rtx_LT (VOIDmode, end, const0_rtx);
  emit_jump_insn (gen_cbranch4 (Pmode, test, end, const0_rtx, label));

  emit_insn (gen_rtx_SET (src, gen_rtx_PLUS (Pmode, src, cnt)));
  emit_insn (gen_rtx_SET (save, gen_rtx_PLUS (Pmode, save, end)));
  emit_insn (gen_rtx_SET (save, gen_rtx_MINUS (Pmode, save, src)));
  return true;
}

bool
riscv_vector_expand_strcpy (rtx *operands)
{
/*
  strcpy:
      mv a2, a0             # Copy dst
      li t0, -1             # Infinite AVL
  loop:
    vsetvli x0, t0, e8, m8, ta, ma  # Max length vectors of bytes
    vle8ff.v v8, (a1)        # Get src bytes
      csrr t1, vl           # Get number of bytes fetched
    vmseq.vi v1, v8, 0      # Flag zero bytes
    vfirst.m a3, v1         # Zero found?
      add a1, a1, t1        # Bump pointer
    vmsif.m v0, v1          # Set mask up to and including zero byte.
    vse8.v v8, (a2), v0.t    # Write out bytes
      add a2, a2, t1        # Bump pointer
      bltz a3, loop         # Zero byte not found, so loop

      ret
*/
  if (!TARGET_VECTOR || !TARGET_RVV)
    return false;
  if (optimize < 1)
    return false;

  machine_mode cur_mode = targetm.vectorize.preferred_simd_mode (QImode);
  machine_mode mask_mode;
  gcc_assert (targetm.vectorize.get_mask_mode (cur_mode).exists (&mask_mode));
  rtx src, dst;
  rtx cnt = gen_reg_rtx (Pmode);
  rtx end = gen_reg_rtx (Pmode);
  rtx save = gen_reg_rtx (Pmode);
  rtx init = gen_reg_rtx (Pmode);
  rtx vec = gen_reg_rtx (cur_mode);
  rtx mask = gen_reg_rtx (mask_mode);
  rtx mask2 = gen_reg_rtx (mask_mode);

  /* Move the address into scratch registers.  */
  dst = copy_addr_to_reg (XEXP (operands[1], 0));
  src = copy_addr_to_reg (XEXP (operands[2], 0));
  riscv_emit_move (save, dst);
  riscv_emit_move (init, constm1_rtx);

  unsigned int vlmul = riscv_classify_vlmul_field (cur_mode);
  unsigned int vsew = riscv_classify_vsew_field (cur_mode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;

  rtx label = gen_label_rtx ();
  emit_label (label);
  emit_insn (gen_vsetvl (Pmode, gen_rtx_REG (Pmode, X0_REGNUM), init, GEN_INT (vtype)));
  emit_insn (gen_vleff (cur_mode, vec, const0_rtx, const0_rtx, src, init,
                        GEN_INT (DO_NOT_UPDATE_VL_VTYPE)));
  emit_insn (gen_readvl (Pmode, cnt, vec));
  emit_insn (gen_vms_vx (EQ, cur_mode, mask, const0_rtx, const0_rtx, vec, const0_rtx, init,
                         riscv_vector::gen_any_policy ()));
  emit_insn (gen_vfirst_m (mask_mode, Pmode, end, const0_rtx, mask, init, riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (src, gen_rtx_PLUS (Pmode, src, cnt)));
  emit_insn (gen_vm_m (UNSPEC_SIF, mask_mode, mask2, const0_rtx, const0_rtx, mask, init,
                       riscv_vector_gen_policy ()));
  emit_insn (gen_vse (cur_mode, mask2, save, vec, init, riscv_vector_gen_policy ()));
  emit_insn (gen_rtx_SET (save, gen_rtx_PLUS (Pmode, save, cnt)));

  /* Emit the loop condition.  */
  rtx test = gen_rtx_LT (VOIDmode, end, const0_rtx);
  emit_jump_insn (gen_cbranch4 (Pmode, test, end, const0_rtx, label));

  /* store NULL pointer to operands[0]. */
  riscv_emit_move (operands[0], save);
  return true;
}

bool
riscv_vector_expand_strcmp (rtx *operands)
{
/*
strcmp:
    ##  Using LMUL=2, but same register names work for larger LMULs
    li t1, 0                # Initial pointer bump
loop:
    vsetvli t0, x0, e8, m2, ta, ma  # Max length vectors of bytes
    add a0, a0, t1          # Bump src1 pointer
    vle8ff.v v8, (a0)       # Get src1 bytes
    add a1, a1, t1          # Bump src2 pointer
    vle8ff.v v16, (a1)      # Get src2 bytes

    vmseq.vi v0, v8, 0      # Flag zero bytes in src1
    vmsne.vv v1, v8, v16    # Flag if src1 != src2
    vmor.mm v0, v0, v1      # Combine exit conditions

    vfirst.m a2, v0         # ==0 or != ?
    csrr t1, vl             # Get number of bytes fetched

    bltz a2, loop           # Loop if all same and no zero byte

    add a0, a0, a2          # Get src1 element address
    lbu a3, (a0)            # Get src1 byte from memory

    add a1, a1, a2          # Get src2 element address
    lbu a4, (a1)            # Get src2 byte from memory

    sub a0, a3, a4          # Return value.

    ret
*/
  if (!TARGET_VECTOR || !TARGET_RVV)
    return false;
  if (optimize < 1)
    return false;

  machine_mode cur_mode = VNx32QImode;
  machine_mode mask_mode = VNx32BImode;

  rtx src1, src2;
  rtx cnt = gen_reg_rtx (Pmode);
  rtx end = gen_reg_rtx (Pmode);
  rtx offset = gen_reg_rtx (Pmode);
  rtx vec1 = gen_reg_rtx (cur_mode);
  rtx vec2 = gen_reg_rtx (cur_mode);
  rtx mask = gen_reg_rtx (mask_mode);
  rtx mask2 = gen_reg_rtx (mask_mode);

  /* Move the address into scratch registers.  */
  src1 = copy_addr_to_reg (XEXP (operands[1], 0));
  src2 = copy_addr_to_reg (XEXP (operands[2], 0));
  riscv_emit_move (offset, const0_rtx);

  unsigned int vlmul = riscv_classify_vlmul_field (cur_mode);
  unsigned int vsew = riscv_classify_vsew_field (cur_mode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;

  rtx label = gen_label_rtx ();
  emit_label (label);
  emit_insn (gen_vsetvl (Pmode, cnt, gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (vtype)));
  emit_insn (gen_rtx_SET (src1, gen_rtx_PLUS (Pmode, src1, offset)));
  emit_insn (gen_vleff (cur_mode, vec1, const0_rtx, const0_rtx, src1,
                        gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (DO_NOT_UPDATE_VL_VTYPE)));
  emit_insn (gen_rtx_SET (src2, gen_rtx_PLUS (Pmode, src2, offset)));
  emit_insn (gen_vleff (cur_mode, vec2, const0_rtx, const0_rtx, src2,
                        gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (DO_NOT_UPDATE_VL_VTYPE)));
  emit_insn (gen_vms_vx (EQ, cur_mode, mask, const0_rtx, const0_rtx, vec1, const0_rtx, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vms_vv (NE, cur_mode, mask2, const0_rtx, const0_rtx, vec1, vec2,
                         gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vm_mm (IOR, mask_mode, mask, mask, mask2, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_vfirst_m (mask_mode, Pmode, end, const0_rtx, mask, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  emit_insn (gen_readvl (Pmode, offset, mask));

  /* Emit the loop condition.  */
  rtx test = gen_rtx_LT (VOIDmode, end, const0_rtx);
  emit_jump_insn (gen_cbranch4 (Pmode, test, end, const0_rtx, label));

  emit_insn (gen_rtx_SET (src1, gen_rtx_PLUS (Pmode, src1, end)));
  emit_insn (gen_rtx_SET (src2, gen_rtx_PLUS (Pmode, src2, end)));
  rtx result1 = gen_reg_rtx (GET_MODE (operands[0]));
  rtx result2 = gen_reg_rtx (GET_MODE (operands[0]));
  riscv_emit_move (result1, gen_rtx_MEM (GET_MODE (operands[0]), src1));
  riscv_emit_move (result2, gen_rtx_MEM (GET_MODE (operands[0]), src2));
  emit_insn (gen_rtx_SET (operands[0],
      gen_rtx_MINUS (GET_MODE (operands[0]), result1, result2)));
  return true;
}

void
riscv_vector_expand_while_len (rtx *operands)
{
  poly_int64 offset;
  machine_mode mode;
  scalar_mode inner_mode;
  switch (INTVAL (operands[2]))
    {
    case 8:
      inner_mode = QImode;
      break;
    case 16:
      inner_mode = HImode;
      break;
    case 32:
      inner_mode = SImode;
      break;
    case 64:
      inner_mode = DImode;
      break;
    default:
      gcc_unreachable ();
    }
  
  gcc_assert (poly_int_rtx_p (operands[3], &offset));
  if (!riscv_vector_data_mode (inner_mode, offset).exists (&mode))
    {
      rtx clobber = gen_reg_rtx (Pmode);
      riscv_vector_expand_poly_move (Pmode, operands[0], clobber, gen_int_mode (offset, Pmode));
      return;
    }
  unsigned int vlmul = riscv_classify_vlmul_field (mode);
  unsigned int vsew = riscv_classify_vsew_field (mode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;
  emit_insn (gen_vsetvl (Pmode, operands[0], operands[1], GEN_INT (vtype)));
}

/* Emit a comparison CMP between OP0 and OP1, both of which have mode
   DATA_MODE, and return the result in a predicate of mode MASK_MODE.
   Use TARGET as the target register if nonnull and convenient.  */

static rtx
riscv_vector_emit_int_cmp (rtx target, machine_mode mask_mode, enum rtx_code cmp,
                           machine_mode data_mode, rtx op1, rtx op2, rtx op3)
{
  rtx x;
  insn_code icode;
  expand_operand ops[7];
  create_output_operand (&ops[0], target, mask_mode);
  create_input_operand (&ops[1], const0_rtx, Pmode);
  create_input_operand (&ops[2], const0_rtx, Pmode);
  op1 = force_reg (data_mode, op1);
  create_input_operand (&ops[3], op1, data_mode);
  if (const_vec_duplicate_p (op2, &x))
    {
      icode = code_for_vms_vx (cmp, data_mode);
      create_input_operand (&ops[4], x, GET_MODE_INNER (data_mode));
    }
  else
    {
      if (VECTOR_MODE_P (GET_MODE (op2)))
        {
          op2 = force_reg (data_mode, op2);
          icode = code_for_vms_vv (cmp, data_mode);
          create_input_operand (&ops[4], op2, data_mode);
        }
      else
        {
          icode = code_for_vms_vx (cmp, data_mode);
          create_input_operand (&ops[4], op2, GET_MODE_INNER (data_mode));
        }
    }
  create_input_operand (&ops[5], op3, Pmode);
  create_input_operand (&ops[6], riscv_vector_gen_policy (), Pmode);
  expand_insn (icode, 7, ops);
  return ops[0].value;
}

/* Expand an RVV integer comparison using the RVV equivalent of:

     (set TARGET (CODE OP0 OP1)).  */

void
riscv_expand_vec_cmp_int (rtx target, enum rtx_code code, rtx op0, rtx op1, rtx op2)
{
  machine_mode mask_mode = GET_MODE (target);
  machine_mode data_mode = GET_MODE (op0);
  rtx res = riscv_vector_emit_int_cmp (target, mask_mode, code, data_mode, op0,
                                       op1, op2);
  if (!rtx_equal_p (target, res))
    emit_move_insn (target, res);
}

/* Emit a comparison CMP between OP0 and OP1, both of which have mode
   DATA_MODE, and return the result in a predicate of mode MASK_MODE.
   Use TARGET as the target register if nonnull and convenient.  */

static rtx
riscv_vector_emit_float_cmp (rtx target, machine_mode mask_mode, enum rtx_code cmp,
                             machine_mode data_mode, rtx op1, rtx op2, rtx op3)
{
  rtx f;
  insn_code icode;
  expand_operand ops[7];
  create_output_operand (&ops[0], target, mask_mode);
  create_input_operand (&ops[1], const0_rtx, Pmode);
  create_input_operand (&ops[2], const0_rtx, Pmode);
  op1 = force_reg (data_mode, op1);
  create_input_operand (&ops[3], op1, data_mode);
  if (const_vec_duplicate_p (op2, &f))
    {
      icode = code_for_vmf_vf (cmp, data_mode);
      create_input_operand (&ops[4], f, GET_MODE_INNER (data_mode));
    }
  else
    {
      if (VECTOR_MODE_P (GET_MODE (op2)))
        {
          op2 = force_reg (data_mode, op2);
          icode = code_for_vmf_vv (cmp, data_mode);
          create_input_operand (&ops[4], op2, data_mode);
        }
      else
        {
          icode = code_for_vmf_vf (cmp, data_mode);
          create_input_operand (&ops[4], op2, GET_MODE (op2));
        }
    }
  create_input_operand (&ops[5], op3, Pmode);
  create_input_operand (&ops[6], riscv_vector_gen_policy (), Pmode);
  expand_insn (icode, 7, ops);
  return ops[0].value;
}

/* Expand an RVV integer comparison using the RVV equivalent of:

     (set TARGET (CODE OP0 OP1)).  */

void
riscv_expand_vec_cmp_float (rtx target, enum rtx_code code, rtx op0, rtx op1,
                            rtx op2)
{
  machine_mode mask_mode = GET_MODE (target);
  machine_mode data_mode = GET_MODE (op0);

  if (code == UNORDERED || code == ORDERED || code == UNEQ || code == UNGE ||
      code == UNGT || code == UNLE || code == UNLT || code == LTGT)
    {
      rtx len = op2 ? op2 : gen_rtx_REG (Pmode, X0_REGNUM);
      if (VECTOR_MODE_P (GET_MODE (op1)))
        emit_insn (gen_vmf_vv (code, data_mode, target, const0_rtx, const0_rtx,
                               op0, op1, len, riscv_vector_gen_policy ()));
      else
        {
          rtx reg = gen_reg_rtx (data_mode);
          emit_insn (gen_vfmv_v_f (data_mode, reg, const0_rtx, op1, op2,
                                   riscv_vector_gen_policy ()));
          emit_insn (gen_vmf_vv (code, data_mode, target, const0_rtx,
                                 const0_rtx, op0, reg, len,
                                 riscv_vector_gen_policy ()));
        }
      return;
    }
  
  rtx res = riscv_vector_emit_float_cmp (target, mask_mode, code, data_mode,
                                         op0, op1, op2);

  if (!rtx_equal_p (target, res))
    emit_move_insn (target, res);
}

/* Expand an RVV vcond pattern with operands OPS.  DATA_MODE is the mode
   of the data being selected and CMP_MODE is the mode of the values being
   compared.  */

void
riscv_expand_vcond (machine_mode data_mode, machine_mode cmp_mode,
                    machine_mode mask_mode, rtx *ops, bool len_p)
{
  rtx mask = gen_reg_rtx (mask_mode);
  enum rtx_code code = GET_CODE (ops[3]);
  if (FLOAT_MODE_P (cmp_mode))
    {
      if (len_p)
        riscv_expand_vec_cmp_float (mask, code, ops[4], ops[5],
                                    ops[6]);
      else
        riscv_expand_vec_cmp_float (mask, code, ops[4], ops[5],
                                    gen_rtx_REG (Pmode, X0_REGNUM));
    }
  else
    {
      if (len_p)
        riscv_expand_vec_cmp_int (mask, code, ops[4], ops[5],
                                  ops[6]);
      else
        riscv_expand_vec_cmp_int (mask, code, ops[4], ops[5],
                                  gen_rtx_REG (Pmode, X0_REGNUM));
    }

  ops[0] = force_reg (data_mode, ops[0]);
  ops[2] = force_reg (data_mode, ops[2]);
  
  if (len_p)
    emit_insn (gen_len_vcond_mask (data_mode, data_mode, ops[0], ops[1], ops[2],
                                   mask, ops[6]));
  else
    emit_insn (
        gen_vcond_mask (data_mode, data_mode, ops[0], ops[1], ops[2], mask));
}

static rtx
force_reg_for_over_uimm (rtx vl)
{
  if (CONST_SCALAR_INT_P (vl) && INTVAL (vl) >= 32)
    {
      return force_reg (Pmode, vl);
    }

  return vl;
}

static rtx
gen_vlx2 (rtx avl, machine_mode Vmode, machine_mode VSImode)
{
  if (rtx_equal_p (avl, gen_rtx_REG (Pmode, X0_REGNUM)))
    {
      return avl;
    }
  rtx i32vl = NULL_RTX;
  if (CONST_SCALAR_INT_P (avl))
    {
      unsigned int vlen_max;
      unsigned int vlen_min;
      if (riscv_vector_chunks.is_constant ())
        {
          vlen_max = riscv_vector_chunks.to_constant () * 64;
          vlen_min = vlen_max;
        }
      else
        {
          vlen_max = RVV_65536;
          vlen_min = RVV_128;
        }
      unsigned int max_vlmax = (vlen_max / GET_MODE_UNIT_BITSIZE (Vmode) * riscv_get_lmulx8 (Vmode)) / 8;
      unsigned int min_vlmax = (vlen_min / GET_MODE_UNIT_BITSIZE (Vmode) * riscv_get_lmulx8 (Vmode)) / 8;
      
      unsigned HOST_WIDE_INT avl_int = INTVAL (avl);
      if (avl_int <= min_vlmax)
        {
          i32vl = gen_int_mode (2 * avl_int, SImode);
        }
      else if (avl_int >= 2 * max_vlmax)
        {
          // Just set i32vl to VLMAX in this situation
          i32vl = gen_reg_rtx (Pmode);
          unsigned int vtype = riscv_classify_vtype_field (VSImode);
          emit_insn (gen_vsetvl (Pmode, i32vl, gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (vtype)));
        }
      else
        {
          // For AVL between (MinVLMAX, 2 * MaxVLMAX), the actual working vl
          // is related to the hardware implementation.
          // So let the following code handle
        }
    }
  if (!i32vl)
    {
      // Using vsetvli instruction to get actually used length which related to
      // the hardware implementation
      rtx i64vl = gen_reg_rtx (Pmode);
      unsigned int vtype = riscv_classify_vtype_field (Vmode);
      emit_insn (gen_vsetvl (Pmode, i64vl, force_reg (Pmode, avl), GEN_INT (vtype)));
      // scale 2 for 32-bit length
      i32vl = gen_reg_rtx (Pmode);
      emit_insn (gen_rtx_SET (i32vl, gen_rtx_ASHIFT (Pmode, i64vl, const1_rtx)));
    }

  return force_reg_for_over_uimm (i32vl);
}

static void
emit_int64_to_vector_32bit (machine_mode Vmode, machine_mode VSImode,
                            machine_mode VMSImode, rtx vd, rtx s, rtx vl,
                            rtx tail)
{
  if (CONST_SCALAR_INT_P (s))
    {
      s = force_reg (DImode, s);
    }

  rtx hi = gen_highpart (SImode, s);
  rtx lo = gen_lowpart (SImode, s);

  rtx zero = gen_rtx_REG (SImode, X0_REGNUM);

  /* make a "0101..." mask vector */
  rtx vm1 = gen_reg_rtx (VNx4SImode);
  emit_insn (gen_vmv_v_x_internal (VNx4SImode, vm1, const0_rtx,
                                   force_reg (SImode, GEN_INT (0x55555555)),
                                   zero, riscv_vector_gen_policy ()));
  rtx vm2 = gen_reg_rtx (VMSImode);
  emit_insn (gen_rtx_SET (vm2, gen_lowpart (VMSImode, vm1)));

  rtx vlx2 = gen_vlx2 (vl, Vmode, VSImode);
  rtx v2 = gen_reg_rtx (VSImode);
  emit_insn (gen_vmv_v_x_internal (VSImode, v2, const0_rtx, hi, vlx2,
                                   riscv_vector_gen_policy ()));

  rtx vd_si = gen_reg_rtx (VSImode);
  emit_insn (gen_vmerge_vxm_internal (VSImode, vd_si, vm2, const0_rtx, v2, lo,
                                      vlx2, tail));

  emit_insn (gen_rtx_SET (vd, gen_lowpart (Vmode, vd_si)));
}

bool
imm32_p (rtx a)
{
  if (!CONST_SCALAR_INT_P (a))
    return false;
  unsigned HOST_WIDE_INT val = UINTVAL (a);
  return val <= 0x7FFFFFFFULL || val >= 0xFFFFFFFF80000000ULL;
}

typedef bool imm_p (rtx);
typedef rtx gen_3 (rtx, rtx, rtx);
typedef rtx gen_4 (rtx, rtx, rtx, rtx);
typedef rtx gen_5 (rtx, rtx, rtx, rtx, rtx);
typedef rtx gen_6 (rtx, rtx, rtx, rtx, rtx, rtx);
typedef rtx gen_7 (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
enum GEN_CLASS
{
  GEN_VX,
  GEN_VX_32BIT,
  GEN_VV
};

enum GEN_CLASS
modify_operands (machine_mode Vmode, machine_mode VSImode,
                 machine_mode VMSImode, machine_mode VSUBmode, rtx *operands,
                 bool (*imm5_p) (rtx), int i, bool reverse)
{
  if (!TARGET_64BIT && VSUBmode == DImode)
    {
      if (imm32_p (operands[i]))
        {
          if (!imm5_p (operands[i]))
            operands[i] = force_reg (SImode, operands[i]);
          return GEN_VX_32BIT;
        }
      else
        {
          rtx result = gen_reg_rtx (Vmode);
          rtx zero = gen_rtx_REG (SImode, X0_REGNUM);
          rtx tail = riscv_vector_gen_policy ();

          emit_int64_to_vector_32bit (Vmode, VSImode, VMSImode, result,
                                      operands[i], zero, tail);

          operands[i] = result;

          if (reverse)
            {
              rtx b = operands[i - 1];
              operands[i - 1] = operands[i];
              operands[i] = b;
            }
          return GEN_VV;
        }
    }
  else
    {
      if (!imm5_p (operands[i]))
        operands[i] = force_reg (VSUBmode, operands[i]);
      return GEN_VX;
    }
}

bool
emit_op5_vmv_v_x (machine_mode Vmode, machine_mode VSImode,
                  machine_mode VMSImode, machine_mode VSUBmode, rtx *operands,
                  int i)
{
  if (!TARGET_64BIT && VSUBmode == DImode)
    {
      if (!imm32_p (operands[i]))
        {
          rtx vd = operands[1];
          if (rtx_equal_p (vd, const0_rtx))
            {
              vd = operands[0];
            }
          emit_int64_to_vector_32bit (Vmode, VSImode, VMSImode, vd, operands[i],
                                      operands[3], operands[4]);

          emit_insn (gen_rtx_SET (operands[0], vd));
          return true;
        }
    }
  return false;
}

bool
emit_op5_vmv_s_x (machine_mode Vmode, machine_mode VSImode,
                  machine_mode VSUBmode, rtx *operands, int i)
{
  if (!TARGET_64BIT && VSUBmode == DImode)
    {
      if (!imm32_p (operands[i]))
        {
          rtx s = operands[i];
          if (CONST_SCALAR_INT_P (s))
            {
              s = force_reg (DImode, s);
            }

          rtx hi = gen_highpart (SImode, s);
          rtx lo = gen_lowpart (SImode, s);
          rtx vlx2 = gen_vlx2 (operands[3], Vmode, VSImode);

          rtx vret = operands[0];
          rtx vd = operands[1];
          if (vd == const0_rtx)
            {
              vd = gen_reg_rtx (Vmode);
            }
          rtx vd_si = gen_lowpart (VSImode, vd);

          emit_insn (gen_vslide_vx (UNSPEC_SLIDEDOWN, VSImode, vd_si,
                                    const0_rtx, vd_si, vd_si, const2_rtx, vlx2,
                                    operands[4]));
          emit_insn (gen_vslide1_vx_internal (UNSPEC_SLIDE1UP, VSImode, vd_si,
                                              const0_rtx, vd_si, vd_si, hi,
                                              vlx2, operands[4]));
          emit_insn (gen_vslide1_vx_internal (UNSPEC_SLIDE1UP, VSImode, vd_si,
                                              const0_rtx, vd_si, vd_si, lo, vlx2,
                                              operands[4]));

          emit_insn (gen_rtx_SET (vret, gen_lowpart (Vmode, vd_si)));

          return true;
        }
    }
  return false;
}

void
emit_op5 (unsigned int unspec, machine_mode Vmode, machine_mode VSImode,
          machine_mode VMSImode, machine_mode VSUBmode, rtx *operands,
          gen_5 *gen_vx, gen_5 *gen_vx_32bit, gen_5 *gen_vv, imm_p *imm5_p,
          int i, bool reverse)
{
  if (unspec == UNSPEC_VMV)
    {
      if (emit_op5_vmv_v_x (Vmode, VSImode, VMSImode, VSUBmode, operands, i))
        {
          return;
        }
    }
  else if (unspec == UNSPEC_VMVS)
    {
      if (emit_op5_vmv_s_x (Vmode, VSImode, VSUBmode, operands, i))
        {
          return;
        }
    }

  enum GEN_CLASS gen_class = modify_operands (
      Vmode, VSImode, VMSImode, VSUBmode, operands, imm5_p, i, reverse);

  gen_5 *gen = gen_class == GEN_VX   ? gen_vx
               : gen_class == GEN_VV ? gen_vv
                                     : gen_vx_32bit;

  emit_insn (
      (*gen) (operands[0], operands[1], operands[2], operands[3], operands[4]));
}

void
emit_op6 (unsigned int unspec ATTRIBUTE_UNUSED, machine_mode Vmode,
          machine_mode VSImode, machine_mode VMSImode, machine_mode VSUBmode,
          rtx *operands, gen_6 *gen_vx, gen_6 *gen_vx_32bit, gen_6 *gen_vv,
          imm_p *imm5_p, int i, bool reverse)
{
  enum GEN_CLASS gen_class = modify_operands (
      Vmode, VSImode, VMSImode, VSUBmode, operands, imm5_p, i, reverse);

  gen_6 *gen = gen_class == GEN_VX   ? gen_vx
               : gen_class == GEN_VV ? gen_vv
                                     : gen_vx_32bit;

  emit_insn ((*gen) (operands[0], operands[1], operands[2], operands[3],
                     operands[4], operands[5]));
}

bool
emit_op7_slide1 (unsigned int unspec, machine_mode Vmode, machine_mode VSImode,
                 machine_mode VSUBmode, rtx *operands, int i)
{
  if (!TARGET_64BIT && VSUBmode == DImode)
    {
      if (!imm32_p (operands[i]))
        {
          rtx s = operands[i];
          if (CONST_SCALAR_INT_P (s))
            {
              s = force_reg (DImode, s);
            }

          rtx hi = gen_highpart (SImode, s);
          rtx lo = gen_lowpart (SImode, s);

          rtx vret = operands[0];
          rtx mask = operands[1];
          rtx vs = operands[3];
          rtx avl = operands[5];
          rtx vlx2 = gen_vlx2 (avl, Vmode, VSImode);
          rtx vs_si = gen_lowpart (VSImode, vs);
          rtx vtemp;
          if (rtx_equal_p (operands[2], const0_rtx))
            {
              vtemp = gen_reg_rtx (VSImode);
            }
          else
            {
              vtemp = gen_lowpart (VSImode, operands[2]);
            }

          if (unspec == UNSPEC_SLIDE1UP)
            {
              rtx v1 = gen_reg_rtx (VSImode);

              emit_insn (gen_vslide1_vx_internal (UNSPEC_SLIDE1UP, VSImode, v1,
                                                  const0_rtx, const0_rtx, vs_si,
                                                  hi, vlx2, operands[6]));
              emit_insn (gen_vslide1_vx_internal (UNSPEC_SLIDE1UP, VSImode,
                                                  vtemp, const0_rtx, const0_rtx,
                                                  v1, lo, vlx2, operands[6]));
            }
          else
            {
              emit_insn (gen_vslide1_vx_internal (
                  UNSPEC_SLIDE1DOWN, VSImode, vtemp, const0_rtx, const0_rtx,
                  vs_si, force_reg (GET_MODE (lo), lo), vlx2, operands[6]));
              emit_insn (gen_vslide1_vx_internal (
                  UNSPEC_SLIDE1DOWN, VSImode, vtemp, const0_rtx, const0_rtx,
                  vtemp, force_reg (GET_MODE (hi), hi), vlx2, operands[6]));
            }

          if (rtx_equal_p (mask, const0_rtx))
            {
              emit_insn (gen_rtx_SET (vret, gen_lowpart (Vmode, vtemp)));
            }
          else
            {
              rtx dest = operands[2];
              if (rtx_equal_p (dest, const0_rtx))
                {
                  dest = vret;
                }
              emit_insn (gen_vmerge_vvm (Vmode, dest, mask, dest, dest,
                                         gen_lowpart (Vmode, vtemp),
                                         force_reg_for_over_uimm (avl),
                                         operands[6]));

              emit_insn (gen_rtx_SET (vret, dest));
            }

          return true;
        }
    }
  return false;
}

void
emit_op7 (unsigned int unspec, machine_mode Vmode, machine_mode VSImode,
          machine_mode VMSImode, machine_mode VSUBmode, rtx *operands,
          gen_7 *gen_vx, gen_7 *gen_vx_32bit, gen_7 *gen_vv, imm_p *imm5_p,
          int i, bool reverse)
{
  if (unspec == UNSPEC_SLIDE1UP || unspec == UNSPEC_SLIDE1DOWN)
    {
      if (emit_op7_slide1 (unspec, Vmode, VSImode, VSUBmode, operands, i))
        {
          return;
        }
    }

  enum GEN_CLASS gen_class = modify_operands (
      Vmode, VSImode, VMSImode, VSUBmode, operands, imm5_p, i, reverse);

  gen_7 *gen = gen_class == GEN_VX   ? gen_vx
               : gen_class == GEN_VV ? gen_vv
                                     : gen_vx_32bit;

  emit_insn ((*gen) (operands[0], operands[1], operands[2], operands[3],
                     operands[4], force_reg_for_over_uimm (operands[5]), operands[6]));
}

static void
riscv_vector_emit_vec_duplicate (machine_mode mode, machine_mode inner_mode,
                                 rtx target, rtx x)
{
  struct expand_operand ops[2];
  enum insn_code icode = optab_handler (vec_duplicate_optab, mode);
  gcc_assert (icode != CODE_FOR_nothing);
  create_output_operand (&ops[0], target, mode);
  create_input_operand (&ops[1], x, inner_mode);
  expand_insn (icode, 2, ops);
}

/* Emit RTL corresponding to:
   vec_shl_insert_optab.  */

static void
emit_vec_shl_insert (rtx target, rtx src, rtx elem)
{
  machine_mode mode = GET_MODE (target);
  scalar_mode elem_mode = GET_MODE_INNER (mode);
  elem = force_reg (elem_mode, elem);

  insn_code icode = optab_handler (vec_shl_insert_optab, mode);
  gcc_assert (icode != CODE_FOR_nothing);
  emit_insn (GEN_FCN (icode) (target, src, elem));
}

/* Emit RTL corresponding to:
   vslide1down.vx/vfslide1down.vf. */
static void
emit_slide1down (rtx target, rtx source, rtx elem)
{
  machine_mode mode = GET_MODE (target);
  if (!FLOAT_MODE_P (mode))
    emit_insn (gen_vslide1_vx (
        UNSPEC_SLIDE1DOWN, mode, target, const0_rtx, const0_rtx, source, elem,
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  else
    emit_insn (gen_vfslide1_vf (
        UNSPEC_SLIDE1DOWN, mode, target, const0_rtx, const0_rtx, source,
        force_reg (GET_MODE (elem), elem), gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
}

/* Emit RTL corresponding to:
   vslide1up.vx/vfslide1up.vf. */
static void
emit_slide1up (rtx target, rtx source, rtx elem)
{
  machine_mode mode = GET_MODE (target);
  if (!FLOAT_MODE_P (mode))
    emit_insn (gen_vslide1_vx (
        UNSPEC_SLIDE1UP, mode, target, const0_rtx, const0_rtx, source, elem,
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
  else
    emit_insn (gen_vfslide1_vf (
        UNSPEC_SLIDE1UP, mode, target, const0_rtx, const0_rtx, source,
        force_reg (GET_MODE (elem), elem), gen_rtx_REG (Pmode, X0_REGNUM),
        riscv_vector_gen_policy ()));
}

static int
get_dup_cnt_idx (const rtx_vector_builder &builder, int nelts, int offset,
                 int *val_idx)
{
  struct val_info
  {
    int cnt;
    int idx;
  };

  struct val_info *dup_val_info =
      (struct val_info *)xmalloc (nelts * sizeof (struct val_info));
  int n_const_values = 0, max_dup_cnt = 0, ndup;

  memset (dup_val_info, 0, nelts * sizeof (struct val_info));

  for (int i = offset; i < nelts; ++i)
    {
      rtx x = builder.elt (i);
      bool found = false;
      for (int n = 0; n < n_const_values; ++n)
        {
          if (rtx_equal_p (x, builder.elt (dup_val_info[n].idx)))
            {
              found = true;
              dup_val_info[n].cnt++;
              break;
            }
        }
      if (!found)
        {
          dup_val_info[n_const_values].cnt = 1;
          dup_val_info[n_const_values].idx = i;
          n_const_values++;
        }
    }

  for (int n = 0; n < n_const_values; ++n)
    {
      if (dup_val_info[n].cnt > max_dup_cnt)
        {
          max_dup_cnt = dup_val_info[n].cnt;
          *val_idx = dup_val_info[n].idx;
        }
    }

  free (dup_val_info);
  if (max_dup_cnt > (nelts + 1) / 2)
    {
      ndup = max_dup_cnt;
    }
  else
    {
      ndup = 0;
    }
  return ndup;
}

/*
when return true:
        it means the builder is mostly formed with constants
        the base&step are constant values
when return false:
        it means the builder is mostly formed with varibles or floats
        if duplication exists in the builder, the base is the index of the
duplicated element and the step is the duplication count
*/
static bool
calculate_base_step (const rtx_vector_builder &builder, int nelts,
                     scalar_mode inner_mode, int offset, int *base, int *step)
{
  gcc_assert (offset < nelts);

  int dup_cnt = 0, dup_idx = 0;

  dup_cnt = get_dup_cnt_idx (builder, nelts, offset, &dup_idx);

  if (dup_cnt > (nelts - offset + 1) / 2)
    {
      if (!FLOAT_MODE_P (inner_mode) &&
          valid_for_const_vector_p (inner_mode, builder.elt (dup_idx)))
        {
          *step = 0;
          *base = INTVAL (builder.elt (dup_idx));
          return true;
        }
      else
        {
          *step = dup_cnt;
          *base = dup_idx;
          return false;
        }
    }

  if (FLOAT_MODE_P (inner_mode))
    {
      *base = -1;
      *step = 0;
      return false;
    }

  struct const_info
  {
    int index;
    int const_int;
  };

  struct base_step_info
  {
    int cnt;
    int base;
    int step;
  };

  int elem_size = nelts - offset, n_base_step_values = 0, max_base_step_cnt = 0;
  struct const_info pre_const_info;
  struct base_step_info *base_step_infos = (struct base_step_info *)xmalloc (
      elem_size * sizeof (struct base_step_info));
  memset (base_step_infos, 0, elem_size * sizeof (struct base_step_info));
  pre_const_info.index = -1;

  for (int i = offset; i < nelts; ++i)
    {
      rtx x = builder.elt (i);

      if (valid_for_const_vector_p (inner_mode, x))
        {
          /* calculate base & step */
          if (pre_const_info.index >= 0)
            {
              int cur_step = (INTVAL (x) - pre_const_info.const_int) /
                             (i - pre_const_info.index);
              int cur_base = INTVAL (x) - cur_step * i;

              bool found = false;
              for (int n = 0; n < n_base_step_values; ++n)
                {
                  if (cur_step == base_step_infos[n].step &&
                      cur_base == base_step_infos[n].base)
                    {
                      found = true;
                      base_step_infos[n].cnt++;
                      break;
                    }
                }
              if (!found)
                {
                  base_step_infos[n_base_step_values].cnt = 1;
                  base_step_infos[n_base_step_values].base = cur_base;
                  base_step_infos[n_base_step_values].step = cur_step;
                  n_base_step_values++;
                }
            }

          pre_const_info.index = i;
          pre_const_info.const_int = INTVAL (x);
        }
    }

  if (n_base_step_values >= nelts / 2 || n_base_step_values == 0)
    {
      *step = 0;
      *base = -1;
      return false;
    }

  for (int n = 0; n < n_base_step_values; ++n)
    {
      if (base_step_infos[n].cnt > max_base_step_cnt)
        {
          max_base_step_cnt = base_step_infos[n].cnt;
          *base = base_step_infos[n].base;
          *step = base_step_infos[n].step;
        }
    }
  return true;
}

static int
get_mismatched_rtx_cnt (const rtx_vector_builder &builder, int nelts,
                        int offset, rtx target)
{
  int n_missmatch = 0;
  for (int i = offset; i < nelts; ++i)
    {
      rtx x = builder.elt (i);
      if (!rtx_equal_p (x, target))
        ++n_missmatch;
    }
  return n_missmatch;
}

static int
get_mismatched_bs_cnt (const rtx_vector_builder &builder, int nelts,
                       scalar_mode inner_mode, int offset, int base, int step)
{
  int n_missmatch = 0;
  for (int i = offset; i < nelts; ++i)
    {
      rtx x = builder.elt (i);
      if (!valid_for_const_vector_p (inner_mode, x) ||
          FLOAT_MODE_P (inner_mode) || INTVAL (x) != base + step * i)
        {
          if (!valid_for_const_vector_p (inner_mode, x))
            n_missmatch |= 0x1; // with varible in missmatch
          n_missmatch += 2;
        }
    }
  return n_missmatch;
}

static int
get_first_rtx_index (const rtx_vector_builder &builder, int nelts,
                     scalar_mode inner_mode, rtx target, bool reversed)
{
  if (reversed)
    {
      for (int i = nelts - 1; i >= 0; --i)
        {
          rtx x = builder.elt (i);
          if (target == NULL_RTX)
            {
              if (!valid_for_const_vector_p (inner_mode, x))
                return nelts - 1 - i;
            }
          else if (rtx_equal_p (x, target))
            return nelts - 1 - i;
        }
    }
  else
    {
      for (int i = 0; i < nelts; ++i)
        {
          rtx x = builder.elt (i);
          if (target == NULL_RTX)
            {
              if (!valid_for_const_vector_p (inner_mode, x))
                return i;
            }
          else if (rtx_equal_p (x, target))
            return i;
        }
    }
  return -1;
}

static int
get_first_bs_index (const rtx_vector_builder &builder, int nelts,
                    scalar_mode inner_mode, int base, int step, bool reversed)
{
  if (reversed)
    {
      for (int i = nelts - 1; i >= 0; --i)
        {
          rtx x = builder.elt (i);
          if (valid_for_const_vector_p (inner_mode, x) &&
              INTVAL (x) == base + i * step)
            return nelts - 1 - i;
        }
    }
  else
    {
      for (int i = 0; i < nelts; ++i)
        {
          rtx x = builder.elt (i);
          if (valid_for_const_vector_p (inner_mode, x) &&
              INTVAL (x) == base + i * step)
            return i;
        }
    }
  return -1;
}

/* Subroutine of riscv_vector_expand_vector_init.
   Works as follows:
   (a) Initialize TARGET by broadcasting element NELTS_REQD - 1 of BUILDER.
   (b) Skip leading elements from BUILDER, which are the same as
       element NELTS_REQD - 1.
   (c) Insert earlier elements in reverse order in TARGET using insr.  */

static void
riscv_vector_expand_vector_init_insert_leading_elems (
    rtx target, const rtx_vector_builder &builder, int nelts_reqd)
{
  machine_mode mode = GET_MODE (target);
  scalar_mode elem_mode = GET_MODE_INNER (mode);
  riscv_vector_emit_vec_duplicate (mode, elem_mode, target, builder.elt (0));
  int ndups = builder.count_dups (0, nelts_reqd - 1, 1);
  for (int i = ndups; i < nelts_reqd; i++)
    emit_slide1down (target, target, builder.elt (i));
}

static void
riscv_vector_expand_vector_init_handle_ending_const (
    rtx target, const rtx_vector_builder &builder, int nelts_reqd,
    int leading_others, int n_mismatch, int base, int step)
{
  machine_mode mode = GET_MODE (target);
  scalar_mode elem_mode = GET_MODE_INNER (mode);
  /* Try to use the natural pattern of BUILDER to extend the trailing
     constant elements to a full vector.  Replace any variables in the
     extra elements with zeros.

     ??? It would be better if the builders supported "don't care"
         elements, with the builder filling in whichever elements
         give the most compact encoding.  */
  rtx_vector_builder v (mode, nelts_reqd, 1);
  for (int i = leading_others; i < nelts_reqd + leading_others; i++)
    {
      rtx x;
      if (n_mismatch <= VSET_TOLERATE)
        {
          x = GEN_INT (base + step * i);
        }
      else
        {
          x = i < nelts_reqd ? builder.elt (i) : CONST0_RTX (elem_mode);
        }
      v.quick_push (x);
    }
  rtx const_vec = v.build ();
  rtx dest;
  if (leading_others > 0)
    {
      if ((leading_others % 2) == 0)
        dest = gen_rtx_REG (mode, V8_REGNUM);
      else
        dest = gen_rtx_REG (mode, V24_REGNUM);
    }
  else
    dest = target;

  emit_move_insn (dest, const_vec);

  if (n_mismatch > 0 && n_mismatch <= VSET_TOLERATE)
    {
      enum insn_code icode = optab_handler (vec_set_optab, mode);
      gcc_assert (icode != CODE_FOR_nothing);

      for (int i = leading_others; i < nelts_reqd; ++i)
        {
          rtx x = builder.elt (i);
          if (INTVAL (x) != base + step * i)
            {
              x = copy_to_mode_reg (elem_mode, x);
              emit_insn (
                  GEN_FCN (icode) (dest, x, GEN_INT (i - leading_others)));
            }
        }
    }

  bool target_last_p = false;
  for (int i = leading_others - 1; i >= 0; i--)
    {
      if (target_last_p)
        {
          target_last_p = false;
          emit_vec_shl_insert (dest, target, builder.elt (i));
        }
      else
        {
          target_last_p = true;
          emit_vec_shl_insert (target, dest, builder.elt (i));
        }
    }

  if (!target_last_p)
    riscv_emit_move (target, dest);
}

static void
riscv_vector_expand_vector_init_handle_leading_const (
    rtx target, const rtx_vector_builder &builder, int nelts_reqd,
    int ending_others, int n_mismatch, int base, int step)
{
  machine_mode mode = GET_MODE (target);
  scalar_mode elem_mode = GET_MODE_INNER (mode);
  /* Try to use the natural pattern of BUILDER to extend the trailing
     constant elements to a full vector.  Replace any variables in the
     extra elements with zeros.

     ??? It would be better if the builders supported "don't care"
         elements, with the builder filling in whichever elements
         give the most compact encoding.  */
  rtx_vector_builder v (mode, nelts_reqd, 1);
  for (int i = 0; i < nelts_reqd; i++)
    {
      rtx x;
      if (n_mismatch <= VSET_TOLERATE)
        {
          x = GEN_INT (base + step * (i - ending_others));
        }
      else
        {
          x = i >= ending_others ? builder.elt (i - ending_others)
                                 : CONST0_RTX (elem_mode);
        }
      v.quick_push (x);
    }
  rtx const_vec = v.build ();

  emit_move_insn (target, const_vec);

  if (n_mismatch > 0 && n_mismatch <= VSET_TOLERATE)
    {
      enum insn_code icode = optab_handler (vec_set_optab, mode);
      gcc_assert (icode != CODE_FOR_nothing);

      for (int i = 0; i < nelts_reqd - ending_others; ++i)
        {
          rtx x = builder.elt (i);
          if (INTVAL (x) != base + step * i)
            {
              x = copy_to_mode_reg (elem_mode, x);
              emit_insn (
                  GEN_FCN (icode) (target, x, GEN_INT (i + ending_others)));
            }
        }
    }

  for (int i = nelts_reqd - ending_others; i < nelts_reqd; i++)
    emit_slide1down (target, target, builder.elt (i));
}

static bool
riscv_vector_expand_vector_handle_dup_and_const (
    rtx target, const rtx_vector_builder &builder, int nelts_reqd)
{
  machine_mode mode = GET_MODE (target);
  scalar_mode elem_mode = GET_MODE_INNER (mode);
  int base = 0, step = 1, n_mismatch = 0;
  bool in_constants =
      calculate_base_step (builder, nelts_reqd, elem_mode, 0, &base, &step);

  if (in_constants)
    {
      int leading_others = get_first_bs_index (builder, nelts_reqd, elem_mode,
                                               base, step, false);
      int ending_others =
          get_first_bs_index (builder, nelts_reqd, elem_mode, base, step, true);

      if (leading_others >= nelts_reqd / 2 || ending_others >= nelts_reqd / 2)
        return false;

      if (leading_others > ending_others)
        {
          n_mismatch = get_mismatched_bs_cnt (builder, nelts_reqd, elem_mode,
                                              leading_others, base, step);
          if ((n_mismatch >> 1) > VSET_TOLERATE && (n_mismatch & 0x1) == 0x1)
            return false;
          n_mismatch >>= 1;
          riscv_vector_expand_vector_init_handle_ending_const (
              target, builder, nelts_reqd, leading_others, n_mismatch, base,
              step);
        }
      else // leading_others <= ending_others
        {
          n_mismatch = get_mismatched_bs_cnt (
              builder, nelts_reqd - ending_others, elem_mode, 0, base, step);
          if ((n_mismatch >> 1) > VSET_TOLERATE && (n_mismatch & 0x1) == 0x1)
            return false;
          n_mismatch >>= 1;
          riscv_vector_expand_vector_init_handle_leading_const (
              target, builder, nelts_reqd, ending_others, n_mismatch, base,
              step);
        }
    }
  else // not in_constant
    {
      if (base < 0)
        {
          int leading_const = get_first_rtx_index (builder, nelts_reqd,
                                                   elem_mode, NULL_RTX, false);
          int ending_const = get_first_rtx_index (builder, nelts_reqd,
                                                  elem_mode, NULL_RTX, true);
          if (leading_const > nelts_reqd / 2)
            {
              riscv_vector_expand_vector_init_handle_leading_const (
                  target, builder, nelts_reqd, nelts_reqd - leading_const,
                  VSET_TOLERATE + 1, 0, 0);
              return true;
            }
          else if (ending_const > nelts_reqd / 2)
            {
              riscv_vector_expand_vector_init_handle_ending_const (
                  target, builder, nelts_reqd, nelts_reqd - ending_const,
                  VSET_TOLERATE + 1, 0, 0);
              return true;
            }
          return false;
        }
      int dup_idx = base, ndups = step;
      int leading_others = get_first_rtx_index (builder, nelts_reqd, elem_mode,
                                                builder.elt (dup_idx), false);
      int ending_others = get_first_rtx_index (builder, nelts_reqd, elem_mode,
                                               builder.elt (dup_idx), true);
      if (leading_others > ending_others)
        {
          n_mismatch = get_mismatched_rtx_cnt (
              builder, nelts_reqd, leading_others, builder.elt (dup_idx));
          if (n_mismatch > VSET_TOLERATE)
            return false;

          rtx dest;
          if ((leading_others % 2) == 0)
            dest = gen_rtx_REG (mode, V8_REGNUM);
          else
            dest = gen_rtx_REG (mode, V24_REGNUM);

          riscv_vector_emit_vec_duplicate (mode, elem_mode, dest,
                                           builder.elt (dup_idx));

          if (leading_others + ndups < nelts_reqd)
            {
              enum insn_code icode = optab_handler (vec_set_optab, mode);
              gcc_assert (icode != CODE_FOR_nothing);

              for (int i = leading_others; i < nelts_reqd; ++i)
                {
                  rtx x = builder.elt (i);
                  if (!rtx_equal_p (x, builder.elt (dup_idx)))
                    {
                      x = copy_to_mode_reg (elem_mode, x);
                      emit_insn (GEN_FCN (icode) (
                          dest, x, GEN_INT (i - leading_others)));
                    }
                }
            }

          bool target_last_p = false;

          for (int i = leading_others - 1; i >= 0; i--)
            {
              if (target_last_p)
                {
                  target_last_p = false;
                  emit_vec_shl_insert (dest, target, builder.elt (i));
                }
              else
                {
                  target_last_p = true;
                  emit_vec_shl_insert (target, dest, builder.elt (i));
                }
            }
          if (!target_last_p)
            riscv_emit_move (target, dest);
        }
      else // leading_others <= ending_others
        {
          n_mismatch = get_mismatched_rtx_cnt (
              builder, nelts_reqd - ending_others, 0, builder.elt (dup_idx));
          if (n_mismatch > VSET_TOLERATE)
            return false;
          riscv_vector_emit_vec_duplicate (mode, elem_mode, target,
                                           builder.elt (dup_idx));

          if (ending_others + ndups < nelts_reqd)
            {
              enum insn_code icode = optab_handler (vec_set_optab, mode);
              gcc_assert (icode != CODE_FOR_nothing);

              for (int i = 0; i < nelts_reqd - ending_others; ++i)
                {
                  rtx x = builder.elt (i);
                  if (!rtx_equal_p (x, builder.elt (dup_idx)))
                    {
                      x = copy_to_mode_reg (elem_mode, x);
                      emit_insn (GEN_FCN (icode) (target, x,
                                                  GEN_INT (i + ending_others)));
                    }
                }
            }

          for (int i = nelts_reqd - ending_others; i < nelts_reqd; i++)
            emit_slide1down (target, target, builder.elt (i));
        }
    }
  return true;
}

/* Initialize register TARGET from the elements in PARALLEL rtx VALS.  */

void
riscv_vector_expand_vector_init (rtx target, rtx vals)
{
  machine_mode mode = GET_MODE (target);
  int nelts = XVECLEN (vals, 0);

  rtx_vector_builder v (mode, nelts, 1);
  for (int i = 0; i < nelts; i++)
    v.quick_push (XVECEXP (vals, 0, i));
  v.finalize ();

  if (nelts < 4 ||
      !riscv_vector_expand_vector_handle_dup_and_const (target, v, nelts))
    riscv_vector_expand_vector_init_insert_leading_elems (target, v, nelts);
}

bool
riscv_vector_strided_const_vector_p (rtx op)
{
  rtx base, step;
  return const_vec_series_p (op, &base, &step);
}

void
riscv_vector_expand_series_const_vector (rtx target, rtx src)
{
  rtx base, step;
  gcc_assert (const_vec_series_p (src, &base, &step));
  machine_mode mode = GET_MODE (target);
  emit_insn (gen_vec_series (mode, target, base, step));
}

static void
riscv_vector_expand_strided (rtx ptr, rtx offset, int scale, rtx vector,
                             rtx mask, rtx vl, unsigned int gather_scatter_flag)
{
  rtx base, step;
  gcc_assert (const_vec_series_p (offset, &base, &step));
  rtx stride = gen_reg_rtx (Pmode);
  riscv_emit_move (stride, GEN_INT (INTVAL (step) * scale));
  machine_mode vector_mode = GET_MODE (vector);

  if (base != const0_rtx)
    emit_insn (gen_rtx_SET (ptr, gen_rtx_PLUS (Pmode, ptr, base)));
  switch (gather_scatter_flag)
    {
    case RVV_GATHER_LOAD:
    case RVV_LEN_GATHER_LOAD:
      emit_insn (gen_vlse (vector_mode, vector, const0_rtx, const0_rtx, ptr,
                           stride, vl, riscv_vector_gen_policy ()));
      break;
    case RVV_MASK_GATHER_LOAD:
    case RVV_LEN_MASK_GATHER_LOAD:
      emit_insn (gen_vlse (vector_mode, vector, mask, const0_rtx, ptr, stride, vl,
                           riscv_vector_gen_policy ()));
      break;
    case RVV_SCATTER_STORE:
    case RVV_LEN_SCATTER_STORE:
      emit_insn (gen_vsse (vector_mode, const0_rtx, ptr, stride, vector, vl,
                           riscv_vector_gen_policy ()));
      break;
    case RVV_MASK_SCATTER_STORE:
    case RVV_LEN_MASK_SCATTER_STORE:
      emit_insn (gen_vsse (vector_mode, mask, ptr, stride, vector, vl,
                           riscv_vector_gen_policy ()));
      break;
    default:
      break;
    }
}

void
riscv_vector_expand_gather_scatter (rtx *ops, unsigned int gather_scatter_flag)
{
  rtx base, offset, vector;
  machine_mode vector_mode, offset_mode;
  int scale, log2;
  bool unsigned_p;
  if (gather_scatter_flag & 0x1)
    {
      base = ops[0];
      offset = ops[1];
      vector = ops[4];
      vector_mode = GET_MODE (ops[4]);
      offset_mode = GET_MODE (ops[1]);
      scale = INTVAL (ops[3]);
      log2 = exact_log2 (scale);
      unsigned_p = INTVAL (ops[2]);
    }
  else
    {
      base = ops[1];
      offset = ops[2];
      vector = ops[0];
      vector_mode = GET_MODE (ops[0]);
      offset_mode = GET_MODE (ops[2]);
      scale = INTVAL (ops[4]);
      log2 = exact_log2 (scale);
      unsigned_p = INTVAL (ops[3]);
    }

  base = force_reg (Pmode, base);
  offset = force_reg (offset_mode, offset);

  /* RVV only support zero_extend offset. For sign_extend offset, we
     need to sign_extend the offset and use gather scatter instructions
     that have the same offset and base mode. */
  if (unsigned_p == 0 && GET_MODE_INNER (offset_mode) != Pmode)
    {
      machine_mode new_offset_mode;
      gcc_assert (riscv_vector_data_mode (Pmode, GET_MODE_NUNITS (offset_mode))
                      .exists (&new_offset_mode));
      rtx new_offset = gen_reg_rtx (new_offset_mode);

      unsigned int factor =
          GET_MODE_BITSIZE (GET_MODE_INNER (new_offset_mode)) /
          GET_MODE_BITSIZE (GET_MODE_INNER (offset_mode));
      if (factor == 2)
        emit_insn (gen_vext_vf2 (SIGN_EXTEND, offset_mode, new_offset,
                                 const0_rtx, const0_rtx, offset,
                                 gen_rtx_REG (Pmode, X0_REGNUM),
                                 riscv_vector::gen_ta_policy ()));
      else if (factor == 4)
        emit_insn (gen_vext_vf4 (SIGN_EXTEND, offset_mode, new_offset,
                                 const0_rtx, const0_rtx, offset,
                                 gen_rtx_REG (Pmode, X0_REGNUM),
                                 riscv_vector::gen_ta_policy ()));
      else
        emit_insn (gen_vext_vf8 (SIGN_EXTEND, offset_mode, new_offset,
                                 const0_rtx, const0_rtx, offset,
                                 gen_rtx_REG (Pmode, X0_REGNUM),
                                 riscv_vector::gen_ta_policy ()));

      offset = new_offset;
      offset_mode = new_offset_mode;
    }

  rtx vl;
  if ((gather_scatter_flag >> 1) & 0x1)
    {
      if (gather_scatter_flag == RVV_LEN_MASK_GATHER_LOAD ||
          gather_scatter_flag == RVV_LEN_MASK_SCATTER_STORE)
        vl = force_reg (Pmode, ops[6]);
      else
        vl = force_reg (Pmode, ops[5]);
    }
  else
    vl = gen_rtx_REG (Pmode, X0_REGNUM);

  if (!REG_P (offset))
    {
      riscv_vector_expand_strided (base, offset, scale, vector,
                                   (gather_scatter_flag == RVV_GATHER_LOAD ||
                                    gather_scatter_flag == RVV_GATHER_LOAD ||
                                    gather_scatter_flag == RVV_SCATTER_STORE ||
                                    gather_scatter_flag == RVV_SCATTER_STORE)
                                       ? NULL_RTX
                                       : ops[5],
                                   vl, gather_scatter_flag);
      return;
    }

  if (log2 != 0)
    {
      rtx new_offset = gen_reg_rtx (offset_mode);
      emit_insn (gen_v_vx (ASHIFT, offset_mode, new_offset, const0_rtx,
                           const0_rtx, offset, GEN_INT (log2), vl,
                           riscv_vector_gen_policy ()));
      offset = new_offset;
    }

  switch (gather_scatter_flag)
    {
    case RVV_GATHER_LOAD:
    case RVV_LEN_GATHER_LOAD:
      emit_insn (gen_vlxei (UNSPEC_UNORDER_INDEXED_LOAD, vector_mode,
                            offset_mode, vector, const0_rtx, const0_rtx, base,
                            offset, vl, riscv_vector_gen_policy ()));
      break;
    case RVV_MASK_GATHER_LOAD:
    case RVV_LEN_MASK_GATHER_LOAD:
      emit_insn (gen_vlxei (UNSPEC_UNORDER_INDEXED_LOAD, vector_mode,
                            offset_mode, vector, ops[5], const0_rtx, base, offset,
                            vl, riscv_vector_gen_policy (RVV_POLICY_MU)));
      break;
    case RVV_SCATTER_STORE:
    case RVV_LEN_SCATTER_STORE:
      emit_insn (gen_vsxei (UNSPEC_UNORDER_INDEXED_STORE, vector_mode,
                            offset_mode, const0_rtx, base, offset, vector, vl,
                            riscv_vector_gen_policy ()));
      break;
    case RVV_MASK_SCATTER_STORE:
    case RVV_LEN_MASK_SCATTER_STORE:
      emit_insn (gen_vsxei (UNSPEC_UNORDER_INDEXED_STORE, vector_mode,
                            offset_mode, ops[5], base, offset, vector, vl,
                            riscv_vector_gen_policy ()));
      break;
    default:
      break;
    }
}

/* Return the RVV vector mode that has NUNITS elements or bytes of mode
 * INNER_MODE.  */

opt_machine_mode
riscv_vector_data_mode (scalar_mode inner_mode, poly_uint64 nunits)
{
  enum mode_class mclass =
      (is_a<scalar_float_mode> (inner_mode) ? MODE_VECTOR_FLOAT
                                            : MODE_VECTOR_INT);
  machine_mode mode;
  FOR_EACH_MODE_IN_CLASS (mode, mclass)
  if (inner_mode == GET_MODE_INNER (mode) &&
      known_eq (nunits, GET_MODE_NUNITS (mode)) &&
      riscv_vector_data_mode_p (mode) && !riscv_tuple_mode_p (mode))
    return mode;
  return opt_machine_mode ();
}

static rtx
riscv_vector_gen_mask_mem (rtx const_vec, machine_mode mask_mode)
{
  rtvec v = rtvec_alloc (XVECLEN (const_vec, 0));
  for (int i = 0; i < XVECLEN (const_vec, 0); i++)
    RTVEC_ELT (v, i) = GEN_INT (0);

  unsigned char b = 0;
  for (int i = 0; i < XVECLEN (const_vec, 0); i++)
    {
      if (INTVAL (XVECEXP (const_vec, 0, i)))
        b = b | (1 << (i % 8));

      if ((i > 0 && (i % 8) == 7) || (i == (XVECLEN (const_vec, 0) - 1)))
        {
          RTVEC_ELT (v, ((i + 7) / 8) - 1) = GEN_INT (b);
          b = 0;
        }
    }
  machine_mode store_mode = VOIDmode;
  riscv_vector_data_mode (QImode, GET_MODE_NUNITS (mask_mode))
      .exists (&store_mode);
  const_vec = gen_rtx_CONST_VECTOR (store_mode, v);
  rtx mem = force_const_mem (store_mode, const_vec);
  return gen_rtx_MEM (mask_mode, XEXP (mem, 0));
}

void
riscv_vector_expand_vec_perm (rtx target, rtx op0, rtx op1, rtx sel)
{
  rtx x;
  machine_mode data_mode = GET_MODE (target);
  machine_mode sel_mode = GET_MODE (sel);
  /* Enforced by the pattern condition.  */
  int nunits = GET_MODE_NUNITS (sel_mode).to_constant ();

  /* Note: vec_perm indices are supposed to wrap when they go beyond the
     size of the two value vectors, i.e. the upper bits of the indices
     are effectively ignored.  RVV vrgather instead produces 0 for any
     out-of-range indices, so we need to modulo all the vec_perm indices
     to ensure they are all in range.  */
  rtx sel_reg = force_reg (sel_mode, sel);

  /* TARGET_VECTORIZE_VEC_PERM_CONST will eliminate the cases that
     nunits larger than 255 if inner mode is QImode. So it is safe
     to use vrgather instructions. */

  /* Check if the sel only references the first values vector.  */
  if (CONST_VECTOR_P (sel) &&
      riscv_const_vec_all_in_range_p (sel, 0, nunits - 1))
    {
      if (const_vec_duplicate_p (sel, &x))
        {
          if (IN_RANGE (INTVAL (x), 0, 31))
            emit_insn (gen_vrgather_vx (
                data_mode, target, const0_rtx, const0_rtx, op0, x,
                gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          else
            emit_insn (gen_vrgather_vx (data_mode, target, const0_rtx,
                                        const0_rtx, op0, force_reg (Pmode, x),
                                        gen_rtx_REG (Pmode, X0_REGNUM),
                                        riscv_vector_gen_policy ()));
        }
      else
        emit_insn (gen_vrgather_vv (
            data_mode, target, const0_rtx, const0_rtx, op0, sel_reg,
            gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
      return;
    }

  /* Check if the two values vectors are the same.  */
  if (rtx_equal_p (op0, op1))
    {
      if (const_vec_duplicate_p (sel, &x))
        {
          if (IN_RANGE (INTVAL (x), 0, 31))
            emit_insn (gen_vrgather_vx (
                data_mode, target, const0_rtx, const0_rtx, op0, x,
                gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          else
            emit_insn (gen_vrgather_vx (data_mode, target, const0_rtx,
                                        const0_rtx, op0, force_reg (Pmode, x),
                                        gen_rtx_REG (Pmode, X0_REGNUM),
                                        riscv_vector_gen_policy ()));
        }
      else
        emit_insn (gen_vrgather_vv (
            data_mode, target, const0_rtx, const0_rtx, op0, sel_reg,
            gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
      return;
    }

  /* Run vrgather on for each value vector and combine the results.  */
  machine_mode mask_mode;
  gcc_assert (targetm.vectorize.get_mask_mode (data_mode).exists (&mask_mode));
  rtx mask = gen_reg_rtx (mask_mode);

  // use const memory for const vnx128qi
  if (CONST_VECTOR_P (sel) && nunits >= 128 &&
      GET_MODE_INNER (sel_mode) == QImode)
    {
      rtx_vector_builder op_idx_builder (sel_mode, nunits, 1);
      rtx_vector_builder op1_mask_builder (mask_mode, nunits, 1);
      for (int i = 0; i < nunits; i++)
        {
          HOST_WIDE_INT idx_val = INTVAL (CONST_VECTOR_ELT (sel, i));
          // ensure idx is positive
          rtx idx = GEN_INT ((idx_val + nunits) % nunits);
          rtx mask = (idx_val >= nunits || idx_val < 0) ? CONST1_RTX (BImode)
                                                        : CONST0_RTX (BImode);
          op_idx_builder.quick_push (idx);
          op1_mask_builder.quick_push (mask);
        }

      rtx new_idx = gen_reg_rtx (sel_mode);
      rtx new_idx_mem = force_const_mem (sel_mode, op_idx_builder.build ());
      riscv_emit_move (new_idx, gen_rtx_MEM (sel_mode, XEXP (new_idx_mem, 0)));
      riscv_emit_move (mask, riscv_vector_gen_mask_mem (
                                 op1_mask_builder.build (), mask_mode));
      emit_insn (gen_vrgather_vv (data_mode, target, const0_rtx, const0_rtx,
                                  op0, new_idx, gen_rtx_REG (Pmode, X0_REGNUM),
                                  riscv_vector_gen_policy ()));

      emit_insn (gen_vrgather_vv (data_mode, target, mask, target, op1, new_idx,
                                  gen_rtx_REG (Pmode, X0_REGNUM),
                                  riscv_vector::gen_tamu_policy ()));
      return;
    }

  /* step1: generate a mask that should select second vector. */
  emit_insn (gen_vms_vx (GEU, sel_mode, mask, const0_rtx, const0_rtx, sel_reg,
                         GEN_INT (nunits), gen_rtx_REG (Pmode, X0_REGNUM),
                         riscv_vector::gen_ta_policy ()));

  /* step2: gather a intermediate result for index < nunits,
            we don't need to care about the result of the element
            whose index >= nunits. */
  emit_insn (gen_vrgather_vv (data_mode, target, const0_rtx, const0_rtx, op0,
                              sel_reg, gen_rtx_REG (Pmode, X0_REGNUM),
                              riscv_vector_gen_policy ()));

  /* step3: generate a new selector for second vector. */
  emit_insn (gen_v_vx (UNSPEC_VSUB, sel_mode, sel_reg, const0_rtx, const0_rtx,
                       sel_reg, GEN_INT (nunits),
                       gen_rtx_REG (Pmode, X0_REGNUM),
                       riscv_vector::gen_ta_policy ()));

  /* step4: merge the result of index >= nunits. */
  emit_insn (gen_vrgather_vv (data_mode, target, mask, target, op1, sel_reg,
                              gen_rtx_REG (Pmode, X0_REGNUM),
                              riscv_vector::gen_tamu_policy ()));
}

/* Try to implement D using RVV vmerge instruction.  */

static bool
riscv_vector_vmerge (struct expand_vec_perm_d *d)
{
  machine_mode vmode = d->vmode;
  int unit_size = GET_MODE_UNIT_SIZE (vmode);

  if (unit_size > 8)
    return false;

  int n_patterns = d->perm.encoding ().npatterns ();
  poly_int64 vec_len = d->perm.length ();

  for (int i = 0; i < n_patterns; ++i) {
    if (!known_eq (d->perm[i], i) && !known_eq (d->perm[i], vec_len + i))
      return false;
    }

  for (int i = n_patterns; i < n_patterns * 2; i++)
    if (!d->perm.series_p (i, n_patterns, i, n_patterns)
        && !d->perm.series_p (i, n_patterns, vec_len + i, n_patterns))
      return false;

  machine_mode mask_mode;
  if (!targetm.vectorize.get_mask_mode (vmode).exists (&mask_mode))
    return false;

  if (d->testing_p)
    return true;

  /* Build a mask that is true when op0 elements should be used.  */
  rtx_vector_builder builder (mask_mode, n_patterns, 2);
  for (int i = 0; i < n_patterns * 2; i++)
    {
      rtx elem = known_eq (d->perm[i], i) ? CONST1_RTX (BImode)
					  : CONST0_RTX (BImode);
      builder.quick_push (elem);
    }

  rtx mask = gen_reg_rtx (mask_mode);
  riscv_emit_move (mask, riscv_vector_gen_mask_mem(builder.build (), mask_mode));
  /* TARGET = MASK ? OP0 : OP1.  */
  emit_insn (gen_vcond_mask (vmode, vmode, d->target, d->op0, d->op1, mask));
  return true;
}

static bool
riscv_vector_vdup (struct expand_vec_perm_d *d)
{
  rtx out = d->target;
  rtx in0;
  HOST_WIDE_INT elt;
  machine_mode vmode = d->vmode;
  rtx lane;

  if (d->perm.encoding ().encoded_nelts () != 1
      || !d->perm[0].is_constant (&elt))
    return false;

  /* Success! */
  if (d->testing_p)
    return true;

  in0 = d->op0;
  lane = GEN_INT (elt);

  rtx select = gen_reg_rtx(GET_MODE_INNER (vmode));
  emit_insn (gen_vec_extract (vmode, vmode, select, in0, lane));
  emit_insn (gen_vec_duplicate (vmode, out, select));
  return true;
}

static bool
riscv_vector_vcompress (struct expand_vec_perm_d *d)
{
  machine_mode vmode = d->vmode;
  int unit_size = GET_MODE_UNIT_SIZE (vmode);
  poly_int64 vec_len = d->perm.length ();

  if (unit_size > 8 || !vec_len.is_constant ())
    return false;

  int vlen = vec_len.to_constant ();
  if (known_ge (d->perm[vlen - 1], vlen * 2) || vlen < 4)
    return false;

  int first_op1_index = -1;
  for (int i = 0; i < vlen; i++)
    {
      if (!d->perm[i].is_constant ())
        return false;
      if (d->one_vector_p)
        {
          if (first_op1_index < 0 && i > 0 &&
              known_le (d->perm[i], d->perm[i - 1]))
            {
              first_op1_index = i;
            }
        }
      else if (first_op1_index < 0 && known_ge (d->perm[i], vec_len))
        {
          first_op1_index = i;
        }
    }

  if (first_op1_index < 0)
    return false;

  // the index of op1 MUST be series
  for (int i = first_op1_index + 1; i < vlen; i++)
    {
      if (known_ne (d->perm[i], d->perm[i - 1] + 1))
        return false;
    }
  // the index of op0 MUST be increasing progressively
  bool is_op0_series = true;
  for (int i = 1; i < first_op1_index; i++)
    {
      if (known_eq (d->perm[i], d->perm[i - 1] + 1))
        continue;
      else
        is_op0_series = false;
      if (known_le (d->perm[i], d->perm[i - 1]))
        return false;
    }

  machine_mode mask_mode;
  if (!targetm.vectorize.get_mask_mode (vmode).exists (&mask_mode))
    return false;

  if (d->testing_p)
    return true;

  if (first_op1_index == vlen - 1 && is_op0_series)
    {
      int slide_down_cnt = d->perm[0].to_constant ();
      rtx select = gen_reg_rtx (GET_MODE_INNER (vmode));
      emit_insn (gen_vec_extract (vmode, vmode, select, d->op1,
                                  GEN_INT (d->perm[vlen - 1].to_constant ())));
      
      rtx slide_reg = gen_reg_rtx (vmode);
      
      if (slide_down_cnt == 0)
        {
          emit_slide1up (slide_reg, d->op0, select);
          emit_slide1down (d->target, slide_reg, select);
        }
      else
        {
          gcc_assert (slide_down_cnt == 1);
          emit_slide1down (d->target, d->op0, select);
        }
      return true;
    }

  if (first_op1_index == 1)
    {
      int slide_up_cnt = d->perm[1].to_constant () % vlen;
      rtx select = gen_reg_rtx (GET_MODE_INNER (vmode));
      emit_insn (gen_vec_extract (vmode, vmode, select, d->op0,
                                  GEN_INT (d->perm[0].to_constant ())));
      
      rtx slide_reg = gen_reg_rtx (vmode);
      
      if (slide_up_cnt > 0)
        {
          gcc_assert (slide_up_cnt == 1);
          emit_slide1down (slide_reg, d->op1, select);
          emit_slide1up (d->target, slide_reg, select);
        }
      else
        emit_slide1up (d->target, d->op1, select);

      return true;
    }

  // whether need to slide up
  int slide_up_cnt = vlen * 2 - d->perm[vlen - 1].to_constant () - 1;
  if (slide_up_cnt > 0)
    emit_insn (gen_vslide_vx (
        UNSPEC_SLIDEUP, vmode, d->target, const0_rtx, const0_rtx, d->op1,
        force_reg (Pmode, GEN_INT (slide_up_cnt)),
        gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_tu_policy ()));

  /* Build a mask that is true when op0 elements should be used.  */
  uint8_t *mask_val = (uint8_t *)xmalloc (vlen);
  memset (mask_val, 0, vlen);
  rtx_vector_builder builder (mask_mode, vlen, 1);
  for (int i = 0; i < first_op1_index; i++)
    {
      mask_val[d->perm[i].to_constant ()] = 1;
    }

  for (int i = 0; i < vlen; i++)
    {
      rtx elem = (mask_val[i] == 1) ? CONST1_RTX (BImode) : CONST0_RTX (BImode);
      builder.quick_push (elem);
    }
  free (mask_val);

  rtx mask = gen_reg_rtx (mask_mode);
  riscv_emit_move (mask,
                   riscv_vector_gen_mask_mem (builder.build (), mask_mode));

  if (slide_up_cnt > 0)
    emit_insn (gen_vcompress_vm (vmode, d->target, mask, d->target, d->op0,
                                 gen_rtx_REG (Pmode, X0_REGNUM),
                                 riscv_vector_gen_policy ()));
  else
    emit_insn (gen_vcompress_vm (vmode, d->target, mask, d->op1, d->op0,
                                 gen_rtx_REG (Pmode, X0_REGNUM),
                                 riscv_vector_gen_policy ()));

  return true;
}

/* Try to implement D using an RVV vrgather instruction.  */

static bool
riscv_vector_vrgather (struct expand_vec_perm_d *d)
{
  scalar_mode element_mode = GET_MODE_INNER (d->vmode);
  machine_mode mask_mode;
  gcc_assert (targetm.vectorize.get_mask_mode (d->vmode).exists (&mask_mode));
  machine_mode sel_mode = related_int_vector_mode (d->vmode).require ();
  if (!d->perm.length ().is_constant ()
      && ((known_gt (GET_MODE_SIZE (d->vmode), BYTES_PER_RISCV_VECTOR)
      && GET_MODE_BITSIZE (element_mode) > 16)
      || GET_MODE_BITSIZE (element_mode) < 16))
    gcc_assert (riscv_vector_data_mode (HImode, d->perm.length ()) .exists (&sel_mode));

  unsigned int i = 0;
  while (known_gt (d->perm.length (), ++i))
    {
      if (!d->perm[i].is_constant ())
        return false;
    }

  if (d->testing_p)
    return true;

  /* step1: fetch vlmax for specific mode. */
  unsigned int vlmul = riscv_classify_vlmul_field (d->vmode);
  unsigned int vsew = riscv_classify_vsew_field (d->vmode);
  unsigned vtype = (vsew << 3) | (vlmul & 0x7) | 0x40;
  rtx vl = gen_reg_rtx (Pmode);
  emit_insn (gen_vsetvl (Pmode, vl, gen_rtx_REG (Pmode, X0_REGNUM), GEN_INT (vtype)));

  if (!d->perm.length ().is_constant ())
    {
      rtx mask = gen_reg_rtx (mask_mode);
      rtx sel = vec_perm_indices_to_rtx (sel_mode, d->perm);
      rtx sel_reg = force_reg (sel_mode, sel);
      rtx x;
      if (const_vec_duplicate_p (sel, &x))
        {
          rtx reg = gen_reg_rtx (Pmode);
          emit_insn (gen_rtx_SET (reg, x));
          emit_insn (gen_vrgather_vx (d->vmode,
                                      d->target, const0_rtx, const0_rtx, d->op0, reg,
                                      gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        }

      if (d->one_vector_p)
        {
          if ((known_gt (GET_MODE_SIZE (d->vmode), BYTES_PER_RISCV_VECTOR)
              && GET_MODE_BITSIZE (element_mode) > 16)
              || GET_MODE_BITSIZE (element_mode) < 16)
            emit_insn (gen_vrgatherei16_vv (d->vmode,
                       d->target, const0_rtx, const0_rtx, d->op0, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          else
            emit_insn (gen_vrgather_vv (d->vmode, d->target, const0_rtx, const0_rtx, d->op0, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
        }
      else
        {
          /* step2: generate a mask that should select second vector. */
          if (Pmode == SImode && GET_MODE_INNER (sel_mode) == DImode)
            emit_insn (gen_vms_vx_32bit (GEU, sel_mode, mask, const0_rtx, const0_rtx, sel_reg,
                vl, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_any_policy ()));
          else if (GET_MODE_INNER (sel_mode) == Pmode)
            emit_insn (gen_vms_vx (GEU, sel_mode, mask, const0_rtx, const0_rtx, sel_reg,
                vl, gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_any_policy ()));
          else
            emit_insn (gen_vms_vx_internal (GEU, sel_mode, mask, const0_rtx, const0_rtx, sel_reg,
                gen_lowpart (GET_MODE_INNER (sel_mode), vl),
                gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_any_policy ()));
          /* step3: gather a intermediate result for index < nunits,
                    we don't need to care about the result of the element
                    whose index >= nunits. */
          if (known_gt (GET_MODE_SIZE (d->vmode), BYTES_PER_RISCV_VECTOR)
            && GET_MODE_BITSIZE (element_mode) > 16)
            emit_insn (gen_vrgatherei16_vv (d->vmode,
                       d->target, const0_rtx, const0_rtx, d->op0, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          else
            emit_insn (gen_vrgather_vv (d->vmode, d->target, const0_rtx, const0_rtx, d->op0, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy ()));
          /* step4: generate a new selector for second vector. */
          if (Pmode == SImode && GET_MODE_INNER (sel_mode) == DImode)
            emit_insn (gen_vsub_vx_32bit (sel_mode, sel_reg,
                  const0_rtx, const0_rtx, sel_reg, vl,
                  gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy()));
          else if (GET_MODE_INNER (sel_mode) == Pmode)
            emit_insn (gen_v_vx (UNSPEC_VSUB, sel_mode, sel_reg,
                  const0_rtx, const0_rtx, sel_reg, vl,
                  gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy()));
          else
            emit_insn (gen_v_vx (UNSPEC_VSUB, sel_mode, sel_reg,
                  const0_rtx, const0_rtx, sel_reg,
                  gen_lowpart (GET_MODE_INNER (sel_mode), vl),
                  gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector_gen_policy()));
          /* step5: merge the result of index >= nunits. */
          if (known_gt (GET_MODE_SIZE (d->vmode), BYTES_PER_RISCV_VECTOR)
            && GET_MODE_BITSIZE (element_mode) > 16)
            emit_insn (gen_vrgatherei16_vv (d->vmode,
                       d->target, mask, d->target, d->op1, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM),
                       riscv_vector::gen_tamu_policy ()));
          else
            emit_insn (gen_vrgather_vv (d->vmode, d->target, mask, d->target, d->op1, sel_reg,
                       gen_rtx_REG (Pmode, X0_REGNUM), riscv_vector::gen_tamu_policy ()));
        }
    }
  else
  {
    sel_mode = related_int_vector_mode (d->vmode).require ();
    rtx sel = vec_perm_indices_to_rtx (sel_mode, d->perm);
    riscv_vector_expand_vec_perm (d->target, d->op0, d->op1, sel);
  }

  return true;
}

static bool
riscv_vector_expand_vec_perm_const (struct expand_vec_perm_d *d)
{
  if (!(riscv_vector_data_mode_p (d->vmode) && !riscv_tuple_mode_p (d->vmode)))
    return false;
  /* The pattern matching functions above are written to look for a small
     number to begin the sequence (0, 1, N/2).  If we begin with an index
     from the second operand, we can swap the operands.  */
  poly_int64 nelt = d->perm.length ();
  if (known_ge (d->perm[0], nelt))
    {
      d->perm.rotate_inputs (1);
      std::swap (d->op0, d->op1);
    }

  if (known_gt (nelt, 1))
    {
      if (riscv_vector_vmerge (d))
        return true;
      if (riscv_vector_vdup (d))
        return true;
      if (riscv_vector_vcompress (d))
        return true;
      if (riscv_vector_vrgather (d))
        return true;
    }

  return false;
}

bool
riscv_vector_expand_vectorize_vec_perm_const (machine_mode vmode, rtx target, rtx op0,
                                              rtx op1, const vec_perm_indices &sel)
{
  if (!TARGET_VECTOR || !TARGET_RVV)
    return false;

  struct expand_vec_perm_d d;

  /* Check whether the mask can be applied to a single vector.  */
  if (sel.ninputs () == 1
      || (op0 && rtx_equal_p (op0, op1)))
    d.one_vector_p = true;
  else if (sel.all_from_input_p (0))
    {
      d.one_vector_p = true;
      op1 = op0;
    }
  else if (sel.all_from_input_p (1))
    {
      d.one_vector_p = true;
      op0 = op1;
    }
  else
    d.one_vector_p = false;

  d.perm.new_vector (sel.encoding (), d.one_vector_p ? 1 : 2,
		     sel.nelts_per_input ());
  d.vmode = vmode;
  d.target = target;
  d.op0 = op0 ? force_reg (vmode, op0) : NULL_RTX;
  if (op0 == op1)
    d.op1 = d.op0;
  else
    d.op1 = op1 ? force_reg (vmode, op1) : NULL_RTX;
  d.testing_p = !target;

  if (GET_MODE_BITSIZE (GET_MODE_INNER (d.vmode)) < 16
    && d.perm.length ().is_constant ())
    {
      /* For constant index, we don't vectorize if the index
         is greater than 255. */
      for (unsigned int i = 0; i < d.perm.length ().to_constant (); i++)
        {
          if (known_gt (d.perm[i], 255)
            || known_lt (d.perm[i], 0))
            return false;
        }
    }

  if (!d.testing_p)
    return riscv_vector_expand_vec_perm_const (&d);

  rtx_insn *last = get_last_insn ();
  bool ret = riscv_vector_expand_vec_perm_const (&d);
  gcc_assert (last == get_last_insn ());

  return ret;
}

machine_mode
riscv_vector_preferred_simd_mode (scalar_mode mode, unsigned vf)
{
  if (!TARGET_VECTOR || !TARGET_RVV)
    return word_mode;

  switch (mode)
    {
    case E_QImode:
      return vf == 1 ? VNx16QImode
          : vf == 2 ? VNx32QImode
          : vf == 4 ? VNx64QImode
          : VNx128QImode;
    case E_HImode:
      return vf == 1 ? VNx8HImode
          : vf == 2 ? VNx16HImode
          : vf == 4 ? VNx32HImode
          : VNx64HImode;
    case E_SImode:
      return vf == 1 ? VNx4SImode
          : vf == 2 ? VNx8SImode
          : vf == 4 ? VNx16SImode
          : VNx32SImode;
    case E_DImode:
      return vf == 1 ? VNx2DImode
          : vf == 2 ? VNx4DImode
          : vf == 4 ? VNx8DImode
          : VNx16DImode;
    case E_HFmode:
      if (TARGET_FP16)
        return vf == 1 ? VNx8HFmode
          : vf == 2 ? VNx16HFmode
          : vf == 4 ? VNx32HFmode
          : VNx64HFmode;
      break;
    case E_SFmode:
      if (TARGET_HARD_FLOAT)
        return vf == 1 ? VNx4SFmode
          : vf == 2 ? VNx8SFmode
          : vf == 4 ? VNx16SFmode
          : VNx32SFmode;
      break;
    case E_DFmode:
      if (TARGET_DOUBLE_FLOAT)
        return vf == 1 ? VNx2DFmode
          : vf == 2 ? VNx4DFmode
          : vf == 4 ? VNx8DFmode
          : VNx16DFmode;
      break;
    default:
      break;
    }

  return word_mode;
}

opt_machine_mode
riscv_vector_vectorize_related_mode (machine_mode vector_mode,
                                     scalar_mode element_mode,
                                     poly_uint64 nunits,
                                     unsigned vf)
{
  bool rvv_mode_p = TARGET_VECTOR & riscv_vector_mode_p (vector_mode) & TARGET_RVV;

  /* If we're operating on RVV vectors, try to return an RVV mode.  */
  poly_uint64 rvv_nunits;
  if (rvv_mode_p
      && multiple_p (BYTES_PER_RISCV_VECTOR * vf,
                     GET_MODE_SIZE (element_mode), &rvv_nunits))
    {
      machine_mode rvv_mode;
      if (maybe_ne (nunits, 0U))
        {
          /* Try to find a full or partial RVV mode with exactly
             NUNITS units.  */
          if (multiple_p (rvv_nunits, nunits)
              && riscv_vector_data_mode (element_mode,
                                         nunits).exists (&rvv_mode))
              return rvv_mode;
        }
      else
        {
          /* Take the preferred number of units from the number of bytes
             that fit in VECTOR_MODE.  We always start by "autodetecting"
             a full vector mode with preferred_simd_mode, so vectors
             chosen here will also be full vector modes.  Then
             autovectorize_vector_modes tries smaller starting modes
             and thus smaller preferred numbers of units.  */
          rvv_nunits = ordered_min (rvv_nunits, GET_MODE_SIZE (vector_mode));
          if (riscv_vector_data_mode (element_mode,
                                      rvv_nunits).exists (&rvv_mode))
            return rvv_mode;
        }
    }

  return default_vectorize_related_mode (vector_mode, element_mode, nunits);
}

void
riscv_vector_autovectorize_vector_modes (vector_modes *modes, unsigned vf, bool)
{
  if (!TARGET_VECTOR || !TARGET_RVV)
    return;

  if (vf == RVV_LMUL1)
    {
      modes->safe_push (VNx16QImode);
      modes->safe_push (VNx8QImode);
      modes->safe_push (VNx4QImode);
      modes->safe_push (VNx2QImode);
    }
  else if (vf == RVV_LMUL2)
    {
      modes->safe_push (VNx32QImode);
      modes->safe_push (VNx16QImode);
      modes->safe_push (VNx8QImode);
      modes->safe_push (VNx4QImode);
    }
  else if (vf == RVV_LMUL4)
    {
      modes->safe_push (VNx64QImode);
      modes->safe_push (VNx32QImode);
      modes->safe_push (VNx16QImode);
      modes->safe_push (VNx8QImode);
    }
  else
    {
      modes->safe_push (VNx128QImode);
      modes->safe_push (VNx64QImode);
      modes->safe_push (VNx32QImode);
      modes->safe_push (VNx16QImode);
    }
}

opt_machine_mode
riscv_vector_get_mask_mode (machine_mode mode)
{
  machine_mode mask_mode;
  int nf = 1;
  if (riscv_tuple_mode_p (mode))
    nf = riscv_classify_nf (mode);
    
  FOR_EACH_MODE_IN_CLASS (mask_mode, MODE_VECTOR_BOOL)
    if (GET_MODE_INNER (mask_mode) == BImode
      && known_eq (GET_MODE_NUNITS (mask_mode) * nf,
        GET_MODE_NUNITS (mode))
      && riscv_vector_mask_mode_p (mask_mode))
      return mask_mode;
  return default_get_mask_mode (mode);
}

bool
riscv_vector_check_supported_mode_p (machine_mode mode)
{
  if (mode == HFmode)
    return TARGET_FP16;
  if (mode == SFmode)
    return TARGET_HARD_FLOAT;
  if (mode == DFmode)
    return TARGET_DOUBLE_FLOAT;
  
  return true;
}