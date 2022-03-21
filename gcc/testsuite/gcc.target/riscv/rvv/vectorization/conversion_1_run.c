/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */


#include "conversion_1.c"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>


#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_int16_t_golden (int8_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_int32_t_golden (int8_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_int64_t_golden (int8_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint16_t_golden (int8_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint32_t_golden (int8_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_uint64_t_golden (int8_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to__Float16_golden (int8_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_float_golden (int8_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int8_t_to_double_golden (int8_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_int8_t_golden (int16_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_int32_t_golden (int16_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_int64_t_golden (int16_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint8_t_golden (int16_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint32_t_golden (int16_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_uint64_t_golden (int16_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to__Float16_golden (int16_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_float_golden (int16_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int16_t_to_double_golden (int16_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_int8_t_golden (int32_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_int16_t_golden (int32_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_int64_t_golden (int32_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint8_t_golden (int32_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint16_t_golden (int32_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_uint64_t_golden (int32_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to__Float16_golden (int32_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_float_golden (int32_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int32_t_to_double_golden (int32_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_int8_t_golden (int64_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_int16_t_golden (int64_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_int32_t_golden (int64_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint8_t_golden (int64_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint16_t_golden (int64_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_uint32_t_golden (int64_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to__Float16_golden (int64_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_float_golden (int64_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_int64_t_to_double_golden (int64_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int16_t_golden (uint8_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int32_t_golden (uint8_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_int64_t_golden (uint8_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint16_t_golden (uint8_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint32_t_golden (uint8_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_uint64_t_golden (uint8_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to__Float16_golden (uint8_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_float_golden (uint8_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint8_t_to_double_golden (uint8_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int8_t_golden (uint16_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int32_t_golden (uint16_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_int64_t_golden (uint16_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint8_t_golden (uint16_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint32_t_golden (uint16_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_uint64_t_golden (uint16_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to__Float16_golden (uint16_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_float_golden (uint16_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint16_t_to_double_golden (uint16_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int8_t_golden (uint32_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int16_t_golden (uint32_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_int64_t_golden (uint32_t * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint8_t_golden (uint32_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint16_t_golden (uint32_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_uint64_t_golden (uint32_t * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to__Float16_golden (uint32_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_float_golden (uint32_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint32_t_to_double_golden (uint32_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int8_t_golden (uint64_t * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int16_t_golden (uint64_t * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_int32_t_golden (uint64_t * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint8_t_golden (uint64_t * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint16_t_golden (uint64_t * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_uint32_t_golden (uint64_t * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to__Float16_golden (uint64_t * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_float_golden (uint64_t * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_uint64_t_to_double_golden (uint64_t * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_int8_t_golden (_Float16 * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_int16_t_golden (_Float16 * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_int32_t_golden (_Float16 * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_int64_t_golden (_Float16 * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_uint8_t_golden (_Float16 * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_uint16_t_golden (_Float16 * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_uint32_t_golden (_Float16 * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_uint64_t_golden (_Float16 * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_float_golden (_Float16 * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert__Float16_to_double_golden (_Float16 * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_int8_t_golden (float * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_int16_t_golden (float * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_int32_t_golden (float * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_int64_t_golden (float * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_uint8_t_golden (float * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_uint16_t_golden (float * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_uint32_t_golden (float * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_uint64_t_golden (float * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to__Float16_golden (float * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_float_to_double_golden (float * restrict x, double * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_int8_t_golden (double * restrict x, int8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_int16_t_golden (double * restrict x, int16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_int32_t_golden (double * restrict x, int32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_int64_t_golden (double * restrict x, int64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_uint8_t_golden (double * restrict x, uint8_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_uint16_t_golden (double * restrict x, uint16_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_uint32_t_golden (double * restrict x, uint32_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_uint64_t_golden (double * restrict x, uint64_t * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to__Float16_golden (double * restrict x, _Float16 * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

#pragma GCC push_options
#pragma GCC optimize ("O0")
void __attribute__ ((noinline, noclone))
convert_double_to_float_golden (double * restrict x, float * restrict y, size_t m)
{
  for (size_t i = 0; i < m; ++i)
    y[i] = x[i];
}
#pragma GCC pop_options

int main (void)
{
  int8_t in_int8_t[4321];
  for(int i=0; i<4321; i++) {
    in_int8_t[i] = i & 127;
  }
  int8_t out_int8_t[4321];
  int8_t out_int8_t_golden[4321];
  int16_t in_int16_t[4321];
  for(int i=0; i<4321; i++) {
    in_int16_t[i] = i & 127;
  }
  int16_t out_int16_t[4321];
  int16_t out_int16_t_golden[4321];
  int32_t in_int32_t[4321];
  for(int i=0; i<4321; i++) {
    in_int32_t[i] = i & 127;
  }
  int32_t out_int32_t[4321];
  int32_t out_int32_t_golden[4321];
  int64_t in_int64_t[4321];
  for(int i=0; i<4321; i++) {
    in_int64_t[i] = i & 127;
  }
  int64_t out_int64_t[4321];
  int64_t out_int64_t_golden[4321];
  uint8_t in_uint8_t[4321];
  for(int i=0; i<4321; i++) {
    in_uint8_t[i] = i & 127;
  }
  uint8_t out_uint8_t[4321];
  uint8_t out_uint8_t_golden[4321];
  uint16_t in_uint16_t[4321];
  for(int i=0; i<4321; i++) {
    in_uint16_t[i] = i & 127;
  }
  uint16_t out_uint16_t[4321];
  uint16_t out_uint16_t_golden[4321];
  uint32_t in_uint32_t[4321];
  for(int i=0; i<4321; i++) {
    in_uint32_t[i] = i & 127;
  }
  uint32_t out_uint32_t[4321];
  uint32_t out_uint32_t_golden[4321];
  uint64_t in_uint64_t[4321];
  for(int i=0; i<4321; i++) {
    in_uint64_t[i] = i & 127;
  }
  uint64_t out_uint64_t[4321];
  uint64_t out_uint64_t_golden[4321];
  _Float16 in__Float16[4321];
  for(int i=0; i<4321; i++) {
    in__Float16[i] = 123.321;
  }
  _Float16 out__Float16[4321];
  _Float16 out__Float16_golden[4321];
  float in_float[4321];
  for(int i=0; i<4321; i++) {
    in_float[i] = 123.321 + i * 0.0001;
  }
  float out_float[4321];
  float out_float_golden[4321];
  double in_double[4321];
  for(int i=0; i<4321; i++) {
    in_double[i] = 123.321 + i * 0.0001;
  }
  double out_double[4321];
  double out_double_golden[4321];

  convert_int8_t_to_int16_t (in_int8_t, out_int16_t, 4321);
  convert_int8_t_to_int16_t_golden (in_int8_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_int8_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_int32_t (in_int8_t, out_int32_t, 4321);
  convert_int8_t_to_int32_t_golden (in_int8_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_int8_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_int64_t (in_int8_t, out_int64_t, 4321);
  convert_int8_t_to_int64_t_golden (in_int8_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_int8_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_uint16_t (in_int8_t, out_uint16_t, 4321);
  convert_int8_t_to_uint16_t_golden (in_int8_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_int8_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_uint32_t (in_int8_t, out_uint32_t, 4321);
  convert_int8_t_to_uint32_t_golden (in_int8_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_int8_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_uint64_t (in_int8_t, out_uint64_t, 4321);
  convert_int8_t_to_uint64_t_golden (in_int8_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_int8_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to__Float16 (in_int8_t, out__Float16, 4321);
  convert_int8_t_to__Float16_golden (in_int8_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_int8_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_float (in_int8_t, out_float, 4321);
  convert_int8_t_to_float_golden (in_int8_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_int8_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_int8_t_to_double (in_int8_t, out_double, 4321);
  convert_int8_t_to_double_golden (in_int8_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_int8_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_int8_t (in_int16_t, out_int8_t, 4321);
  convert_int16_t_to_int8_t_golden (in_int16_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_int16_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_int32_t (in_int16_t, out_int32_t, 4321);
  convert_int16_t_to_int32_t_golden (in_int16_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_int16_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_int64_t (in_int16_t, out_int64_t, 4321);
  convert_int16_t_to_int64_t_golden (in_int16_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_int16_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_uint8_t (in_int16_t, out_uint8_t, 4321);
  convert_int16_t_to_uint8_t_golden (in_int16_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_int16_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_uint32_t (in_int16_t, out_uint32_t, 4321);
  convert_int16_t_to_uint32_t_golden (in_int16_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_int16_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_uint64_t (in_int16_t, out_uint64_t, 4321);
  convert_int16_t_to_uint64_t_golden (in_int16_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_int16_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to__Float16 (in_int16_t, out__Float16, 4321);
  convert_int16_t_to__Float16_golden (in_int16_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_int16_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_float (in_int16_t, out_float, 4321);
  convert_int16_t_to_float_golden (in_int16_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_int16_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_int16_t_to_double (in_int16_t, out_double, 4321);
  convert_int16_t_to_double_golden (in_int16_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_int16_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_int8_t (in_int32_t, out_int8_t, 4321);
  convert_int32_t_to_int8_t_golden (in_int32_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_int32_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_int16_t (in_int32_t, out_int16_t, 4321);
  convert_int32_t_to_int16_t_golden (in_int32_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_int32_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_int64_t (in_int32_t, out_int64_t, 4321);
  convert_int32_t_to_int64_t_golden (in_int32_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_int32_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_uint8_t (in_int32_t, out_uint8_t, 4321);
  convert_int32_t_to_uint8_t_golden (in_int32_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_int32_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_uint16_t (in_int32_t, out_uint16_t, 4321);
  convert_int32_t_to_uint16_t_golden (in_int32_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_int32_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_uint64_t (in_int32_t, out_uint64_t, 4321);
  convert_int32_t_to_uint64_t_golden (in_int32_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_int32_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to__Float16 (in_int32_t, out__Float16, 4321);
  convert_int32_t_to__Float16_golden (in_int32_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_int32_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_float (in_int32_t, out_float, 4321);
  convert_int32_t_to_float_golden (in_int32_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_int32_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_int32_t_to_double (in_int32_t, out_double, 4321);
  convert_int32_t_to_double_golden (in_int32_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_int32_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_int8_t (in_int64_t, out_int8_t, 4321);
  convert_int64_t_to_int8_t_golden (in_int64_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_int64_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_int16_t (in_int64_t, out_int16_t, 4321);
  convert_int64_t_to_int16_t_golden (in_int64_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_int64_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_int32_t (in_int64_t, out_int32_t, 4321);
  convert_int64_t_to_int32_t_golden (in_int64_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_int64_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_uint8_t (in_int64_t, out_uint8_t, 4321);
  convert_int64_t_to_uint8_t_golden (in_int64_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_int64_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_uint16_t (in_int64_t, out_uint16_t, 4321);
  convert_int64_t_to_uint16_t_golden (in_int64_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_int64_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_uint32_t (in_int64_t, out_uint32_t, 4321);
  convert_int64_t_to_uint32_t_golden (in_int64_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_int64_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to__Float16 (in_int64_t, out__Float16, 4321);
  convert_int64_t_to__Float16_golden (in_int64_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_int64_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_float (in_int64_t, out_float, 4321);
  convert_int64_t_to_float_golden (in_int64_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_int64_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_int64_t_to_double (in_int64_t, out_double, 4321);
  convert_int64_t_to_double_golden (in_int64_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_int64_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_int16_t (in_uint8_t, out_int16_t, 4321);
  convert_uint8_t_to_int16_t_golden (in_uint8_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_uint8_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_int32_t (in_uint8_t, out_int32_t, 4321);
  convert_uint8_t_to_int32_t_golden (in_uint8_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_uint8_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_int64_t (in_uint8_t, out_int64_t, 4321);
  convert_uint8_t_to_int64_t_golden (in_uint8_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_uint8_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_uint16_t (in_uint8_t, out_uint16_t, 4321);
  convert_uint8_t_to_uint16_t_golden (in_uint8_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_uint8_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_uint32_t (in_uint8_t, out_uint32_t, 4321);
  convert_uint8_t_to_uint32_t_golden (in_uint8_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_uint8_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_uint64_t (in_uint8_t, out_uint64_t, 4321);
  convert_uint8_t_to_uint64_t_golden (in_uint8_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_uint8_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to__Float16 (in_uint8_t, out__Float16, 4321);
  convert_uint8_t_to__Float16_golden (in_uint8_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_uint8_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_float (in_uint8_t, out_float, 4321);
  convert_uint8_t_to_float_golden (in_uint8_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_uint8_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint8_t_to_double (in_uint8_t, out_double, 4321);
  convert_uint8_t_to_double_golden (in_uint8_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_uint8_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_int8_t (in_uint16_t, out_int8_t, 4321);
  convert_uint16_t_to_int8_t_golden (in_uint16_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_uint16_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_int32_t (in_uint16_t, out_int32_t, 4321);
  convert_uint16_t_to_int32_t_golden (in_uint16_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_uint16_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_int64_t (in_uint16_t, out_int64_t, 4321);
  convert_uint16_t_to_int64_t_golden (in_uint16_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_uint16_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_uint8_t (in_uint16_t, out_uint8_t, 4321);
  convert_uint16_t_to_uint8_t_golden (in_uint16_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_uint16_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_uint32_t (in_uint16_t, out_uint32_t, 4321);
  convert_uint16_t_to_uint32_t_golden (in_uint16_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_uint16_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_uint64_t (in_uint16_t, out_uint64_t, 4321);
  convert_uint16_t_to_uint64_t_golden (in_uint16_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_uint16_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to__Float16 (in_uint16_t, out__Float16, 4321);
  convert_uint16_t_to__Float16_golden (in_uint16_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_uint16_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_float (in_uint16_t, out_float, 4321);
  convert_uint16_t_to_float_golden (in_uint16_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_uint16_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint16_t_to_double (in_uint16_t, out_double, 4321);
  convert_uint16_t_to_double_golden (in_uint16_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_uint16_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_int8_t (in_uint32_t, out_int8_t, 4321);
  convert_uint32_t_to_int8_t_golden (in_uint32_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_uint32_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_int16_t (in_uint32_t, out_int16_t, 4321);
  convert_uint32_t_to_int16_t_golden (in_uint32_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_uint32_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_int64_t (in_uint32_t, out_int64_t, 4321);
  convert_uint32_t_to_int64_t_golden (in_uint32_t, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_uint32_t_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_uint8_t (in_uint32_t, out_uint8_t, 4321);
  convert_uint32_t_to_uint8_t_golden (in_uint32_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_uint32_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_uint16_t (in_uint32_t, out_uint16_t, 4321);
  convert_uint32_t_to_uint16_t_golden (in_uint32_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_uint32_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_uint64_t (in_uint32_t, out_uint64_t, 4321);
  convert_uint32_t_to_uint64_t_golden (in_uint32_t, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_uint32_t_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to__Float16 (in_uint32_t, out__Float16, 4321);
  convert_uint32_t_to__Float16_golden (in_uint32_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_uint32_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_float (in_uint32_t, out_float, 4321);
  convert_uint32_t_to_float_golden (in_uint32_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_uint32_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint32_t_to_double (in_uint32_t, out_double, 4321);
  convert_uint32_t_to_double_golden (in_uint32_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_uint32_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_int8_t (in_uint64_t, out_int8_t, 4321);
  convert_uint64_t_to_int8_t_golden (in_uint64_t, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_uint64_t_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_int16_t (in_uint64_t, out_int16_t, 4321);
  convert_uint64_t_to_int16_t_golden (in_uint64_t, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_uint64_t_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_int32_t (in_uint64_t, out_int32_t, 4321);
  convert_uint64_t_to_int32_t_golden (in_uint64_t, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_uint64_t_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_uint8_t (in_uint64_t, out_uint8_t, 4321);
  convert_uint64_t_to_uint8_t_golden (in_uint64_t, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_uint64_t_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_uint16_t (in_uint64_t, out_uint16_t, 4321);
  convert_uint64_t_to_uint16_t_golden (in_uint64_t, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_uint64_t_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_uint32_t (in_uint64_t, out_uint32_t, 4321);
  convert_uint64_t_to_uint32_t_golden (in_uint64_t, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_uint64_t_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to__Float16 (in_uint64_t, out__Float16, 4321);
  convert_uint64_t_to__Float16_golden (in_uint64_t, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_uint64_t_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_float (in_uint64_t, out_float, 4321);
  convert_uint64_t_to_float_golden (in_uint64_t, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_uint64_t_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert_uint64_t_to_double (in_uint64_t, out_double, 4321);
  convert_uint64_t_to_double_golden (in_uint64_t, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_uint64_t_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_int8_t (in__Float16, out_int8_t, 4321);
  convert__Float16_to_int8_t_golden (in__Float16, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert__Float16_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_int16_t (in__Float16, out_int16_t, 4321);
  convert__Float16_to_int16_t_golden (in__Float16, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert__Float16_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_int32_t (in__Float16, out_int32_t, 4321);
  convert__Float16_to_int32_t_golden (in__Float16, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert__Float16_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_int64_t (in__Float16, out_int64_t, 4321);
  convert__Float16_to_int64_t_golden (in__Float16, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert__Float16_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_uint8_t (in__Float16, out_uint8_t, 4321);
  convert__Float16_to_uint8_t_golden (in__Float16, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert__Float16_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_uint16_t (in__Float16, out_uint16_t, 4321);
  convert__Float16_to_uint16_t_golden (in__Float16, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert__Float16_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_uint32_t (in__Float16, out_uint32_t, 4321);
  convert__Float16_to_uint32_t_golden (in__Float16, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert__Float16_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_uint64_t (in__Float16, out_uint64_t, 4321);
  convert__Float16_to_uint64_t_golden (in__Float16, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert__Float16_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_float (in__Float16, out_float, 4321);
  convert__Float16_to_float_golden (in__Float16, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert__Float16_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  convert__Float16_to_double (in__Float16, out_double, 4321);
  convert__Float16_to_double_golden (in__Float16, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert__Float16_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_int8_t (in_float, out_int8_t, 4321);
  convert_float_to_int8_t_golden (in_float, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_float_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_int16_t (in_float, out_int16_t, 4321);
  convert_float_to_int16_t_golden (in_float, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_float_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_int32_t (in_float, out_int32_t, 4321);
  convert_float_to_int32_t_golden (in_float, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_float_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_int64_t (in_float, out_int64_t, 4321);
  convert_float_to_int64_t_golden (in_float, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_float_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_uint8_t (in_float, out_uint8_t, 4321);
  convert_float_to_uint8_t_golden (in_float, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_float_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_uint16_t (in_float, out_uint16_t, 4321);
  convert_float_to_uint16_t_golden (in_float, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_float_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_uint32_t (in_float, out_uint32_t, 4321);
  convert_float_to_uint32_t_golden (in_float, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_float_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_uint64_t (in_float, out_uint64_t, 4321);
  convert_float_to_uint64_t_golden (in_float, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_float_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to__Float16 (in_float, out__Float16, 4321);
  convert_float_to__Float16_golden (in_float, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_float_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_float_to_double (in_float, out_double, 4321);
  convert_float_to_double_golden (in_float, out_double_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_double[i] != out_double_golden[i]){
      printf("convert_float_to_double:index=%d,result:%x,golden:%x\n",i,out_double[i],out_double_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_int8_t (in_double, out_int8_t, 4321);
  convert_double_to_int8_t_golden (in_double, out_int8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int8_t[i] != out_int8_t_golden[i]){
      printf("convert_double_to_int8_t:index=%d,result:%x,golden:%x\n",i,out_int8_t[i],out_int8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_int16_t (in_double, out_int16_t, 4321);
  convert_double_to_int16_t_golden (in_double, out_int16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int16_t[i] != out_int16_t_golden[i]){
      printf("convert_double_to_int16_t:index=%d,result:%x,golden:%x\n",i,out_int16_t[i],out_int16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_int32_t (in_double, out_int32_t, 4321);
  convert_double_to_int32_t_golden (in_double, out_int32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int32_t[i] != out_int32_t_golden[i]){
      printf("convert_double_to_int32_t:index=%d,result:%x,golden:%x\n",i,out_int32_t[i],out_int32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_int64_t (in_double, out_int64_t, 4321);
  convert_double_to_int64_t_golden (in_double, out_int64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_int64_t[i] != out_int64_t_golden[i]){
      printf("convert_double_to_int64_t:index=%d,result:%x,golden:%x\n",i,out_int64_t[i],out_int64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_uint8_t (in_double, out_uint8_t, 4321);
  convert_double_to_uint8_t_golden (in_double, out_uint8_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint8_t[i] != out_uint8_t_golden[i]){
      printf("convert_double_to_uint8_t:index=%d,result:%x,golden:%x\n",i,out_uint8_t[i],out_uint8_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_uint16_t (in_double, out_uint16_t, 4321);
  convert_double_to_uint16_t_golden (in_double, out_uint16_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint16_t[i] != out_uint16_t_golden[i]){
      printf("convert_double_to_uint16_t:index=%d,result:%x,golden:%x\n",i,out_uint16_t[i],out_uint16_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_uint32_t (in_double, out_uint32_t, 4321);
  convert_double_to_uint32_t_golden (in_double, out_uint32_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint32_t[i] != out_uint32_t_golden[i]){
      printf("convert_double_to_uint32_t:index=%d,result:%x,golden:%x\n",i,out_uint32_t[i],out_uint32_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_uint64_t (in_double, out_uint64_t, 4321);
  convert_double_to_uint64_t_golden (in_double, out_uint64_t_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_uint64_t[i] != out_uint64_t_golden[i]){
      printf("convert_double_to_uint64_t:index=%d,result:%x,golden:%x\n",i,out_uint64_t[i],out_uint64_t_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to__Float16 (in_double, out__Float16, 4321);
  convert_double_to__Float16_golden (in_double, out__Float16_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out__Float16[i] != out__Float16_golden[i]){
      printf("convert_double_to__Float16:index=%d,result:%x,golden:%x\n",i,out__Float16[i],out__Float16_golden[i]);
      __builtin_abort();
    }
  }
  convert_double_to_float (in_double, out_float, 4321);
  convert_double_to_float_golden (in_double, out_float_golden, 4321);
  for(int i=0; i<4321; i++) {
    if (out_float[i] != out_float_golden[i]){
      printf("convert_double_to_float:index=%d,result:%x,golden:%x\n",i,out_float[i],out_float_golden[i]);
      __builtin_abort();
    }
  }
  return 0;
}
