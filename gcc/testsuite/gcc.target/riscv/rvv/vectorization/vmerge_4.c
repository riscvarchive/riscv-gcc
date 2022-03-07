/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
#include <stdint.h>

typedef int8_t vnx128qi __attribute__((vector_size (128)));
typedef int16_t vnx64hi __attribute__((vector_size (128)));
typedef int32_t vnx32si __attribute__((vector_size (128)));
typedef int64_t vnx16di __attribute__((vector_size (128)));
typedef uint8_t vnx128uqi __attribute__((vector_size (128)));
typedef uint16_t vnx64uhi __attribute__((vector_size (128)));
typedef uint32_t vnx32usi __attribute__((vector_size (128)));
typedef uint64_t vnx16udi __attribute__((vector_size (128)));

typedef _Float16 vnx64hf __attribute__((vector_size (128)));
typedef float vnx32sf __attribute__((vector_size (128)));
typedef double vnx16df __attribute__((vector_size (128)));

#define MASK_128		{ 0, 129, 2, 131, 4, 133, 6, 135, 8, 137,			\
			  10, 139, 12, 141, 14, 143, 16, 145, 18, 147, 		\
			  20, 149, 22, 151, 24, 153, 26, 155, 28, 157, 30, 159,    \
        32, 161, 34, 163, 36, 165, 38, 167, 40, 169,  \
        42, 171, 44, 173, 46, 175, 48, 177, 50, 179, \
        52, 181, 54, 183, 56, 185, 58, 187, 60, 189, \
        62, 191, \
        64, 193, 66, 195, 68, 197, 70, 199, 72, 201,		\
			  74, 203, 76, 205, 78, 207, 80, 209, 82, 211, 		\
			  84, 213, 86, 215, 88, 217, 90, 219, 92, 221, 94, 223,    \
        96, 225, 98, 227, 100, 229, 102, 231, 104, 233,  \
        106, 235, 108, 237, 110, 239, 112, 241, 114, 243, \
        116, 245, 118, 247, 120, 249, 122, 251, 124, 253, \
        126, 255 }
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

__rvv_int8m8_t __attribute__ ((noinline, noclone))
permute0 (__rvv_int8m8_t x, __rvv_int8m8_t y)
{
  return __builtin_shuffle ((vnx128qi) x, (vnx128qi) y, (vnx128qi) MASK_128);
}

__rvv_uint8m8_t __attribute__ ((noinline, noclone))
permute1 (__rvv_uint8m8_t x, __rvv_uint8m8_t y)
{
  return __builtin_shuffle ((vnx128uqi) x, (vnx128uqi) y, (vnx128uqi) MASK_128);
}

__rvv_int16m8_t __attribute__ ((noinline, noclone))
permute2 (__rvv_int16m8_t x, __rvv_int16m8_t y)
{
  return __builtin_shuffle ((vnx64hi) x, (vnx64hi) y, (vnx64hi) MASK_64);
}

__rvv_uint16m8_t __attribute__ ((noinline, noclone))
permute3 (__rvv_uint16m8_t x, __rvv_uint16m8_t y)
{
  return __builtin_shuffle ((vnx64uhi) x, (vnx64uhi) y, (vnx64uhi) MASK_64);
}

__rvv_int32m8_t __attribute__ ((noinline, noclone))
permute4 (__rvv_int32m8_t x, __rvv_int32m8_t y)
{
  return __builtin_shuffle ((vnx32si) x, (vnx32si) y, (vnx32si) MASK_32);
}

__rvv_uint32m8_t __attribute__ ((noinline, noclone))
permute5 (__rvv_uint32m8_t x, __rvv_uint32m8_t y)
{
  return __builtin_shuffle ((vnx32usi) x, (vnx32usi) y, (vnx32usi) MASK_32);
}

__rvv_int64m8_t __attribute__ ((noinline, noclone))
permute6 (__rvv_int64m8_t x, __rvv_int64m8_t y)
{
  return __builtin_shuffle ((vnx16di) x, (vnx16di) y, (vnx16di) MASK_16);
}

__rvv_uint64m8_t __attribute__ ((noinline, noclone))
permute07 (__rvv_uint64m8_t x, __rvv_uint64m8_t y)
{
  return __builtin_shuffle ((vnx16udi) x, (vnx16udi) y, (vnx16udi) MASK_16);
}

__rvv_float16m8_t __attribute__ ((noinline, noclone))
permute8 (__rvv_float16m8_t x, __rvv_float16m8_t y)
{
  return __builtin_shuffle ((vnx64hf) x, (vnx64hf) y, (vnx64hi) MASK_64);
}

__rvv_float32m8_t __attribute__ ((noinline, noclone))
permute9 (__rvv_float32m8_t x, __rvv_float32m8_t y)
{
  return __builtin_shuffle ((vnx32sf) x, (vnx32sf) y, (vnx32si) MASK_32);
}

__rvv_float64m8_t __attribute__ ((noinline, noclone))
permute10 (__rvv_float64m8_t x, __rvv_float64m8_t y)
{
  return __builtin_shuffle ((vnx16df) x, (vnx16df) y, (vnx16di) MASK_16);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 11 } } */