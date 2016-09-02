/* Legacy sub-word atomics for RISC-V.
 
   Copyright (C) 2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

#ifdef __riscv_atomic

/* Implement old-style __sync atomics with __atomic atomics.  */

#define GENERATE_FETCH_AND_OP(type, size, opname)			\
  type __sync_fetch_and_ ## opname ## _ ## size (type *p, type v)	\
  {									\
    return __atomic_fetch_ ## opname (p, v, __ATOMIC_SEQ_CST);		\
  }									\
									\
  type __sync_ ## opname ## _and_fetch_ ## size (type *p, type v)	\
  {									\
    return __atomic_ ## opname ## _fetch (p, v, __ATOMIC_SEQ_CST);	\
  }

#define GENERATE_COMPARE_AND_SWAP(type, size)				\
  type __sync_bool_compare_and_swap_ ## size (type *p, type o, type n)	\
  {									\
    return __atomic_compare_exchange_n (p, &o, n, 0, __ATOMIC_SEQ_CST,	\
					__ATOMIC_SEQ_CST);		\
  }									\
									\
  type __sync_val_compare_and_swap_ ## size (type *p, type o, type n)	\
  {									\
    __atomic_compare_exchange_n (p, &o, n, 0, __ATOMIC_SEQ_CST,		\
				 __ATOMIC_SEQ_CST);			\
    return o;								\
  }

#define GENERATE_ALL(type, size)		\
  GENERATE_FETCH_AND_OP(type, size, add)	\
  GENERATE_FETCH_AND_OP(type, size, sub)	\
  GENERATE_FETCH_AND_OP(type, size, and)	\
  GENERATE_FETCH_AND_OP(type, size, xor)	\
  GENERATE_FETCH_AND_OP(type, size, or)		\
  GENERATE_FETCH_AND_OP(type, size, nand)	\
  GENERATE_COMPARE_AND_SWAP(type, size)

GENERATE_ALL(char, 1)
GENERATE_ALL(short, 2)

#endif
