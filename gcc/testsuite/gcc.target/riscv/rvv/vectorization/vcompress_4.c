/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdint.h>

typedef int8_t vnx32i __attribute__((vector_size(32)));
typedef int16_t vnx16i __attribute__((vector_size(32)));
typedef int32_t vnx8i __attribute__((vector_size(32)));
typedef int64_t vnx4i __attribute__((vector_size(32)));
typedef uint8_t vnx32ui __attribute__((vector_size(32)));
typedef uint16_t vnx16ui __attribute__((vector_size(32)));
typedef uint32_t vnx8ui __attribute__((vector_size(32)));
typedef uint64_t vnx4ui __attribute__((vector_size(32)));
typedef __fp16 vnx16f __attribute__((vector_size(32)));
typedef float vnx8f __attribute__((vector_size(32)));
typedef double vnx4f __attribute__((vector_size(32)));

#define MASK_4 { 1,2,5,6 }
#define MASK_8 { 1,2,5,7,11,12,13,14 }
#define MASK_16 { 0,3,5,7,10,11,14,15,16,17,18,19,20,21,22,23 }
#define MASK_32 { 3,4,6,7,9,10,14,15,17,20,21,22,24,27,29,31,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49 }

__rvv_int8m2_t  __attribute__((noinline, noclone)) test_1(__rvv_int8m2_t x,__rvv_int8m2_t y)
{
    return __builtin_shuffle ((vnx32i) x, (vnx32i) y, (vnx32i) MASK_32);
}


__rvv_int16m2_t  __attribute__((noinline, noclone)) test_2(__rvv_int16m2_t x,__rvv_int16m2_t y)
{
    return __builtin_shuffle ((vnx16i) x, (vnx16i) y, (vnx16i) MASK_16);
}


__rvv_int32m2_t  __attribute__((noinline, noclone)) test_3(__rvv_int32m2_t x,__rvv_int32m2_t y)
{
    return __builtin_shuffle ((vnx8i) x, (vnx8i) y, (vnx8i) MASK_8);
}


__rvv_int64m2_t  __attribute__((noinline, noclone)) test_4(__rvv_int64m2_t x,__rvv_int64m2_t y)
{
    return __builtin_shuffle ((vnx4i) x, (vnx4i) y, (vnx4i) MASK_4);
}


__rvv_uint8m2_t  __attribute__((noinline, noclone)) test_5(__rvv_uint8m2_t x,__rvv_uint8m2_t y)
{
    return __builtin_shuffle ((vnx32ui) x, (vnx32ui) y, (vnx32ui) MASK_32);
}


__rvv_uint16m2_t  __attribute__((noinline, noclone)) test_6(__rvv_uint16m2_t x,__rvv_uint16m2_t y)
{
    return __builtin_shuffle ((vnx16ui) x, (vnx16ui) y, (vnx16ui) MASK_16);
}


__rvv_uint32m2_t  __attribute__((noinline, noclone)) test_7(__rvv_uint32m2_t x,__rvv_uint32m2_t y)
{
    return __builtin_shuffle ((vnx8ui) x, (vnx8ui) y, (vnx8ui) MASK_8);
}


__rvv_uint64m2_t  __attribute__((noinline, noclone)) test_8(__rvv_uint64m2_t x,__rvv_uint64m2_t y)
{
    return __builtin_shuffle ((vnx4ui) x, (vnx4ui) y, (vnx4ui) MASK_4);
}


__rvv_float16m2_t  __attribute__((noinline, noclone)) test_9(__rvv_float16m2_t x,__rvv_float16m2_t y)
{
    return __builtin_shuffle ((vnx16f) x, (vnx16f) y, (vnx16i) MASK_16);
}


__rvv_float32m2_t  __attribute__((noinline, noclone)) test_10(__rvv_float32m2_t x,__rvv_float32m2_t y)
{
    return __builtin_shuffle ((vnx8f) x, (vnx8f) y, (vnx8i) MASK_8);
}


__rvv_float64m2_t  __attribute__((noinline, noclone)) test_11(__rvv_float64m2_t x,__rvv_float64m2_t y)
{
    return __builtin_shuffle ((vnx4f) x, (vnx4f) y, (vnx4i) MASK_4);
}


/* { dg-final { scan-assembler-times {\tvcompress.vm} 11 } } */

