/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <stdint.h>

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int16_t_multus (uint8_t * restrict a, int8_t b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int16_t_multus2 (uint8_t * restrict a, int8_t b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int32_t_multus (uint16_t * restrict a, int16_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int32_t_multus2 (uint16_t * restrict a, int16_t b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int32_t_int64_t_multus (uint32_t * restrict a, int32_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int32_t_int64_t_multus2 (uint32_t * restrict a, int32_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_multus (uint8_t * restrict a, int8_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_multus2 (uint8_t * restrict a, int8_t b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_multus (uint16_t * restrict a, int16_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_multus2 (uint16_t * restrict a, int16_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_multus (uint8_t * restrict a, int8_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_multus2 (uint8_t * restrict a, int8_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

/* { dg-final { scan-assembler-times {\tvwmulsu\.vv} 12 } } */