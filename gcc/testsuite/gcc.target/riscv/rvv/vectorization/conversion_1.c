/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */


#include <stddef.h>
#include <stdint.h>


void __attribute__ ((noinline, noclone))
convert_int8_t_to_int16_t (int8_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_int32_t (int8_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_int64_t (int8_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint16_t (int8_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint32_t (int8_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint64_t (int8_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to__Float16 (int8_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_float (int8_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int8_t_to_double (int8_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_int8_t (int16_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_int32_t (int16_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_int64_t (int16_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint8_t (int16_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint32_t (int16_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint64_t (int16_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to__Float16 (int16_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_float (int16_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int16_t_to_double (int16_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_int8_t (int32_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_int16_t (int32_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_int64_t (int32_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint8_t (int32_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint16_t (int32_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint64_t (int32_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to__Float16 (int32_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_float (int32_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int32_t_to_double (int32_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_int8_t (int64_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_int16_t (int64_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_int32_t (int64_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint8_t (int64_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint16_t (int64_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint32_t (int64_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to__Float16 (int64_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_float (int64_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_int64_t_to_double (int64_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int16_t (uint8_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int32_t (uint8_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int64_t (uint8_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint16_t (uint8_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint32_t (uint8_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint64_t (uint8_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to__Float16 (uint8_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_float (uint8_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint8_t_to_double (uint8_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int8_t (uint16_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int32_t (uint16_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int64_t (uint16_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint8_t (uint16_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint32_t (uint16_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint64_t (uint16_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to__Float16 (uint16_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_float (uint16_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint16_t_to_double (uint16_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int8_t (uint32_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int16_t (uint32_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int64_t (uint32_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint8_t (uint32_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint16_t (uint32_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint64_t (uint32_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to__Float16 (uint32_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_float (uint32_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint32_t_to_double (uint32_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int8_t (uint64_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int16_t (uint64_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int32_t (uint64_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint8_t (uint64_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint16_t (uint64_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint32_t (uint64_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to__Float16 (uint64_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_float (uint64_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_uint64_t_to_double (uint64_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_int8_t (_Float16 * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_int16_t (_Float16 * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_int32_t (_Float16 * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_int64_t (_Float16 * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_uint8_t (_Float16 * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_uint16_t (_Float16 * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_uint32_t (_Float16 * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_uint64_t (_Float16 * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_float (_Float16 * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert__Float16_to_double (_Float16 * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_int8_t (float * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_int16_t (float * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_int32_t (float * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_int64_t (float * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_uint8_t (float * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_uint16_t (float * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_uint32_t (float * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_uint64_t (float * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to__Float16 (float * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_float_to_double (float * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_int8_t (double * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_int16_t (double * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_int32_t (double * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_int64_t (double * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_uint8_t (double * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_uint16_t (double * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_uint32_t (double * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_uint64_t (double * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to__Float16 (double * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

void __attribute__ ((noinline, noclone))
convert_double_to_float (double * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}

/* { dg-final { scan-tree-dump-times ".WHILE_LEN" 102 "optimized" } } */
/* { dg-final { scan-assembler-not {vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7],\s*zero)} } } */
