/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef int16_t vnx8hi __attribute__((vector_size (16)));
typedef int32_t vnx4si __attribute__((vector_size (16)));
typedef int64_t vnx2di __attribute__((vector_size (16)));
typedef uint8_t vnx16uqi __attribute__((vector_size (16)));
typedef uint16_t vnx8uhi __attribute__((vector_size (16)));
typedef uint32_t vnx4usi __attribute__((vector_size (16)));
typedef uint64_t vnx2udi __attribute__((vector_size (16)));

typedef _Float16 vnx8hf __attribute__((vector_size (16)));
typedef float vnx4sf __attribute__((vector_size (16)));
typedef double vnx2df __attribute__((vector_size (16)));

#define MASK_16		{ 0, 17, 2, 19, 4, 21, 6, 23, 8, 25, 10, 27, 12, 29, 14, 31 }
#define MASK_8		{ 0, 9, 2, 11, 4, 13, 6, 15 }
#define MASK_4		{ 0, 5, 2, 7 }
#define MASK_2		{ 0, 3 }

__rvv_int8m1_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8m1_t x, __rvv_int8m1_t y)
{
  return __builtin_shuffle ((vnx16qi) x, (vnx16qi) y, (vnx16qi) MASK_16);
}

__rvv_uint8m1_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8m1_t x, __rvv_uint8m1_t y)
{
  return __builtin_shuffle ((vnx16uqi) x, (vnx16uqi) y, (vnx16uqi) MASK_16);
}

__rvv_int16m1_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16m1_t x, __rvv_int16m1_t y)
{
  return __builtin_shuffle ((vnx8hi) x, (vnx8hi) y, (vnx8hi) MASK_8);
}

__rvv_uint16m1_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16m1_t x, __rvv_uint16m1_t y)
{
  return __builtin_shuffle ((vnx8uhi) x, (vnx8uhi) y, (vnx8uhi) MASK_8);
}

__rvv_int32m1_t __attribute__ ((noinline, noclone))
permute4 (__rvv_int32m1_t x, __rvv_int32m1_t y)
{
  return __builtin_shuffle ((vnx4si) x, (vnx4si) y, (vnx4si) MASK_4);
}

__rvv_uint32m1_t __attribute__ ((noinline, noclone))
permute5 (__rvv_uint32m1_t x, __rvv_uint32m1_t y)
{
  return __builtin_shuffle ((vnx4usi) x, (vnx4usi) y, (vnx4usi) MASK_4);
}

__rvv_int64m1_t __attribute__ ((noinline, noclone))
permute6 (__rvv_int64m1_t x, __rvv_int64m1_t y)
{
  return __builtin_shuffle ((vnx2di) x, (vnx2di) y, (vnx2di) MASK_2);
}

__rvv_uint64m1_t __attribute__ ((noinline, noclone))
permute07 (__rvv_uint64m1_t x, __rvv_uint64m1_t y)
{
  return __builtin_shuffle ((vnx2udi) x, (vnx2udi) y, (vnx2udi) MASK_2);
}

__rvv_float16m1_t __attribute__ ((noinline, noclone))
permute8 (__rvv_float16m1_t x, __rvv_float16m1_t y)
{
  return __builtin_shuffle ((vnx8hf) x, (vnx8hf) y, (vnx8hi) MASK_8);
}

__rvv_float32m1_t __attribute__ ((noinline, noclone))
permute9 (__rvv_float32m1_t x, __rvv_float32m1_t y)
{
  return __builtin_shuffle ((vnx4sf) x, (vnx4sf) y, (vnx4si) MASK_4);
}

__rvv_float64m1_t __attribute__ ((noinline, noclone))
permute10 (__rvv_float64m1_t x, __rvv_float64m1_t y)
{
  return __builtin_shuffle ((vnx2df) x, (vnx2df) y, (vnx2di) MASK_2);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 11 } } */
