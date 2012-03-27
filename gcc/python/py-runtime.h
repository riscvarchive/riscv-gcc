
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

/* 
   This file was generated via autogen @see py-runtime.{def/tpl}
     - To regenerate with new definitions $ autogen py-runtime.def
 */


#ifndef __GCC_PY_RUNTIME_H__
#define __GCC_PY_RUNTIME_H__

#define GPY_RR_globl_stack         "__GPY_GLOBL_RR_STACK"
#define GPY_RR_stack_size          "__GPY_GLOBL_RR_STACK_SIZE"
#define GPY_RR_stack_data_offset   "__GPY_GLOBL_RR_STACK_DATA_OFFSET"
#define GPY_RR_globl_stack_pointer "__GPY_GLOBL_RR_STACK_POINTER"
#define GPY_RR_globl_call_stack    "__GPY_GLOBL_CALL_STACK"
#define GPY_RR_globl_primitives    "__GPY_GLOBL_PRIMITIVES"
#define GPY_RR_globl_return_addr   "__GPY_GLOBL_RETURN_ADDR"

  
/* Extends the runtime globl stack by passed size (integer_type_node) */
extern tree GPY_RR_extend_globl_stack (tree);
  
/* Fold attribute info into an attribute type */
extern tree GPY_RR_fold_attrib (tree, tree, tree);
  
/* Requires the first tree in the arguments to be an integer_type_node of the number of arguments */
extern tree GPY_RR_fold_attrib_list (VEC(tree,gc) *);
  
/* Fold class data into class object args = <attrib list><size><identifier> */
extern tree GPY_RR_fold_class_decl (tree, tree, tree);
  
/* Fold integer into Int object  via Int (x) */
extern tree GPY_RR_fold_integer (tree);
  
/* get the current object state  */
extern tree GPY_RR_get_object_state (tree);
  
/* incr the refrence count on the object  */
extern tree GPY_RR_incr_ref_count (tree);
  
/* decr the refrence count on the object  */
extern tree GPY_RR_decr_ref_count (tree);
  
/* first index is the fd (1/0) 2nd idx is number of elements and finaly va_list of args */
extern tree GPY_RR_eval_print (VEC(tree,gc) *);
  
/* Evaluate the operation op of the 2 objects x and y and return result */
extern tree GPY_RR_eval_expression (tree, tree, tree);
  
#endif //__GCC_PY_RUNTIME_H__

