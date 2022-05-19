/* { dg-do compile } */
/* { dg-options "-O2 -mriscv-vector-bits=256  --save-temps" } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (32)));

/* Predicate vector: 1 0 1 0 ... */

#define MASK_32		{ 0, 33, 2, 35, 4, 37, 6, 39, 8, 41,			\
			  10, 43, 12, 45, 14, 47, 16, 49, 18, 51, 		\
			  20, 53, 22, 55, 24, 57, 26, 59, 28, 61, 30, 63 }

#define INDEX_32 vnx16qi


__rvv_int8m1_t
permute (__rvv_int8m1_t x, __rvv_int8m1_t y)
{
  return __builtin_shuffle ((vnx16qi) x, (vnx16qi) y, (vnx16qi) MASK_32);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 1 } } */
