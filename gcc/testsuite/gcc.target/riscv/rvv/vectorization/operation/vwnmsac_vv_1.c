/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
mixed__Float16_float (_Float16 * restrict a, _Float16 * restrict  b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)c[i] - (float)a[i] * (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double (float * restrict a, float * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)c[i] - (double)a[i] * (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float2 (_Float16 * restrict a, _Float16 * restrict  b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = - ((float)a[i] * (float)b[i]) + (float)c[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double2 (float * restrict a, float * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = - ((double)a[i] * (double)b[i]) + (double)c[i];
}

/* { dg-final { scan-tree-dump-not ".WHILE_LEN" "optimized" } } */
/* { dg-final { scan-assembler-times {\tvfwnmsac\.vv} 4 } } */