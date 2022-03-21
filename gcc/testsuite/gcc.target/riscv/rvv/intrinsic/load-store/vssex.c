/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vsse16_v_f16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4 (float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0, size_t vl)
{
  vsse16_v_f16mf4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0)
{
  vsse16_v_f16mf4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4_m (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0, size_t vl)
{
  vsse16_v_f16mf4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4_m_vl31 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0)
{
  vsse16_v_f16mf4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2 (float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0, size_t vl)
{
  vsse16_v_f16mf2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0)
{
  vsse16_v_f16mf2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2_m (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0, size_t vl)
{
  vsse16_v_f16mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2_m_vl31 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0)
{
  vsse16_v_f16mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m1 (float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0, size_t vl)
{
  vsse16_v_f16m1 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m1_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0)
{
  vsse16_v_f16m1 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m1_m (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0, size_t vl)
{
  vsse16_v_f16m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m1_m_vl31 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0)
{
  vsse16_v_f16m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m2 (float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0, size_t vl)
{
  vsse16_v_f16m2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m2_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0)
{
  vsse16_v_f16m2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m2_m (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0, size_t vl)
{
  vsse16_v_f16m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m2_m_vl31 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0)
{
  vsse16_v_f16m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m4 (float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0, size_t vl)
{
  vsse16_v_f16m4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m4_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0)
{
  vsse16_v_f16m4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m4_m (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0, size_t vl)
{
  vsse16_v_f16m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m4_m_vl31 (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0)
{
  vsse16_v_f16m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m8 (float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0, size_t vl)
{
  vsse16_v_f16m8 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m8_vl31 (float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0)
{
  vsse16_v_f16m8 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m8_m (vbool2_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0, size_t vl)
{
  vsse16_v_f16m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_f16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m8_m_vl31 (vbool2_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0)
{
  vsse16_v_f16m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2 (float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0, size_t vl)
{
  vsse32_v_f32mf2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0)
{
  vsse32_v_f32mf2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2_m (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0, size_t vl)
{
  vsse32_v_f32mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2_m_vl31 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0)
{
  vsse32_v_f32mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m1 (float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0, size_t vl)
{
  vsse32_v_f32m1 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m1_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0)
{
  vsse32_v_f32m1 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m1_m (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0, size_t vl)
{
  vsse32_v_f32m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m1_m_vl31 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0)
{
  vsse32_v_f32m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m2 (float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0, size_t vl)
{
  vsse32_v_f32m2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m2_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0)
{
  vsse32_v_f32m2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m2_m (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0, size_t vl)
{
  vsse32_v_f32m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m2_m_vl31 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0)
{
  vsse32_v_f32m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m4 (float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0, size_t vl)
{
  vsse32_v_f32m4 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m4_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0)
{
  vsse32_v_f32m4 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m4_m (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0, size_t vl)
{
  vsse32_v_f32m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m4_m_vl31 (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0)
{
  vsse32_v_f32m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m8 (float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0, size_t vl)
{
  vsse32_v_f32m8 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m8_vl31 (float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0)
{
  vsse32_v_f32m8 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m8_m (vbool4_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0, size_t vl)
{
  vsse32_v_f32m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m8_m_vl31 (vbool4_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0)
{
  vsse32_v_f32m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m1 (float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, size_t vl)
{
  vsse64_v_f64m1 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m1_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0)
{
  vsse64_v_f64m1 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m1_m (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0, size_t vl)
{
  vsse64_v_f64m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m1_m_vl31 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0)
{
  vsse64_v_f64m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m2 (float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0, size_t vl)
{
  vsse64_v_f64m2 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m2_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0)
{
  vsse64_v_f64m2 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m2_m (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0, size_t vl)
{
  vsse64_v_f64m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m2_m_vl31 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0)
{
  vsse64_v_f64m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m4 (float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0, size_t vl)
{
  vsse64_v_f64m4 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m4_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0)
{
  vsse64_v_f64m4 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m4_m (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0, size_t vl)
{
  vsse64_v_f64m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m4_m_vl31 (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0)
{
  vsse64_v_f64m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m8 (float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0, size_t vl)
{
  vsse64_v_f64m8 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m8_vl31 (float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0)
{
  vsse64_v_f64m8 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m8_m (vbool8_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0, size_t vl)
{
  vsse64_v_f64m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m8_m_vl31 (vbool8_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0)
{
  vsse64_v_f64m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8 (int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, size_t vl)
{
  vsse8_v_i8mf8 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8_m (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0, size_t vl)
{
  vsse8_v_i8mf8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8_m_vl31 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4 (int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, size_t vl)
{
  vsse8_v_i8mf4 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4_m (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0, size_t vl)
{
  vsse8_v_i8mf4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4_m_vl31 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2 (int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, size_t vl)
{
  vsse8_v_i8mf2 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2_vl31 (int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2_m (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0, size_t vl)
{
  vsse8_v_i8mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2_m_vl31 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m1 (int8_t *base, ptrdiff_t bstride, vint8m1_t v0, size_t vl)
{
  vsse8_v_i8m1 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m1_vl31 (int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m1_m (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0, size_t vl)
{
  vsse8_v_i8m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m1_m_vl31 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m2 (int8_t *base, ptrdiff_t bstride, vint8m2_t v0, size_t vl)
{
  vsse8_v_i8m2 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m2_vl31 (int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m2_m (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0, size_t vl)
{
  vsse8_v_i8m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m2_m_vl31 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m4 (int8_t *base, ptrdiff_t bstride, vint8m4_t v0, size_t vl)
{
  vsse8_v_i8m4 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m4_vl31 (int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m4_m (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t v0, size_t vl)
{
  vsse8_v_i8m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m4_m_vl31 (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m8 (int8_t *base, ptrdiff_t bstride, vint8m8_t v0, size_t vl)
{
  vsse8_v_i8m8 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m8_vl31 (int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_i8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m8_m (vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t v0, size_t vl)
{
  vsse8_v_i8m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_i8m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m8_m_vl31 (vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4 (int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, size_t vl)
{
  vsse16_v_i16mf4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4_m (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0, size_t vl)
{
  vsse16_v_i16mf4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4_m_vl31 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2 (int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, size_t vl)
{
  vsse16_v_i16mf2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2_vl31 (int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2_m (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0, size_t vl)
{
  vsse16_v_i16mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2_m_vl31 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m1 (int16_t *base, ptrdiff_t bstride, vint16m1_t v0, size_t vl)
{
  vsse16_v_i16m1 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m1_vl31 (int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m1_m (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0, size_t vl)
{
  vsse16_v_i16m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m1_m_vl31 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m2 (int16_t *base, ptrdiff_t bstride, vint16m2_t v0, size_t vl)
{
  vsse16_v_i16m2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m2_vl31 (int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m2_m (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0, size_t vl)
{
  vsse16_v_i16m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m2_m_vl31 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m4 (int16_t *base, ptrdiff_t bstride, vint16m4_t v0, size_t vl)
{
  vsse16_v_i16m4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m4_vl31 (int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m4_m (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0, size_t vl)
{
  vsse16_v_i16m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m4_m_vl31 (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m8 (int16_t *base, ptrdiff_t bstride, vint16m8_t v0, size_t vl)
{
  vsse16_v_i16m8 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m8_vl31 (int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_i16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m8_m (vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t v0, size_t vl)
{
  vsse16_v_i16m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_i16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m8_m_vl31 (vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2 (int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, size_t vl)
{
  vsse32_v_i32mf2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2_vl31 (int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2_m (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0, size_t vl)
{
  vsse32_v_i32mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2_m_vl31 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m1 (int32_t *base, ptrdiff_t bstride, vint32m1_t v0, size_t vl)
{
  vsse32_v_i32m1 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m1_vl31 (int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m1_m (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0, size_t vl)
{
  vsse32_v_i32m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m1_m_vl31 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m2 (int32_t *base, ptrdiff_t bstride, vint32m2_t v0, size_t vl)
{
  vsse32_v_i32m2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m2_vl31 (int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m2_m (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0, size_t vl)
{
  vsse32_v_i32m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m2_m_vl31 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m4 (int32_t *base, ptrdiff_t bstride, vint32m4_t v0, size_t vl)
{
  vsse32_v_i32m4 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m4_vl31 (int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m4_m (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0, size_t vl)
{
  vsse32_v_i32m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m4_m_vl31 (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m8 (int32_t *base, ptrdiff_t bstride, vint32m8_t v0, size_t vl)
{
  vsse32_v_i32m8 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m8_vl31 (int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_i32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m8_m (vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t v0, size_t vl)
{
  vsse32_v_i32m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_i32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m8_m_vl31 (vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m1 (int64_t *base, ptrdiff_t bstride, vint64m1_t v0, size_t vl)
{
  vsse64_v_i64m1 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m1_vl31 (int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m1_m (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0, size_t vl)
{
  vsse64_v_i64m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m1_m_vl31 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m2 (int64_t *base, ptrdiff_t bstride, vint64m2_t v0, size_t vl)
{
  vsse64_v_i64m2 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m2_vl31 (int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m2_m (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0, size_t vl)
{
  vsse64_v_i64m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m2_m_vl31 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m4 (int64_t *base, ptrdiff_t bstride, vint64m4_t v0, size_t vl)
{
  vsse64_v_i64m4 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m4_vl31 (int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m4_m (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0, size_t vl)
{
  vsse64_v_i64m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m4_m_vl31 (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m8 (int64_t *base, ptrdiff_t bstride, vint64m8_t v0, size_t vl)
{
  vsse64_v_i64m8 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m8_vl31 (int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_i64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m8_m (vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t v0, size_t vl)
{
  vsse64_v_i64m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_i64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m8_m_vl31 (vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8 (uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, size_t vl)
{
  vsse8_v_u8mf8 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8_m (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0, size_t vl)
{
  vsse8_v_u8mf8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8_m_vl31 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4 (uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, size_t vl)
{
  vsse8_v_u8mf4 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4_m (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0, size_t vl)
{
  vsse8_v_u8mf4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4_m_vl31 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2 (uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, size_t vl)
{
  vsse8_v_u8mf2 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2_m (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0, size_t vl)
{
  vsse8_v_u8mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2_m_vl31 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m1 (uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, size_t vl)
{
  vsse8_v_u8m1 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m1_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m1_m (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0, size_t vl)
{
  vsse8_v_u8m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m1_m_vl31 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m2 (uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, size_t vl)
{
  vsse8_v_u8m2 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m2_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m2_m (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0, size_t vl)
{
  vsse8_v_u8m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m2_m_vl31 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m4 (uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0, size_t vl)
{
  vsse8_v_u8m4 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m4_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m4_m (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0, size_t vl)
{
  vsse8_v_u8m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m4_m_vl31 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m8 (uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0, size_t vl)
{
  vsse8_v_u8m8 (base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m8_vl31 (uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8 (base, bstride, v0, 31);
}

/*
** test_vsse8_v_u8m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m8_m (vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0, size_t vl)
{
  vsse8_v_u8m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse8_v_u8m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m8_m_vl31 (vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16mf4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4 (uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, size_t vl)
{
  vsse16_v_u16mf4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16mf4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16mf4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4_m (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0, size_t vl)
{
  vsse16_v_u16mf4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16mf4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4_m_vl31 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2 (uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, size_t vl)
{
  vsse16_v_u16mf2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2_m (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0, size_t vl)
{
  vsse16_v_u16mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2_m_vl31 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m1 (uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, size_t vl)
{
  vsse16_v_u16m1 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m1_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m1_m (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0, size_t vl)
{
  vsse16_v_u16m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m1_m_vl31 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m2 (uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, size_t vl)
{
  vsse16_v_u16m2 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m2_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m2_m (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0, size_t vl)
{
  vsse16_v_u16m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m2_m_vl31 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m4 (uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, size_t vl)
{
  vsse16_v_u16m4 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m4_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m4_m (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0, size_t vl)
{
  vsse16_v_u16m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m4_m_vl31 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m8 (uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0, size_t vl)
{
  vsse16_v_u16m8 (base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m8_vl31 (uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8 (base, bstride, v0, 31);
}

/*
** test_vsse16_v_u16m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m8_m (vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0, size_t vl)
{
  vsse16_v_u16m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse16_v_u16m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m8_m_vl31 (vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2 (uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, size_t vl)
{
  vsse32_v_u32mf2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2_m (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0, size_t vl)
{
  vsse32_v_u32mf2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2_m_vl31 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m1 (uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, size_t vl)
{
  vsse32_v_u32m1 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m1_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m1_m (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0, size_t vl)
{
  vsse32_v_u32m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m1_m_vl31 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m2 (uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, size_t vl)
{
  vsse32_v_u32m2 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m2_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m2_m (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0, size_t vl)
{
  vsse32_v_u32m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m2_m_vl31 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m4 (uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, size_t vl)
{
  vsse32_v_u32m4 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m4_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m4_m (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0, size_t vl)
{
  vsse32_v_u32m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m4_m_vl31 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m8 (uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0, size_t vl)
{
  vsse32_v_u32m8 (base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m8_vl31 (uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8 (base, bstride, v0, 31);
}

/*
** test_vsse32_v_u32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m8_m (vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0, size_t vl)
{
  vsse32_v_u32m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse32_v_u32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m8_m_vl31 (vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m1 (uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, size_t vl)
{
  vsse64_v_u64m1 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m1_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m1_m (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0, size_t vl)
{
  vsse64_v_u64m1_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m1_m_vl31 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m2 (uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, size_t vl)
{
  vsse64_v_u64m2 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m2_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m2_m (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0, size_t vl)
{
  vsse64_v_u64m2_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m2_m_vl31 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m4 (uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, size_t vl)
{
  vsse64_v_u64m4 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m4_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m4_m (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0, size_t vl)
{
  vsse64_v_u64m4_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m4_m_vl31 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m8 (uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0, size_t vl)
{
  vsse64_v_u64m8 (base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m8_vl31 (uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8 (base, bstride, v0, 31);
}

/*
** test_vsse64_v_u64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m8_m (vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0, size_t vl)
{
  vsse64_v_u64m8_m (mask, base, bstride, v0, vl);
}

/*
** test_vsse64_v_u64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m8_m_vl31 (vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8_m (mask, base, bstride, v0, 31);
}

/*
** test_vsse16_v_f16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0)
{
  vsse16_v_f16mf4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf4_m_vl32 (vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4_t v0)
{
  vsse16_v_f16mf4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0)
{
  vsse16_v_f16mf2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16mf2_m_vl32 (vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2_t v0)
{
  vsse16_v_f16mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m1_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0)
{
  vsse16_v_f16m1 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m1_m_vl32 (vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1_t v0)
{
  vsse16_v_f16m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m2_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0)
{
  vsse16_v_f16m2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m2_m_vl32 (vbool8_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m2_t v0)
{
  vsse16_v_f16m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m4_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0)
{
  vsse16_v_f16m4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m4_m_vl32 (vbool4_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m4_t v0)
{
  vsse16_v_f16m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_f16m8_vl32 (float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0)
{
  vsse16_v_f16m8 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_f16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_f16m8_m_vl32 (vbool2_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m8_t v0)
{
  vsse16_v_f16m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0)
{
  vsse32_v_f32mf2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32mf2_m_vl32 (vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2_t v0)
{
  vsse32_v_f32mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m1_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0)
{
  vsse32_v_f32m1 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m1_m_vl32 (vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1_t v0)
{
  vsse32_v_f32m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m2_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0)
{
  vsse32_v_f32m2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m2_m_vl32 (vbool16_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m2_t v0)
{
  vsse32_v_f32m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m4_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0)
{
  vsse32_v_f32m4 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m4_m_vl32 (vbool8_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m4_t v0)
{
  vsse32_v_f32m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_f32m8_vl32 (float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0)
{
  vsse32_v_f32m8 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_f32m8_m_vl32 (vbool4_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m8_t v0)
{
  vsse32_v_f32m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m1_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0)
{
  vsse64_v_f64m1 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m1_m_vl32 (vbool64_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m1_t v0)
{
  vsse64_v_f64m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m2_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0)
{
  vsse64_v_f64m2 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m2_m_vl32 (vbool32_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m2_t v0)
{
  vsse64_v_f64m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m4_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0)
{
  vsse64_v_f64m4 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m4_m_vl32 (vbool16_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m4_t v0)
{
  vsse64_v_f64m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_f64m8_vl32 (float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0)
{
  vsse64_v_f64m8 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_f64m8_m_vl32 (vbool8_t mask, float64_t *base, ptrdiff_t bstride, vfloat64m8_t v0)
{
  vsse64_v_f64m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf8_m_vl32 (vbool64_t mask, int8_t *base, ptrdiff_t bstride, vint8mf8_t v0)
{
  vsse8_v_i8mf8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf4_m_vl32 (vbool32_t mask, int8_t *base, ptrdiff_t bstride, vint8mf4_t v0)
{
  vsse8_v_i8mf4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2_vl32 (int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8mf2_m_vl32 (vbool16_t mask, int8_t *base, ptrdiff_t bstride, vint8mf2_t v0)
{
  vsse8_v_i8mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m1_vl32 (int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m1_m_vl32 (vbool8_t mask, int8_t *base, ptrdiff_t bstride, vint8m1_t v0)
{
  vsse8_v_i8m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m2_vl32 (int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m2_m_vl32 (vbool4_t mask, int8_t *base, ptrdiff_t bstride, vint8m2_t v0)
{
  vsse8_v_i8m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m4_vl32 (int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m4_m_vl32 (vbool2_t mask, int8_t *base, ptrdiff_t bstride, vint8m4_t v0)
{
  vsse8_v_i8m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_i8m8_vl32 (int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_i8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_i8m8_m_vl32 (vbool1_t mask, int8_t *base, ptrdiff_t bstride, vint8m8_t v0)
{
  vsse8_v_i8m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf4_m_vl32 (vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4_t v0)
{
  vsse16_v_i16mf4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2_vl32 (int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16mf2_m_vl32 (vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2_t v0)
{
  vsse16_v_i16mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m1_vl32 (int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m1_m_vl32 (vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1_t v0)
{
  vsse16_v_i16m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m2_vl32 (int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m2_m_vl32 (vbool8_t mask, int16_t *base, ptrdiff_t bstride, vint16m2_t v0)
{
  vsse16_v_i16m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m4_vl32 (int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m4_m_vl32 (vbool4_t mask, int16_t *base, ptrdiff_t bstride, vint16m4_t v0)
{
  vsse16_v_i16m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_i16m8_vl32 (int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_i16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_i16m8_m_vl32 (vbool2_t mask, int16_t *base, ptrdiff_t bstride, vint16m8_t v0)
{
  vsse16_v_i16m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2_vl32 (int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32mf2_m_vl32 (vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2_t v0)
{
  vsse32_v_i32mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m1_vl32 (int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m1_m_vl32 (vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1_t v0)
{
  vsse32_v_i32m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m2_vl32 (int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m2_m_vl32 (vbool16_t mask, int32_t *base, ptrdiff_t bstride, vint32m2_t v0)
{
  vsse32_v_i32m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m4_vl32 (int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m4_m_vl32 (vbool8_t mask, int32_t *base, ptrdiff_t bstride, vint32m4_t v0)
{
  vsse32_v_i32m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_i32m8_vl32 (int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_i32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_i32m8_m_vl32 (vbool4_t mask, int32_t *base, ptrdiff_t bstride, vint32m8_t v0)
{
  vsse32_v_i32m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m1_vl32 (int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m1_m_vl32 (vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1_t v0)
{
  vsse64_v_i64m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m2_vl32 (int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m2_m_vl32 (vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2_t v0)
{
  vsse64_v_i64m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m4_vl32 (int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m4_m_vl32 (vbool16_t mask, int64_t *base, ptrdiff_t bstride, vint64m4_t v0)
{
  vsse64_v_i64m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_i64m8_vl32 (int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_i64m8_m_vl32 (vbool8_t mask, int64_t *base, ptrdiff_t bstride, vint64m8_t v0)
{
  vsse64_v_i64m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf8_m_vl32 (vbool64_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf8_t v0)
{
  vsse8_v_u8mf8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf4_m_vl32 (vbool32_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf4_t v0)
{
  vsse8_v_u8mf4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8mf2_m_vl32 (vbool16_t mask, uint8_t *base, ptrdiff_t bstride, vuint8mf2_t v0)
{
  vsse8_v_u8mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m1_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m1_m_vl32 (vbool8_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m1_t v0)
{
  vsse8_v_u8m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m2_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m2_m_vl32 (vbool4_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m2_t v0)
{
  vsse8_v_u8m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m4_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m4_m_vl32 (vbool2_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m4_t v0)
{
  vsse8_v_u8m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse8_v_u8m8_vl32 (uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8 (base, bstride, v0, 32);
}

/*
** test_vsse8_v_u8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse8_v_u8m8_m_vl32 (vbool1_t mask, uint8_t *base, ptrdiff_t bstride, vuint8m8_t v0)
{
  vsse8_v_u8m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf4_m_vl32 (vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4_t v0)
{
  vsse16_v_u16mf4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16mf2_m_vl32 (vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2_t v0)
{
  vsse16_v_u16mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m1_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m1_m_vl32 (vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1_t v0)
{
  vsse16_v_u16m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m2_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m2_m_vl32 (vbool8_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m2_t v0)
{
  vsse16_v_u16m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m4_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m4_m_vl32 (vbool4_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m4_t v0)
{
  vsse16_v_u16m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse16_v_u16m8_vl32 (uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8 (base, bstride, v0, 32);
}

/*
** test_vsse16_v_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse16_v_u16m8_m_vl32 (vbool2_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m8_t v0)
{
  vsse16_v_u16m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32mf2_m_vl32 (vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2_t v0)
{
  vsse32_v_u32mf2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m1_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m1_m_vl32 (vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1_t v0)
{
  vsse32_v_u32m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m2_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m2_m_vl32 (vbool16_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m2_t v0)
{
  vsse32_v_u32m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m4_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m4_m_vl32 (vbool8_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m4_t v0)
{
  vsse32_v_u32m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse32_v_u32m8_vl32 (uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8 (base, bstride, v0, 32);
}

/*
** test_vsse32_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse32_v_u32m8_m_vl32 (vbool4_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m8_t v0)
{
  vsse32_v_u32m8_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m1_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m1_m_vl32 (vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1_t v0)
{
  vsse64_v_u64m1_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m2_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m2_m_vl32 (vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2_t v0)
{
  vsse64_v_u64m2_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m4_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m4_m_vl32 (vbool16_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m4_t v0)
{
  vsse64_v_u64m4_m (mask, base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
void
test_vsse64_v_u64m8_vl32 (uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8 (base, bstride, v0, 32);
}

/*
** test_vsse64_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vsse64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsse64_v_u64m8_m_vl32 (vbool8_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m8_t v0)
{
  vsse64_v_u64m8_m (mask, base, bstride, v0, 32);
}

