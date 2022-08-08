/* Explicit coalesce in IRA.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "target.h"
#include "rtl.h"
#include "tree.h"
#include "df.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "regs.h"
#include "ira.h"
#include "ira-int.h"
#include "diagnostic-core.h"
#include "cfgrtl.h"
#include "cfgbuild.h"
#include "cfgcleanup.h"
#include "expr.h"
#include "tree-pass.h"
#include "output.h"
#include "reload.h"
#include "cfgloop.h"
#include "lra.h"
#include "dce.h"
#include "dbgcnt.h"
#include "rtl-iter.h"
#include "shrink-wrap.h"
#include "print-rtl.h"

/*
   This algorithm is inspired by LLVM. In RVV scenario, users are very
   likely to use copy between subreg and reg to handle vector register group.

   So we implement the register coalesce to optimize these cases.

   The following algorithm is:

   ┌───────────┐         ┌──────────┐
   |   Build   | ──────> | Coalesce |
   └───────────┘         └────┬─────┘
	  ↑   any coalesce    |
	  └───────────────────┘
*/

static auto_vec<rtx_insn *> visitedlist;

/* Return true if op is in the chain list. */
static bool
chain_p (rtx op, auto_vec<rtx> &chainlist)
{
  for (unsigned i = 0; i < chainlist.length (); i++)
    if (rtx_equal_p (op, chainlist[i]))
      return true;
  return false;
}

/* Return true if insn has the register is in the chain list. */
static bool
insn_in_chain_p (auto_vec<rtx> &chainlist)
{
  for (int i = 0; i < recog_data.n_operands; i++)
    if (chain_p (recog_data.operand[i], chainlist))
      return true;
  return false;
}

/* Return true if all regno-related instructions are legitimate. */
static bool
legitimate_subreg_to_reg_copy_p (rtx_insn *copy, auto_vec<rtx> &chainlist)
{
  rtx src = SET_SRC (single_set (copy));
  rtx dest = SET_DEST (single_set (copy));
  if (HARD_REGISTER_NUM_P (REGNO (dest)))
    return false;
  if (HARD_REGISTER_NUM_P (REGNO (SUBREG_REG (src))))
    return false;
  if (REG_ATTRS (dest) == NULL)
    return false;
  if (REG_ATTRS (SUBREG_REG (src)) == NULL)
    return false;
  if (bitmap_bit_p (DF_LIVE_IN (BLOCK_FOR_INSN (copy)),
		    REGNO (SUBREG_REG (src))))
    return false;

  for (unsigned i = 0; i < visitedlist.length (); i++)
    if (visitedlist[i] == copy)
      return false;

  auto_vec<unsigned int> checklist;
  checklist.safe_push (REGNO (dest));
  checklist.safe_push (REGNO (SUBREG_REG (src)));
  chainlist.safe_push (dest);
  basic_block bb;
  rtx_insn *insn;
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      {
	if (!PATTERN (insn))
	  continue;
	if (!INSN_P (insn))
	  continue;
	extract_insn (insn);
	for (int i = 0; i < recog_data.n_operands; i++)
	  {
	    if (REG_P (recog_data.operand[i])
		&& REG_ATTRS (recog_data.operand[i]) != NULL
		&& REG_ATTRS (recog_data.operand[i]) == REG_ATTRS (dest)
		&& insn_in_chain_p (chainlist))
	      {
		if (!single_set (insn))
		  return false;
		if (GET_MODE (recog_data.operand[i]) != GET_MODE (dest))
		  return false;
		if (HARD_REGISTER_NUM_P (REGNO (recog_data.operand[i])))
		  return false;
		for (unsigned j = 0; j < checklist.length (); j++)
		  if (REGNO (recog_data.operand[i]) != checklist[j]
		      && allocnos_conflict_by_live_ranges_p (
			ira_regno_allocno_map[REGNO (recog_data.operand[i])],
			ira_regno_allocno_map[checklist[j]]))
		    return false;
		chainlist.safe_push (recog_data.operand[i]);
		checklist.safe_push (REGNO (recog_data.operand[i]));
	      }
	    if (SUBREG_P (recog_data.operand[i])
		&& REG_P (SUBREG_REG (recog_data.operand[i]))
		&& REG_ATTRS (SUBREG_REG (recog_data.operand[i])) != NULL
		&& REG_ATTRS (SUBREG_REG (recog_data.operand[i]))
		     == REG_ATTRS (dest))
	      return false;
	  }
      }
  return true;
}

/* Return true if all regno-related instructions are legitimate. */
static bool
legitimate_reg_to_reg_copy_p (rtx_insn *copy)
{
  rtx src = SET_SRC (single_set (copy));
  rtx dest = SET_DEST (single_set (copy));
  if (bitmap_bit_p (DF_LIVE_IN (BLOCK_FOR_INSN (copy)), REGNO (src)))
    return false;
  if (HARD_REGISTER_NUM_P (REGNO (dest)) || HARD_REGISTER_NUM_P (REGNO (src)))
    return false;

  if (REG_ATTRS (src) == NULL || REG_ATTRS (dest) == NULL)
    return false;
  if (REG_ATTRS (src) != REG_ATTRS (dest))
    return false;
  if (allocnos_conflict_by_live_ranges_p (ira_regno_allocno_map[REGNO (dest)],
					  ira_regno_allocno_map[REGNO (src)]))
    return false;

  for (unsigned i = 0; i < visitedlist.length (); i++)
    if (visitedlist[i] == copy)
      return false;

  basic_block bb;
  rtx_insn *insn;
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      {
	if (!PATTERN (insn))
	  continue;
	if (!INSN_P (insn))
	  continue;
	extract_insn (insn);
	for (int i = 0; i < recog_data.n_operands; i++)
	  {
	    if (REG_P (recog_data.operand[i])
		&& rtx_equal_p (recog_data.operand[i], dest))
	      {
		if (!single_set (insn))
		  return false;
		if (SUBREG_P (recog_data.operand[i])
		    && REG_P (SUBREG_REG (recog_data.operand[i]))
		    && rtx_equal_p (SUBREG_REG (recog_data.operand[i]), dest)
		    && !paradoxical_subreg_p (GET_MODE (dest),
					      GET_MODE (SUBREG_REG (
						recog_data.operand[i]))))
		  return false;
	      }
	  }
      }
  return true;
}

/* Collect all copy-related instructions. */
static auto_vec<rtx_insn *>
collect_copys (auto_vec<rtx> &chainlist)
{
  auto_vec<rtx_insn *> worklist;
  basic_block bb;
  rtx_insn *insn;
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      if (INSN_P (insn) && single_set (insn))
	{
	  rtx src = SET_SRC (single_set (insn));
	  rtx dest = SET_DEST (single_set (insn));

	  if (VECTOR_MODE_P (GET_MODE (dest))
	      && GET_MODE (src) == GET_MODE (dest))
	    {
	      if (REG_P (dest) && SUBREG_P (src) && REG_P (SUBREG_REG (src))
		  && partial_subreg_p (GET_MODE (dest),
				       GET_MODE (SUBREG_REG (src)))
		  && REGNO (dest) != REGNO (SUBREG_REG (src))
		  && legitimate_subreg_to_reg_copy_p (insn, chainlist))
		{
		  visitedlist.safe_push (insn);
		  worklist.safe_push (insn);
		}

	      if (REG_P (dest) && REG_P (src) && REGNO (dest) != REGNO (src)
		  && legitimate_reg_to_reg_copy_p (insn))
		{
		  visitedlist.safe_push (insn);
		  worklist.safe_push (insn);
		}
	    }
	}
  return worklist;
}

static void
coalesce_subreg (rtx_insn *copy, auto_vec<rtx> &chainlist)
{
  basic_block bb;
  rtx_insn *insn;
  rtx src = SET_SRC (single_set (copy));
  rtx dest = SET_DEST (single_set (copy));
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      if (INSN_P (insn) && PATTERN (insn))
	{
	  if (insn == copy)
	    continue;
	  extract_insn (insn);
	  if (dump_file)
	    {
	      fprintf (dump_file, "Coalesced insn:\n\n");
	      print_rtl_single (dump_file, insn);
	    }
	  for (int i = 0; i < recog_data.n_operands; i++)
	    {
	      if (REG_P (recog_data.operand[i])
		  && REG_ATTRS (recog_data.operand[i]) != NULL
		  && REG_ATTRS (recog_data.operand[i]) == REG_ATTRS (dest)
		  && chain_p (recog_data.operand[i], chainlist))
		{
		  if (reg_equiv_init (REGNO (recog_data.operand[i]))
		      && reg_equiv_init (REGNO (recog_data.operand[i]))->insn ()
			   == insn)
		    reg_equiv_init (REGNO (recog_data.operand[i])) = NULL;
		  if (dump_file)
		    {
		      fprintf (dump_file, "Change insn:\n");
		      print_rtl_single (dump_file, insn);
		      fprintf (dump_file, "to:\n");
		    }
		  PATTERN (insn)
		    = replace_rtx (copy_rtx (PATTERN (insn)),
				   recog_data.operand[i], src, true);
		  df_insn_rescan (insn);
		  if (dump_file)
		    print_rtl_single (dump_file, PATTERN (insn));
		  validate_change (insn, &PATTERN (insn), PATTERN (insn),
				   false);
		  remove_note (insn,
			       find_regno_note (insn, REG_DEAD,
						REGNO (SUBREG_REG (src))));
		}
	    }
	}
}

static void
coalesce_reg (rtx_insn *copy)
{
  basic_block bb;
  rtx_insn *insn;
  rtx src = SET_SRC (single_set (copy));
  rtx dest = SET_DEST (single_set (copy));
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      if (INSN_P (insn) && PATTERN (insn))
	{
	  if (insn == copy)
	    continue;
	  extract_insn (insn);
	  for (int i = 0; i < recog_data.n_operands; i++)
	    {
	      if (REG_P (recog_data.operand[i])
		  && rtx_equal_p (recog_data.operand[i], dest))
		{
		  if (reg_equiv_init (REGNO (recog_data.operand[i]))
		      && reg_equiv_init (REGNO (recog_data.operand[i]))->insn ()
			   == insn)
		    reg_equiv_init (REGNO (recog_data.operand[i])) = NULL;
		  rtx pat = simplify_replace_rtx (PATTERN (insn),
						  recog_data.operand[i], src);
		  if (dump_file)
		    {
		      fprintf (dump_file, "Change insn:\n");
		      print_rtl_single (dump_file, insn);
		      fprintf (dump_file, "to:\n");
		      print_rtl_single (dump_file, pat);
		    }
		  validate_change (insn, &PATTERN (insn), pat, false);
		  remove_note (insn,
			       find_regno_note (insn, REG_DEAD, REGNO (src)));
		}
	      if (SUBREG_P (recog_data.operand[i])
		  && REG_P (SUBREG_REG (recog_data.operand[i]))
		  && rtx_equal_p (SUBREG_REG (recog_data.operand[i]), dest))
		{
		  if (reg_equiv_init (
			REGNO (SUBREG_REG (recog_data.operand[i])))
		      && reg_equiv_init (
			   REGNO (SUBREG_REG (recog_data.operand[i])))
			     ->insn ()
			   == insn)
		    reg_equiv_init (REGNO (SUBREG_REG (recog_data.operand[i])))
		      = NULL;
		  rtx pat = simplify_replace_rtx (
		    PATTERN (insn), recog_data.operand[i],
		    simplify_gen_subreg (GET_MODE (recog_data.operand[i]), src,
					 GET_MODE (
					   SUBREG_REG (recog_data.operand[i])),
					 SUBREG_BYTE (recog_data.operand[i])));
		  if (dump_file)
		    {
		      fprintf (dump_file, "Change insn:\n");
		      print_rtl_single (dump_file, insn);
		      fprintf (dump_file, "to:\n");
		      print_rtl_single (dump_file, pat);
		    }
		  validate_change (insn, &PATTERN (insn), pat, false);
		  remove_note (insn,
			       find_regno_note (insn, REG_DEAD, REGNO (src)));
		}
	    }
	}
}

/* Do the aggressive register coalesce. */
static bool
aggressive_register_coalesce (void)
{
  auto_vec<rtx> chainlist;
  auto_vec<rtx_insn *> worklist = collect_copys (chainlist);
  if (worklist.is_empty ())
    return false;

  if (dump_file)
    fprintf (dump_file, "Entering register coalescing:\n\n");

  for (unsigned i = 0; i < worklist.length (); i++)
    {
      if (dump_file)
	{
	  fprintf (dump_file, "Coalescing insn:\n\n");
	  print_rtl_single (dump_file, worklist[i]);
	}
      if (REG_P (SET_DEST (single_set (worklist[i])))
	  && SUBREG_P (SET_SRC (single_set (worklist[i]))))
	coalesce_subreg (worklist[i], chainlist);
      if (REG_P (SET_DEST (single_set (worklist[i])))
	  && REG_P (SET_SRC (single_set (worklist[i]))))
	coalesce_reg (worklist[i]);
    }

  if (delete_trivially_dead_insns (get_insns (), max_reg_num ()))
    {
      df_insn_rescan_all ();
      df_analyze ();
    }
  return true;
}

/* Return true if all subregno-related instructions are legitimate. */
static bool
legitimate_subreg_to_subreg_copy_p (rtx_insn *copy)
{
  rtx_insn *insn;
  rtx_insn *last_insn = NULL;
  rtx src = SUBREG_REG (SET_SRC (single_set (copy)));
  rtx dest = SUBREG_REG (SET_DEST (single_set (copy)));
  auto_vec<poly_uint64> worklist;
  worklist.safe_push (SUBREG_BYTE (SET_SRC (single_set (copy))));
  for (insn = NEXT_INSN (copy);
       insn != NEXT_INSN (BB_END (BLOCK_FOR_INSN (copy)));
       insn = NEXT_INSN (insn))
    {
      if (INSN_P (insn) && single_set (insn)
	  && SUBREG_P (SET_SRC (single_set (insn)))
	  && SUBREG_P (SET_DEST (single_set (insn)))
	  && REG_P (SUBREG_REG (SET_SRC (single_set (insn))))
	  && REG_P (SUBREG_REG (SET_DEST (single_set (insn)))))
	{
	  if (rtx_equal_p (SUBREG_REG (SET_SRC (single_set (insn))), src)
	      && rtx_equal_p (SUBREG_REG (SET_DEST (single_set (insn))), dest)
	      && known_eq (SUBREG_BYTE (SET_SRC (single_set (insn))),
			   SUBREG_BYTE (SET_DEST (single_set (insn)))))
	    worklist.safe_push (SUBREG_BYTE (SET_SRC (single_set (insn))));
	  else if (rtx_equal_p (SUBREG_REG (SET_SRC (single_set (insn))), src)
		   || rtx_equal_p (SET_DEST (single_set (insn)), dest)
		   || rtx_equal_p (SUBREG_REG (SET_SRC (single_set (insn))),
				   dest)
		   || rtx_equal_p (SET_DEST (single_set (insn)), src))
	    return false;
	  else
	    continue;
	}
      else
	{
	  if (INSN_P (insn))
	    {
	      extract_insn (insn);
	      for (int i = 0; i < recog_data.n_operands; i++)
		{
		  if (REG_P (recog_data.operand[i]))
		    {
		      if (rtx_equal_p (recog_data.operand[i], src)
			  || rtx_equal_p (recog_data.operand[i], dest))
			{
			  if (!single_set (insn))
			    return false;
			  if (i == 0)
			    return false;
			}
		    }

		  if (SUBREG_P (recog_data.operand[i]))
		    {
		      if (rtx_equal_p (SUBREG_REG (recog_data.operand[i]), src)
			  || rtx_equal_p (SUBREG_REG (recog_data.operand[i]),
					  dest))
			{
			  if (!single_set (insn))
			    return false;
			  if (i == 0)
			    return false;
			}
		    }
		}
	    }
	  else
	    continue;
	}
      if (find_regno_note (insn, REG_DEAD, REGNO (src)))
	{
	  if (worklist.length ()
	      == exact_div (GET_MODE_SIZE (GET_MODE (src)),
			    GET_MODE_SIZE (
			      GET_MODE (SET_SRC (single_set (copy)))))
		   .to_constant ())
	    {
	      last_insn = insn;
	      break;
	    }
	  rtx_insn *prev_insn;
	  for (prev_insn = PREV_INSN (insn);
	       prev_insn != PREV_INSN (BB_HEAD (BLOCK_FOR_INSN (insn)));
	       prev_insn = PREV_INSN (prev_insn))
	    {
	      if (PATTERN (prev_insn) && GET_CODE ((prev_insn)) == CLOBBER
		  && rtx_equal_p (XEXP (PATTERN (prev_insn), 0), dest))
		{
		  last_insn = insn;
		  break;
		}
	      if (INSN_P (prev_insn) && single_set (prev_insn)
		  && rtx_equal_p (SET_DEST (single_set (prev_insn)), dest)
		  && rtx_equal_p (SET_SRC (single_set (prev_insn)), const0_rtx))
		{
		  last_insn = insn;
		  break;
		}
	    }
	  if (last_insn)
	    break;
	}
    }

  if (last_insn)
    {
      auto_vec<bool> offset_p;
      for (unsigned i = 0; i < worklist.length (); i++)
	offset_p.safe_push (false);
      for (unsigned i = 0; i < worklist.length (); i++)
	offset_p[exact_div (worklist[i], GET_MODE_SIZE (GET_MODE (
					   SET_DEST (single_set (copy)))))
		   .to_constant ()]
	  = true;
      for (unsigned i = 0; i < worklist.length (); i++)
	if (!offset_p[i])
	  return false;

      rtx_insn *next_insn;
      for (next_insn = NEXT_INSN (last_insn);
	   next_insn != NEXT_INSN (BB_END (BLOCK_FOR_INSN (last_insn)));
	   next_insn = NEXT_INSN (next_insn))
	{
	  if (INSN_P (next_insn) && single_set (next_insn))
	    {
	      extract_insn (next_insn);
	      for (int i = 0; i < recog_data.n_operands; i++)
		{
		  if (REG_P (SET_DEST (single_set (next_insn))) && i == 0)
		    continue;

		  if (REG_P (recog_data.operand[i])
		      && rtx_equal_p (recog_data.operand[i], dest))
		    {
		      rtx pat
			= simplify_replace_rtx (PATTERN (next_insn),
						recog_data.operand[i], src);
		      validate_change (next_insn, &PATTERN (next_insn), pat,
				       false);
		      remove_note (next_insn,
				   find_regno_note (next_insn, REG_DEAD,
						    REGNO (src)));
		    }
		}
	    }
	}
      return true;
    }
  return false;
}

/* Cleanup subreg to subreg. */
static void
cleanup_subreg_to_subreg (void)
{
  basic_block bb;
  rtx_insn *insn;
  FOR_EACH_BB_FN (bb, cfun)
    FOR_BB_INSNS (bb, insn)
      if (INSN_P (insn) && single_set (insn))
	{
	  rtx src = SET_SRC (single_set (insn));
	  rtx dest = SET_DEST (single_set (insn));
	  if (SUBREG_P (src) && SUBREG_P (dest) && REG_P (SUBREG_REG (src))
	      && REG_P (SUBREG_REG (dest)) && GET_MODE (dest) == GET_MODE (src)
	      && GET_MODE (SUBREG_REG (dest)) == GET_MODE (SUBREG_REG (src)))
	    {
	      bool visited_p = false;
	      for (unsigned i = 0; i < visitedlist.length (); i++)
		if (rtx_equal_p (SUBREG_REG (SET_SRC (single_set (insn))),
				 SUBREG_REG (
				   SET_SRC (single_set (visitedlist[i]))))
		    && rtx_equal_p (SUBREG_REG (SET_DEST (single_set (insn))),
				    SUBREG_REG (
				      SET_DEST (single_set (visitedlist[i])))))
		  {
		    visited_p = true;
		    break;
		  }
	      if (visited_p)
		continue;
	      visitedlist.safe_push (insn);
	      if (legitimate_subreg_to_subreg_copy_p (insn))
		{
		  if (delete_trivially_dead_insns (get_insns (),
						   max_reg_num ()))
		    df_analyze ();
		}
	    }
	}
}

/* Do the explicit coalesce in IRA.  */
void
ira_explicit_coalesce (void)
{
  if (optimize <= 2)
    return;
  bool coalesce_p = true;
  while (coalesce_p)
    {
      df_live_add_problem ();
      df_live_set_all_dirty ();
      ira_build (true);
      coalesce_p = aggressive_register_coalesce ();
      ira_destroy ();
    }
  visitedlist.release ();
  cleanup_subreg_to_subreg ();
  visitedlist.release ();
}