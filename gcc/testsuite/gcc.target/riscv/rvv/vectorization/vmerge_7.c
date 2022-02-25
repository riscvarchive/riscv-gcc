/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx2qi __attribute__((vector_size (2)));
typedef uint8_t vnx2uqi __attribute__((vector_size (2)));

#define MASK_2		{ 0, 3 }

__rvv_int8mf8_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8mf8_t x, __rvv_int8mf8_t y)
{
  return __builtin_shuffle ((vnx2qi) x, (vnx2qi) y, (vnx2qi) MASK_2);
}

__rvv_uint8mf8_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8mf8_t x, __rvv_uint8mf8_t y)
{
  return __builtin_shuffle ((vnx2uqi) x, (vnx2uqi) y, (vnx2uqi) MASK_2);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 2 } } */