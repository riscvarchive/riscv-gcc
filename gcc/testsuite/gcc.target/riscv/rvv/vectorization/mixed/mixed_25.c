/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_plus (_Float16 * restrict a, _Float16 * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_minus (_Float16 * restrict a, _Float16 * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] - (double)b[i];
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_mult (_Float16 * restrict a, _Float16 * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)b[i];
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_plus2 (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] + (double)b;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_minus2 (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] - (double)b;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_mult2 (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)b;
}

/* { dg-final { scan-assembler-times {\tvfwadd\.vv} 1 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.vv} 1 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vv} 1 } } */
/* { dg-final { scan-assembler-times {\tvfwadd\.vf} 1 } } */
/* { dg-final { scan-assembler-times {\tvfwsub\.vf} 1 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vf} 1 } } */