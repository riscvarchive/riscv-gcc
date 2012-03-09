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

#ifndef __GCC_OBJECTS_H__
#define __GCC_OBJECTS_H__

enum GPY_LIT_T {
  TYPE_INTEGER,
  TYPE_STRING,
  TYPE_BOOLEAN,
  TYPE_FLOAT,
  TYPE_ADDR,
  TYPE_ATTRIB_L,
  TYPE_VECTOR,
  TYPE_NONE,
};

enum GPY_OBJECT_T {
  TYPE_OBJECT_STATE,
  TYPE_OBJECT_DECL,
  TYPE_OBJECT_LIT,
  TYPE_NULL,
};

typedef struct gpy_rr_literal_t {
  enum GPY_LIT_T type;
  union {
    int integer;
    float decimal;
    char * string;
    bool boolean;
    unsigned char * addr;
    struct gpy_object_attrib_t ** attribs;
  } literal ;
} gpy_literal_t ;

#define Gpy_Lit_Init(x)				\
  x = gpy_malloc (sizeof(gpy_literal_t));	\
  x->type = TYPE_NONE;				\
  x->literal.integer = 0;

typedef struct gpy_rr_object_state_t {
  char * identifier;
  signed int ref_count;
  void * state;
  struct gpy_typedef_t * definition;
} gpy_object_state_t ;

typedef struct gpy_object_t {
  enum GPY_OBJECT_T T;
  union {
    gpy_object_state_t * object_state;
    gpy_literal_t * literal;
  } o ;
} gpy_object_t ;

typedef void (*fndecl)(gpy_vector_t *);
typedef gpy_object_t * (*binary_op)(gpy_object_t *, gpy_object_t *);
typedef struct gpy_number_prot_t
{
  binary_op n_add;
  binary_op n_sub;
  binary_op n_div;
  binary_op n_mul;
  binary_op n_pow;
  binary_op n_let;
  binary_op n_lee;
  binary_op n_get;
  binary_op n_gee;
  binary_op n_eee;
  binary_op n_nee;
  binary_op n_orr;
  binary_op n_and;
} gpy_num_prot_t ;

typedef struct gpy_object_attrib_t {
  const char * identifier;
  unsigned int offset;
  gpy_object_t * addr;
} gpy_object_attrib_t;

typedef struct gpy_typedef_t {
  const char * identifier;
  size_t state_size;
  gpy_object_t * (*tp_new)(struct gpy_typedef_t *, gpy_object_t **);
  void (*tp_dealloc)(gpy_object_t *);
  void (*tp_print)(gpy_object_t * , FILE *, bool);
  gpy_object_t * (*tp_call) (gpy_vector_t *, gpy_object_t *, gpy_object_t **);
  struct gpy_number_prot_t * binary_protocol;
  struct gpy_object_attrib_t ** members_defintion;
} gpy_typedef_t ;

#define NULL_OBJ_STATE (gpy_object_state_t *) NULL
#define NULL_OBJECT (gpy_object_t *) NULL

extern void gpy_rr_init_runtime (void);
extern gpy_object_t * gpy_rr_fold_integer (int);

extern bool gpy_args_check_fmt (gpy_object_t **, const char *);

extern int gpy_args_lit_parse_int (gpy_object_t *);
extern char * gpy_args_lit_parse_string (gpy_object_t *);
extern unsigned char * gpy_args_lit_parse_pointer (gpy_object_t *);
extern gpy_object_attrib_t ** gpy_args_lit_parse_attrib_table (gpy_object_t *);

extern gpy_object_t * gpy_create_object_state (gpy_typedef_t *, void *);
extern gpy_object_t * gpy_create_object_decl (gpy_typedef_t *, void *);

extern void gpy_obj_integer_mod_init (gpy_vector_t * const);
extern void gpy_rr_init_primitives (void);

#endif //__GCC_OBJECTS_H__
