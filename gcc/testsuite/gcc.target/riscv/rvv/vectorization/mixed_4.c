/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */


#include <stddef.h>
#include <stdint.h>


void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_int8_t (int8_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_int16_t (int8_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_int32_t (int8_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_int64_t (int8_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_uint8_t (int8_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_uint16_t (int8_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_uint32_t (int8_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_uint64_t (int8_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t__Float16 (int8_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_float (int8_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int8_t_double (int8_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_int8_t (int8_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_int16_t (int8_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_int32_t (int8_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_int64_t (int8_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_uint8_t (int8_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_uint16_t (int8_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_uint32_t (int8_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_uint64_t (int8_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t__Float16 (int8_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_float (int8_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t_double (int8_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_int8_t (int8_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_int16_t (int8_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_int32_t (int8_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_int64_t (int8_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_uint8_t (int8_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_uint16_t (int8_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_uint32_t (int8_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_uint64_t (int8_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t__Float16 (int8_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_float (int8_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int32_t_double (int8_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_int8_t (int8_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_int16_t (int8_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_int32_t (int8_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_int64_t (int8_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_uint8_t (int8_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_uint16_t (int8_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_uint32_t (int8_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_uint64_t (int8_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t__Float16 (int8_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_float (int8_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int64_t_double (int8_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_int8_t (int8_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_int16_t (int8_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_int32_t (int8_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_int64_t (int8_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_uint8_t (int8_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_uint16_t (int8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_uint32_t (int8_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_uint64_t (int8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t__Float16 (int8_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_float (int8_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint8_t_double (int8_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_int8_t (int8_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_int16_t (int8_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_int32_t (int8_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_int64_t (int8_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_uint8_t (int8_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_uint16_t (int8_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_uint32_t (int8_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_uint64_t (int8_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t__Float16 (int8_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_float (int8_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t_double (int8_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_int8_t (int8_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_int16_t (int8_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_int32_t (int8_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_int64_t (int8_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_uint8_t (int8_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_uint16_t (int8_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_uint32_t (int8_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_uint64_t (int8_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t__Float16 (int8_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_float (int8_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint32_t_double (int8_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_int8_t (int8_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_int16_t (int8_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_int32_t (int8_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_int64_t (int8_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_uint8_t (int8_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_uint16_t (int8_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_uint32_t (int8_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_uint64_t (int8_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t__Float16 (int8_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_float (int8_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint64_t_double (int8_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_int8_t (int8_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_int16_t (int8_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_int32_t (int8_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_int64_t (int8_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_uint8_t (int8_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_uint16_t (int8_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_uint32_t (int8_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_uint64_t (int8_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16__Float16 (int8_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_float (int8_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t__Float16_double (int8_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_int8_t (int8_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_int16_t (int8_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_int32_t (int8_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_int64_t (int8_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_uint8_t (int8_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_uint16_t (int8_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_uint32_t (int8_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_uint64_t (int8_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float__Float16 (int8_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_float (int8_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_float_double (int8_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_int8_t (int8_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_int16_t (int8_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_int32_t (int8_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_int64_t (int8_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_uint8_t (int8_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_uint16_t (int8_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_uint32_t (int8_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_uint64_t (int8_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double__Float16 (int8_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_float (int8_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_double_double (int8_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_int8_t (int16_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_int16_t (int16_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_int32_t (int16_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_int64_t (int16_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_uint8_t (int16_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_uint16_t (int16_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_uint32_t (int16_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_uint64_t (int16_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t__Float16 (int16_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_float (int16_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int8_t_double (int16_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_int8_t (int16_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_int16_t (int16_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_int32_t (int16_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_int64_t (int16_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_uint8_t (int16_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_uint16_t (int16_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_uint32_t (int16_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_uint64_t (int16_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t__Float16 (int16_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_float (int16_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int16_t_double (int16_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_int8_t (int16_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_int16_t (int16_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_int32_t (int16_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_int64_t (int16_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_uint8_t (int16_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_uint16_t (int16_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_uint32_t (int16_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_uint64_t (int16_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t__Float16 (int16_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_float (int16_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t_double (int16_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_int8_t (int16_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_int16_t (int16_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_int32_t (int16_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_int64_t (int16_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_uint8_t (int16_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_uint16_t (int16_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_uint32_t (int16_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_uint64_t (int16_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t__Float16 (int16_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_float (int16_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int64_t_double (int16_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_int8_t (int16_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_int16_t (int16_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_int32_t (int16_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_int64_t (int16_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_uint8_t (int16_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_uint16_t (int16_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_uint32_t (int16_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_uint64_t (int16_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t__Float16 (int16_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_float (int16_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint8_t_double (int16_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_int8_t (int16_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_int16_t (int16_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_int32_t (int16_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_int64_t (int16_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_uint8_t (int16_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_uint16_t (int16_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_uint32_t (int16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_uint64_t (int16_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t__Float16 (int16_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_float (int16_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint16_t_double (int16_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_int8_t (int16_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_int16_t (int16_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_int32_t (int16_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_int64_t (int16_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_uint8_t (int16_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_uint16_t (int16_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_uint32_t (int16_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_uint64_t (int16_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t__Float16 (int16_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_float (int16_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t_double (int16_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_int8_t (int16_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_int16_t (int16_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_int32_t (int16_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_int64_t (int16_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_uint8_t (int16_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_uint16_t (int16_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_uint32_t (int16_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_uint64_t (int16_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t__Float16 (int16_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_float (int16_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint64_t_double (int16_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_int8_t (int16_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_int16_t (int16_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_int32_t (int16_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_int64_t (int16_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_uint8_t (int16_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_uint16_t (int16_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_uint32_t (int16_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_uint64_t (int16_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16__Float16 (int16_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_float (int16_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t__Float16_double (int16_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_int8_t (int16_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_int16_t (int16_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_int32_t (int16_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_int64_t (int16_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_uint8_t (int16_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_uint16_t (int16_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_uint32_t (int16_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_uint64_t (int16_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float__Float16 (int16_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_float (int16_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_float_double (int16_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_int8_t (int16_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_int16_t (int16_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_int32_t (int16_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_int64_t (int16_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_uint8_t (int16_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_uint16_t (int16_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_uint32_t (int16_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_uint64_t (int16_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double__Float16 (int16_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_float (int16_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_double_double (int16_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_int8_t (int32_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_int16_t (int32_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_int32_t (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_int64_t (int32_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_uint8_t (int32_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_uint16_t (int32_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_uint32_t (int32_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_uint64_t (int32_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t__Float16 (int32_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_float (int32_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int8_t_double (int32_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_int8_t (int32_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_int16_t (int32_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_int32_t (int32_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_int64_t (int32_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_uint8_t (int32_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_uint16_t (int32_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_uint32_t (int32_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_uint64_t (int32_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t__Float16 (int32_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_float (int32_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int16_t_double (int32_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_int8_t (int32_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_int16_t (int32_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_int32_t (int32_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_int64_t (int32_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_uint8_t (int32_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_uint16_t (int32_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_uint32_t (int32_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_uint64_t (int32_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t__Float16 (int32_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_float (int32_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int32_t_double (int32_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_int8_t (int32_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_int16_t (int32_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_int32_t (int32_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_int64_t (int32_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_uint8_t (int32_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_uint16_t (int32_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_uint32_t (int32_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_uint64_t (int32_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t__Float16 (int32_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_float (int32_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t_double (int32_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_int8_t (int32_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_int16_t (int32_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_int32_t (int32_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_int64_t (int32_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_uint8_t (int32_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_uint16_t (int32_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_uint32_t (int32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_uint64_t (int32_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t__Float16 (int32_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_float (int32_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint8_t_double (int32_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_int8_t (int32_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_int16_t (int32_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_int32_t (int32_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_int64_t (int32_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_uint8_t (int32_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_uint16_t (int32_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_uint32_t (int32_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_uint64_t (int32_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t__Float16 (int32_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_float (int32_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint16_t_double (int32_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_int8_t (int32_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_int16_t (int32_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_int32_t (int32_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_int64_t (int32_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_uint8_t (int32_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_uint16_t (int32_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_uint32_t (int32_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_uint64_t (int32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t__Float16 (int32_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_float (int32_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint32_t_double (int32_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_int8_t (int32_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_int16_t (int32_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_int32_t (int32_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_int64_t (int32_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_uint8_t (int32_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_uint16_t (int32_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_uint32_t (int32_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_uint64_t (int32_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t__Float16 (int32_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_float (int32_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t_double (int32_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_int8_t (int32_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_int16_t (int32_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_int32_t (int32_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_int64_t (int32_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_uint8_t (int32_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_uint16_t (int32_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_uint32_t (int32_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_uint64_t (int32_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16__Float16 (int32_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_float (int32_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t__Float16_double (int32_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_int8_t (int32_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_int16_t (int32_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_int32_t (int32_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_int64_t (int32_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_uint8_t (int32_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_uint16_t (int32_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_uint32_t (int32_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_uint64_t (int32_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float__Float16 (int32_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_float (int32_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_float_double (int32_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_int8_t (int32_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_int16_t (int32_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_int32_t (int32_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_int64_t (int32_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_uint8_t (int32_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_uint16_t (int32_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_uint32_t (int32_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_uint64_t (int32_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double__Float16 (int32_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_float (int32_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_double_double (int32_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_int8_t (int64_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_int16_t (int64_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_int32_t (int64_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_int64_t (int64_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_uint8_t (int64_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_uint16_t (int64_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_uint32_t (int64_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_uint64_t (int64_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t__Float16 (int64_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_float (int64_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int8_t_double (int64_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_int8_t (int64_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_int16_t (int64_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_int32_t (int64_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_int64_t (int64_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_uint8_t (int64_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_uint16_t (int64_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_uint32_t (int64_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_uint64_t (int64_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t__Float16 (int64_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_float (int64_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int16_t_double (int64_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_int8_t (int64_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_int16_t (int64_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_int32_t (int64_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_int64_t (int64_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_uint8_t (int64_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_uint16_t (int64_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_uint32_t (int64_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_uint64_t (int64_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t__Float16 (int64_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_float (int64_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int32_t_double (int64_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_int8_t (int64_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_int16_t (int64_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_int32_t (int64_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_int64_t (int64_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_uint8_t (int64_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_uint16_t (int64_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_uint32_t (int64_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_uint64_t (int64_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t__Float16 (int64_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_float (int64_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_int64_t_double (int64_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_int8_t (int64_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_int16_t (int64_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_int32_t (int64_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_int64_t (int64_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_uint8_t (int64_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_uint16_t (int64_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_uint32_t (int64_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_uint64_t (int64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t__Float16 (int64_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_float (int64_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint8_t_double (int64_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_int8_t (int64_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_int16_t (int64_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_int32_t (int64_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_int64_t (int64_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_uint8_t (int64_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_uint16_t (int64_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_uint32_t (int64_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_uint64_t (int64_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t__Float16 (int64_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_float (int64_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint16_t_double (int64_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_int8_t (int64_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_int16_t (int64_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_int32_t (int64_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_int64_t (int64_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_uint8_t (int64_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_uint16_t (int64_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_uint32_t (int64_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_uint64_t (int64_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t__Float16 (int64_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_float (int64_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint32_t_double (int64_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_int8_t (int64_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_int16_t (int64_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_int32_t (int64_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_int64_t (int64_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_uint8_t (int64_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_uint16_t (int64_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_uint32_t (int64_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_uint64_t (int64_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t__Float16 (int64_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_float (int64_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_uint64_t_double (int64_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_int8_t (int64_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_int16_t (int64_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_int32_t (int64_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_int64_t (int64_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_uint8_t (int64_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_uint16_t (int64_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_uint32_t (int64_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_uint64_t (int64_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16__Float16 (int64_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_float (int64_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t__Float16_double (int64_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_int8_t (int64_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_int16_t (int64_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_int32_t (int64_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_int64_t (int64_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_uint8_t (int64_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_uint16_t (int64_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_uint32_t (int64_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_uint64_t (int64_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float__Float16 (int64_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_float (int64_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_float_double (int64_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_int8_t (int64_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_int16_t (int64_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_int32_t (int64_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_int64_t (int64_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_uint8_t (int64_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_uint16_t (int64_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_uint32_t (int64_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_uint64_t (int64_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double__Float16 (int64_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_float (int64_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int64_t_double_double (int64_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_int8_t (uint8_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_int16_t (uint8_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_int32_t (uint8_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_int64_t (uint8_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_uint8_t (uint8_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_uint16_t (uint8_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_uint32_t (uint8_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_uint64_t (uint8_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t__Float16 (uint8_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_float (uint8_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int8_t_double (uint8_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_int8_t (uint8_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_int16_t (uint8_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_int32_t (uint8_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_int64_t (uint8_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_uint8_t (uint8_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_uint16_t (uint8_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_uint32_t (uint8_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_uint64_t (uint8_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t__Float16 (uint8_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_float (uint8_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t_double (uint8_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_int8_t (uint8_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_int16_t (uint8_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_int32_t (uint8_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_int64_t (uint8_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_uint8_t (uint8_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_uint16_t (uint8_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_uint32_t (uint8_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_uint64_t (uint8_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t__Float16 (uint8_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_float (uint8_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int32_t_double (uint8_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_int8_t (uint8_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_int16_t (uint8_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_int32_t (uint8_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_int64_t (uint8_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_uint8_t (uint8_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_uint16_t (uint8_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_uint32_t (uint8_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_uint64_t (uint8_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t__Float16 (uint8_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_float (uint8_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int64_t_double (uint8_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_int8_t (uint8_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_int16_t (uint8_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_int32_t (uint8_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_int64_t (uint8_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_uint8_t (uint8_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_uint16_t (uint8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_uint32_t (uint8_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_uint64_t (uint8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t__Float16 (uint8_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_float (uint8_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint8_t_double (uint8_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_int8_t (uint8_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_int16_t (uint8_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_int32_t (uint8_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_int64_t (uint8_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_uint8_t (uint8_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_uint16_t (uint8_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_uint32_t (uint8_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_uint64_t (uint8_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t__Float16 (uint8_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_float (uint8_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t_double (uint8_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_int8_t (uint8_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_int16_t (uint8_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_int32_t (uint8_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_int64_t (uint8_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_uint8_t (uint8_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_uint16_t (uint8_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_uint32_t (uint8_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_uint64_t (uint8_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t__Float16 (uint8_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_float (uint8_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint32_t_double (uint8_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_int8_t (uint8_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_int16_t (uint8_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_int32_t (uint8_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_int64_t (uint8_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_uint8_t (uint8_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_uint16_t (uint8_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_uint32_t (uint8_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_uint64_t (uint8_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t__Float16 (uint8_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_float (uint8_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint64_t_double (uint8_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_int8_t (uint8_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_int16_t (uint8_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_int32_t (uint8_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_int64_t (uint8_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_uint8_t (uint8_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_uint16_t (uint8_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_uint32_t (uint8_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_uint64_t (uint8_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16__Float16 (uint8_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_float (uint8_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t__Float16_double (uint8_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_int8_t (uint8_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_int16_t (uint8_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_int32_t (uint8_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_int64_t (uint8_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_uint8_t (uint8_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_uint16_t (uint8_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_uint32_t (uint8_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_uint64_t (uint8_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float__Float16 (uint8_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_float (uint8_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_float_double (uint8_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_int8_t (uint8_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_int16_t (uint8_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_int32_t (uint8_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_int64_t (uint8_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_uint8_t (uint8_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_uint16_t (uint8_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_uint32_t (uint8_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_uint64_t (uint8_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double__Float16 (uint8_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_float (uint8_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_double_double (uint8_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_int8_t (uint16_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_int16_t (uint16_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_int32_t (uint16_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_int64_t (uint16_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_uint8_t (uint16_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_uint16_t (uint16_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_uint32_t (uint16_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_uint64_t (uint16_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t__Float16 (uint16_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_float (uint16_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int8_t_double (uint16_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_int8_t (uint16_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_int16_t (uint16_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_int32_t (uint16_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_int64_t (uint16_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_uint8_t (uint16_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_uint16_t (uint16_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_uint32_t (uint16_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_uint64_t (uint16_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t__Float16 (uint16_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_float (uint16_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int16_t_double (uint16_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_int8_t (uint16_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_int16_t (uint16_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_int32_t (uint16_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_int64_t (uint16_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_uint8_t (uint16_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_uint16_t (uint16_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_uint32_t (uint16_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_uint64_t (uint16_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t__Float16 (uint16_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_float (uint16_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t_double (uint16_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_int8_t (uint16_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_int16_t (uint16_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_int32_t (uint16_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_int64_t (uint16_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_uint8_t (uint16_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_uint16_t (uint16_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_uint32_t (uint16_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_uint64_t (uint16_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t__Float16 (uint16_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_float (uint16_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int64_t_double (uint16_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_int8_t (uint16_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_int16_t (uint16_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_int32_t (uint16_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_int64_t (uint16_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_uint8_t (uint16_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_uint16_t (uint16_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_uint32_t (uint16_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_uint64_t (uint16_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t__Float16 (uint16_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_float (uint16_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint8_t_double (uint16_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_int8_t (uint16_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_int16_t (uint16_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_int32_t (uint16_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_int64_t (uint16_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_uint8_t (uint16_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_uint16_t (uint16_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_uint32_t (uint16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_uint64_t (uint16_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t__Float16 (uint16_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_float (uint16_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint16_t_double (uint16_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_int8_t (uint16_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_int16_t (uint16_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_int32_t (uint16_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_int64_t (uint16_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_uint8_t (uint16_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_uint16_t (uint16_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_uint32_t (uint16_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_uint64_t (uint16_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t__Float16 (uint16_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_float (uint16_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t_double (uint16_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_int8_t (uint16_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_int16_t (uint16_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_int32_t (uint16_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_int64_t (uint16_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_uint8_t (uint16_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_uint16_t (uint16_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_uint32_t (uint16_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_uint64_t (uint16_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t__Float16 (uint16_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_float (uint16_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint64_t_double (uint16_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_int8_t (uint16_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_int16_t (uint16_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_int32_t (uint16_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_int64_t (uint16_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_uint8_t (uint16_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_uint16_t (uint16_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_uint32_t (uint16_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_uint64_t (uint16_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16__Float16 (uint16_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_float (uint16_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t__Float16_double (uint16_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_int8_t (uint16_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_int16_t (uint16_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_int32_t (uint16_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_int64_t (uint16_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_uint8_t (uint16_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_uint16_t (uint16_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_uint32_t (uint16_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_uint64_t (uint16_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float__Float16 (uint16_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_float (uint16_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_float_double (uint16_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_int8_t (uint16_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_int16_t (uint16_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_int32_t (uint16_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_int64_t (uint16_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_uint8_t (uint16_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_uint16_t (uint16_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_uint32_t (uint16_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_uint64_t (uint16_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double__Float16 (uint16_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_float (uint16_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_double_double (uint16_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_int8_t (uint32_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_int16_t (uint32_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_int32_t (uint32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_int64_t (uint32_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_uint8_t (uint32_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_uint16_t (uint32_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_uint32_t (uint32_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_uint64_t (uint32_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t__Float16 (uint32_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_float (uint32_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int8_t_double (uint32_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_int8_t (uint32_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_int16_t (uint32_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_int32_t (uint32_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_int64_t (uint32_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_uint8_t (uint32_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_uint16_t (uint32_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_uint32_t (uint32_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_uint64_t (uint32_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t__Float16 (uint32_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_float (uint32_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int16_t_double (uint32_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_int8_t (uint32_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_int16_t (uint32_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_int32_t (uint32_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_int64_t (uint32_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_uint8_t (uint32_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_uint16_t (uint32_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_uint32_t (uint32_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_uint64_t (uint32_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t__Float16 (uint32_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_float (uint32_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int32_t_double (uint32_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_int8_t (uint32_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_int16_t (uint32_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_int32_t (uint32_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_int64_t (uint32_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_uint8_t (uint32_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_uint16_t (uint32_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_uint32_t (uint32_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_uint64_t (uint32_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t__Float16 (uint32_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_float (uint32_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t_double (uint32_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_int8_t (uint32_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_int16_t (uint32_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_int32_t (uint32_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_int64_t (uint32_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_uint8_t (uint32_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_uint16_t (uint32_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_uint32_t (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_uint64_t (uint32_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t__Float16 (uint32_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_float (uint32_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint8_t_double (uint32_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_int8_t (uint32_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_int16_t (uint32_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_int32_t (uint32_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_int64_t (uint32_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_uint8_t (uint32_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_uint16_t (uint32_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_uint32_t (uint32_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_uint64_t (uint32_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t__Float16 (uint32_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_float (uint32_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint16_t_double (uint32_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_int8_t (uint32_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_int16_t (uint32_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_int32_t (uint32_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_int64_t (uint32_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_uint8_t (uint32_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_uint16_t (uint32_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_uint32_t (uint32_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_uint64_t (uint32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t__Float16 (uint32_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_float (uint32_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint32_t_double (uint32_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_int8_t (uint32_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_int16_t (uint32_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_int32_t (uint32_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_int64_t (uint32_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_uint8_t (uint32_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_uint16_t (uint32_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_uint32_t (uint32_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_uint64_t (uint32_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t__Float16 (uint32_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_float (uint32_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t_double (uint32_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_int8_t (uint32_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_int16_t (uint32_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_int32_t (uint32_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_int64_t (uint32_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_uint8_t (uint32_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_uint16_t (uint32_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_uint32_t (uint32_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_uint64_t (uint32_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16__Float16 (uint32_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_float (uint32_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t__Float16_double (uint32_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_int8_t (uint32_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_int16_t (uint32_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_int32_t (uint32_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_int64_t (uint32_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_uint8_t (uint32_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_uint16_t (uint32_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_uint32_t (uint32_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_uint64_t (uint32_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float__Float16 (uint32_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_float (uint32_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_float_double (uint32_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_int8_t (uint32_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_int16_t (uint32_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_int32_t (uint32_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_int64_t (uint32_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_uint8_t (uint32_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_uint16_t (uint32_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_uint32_t (uint32_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_uint64_t (uint32_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double__Float16 (uint32_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_float (uint32_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_double_double (uint32_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_int8_t (uint64_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_int16_t (uint64_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_int32_t (uint64_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_int64_t (uint64_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_uint8_t (uint64_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_uint16_t (uint64_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_uint32_t (uint64_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_uint64_t (uint64_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t__Float16 (uint64_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_float (uint64_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int8_t_double (uint64_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_int8_t (uint64_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_int16_t (uint64_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_int32_t (uint64_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_int64_t (uint64_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_uint8_t (uint64_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_uint16_t (uint64_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_uint32_t (uint64_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_uint64_t (uint64_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t__Float16 (uint64_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_float (uint64_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int16_t_double (uint64_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_int8_t (uint64_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_int16_t (uint64_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_int32_t (uint64_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_int64_t (uint64_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_uint8_t (uint64_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_uint16_t (uint64_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_uint32_t (uint64_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_uint64_t (uint64_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t__Float16 (uint64_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_float (uint64_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int32_t_double (uint64_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_int8_t (uint64_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_int16_t (uint64_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_int32_t (uint64_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_int64_t (uint64_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_uint8_t (uint64_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_uint16_t (uint64_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_uint32_t (uint64_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_uint64_t (uint64_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t__Float16 (uint64_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_float (uint64_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_int64_t_double (uint64_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_int8_t (uint64_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_int16_t (uint64_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_int32_t (uint64_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_int64_t (uint64_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_uint8_t (uint64_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_uint16_t (uint64_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_uint32_t (uint64_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_uint64_t (uint64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t__Float16 (uint64_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_float (uint64_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint8_t_double (uint64_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_int8_t (uint64_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_int16_t (uint64_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_int32_t (uint64_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_int64_t (uint64_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_uint8_t (uint64_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_uint16_t (uint64_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_uint32_t (uint64_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_uint64_t (uint64_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t__Float16 (uint64_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_float (uint64_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint16_t_double (uint64_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_int8_t (uint64_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_int16_t (uint64_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_int32_t (uint64_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_int64_t (uint64_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_uint8_t (uint64_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_uint16_t (uint64_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_uint32_t (uint64_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_uint64_t (uint64_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t__Float16 (uint64_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_float (uint64_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint32_t_double (uint64_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_int8_t (uint64_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_int16_t (uint64_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_int32_t (uint64_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_int64_t (uint64_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_uint8_t (uint64_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_uint16_t (uint64_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_uint32_t (uint64_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_uint64_t (uint64_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t__Float16 (uint64_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_float (uint64_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_uint64_t_double (uint64_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_int8_t (uint64_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_int16_t (uint64_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_int32_t (uint64_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_int64_t (uint64_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_uint8_t (uint64_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_uint16_t (uint64_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_uint32_t (uint64_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_uint64_t (uint64_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16__Float16 (uint64_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_float (uint64_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t__Float16_double (uint64_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_int8_t (uint64_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_int16_t (uint64_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_int32_t (uint64_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_int64_t (uint64_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_uint8_t (uint64_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_uint16_t (uint64_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_uint32_t (uint64_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_uint64_t (uint64_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float__Float16 (uint64_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_float (uint64_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_float_double (uint64_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_int8_t (uint64_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_int16_t (uint64_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_int32_t (uint64_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_int64_t (uint64_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_uint8_t (uint64_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_uint16_t (uint64_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_uint32_t (uint64_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_uint64_t (uint64_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double__Float16 (uint64_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_float (uint64_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint64_t_double_double (uint64_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_int8_t (_Float16 * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_int16_t (_Float16 * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_int32_t (_Float16 * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_int64_t (_Float16 * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_uint8_t (_Float16 * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_uint16_t (_Float16 * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_uint32_t (_Float16 * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_uint64_t (_Float16 * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t__Float16 (_Float16 * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_float (_Float16 * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int8_t_double (_Float16 * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_int8_t (_Float16 * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_int16_t (_Float16 * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_int32_t (_Float16 * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_int64_t (_Float16 * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_uint8_t (_Float16 * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_uint16_t (_Float16 * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_uint32_t (_Float16 * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_uint64_t (_Float16 * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t__Float16 (_Float16 * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_float (_Float16 * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int16_t_double (_Float16 * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_int8_t (_Float16 * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_int16_t (_Float16 * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_int32_t (_Float16 * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_int64_t (_Float16 * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_uint8_t (_Float16 * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_uint16_t (_Float16 * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_uint32_t (_Float16 * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_uint64_t (_Float16 * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t__Float16 (_Float16 * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_float (_Float16 * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int32_t_double (_Float16 * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_int8_t (_Float16 * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_int16_t (_Float16 * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_int32_t (_Float16 * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_int64_t (_Float16 * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_uint8_t (_Float16 * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_uint16_t (_Float16 * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_uint32_t (_Float16 * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_uint64_t (_Float16 * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t__Float16 (_Float16 * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_float (_Float16 * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_int64_t_double (_Float16 * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_int8_t (_Float16 * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_int16_t (_Float16 * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_int32_t (_Float16 * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_int64_t (_Float16 * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_uint8_t (_Float16 * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_uint16_t (_Float16 * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_uint32_t (_Float16 * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_uint64_t (_Float16 * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t__Float16 (_Float16 * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_float (_Float16 * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint8_t_double (_Float16 * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_int8_t (_Float16 * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_int16_t (_Float16 * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_int32_t (_Float16 * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_int64_t (_Float16 * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_uint8_t (_Float16 * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_uint16_t (_Float16 * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_uint32_t (_Float16 * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_uint64_t (_Float16 * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t__Float16 (_Float16 * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_float (_Float16 * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint16_t_double (_Float16 * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_int8_t (_Float16 * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_int16_t (_Float16 * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_int32_t (_Float16 * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_int64_t (_Float16 * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_uint8_t (_Float16 * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_uint16_t (_Float16 * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_uint32_t (_Float16 * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_uint64_t (_Float16 * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t__Float16 (_Float16 * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_float (_Float16 * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint32_t_double (_Float16 * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_int8_t (_Float16 * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_int16_t (_Float16 * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_int32_t (_Float16 * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_int64_t (_Float16 * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_uint8_t (_Float16 * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_uint16_t (_Float16 * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_uint32_t (_Float16 * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_uint64_t (_Float16 * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t__Float16 (_Float16 * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_float (_Float16 * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_uint64_t_double (_Float16 * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_int8_t (_Float16 * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_int16_t (_Float16 * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_int32_t (_Float16 * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_int64_t (_Float16 * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_uint8_t (_Float16 * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_uint16_t (_Float16 * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_uint32_t (_Float16 * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_uint64_t (_Float16 * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16__Float16 (_Float16 * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_float (_Float16 * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16__Float16_double (_Float16 * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_int8_t (_Float16 * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_int16_t (_Float16 * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_int32_t (_Float16 * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_int64_t (_Float16 * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_uint8_t (_Float16 * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_uint16_t (_Float16 * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_uint32_t (_Float16 * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_uint64_t (_Float16 * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float__Float16 (_Float16 * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_float (_Float16 * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float_double (_Float16 * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_int8_t (_Float16 * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_int16_t (_Float16 * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_int32_t (_Float16 * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_int64_t (_Float16 * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_uint8_t (_Float16 * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_uint16_t (_Float16 * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_uint32_t (_Float16 * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_uint64_t (_Float16 * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double__Float16 (_Float16 * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_float (_Float16 * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_double_double (_Float16 * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_int8_t (float * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_int16_t (float * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_int32_t (float * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_int64_t (float * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_uint8_t (float * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_uint16_t (float * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_uint32_t (float * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_uint64_t (float * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t__Float16 (float * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_float (float * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int8_t_double (float * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_int8_t (float * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_int16_t (float * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_int32_t (float * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_int64_t (float * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_uint8_t (float * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_uint16_t (float * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_uint32_t (float * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_uint64_t (float * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t__Float16 (float * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_float (float * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int16_t_double (float * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_int8_t (float * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_int16_t (float * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_int32_t (float * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_int64_t (float * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_uint8_t (float * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_uint16_t (float * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_uint32_t (float * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_uint64_t (float * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t__Float16 (float * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_float (float * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int32_t_double (float * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_int8_t (float * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_int16_t (float * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_int32_t (float * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_int64_t (float * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_uint8_t (float * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_uint16_t (float * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_uint32_t (float * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_uint64_t (float * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t__Float16 (float * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_float (float * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_int64_t_double (float * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_int8_t (float * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_int16_t (float * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_int32_t (float * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_int64_t (float * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_uint8_t (float * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_uint16_t (float * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_uint32_t (float * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_uint64_t (float * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t__Float16 (float * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_float (float * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint8_t_double (float * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_int8_t (float * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_int16_t (float * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_int32_t (float * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_int64_t (float * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_uint8_t (float * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_uint16_t (float * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_uint32_t (float * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_uint64_t (float * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t__Float16 (float * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_float (float * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint16_t_double (float * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_int8_t (float * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_int16_t (float * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_int32_t (float * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_int64_t (float * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_uint8_t (float * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_uint16_t (float * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_uint32_t (float * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_uint64_t (float * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t__Float16 (float * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_float (float * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint32_t_double (float * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_int8_t (float * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_int16_t (float * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_int32_t (float * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_int64_t (float * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_uint8_t (float * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_uint16_t (float * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_uint32_t (float * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_uint64_t (float * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t__Float16 (float * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_float (float * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_uint64_t_double (float * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_int8_t (float * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_int16_t (float * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_int32_t (float * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_int64_t (float * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_uint8_t (float * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_uint16_t (float * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_uint32_t (float * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_uint64_t (float * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16__Float16 (float * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_float (float * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float__Float16_double (float * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_int8_t (float * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_int16_t (float * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_int32_t (float * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_int64_t (float * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_uint8_t (float * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_uint16_t (float * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_uint32_t (float * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_uint64_t (float * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float__Float16 (float * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_float (float * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_float_double (float * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_int8_t (float * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_int16_t (float * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_int32_t (float * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_int64_t (float * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_uint8_t (float * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_uint16_t (float * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_uint32_t (float * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_uint64_t (float * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double__Float16 (float * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_float (float * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double_double (float * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_int8_t (double * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_int16_t (double * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_int32_t (double * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_int64_t (double * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_uint8_t (double * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_uint16_t (double * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_uint32_t (double * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_uint64_t (double * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t__Float16 (double * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_float (double * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int8_t_double (double * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_int8_t (double * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_int16_t (double * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_int32_t (double * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_int64_t (double * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_uint8_t (double * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_uint16_t (double * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_uint32_t (double * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_uint64_t (double * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t__Float16 (double * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_float (double * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int16_t_double (double * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_int8_t (double * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_int16_t (double * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_int32_t (double * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_int64_t (double * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_uint8_t (double * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_uint16_t (double * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_uint32_t (double * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_uint64_t (double * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t__Float16 (double * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_float (double * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int32_t_double (double * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_int8_t (double * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_int16_t (double * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_int32_t (double * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_int64_t (double * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_uint8_t (double * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_uint16_t (double * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_uint32_t (double * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_uint64_t (double * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t__Float16 (double * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_float (double * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_int64_t_double (double * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_int8_t (double * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_int16_t (double * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_int32_t (double * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_int64_t (double * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_uint8_t (double * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_uint16_t (double * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_uint32_t (double * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_uint64_t (double * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t__Float16 (double * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_float (double * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint8_t_double (double * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_int8_t (double * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_int16_t (double * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_int32_t (double * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_int64_t (double * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_uint8_t (double * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_uint16_t (double * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_uint32_t (double * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_uint64_t (double * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t__Float16 (double * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_float (double * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint16_t_double (double * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_int8_t (double * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_int16_t (double * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_int32_t (double * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_int64_t (double * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_uint8_t (double * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_uint16_t (double * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_uint32_t (double * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_uint64_t (double * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t__Float16 (double * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_float (double * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint32_t_double (double * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_int8_t (double * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_int16_t (double * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_int32_t (double * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_int64_t (double * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_uint8_t (double * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_uint16_t (double * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_uint32_t (double * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_uint64_t (double * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t__Float16 (double * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_float (double * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_uint64_t_double (double * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_int8_t (double * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_int16_t (double * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_int32_t (double * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_int64_t (double * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_uint8_t (double * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_uint16_t (double * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_uint32_t (double * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_uint64_t (double * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16__Float16 (double * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_float (double * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double__Float16_double (double * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_int8_t (double * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_int16_t (double * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_int32_t (double * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_int64_t (double * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_uint8_t (double * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_uint16_t (double * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_uint32_t (double * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_uint64_t (double * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float__Float16 (double * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_float (double * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_float_double (double * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_int8_t (double * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_int16_t (double * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_int32_t (double * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_int64_t (double * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_uint8_t (double * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_uint16_t (double * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_uint32_t (double * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_uint64_t (double * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double__Float16 (double * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_float (double * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_double_double_double (double * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[i];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_int8_t (int8_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_int16_t (int8_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_int32_t (int8_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_int64_t (int8_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_uint8_t (int8_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_uint16_t (int8_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_uint32_t (int8_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_uint64_t (int8_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t__Float16 (int8_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_float (int8_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int8_t_double (int8_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_int8_t (int8_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_int16_t (int8_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_int32_t (int8_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_int64_t (int8_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_uint8_t (int8_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_uint16_t (int8_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_uint32_t (int8_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_uint64_t (int8_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t__Float16 (int8_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_float (int8_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int16_t_double (int8_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_int8_t (int8_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_int16_t (int8_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_int32_t (int8_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_int64_t (int8_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_uint8_t (int8_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_uint16_t (int8_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_uint32_t (int8_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_uint64_t (int8_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t__Float16 (int8_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_float (int8_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int32_t_double (int8_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_int8_t (int8_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_int16_t (int8_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_int32_t (int8_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_int64_t (int8_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_uint8_t (int8_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_uint16_t (int8_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_uint32_t (int8_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_uint64_t (int8_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t__Float16 (int8_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_float (int8_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_int64_t_double (int8_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_int8_t (int8_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_int16_t (int8_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_int32_t (int8_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_int64_t (int8_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_uint8_t (int8_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_uint16_t (int8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_uint32_t (int8_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_uint64_t (int8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t__Float16 (int8_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_float (int8_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint8_t_double (int8_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_int8_t (int8_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_int16_t (int8_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_int32_t (int8_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_int64_t (int8_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_uint8_t (int8_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_uint16_t (int8_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_uint32_t (int8_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_uint64_t (int8_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t__Float16 (int8_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_float (int8_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint16_t_double (int8_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_int8_t (int8_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_int16_t (int8_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_int32_t (int8_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_int64_t (int8_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_uint8_t (int8_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_uint16_t (int8_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_uint32_t (int8_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_uint64_t (int8_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t__Float16 (int8_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_float (int8_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint32_t_double (int8_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_int8_t (int8_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_int16_t (int8_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_int32_t (int8_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_int64_t (int8_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_uint8_t (int8_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_uint16_t (int8_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_uint32_t (int8_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_uint64_t (int8_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t__Float16 (int8_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_float (int8_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_uint64_t_double (int8_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_int8_t (int8_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_int16_t (int8_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_int32_t (int8_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_int64_t (int8_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_uint8_t (int8_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_uint16_t (int8_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_uint32_t (int8_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_uint64_t (int8_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16__Float16 (int8_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_float (int8_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t__Float16_double (int8_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_int8_t (int8_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_int16_t (int8_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_int32_t (int8_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_int64_t (int8_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_uint8_t (int8_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_uint16_t (int8_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_uint32_t (int8_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_uint64_t (int8_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float__Float16 (int8_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_float (int8_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_float_double (int8_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_int8_t (int8_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_int16_t (int8_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_int32_t (int8_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_int64_t (int8_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_uint8_t (int8_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_uint16_t (int8_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_uint32_t (int8_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_uint64_t (int8_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double__Float16 (int8_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_float (int8_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int8_t_double_double (int8_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_int8_t (int16_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_int16_t (int16_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_int32_t (int16_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_int64_t (int16_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_uint8_t (int16_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_uint16_t (int16_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_uint32_t (int16_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_uint64_t (int16_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t__Float16 (int16_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_float (int16_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int8_t_double (int16_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_int8_t (int16_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_int16_t (int16_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_int32_t (int16_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_int64_t (int16_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_uint8_t (int16_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_uint16_t (int16_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_uint32_t (int16_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_uint64_t (int16_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t__Float16 (int16_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_float (int16_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int16_t_double (int16_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_int8_t (int16_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_int16_t (int16_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_int32_t (int16_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_int64_t (int16_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_uint8_t (int16_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_uint16_t (int16_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_uint32_t (int16_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_uint64_t (int16_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t__Float16 (int16_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_float (int16_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int32_t_double (int16_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_int8_t (int16_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_int16_t (int16_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_int32_t (int16_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_int64_t (int16_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_uint8_t (int16_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_uint16_t (int16_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_uint32_t (int16_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_uint64_t (int16_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t__Float16 (int16_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_float (int16_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_int64_t_double (int16_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_int8_t (int16_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_int16_t (int16_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_int32_t (int16_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_int64_t (int16_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_uint8_t (int16_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_uint16_t (int16_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_uint32_t (int16_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_uint64_t (int16_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t__Float16 (int16_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_float (int16_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint8_t_double (int16_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_int8_t (int16_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_int16_t (int16_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_int32_t (int16_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_int64_t (int16_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_uint8_t (int16_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_uint16_t (int16_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_uint32_t (int16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_uint64_t (int16_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t__Float16 (int16_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_float (int16_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint16_t_double (int16_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_int8_t (int16_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_int16_t (int16_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_int32_t (int16_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_int64_t (int16_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_uint8_t (int16_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_uint16_t (int16_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_uint32_t (int16_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_uint64_t (int16_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t__Float16 (int16_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_float (int16_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint32_t_double (int16_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_int8_t (int16_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_int16_t (int16_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_int32_t (int16_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_int64_t (int16_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_uint8_t (int16_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_uint16_t (int16_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_uint32_t (int16_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_uint64_t (int16_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t__Float16 (int16_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_float (int16_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_uint64_t_double (int16_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_int8_t (int16_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_int16_t (int16_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_int32_t (int16_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_int64_t (int16_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_uint8_t (int16_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_uint16_t (int16_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_uint32_t (int16_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_uint64_t (int16_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16__Float16 (int16_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_float (int16_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t__Float16_double (int16_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_int8_t (int16_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_int16_t (int16_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_int32_t (int16_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_int64_t (int16_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_uint8_t (int16_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_uint16_t (int16_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_uint32_t (int16_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_uint64_t (int16_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float__Float16 (int16_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_float (int16_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_float_double (int16_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_int8_t (int16_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_int16_t (int16_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_int32_t (int16_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_int64_t (int16_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_uint8_t (int16_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_uint16_t (int16_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_uint32_t (int16_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_uint64_t (int16_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double__Float16 (int16_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_float (int16_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int16_t_double_double (int16_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_int8_t (int32_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_int16_t (int32_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_int32_t (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_int64_t (int32_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_uint8_t (int32_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_uint16_t (int32_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_uint32_t (int32_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_uint64_t (int32_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t__Float16 (int32_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_float (int32_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int8_t_double (int32_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_int8_t (int32_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_int16_t (int32_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_int32_t (int32_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_int64_t (int32_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_uint8_t (int32_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_uint16_t (int32_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_uint32_t (int32_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_uint64_t (int32_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t__Float16 (int32_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_float (int32_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int16_t_double (int32_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_int8_t (int32_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_int16_t (int32_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_int32_t (int32_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_int64_t (int32_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_uint8_t (int32_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_uint16_t (int32_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_uint32_t (int32_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_uint64_t (int32_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t__Float16 (int32_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_float (int32_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int32_t_double (int32_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_int8_t (int32_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_int16_t (int32_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_int32_t (int32_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_int64_t (int32_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_uint8_t (int32_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_uint16_t (int32_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_uint32_t (int32_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_uint64_t (int32_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t__Float16 (int32_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_float (int32_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_int64_t_double (int32_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_int8_t (int32_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_int16_t (int32_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_int32_t (int32_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_int64_t (int32_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_uint8_t (int32_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_uint16_t (int32_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_uint32_t (int32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_uint64_t (int32_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t__Float16 (int32_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_float (int32_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint8_t_double (int32_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_int8_t (int32_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_int16_t (int32_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_int32_t (int32_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_int64_t (int32_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_uint8_t (int32_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_uint16_t (int32_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_uint32_t (int32_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_uint64_t (int32_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t__Float16 (int32_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_float (int32_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint16_t_double (int32_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_int8_t (int32_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_int16_t (int32_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_int32_t (int32_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_int64_t (int32_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_uint8_t (int32_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_uint16_t (int32_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_uint32_t (int32_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_uint64_t (int32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t__Float16 (int32_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_float (int32_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint32_t_double (int32_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_int8_t (int32_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_int16_t (int32_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_int32_t (int32_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_int64_t (int32_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_uint8_t (int32_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_uint16_t (int32_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_uint32_t (int32_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_uint64_t (int32_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t__Float16 (int32_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_float (int32_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_uint64_t_double (int32_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_int8_t (int32_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_int16_t (int32_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_int32_t (int32_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_int64_t (int32_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_uint8_t (int32_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_uint16_t (int32_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_uint32_t (int32_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_uint64_t (int32_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16__Float16 (int32_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_float (int32_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t__Float16_double (int32_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_int8_t (int32_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_int16_t (int32_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_int32_t (int32_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_int64_t (int32_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_uint8_t (int32_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_uint16_t (int32_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_uint32_t (int32_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_uint64_t (int32_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float__Float16 (int32_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_float (int32_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_float_double (int32_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_int8_t (int32_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_int16_t (int32_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_int32_t (int32_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_int64_t (int32_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_uint8_t (int32_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_uint16_t (int32_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_uint32_t (int32_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_uint64_t (int32_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double__Float16 (int32_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_float (int32_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int32_t_double_double (int32_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_int8_t (int64_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_int16_t (int64_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_int32_t (int64_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_int64_t (int64_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_uint8_t (int64_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_uint16_t (int64_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_uint32_t (int64_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_uint64_t (int64_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t__Float16 (int64_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_float (int64_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int8_t_double (int64_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_int8_t (int64_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_int16_t (int64_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_int32_t (int64_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_int64_t (int64_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_uint8_t (int64_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_uint16_t (int64_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_uint32_t (int64_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_uint64_t (int64_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t__Float16 (int64_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_float (int64_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int16_t_double (int64_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_int8_t (int64_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_int16_t (int64_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_int32_t (int64_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_int64_t (int64_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_uint8_t (int64_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_uint16_t (int64_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_uint32_t (int64_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_uint64_t (int64_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t__Float16 (int64_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_float (int64_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int32_t_double (int64_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_int8_t (int64_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_int16_t (int64_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_int32_t (int64_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_int64_t (int64_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_uint8_t (int64_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_uint16_t (int64_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_uint32_t (int64_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_uint64_t (int64_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t__Float16 (int64_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_float (int64_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_int64_t_double (int64_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_int8_t (int64_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_int16_t (int64_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_int32_t (int64_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_int64_t (int64_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_uint8_t (int64_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_uint16_t (int64_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_uint32_t (int64_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_uint64_t (int64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t__Float16 (int64_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_float (int64_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint8_t_double (int64_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_int8_t (int64_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_int16_t (int64_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_int32_t (int64_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_int64_t (int64_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_uint8_t (int64_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_uint16_t (int64_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_uint32_t (int64_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_uint64_t (int64_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t__Float16 (int64_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_float (int64_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint16_t_double (int64_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_int8_t (int64_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_int16_t (int64_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_int32_t (int64_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_int64_t (int64_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_uint8_t (int64_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_uint16_t (int64_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_uint32_t (int64_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_uint64_t (int64_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t__Float16 (int64_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_float (int64_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint32_t_double (int64_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_int8_t (int64_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_int16_t (int64_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_int32_t (int64_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_int64_t (int64_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_uint8_t (int64_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_uint16_t (int64_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_uint32_t (int64_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_uint64_t (int64_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t__Float16 (int64_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_float (int64_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_uint64_t_double (int64_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_int8_t (int64_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_int16_t (int64_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_int32_t (int64_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_int64_t (int64_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_uint8_t (int64_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_uint16_t (int64_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_uint32_t (int64_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_uint64_t (int64_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16__Float16 (int64_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_float (int64_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t__Float16_double (int64_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_int8_t (int64_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_int16_t (int64_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_int32_t (int64_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_int64_t (int64_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_uint8_t (int64_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_uint16_t (int64_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_uint32_t (int64_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_uint64_t (int64_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float__Float16 (int64_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_float (int64_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_float_double (int64_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_int8_t (int64_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_int16_t (int64_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_int32_t (int64_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_int64_t (int64_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_uint8_t (int64_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_uint16_t (int64_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_uint32_t (int64_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_uint64_t (int64_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double__Float16 (int64_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_float (int64_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_int64_t_double_double (int64_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_int8_t (uint8_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_int16_t (uint8_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_int32_t (uint8_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_int64_t (uint8_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_uint8_t (uint8_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_uint16_t (uint8_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_uint32_t (uint8_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_uint64_t (uint8_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t__Float16 (uint8_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_float (uint8_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int8_t_double (uint8_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_int8_t (uint8_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_int16_t (uint8_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_int32_t (uint8_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_int64_t (uint8_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_uint8_t (uint8_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_uint16_t (uint8_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_uint32_t (uint8_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_uint64_t (uint8_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t__Float16 (uint8_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_float (uint8_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int16_t_double (uint8_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_int8_t (uint8_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_int16_t (uint8_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_int32_t (uint8_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_int64_t (uint8_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_uint8_t (uint8_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_uint16_t (uint8_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_uint32_t (uint8_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_uint64_t (uint8_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t__Float16 (uint8_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_float (uint8_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int32_t_double (uint8_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_int8_t (uint8_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_int16_t (uint8_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_int32_t (uint8_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_int64_t (uint8_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_uint8_t (uint8_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_uint16_t (uint8_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_uint32_t (uint8_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_uint64_t (uint8_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t__Float16 (uint8_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_float (uint8_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_int64_t_double (uint8_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_int8_t (uint8_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_int16_t (uint8_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_int32_t (uint8_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_int64_t (uint8_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_uint8_t (uint8_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_uint16_t (uint8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_uint32_t (uint8_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_uint64_t (uint8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t__Float16 (uint8_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_float (uint8_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint8_t_double (uint8_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_int8_t (uint8_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_int16_t (uint8_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_int32_t (uint8_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_int64_t (uint8_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_uint8_t (uint8_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_uint16_t (uint8_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_uint32_t (uint8_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_uint64_t (uint8_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t__Float16 (uint8_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_float (uint8_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint16_t_double (uint8_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_int8_t (uint8_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_int16_t (uint8_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_int32_t (uint8_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_int64_t (uint8_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_uint8_t (uint8_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_uint16_t (uint8_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_uint32_t (uint8_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_uint64_t (uint8_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t__Float16 (uint8_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_float (uint8_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint32_t_double (uint8_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_int8_t (uint8_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_int16_t (uint8_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_int32_t (uint8_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_int64_t (uint8_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_uint8_t (uint8_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_uint16_t (uint8_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_uint32_t (uint8_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_uint64_t (uint8_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t__Float16 (uint8_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_float (uint8_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_uint64_t_double (uint8_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_int8_t (uint8_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_int16_t (uint8_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_int32_t (uint8_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_int64_t (uint8_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_uint8_t (uint8_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_uint16_t (uint8_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_uint32_t (uint8_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_uint64_t (uint8_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16__Float16 (uint8_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_float (uint8_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t__Float16_double (uint8_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_int8_t (uint8_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_int16_t (uint8_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_int32_t (uint8_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_int64_t (uint8_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_uint8_t (uint8_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_uint16_t (uint8_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_uint32_t (uint8_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_uint64_t (uint8_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float__Float16 (uint8_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_float (uint8_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_float_double (uint8_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_int8_t (uint8_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_int16_t (uint8_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_int32_t (uint8_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_int64_t (uint8_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_uint8_t (uint8_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_uint16_t (uint8_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_uint32_t (uint8_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_uint64_t (uint8_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double__Float16 (uint8_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_float (uint8_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint8_t_double_double (uint8_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_int8_t (uint16_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_int16_t (uint16_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_int32_t (uint16_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_int64_t (uint16_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_uint8_t (uint16_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_uint16_t (uint16_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_uint32_t (uint16_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_uint64_t (uint16_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t__Float16 (uint16_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_float (uint16_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int8_t_double (uint16_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_int8_t (uint16_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_int16_t (uint16_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_int32_t (uint16_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_int64_t (uint16_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_uint8_t (uint16_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_uint16_t (uint16_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_uint32_t (uint16_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_uint64_t (uint16_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t__Float16 (uint16_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_float (uint16_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int16_t_double (uint16_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_int8_t (uint16_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_int16_t (uint16_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_int32_t (uint16_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_int64_t (uint16_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_uint8_t (uint16_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_uint16_t (uint16_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_uint32_t (uint16_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_uint64_t (uint16_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t__Float16 (uint16_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_float (uint16_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int32_t_double (uint16_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_int8_t (uint16_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_int16_t (uint16_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_int32_t (uint16_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_int64_t (uint16_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_uint8_t (uint16_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_uint16_t (uint16_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_uint32_t (uint16_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_uint64_t (uint16_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t__Float16 (uint16_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_float (uint16_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_int64_t_double (uint16_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_int8_t (uint16_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_int16_t (uint16_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_int32_t (uint16_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_int64_t (uint16_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_uint8_t (uint16_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_uint16_t (uint16_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_uint32_t (uint16_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_uint64_t (uint16_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t__Float16 (uint16_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_float (uint16_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint8_t_double (uint16_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_int8_t (uint16_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_int16_t (uint16_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_int32_t (uint16_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_int64_t (uint16_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_uint8_t (uint16_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_uint16_t (uint16_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_uint32_t (uint16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_uint64_t (uint16_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t__Float16 (uint16_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_float (uint16_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint16_t_double (uint16_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_int8_t (uint16_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_int16_t (uint16_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_int32_t (uint16_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_int64_t (uint16_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_uint8_t (uint16_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_uint16_t (uint16_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_uint32_t (uint16_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_uint64_t (uint16_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t__Float16 (uint16_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_float (uint16_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint32_t_double (uint16_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_int8_t (uint16_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_int16_t (uint16_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_int32_t (uint16_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_int64_t (uint16_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_uint8_t (uint16_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_uint16_t (uint16_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_uint32_t (uint16_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_uint64_t (uint16_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t__Float16 (uint16_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_float (uint16_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_uint64_t_double (uint16_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_int8_t (uint16_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_int16_t (uint16_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_int32_t (uint16_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_int64_t (uint16_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_uint8_t (uint16_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_uint16_t (uint16_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_uint32_t (uint16_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_uint64_t (uint16_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16__Float16 (uint16_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_float (uint16_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t__Float16_double (uint16_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_int8_t (uint16_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_int16_t (uint16_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_int32_t (uint16_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_int64_t (uint16_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_uint8_t (uint16_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_uint16_t (uint16_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_uint32_t (uint16_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_uint64_t (uint16_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float__Float16 (uint16_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_float (uint16_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_float_double (uint16_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_int8_t (uint16_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_int16_t (uint16_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_int32_t (uint16_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_int64_t (uint16_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_uint8_t (uint16_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_uint16_t (uint16_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_uint32_t (uint16_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_uint64_t (uint16_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double__Float16 (uint16_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_float (uint16_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint16_t_double_double (uint16_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_int8_t (uint32_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_int16_t (uint32_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_int32_t (uint32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_int64_t (uint32_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_uint8_t (uint32_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_uint16_t (uint32_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_uint32_t (uint32_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_uint64_t (uint32_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t__Float16 (uint32_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_float (uint32_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int8_t_double (uint32_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_int8_t (uint32_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_int16_t (uint32_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_int32_t (uint32_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_int64_t (uint32_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_uint8_t (uint32_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_uint16_t (uint32_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_uint32_t (uint32_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_uint64_t (uint32_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t__Float16 (uint32_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_float (uint32_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int16_t_double (uint32_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_int8_t (uint32_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_int16_t (uint32_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_int32_t (uint32_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_int64_t (uint32_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_uint8_t (uint32_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_uint16_t (uint32_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_uint32_t (uint32_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_uint64_t (uint32_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t__Float16 (uint32_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_float (uint32_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int32_t_double (uint32_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_int8_t (uint32_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_int16_t (uint32_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_int32_t (uint32_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_int64_t (uint32_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_uint8_t (uint32_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_uint16_t (uint32_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_uint32_t (uint32_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_uint64_t (uint32_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t__Float16 (uint32_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_float (uint32_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_int64_t_double (uint32_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_int8_t (uint32_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_int16_t (uint32_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_int32_t (uint32_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_int64_t (uint32_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_uint8_t (uint32_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_uint16_t (uint32_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_uint32_t (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_uint64_t (uint32_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t__Float16 (uint32_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_float (uint32_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint8_t_double (uint32_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_int8_t (uint32_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_int16_t (uint32_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_int32_t (uint32_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_int64_t (uint32_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_uint8_t (uint32_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_uint16_t (uint32_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_uint32_t (uint32_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_uint64_t (uint32_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t__Float16 (uint32_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_float (uint32_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint16_t_double (uint32_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_int8_t (uint32_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_int16_t (uint32_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_int32_t (uint32_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_int64_t (uint32_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_uint8_t (uint32_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_uint16_t (uint32_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_uint32_t (uint32_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_uint64_t (uint32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t__Float16 (uint32_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_float (uint32_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint32_t_double (uint32_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_int8_t (uint32_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_int16_t (uint32_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_int32_t (uint32_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_int64_t (uint32_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_uint8_t (uint32_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_uint16_t (uint32_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_uint32_t (uint32_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_uint64_t (uint32_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t__Float16 (uint32_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_float (uint32_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_uint64_t_double (uint32_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_int8_t (uint32_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_int16_t (uint32_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_int32_t (uint32_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_int64_t (uint32_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_uint8_t (uint32_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_uint16_t (uint32_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_uint32_t (uint32_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_uint64_t (uint32_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16__Float16 (uint32_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_float (uint32_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t__Float16_double (uint32_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_int8_t (uint32_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_int16_t (uint32_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_int32_t (uint32_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_int64_t (uint32_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_uint8_t (uint32_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_uint16_t (uint32_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_uint32_t (uint32_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_uint64_t (uint32_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float__Float16 (uint32_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_float (uint32_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_float_double (uint32_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_int8_t (uint32_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_int16_t (uint32_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_int32_t (uint32_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_int64_t (uint32_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_uint8_t (uint32_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_uint16_t (uint32_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_uint32_t (uint32_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_uint64_t (uint32_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double__Float16 (uint32_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_float (uint32_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint32_t_double_double (uint32_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_int8_t (uint64_t * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_int16_t (uint64_t * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_int32_t (uint64_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_int64_t (uint64_t * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_uint8_t (uint64_t * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_uint16_t (uint64_t * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_uint32_t (uint64_t * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_uint64_t (uint64_t * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t__Float16 (uint64_t * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_float (uint64_t * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int8_t_double (uint64_t * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_int8_t (uint64_t * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_int16_t (uint64_t * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_int32_t (uint64_t * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_int64_t (uint64_t * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_uint8_t (uint64_t * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_uint16_t (uint64_t * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_uint32_t (uint64_t * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_uint64_t (uint64_t * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t__Float16 (uint64_t * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_float (uint64_t * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int16_t_double (uint64_t * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_int8_t (uint64_t * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_int16_t (uint64_t * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_int32_t (uint64_t * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_int64_t (uint64_t * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_uint8_t (uint64_t * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_uint16_t (uint64_t * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_uint32_t (uint64_t * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_uint64_t (uint64_t * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t__Float16 (uint64_t * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_float (uint64_t * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int32_t_double (uint64_t * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_int8_t (uint64_t * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_int16_t (uint64_t * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_int32_t (uint64_t * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_int64_t (uint64_t * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_uint8_t (uint64_t * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_uint16_t (uint64_t * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_uint32_t (uint64_t * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_uint64_t (uint64_t * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t__Float16 (uint64_t * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_float (uint64_t * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_int64_t_double (uint64_t * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_int8_t (uint64_t * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_int16_t (uint64_t * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_int32_t (uint64_t * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_int64_t (uint64_t * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_uint8_t (uint64_t * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_uint16_t (uint64_t * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_uint32_t (uint64_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_uint64_t (uint64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t__Float16 (uint64_t * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_float (uint64_t * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint8_t_double (uint64_t * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_int8_t (uint64_t * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_int16_t (uint64_t * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_int32_t (uint64_t * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_int64_t (uint64_t * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_uint8_t (uint64_t * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_uint16_t (uint64_t * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_uint32_t (uint64_t * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_uint64_t (uint64_t * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t__Float16 (uint64_t * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_float (uint64_t * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint16_t_double (uint64_t * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_int8_t (uint64_t * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_int16_t (uint64_t * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_int32_t (uint64_t * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_int64_t (uint64_t * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_uint8_t (uint64_t * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_uint16_t (uint64_t * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_uint32_t (uint64_t * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_uint64_t (uint64_t * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t__Float16 (uint64_t * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_float (uint64_t * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint32_t_double (uint64_t * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_int8_t (uint64_t * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_int16_t (uint64_t * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_int32_t (uint64_t * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_int64_t (uint64_t * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_uint8_t (uint64_t * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_uint16_t (uint64_t * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_uint32_t (uint64_t * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_uint64_t (uint64_t * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t__Float16 (uint64_t * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_float (uint64_t * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_uint64_t_double (uint64_t * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_int8_t (uint64_t * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_int16_t (uint64_t * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_int32_t (uint64_t * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_int64_t (uint64_t * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_uint8_t (uint64_t * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_uint16_t (uint64_t * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_uint32_t (uint64_t * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_uint64_t (uint64_t * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16__Float16 (uint64_t * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_float (uint64_t * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t__Float16_double (uint64_t * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_int8_t (uint64_t * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_int16_t (uint64_t * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_int32_t (uint64_t * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_int64_t (uint64_t * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_uint8_t (uint64_t * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_uint16_t (uint64_t * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_uint32_t (uint64_t * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_uint64_t (uint64_t * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float__Float16 (uint64_t * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_float (uint64_t * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_float_double (uint64_t * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_int8_t (uint64_t * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_int16_t (uint64_t * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_int32_t (uint64_t * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_int64_t (uint64_t * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_uint8_t (uint64_t * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_uint16_t (uint64_t * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_uint32_t (uint64_t * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_uint64_t (uint64_t * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double__Float16 (uint64_t * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_float (uint64_t * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_uint64_t_double_double (uint64_t * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_int8_t (_Float16 * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_int16_t (_Float16 * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_int32_t (_Float16 * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_int64_t (_Float16 * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_uint8_t (_Float16 * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_uint16_t (_Float16 * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_uint32_t (_Float16 * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_uint64_t (_Float16 * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t__Float16 (_Float16 * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_float (_Float16 * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int8_t_double (_Float16 * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_int8_t (_Float16 * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_int16_t (_Float16 * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_int32_t (_Float16 * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_int64_t (_Float16 * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_uint8_t (_Float16 * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_uint16_t (_Float16 * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_uint32_t (_Float16 * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_uint64_t (_Float16 * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t__Float16 (_Float16 * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_float (_Float16 * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int16_t_double (_Float16 * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_int8_t (_Float16 * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_int16_t (_Float16 * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_int32_t (_Float16 * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_int64_t (_Float16 * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_uint8_t (_Float16 * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_uint16_t (_Float16 * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_uint32_t (_Float16 * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_uint64_t (_Float16 * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t__Float16 (_Float16 * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_float (_Float16 * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int32_t_double (_Float16 * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_int8_t (_Float16 * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_int16_t (_Float16 * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_int32_t (_Float16 * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_int64_t (_Float16 * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_uint8_t (_Float16 * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_uint16_t (_Float16 * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_uint32_t (_Float16 * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_uint64_t (_Float16 * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t__Float16 (_Float16 * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_float (_Float16 * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_int64_t_double (_Float16 * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_int8_t (_Float16 * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_int16_t (_Float16 * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_int32_t (_Float16 * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_int64_t (_Float16 * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_uint8_t (_Float16 * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_uint16_t (_Float16 * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_uint32_t (_Float16 * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_uint64_t (_Float16 * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t__Float16 (_Float16 * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_float (_Float16 * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint8_t_double (_Float16 * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_int8_t (_Float16 * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_int16_t (_Float16 * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_int32_t (_Float16 * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_int64_t (_Float16 * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_uint8_t (_Float16 * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_uint16_t (_Float16 * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_uint32_t (_Float16 * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_uint64_t (_Float16 * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t__Float16 (_Float16 * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_float (_Float16 * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint16_t_double (_Float16 * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_int8_t (_Float16 * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_int16_t (_Float16 * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_int32_t (_Float16 * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_int64_t (_Float16 * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_uint8_t (_Float16 * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_uint16_t (_Float16 * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_uint32_t (_Float16 * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_uint64_t (_Float16 * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t__Float16 (_Float16 * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_float (_Float16 * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint32_t_double (_Float16 * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_int8_t (_Float16 * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_int16_t (_Float16 * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_int32_t (_Float16 * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_int64_t (_Float16 * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_uint8_t (_Float16 * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_uint16_t (_Float16 * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_uint32_t (_Float16 * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_uint64_t (_Float16 * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t__Float16 (_Float16 * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_float (_Float16 * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_uint64_t_double (_Float16 * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_int8_t (_Float16 * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_int16_t (_Float16 * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_int32_t (_Float16 * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_int64_t (_Float16 * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_uint8_t (_Float16 * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_uint16_t (_Float16 * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_uint32_t (_Float16 * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_uint64_t (_Float16 * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16__Float16 (_Float16 * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_float (_Float16 * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16__Float16_double (_Float16 * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_int8_t (_Float16 * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_int16_t (_Float16 * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_int32_t (_Float16 * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_int64_t (_Float16 * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_uint8_t (_Float16 * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_uint16_t (_Float16 * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_uint32_t (_Float16 * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_uint64_t (_Float16 * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float__Float16 (_Float16 * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_float (_Float16 * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_float_double (_Float16 * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_int8_t (_Float16 * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_int16_t (_Float16 * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_int32_t (_Float16 * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_int64_t (_Float16 * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_uint8_t (_Float16 * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_uint16_t (_Float16 * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_uint32_t (_Float16 * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_uint64_t (_Float16 * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double__Float16 (_Float16 * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_float (_Float16 * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed__Float16_double_double (_Float16 * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_int8_t (float * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_int16_t (float * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_int32_t (float * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_int64_t (float * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_uint8_t (float * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_uint16_t (float * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_uint32_t (float * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_uint64_t (float * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t__Float16 (float * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_float (float * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int8_t_double (float * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_int8_t (float * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_int16_t (float * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_int32_t (float * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_int64_t (float * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_uint8_t (float * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_uint16_t (float * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_uint32_t (float * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_uint64_t (float * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t__Float16 (float * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_float (float * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int16_t_double (float * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_int8_t (float * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_int16_t (float * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_int32_t (float * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_int64_t (float * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_uint8_t (float * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_uint16_t (float * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_uint32_t (float * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_uint64_t (float * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t__Float16 (float * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_float (float * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int32_t_double (float * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_int8_t (float * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_int16_t (float * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_int32_t (float * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_int64_t (float * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_uint8_t (float * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_uint16_t (float * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_uint32_t (float * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_uint64_t (float * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t__Float16 (float * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_float (float * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_int64_t_double (float * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_int8_t (float * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_int16_t (float * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_int32_t (float * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_int64_t (float * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_uint8_t (float * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_uint16_t (float * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_uint32_t (float * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_uint64_t (float * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t__Float16 (float * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_float (float * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint8_t_double (float * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_int8_t (float * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_int16_t (float * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_int32_t (float * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_int64_t (float * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_uint8_t (float * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_uint16_t (float * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_uint32_t (float * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_uint64_t (float * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t__Float16 (float * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_float (float * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint16_t_double (float * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_int8_t (float * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_int16_t (float * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_int32_t (float * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_int64_t (float * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_uint8_t (float * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_uint16_t (float * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_uint32_t (float * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_uint64_t (float * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t__Float16 (float * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_float (float * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint32_t_double (float * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_int8_t (float * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_int16_t (float * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_int32_t (float * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_int64_t (float * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_uint8_t (float * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_uint16_t (float * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_uint32_t (float * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_uint64_t (float * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t__Float16 (float * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_float (float * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_uint64_t_double (float * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_int8_t (float * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_int16_t (float * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_int32_t (float * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_int64_t (float * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_uint8_t (float * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_uint16_t (float * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_uint32_t (float * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_uint64_t (float * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16__Float16 (float * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_float (float * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float__Float16_double (float * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_int8_t (float * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_int16_t (float * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_int32_t (float * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_int64_t (float * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_uint8_t (float * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_uint16_t (float * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_uint32_t (float * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_uint64_t (float * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float__Float16 (float * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_float (float * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_float_double (float * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_int8_t (float * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_int16_t (float * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_int32_t (float * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_int64_t (float * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_uint8_t (float * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_uint16_t (float * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_uint32_t (float * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_uint64_t (float * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double__Float16 (float * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_float (float * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_float_double_double (float * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_int8_t (double * restrict a, int8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_int16_t (double * restrict a, int8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_int32_t (double * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_int64_t (double * restrict a, int8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_uint8_t (double * restrict a, int8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_uint16_t (double * restrict a, int8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_uint32_t (double * restrict a, int8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_uint64_t (double * restrict a, int8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t__Float16 (double * restrict a, int8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_float (double * restrict a, int8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int8_t_double (double * restrict a, int8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_int8_t (double * restrict a, int16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_int16_t (double * restrict a, int16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_int32_t (double * restrict a, int16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_int64_t (double * restrict a, int16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_uint8_t (double * restrict a, int16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_uint16_t (double * restrict a, int16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_uint32_t (double * restrict a, int16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_uint64_t (double * restrict a, int16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t__Float16 (double * restrict a, int16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_float (double * restrict a, int16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int16_t_double (double * restrict a, int16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_int8_t (double * restrict a, int32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_int16_t (double * restrict a, int32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_int32_t (double * restrict a, int32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_int64_t (double * restrict a, int32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_uint8_t (double * restrict a, int32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_uint16_t (double * restrict a, int32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_uint32_t (double * restrict a, int32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_uint64_t (double * restrict a, int32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t__Float16 (double * restrict a, int32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_float (double * restrict a, int32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int32_t_double (double * restrict a, int32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_int8_t (double * restrict a, int64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_int16_t (double * restrict a, int64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_int32_t (double * restrict a, int64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_int64_t (double * restrict a, int64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_uint8_t (double * restrict a, int64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_uint16_t (double * restrict a, int64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_uint32_t (double * restrict a, int64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_uint64_t (double * restrict a, int64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t__Float16 (double * restrict a, int64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_float (double * restrict a, int64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_int64_t_double (double * restrict a, int64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_int8_t (double * restrict a, uint8_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_int16_t (double * restrict a, uint8_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_int32_t (double * restrict a, uint8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_int64_t (double * restrict a, uint8_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_uint8_t (double * restrict a, uint8_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_uint16_t (double * restrict a, uint8_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_uint32_t (double * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_uint64_t (double * restrict a, uint8_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t__Float16 (double * restrict a, uint8_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_float (double * restrict a, uint8_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint8_t_double (double * restrict a, uint8_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_int8_t (double * restrict a, uint16_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_int16_t (double * restrict a, uint16_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_int32_t (double * restrict a, uint16_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_int64_t (double * restrict a, uint16_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_uint8_t (double * restrict a, uint16_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_uint16_t (double * restrict a, uint16_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_uint32_t (double * restrict a, uint16_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_uint64_t (double * restrict a, uint16_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t__Float16 (double * restrict a, uint16_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_float (double * restrict a, uint16_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint16_t_double (double * restrict a, uint16_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_int8_t (double * restrict a, uint32_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_int16_t (double * restrict a, uint32_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_int32_t (double * restrict a, uint32_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_int64_t (double * restrict a, uint32_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_uint8_t (double * restrict a, uint32_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_uint16_t (double * restrict a, uint32_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_uint32_t (double * restrict a, uint32_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_uint64_t (double * restrict a, uint32_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t__Float16 (double * restrict a, uint32_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_float (double * restrict a, uint32_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint32_t_double (double * restrict a, uint32_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_int8_t (double * restrict a, uint64_t * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_int16_t (double * restrict a, uint64_t * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_int32_t (double * restrict a, uint64_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_int64_t (double * restrict a, uint64_t * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_uint8_t (double * restrict a, uint64_t * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_uint16_t (double * restrict a, uint64_t * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_uint32_t (double * restrict a, uint64_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_uint64_t (double * restrict a, uint64_t * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t__Float16 (double * restrict a, uint64_t * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_float (double * restrict a, uint64_t * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_uint64_t_double (double * restrict a, uint64_t * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_int8_t (double * restrict a, _Float16 * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_int16_t (double * restrict a, _Float16 * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_int32_t (double * restrict a, _Float16 * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_int64_t (double * restrict a, _Float16 * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_uint8_t (double * restrict a, _Float16 * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_uint16_t (double * restrict a, _Float16 * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_uint32_t (double * restrict a, _Float16 * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_uint64_t (double * restrict a, _Float16 * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16__Float16 (double * restrict a, _Float16 * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_float (double * restrict a, _Float16 * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double__Float16_double (double * restrict a, _Float16 * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_int8_t (double * restrict a, float * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_int16_t (double * restrict a, float * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_int32_t (double * restrict a, float * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_int64_t (double * restrict a, float * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_uint8_t (double * restrict a, float * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_uint16_t (double * restrict a, float * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_uint32_t (double * restrict a, float * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_uint64_t (double * restrict a, float * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float__Float16 (double * restrict a, float * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_float (double * restrict a, float * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_float_double (double * restrict a, float * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_int8_t (double * restrict a, double * restrict b, int8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int8_t)a[i] + (int8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_int16_t (double * restrict a, double * restrict b, int16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int16_t)a[i] + (int16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_int32_t (double * restrict a, double * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_int64_t (double * restrict a, double * restrict b, int64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_uint8_t (double * restrict a, double * restrict b, uint8_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint8_t)a[i] + (uint8_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_uint16_t (double * restrict a, double * restrict b, uint16_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint16_t)a[i] + (uint16_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_uint32_t (double * restrict a, double * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (uint32_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_uint64_t (double * restrict a, double * restrict b, uint64_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double__Float16 (double * restrict a, double * restrict b, _Float16 * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (_Float16)a[i] + (_Float16)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_float (double * restrict a, double * restrict b, float * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (float)a[i] + (float)b[0];
}

void __attribute__ ((noinline, noclone))
scalar_mixed_double_double_double (double * restrict a, double * restrict b, double * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (double)a[i] + (double)b[0];
}
















