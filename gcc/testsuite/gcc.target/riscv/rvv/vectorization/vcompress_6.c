/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdint.h>

typedef int8_t vnx128i __attribute__((vector_size(128)));
typedef int16_t vnx64i __attribute__((vector_size(128)));
typedef int32_t vnx32i __attribute__((vector_size(128)));
typedef int64_t vnx16i __attribute__((vector_size(128)));
typedef uint8_t vnx128ui __attribute__((vector_size(128)));
typedef uint16_t vnx64ui __attribute__((vector_size(128)));
typedef uint32_t vnx32ui __attribute__((vector_size(128)));
typedef uint64_t vnx16ui __attribute__((vector_size(128)));
typedef __fp16 vnx64f __attribute__((vector_size(128)));
typedef float vnx32f __attribute__((vector_size(128)));
typedef double vnx16f __attribute__((vector_size(128)));

#define MASK_4 { 0,3,6,7 }
#define MASK_8 { 0,2,3,4,10,11,12,13 }
#define MASK_16 { 2,3,4,6,7,8,9,12,20,21,22,23,24,25,26,27 }
#define MASK_32 { 0,1,3,4,7,8,12,13,14,19,21,22,23,27,29,31,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56 }
#define MASK_64 { 0,2,3,4,5,7,11,13,14,16,17,19,20,22,23,24,27,28,30,31,35,37,39,40,44,45,46,53,54,56,61,63,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99 }
#define MASK_128 { 1,3,4,5,6,7,8,10,12,14,15,16,17,18,22,25,28,29,30,31,36,37,40,41,42,43,44,46,52,54,55,58,61,62,64,67,68,69,70,71,76,77,78,80,82,83,84,86,87,88,91,94,95,99,102,104,106,110,112,115,116,125,126,127,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207 }

__rvv_int8m8_t  __attribute__((noinline, noclone)) test_1(__rvv_int8m8_t x,__rvv_int8m8_t y)
{
    return __builtin_shuffle ((vnx128i) x, (vnx128i) y, (vnx128i) MASK_128);
}


__rvv_int16m8_t  __attribute__((noinline, noclone)) test_2(__rvv_int16m8_t x,__rvv_int16m8_t y)
{
    return __builtin_shuffle ((vnx64i) x, (vnx64i) y, (vnx64i) MASK_64);
}


__rvv_int32m8_t  __attribute__((noinline, noclone)) test_3(__rvv_int32m8_t x,__rvv_int32m8_t y)
{
    return __builtin_shuffle ((vnx32i) x, (vnx32i) y, (vnx32i) MASK_32);
}


__rvv_int64m8_t  __attribute__((noinline, noclone)) test_4(__rvv_int64m8_t x,__rvv_int64m8_t y)
{
    return __builtin_shuffle ((vnx16i) x, (vnx16i) y, (vnx16i) MASK_16);
}


__rvv_uint8m8_t  __attribute__((noinline, noclone)) test_5(__rvv_uint8m8_t x,__rvv_uint8m8_t y)
{
    return __builtin_shuffle ((vnx128ui) x, (vnx128ui) y, (vnx128ui) MASK_128);
}


__rvv_uint16m8_t  __attribute__((noinline, noclone)) test_6(__rvv_uint16m8_t x,__rvv_uint16m8_t y)
{
    return __builtin_shuffle ((vnx64ui) x, (vnx64ui) y, (vnx64ui) MASK_64);
}


__rvv_uint32m8_t  __attribute__((noinline, noclone)) test_7(__rvv_uint32m8_t x,__rvv_uint32m8_t y)
{
    return __builtin_shuffle ((vnx32ui) x, (vnx32ui) y, (vnx32ui) MASK_32);
}


__rvv_uint64m8_t  __attribute__((noinline, noclone)) test_8(__rvv_uint64m8_t x,__rvv_uint64m8_t y)
{
    return __builtin_shuffle ((vnx16ui) x, (vnx16ui) y, (vnx16ui) MASK_16);
}


__rvv_float16m8_t  __attribute__((noinline, noclone)) test_9(__rvv_float16m8_t x,__rvv_float16m8_t y)
{
    return __builtin_shuffle ((vnx64f) x, (vnx64f) y, (vnx64i) MASK_64);
}


__rvv_float32m8_t  __attribute__((noinline, noclone)) test_10(__rvv_float32m8_t x,__rvv_float32m8_t y)
{
    return __builtin_shuffle ((vnx32f) x, (vnx32f) y, (vnx32i) MASK_32);
}


__rvv_float64m8_t  __attribute__((noinline, noclone)) test_11(__rvv_float64m8_t x,__rvv_float64m8_t y)
{
    return __builtin_shuffle ((vnx16f) x, (vnx16f) y, (vnx16i) MASK_16);
}


/* { dg-final { scan-assembler-times {\tvcompress.vm} 11 } } */

