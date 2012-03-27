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

#include "config.h"
#include "system.h"
#include "ansidecl.h"
#include "coretypes.h"
#include "opts.h"
#include "tree.h"
#include "gimple.h"
#include "toplev.h"
#include "debug.h"
#include "options.h"
#include "flags.h"
#include "convert.h"
#include "diagnostic-core.h"
#include "langhooks.h"
#include "langhooks-def.h"
#include "target.h"

#include <gmp.h>
#include <mpfr.h>

#include "vec.h"
#include "hashtab.h"

#include "gpython.h"
#include "py-il-dot.h"
#include "py-il-tree.h"
#include "py-vec.h"

gpy_dot_tree_t * dot_build_class_decl (gpy_dot_tree_t * ident,
				       gpy_dot_tree_t  * suite)
{
  gpy_dot_tree_t * decl = DOT_alloc;

  DOT_TYPE(decl) = D_STRUCT_CLASS;
  DOT_T_FIELD(decl) = D_TD_NULL;
  DOT_FIELD(decl) = ident;
  
  decl->opaT = D_TD_DOT;
  decl->opa.t = suite;
  decl->opbT = D_TD_NULL;

  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

gpy_dot_tree_t * dot_build_func_decl (gpy_dot_tree_t * ident,
				      gpy_dot_tree_t * parms,
				      gpy_dot_tree_t * suite)
{
  gpy_dot_tree_t * decl = DOT_alloc;

  DOT_TYPE(decl) = D_STRUCT_METHOD;
  DOT_T_FIELD(decl) = D_TD_NULL;
  DOT_FIELD(decl) = ident;
  
  decl->opaT = D_TD_DOT;
  decl->opa.t = parms;
  decl->opbT = D_TD_DOT;
  decl->opb.t = suite;

  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

gpy_dot_tree_t * dot_build_decl1 (opcode_t o, gpy_dot_tree_t * t1)
{
  gpy_dot_tree_t * decl = DOT_alloc;
  
  DOT_TYPE(decl) = o;
  DOT_T_FIELD(decl) = D_TD_NULL;
  DOT_FIELD(decl) = NULL_DOT;
  
  decl->opaT = D_TD_DOT;
  decl->opa.t = t1;
  decl->opbT = D_TD_NULL;

  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

gpy_dot_tree_t * dot_build_decl2 (opcode_t o, gpy_dot_tree_t * t1,
				  gpy_dot_tree_t * t2)
{
  gpy_dot_tree_t * decl = DOT_alloc;
  
  DOT_TYPE (decl) = o;
  if ((o == D_MODIFY_EXPR)
      || (o == D_ADD_EXPR)
      || (o == D_MINUS_EXPR)
      || (o == D_MULT_EXPR)
      || (o == D_DIVD_EXPR)
      || (o == D_CALL_EXPR)
      )
    DOT_T_FIELD(decl) = D_D_EXPR;
  else
    DOT_T_FIELD(decl) = D_TD_NULL;

  DOT_FIELD (decl) = NULL_DOT;
  
  decl->opaT = D_TD_DOT;
  decl->opa.t = t1;
  decl->opbT = D_TD_DOT;
  decl->opb.t = t2;

  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

gpy_dot_tree_t * dot_build_integer (int i)
{
  gpy_dot_tree_t * decl = DOT_alloc;
  DOT_TYPE(decl) = D_PRIMITIVE;

  // later on have this field point to a function
  // which returns the GENERIC code for folding the
  // primtive so when it comes to folding primitives we can just
  // use the func pointer to find the function we need
  // instead of the current switch case
  DOT_FIELD(decl) = NULL_DOT;
  DOT_T_FIELD(decl) = D_TD_NULL;

  decl->opaT = D_TD_COM;
  decl->opa.tc = DOT_CM_alloc;

  decl->opa.tc->T = D_T_INTEGER;
  decl->opa.tc->o.integer = i;

  decl->opbT = D_TD_NULL;
  
  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

gpy_dot_tree_t * dot_build_string (char * s)
{
  fatal_error ("unhandled function <gpy_dot_tree_t * dot_build_string (const char *)>");
  return NULL_DOT;
}

gpy_dot_tree_t * dot_build_identifier (const char * s)
{
  gpy_dot_tree_t * decl = DOT_alloc;

  DOT_TYPE(decl) = D_IDENTIFIER;
  DOT_FIELD(decl) = NULL_DOT;
  DOT_T_FIELD(decl) = D_TD_NULL;

  decl->opaT = D_TD_COM;
  decl->opa.tc = DOT_CM_alloc;
  decl->opa.tc->T = D_T_STRING;
  decl->opa.tc->o.string = (char *) s;

  decl->opbT = D_TD_NULL;
  
  DOT_CHAIN(decl) = NULL_DOT;

  return decl;
}

/* 
   ... 
   Plenty more to put here example:
        Loops, conditionals etc ... 
   ...
 */

/**
 * Fairly Confusing Function to read.
 *
 * example:
 *    >>> x = y = z = 2 + 2 + 2;
 *
 *    --- Currently Yacc parses that expression into this Tree, which is just
          side effect of the way we generate the gpy_dot_tree's the much higher level IR
	  which we bring down to GENERIC:

                      +
                     / \
                    +   2
		   /
                  =
		 / \
		x   =
		   / \
		  y   =
		     / \
		    z   2

  -- Is converted into the procedure:

  1. z = 2 + 2 + 2;
  2. y = z;
  3. x = y;

  -- Tree structure as so:

                 =
                / \
               x   =
                  / \
                 y   =
		    / \
                   z   +
                      / \
                     +   2
                    / \
                   2   2
 **/
gpy_dot_tree_t * gpy_dot_process_AST_Align (gpy_dot_tree_t ** d_dot)
{
  gpy_dot_tree_t * retval = NULL_DOT;
  gpy_dot_tree_t * nn = NULL_DOT;
  gpy_dot_tree_t * dot = *d_dot;

  if (DOT_CHAIN(dot))
    {
      nn = DOT_CHAIN(dot);
      DOT_CHAIN(dot) = NULL_DOT;
    }
  retval = (*d_dot);

  if (DOT_TYPE(retval) != D_MODIFY_EXPR)
    {
      gpy_dot_tree_t *o = retval;
      gpy_dot_tree_t *h = NULL_DOT;

      while (o != NULL_DOT)
        {
          if ((DOT_TYPE(o) != D_IDENTIFIER) ||
              (DOT_TYPE(o) != D_PRIMITIVE) ||
	      (DOT_TYPE(o) != D_ATTRIB_REF))
            {
              if (DOT_lhs_T(o) == D_TD_DOT)
                {
                  if (DOT_TYPE(DOT_lhs_TT(o)) == D_MODIFY_EXPR)
                    {
                      h = o; 
		      break;
                    }
                  else
                    {
                      o = DOT_lhs_TT(o);
                    }
                }
              else break;
            }
          else break;
        }
      if (h)
        {
          gpy_dot_tree_t  *head = DOT_lhs_TT(h);
          if (DOT_TYPE(DOT_rhs_TT(head)) == D_MODIFY_EXPR)
            {
              gpy_dot_tree_t  *t = head, *m = NULL_DOT;
              while (t)
                {
                  if ((DOT_TYPE(t) != D_IDENTIFIER) ||
                      (DOT_TYPE(t) != D_PRIMITIVE) ||
		      (DOT_TYPE(t) != D_ATTRIB_REF))
                    {
                      if (DOT_TYPE(DOT_rhs_TT(t)) != D_MODIFY_EXPR)
                        {
                          m = t;
                          break;
                        }
                      else
                        {
                          t = t->opb.t;
                        }
                    }
                  else break;
                }
              
              if( m )
                {
                  DOT_lhs_TT(h) = DOT_rhs_TT(m);
                  DOT_rhs_TT(m) = retval;
                }
              else
                fatal_error ("error processing the expression AST!\n");
            }
          else
            {
              DOT_lhs_TT(h) = DOT_rhs_TT(head);
              DOT_rhs_TT(head) = retval;
            }
          retval = head;
        }
    }
  
  if (nn)
    DOT_CHAIN(retval) = nn;
  (*d_dot) = retval;

  return retval;
}
