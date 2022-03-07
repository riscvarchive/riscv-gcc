/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx32qi __attribute__((vector_size (32)));
typedef int16_t vnx16hi __attribute__((vector_size (32)));
typedef int32_t vnx8si __attribute__((vector_size (32)));
typedef int64_t vnx4di __attribute__((vector_size (32)));
typedef uint8_t vnx32uqi __attribute__((vector_size (32)));
typedef uint16_t vnx16uhi __attribute__((vector_size (32)));
typedef uint32_t vnx8usi __attribute__((vector_size (32)));
typedef uint64_t vnx4udi __attribute__((vector_size (32)));

typedef _Float16 vnx16hf __attribute__((vector_size (32)));
typedef float vnx8sf __attribute__((vector_size (32)));
typedef double vnx4df __attribute__((vector_size (32)));

#define MASK_32		{ 0, 33, 2, 35, 4, 37, 6, 39, 8, 41,			\
			  10, 43, 12, 45, 14, 47, 16, 49, 18, 51, 		\
			  20, 53, 22, 55, 24, 57, 26, 59, 28, 61, 30, 63 }
#define MASK_16		{ 0, 17, 2, 19, 4, 21, 6, 23, 8, 25, 10, 27, 12, 29, 14, 31 }
#define MASK_8		{ 0, 9, 2, 11, 4, 13, 6, 15 }
#define MASK_4		{ 0, 5, 2, 7 }

__rvv_int8m2_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8m2_t x, __rvv_int8m2_t y)
{
  return __builtin_shuffle ((vnx32qi) x, (vnx32qi) y, (vnx32qi) MASK_32);
}

__rvv_uint8m2_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8m2_t x, __rvv_uint8m2_t y)
{
  return __builtin_shuffle ((vnx32uqi) x, (vnx32uqi) y, (vnx32uqi) MASK_32);
}

__rvv_int16m2_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16m2_t x, __rvv_int16m2_t y)
{
  return __builtin_shuffle ((vnx16hi) x, (vnx16hi) y, (vnx16hi) MASK_16);
}

__rvv_uint16m2_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16m2_t x, __rvv_uint16m2_t y)
{
  return __builtin_shuffle ((vnx16uhi) x, (vnx16uhi) y, (vnx16uhi) MASK_16);
}

__rvv_int32m2_t __attribute__ ((noinline, noclone))
permute4 (__rvv_int32m2_t x, __rvv_int32m2_t y)
{
  return __builtin_shuffle ((vnx8si) x, (vnx8si) y, (vnx8si) MASK_8);
}

__rvv_uint32m2_t __attribute__ ((noinline, noclone))
permute5 (__rvv_uint32m2_t x, __rvv_uint32m2_t y)
{
  return __builtin_shuffle ((vnx8usi) x, (vnx8usi) y, (vnx8usi) MASK_8);
}

__rvv_int64m2_t __attribute__ ((noinline, noclone))
permute6 (__rvv_int64m2_t x, __rvv_int64m2_t y)
{
  return __builtin_shuffle ((vnx4di) x, (vnx4di) y, (vnx4di) MASK_4);
}

__rvv_uint64m2_t __attribute__ ((noinline, noclone))
permute07 (__rvv_uint64m2_t x, __rvv_uint64m2_t y)
{
  return __builtin_shuffle ((vnx4udi) x, (vnx4udi) y, (vnx4udi) MASK_4);
}

__rvv_float16m2_t __attribute__ ((noinline, noclone))
permute8 (__rvv_float16m2_t x, __rvv_float16m2_t y)
{
  return __builtin_shuffle ((vnx16hf) x, (vnx16hf) y, (vnx16hi) MASK_16);
}

__rvv_float32m2_t __attribute__ ((noinline, noclone))
permute9 (__rvv_float32m2_t x, __rvv_float32m2_t y)
{
  return __builtin_shuffle ((vnx8sf) x, (vnx8sf) y, (vnx8si) MASK_8);
}

__rvv_float64m2_t __attribute__ ((noinline, noclone))
permute10 (__rvv_float64m2_t x, __rvv_float64m2_t y)
{
  return __builtin_shuffle ((vnx4df) x, (vnx4df) y, (vnx4di) MASK_4);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 11 } } */