/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdint.h>

typedef int8_t vnx8i __attribute__((vector_size(8)));
typedef int16_t vnx4i __attribute__((vector_size(8)));
typedef uint8_t vnx8ui __attribute__((vector_size(8)));
typedef uint16_t vnx4ui __attribute__((vector_size(8)));
typedef __fp16 vnx4f __attribute__((vector_size(8)));

#define MASK_4 { 1,3,6,7 }
#define MASK_8 { 2,3,5,6,11,12,13,14 }

__rvv_int8mf2_t  __attribute__((noinline, noclone)) test_1(__rvv_int8mf2_t x,__rvv_int8mf2_t y)
{
    return __builtin_shuffle ((vnx8i) x, (vnx8i) y, (vnx8i) MASK_8);
}


__rvv_int16mf2_t  __attribute__((noinline, noclone)) test_2(__rvv_int16mf2_t x,__rvv_int16mf2_t y)
{
    return __builtin_shuffle ((vnx4i) x, (vnx4i) y, (vnx4i) MASK_4);
}


__rvv_uint8mf2_t  __attribute__((noinline, noclone)) test_3(__rvv_uint8mf2_t x,__rvv_uint8mf2_t y)
{
    return __builtin_shuffle ((vnx8ui) x, (vnx8ui) y, (vnx8ui) MASK_8);
}


__rvv_uint16mf2_t  __attribute__((noinline, noclone)) test_4(__rvv_uint16mf2_t x,__rvv_uint16mf2_t y)
{
    return __builtin_shuffle ((vnx4ui) x, (vnx4ui) y, (vnx4ui) MASK_4);
}


__rvv_float16mf2_t  __attribute__((noinline, noclone)) test_5(__rvv_float16mf2_t x,__rvv_float16mf2_t y)
{
    return __builtin_shuffle ((vnx4f) x, (vnx4f) y, (vnx4i) MASK_4);
}


/* { dg-final { scan-assembler-times {\tvcompress.vm} 5 } } */

