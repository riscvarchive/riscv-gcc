/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */


#include <stddef.h>
#include <stdint.h>


void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t (int8_t * restrict a, uint8_t b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] += (int16_t)a[i] * (int16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t (int16_t * restrict a, uint16_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] += (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t (int32_t * restrict a, uint32_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] += (int64_t)a[i] * (int64_t)b;
}

/* { dg-final { scan-tree-dump-not ".WHILE_LEN" "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmaccus\.vx} 3 } } */