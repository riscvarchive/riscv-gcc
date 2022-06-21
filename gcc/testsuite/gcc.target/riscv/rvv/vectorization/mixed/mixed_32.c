/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
double_mixed__Float16_float_plus (_Float16 * restrict a, _Float16 b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)a[i] + (float)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_float_minus (_Float16 * restrict a, _Float16 b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)a[i] - (float)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_float_mult (_Float16 * restrict a, _Float16 b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)a[i] * (float)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed_float_double_plus (float * restrict a, float b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] + (double)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed_float_double_minus (float * restrict a, float b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] - (double)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed_float_double_mult (float * restrict a, float b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_plus (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] + (double)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_minus (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] - (double)33.333;
}

void __attribute__ ((noinline, noclone))
double_mixed__Float16_double_mult (_Float16 * restrict a, _Float16 b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)33.333;
}

/* { dg-final { scan-assembler-times {\tvfadd\.vf} 6 } } */
/* { dg-final { scan-assembler-times {\tvfmul\.vf} 3 } } */