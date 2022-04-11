/* Cost model implementation for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#define INCLUDE_STRING
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
#include "rtlanal.h"
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
#include "fractional-cost.h"
#include "riscv-vector-builtins.h"

/* This file should be included last.  */
#include "riscv-vector-cost.h"
#include "target-def.h"

bool vector_insn_cost_table::get_cost(rtx x, machine_mode mode, int *cost,
                                      bool speed) const {
  rtx op0, op1, op2;
  enum rtx_code code = GET_CODE(x);
  scalar_int_mode int_mode;

  /* By default, assume that everything has equivalent cost to the
     cheapest instruction.  Any additional costs are applied as a delta
     above this default.  */
  *cost = COSTS_N_INSNS(1);

  switch (code) {
  case SET:
    /* The cost depends entirely on the operands to SET.  */
    *cost = 0;
    op0 = SET_DEST(x);
    op1 = SET_SRC(x);

    switch (GET_CODE(op0)) {
    case MEM:
      if (speed) {
        rtx address = XEXP(op0, 0);
        *cost += store->cost(x, mode);
      }

      *cost += rtx_cost(op1, mode, SET, 1, speed);
      return true;

    case SUBREG:
      if (!REG_P(SUBREG_REG(op0)))
        *cost += rtx_cost(SUBREG_REG(op0), VOIDmode, SET, 0, speed);

      /* Fall through.  */
    case REG:
      /* The cost is one per vector-register copied.  */
      if (VECTOR_MODE_P(GET_MODE(op0))) {
        *cost = mov->cost(x, mode);
      } else
        /* Cost is just the cost of the RHS of the set.  */
        *cost += rtx_cost(op1, mode, SET, 1, speed);
      return true;

    case ZERO_EXTRACT:
    case SIGN_EXTRACT:
      /* Bit-field insertion.  Strip any redundant widening of
         the RHS to meet the width of the target.  */
      if (SUBREG_P(op1))
        op1 = SUBREG_REG(op1);
      if ((GET_CODE(op1) == ZERO_EXTEND || GET_CODE(op1) == SIGN_EXTEND) &&
          CONST_INT_P(XEXP(op0, 1)) &&
          is_a<scalar_int_mode>(GET_MODE(XEXP(op1, 0)), &int_mode) &&
          GET_MODE_BITSIZE(int_mode) >= INTVAL(XEXP(op0, 1)))
        op1 = XEXP(op1, 0);

      if (CONST_INT_P(op1)) {
        /* MOV immediate is assumed to always be cheap.  */
        *cost = COSTS_N_INSNS(1);
      } else {
        /* BFM.  */
        if (speed)
          *cost += alu->cost(x, mode);
        *cost += rtx_cost(op1, VOIDmode, (enum rtx_code)code, 1, speed);
      }

      return true;

    default:
      /* We can't make sense of this, assume default cost.  */
      *cost = COSTS_N_INSNS(1);
      return false;
    }
    return false;

  case MEM:
    if (speed) {
      *cost += load->cost(x, mode);
    }

    return true;

  case NEG:
    op0 = XEXP(x, 0);

    if (speed) {
      /* FNEG.  */
      *cost += alu->cost(x, mode);
    }
    return false;

    if (GET_MODE_CLASS(mode) == MODE_INT) {
      if (GET_RTX_CLASS(GET_CODE(op0)) == RTX_COMPARE ||
          GET_RTX_CLASS(GET_CODE(op0)) == RTX_COMM_COMPARE) {
        /* CSETM.  */
        *cost += rtx_cost(XEXP(op0, 0), VOIDmode, NEG, 0, speed);
        return true;
      }

      /* Cost this as SUB wzr, X.  */
      op0 = CONST0_RTX(mode);
      op1 = XEXP(x, 0);
      goto cost_minus;
    }
    return false;

  case COMPARE:
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);

    if (op1 == const0_rtx && GET_CODE(op0) == AND) {
      x = op0;
      mode = GET_MODE(op0);
      goto cost_logic;
    }

    if (GET_MODE_CLASS(GET_MODE(op0)) == MODE_INT) {
      /* TODO: A write to the CC flags possibly costs extra, this
     needs encoding in the cost tables.  */

      mode = GET_MODE(op0);
      /* ANDS.  */
      if (GET_CODE(op0) == AND) {
        x = op0;
        goto cost_logic;
      }

      if (GET_CODE(op0) == PLUS) {
        /* ADDS (and CMN alias).  */
        x = op0;
        goto cost_plus;
      }

      if (GET_CODE(op0) == MINUS) {
        /* SUBS.  */
        x = op0;
        goto cost_minus;
      }

      if (GET_CODE(op0) == ZERO_EXTRACT && op1 == const0_rtx &&
          CONST_INT_P(XEXP(op0, 1)) && CONST_INT_P(XEXP(op0, 2))) {
        /* COMPARE of ZERO_EXTRACT form of TST-immediate.
       Handle it here directly rather than going to cost_logic
       since we know the immediate generated for the TST is valid
       so we can avoid creating an intermediate rtx for it only
       for costing purposes.  */
        if (speed)
          *cost += alu->cost(x, mode);

        *cost += rtx_cost(XEXP(op0, 0), GET_MODE(op0), ZERO_EXTRACT, 0, speed);
        return true;
      }

      if (GET_CODE(op1) == NEG) {
        /* CMN.  */
        if (speed)
          *cost += alu->cost(x, mode);

        *cost += rtx_cost(op0, mode, COMPARE, 0, speed);
        *cost += rtx_cost(XEXP(op1, 0), mode, NEG, 1, speed);
        return true;
      }

      /* CMP.

     Compare can freely swap the order of operands, and
         canonicalization puts the more complex operation first.
         But the integer MINUS logic expects the shift/extend
         operation in op1.  */
      if (!(REG_P(op0) || (SUBREG_P(op0) && REG_P(SUBREG_REG(op0))))) {
        op0 = XEXP(x, 1);
        op1 = XEXP(x, 0);
      }
      goto cost_minus;
    }

    if (VECTOR_MODE_P(mode)) {
      /* Vector compare.  */
      if (speed)
        *cost += alu->cost(x, mode);

      return false;
    }
    return false;

  case MINUS: {
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);

  cost_minus:
    *cost += rtx_cost(op0, mode, MINUS, 0, speed);

    return true;
  }

  case PLUS: {
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);

  cost_plus:
    if (GET_RTX_CLASS(GET_CODE(op0)) == RTX_COMPARE ||
        GET_RTX_CLASS(GET_CODE(op0)) == RTX_COMM_COMPARE) {
      /* CSINC.  */
      *cost += rtx_cost(XEXP(op0, 0), mode, PLUS, 0, speed);
      *cost += rtx_cost(op1, mode, PLUS, 1, speed);
      return true;
    }

    *cost += rtx_cost(op1, mode, PLUS, 1, speed);

    return true;
  }

  case BSWAP:
    *cost = COSTS_N_INSNS(1);

    if (speed) {
      *cost += alu->cost(x, mode);
    }
    return false;

  case IOR:
    *cost = COSTS_N_INSNS(1);

    if (speed) {
      *cost += alu->cost(x, mode);
    }
    return true;

  case XOR:
  case AND:
  cost_logic:
    if (speed)
      *cost += alu->cost(x, mode);
    return true;

  case NOT:
    *cost += alu->cost(x, mode);
    return false;

  case ZERO_EXTEND:

    op0 = XEXP(x, 0);
    /* If a value is written in SI mode, then zero extended to DI
   mode, the operation will in general be free as a write to
   a 'w' register implicitly zeroes the upper bits of an 'x'
   register.  However, if this is

     (set (reg) (zero_extend (reg)))

   we must cost the explicit register move.  */
    if (mode == DImode && GET_MODE(op0) == SImode) {
      int op_cost = rtx_cost(op0, VOIDmode, ZERO_EXTEND, 0, speed);

      /* If OP_COST is non-zero, then the cost of the zero extend
         is effectively the cost of the inner operation.  Otherwise
         we have a MOV instruction and we take the cost from the MOV
         itself.  This is true independently of whether we are
         optimizing for space or time.  */
      if (op_cost)
        *cost = op_cost;

      return true;
    } else if (MEM_P(op0)) {
      /* All loads can zero extend to any size for free.  */
      *cost = rtx_cost(op0, VOIDmode, ZERO_EXTEND, 0, speed);
      return true;
    }

    if (speed) {
      /* UMOV.  */
      *cost += alu->cost(x, mode);
    }
    return false;

  case SIGN_EXTEND:
    if (MEM_P(XEXP(x, 0))) {
      if (speed) {
        *cost += load->cost(x, mode);
      }
      return true;
    }

    if (speed) {
      *cost += alu->cost(x, mode);
    }
    return false;

  case ASHIFT:
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);

    if (CONST_INT_P(op1)) {
      if (speed) {
        *cost += alu->cost(x, mode);
      }

      /* We can incorporate zero/sign extend for free.  */
      if (GET_CODE(op0) == ZERO_EXTEND || GET_CODE(op0) == SIGN_EXTEND)
        op0 = XEXP(op0, 0);

      *cost += rtx_cost(op0, VOIDmode, ASHIFT, 0, speed);
      return true;
    } else {
      if (speed)
        /* Vector shift (register).  */
        *cost += alu->cost(x, mode);
      return false; /* All arguments need to be in registers.  */
    }

  case ROTATE:
  case ROTATERT:
  case LSHIFTRT:
  case ASHIFTRT:
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);

    if (CONST_INT_P(op1)) {
      /* ASR (immediate) and friends.  */
      if (speed) {
        *cost += alu->cost(x, mode);
      }

      *cost += rtx_cost(op0, mode, (enum rtx_code)code, 0, speed);
      return true;
    } else {
      if (VECTOR_MODE_P(mode)) {
        if (speed)
          /* Vector shift (register).  */
          *cost += alu->cost(x, mode);
      }
      return false; /* All arguments need to be in registers.  */
    }

  case SYMBOL_REF:
    return true;

  case HIGH:
  case LO_SUM:
    /* ADRP/ADD (immediate).  */
    if (speed)
      *cost += alu->cost(x, mode);
    return true;

  case ZERO_EXTRACT:
  case SIGN_EXTRACT:
    /* UBFX/SBFX.  */
    if (speed) {
      *cost += alu->cost(x, mode);
    }

    /* We can trust that the immediates used will be correct (there
   are no by-register forms), so we need only cost op0.  */
    *cost += rtx_cost(XEXP(x, 0), VOIDmode, (enum rtx_code)code, 0, speed);
    return true;

  case MULT:
    *cost += mult->cost(x, mode);
    return true;

  case MOD:
  case UMOD:
    if (speed) {
      /* Slighly prefer UMOD over SMOD.  */
      *cost += alu->cost(x, mode);
    }
    return false; /* All arguments need to be in registers.  */

  case DIV:
  case UDIV:
  case SQRT:
    if (speed) {
      *cost += alu->cost(x, mode);
    }
    return false; /* All arguments need to be in registers.  */

  case IF_THEN_ELSE:
    if (speed) {
      *cost += if_then_else->cost(x, mode);
    }
    return true;

  case EQ:
  case NE:
  case GT:
  case GTU:
  case LT:
  case LTU:
  case GE:
  case GEU:
  case LE:
  case LEU:

    return false; /* All arguments must be in registers.  */

  case FMA:
    op0 = XEXP(x, 0);
    op1 = XEXP(x, 1);
    op2 = XEXP(x, 2);

    if (speed) {
      *cost += alu->cost(x, mode);
    }

    /* FMSUB, FNMADD, and FNMSUB are free.  */
    if (GET_CODE(op0) == NEG)
      op0 = XEXP(op0, 0);

    if (GET_CODE(op2) == NEG)
      op2 = XEXP(op2, 0);

    /* aarch64_fnma4_elt_to_64v2df has the NEG as operand 1,
   and the by-element operand as operand 0.  */
    if (GET_CODE(op1) == NEG)
      op1 = XEXP(op1, 0);

    /* Catch vector-by-element operations.  The by-element operand can
   either be (vec_duplicate (vec_select (x))) or just
   (vec_select (x)), depending on whether we are multiplying by
   a vector or a scalar.

   Canonicalization is not very good in these cases, FMA4 will put the
   by-element operand as operand 0, FNMA4 will have it as operand 1.  */
    if (GET_CODE(op0) == VEC_DUPLICATE)
      op0 = XEXP(op0, 0);
    else if (GET_CODE(op1) == VEC_DUPLICATE)
      op1 = XEXP(op1, 0);

    if (GET_CODE(op0) == VEC_SELECT)
      op0 = XEXP(op0, 0);
    else if (GET_CODE(op1) == VEC_SELECT)
      op1 = XEXP(op1, 0);

    /* If the remaining parameters are not registers,
       get the cost to put them into registers.  */
    *cost += rtx_cost(op0, mode, FMA, 0, speed);
    *cost += rtx_cost(op1, mode, FMA, 1, speed);
    *cost += rtx_cost(op2, mode, FMA, 2, speed);
    return true;

  case FLOAT:
  case UNSIGNED_FLOAT:
    return false;

  case FLOAT_EXTEND:
    if (speed) {
      /*Vector truncate.  */
      *cost += alu->cost(x, mode);
    }
    return false;

  case FLOAT_TRUNCATE:
    if (speed) {
      /*Vector conversion.  */
      *cost += alu->cost(x, mode);
    }
    return false;

  case FIX:
  case UNSIGNED_FIX:
    x = XEXP(x, 0);
    if (speed) {
      *cost += alu->cost(x, mode);
    }

    *cost += rtx_cost(x, VOIDmode, (enum rtx_code)code, 0, speed);
    return true;

  case ABS:
    /* ABS (vector).  */
    if (speed)
      *cost += alu->cost(x, mode);
    return false;

  case SMAX:
  case SMIN:
    if (speed) {
      *cost += alu->cost(x, mode);
    }
    return false;

  case UNSPEC:
    break;

  case TRUNCATE:
    break;
  case CONST_VECTOR: {
    *cost = mov->cost(x, mode);
    break;
  }
  case VEC_CONCAT:
    /* depending on the operation, either DUP or INS.
       For now, keep default costing.  */
    break;
  case VEC_DUPLICATE:
    /* Load using a DUP.  */
    *cost = dup->cost(x, mode);
    return false;
  case VEC_SELECT: {
    rtx op0 = XEXP(x, 0);
    *cost = rtx_cost(op0, GET_MODE(op0), VEC_SELECT, 0, speed);

    /* cost subreg of 0 as free, otherwise as DUP */
    rtx op1 = XEXP(x, 1);
    if (vec_series_lowpart_p(mode, GET_MODE(op1), op1))
      ;
    else if (vec_series_highpart_p(mode, GET_MODE(op1), op1))
      *cost = dup->cost(x, mode);
    else
      *cost = extract->cost(x, mode);
    return true;
  }
  default:
    break;
  }

  if (dump_file)
    fprintf(dump_file, "\nFailed to cost RTX.  Assuming default cost.\n");

  return true;
}

extern int riscv_builtin_vectorization_cost (enum vect_cost_for_stmt, tree, int);

riscv_vector_costs::riscv_vector_costs(vec_info *vinfo, bool costing_for_scalar)
    : vector_costs(vinfo, costing_for_scalar) {}

unsigned riscv_vector_costs::add_stmt_cost(int count, vect_cost_for_stmt kind,
                                           stmt_vec_info stmt_info,
                                           tree vectype, int misalign,
                                           vect_cost_model_location where) {
  int stmt_cost
    = riscv_builtin_vectorization_cost (kind, vectype, misalign);
  return record_stmt_cost(stmt_info, where, count * stmt_cost);
}

void riscv_vector_costs::finish_cost(const vector_costs *uncast_scalar_costs) {
  auto *scalar_costs =
      static_cast<const riscv_vector_costs *>(uncast_scalar_costs);
  loop_vec_info loop_vinfo = dyn_cast<loop_vec_info>(m_vinfo);
  if (loop_vinfo && TARGET_RVV)
      m_costs[vect_body] = 1;
  vector_costs::finish_cost(scalar_costs);
}

bool riscv_vector_costs::better_main_loop_than_p(
    const vector_costs *uncast_other) const {
  auto other = static_cast<const riscv_vector_costs *>(uncast_other);

  auto this_loop_vinfo = as_a<loop_vec_info>(this->m_vinfo);
  auto other_loop_vinfo = as_a<loop_vec_info>(other->m_vinfo);

  return vector_costs::better_main_loop_than_p(other);
}
