/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdint.h>

typedef int8_t vnx64i __attribute__((vector_size(64)));
typedef int16_t vnx32i __attribute__((vector_size(64)));
typedef int32_t vnx16i __attribute__((vector_size(64)));
typedef int64_t vnx8i __attribute__((vector_size(64)));
typedef uint8_t vnx64ui __attribute__((vector_size(64)));
typedef uint16_t vnx32ui __attribute__((vector_size(64)));
typedef uint32_t vnx16ui __attribute__((vector_size(64)));
typedef uint64_t vnx8ui __attribute__((vector_size(64)));
typedef __fp16 vnx32f __attribute__((vector_size(64)));
typedef float vnx16f __attribute__((vector_size(64)));
typedef double vnx8f __attribute__((vector_size(64)));

#define MASK_4 { 0,2,5,6 }
#define MASK_8 { 0,1,5,7,11,12,13,14 }
#define MASK_16 { 0,2,3,8,10,11,12,14,24,25,26,27,28,29,30,31 }
#define MASK_32 { 4,5,6,7,9,10,12,14,18,20,22,23,25,27,28,29,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50 }
#define MASK_64 { 1,2,3,5,7,9,10,11,12,14,15,17,19,21,22,23,26,28,30,31,37,38,41,46,47,53,54,55,60,61,62,63,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107 }

__rvv_int8m4_t  __attribute__((noinline, noclone)) test_1(__rvv_int8m4_t x,__rvv_int8m4_t y)
{
    return __builtin_shuffle ((vnx64i) x, (vnx64i) y, (vnx64i) MASK_64);
}


__rvv_int16m4_t  __attribute__((noinline, noclone)) test_2(__rvv_int16m4_t x,__rvv_int16m4_t y)
{
    return __builtin_shuffle ((vnx32i) x, (vnx32i) y, (vnx32i) MASK_32);
}


__rvv_int32m4_t  __attribute__((noinline, noclone)) test_3(__rvv_int32m4_t x,__rvv_int32m4_t y)
{
    return __builtin_shuffle ((vnx16i) x, (vnx16i) y, (vnx16i) MASK_16);
}


__rvv_int64m4_t  __attribute__((noinline, noclone)) test_4(__rvv_int64m4_t x,__rvv_int64m4_t y)
{
    return __builtin_shuffle ((vnx8i) x, (vnx8i) y, (vnx8i) MASK_8);
}


__rvv_uint8m4_t  __attribute__((noinline, noclone)) test_5(__rvv_uint8m4_t x,__rvv_uint8m4_t y)
{
    return __builtin_shuffle ((vnx64ui) x, (vnx64ui) y, (vnx64ui) MASK_64);
}


__rvv_uint16m4_t  __attribute__((noinline, noclone)) test_6(__rvv_uint16m4_t x,__rvv_uint16m4_t y)
{
    return __builtin_shuffle ((vnx32ui) x, (vnx32ui) y, (vnx32ui) MASK_32);
}


__rvv_uint32m4_t  __attribute__((noinline, noclone)) test_7(__rvv_uint32m4_t x,__rvv_uint32m4_t y)
{
    return __builtin_shuffle ((vnx16ui) x, (vnx16ui) y, (vnx16ui) MASK_16);
}


__rvv_uint64m4_t  __attribute__((noinline, noclone)) test_8(__rvv_uint64m4_t x,__rvv_uint64m4_t y)
{
    return __builtin_shuffle ((vnx8ui) x, (vnx8ui) y, (vnx8ui) MASK_8);
}


__rvv_float16m4_t  __attribute__((noinline, noclone)) test_9(__rvv_float16m4_t x,__rvv_float16m4_t y)
{
    return __builtin_shuffle ((vnx32f) x, (vnx32f) y, (vnx32i) MASK_32);
}


__rvv_float32m4_t  __attribute__((noinline, noclone)) test_10(__rvv_float32m4_t x,__rvv_float32m4_t y)
{
    return __builtin_shuffle ((vnx16f) x, (vnx16f) y, (vnx16i) MASK_16);
}


__rvv_float64m4_t  __attribute__((noinline, noclone)) test_11(__rvv_float64m4_t x,__rvv_float64m4_t y)
{
    return __builtin_shuffle ((vnx8f) x, (vnx8f) y, (vnx8i) MASK_8);
}


/* { dg-final { scan-assembler-times {\tvcompress.vm} 11 } } */

