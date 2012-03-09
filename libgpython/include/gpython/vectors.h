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

#ifndef __GCC_VECTORS_H__
#define __GCC_VECTORS_H__

#define gpy_threshold_alloc(x) (((x)+16)*3/2)

typedef struct gpy_vector_t {
  void ** vector;
  int size, length;
} gpy_vector_t;

typedef gpy_vector_t * gpy_vec_t;
typedef unsigned long gpy_hashval_t;

typedef struct gpy_hash_entry {
  gpy_hashval_t hash;
  void * data;
} gpy_hash_entry_t ;

typedef struct gpy_hash_table_t {
  unsigned int size, length;
  gpy_hash_entry_t * array;
} gpy_hash_tab_t ;

#define Gpy_Vec_Head(V,T)			\
  (T)(V->vector[V->length-1])

extern gpy_hashval_t gpy_dd_hash_string (const char *);
extern gpy_hash_entry_t * gpy_dd_hash_lookup_table (gpy_hash_tab_t *, gpy_hashval_t);

extern void ** gpy_dd_hash_insert (const gpy_hashval_t , void * const ,
				   gpy_hash_tab_t * const);

extern void gpy_dd_hash_grow_table (gpy_hash_tab_t *);
extern void gpy_dd_hash_init_table (gpy_hash_tab_t *);
extern void gpy_vec_init (gpy_vector_t * const);

extern void gpy_vec_push (gpy_vector_t * const, void * const);
extern void * gpy_vec_pop (gpy_vector_t * const);
extern void gpy_vec_free (gpy_vector_t *);
extern void gpy_vec_frees (gpy_vector_t *, ...);

extern gpy_vector_t * gpy_primitives;
extern gpy_vector_t * gpy_namespace_vec;
extern gpy_vector_t * gpy_call_stack;

#endif //__GCC_VECTORS_H__
