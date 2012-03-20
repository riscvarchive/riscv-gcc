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
#include <vec.h>
#include <hashtab.h>

#include "gpython.h"
#include "py-dot.h"
#include "py-vec.h"
#include "py-tree.h"
#include "py-builtins.h"

static VEC(tree,gc) * gpy_stmt_pass_lower_genericify (gpy_hash_tab_t *, VEC(gpydot,gc) *);
static tree gpy_stmt_pass_lower_toplevl_functor_decl (gpy_dot_tree_t *);
static VEC(tree,gc) * gpy_stmt_pass_lower_toplevl_class_decl (gpy_dot_tree_t *);
static tree gpy_stmt_pass_lower_class_method_attrib (gpy_dot_tree_t *, const char *);

char * gpy_stmt_pass_lower_gen_concat (const char * s1,
				       const char * s2)
{
  size_t s1len = strlen (s1);
  size_t s2len = strlen (s2);
  size_t tlen = s1len + s2len;
  
  char buffer[tlen+3]; 
  char * p;
  for (p = buffer; *s1 != '\0'; ++s1)
    {
      *p = *s1;
      ++p;
    }
  *p = '.';
  p++;
  for (; *s2 != '\0'; ++s2)
    {
      *p = *s2;
      ++p;
    }
  *p = '\0';

  return xstrdup (buffer);
}

static
tree gpy_stmt_pass_lower_toplevl_functor_decl (gpy_dot_tree_t * decl)
{
  tree fntype = build_function_type_list (void_type_node,
					  /* Arguments .. */
					  NULL_TREE);
  tree ident = GPY_stmt_pass_lower_gen_concat_identifier (GPY_current_module_name,
							  DOT_IDENTIFIER_POINTER (DOT_FIELD (decl))
							  );
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL, ident, fntype);
  debug ("lowering toplevel function <%s> to <%s>!\n", DOT_IDENTIFIER_POINTER (DOT_FIELD (decl)),
	 IDENTIFIER_POINTER (ident));

  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;
  TREE_USED (fndecl) = 1;
  DECL_ARTIFICIAL (fndecl) = 1;
  
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     void_type_node);
  DECL_ARTIFICIAL (resdecl) = 1;
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;

  SET_DECL_ASSEMBLER_NAME (fndecl, ident);

  tree block = alloc_stmt_list ();
  DECL_INITIAL (fndecl) = block;

  /*
    lower the function suite here and append all initilization
   */

  tree bl = make_node (BLOCK);
  BLOCK_SUPERCONTEXT (bl) = fndecl;
  DECL_INITIAL (fndecl) = bl;
  BLOCK_VARS (bl) = NULL_TREE;
  TREE_USED (bl) = 1;
  tree bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		      NULL_TREE, bl);
  TREE_SIDE_EFFECTS(bind) = 1;
  
  BIND_EXPR_BODY (bind) = block;
  block = bind;
  DECL_SAVED_TREE (fndecl) = block;

  gimplify_function_tree (fndecl);
   
  cgraph_add_new_function (fndecl, false);
  cgraph_finalize_function (fndecl, true);

  return fndecl;
}

static
tree gpy_stmt_pass_lower_class_method_attrib (gpy_dot_tree_t * decl,
					      const char * parent_ident)
{
  tree fntype = build_function_type_list (void_type_node,
					  /* Arguments .. */
					  NULL_TREE);
  tree ident = GPY_stmt_pass_lower_gen_concat_identifier (GPY_current_module_name,
							  parent_ident);
  ident = GPY_stmt_pass_lower_gen_concat_identifier (IDENTIFIER_POINTER (ident),
						     DOT_IDENTIFIER_POINTER (DOT_FIELD (decl)));

  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL, ident, fntype);
  debug ("lowering class attribute <%s> to <%s>!\n", DOT_IDENTIFIER_POINTER (DOT_FIELD (decl)),
	 IDENTIFIER_POINTER (ident));

  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;
  TREE_USED (fndecl) = 1;
  DECL_ARTIFICIAL (fndecl) = 1;
  
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     void_type_node);
  DECL_ARTIFICIAL (resdecl) = 1;
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;

  SET_DECL_ASSEMBLER_NAME (fndecl, ident);

  tree block = alloc_stmt_list ();
  DECL_INITIAL (fndecl) = block;

  /*
    lower the function suite here and append all initilization
   */

  tree bl = make_node (BLOCK);
  BLOCK_SUPERCONTEXT (bl) = fndecl;
  DECL_INITIAL (fndecl) = bl;
  BLOCK_VARS (bl) = NULL_TREE;
  TREE_USED (bl) = 1;
  tree bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		      NULL_TREE, bl);
  TREE_SIDE_EFFECTS(bind) = 1;
  
  BIND_EXPR_BODY (bind) = block;
  block = bind;
  DECL_SAVED_TREE (fndecl) = block;

  gimplify_function_tree (fndecl);
   
  cgraph_add_new_function (fndecl, false);
  cgraph_finalize_function (fndecl, true);

  return fndecl;
}

static
VEC(tree,gc) * gpy_stmt_pass_lower_toplevl_class_decl (gpy_dot_tree_t * decl)
{
  VEC(tree,gc) * lowered_decls = VEC_alloc (tree,gc,0);

  tree fntype = build_function_type_list (void_type_node,
					  /* Arguments .. */
					  NULL_TREE);
  tree ident = GPY_stmt_pass_lower_gen_concat_identifier (GPY_current_module_name,
							  DOT_IDENTIFIER_POINTER (DOT_FIELD (decl))
							  );
  ident = GPY_stmt_pass_lower_gen_concat_identifier (IDENTIFIER_POINTER (ident),
						     "__field_init__");

  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL, ident, fntype);
  debug ("lowering toplevel class <%s> to <%s>!\n", DOT_IDENTIFIER_POINTER (DOT_FIELD (decl)),
	 IDENTIFIER_POINTER (ident));

  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;
  TREE_USED (fndecl) = 1;
  DECL_ARTIFICIAL (fndecl) = 1;
  
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     void_type_node);
  DECL_ARTIFICIAL (resdecl) = 1;
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;

  SET_DECL_ASSEMBLER_NAME (fndecl, ident);

  tree block = alloc_stmt_list ();
  DECL_INITIAL (fndecl) = block;

  /*
    lower the function suite here and append all initilization
   */
  gpy_dot_tree_t * class_suite = DOT_lhs_TT (decl);
  gpy_dot_tree_t * node = class_suite;
  do {
    switch (DOT_TYPE (node))
      {
      case D_STRUCT_METHOD:
	{
	  tree class_method_attrib = gpy_stmt_pass_lower_class_method_attrib (node,
									      DOT_IDENTIFIER_POINTER (DOT_FIELD (decl))
									      );
	  VEC_safe_push (tree, gc, lowered_decls, class_method_attrib);
	}
	break;

      default:
	break;
      }
  } while ((node = DOT_CHAIN (node)));
  
  tree bl = make_node (BLOCK);
  BLOCK_SUPERCONTEXT (bl) = fndecl;
  DECL_INITIAL (fndecl) = bl;
  BLOCK_VARS (bl) = NULL_TREE;
  TREE_USED (bl) = 1;
  tree bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		      NULL_TREE, bl);
  TREE_SIDE_EFFECTS(bind) = 1;
  
  BIND_EXPR_BODY (bind) = block;
  block = bind;
  DECL_SAVED_TREE (fndecl) = block;

  gimplify_function_tree (fndecl);
   
  cgraph_add_new_function (fndecl, false);
  cgraph_finalize_function (fndecl, true);

  VEC_safe_push (tree, gc, lowered_decls, fndecl);

  return lowered_decls;
}

static
VEC(tree,gc) * gpy_stmt_pass_lower_genericify (gpy_hash_tab_t * modules,
                                               VEC(gpydot,gc) * decls)
{
  VEC(tree,gc) * lowered_decls = VEC_alloc (tree, gc, 0);

  int idx;
  gpy_dot_tree_t * idtx = NULL_DOT;
  /*
    Iterating over the DOT IL to lower/generate the GENERIC code
    required to compile the stmts and decls
  */
  for (idx = 0; VEC_iterate (gpydot, decls, idx, idtx); ++idx)
    {
      if (DOT_T_FIELD (idtx) ==  D_D_EXPR)
	continue;

      switch (DOT_TYPE (idtx))
        {
	case D_PRINT_STMT:
	  break;

        case D_STRUCT_METHOD:
          {
	    VEC_safe_push (tree, gc, lowered_decls, 
			   gpy_stmt_pass_lower_toplevl_functor_decl (idtx)
			   );
          }
          break;

	case D_STRUCT_CLASS:
	  {
	    VEC(tree,gc) * lowered_class_decls = gpy_stmt_pass_lower_toplevl_class_decl (idtx);
	    GPY_VEC_stmts_append (tree, lowered_decls, lowered_class_decls);
	  }
	  break;

        default:
          fatal_error ("unhandled dot tree code <%i>!\n", DOT_TYPE (idtx));
          break;
        }
    }

  return lowered_decls;
}

VEC(tree,gc) * gpy_stmt_pass_lower (VEC(tree,gc) *modules,
                                    VEC(gpydot,gc) *decls)
{
  VEC(tree,gc) * retval = NULL;
  gpy_hash_tab_t module_ctx;
  gpy_dd_hash_init_table (&module_ctx);

  int idx;
  tree itx = NULL_TREE;
  for (idx = 0; VEC_iterate (tree, modules, idx, itx); ++idx)
    {
      debug ("hashing module name <%s>!\n", IDENTIFIER_POINTER (TYPE_NAME(itx)));
      gpy_hashval_t h = gpy_dd_hash_string (IDENTIFIER_POINTER (TYPE_NAME(itx)));
      void ** e = gpy_dd_hash_insert (h, itx, &module_ctx);
      
      if (e)
        error ("module <%s> is already defined!\n",
	       IDENTIFIER_POINTER (DECL_NAME (itx))
	       );
    }

  debug ("genericification...!\n");
  retval = gpy_stmt_pass_lower_genericify (&module_ctx, decls);
  debug ("finishing genericification!\n");

  if (module_ctx.array)
    free (module_ctx.array);

  return retval;
}
