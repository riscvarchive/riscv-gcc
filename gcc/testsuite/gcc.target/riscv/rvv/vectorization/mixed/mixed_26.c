/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <stdint.h>

/*
** double_mixed_int8_t_int32_t_plus:
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_plus (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

/*
** double_mixed_uint8_t_uint32_t_plus:
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint32_t_plus (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] + (int32_t)b[i];
}

/*
** double_mixed_int8_t_int32_t_minus:
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_minus (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] - (int32_t)b[i];
}

/*
** double_mixed_uint8_t_uint32_t_minus:
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint32_t_minus (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] - (int32_t)b[i];
}