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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>

#include <gpython/gpython.h>
#include <gpython/vectors.h>
#include <gpython/objects.h>

unsigned char * __GPY_GLOBL_RR_STACK;

#define GPY_STACK_SIZE_OFFSET        0
#define GPY_STACK_DATA_OFFSET        SIZEOF_INT
#define GPY_STACK_PRIMTIVES_OFFSET   SIZEOF_INT * 2
#define GPY_STACK_CALL_OFFSET        GPY_STACK_PRIMTIVES_OFFSET + sizeof (gpy_vector_t)
#define GPY_STACK_RETURN_ADDR_OFFSET GPY_STACK_CALL_OFFSET + sizeof (gpy_vector_t)
/*
  Runtime stack is the globl state for globals access which
  will have read write lock eventually for concurrency

  Format of the stack will be

  -----------------
   stack-size (int)
  -----------------
   stack-header-offset (int)
  -----------------
   vector of primitives (gpy_vector_t)
  -----------------
   stack trace (gpy_vector_t)
  ----------------
   return address (gpy_object_t *)
  ----------------
   possible more runtime data...
  ----------------
   vector of globl symbols (gpy_object_t **)
  ----------------

   We will need to add more meta data to this for exceptions and calls etc
*/
int __GPY_GLOBL_RR_STACK_SIZE =
    (sizeof (int) * 2)
  + (sizeof (gpy_vector_t) * 2)
  +  sizeof (gpy_object_t *);
int __GPY_GLOBL_RR_STACK_DATA_OFFSET = __GPY_GLOBL_RR_STACK_SIZE;

gpy_vector_t * __GPY_GLOBL_CALL_STACK;
gpy_vector_t * __GPY_GLOBL_PRIMITIVES;
gpy_object_t * __GPY_GLOBL_RETURN_ADDR;
gpy_object_t ** __GPY_GLOBL_RR_STACK_POINTER;

static
void gpy_rr_init_primitives (void)
{
  gpy_obj_integer_mod_init (__GPY_GLOBL_PRIMITIVES);
  gpy_obj_functor_mod_init (__GPY_GLOBL_PRIMITIVES);
  gpy_obj_class_mod_init (__GPY_GLOBL_PRIMITIVES);
}

static
void gpy_rr_init_runtime_stack (void)
{
  __GPY_GLOBL_RR_STACK = gpy_malloc (__GPY_GLOBL_RR_STACK_SIZE);
  
  unsigned char * pointer = __GPY_GLOBL_RR_STACK;
  *((int *) pointer) = __GPY_GLOBL_RR_STACK_SIZE;
  pointer += sizeof (int);
  *((int *) pointer) = __GPY_GLOBL_RR_STACK_DATA_OFFSET;
  pointer += sizeof (int);

  gpy_vector_t vec = *((gpy_vector_t *) pointer);
  gpy_vec_init (&vec);
  __GPY_GLOBL_PRIMITIVES = &vec;
  
  pointer += sizeof (gpy_vector_t);

  vec = *((gpy_vector_t *) pointer);
  gpy_vec_init (&vec);
  __GPY_GLOBL_CALL_STACK = &vec;

  pointer += sizeof (gpy_vector_t);
  *((gpy_object_t **) pointer) = NULL;
  __GPY_GLOBL_RETURN_ADDR = *((gpy_object_t **) pointer);

  pointer += sizeof (gpy_object_t *);
  __GPY_GLOBL_RR_STACK_POINTER = (gpy_object_t **) pointer;
}

/* remember to update the stack pointer's and the stack size */
void gpy_rr_extend_runtime_stack (int size)
{
  __GPY_GLOBL_RR_STACK_SIZE += size;
  __GPY_GLOBL_RR_STACK = gpy_realloc (__GPY_GLOBL_RR_STACK,
				      __GPY_GLOBL_RR_STACK_SIZE);
  unsigned char * pointer = __GPY_GLOBL_RR_STACK;
  *((int *) pointer) = __GPY_GLOBL_RR_STACK_SIZE;
  pointer += sizeof (int);
  *((int *) pointer) = __GPY_GLOBL_RR_STACK_DATA_OFFSET;
  pointer += sizeof (int);

  gpy_vector_t vec = *((gpy_vector_t *) pointer);
  gpy_vec_init (&vec);
  __GPY_GLOBL_PRIMITIVES = &vec;
  
  pointer += sizeof (gpy_vector_t);

  vec = *((gpy_vector_t *) pointer);
  gpy_vec_init (&vec);
  __GPY_GLOBL_CALL_STACK = &vec;

  pointer += sizeof (gpy_vector_t);
  *((gpy_object_t **) pointer) = NULL;
  __GPY_GLOBL_RETURN_ADDR = *((gpy_object_t **) pointer);

  pointer += sizeof (gpy_object_t *);
  __GPY_GLOBL_RR_STACK_POINTER = (gpy_object_t **) pointer;
}

void gpy_rr_init_runtime (void)
{
  gpy_rr_init_runtime_stack ();
  gpy_rr_init_primitives ();
}

void gpy_rr_cleanup_final (void)
{
  /*
    Cleanup the runtime stack and all other object data
   */
  mpfr_free_cache ();
}

gpy_object_attrib_t * gpy_rr_fold_attribute (const char * identifier,
					     unsigned char * code_addr,
					     unsigned int offset)
{
  gpy_object_attrib_t * attrib = gpy_malloc (sizeof (gpy_object_attrib_t));
  attrib->identifier = identifier;
  if (code_addr)
    {
      attrib->addr = gpy_rr_fold_functor_decl (identifier, code_addr);
    }
  else
    attrib->addr = NULL;

  attrib->offset = offset;
  return attrib;
}

gpy_object_attrib_t ** gpy_rr_fold_attrib_list (int n, ...)
{
  gpy_object_attrib_t ** retval = NULL;
  if (n > 0)
    {
      /* +1 for the sentinal */
      retval = (gpy_object_attrib_t **)
	gpy_calloc (n+1, sizeof (gpy_object_attrib_t *));

      va_list ap;
      int idx;
      va_start (ap, n);
      for (idx = 0; idx < n; ++idx)
	{
	  gpy_object_attrib_t * i = va_arg (ap, gpy_object_attrib_t *);
	  retval[idx] = i;
	}
      /* sentinal */
      retval[idx] = NULL;
    }
  return retval;
}

gpy_object_t * gpy_rr_fold_class_decl (gpy_object_attrib_t ** attribs,
				       int size, const char * identifier)
{
  gpy_object_t * retval = NULL_OBJECT;

  gpy_object_t ** args = (gpy_object_t **)
    gpy_calloc (4, sizeof(gpy_object_t*));

  gpy_literal_t A;
  A.type = TYPE_ATTRIB_L;
  A.literal.attribs = attribs;

  gpy_literal_t i;
  i.type = TYPE_INTEGER;
  i.literal.integer = size;

  gpy_literal_t s;
  s.type = TYPE_STRING;
  s.literal.string = (char *) identifier;

  gpy_object_t a1 = { .T = TYPE_OBJECT_LIT, .o.literal = &A };
  gpy_object_t a2 = { .T = TYPE_OBJECT_LIT, .o.literal = &i };
  gpy_object_t a3 = { .T = TYPE_OBJECT_LIT, .o.literal = &s };
  gpy_object_t a4 = { .T = TYPE_NULL, .o.literal = NULL };

  args[0] = &a1;
  args[1] = &a2;
  args[2] = &a3;
  args[3] = &a4;

  gpy_typedef_t * def = (gpy_typedef_t *)
    __GPY_GLOBL_PRIMITIVES->vector[2];
  gpy_assert (def);

  retval = def->tp_new (def, args);
  gpy_free(args);

  debug ("initilized class object <%p> to <%s>!\n",
	 (void*)retval, identifier);
  gpy_assert (retval->T == TYPE_OBJECT_DECL);

  return retval;
}

gpy_object_t * gpy_rr_fold_functor_decl (const char * identifier,
					 unsigned char * code_addr)
{
  gpy_object_t * retval = NULL_OBJECT;

  gpy_object_t ** args = (gpy_object_t **)
    gpy_calloc (3, sizeof(gpy_object_t*));

  gpy_literal_t i;
  i.type = TYPE_STRING;
  i.literal.string = (char *)identifier;

  gpy_literal_t p;
  p.type = TYPE_ADDR;
  p.literal.addr = code_addr;

  gpy_object_t a1 = { .T = TYPE_OBJECT_LIT, .o.literal = &i };
  gpy_object_t a2 = { .T = TYPE_OBJECT_LIT, .o.literal = &p };
  gpy_object_t a3 = { .T = TYPE_NULL, .o.literal = NULL };

  args[0] = &a1;
  args[1] = &a2;
  args[2] = &a3;

  gpy_typedef_t * def = (gpy_typedef_t *)
    __GPY_GLOBL_PRIMITIVES->vector[1];
  gpy_assert (def);

  retval = def->tp_new (def, args);
  gpy_free(args);

  debug ("initilized function object <%p> to <%s>!\n",
	 (void*)retval, identifier);
  gpy_assert (retval->T == TYPE_OBJECT_DECL);

  return retval;
}

gpy_object_t * gpy_rr_fold_integer (const int x)
{
  gpy_object_t * retval = NULL_OBJECT;

  gpy_object_t ** args = (gpy_object_t **)
    gpy_calloc (2, sizeof(gpy_object_t*));

  gpy_literal_t i;
  i.type = TYPE_INTEGER;
  i.literal.integer = x;

  gpy_object_t a1 = { .T = TYPE_OBJECT_LIT, .o.literal = &i };
  gpy_object_t a2 = { .T = TYPE_NULL, .o.literal = NULL };

  args[0] = &a1;
  args[1] = &a2;

  gpy_typedef_t * Int_def = (gpy_typedef_t *)
    __GPY_GLOBL_PRIMITIVES->vector[0];
  gpy_assert (Int_def);

  retval = Int_def->tp_new (Int_def, args);
  gpy_free(args);

  debug ("initilized integer object <%p> to <%i>!\n",
	 (void*)retval, x );
  gpy_assert (retval->T == TYPE_OBJECT_STATE);

  return retval;
}

inline
void * gpy_rr_get_object_state (gpy_object_t * o)
{
  gpy_assert (o);
  return o->o.object_state->state;
}

/**
 * int fd: we could use bit masks to represent:
 *   stdout/stderr ...
 **/
void gpy_rr_eval_print (int fd, int count, ...)
{
  va_list vl; int idx;
  va_start (vl,count);

  gpy_object_t * it = NULL;
  for (idx = 0; idx<count; ++idx)
    {
      it = va_arg (vl, gpy_object_t *);
      gpy_assert (it->T == TYPE_OBJECT_STATE);
      struct gpy_typedef_t * definition = it->o.object_state->definition;

      switch (fd)
	{
	case 1:
	  definition->tp_print (it, stdout, false);
	  break;

	case 2:
	  definition->tp_print (it, stderr, false);
	  break;

	default:
	  fatal ("invalid print file-descriptor <%i>!\n", fd );
	  break;
	}
    }

  fprintf (stdout, "\n");
  va_end (vl);
}

inline
void gpy_rr_incr_ref_count (gpy_object_t * x1)
{
  gpy_assert (x1->T == TYPE_OBJECT_STATE);
  gpy_object_state_t * x = x1->o.object_state;

  debug ("incrementing ref count on <%p>:<%i> to <%i>!\n",
	 (void*) x, x->ref_count, (x->ref_count + 1));
  x->ref_count++;
}

inline
void gpy_rr_decr_ref_count (gpy_object_t * x1)
{
  gpy_assert (x1->T == TYPE_OBJECT_STATE);
  gpy_object_state_t * x = x1->o.object_state;

  debug ("decrementing ref count on <%p>:<%i> to <%i>!\n",
	 (void*) x, x->ref_count, (x->ref_count - 1));
  x->ref_count--;
}

gpy_object_t * gpy_rr_eval_expression (gpy_object_t * x1,
				       gpy_object_t * y1,
				       unsigned int op)
{
  char * op_str = NULL;
  gpy_object_t * retval = NULL;

  gpy_assert (x1->T == TYPE_OBJECT_STATE);
  gpy_assert (y1->T == TYPE_OBJECT_STATE);
  gpy_object_state_t * x = x1->o.object_state;
  gpy_object_state_t * y = y1->o.object_state;

  struct gpy_typedef_t * def = x1->o.object_state->definition;
  struct gpy_number_prot_t * binops = (*def).binary_protocol;
  struct gpy_number_prot_t binops_l = (*binops);

  debug ("Eval expression!\n");

  binary_op o = NULL;
  switch( op )
    {
      /* addition */
    case 1:
      o = binops_l.n_add;
      op_str = "+ ";
      break;

      /* FINISH .... */

    default:
      fatal("unhandled binary operation <%x>!\n", op );
      break;
    }

  if (o)
    {
#ifdef DEBUG
      x->definition->tp_print (x1, stdout, false);
      fprintf (stdout, "%s", op_str );
      y->definition->tp_print (y1, stdout, true);
#endif
      retval = o (x1,y1);
#ifdef DEBUG
      fprintf (stdout, "evaluated to: ");
      retval->o.object_state->definition->tp_print (retval, stdout, false);
      fprintf (stdout, "!\n");
#endif
    }
  else
    fatal ("no binary protocol!\n");
 
  return retval;
}
