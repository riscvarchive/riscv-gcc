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

#include <gmp.h>
#include <mpfr.h>

#include <gpython/gpython.h>
#include <gpython/vectors.h>
#include <gpython/objects.h>

struct gpy_object_staticmethod_t {
  const unsigned char * code;
  unsigned int nargs;
};

/* args = code addr/nargs */
gpy_object_t * gpy_object_staticmethod_new (gpy_typedef_t * type,
					    gpy_object_t ** args)
{
  gpy_object_t * retval = NULL_OBJECT;

  bool check = gpy_args_check_fmt (args, "p,i.");
  gpy_assert (check);

  unsigned char * code_addr = gpy_args_lit_parse_pointer (args[0]);
  int nargs = gpy_args_lit_parse_int (args[1]);

  struct gpy_object_staticmethod_t * self = gpy_malloc (type->state_size);
  self->code = code_addr;
  self->nargs = nargs;

  retval = gpy_create_object_decl (type, self);

  return retval;
}

/* free's the object state not the */
void gpy_object_staticmethod_dealloc (gpy_object_t * self)
{
  gpy_assert (self->T == TYPE_OBJECT_DECL);
  gpy_object_state_t * object_state = self->o.object_state;

  gpy_free (object_state->state);
  object_state->state = NULL;
}

void gpy_object_staticmethod_print (gpy_object_t * self, FILE *fd, bool newline)
{
  fprintf (fd, "static method instance <%p> ", (void *)self);
  if (newline)
    fprintf (fd, "\n");
}

gpy_object_t * gpy_object_staticmethod_call (gpy_vector_t * globls,
					     gpy_object_t * self,
					     gpy_object_t ** args)
{
  gpy_object_t * retval = NULL_OBJECT;
  gpy_assert (self->T == TYPE_OBJECT_DECL);

  struct gpy_object_staticmethod_t * state = self->o.object_state->state;
  if (!state->code)
    {
      fndecl fnptr = (fndecl)state->code;
      fnptr (globls);
    }
  return retval;
}

static struct gpy_typedef_t functor_obj = {
  "staticmethod",
  sizeof (struct gpy_object_staticmethod_t),
  &gpy_object_staticmethod_new,
  &gpy_object_staticmethod_dealloc,
  &gpy_object_staticmethod_print,
  &gpy_object_staticmethod_call,
  NULL,
  NULL
};

void gpy_obj_functor_mod_init (gpy_vector_t * const vec)
{
  gpy_vec_push (vec, &functor_obj);
}
