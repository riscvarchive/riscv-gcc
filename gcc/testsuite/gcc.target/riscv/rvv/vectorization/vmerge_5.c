/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx8qi __attribute__((vector_size (8)));
typedef int16_t vnx4hi __attribute__((vector_size (8)));
typedef int32_t vnx2si __attribute__((vector_size (8)));
typedef uint8_t vnx8uqi __attribute__((vector_size (8)));
typedef uint16_t vnx4uhi __attribute__((vector_size (8)));
typedef uint32_t vnx2usi __attribute__((vector_size (8)));

typedef _Float16 vnx4hf __attribute__((vector_size (8)));
typedef float vnx2sf __attribute__((vector_size (8)));

#define MASK_8		{ 0, 9, 2, 11, 4, 13, 6, 15 }
#define MASK_4		{ 0, 5, 2, 7 }
#define MASK_2		{ 0, 3 }

__rvv_int8mf2_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8mf2_t x, __rvv_int8mf2_t y)
{
  return __builtin_shuffle ((vnx8qi) x, (vnx8qi) y, (vnx8qi) MASK_8);
}

__rvv_uint8mf2_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8mf2_t x, __rvv_uint8mf2_t y)
{
  return __builtin_shuffle ((vnx8uqi) x, (vnx8uqi) y, (vnx8uqi) MASK_8);
}

__rvv_int16mf2_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16mf2_t x, __rvv_int16mf2_t y)
{
  return __builtin_shuffle ((vnx4hi) x, (vnx4hi) y, (vnx4hi) MASK_4);
}

__rvv_uint16mf2_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16mf2_t x, __rvv_uint16mf2_t y)
{
  return __builtin_shuffle ((vnx4uhi) x, (vnx4uhi) y, (vnx4uhi) MASK_4);
}

__rvv_int32mf2_t __attribute__ ((noinline, noclone))
permute4 (__rvv_int32mf2_t x, __rvv_int32mf2_t y)
{
  return __builtin_shuffle ((vnx2si) x, (vnx2si) y, (vnx2si) MASK_2);
}

__rvv_uint32mf2_t __attribute__ ((noinline, noclone))
permute5 (__rvv_uint32mf2_t x, __rvv_uint32mf2_t y)
{
  return __builtin_shuffle ((vnx2usi) x, (vnx2usi) y, (vnx2usi) MASK_2);
}

__rvv_float16mf2_t __attribute__ ((noinline, noclone))
permute6 (__rvv_float16mf2_t x, __rvv_float16mf2_t y)
{
  return __builtin_shuffle ((vnx4hf) x, (vnx4hf) y, (vnx4hi) MASK_4);
}

__rvv_float32mf2_t __attribute__ ((noinline, noclone))
permute7 (__rvv_float32mf2_t x, __rvv_float32mf2_t y)
{
  return __builtin_shuffle ((vnx2sf) x, (vnx2sf) y, (vnx2si) MASK_2);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 8 } } */