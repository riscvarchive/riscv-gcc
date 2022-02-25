/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */


#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t1 (int8_t * restrict a, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] + (int16_t)3;
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t2 (int8_t * restrict a, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)3;
}

/* { dg-final { scan-tree-dump-not ".WHILE_LEN" "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwadd\.vx} 1 } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vx} 1 } } */