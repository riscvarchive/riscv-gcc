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

#include "config.h"
#include "system.h"
#include "ansidecl.h"
#include "coretypes.h"
#include "tm.h"
#include "opts.h"
#include "tree.h"
#include "tree-iterator.h"
#include "tree-pass.h"
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
#include "cgraph.h"

#include <gmp.h>
#include <mpfr.h>

#include "vec.h"
#include "hashtab.h"

#include "gpython.h"
#include "py-il-dot.h"
#include "py-il-tree.h"
#include "py-vec.h"

/* Currently we are going to ignore nested methods and classes within existing suites to keep
   things simple for now errors will be thrown from the first pass in sanity checking

   We need to worry about any nested suites because there could possibly be another class definition
   and we still need to generate its type here for the next pass so we can calculate the attribute offsets
*/

static tree gpy_stmt_pass_process_class_decl (gpy_dot_tree_t * const);
static void gpy_stmt_pass_process_class_attrib_method_suite (gpy_dot_tree_t *, gpy_hash_tab_t *);

/*
  Process class method attribute's their suites for more decls to be part of the type for example:

  class foo:
  x = 1
  def __init__ (self):
  print x
  x = foo ()
  x.x = bla

  works the exact same with scoping as:

  class foo:
  def __init__ (self):
  self.x = 1
  print x

  x = foo ()
  x.x = bla
    
  you do not need to declare attributes in the field of a class such that these attribs must be part of the type
  we must process the suites for references to self.<> to see if there is any such assignments to make sure the
  type is generated correctly

  This function iterates over any compound statements suite for any possible self.var decls to be part of the type
  we ignore any nested classes we come across within these
*/
static
void gpy_stmt_pass_process_class_attrib_method_suite (gpy_dot_tree_t * suite, gpy_hash_tab_t * context)
{
  gpy_dot_tree_t * dot = suite;
  do
    {
      switch (DOT_TYPE (dot))
	{
	  /*case COMPOUND_STMT:
	    break;
	  */
	default:
	  {
	    if (DOT_T_FIELD (dot) == D_D_EXPR)
	      {
		gpy_dot_tree_t * itx = gpy_stmt_process_AST_Align (&dot);
	      
		if (DOT_TYPE(itx) == D_MODIFY_EXPR)
		  {
		    gcc_assert ((DOT_lhs_T(itx) == D_TD_DOT)
				&& (DOT_rhs_T(itx) == D_TD_DOT)
				);
		    gpy_dot_tree_t * target = DOT_lhs_TT (itx);
		    // remember to handle target lists here with DOT_CHAIN
		    do
		      {
			switch (DOT_TYPE (target))
			  {
			  case D_IDENTIFIER:
			    break;

			  case D_ATTRIB_REF:
			    {
			      gpy_dot_tree_t * root = target->opa.t;
			      if (DOT_TYPE (root) == D_IDENTIFIER)
				{
				  gpy_dot_tree_t * attrib = target->opb.t;
				
				  if (DOT_TYPE (attrib) == D_IDENTIFIER)
				    {
				      const char * root_ident = DOT_IDENTIFIER_POINTER (root);
				      const char * self = "self";
				      if (!strcmp (self, root_ident))
					{
					  gpy_hashval_t h = gpy_dd_hash_string (DOT_IDENTIFIER_POINTER (attrib));
					  void ** e = gpy_dd_hash_insert (h, attrib, context);
					  gcc_assert (!e);
					}
				    }
				}
			    }
			    break;
			  
			  default:
			    debug ("unhandled target type!\n");
			    break;
			  }
		      } while ((target = DOT_CHAIN (target)));
		  }
	      }
	    // remember compound stmts might contain more types
	  }
	  break;
	}
    } while ((dot = DOT_CHAIN (dot)));
}

static
tree gpy_stmt_pass_process_class_decl (gpy_dot_tree_t * const decl)
{
  gpy_dot_tree_t * suite = decl->opa.t;
  gpy_dot_tree_t * dot = suite;

  gpy_hash_tab_t class_module;
  gpy_dd_hash_init_table (&class_module);

  do {
    switch (DOT_TYPE (dot))
      {
      case D_STRUCT_CLASS:
	// unhandled for now
	break;

      case D_STRUCT_METHOD:
	{
	  void ** e = gpy_dd_hash_insert (gpy_dd_hash_string (DOT_IDENTIFIER_POINTER (DOT_FIELD (dot))),
					  dot, &class_module);
	  gcc_assert (!e);
	  gpy_stmt_pass_process_class_attrib_method_suite (dot->opb.t, &class_module);
	}
	break;

      default:
	{
	  if (DOT_T_FIELD (dot) == D_D_EXPR)
	    {
	      gpy_dot_tree_t * itx = gpy_stmt_process_AST_Align (&dot);
	      
	      if (DOT_TYPE(itx) == D_MODIFY_EXPR)
		{
		  gcc_assert ((DOT_lhs_T(itx) == D_TD_DOT)
			      && (DOT_rhs_T(itx) == D_TD_DOT)
			      );
		  gpy_dot_tree_t * target = DOT_lhs_TT (itx);
		  // remember to handle target lists here with DOT_CHAIN
		  do
		    {
		      switch (DOT_TYPE (target))
			{
			case D_IDENTIFIER:
			  {
			    gpy_hashval_t h = gpy_dd_hash_string (DOT_IDENTIFIER_POINTER (target));
			    void ** e = gpy_dd_hash_insert (h, target, &class_module);
			    gcc_assert (!e);
			  }
			  break;

			case D_ATTRIB_REF:
			  break;
			  
			default:
			  debug ("unhandled target type!\n");
			  break;
			}
		    } while ((target = DOT_CHAIN (target)));
		}
	    }
	  // remember compound stmts might contain more types
	}
	break;
      }
  } while ((dot = DOT_CHAIN (dot)));

  gcc_assert (!gpy_dd_hash_insert (gpy_dd_hash_string ("__field_init__"),
				   dot_build_identifier ("__field_init__"),
				   &class_module)
	      );
  tree type = NULL_TREE;
  if (class_module.length > 0)
    {
      tree field = NULL_TREE, last_field = NULL_TREE;
      tree class_module_struct = make_node (RECORD_TYPE);

      int idx, idy = 0;
      gpy_hash_entry_t * array = class_module.array;
      for (idx = 0; idx < class_module.size; ++idx)
	{
	  if (array[idx].data)
	    {
	      const char * dot_ident;
	      gpy_dot_tree_t * d = (gpy_dot_tree_t *) array[idx].data;
	      if (d)
		{
		  switch (DOT_TYPE (d))
		    {
		    case D_STRUCT_CLASS:
		      dot_ident = DOT_IDENTIFIER_POINTER (DOT_FIELD (d));
		      break;

		    case D_STRUCT_METHOD:
		      dot_ident = DOT_IDENTIFIER_POINTER (DOT_FIELD (d));
		      break;

		    default:
		      dot_ident = DOT_IDENTIFIER_POINTER (d);
		      break;
		    }

		  debug ("generating field <%s>!\n", dot_ident);
		  field = build_decl (BUILTINS_LOCATION, FIELD_DECL,
				      get_identifier (dot_ident),
				      gpy_object_type_ptr);
		  DECL_CONTEXT (field) = class_module_struct;
		  if (idy == 0)
		    TYPE_FIELDS (class_module_struct) = field;
		  else
		    DECL_CHAIN (last_field) = field;
		  last_field = field;
		  idy++;
		}
	    }
	}

      free (class_module.array);

      layout_type (class_module_struct);
      tree name = GPY_stmt_pass_lower_gen_concat_identifier (GPY_current_module_name,
							     DOT_IDENTIFIER_POINTER (DOT_FIELD (decl))
							     );
      tree type_decl = build_decl (BUILTINS_LOCATION, TYPE_DECL, name,
				   class_module_struct);
      DECL_ARTIFICIAL (type_decl) = 1;
      TYPE_NAME (class_module_struct) = name;
      
      gpy_preserve_from_gc (type_decl);
      rest_of_decl_compilation (type_decl, 1, 0);

      type = class_module_struct;
    }
  return type;
}
  
/*
  We need to generate _all_ types from all defined classes so far we do not allow nested classes
  to keep things simple for now.

  After generating types for each class we generate the module type which is the type of the
  while python module
*/
VEC(tree,gc) * gpy_stmt_pass_generate_types (VEC(gpydot,gc) * decls)
{
  VEC(tree,gc) * retval = VEC_alloc (tree, gc, 0);

  gpy_hash_tab_t main_module;
  gpy_dd_hash_init_table (&main_module);

  int idx;
  gpy_dot_tree_t * idtx = NULL_DOT;
  for (idx = 0; VEC_iterate (gpydot, decls, idx, idtx); ++idx)
    {
      if (DOT_TYPE (idtx) == D_STRUCT_CLASS)
	{
	  tree module = gpy_stmt_pass_process_class_decl (idtx);
	  gcc_assert (module);
	  VEC_safe_push (tree, gc, retval, module);

	  void ** e = gpy_dd_hash_insert (gpy_dd_hash_string (IDENTIFIER_POINTER (TYPE_NAME (module))),
					  idtx, &main_module);
	  gcc_assert (!e);
	}
      else if (DOT_TYPE (idtx) == D_STRUCT_METHOD)
	{
	  void ** e = gpy_dd_hash_insert (gpy_dd_hash_string (DOT_IDENTIFIER_POINTER (DOT_FIELD (idtx))),
					  idtx, &main_module);
	  gcc_assert (!e);
	  /* need to recursively go through the suite to find possible nested classes to generate those types */
	}
      else
	{
	  if (DOT_T_FIELD (idtx) == D_D_EXPR)
	    {
	      idtx = gpy_stmt_process_AST_Align (&idtx);
	      gpy_dot_tree_t * itx = idtx;
	      
	      if (DOT_TYPE(itx) == D_MODIFY_EXPR)
		{
		  gcc_assert ((DOT_lhs_T(itx) == D_TD_DOT)
			      && (DOT_rhs_T(itx) == D_TD_DOT)
			      );
		  gpy_dot_tree_t * target = DOT_lhs_TT (itx);
		  // remember to handle target lists here with DOT_CHAIN
		  do
		    {
		      switch (DOT_TYPE (target))
			{
			case D_IDENTIFIER:
			  {
			    gpy_hashval_t h = gpy_dd_hash_string (DOT_IDENTIFIER_POINTER (target));
			    void ** e = gpy_dd_hash_insert (h, target, &main_module);
			    gcc_assert (!e);
			  }
			  break;

			case D_ATTRIB_REF:
			  /* we can ignore these as its not a declaration we only care about decls */
			  break;
			  
			default:
			  debug ("unhandled target type!\n");
			  break;
			}
		    } while ((target = DOT_CHAIN (target)));
		}
	      /* need to go through compound_stmts like conditionals and looks to 
		 find any possible nested class's to generate their types
	      */
	    }
	}
    }

  char * module_entry = gpy_stmt_pass_lower_gen_concat (GPY_current_module_name, "__main_start__");
  gcc_assert (!gpy_dd_hash_insert (gpy_dd_hash_string (module_entry),
				   dot_build_identifier (module_entry),
				   &main_module)
	      );
  if (main_module.length > 0)
    {
      tree field = NULL_TREE, last_field = NULL_TREE;
      tree main_module_struct = make_node (RECORD_TYPE);

      int idy = 0;
      gpy_hash_entry_t * array = main_module.array;
      for (idx = 0; idx < main_module.size; ++idx)
	{
	  if (array[idx].data)
	    {
	      const char * dot_ident;
	      gpy_dot_tree_t * d = (gpy_dot_tree_t *) array[idx].data;
	      if (d)
		{
		  switch (DOT_TYPE (d))
		    {
		    case D_STRUCT_CLASS:
		      dot_ident = DOT_IDENTIFIER_POINTER (DOT_FIELD (d));
		      break;

		    case D_STRUCT_METHOD:
		      dot_ident = DOT_IDENTIFIER_POINTER (DOT_FIELD (d));
		      break;

		    default:
		      dot_ident = DOT_IDENTIFIER_POINTER (d);
		      break;
		    }

		  debug ("generating field <%s>!\n", dot_ident);
		  field = build_decl (BUILTINS_LOCATION, FIELD_DECL,
				      get_identifier (dot_ident),
				      gpy_object_type_ptr);
		  DECL_CONTEXT (field) = main_module_struct;
		  if (idy == 0)
		    TYPE_FIELDS (main_module_struct) = field;
		  else
		    DECL_CHAIN (last_field) = field;
		  last_field = field;
		  idy++;
		}
	    }
	}

      free (main_module.array);

      layout_type (main_module_struct);
      tree name = get_identifier (GPY_current_module_name);
      tree type_decl = build_decl (BUILTINS_LOCATION, TYPE_DECL, name,
				   main_module_struct);
      DECL_ARTIFICIAL (type_decl) = 1;
      TYPE_NAME (main_module_struct) = name;
      
      gpy_preserve_from_gc (type_decl);
      rest_of_decl_compilation (type_decl, 1, 0);

      VEC_safe_push (tree, gc, retval, main_module_struct);
    }
  else
    {
      fatal_error ("unable to generate module types!\n");
    }

  return retval;
}
