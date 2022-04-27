/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vlseg2e16ff_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x2_t
test_vlseg2e16ff_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x3_t
test_vlseg3e16ff_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x4_t
test_vlseg4e16ff_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x5_t
test_vlseg5e16ff_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x6_t
test_vlseg6e16ff_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x7_t
test_vlseg7e16ff_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf4x8_t
test_vlseg8e16ff_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x2_t
test_vlseg2e16ff_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x3_t
test_vlseg3e16ff_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x4_t
test_vlseg4e16ff_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x5_t
test_vlseg5e16ff_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x6_t
test_vlseg6e16ff_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x7_t
test_vlseg7e16ff_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16mf2x8_t
test_vlseg8e16ff_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x2_t
test_vlseg2e16ff_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x3_t
test_vlseg3e16ff_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x4_t
test_vlseg4e16ff_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x5_t
test_vlseg5e16ff_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x6_t
test_vlseg6e16ff_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x7_t
test_vlseg7e16ff_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m1x8_t
test_vlseg8e16ff_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2x2_t
test_vlseg2e16ff_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2x3_t
test_vlseg3e16ff_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m2x4_t
test_vlseg4e16ff_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_f16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat16m4x2_t
test_vlseg2e16ff_v_f16m4x2_tu (vfloat16m4x2_t dest, float16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x2_t
test_vlseg2e32ff_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x3_t
test_vlseg3e32ff_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x4_t
test_vlseg4e32ff_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x5_t
test_vlseg5e32ff_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x6_t
test_vlseg6e32ff_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x7_t
test_vlseg7e32ff_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32mf2x8_t
test_vlseg8e32ff_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x2_t
test_vlseg2e32ff_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x3_t
test_vlseg3e32ff_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x4_t
test_vlseg4e32ff_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x5_t
test_vlseg5e32ff_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x6_t
test_vlseg6e32ff_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x7_t
test_vlseg7e32ff_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m1x8_t
test_vlseg8e32ff_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2x2_t
test_vlseg2e32ff_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2x3_t
test_vlseg3e32ff_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m2x4_t
test_vlseg4e32ff_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat32m4x2_t
test_vlseg2e32ff_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x2_t
test_vlseg2e64ff_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x3_t
test_vlseg3e64ff_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x4_t
test_vlseg4e64ff_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x5_t
test_vlseg5e64ff_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x6_t
test_vlseg6e64ff_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x7_t
test_vlseg7e64ff_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m1x8_t
test_vlseg8e64ff_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2x2_t
test_vlseg2e64ff_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2x3_t
test_vlseg3e64ff_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m2x4_t
test_vlseg4e64ff_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vfloat64m4x2_t
test_vlseg2e64ff_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8mf8x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x2_t
test_vlseg2e8ff_v_i8mf8x2_tu (vint8mf8x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_i8mf8x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x3_t
test_vlseg3e8ff_v_i8mf8x3_tu (vint8mf8x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_i8mf8x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x4_t
test_vlseg4e8ff_v_i8mf8x4_tu (vint8mf8x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_i8mf8x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x5_t
test_vlseg5e8ff_v_i8mf8x5_tu (vint8mf8x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_i8mf8x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x6_t
test_vlseg6e8ff_v_i8mf8x6_tu (vint8mf8x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_i8mf8x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x7_t
test_vlseg7e8ff_v_i8mf8x7_tu (vint8mf8x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_i8mf8x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf8x8_t
test_vlseg8e8ff_v_i8mf8x8_tu (vint8mf8x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x2_t
test_vlseg2e8ff_v_i8mf4x2_tu (vint8mf4x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_i8mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x3_t
test_vlseg3e8ff_v_i8mf4x3_tu (vint8mf4x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_i8mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x4_t
test_vlseg4e8ff_v_i8mf4x4_tu (vint8mf4x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_i8mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x5_t
test_vlseg5e8ff_v_i8mf4x5_tu (vint8mf4x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_i8mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x6_t
test_vlseg6e8ff_v_i8mf4x6_tu (vint8mf4x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_i8mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x7_t
test_vlseg7e8ff_v_i8mf4x7_tu (vint8mf4x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_i8mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf4x8_t
test_vlseg8e8ff_v_i8mf4x8_tu (vint8mf4x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x2_t
test_vlseg2e8ff_v_i8mf2x2_tu (vint8mf2x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_i8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x3_t
test_vlseg3e8ff_v_i8mf2x3_tu (vint8mf2x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_i8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x4_t
test_vlseg4e8ff_v_i8mf2x4_tu (vint8mf2x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_i8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x5_t
test_vlseg5e8ff_v_i8mf2x5_tu (vint8mf2x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_i8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x6_t
test_vlseg6e8ff_v_i8mf2x6_tu (vint8mf2x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_i8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x7_t
test_vlseg7e8ff_v_i8mf2x7_tu (vint8mf2x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_i8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8mf2x8_t
test_vlseg8e8ff_v_i8mf2x8_tu (vint8mf2x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x2_t
test_vlseg2e8ff_v_i8m1x2_tu (vint8m1x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_i8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x3_t
test_vlseg3e8ff_v_i8m1x3_tu (vint8m1x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_i8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x4_t
test_vlseg4e8ff_v_i8m1x4_tu (vint8m1x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_i8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x5_t
test_vlseg5e8ff_v_i8m1x5_tu (vint8m1x5_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_i8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x6_t
test_vlseg6e8ff_v_i8m1x6_tu (vint8m1x6_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_i8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x7_t
test_vlseg7e8ff_v_i8m1x7_tu (vint8m1x7_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_i8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m1x8_t
test_vlseg8e8ff_v_i8m1x8_tu (vint8m1x8_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2x2_t
test_vlseg2e8ff_v_i8m2x2_tu (vint8m2x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_i8m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2x3_t
test_vlseg3e8ff_v_i8m2x3_tu (vint8m2x3_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_i8m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m2x4_t
test_vlseg4e8ff_v_i8m2x4_tu (vint8m2x4_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_i8m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint8m4x2_t
test_vlseg2e8ff_v_i8m4x2_tu (vint8m4x2_t dest, int8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x2_t
test_vlseg2e16ff_v_i16mf4x2_tu (vint16mf4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x3_t
test_vlseg3e16ff_v_i16mf4x3_tu (vint16mf4x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x4_t
test_vlseg4e16ff_v_i16mf4x4_tu (vint16mf4x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x5_t
test_vlseg5e16ff_v_i16mf4x5_tu (vint16mf4x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x6_t
test_vlseg6e16ff_v_i16mf4x6_tu (vint16mf4x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x7_t
test_vlseg7e16ff_v_i16mf4x7_tu (vint16mf4x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf4x8_t
test_vlseg8e16ff_v_i16mf4x8_tu (vint16mf4x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x2_t
test_vlseg2e16ff_v_i16mf2x2_tu (vint16mf2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x3_t
test_vlseg3e16ff_v_i16mf2x3_tu (vint16mf2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x4_t
test_vlseg4e16ff_v_i16mf2x4_tu (vint16mf2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x5_t
test_vlseg5e16ff_v_i16mf2x5_tu (vint16mf2x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x6_t
test_vlseg6e16ff_v_i16mf2x6_tu (vint16mf2x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x7_t
test_vlseg7e16ff_v_i16mf2x7_tu (vint16mf2x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16mf2x8_t
test_vlseg8e16ff_v_i16mf2x8_tu (vint16mf2x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x2_t
test_vlseg2e16ff_v_i16m1x2_tu (vint16m1x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x3_t
test_vlseg3e16ff_v_i16m1x3_tu (vint16m1x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x4_t
test_vlseg4e16ff_v_i16m1x4_tu (vint16m1x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_i16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x5_t
test_vlseg5e16ff_v_i16m1x5_tu (vint16m1x5_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_i16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x6_t
test_vlseg6e16ff_v_i16m1x6_tu (vint16m1x6_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_i16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x7_t
test_vlseg7e16ff_v_i16m1x7_tu (vint16m1x7_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_i16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m1x8_t
test_vlseg8e16ff_v_i16m1x8_tu (vint16m1x8_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2x2_t
test_vlseg2e16ff_v_i16m2x2_tu (vint16m2x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_i16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2x3_t
test_vlseg3e16ff_v_i16m2x3_tu (vint16m2x3_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_i16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m2x4_t
test_vlseg4e16ff_v_i16m2x4_tu (vint16m2x4_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_i16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint16m4x2_t
test_vlseg2e16ff_v_i16m4x2_tu (vint16m4x2_t dest, int16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x2_t
test_vlseg2e32ff_v_i32mf2x2_tu (vint32mf2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x3_t
test_vlseg3e32ff_v_i32mf2x3_tu (vint32mf2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x4_t
test_vlseg4e32ff_v_i32mf2x4_tu (vint32mf2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x5_t
test_vlseg5e32ff_v_i32mf2x5_tu (vint32mf2x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x6_t
test_vlseg6e32ff_v_i32mf2x6_tu (vint32mf2x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x7_t
test_vlseg7e32ff_v_i32mf2x7_tu (vint32mf2x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32mf2x8_t
test_vlseg8e32ff_v_i32mf2x8_tu (vint32mf2x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x2_t
test_vlseg2e32ff_v_i32m1x2_tu (vint32m1x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x3_t
test_vlseg3e32ff_v_i32m1x3_tu (vint32m1x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x4_t
test_vlseg4e32ff_v_i32m1x4_tu (vint32m1x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e32ff_v_i32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x5_t
test_vlseg5e32ff_v_i32m1x5_tu (vint32m1x5_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e32ff_v_i32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x6_t
test_vlseg6e32ff_v_i32m1x6_tu (vint32m1x6_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e32ff_v_i32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x7_t
test_vlseg7e32ff_v_i32m1x7_tu (vint32m1x7_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e32ff_v_i32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e32ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m1x8_t
test_vlseg8e32ff_v_i32m1x8_tu (vint32m1x8_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2x2_t
test_vlseg2e32ff_v_i32m2x2_tu (vint32m2x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e32ff_v_i32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2x3_t
test_vlseg3e32ff_v_i32m2x3_tu (vint32m2x3_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e32ff_v_i32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e32ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m2x4_t
test_vlseg4e32ff_v_i32m2x4_tu (vint32m2x4_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e32ff_v_i32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e32ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint32m4x2_t
test_vlseg2e32ff_v_i32m4x2_tu (vint32m4x2_t dest, int32_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e32ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x2_t
test_vlseg2e64ff_v_i64m1x2_tu (vint64m1x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x3_t
test_vlseg3e64ff_v_i64m1x3_tu (vint64m1x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x4_t
test_vlseg4e64ff_v_i64m1x4_tu (vint64m1x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e64ff_v_i64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x5_t
test_vlseg5e64ff_v_i64m1x5_tu (vint64m1x5_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e64ff_v_i64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x6_t
test_vlseg6e64ff_v_i64m1x6_tu (vint64m1x6_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e64ff_v_i64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x7_t
test_vlseg7e64ff_v_i64m1x7_tu (vint64m1x7_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e64ff_v_i64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e64ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m1x8_t
test_vlseg8e64ff_v_i64m1x8_tu (vint64m1x8_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2x2_t
test_vlseg2e64ff_v_i64m2x2_tu (vint64m2x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e64ff_v_i64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2x3_t
test_vlseg3e64ff_v_i64m2x3_tu (vint64m2x3_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e64ff_v_i64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e64ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m2x4_t
test_vlseg4e64ff_v_i64m2x4_tu (vint64m2x4_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e64ff_v_i64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e64ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vint64m4x2_t
test_vlseg2e64ff_v_i64m4x2_tu (vint64m4x2_t dest, int64_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e64ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf8x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x2_t
test_vlseg2e8ff_v_u8mf8x2_tu (vuint8mf8x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf8x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x3_t
test_vlseg3e8ff_v_u8mf8x3_tu (vuint8mf8x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf8x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x4_t
test_vlseg4e8ff_v_u8mf8x4_tu (vuint8mf8x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf8x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x5_t
test_vlseg5e8ff_v_u8mf8x5_tu (vuint8mf8x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf8x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x6_t
test_vlseg6e8ff_v_u8mf8x6_tu (vuint8mf8x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf8x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x7_t
test_vlseg7e8ff_v_u8mf8x7_tu (vuint8mf8x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf8x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf8x8_t
test_vlseg8e8ff_v_u8mf8x8_tu (vuint8mf8x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x2_t
test_vlseg2e8ff_v_u8mf4x2_tu (vuint8mf4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x3_t
test_vlseg3e8ff_v_u8mf4x3_tu (vuint8mf4x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x4_t
test_vlseg4e8ff_v_u8mf4x4_tu (vuint8mf4x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x5_t
test_vlseg5e8ff_v_u8mf4x5_tu (vuint8mf4x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x6_t
test_vlseg6e8ff_v_u8mf4x6_tu (vuint8mf4x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x7_t
test_vlseg7e8ff_v_u8mf4x7_tu (vuint8mf4x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf4x8_t
test_vlseg8e8ff_v_u8mf4x8_tu (vuint8mf4x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x2_t
test_vlseg2e8ff_v_u8mf2x2_tu (vuint8mf2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x3_t
test_vlseg3e8ff_v_u8mf2x3_tu (vuint8mf2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x4_t
test_vlseg4e8ff_v_u8mf2x4_tu (vuint8mf2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x5_t
test_vlseg5e8ff_v_u8mf2x5_tu (vuint8mf2x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x6_t
test_vlseg6e8ff_v_u8mf2x6_tu (vuint8mf2x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x7_t
test_vlseg7e8ff_v_u8mf2x7_tu (vuint8mf2x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8mf2x8_t
test_vlseg8e8ff_v_u8mf2x8_tu (vuint8mf2x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x2_t
test_vlseg2e8ff_v_u8m1x2_tu (vuint8m1x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x3_t
test_vlseg3e8ff_v_u8m1x3_tu (vuint8m1x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x4_t
test_vlseg4e8ff_v_u8m1x4_tu (vuint8m1x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e8ff_v_u8m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg5e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x5_t
test_vlseg5e8ff_v_u8m1x5_tu (vuint8m1x5_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e8ff_v_u8m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg6e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x6_t
test_vlseg6e8ff_v_u8m1x6_tu (vuint8m1x6_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e8ff_v_u8m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg7e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x7_t
test_vlseg7e8ff_v_u8m1x7_tu (vuint8m1x7_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e8ff_v_u8m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vlseg8e8ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m1x8_t
test_vlseg8e8ff_v_u8m1x8_tu (vuint8m1x8_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2x2_t
test_vlseg2e8ff_v_u8m2x2_tu (vuint8m2x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e8ff_v_u8m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg3e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2x3_t
test_vlseg3e8ff_v_u8m2x3_tu (vuint8m2x3_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e8ff_v_u8m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vlseg4e8ff\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m2x4_t
test_vlseg4e8ff_v_u8m2x4_tu (vuint8m2x4_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e8ff_v_u8m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vlseg2e8ff\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint8m4x2_t
test_vlseg2e8ff_v_u8m4x2_tu (vuint8m4x2_t dest, uint8_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e8ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x2_t
test_vlseg2e16ff_v_u16mf4x2_tu (vuint16mf4x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x3_t
test_vlseg3e16ff_v_u16mf4x3_tu (vuint16mf4x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x4_t
test_vlseg4e16ff_v_u16mf4x4_tu (vuint16mf4x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg5e16ff_v_u16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg5e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x5_t
test_vlseg5e16ff_v_u16mf4x5_tu (vuint16mf4x5_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg5e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg6e16ff_v_u16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg6e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x6_t
test_vlseg6e16ff_v_u16mf4x6_tu (vuint16mf4x6_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg6e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg7e16ff_v_u16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg7e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x7_t
test_vlseg7e16ff_v_u16mf4x7_tu (vuint16mf4x7_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg7e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg8e16ff_v_u16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vlseg8e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf4x8_t
test_vlseg8e16ff_v_u16mf4x8_tu (vuint16mf4x8_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg8e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg2e16ff_v_u16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg2e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x2_t
test_vlseg2e16ff_v_u16mf2x2_tu (vuint16mf2x2_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg2e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg3e16ff_v_u16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg3e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x3_t
test_vlseg3e16ff_v_u16mf2x3_tu (vuint16mf2x3_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg3e16ff_tu (dest, base, new_vl, vl);
}


/*
** test_vlseg4e16ff_v_u16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vlseg4e16ff\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
extern "C" vuint16mf2x4_t
test_vlseg4e16ff_v_u16mf2x4_tu (vuint16mf2x4_t dest, uint16_t *base, size_t *new_vl, size_t vl)
{
  return vlseg4e16ff_tu (dest, base, new_vl, vl);
}



