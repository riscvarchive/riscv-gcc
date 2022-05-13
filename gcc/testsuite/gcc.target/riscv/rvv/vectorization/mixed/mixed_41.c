/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <stdint.h>

/*
** double_mixed_int8_t_int32_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_plus (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] + (int32_t)b[i];
}

/*
** double_mixed_uint8_t_uint32_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint32_t_plus (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] + (int32_t)b[i];
}

/*
** double_mixed_int8_t_int32_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int32_t_minus (int32_t * restrict a, int8_t * restrict b, int32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (int32_t)a[i] - (int32_t)b[i];
}

/*
** double_mixed_uint8_t_uint32_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint32_t_minus (uint32_t * restrict a, uint8_t * restrict b, uint32_t * restrict c, size_t m)
{
  for (size_t i = 0; i < m; i++)
    c[i] = (uint32_t)a[i] - (int32_t)b[i];
}