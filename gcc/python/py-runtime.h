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

#ifndef __GCC_BUILTINS_H__
#define __GCC_BUILTINS_H__

#define GPY_GLOBL_STACK_id             "__GPY_GLOBL_RR_STACK"
#define GPY_GLOBL_STACK_SIZE_id        "__GPY_GLOBL_RR_STACK_SIZE"
#define GPY_GLOBL_STACK_DATA_OFFSET_id "__GPY_GLOBL_RR_STACK_DATA_OFFSET"
#define GPY_GLOBL_STACK_POINTER_id     "__GPY_GLOBL_RR_STACK_POINTER"

extern tree gpy_builtin_get_incr_ref_call (tree);
extern tree gpy_builtin_get_decr_ref_call (tree);

extern tree gpy_builtin_get_attrib_ref_flat (tree, const char *);
extern tree gpy_builtin_get_eval_expression_call (tree, tree, opcode_t);

extern tree gpy_builtin_get_fold_functor_decl (const char *, tree);
extern tree gpy_builtin_get_fold_class_decl (tree, tree, const char *);
extern tree gpy_builtin_get_fold_int_call (int);

extern tree gpy_builtin_fold_attrib (const char *, tree, tree);
extern tree gpy_builtin_fold_attribs_list (VEC(tree,gc) *);

extern tree gpy_builtin_get_print_call (int, tree *);
extern tree gpy_builtin_get_object_state (tree);

#endif /* __GCC_BUILTINS_H__ */
