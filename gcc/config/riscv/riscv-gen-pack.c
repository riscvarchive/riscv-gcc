/* Generate 'pack*' instructions pass for RISC-V+B.
   Copyright (C) 2021 Free Software Foundation, Inc.
   Contributed by Romain Dolbeau (romain.dolbeau@european-processor-initiative.eu)

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

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "backend.h"
#include "regs.h"
#include "target.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "df.h"
#include "predict.h"
#include "tree-pass.h"
#include "insn-attr.h"

namespace {

const pass_data pass_data_gen_pack =
{
  RTL_PASS, /* type */
  "gen_pack", /* name */
  OPTGROUP_NONE, /* optinfo_flags */
  TV_NONE, /* tv_id */
  0, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  0, /* todo_flags_finish */
};

class pass_gen_pack : public rtl_opt_pass
{
public:
  pass_gen_pack (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_gen_pack, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      return TARGET_ZBP && optimize > 0;
    }
  virtual unsigned int execute (function *);

private:
  typedef enum {
				REG_UNKNOWN = 0,
				REG_0XFF,
				REG_0XFF00,
				REG_0XFF0000,
				REG_0XFF000000,
				REG_0XFFFF,
				REG_0XFFFF0000,
				/* REG_0X00FFFF00, */
				/* REG_0XFF0000FF, */
				/* REG_0X00FF00FF, */
				/* REG_0XFF00FF00, */
				REG_LAST
  } reg_bits_prop;
  typedef enum {
				reg_bits_low,
				reg_bits_high
  } reg_bits_low_high;
  typedef int_hash <HOST_WIDE_INT, 0> regno_hash;
  typedef hash_map <regno_hash, reg_bits_prop> regno_bits_map;
  typedef hash_map <regno_hash, rtx_insn*> regno_def_map;
  typedef hash_map <regno_hash, rtx> regno_source_map;
  /* the output_is_at_most_*_bits functions look for output
   * where only the specified bits could be 1; everything
   * else is provably 0.
   * They return true if that's is true for the insn (or op+out)
   * in parameter, false otherwise.
   * It also looks for earlier sources of the same bits:
   * - in source_low the bits are right-justified (in LSB)
   * - in source_high the bits are left-justified (in MSB)
   * other bits are undefined in source_low & source_high
   * i.e. for:
   * `x = 0xDEADBEEF; a = x & 0xFF; b = a << 8;`
   * output_is_at_most_0xFF_bits() on 'a' will return true with source_low = x, source_high = NULL
   * output_is_at_most_0xFF_bits() on 'b' will return false
   * output_is_at_most_0xFF00_bits() on 'a' will return false
   * output_is_at_most_0xFF00_bits() on 'b' will return true with source_low = x, source_high = NULL
   * whereas for:
   * `x = 0xDEADBEEF; a = a >> 24;`
   * output_is_at_most_0xFF_bits() on 'a' should return true with source_low = a, source_high = x [unimplemented]
   * The purpose is to find a proper input for various 'pack*'
   * as they take their input right-justified (pack, packh)
   * or left-justified (packu).
   * currently this covers mostly RV32.
  */
  typedef bool (pass_gen_pack::*bit_checker_fn)(const rtx op, rtx out, char[256], regno_bits_map *, regno_def_map *, regno_source_map *, regno_source_map *, rtx *, rtx*) const;

  bool output_is_at_most_0xFF_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF00_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF00_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF0000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF0000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF000000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFF000000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFFFF_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFFFF_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFFFF0000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool output_is_at_most_0xFFFF0000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const;
  bool analyze (rtx_insn * const insn, regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm);
  bool check_2operands(rtx_insn * const insn, reg_bits_prop s1bits, reg_bits_prop s2bits, reg_bits_low_high low_high_1, reg_bits_low_high low_high_2, regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source1, rtx *source2);
  bool generate_packh (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn * insn);
  bool generate_packhu (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn * insn);
  bool generate_packhm (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn * insn);
  bool generate_pack (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn * insn);
  bool generate_packu (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn * insn);
  /*
 * This rewrite a sequence of *or that involves 4 bytes
 * into a binary tree, sorting the operands.
 * The goal is for the other patterns to match even when the bytes
 * are *or'ed unordered.
 * It doesn't distinguish between ior and xor as the bytes
 * will not overlap.
 * (in fact, it could also perhaps accept 'add')
 */
  bool check_or (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* first_or);
  
  bit_checker_fn lookup_bit_checker(reg_bits_prop b) {
	  switch (b) {
	  case REG_0XFF:       return &pass_gen_pack::output_is_at_most_0xFF_bits;
	  case REG_0XFF00:     return &pass_gen_pack::output_is_at_most_0xFF00_bits;
	  case REG_0XFF0000:   return &pass_gen_pack::output_is_at_most_0xFF0000_bits;
	  case REG_0XFF000000: return &pass_gen_pack::output_is_at_most_0xFF000000_bits;
	  case REG_0XFFFF:     return &pass_gen_pack::output_is_at_most_0xFFFF_bits;
	  case REG_0XFFFF0000: return &pass_gen_pack::output_is_at_most_0xFFFF0000_bits;
	  default: return NULL;
	  }
  }
  
}; // class pass_gen_pack

bool
pass_gen_pack::output_is_at_most_0xFF_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	return output_is_at_most_0xFF_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
	
bool
pass_gen_pack::output_is_at_most_0xFF_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFF) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = *rshm->get(regno);
			return true;
		}
		return false;
	}
	if (GET_CODE(op) == SUBREG) { // checkme; is it always zero-extend?
		if ((GET_MODE(op) == SImode) ||
			(GET_MODE(op) == DImode)) {
			rtx op0 = XEXP(op, 0);
			if (GET_MODE(op0) == QImode) {
				*source_low = out; // can be NULL
				*source_high = NULL;
				return true;
			}
		}
		return false;
	}
	/* and with 0xFF means 8 valid bits */
	if (GET_CODE(op) == AND) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 8)) {
			snprintf(reason, 256, "andi 255");
			*source_low = op0; // first operand of and
			*source_high = NULL;
			return true;
		}
	}
	/* zero-extension from QI */
	if (GET_CODE(op) == ZERO_EXTEND) {
		rtx op0 = XEXP(op, 0);
		if (GET_MODE(op0) == QImode) {
			snprintf(reason, 256, "zext qi");
			if (GET_CODE(op0) == SUBREG) {
				*source_low = XEXP(op0, 0); // bypass the subreg
				*source_high = NULL;
			} else if (GET_CODE(op0) == REG) {
				*source_low = XEXP(op0, 0); // bypass the reg
				*source_high = NULL;
			} else if (GET_CODE(op0) == MEM) {
				*source_low = out; // can be NULL
				*source_high = NULL;
			} else {
				gcc_unreachable();
			}
			return true;
		}
	}
	/* logical right-shift 8 from 0xFF00 or 0xFFFF*/
	if (GET_CODE(op) == LSHIFTRT) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 8)) {
			bool recurse = false;
			/* first, FF00, where we can use the source_low as it will be 0xFF */
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFF00_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFF00_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shiftrt (o8b: %s) 8", bak);
				// *source_low has been set by the recursive call
				return true;
			}
			/* second, FFFF, where we need to keep the lshiftrt */
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFFFF_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else if (GET_CODE(op0) == SUBREG) {
				// a particular case is
				// (lshiftrt:SI (subreg:SI (mem:HI (plus:SI (reg/v/f:SI 91 [ a ]) (const_int 4 [0x4])) ) 0)
				// as that's a hidden_byte_load, but won't match below because there's notregister
				// out of the subreg to use as source_low.
				if ((GET_MODE(op0) == SImode) &&
					(GET_CODE(XEXP(op0, 0)) == MEM) &&
					(GET_MODE(XEXP(op0, 0)) == HImode)) {
					rtx addr = XEXP(XEXP(op0, 0), 0);
					rtx offset;
					if (GET_CODE(addr) == PLUS)
						offset = XEXP(addr, 1);
					else if (GET_CODE(addr) == REG)
						offset = GEN_INT(0);
					else
						gcc_unreachable();
					if (CONST_INT_P(offset) && (INTVAL(offset) < 2047)) {
						// this will be converted to a load byte, we can use our out
						*source_low = out; // can be null
						*source_high = NULL;
						return true;
					}
				}
			} else {
				recurse = output_is_at_most_0xFFFF_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shiftrt (o8b: %s) 8", bak);
				*source_low = out; // our source_low
				*source_high = NULL;
				return true;
			}
		}
	}
	/* GCC has done the job for us, only 8 valid bits */
	/* unsigned HOST_WIDE_INT nzb = nonzero_bits(op, GET_MODE(op)); */
	/* if (nzb == 255) { */
	/* 	snprintf(reason, 256, "gcc told us"); */
	/* 	*source_low = out; */
	/* 	*source_high = NULL; */
	/* 	return true; */
	/* } */
	return false;
}

bool
pass_gen_pack::output_is_at_most_0xFF00_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	return output_is_at_most_0xFF00_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
bool
pass_gen_pack::output_is_at_most_0xFF00_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFF00) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = *rshm->get(regno);
			return true;
		}
		return false;
	}

	/* and with 0xFF00 from shift 8 */
	if (GET_CODE(op) == AND) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 65280)) {
			if (GET_CODE(op0) == ASHIFT) {
				rtx op01 = XEXP(op0, 1);
				if (CONST_INT_P(op01) && (INTVAL(op01) == 8)) {
					snprintf(reason, 256, "andi (shift 8) 65280");
					*source_low = XEXP(op0, 0); // first operand of shift
					*source_high = NULL;
					return true;
				}
			}
		}
	}
	/* shift 8 from 0xFF */
	if (GET_CODE(op) == ASHIFT) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 8)) {
			bool recurse = false;
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFF_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFF_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shift (o8b: %s) 8", bak);
				// *source_low has been set by the recursive call
				return true;
			}
		}
	}
	return false;
}

bool
pass_gen_pack::output_is_at_most_0xFF0000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	return output_is_at_most_0xFF0000_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
bool
pass_gen_pack::output_is_at_most_0xFF0000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFF0000) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = NULL;
			return true;
		}
		return false;
	}
	
	/* and with 0xFF0000 from shift 16 */
	if (GET_CODE(op) == AND) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 16711680)) {
			if (GET_CODE(op0) == ASHIFT) {
				rtx op01 = XEXP(op0, 1);
				if (CONST_INT_P(op01) && (INTVAL(op01) == 16)) {
					snprintf(reason, 256, "andi (shift 16) 16711680");
					*source_low = XEXP(op0, 0); // first operand of shift
					*source_high = NULL;
					return true;
				}
			}
		}
	}

	/* shift 16 from 0xFF */
	if (GET_CODE(op) == ASHIFT) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 16)) {
			bool recurse = false;
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFF_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFF_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shift (o8b: %s) 16", bak);
				// *source_low has been set by the recursive call
				return true;
			}
		}
	}
	return false;
}

bool
pass_gen_pack::output_is_at_most_0xFF000000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	return output_is_at_most_0xFF000000_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
bool
pass_gen_pack::output_is_at_most_0xFF000000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFF000000) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = *rshm->get(regno);
			return true;
		}
		return false;
	}
	/* shift 24 from 0xFF */
	if (GET_CODE(op) == ASHIFT) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 24)) {
			bool recurse = false;
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFF_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFF_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shift (o8b: %s) 24", bak);
				// *source_low has been set by the recursive call
				return true;
			}
			if (GET_MODE(op) == SImode) {
				snprintf(reason, 256, "shiftSI 24");
				*source_low = op0;
				*source_high = out;
				return true;
			}
		}
	}
	return false;
}

bool
pass_gen_pack::output_is_at_most_0xFFFF_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if (get_attr_type(insn) == TYPE_PACKH) {
		snprintf(reason, 256, "packh");
		*source_low = out;
		*source_high = NULL;
		return true;
	}
	return output_is_at_most_0xFFFF_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
bool
pass_gen_pack::output_is_at_most_0xFFFF_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFFFF) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = *rshm->get(regno);
			return true;
		}
		return false;
	}
	if (GET_CODE(op) == SUBREG) {
		if ((GET_MODE(op) == SImode) ||
			(GET_MODE(op) == DImode)) {
			rtx op0 = XEXP(op, 0);
			if (GET_MODE(op0) == HImode) {
				*source_low = out; // can be null
				*source_high = NULL;
				return true;
			}
		}
		return false;
	}
	/* and with 0xFFFF means 16 valid bits */
	if (GET_CODE(op) == AND) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 8)) {
			snprintf(reason, 65535, "andi 65535");
			*source_low = op0; // first operand of and
			*source_high = NULL;
			return true;
		}
	}
	if (GET_CODE(op) == ZERO_EXTEND) {
		rtx op0 = XEXP(op, 0);
		if (GET_MODE(op0) == HImode) {
			snprintf(reason, 256, "zext hi");
			if (GET_CODE(op0) == SUBREG) {
				*source_low = XEXP(op0, 0); // bypass the subreg
				*source_high = NULL;
			} else if (GET_CODE(op0) == REG) {
				*source_low = XEXP(op0, 0); // bypass the reg
				*source_high = NULL;
			} else if (GET_CODE(op0) == MEM) {
				*source_low = out; // can be NULL
				*source_high = NULL;
			} else {
				gcc_unreachable();
			}
			return true;
		}
	}
	if ((GET_CODE(op) == LSHIFTRT) &&
		(GET_MODE(op) == SImode)) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 16)) {
			bool recurse = false;
			/* first, FFFF0000, where we can use the source_low as it will be 0xFFFF */
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFFFF0000_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFFFF0000_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shiftrt (o16b: %s) 16", bak);
				// *source_low has been set by the recursive call
				*source_high = out;
				return true;
			}
			/* second, FFFFFFFF (anything, really), where we need to keep the lshiftrt */
			char bak[256];
			snprintf(bak, 256, "%s", reason);
			snprintf(reason, 256, "shiftrt (o16b: %s) 16", bak);
			*source_low = out;
			*source_high = op0;
			return true;
		}
	}
	return false;
}

 
bool
pass_gen_pack::output_is_at_most_0xFFFF0000_bits(rtx_insn * const insn, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	return output_is_at_most_0xFFFF0000_bits(op, out, reason, rbm, rdm, rslm, rshm, source_low, source_high);
}
bool
pass_gen_pack::output_is_at_most_0xFFFF0000_bits(const rtx op, rtx out, char reason[256], regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source_low, rtx *source_high) const {
	if (GET_CODE(op) == REG) {
		HOST_WIDE_INT regno = REGNO(op);
		reg_bits_prop *b = rbm->get(regno);
		if (b == NULL)
			return false;
		if (*b == REG_0XFFFF0000) {
			snprintf(reason, 256, "register value");
			*source_low = *rslm->get(regno);
			*source_high = *rshm->get(regno);
			return true;
		}
		return false;
	}
	/* and with 0xFFFF0000  */
	if (GET_CODE(op) == AND) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (GET_MODE(op) == SImode) {
			if (CONST_INT_P(op1) && (INTVAL(op1) == -65536)) {
				snprintf(reason, 256, "andi -65536");
				*source_low = NULL;
				*source_high = op0;// first operand of and
				return true;
			} else if (GET_CODE(op1) == REG) {
				// the constant is too big and often in a register...
				// can't really check for FFFF0000 as it could be FFFFFFFFFFFF0000 ...
				rtx_insn **def = rdm->get(REGNO(op1));
				if ((def != NULL) && (*def != NULL)) {
					rtx cst = PATTERN(*def);
					rtx cst1 = XEXP(cst, 1);
					if (CONST_INT_P(cst1) && (INTVAL(cst1) == -65536)) {
						snprintf(reason, 256, "andi -65536 (reg)");
						*source_low = NULL;
						*source_high = op0;// first operand of and
						return true;
					}
				}
			}
		}
	}
	/* shift 16 from 0xFFFF */
	if (GET_CODE(op) == ASHIFT) {
		rtx op0 = XEXP(op, 0);
		rtx op1 = XEXP(op, 1);
		if (CONST_INT_P(op1) && (INTVAL(op1) == 16)) {
			bool recurse = false;
			if (GET_CODE(op0) == REG) {
				rtx_insn **def = rdm->get(REGNO(op0));
				if ((def != NULL) && (*def != NULL)) {
					recurse = output_is_at_most_0xFFFF_bits(*def, reason, rbm, rdm, rslm, rshm, source_low, source_high);
				}
			} else {
				recurse = output_is_at_most_0xFFFF_bits(op0, NULL, reason, rbm, rdm, rslm, rshm, source_low, source_high);
			}
			if (recurse) {
				char bak[256];
				snprintf(bak, 256, "%s", reason);
				snprintf(reason, 256, "shift (o16b: %s) 16", bak);
				// *source_low has been set by the recursive call
				*source_high = NULL;
				return true;
			}
			if (GET_MODE(op) == SImode) {
				snprintf(reason, 256, "shiftSI 16");
				*source_low = op0;
				*source_high = out;
				return true;
			}
		}
	}
	return false;
}

bool
pass_gen_pack::analyze (rtx_insn * const insn, regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm)
{
	regno_bits_map *m = hash_map<regno_hash, reg_bits_prop>::create_ggc (10);
	rtx source_low = NULL;
	rtx source_high = NULL;
	bool found;
	
	char reason[256];
	if (!NONJUMP_INSN_P (insn))
		return true;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return true;

	HOST_WIDE_INT regno = REGNO(XEXP(pat, 0));
	
	reason[0] = '\0';
	found = output_is_at_most_0xFF_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFF -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFF);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
	
	reason[0] = '\0';
	found = output_is_at_most_0xFF00_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFF00 -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFF00);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
		  
	reason[0] = '\0';
	found = output_is_at_most_0xFF0000_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFF0000 -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFF0000);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
		  
	reason[0] = '\0';
	found = output_is_at_most_0xFF000000_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFF000000 -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFF000000);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
		  
	reason[0] = '\0';
	found = output_is_at_most_0xFFFF_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFFFF -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFFFF);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
		  
	reason[0] = '\0';
	found = output_is_at_most_0xFFFF0000_bits(insn, reason, rbm, rdm, rslm, rshm, &source_low, &source_high);
	if (found) {
		//printf("%s:%d : %d, 0xFFFF0000 -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
		rbm->put(regno, REG_0XFFFF0000);
		rdm->put(regno, insn);
		rslm->put(regno, source_low);
		rshm->put(regno, source_high);
		return true;
	}
	
	//printf("%s:%d : %d, (something) -> %s (for %d, '%s')\n", __PRETTY_FUNCTION__, __LINE__, GET_CODE(pat), found ? "yes" : "no", regno, reason);
	rbm->put(regno, REG_UNKNOWN);
	rdm->put(regno, insn);
	rslm->put(regno, NULL);
	rshm->put(regno, NULL);
	
	return true;
}

bool
pass_gen_pack::check_2operands(rtx_insn * const insn, reg_bits_prop s1bits, reg_bits_prop s2bits, reg_bits_low_high low_high_1, reg_bits_low_high low_high_2, regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx *source1, rtx *source2) {
	bit_checker_fn s1check = lookup_bit_checker(s1bits);
	bit_checker_fn s2check = lookup_bit_checker(s2bits);
	if ((s1check == NULL) || (s2check == NULL))
		return false;
	char reason[256];
	rtx pat = PATTERN(insn);
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	rtx op0 = XEXP(op, 0);
	rtx op1 = XEXP(op, 1);
	rtx opL = NULL;
	rtx opH = NULL;
	rtx true_opL = NULL;
	rtx true_opH = NULL;
	reg_bits_prop* b = NULL;
	rtx source_low = NULL;
	rtx source_high = NULL;

	reason[0] = '\0';
	if ((this->*s1check)(op0, out, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
		opL = op0;
		true_opL = (low_high_1 == reg_bits_low ? source_low : source_high);
	}
	if ((this->*s2check)(op0, out, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
		opH = op0;
		true_opH = (low_high_2 == reg_bits_low ? source_low : source_high);
	}

	reason[0] = '\0';
	if ((this->*s1check)(op1, out, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
		opL = op1;
		true_opL = (low_high_1 == reg_bits_low ? source_low : source_high);
	}
	if ((this->*s2check)(op1, out, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
		opH = op1;
		true_opH = (low_high_2 == reg_bits_low ? source_low : source_high);
	}

	if ((opL == NULL) || (opH == NULL))
		return false;

	if (opL == opH) {
		gcc_unreachable();
	}

	if ((GET_CODE(opL) != REG) || (GET_CODE(opL) != REG)) {
		printf("%s:%d : %d FOUND ONE (%d, %d)\n", __PRETTY_FUNCTION__, __LINE__, REGNO(XEXP(pat, 0)), GET_CODE(opL), GET_CODE(opH));
		/* TODO */
		return false;
	}

	if (true_opL == NULL) {
		return false;
	}
	if (true_opH == NULL) {
		return false;
	}

	*source1 = true_opL;
	*source2 = true_opH;

	return true;
}
bool
pass_gen_pack::generate_packh (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* insn) {
	if (!NONJUMP_INSN_P (insn))
		return false;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return false;
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if ((GET_CODE (op) != IOR) && (GET_CODE (op) != XOR))
		return false;
	rtx true_opL = NULL;
	rtx true_opH = NULL;

	if (!check_2operands(insn, REG_0XFF, REG_0XFF00, reg_bits_low, reg_bits_low, rbm, rdm, rslm, rshm, &true_opL, &true_opH))
		return false;

	start_sequence();
	rtx rem = gen_riscv_bitmanip_packhsi(out, true_opL, true_opH);
	rtx_insn* pack = emit_insn_before(rem, insn);
	remove_insn(insn);
	rtx_insn* p = get_insns();
	end_sequence();
	
	df_insn_rescan_all();

	return true;
}
bool
pass_gen_pack::generate_packhu (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* insn) {
	if (!NONJUMP_INSN_P (insn))
		return false;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return false;
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if ((GET_CODE (op) != IOR) && (GET_CODE (op) != XOR))
		return false;
	rtx true_opL = NULL;
	rtx true_opH = NULL;

	if (!check_2operands(insn, REG_0XFF0000, REG_0XFF000000, reg_bits_low, reg_bits_low, rbm, rdm, rslm, rshm, &true_opL, &true_opH))
		return false;

	start_sequence();
	rtx temp =  gen_reg_rtx(GET_MODE (out));
	rtx rem = gen_riscv_bitmanip_packhsi(temp, true_opL, true_opH);
	rtx rem2 = gen_ashlsi3(out, temp, GEN_INT(16));
	rtx_insn* pack = emit_insn_before(rem, insn);
	rtx_insn* shift = emit_insn_before(rem2, insn);
	remove_insn(insn);
	rtx_insn* p = get_insns();
	end_sequence();
	
	df_insn_rescan_all();

	return true;
}bool
pass_gen_pack::generate_packhm (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* insn) {
	if (!NONJUMP_INSN_P (insn))
		return false;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return false;
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if ((GET_CODE (op) != IOR) && (GET_CODE (op) != XOR))
		return false;
	rtx true_opL = NULL;
	rtx true_opH = NULL;

	if (!check_2operands(insn, REG_0XFF00, REG_0XFF0000, reg_bits_low, reg_bits_low, rbm, rdm, rslm, rshm, &true_opL, &true_opH))
		return false;

	start_sequence();
	rtx temp =  gen_reg_rtx(GET_MODE (out));
	rtx rem = gen_riscv_bitmanip_packhsi(temp, true_opL, true_opH);
	rtx rem2 = gen_ashlsi3(out, temp, GEN_INT(8));
	rtx_insn* pack = emit_insn_before(rem, insn);
	rtx_insn* shift = emit_insn_before(rem2, insn);
	remove_insn(insn);
	rtx_insn* p = get_insns();
	end_sequence();
	
	df_insn_rescan_all();

	return true;
}

bool
pass_gen_pack::generate_pack (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* insn) {
	if (!NONJUMP_INSN_P (insn))
		return false;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return false;
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if ((GET_CODE (op) != IOR) && (GET_CODE (op) != XOR))
		return false;
	rtx true_opL = NULL;
	rtx true_opH = NULL;

	if (!check_2operands(insn, REG_0XFFFF, REG_0XFFFF0000, reg_bits_low, reg_bits_low, rbm, rdm, rslm, rshm, &true_opL, &true_opH))
		return false;

	start_sequence();
	rtx rem = gen_riscv_bitmanip_packsi(out, true_opL, true_opH);
	rtx_insn* pack = emit_insn_before(rem, insn);
	remove_insn(insn);
	rtx_insn* p = get_insns();
	end_sequence();
		
	df_insn_rescan_all();

	return true;
}

bool
pass_gen_pack::generate_packu (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* insn) {
	if (!NONJUMP_INSN_P (insn))
		return false;
	rtx pat = PATTERN(insn);
	if (GET_CODE (pat) != SET)
		return false;
	rtx out = XEXP(pat, 0);
	rtx op = XEXP(pat, 1);
	if ((GET_CODE (op) != IOR) && (GET_CODE (op) != XOR))
		return false;
	rtx true_opL = NULL;
	rtx true_opH = NULL;

	if (!check_2operands(insn, REG_0XFFFF, REG_0XFFFF0000, reg_bits_high, reg_bits_high, rbm, rdm, rslm, rshm, &true_opL, &true_opH))
		return false;

	start_sequence();
	rtx rem = gen_riscv_bitmanip_packusi(out, true_opL, true_opH);
	rtx_insn* pack = emit_insn_before(rem, insn);
	remove_insn(insn);
	rtx_insn* p = get_insns();
	end_sequence();
	
	df_insn_rescan_all();

	return true;
}


bool
pass_gen_pack::check_or (regno_bits_map *rbm, regno_def_map *rdm, regno_source_map *rslm, regno_source_map *rshm, rtx_insn* first_or) {
	rtx first_or_pat, first_or_out, first_or_op, first_or_opchain;
	rtx_insn** second_or_ptr;
	rtx_insn* second_or;
	rtx second_or_pat, second_or_out, second_or_op, second_or_opchain;
	rtx_insn** third_or_ptr;
	rtx_insn* third_or;
	rtx third_or_pat, third_or_out, third_or_op, third_or_op0, third_or_op1;
	int first_or_chain = -1, second_or_chain = -1;
	bool second_found = false, third_found = false;

	if (!NONJUMP_INSN_P (first_or))
		return false;
	first_or_pat = PATTERN(first_or);
	if (GET_CODE (first_or_pat) != SET)
		return false;
	first_or_out = XEXP(first_or_pat, 0);
	first_or_op = XEXP(first_or_pat, 1);
	if ((GET_CODE (first_or_op) != IOR) && (GET_CODE (first_or_op) != XOR))
		return false;

	for (int i = 0; !second_found && i < 2 ; i++) {
		first_or_opchain = XEXP(first_or_op, i);
		if (GET_CODE(first_or_opchain) != REG)
			continue;
		second_or_ptr = rdm->get(REGNO(first_or_opchain));
		second_or = (second_or_ptr == NULL ? NULL : *second_or_ptr);
		if (second_or == NULL)
			continue;
		second_or_pat = PATTERN(second_or);
		if (GET_CODE (second_or_pat) != SET)
			continue;
		second_or_out = XEXP(second_or_pat, 0);
		second_or_op = XEXP(second_or_pat, 1);
		if ((GET_CODE (second_or_op) != IOR) && (GET_CODE (second_or_op) != XOR))
			continue;
		second_found = true;
		first_or_chain = i;
		break;
	}
	if (!second_found)
		return false;

	for (int i = 0; !third_found && i < 2 ; i++) {
		second_or_opchain = XEXP(second_or_op, i);
		if (GET_CODE(second_or_opchain) != REG)
			continue;
		third_or_ptr = rdm->get(REGNO(second_or_opchain));
		third_or = (third_or_ptr == NULL ? NULL : *third_or_ptr);
		if (third_or == NULL)
			continue;
		third_or_pat = PATTERN(third_or);
		if (GET_CODE (third_or_pat) != SET)
			continue;
		third_or_out = XEXP(third_or_pat, 0);
		third_or_op = XEXP(third_or_pat, 1);
		if ((GET_CODE (third_or_op) != IOR) && (GET_CODE (third_or_op) != XOR))
			continue;
		third_found = true;
		second_or_chain = i;
		break;
	}
	if (!third_found)
		return false;

	third_or_op0 = XEXP(third_or_op, 0);
	if (GET_CODE(third_or_op0) != REG)
		return false;
	third_or_op1 = XEXP(third_or_op, 1);
	if (GET_CODE(third_or_op1) != REG)
		return false;

	// make sure no-one use the register we're going to remove
	// need to look in two parts to avoid matching second_or
	if (reg_used_between_p(third_or_out, third_or, second_or)) { // we were looking backward
		return false;
	}
	if (reg_used_between_p(third_or_out, second_or, first_or)) { // we were looking backward
		return false;
	}
	if (reg_used_between_p(second_or_out, second_or, first_or)) { // we were looking backward
		return false;
	}

	rtx operands[4];
	rtx operands_sorted[4] = { NULL, NULL, NULL, NULL };
	rtx def_sorted[4] = { NULL, NULL, NULL, NULL };
	operands[0] = XEXP(first_or_op, (1 - first_or_chain));
	operands[1] = XEXP(second_or_op, (1 - second_or_chain));
	operands[2] = third_or_op1;
	operands[3] = third_or_op0;
	// make sure no-one is rewriting the registers
	if (reg_set_between_p(operands[3], third_or, first_or)) {
		return false;
	}
	if (reg_set_between_p(operands[2], third_or, first_or)) {
		return false;
	}
	if (reg_set_between_p(operands[1], second_or, first_or)) {
		return false;
	}
	// check the byte patterns and sort them
	for (int i = 0 ; i < 4 ; i++) {
		rtx source_low = NULL, source_high = NULL;
		char reason[256];
		if (GET_CODE(operands[i]) != REG)
			return false;
		rtx_insn** def_ptr = rdm->get(REGNO(operands[i]));
		rtx_insn* def = (def_ptr == NULL ? NULL : *def_ptr);
		if (def == NULL)
			return false;
		if (output_is_at_most_0xFF_bits(def, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
			operands_sorted[0] = operands[i];
			def_sorted[0] = def;
		}
		if (output_is_at_most_0xFF00_bits(def, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
			operands_sorted[1] = operands[i];
			def_sorted[1] = def;
		}
		if (output_is_at_most_0xFF0000_bits(def, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
			operands_sorted[2] = operands[i];
			def_sorted[2] = def;
		}
		if (output_is_at_most_0xFF000000_bits(def, reason, rbm, rdm, rslm, rshm, &source_low, &source_high)) {
			operands_sorted[3] = operands[i];
			def_sorted[3] = def;
		}
	}
	// check we've found all of them, along with some sanity checks
	for (int i = 0 ; i < 4 ; i++) {
		if (operands_sorted[i] == NULL) {
			return false;
		}
		rtx pat = PATTERN(def_sorted[i]);
		if (GET_CODE(pat) != SET) {
			gcc_unreachable();
			return false;
		}
		if (XEXP(pat, 0) != operands_sorted[i]) {
			printf("%s:%d %d is not %d\n", __PRETTY_FUNCTION__, __LINE__, REGNO(operands_sorted[i]), REGNO(XEXP(pat, 0)));
			gcc_unreachable();
			return false;
		}
	}

	// rewrite into a sorted tree
	start_sequence();
	rtx temp1 =  gen_reg_rtx(GET_MODE (first_or_out));
	rtx temp2 =  gen_reg_rtx(GET_MODE (first_or_out));
	
	rtx newor1op = gen_iorsi3(temp1, operands_sorted[0], operands_sorted[1]);
	rtx newor2op = gen_iorsi3(temp2, operands_sorted[2], operands_sorted[3]);
	rtx newor3op = gen_iorsi3(first_or_out, temp1, temp2);

	rtx_insn* newor3 = emit_insn_after(newor3op, first_or);
	rtx_insn* newor2 = emit_insn_after(newor2op, first_or);
	rtx_insn* newor1 = emit_insn_after(newor1op, first_or);

	remove_insn(first_or);
	remove_insn(second_or);
	remove_insn(third_or);
	rtx_insn* p = get_insns();
	end_sequence();
	
	df_insn_rescan_all();
	
	return true;
}

unsigned int
pass_gen_pack::execute (function *fn)
{
  basic_block bb;
  rtx_insn *insn;

  if (!TARGET_ZBB)
	  return 0;

  unsigned int c_treeor = 0;
  unsigned int c_packh = 0;
  unsigned int c_packhm = 0;
  unsigned int c_packhu = 0;
  unsigned int c_pack = 0;
  unsigned int c_packu = 0;

  FOR_ALL_BB_FN (bb, fn)
  {
	  regno_bits_map* rbm = hash_map<regno_hash, reg_bits_prop>::create_ggc (10);
	  regno_def_map* rdm = hash_map<regno_hash, rtx_insn *>::create_ggc (10);
	  regno_source_map* rshm = hash_map<regno_hash, rtx>::create_ggc (10);
	  regno_source_map* rslm = hash_map<regno_hash, rtx>::create_ggc (10);
	  start_or:
	  {
		  rbm->empty();
		  rdm->empty();
		  rshm->empty();
		  rslm->empty();
	  FOR_BB_INSNS (bb, insn)
		  {
			  if (analyze (insn, rbm, rdm, rslm, rshm)) {
				  if (check_or(rbm, rdm, rslm, rshm, insn)) {
					  c_treeor ++;
					  goto start_or;
				  }
			  }
		  }
	  }
      start_pack:
	  {
		  rbm->empty();
		  rdm->empty();
		  rshm->empty();
		  rslm->empty();
	  FOR_BB_INSNS (bb, insn)
		  {
			  if (analyze (insn, rbm, rdm, rslm, rshm)) {
				  if (generate_packh(rbm, rdm, rslm, rshm, insn)) {
					  c_packh ++;
					  goto start_pack;
				  }
				  if (generate_packhu(rbm, rdm, rslm, rshm, insn)) {
					  c_packhu ++;
					  goto start_pack;
				  }
				  if (generate_packhm(rbm, rdm, rslm, rshm, insn)) {
					  c_packhm ++;
					  goto start_pack;
				  }
				  if (generate_pack(rbm, rdm, rslm, rshm, insn)) {
				  	  c_pack ++;
				  	  goto start_pack;
				  }
				  if (generate_packu(rbm, rdm, rslm, rshm, insn)) {
				  	  c_packu ++;
				  	  goto start_pack;
				  }
			  }
		  }
	  }
  }
  if ((c_packh | c_packhm | c_packhu | c_pack | c_packu | c_treeor) == 0) {
	  printf("%s:%d: generated no pack* for '%s'\n", __PRETTY_FUNCTION__, __LINE__, function_name(fn));
  } else {
	  df_note_add_problem ();
	  df_analyze ();
  }
  if (c_treeor)
	  printf("%s:%d: tree-ed %u 'triple-or' for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_treeor, function_name(fn));
  if (c_packh)
	  printf("%s:%d: generated %u packh for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_packh, function_name(fn));
  if (c_packhm)
	  printf("%s:%d: generated %u packhm for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_packhm, function_name(fn));
  if (c_packhu)
	  printf("%s:%d: generated %u packhu for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_packhu, function_name(fn));
  if (c_pack)
	  printf("%s:%d: generated %u pack for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_pack, function_name(fn));
  if (c_packu)
	  printf("%s:%d: generated %u packu for '%s'\n", __PRETTY_FUNCTION__, __LINE__, c_packu, function_name(fn));
  
  return 0;
}

} // anon namespace

rtl_opt_pass *
make_pass_gen_pack (gcc::context *ctxt)
{
  return new pass_gen_pack (ctxt);
}
