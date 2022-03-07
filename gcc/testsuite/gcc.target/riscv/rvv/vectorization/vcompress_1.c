/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */
    
    

#include <stdint.h>

typedef int8_t vnx4i __attribute__((vector_size(4)));
typedef uint8_t vnx4ui __attribute__((vector_size(4)));

#define MASK_4 { 0,2,6,7 }

__rvv_int8mf4_t  __attribute__((noinline, noclone)) test_1(__rvv_int8mf4_t x,__rvv_int8mf4_t y)
{
    return __builtin_shuffle ((vnx4i) x, (vnx4i) y, (vnx4i) MASK_4);
}


__rvv_uint8mf4_t  __attribute__((noinline, noclone)) test_2(__rvv_uint8mf4_t x,__rvv_uint8mf4_t y)
{
    return __builtin_shuffle ((vnx4ui) x, (vnx4ui) y, (vnx4ui) MASK_4);
}


/* { dg-final { scan-assembler-times {\tvcompress.vm} 2 } } */

