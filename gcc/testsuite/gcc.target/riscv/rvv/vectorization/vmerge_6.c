/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx4qi __attribute__((vector_size (4)));
typedef int16_t vnx2hi __attribute__((vector_size (4)));
typedef uint8_t vnx4uqi __attribute__((vector_size (4)));
typedef uint16_t vnx2uhi __attribute__((vector_size (4)));

typedef _Float16 vnx2hf __attribute__((vector_size (4)));

#define MASK_4		{ 0, 5, 2, 7 }
#define MASK_2		{ 0, 3 }

__rvv_int8mf4_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8mf4_t x, __rvv_int8mf4_t y)
{
  return __builtin_shuffle ((vnx4qi) x, (vnx4qi) y, (vnx4qi) MASK_4);
}

__rvv_uint8mf4_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8mf4_t x, __rvv_uint8mf4_t y)
{
  return __builtin_shuffle ((vnx4uqi) x, (vnx4uqi) y, (vnx4uqi) MASK_4);
}

__rvv_int16mf4_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16mf4_t x, __rvv_int16mf4_t y)
{
  return __builtin_shuffle ((vnx2hi) x, (vnx2hi) y, (vnx2hi) MASK_2);
}

__rvv_uint16mf4_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16mf4_t x, __rvv_uint16mf4_t y)
{
  return __builtin_shuffle ((vnx2uhi) x, (vnx2uhi) y, (vnx2uhi) MASK_2);
}

__rvv_float16mf4_t __attribute__ ((noinline, noclone))
permute6 (__rvv_float16mf4_t x, __rvv_float16mf4_t y)
{
  return __builtin_shuffle ((vnx2hf) x, (vnx2hf) y, (vnx2hi) MASK_2);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 5 } } */