/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx64qi __attribute__((vector_size (64)));
typedef int16_t vnx32hi __attribute__((vector_size (64)));
typedef int32_t vnx16si __attribute__((vector_size (64)));
typedef int64_t vnx8di __attribute__((vector_size (64)));
typedef uint8_t vnx64uqi __attribute__((vector_size (64)));
typedef uint16_t vnx32uhi __attribute__((vector_size (64)));
typedef uint32_t vnx16usi __attribute__((vector_size (64)));
typedef uint64_t vnx8udi __attribute__((vector_size (64)));

typedef _Float16 vnx32hf __attribute__((vector_size (64)));
typedef float vnx16sf __attribute__((vector_size (64)));
typedef double vnx8df __attribute__((vector_size (64)));

#define MASK_64		{ 0, 65, 2, 67, 4, 69, 6, 71, 8, 73,			\
			  10, 75, 12, 77, 14, 79, 16, 81, 18, 83, 		\
			  20, 85, 22, 87, 24, 89, 26, 91, 28, 93, 30, 95,    \
        32, 97, 34, 99, 36, 101, 38, 103, 40, 105,  \
        42, 107, 44, 109, 46, 111, 48, 113, 50, 115, \
        52, 117, 54, 119, 56, 121, 58, 123, 60, 125, \
        62, 127 }
#define MASK_32		{ 0, 33, 2, 35, 4, 37, 6, 39, 8, 41,			\
			  10, 43, 12, 45, 14, 47, 16, 49, 18, 51, 		\
			  20, 53, 22, 55, 24, 57, 26, 59, 28, 61, 30, 63 }
#define MASK_16		{ 0, 17, 2, 19, 4, 21, 6, 23, 8, 25, 10, 27, 12, 29, 14, 31 }
#define MASK_8		{ 0, 9, 2, 11, 4, 13, 6, 15 }

__rvv_int8m4_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8m4_t x, __rvv_int8m4_t y)
{
  return __builtin_shuffle ((vnx64qi) x, (vnx64qi) y, (vnx64qi) MASK_64);
}

__rvv_uint8m4_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8m4_t x, __rvv_uint8m4_t y)
{
  return __builtin_shuffle ((vnx64uqi) x, (vnx64uqi) y, (vnx64uqi) MASK_64);
}

__rvv_int16m4_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16m4_t x, __rvv_int16m4_t y)
{
  return __builtin_shuffle ((vnx32hi) x, (vnx32hi) y, (vnx32hi) MASK_32);
}

__rvv_uint16m4_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16m4_t x, __rvv_uint16m4_t y)
{
  return __builtin_shuffle ((vnx32uhi) x, (vnx32uhi) y, (vnx32uhi) MASK_32);
}

__rvv_int32m4_t __attribute__ ((noinline, noclone))
permute4 (__rvv_int32m4_t x, __rvv_int32m4_t y)
{
  return __builtin_shuffle ((vnx16si) x, (vnx16si) y, (vnx16si) MASK_16);
}

__rvv_uint32m4_t __attribute__ ((noinline, noclone))
permute5 (__rvv_uint32m4_t x, __rvv_uint32m4_t y)
{
  return __builtin_shuffle ((vnx16usi) x, (vnx16usi) y, (vnx16usi) MASK_16);
}

__rvv_int64m4_t __attribute__ ((noinline, noclone))
permute6 (__rvv_int64m4_t x, __rvv_int64m4_t y)
{
  return __builtin_shuffle ((vnx8di) x, (vnx8di) y, (vnx8di) MASK_8);
}

__rvv_uint64m4_t __attribute__ ((noinline, noclone))
permute07 (__rvv_uint64m4_t x, __rvv_uint64m4_t y)
{
  return __builtin_shuffle ((vnx8udi) x, (vnx8udi) y, (vnx8udi) MASK_8);
}

__rvv_float16m4_t __attribute__ ((noinline, noclone))
permute8 (__rvv_float16m4_t x, __rvv_float16m4_t y)
{
  return __builtin_shuffle ((vnx32hf) x, (vnx32hf) y, (vnx32hi) MASK_32);
}

__rvv_float32m4_t __attribute__ ((noinline, noclone))
permute9 (__rvv_float32m4_t x, __rvv_float32m4_t y)
{
  return __builtin_shuffle ((vnx16sf) x, (vnx16sf) y, (vnx16si) MASK_16);
}

__rvv_float64m4_t __attribute__ ((noinline, noclone))
permute10 (__rvv_float64m4_t x, __rvv_float64m4_t y)
{
  return __builtin_shuffle ((vnx8df) x, (vnx8df) y, (vnx8di) MASK_8);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 11 } } */