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
tree gpy_stmt_pass_lower_get_module_type (const char * s, 
                                          gpy_hash_tab_t * modules)
{
  tree retval = error_mark_node;

  gpy_hashval_t h = gpy_dd_hash_string (s);
  gpy_hash_entry_t * e = gpy_dd_hash_lookup_table (modules, h);
  if (e)
    {
      if (e->data)
        retval = (tree) e->data;
    }

  return retval;
}

static
void gpy_stmt_pass_lower_type_to_context (tree type, gpy_hash_tab_t * tbl,
					  tree stack, tree stack_pointer,
					  tree *block)
{
  if (type == error_mark_node)
    return;
  else
    {
      tree field = TYPE_FIELDS (type);
      tree type_size = TYPE_SIZE (type);
      /* Use the runtime library to check and extend the stack by type_size if nesecary */
      append_to_statement_list (gpy_builtin_get_extend_stack (stack, type_size), block);

      do {
	gcc_assert (TREE_CODE (field) == FIELD_DECL);

	debug ("generating stack offset <%s>!\n", IDENTIFIER_POINTER(DECL_NAME (field)));
	gpy_hashval_t h = gpy_dd_hash_string (IDENTIFIER_POINTER(DECL_NAME (field)));

	tree ref = 

	tree ref = build3 (COMPONENT_REF, TREE_TYPE (field), build_fold_indirect_ref(param_decl),
			   field, NULL_TREE);

	gcc_assert (!gpy_dd_hash_insert (h, ref, tbl));
      } while ((field = DECL_CHAIN (field)));
    }
}

/* 
   Creates a DECL_CHAIN of stmts to fold the scalar 
   with the last tree being the address of the primitive 
*/
tree gpy_stmt_decl_lower_scalar (gpy_dot_tree_t * decl, tree * cblock)
{
  tree retval = error_mark_node;

  gcc_assert (DOT_TYPE (decl) == D_PRIMITIVE);
  gcc_assert (DOT_lhs_T (decl) == D_TD_COM);

  switch (DOT_lhs_TC (decl)->T)
    {
    case D_T_INTEGER:
      {
        retval = build_decl (UNKNOWN_LOCATION, VAR_DECL,
                             create_tmp_var_name ("P"),
                             gpy_object_type_ptr);
        append_to_statement_list (build2 (MODIFY_EXPR, gpy_object_type_ptr, retval,
                                          gpy_builtin_get_fold_int_call (DOT_lhs_TC (decl)->o.integer)),
                                  cblock);
      }
      break;

    default:
      error ("invalid scalar type!\n");
      break;
    }

  return retval;
}

tree gpy_stmt_decl_lower_modify (gpy_dot_tree_t * decl, tree * cblock,
                                 VEC(gpy_ctx_t,gc) * context)
{
  tree retval = error_mark_node;
  gpy_dot_tree_t * lhs = DOT_lhs_TT (decl);
  gpy_dot_tree_t * rhs = DOT_rhs_TT (decl);

  /*
    We dont handle full target lists yet
    all targets are in the lhs tree.
   
    To implment a target list such as:
    x,y,z = 1

    The lhs should be a DOT_CHAIN of identifiers!
    So we just iterate over them and deal with it as such!
   */

  if (DOT_TYPE (lhs) == D_IDENTIFIER)
    {
      tree addr = gpy_ctx_lookup_decl (context, DOT_IDENTIFIER_POINTER (lhs));
      if (!addr)
	{
	  /* since not previously declared we need to declare the variable! */
	  gpy_hash_tab_t * current_context = VEC_index (gpy_ctx_t, context,
							(VEC_length (gpy_ctx_t, context)
							 - 1)
							);
	  addr = build_decl (UNKNOWN_LOCATION, VAR_DECL,
			     get_identifier (DOT_IDENTIFIER_POINTER (lhs)),
			     gpy_object_type_ptr);
	  
	  if (!gpy_ctx_push_decl (addr, DOT_IDENTIFIER_POINTER (lhs), 
				  current_context))
	    error ("error pushing decl <%s>!\n", IDENTIFIER_POINTER (DECL_NAME (addr)));
	}
      gcc_assert (addr != error_mark_node);
      
      tree addr_rhs_tree = gpy_stmt_decl_lower_expr (rhs, cblock, context);
      
      append_to_statement_list (build2 (MODIFY_EXPR, gpy_object_type_ptr, addr, addr_rhs_tree), cblock);
      append_to_statement_list (gpy_builtin_get_incr_ref_call (addr), cblock);
      retval = addr_rhs_tree;
    }
  else
    fatal_error ("unhandled modify target type!\n");
  
  return retval;
}

tree gpy_stmt_decl_lower_binary_op (gpy_dot_tree_t * decl, tree * cblock,
                                    VEC(gpy_ctx_t,gc) * context)
{
  tree retval = error_mark_node;

  gcc_assert (DOT_T_FIELD (decl) == D_D_EXPR);

  gpy_dot_tree_t * lhs = DOT_lhs_TT (decl);
  gpy_dot_tree_t * rhs = DOT_rhs_TT (decl);

  tree lhs_eval = gpy_stmt_decl_lower_expr (lhs, cblock, context);
  tree rhs_eval = gpy_stmt_decl_lower_expr (rhs, cblock, context);

  tree op = error_mark_node;
  switch (DOT_TYPE (decl))
    {
    case D_ADD_EXPR:
      op = gpy_builtin_get_eval_expression_call (lhs_eval, rhs_eval, DOT_TYPE (decl));
      break;

      // .... THE REST OF THE BIN OPERATORS 

    default:
      error ("unhandled binary operation type!\n");
      break;
    }
  gcc_assert (op != error_mark_node);

  
  tree retaddr = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
                             gpy_object_type_ptr);
  append_to_statement_list (build2 (MODIFY_EXPR, gpy_object_type_ptr, retaddr, op),
			    cblock);
  retval = retaddr;

  return retval;
}

tree gpy_stmt_decl_lower_expr (gpy_dot_tree_t * decl, tree * cblock,
                               VEC(gpy_ctx_t,gc) * context)
{
  tree retval = error_mark_node;

  switch (DOT_TYPE (decl))
    {
    case D_PRIMITIVE:
      retval = gpy_stmt_decl_lower_scalar (decl, cblock);
      break;

    case D_IDENTIFIER:
      retval = gpy_ctx_lookup_decl (context, DOT_IDENTIFIER_POINTER (decl));
      break;

    default:
      {
        switch (DOT_TYPE (decl))
          {
          case D_MODIFY_EXPR:
            retval = gpy_stmt_decl_lower_modify (decl, cblock, context);
            break;

          case D_ADD_EXPR:
            retval = gpy_stmt_decl_lower_binary_op (decl, cblock, context);
            break;

            // ... the rest of the binary operators!

          default:
            error ("unhandled operation type!\n");
            break;
          }
      }
      break;
    }

  return retval;
}

static
void gpy_stmt_pass_lower_print_stmt (gpy_dot_tree_t * decl,
				     VEC(gpy_ctx_t,gc) * context,
				     tree * stmts)
{
  gpy_dot_tree_t * args_list = decl->opa.t;
  gpy_dot_tree_t * it = args_list;

  VEC(tree,gc) * args_tmp_vec = VEC_alloc (tree,gc,0);
  for (it = args_list; it != NULL; it = DOT_CHAIN (it))
    {
      VEC_safe_push (tree,gc,args_tmp_vec,
		     gpy_stmt_decl_lower_expr (it, stmts, context));
    }
  if (VEC_length (tree, args_tmp_vec) > 0) 
    {
      tree * args_vec = XNEWVEC (tree, VEC_length (tree, args_tmp_vec));
      tree it = NULL_TREE;

      int idx;
      for (idx = 0; VEC_iterate (tree, args_tmp_vec, idx, it); ++idx)
	{
	  args_vec[idx] = it;
	}
      append_to_statement_list (gpy_builtin_get_print_call (VEC_length (tree, args_tmp_vec),
							    args_vec),
				stmts);
    }
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

  TREE_STATIC (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;
  
  /* Define the return type (represented by RESULT_DECL) for the main functin */
  tree resdecl = build_decl(BUILTINS_LOCATION, RESULT_DECL,
			    NULL_TREE, TREE_TYPE(fntype));
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_ARTIFICIAL (resdecl) = true;
  DECL_IGNORED_P (resdecl) = true;

  DECL_RESULT (fndecl) = resdecl;

  /* This is usually used for debugging purpose. this is currently unused */
  tree block = build_block (NULL_TREE, NULL_TREE, NULL_TREE, NULL_TREE);
  DECL_INITIAL (fndecl) = block;

  tree stmts = alloc_stmt_list ();

  /*
    lower the function suite here and append all initilization
   */
  tree declare_vars = resdecl;

  tree bind = NULL_TREE;
  tree bl = build_block (declare_vars, NULL_TREE, fndecl, NULL_TREE);
  DECL_INITIAL (fndecl) = bl;
  TREE_USED (bl) = 1;

  bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		 NULL_TREE, bl);
  TREE_SIDE_EFFECTS (bind) = 1;

  /* Finalize the main function */
  BIND_EXPR_BODY(bind) = stmts;
  stmts = bind;
  DECL_SAVED_TREE (fndecl) = stmts;
  
  gimplify_function_tree (fndecl);
  cgraph_finalize_function (fndecl, false);

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

  TREE_STATIC (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;
  
  /* Define the return type (represented by RESULT_DECL) for the main functin */
  tree resdecl = build_decl(BUILTINS_LOCATION, RESULT_DECL,
			    NULL_TREE, TREE_TYPE(fntype));
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_ARTIFICIAL (resdecl) = true;
  DECL_IGNORED_P (resdecl) = true;

  DECL_RESULT (fndecl) = resdecl;

  /* This is usually used for debugging purpose. this is currently unused */
  tree block = build_block (NULL_TREE, NULL_TREE, NULL_TREE, NULL_TREE);
  DECL_INITIAL (fndecl) = block;

  tree stmts = alloc_stmt_list ();
  /*
    lower the function suite here and append all initilization
   */
  tree declare_vars = resdecl;

  tree bind = NULL_TREE;
  tree bl = build_block (declare_vars, NULL_TREE, fndecl, NULL_TREE);
  DECL_INITIAL (fndecl) = bl;
  TREE_USED (bl) = 1;

  bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		 NULL_TREE, bl);
  TREE_SIDE_EFFECTS (bind) = 1;

  /* Finalize the main function */
  BIND_EXPR_BODY(bind) = stmts;
  stmts = bind;
  DECL_SAVED_TREE (fndecl) = stmts;
  
  gimplify_function_tree (fndecl);
  cgraph_finalize_function (fndecl, false);

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

  TREE_STATIC (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;
  
  /* Define the return type (represented by RESULT_DECL) for the main functin */
  tree resdecl = build_decl(BUILTINS_LOCATION, RESULT_DECL,
			    NULL_TREE, TREE_TYPE(fntype));
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_ARTIFICIAL (resdecl) = true;
  DECL_IGNORED_P (resdecl) = true;

  DECL_RESULT (fndecl) = resdecl;

  /* This is usually used for debugging purpose. this is currently unused */
  tree block = build_block (NULL_TREE, NULL_TREE, NULL_TREE, NULL_TREE);
  DECL_INITIAL (fndecl) = block;

  tree stmts = alloc_stmt_list ();

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
  
  tree declare_vars = resdecl;

  tree bind = NULL_TREE;
  tree bl = build_block (declare_vars, NULL_TREE, fndecl, NULL_TREE);
  DECL_INITIAL (fndecl) = bl;
  TREE_USED (bl) = 1;

  bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		 NULL_TREE, bl);
  TREE_SIDE_EFFECTS (bind) = 1;

  /* Finalize the main function */
  BIND_EXPR_BODY(bind) = stmts;
  stmts = bind;
  DECL_SAVED_TREE (fndecl) = stmts;
  
  gimplify_function_tree (fndecl);
  cgraph_finalize_function (fndecl, false);

  VEC_safe_push (tree, gc, lowered_decls, fndecl);

  return lowered_decls;
}

static
VEC(tree,gc) * gpy_stmt_pass_lower_genericify (gpy_hash_tab_t * modules,
                                               VEC(gpydot,gc) * decls)
{
  VEC(tree,gc) * lowered_decls = VEC_alloc (tree, gc, 0);
  
  gpy_hash_tab_t toplvl, topnxt;
  gpy_dd_hash_init_table (&toplvl);
  gpy_dd_hash_init_table (&topnxt);

  tree main_init_module = gpy_stmt_pass_lower_get_module_type (GPY_current_module_name,
							       modules);
  tree pdecl_t = build_pointer_type (main_init_module);

  tree fntype = build_function_type_list (void_type_node,
					  pdecl_t,
					  NULL_TREE);
  tree ident = GPY_stmt_pass_lower_gen_concat_identifier (GPY_current_module_name,
							  "__field_init__");
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL, ident, fntype);
  debug ("lowering toplevel module <%s> to <%s>!\n", GPY_current_module_name,
	 IDENTIFIER_POINTER (ident));

  TREE_STATIC (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;
  
  tree argslist = NULL_TREE;
  tree self_parm_decl = build_decl (BUILTINS_LOCATION, PARM_DECL,
                                    get_identifier ("__self__"),
                                    pdecl_t);
  DECL_CONTEXT (self_parm_decl) = fndecl;
  DECL_ARG_TYPE (self_parm_decl) = TREE_VALUE (TYPE_ARG_TYPES (TREE_TYPE (fndecl)));
  TREE_READONLY (self_parm_decl) = 1;
  arglist = chainon (arglist, self_parm_decl);

  TREE_USED (self_parm_decl) = 1;
  DECL_ARGUMENTS (fndecl) = arglist;

  /* Define the return type (represented by RESULT_DECL) for the main functin */
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL,
			     NULL_TREE, TREE_TYPE(fntype));
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_ARTIFICIAL (resdecl) = true;
  DECL_IGNORED_P (resdecl) = true;

  DECL_RESULT (fndecl) = resdecl;

  /* This is usually used for debugging purpose. this is currently unused */
  tree block = build_block (NULL_TREE, NULL_TREE, NULL_TREE, NULL_TREE);
  DECL_INITIAL (fndecl) = block;

  tree stmts = alloc_stmt_list ();

  VEC(gpy_ctx_t,gc) * toplevl_context = VEC_alloc (gpy_ctx_t, gc, 0);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &toplvl);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &topnxt);

  tree runtime_globl_stack = build_decl (BUILTINS_LOCATION, VAR_DECL,
					 get_identifier (GPY_GLOBL_STACK_id),
					 gpy_object_type_ptr_ptr);
  TREE_STATIC (runtime_globl_stack) = 0;
  TREE_EXTERN (runtime_globl_stack) = 1;
  TREE_PUBLIC (runtime_globl_stack) = 1;
  TREE_USED (runtime_globl_stack) = 1;
  DECL_ARTIFICIAL (runtime_globl_stack) = 1;

  VEC_safe_push (tree, gc, lowered_decls, runtime_globl_stack);

  tree runtime_globl_stack_data_offset = build_decl (BUILTINS_LOCATION, VAR_DECL,
						     get_identifier (GPY_GLOBL_STACK_DATA_OFFSET_id),
						     long_integer_type_node);
  TREE_STATIC (runtime_globl_stack_data_offset) = 0;
  TREE_EXTERN (runtime_globl_stack_data_offset) = 1;
  TREE_PUBLIC (runtime_globl_stack_data_offset) = 1;
  TREE_USED (runtime_globl_stack_data_offset) = 1;
  DECL_ARTIFICIAL (runtime_globl_stack_data_offset) = 1;

  VEC_safe_push (tree, gc, lowered_decls, runtime_globl_stack_data_offset);

  tree runtime_globl_stack_pointer = build_decl (BUILTINS_LOCATION, VAR_DECL,
						 get_identifier (GPY_GLOBL_STACK_POINTER_id),
						 long_integer_type_node);
  TREE_STATIC (runtime_globl_stack_stack_pointer) = 0;
  TREE_EXTERN (runtime_globl_stack_stack_pointer) = 1;
  TREE_PUBLIC (runtime_globl_stack_stack_pointer) = 1;
  TREE_USED (runtime_globl_stack_stack_pointer) = 1;
  DECL_ARTIFICIAL (runtime_globl_stack_stack_pointer) = 1;

  VEC_safe_push (tree, gc, lowered_decls, runtime_globl_stack_stack_pointer);

  gcc_assert (!gpy_dd_hash_insert (gpy_dd_hash_string (GPY_GLOBL_STACK_id),
				   runtime_globl_stack, &toplvl));
  gcc_assert (!gpy_dd_hash_insert (gpy_dd_hash_string (GPY_GLOBL_STACK_DATA_OFFSET_id),
				   runtime_globl_stack_data_offset, &toplvl));
  gcc_assert (!gpy_dd_hash_insert (gpy_dd_hash_string (GPY_GLOBL_STACK_POINTER_id),
				   runtime_globl_stack_data_offset, &toplvl));
  gpy_stmt_pass_lower_type_to_context (main_init_module, &topnxt, runtime_globl_stack,
				       runtime_globl_stack_pointer);
  int idx;
  gpy_dot_tree_t * idtx = NULL_DOT;
  /*
    Iterating over the DOT IL to lower/generate the GENERIC code
    required to compile the stmts and decls
  */
  for (idx = 0; VEC_iterate (gpydot, decls, idx, idtx); ++idx)
    {
      if (DOT_T_FIELD (idtx) ==  D_D_EXPR)
	{
	  // append to stmt list as this goes into the module initilizer...
          gpy_stmt_decl_lower_expr (idtx, &stmts, toplevl_context);
          continue;
	}

      switch (DOT_TYPE (idtx))
        {
	case D_PRINT_STMT:
	  {
	    gpy_stmt_pass_lower_print_stmt (idtx, toplevl_context, &block);
	  }
	  break;

        case D_STRUCT_METHOD:
          {
	    tree t = gpy_stmt_pass_lower_toplevl_functor_decl (idtx, toplevl_context, modules);
	    VEC_safe_push (tree, gc, lowered_decls, t);

	    tree fold_functor = gpy_builtin_get_fold_functor_decl (DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx)),
								   lowered_functor);
	    tree addr = gpy_ctx_lookup_decl (toplevl_context, DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx)));
	    tree modify_stmt = build2 (MODIFY_EXPR, gpy_object_type_ptr, addr, fold_functor);
	    append_to_statement_list (modify_stmt, &block);
          }
          break;

	case D_STRUCT_CLASS:
	  {
	    VEC(tree,gc) * lowered_class_decls = gpy_stmt_pass_lower_toplevl_class_decl (idtx,
											 toplevl_context,
											 modules);
	    GPY_VEC_stmts_append (tree, lowered_decls, lowered_class_decls);
	    
	  }
	  break;

        default:
          fatal_error ("unhandled dot tree code <%i>!\n", DOT_TYPE (idtx));
          break;
        }
    }

  tree declare_vars = resdecl;

  tree bind = NULL_TREE;
  tree bl = build_block (declare_vars, NULL_TREE, fndecl, NULL_TREE);
  DECL_INITIAL (fndecl) = bl;
  TREE_USED (bl) = 1;

  bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		 NULL_TREE, bl);
  TREE_SIDE_EFFECTS (bind) = 1;

  /* Finalize the main function */
  BIND_EXPR_BODY(bind) = stmts;
  stmts = bind;
  DECL_SAVED_TREE (fndecl) = stmts;
  
  gimplify_function_tree (fndecl);
  cgraph_finalize_function (fndecl, false);

  VEC_safe_push (tree, gc, lowered_decls, fndecl);

  return lowered_decls;
}

VEC(tree,gc) * gpy_stmt_pass_lower (VEC(tree,gc) *modules,
                                    VEC(gpydot,gc) *decls)
{
  VEC(tree,gc) * retval = VEC_alloc (tree, gc, 0);

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
