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

VEC(tree,gc) * gpy_builtin_types_vec;
static tree gpy_build_py_object_type (void);
static tree gpy_build_py_vector_type (void);

tree gpy_builtin_get_init_call (void)
{
  tree fntype = build_function_type (void_type_node, void_list_node);
  tree gpy_rr_init = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
				 get_identifier("gpy_rr_init_runtime"),
				 fntype);
  tree restype = TREE_TYPE (gpy_rr_init);
  tree resdecl = build_decl (UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = gpy_rr_init;
  DECL_RESULT (gpy_rr_init) = resdecl;
  DECL_EXTERNAL (gpy_rr_init) = 1;
  TREE_PUBLIC (gpy_rr_init) = 1;

  return build_call_expr (gpy_rr_init, 0, NULL_TREE);
}

tree gpy_builtin_get_cleanup_final_call (void)
{
  tree fntype = build_function_type( void_type_node, void_list_node );
  tree gpy_rr_cleanup = build_decl( UNKNOWN_LOCATION, FUNCTION_DECL,
				    get_identifier("gpy_rr_cleanup_final"),
				    fntype );
  tree restype = TREE_TYPE( gpy_rr_cleanup );
  tree resdecl = build_decl( UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype );
  DECL_CONTEXT(resdecl) = gpy_rr_cleanup;
  DECL_RESULT(gpy_rr_cleanup) = resdecl;
  DECL_EXTERNAL( gpy_rr_cleanup ) = 1;
  TREE_PUBLIC( gpy_rr_cleanup ) = 1;

  return build_call_expr( gpy_rr_cleanup, 0, NULL_TREE );
}

tree gpy_builtin_get_fold_int_call (int val)
{
  tree params = NULL_TREE;

  chainon( params, tree_cons (NULL_TREE, integer_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, void_type_node, NULL_TREE) );
  
  tree fntype = build_function_type( ptr_type_node, params );
  tree gpy_eval_expr_decl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
					get_identifier ("gpy_rr_fold_integer"),
					fntype);
  tree restype = TREE_TYPE(gpy_eval_expr_decl);
  tree resdecl = build_decl (UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT(resdecl) = gpy_eval_expr_decl;
  DECL_RESULT(gpy_eval_expr_decl) = resdecl;
  DECL_EXTERNAL( gpy_eval_expr_decl ) = 1;
  TREE_PUBLIC( gpy_eval_expr_decl ) = 1;

  return build_call_expr (gpy_eval_expr_decl, 1,
			  build_int_cst (integer_type_node,
					 val)
			  );
}

tree gpy_stmt_pass_lower_gen_toplevl_offsets_table (tree type, tree * stmts)
{
  gcc_assert (type != error_mark_node);

  VEC(tree,gc) * addrs = VEC_alloc (tree,gc,0);
  tree field = TYPE_FIELDS (type);
  do {
    gcc_assert (TREE_CODE (field) == FIELD_DECL);

    tree i = build_decl (BUILTINS_LOCATION, VAR_DECL, create_tmp_var_name ("R"),
			 gpy_attrib_type_ptr);
    VEC_safe_push (tree,gc,addrs, i);

    tree field_offset = DECL_FIELD_OFFSET (field);
    tree eval = gpy_builtin_fold_attrib (IDENTIFIER_POINTER (DECL_NAME (field)),
					 build_int_cst (ptr_type_node, 0),
					 field_offset);
    tree m = build2 (MODIFY_EXPR, gpy_attrib_type_ptr, i, eval);
    append_to_statement_list (m, stmts);
  } while ((field = DECL_CHAIN (field)));

  tree fntype = build_function_type_list (gpy_attrib_type_ptr_ptr, integer_type_node,
					  va_list_type_node, NULL_TREE);
  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_attrib_list"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;
  
  int dlen = VEC_length (tree, addrs);
  tree * args = XNEWVEC (tree, dlen + 1);
  args[0] = build_int_cst (integer_type_node, dlen);

  tree it = NULL_TREE;
  int idx, offset = 1;
  for (idx = 0; VEC_iterate (tree, addrs, idx, it); ++idx)
    {
      args[offset] = it;
      ++offset;
    }

  return build_call_expr_loc_array (BUILTINS_LOCATION, fndecl, dlen+1, args);
}

tree gpy_builtin_fold_attrib (const char * identifier,
			      tree addr,
			      tree offset)
{
  tree string_type = build_array_type (char_type_node,
				       build_index_type (size_int (
								   strlen (identifier)
								   )
							 ));
  string_type = build_qualified_type (string_type, TYPE_QUAL_CONST);
  gpy_preserve_from_gc (string_type);

  tree fntype = build_function_type_list (gpy_attrib_type_ptr,
					  string_type,
					  build_pointer_type (unsigned_char_type_node),
					  integer_type_node,
					  NULL_TREE);
  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_attribute"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree identifier_tree = build_string (strlen (identifier), identifier);
  TREE_TYPE (identifier_tree) = string_type;

  return build_call_expr (fndecl, 3, identifier_tree,
			  addr, offset);
}

tree gpy_builtin_fold_attribs_list (VEC(tree,gc) * attribs)
{
  tree fntype = build_function_type_list (gpy_attrib_type_ptr_ptr,
					  integer_type_node,
					  va_list_type_node,
					  NULL_TREE);

  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_get_object_state"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  int veclen = VEC_length (tree,attribs);
  tree * vec = XNEWVEC (tree, veclen+1);

  vec[0] = build_int_cst (integer_type_node, 1);

  int idx, offset = 1;
  tree it = NULL_TREE;
  for (idx = 0; VEC_iterate (tree,attribs,idx,it); ++idx)
    {
      vec[offset] = it;
      offset++;
    }

  return build_call_expr_loc_array (BUILTINS_LOCATION, fndecl, veclen, vec);
}

tree gpy_builtin_get_object_state (tree decl)
{
  tree fntype = build_function_type_list (ptr_type_node,
					  gpy_object_type_ptr,
					  NULL_TREE);

  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_get_object_state"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  return build_call_expr (fndecl, 1, decl);
}

tree gpy_builtin_setup_globls (tree globls, int n, ...)
{
  tree fntype = build_function_type_list (void_type_node,
					  gpy_vector_type_ptr,
					  integer_type_node,
					  va_list_type_node,
					  NULL_TREE);

  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_setup_globals"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree *args = XNEWVEC (tree, n+2);

  args[0] = globls;
  args[1] = build_int_cst (integer_type_node, n);

  va_list vl;
  va_start (vl, n);

  int idx, offset = 2;
  for (idx = 0; idx < n; ++idx)
    {
      tree addr = va_arg (vl, tree);
      args[offset] = addr;
      offset++;
    }
  va_end (vl);

  return build_call_expr_loc_array (UNKNOWN_LOCATION, fndecl, n+2, args);
}

tree gpy_builtin_get_fold_call (bool lex, tree decl, tree globls,
				const char * ident)
{
  tree fntype = build_function_type_list (gpy_object_type_ptr,
					  integer_type_node,
					  gpy_object_type_ptr,
					  gpy_object_type_ptr,
					  NULL_TREE);
  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_call"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree string_type = build_array_type (char_type_node,
				       build_index_type (size_int (
								   strlen (ident)
								   )
							 ));
  string_type = build_qualified_type (string_type, TYPE_QUAL_CONST);
  gpy_preserve_from_gc (string_type);
  
  tree identifier_tree = build_string (strlen (ident), ident);
  TREE_TYPE (identifier_tree) = string_type;

  return build_call_expr (fndecl, 4, build_int_cst (integer_type_node, lex),
			  decl, globls, 
			  identifier_tree);
}

tree gpy_builtin_get_attrib_ref_flat (tree head, const char * attrib)
{
  tree string_parm_type = build_pointer_type (char_type_node);
  tree cchar_t = build_qualified_type (string_parm_type, TYPE_QUAL_CONST);

  tree fntype = build_function_type_list (unsigned_char_type_node,
					  gpy_object_type_ptr,
					  cchar_t,
					  NULL_TREE);
  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_call"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree string_type = build_array_type (char_type_node,
				       build_index_type (size_int (
								   strlen (attrib)
								   )
							 ));
  string_type = build_qualified_type (string_type, TYPE_QUAL_CONST);
  gpy_preserve_from_gc (string_type);

  tree identifier_tree = build_string (strlen (attrib), attrib);
  TREE_TYPE (identifier_tree) = string_type;

  return build_call_expr (fndecl, 2, head, identifier_tree);
}

tree gpy_builtin_setup_globls_namespace (tree main_self)
{
  tree fntype = build_function_type_list (gpy_vector_type_ptr,
					  ptr_type_node, NULL_TREE);

  tree fndecl = build_decl (UNKNOWN_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_setup_globls_namespace"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree call =  build_call_expr (fndecl, 1, main_self);

  return call;
}

tree gpy_builtin_get_fold_functor_decl (const char * ident, tree fndecl_addr)
{
  gcc_assert (TREE_CODE(fndecl_addr) == FUNCTION_DECL);

  tree string_parm_type = build_pointer_type (char_type_node);
  tree cchar_t = build_qualified_type (string_parm_type, TYPE_QUAL_CONST);

  tree fntype = build_function_type_list (gpy_object_type_ptr,
					  cchar_t,
					  gpy_object_type_ptr,
					  NULL_TREE);
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_functor_decl"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree string_type = build_array_type (char_type_node,
				       build_index_type (size_int (
								   strlen (ident)
								   )
							 ));
  string_type = build_qualified_type (string_type, TYPE_QUAL_CONST);
  gpy_preserve_from_gc (string_type);

  tree identifier_tree = build_string (strlen (ident), ident);
  TREE_TYPE (identifier_tree) = string_type;

  return build_call_expr (fndecl, 2, identifier_tree,
			  build_fold_addr_expr (fndecl_addr));
}

tree gpy_builtin_get_fold_class_decl (tree attribs, tree size, const char * identifier)
{
  tree string_parm_type = build_pointer_type (char_type_node);
  tree cchar_t = build_qualified_type (string_parm_type, TYPE_QUAL_CONST);

  tree fntype = build_function_type_list (gpy_object_type_ptr,
					  gpy_attrib_type_ptr_ptr,
					  integer_type_node,
					  cchar_t,
					  NULL_TREE);
  tree fndecl = build_decl (BUILTINS_LOCATION, FUNCTION_DECL,
			    get_identifier ("gpy_rr_fold_functor_decl"),
			    fntype);
  tree restype = TREE_TYPE (fndecl);
  tree resdecl = build_decl (BUILTINS_LOCATION, RESULT_DECL, NULL_TREE,
			     restype);
  DECL_CONTEXT (resdecl) = fndecl;
  DECL_RESULT (fndecl) = resdecl;
  DECL_EXTERNAL (fndecl) = 1;
  TREE_PUBLIC (fndecl) = 1;

  tree string_type = build_array_type (char_type_node,
				       build_index_type (size_int (
								   strlen (identifier)
								   )
							 ));
  string_type = build_qualified_type (string_type, TYPE_QUAL_CONST);
  gpy_preserve_from_gc (string_type);

  tree identifier_tree = build_string (strlen (identifier), identifier);
  TREE_TYPE (identifier_tree) = string_type;

  return build_call_expr (fndecl, 3, attribs, size, identifier_tree);
}

tree gpy_builtin_get_eval_expression_call (tree t1, tree t2, opcode_t op)
{
  tree params = NULL_TREE;

  chainon( params, tree_cons (NULL_TREE, ptr_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, ptr_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, integer_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, void_type_node, NULL_TREE) );

  tree fntype = build_function_type( ptr_type_node, params );
  tree gpy_eval_expr_decl = build_decl( UNKNOWN_LOCATION, FUNCTION_DECL,
					get_identifier ("gpy_rr_eval_expression"),
					fntype );
  tree restype = TREE_TYPE(gpy_eval_expr_decl);
  tree resdecl = build_decl( UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype );
  DECL_CONTEXT( resdecl ) = gpy_eval_expr_decl;
  DECL_RESULT( gpy_eval_expr_decl ) = resdecl;
  DECL_EXTERNAL( gpy_eval_expr_decl ) = 1;
  TREE_PUBLIC( gpy_eval_expr_decl ) = 1;

  return build_call_expr (gpy_eval_expr_decl, 3, t1, t2,
			  build_int_cst (integer_type_node, op));
}

tree gpy_builtin_get_incr_ref_call (tree x)
{
  tree params = NULL_TREE;

  chainon( params, tree_cons (NULL_TREE, ptr_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, void_type_node, NULL_TREE) );

  tree fntype = build_function_type( ptr_type_node, params );
  tree gpy_incr_ref_decl = build_decl( UNKNOWN_LOCATION, FUNCTION_DECL,
					get_identifier("gpy_rr_incr_ref_count"),
					fntype );
  tree restype = TREE_TYPE( gpy_incr_ref_decl );
  tree resdecl = build_decl( UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype );
  DECL_CONTEXT( resdecl ) = gpy_incr_ref_decl;
  DECL_RESULT( gpy_incr_ref_decl ) = resdecl;
  DECL_EXTERNAL( gpy_incr_ref_decl ) = 1;
  TREE_PUBLIC( gpy_incr_ref_decl ) = 1;

  return build_call_expr (gpy_incr_ref_decl, 1, x);
}

tree gpy_builtin_get_decr_ref_call (tree x)
{
  tree params = NULL_TREE;

  chainon( params, tree_cons (NULL_TREE, ptr_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, void_type_node, NULL_TREE) );

  tree fntype = build_function_type( ptr_type_node, params );
  tree gpy_decr_ref_decl = build_decl( UNKNOWN_LOCATION, FUNCTION_DECL,
					get_identifier ("gpy_rr_decr_ref_count"),
					fntype );
  tree restype = TREE_TYPE( gpy_decr_ref_decl );
  tree resdecl = build_decl( UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype );
  DECL_CONTEXT( resdecl ) = gpy_decr_ref_decl;
  DECL_RESULT( gpy_decr_ref_decl ) = resdecl;
  DECL_EXTERNAL( gpy_decr_ref_decl ) = 1;
  TREE_PUBLIC( gpy_decr_ref_decl ) = 1;

  return build_call_expr (gpy_decr_ref_decl, 1, x);
}

tree gpy_builtin_get_print_call (int n, tree * args)
{
  tree params = NULL_TREE;

  chainon( params, tree_cons (NULL_TREE, integer_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, integer_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, va_list_type_node, NULL_TREE) );
  chainon( params, tree_cons (NULL_TREE, void_type_node, NULL_TREE) );

  tree fntype = build_function_type( ptr_type_node, params );
  tree gpy_eval_print_decl = build_decl( UNKNOWN_LOCATION, FUNCTION_DECL,
					get_identifier("gpy_rr_eval_print"),
					fntype );
  tree restype = TREE_TYPE(gpy_eval_print_decl);
  tree resdecl = build_decl( UNKNOWN_LOCATION, RESULT_DECL, NULL_TREE,
			     restype );
  DECL_CONTEXT( resdecl ) = gpy_eval_print_decl;
  DECL_RESULT( gpy_eval_print_decl ) = resdecl;
  DECL_EXTERNAL( gpy_eval_print_decl ) = 1;
  TREE_PUBLIC( gpy_eval_print_decl ) = 1;

  tree * vec = XNEWVEC (tree, n+2);

  vec[0] = build_int_cst (integer_type_node, 1);
  vec[1] = build_int_cst (integer_type_node, n);

  int idx = 2, idy = 0;
  for (; idy<n; ++idy)
    {
      vec[idx] = args[idy];
      idx++;
    }

  return build_call_expr_loc_array (UNKNOWN_LOCATION, gpy_eval_print_decl,
				    n+2, vec);
}

static
tree gpy_build_py_vector_type (void)
{
  tree vec_struct_type = make_node (RECORD_TYPE);

  tree field = build_decl (BUILTINS_LOCATION, FIELD_DECL, get_identifier ("vector"),
			   build_pointer_type (ptr_type_node));
  DECL_CONTEXT (field) = vec_struct_type;
  TYPE_FIELDS (vec_struct_type) = field;
  tree last_field = field;

  field = build_decl (BUILTINS_LOCATION, FIELD_DECL, get_identifier ("size"),
		      integer_type_node);
  DECL_CONTEXT (field) = vec_struct_type;
  DECL_CHAIN (last_field) = field;
  last_field = field;

  field = build_decl (BUILTINS_LOCATION, FIELD_DECL, get_identifier ("length"),
		      integer_type_node);
  DECL_CONTEXT (field) = vec_struct_type;
  DECL_CHAIN (last_field) = field;

  layout_type (vec_struct_type);
  tree ident = get_identifier ("gpy_vector_t");
  tree type_decl = build_decl (BUILTINS_LOCATION, TYPE_DECL, ident,
			       vec_struct_type);
  DECL_ARTIFICIAL (type_decl) = 1;
  TYPE_NAME (vec_struct_type) = ident;

  gpy_preserve_from_gc (type_decl);
  rest_of_decl_compilation (type_decl, 1, 0);

  return vec_struct_type;
}

static
tree gpy_build_py_attrib_type (void)
{
  tree attrib_struct_type = make_node (RECORD_TYPE);

  tree field = build_decl (BUILTINS_LOCATION, FIELD_DECL,
			   get_identifier ("identifier"),
			   gpy_const_char_ptr);
  DECL_CONTEXT (field) = attrib_struct_type;
  TYPE_FIELDS (attrib_struct_type) = field;

  tree last_field = field;

  field = build_decl (BUILTINS_LOCATION, FIELD_DECL,
		      get_identifier ("offset"),
		      unsigned_type_node);
  DECL_CONTEXT (field) = attrib_struct_type;
  DECL_CHAIN (last_field) = field;
  last_field = field;

  field = build_decl (BUILTINS_LOCATION, FIELD_DECL,
		      get_identifier ("addr"),
		      gpy_object_type_ptr);
  DECL_CONTEXT (field) = attrib_struct_type;
  DECL_CHAIN (last_field) = field;

  layout_type (attrib_struct_type);
  tree ident = get_identifier ("gpy_object_attrib_t");
  tree type_decl = build_decl (BUILTINS_LOCATION, TYPE_DECL, ident,
			       attrib_struct_type);
  DECL_ARTIFICIAL (type_decl) = 1;
  TYPE_NAME (attrib_struct_type) = ident;

  gpy_preserve_from_gc (type_decl);
  rest_of_decl_compilation (type_decl, 1, 0);

  return attrib_struct_type;
}

static
tree gpy_build_py_object_type (void)
{
  tree object_state_struct_Type = make_node (RECORD_TYPE);
  
  tree name = get_identifier("identifier");
  tree field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name,
			  build_pointer_type(char_type_node));
  DECL_CONTEXT(field) = object_state_struct_Type;
  TYPE_FIELDS(object_state_struct_Type) = field;
  tree last_field = field;

  name = get_identifier("ref_count");
  field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name, integer_type_node);
  DECL_CONTEXT(field) = object_state_struct_Type;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  name = get_identifier("state");
  field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name,
		     ptr_type_node);
  DECL_CONTEXT(field) = object_state_struct_Type;
  DECL_CHAIN(last_field) = field;
  last_field = field;
  
  name = get_identifier("definition");
  field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name,
		     ptr_type_node);
  DECL_CONTEXT(field) = object_state_struct_Type;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  layout_type(object_state_struct_Type);

  // Give the struct a name for better debugging info.
  name = get_identifier ("gpy_object_state_t");
  tree object_state_type_decl = build_decl (BUILTINS_LOCATION, TYPE_DECL, name,
					    object_state_struct_Type);
  DECL_ARTIFICIAL(object_state_type_decl) = 1;
  TYPE_NAME(object_state_struct_Type) = object_state_type_decl;
  gpy_preserve_from_gc(object_state_type_decl);
  rest_of_decl_compilation(object_state_type_decl, 1, 0);

  debug_tree (object_state_type_decl);
  tree object_state_ptr_type = build_pointer_type (object_state_struct_Type);
  gpy_preserve_from_gc (object_state_ptr_type);

  //....................

  tree union_type__ = make_node (UNION_TYPE);

  name = get_identifier ("object_state");
  field = build_decl (BUILTINS_LOCATION, FIELD_DECL, name,
		      object_state_ptr_type);
  DECL_CONTEXT(field) = union_type__;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  name = get_identifier ("literal");
  field = build_decl (BUILTINS_LOCATION, FIELD_DECL, name,
		      ptr_type_node);
  DECL_CONTEXT(field) = union_type__;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  layout_type (union_type__);
  
  name = get_identifier("o");
  tree union_type_decl = build_decl(BUILTINS_LOCATION, TYPE_DECL, name,
				    union_type__);
  DECL_ARTIFICIAL(union_type_decl) = 1;
  TYPE_NAME(union_type__) = union_type_decl;
  gpy_preserve_from_gc(union_type_decl);
  rest_of_decl_compilation(union_type_decl, 1, 0);

  //.........................

  tree gpy_object_struct_Type = make_node (RECORD_TYPE);
  
  name = get_identifier("type");
  field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name, integer_type_node);
  DECL_CONTEXT(field) = gpy_object_struct_Type;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  field = build_decl(BUILTINS_LOCATION, FIELD_DECL, name,
		     union_type_decl);
  DECL_CONTEXT(field) = gpy_object_struct_Type;
  DECL_CHAIN(last_field) = field;
  last_field = field;

  layout_type (object_state_struct_Type);
  
  name = get_identifier ("gpy_object_t");
  tree gpy_object_type_decl = build_decl(BUILTINS_LOCATION, TYPE_DECL, name,
					 gpy_object_struct_Type);
  DECL_ARTIFICIAL(gpy_object_type_decl) = 1;
  TYPE_NAME(gpy_object_struct_Type) = name;
  gpy_preserve_from_gc(gpy_object_type_decl);
  rest_of_decl_compilation(gpy_object_type_decl, 1, 0);

  return build_pointer_type (gpy_object_struct_Type);
}

void gpy_initilize_types (void)
{
  gpy_builtin_types_vec = VEC_alloc (tree,gc,0);

  tree const_char_type = build_qualified_type (unsigned_char_type_node,
					       TYPE_QUAL_CONST);
  tree ctype = build_pointer_type (const_char_type);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 gpy_build_py_object_type ());
  gpy_preserve_from_gc (gpy_object_type_ptr);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 build_pointer_type (gpy_object_type_ptr));
  gpy_preserve_from_gc (gpy_object_type_ptr_ptr);
  
  VEC_safe_push (tree, gc, gpy_builtin_types_vec, ctype);
  gpy_preserve_from_gc (gpy_const_char_ptr);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 gpy_build_py_vector_type ());
  gpy_preserve_from_gc (gpy_vector_type);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 build_pointer_type (gpy_vector_type));
  gpy_preserve_from_gc (gpy_vector_type_ptr);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 build_pointer_type (gpy_vector_type_ptr));
  gpy_preserve_from_gc (gpy_vector_type_ptr_ptr);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 gpy_build_py_attrib_type ());
  gpy_preserve_from_gc (gpy_attrib_type);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 gpy_attrib_type);
  gpy_preserve_from_gc (gpy_attrib_type_ptr);

  VEC_safe_push (tree, gc, gpy_builtin_types_vec,
		 build_pointer_type (gpy_attrib_type_ptr));
  gpy_preserve_from_gc (gpy_attrib_type_ptr_ptr);
}
