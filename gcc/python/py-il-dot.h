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

#ifndef __SYMBOLS_H_
#define __SYMBOLS_H__

/* DOT tree codes... */
typedef enum {
  D_PRINT_STMT,
  D_IDENTIFIER,
  
  D_MODIFY_EXPR,
  D_MULT_EXPR,
  D_DIVD_EXPR,
  D_ADD_EXPR,
  D_MINUS_EXPR,

  D_T_INTEGER,
  D_T_FLOAT,
  D_T_STRING,

  D_CALL_EXPR,
  D_ATTRIB_REF,

  D_STRUCT_CLASS,
  D_STRUCT_METHOD,

  D_D_EXPR,
  D_TD_COM,
  D_TD_DOT,
  D_TD_NULL,

  D_PRIMITIVE,
} opcode_t ; 

typedef struct GTY(()) gpy_tree_common_dot_t {
  opcode_t T;
  union {
    int integer;
    unsigned char c;
    char * string;
  } o;
} gpy_dot_tree_common ;

typedef struct GTY(()) gpy_tree_dot_t {
  opcode_t T, FT, opaT, opbT;
  /* location_t loc; */
  struct gpy_tree_dot_t * field;
  union {
    struct gpy_tree_dot_t * t;
    gpy_dot_tree_common * tc;
  } opa;
  union {
    struct gpy_tree_dot_t * t;
    gpy_dot_tree_common * tc;
  } opb;
  struct gpy_tree_dot_t * next;
} gpy_dot_tree_t ;

#define DOT_TYPE(x)      x->T
#define DOT_CHAIN(x)     x->next
#define DOT_T_FIELD(x)   x->FT
#define DOT_FIELD(x)     x->field

#define DOT_lhs_T(x)     x->opaT
#define DOT_rhs_T(x)     x->opbT

#define DOT_lhs_TT(x)    x->opa.t
#define DOT_rhs_TT(x)    x->opb.t
#define DOT_lhs_TC(x)    x->opa.tc
#define DOT_rhs_TC(x)    x->opb.tc

#define NULL_DOT         (gpy_dot_tree_t *)0
#define DOT_alloc        (gpy_dot_tree_t *)	\
  xmalloc (sizeof (gpy_dot_tree_t));
#define DOT_CM_alloc     (gpy_dot_tree_common *)	\
  xmalloc (sizeof (gpy_dot_tree_common))

#define DOT_IDENTIFIER_POINTER(x)		\
  DOT_lhs_TC(x)->o.string

extern gpy_dot_tree_t * dot_build_class_decl (gpy_dot_tree_t *, gpy_dot_tree_t *);
extern gpy_dot_tree_t * dot_build_func_decl (gpy_dot_tree_t *, gpy_dot_tree_t *,
					     gpy_dot_tree_t *);

extern gpy_dot_tree_t * dot_build_decl1 (opcode_t, gpy_dot_tree_t *);
extern gpy_dot_tree_t * dot_build_decl2 (opcode_t, gpy_dot_tree_t *, gpy_dot_tree_t *);

extern gpy_dot_tree_t * dot_build_integer (int);
extern gpy_dot_tree_t * dot_build_string (char *);
extern gpy_dot_tree_t * dot_build_identifier (const char *);

#endif /* __SYMBOLS_H_ */
