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

#define GPY_ARG_LIT_CHECK(A,I,X)				\
  gpy_assert (A[I]->T == TYPE_OBJECT_LIT);			\
  gpy_assert (A[I]->o.literal->type == X);			\
  ++I;

bool gpy_args_check_fmt (gpy_object_t ** args, const char * fmt)
{
  bool retval = true;

  int idx = 0;
  const char * i = fmt;
  for (i = fmt; *i != '\0'; ++i)
    {
      switch (*i)
	{
	case ',':
	    break;

	case '.':
	  break;

	case 'i':
	  {
	    GPY_ARG_LIT_CHECK (args, idx, TYPE_INTEGER);
	  }
	  break;

	case 's':
	  {
	    GPY_ARG_LIT_CHECK (args, idx, TYPE_STRING);
	  }
	  break;

	case 'p':
	  {
	    GPY_ARG_LIT_CHECK (args, idx, TYPE_ADDR);
	  }
	  break;

	case 'A':
	  {
	    GPY_ARG_LIT_CHECK (args, idx, TYPE_ATTRIB_L);
	  }
	  break;

	default:
	  {
	    error ("unhandled literal argument type <%c>!\n", *i);
	    retval = false;
	  }
	  break;
	}
    }
  return retval;
}


int gpy_args_lit_parse_int (gpy_object_t * arg)
{
  int retval = -1;
  gpy_assert (arg->T == TYPE_OBJECT_LIT);
  gpy_assert (arg->o.literal->type == TYPE_INTEGER);

  retval = arg->o.literal->literal.integer;

  return retval;
}

char * gpy_args_lit_parse_string (gpy_object_t * arg)
{
  char * retval = NULL;
  gpy_assert (arg->T == TYPE_OBJECT_LIT);
  gpy_assert (arg->o.literal->type == TYPE_STRING);

  retval = arg->o.literal->literal.string;

  return retval;
}

unsigned char * gpy_args_lit_parse_pointer (gpy_object_t * arg)
{
  unsigned char * retval = NULL;
  gpy_assert (arg->T == TYPE_OBJECT_LIT);
  gpy_assert (arg->o.literal->type == TYPE_ADDR);

  retval = arg->o.literal->literal.addr;

  return retval;
}

gpy_object_attrib_t ** gpy_args_lit_parse_attrib_table (gpy_object_t * arg)
{
  gpy_object_attrib_t ** retval = NULL;
  gpy_assert (arg->T == TYPE_OBJECT_LIT);
  gpy_assert (arg->o.literal->type == TYPE_ATTRIB_L);

  retval = arg->o.literal->literal.attribs;

  return retval;
}

gpy_object_t * gpy_create_object_decl (gpy_typedef_t * type,
				       void * self)
{
  gpy_object_state_t * state = (gpy_object_state_t *)
    gpy_malloc (sizeof(gpy_object_state_t));
  state->identifier = strdup (type->identifier);
  state->ref_count = 0;
  state->state = self;
  state->definition = type;

  gpy_object_t * retval = (gpy_object_t *)
    gpy_malloc (sizeof(gpy_object_t));
  retval->T = TYPE_OBJECT_DECL;
  retval->o.object_state = state;

  return retval;
}

gpy_object_t * gpy_create_object_state (gpy_typedef_t * type,
					void * self)
{
  gpy_object_state_t * state = (gpy_object_state_t *)
    gpy_malloc (sizeof(gpy_object_state_t));
  state->identifier = strdup (type->identifier);
  state->ref_count = 0;
  state->state = self;
  state->definition = type;

  gpy_object_t * retval = (gpy_object_t *)
    gpy_malloc (sizeof(gpy_object_t));
  retval->T = TYPE_OBJECT_STATE;
  retval->o.object_state = state;

  return retval;
}
