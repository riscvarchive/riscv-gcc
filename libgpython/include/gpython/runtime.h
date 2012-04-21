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

#ifndef __GCC_RUNTIME_H__
#define __GCC_RUNTIME_H__

/*
  accesors to the internal types...
 */
#define __gpy_integer_type_node				\
  (gpy_typedef_t *) __GPY_GLOBL_PRIMITIVES->vector[0]
#define __gpy_staticmethod_type_node			\
  (gpy_typedef_t *) __GPY_GLOBL_PRIMITIVES->vector[1]
#define __gpy_class_type_node				\
  (gpy_typedef_t *) __GPY_GLOBL_PRIMITIVES->vector[2]
#define __gpy_classmethod_type_node			\
  (gpy_typedef_t *) __GPY_GLOBL_PRIMITIVES->vector[3]

extern gpy_object_t * gpy_rr_fold_staticmethod_decl (const char *, unsigned char *);
extern gpy_object_t * gpy_rr_fold_classmethod_decl (const char *, unsigned char *);
extern unsigned char * gpy_rr_eval_attrib_reference (gpy_object_t *, const char *);

extern void gpy_rr_eval_print (int, int, ...);

#endif //__GCC_RUNTIME_H__
