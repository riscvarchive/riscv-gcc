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

gpy_vector_t * gpy_primitives;

extern gpy_object_t * gpy_rr_fold_functor_decl (const char *, unsigned char *);

void gpy_rr_init_primitives (void)
{
  gpy_primitives = (gpy_vector_t *)
    gpy_malloc (sizeof(gpy_vector_t));
  gpy_vec_init (gpy_primitives);

  gpy_obj_integer_mod_init (gpy_primitives);
  gpy_obj_functor_mod_init (gpy_primitives);
  gpy_obj_class_mod_init (gpy_primitives);
}

void gpy_rr_init_runtime (void)
{
  gpy_rr_init_primitives ();
}

void gpy_rr_cleanup_final (void)
{
  gpy_vec_free (gpy_primitives);
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
    gpy_primitives->vector[2];
  gpy_assert (def);

  retval = def->tp_new (def, args);
  gpy_free(args);

  debug ("initilized function object <%p> to <%s>!\n",
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
    gpy_primitives->vector[1];
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
    gpy_primitives->vector[0];
  gpy_assert (Int_def);

  retval = Int_def->tp_new (Int_def, args);
  gpy_free(args);

  debug ("initilized integer object <%p> to <%i>!\n",
	 (void*)retval, x );
  gpy_assert (retval->T == TYPE_OBJECT_STATE);

  return retval;
}

gpy_vector_t * gpy_rr_setup_globls_namespace (void *self)
{
  gpy_vector_t * retval = (gpy_vector_t *)
    gpy_malloc (sizeof (gpy_vector_t));
  gpy_vec_init (retval);

  gpy_object_state_t * state = (gpy_object_state_t *)
    gpy_malloc (sizeof(gpy_object_state_t));
  state->identifier = gpy_strdup ("main");
  state->ref_count = 0;
  state->state = self;
  state->definition = NULL;

  gpy_object_t * obj = (gpy_object_t *)
    gpy_malloc (sizeof(gpy_object_t));
  obj->T = TYPE_OBJECT_DECL;
  obj->o.object_state = state;

  gpy_vec_push (retval, obj);

  return retval;
}

void gpy_rr_setup_globals (gpy_vector_t * globls, int n, ...)
{
  gpy_assert (n == globls->length);
  va_list vl;
  va_start (vl, n);

  int idx;
  for (idx = 0; idx < n; ++idx)
    {
      gpy_object_t ** addr = va_arg (vl, gpy_object_t **);
      *addr = (gpy_object_t *) globls->vector[idx];
    }
  va_end (vl);
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

/* dont handle arguments yet ... */
gpy_object_t * gpy_rr_fold_call (bool lexical,
				 gpy_object_t * decl,
				 gpy_vector_t * globls,
				 const char * identifier
				 /* args */)
{
  /*
    if lexical means its defined in the code else its not and
    were looking up an internal type like int (), staticmethod ()
    etc ...
  */
  gpy_assert (lexical);
  gpy_object_t * retval = NULL_OBJECT;

  gpy_assert (decl->T == TYPE_OBJECT_DECL);
  gpy_typedef_t * type = decl->o.object_state->definition;
  gpy_assert (type->members_defintion);

  if (type->tp_call)
    {
      retval = type->tp_call (globls, decl, NULL);
    }
  else
    fatal ("name <%s> is not callable!\n", identifier);
    
  return retval;
}

unsigned char * gpy_rr_eval_attrib_reference (gpy_object_t * base,
					      const char * attrib)
{
  unsigned char * retval = NULL;
  gpy_assert (base->T == TYPE_OBJECT_STATE);

  gpy_typedef_t * type = base->o.object_state->definition;
  gpy_assert (type->members_defintion);

  struct gpy_object_attrib_t ** members = type->members_defintion;
  gpy_object_state_t * objs = base->o.object_state;

  int idx, offset = -1;
  for (idx = 0; members[idx] != NULL; ++idx)
    {
      struct gpy_object_attrib_t * it = members[idx];
      if (!strcmp (attrib, it->identifier))
	{
	  offset = it->offset;
	  unsigned char * state = (unsigned char *)objs->state;
	  retval = state + offset;
	  break;
	}
    }
  gpy_assert (retval);
  return retval;
}

gpy_object_t * gpy_rr_eval_attrib_reference_call (gpy_vector_t * globls,
						  gpy_object_t * base,
						  const char * attrib)
{
  gpy_object_t * retval = NULL_OBJECT;

  gpy_assert (base->T == TYPE_OBJECT_STATE);
  gpy_typedef_t * type = base->o.object_state->definition;
  gpy_assert (type->members_defintion);

  struct gpy_object_attrib_t ** members = type->members_defintion;
  gpy_object_state_t * objs = base->o.object_state;

  unsigned char * att = NULL;
  int idx, offset = -1;
  for (idx = 0; members[idx] != NULL; ++idx)
    {
      struct gpy_object_attrib_t * it = members[idx];
      if (!strcmp (attrib, it->identifier))
	{
	  offset = it->offset;
	  unsigned char * state = (unsigned char *)objs->state;
	  att = state + offset;
	  break;
	}
    }

  if (att)
    {
      gpy_object_t * attrib_ref = *((gpy_object_t **)attrib);
      gpy_vec_push (globls, base);

      gpy_object_state_t * at_state = attrib_ref->o.object_state;
      gpy_typedef_t * at_type = at_state->definition;

      if (at_type->tp_call)
	{
	  retval = at_type->tp_call (globls, attrib_ref, NULL);
	}
      else
	fatal ("name <%s>:<%s> is not callable!\n", type->identifier,
	       attrib);
      gpy_vec_pop (globls);
    }
  else
    fatal ("%s instance has no attribute '%s'!\n", type->identifier, attrib);

  return retval;
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
