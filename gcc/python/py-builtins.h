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

#ifndef __BUILTINS_H__
#define __BUILTINS_H__

extern tree gpy_builtin_get_init_call (void);
extern tree gpy_builtin_get_cleanup_final_call (void);
extern tree gpy_builtin_get_fold_int_call (int);

extern tree gpy_builtin_get_incr_ref_call (tree);
extern tree gpy_builtin_get_decr_ref_call (tree);
extern tree gpy_builtin_get_fold_call (bool, tree, tree, const char *);

extern tree gpy_builtin_get_attrib_ref_flat (tree, const char *);
extern tree gpy_builtin_get_print_call (int, tree *);
extern tree gpy_builtin_get_eval_expression_call (tree, tree, opcode_t);

extern tree gpy_builtin_get_fold_functor_decl (const char *, tree);
extern tree gpy_builtin_get_fold_class_decl (tree, tree, const char *);

extern tree gpy_builtin_fold_attrib (const char *, tree, tree);
extern tree gpy_builtin_fold_attribs_list (VEC(tree,gc) *);

extern tree gpy_builtin_setup_globls (tree, int, ...);
extern tree gpy_builtin_setup_globls_namespace (tree);
extern tree gpy_builtin_get_object_state (tree);
extern tree gpy_stmt_pass_lower_gen_toplevl_offsets_table (tree, tree *);


#endif /* __BUILTINS_H__ */
