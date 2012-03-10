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
#include "py-dot.h"
#include "py-vec.h"
#include "py-tree.h"
#include "py-builtins.h"

static VEC(tree,gc) * gpy_stmt_pass_lower_genericify (gpy_hash_tab_t *, VEC(gpydot,gc) *);

static tree gpy_stmt_pass_lower_get_module_type (const char *, gpy_hash_tab_t *);
static void gpy_stmt_pass_lower_gen_toplevl_context (tree, tree, gpy_hash_tab_t *);
static tree gpy_stmt_pass_lower_gen_main (tree);
static tree gpy_stmt_pass_lower_toplevel_functor (gpy_dot_tree_t *, gpy_hash_tab_t *);
static VEC(tree,gc) * gpy_stmt_pass_lower_class_decl (gpy_hash_tab_t *, gpy_dot_tree_t *);

tree gpy_stmt_pass_lower_gen_concat_identifier (const char * s1,
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
  *p = '.'; p++;
  for (; *s2 != '\0'; ++s2)
    {
      *p = *s2;
      ++p;
    }
  *p = '\0';
  
  debug ("buffer = <%s>!\n", buffer);
  return get_identifier (buffer);
}

static
char * gpy_stmt_pass_lower_get_last_token (const char * s)
{
  int size = strlen (s);
  int len = size;
  int dot = -1;
  const char * i;

  for (i = s + len; len >= 0; i = s+(len--))
    {
      if (*i == '.')
	{
	  dot = len;
	  break;
	}
    }

  gcc_assert (dot >= 0);
  int buffer_len = size - dot;
  char buffer [buffer_len];

  int idx = dot;
  int idy = 0;
  for (idx = dot + 2; idx < size; ++idx)
    {
      char c = s[idx];
      buffer [idy] = c;
      idy++;
    }
  buffer [idy] = '\0';
  debug ("buffer = <%s>!\n", buffer);

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
void gpy_stmt_pass_lower_gen_toplevl_context (tree module, tree param_decl,
                                              gpy_hash_tab_t * context)
{
  if (module == error_mark_node)
    return;
  else
    {
      tree field = TYPE_FIELDS (module);
      do {
	gcc_assert (TREE_CODE (field) == FIELD_DECL);

	debug ("generating refernence to <%s>!\n", IDENTIFIER_POINTER(DECL_NAME (field)));
	gpy_hashval_t h = gpy_dd_hash_string (IDENTIFIER_POINTER(DECL_NAME (field)));
	tree ref = build3 (COMPONENT_REF, TREE_TYPE (field), build_fold_indirect_ref(param_decl),
			   field, NULL_TREE);
	void ** e = gpy_dd_hash_insert (h, ref, context);
	if (e)
	  fatal_error ("problem inserting component reference into context!\n");
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
  else if (DOT_TYPE (lhs) == D_ATTRIB_REF)
    {
      tree type = build_pointer_type (unsigned_char_type_node);
      tree addr_1 = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				type);
      gpy_dot_tree_t * xlhs = DOT_lhs_TT (lhs);
      gpy_dot_tree_t * xrhs = DOT_rhs_TT (lhs);
      
      gcc_assert (DOT_TYPE (xlhs) == D_IDENTIFIER);
      gcc_assert (DOT_TYPE (xrhs) == D_IDENTIFIER);

      tree lhs_tree = gpy_stmt_decl_lower_expr (xlhs, cblock, context);
      char * attrib_ident = DOT_IDENTIFIER_POINTER (xrhs);
      tree attrib_ref = build2 (MODIFY_EXPR, type, addr_1,
				gpy_builtin_get_attrib_ref_flat (lhs_tree, attrib_ident));
      append_to_statement_list (attrib_ref, cblock);

      tree addr_rhs_tree = gpy_stmt_decl_lower_expr (rhs, cblock, context);

      tree addr_2 = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				type);
      tree cast = build2 (MODIFY_EXPR, type, addr_2, build_fold_addr_expr (addr_rhs_tree));
      append_to_statement_list (cast, cblock);
      append_to_statement_list (build2 (MODIFY_EXPR, type, addr_1, addr_2), cblock);
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

      /* this isnt fully correct but will do untill attribute calls and recursive'ness matters */ 
    case D_ATTRIB_REF:
      {
	tree type = build_pointer_type (unsigned_char_type_node);
	tree addr_1 = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				  type);
	gpy_dot_tree_t * lhs = DOT_lhs_TT (decl);
	gpy_dot_tree_t * rhs = DOT_rhs_TT (decl);

	gcc_assert (DOT_TYPE (lhs) == D_IDENTIFIER);
	gcc_assert (DOT_TYPE (rhs) == D_IDENTIFIER);

	tree lhs_tree = gpy_stmt_decl_lower_expr (lhs, cblock, context);
	char * attrib_ident = DOT_IDENTIFIER_POINTER (rhs);
	tree attrib_ref = build2 (MODIFY_EXPR, type, addr_1,
				  gpy_builtin_get_attrib_ref_flat (lhs_tree, attrib_ident));
	append_to_statement_list (attrib_ref, cblock);

	tree ptr_type = build_pointer_type (gpy_object_type_ptr);
	tree addr_2 = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				  ptr_type);
	tree cast = build2 (MODIFY_EXPR, ptr_type, addr_2, addr_1);
	append_to_statement_list (cast, cblock);

	tree addr_3 = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				  gpy_object_type_ptr);
	tree def_ref = build2 (MODIFY_EXPR, gpy_object_type_ptr, addr_3,
			       build_fold_indirect_ref (addr_2));
	append_to_statement_list (def_ref, cblock);
	retval = addr_3;
      }
      break;

    case D_CALL_EXPR:
      {
	tree addr = build_decl (UNKNOWN_LOCATION, VAR_DECL, create_tmp_var_name ("T"),
				gpy_object_type_ptr);
	debug ("looking up call within context <%s>!\n", DOT_IDENTIFIER_POINTER (DOT_lhs_TT (decl)));
	tree call_name_decl =  gpy_ctx_lookup_decl (context, DOT_IDENTIFIER_POINTER (DOT_lhs_TT (decl)));

	tree eval = gpy_builtin_get_fold_call (true, call_name_decl,
					       gpy_ctx_lookup_decl (context, "__globls__"),
					       DOT_IDENTIFIER_POINTER (DOT_lhs_TT (decl)));
	tree tmp = build2 (MODIFY_EXPR, gpy_object_type_ptr, addr, eval);
	retval = tmp;
      }
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

tree gpy_stmt_pass_lower_toplevel_functor (gpy_dot_tree_t * decl,
					   gpy_hash_tab_t * modules)
{
  gpy_hash_tab_t toplvl, topnxt;
  gpy_dd_hash_init_table (&toplvl);
  gpy_dd_hash_init_table (&topnxt);

  tree main_init_module = gpy_stmt_pass_lower_get_module_type ("main.main",
                                                               modules);
  tree main_module_ptr_type = build_pointer_type (main_init_module);
  tree fntype = build_function_type_list (void_type_node,
					  gpy_vector_type_ptr,
                                          /* 
                                             handle function parameters
                                             ... 
					  */
                                          NULL_TREE);
  tree concat_ident = gpy_stmt_pass_lower_gen_concat_identifier ("main.main",
                                                                 DOT_IDENTIFIER_POINTER (DOT_FIELD (decl)));
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL, concat_ident, fntype);

  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;
  TREE_USED (fndecl) = 1;
  DECL_ARTIFICIAL (fndecl) = 1;
  tree arglist = NULL_TREE;

  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     integer_type_node);
  DECL_ARTIFICIAL(resdecl) = 1;
  DECL_CONTEXT(resdecl) = fndecl;
  DECL_RESULT(fndecl) = resdecl;

  SET_DECL_ASSEMBLER_NAME (fndecl, concat_ident);

  tree self_parm_decl = build_decl (BUILTINS_LOCATION, PARM_DECL,
                                    get_identifier ("__globls__"),
                                    gpy_vector_type_ptr);

  DECL_CONTEXT (self_parm_decl) = fndecl;
  DECL_ARG_TYPE (self_parm_decl) = TREE_VALUE (TYPE_ARG_TYPES (TREE_TYPE (fndecl)));
  TREE_READONLY (self_parm_decl) = 1;
  arglist = chainon (arglist, self_parm_decl);

  TREE_USED (self_parm_decl) = 1;
  DECL_ARGUMENTS (fndecl) = arglist;

  DECL_INITIAL (fndecl) = make_node (BLOCK);
  TREE_USED(DECL_INITIAL(fndecl)) = 1;
  tree block = DECL_INITIAL (fndecl);

  tree main_addr_space = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("A"),
				     gpy_object_type_ptr);
  append_to_statement_list (gpy_builtin_setup_globls (self_parm_decl, 1, main_addr_space), &block);
  
  tree main_addr_space_state = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("S"),
					   main_module_ptr_type);
  
  append_to_statement_list (build2 (MODIFY_EXPR, main_module_ptr_type, main_addr_space_state,
				    gpy_builtin_get_object_state (main_addr_space)),
			    &block);
  gpy_stmt_pass_lower_gen_toplevl_context (main_init_module, self_parm_decl,
                                           &toplvl);

  VEC(gpy_ctx_t,gc) * toplevl_context = VEC_alloc (gpy_ctx_t, gc, 0);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &toplvl);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &topnxt);

  gpy_hashval_t h = gpy_dd_hash_string ("__globls__");
  void ** e = gpy_dd_hash_insert (h, self_parm_decl, &toplvl);
  if (e)
    fatal_error ("problem inserting component reference into context!\n");
  
  DECL_INITIAL(fndecl) = block;
  gpy_dot_tree_t * idtx = DOT_rhs_TT (decl);
  /*
    Iterating over the DOT IL to lower/generate the GENERIC code
    required to compile the stmts and decls
  */
  do {
    if (DOT_T_FIELD (idtx) ==  D_D_EXPR)
      {
	// append to stmt list as this goes into the module initilizer...
	gpy_stmt_decl_lower_expr (idtx, &block, toplevl_context);
	continue;
      }

    switch (DOT_TYPE (idtx))
      {
      default:
	fatal_error ("unhandled dot tree code <%i>!\n", DOT_TYPE (idtx));
	break;
      }
  } while ((idtx = DOT_CHAIN (idtx)));

  tree bl = make_node (BLOCK);
  BLOCK_SUPERCONTEXT (bl) = fndecl;
  DECL_INITIAL (fndecl) = bl;
  BLOCK_VARS (bl) = NULL_TREE;
  TREE_USED (bl) = 1;
  tree bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		      NULL_TREE, bl);
  TREE_SIDE_EFFECTS (bind) = 1;
  
  BIND_EXPR_BODY (bind) = block;
  block = bind;
  DECL_SAVED_TREE (fndecl) = block;

  gimplify_function_tree (fndecl);

  cgraph_add_new_function (fndecl, false);
  cgraph_finalize_function (fndecl, true);

  return fndecl;
}

static
tree gpy_stmt_pass_lower_class_attrib_method (gpy_dot_tree_t * attrib,
					      gpy_dot_tree_t * class_decl,
					      gpy_hash_tab_t * modules)
{
  gcc_assert (DOT_TYPE (attrib) == D_STRUCT_METHOD);

  tree block = alloc_stmt_list ();
  // tree declvars = NULL_TREE;

  gpy_hash_tab_t toplvl, topnxt;
  gpy_dd_hash_init_table (&toplvl);
  gpy_dd_hash_init_table (&topnxt);

  tree module = gpy_stmt_pass_lower_get_module_type ("main.main", modules);
  tree main_module_ptr_type = build_pointer_type (module);
  char * class_ident_ptr = DOT_IDENTIFIER_POINTER (DOT_FIELD (class_decl));
  
  tree tmp_decl_name = gpy_stmt_pass_lower_gen_concat_identifier ("main", class_ident_ptr);
  const char * tmp_ident = IDENTIFIER_POINTER (tmp_decl_name);
  char * attrib_ident = DOT_IDENTIFIER_POINTER (DOT_FIELD (attrib));
  tree class_attrib_ident = gpy_stmt_pass_lower_gen_concat_identifier (tmp_ident, attrib_ident);

  tree fntype = build_function_type_list (void_type_node, /* no return for now... */
					  gpy_vector_type_ptr,
					  NULL_TREE);
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
			    class_attrib_ident, fntype);
  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;

  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     void_type_node);
  DECL_ARTIFICIAL (resdecl) = 1;
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;

  tree arglist = NULL_TREE;

  SET_DECL_ASSEMBLER_NAME (fndecl, class_attrib_ident);
  tree self_parm_decl = build_decl (BUILTINS_LOCATION, PARM_DECL,
                                    get_identifier ("__globls__"),
                                    gpy_vector_type_ptr);
  DECL_CONTEXT (self_parm_decl) = fndecl;
  DECL_ARG_TYPE (self_parm_decl) = TREE_VALUE (TYPE_ARG_TYPES (TREE_TYPE (fndecl)));
  TREE_READONLY (self_parm_decl) = 1;
  arglist = self_parm_decl; //chainon (arglist, self_parm_decl);
  TREE_USED (self_parm_decl) = 1;  

  DECL_ARGUMENTS (fndecl) = arglist;
  DECL_INITIAL (fndecl) = block;  

  tree main_addr_space = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("A"),
				     gpy_object_type_ptr);
  tree class_addr_space = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("A"),
				      gpy_object_type_ptr);

  append_to_statement_list (gpy_builtin_setup_globls (self_parm_decl, 2, main_addr_space, class_addr_space),
			    &block);
  tree main_addr_space_state = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("S"),
					   main_module_ptr_type);
  
  append_to_statement_list (build2 (MODIFY_EXPR, main_module_ptr_type, main_addr_space_state,
				    gpy_builtin_get_object_state (main_addr_space)),
			    &block);

  gpy_stmt_pass_lower_gen_toplevl_context (module, main_addr_space_state, &toplvl);
  gpy_hashval_t h = gpy_dd_hash_string ("self");
  void ** e = gpy_dd_hash_insert (h, class_addr_space, &topnxt);
  if (e)
    fatal_error ("problem inserting component reference into context!\n");

  VEC(gpy_ctx_t,gc) * context = VEC_alloc (gpy_ctx_t, gc, 0);
  VEC_safe_push (gpy_ctx_t, gc, context, &toplvl);
  VEC_safe_push (gpy_ctx_t, gc, context, &topnxt);
  
  gpy_dot_tree_t * suite = DOT_rhs_TT (attrib);
  for (; suite != NULL_DOT; suite = DOT_CHAIN (suite))
    {
      if (DOT_T_FIELD (suite) ==  D_D_EXPR)
        {
          // append to stmt list as this goes into the module initilizer...
          gpy_stmt_decl_lower_expr (suite, &block, context);
          continue;
        }

      switch (DOT_TYPE (suite))
        {
	case D_PRINT_STMT:
	  {
	    gpy_stmt_pass_lower_print_stmt (suite, context, &block);
	  }
	  break;

        default:
          fatal_error ("unhandled dot tree code <%i>!\n", DOT_TYPE (suite));
          break;
        }
    }
  
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
VEC(tree,gc) * gpy_stmt_pass_lower_class_decl (gpy_hash_tab_t * modules,
					       gpy_dot_tree_t * decl)
{
  gcc_assert (DOT_TYPE (decl) == D_STRUCT_CLASS);

  tree block = alloc_stmt_list ();

  gpy_hash_tab_t toplvl, topnxt;
  gpy_dd_hash_init_table (&toplvl);
  gpy_dd_hash_init_table (&topnxt);

  VEC(tree,gc) * retval = VEC_alloc (tree,gc,0);

  char * class_ident_ptr = DOT_IDENTIFIER_POINTER (DOT_FIELD (decl));
  tree module_main_type = gpy_stmt_pass_lower_get_module_type ("main.main", modules);
  tree main_module_ptr_type = build_pointer_type (module_main_type);

  tree tmp_decl_name = gpy_stmt_pass_lower_gen_concat_identifier ("main", class_ident_ptr);
  const char * tmp_ident = IDENTIFIER_POINTER (tmp_decl_name);

  gpy_hash_entry_t * ent = gpy_dd_hash_lookup_table (modules,
						     gpy_dd_hash_string (tmp_ident));
  gcc_assert (ent->data);
  tree class_type = (tree) ent->data;

  tree class_attrib_ident = gpy_stmt_pass_lower_gen_concat_identifier (tmp_ident, "__pre_init__");
  
  tree fntype = build_function_type_list (void_type_node, /* no return for now... */
					  gpy_vector_type_ptr,
					  /* args ... */
					  NULL_TREE);
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
			    class_attrib_ident, fntype);
  DECL_EXTERNAL (fndecl) = 0;
  TREE_PUBLIC (fndecl) = 1;
  TREE_STATIC (fndecl) = 1;
  TREE_USED (fndecl) = 1;
  DECL_ARTIFICIAL (fndecl) = 1;
  
  tree arglist = NULL_TREE;
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     integer_type_node);
  DECL_ARTIFICIAL(resdecl) = 1;
  DECL_CONTEXT(resdecl) = fndecl;
  DECL_RESULT(fndecl) = resdecl;


  SET_DECL_ASSEMBLER_NAME (fndecl, class_attrib_ident);
  tree self_parm_decl = build_decl (BUILTINS_LOCATION, PARM_DECL,
                                    get_identifier ("__globls__"),
                                    gpy_vector_type_ptr);
  DECL_CONTEXT (self_parm_decl) = fndecl;
  DECL_ARG_TYPE (self_parm_decl) = TREE_VALUE (TYPE_ARG_TYPES (TREE_TYPE (fndecl)));
  TREE_READONLY (self_parm_decl) = 1;
  arglist = chainon (arglist, self_parm_decl);
  TREE_USED (self_parm_decl) = 1;

  DECL_ARGUMENTS (fndecl) = arglist;
  DECL_INITIAL(fndecl) = block;

  tree main_addr_space = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("A"),
				     gpy_object_type_ptr);
  tree class_addr_space = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("A"),
				      gpy_object_type_ptr);

  append_to_statement_list (gpy_builtin_setup_globls (self_parm_decl, 2, main_addr_space, class_addr_space), &block);
  tree main_addr_space_state = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("S"),
					   main_module_ptr_type);
  
  append_to_statement_list (build2 (MODIFY_EXPR, main_module_ptr_type, main_addr_space_state,
				    gpy_builtin_get_object_state (main_addr_space)),
			    &block);

  gpy_stmt_pass_lower_gen_toplevl_context (module_main_type, main_addr_space_state, &toplvl);
  gpy_hashval_t h = gpy_dd_hash_string ("__globls__");
  void ** e = gpy_dd_hash_insert (h, self_parm_decl, &toplvl);
  if (e)
    fatal_error ("problem inserting component reference into context!\n");

  h = gpy_dd_hash_string ("self");
  e = gpy_dd_hash_insert (h, class_addr_space, &topnxt);
  if (e)
    fatal_error ("problem inserting component reference into context!\n");

  VEC(gpy_ctx_t,gc) * toplevl_context = VEC_alloc (gpy_ctx_t, gc, 0);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &toplvl);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &topnxt);

  gpy_dot_tree_t * suite = DOT_lhs_TT (decl);
  gpy_dot_tree_t * it = NULL_DOT;
  for (it = suite; it != NULL_DOT; it = DOT_CHAIN (it))
    {
      if (DOT_T_FIELD(it) == D_D_EXPR)
	{
	  gpy_stmt_decl_lower_expr (it, &block, toplevl_context);
	  continue;
	}

      switch (DOT_TYPE (it))
	{
	case D_PRINT_STMT:
	  {
	    gpy_stmt_pass_lower_print_stmt (it, toplevl_context, &block);
	  }
	  break;

	case D_STRUCT_METHOD:
	  {
	    tree attrib = gpy_stmt_pass_lower_class_attrib_method (it, decl, modules);
	    VEC_safe_push (tree,gc,retval,attrib);
	  }
	  break;

	default:
	  fatal_error ("unhandled class attribute DOT!\n");
	  break;
	}
    }
  VEC_safe_push (tree,gc,retval,class_type);

  tree bl = make_node (BLOCK);
  BLOCK_SUPERCONTEXT (bl) = fndecl;
  DECL_INITIAL (fndecl) = bl;

  /* declvars */
  BLOCK_VARS (bl) = NULL_TREE;
  TREE_USED (bl) = 1;
  tree bind = build3 (BIND_EXPR, void_type_node, BLOCK_VARS(bl),
		      NULL_TREE, bl);
  TREE_SIDE_EFFECTS(bind) = 1;
  
  BIND_EXPR_BODY(bind) = block;
  block = bind;
  DECL_SAVED_TREE(fndecl) = block;

  debug_tree (fndecl);

  gimplify_function_tree (fndecl);

  cgraph_add_new_function (fndecl, false);
  cgraph_finalize_function (fndecl, true);

  VEC_safe_push (tree, gc, retval, fndecl);
  VEC_safe_push (tree, gc, retval, class_type);

  return retval;
}

static
VEC(tree,gc) * gpy_stmt_pass_lower_genericify (gpy_hash_tab_t * modules,
                                               VEC(gpydot,gc) * decls)
{
  VEC(tree,gc) * retval = VEC_alloc (tree,gc,0);
  
  tree block = alloc_stmt_list ();
  gpy_hash_tab_t toplvl, topnxt;
  gpy_dd_hash_init_table (&toplvl);
  gpy_dd_hash_init_table (&topnxt);

  tree main_init_module = gpy_stmt_pass_lower_get_module_type ("main.main", modules);
  tree pdecl_t = build_pointer_type (main_init_module);

  tree main_init_fntype = build_function_type_list (void_type_node, pdecl_t, NULL_TREE);
  tree main_init_fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
                                      get_identifier ("main.main.__pre_init__"),
                                      main_init_fntype);
  DECL_EXTERNAL (main_init_fndecl) = 0;
  TREE_PUBLIC (main_init_fndecl) = 1;
  TREE_STATIC (main_init_fndecl) = 1;

  tree result_decl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
                                 integer_type_node);
  DECL_RESULT (main_init_fndecl) = result_decl;

  tree arglist = NULL_TREE;

  SET_DECL_ASSEMBLER_NAME (main_init_fndecl, get_identifier("main.main.__pre_init__"));
  tree self_parm_decl = build_decl (BUILTINS_LOCATION, PARM_DECL,
                                    get_identifier ("__self__"),
                                    pdecl_t);
  DECL_CONTEXT (self_parm_decl) = main_init_fndecl;
  DECL_ARG_TYPE (self_parm_decl) = TREE_VALUE (TYPE_ARG_TYPES (TREE_TYPE (main_init_fndecl)));
  TREE_READONLY (self_parm_decl) = 1;
  arglist = chainon (arglist, self_parm_decl);

  TREE_USED (self_parm_decl) = 1;
  DECL_ARGUMENTS (main_init_fndecl) = arglist;

  gpy_stmt_pass_lower_gen_toplevl_context (main_init_module, self_parm_decl,
                                           &toplvl);

  VEC(gpy_ctx_t,gc) * toplevl_context = VEC_alloc (gpy_ctx_t, gc, 0);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &toplvl);
  VEC_safe_push (gpy_ctx_t, gc, toplevl_context, &topnxt);

  DECL_INITIAL(main_init_fndecl) = block;
  tree globls = build_decl (BUILTINS_LOCATION, VAR_DECL, get_identifier ("__globls__"),
			    gpy_vector_type_ptr);
  tree gm = build2 (MODIFY_EXPR, gpy_vector_type_ptr, globls,
		    gpy_builtin_setup_globls_namespace (self_parm_decl));
  append_to_statement_list (gm, &block);

  gpy_hashval_t h = gpy_dd_hash_string ("__globls__");
  void ** e = gpy_dd_hash_insert (h, globls, &toplvl);
  if (e)
    fatal_error ("problem inserting component reference into context!\n");

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
          gpy_stmt_decl_lower_expr (idtx, &block, toplevl_context);
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
            /* 
               They are self contained decls so we just pass them to the 
               return vector for gimplification
            */
            debug ("lowering function toplevel!\n");
	    tree lowered_functor = gpy_stmt_pass_lower_toplevel_functor (idtx, modules);
            VEC_safe_push (tree, gc, retval, lowered_functor);
            debug ("lowered function toplevel!\n");

	    tree fold_functor = gpy_builtin_get_fold_functor_decl (DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx)),
								   lowered_functor);
	    tree addr = gpy_ctx_lookup_decl (toplevl_context, DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx)));
	    tree modify_stmt = build2 (MODIFY_EXPR, gpy_object_type_ptr, addr, fold_functor);
	    append_to_statement_list (modify_stmt, &block);
          }
          break;

	case D_STRUCT_CLASS:
	  {
	    debug ("lowering class declaration!\n");
	    VEC(tree,gc) * class_decls = gpy_stmt_pass_lower_class_decl (modules, idtx);
	    debug ("lowered class decl!\n");
	    
	    tree ctype = VEC_pop (tree, class_decls);
	    GPY_VEC_stmts_append (tree, retval, class_decls);
	    
	    VEC(tree,gc) * attribs = VEC_alloc (tree,gc,0);
	    debug_tree (ctype);
	    tree field = NULL_TREE;
	    
	    for (field = TYPE_FIELDS (ctype); field != NULL; field = DECL_CHAIN (field))
	      {
		gcc_assert (TREE_CODE (field) == FIELD_DECL);
		const char * attrib_ident = IDENTIFIER_POINTER (DECL_NAME (field));
		
		tree t = build_decl (BUILTINS_LOCATION ,VAR_DECL, create_tmp_var_name ("P"),
				     gpy_attrib_type_ptr);
		VEC_safe_push (tree, gc, attribs, t);
		tree addr = NULL_TREE;
		 
		// work out addr...
		int idy;
		tree i = NULL_TREE;
		for (idy = 0; VEC_iterate (tree, class_decls, idy, i); ++idy)
		  {
		    gcc_assert (TREE_CODE (i) == FUNCTION_DECL);
		    const char * name = IDENTIFIER_POINTER (DECL_NAME (i));
		    
		    char * last = gpy_stmt_pass_lower_get_last_token (name);
		    debug ("attrib_ident = <%s>, last = <%s>!\n", attrib_ident, last);
		    if (!strcmp (attrib_ident, last))
		      {
			addr = i;
			break;
		      }
		  }
		if (addr == NULL_TREE)
		  addr = build_int_cst (ptr_type_node, 0);

		gcc_assert (addr);
		tree e = gpy_builtin_fold_attrib (attrib_ident, addr,
						  DECL_FIELD_OFFSET (field));
		append_to_statement_list (build2 (MODIFY_EXPR, gpy_attrib_type_ptr,t,e),
					  &block);
	      }
	    tree a = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("P"),
				 gpy_attrib_type_ptr_ptr);
	    tree ev = gpy_builtin_fold_attribs_list (attribs);
	    append_to_statement_list (build2 (MODIFY_EXPR, gpy_attrib_type_ptr_ptr, a, ev),
				      &block);

	    tree addr = gpy_ctx_lookup_decl (toplevl_context,
					     DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx)));

	    char * id = DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx));
	    tree fold_class_decl = gpy_builtin_get_fold_class_decl (a,
								    DECL_SIZE (TYPE_FIELDS (ctype)),
								    id);
	    tree modify_stmt = build2 (MODIFY_EXPR, gpy_object_type_ptr, addr, fold_class_decl);
	    append_to_statement_list (modify_stmt, &block);
	  }
	  break;

        default:
          fatal_error ("unhandled dot tree code <%i>!\n", DOT_TYPE (idtx));
          break;
        }
    }

  tree bl = make_node(BLOCK);
  BLOCK_SUPERCONTEXT(bl) = main_init_fndecl;
  DECL_INITIAL(main_init_fndecl) = bl;
  BLOCK_VARS(bl) = NULL_TREE;
  TREE_USED(bl) = 1;
  tree bind = build3(BIND_EXPR, void_type_node, BLOCK_VARS(bl),
                     NULL_TREE, bl);
  TREE_SIDE_EFFECTS(bind) = 1;
  
  BIND_EXPR_BODY(bind) = block;
  block = bind;
  DECL_SAVED_TREE(main_init_fndecl) = block;

  gimplify_function_tree (main_init_fndecl);

  cgraph_add_new_function (main_init_fndecl, false);
  cgraph_finalize_function (main_init_fndecl, true);

  VEC_safe_push (tree,gc,retval, main_init_fndecl);

  return retval;
}

static
tree gpy_stmt_pass_lower_gen_main (tree module)
{
  tree main_fn_type = build_function_type_list (integer_type_node, NULL_TREE);
  tree main_fn_decl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
                                  get_identifier ("main"), main_fn_type);

  DECL_CONTEXT (main_fn_decl) = NULL_TREE;
  TREE_STATIC (main_fn_decl) = 1;
  TREE_PUBLIC (main_fn_decl) = 1;
  DECL_ARGUMENTS (main_fn_decl) = NULL_TREE;

  /* Define the return type (represented by RESULT_DECL) for the main functin */
  tree main_ret = build_decl (BUILTINS_LOCATION, RESULT_DECL,
                              NULL_TREE, TREE_TYPE(main_fn_type));
  DECL_CONTEXT(main_ret) = main_fn_decl;
  DECL_ARTIFICIAL(main_ret) = 1;
  DECL_IGNORED_P(main_ret) = 1;
  DECL_RESULT(main_fn_decl) = main_ret;

  tree main_art_block = build_block (NULL_TREE, NULL_TREE, NULL_TREE, NULL_TREE);
  DECL_INITIAL(main_fn_decl) = main_art_block;

  tree declare_vars = NULL_TREE;
  tree main_stmts = alloc_stmt_list ();

  append_to_statement_list (gpy_builtin_get_init_call(), &main_stmts);

  tree mod_decl = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("I"),
                              module);
  declare_vars = mod_decl;
  tree module_init_fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
                                        get_identifier ("main.main.__pre_init__"),
                                        build_function_type_list (void_type_node,
                                                                  build_pointer_type (module), NULL_TREE)
                                        );
  append_to_statement_list (build_call_expr (module_init_fndecl, 1, build_fold_addr_expr(mod_decl)),
                            &main_stmts);
  append_to_statement_list (gpy_builtin_get_cleanup_final_call (), &main_stmts);

  tree main_set_ret = build2 (MODIFY_EXPR, TREE_TYPE(main_ret),
                              main_ret, build_int_cst (integer_type_node, 0));
  tree main_ret_expr = build1 (RETURN_EXPR, void_type_node, main_set_ret);
  append_to_statement_list (main_ret_expr, &main_stmts);

  tree bind = NULL_TREE;
  tree bl = make_node(BLOCK);
  BLOCK_SUPERCONTEXT(bl) = main_fn_decl;
  DECL_INITIAL(main_fn_decl) = bl;
  BLOCK_VARS(bl) = declare_vars;
  TREE_USED(bl) = 1;
  bind = build3( BIND_EXPR, void_type_node, BLOCK_VARS(bl),
                 NULL_TREE, bl );
  TREE_SIDE_EFFECTS(bind) = 1;

  BIND_EXPR_BODY(bind) = main_stmts;
  main_stmts = bind;
  DECL_SAVED_TREE(main_fn_decl) = main_stmts;

  gimplify_function_tree (main_fn_decl);
  cgraph_finalize_function (main_fn_decl, false);

  return main_fn_decl;
}

/* Now we start to iterate over the dot IL to lower it down to */
/* a vector of GENERIC decls */

/* Which is then passed over to the pass manager for any other */
/* defined passes which can be placed into the queue but arent */
/* nessecary for now. */
/*
  class foobar:
  def __init__ (self):
  self.x = 1

  x = foobar ()
  print x.x
  x.x = 5  
  print x.x

  def test ():
  print x+5

  test ()
*/

/* This is where things get more tricky in how we compile and deal with calls and */
/* attribute references. */

/* First we generate the Types from py-stmt-pass-types.c and we create the relevent attribute */
/* tables and at runtime we tell it how to understand the offsets to access each attribute properly */
/* and the key thing to remember in python is that everything is just name, in that a method */
/* which is an attribute of a class looks the same as a normal piece of data like an int, due */
/* to dynamic typing we stil have to worry about evaluations at runtime */
/* So at runtime we have the int object implementation and also a function object implementation */

/*
  In the end code generated will look as so:

  struct main.main.__attrib__ {
  gpy_object_t * foobar;
  gpy_object_t * x;
  gpy_object_t * test;
  gpy_object_t * main.__init__;
  }

  struct main.foobar.__attrib__ {
  gpy_object_t * x;
  gpy_object_t * pre.__init__;
  gpy_object_t * foobar.__init__;
  }

  void main.foobar.pre.__init__ (gpy_object_t * self,
  gpy_object_t * __self__ )
  {
  NOP;
  }

  void main.foobar.__init__ (gpy_object_t * self,
  gpy_object_t * __self__)
  {
  unsigned char * T.9 = attrib_ref_flat (self, "x");
  T.10 = fold_int (1);
  T.9 = (unsigned char *) &T.10;
  }

  void main.test (gpy_object_t *self)
  {
  gpy_object_t * T.8 = fold_int (5);
  gpy_object_t * T.7 = bin_op (ADD, self->x, T.8);
  fold_print (1, T.7);
  }

  void main.__mod_init__ (gpy_object_t *self)
  {
  self->x = fold_call (self->foobar, 0);

  unsigned char * T.1 = attrib_ref_flat (self->x, "x");
  gpy_object_t * T.2 = *((gpy_object_t **)T.1);
  fold_print (1, T.2);
    
  unsigned char * T.3 = attrib_ref_flat (self->x, "x");
  T.4 = fold_int (5);
  T.3 = (unsigned char *) &(T.4);

  unsigned char * T.5 = attrib_ref_flat (self->x, "x");
  gpy_object_t * T.6 = *((gpy_object_t **) T.5);
  fold_pint (1, T.6);

  fold_call (self->test, 0);
  }

  int main (int argc, char *argv[])
  {
  init_runtime ();

  gpy_object_t toplevel;
  struct main.main __toplevel_attribs;

  __toplevel_attibs.test = fold_func_decl (&main.test, 0);

  __toplevel_attribs.foobar = fold_class_decl ("x", NULL, offset,
  "__init__", &main.foobar.__init__, (1), offset,
  "pre.__init__", &main.foobar.pre.__init__, (0), offset);
						 
  gpy_rr_fold_init_class (&toplevel, &__toplevel_attribs, member_offsets);

  main.__init__ (&toplevel);

  cleanup ();

  return 0;
  }
*/
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

  VEC_safe_push (tree, gc, retval,
                 gpy_stmt_pass_lower_gen_main (gpy_stmt_pass_lower_get_module_type ("main.main",
                                                                                    &module_ctx)
                                               )
                 );
  if (module_ctx.array)
    free (module_ctx.array);

  return retval;
}
