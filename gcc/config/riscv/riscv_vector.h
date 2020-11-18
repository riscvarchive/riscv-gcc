/* RISC-V Vector extension instructions include file.

   Copyright (C) 2019 Free Software Foundation, Inc.
   Contributed by SiFive.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3, or (at your
   option) any later version.

   GCC is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _GCC_RISCV_VECTOR_H
#define _GCC_RISCV_VECTOR_H 1

#include <stdint.h>
#include <stddef.h>

#ifndef __riscv_vector
#error "Vector intrinsics require the vector extension."
#else

/* Uitl type for easier expand floating point functions.  */
#define _RVV_F16_TYPE float16_t
#define _RVV_F32_TYPE float
#define _RVV_F64_TYPE double

typedef int word_type __attribute__ ((mode (__word__)));
typedef __fp16 float16_t;
typedef float float32_t;
typedef double float64_t;

typedef __fp16 __float16_t;
typedef float __float32_t;
typedef double __float64_t;

enum RVV_CSR {
  RVV_VSTART = 0,
  RVV_VXSAT,
  RVV_VXRM,
  RVV_VCSR,
};

__extension__ extern __inline
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
unsigned long vread_csr(enum RVV_CSR csr)
{
  unsigned long rv = 0;
  switch (csr)
    {
    case RVV_VSTART:
      __asm__ __volatile__ ("csrr\t%0,vstart" : "=r"(rv) : : "memory");
      break;
    case RVV_VXSAT:
      __asm__ __volatile__ ("csrr\t%0,vxsat" : "=r"(rv) : : "memory");
      break;
    case RVV_VXRM:
      __asm__ __volatile__ ("csrr\t%0,vxrm" : "=r"(rv) : : "memory");
      break;
    case RVV_VCSR:
      __asm__ __volatile__ ("csrr\t%0,vcsr" : "=r"(rv) : : "memory");
      break;
    }
  return rv;
}

__extension__ extern __inline
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
void vwrite_csr(enum RVV_CSR csr, unsigned long value)
{
  switch (csr)
    {
    case RVV_VSTART:
      __asm__ __volatile__ ("csrw\tvstart,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VXSAT:
      __asm__ __volatile__ ("csrw\tvxsat,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VXRM:
      __asm__ __volatile__ ("csrw\tvxrm,%z0" : : "rJ"(value) : "memory");
      break;
    case RVV_VCSR:
      __asm__ __volatile__ ("csrw\tvcsr,%z0" : : "rJ"(value) : "memory");
      break;
    }
}

/* An iterator to call a macro with every supported MLEN for masking
   operations.  */
#define _RVV_MASK_ITERATOR(MACRO, ...)				\
  MACRO ( 1, __VA_ARGS__)					\
  MACRO ( 2, __VA_ARGS__)					\
  MACRO ( 4, __VA_ARGS__)					\
  MACRO ( 8, __VA_ARGS__)					\
  MACRO (16, __VA_ARGS__)					\
  MACRO (32, __VA_ARGS__)					\
  MACRO (64, __VA_ARGS__)					\

#include <riscv_vector_itr.h>

/* Define the setvl intrinsics.  Use the int iterator because it is a
   superset of the float one, but ignore the type operand.  */

#define _RVVSETVL(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsetvl_e##SEW##m##LMUL (word_type a)					\
{									\
  word_type vl;								\
  if (__riscv_xlen == 32)						\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_si (a);			\
  else									\
    vl = __builtin_riscv_vsetvl##SEW##m##LMUL##_di (a);			\
  return vl;								\
}									\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsetvlmax_e##SEW##m##LMUL ()						\
{									\
  return vsetvl_e##SEW##m##LMUL (-1);					\
}

_RVV_INT_ITERATOR (_RVVSETVL)


#define _RVV_INT_VEC_MOVE(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_v_v_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_v_v_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}



_RVV_INT_ITERATOR (_RVV_INT_VEC_MOVE)

#define _RVVINT_TUPLE_COPY(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##x##NF##_t a)	\
{									\
  return a;								\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##x##NF##_t a)	\
{									\
  return a;								\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_i##SEW##m##LMUL##x##NF ()					\
{									\
  return __builtin_riscv_vundefined_i##SEW##m##LMUL##x##NF ();		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_u##SEW##m##LMUL##x##NF ()					\
{									\
  return __builtin_riscv_vundefined_u##SEW##m##LMUL##x##NF ();		\
}									\

_RVV_INT_TUPLE_ITERATOR_ARG (_RVVINT_TUPLE_COPY, )

#define _RVVFLOAT_TUPLE_COPY(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##x##NF##_t a)	\
{									\
  return a;								\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_f##SEW##m##LMUL##x##NF ()					\
{									\
  return __builtin_riscv_vundefined_f##SEW##m##LMUL##x##NF ();		\
}									\

_RVV_FLOAT_TUPLE_ITERATOR_ARG (_RVVFLOAT_TUPLE_COPY, )

/* Define the ld/st intrinsics.  */

#define _RVVINTLD_FF(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_i##SEW##m##LMUL (const int##SEW##_t *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleffint##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vleffint##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_u##SEW##m##LMUL (const uint##SEW##_t *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleffuint##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vleffuint##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			      vint##SEW##m##LMUL##_t maskedoff,		\
			      const int##SEW##_t *a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleffint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleffint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				  vuint##SEW##m##LMUL##_t maskedoff,	\
				  const uint##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleffuint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleffuint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}

_RVV_INT_ITERATOR (_RVVINTLD_FF)

#define _RVVINTLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_i##SEW##m##LMUL (const int##SEW##_t *a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleint##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vleint##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_u##SEW##m##LMUL (const uint##SEW##_t *a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				 vint##SEW##m##LMUL##_t maskedoff,	\
				 const int##SEW##_t *a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				  vuint##SEW##m##LMUL##_t maskedoff,	\
				  const uint##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vleuint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_i##SEW##m##LMUL (const int##SEW##_t *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_u##SEW##m##LMUL (const uint##SEW##_t *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				  vint##SEW##m##LMUL##_t maskedoff,	\
				  const int##SEW##_t *a,		\
				  word_type stride)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlseint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,\
				   const uint##SEW##_t *a,		\
				   word_type stride)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlseuint##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}									\

#define _RVVINTST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_i##SEW##m##LMUL (int##SEW##_t *a,			\
			vint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseint##SEW##m##LMUL##_si(b, a);			\
  else									\
    __builtin_riscv_vseint##SEW##m##LMUL##_di(b, a);			\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_u##SEW##m##LMUL (uint##SEW##_t *a, vuint##SEW##m##LMUL##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseuint##SEW##m##LMUL##_si(b, a);			\
  else									\
    __builtin_riscv_vseuint##SEW##m##LMUL##_di(b, a);			\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			   int##SEW##_t *a,			\
			   vint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseint##SEW##m##LMUL##_si_mask (mask, b,		\
						     a);		\
  else									\
    __builtin_riscv_vseint##SEW##m##LMUL##_di_mask (mask, b,		\
						     a);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			   uint##SEW##_t *a,			\
			   vuint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseuint##SEW##m##LMUL##_si_mask (mask, b,		\
						      a);		\
  else									\
    __builtin_riscv_vseuint##SEW##m##LMUL##_di_mask (mask, b,		\
						      a);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_i##SEW##m##LMUL (int##SEW##_t *a, word_type stride,	\
			  vint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseint##SEW##m##LMUL##_si (b, a, stride);		\
  else									\
    __builtin_riscv_vsseint##SEW##m##LMUL##_di (b, a, stride);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_u##SEW##m##LMUL (uint##SEW##_t *a, word_type stride,	\
			    vuint##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_si (b, a, stride);		\
  else									\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_di (b, a, stride);		\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			    int##SEW##_t *a,			\
			    word_type stride,				\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseint##SEW##m##LMUL##_si_mask (mask, b,		\
						     a, stride);	\
  else									\
    __builtin_riscv_vsseint##SEW##m##LMUL##_di_mask (mask, b,		\
						     a, stride);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			    uint##SEW##_t *a,			\
			    word_type stride,				\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_si_mask (mask, b,		\
						      a, stride);	\
  else									\
    __builtin_riscv_vsseuint##SEW##m##LMUL##_di_mask (mask, b,		\
						      a, stride);	\
}

_RVV_INT_ITERATOR (_RVVINTLD)
_RVV_INT_ITERATOR (_RVVINTST)

#define _RVVINTLD_INDEXED(SEW, LMUL, MLEN, T, ISEW, ILMUL)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_i##SEW##m##LMUL (const T *a,				\
			      vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlxeii##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed);\
  else									\
    return __builtin_riscv_vlxeii##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_u##SEW##m##LMUL (const u##T *a,				\
			      vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlxeiu##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed);\
  else									\
    return __builtin_riscv_vlxeiu##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     const T *a,			\
				     vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlxeii##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, maskedoff, a, indexed);				\
  else									\
    return __builtin_riscv_vlxeii##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, maskedoff, a, indexed);				\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff,	\
				     const u##T *a,			\
				     vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlxeiu##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, maskedoff, a, indexed);				\
  else									\
    return __builtin_riscv_vlxeiu##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, maskedoff, a, indexed);				\
}

_RVV_INT_INDEX_ITERATOR (_RVVINTLD_INDEXED)

#define _RVVFLOAT_LD_INDEXED(SEW, LMUL, MLEN, T, ISEW, ILMUL)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_f##SEW##m##LMUL (const _RVV_F##SEW##_TYPE *a,		\
			      vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlxeif##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed);\
  else									\
    return __builtin_riscv_vlxeif##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxei##ISEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vfloat##SEW##m##LMUL##_t maskedoff,\
				     const _RVV_F##SEW##_TYPE *a,	\
				     vuint##ISEW##m##ILMUL##_t indexed)	\
{									\
  if (__riscv_xlen == 32)						\
  return __builtin_riscv_vlxeif##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	   mask, maskedoff, a, indexed);				\
  else									\
  return __builtin_riscv_vlxeif##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	   mask, maskedoff, a, indexed);				\
}

_RVV_FLOAT_INDEX_ITERATOR (_RVVFLOAT_LD_INDEXED)

#define _RVVINTST_INDEXED(SEW, LMUL, MLEN, T, ISEW, ILMUL, NAME)	\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_i##SEW##m##LMUL (T *a,				\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vint##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##i##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##i##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_u##SEW##m##LMUL (u##T *a,				\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vuint##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##u##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##u##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				    T *a,				\
				    vuint##ISEW##m##ILMUL##_t indexed,	\
				    vint##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##i##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, a, indexed, value);					\
  else									\
    return __builtin_riscv_##NAME##i##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, a, indexed, value);					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				    u##T *a,				\
				    vuint##ISEW##m##ILMUL##_t indexed,	\
				    vuint##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##u##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, a, indexed, value);					\
  else									\
    return __builtin_riscv_##NAME##u##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, a, indexed, value);					\
}

_RVV_INT_INDEX_ITERATOR_ARG (_RVVINTST_INDEXED, vsxei)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINTST_INDEXED, vsuxei)

#define _RVVFLOAT_ST_INDEXED(SEW, LMUL, MLEN, T, ISEW, ILMUL, NAME)	\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_f##SEW##m##LMUL (_RVV_F##SEW##_TYPE *a,		\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vfloat##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##f##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##f##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##ISEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				    _RVV_F##SEW##_TYPE *a,		\
				    vuint##ISEW##m##ILMUL##_t indexed,	\
				    vfloat##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##f##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	   mask, a, indexed, value);					\
  else									\
    return __builtin_riscv_##NAME##f##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	   mask, a, indexed, value);					\
}

_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_ST_INDEXED, vsxei)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_ST_INDEXED, vsuxei)

#define _RVV_FLOAT_VEC_MOVE(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcopy_v_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_v_v_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)		\
{									\
  return a;								\
}

_RVV_FLOAT_ITERATOR (_RVV_FLOAT_VEC_MOVE)

#define _RVV_INT_MV_XS(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline T						\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_x_s_i##SEW##m##LMUL##_i##SEW (vint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##i##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline u##T					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_x_s_u##SEW##m##LMUL##_u##SEW (vuint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##u##SEW##m##LMUL (a);			\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_MV_XS, mv_xs)

#define _RVV_INT_MV_SX(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_s_x_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a, T b)			\
{									\
  return __builtin_riscv_v##OP##i##SEW##m##LMUL (a, b);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_s_x_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a, u##T b)		\
{									\
  return __builtin_riscv_v##OP##u##SEW##m##LMUL (a, b);			\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_MV_SX, mv_sx)

#define _RVV_INT_MV_FS(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline _RVV_F##SEW##_TYPE			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfmv_f_s_f##SEW##m##LMUL##_f##SEW (vfloat##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL (a);			\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_INT_MV_FS, mv_fs)

#define _RVV_INT_MV_SF(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfmv_s_f_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a, _RVV_F##SEW##_TYPE b)\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL (a, b);			\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_INT_MV_SF, mv_sf)

#define _RVVFLOATLD_FF(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_f##SEW##m##LMUL (const T *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlefffloat##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vlefffloat##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##ff_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
			      vfloat##SEW##m##LMUL##_t maskedoff,	\
			      const T *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlefffloat##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vlefffloat##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}

_RVV_FLOAT_ITERATOR (_RVVFLOATLD_FF)

#define _RVVFLOATLD(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_f##SEW##m##LMUL (const T *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_si (a);		\
  else									\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_di (a);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vle##SEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				    vfloat##SEW##m##LMUL##_t maskedoff,\
				    const T *a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vlefloat##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_f##SEW##m##LMUL (const T *a, word_type stride)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_si (a, stride);	\
  else									\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_di (a, stride);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlse##SEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				    vfloat##SEW##m##LMUL##_t maskedoff,\
				    const T *a, word_type stride)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_si_mask (		\
	     mask, maskedoff, a, stride);				\
  else									\
    return __builtin_riscv_vlsefloat##SEW##m##LMUL##_di_mask (		\
	     mask, maskedoff, a, stride);				\
}

#define _RVVFLOATST(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_f##SEW##m##LMUL (T *a, vfloat##SEW##m##LMUL##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_si (b, a);			\
  else									\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_di (b, a);			\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vse##SEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			   T *a,					\
			   vfloat##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_si_mask (mask, b, a);	\
  else									\
    __builtin_riscv_vsefloat##SEW##m##LMUL##_di_mask (mask, b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_f##SEW##m##LMUL (T *a, word_type stride,		\
			     vfloat##SEW##m##LMUL##_t b)		\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_si (b, a, stride);	\
  else									\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_di (b, a, stride);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsse##SEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			    T *a, word_type stride,		\
			    vfloat##SEW##m##LMUL##_t b)			\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_si_mask (mask, b,		\
						       a, stride);	\
  else									\
    __builtin_riscv_vssefloat##SEW##m##LMUL##_di_mask (mask, b,		\
						       a, stride);	\
}


_RVV_FLOAT_ITERATOR (_RVVFLOATLD)
_RVV_FLOAT_ITERATOR (_RVVFLOATST)

#define _RVV_FLOAT_SPLAT_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfmv_v_f_f##SEW##m##LMUL (_RVV_F##SEW##_TYPE a)			\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsplat_s_f##SEW##m##LMUL (_RVV_F##SEW##_TYPE a)				\
{									\
  return vfmv_v_f_f##SEW##m##LMUL (a);					\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vzero_f##SEW##m##LMUL ()						\
{									\
  return vsplat_s_f##SEW##m##LMUL (0.0);				\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_f##SEW##m##LMUL ()						\
{									\
  return __builtin_riscv_vundefined_f##SEW##m##LMUL ();		\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_SPLAT_OP, vec_duplicate)

#define _RVV_INT_UNARY_SPLAT_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_v_x_i##SEW##m##LMUL (T a)					\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmv_v_x_u##SEW##m##LMUL (u##T a)					\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsplat_s_i##SEW##m##LMUL (T a)						\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsplat_s_u##SEW##m##LMUL (u##T a)					\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vzero_i##SEW##m##LMUL ()						\
{									\
  return vsplat_s_i##SEW##m##LMUL (0);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_i##SEW##m##LMUL ()						\
{									\
  return __builtin_riscv_vundefined_i##SEW##m##LMUL ();			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vzero_u##SEW##m##LMUL ()						\
{									\
  return vsplat_s_u##SEW##m##LMUL (0);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vundefined_u##SEW##m##LMUL ()						\
{									\
  return __builtin_riscv_vundefined_u##SEW##m##LMUL ();			\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_UNARY_SPLAT_OP, vec_duplicate)

#define _RVV_INT_UNARY_OP(SEW, LMUL, MLEN, T, OP, NAME)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)			\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff, \
				     vuint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a);						\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_UNARY_OP, one_cmpl, not)

/* ??? An intrinsic with sizeless type args that doesn't call a builtin fails
   in ipa because it doesn't handle sizeless types in predicates, as called
   from will_be_nonconstant_predicate.  So all of these must use a builtin.  */

/* Define the add intrinsics.  */

#define _RVV_INT_BIN_OP(SEW, LMUL, MLEN, T, OP, BOP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
			    vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
					vint##SEW##m##LMUL##_t maskedoff,\
					vint##SEW##m##LMUL##_t a,	\
					vint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
					 vuint##SEW##m##LMUL##_t maskedoff, \
					 vuint##SEW##m##LMUL##_t a,	\
					 vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, BOP)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 T b)					\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
					   uint##SEW##_t b)		\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
					vint##SEW##m##LMUL##_t maskedoff, \
					vint##SEW##m##LMUL##_t a,	\
					T b)				\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
					 vuint##SEW##m##LMUL##_t maskedoff,	\
					 vuint##SEW##m##LMUL##_t a,	\
					 uint##SEW##_t b)		\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_INT_BIN_OP_NOMASK(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b);		\
}

#define _RVV_INT_BIN_OP_SCALAR_NOMASK(SEW, LMUL, MLEN, T, OP)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				 T b)					\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
				  u##T b)				\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\

#define _RVV_INT_BIN_SHIFT(SEW, LMUL, MLEN, T, OP, BOP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_UINT_BIN_SHIFT(SEW, LMUL, MLEN, T, OP, BOP)		\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_SHIFT_SCALAR(SEW, LMUL, MLEN, T, OP, BOP)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    uint8_t b)					\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   uint8_t b)				\
{									\
  return __builtin_riscv_v##BOP##int##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_UINT_BIN_SHIFT_SCALAR(SEW, LMUL, MLEN, T, OP, BOP)		\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    uint8_t b)					\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   uint8_t b)				\
{									\
  return __builtin_riscv_v##BOP##uint##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_UINT_BIN_NARROWING(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, NAME, OP)\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##_wv_u##SEW##m##LMUL (vuint##WSEW##m##WLMUL##_t a,		\
			     vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_##OP##uint##WSEW##m##WLMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##_wv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff,	\
				     vuint##WSEW##m##WLMUL##_t a,	\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_##OP##uint##WSEW##m##WLMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_UINT_BIN_NARROWING_SCALAR(SEW, LMUL, MLEN, T,		\
				       WSEW, WLMUL, WT, NAME, OP)	\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##_wx_u##SEW##m##LMUL (vuint##WSEW##m##WLMUL##_t a,		\
			      uint8_t b)				\
{									\
  return __builtin_riscv_##OP##uint##WSEW##m##WLMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##_wx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff,	\
				     vuint##WSEW##m##WLMUL##_t a,	\
				     uint8_t b)				\
{									\
  return __builtin_riscv_##OP##uint##WSEW##m##WLMUL##_scalar_mask (	\
	   mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_NARROWING(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_wv_i##SEW##m##LMUL (vint##WSEW##m##WLMUL##_t a,			\
			     vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_##OP##int##WSEW##m##WLMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_wv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##WSEW##m##WLMUL##_t a,	\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_##OP##int##WSEW##m##WLMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_BIN_NARROWING_SCALAR(SEW, LMUL, MLEN, T,		\
					     WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_wx_i##SEW##m##LMUL (vint##WSEW##m##WLMUL##_t a,			\
			      uint8_t b)				\
{									\
  return __builtin_riscv_##OP##int##WSEW##m##WLMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_wx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##WSEW##m##WLMUL##_t a,	\
				     uint8_t b)				\
{									\
  return __builtin_riscv_##OP##int##WSEW##m##WLMUL##_scalar_mask (	\
	   mask, maskedoff, a, b);					\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, add, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, add, add)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, sub, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, sub, sub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, rsub, rsub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, mul, mul)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, mul, mul)

_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT, sll, vashl)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT_SCALAR, sll, vashl)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT, sll, vashl)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT_SCALAR, sll, vashl)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT, srl, vlshr)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT_SCALAR, srl, vlshr)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT, sra, vashr)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT_SCALAR, sra, vashr)

_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT, ssra, vssra)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_SHIFT_SCALAR, ssra, vssra)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT, ssrl, vssrl)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_BIN_SHIFT_SCALAR, ssrl, vssrl)

_RVV_WINT_ITERATOR_ARG (_RVV_UINT_BIN_NARROWING, vnsrl, vnsrl)
_RVV_WINT_ITERATOR_ARG (_RVV_UINT_BIN_NARROWING_SCALAR, vnsrl, vnsrl)
_RVV_WINT_ITERATOR_ARG (_RVV_INT_BIN_NARROWING, vnsra)
_RVV_WINT_ITERATOR_ARG (_RVV_INT_BIN_NARROWING_SCALAR, vnsra)

_RVV_WINT_ITERATOR_ARG (_RVV_UINT_BIN_NARROWING, vnclipu, vnclipu)
_RVV_WINT_ITERATOR_ARG (_RVV_UINT_BIN_NARROWING_SCALAR, vnclipu, vnclipu)
_RVV_WINT_ITERATOR_ARG (_RVV_INT_BIN_NARROWING, vnclip)
_RVV_WINT_ITERATOR_ARG (_RVV_INT_BIN_NARROWING_SCALAR, vnclip)

#define _RVV_INT_SAT_BIN_OP(SEW, LMUL, MLEN, T, NAME, OP)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			      vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a,		\
				     vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_UINT_SAT_BIN_OP(SEW, LMUL, MLEN, T, NAME, OPU)		\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
			      vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OPU##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff, \
				     vuint##SEW##m##LMUL##_t a,		\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OPU##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}

#define _RVV_INT_SAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, NAME, OP)	\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a, T b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a,		\
				     T b)				\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_UINT_SAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, NAME, OPU)	\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
			      uint##SEW##_t b)				\
{									\
  return __builtin_riscv_v##OPU##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff,	\
				     vuint##SEW##m##LMUL##_t a,		\
				     uint##SEW##_t b)			\
{									\
  return __builtin_riscv_v##OPU##uint##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP, sadd, ssadd)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP_SCALAR, sadd, ssadd)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP, ssub, sssub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP_SCALAR, ssub, sssub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP, aadd, vaadd)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP_SCALAR, aadd, vaadd)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP, asub, vasub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP_SCALAR, asub, vasub)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP, smul, vsmul)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SAT_BIN_OP_SCALAR, smul, vsmul)

_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP, sadd, usadd)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP_SCALAR, sadd, usadd)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP, ssub, ussub)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP_SCALAR, ssub, ussub)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP, aadd, vaaddu)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP_SCALAR, aadd, vaaddu)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP, asub, vasubu)
_RVV_INT_ITERATOR_ARG (_RVV_UINT_SAT_BIN_OP_SCALAR, asub, vasubu)

#define _RVV_INT_ADC_SBC_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  vint##SEW##m##LMUL##_t b,		\
				  vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vvm_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b,		\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##mint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vv_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,		\
				  vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vm##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b,	\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vvm_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
				    vuint##SEW##m##LMUL##_t b,	\
				    vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##muint##SEW##m##LMUL (a, b, carryin);	\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vv_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
				   vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vm##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vxm_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,		\
				  int##SEW##_t b,			\
				  vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vxm_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,		\
				   int##SEW##_t b,			\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##mint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vx_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,		\
				  int##SEW##_t b)			\
{									\
  return __builtin_riscv_vm##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vxm_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,	\
				   uint##SEW##_t b,			\
				   vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vxm_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
				    uint##SEW##_t b,			\
				    vbool##MLEN##_t carryin)		\
{									\
  return __builtin_riscv_vm##OP##muint##SEW##m##LMUL##_scalar (a, b, carryin);\
}									\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_vx_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
				   uint##SEW##_t b)			\
{									\
  return __builtin_riscv_vm##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}



_RVV_INT_ITERATOR_ARG (_RVV_INT_ADC_SBC_OP, adc)
_RVV_INT_ITERATOR_ARG (_RVV_INT_ADC_SBC_OP, sbc)

#define _RVV_WINT_ADD_SUB_MASK(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a, u##T b)	\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_wv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##WSEW##m##WLMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_wv_i##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_wx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##WSEW##m##WLMUL##_t a, T b)	\
{									\
  return __builtin_riscv_v##OP##_wv_i##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_wv_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##WSEW##m##WLMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_wv_u##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_wx_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				    vuint##WSEW##m##WLMUL##_t a, u##T b)\
{									\
  return __builtin_riscv_v##OP##_wv_u##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB_MASK, wadd)
_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB_MASK, wsub)


#define _RVV_WINT_ADD_SUB(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a, T b)		\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a, u##T b)		\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_wv_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_wv_i##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_wx_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t a,	T b)		\
{									\
  return __builtin_riscv_v##OP##_wv_i##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_wv_u##WSEW##m##WLMUL (vuint##WSEW##m##WLMUL##_t a,		\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_wv_u##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_wx_u##WSEW##m##WLMUL (vuint##WSEW##m##WLMUL##_t a, u##T b)	\
{									\
  return __builtin_riscv_v##OP##_wv_u##SEW##m##LMUL##_scalar (a, b);	\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB, wadd)
_RVV_WINT_ITERATOR_ARG (_RVV_WINT_ADD_SUB, wsub)

#define _RVV_WINT_CVT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)		\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwcvt_x_x_v_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwcvtu_x_x_v_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwcvt_x_x_v_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,	\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL##_mask (mask, maskedoff, a);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwcvtu_x_x_v_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,	\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL##_mask (mask, maskedoff, a);\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WINT_CVT, wcvt)

#define _RVV_WINT_EXTEND(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vs##NAME##_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vz##NAME##_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vs##NAME##_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				       vint##WSEW##m##WLMUL##_t maskedoff,\
				       vint##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_v##OP##_vv_i##SEW##m##LMUL##_mask (mask, maskedoff, a);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vz##NAME##_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				       vuint##WSEW##m##WLMUL##_t maskedoff,\
				       vuint##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_v##OP##_vv_u##SEW##m##LMUL##_mask (mask, maskedoff, a);\
}

_RVV_WINT_ITERATOR_ARG (_RVV_WINT_EXTEND, extend, ext_vf2)
_RVV_QINT_ITERATOR_ARG (_RVV_WINT_EXTEND, extend_q, ext_vf4)
_RVV_EINT_ITERATOR_ARG (_RVV_WINT_EXTEND, extend_e, ext_vf8)

#define _RVV_WFLOAT_ADD_SUB_MASK(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##SEW##m##LMUL##_t a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_wv_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##WSEW##m##WLMUL##_t a,	\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_wv_f##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_wf_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##WSEW##m##WLMUL##_t a, T b)	\
{									\
  return __builtin_riscv_vf##OP##_wv_f##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_WFLOAT_ADD_SUB_MASK, wadd)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_WFLOAT_ADD_SUB_MASK, wsub)

#define _RVV_WFLOAT_ADD_SUB(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL (vfloat##SEW##m##LMUL##_t a,		\
			    vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL (vfloat##SEW##m##LMUL##_t a, T b)		\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_wv_f##WSEW##m##WLMUL (vfloat##WSEW##m##WLMUL##_t a,		\
			    vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_wv_f##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_wf_f##WSEW##m##WLMUL (vfloat##WSEW##m##WLMUL##_t a, T b)	\
{									\
  return __builtin_riscv_vf##OP##_wv_f##SEW##m##LMUL##_scalar (a, b);	\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_WFLOAT_ADD_SUB, wadd)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_WFLOAT_ADD_SUB, wsub)


#define _RVVINTCMP(SEW, LMUL, MLEN, T, OP, OPU)				\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OP##_vv_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,	\
				  vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OPU##_vv_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
				    vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OP##_vv_i##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
					 vbool##MLEN##_t maskedoff,	\
					 vint##SEW##m##LMUL##_t a,	\
					 vint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_mask (mask, maskedoff, \
							   a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OPU##_vv_u##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
					   vbool##MLEN##_t maskedoff,	\
					   vuint##SEW##m##LMUL##_t a,	\
					   vuint##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL##_mask (mask, maskedoff, \
							     a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OP##_vx_i##SEW##m##LMUL##_b##MLEN (vint##SEW##m##LMUL##_t a,	\
			       T b)					\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OPU##_vx_u##SEW##m##LMUL##_b##MLEN (vuint##SEW##m##LMUL##_t a,	\
			       u##T b)					\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OP##_vx_i##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
				      vbool##MLEN##_t maskedoff,	\
				      vint##SEW##m##LMUL##_t a,		\
				      T b)				\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								  a, b);\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vms##OPU##_vx_u##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
				      vbool##MLEN##_t maskedoff,	\
				      vuint##SEW##m##LMUL##_t a,	\
				      u##T b)				\
{									\
  return __builtin_riscv_vs##OPU##uint##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								    a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVVINTCMP, eq, eq)
_RVV_INT_ITERATOR_ARG (_RVVINTCMP, ne, ne)
_RVV_INT_ITERATOR_ARG (_RVVINTCMP, lt, ltu)
_RVV_INT_ITERATOR_ARG (_RVVINTCMP, le, leu)
_RVV_INT_ITERATOR_ARG (_RVVINTCMP, gt, gtu)
_RVV_INT_ITERATOR_ARG (_RVVINTCMP, ge, geu)

#define _RVV_FCMP(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmf##OP##_vv_f##SEW##m##LMUL##_b##MLEN (vfloat##SEW##m##LMUL##_t a,	\
			       vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_f##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmf##OP##_vv_f##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
				      vbool##MLEN##_t maskedoff,	\
				      vfloat##SEW##m##LMUL##_t a,	\
				      vfloat##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_f##OP##int##SEW##m##LMUL##_mask (mask, maskedoff, \
							   a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmf##OP##_vf_f##SEW##m##LMUL##_b##MLEN (vfloat##SEW##m##LMUL##_t a,	\
			       _RVV_F##SEW##_TYPE b)			\
{									\
  return __builtin_riscv_f##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmf##OP##_vf_f##SEW##m##LMUL##_b##MLEN##_m (vbool##MLEN##_t mask,	\
				      vbool##MLEN##_t maskedoff,	\
				      vfloat##SEW##m##LMUL##_t a,	\
				      _RVV_F##SEW##_TYPE b)		\
{									\
  return __builtin_riscv_f##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								  a, b);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, eq)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, ne)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, lt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, le)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, gt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FCMP, ge)

#define _RVVINT_MIN_MAX(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vvs##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vvu##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vvs##OP##int##SEW##m##LMUL##_mask (mask, maskedoff, \
							    a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vvu##OP##uint##SEW##m##LMUL##_mask (mask, maskedoff, \
							      a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    T b)					\
{									\
  return __builtin_riscv_vss##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    u##T b)					\
{									\
  return __builtin_riscv_vsu##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   T b)					\
{									\
  return __builtin_riscv_vss##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								   a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   u##T b)				\
{									\
  return __builtin_riscv_vsu##OP##uint##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								    a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVVINT_MIN_MAX, min)
_RVV_INT_ITERATOR_ARG (_RVVINT_MIN_MAX, max)

#define _RVVINT_DIV_REM(SEW, LMUL, MLEN, T, OP, NAME)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			      vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
			      vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vvu##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a,		\
				     vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_mask (mask, maskedoff, \
							    a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vuint##SEW##m##LMUL##_t maskedoff,	\
				     vuint##SEW##m##LMUL##_t a,		\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vvu##OP##uint##SEW##m##LMUL##_mask (mask, maskedoff, \
							     a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			      T b)					\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,		\
			      u##T b)					\
{									\
  return __builtin_riscv_vsu##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   T b)					\
{									\
  return __builtin_riscv_vs##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								   a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##u_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   u##T b)				\
{									\
  return __builtin_riscv_vsu##OP##uint##SEW##m##LMUL##_scalar_mask (mask, maskedoff, \
								    a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVVINT_DIV_REM, div, div)
_RVV_INT_ITERATOR_ARG (_RVVINT_DIV_REM, mod, rem)

#define _RVVINT_MULH(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			       vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    T b)					\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    u##T b)					\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			      u##T b)					\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_scalar (a, b);	\
}

#define _RVVINT_MULH_MASK(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_mask (mask, maskedoff,\
							   a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_mask (mask, maskedoff,\
							    a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a,		\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_mask (mask, maskedoff,\
							      a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   T b)					\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								  a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   u##T b)				\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								   a, b);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				     vint##SEW##m##LMUL##_t maskedoff,	\
				     vint##SEW##m##LMUL##_t a,		\
				     u##T b)				\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								  a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVVINT_MULH, mulh)
_RVV_INT_ITERATOR_ARG (_RVVINT_MULH_MASK, mulh)

#define _RVVINT_WMUL(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)		\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a,			\
			       vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a,			\
			    T b)					\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL (vuint##SEW##m##LMUL##_t a,			\
			    u##T b)					\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##WSEW##m##WLMUL (vint##SEW##m##LMUL##_t a,			\
			      u##T b)					\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_scalar (a, b);	\
}

#define _RVVINT_WMUL_MASK(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_mask (mask, maskedoff,\
							   a, b);	\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_mask (mask, maskedoff,\
							    a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				     vint##WSEW##m##WLMUL##_t maskedoff,\
				     vint##SEW##m##LMUL##_t a,		\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_mask (mask, maskedoff,\
							      a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   T b)					\
{									\
  return __builtin_riscv_vv##OP##int##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								  a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   u##T b)				\
{									\
  return __builtin_riscv_vv##OP##uint##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								   a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				     vint##WSEW##m##WLMUL##_t maskedoff,\
				     vint##SEW##m##LMUL##_t a,		\
				     u##T b)				\
{									\
  return __builtin_riscv_vv##OP##su_int##SEW##m##LMUL##_scalar_mask (mask, maskedoff,\
								     a, b);\
}

_RVV_WINT_ITERATOR_ARG (_RVVINT_WMUL, wmul)
_RVV_WINT_ITERATOR_ARG (_RVVINT_WMUL_MASK, wmul)

#define _RVV_FLOAT_WMUL(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##SEW##m##LMUL##_t a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t maskedoff,\
				   vfloat##SEW##m##LMUL##_t a, T b)	\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_scalar_mask (mask, maskedoff, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL (vfloat##SEW##m##LMUL##_t a,		\
			    vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL (vfloat##SEW##m##LMUL##_t a, T b)		\
{									\
  return __builtin_riscv_vf##OP##_vv_f##SEW##m##LMUL##_scalar (a, b);	\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WMUL, wmul)

#define _RVV_MAC_INT(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t acc,			\
			    vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t acc,		\
			    vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t acc,			\
			    T a,					\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t acc,		\
			    u##T a,					\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t acc,		\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t acc,		\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t acc,		\
				   T a,					\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t acc,		\
				   u##T a,				\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVV_MAC_INT, macc)
_RVV_INT_ITERATOR_ARG (_RVV_MAC_INT, madd)
_RVV_INT_ITERATOR_ARG (_RVV_MAC_INT, nmsac)
_RVV_INT_ITERATOR_ARG (_RVV_MAC_INT, nmsub)

#define _RVV_MAC_WINT_MASK(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t acc,	\
				   vint##SEW##m##LMUL##_t a,		\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t acc,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				     vint##WSEW##m##WLMUL##_t acc,	\
				     vint##SEW##m##LMUL##_t a,		\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##su_sv_i##SEW##m##LMUL##_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vint##WSEW##m##WLMUL##_t acc,	\
				   T a,					\
				   vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##WSEW##m##WLMUL##_t acc,	\
				   u##T a,				\
				   vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				     vint##WSEW##m##WLMUL##_t acc,	\
				     T a,				\
				     vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##su_sv_i##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##us_vx_i##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				     vint##WSEW##m##WLMUL##_t acc,	\
				     u##T a,				\
				     vint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##us_sv_i##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}

#define _RVV_MAC_WINT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)		\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vv_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t acc,		\
			    vint##SEW##m##LMUL##_t a,			\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vv_u##WSEW##m##WLMUL (vuint##WSEW##m##WLMUL##_t acc,		\
			    vuint##SEW##m##LMUL##_t a,			\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vv_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t acc,		\
			      vint##SEW##m##LMUL##_t a,			\
			      vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##su_sv_i##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t acc,		\
			    T a,					\
			    vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_i##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##u_vx_u##WSEW##m##WLMUL (vuint##WSEW##m##WLMUL##_t acc,		\
			    u##T a,					\
			    vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##_sv_u##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##su_vx_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t acc,		\
			      T a,					\
			      vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##su_sv_i##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##us_vx_i##WSEW##m##WLMUL (vint##WSEW##m##WLMUL##_t acc,		\
			      u##T a,					\
			      vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##us_sv_i##SEW##m##LMUL##_scalar (acc, a, b);\
}									\

_RVV_WINT_ITERATOR_ARG (_RVV_MAC_WINT, wmacc)
_RVV_WINT_ITERATOR_ARG (_RVV_MAC_WINT_MASK, wmacc)
_RVV_QINT_ITERATOR_ARG (_RVV_MAC_WINT, qmacc)
_RVV_QINT_ITERATOR_ARG (_RVV_MAC_WINT_MASK, qmacc)

#define _RVV_INT_MERGE(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_i##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			     vint##SEW##m##LMUL##_t a,			\
			     vint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##i##SEW##m##LMUL##_mask (mask, a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_u##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			     vuint##SEW##m##LMUL##_t a,			\
			     vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##u##SEW##m##LMUL##_mask (mask, a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vxm_i##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			     vint##SEW##m##LMUL##_t a,			\
			     T b)					\
{									\
  return __builtin_riscv_v##OP##i##SEW##m##LMUL##_scalar_mask (mask, a, b);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vxm_u##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			     vuint##SEW##m##LMUL##_t a,			\
			     u##T b)					\
{									\
  return __builtin_riscv_v##OP##u##SEW##m##LMUL##_scalar_mask (mask, a, b);\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_MERGE, merge)

#define _RVV_FLOAT_MERGE(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vvm_f##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			     vfloat##SEW##m##LMUL##_t a,		\
			     vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL##_mask (mask, a, b);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vfm_f##SEW##m##LMUL (vbool##MLEN##_t mask,			\
			      vfloat##SEW##m##LMUL##_t a,		\
			      _RVV_F##SEW##_TYPE b)			\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL##_scalar_mask (mask, a, b);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_MERGE, merge)

#define _RVV_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, NAME)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##NAME##_vf_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
				   T b)					\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_scalar (a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##NAME##_vf_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
					  vfloat##SEW##m##LMUL##_t maskedoff, \
					  vfloat##SEW##m##LMUL##_t a, \
					  T b)			\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_scalar_mask (	\
      mask, maskedoff, a, b);						\
}

#define _RVV_FLOAT_BIN_OP(SEW, LMUL, MLEN, T, OP, NAME)			\
_RVV_FLOAT_BIN_OP_SCALAR(SEW, LMUL, MLEN, T, OP, NAME)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##NAME##_vv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,	\
			      vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##NAME##_vv_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,	\
				       vfloat##SEW##m##LMUL##_t maskedoff, \
				       vfloat##SEW##m##LMUL##_t a,	\
				       vfloat##SEW##m##LMUL##_t b)	\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a, b);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, add, add)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, sub, sub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP_SCALAR, rsub, rsub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, mul, mul)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, div, div)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP_SCALAR, rdiv, rdiv)

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, max, max)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, min, min)

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, copysign, sgnj)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, ncopysign, sgnjn)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_BIN_OP, xorsign, sgnjx)

_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, and, and)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, and, and)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, or, ior)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, or, ior)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP, xor, xor)
_RVV_INT_ITERATOR_ARG (_RVV_INT_BIN_OP_SCALAR, xor, xor)

#define _RVV_INT_SLIDE(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t dst,			\
			    vint##SEW##m##LMUL##_t a,			\
			    size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si (dst, a, b);	\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di (dst, a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t dst,		\
			    vuint##SEW##m##LMUL##_t a,			\
			    size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_si (dst, a, b);	\
  else									\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_di (dst, a, b);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si_mask (mask,	\
						maskedoff, a, b);	\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di_mask (mask,	\
						maskedoff, a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_si_mask (mask,	\
						maskedoff, a, b);	\
  else									\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_di_mask (mask,	\
						maskedoff, a, b);	\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_SLIDE, slideup)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SLIDE, slidedown)

#define _RVV_FLOAT_SLIDE(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t dst,		\
			    vfloat##SEW##m##LMUL##_t a,			\
			    size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_si (dst, a, b);	\
  else									\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_di (dst, a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				vfloat##SEW##m##LMUL##_t maskedoff,	\
				vfloat##SEW##m##LMUL##_t a,		\
				size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_si_mask (mask,	\
						maskedoff, a, b);	\
  else									\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_di_mask (mask,	\
						maskedoff, a, b);	\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_SLIDE, slideup)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_SLIDE, slidedown)

#define _RVV_INT_SLIDE1(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			    long b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si (a, b);	\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			    long b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_si (a, b);		\
  else									\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_di (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vint##SEW##m##LMUL##_t maskedoff,	\
				   vint##SEW##m##LMUL##_t a,		\
				   long b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si_mask (mask,	\
						maskedoff, a, b);	\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di_mask (mask,	\
						maskedoff, a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vuint##SEW##m##LMUL##_t maskedoff,	\
				   vuint##SEW##m##LMUL##_t a,		\
				   long b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_si_mask (mask,	\
						maskedoff, a, b);	\
  else									\
    return __builtin_riscv_v##OP##u##SEW##m##LMUL##_di_mask (mask,	\
						maskedoff, a, b);	\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_SLIDE1, slide1up)
_RVV_INT_ITERATOR_ARG (_RVV_INT_SLIDE1, slide1down)

#define _RVV_FLOAT_SLIDE1(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,		\
			    _RVV_F##SEW##_TYPE b)			\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				   vfloat##SEW##m##LMUL##_t maskedoff,	\
				   vfloat##SEW##m##LMUL##_t a,		\
				   _RVV_F##SEW##_TYPE b)		\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (mask,		\
							maskedoff, a, b);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_SLIDE1, slide1up)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_SLIDE1, slide1down)

#define _RVV_FLOAT_UNARY_OP(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_v_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)	\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_v_f##SEW##m##LMUL##_m (				\
  vbool##MLEN##_t mask,						\
  vfloat##SEW##m##LMUL##_t maskedoff, 				\
  vfloat##SEW##m##LMUL##_t a)					\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_UNARY_OP, sqrt)

#define _RVV_FLOAT_VFCLASS(SEW, LMUL, MLEN, T, OP, NAME)		\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_u##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)		\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL (a);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_v_u##SEW##m##LMUL##_m (					\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##float##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_VFCLASS, vfclass, fclass)

#define _RVV_FLOAT_CVT_XF(SEW, LMUL, MLEN, T, OP, NAME)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_v_i##SEW##m##LMUL (				\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_v_i##SEW##m##LMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_XF, fcvt_xf, fcvt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_XF, fcvt_rtz_xf, fcvt_rtz)

#define _RVV_FLOAT_CVT_XUF(SEW, LMUL, MLEN, T, OP, NAME)		\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_v_u##SEW##m##LMUL (				\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_v_u##SEW##m##LMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_XUF, fcvt_xuf, fcvt)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_XUF, fcvt_rtz_xuf, fcvt_rtz)

#define _RVV_FLOAT_CVT_FX(SEW, LMUL, MLEN, T, OP, NAME)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_v_f##SEW##m##LMUL (				\
  vint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_v_f##SEW##m##LMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##_t maskedoff, 					\
  vint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_FX, fcvt_fx, fcvt)

#define _RVV_FLOAT_CVT_FXU(SEW, LMUL, MLEN, T, OP, NAME)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_v_f##SEW##m##LMUL (				\
  vuint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_v_f##SEW##m##LMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##_t maskedoff, 					\
  vuint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_CVT_FXU, fcvt_fxu, fcvt)

#define _RVV_FLOAT_WCVT_XF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_v_i##WSEW##m##WLMUL (				\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_v_i##WSEW##m##WLMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vint##WSEW##m##WLMUL##_t maskedoff, 					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_XF, wfcvt_xf, fwcvt)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_XF, wfcvt_rtz_xf, fwcvt_rtz)

#define _RVV_FLOAT_WCVT_XUF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_v_u##WSEW##m##WLMUL (				\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##WSEW##m##WLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_v_u##WSEW##m##WLMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vuint##WSEW##m##WLMUL##_t maskedoff, 					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_XUF, wfcvt_xuf, fwcvt)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_XUF, wfcvt_rtz_xuf, fwcvt_rtz)

#define _RVV_FLOAT_WCVT_FX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_v_f##WSEW##m##WLMUL (				\
  vint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_v_f##WSEW##m##WLMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vfloat##WSEW##m##WLMUL##_t maskedoff, 				\
  vint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_FX, wfcvt_fx, fwcvt)

#define _RVV_FLOAT_WCVT_FXU(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_v_f##WSEW##m##WLMUL (				\
  vuint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_v_f##WSEW##m##WLMUL##_m (			\
  vbool##MLEN##_t mask,							\
  vfloat##WSEW##m##WLMUL##_t maskedoff, 				\
  vuint##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_FXU, wfcvt_fxu, fwcvt)

#define _RVV_FLOAT_WCVT_FF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_f_v_f##WSEW##m##WLMUL (					\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_f_v_f##WSEW##m##WLMUL##_m (					\
  vbool##MLEN##_t mask,							\
  vfloat##WSEW##m##WLMUL##_t maskedoff, 				\
  vfloat##SEW##m##LMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_WCVT_FF, wfcvt_ff, fwcvt)

#define _RVV_FLOAT_NCVT_XF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_w_i##SEW##m##LMUL (					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_x_f_w_i##SEW##m##LMUL##_m (					\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_XF, nfcvt_xf, fncvt)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_XF, nfcvt_rtz_xf, fncvt_rtz)

#define _RVV_FLOAT_NCVT_XUF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_w_u##SEW##m##LMUL (					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_xu_f_w_u##SEW##m##LMUL##_m (					\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_XUF, nfcvt_xuf, fncvt)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_XUF, nfcvt_rtz_xuf, fncvt_rtz)

#define _RVV_FLOAT_NCVT_FX(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_w_f##SEW##m##LMUL (			\
  vint##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_x_w_f##SEW##m##LMUL##_m (		\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##_t maskedoff, 					\
  vint##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_FX, nfcvt_fx, fncvt)

#define _RVV_FLOAT_NCVT_FXU(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_w_f##SEW##m##LMUL (			\
  vuint##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_xu_w_f##SEW##m##LMUL##_m (		\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##_t maskedoff, 					\
  vuint##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_FXU, nfcvt_fxu, fncvt)

#define _RVV_FLOAT_NCVT_FF(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, NAME)\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_f_w_f##SEW##m##LMUL (					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##NAME##_f_f_w_f##SEW##m##LMUL##_m (					\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##_t maskedoff, 					\
  vfloat##WSEW##m##WLMUL##_t a)						\
{									\
  return __builtin_riscv_vf##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_FF, nfcvt_ff, fncvt)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_FLOAT_NCVT_FF, nfcvt_rod_ff, fncvt_rod)

#define _RVV_MASK_NULLARY_OP(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_m_b##MLEN ()						\
{									\
  return __builtin_riscv_v##OP##bool##MLEN ();				\
}

#define _RVV_MASK_BIN_OP(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_mm_b##MLEN (vbool##MLEN##_t a,				\
			  vbool##MLEN##_t b)				\
{									\
  return __builtin_riscv_v##OP##bool##MLEN (a, b);			\
}

#define _RVV_MASK_UNARY_OP_SCALAR(MLEN, OP)				\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN (vbool##MLEN##_t a)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si (a);			\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di (a);			\
}									\
__extension__ extern __inline word_type					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
v##OP##_m_b##MLEN##_m (vbool##MLEN##_t mask,		\
				vbool##MLEN##_t a)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##bool##MLEN##_si_mask (mask, a);	\
  else									\
    return __builtin_riscv_v##OP##bool##MLEN##_di_mask (mask, a);	\
}

#define _RVV_MASK_UNARY_OP_NOMASK(MLEN, OP)				\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_m_b##MLEN (vbool##MLEN##_t a)				\
{									\
 return __builtin_riscv_v##OP##bool##MLEN (a);				\
}									\

#define _RVV_MASK_UNARY_OP(MLEN, OP)					\
  _RVV_MASK_UNARY_OP_NOMASK(MLEN, OP)					\
__extension__ extern __inline vbool##MLEN##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vm##OP##_m_b##MLEN##_m (vbool##MLEN##_t mask,		\
				vbool##MLEN##_t maskedoff,		\
				vbool##MLEN##_t a)			\
{									\
  return __builtin_riscv_v##OP##bool##MLEN##_mask (mask, maskedoff, a);	\
}

_RVV_MASK_ITERATOR (_RVV_MASK_NULLARY_OP, clr)
_RVV_MASK_ITERATOR (_RVV_MASK_NULLARY_OP, set)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_SCALAR, popc)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_SCALAR, first)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sbf)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sof)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP, sif)
_RVV_MASK_ITERATOR (_RVV_MASK_UNARY_OP_NOMASK, not)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, and)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, or)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, xor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, nand)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, nor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, xnor)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, andnot)
_RVV_MASK_ITERATOR (_RVV_MASK_BIN_OP, ornot)

#define _RVV_IOTA(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
viota_m_u##SEW##m##LMUL (vbool##MLEN##_t a)			\
{									\
  return __builtin_riscv_viotauint##SEW##m##LMUL (a);			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
viota_m_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			       vuint##SEW##m##LMUL##_t maskedoff,	\
				      vbool##MLEN##_t a)		\
{									\
  return __builtin_riscv_viotauint##SEW##m##LMUL##_mask (mask,		\
							 maskedoff, a);	\
}

_RVV_INT_ITERATOR (_RVV_IOTA)

#define _RVV_VID(SEW, LMUL, MLEN, T)					\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vid_v_u##SEW##m##LMUL ()						\
{									\
  return __builtin_riscv_viduint##SEW##m##LMUL ();			\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vid_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
			      vuint##SEW##m##LMUL##_t maskedoff)	\
{									\
  return __builtin_riscv_viduint##SEW##m##LMUL##_mask (mask, maskedoff);\
}


_RVV_INT_ITERATOR (_RVV_VID)

#define _RVV_MASK_MOVE(MLEN, OP)                                       \
__extension__ extern __inline vbool##MLEN##_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vmmv_m_b##MLEN (vbool##MLEN##_t a)					\
{                                                                      \
  return a;                                                            \
}

_RVV_MASK_ITERATOR (_RVV_MASK_MOVE,)

/* Helpers for FP widening multiply.  */
#if 0
__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmul_vv_float16m4 (vfloat16m4_t a, vfloat16m4_t b)
{
  return __builtin_riscv_vfwmulfloat16m4 (a, b);
}

__extension__ extern __inline vfloat32m8_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vwmul_vf_float16m4 (vfloat16m4_t a, const float16_t b)
{
  return __builtin_riscv_vfwmulfloat16m4_scalar (a, b);
}
#endif

/* Reductions.  */

#define _RVV_REDUC_OP(SEW, LMUL, MLEN, T, OP, OPU)			\
__extension__ extern __inline vint##SEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_i##SEW##m##LMUL##_i##SEW##m1 (vint##SEW##m1_t dst,	\
					    vint##SEW##m##LMUL##_t a,	\
					    vint##SEW##m1_t b)		\
{									\
  return __builtin_riscv_reduc_##OP##int##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vuint##SEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OPU##_vs_u##SEW##m##LMUL##_u##SEW##m1 (vuint##SEW##m1_t dst,	\
					     vuint##SEW##m##LMUL##_t a,	\
					     vuint##SEW##m1_t b)	\
{									\
  return __builtin_riscv_reduc_##OPU##uint##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vint##SEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OP##_vs_i##SEW##m##LMUL##_i##SEW##m1_m (vbool##MLEN##_t mask,	\
					      vint##SEW##m1_t dst,	\
					      vint##SEW##m##LMUL##_t a,	\
					      vint##SEW##m1_t b)	\
{									\
  return __builtin_riscv_reduc_##OP##int##SEW##m##LMUL##_mask (mask, dst,\
							       b, a);	\
}									\
__extension__ extern __inline vuint##SEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vred##OPU##_vs_u##SEW##m##LMUL##_u##SEW##m1_m (vbool##MLEN##_t mask,	\
					       vuint##SEW##m1_t dst,\
					       vuint##SEW##m##LMUL##_t a,\
					       vuint##SEW##m1_t b)	\
{									\
  return __builtin_riscv_reduc_##OPU##uint##SEW##m##LMUL##_mask (mask, dst,\
								 b, a);	\
}

_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, sum, sum)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, max, maxu)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, min, minu)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, and, and)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, or, or)
_RVV_INT_ITERATOR_ARG (_RVV_REDUC_OP, xor, xor)

#define _RVV_WREDUC_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP, OPU)	\
__extension__ extern __inline vint##WSEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_i##SEW##m##LMUL##_i##WSEW##m1 (vint##WSEW##m1_t dst,	\
					      vint##SEW##m##LMUL##_t a,	\
					      vint##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_wreduc_##OP##int##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vuint##WSEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OPU##_vs_u##SEW##m##LMUL##_u##WSEW##m1 (vuint##WSEW##m1_t dst,	\
					       vuint##SEW##m##LMUL##_t a,\
					       vuint##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_wreduc_##OPU##uint##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vint##WSEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OP##_vs_i##SEW##m##LMUL##_i##WSEW##m1_m (vbool##MLEN##_t mask,	\
						vint##WSEW##m1_t dst,	\
						vint##SEW##m##LMUL##_t a,\
						vint##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_wreduc_##OP##int##SEW##m##LMUL##_mask (mask, dst,\
							     b, a);	\
}									\
__extension__ extern __inline vuint##WSEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vwred##OPU##_vs_u##SEW##m##LMUL##_u##WSEW##m1_m (vbool##MLEN##_t mask,	\
						 vuint##WSEW##m1_t dst, \
						 vuint##SEW##m##LMUL##_t a,\
						 vuint##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_wreduc_##OPU##uint##SEW##m##LMUL##_mask (mask,	dst, \
								 b, a);	\
}

_RVV_WRED_INT_ITERATOR_ARG (_RVV_WREDUC_OP, sum, sumu)

#define _RVV_FREDUC_OP(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vfloat##SEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfred##OP##_vs_f##SEW##m##LMUL##_f##SEW##m1 (vfloat##SEW##m1_t dst,	\
					     vfloat##SEW##m##LMUL##_t a,\
					     vfloat##SEW##m1_t b)	\
{									\
  return __builtin_riscv_freduc_##OP##float##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vfloat##SEW##m1_t				\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfred##OP##_vs_f##SEW##m##LMUL##_f##SEW##m1_m (vbool##MLEN##_t mask,	\
					       vfloat##SEW##m1_t dst,	\
					       vfloat##SEW##m##LMUL##_t a,\
					       vfloat##SEW##m1_t b)	\
{									\
  return __builtin_riscv_freduc_##OP##float##SEW##m##LMUL##_mask (mask, dst, \
								  b, a);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, sum)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, osum)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, max)
_RVV_FLOAT_ITERATOR_ARG (_RVV_FREDUC_OP, min)

#define _RVV_FWREDUC_OP(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vfloat##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfwred##OP##_vs_f##SEW##m##LMUL##_f##WSEW##m1 (vfloat##WSEW##m1_t dst,	\
					       vfloat##SEW##m##LMUL##_t a,\
					       vfloat##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_fwreduc_##OP##float##SEW##m##LMUL (dst, b, a);	\
}									\
__extension__ extern __inline vfloat##WSEW##m1_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vfwred##OP##_vs_f##SEW##m##LMUL##_f##WSEW##m1_m (vbool##MLEN##_t mask,	\
						 vfloat##WSEW##m1_t dst, \
						 vfloat##SEW##m##LMUL##_t a,\
						 vfloat##WSEW##m1_t b)	\
{									\
  return __builtin_riscv_fwreduc_##OP##float##SEW##m##LMUL##_mask (mask, dst, \
								   b, a);\
}									\

_RVV_WRED_FLOAT_ITERATOR_ARG (_RVV_FWREDUC_OP, sum)
_RVV_WRED_FLOAT_ITERATOR_ARG (_RVV_FWREDUC_OP, osum)

#define _RVV_VREINTERPRET(SEW, LMUL, MLEN, T)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_i##SEW##m##LMUL##_f##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_i##SEW##m##LMUL##_f##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_u##SEW##m##LMUL##_f##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_u##SEW##m##LMUL##_f##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_f##SEW##m##LMUL##_i##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_f##SEW##m##LMUL##_i##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_f##SEW##m##LMUL##_u##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_f##SEW##m##LMUL##_u##SEW##m##LMUL (a);\
}

#define _RVV_VREINTERPRET_INT(SEW, LMUL, MLEN, T)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_u##SEW##m##LMUL##_i##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_u##SEW##m##LMUL##_i##SEW##m##LMUL (a);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_i##SEW##m##LMUL##_u##SEW##m##LMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_i##SEW##m##LMUL##_u##SEW##m##LMUL (a);\
}

_RVV_FLOAT_ITERATOR (_RVV_VREINTERPRET)

_RVV_INT_ITERATOR (_RVV_VREINTERPRET_INT)

#define _RVV_VREINTERPRET_XSEW_INT(SEW, LMUL, MLEN, T, XSEW, XLMUL)	\
__extension__ extern __inline vint##XSEW##m##XLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_u##SEW##m##LMUL##_i##XSEW##m##XLMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_u##SEW##m##LMUL##_i##XSEW##m##XLMUL (a);\
}									\
__extension__ extern __inline vuint##XSEW##m##XLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_i##SEW##m##LMUL##_u##XSEW##m##XLMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_i##SEW##m##LMUL##_u##XSEW##m##XLMUL (a);\
}									\
__extension__ extern __inline vint##XSEW##m##XLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_i##SEW##m##LMUL##_i##XSEW##m##XLMUL (vint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_i##SEW##m##LMUL##_i##XSEW##m##XLMUL (a);\
}									\
__extension__ extern __inline vuint##XSEW##m##XLMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_u##SEW##m##LMUL##_u##XSEW##m##XLMUL (vuint##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_u##SEW##m##LMUL##_u##XSEW##m##XLMUL (a);\
}

_RVV_INT_REINT_ITERATOR (_RVV_VREINTERPRET_XSEW_INT)

#define _RVV_VREINTERPRET_XSEW_FLOAT(SEW, LMUL, MLEN, T, XSEW, XLMUL)	\
__extension__ extern __inline vfloat##XSEW##m##XLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vreinterpret_v_f##SEW##m##LMUL##_f##XSEW##m##XLMUL (vfloat##SEW##m##LMUL##_t a)\
{									\
  return __builtin_riscv_vreinterpret_v_f##SEW##m##LMUL##_f##XSEW##m##XLMUL (a);\
}									\

_RVV_FLOAT_REINT_ITERATOR (_RVV_VREINTERPRET_XSEW_FLOAT)

#define _RVV_MAC_FLOAT(SEW, LMUL, MLEN, T, OP)				\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t acc,		\
			  vfloat##SEW##m##LMUL##_t a,			\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t acc,		\
			  _RVV_F##SEW##_TYPE a,				\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##SEW##m##LMUL##_t acc,	\
				   vfloat##SEW##m##LMUL##_t a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_mask (mask, acc, a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##SEW##m##LMUL##_t acc,	\
				   _RVV_F##SEW##_TYPE a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, macc)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, nmacc)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, msac)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, nmsac)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, madd)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, nmadd)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, msub)
_RVV_FLOAT_ITERATOR_ARG (_RVV_MAC_FLOAT, nmsub)

#define _RVV_WMAC_FLOAT(SEW, LMUL, MLEN, T, WSEW, WLMUL, WT, OP)	\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL (vfloat##WSEW##m##WLMUL##_t acc,		\
			  vfloat##SEW##m##LMUL##_t a,			\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL (acc, a, b);	\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL (vfloat##WSEW##m##WLMUL##_t acc,		\
			  _RVV_F##SEW##_TYPE a,				\
			  vfloat##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar (acc, a, b);\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vv_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t acc,	\
				   vfloat##SEW##m##LMUL##_t a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_mask (mask, acc, a, b);	\
}									\
__extension__ extern __inline vfloat##WSEW##m##WLMUL##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vf##OP##_vf_f##WSEW##m##WLMUL##_m (vbool##MLEN##_t mask,		\
				   vfloat##WSEW##m##WLMUL##_t acc,	\
				   _RVV_F##SEW##_TYPE a,		\
				   vfloat##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_vf##OP##_sv_f##SEW##m##LMUL##_scalar_mask (mask, acc, a, b);\
}

_RVV_WFLOAT_ITERATOR_ARG (_RVV_WMAC_FLOAT, wmacc)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_WMAC_FLOAT, wnmacc)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_WMAC_FLOAT, wmsac)
_RVV_WFLOAT_ITERATOR_ARG (_RVV_WMAC_FLOAT, wnmsac)

#define _RVV_INT_VRGATHER(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			 vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			 vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL (a, b);		\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vint##SEW##m##LMUL##_t maskedoff,	\
				vint##SEW##m##LMUL##_t a,		\
				vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vuint##SEW##m##LMUL##_t maskedoff, 	\
				vuint##SEW##m##LMUL##_t a,		\
				vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a, b);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_i##SEW##m##LMUL (vint##SEW##m##LMUL##_t a,			\
			 size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si_scalar (a, b);	\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di_scalar (a, b);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_u##SEW##m##LMUL (vuint##SEW##m##LMUL##_t a,			\
			 size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_si_scalar (a, b);\
  else									\
    return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_di_scalar (a, b);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vint##SEW##m##LMUL##_t maskedoff,	\
				vint##SEW##m##LMUL##_t a,		\
				size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_si_scalar_mask (	\
		mask, maskedoff, a, b);					\
  else									\
    return __builtin_riscv_v##OP##int##SEW##m##LMUL##_di_scalar_mask (	\
		mask, maskedoff, a, b);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vuint##SEW##m##LMUL##_t maskedoff,	\
				vuint##SEW##m##LMUL##_t a,		\
				size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_si_scalar_mask (	\
		mask, maskedoff, a, b);					\
  else									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_di_scalar_mask (	\
		mask, maskedoff, a, b);					\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_VRGATHER, vrgather)

#define _RVV_FLOAT_VRGATHER(SEW, LMUL, MLEN, T, INT_T, OP)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,			\
			 vuint##SEW##m##LMUL##_t b)			\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL (a, b);			\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vv_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vfloat##SEW##m##LMUL##_t maskedoff, 	\
				vfloat##SEW##m##LMUL##_t a,		\
				vuint##SEW##m##LMUL##_t b)		\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a, b);						\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_f##SEW##m##LMUL (vfloat##SEW##m##LMUL##_t a,			\
			 size_t b)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_si_scalar (a, b);	\
  else									\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_di_scalar (a, b);	\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vx_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,			\
				vfloat##SEW##m##LMUL##_t maskedoff,	\
				vfloat##SEW##m##LMUL##_t a,		\
				size_t b)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_si_scalar_mask (	\
		mask, maskedoff, a, b);					\
  else									\
    return __builtin_riscv_v##OP##f##SEW##m##LMUL##_di_scalar_mask (	\
		mask, maskedoff, a, b);					\
}

_RVV_FLOAT_INT_ITERATOR_ARG (_RVV_FLOAT_VRGATHER, vrgather)

#define _RVV_INT_VCOMPRESS(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vm_i##SEW##m##LMUL (vbool##MLEN##_t mask,				\
			 vint##SEW##m##LMUL##_t maskedoff,		\
			 vint##SEW##m##LMUL##_t a)			\
{									\
  return __builtin_riscv_v##OP##int##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vm_u##SEW##m##LMUL (vbool##MLEN##_t mask,				\
			 vuint##SEW##m##LMUL##_t maskedoff, 		\
			 vuint##SEW##m##LMUL##_t a)			\
{									\
  return __builtin_riscv_v##OP##uint##SEW##m##LMUL##_mask (		\
	  mask, maskedoff, a);						\
}

_RVV_INT_ITERATOR_ARG (_RVV_INT_VCOMPRESS, vcompress)

#define _RVV_FLOAT_VCOMPRESS(SEW, LMUL, MLEN, T, OP)			\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
OP##_vm_f##SEW##m##LMUL (vbool##MLEN##_t mask,				\
			 vfloat##SEW##m##LMUL##_t maskedoff, 		\
			 vfloat##SEW##m##LMUL##_t a)			\
{									\
  return __builtin_riscv_v##OP##f##SEW##m##LMUL##_mask (		\
      mask, maskedoff, a);						\
}

_RVV_FLOAT_ITERATOR_ARG (_RVV_FLOAT_VCOMPRESS, vcompress)

#define _RVVINT_AMO(SEW, LMUL, MLEN, T, ISEW, ILMUL, NAME)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_i##SEW##m##LMUL (const T *a,				\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vint##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##ii##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##ii##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_u##SEW##m##LMUL (const u##T *a,				\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vuint##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##iu##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##iu##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_i##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				       const T *a,			\
				       vuint##ISEW##m##ILMUL##_t indexed,\
				       vint##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##ii##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, a, indexed, value);					\
  else									\
    return __builtin_riscv_##NAME##ii##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, a, indexed, value);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_u##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				       const u##T *a,			\
				       vuint##ISEW##m##ILMUL##_t indexed,\
				       vuint##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##iu##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	     mask, a, indexed, value);					\
  else									\
    return __builtin_riscv_##NAME##iu##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	     mask, a, indexed, value);					\
}

_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamoswape)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamoadde)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamoxore)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamoande)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamoore)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamomine)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamomaxe)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamominue)
_RVV_INT_INDEX_ITERATOR_ARG (_RVVINT_AMO, vamomaxue)

#define _RVVFLOAT_AMO(SEW, LMUL, MLEN, T, ISEW, ILMUL, NAME)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_f##SEW##m##LMUL (const _RVV_F##SEW##_TYPE *a,		\
				vuint##ISEW##m##ILMUL##_t indexed,	\
				vfloat##SEW##m##LMUL##_t value)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_##NAME##if##SEW##m##LMUL##_##ISEW##m##ILMUL##_si (a, indexed, value);\
  else									\
    return __builtin_riscv_##NAME##if##SEW##m##LMUL##_##ISEW##m##ILMUL##_di (a, indexed, value);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
NAME##i##ISEW##_v_f##SEW##m##LMUL##_m (vbool##MLEN##_t mask,		\
				       const _RVV_F##SEW##_TYPE *a,	\
				       vuint##ISEW##m##ILMUL##_t indexed,\
				       vfloat##SEW##m##LMUL##_t value)	\
{									\
  if (__riscv_xlen == 32)						\
  return __builtin_riscv_##NAME##if##SEW##m##LMUL##_##ISEW##m##ILMUL##_si_mask (\
	   mask, a, indexed, value);					\
  else									\
  return __builtin_riscv_##NAME##if##SEW##m##LMUL##_##ISEW##m##ILMUL##_di_mask (\
	   mask, a, indexed, value);					\
}

_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamoswape)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamoadde)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamoxore)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamoande)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamoore)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamomine)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamomaxe)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamominue)
_RVV_FLOAT_INDEX_ITERATOR_ARG (_RVVFLOAT_AMO, vamomaxue)

__extension__ extern __inline size_t
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))
vreadvl ()
{
  if (__riscv_xlen == 32)
    return __builtin_riscv_vreadvlsi ();
  else
    return __builtin_riscv_vreadvldi ();
}


#define _RVVINT_TUPLE_LDST(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF (const int##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loadint##SEW##m##LMUL##x##NF##_si (a);	\
  else									\
    return __builtin_riscv_vseg_loadint##SEW##m##LMUL##x##NF##_di (a);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const int##SEW##_t *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loadint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_loadint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_i##SEW##m##LMUL##x##NF (const int##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loadint##SEW##m##LMUL##x##NF##_si (a);\
  else									\
    return __builtin_riscv_vseg_ff_loadint##SEW##m##LMUL##x##NF##_di (a);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_i##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const int##SEW##_t *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loadint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_ff_loadint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF (const int##SEW##_t *a, ptrdiff_t s)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loadint##SEW##m##LMUL##x##NF##_si (a, s);\
  else									\
    return __builtin_riscv_vseg_strided_loadint##SEW##m##LMUL##x##NF##_di (a, s);\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const int##SEW##_t *a, ptrdiff_t s)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loadint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a, s);					\
  else									\
    return __builtin_riscv_vseg_strided_loadint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a, s);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF (const uint##SEW##_t *a)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loaduint##SEW##m##LMUL##x##NF##_si (a);	\
  else									\
    return __builtin_riscv_vseg_loaduint##SEW##m##LMUL##x##NF##_di (a);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const uint##SEW##_t *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loaduint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_loaduint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_u##SEW##m##LMUL##x##NF (const uint##SEW##_t *a)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loaduint##SEW##m##LMUL##x##NF##_si (a);\
  else									\
    return __builtin_riscv_vseg_ff_loaduint##SEW##m##LMUL##x##NF##_di (a);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_u##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const uint##SEW##_t *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loaduint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_ff_loaduint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF (const uint##SEW##_t *a, ptrdiff_t s)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loaduint##SEW##m##LMUL##x##NF##_si (a, s);	\
  else									\
    return __builtin_riscv_vseg_strided_loaduint##SEW##m##LMUL##x##NF##_di (a, s);	\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const uint##SEW##_t *a, ptrdiff_t s)					\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loaduint##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a, s);					\
  else									\
    return __builtin_riscv_vseg_strided_loaduint##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a,s );					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF (uint##SEW##_t *a,		\
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storeuint##SEW##m##LMUL##x##NF##_si (b, a);	\
  else									\
    __builtin_riscv_vseg_storeuint##SEW##m##LMUL##x##NF##_di (b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   uint##SEW##_t *a,		\
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storeuint##SEW##m##LMUL##x##NF##_si_mask (mask, b, a);	\
  else									\
    __builtin_riscv_vseg_storeuint##SEW##m##LMUL##x##NF##_di_mask (mask, b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF (int##SEW##_t *a,			\
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storeint##SEW##m##LMUL##x##NF##_si (b, a);	\
  else									\
    __builtin_riscv_vseg_storeint##SEW##m##LMUL##x##NF##_di (b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   int##SEW##_t *a,		\
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storeint##SEW##m##LMUL##x##NF##_si_mask (mask, b, a);	\
  else									\
    __builtin_riscv_vseg_storeint##SEW##m##LMUL##x##NF##_di_mask (mask, b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF (uint##SEW##_t *a, ptrdiff_t s,	\
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storeuint##SEW##m##LMUL##x##NF##_si (b, a, s);\
  else									\
    __builtin_riscv_vseg_strided_storeuint##SEW##m##LMUL##x##NF##_di (b, a, s);\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_u##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   uint##SEW##_t *a, ptrdiff_t s,\
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storeuint##SEW##m##LMUL##x##NF##_si_mask (mask, b, a, s);	\
  else									\
    __builtin_riscv_vseg_strided_storeuint##SEW##m##LMUL##x##NF##_di_mask (mask, b, a, s);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF (int##SEW##_t *a, ptrdiff_t s,	\
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storeint##SEW##m##LMUL##x##NF##_si (b, a, s);	\
  else									\
    __builtin_riscv_vseg_strided_storeint##SEW##m##LMUL##x##NF##_di (b, a, s);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_i##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   int##SEW##_t *a,		\
					   ptrdiff_t s,			\
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storeint##SEW##m##LMUL##x##NF##_si_mask (mask, b, a, s);	\
  else									\
    __builtin_riscv_vseg_strided_storeint##SEW##m##LMUL##x##NF##_di_mask (mask, b, a, s);	\
}									\

_RVV_INT_TUPLE_ITERATOR_ARG (_RVVINT_TUPLE_LDST, )

#define _RVVINT_TUPLE_IDX_LDST(SEW, LMUL, NF, MLEN, T, ISEW, ILMUL)	\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_i##SEW##m##LMUL##x##NF (const int##SEW##_t *a,	\
					       vuint##ISEW##m##ILMUL##_t idx)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadi##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (a, idx);	\
  else									\
    return __builtin_riscv_vseg_idx_loadi##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (a, idx);	\
}									\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_i##SEW##m##LMUL##x##NF##_m (			\
  vbool##MLEN##_t mask,							\
  vint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const int##SEW##_t *a,						\
  vuint##ISEW##m##ILMUL##_t idx)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadi##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (\
	     mask, maskedoff, a, idx);					\
  else									\
    return __builtin_riscv_vseg_idx_loadi##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (\
	     mask, maskedoff, a, idx);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_u##SEW##m##LMUL##x##NF (const uint##SEW##_t *a, vuint##ISEW##m##ILMUL##_t idx)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (a, idx);\
  else									\
    return __builtin_riscv_vseg_idx_loadu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (a, idx);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_u##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vuint##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const uint##SEW##_t *a, vuint##ISEW##m##ILMUL##_t idx)			\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (\
	     mask, maskedoff, a, idx);					\
  else									\
    return __builtin_riscv_vseg_idx_loadu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (\
	     mask, maskedoff, a, idx);					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_u##SEW##m##LMUL##x##NF (uint##SEW##_t *a,		\
					vuint##ISEW##m##ILMUL##_t idx, \
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storeu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (b, a, idx);	\
  else									\
    __builtin_riscv_vseg_idx_storeu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (b, a, idx);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_i##SEW##m##LMUL##x##NF (int##SEW##_t *a,		\
					vuint##ISEW##m##ILMUL##_t idx, \
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storei##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (b, a, idx);	\
  else									\
    __builtin_riscv_vseg_idx_storei##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (b, a, idx);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_u##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   uint##SEW##_t *a,		\
					   vuint##ISEW##m##ILMUL##_t idx, \
				   vuint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storeu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (mask, b, a, idx);	\
  else									\
    __builtin_riscv_vseg_idx_storeu##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (mask, b, a, idx);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_i##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					   int##SEW##_t *a,		\
					   vuint##ISEW##m##ILMUL##_t idx, \
				   vint##SEW##m##LMUL##x##NF##_t b)	\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storei##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (mask, b, a, idx);	\
  else									\
    __builtin_riscv_vseg_idx_storei##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (mask, b, a, idx);	\
}									\

_RVV_INT_TUPLE_INDEX_ITERATOR (_RVVINT_TUPLE_IDX_LDST)


#define _RVVFLOAT_TUPLE_LDST(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF (const _RVV_F##SEW##_TYPE *a)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loadfloat##SEW##m##LMUL##x##NF##_si (a);\
  else									\
    return __builtin_riscv_vseg_loadfloat##SEW##m##LMUL##x##NF##_di (a);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const _RVV_F##SEW##_TYPE *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_loadfloat##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_loadfloat##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_f##SEW##m##LMUL##x##NF (const _RVV_F##SEW##_TYPE *a)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loadfloat##SEW##m##LMUL##x##NF##_si (a);\
  else									\
    return __builtin_riscv_vseg_ff_loadfloat##SEW##m##LMUL##x##NF##_di (a);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlseg##NF##e##SEW##ff_v_f##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const _RVV_F##SEW##_TYPE *a)						\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_ff_loadfloat##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a);					\
  else									\
    return __builtin_riscv_vseg_ff_loadfloat##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a);					\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF (const _RVV_F##SEW##_TYPE *a, ptrdiff_t s) \
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loadfloat##SEW##m##LMUL##x##NF##_si (a, s);\
  else									\
    return __builtin_riscv_vseg_strided_loadfloat##SEW##m##LMUL##x##NF##_di (a, s);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlsseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const _RVV_F##SEW##_TYPE *a, ptrdiff_t s)				\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_strided_loadfloat##SEW##m##LMUL##x##NF##_si_mask (\
	     mask, maskedoff, a, s);					\
  else									\
    return __builtin_riscv_vseg_strided_loadfloat##SEW##m##LMUL##x##NF##_di_mask (\
	     mask, maskedoff, a, s);					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF (_RVV_F##SEW##_TYPE *a,		\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storefloat##SEW##m##LMUL##x##NF##_si (b, a);	\
  else									\
    __builtin_riscv_vseg_storefloat##SEW##m##LMUL##x##NF##_di (b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					  _RVV_F##SEW##_TYPE *a,	\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_storefloat##SEW##m##LMUL##x##NF##_si_mask (mask, b, a);	\
  else									\
    __builtin_riscv_vseg_storefloat##SEW##m##LMUL##x##NF##_di_mask (mask, b, a);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF (_RVV_F##SEW##_TYPE *a, ptrdiff_t s,\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storefloat##SEW##m##LMUL##x##NF##_si (b, a, s);	\
  else									\
    __builtin_riscv_vseg_strided_storefloat##SEW##m##LMUL##x##NF##_di (b, a, s);	\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vssseg##NF##e##SEW##_v_f##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					  _RVV_F##SEW##_TYPE *a, ptrdiff_t s,	\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_strided_storefloat##SEW##m##LMUL##x##NF##_si_mask (mask, b, a, s);	\
  else									\
    __builtin_riscv_vseg_strided_storefloat##SEW##m##LMUL##x##NF##_di_mask (mask, b, a, s);	\
}


_RVV_FLOAT_TUPLE_ITERATOR_ARG (_RVVFLOAT_TUPLE_LDST, )

#define _RVVFLOAT_TUPLE_IDX_LDST(SEW, LMUL, NF, MLEN, T, ISEW, ILMUL)	\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_f##SEW##m##LMUL##x##NF (const _RVV_F##SEW##_TYPE *a, vuint##ISEW##m##ILMUL##_t idx)	\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadf##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (a, idx);\
  else									\
    return __builtin_riscv_vseg_idx_loadf##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (a, idx);\
}									\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vlxseg##NF##ei##ISEW##_v_f##SEW##m##LMUL##x##NF##_m (				\
  vbool##MLEN##_t mask,							\
  vfloat##SEW##m##LMUL##x##NF##_t maskedoff,				\
  const _RVV_F##SEW##_TYPE *a, vuint##ISEW##m##ILMUL##_t idx)		\
{									\
  if (__riscv_xlen == 32)						\
    return __builtin_riscv_vseg_idx_loadf##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (\
	     mask, maskedoff, a, idx);					\
  else									\
    return __builtin_riscv_vseg_idx_loadf##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (\
	     mask, maskedoff, a, idx);					\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_f##SEW##m##LMUL##x##NF (_RVV_F##SEW##_TYPE *a,		\
					vuint##ISEW##m##ILMUL##_t idx,	\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storef##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si (b, a, idx);\
  else									\
    __builtin_riscv_vseg_idx_storef##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di (b, a, idx);\
}									\
__extension__ extern __inline void					\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vsxseg##NF##ei##ISEW##_v_f##SEW##m##LMUL##x##NF##_m (vbool##MLEN##_t mask,	\
					  _RVV_F##SEW##_TYPE *a,	\
					vuint##ISEW##m##ILMUL##_t idx,	\
				       vfloat##SEW##m##LMUL##x##NF##_t b)\
{									\
  if (__riscv_xlen == 32)						\
    __builtin_riscv_vseg_idx_storef##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_si_mask (mask, b, a, idx);	\
  else									\
    __builtin_riscv_vseg_idx_storef##SEW##m##LMUL##x##NF##_##ISEW##m##ILMUL##_di_mask (mask, b, a, idx);	\
}									\

_RVV_FLOAT_TUPLE_INDEX_ITERATOR (_RVVFLOAT_TUPLE_IDX_LDST)


#define _RVVINT_TUPLE_INSERT(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##x##NF##_t vt,		\
			     unsigned idx,				\
			     vint##SEW##m##LMUL##_t v)			\
{									\
  return __builtin_riscv_vtuple_insertint##SEW##m##LMUL##x##NF (vt, v, idx);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##x##NF##_t vt,		\
			     unsigned idx,				\
			     vuint##SEW##m##LMUL##_t v)			\
{									\
  return __builtin_riscv_vtuple_insertuint##SEW##m##LMUL##x##NF (vt, v, idx);\
}

_RVV_INT_TUPLE_ITERATOR_ARG (_RVVINT_TUPLE_INSERT, )

#define _RVVFLOAT_TUPLE_INSERT(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vset_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##x##NF##_t vt,	\
			     unsigned idx,				\
			     vfloat##SEW##m##LMUL##_t v)		\
{									\
  return __builtin_riscv_vtuple_insertfloat##SEW##m##LMUL##x##NF (vt, v, idx);\
}
_RVV_FLOAT_TUPLE_ITERATOR_ARG (_RVVFLOAT_TUPLE_INSERT, )

#define _RVVINT_TUPLE_EXTRACT(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vget_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##x##NF##_t vt,		\
			     unsigned idx)				\
{									\
  return __builtin_riscv_vtuple_extractint##SEW##m##LMUL##x##NF (vt, idx);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vget_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##x##NF##_t vt,		\
			     unsigned idx)				\
{									\
  return __builtin_riscv_vtuple_extractuint##SEW##m##LMUL##x##NF (vt, idx);\
}

_RVV_INT_TUPLE_ITERATOR_ARG (_RVVINT_TUPLE_EXTRACT, )

#define _RVVFLOAT_TUPLE_EXTRACT(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##_t			\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vget_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##x##NF##_t vt,	\
			     unsigned idx)				\
{									\
  return __builtin_riscv_vtuple_extractfloat##SEW##m##LMUL##x##NF (vt, idx);\
}
_RVV_FLOAT_TUPLE_ITERATOR_ARG (_RVVFLOAT_TUPLE_EXTRACT, )

#define _RVVINT_TUPLE_CREATE2(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (v1, v2);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2);							\
}

_RVV_INT_TUPLE_NF2_ITERATOR_ARG (_RVVINT_TUPLE_CREATE2, )

#define _RVVINT_TUPLE_CREATE3(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (v1, v2, v3);\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3);							\
}

_RVV_INT_TUPLE_NF3_ITERATOR_ARG (_RVVINT_TUPLE_CREATE3, )

#define _RVVINT_TUPLE_CREATE4(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3,		\
				vint##SEW##m##LMUL##_t v4)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3,		\
				vuint##SEW##m##LMUL##_t v4)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4);						\
}

_RVV_INT_TUPLE_NF4_ITERATOR_ARG (_RVVINT_TUPLE_CREATE4, )

#define _RVVINT_TUPLE_CREATE5(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3,		\
				vint##SEW##m##LMUL##_t v4,		\
				vint##SEW##m##LMUL##_t v5)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5);						\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3,		\
				vuint##SEW##m##LMUL##_t v4,		\
				vuint##SEW##m##LMUL##_t v5)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5);						\
}

_RVV_INT_TUPLE_NF5_ITERATOR_ARG (_RVVINT_TUPLE_CREATE5, )

#define _RVVINT_TUPLE_CREATE6(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3,		\
				vint##SEW##m##LMUL##_t v4,		\
				vint##SEW##m##LMUL##_t v5,		\
				vint##SEW##m##LMUL##_t v6)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3,		\
				vuint##SEW##m##LMUL##_t v4,		\
				vuint##SEW##m##LMUL##_t v5,		\
				vuint##SEW##m##LMUL##_t v6)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6);					\
}

_RVV_INT_TUPLE_NF6_ITERATOR_ARG (_RVVINT_TUPLE_CREATE6, )

#define _RVVINT_TUPLE_CREATE7(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3,		\
				vint##SEW##m##LMUL##_t v4,		\
				vint##SEW##m##LMUL##_t v5,		\
				vint##SEW##m##LMUL##_t v6,		\
				vint##SEW##m##LMUL##_t v7)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7);					\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3,		\
				vuint##SEW##m##LMUL##_t v4,		\
				vuint##SEW##m##LMUL##_t v5,		\
				vuint##SEW##m##LMUL##_t v6,		\
				vuint##SEW##m##LMUL##_t v7)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7);					\
}

_RVV_INT_TUPLE_NF7_ITERATOR_ARG (_RVVINT_TUPLE_CREATE7, )

#define _RVVINT_TUPLE_CREATE8(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_i##SEW##m##LMUL##x##NF (vint##SEW##m##LMUL##_t v1,		\
				vint##SEW##m##LMUL##_t v2,		\
				vint##SEW##m##LMUL##_t v3,		\
				vint##SEW##m##LMUL##_t v4,		\
				vint##SEW##m##LMUL##_t v5,		\
				vint##SEW##m##LMUL##_t v6,		\
				vint##SEW##m##LMUL##_t v7,		\
				vint##SEW##m##LMUL##_t v8)		\
{									\
  return __builtin_riscv_vtuple_createint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7, v8);				\
}									\
__extension__ extern __inline vuint##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_u##SEW##m##LMUL##x##NF (vuint##SEW##m##LMUL##_t v1,		\
				vuint##SEW##m##LMUL##_t v2,		\
				vuint##SEW##m##LMUL##_t v3,		\
				vuint##SEW##m##LMUL##_t v4,		\
				vuint##SEW##m##LMUL##_t v5,		\
				vuint##SEW##m##LMUL##_t v6,		\
				vuint##SEW##m##LMUL##_t v7,		\
				vuint##SEW##m##LMUL##_t v8)		\
{									\
  return __builtin_riscv_vtuple_createuint##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7, v8);				\
}

_RVV_INT_TUPLE_NF8_ITERATOR_ARG (_RVVINT_TUPLE_CREATE8, )


#define _RVVFLOAT_TUPLE_CREATE2(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (v1, v2);\
}

_RVV_FLOAT_TUPLE_NF2_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE2, )

#define _RVVFLOAT_TUPLE_CREATE3(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (v1, v2, v3);\
}

_RVV_FLOAT_TUPLE_NF3_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE3, )

#define _RVVFLOAT_TUPLE_CREATE4(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3,		\
				vfloat##SEW##m##LMUL##_t v4)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4);						\
}

_RVV_FLOAT_TUPLE_NF4_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE4, )

#define _RVVFLOAT_TUPLE_CREATE5(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3,		\
				vfloat##SEW##m##LMUL##_t v4,		\
				vfloat##SEW##m##LMUL##_t v5)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5);						\
}

_RVV_FLOAT_TUPLE_NF5_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE5, )

#define _RVVFLOAT_TUPLE_CREATE6(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3,		\
				vfloat##SEW##m##LMUL##_t v4,		\
				vfloat##SEW##m##LMUL##_t v5,		\
				vfloat##SEW##m##LMUL##_t v6)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6);					\
}

_RVV_FLOAT_TUPLE_NF6_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE6, )

#define _RVVFLOAT_TUPLE_CREATE7(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3,		\
				vfloat##SEW##m##LMUL##_t v4,		\
				vfloat##SEW##m##LMUL##_t v5,		\
				vfloat##SEW##m##LMUL##_t v6,		\
				vfloat##SEW##m##LMUL##_t v7)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7);					\
}

_RVV_FLOAT_TUPLE_NF7_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE7, )

#define _RVVFLOAT_TUPLE_CREATE8(SEW, LMUL, NF, MLEN, T, XARG)		\
__extension__ extern __inline vfloat##SEW##m##LMUL##x##NF##_t		\
__attribute__ ((__always_inline__, __gnu_inline__, __artificial__))	\
vcreate_f##SEW##m##LMUL##x##NF (vfloat##SEW##m##LMUL##_t v1,		\
				vfloat##SEW##m##LMUL##_t v2,		\
				vfloat##SEW##m##LMUL##_t v3,		\
				vfloat##SEW##m##LMUL##_t v4,		\
				vfloat##SEW##m##LMUL##_t v5,		\
				vfloat##SEW##m##LMUL##_t v6,		\
				vfloat##SEW##m##LMUL##_t v7,		\
				vfloat##SEW##m##LMUL##_t v8)		\
{									\
  return __builtin_riscv_vtuple_createfloat##SEW##m##LMUL##x##NF (	\
	   v1, v2, v3, v4, v5, v6, v7, v8);				\
}

_RVV_FLOAT_TUPLE_NF8_ITERATOR_ARG (_RVVFLOAT_TUPLE_CREATE8, )

#endif
#endif
