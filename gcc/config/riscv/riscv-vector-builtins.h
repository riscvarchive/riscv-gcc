/* ACLE support for RISCV VECTOR
   Copyright (C) 2018-2021 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_VECTOR_BUILTINS_H
#define GCC_RISCV_VECTOR_BUILTINS_H

#include <vector>
#include "riscv-vector-builtins-functions.h"


/* The full name of an RVV ACLE function is the concatenation of:

   - the base name ("svadd", etc.)
   - the "mode" suffix ("_n", "_index", etc.)
   - the type suffixes ("_s32", "_b8", etc.)
   - the predication suffix ("_x", "_z", etc.)

   Each piece of information is individually useful, so we retain this
   classification throughout:

   - function_base represents the base name

   - mode_suffix_index represents the mode suffix

   - type_suffix_index represents individual type suffixes, while
     type_suffix_pair represents a pair of them

   - prediction_index extends the predication suffix with an additional
     alternative: PRED_implicit for implicitly-predicated operations

   In addition to its unique full name, a function may have a shorter
   overloaded alias.  This alias removes pieces of the suffixes that
   can be inferred from the arguments, such as by shortening the mode
   suffix or dropping some of the type suffixes.  The base name and the
   predication suffix stay the same.

   The function_shape class describes what arguments a given function
   takes and what its overloaded alias is called.  In broad terms,
   function_base describes how the underlying instruction behaves while
   function_shape describes how that instruction has been presented at
   the language level.

   The static list of functions uses function_group to describe a group
   of related functions.  The function_builder class is responsible for
   expanding this static description into a list of individual functions
   and registering the associated built-in functions.  function_instance
   describes one of these individual functions in terms of the properties
   described above.

   The classes involved in compiling a function call are:

   - function_resolver, which resolves an overloaded function call to a
     specific function_instance and its associated function decl

   - function_checker, which checks whether the values of the arguments
     conform to the ACLE specification

   - gimple_folder, which tries to fold a function call at the gimple level

   - function_expander, which expands a function call into rtl instructions

   function_resolver and function_checker operate at the language level
   and so are associated with the function_shape.  gimple_folder and
   function_expander are concerned with the behavior of the function
   and so are associated with the function_base.

   Note that we've specifically chosen not to fold calls in the frontend,
   since RVV intrinsics will hardly ever fold a useful language-level
   constant.  */
namespace riscv_vector
{

void init_builtins ();
void handle_pragma_vector ();
tree builtin_decl (unsigned, bool);
gimple *gimple_fold_builtin (unsigned int, gimple_stmt_iterator *, gcall *);
rtx expand_builtin (unsigned int, tree, rtx);
bool check_builtin_call (location_t, vec<location_t>, unsigned int,
			 tree, unsigned int, tree *);
bool builtin_type_p (const_tree);
const char * mangle_builtin_type (const_tree);

} // end namespace riscv_vector

#endif
