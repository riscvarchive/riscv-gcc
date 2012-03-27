/* This file is part of GCC.

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
<http://www.gnu.org/licenses/>. */

#ifndef __GCC_PY_IL_TREE_H__
#define __GCC_PY_IL_TREE_H__

extern VEC(tree,gc) * gpy_builtin_types_vec;

#define gpy_object_type_ptr      VEC_index (tree, gpy_builtin_types_vec, 0)
#define gpy_object_type_ptr_ptr  VEC_index (tree, gpy_builtin_types_vec, 1)
#define gpy_const_char_ptr       VEC_index (tree, gpy_builtin_types_vec, 2)
#define gpy_vector_type          VEC_index (tree, gpy_builtin_types_vec, 3)
#define gpy_vector_type_ptr      VEC_index (tree, gpy_builtin_types_vec, 4)
#define gpy_vector_type_ptr_ptr  VEC_index (tree, gpy_builtin_types_vec, 5)
#define gpy_attrib_type          VEC_index (tree, gpy_builtin_types_vec, 6)
#define gpy_attrib_type_ptr      VEC_index (tree, gpy_builtin_types_vec, 7)
#define gpy_attrib_type_ptr_ptr  VEC_index (tree, gpy_builtin_types_vec, 8)
#define gpy_unsigned_char_ptr    build_pointer_type (unsigned_char_type_node)

extern VEC(tree,gc) * gpy_stmt_pass_generate_types (VEC(gpydot,gc) *);
extern VEC(tree,gc) * gpy_dot_pass_generificify (VEC(tree,gc) *, VEC(gpydot,gc) *);

extern char * gpy_dot_pass_generificify_gen_concat (const char *, const char *);
#define GPY_dot_pass_generificify_gen_concat_identifier(X_, Y_)	\
  get_identifier (gpy_dot_pass_generificify_gen_concat (X_, Y_))

extern gpy_dot_tree_t * gpy_stmt_process_AST_Align (gpy_dot_tree_t **);
extern void gpy_types_init (void);

extern void gpy_initilize_types (void);
extern void gpy_stmt_process_decl (gpy_dot_tree_t * const);

/* Appends vector y on x */  
#define GPY_VEC_stmts_append(T,x,y)			\
  do {							\
    int x_; T t_ = NULL_TREE;				\
    for (x_ = 0; VEC_iterate (T,y,x_,t_); ++x_)		\
      {							\
        VEC_safe_push (T, gc, x, t_);			\
      }							\
  } while (0);						\

/* Passes */
extern VEC(gpydot,gc) * gpy_stmt_pass_check1 (VEC(gpydot,gc) *);
extern VEC(gpydot,gc) * gpy_stmt_pass_const_fold (VEC(gpydot,gc) *);
extern VEC(gpydot,gc) * gpy_stmt_pass_translate (VEC(gpydot,gc) *);
extern VEC(gpydot,gc) * gpy_stmt_pass_pretty_print (VEC(gpydot,gc) *);

#endif //__PYGCC_PY_IL_TREE_H__
