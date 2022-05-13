/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <stdint.h>

/*
** double_mixed_int8_t_int64_t_plus:
**  ...
**	vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_plus (int64_t * restrict a, int8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

/*
** double_mixed_uint8_t_uint64_t_plus:
**  ...
**	vzext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint64_t_plus (uint64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

/*
** double_mixed_int8_t_int64_t_minus:
**  ...
**	vsext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_minus (int64_t * restrict a, int8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] - (int64_t)b[i];
}

/*
** double_mixed_uint8_t_uint64_t_minus:
**  ...
**	vzext\.vf8\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint64_t_minus (uint64_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] - (uint64_t)b[i];
}