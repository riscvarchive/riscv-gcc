/* This file is part of GCC.

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
#include "ansidecl.h"
#include "coretypes.h"
#include "tm.h"
#include "opts.h"
#include "tree.h"
#include "tree-iterator.h"
#include "tree-pass.h"
#include "gimple.h"
#include "toplev.h"
#include "debug.h"
#include "options.h"
#include "flags.h"
#include "convert.h"
#include "diagnostic-core.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "target.h"
#include "cgraph.h"

#include <gmp.h>
#include <mpfr.h>

#include "vec.h"
#include "hashtab.h"

#include "gpython.h"
#include "py-il-dot.h"
#include "py-il-tree.h"
#include "py-vec.h"

static VEC(gpydot,gc) * gpy_decls;
typedef VEC(gpydot,gc) * (*DOT_pass__)(VEC(gpydot,gc) *);
static DOT_pass__ gpy_dot_pass_mngr[] = 
{
  &gpy_dot_pass_check1,       /* sanity checks */
  &gpy_dot_pass_const_fold,   /* Constant folding */
  &gpy_dot_pass_translate,    /* translate/fix the python code for lowering */
  &gpy_dot_pass_pretty_print, /* pretty print if -fdump-dump-dot */
  /*
    Potential to add in more passes here ... just hook the function pointer in here
    and it shall be called and you gain access to the current state of the dot AST.
   */
  NULL                         /* sentinal */
};

/* Pushes each decl from the parser onto the current translation unit */
void gpy_dot_pass_manager_process_decl (gpy_dot_tree_t * const dot)
{
  /* Push the declaration! */
  VEC_safe_push (gpydot, gc, gpy_decls, dot);
}

/**
 * Things are quite complicated from here on and will change frequently
 * We need to do a 1st pass over the code to generate our module.
 **/
void gpy_dot_pass_manager_write_globals (void)
{
  int idx = 0;
  DOT_dot_pass__ *p;
  VEC(gpydot,gc) * dot_decls = gpy_decls;
  
  for (p = gpy_dot_pass_mngr; *p != NULL; ++p)
    dot_decls = (*p)(dot_decls);

  VEC(tree,gc) * module_types = gpy_dot_pass_generate_types (dot_decls);
  VEC(tree,gc) * dot2gen_trees = gpy_dot_pass_lower (module_types, gpy_decls);
  VEC(tree,gc) * globals = dot2gen_trees;
  
  int global_vec_len = VEC_length (tree, globals);
  tree * global_vec = XNEWVEC (tree, global_vec_len);
  tree itx = NULL_TREE;
  int idy = 0;

  FILE *tu_stream = dump_begin (TDI_tu, NULL);
  for (idx = 0; VEC_iterate (tree, globals, idx, itx); ++idx)
    {
      debug_tree (itx);
      if (tu_stream)
	dump_node (itx, 0, tu_stream);

      global_vec [idy] = itx;
      idy++;
    }
  if (tu_stream)
    dump_end(TDI_tu, tu_stream);

  wrapup_global_declarations (global_vec, global_vec_len);
  cgraph_finalize_compilation_unit ();
  check_global_declarations (global_vec, global_vec_len);
  emit_debug_global_declarations (global_vec, global_vec_len);
}
