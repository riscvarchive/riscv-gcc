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

#ifndef __GCC_BUILTINS_H__
#define __GCC_BUILTINS_H__

#define GPY_GLOBL_STACK_id             "__GPY_GLOBL_RR_STACK"
#define GPY_GLOBL_STACK_SIZE_id        "__GPY_GLOBL_RR_STACK_SIZE"
#define GPY_GLOBL_STACK_DATA_OFFSET_id "__GPY_GLOBL_RR_STACK_DATA_OFFSET"
#define GPY_GLOBL_STACK_POINTER_id     "__GPY_GLOBL_RR_STACK_POINTER"

enum GPY_RR_Functionpy-
  {
    
#define DEF_PY_RUNTIME(CODE, NAME, PARAMS, RESULTS) CODE ,

#include "runtime.def"

#undef DEF_PY_RUNTIME

    // Number of runtime functions.
    NUMBER_OF_FUNCTIONS
  };

#endif /* __GCC_BUILTINS_H__ */
