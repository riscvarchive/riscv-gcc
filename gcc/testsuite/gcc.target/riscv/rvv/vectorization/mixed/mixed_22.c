/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <stdint.h>

/*
** double_mixed_int16_t_int64_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_plus (int16_t * restrict a, int16_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] + (int64_t)b;
}

/*
** double_mixed_uint16_t_uint64_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwaddu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint16_t_uint64_t_plus (uint16_t * restrict a, uint16_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b;
}

/*
** double_mixed_int16_t_int64_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwsub\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_minus (int16_t * restrict a, int16_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] - (int64_t)b;
}

/*
** double_mixed_uint16_t_uint64_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwsubu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint16_t_uint64_t_minus (uint16_t * restrict a, uint16_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] - (uint64_t)b;
}

/*
** double_mixed_int16_t_int64_t_mult:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmul\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_mult (int16_t * restrict a, int16_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

/*
** double_mixed_uint16_t_uint64_t_mult:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint16_t_uint64_t_mult (uint16_t * restrict a, uint16_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

/*
** double_mixed_int16_t_int64_t_multsu:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulsu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_multsu (int16_t * restrict a, uint16_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

/*
** double_mixed_int16_t_int64_t_multsu2:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsetvli\s+zero,zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf2\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulsu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int16_t_int64_t_multsu2 (int16_t * restrict a, uint16_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}