/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stddef.h>
#include <stdint.h>

/*
** double_mixed_int8_t_int64_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_plus (int8_t * restrict a, int8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] + (int64_t)b[i];
}

/*
** double_mixed_uint8_t_uint64_t_plus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwaddu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint64_t_plus (uint8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] + (uint64_t)b[i];
}

/*
** double_mixed_int8_t_int64_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_minus (int8_t * restrict a, int8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] - (int64_t)b[i];
}

/*
** double_mixed_uint8_t_uint64_t_minus:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwsubu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint64_t_minus (uint8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] - (uint64_t)b[i];
}

/*
** double_mixed_int8_t_int64_t_mult:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmul\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_mult (int8_t * restrict a, int8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

/*
** double_mixed_uint8_t_uint64_t_mult:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_uint8_t_uint64_t_mult (uint8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}

/*
** double_mixed_int8_t_int64_t_multsu:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulsu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_multsu (int8_t * restrict a, uint8_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

/*
** double_mixed_int8_t_int64_t_multsu2:
**  ...
**	vsetvli\s+(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*zero,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vzext\.vf4\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**	vwmulsu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void __attribute__ ((noinline, noclone))
double_mixed_int8_t_int64_t_multsu2 (int8_t * restrict a, uint8_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}